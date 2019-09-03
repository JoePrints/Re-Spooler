/**
* ************** How to use this firmware - READ THIS *********************************
*
* Uncomment means removing the 2 // in front of #define.
* 
* FLASHING NOTES:
* ALL slicers (Simplify3D, Cura, Slic3r, etc) or anything else that connects to the COM port must be CLOSED for the firmware to be flash.
* If anything is connected to the COM port when flashing it will fail, typically "access denied" is listed in the error section of the Arduino IDE.
* You MUST use the Included Arduino IDE to flash the firmware if on Windows and if you are on a Mac or Linux follow the guide in our knowledgebase to setup your IDE to work with the firmware.
* 
* EZABL SETUP NOTES: 
* If you have EZABL uncomment the mount you are using with the printer. 
* If you have a custom/unsupported mount uncomment #define CUSTOM_MOUNT and enter your offsets 
* below in the CUSTOM MOUNT section. Refer to the EZABL guide to get your offsets.
* 
* STEP 1:
* Select the correct board from the tools menu for the printer you are flashing.
* Read the printer title for the model you are flashing, it will show what board to select.
*
* STEP 2:
* Uncomment the printer you want to flash. The printers are sorted A-Z by brand name.
* If you are using the CR-10S DUAL board with the Ender 3 then read the specific section below on how to do this.
*
* STEP 3: 
* Select the COM port your printer is on from the Tools menu. If you do not see the COM port try
* downloading the latest drivers from the manufacturer or TH3D site on our knowledgebase.
* 
* STEP 4:
* Verify you have the correct board selected, printer model uncommented, and if you are using EZOUT and/or EZABL
* the lines you need to use them are also uncommented.
*
* STEP 5:
* Once you have your settings verified click the arrow in the upper left to upload to the board.
*
* STEP 6:
* Reset your eeprom. You can send M502 then M500 to reset the EEPROM OR on the printer LCD go to 
* Control > Initialize EEPROM to clear out the EEPROM to defaults.
*
* BOOTLOADER FLASHING NOTES:
* For flashing your bootloader with an Uno make sure to select Arduino as ISP for the programmer
* 
* There are other features in the TH3D Extras section so look there for V6 Hotend,
* Bootscreen settings, Titan Extruder and more. You only need to edit this file.
* 
* ERROR NOTES:
* If you get errors flashing READ the message it gives you and double check that you selected
* the correct board from the Tools menu in Arduino. Turn off any AV systems and reboot the computer.
*/

#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#define CONFIGURATION_H_VERSION 010109

//===========================================================================
//============================ TH3D Configuration ===========================
//===========================================================================

// ONLY UNCOMMENT THINGS IN ONE PRINTER SECTION!!! IF YOU HAVE MULTIPLE MACHINES FLASH THEM ONE AT A TIME.

//===========================================================================
// *************************     TH3D PRINTERS      *************************
//===========================================================================

//===========================================================================
// TH3D Artillery EZ300 Options - Select Arduino Mega 2560 from Tools > Board
//===========================================================================
//#define AR_EZ300

// EZABL Probe Mounts
//#define AR_OEM_MOUNT
//#define CUSTOM_PROBE

//===========================================================================
// *************************    ADIMLab PRINTERS    *************************
//===========================================================================

//===========================================================================
// ADIMLab Gantry i3 Plus Options - Select Arduino Mega 2560 from Tools > Board
//===========================================================================
//#define ADIM_GANTRY_I3_PLUS

// EZABL Probe Mounts
//#define ADIM_I3P_OEM
//#define CUSTOM_PROBE

//===========================================================================
// *************************    AIBECY PRINTERS     *************************
//===========================================================================

//===========================================================================
// Aibecy DY-H9 Options - Select Arduino Mega 2560 from Tools > Board
//===========================================================================
//#define DY_H9

// EZABL Probe Mounts
//#define CUSTOM_PROBE

//===========================================================================
// *************************   ALFAWISE PRINTERS    *************************
//===========================================================================

//===========================================================================
// Alfawise U10 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define ALFAWISE_U10

// EZABL Probe Mounts
//#define ALFAWISEU10_OEM
//#define ALFAWISEU10_PETSFANG
//#define CUSTOM_PROBE

//===========================================================================
// *************************     ANET PRINTERS      *************************
//===========================================================================

//===========================================================================
// ANET Printers Options - Select 'ANET V1.0' from Tools > Board
//===========================================================================
// Uncomment the ANET Model you are using
#define ANET_A2 //** please see option below to choose bed size for the A2 only!!
//#define ANET_A6
//#define ANET_A8
//#define ANET_E10
//#define ANET_E12

