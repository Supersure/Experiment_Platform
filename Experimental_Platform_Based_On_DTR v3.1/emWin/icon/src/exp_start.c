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
* Source file: exp_start                                             *
* Dimensions:  66 * 67                                               *
* NumColors:   16bpp: 65536                                          *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmexp_start;

static GUI_CONST_STORAGE unsigned short _acexp_start[] = {
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BD, 0xFF7C, 0xFEF9, 
        0xFEF9, 0xFEF9, 0xFEF9, 0xFEF9, 0xFEF9, 0xFF7C, 0xF7BE, 0xF7FE, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF3A, 0xFE75, 0xFDF2, 0xFD4E, 0xFCEC, 0xFC48, 0xFC48, 
        0xFC07, 0xFC06, 0xFBC5, 0xFC06, 0xFC07, 0xFC48, 0xFCAA, 0xFD4D, 0xFDF1, 0xFE75, 0xFF3A, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF3B, 0xFE75, 0xFD4F, 0xFCAA, 0xFC06, 0xFBC5, 0xFBC5, 0xFC07, 0xFC07, 0xFC48, 
        0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC07, 0xFC06, 0xFBC6, 0xFBC5, 0xFC06, 0xFCAA, 0xFD4F, 0xFE75, 0xFF3B, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEF8, 0xFD91, 0xFCEB, 0xFC06, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 
        0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFC06, 0xFCEB, 0xFDF1, 0xFEF8, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEF8, 0xFD90, 0xFC48, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC07, 
        0xFC07, 0xFC07, 0xFC07, 0xFC07, 0xFC07, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFC48, 0xFD90, 0xFEF8, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7C, 0xFDF2, 0xFC48, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFBC5, 0xFC06, 0xFCA9, 0xFCAA, 
        0xFCEC, 0xFD2C, 0xFD2C, 0xFCEC, 0xFCAA, 0xFCA9, 0xFC06, 0xFBC5, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFC48, 0xFDF2, 0xFFBC, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEB7, 0xFCEC, 0xFBC4, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFC07, 0xFCEC, 0xFD90, 0xFE33, 0xFEB7, 0xFEF8, 0xFF7B, 
        0xF7BD, 0xFFBD, 0xFFBD, 0xF7BD, 0xFF3B, 0xFEF8, 0xFEB7, 0xFE33, 0xFD90, 0xFCEC, 0xFC07, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC4, 0xFCEC, 0xFEB7, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE33, 0xFC07, 0xFC06, 0xFC49, 0xFC48, 0xFC48, 0xFC49, 0xFC47, 0xFBC5, 0xFCAA, 0xFDF1, 0xFEF6, 0xFF7B, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7B, 0xFEF6, 0xFDF1, 0xFCAA, 0xFBC5, 0xFC47, 0xFC49, 0xFC48, 0xFC48, 0xFC49, 0xFC06, 0xFC07, 0xFE33, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7C, 0xFD4F, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFCAA, 0xFDF3, 0xFF3A, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF3A, 0xFDF3, 0xFCAA, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC4, 0xFD4F, 0xFF7C, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7D, 0xFD2D, 0xFB84, 0xFC48, 0xFC48, 0xFC48, 0xFC49, 0xFC06, 0xFC48, 0xFDF2, 0xFF3B, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF3B, 0xFDF2, 0xFC48, 0xFC06, 0xFC49, 0xFC48, 0xFC48, 0xFC48, 0xFB84, 0xFD2D, 0xFF7D, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BD, 0xFD2C, 0xFBC4, 0xFC49, 0xFC48, 0xFC48, 0xFC48, 0xFBC4, 0xFD2D, 0xFEF8, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEF8, 0xFD2D, 0xFBC4, 0xFC48, 0xFC48, 0xFC48, 0xFC49, 0xFBC4, 0xFCEC, 0xF7BD, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BD, 0xFD2E, 0xFBC4, 0xFC49, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFD91, 0xF7BD, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BD, 0xFD91, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC49, 0xFBC4, 0xFD2E, 0xF7BD, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFD90, 0xFBC4, 0xFC49, 0xFC48, 0xFC48, 0xFC47, 0xFC06, 0xFE75, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE75, 0xFC06, 0xFC47, 0xFC48, 0xFC48, 0xFC49, 0xFBC4, 0xFD90, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE34, 0xFBC4, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC07, 0xFE76, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC07, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC4, 0xFE34, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEF9, 0xFC06, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC07, 0xFE76, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC07, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC07, 0xFEF9, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BE, 0xFD2C, 0xFC06, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFE75, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE75, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC06, 0xFD2C, 0xF7BE, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE33, 0xFBC4, 0xFC49, 0xFC48, 0xFC49, 0xFBC4, 0xFD91, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFD91, 0xFBC4, 0xFC49, 0xFC48, 0xFC49, 0xFB84, 0xFE33, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF3B, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC06, 0xFCEB, 0xF7BD, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BD, 0xFCEB, 0xFC06, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 
        0xFF3B, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFD91, 0xFBC4, 0xFC48, 0xFC48, 0xFC48, 0xFC06, 0xFEF8, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BE, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEF9, 0xFC07, 0xFC48, 0xFC48, 0xFC48, 0xFBC4, 
        0xFD91, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xFF3B, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC4, 0xFD91, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEF8, 0xFD2D, 0xFCEB, 0xFDF3, 0xF77D, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFD91, 0xFBC4, 0xFC48, 0xFC48, 0xFC48, 
        0xFC48, 0xFF3B, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xFDF2, 0xFBC4, 0xFC48, 0xFC48, 0xFC48, 0xFCA9, 0xFF7C, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7C, 0xFCAA, 0xFBC4, 0xFC06, 0xFBC5, 0xFCEC, 0xFE76, 0xF7FE, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7C, 0xFCA9, 0xFC48, 0xFC48, 0xFC48, 
        0xFBC4, 0xFDF2, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF77D, 0xFCAA, 0xFC47, 0xFC48, 0xFC48, 0xFBC4, 0xFDF2, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFBC4, 0xFC48, 0xFC48, 0xFC49, 0xFC06, 0xFC06, 0xFD4F, 
        0xFEF8, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFDF2, 0xFBC4, 0xFC48, 0xFC48, 
        0xFC47, 0xFCAA, 0xF77D, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xFEB5, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFF3B, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE75, 0xFC06, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC49, 0xFBC5, 
        0xFC48, 0xFDF2, 0xFF7B, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7B, 0xFC48, 0xFC48, 0xFC48, 
        0xFC48, 0xFBC5, 0xFEB5, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xFD90, 0xFBC5, 0xFC48, 0xFC48, 0xFBC5, 0xFD90, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 
        0xFC48, 0xFBC4, 0xFCEB, 0xFE34, 0xF7BE, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFD90, 0xFBC5, 0xFC48, 
        0xFC48, 0xFBC5, 0xFD90, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF77C, 0xFCEB, 0xFC47, 0xFC48, 0xFC48, 0xFC05, 0xFEB5, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 
        0xFC48, 0xFC49, 0xFC07, 0xFBC5, 0xFD2E, 0xFEB7, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEB6, 0xFC05, 0xFC48, 
        0xFC48, 0xFC47, 0xFCEB, 0xF77C, 0xF7FF,
  0xF7FF, 0xFEB7, 0xFC06, 0xFC48, 0xFC48, 0xFC08, 0xFCEA, 0xFFBB, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFC49, 0xFC48, 0xFBC5, 0xFC48, 
        0xFC48, 0xFC48, 0xFC48, 0xFC49, 0xFBC6, 0xFC47, 0xFD91, 0xFF39, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFFBB, 0xFCEA, 0xFC08, 
        0xFC48, 0xFC48, 0xFC07, 0xFEB7, 0xF7FF,
  0xF7FF, 0xFDF3, 0xFBC4, 0xFC48, 0xFC48, 0xFBC6, 0xFD8F, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFC06, 0xFD90, 0xFE33, 0xFC48, 
        0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFCA9, 0xFE73, 0xFFBD, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFD8F, 0xFBC6, 
        0xFC48, 0xFC48, 0xFBC4, 0xFDF3, 0xF7FF,
  0xF7FF, 0xFD4F, 0xFBC5, 0xFC48, 0xFC48, 0xFBC4, 0xFE33, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFBC4, 0xFDF2, 0xF7FF, 0xFEF8, 
        0xFD4F, 0xFC06, 0xFC06, 0xFC49, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFD2C, 0xFEB6, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE33, 0xFBC4, 
        0xFC48, 0xFC48, 0xFBC5, 0xFD4F, 0xF7FF,
  0xF7BE, 0xFCEC, 0xFC07, 0xFC48, 0xFC48, 0xFC06, 0xFEB6, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFBC5, 0xFD4F, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xFE76, 0xFCEC, 0xFBC4, 0xFC47, 0xFC48, 0xFC48, 0xFC48, 0xFC49, 0xFC06, 0xFC06, 0xFD4F, 0xFEF9, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEB6, 0xFC06, 
        0xFC48, 0xFC48, 0xFC07, 0xFCEC, 0xF7BE,
  0xF7BE, 0xFCA9, 0xFC07, 0xFC48, 0xFC48, 0xFCA9, 0xFF3A, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFBC5, 0xFD90, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF77D, 0xFE33, 0xFCA9, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFC48, 0xFDF2, 0xFF3B, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF3A, 0xFCA9, 
        0xFC48, 0xFC48, 0xFC07, 0xFCA9, 0xF7BE,
  0xFF3A, 0xFC48, 0xFC48, 0xFC48, 0xFC07, 0xFCEB, 0xFF7C, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFBC5, 0xFD90, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF3A, 0xFD90, 0xFC07, 0xFBC6, 0xFC49, 0xFC48, 0xFC48, 0xFC49, 0xFC48, 0xFB84, 0xFCEB, 0xFE75, 0xF7FE, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7C, 0xFCAB, 
        0xFC07, 0xFC48, 0xFC48, 0xFC48, 0xFF3A,
  0xFEF9, 0xFC06, 0xFC48, 0xFC48, 0xFC06, 0xFCEC, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFBC5, 0xFD90, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEB7, 0xFD2D, 0xFBC5, 0xFC07, 0xFC49, 0xFC48, 0xFC48, 0xFC49, 0xFC07, 0xFBC5, 0xFD4E, 0xFF7C, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFCEC, 
        0xFC06, 0xFC48, 0xFC48, 0xFC06, 0xFEF9,
  0xFEF9, 0xFC06, 0xFC48, 0xFC48, 0xFC06, 0xFD2D, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFBC5, 0xFD90, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BE, 0xFE34, 0xFD2C, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC49, 0xFB83, 0xFD4F, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFD2D, 
        0xFC06, 0xFC48, 0xFC48, 0xFC05, 0xFEF9,
  0xFEF9, 0xFC05, 0xFC48, 0xFC48, 0xFC06, 0xFD2D, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFBC5, 0xFD90, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF38, 0xFCEA, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC07, 0xFCA9, 0xFF7D, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFD2D, 
        0xFC06, 0xFC48, 0xFC48, 0xFBC4, 0xFEF8,
  0xFEF9, 0xFC06, 0xFC48, 0xFC48, 0xFC06, 0xFD2D, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFBC5, 0xFD90, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BE, 0xFE34, 0xFCEC, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC49, 0xFB83, 0xFD4F, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFDF1, 
        0xFB42, 0xFC48, 0xFC06, 0xFC48, 0xFF7B,
  0xFEF9, 0xFC06, 0xFC48, 0xFC48, 0xFC06, 0xFCEC, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFBC5, 0xFD90, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEB7, 0xFD2D, 0xFBC5, 0xFC07, 0xFC49, 0xFC48, 0xFC48, 0xFC49, 0xFC07, 0xFBC5, 0xFD4E, 0xFF7C, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7C, 
        0xFD90, 0xFCAA, 0xFCEC, 0xFEB6, 0xF7FF,
  0xFF3A, 0xFC48, 0xFC48, 0xFC48, 0xFC07, 0xFCEB, 0xFF7C, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFBC5, 0xFD90, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF3A, 0xFD90, 0xFC07, 0xFBC6, 0xFC49, 0xFC48, 0xFC48, 0xFC49, 0xFC48, 0xFB84, 0xFCEB, 0xFE75, 0xF7FE, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xFF3A, 0xFF7C, 0xF7FF, 0xF7FF,
  0xF7BE, 0xFCA9, 0xFC07, 0xFC48, 0xFC48, 0xFCA9, 0xFF3A, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFBC5, 0xFD90, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF77D, 0xFE33, 0xFCA9, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFC48, 0xFDF2, 0xFF3B, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7BE, 0xFCEC, 0xFC07, 0xFC48, 0xFC48, 0xFC06, 0xFEB6, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFBC5, 0xFD4F, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xFE75, 0xFCEC, 0xFBC4, 0xFC47, 0xFC48, 0xFC48, 0xFC48, 0xFC49, 0xFC06, 0xFC06, 0xFD4F, 0xFEF9, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xFD4F, 0xFBC5, 0xFC48, 0xFC48, 0xFBC4, 0xFE33, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFBC4, 0xFDF2, 0xF7FF, 0xFEF8, 
        0xFD4F, 0xFC06, 0xFC06, 0xFC49, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFD2C, 0xFEB6, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xFDF3, 0xFBC4, 0xFC48, 0xFC48, 0xFBC6, 0xFD8F, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFC06, 0xFD90, 0xFE33, 0xFC48, 
        0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFCA9, 0xFE73, 0xFFBD, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xFEB7, 0xFC07, 0xFC48, 0xFC48, 0xFC08, 0xFCEA, 0xFFBB, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFC49, 0xFC48, 0xFBC5, 0xFC48, 
        0xFC48, 0xFC48, 0xFC48, 0xFC49, 0xFBC6, 0xFC47, 0xFD91, 0xFF39, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF77C, 0xFCEB, 0xFC47, 0xFC48, 0xFC48, 0xFC05, 0xFEB6, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 
        0xFC48, 0xFC49, 0xFC07, 0xFBC5, 0xFD2E, 0xFEB7, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xFD90, 0xFBC5, 0xFC48, 0xFC48, 0xFBC5, 0xFD90, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 
        0xFC48, 0xFBC4, 0xFCEB, 0xFE34, 0xF7BE, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xFEB5, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFF3B, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE75, 0xFC06, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC49, 0xFBC5, 
        0xFC48, 0xFDF2, 0xFF7B, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF77D, 0xFCAA, 0xFC47, 0xFC48, 0xFC48, 0xFBC4, 0xFDF2, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEB6, 0xFBC4, 0xFC48, 0xFC48, 0xFC49, 0xFC06, 0xFC06, 0xFD4F, 
        0xFEF8, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7A, 0xFDF2, 0xFD91, 0xFEF9, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xFDF2, 0xFBC4, 0xFC48, 0xFC48, 0xFC48, 0xFCA9, 0xFF7C, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7C, 0xFCAA, 0xFBC4, 0xFC06, 0xFBC5, 0xFCEC, 0xFE76, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7C, 0xFD2C, 0xFBC4, 0xFB84, 0xFCEA, 
        0xFEF9, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xFF3B, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC4, 0xFD91, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEF8, 0xFD2D, 0xFCEC, 0xFE33, 0xF77D, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFDF1, 0xFB84, 0xFC49, 0xFC48, 0xFB84, 
        0xFD91, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFD91, 0xFBC4, 0xFC48, 0xFC48, 0xFC48, 0xFC06, 0xFEF9, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BE, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEF8, 0xFC06, 0xFC48, 0xFC48, 0xFC48, 0xFB84, 
        0xFDF2, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF3B, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC06, 0xFCEB, 0xF7BD, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7C, 0xFCAB, 0xFC07, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 
        0xFF3A, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE33, 0xFBC4, 0xFC49, 0xFC48, 0xFC49, 0xFBC4, 0xFD91, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFD90, 0xFBC4, 0xFC49, 0xFC48, 0xFC49, 0xFB84, 0xFE33, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BE, 0xFCEC, 0xFC06, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFE75, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE34, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC06, 0xFD2C, 0xF7BE, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEF9, 0xFC07, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC07, 0xFE76, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC06, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC07, 0xFEFA, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE34, 0xFBC4, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC07, 0xFE76, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE76, 0xFC07, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC4, 0xFE34, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFD90, 0xFBC4, 0xFC49, 0xFC48, 0xFC48, 0xFC47, 0xFC06, 0xFE75, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FE, 0xFE34, 0xFC07, 0xFC47, 0xFC48, 0xFC48, 0xFC49, 0xFBC4, 0xFD91, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BD, 0xFD2E, 0xFBC4, 0xFC49, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFD91, 0xF7BD, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BD, 0xFD91, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC49, 0xFBC4, 0xFD4F, 0xF7BD, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BD, 0xFCEC, 0xFBC4, 0xFC49, 0xFC48, 0xFC48, 0xFC48, 0xFBC4, 0xFD2D, 0xFEF8, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEB6, 0xFCEC, 0xFBC5, 0xFC49, 0xFC48, 0xFC48, 0xFC49, 0xFBC4, 0xFCEC, 0xF77D, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7D, 0xFD2D, 0xFB84, 0xFC48, 0xFC48, 0xFC48, 0xFC49, 0xFC06, 0xFC48, 0xFDF2, 0xFF3B, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF3A, 0xFDF1, 0xFC07, 0xFC06, 0xFC49, 0xFC48, 0xFC48, 0xFC48, 0xFB84, 0xFD2D, 0xFF7C, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7C, 0xFD4F, 0xFBC4, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFCAA, 0xFDF3, 0xFF3A, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF39, 0xFDF2, 0xFCA9, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC4, 0xFD90, 0xFF7D, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFE33, 0xFC07, 0xFC06, 0xFC49, 0xFC48, 0xFC48, 0xFC49, 0xFC47, 0xFBC5, 0xFCAA, 0xFDF1, 0xFEB5, 0xFF3A, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF3B, 0xFE76, 0xFD91, 0xFCEA, 0xFBC4, 0xFC47, 0xFC49, 0xFC48, 0xFC48, 0xFC49, 0xFC06, 0xFC06, 0xFDF2, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEB7, 0xFCEC, 0xFBC4, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFC07, 0xFCEB, 0xFD90, 0xFE33, 0xFEB7, 0xFEF8, 0xFF7B, 
        0xF7BD, 0xFFBD, 0xF7BD, 0xF7BD, 0xFEFA, 0xFEF8, 0xFEB7, 0xFE33, 0xFD4F, 0xFCEB, 0xFC06, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC4, 0xFCEC, 0xFEB7, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF7C, 0xFDF2, 0xFC48, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFBC5, 0xFC06, 0xFCA9, 0xFCAA, 
        0xFCEC, 0xFD2C, 0xFCEC, 0xFCAA, 0xFCA9, 0xFCA9, 0xFC06, 0xFBC5, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFC48, 0xFDF2, 0xFF7C, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEF8, 0xFD90, 0xFC48, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC07, 
        0xFC07, 0xFC07, 0xFC07, 0xFC07, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFBC5, 0xFC48, 0xFD90, 0xFEF8, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFEF8, 0xFDF1, 0xFCEB, 0xFC06, 0xFBC5, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 
        0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC47, 0xFBC6, 0xFBC5, 0xFCA9, 0xFD90, 0xFEF8, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF3B, 0xFE75, 0xFD4F, 0xFCAA, 0xFC06, 0xFBC5, 0xFBC5, 0xFC07, 0xFC07, 0xFC48, 
        0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC48, 0xFC07, 0xFBC6, 0xFBC5, 0xFC47, 0xFCAA, 0xFD8E, 0xFE34, 0xFEF9, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xFF3A, 0xFE75, 0xFDF2, 0xFD4E, 0xFCEC, 0xFC48, 0xFC48, 
        0xFC07, 0xFC06, 0xFC06, 0xFC07, 0xFC08, 0xFCA8, 0xFCEA, 0xFD2E, 0xFE32, 0xFEB5, 0xF73A, 0xF7FE, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF,
  0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7BD, 0xFF7C, 0xFEF9, 
        0xFEF9, 0xFEF9, 0xFEF9, 0xFEF9, 0xFEFA, 0xFF7A, 0xF7BD, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 
        0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF, 0xF7FF
};

GUI_CONST_STORAGE GUI_BITMAP bmexp_start = {
  66, // xSize
  67, // ySize
  132, // BytesPerLine
  16, // BitsPerPixel
  (unsigned char *)_acexp_start,  // Pointer to picture data
  NULL,  // Pointer to palette
  GUI_DRAW_BMP565
};

/*************************** End of file ****************************/
