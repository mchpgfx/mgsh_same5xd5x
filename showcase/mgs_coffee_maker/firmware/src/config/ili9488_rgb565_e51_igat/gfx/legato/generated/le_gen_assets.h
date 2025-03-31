/*******************************************************************************
 Module for Microchip Legato Graphics Library

  Company:
    Microchip Technology Inc.

  File Name:
    le_gen_assets.h

  Summary:
    Header file containing a list of asset specifications for use with the
    Legato Graphics Stack.


  Description:
    Header file containing a list of asset specifications for use with the
    Legato Graphics Stack.

*******************************************************************************/


// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C)  Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/

// DOM-IGNORE-END

#ifndef LE_GEN_ASSETS_H
#define LE_GEN_ASSETS_H

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

#include "gfx/legato/legato.h"

extern const lePalette leGlobalPalette;

/*****************************************************************************
 * Legato Graphics Image Assets
 *****************************************************************************/
/*********************************
 * Legato Image Asset
 * Name:   imgLatte
 * Size:   68x60 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgLatte;

/*********************************
 * Legato Image Asset
 * Name:   imgEspresso
 * Size:   80x48 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgEspresso;

/*********************************
 * Legato Image Asset
 * Name:   imgCapuccino
 * Size:   66x52 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgCapuccino;

/*********************************
 * Legato Image Asset
 * Name:   imgAmericano
 * Size:   57x43 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgAmericano;

/*********************************
 * Legato Image Asset
 * Name:   imgStartButton
 * Size:   147x144 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgStartButton;

/*********************************
 * Legato Image Asset
 * Name:   imgBar
 * Size:   22x480 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgBar;

/*********************************
 * Legato Image Asset
 * Name:   imgMchpLogo
 * Size:   80x42 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgMchpLogo;

/*********************************
 * Legato Image Asset
 * Name:   imgBrew
 * Size:   42x42 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgBrew;

/*********************************
 * Legato Image Asset
 * Name:   imgSettings
 * Size:   33x33 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgSettings;

/*********************************
 * Legato Image Asset
 * Name:   imgBigCircle
 * Size:   260x260 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgBigCircle;

/*********************************
 * Legato Image Asset
 * Name:   imgKnob
 * Size:   30x30 pixels
 * Type:   RGB Data
 * Format: RGBA_8888
 ***********************************/
extern leImage imgKnob;

/*********************************
 * Legato Image Asset
 * Name:   imgLowWater
 * Size:   119x104 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgLowWater;

/*********************************
 * Legato Image Asset
 * Name:   imgCancel
 * Size:   35x36 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgCancel;

/*********************************
 * Legato Image Asset
 * Name:   imgResume
 * Size:   152x88 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgResume;

/*********************************
 * Legato Image Asset
 * Name:   BigCoffee
 * Size:   135x117 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage BigCoffee;

/*********************************
 * Legato Image Asset
 * Name:   imgAmerSelect
 * Size:   100x100 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgAmerSelect;

/*********************************
 * Legato Image Asset
 * Name:   imgCapuccSelect
 * Size:   100x100 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgCapuccSelect;

/*********************************
 * Legato Image Asset
 * Name:   imgEspressoSelect
 * Size:   100x100 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgEspressoSelect;

/*********************************
 * Legato Image Asset
 * Name:   imgLatteSelect
 * Size:   100x100 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage imgLatteSelect;

/*********************************
 * Legato Image Asset
 * Name:   water_level0
 * Size:   86x84 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage water_level0;

/*********************************
 * Legato Image Asset
 * Name:   water_level1
 * Size:   86x84 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage water_level1;

/*********************************
 * Legato Image Asset
 * Name:   water_level2
 * Size:   86x84 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage water_level2;

/*********************************
 * Legato Image Asset
 * Name:   water_level3
 * Size:   86x84 pixels
 * Type:   RGB Data
 * Format: RGB_565
 ***********************************/
extern leImage water_level3;

/*****************************************************************************
 * Legato Graphics Font Assets
 *****************************************************************************/
/*********************************
 * Legato Font Asset
 * Name:         inter12
 * Height:       21
 * Baseline:     10
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  12
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont inter12;

/*********************************
 * Legato Font Asset
 * Name:         inter24
 * Height:       21
 * Baseline:     18
 * Style:        Antialias
 * Glyph Count:  95
 * Range Count:  5
 * Glyph Ranges: 0x20-0x7E
***********************************/
extern leRasterFont inter24;

/*********************************
 * Legato Font Asset
 * Name:         inter16
 * Height:       21
 * Baseline:     13
 * Style:        Antialias
 * Glyph Count:  96
 * Range Count:  12
 * Glyph Ranges: 0xA
                 0x20-0x7E
***********************************/
extern leRasterFont inter16;

/*********************************
 * Legato Font Asset
 * Name:         inter80
 * Height:       38
 * Baseline:     60
 * Style:        Antialias
 * Glyph Count:  10
 * Range Count:  2
 * Glyph Ranges: 0x30-0x39
***********************************/
extern leRasterFont inter80;

/*********************************
 * Legato Font Asset
 * Name:         inter35
 * Height:       38
 * Baseline:     26
 * Style:        Antialias
 * Glyph Count:  10
 * Range Count:  3
 * Glyph Ranges: 0x30-0x39
***********************************/
extern leRasterFont inter35;

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 1
 * String Count:   21
 *****************************************************************************/

// language IDs
#define language_Default    0

// string IDs
#define stringID_strCoffeeReady    0
#define stringID_strBrewReady    1
#define stringID_strMins    2
#define stringID_strCapuccino    3
#define stringID_strFillTank    4
#define stringID_strPreparing    5
#define stringID_strRefilling    6
#define stringID_strClose    7
#define stringID_strSecs    8
#define stringID_strResume    9
#define stringID_strSecValue    10
#define stringID_strMinValue    11
#define stringID_strDefaultMinValue    12
#define stringID_strRemaining    13
#define stringID_strLatte    14
#define stringID_strPleaseWait    15
#define stringID_strDefaultSecValue    16
#define stringID_strAmericano    17
#define stringID_strStart    18
#define stringID_strLowWater    19
#define stringID_strEspresso    20

extern const leStringTable stringTable;


// string list
extern leTableString string_strCoffeeReady;
extern leTableString string_strBrewReady;
extern leTableString string_strMins;
extern leTableString string_strCapuccino;
extern leTableString string_strFillTank;
extern leTableString string_strPreparing;
extern leTableString string_strRefilling;
extern leTableString string_strClose;
extern leTableString string_strSecs;
extern leTableString string_strResume;
extern leTableString string_strSecValue;
extern leTableString string_strMinValue;
extern leTableString string_strDefaultMinValue;
extern leTableString string_strRemaining;
extern leTableString string_strLatte;
extern leTableString string_strPleaseWait;
extern leTableString string_strDefaultSecValue;
extern leTableString string_strAmericano;
extern leTableString string_strStart;
extern leTableString string_strLowWater;
extern leTableString string_strEspresso;

void initializeStrings(void);
//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* LE_GEN_ASSETS_H */