// Choose bed size for A2 only
// IGNORE THESE OPTIONS FOR MACHINES OTHER THAN THE A2
#define A2_SMALL_BED //(220x220)
//#define A2_LARGE_BED //(220x270)

// Choose which type of LCD you have (Select One option)
//#define ANET_LCD12864 //This is the larger LCD with the rotary controller found on most ANET machines
#define ANET_LCD2004 //This is the LCD with the 5 button keypad usually found on A8 and some A2 machines

// EZABL Probe Mounts - Bootscreen will be disabled when enabling EZABL on the Anet Boards due to space issues
//#define ANET_OEM
//#define CUSTOM_PROBE

//===========================================================================
// *************************   CREALITY PRINTERS    *************************
//===========================================================================

//===========================================================================
// Creality CR-10 Options - Select 'Sanguino 1284P' from Tools > Board
//===========================================================================
//#define CR10
//#define CR10_MINI
//#define CR10_S4
//#define CR10_S5

// If you are using our EZOut V1/V2 (connects to LCD header) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUT_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUT_ENABLE

// EZABL Probe Mounts
//#define CR10_OEM
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define CR10_FANG
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define CUSTOM_PROBE

//===========================================================================
// Creality CR-10S Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define CR10S
//#define CR10S_MINI
//#define CR10S_S4
//#define CR10S_S5

// This disables the stock CR-10S Filament Sensor
// DO NOT ENABLE THIS IF YOU ARE USING THE EZOUT.
//#define CR10S_NOFILAMENTSENSOR

// Use this to use the CR-10 LCD with the CR-10S Board. Rotate the LCD plug 180
// and plug into EXP1. You will have to force it in but it will fit and work.
//#define CR10LCD_CR10S

// If you are using our EZOut V1 (connects to LCD header) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUT_ENABLE line below. Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUT_ENABLE

// If you are using our EZOut V2 (connects to X+ connector) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below. Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// EZABL Probe Mounts
//#define CR10_OEM
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG  //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define CUSTOM_PROBE

// Touch LCD Setting - Enable this if you have the touch LCD are are getting a "paused for user" message in the terminal window.
//#define TOUCH_LCD_FIX

// Dual Extruder Board Options - The below options are for use with the TH3D CR-10S Board with dual extruder support.

// If you are using a single hotend with the 2 into 1 adapter OR mixing nozzle uncomment the below line
//#define DUAL_EXTRUDER_SINGLE_HOTEND

// If you are using a dual hotend with dual nozzles uncomment the below line
//#define DUAL_HOTEND_DUAL_NOZZLES

//===========================================================================
// Creality CR-20 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define CR20

// If you are using our EZOut V2 (connects to X+ connector) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below. Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// EZABL Probe Mounts (CR-20 uses the same mounts as CR-10)
//#define CR10_OEM
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG  //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define CUSTOM_PROBE

// Dual Extruder Board Options - The below options are for use with the TH3D CR-10S Board with dual extruder support.

// If you are using a single hotend with the 2 into 1 adapter OR mixing nozzle uncomment the below line
//#define DUAL_EXTRUDER_SINGLE_HOTEND

// If you are using a dual hotend with dual nozzles uncomment the below line
//#define DUAL_HOTEND_DUAL_NOZZLES

//===========================================================================
// Creality Ender 2 Options - Select 'Sanguino 1284p' from Tools > Board
//===========================================================================
//#define ENDER2

// If you are using our EZOut V2 (connects to the LCD header & connect the 2 pin connector to the "Check" header to the right of the LCD connection) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below. Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// EZABL Probe Mounts (Ender 2 can use the same mounts as CR-10, Ender 2 Specific mounts minimize distance from probe to nozzle for max probing area)
// If you have issues with the non-Ender 2 mounts then please print them off and switch to one of them before contacting support. 
// This is because the probeable area on the non-Ender 2 mounts is too small typically to get a good result.
//#define ENDER2_OEM
//#define ENDER2_V6
//#define CR10_OEM
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG  //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define CUSTOM_PROBE

//===========================================================================
// Creality Ender 3 Options - Select 'Sanguino 1284p' from Tools > Board
//===========================================================================
//#define ENDER3

// If you are using our EZOut V1/V2 (connected to LCD header) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUT_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUT_ENABLE

// EZABL Probe Mounts (Ender 3 uses the same mounts as CR-10)
//#define CR10_OEM
//#define CR10_VOLCANO
//#define CR10_V6HEAVYDUTY
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG  //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define CUSTOM_PROBE

