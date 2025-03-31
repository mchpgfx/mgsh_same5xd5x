#include "gfx/legato/generated/screen/le_gen_screen_Ready.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Ready_Screen2;
leLabelWidget* Ready_lblLowWater;
leImageWidget* Ready_imgKnob;
leLabelWidget* Ready_lblFillTank;
leImageWidget* Ready_imgBigCircle;
leImageWidget* Ready_imgSettings;
leImageWidget* Ready_imgBrew;
leImageWidget* Ready_imgMchp;
leImageWidget* Ready_imgLowWater;
leLabelWidget* Ready_lblFillTank_0;
leButtonWidget* Ready_btnBrew;
leButtonWidget* Ready_btnSettings;
leButtonWidget* Ready_btnContinue;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Ready(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Ready(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, LE_DEFAULT_SCREEN_WIDTH, LE_DEFAULT_SCREEN_HEIGHT);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    Ready_Screen2 = leWidget_New();
    Ready_Screen2->fn->setPosition(Ready_Screen2, 0, 0);
    Ready_Screen2->fn->setSize(Ready_Screen2, 320, 480);
    Ready_Screen2->fn->setScheme(Ready_Screen2, &BaseScheme);
    root0->fn->addChild(root0, (leWidget*)Ready_Screen2);

    Ready_lblLowWater = leLabelWidget_New();
    Ready_lblLowWater->fn->setPosition(Ready_lblLowWater, 12, 35);
    Ready_lblLowWater->fn->setSize(Ready_lblLowWater, 147, 41);
    Ready_lblLowWater->fn->setScheme(Ready_lblLowWater, &BaseScheme);
    Ready_lblLowWater->fn->setBackgroundType(Ready_lblLowWater, LE_WIDGET_BACKGROUND_NONE);
    Ready_lblLowWater->fn->setHAlignment(Ready_lblLowWater, LE_HALIGN_CENTER);
    Ready_lblLowWater->fn->setString(Ready_lblLowWater, (leString*)&string_strCoffeeReady);
    root0->fn->addChild(root0, (leWidget*)Ready_lblLowWater);

    Ready_imgKnob = leImageWidget_New();
    Ready_imgKnob->fn->setPosition(Ready_imgKnob, 30, 176);
    Ready_imgKnob->fn->setSize(Ready_imgKnob, 30, 30);
    Ready_imgKnob->fn->setBackgroundType(Ready_imgKnob, LE_WIDGET_BACKGROUND_NONE);
    Ready_imgKnob->fn->setBorderType(Ready_imgKnob, LE_WIDGET_BORDER_NONE);
    Ready_imgKnob->fn->setImage(Ready_imgKnob, (leImage*)&imgKnob);
    root0->fn->addChild(root0, (leWidget*)Ready_imgKnob);

    Ready_lblFillTank = leLabelWidget_New();
    Ready_lblFillTank->fn->setPosition(Ready_lblFillTank, 93, 300);
    Ready_lblFillTank->fn->setSize(Ready_lblFillTank, 139, 22);
    Ready_lblFillTank->fn->setScheme(Ready_lblFillTank, &BaseScheme);
    Ready_lblFillTank->fn->setBackgroundType(Ready_lblFillTank, LE_WIDGET_BACKGROUND_NONE);
    Ready_lblFillTank->fn->setHAlignment(Ready_lblFillTank, LE_HALIGN_CENTER);
    Ready_lblFillTank->fn->setString(Ready_lblFillTank, (leString*)&string_strFillTank);
    root0->fn->addChild(root0, (leWidget*)Ready_lblFillTank);

    Ready_imgBigCircle = leImageWidget_New();
    Ready_imgBigCircle->fn->setPosition(Ready_imgBigCircle, 30, 110);
    Ready_imgBigCircle->fn->setSize(Ready_imgBigCircle, 260, 260);
    Ready_imgBigCircle->fn->setBackgroundType(Ready_imgBigCircle, LE_WIDGET_BACKGROUND_NONE);
    Ready_imgBigCircle->fn->setBorderType(Ready_imgBigCircle, LE_WIDGET_BORDER_NONE);
    Ready_imgBigCircle->fn->setImage(Ready_imgBigCircle, (leImage*)&imgBigCircle);
    root0->fn->addChild(root0, (leWidget*)Ready_imgBigCircle);

    Ready_imgSettings = leImageWidget_New();
    Ready_imgSettings->fn->setPosition(Ready_imgSettings, 259, 423);
    Ready_imgSettings->fn->setSize(Ready_imgSettings, 33, 33);
    Ready_imgSettings->fn->setBackgroundType(Ready_imgSettings, LE_WIDGET_BACKGROUND_NONE);
    Ready_imgSettings->fn->setBorderType(Ready_imgSettings, LE_WIDGET_BORDER_NONE);
    Ready_imgSettings->fn->setImage(Ready_imgSettings, (leImage*)&imgSettings);
    root0->fn->addChild(root0, (leWidget*)Ready_imgSettings);

    Ready_imgBrew = leImageWidget_New();
    Ready_imgBrew->fn->setPosition(Ready_imgBrew, 199, 419);
    Ready_imgBrew->fn->setSize(Ready_imgBrew, 42, 42);
    Ready_imgBrew->fn->setBackgroundType(Ready_imgBrew, LE_WIDGET_BACKGROUND_NONE);
    Ready_imgBrew->fn->setBorderType(Ready_imgBrew, LE_WIDGET_BORDER_NONE);
    Ready_imgBrew->fn->setImage(Ready_imgBrew, (leImage*)&imgBrew);
    root0->fn->addChild(root0, (leWidget*)Ready_imgBrew);

    Ready_imgMchp = leImageWidget_New();
    Ready_imgMchp->fn->setPosition(Ready_imgMchp, 204, 29);
    Ready_imgMchp->fn->setSize(Ready_imgMchp, 80, 42);
    Ready_imgMchp->fn->setBackgroundType(Ready_imgMchp, LE_WIDGET_BACKGROUND_NONE);
    Ready_imgMchp->fn->setBorderType(Ready_imgMchp, LE_WIDGET_BORDER_NONE);
    Ready_imgMchp->fn->setImage(Ready_imgMchp, (leImage*)&imgMchpLogo);
    root0->fn->addChild(root0, (leWidget*)Ready_imgMchp);

    Ready_imgLowWater = leImageWidget_New();
    Ready_imgLowWater->fn->setPosition(Ready_imgLowWater, 82, 170);
    Ready_imgLowWater->fn->setSize(Ready_imgLowWater, 151, 134);
    Ready_imgLowWater->fn->setBackgroundType(Ready_imgLowWater, LE_WIDGET_BACKGROUND_NONE);
    Ready_imgLowWater->fn->setBorderType(Ready_imgLowWater, LE_WIDGET_BORDER_NONE);
    Ready_imgLowWater->fn->setImage(Ready_imgLowWater, (leImage*)&BigCoffee);
    root0->fn->addChild(root0, (leWidget*)Ready_imgLowWater);

    Ready_lblFillTank_0 = leLabelWidget_New();
    Ready_lblFillTank_0->fn->setPosition(Ready_lblFillTank_0, 90, 310);
    Ready_lblFillTank_0->fn->setSize(Ready_lblFillTank_0, 139, 22);
    Ready_lblFillTank_0->fn->setScheme(Ready_lblFillTank_0, &BaseScheme);
    Ready_lblFillTank_0->fn->setBackgroundType(Ready_lblFillTank_0, LE_WIDGET_BACKGROUND_NONE);
    Ready_lblFillTank_0->fn->setHAlignment(Ready_lblFillTank_0, LE_HALIGN_CENTER);
    Ready_lblFillTank_0->fn->setString(Ready_lblFillTank_0, (leString*)&string_strClose);
    root0->fn->addChild(root0, (leWidget*)Ready_lblFillTank_0);

    Ready_btnBrew = leButtonWidget_New();
    Ready_btnBrew->fn->setPosition(Ready_btnBrew, 178, 405);
    Ready_btnBrew->fn->setSize(Ready_btnBrew, 70, 70);
    Ready_btnBrew->fn->setBackgroundType(Ready_btnBrew, LE_WIDGET_BACKGROUND_NONE);
    Ready_btnBrew->fn->setBorderType(Ready_btnBrew, LE_WIDGET_BORDER_NONE);
    Ready_btnBrew->fn->setPressed(Ready_btnBrew, LE_TRUE);
    Ready_btnBrew->fn->setPressedOffset(Ready_btnBrew, 0);
    Ready_btnBrew->fn->setPressedEventCallback(Ready_btnBrew, event_Ready_btnBrew_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Ready_btnBrew);

    Ready_btnSettings = leButtonWidget_New();
    Ready_btnSettings->fn->setPosition(Ready_btnSettings, 247, 404);
    Ready_btnSettings->fn->setSize(Ready_btnSettings, 70, 70);
    Ready_btnSettings->fn->setBackgroundType(Ready_btnSettings, LE_WIDGET_BACKGROUND_NONE);
    Ready_btnSettings->fn->setBorderType(Ready_btnSettings, LE_WIDGET_BORDER_NONE);
    Ready_btnSettings->fn->setPressed(Ready_btnSettings, LE_TRUE);
    Ready_btnSettings->fn->setPressedOffset(Ready_btnSettings, 0);
    Ready_btnSettings->fn->setPressedEventCallback(Ready_btnSettings, event_Ready_btnSettings_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Ready_btnSettings);

    Ready_btnContinue = leButtonWidget_New();
    Ready_btnContinue->fn->setPosition(Ready_btnContinue, 80, 170);
    Ready_btnContinue->fn->setSize(Ready_btnContinue, 166, 166);
    Ready_btnContinue->fn->setBackgroundType(Ready_btnContinue, LE_WIDGET_BACKGROUND_NONE);
    Ready_btnContinue->fn->setBorderType(Ready_btnContinue, LE_WIDGET_BORDER_NONE);
    Ready_btnContinue->fn->setPressed(Ready_btnContinue, LE_TRUE);
    Ready_btnContinue->fn->setPressedOffset(Ready_btnContinue, 0);
    Ready_btnContinue->fn->setPressedEventCallback(Ready_btnContinue, event_Ready_btnContinue_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Ready_btnContinue);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Ready(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);
}

void screenHide_Ready(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Ready_Screen2 = NULL;
    Ready_lblLowWater = NULL;
    Ready_imgKnob = NULL;
    Ready_lblFillTank = NULL;
    Ready_imgBigCircle = NULL;
    Ready_imgSettings = NULL;
    Ready_imgBrew = NULL;
    Ready_imgMchp = NULL;
    Ready_imgLowWater = NULL;
    Ready_lblFillTank_0 = NULL;
    Ready_btnBrew = NULL;
    Ready_btnSettings = NULL;
    Ready_btnContinue = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Ready(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Ready(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        default:
        {
            return NULL;
        }
    }
}

