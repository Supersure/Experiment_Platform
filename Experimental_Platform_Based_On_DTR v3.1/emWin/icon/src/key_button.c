/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter (ST) for emWin V5.26.                      *
*        Compiled Aug  8 2014, 14:49:30                              *
*                                                                    *
*        (c) 1998 - 2014 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: key_button                                            *
* Dimensions:  40 * 40                                               *
* NumColors:   32bpp: 16777216 + 256                                 *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmkey_button;

static GUI_CONST_STORAGE unsigned long _ackey_button[] = {
  0xFFF5F5F6, 0xFFC4C5C8, 0xC542444B, 0x5B404145, 0x33323336, 0x38292A2D, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 
        0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x392A2B2E, 0x3728292C, 0x3C323336, 0x54494A4E, 0xB98D8E92, 0xFFC1C1C4, 0xFFC2C3C5,
  0xFFFDFEFF, 0x84747579, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x6D56575C, 0xFFDDDEE0,
  0xB1A2A3A7, 0x00000000, 0x00000000, 0x00040607, 0x00111315, 0x0017181A, 0x00191A1D, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 
        0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x0018191C, 0x00191A1D, 0x00151619, 0x00101114, 0x000E1012, 0x000E1013, 0x00060709, 0x00000000, 0x00000000, 0xA3848589,
  0x4D404042, 0x00000000, 0x00050507, 0x00191B1F, 0x001D1E1F, 0x001B1B1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 
        0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001B1B1B, 0x00141414, 0x001D1D1D, 0x002F2F2F, 0x002F2F2F, 0x001E1F20, 0x0016171A, 0x00090A0D, 0x00000000, 0x3B2D2D30,
  0x25121317, 0x00000000, 0x00121417, 0x001D1E1E, 0x00191918, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00151515, 0x001B1B1B, 0x00474747, 0x00575757, 0x00575757, 0x00464645, 0x001E1E1D, 0x0015171A, 0x00000000, 0x1A040407,
  0x2815171A, 0x00000000, 0x0017191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00121212, 0x00393939, 0x00575757, 0x004C4C4C, 0x004B4B4B, 0x00575757, 0x00373736, 0x00151618, 0x00070809, 0x19010205,
  0x2A16181B, 0x00000000, 0x00191A1D, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x00404040, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00535353, 0x003C3C3B, 0x00171719, 0x0009090B, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003E3E3E, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003A3A39, 0x00171719, 0x0008090A, 0x1B030407,
  0x2A16181B, 0x00000000, 0x0018191C, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00141414, 0x003F3F3F, 0x00535353, 0x004C4C4C, 0x004C4C4C, 0x00525252, 0x003B3A3A, 0x00171719, 0x0008090B, 0x1B030407,
  0x2A16181B, 0x00000000, 0x00191A1D, 0x001A1A1A, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00131313, 0x003F3F3F, 0x00555555, 0x004C4C4C, 0x004B4B4B, 0x00545454, 0x003C3B3B, 0x00161618, 0x0008090A, 0x1B030407,
  0x27141619, 0x00000000, 0x0016181B, 0x001B1B1B, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00131313, 0x002A2A2A, 0x00555555, 0x00525252, 0x00525252, 0x00555555, 0x002A2A29, 0x00151718, 0x00050606, 0x1A020306,
  0x28191A1D, 0x00000000, 0x000F1114, 0x001D1E1F, 0x00191918, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 
        0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00191919, 0x00181818, 0x00131313, 0x002C2C2C, 0x00484848, 0x00494949, 0x002D2D2C, 0x00161716, 0x0017191C, 0x00000000, 0x1D08080C,
  0x5C4B4C51, 0x00000000, 0x00020203, 0x0017191D, 0x001E1F20, 0x001C1B1B, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 
        0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x001A1A1A, 0x00191919, 0x00151514, 0x00191918, 0x001A1A19, 0x00171718, 0x00191A1E, 0x0007080A, 0x00000000, 0x47393B3F,
  0xC88F9094, 0x00040406, 0x00000000, 0x00020304, 0x000F1114, 0x00151618, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 
        0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x0016171A, 0x00161618, 0x00121416, 0x00101114, 0x00040406, 0x00000000, 0x00000000, 0xB9929398,
  0xFFA0A1A4, 0xAC55575C, 0x050A0B0E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
        0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x9B686A6F, 0xFFF2F4F4,
  0xFF8E8F92, 0xFF6A6C71, 0xE394969A, 0x8C535559, 0x68696A6D, 0x65626367, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 
        0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x68626467, 0x69636468, 0x69636468, 0x69636468, 0x69636468, 0x69636468, 0x66626367, 0x696A6B6F, 0x874F5056, 0xDD66676D, 0xFF929398, 0xFFFFFFFF
};

GUI_CONST_STORAGE GUI_BITMAP bmkey_button = {
  40, // xSize
  40, // ySize
  160, // BytesPerLine
  32, // BitsPerPixel
  (unsigned char *)_ackey_button,  // Pointer to picture data
  NULL,  // Pointer to palette
  GUI_DRAW_BMP8888
};

/*************************** End of file ****************************/