//=================================================================================================
// README - THE BELOW SETTINGS ARE ONLY FOR USING THE CR-10S DUAL BOARD WITH THE ENDER 3
// DO NOT UNCOMMENT THE ABOVE #define ENDER3 LINE IF USING THE DUAL BOARD
// Select 'Arduino Mega 2560' from Tools > Board - NOT Sanguino
//
// To use the Ender 3 LCD with the CR-10S dual board board connect the LCD cable to EXP1 on the 
// CR-10S board but rotate it 180 degrees. The LCD end of the cable goes to EXP3 on the Ender 3 LCD.
// You will have to force it into the EXP1 but it will fit and work.
// 
// EZABL and EZOut support are still supported just use the lines above this comment section.
//=================================================================================================
//#define ENDER3_DUALBOARD

// Dual Extruder Board Options - The below options are for use with the TH3D CR-10S Board with dual extruder support.

// If you are using a single hotend with the 2 into 1 adapter OR mixing nozzle uncomment the below line
//#define DUAL_EXTRUDER_SINGLE_HOTEND

// If you are using a dual hotend with dual nozzles uncomment the below line
//#define DUAL_HOTEND_DUAL_NOZZLES

//===========================================================================
// *************************  FOLGERTECH PRINTERS   *************************
//===========================================================================

//===========================================================================
// Folgertech FT-5 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define FT5

// If you are using a 12864 LCD instead of the stock LCD 2004 display uncomment the below line.
//#define FT5_12864LCD

// If you are using our EZOut V2 (connects to X+ connector) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// EZABL Probe Mounts
//#define CUSTOM_PROBE

//===========================================================================
// *************************   GEEETECH PRINTERS    *************************
//===========================================================================

//===========================================================================
// Geeetech A10 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
// A10 V1 has the 40mm Fan on the left side of the hotend and NO filament sensor
// A10 V2 has a filament sensor and no 40mm fan on the left side of the hotend (support coming soon)
//#define GEEETECH_A10_V1

// EZABL Probe Mounts
//#define GEE_A10_V1_OEM
//#define CUSTOM_PROBE

//===========================================================================
// *************************    LULZBOT PRINTERS    *************************
//===========================================================================

//===========================================================================
// Lulzbot TAZ5 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define TAZ5

// EZABL Probe Mounts
//#define TAZ5_OEM
//#define CUSTOM_PROBE

//===========================================================================
// *************************     TEVO PRINTERS      *************************
//===========================================================================

//===========================================================================
// TEVO Tornado Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define TORNADO

// If you are using our EZOut V2 (connects to X+ connector) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// EZABL Probe Mounts
//#define TORNADO_OEM
//#define TORNADO_VOLCANO
//#define TORNADO_V6HEAVYDUTY
//#define TM3DAERO
//#define TM3DAERO_EXTENDED
//#define PETSFANG  //This is the RIGHT mounted version - if using the left mount please use the CUSTOM_PROBE option.
//#define CUSTOM_PROBE

// Use Tornado Bootscreen instead of TH3D
//#define TORNADO_BOOT

// Slow down the hotend fan and control box fans to reduce noise
//#define TORNADO_QUIET

//===========================================================================
// *************************    TRONXY PRINTERS     *************************
//===========================================================================

//===========================================================================
// TronXY X3S Options - Select 'Sanguino 1284p' from Tools > Board
//===========================================================================
//#define TRONXY_X3S

// EZABL Probe Mounts
//#define CUSTOM_PROBE

//===========================================================================
// TronXY X5S Options - Select 'Sanguino 1284p' from Tools > Board
//===========================================================================
//#define TRONXY_X5S

// EZABL Probe Mounts
//#define CUSTOM_PROBE

//===========================================================================
// *************************    WANHAO PRINTERS     *************************
//===========================================================================

//===========================================================================
// Wanhao i3 Options - Select 'Sanguino 1284p' from Tools > Board
//===========================================================================
//#define WANHAO_I3

// If you are using our EZOut V2 (connected to LCD header) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// If your thermistor temperatures are off please uncomment the 10K option below to fix temps being off
//#define WANHAO_10K_THERMISTOR

// EZABL Probe Mounts
//#define WANHAO_I3_OEM
//#define WANHAO_I3_DIIICOOLER
//#define CUSTOM_PROBE

//===========================================================================
// Wanhao i3 MINI Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define WANHAO_I3MINI

// EZABL Probe Mounts
//#define WANHAO_I3MINI_OEM
//#define WANHAO_I3MINI_OEM_EZABLMINI
//#define CUSTOM_PROBE

//===========================================================================
// Wanhao D6 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define WANHAO_D6

