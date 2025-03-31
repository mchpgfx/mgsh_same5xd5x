#include <stdbool.h>

#include "gfx/legato/generated/le_gen_init.h"

typedef enum
{
    ITEM_LATTE,
    ITEM_ESPRESSO,
    ITEM_CAPUCCINO,
    ITEM_AMERICANO,
    ITEM_MAX
} ITEM_MENU_t;

typedef struct
{
    leImageWidget ** imgWidget;
    leImage * imgDefault;
    leImage * imgSelected;
} MENU_ITEM_t;

static MENU_ITEM_t menuItems[ITEM_MAX] = 
{
    {&Main_imgLatte, &imgLatte, &imgLatteSelect},
    {&Main_imgEspresso, &imgEspresso, &imgEspressoSelect},
    {&Main_imgCapuccino, &imgCapuccino, &imgCapuccSelect},
    {&Main_imgAmericano, &imgAmericano, &imgAmerSelect},
};

extern bool appIsWaterLow(void);

static void SelectItem(ITEM_MENU_t item)
{
    uint32_t i;
    
    for (i = 0; i < ITEM_MAX; i++)
    {
        if (i == item)
        {
            (*(menuItems[i].imgWidget))->fn->setImage(*(menuItems[i].imgWidget), 
                                                        menuItems[i].imgSelected);
        }
        else
        {
            (*(menuItems[i].imgWidget))->fn->setImage(*(menuItems[i].imgWidget),
                                                        menuItems[i].imgDefault);            
        }
    }
}

void event_Main_btnLatte_OnPressed(leButtonWidget* btn)
{
    SelectItem(ITEM_LATTE);
}

void event_Main_btnEspresso_OnPressed(leButtonWidget* btn)
{
    SelectItem(ITEM_ESPRESSO);
}

void event_Main_btnCapuccino_OnPressed(leButtonWidget* btn)
{
    SelectItem(ITEM_CAPUCCINO);
}

void event_Main_btnAmericano_OnPressed(leButtonWidget* btn)
{
    SelectItem(ITEM_AMERICANO);
}

void event_Main_btnStart_OnPressed(leButtonWidget* btn)
{
    if (appIsWaterLow() == false)
    {
        legato_showScreen(screenID_Brewing);
    }
    else
    {
        legato_showScreen(screenID_LowWater);
    }
}

void event_Main_btnBrew_OnPressed(leButtonWidget* btn)
{
    legato_showScreen(screenID_Brewing);
}
void event_Main_btnSettings_OnPressed(leButtonWidget* btn)
{
    
}

// Screen Events:
void Main_OnShow(void)
{
    SelectItem(ITEM_ESPRESSO);
}

void Main_OnHide(void)
{
    
}

void Main_OnUpdate(void)
{
    
}
