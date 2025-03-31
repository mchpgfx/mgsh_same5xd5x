#include "gfx/legato/generated/screen/le_gen_screen_Brewing.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Brewing_Screen4;
leImageWidget* Brewing_imgMchpLogo;
leLabelWidget* Brewing_lblReady;
leImageWidget* Brewing_imgMchp;
leImageWidget* Brewing_imgBigCircle;
leImageWidget* Brewing_imgKnob;
leImageWidget* Brewing_imgCancel;
leLabelWidget* Brewing_lblResume;
leImageWidget* Brewing_imgSettings;
leImageWidget* Brewing_imgBrew;
leLabelWidget* Brewing_lblMins;
leLabelWidget* Brewing_lblSecs;
leLabelWidget* Brewing_lblMinsValue;
leLabelWidget* Brewing_lblSecsValue;
leButtonWidget* Brewing_btnBrew;
leButtonWidget* Brewing_btnSettings;
leButtonWidget* Brewing_btnCancel;
leButtonWidget* Brewing_btnContinue;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Brewing(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Brewing(void)
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

    Brewing_Screen4 = leWidget_New();
    Brewing_Screen4->fn->setPosition(Brewing_Screen4, 0, 0);
    Brewing_Screen4->fn->setSize(Brewing_Screen4, 320, 480);
    Brewing_Screen4->fn->setScheme(Brewing_Screen4, &BaseScheme);
    root0->fn->addChild(root0, (leWidget*)Brewing_Screen4);

    Brewing_imgMchpLogo = leImageWidget_New();
    Brewing_imgMchpLogo->fn->setPosition(Brewing_imgMchpLogo, 204, 29);
    Brewing_imgMchpLogo->fn->setSize(Brewing_imgMchpLogo, 80, 42);
    Brewing_imgMchpLogo->fn->setBackgroundType(Brewing_imgMchpLogo, LE_WIDGET_BACKGROUND_NONE);
    Brewing_imgMchpLogo->fn->setBorderType(Brewing_imgMchpLogo, LE_WIDGET_BORDER_NONE);
    root0->fn->addChild(root0, (leWidget*)Brewing_imgMchpLogo);

    Brewing_lblReady = leLabelWidget_New();
    Brewing_lblReady->fn->setPosition(Brewing_lblReady, 12, 35);
    Brewing_lblReady->fn->setSize(Brewing_lblReady, 147, 41);
    Brewing_lblReady->fn->setScheme(Brewing_lblReady, &BaseScheme);
    Brewing_lblReady->fn->setBackgroundType(Brewing_lblReady, LE_WIDGET_BACKGROUND_NONE);
    Brewing_lblReady->fn->setHAlignment(Brewing_lblReady, LE_HALIGN_CENTER);
    Brewing_lblReady->fn->setString(Brewing_lblReady, (leString*)&string_strPreparing);
    root0->fn->addChild(root0, (leWidget*)Brewing_lblReady);

    Brewing_imgMchp = leImageWidget_New();
    Brewing_imgMchp->fn->setPosition(Brewing_imgMchp, 204, 29);
    Brewing_imgMchp->fn->setSize(Brewing_imgMchp, 80, 42);
    Brewing_imgMchp->fn->setBackgroundType(Brewing_imgMchp, LE_WIDGET_BACKGROUND_NONE);
    Brewing_imgMchp->fn->setBorderType(Brewing_imgMchp, LE_WIDGET_BORDER_NONE);
    Brewing_imgMchp->fn->setImage(Brewing_imgMchp, (leImage*)&imgMchpLogo);
    root0->fn->addChild(root0, (leWidget*)Brewing_imgMchp);

    Brewing_imgBigCircle = leImageWidget_New();
    Brewing_imgBigCircle->fn->setPosition(Brewing_imgBigCircle, 30, 110);
    Brewing_imgBigCircle->fn->setSize(Brewing_imgBigCircle, 260, 260);
    Brewing_imgBigCircle->fn->setBackgroundType(Brewing_imgBigCircle, LE_WIDGET_BACKGROUND_NONE);
    Brewing_imgBigCircle->fn->setBorderType(Brewing_imgBigCircle, LE_WIDGET_BORDER_NONE);
    Brewing_imgBigCircle->fn->setImage(Brewing_imgBigCircle, (leImage*)&imgBigCircle);
    root0->fn->addChild(root0, (leWidget*)Brewing_imgBigCircle);

    Brewing_imgKnob = leImageWidget_New();
    Brewing_imgKnob->fn->setPosition(Brewing_imgKnob, 30, 176);
    Brewing_imgKnob->fn->setSize(Brewing_imgKnob, 30, 30);
    Brewing_imgKnob->fn->setBackgroundType(Brewing_imgKnob, LE_WIDGET_BACKGROUND_NONE);
    Brewing_imgKnob->fn->setBorderType(Brewing_imgKnob, LE_WIDGET_BORDER_NONE);
    Brewing_imgKnob->fn->setImage(Brewing_imgKnob, (leImage*)&imgKnob);
    root0->fn->addChild(root0, (leWidget*)Brewing_imgKnob);

    Brewing_imgCancel = leImageWidget_New();
    Brewing_imgCancel->fn->setPosition(Brewing_imgCancel, 24, 423);
    Brewing_imgCancel->fn->setSize(Brewing_imgCancel, 35, 36);
    Brewing_imgCancel->fn->setBackgroundType(Brewing_imgCancel, LE_WIDGET_BACKGROUND_NONE);
    Brewing_imgCancel->fn->setBorderType(Brewing_imgCancel, LE_WIDGET_BORDER_NONE);
    Brewing_imgCancel->fn->setImage(Brewing_imgCancel, (leImage*)&imgCancel);
    root0->fn->addChild(root0, (leWidget*)Brewing_imgCancel);

    Brewing_lblResume = leLabelWidget_New();
    Brewing_lblResume->fn->setPosition(Brewing_lblResume, 115, 300);
    Brewing_lblResume->fn->setSize(Brewing_lblResume, 90, 22);
    Brewing_lblResume->fn->setScheme(Brewing_lblResume, &BaseScheme);
    Brewing_lblResume->fn->setBackgroundType(Brewing_lblResume, LE_WIDGET_BACKGROUND_NONE);
    Brewing_lblResume->fn->setHAlignment(Brewing_lblResume, LE_HALIGN_CENTER);
    Brewing_lblResume->fn->setString(Brewing_lblResume, (leString*)&string_strRemaining);
    root0->fn->addChild(root0, (leWidget*)Brewing_lblResume);

    Brewing_imgSettings = leImageWidget_New();
    Brewing_imgSettings->fn->setPosition(Brewing_imgSettings, 259, 423);
    Brewing_imgSettings->fn->setSize(Brewing_imgSettings, 33, 33);
    Brewing_imgSettings->fn->setBackgroundType(Brewing_imgSettings, LE_WIDGET_BACKGROUND_NONE);
    Brewing_imgSettings->fn->setBorderType(Brewing_imgSettings, LE_WIDGET_BORDER_NONE);
    Brewing_imgSettings->fn->setImage(Brewing_imgSettings, (leImage*)&imgSettings);
    root0->fn->addChild(root0, (leWidget*)Brewing_imgSettings);

    Brewing_imgBrew = leImageWidget_New();
    Brewing_imgBrew->fn->setPosition(Brewing_imgBrew, 199, 419);
    Brewing_imgBrew->fn->setSize(Brewing_imgBrew, 42, 42);
    Brewing_imgBrew->fn->setBackgroundType(Brewing_imgBrew, LE_WIDGET_BACKGROUND_NONE);
    Brewing_imgBrew->fn->setBorderType(Brewing_imgBrew, LE_WIDGET_BORDER_NONE);
    Brewing_imgBrew->fn->setImage(Brewing_imgBrew, (leImage*)&imgBrew);
    root0->fn->addChild(root0, (leWidget*)Brewing_imgBrew);

    Brewing_lblMins = leLabelWidget_New();
    Brewing_lblMins->fn->setPosition(Brewing_lblMins, 180, 200);
    Brewing_lblMins->fn->setSize(Brewing_lblMins, 60, 25);
    Brewing_lblMins->fn->setScheme(Brewing_lblMins, &BaseScheme);
    Brewing_lblMins->fn->setBackgroundType(Brewing_lblMins, LE_WIDGET_BACKGROUND_NONE);
    Brewing_lblMins->fn->setString(Brewing_lblMins, (leString*)&string_strMins);
    root0->fn->addChild(root0, (leWidget*)Brewing_lblMins);

    Brewing_lblSecs = leLabelWidget_New();
    Brewing_lblSecs->fn->setPosition(Brewing_lblSecs, 180, 260);
    Brewing_lblSecs->fn->setSize(Brewing_lblSecs, 60, 25);
    Brewing_lblSecs->fn->setScheme(Brewing_lblSecs, &BaseScheme);
    Brewing_lblSecs->fn->setBackgroundType(Brewing_lblSecs, LE_WIDGET_BACKGROUND_NONE);
    Brewing_lblSecs->fn->setString(Brewing_lblSecs, (leString*)&string_strSecs);
    root0->fn->addChild(root0, (leWidget*)Brewing_lblSecs);

    Brewing_lblMinsValue = leLabelWidget_New();
    Brewing_lblMinsValue->fn->setPosition(Brewing_lblMinsValue, 78, 149);
    Brewing_lblMinsValue->fn->setSize(Brewing_lblMinsValue, 100, 90);
    Brewing_lblMinsValue->fn->setScheme(Brewing_lblMinsValue, &BaseScheme);
    Brewing_lblMinsValue->fn->setBackgroundType(Brewing_lblMinsValue, LE_WIDGET_BACKGROUND_NONE);
    Brewing_lblMinsValue->fn->setHAlignment(Brewing_lblMinsValue, LE_HALIGN_RIGHT);
    Brewing_lblMinsValue->fn->setMargins(Brewing_lblMinsValue, 4, 0, 4, 4);
    Brewing_lblMinsValue->fn->setString(Brewing_lblMinsValue, (leString*)&string_strMinValue);
    root0->fn->addChild(root0, (leWidget*)Brewing_lblMinsValue);

    Brewing_lblSecsValue = leLabelWidget_New();
    Brewing_lblSecsValue->fn->setPosition(Brewing_lblSecsValue, 102, 243);
    Brewing_lblSecsValue->fn->setSize(Brewing_lblSecsValue, 70, 50);
    Brewing_lblSecsValue->fn->setScheme(Brewing_lblSecsValue, &BaseScheme);
    Brewing_lblSecsValue->fn->setBackgroundType(Brewing_lblSecsValue, LE_WIDGET_BACKGROUND_NONE);
    Brewing_lblSecsValue->fn->setHAlignment(Brewing_lblSecsValue, LE_HALIGN_RIGHT);
    Brewing_lblSecsValue->fn->setString(Brewing_lblSecsValue, (leString*)&string_strSecValue);
    root0->fn->addChild(root0, (leWidget*)Brewing_lblSecsValue);

    Brewing_btnBrew = leButtonWidget_New();
    Brewing_btnBrew->fn->setPosition(Brewing_btnBrew, 178, 405);
    Brewing_btnBrew->fn->setSize(Brewing_btnBrew, 70, 70);
    Brewing_btnBrew->fn->setBackgroundType(Brewing_btnBrew, LE_WIDGET_BACKGROUND_NONE);
    Brewing_btnBrew->fn->setBorderType(Brewing_btnBrew, LE_WIDGET_BORDER_NONE);
    Brewing_btnBrew->fn->setPressed(Brewing_btnBrew, LE_TRUE);
    Brewing_btnBrew->fn->setPressedOffset(Brewing_btnBrew, 0);
    Brewing_btnBrew->fn->setPressedEventCallback(Brewing_btnBrew, event_Brewing_btnBrew_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Brewing_btnBrew);

    Brewing_btnSettings = leButtonWidget_New();
    Brewing_btnSettings->fn->setPosition(Brewing_btnSettings, 247, 404);
    Brewing_btnSettings->fn->setSize(Brewing_btnSettings, 70, 70);
    Brewing_btnSettings->fn->setBackgroundType(Brewing_btnSettings, LE_WIDGET_BACKGROUND_NONE);
    Brewing_btnSettings->fn->setBorderType(Brewing_btnSettings, LE_WIDGET_BORDER_NONE);
    Brewing_btnSettings->fn->setPressed(Brewing_btnSettings, LE_TRUE);
    Brewing_btnSettings->fn->setPressedOffset(Brewing_btnSettings, 0);
    Brewing_btnSettings->fn->setPressedEventCallback(Brewing_btnSettings, event_Brewing_btnSettings_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Brewing_btnSettings);

    Brewing_btnCancel = leButtonWidget_New();
    Brewing_btnCancel->fn->setPosition(Brewing_btnCancel, 5, 405);
    Brewing_btnCancel->fn->setSize(Brewing_btnCancel, 70, 70);
    Brewing_btnCancel->fn->setBackgroundType(Brewing_btnCancel, LE_WIDGET_BACKGROUND_NONE);
    Brewing_btnCancel->fn->setBorderType(Brewing_btnCancel, LE_WIDGET_BORDER_NONE);
    Brewing_btnCancel->fn->setPressed(Brewing_btnCancel, LE_TRUE);
    Brewing_btnCancel->fn->setPressedOffset(Brewing_btnCancel, 0);
    Brewing_btnCancel->fn->setPressedEventCallback(Brewing_btnCancel, event_Brewing_btnCancel_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Brewing_btnCancel);

    Brewing_btnContinue = leButtonWidget_New();
    Brewing_btnContinue->fn->setPosition(Brewing_btnContinue, 80, 170);
    Brewing_btnContinue->fn->setSize(Brewing_btnContinue, 166, 166);
    Brewing_btnContinue->fn->setBackgroundType(Brewing_btnContinue, LE_WIDGET_BACKGROUND_NONE);
    Brewing_btnContinue->fn->setBorderType(Brewing_btnContinue, LE_WIDGET_BORDER_NONE);
    Brewing_btnContinue->fn->setPressed(Brewing_btnContinue, LE_TRUE);
    Brewing_btnContinue->fn->setPressedOffset(Brewing_btnContinue, 0);
    Brewing_btnContinue->fn->setPressedEventCallback(Brewing_btnContinue, event_Brewing_btnContinue_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Brewing_btnContinue);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    Brewing_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Brewing(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    Brewing_OnUpdate(); // raise event
}

void screenHide_Brewing(void)
{
    Brewing_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Brewing_Screen4 = NULL;
    Brewing_imgMchpLogo = NULL;
    Brewing_lblReady = NULL;
    Brewing_imgMchp = NULL;
    Brewing_imgBigCircle = NULL;
    Brewing_imgKnob = NULL;
    Brewing_imgCancel = NULL;
    Brewing_lblResume = NULL;
    Brewing_imgSettings = NULL;
    Brewing_imgBrew = NULL;
    Brewing_lblMins = NULL;
    Brewing_lblSecs = NULL;
    Brewing_lblMinsValue = NULL;
    Brewing_lblSecsValue = NULL;
    Brewing_btnBrew = NULL;
    Brewing_btnSettings = NULL;
    Brewing_btnCancel = NULL;
    Brewing_btnContinue = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Brewing(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Brewing(uint32_t lyrIdx)
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