// If you are using our EZOut V2 (connects to ANALOG/J9 connector) filament sensor kit please follow the install guide
// and then uncomment the #define EZOUTV2_ENABLE line below.
// Do NOT ever connect our filament sensor without the supplied adapter board.
//#define EZOUTV2_ENABLE

// EZABL Probe Mounts
//#define WANHAO_D6_OEM
//#define CUSTOM_PROBE


//===========================================================================
// *************************  END PRINTER SECTION   *************************
//===========================================================================

//===========================================================================
// EZABL Advanced Settings
//===========================================================================

// If you want more or less EZABL probe points change the number below (only used if EZABL enabled)
// Default is 3 which gives you 3x3 grid for a total of 9 points. STICK WITH ODD NUMBERS
#define EZABL_POINTS 3

// If you want to probe in on the bed more than 15mm change this below. 
// Do not use 30mm for the Standard CR-10/s or the S4 as you will be on the bed screws.
// Try 50mm to avoid the binder clips if you use them. Do NOT go under 15mm here.
// You can do down to 10mm on the Wanhao i3 since it cannot print on the entire bed.
// You can do down to 5mm on the Wanhao i3 Mini since it cannot print on the entire bed.
// (only used if EZABL enabled)
#define EZABL_PROBE_EDGE 15

// If you want to speed up the probing process you can try using the Fast Probe option
// DO NOTE: Not all machines will be accurate at the quicker speeds. Use M48 to verify accuracy.
//#define EZABL_FASTPROBE

// If you want babystepping to modify the Z Offset uncomment the below line. Use M500 to save any changes made or
// Control > Store Settings if you want to save the changes made with the Z Offset/Babystepping combined option.
//#define BABYSTEP_OFFSET

// This will disable the XYE motors during probing. Can be useful if you have stepper motors causing interference issues with the EZABL sensor.
//#define PROBING_MOTORS_OFF

// Heaters will stay on during probing - only use if directed to by support. Do not use on AC beds.
//#define HEATERS_ON_DURING_PROBING

// This will extrapolate the implied tilt of the bed outside of the probe area. Do not comment out unless directed by support.
#define EZABL_OUTSIDE_GRID_COMPENSATION

//===========================================================================
// IF YOU HAVE A CUSTOM PROBE MOUNT OR ONE THAT IS NOT PRE-SUPPORTED UNCOMMENT THE
// CUSTOM_PROBE OPTION IN YOUR PRINTER SECTION AND ENTER YOUR PROBE LOCATION BELOW
//===========================================================================
#if ENABLED(CUSTOM_PROBE)
  /**
  *   Z Probe to nozzle (X,Y) offset, relative to (0, 0).
  *   X and Y offsets must be whole numbers.
  *
  *   In the following example the X and Y offsets are both positive:
  *   #define X_PROBE_OFFSET_FROM_EXTRUDER 10
  *   #define Y_PROBE_OFFSET_FROM_EXTRUDER 10
  *
  *      +-- BACK ---+
  *      |           |
  *    L |    (+) P  | R <-- probe (10,10)
  *    E |           | I
  *    F | (-) N (+) | G <-- nozzle (0,0)
  *    T |           | H
  *      |    (-)    | T
  *      |           |
  *      O-- FRONT --+
  *    (0,0)
  */
  #define X_PROBE_OFFSET_FROM_EXTRUDER 10  // X offset: -left  +right  [of the nozzle]
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 10  // Y offset: -front +behind [the nozzle]
#endif

//===========================================================================
// TH3D EXTRAS
//===========================================================================

// EXTRUDER SETTINGS -------------------------------

// If you want to change the Esteps for your printer you can uncomment the below line and set CUSTOM_ESTEPS_VALUE to what you want - USE WHOLE NUMBERS ONLY
//#define CUSTOM_ESTEPS
#define CUSTOM_ESTEPS_VALUE 999

// If you are using an E3D or TH3D Titan Extruder uncomment the below line to setup the firmware to the correct steps and direction
//#define TITAN_EXTRUDER
#define TITAN_EXTRUDER_STEPS 463

// DUAL HOTEND SETTINGS ----------------------------

// This is the distance between each nozzle tip when using a dual hotend like the TH3D Tough Dual Hotend or the E3D Chimera or Dual hotends.
#define DUAL_HOTEND_X_DISTANCE 18.0

// THERMISTOR SETTINGS -----------------------------

// If you are using an E3D V6 Hotend uncomment the below line.
//#define V6_HOTEND

// If you are using a Tough Hotend from TH3D or any thermistors TH3D sells for your hotend uncomment the below line.
//#define TH3D_HOTEND_THERMISTOR

// If you are using a thermistor TH3D sells for your bed uncomment the below line.
//#define TH3D_BED_THERMISTOR

