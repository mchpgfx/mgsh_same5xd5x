/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It
    implements the logic of the application's state machine and it may call
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdio.h>
#include <stdbool.h>

#include "definitions.h"
#include "app.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.

    Application strings and buffers are be defined outside this structure.
*/

APP_DATA appData;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback functions.
*/

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************

volatile uint32_t timerTicks = 0;
static SYS_TIME_HANDLE animTimer = SYS_TIME_HANDLE_INVALID;

#if defined(MGS_SIM) || defined(APP_NO_PUMP)
bool isWaterLow = false;
bool isWaterFull = false;
#endif

bool isBrewPumpOn = false;
bool isRefillPumpOn = false;


bool appIsWaterLow(void)
{
#if defined(MGS_SIM) || defined(APP_NO_PUMP)
    return isWaterLow;
#else
    if (TANK_LO_PB09_Get() == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
#endif
}

bool appIsWaterFull(void)
{
#if defined(MGS_SIM) || defined(APP_NO_PUMP)
    return isWaterFull;
#else
    if (TANK_HI_PA17_Get() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
#endif
}

bool appIsBrewPumpOn(void)
{
    return isBrewPumpOn;
}

void appBrewPumpOn(bool on)
{
    if (on)
    {
        printf("Brew Pump on\r\n");
        isBrewPumpOn = true;

#if !defined(MGS_SIM) && !defined(APP_NO_PUMP)
        /* turn on brew pump, turn off refill pump */
        BREW_PUMP_PB30_Set();
        REFILL_PUMP_PB31_Clear();
#endif
    }
    else
    {
        printf("Brew Pump off\r\n");
        isBrewPumpOn = false;
#if !defined(MGS_SIM) && !defined(APP_NO_PUMP)
        /* turn off brew pump GPIO */
        BREW_PUMP_PB30_Clear();
#endif        
    }
}

bool appIsRefillPumpOn(void)
{
    return isBrewPumpOn;
}

void appRefillPumpOn(bool on)
{
    if (on)
    {
        printf("Refill Pump on\r\n");
        isRefillPumpOn = true;

#if !defined(MGS_SIM) && !defined(APP_NO_PUMP)
        /* turn on refill GPIO, turn off brew pump*/
        REFILL_PUMP_PB31_Set();
        BREW_PUMP_PB30_Clear();
#endif
    }
    else
    {
        printf("Refill Pump off\r\n");
        isRefillPumpOn = false;
#if !defined(MGS_SIM) && !defined(APP_NO_PUMP)
        /* turn off refill GPIO */
        REFILL_PUMP_PB31_Clear();
#endif        
    }
}

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;



    /* TODO: Initialize your application's state machine and other
     * parameters.
     */
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

static void APP_UI_Timer_Callback ( uintptr_t context)
{
    timerTicks++;
}

void APP_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( appData.state )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:
        {
            bool appInitialized = true;
            
            timerTicks = 0;

            animTimer = SYS_TIME_CallbackRegisterMS(APP_UI_Timer_Callback, 
                                            1,
                                            TIMER_PERIOD_MS,
                                            SYS_TIME_PERIODIC);  
    
            if (appInitialized)
            {

                appData.state = APP_STATE_SERVICE_TASKS;
            }
            break;
        }

        case APP_STATE_SERVICE_TASKS:
        {

            break;
        }

        /* TODO: implement your application state machine.*/


        /* The default state should never be executed. */
        default:
        {
            /* TODO: Handle error in application's state machine. */
            break;
        }
    }
}


/*******************************************************************************
 End of File
 */
