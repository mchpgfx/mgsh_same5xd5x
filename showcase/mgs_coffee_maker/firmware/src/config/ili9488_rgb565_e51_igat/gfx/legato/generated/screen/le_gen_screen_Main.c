#include "gfx/legato/generated/screen/le_gen_screen_Main.h"

// screen member widget declarations
static leWidget* root0;

leWidget* Main_Screen1;
leImageWidget* Main_imgEspresso;
leLabelWidget* Main_Espresso;
leImageWidget* Main_imgBrew;
leImageWidget* Main_imgSettings;
leImageWidget* Main_imgStart;
leLabelWidget* Main_Start;
leImageWidget* Main_imgAmericano;
leLabelWidget* Main_Americano;
leImageWidget* Main_imgCapuccino;
leLabelWidget* Main_Capuccino;
leImageWidget* Main_imgBar;
leImageWidget* Main_imgMchpLogo;
leImageWidget* Main_imgLatte;
leLabelWidget* Main_Latte;
leButtonWidget* Main_btnLatte;
leButtonWidget* Main_btnEspresso;
leButtonWidget* Main_btnCapuccino;
leButtonWidget* Main_btnAmericano;
leButtonWidget* Main_btnStart;
leButtonWidget* Main_btnBrew;
leButtonWidget* Main_btnSettings;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Main(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Main(void)
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

    Main_Screen1 = leWidget_New();
    Main_Screen1->fn->setPosition(Main_Screen1, 0, 0);
    Main_Screen1->fn->setSize(Main_Screen1, 320, 480);
    Main_Screen1->fn->setScheme(Main_Screen1, &BaseScheme);
    root0->fn->addChild(root0, (leWidget*)Main_Screen1);

    Main_imgEspresso = leImageWidget_New();
    Main_imgEspresso->fn->setPosition(Main_imgEspresso, 34, 121);
    Main_imgEspresso->fn->setBackgroundType(Main_imgEspresso, LE_WIDGET_BACKGROUND_NONE);
    Main_imgEspresso->fn->setBorderType(Main_imgEspresso, LE_WIDGET_BORDER_NONE);
    Main_imgEspresso->fn->setImage(Main_imgEspresso, (leImage*)&imgEspresso);
    root0->fn->addChild(root0, (leWidget*)Main_imgEspresso);

    Main_Espresso = leLabelWidget_New();
    Main_Espresso->fn->setPosition(Main_Espresso, 37, 200);
    Main_Espresso->fn->setSize(Main_Espresso, 90, 14);
    Main_Espresso->fn->setScheme(Main_Espresso, &BaseScheme);
    Main_Espresso->fn->setBackgroundType(Main_Espresso, LE_WIDGET_BACKGROUND_NONE);
    Main_Espresso->fn->setHAlignment(Main_Espresso, LE_HALIGN_CENTER);
    Main_Espresso->fn->setString(Main_Espresso, (leString*)&string_strEspresso);
    root0->fn->addChild(root0, (leWidget*)Main_Espresso);

    Main_imgBrew = leImageWidget_New();
    Main_imgBrew->fn->setPosition(Main_imgBrew, 199, 419);
    Main_imgBrew->fn->setSize(Main_imgBrew, 42, 42);
    Main_imgBrew->fn->setBackgroundType(Main_imgBrew, LE_WIDGET_BACKGROUND_NONE);
    Main_imgBrew->fn->setBorderType(Main_imgBrew, LE_WIDGET_BORDER_NONE);
    Main_imgBrew->fn->setImage(Main_imgBrew, (leImage*)&imgBrew);
    root0->fn->addChild(root0, (leWidget*)Main_imgBrew);

    Main_imgSettings = leImageWidget_New();
    Main_imgSettings->fn->setPosition(Main_imgSettings, 259, 423);
    Main_imgSettings->fn->setSize(Main_imgSettings, 33, 33);
    Main_imgSettings->fn->setBackgroundType(Main_imgSettings, LE_WIDGET_BACKGROUND_NONE);
    Main_imgSettings->fn->setBorderType(Main_imgSettings, LE_WIDGET_BORDER_NONE);
    Main_imgSettings->fn->setImage(Main_imgSettings, (leImage*)&imgSettings);
    root0->fn->addChild(root0, (leWidget*)Main_imgSettings);

    Main_imgStart = leImageWidget_New();
    Main_imgStart->fn->setPosition(Main_imgStart, 176, 187);
    Main_imgStart->fn->setSize(Main_imgStart, 135, 132);
    Main_imgStart->fn->setBackgroundType(Main_imgStart, LE_WIDGET_BACKGROUND_NONE);
    Main_imgStart->fn->setBorderType(Main_imgStart, LE_WIDGET_BORDER_NONE);
    Main_imgStart->fn->setImage(Main_imgStart, (leImage*)&imgStartButton);
    root0->fn->addChild(root0, (leWidget*)Main_imgStart);

    Main_Start = leLabelWidget_New();
    Main_Start->fn->setPosition(Main_Start, 195, 263);
    Main_Start->fn->setSize(Main_Start, 92, 37);
    Main_Start->fn->setScheme(Main_Start, &text_lightseagreen);
    Main_Start->fn->setBackgroundType(Main_Start, LE_WIDGET_BACKGROUND_NONE);
    Main_Start->fn->setHAlignment(Main_Start, LE_HALIGN_CENTER);
    Main_Start->fn->setString(Main_Start, (leString*)&string_strStart);
    root0->fn->addChild(root0, (leWidget*)Main_Start);

    Main_imgAmericano = leImageWidget_New();
    Main_imgAmericano->fn->setPosition(Main_imgAmericano, 36, 367);
    Main_imgAmericano->fn->setBackgroundType(Main_imgAmericano, LE_WIDGET_BACKGROUND_NONE);
    Main_imgAmericano->fn->setBorderType(Main_imgAmericano, LE_WIDGET_BORDER_NONE);
    Main_imgAmericano->fn->setImage(Main_imgAmericano, (leImage*)&imgAmericano);
    root0->fn->addChild(root0, (leWidget*)Main_imgAmericano);

    Main_Americano = leLabelWidget_New();
    Main_Americano->fn->setPosition(Main_Americano, 32, 448);
    Main_Americano->fn->setSize(Main_Americano, 90, 14);
    Main_Americano->fn->setScheme(Main_Americano, &BaseScheme);
    Main_Americano->fn->setBackgroundType(Main_Americano, LE_WIDGET_BACKGROUND_NONE);
    Main_Americano->fn->setHAlignment(Main_Americano, LE_HALIGN_CENTER);
    Main_Americano->fn->setString(Main_Americano, (leString*)&string_strAmericano);
    root0->fn->addChild(root0, (leWidget*)Main_Americano);

    Main_imgCapuccino = leImageWidget_New();
    Main_imgCapuccino->fn->setPosition(Main_imgCapuccino, 30, 244);
    Main_imgCapuccino->fn->setBackgroundType(Main_imgCapuccino, LE_WIDGET_BACKGROUND_NONE);
    Main_imgCapuccino->fn->setBorderType(Main_imgCapuccino, LE_WIDGET_BORDER_NONE);
    Main_imgCapuccino->fn->setImage(Main_imgCapuccino, (leImage*)&imgCapuccino);
    root0->fn->addChild(root0, (leWidget*)Main_imgCapuccino);

    Main_Capuccino = leLabelWidget_New();
    Main_Capuccino->fn->setPosition(Main_Capuccino, 35, 327);
    Main_Capuccino->fn->setSize(Main_Capuccino, 90, 14);
    Main_Capuccino->fn->setScheme(Main_Capuccino, &BaseScheme);
    Main_Capuccino->fn->setBackgroundType(Main_Capuccino, LE_WIDGET_BACKGROUND_NONE);
    Main_Capuccino->fn->setHAlignment(Main_Capuccino, LE_HALIGN_CENTER);
    Main_Capuccino->fn->setString(Main_Capuccino, (leString*)&string_strCapuccino);
    root0->fn->addChild(root0, (leWidget*)Main_Capuccino);

    Main_imgBar = leImageWidget_New();
    Main_imgBar->fn->setPosition(Main_imgBar, 155, 0);
    Main_imgBar->fn->setSize(Main_imgBar, 16, 480);
    Main_imgBar->fn->setBackgroundType(Main_imgBar, LE_WIDGET_BACKGROUND_NONE);
    Main_imgBar->fn->setBorderType(Main_imgBar, LE_WIDGET_BORDER_NONE);
    Main_imgBar->fn->setImage(Main_imgBar, (leImage*)&imgBar);
    root0->fn->addChild(root0, (leWidget*)Main_imgBar);

    Main_imgMchpLogo = leImageWidget_New();
    Main_imgMchpLogo->fn->setPosition(Main_imgMchpLogo, 204, 29);
    Main_imgMchpLogo->fn->setSize(Main_imgMchpLogo, 80, 42);
    Main_imgMchpLogo->fn->setBackgroundType(Main_imgMchpLogo, LE_WIDGET_BACKGROUND_NONE);
    Main_imgMchpLogo->fn->setBorderType(Main_imgMchpLogo, LE_WIDGET_BORDER_NONE);
    Main_imgMchpLogo->fn->setImage(Main_imgMchpLogo, (leImage*)&imgMchpLogo);
    root0->fn->addChild(root0, (leWidget*)Main_imgMchpLogo);

    Main_imgLatte = leImageWidget_New();
    Main_imgLatte->fn->setPosition(Main_imgLatte, 33, 0);
    Main_imgLatte->fn->setBackgroundType(Main_imgLatte, LE_WIDGET_BACKGROUND_NONE);
    Main_imgLatte->fn->setBorderType(Main_imgLatte, LE_WIDGET_BORDER_NONE);
    Main_imgLatte->fn->setImage(Main_imgLatte, (leImage*)&imgLatte);
    root0->fn->addChild(root0, (leWidget*)Main_imgLatte);

    Main_Latte = leLabelWidget_New();
    Main_Latte->fn->setPosition(Main_Latte, 37, 91);
    Main_Latte->fn->setSize(Main_Latte, 90, 13);
    Main_Latte->fn->setScheme(Main_Latte, &BaseScheme);
    Main_Latte->fn->setBackgroundType(Main_Latte, LE_WIDGET_BACKGROUND_NONE);
    Main_Latte->fn->setHAlignment(Main_Latte, LE_HALIGN_CENTER);
    Main_Latte->fn->setString(Main_Latte, (leString*)&string_strLatte);
    root0->fn->addChild(root0, (leWidget*)Main_Latte);

    Main_btnLatte = leButtonWidget_New();
    Main_btnLatte->fn->setPosition(Main_btnLatte, 21, 6);
    Main_btnLatte->fn->setSize(Main_btnLatte, 120, 110);
    Main_btnLatte->fn->setBackgroundType(Main_btnLatte, LE_WIDGET_BACKGROUND_NONE);
    Main_btnLatte->fn->setBorderType(Main_btnLatte, LE_WIDGET_BORDER_NONE);
    Main_btnLatte->fn->setPressed(Main_btnLatte, LE_TRUE);
    Main_btnLatte->fn->setPressedOffset(Main_btnLatte, 0);
    Main_btnLatte->fn->setPressedEventCallback(Main_btnLatte, event_Main_btnLatte_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Main_btnLatte);

    Main_btnEspresso = leButtonWidget_New();
    Main_btnEspresso->fn->setPosition(Main_btnEspresso, 21, 123);
    Main_btnEspresso->fn->setSize(Main_btnEspresso, 120, 110);
    Main_btnEspresso->fn->setBackgroundType(Main_btnEspresso, LE_WIDGET_BACKGROUND_NONE);
    Main_btnEspresso->fn->setBorderType(Main_btnEspresso, LE_WIDGET_BORDER_NONE);
    Main_btnEspresso->fn->setPressed(Main_btnEspresso, LE_TRUE);
    Main_btnEspresso->fn->setPressedOffset(Main_btnEspresso, 0);
    Main_btnEspresso->fn->setPressedEventCallback(Main_btnEspresso, event_Main_btnEspresso_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Main_btnEspresso);

    Main_btnCapuccino = leButtonWidget_New();
    Main_btnCapuccino->fn->setPosition(Main_btnCapuccino, 21, 247);
    Main_btnCapuccino->fn->setSize(Main_btnCapuccino, 120, 110);
    Main_btnCapuccino->fn->setBackgroundType(Main_btnCapuccino, LE_WIDGET_BACKGROUND_NONE);
    Main_btnCapuccino->fn->setBorderType(Main_btnCapuccino, LE_WIDGET_BORDER_NONE);
    Main_btnCapuccino->fn->setPressed(Main_btnCapuccino, LE_TRUE);
    Main_btnCapuccino->fn->setPressedOffset(Main_btnCapuccino, 0);
    Main_btnCapuccino->fn->setPressedEventCallback(Main_btnCapuccino, event_Main_btnCapuccino_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Main_btnCapuccino);

    Main_btnAmericano = leButtonWidget_New();
    Main_btnAmericano->fn->setPosition(Main_btnAmericano, 21, 369);
    Main_btnAmericano->fn->setSize(Main_btnAmericano, 120, 110);
    Main_btnAmericano->fn->setBackgroundType(Main_btnAmericano, LE_WIDGET_BACKGROUND_NONE);
    Main_btnAmericano->fn->setBorderType(Main_btnAmericano, LE_WIDGET_BORDER_NONE);
    Main_btnAmericano->fn->setPressed(Main_btnAmericano, LE_TRUE);
    Main_btnAmericano->fn->setPressedOffset(Main_btnAmericano, 0);
    Main_btnAmericano->fn->setPressedEventCallback(Main_btnAmericano, event_Main_btnAmericano_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Main_btnAmericano);

    Main_btnStart = leButtonWidget_New();
    Main_btnStart->fn->setPosition(Main_btnStart, 170, 180);
    Main_btnStart->fn->setSize(Main_btnStart, 150, 150);
    Main_btnStart->fn->setBackgroundType(Main_btnStart, LE_WIDGET_BACKGROUND_NONE);
    Main_btnStart->fn->setBorderType(Main_btnStart, LE_WIDGET_BORDER_NONE);
    Main_btnStart->fn->setPressed(Main_btnStart, LE_TRUE);
    Main_btnStart->fn->setPressedOffset(Main_btnStart, 0);
    Main_btnStart->fn->setPressedEventCallback(Main_btnStart, event_Main_btnStart_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Main_btnStart);

    Main_btnBrew = leButtonWidget_New();
    Main_btnBrew->fn->setPosition(Main_btnBrew, 178, 405);
    Main_btnBrew->fn->setSize(Main_btnBrew, 70, 70);
    Main_btnBrew->fn->setBackgroundType(Main_btnBrew, LE_WIDGET_BACKGROUND_NONE);
    Main_btnBrew->fn->setBorderType(Main_btnBrew, LE_WIDGET_BORDER_NONE);
    Main_btnBrew->fn->setPressed(Main_btnBrew, LE_TRUE);
    Main_btnBrew->fn->setPressedOffset(Main_btnBrew, 0);
    Main_btnBrew->fn->setPressedEventCallback(Main_btnBrew, event_Main_btnBrew_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Main_btnBrew);

    Main_btnSettings = leButtonWidget_New();
    Main_btnSettings->fn->setPosition(Main_btnSettings, 247, 404);
    Main_btnSettings->fn->setSize(Main_btnSettings, 70, 70);
    Main_btnSettings->fn->setBackgroundType(Main_btnSettings, LE_WIDGET_BACKGROUND_NONE);
    Main_btnSettings->fn->setBorderType(Main_btnSettings, LE_WIDGET_BORDER_NONE);
    Main_btnSettings->fn->setPressed(Main_btnSettings, LE_TRUE);
    Main_btnSettings->fn->setPressedOffset(Main_btnSettings, 0);
    Main_btnSettings->fn->setPressedEventCallback(Main_btnSettings, event_Main_btnSettings_OnPressed);
    root0->fn->addChild(root0, (leWidget*)Main_btnSettings);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGB_565);

    Main_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Main(void)
{
    root0->fn->setSize(root0, root0->rect.width, root0->rect.height);

    Main_OnUpdate(); // raise event
}

void screenHide_Main(void)
{
    Main_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Main_Screen1 = NULL;
    Main_imgEspresso = NULL;
    Main_Espresso = NULL;
    Main_imgBrew = NULL;
    Main_imgSettings = NULL;
    Main_imgStart = NULL;
    Main_Start = NULL;
    Main_imgAmericano = NULL;
    Main_Americano = NULL;
    Main_imgCapuccino = NULL;
    Main_Capuccino = NULL;
    Main_imgBar = NULL;
    Main_imgMchpLogo = NULL;
    Main_imgLatte = NULL;
    Main_Latte = NULL;
    Main_btnLatte = NULL;
    Main_btnEspresso = NULL;
    Main_btnCapuccino = NULL;
    Main_btnAmericano = NULL;
    Main_btnStart = NULL;
    Main_btnBrew = NULL;
    Main_btnSettings = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Main(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Main(uint32_t lyrIdx)
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