// If you are using a Keenovo with SSR and the Keenovo temperature sensor uncomment the below line.
//#define KEENOVO_TEMPSENSOR

// BED SETTINGS ------------------------------------

// If you are using an AC bed with a standalone controller (Keenovo) uncomment the below line to disable the heated bed in the firmware
//#define AC_BED

// Comment this out to enable bed PID control. This is not needed but some users want it. Some machines may not work correctly with it enabled.
// This is disabled even when commented out when using a 1284p board with MANUAL_MESH_LEVELING due to space restrictions.
#define PIDBED_DISABLE

// Stock bed max is 110C for this firmware. Enable this to allow temps up to 150C. Your bed must support this temp for it to achieve the higher temperatures.
//#define BED_HIGHTEMP

// MISC --------------------------------------------

// If you have a 5015 fan that whines when under 100% speed uncomment the below line.
//#define FAN_FIX

// Use your own printer name
//#define USER_PRINTER_NAME "CHANGE ME" 

// If your printer is homing to the endstops hard uncomment this to change the homing speed/divisor to make it less aggressive.
//#define SLOWER_HOMING

// BOOT SCREEN OPTIONS -----------------------------

// Use TinyMachines Bootscreen instead of TH3D
//#define TM3D_BOOT

// Use Ender Bootscreeen instead of TH3D
//#define ENDER_BOOT

// Disable Bootscreen completely
//#define DISABLE_BOOT

// ADVANCED FEATURES (NOT SUPPORTED BY TH3D)  ------

// If you want to use manual mesh leveling you can enable the below option. TH3D does NOT provide free support
// to help you use this feature. This is for generating a MANUAL mesh WITHOUT a probe. 
// Mesh Bed Leveling Documentation: http://marlinfw.org/docs/gcode/G029-mbl.html
// If used with a 1284P board the bootscreen will be disabled to save space.
//#define MANUAL_MESH_LEVELING

// !!!USE AT YOUR OWN RISK!!!
// Continue after Power-Loss feature will store the current state to the SD Card at the start of each layer
// during SD printing. If the recovery file is found at boot time, present an option on the LCD screen to
// continue the print from the last-known point in the file.
// This will DISABLE Junction Deviation,  S-Curve Acceleration, and/or Linear Advance due to RAM limitations. You can only use this with the older
// jerk and acceleration features due to RAM limitations on the CPU.
//
// NOTE: This feature is UNSUPPORTED and causes excessive wear on your SD card. TH3D will NOT provide support for this
// feature even if you are a customer and/or replace SD cards due to pre-mature failure. This is provided based on community demands.
// !!!USE AT YOUR OWN RISK!!!
//#define POWER_LOSS_RECOVERY

// If you need to adjust your XY home offsets from defaults then you can uncomment the HOME_ADJUST line below and enter your
// custom XY offsets. This is provided for convenience and is unsupported with included product support.
// How to use - measure (home XY then jog using the LCD 1mm at a time) the X and Y distance the nozzle is off
// the build plate and then put those as NEGATIVE values below, positive values will NOT work (move your endstops to fix a positve offset).
//#define HOME_ADJUST
#define X_HOME_LOCATION -10
#define Y_HOME_LOCATION -10

// Linear Advance Pressure Control - This is provided for convenience and is unsupported with included product support.
// See http://marlinfw.org/docs/features/lin_advance.html for full instructions.
// Uncomment the below line to enable Linear Advance Pressure Control.
//#define LINEAR_ADVANCE
// Change the K Value here or use M900 KX.XX in your starting code (recommended).
#define LINEAR_ADVANCE_K 0

// These are new motion control options for jerk and acceleration.
// These are very new features so if you notice issues disable them. 
//#define NEW_JERK_CONTROL
//#define NEW_ACCELERATION_CONTROL

//================================================================================================
// Language - This is provided for convenience and is unsupported with included product support.
// We only test compile with English language. If you run into space issues disable some features.
//================================================================================================

/**
 * LCD LANGUAGE
 *
 * Select the language to display on the LCD. These languages are available:
 *
 *    en, an, bg, ca, cn, cz, cz_utf8, de, el, el-gr, es, eu, fi, fr, fr_utf8, gl,
 *    hr, it, kana, kana_utf8, nl, pl, pt, pt_utf8, pt-br, pt-br_utf8, ru, sk_utf8,
 *    tr, uk, zh_CN, zh_TW, test
 */

#define LCD_LANGUAGE en

#include "Configuration_backend.h"

#define UNIFIED_VERSION "spool winder"

#endif // CONFIGURATION_H
