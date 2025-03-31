#include <stdio.h>

#include "definitions.h"

#include "gfx/legato/generated/le_gen_init.h"

#define DEFAULT_TIME_REMAINING_MS  8000

#if (DEFAULT_TIME_REMAINING_MS > TIMER_PERIOD_MS)
#define TIMER_SEC_TICK_COUNT ( DEFAULT_TIME_REMAINING_MS / TIMER_PERIOD_MS )
#else
#error "Invalid brewing period."
#endif

#define APP_FIXED_STR_SIZE 4

/* Fixed String Variable Declarations */
static leFixedString minFixedStrStatic;
static leChar minFixedStrStatBuff[APP_FIXED_STR_SIZE] = {0};

static leFixedString secFixedStrStatic;  
static leChar secFixedStrStatBuff[APP_FIXED_STR_SIZE] = {0};

static uint32_t timerTickRemaining;
static uint32_t mins, secs;

void APP_BrewingUpdateTime(uint32_t mins, uint32_t secs)
{
    char cStrBuff[APP_FIXED_STR_SIZE];

    /* Update the mins */
    snprintf(cStrBuff, APP_FIXED_STR_SIZE, "%lu", mins);
    minFixedStrStatic.fn->setFromCStr(&minFixedStrStatic, cStrBuff);
    Brewing_lblMinsValue->fn->setString(Brewing_lblMinsValue, (leString *) &minFixedStrStatic); 

    /* Update the secs */
    snprintf(cStrBuff, APP_FIXED_STR_SIZE, "%lu", secs);
    secFixedStrStatic.fn->setFromCStr(&secFixedStrStatic, cStrBuff);
    Brewing_lblSecsValue->fn->setString(Brewing_lblSecsValue, (leString *) &secFixedStrStatic); 
}

void event_Brewing_btnBrew_OnPressed(leButtonWidget* btn)
{
    
}

void event_Brewing_btnSettings_OnPressed(leButtonWidget* btn)
{
#if defined(MGS_SIM) || defined(APP_NO_PUMP)
    extern bool isWaterLow;
    extern bool isWaterFull;
    
    isWaterLow = true;
    isWaterFull = false;
#endif            
}

void event_Brewing_btnCancel_OnPressed(leButtonWidget* btn)
{
    legato_showScreen(screenID_Main);
}

void event_Brewing_btnContinue_OnPressed(leButtonWidget* btn)
{

}

void Brewing_OnShow(void)
{
    timerTickRemaining = TIMER_SEC_TICK_COUNT;

    leFixedString_Constructor(&minFixedStrStatic, minFixedStrStatBuff, APP_FIXED_STR_SIZE);
    minFixedStrStatic.fn->setFont(&minFixedStrStatic, (leFont*) &inter80);
    
    leFixedString_Constructor(&secFixedStrStatic, secFixedStrStatBuff, APP_FIXED_STR_SIZE);
    minFixedStrStatic.fn->setFont(&secFixedStrStatic, (leFont*) &inter35);
    
    appBrewPumpOn(true);
}

void Brewing_OnHide(void)
{
    appBrewPumpOn(false);
}

void Brewing_OnUpdate(void)
{
    static uint32_t lastTick = 0;
    
    if (lastTick != timerTicks)
    {
        /* Check if water is low */
        if (appIsWaterLow() == true)
        {
            legato_showScreen(screenID_LowWater);
        }
        else
        {
            if (timerTickRemaining > 0)
            {
                timerTickRemaining--;
                        
                mins = timerTickRemaining / 60;
                secs = timerTickRemaining % 60;

                APP_BrewingUpdateTime(mins, secs);
            }
            else
            {
                timerTickRemaining = 0;
                
                APP_BrewingUpdateTime(0, 0);
                legato_showScreen(screenID_Ready);
            }
        }
        
        lastTick = timerTicks;
    }
}
