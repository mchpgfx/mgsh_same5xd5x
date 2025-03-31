#include "definitions.h"
#include "app.h"

#include "gfx/legato/generated/le_gen_init.h"

#define REFILL_ANIM_PERIOD_MS 300

#if (REFILL_ANIM_PERIOD_MS >= TIMER_PERIOD_MS)
#define REFILL_ANIM_PERIOD_TICKS (REFILL_ANIM_PERIOD_MS/TIMER_PERIOD_MS)
#else
#error "Invalid refill period."
#endif

void event_Refill_btnBrew_OnPressed(leButtonWidget* btn)
{
    if (appIsRefillPumpOn() == true)
    {
        appRefillPumpOn(false);
    }
    else
    {
        appRefillPumpOn(true);
    }
}

void event_Refill_btnSettings_OnPressed(leButtonWidget* btn)
{
#if defined(MGS_SIM) || defined(APP_NO_PUMP)
    extern bool isWaterLow;
    extern bool isWaterFull;
    
    isWaterLow = false;
    isWaterFull = true;
#endif    
}

void event_Refill_btnCancel_OnPressed(leButtonWidget* btn)
{
    legato_showScreen(screenID_Main);
}


void Refill_OnShow(void)
{
    appRefillPumpOn(true);
}

void Refill_OnHide(void)
{
    appRefillPumpOn(false);
}

void Refill_OnUpdate(void)
{
    static uint32_t lastTick = 0;
    
    if (lastTick != timerTicks)
    {
        if (timerTicks % REFILL_ANIM_PERIOD_TICKS == 0)
        {
            Refill_RefillAnimImage->fn->showNextImage(Refill_RefillAnimImage);
        }
        
        if (appIsWaterFull() == true)
        {
            legato_showScreen(screenID_Resume);
        }
        
        lastTick = timerTicks;
    }       
}
