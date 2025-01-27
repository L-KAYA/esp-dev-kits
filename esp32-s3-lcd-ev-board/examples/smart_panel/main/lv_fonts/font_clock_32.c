#include "lvgl.h"

/*******************************************************************************
 * Size: 32 px
 * Bpp: 4
 * Opts:
 ******************************************************************************/

#ifndef FONT_CLOCK_32
#define FONT_CLOCK_32 1
#endif

#if FONT_CLOCK_32

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */

    /* U+2D "-" */
    0x37, 0x77, 0x77, 0x77, 0x76, 0x7f, 0xff, 0xff,
    0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xfe, 0x7f,
    0xff, 0xff, 0xff, 0xfe,

    /* U+30 "0" */
    0x0, 0x0, 0x3a, 0xdf, 0xfd, 0x92, 0x0, 0x0,
    0x0, 0x8, 0xff, 0xff, 0xff, 0xff, 0x50, 0x0,
    0x0, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x0,
    0x2, 0xff, 0xff, 0x61, 0x28, 0xff, 0xfe, 0x0,
    0xa, 0xff, 0xf3, 0x0, 0x0, 0x7f, 0xff, 0x60,
    0xf, 0xff, 0xb0, 0x0, 0x0, 0xe, 0xff, 0xc0,
    0x4f, 0xff, 0x50, 0x0, 0x0, 0x9, 0xff, 0xf1,
    0x8f, 0xff, 0x10, 0x0, 0x0, 0x5, 0xff, 0xf4,
    0xaf, 0xff, 0x0, 0x0, 0x0, 0x3, 0xff, 0xf6,
    0xcf, 0xfd, 0x0, 0x0, 0x0, 0x1, 0xff, 0xf8,
    0xcf, 0xfd, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf9,
    0xdf, 0xfc, 0x0, 0x0, 0x0, 0x0, 0xff, 0xfa,
    0xcf, 0xfd, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf9,
    0xcf, 0xfd, 0x0, 0x0, 0x0, 0x1, 0xff, 0xf8,
    0xaf, 0xff, 0x0, 0x0, 0x0, 0x3, 0xff, 0xf6,
    0x8f, 0xff, 0x10, 0x0, 0x0, 0x5, 0xff, 0xf4,
    0x4f, 0xff, 0x50, 0x0, 0x0, 0x9, 0xff, 0xf1,
    0xf, 0xff, 0xb0, 0x0, 0x0, 0xe, 0xff, 0xc0,
    0xa, 0xff, 0xf3, 0x0, 0x0, 0x7f, 0xff, 0x60,
    0x2, 0xff, 0xff, 0x61, 0x28, 0xff, 0xfe, 0x0,
    0x0, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x0,
    0x0, 0x8, 0xff, 0xff, 0xff, 0xff, 0x50, 0x0,
    0x0, 0x0, 0x3a, 0xef, 0xfd, 0x92, 0x0, 0x0,

    /* U+31 "1" */
    0x0, 0x0, 0x0, 0xe, 0xff, 0x30, 0x0, 0x0,
    0x5, 0xff, 0xf3, 0x0, 0x0, 0x3, 0xef, 0xff,
    0x30, 0x1, 0x4a, 0xff, 0xff, 0xf3, 0x4f, 0xff,
    0xff, 0xff, 0xff, 0x34, 0xff, 0xff, 0xff, 0xff,
    0xf3, 0x4f, 0xff, 0xff, 0xff, 0xff, 0x30, 0x0,
    0x0, 0xc, 0xff, 0xf3, 0x0, 0x0, 0x0, 0xcf,
    0xff, 0x30, 0x0, 0x0, 0xc, 0xff, 0xf3, 0x0,
    0x0, 0x0, 0xcf, 0xff, 0x30, 0x0, 0x0, 0xc,
    0xff, 0xf3, 0x0, 0x0, 0x0, 0xcf, 0xff, 0x30,
    0x0, 0x0, 0xc, 0xff, 0xf3, 0x0, 0x0, 0x0,
    0xcf, 0xff, 0x30, 0x0, 0x0, 0xc, 0xff, 0xf3,
    0x0, 0x0, 0x0, 0xcf, 0xff, 0x30, 0x0, 0x0,
    0xc, 0xff, 0xf3, 0x0, 0x0, 0x0, 0xcf, 0xff,
    0x30, 0x0, 0x0, 0xc, 0xff, 0xf3, 0x0, 0x0,
    0x0, 0xcf, 0xff, 0x30, 0x0, 0x0, 0xc, 0xff,
    0xf3, 0x0, 0x0, 0x0, 0xcf, 0xff, 0x30,

    /* U+32 "2" */
    0x0, 0x0, 0x18, 0xce, 0xfe, 0xb6, 0x0, 0x0,
    0x0, 0x5, 0xff, 0xff, 0xff, 0xff, 0xe3, 0x0,
    0x0, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x20,
    0x1, 0xff, 0xff, 0x72, 0x13, 0xbf, 0xff, 0xb0,
    0x8, 0xff, 0xf5, 0x0, 0x0, 0xc, 0xff, 0xf2,
    0xe, 0xff, 0xd0, 0x0, 0x0, 0x5, 0xff, 0xf6,
    0x2f, 0xff, 0x90, 0x0, 0x0, 0x2, 0xff, 0xf8,
    0x4f, 0xff, 0x60, 0x0, 0x0, 0x2, 0xff, 0xf8,
    0x3b, 0xbb, 0x30, 0x0, 0x0, 0x5, 0xff, 0xf6,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0xf1,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0x90,
    0x0, 0x0, 0x0, 0x0, 0xa, 0xff, 0xfd, 0x0,
    0x0, 0x0, 0x0, 0x2, 0xdf, 0xff, 0xe2, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xfc, 0x10, 0x0,
    0x0, 0x0, 0x1c, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x3, 0xef, 0xff, 0xd3, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xf9, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xef, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0,
    0x9, 0xff, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xd4, 0x44, 0x44, 0x44, 0x44, 0x42,
    0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
    0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
    0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,

    /* U+33 "3" */
    0x0, 0x0, 0x4, 0xae, 0xff, 0xd9, 0x30, 0x0,
    0x0, 0x0, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xa0,
    0x0, 0x0, 0xc, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x8, 0xff, 0xfc, 0x41, 0x27, 0xef,
    0xff, 0x60, 0x0, 0xff, 0xfd, 0x0, 0x0, 0x3,
    0xff, 0xfc, 0x0, 0x5f, 0xff, 0x50, 0x0, 0x0,
    0xd, 0xff, 0xd0, 0x8, 0xff, 0xf1, 0x0, 0x0,
    0x0, 0xcf, 0xfc, 0x0, 0x25, 0x55, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0x90, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5e, 0xff, 0xf2, 0x0, 0x0, 0x0, 0x0,
    0x7c, 0xef, 0xff, 0xe4, 0x0, 0x0, 0x0, 0x0,
    0xb, 0xff, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0xff, 0xfd, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x2, 0x5b, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x9, 0xff, 0xf5, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xa0,
    0xde, 0xe9, 0x0, 0x0, 0x0, 0x0, 0xef, 0xfc,
    0xe, 0xff, 0xc0, 0x0, 0x0, 0x0, 0xe, 0xff,
    0xc0, 0xaf, 0xff, 0x10, 0x0, 0x0, 0x2, 0xff,
    0xfa, 0x6, 0xff, 0xf9, 0x0, 0x0, 0x0, 0xbf,
    0xff, 0x50, 0xe, 0xff, 0xfb, 0x31, 0x15, 0xcf,
    0xff, 0xd0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xe2, 0x0, 0x0, 0x3e, 0xff, 0xff, 0xff,
    0xff, 0xb1, 0x0, 0x0, 0x0, 0x6, 0xbe, 0xff,
    0xd9, 0x40, 0x0, 0x0,

    /* U+34 "4" */
    0x0, 0x0, 0x0, 0x0, 0x1, 0xef, 0xfd, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xd0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x5f, 0xff, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1e, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0xa, 0xff, 0xef,
    0xfd, 0x0, 0x0, 0x0, 0x0, 0x5, 0xff, 0xba,
    0xff, 0xd0, 0x0, 0x0, 0x0, 0x1, 0xef, 0xf1,
    0xaf, 0xfd, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xf6,
    0xa, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x5f, 0xfc,
    0x0, 0xaf, 0xfd, 0x0, 0x0, 0x0, 0x1f, 0xff,
    0x20, 0xa, 0xff, 0xd0, 0x0, 0x0, 0xb, 0xff,
    0x70, 0x0, 0xaf, 0xfd, 0x0, 0x0, 0x6, 0xff,
    0xd0, 0x0, 0xa, 0xff, 0xd0, 0x0, 0x2, 0xff,
    0xf3, 0x0, 0x0, 0xaf, 0xfd, 0x0, 0x0, 0xbf,
    0xf8, 0x0, 0x0, 0xa, 0xff, 0xd0, 0x0, 0x3f,
    0xfd, 0x0, 0x0, 0x0, 0xaf, 0xfd, 0x0, 0x3,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xb3, 0xee, 0xee, 0xee, 0xee, 0xef, 0xff, 0xfe,
    0xea, 0x0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xaf,
    0xfd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa,
    0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xaf, 0xfd, 0x0, 0x0,

    /* U+35 "5" */
    0x0, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x0, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x0, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x0, 0xcf, 0xfb, 0x44, 0x44, 0x44, 0x44, 0x20,
    0x0, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x5, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xc0, 0x7c, 0xdc, 0xa5, 0x0, 0x0,
    0xc, 0xff, 0xbe, 0xff, 0xff, 0xff, 0xd2, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x10,
    0x2f, 0xff, 0xf9, 0x20, 0x15, 0xdf, 0xff, 0xa0,
    0x5f, 0xff, 0x80, 0x0, 0x0, 0x1e, 0xff, 0xf2,
    0x2, 0x22, 0x0, 0x0, 0x0, 0x6, 0xff, 0xf6,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xf9,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xfa,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xfa,
    0xcf, 0xfd, 0x0, 0x0, 0x0, 0x2, 0xff, 0xf8,
    0xaf, 0xff, 0x20, 0x0, 0x0, 0x7, 0xff, 0xf4,
    0x6f, 0xff, 0xb0, 0x0, 0x0, 0x1e, 0xff, 0xe0,
    0xe, 0xff, 0xfb, 0x41, 0x15, 0xdf, 0xff, 0x60,
    0x4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x0,
    0x0, 0x3d, 0xff, 0xff, 0xff, 0xff, 0x90, 0x0,
    0x0, 0x0, 0x6b, 0xef, 0xfd, 0x93, 0x0, 0x0,

    /* U+36 "6" */
    0x0, 0x0, 0x6, 0xbe, 0xfe, 0xb5, 0x0, 0x0,
    0x0, 0x2, 0xdf, 0xff, 0xff, 0xff, 0xc1, 0x0,
    0x0, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x10,
    0x0, 0xdf, 0xff, 0x82, 0x14, 0xcf, 0xff, 0x90,
    0x6, 0xff, 0xf5, 0x0, 0x0, 0xd, 0xff, 0xf0,
    0xd, 0xff, 0xc0, 0x0, 0x0, 0x8, 0xff, 0xf3,
    0x3f, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xaf, 0xff, 0x2, 0x9e, 0xfe, 0xc7, 0x0, 0x0,
    0xcf, 0xfd, 0x5f, 0xff, 0xff, 0xff, 0xe3, 0x0,
    0xdf, 0xfd, 0xff, 0xff, 0xef, 0xff, 0xff, 0x20,
    0xef, 0xff, 0xfc, 0x30, 0x2, 0xbf, 0xff, 0xb0,
    0xdf, 0xff, 0xe0, 0x0, 0x0, 0xc, 0xff, 0xf3,
    0xdf, 0xff, 0x60, 0x0, 0x0, 0x4, 0xff, 0xf7,
    0xbf, 0xff, 0x20, 0x0, 0x0, 0x0, 0xff, 0xfa,
    0x9f, 0xff, 0x10, 0x0, 0x0, 0x0, 0xff, 0xfa,
    0x6f, 0xff, 0x30, 0x0, 0x0, 0x0, 0xff, 0xf9,
    0x2f, 0xff, 0x80, 0x0, 0x0, 0x5, 0xff, 0xf6,
    0xc, 0xff, 0xf2, 0x0, 0x0, 0xd, 0xff, 0xf2,
    0x5, 0xff, 0xfe, 0x61, 0x14, 0xdf, 0xff, 0xa0,
    0x0, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x0,
    0x0, 0x9, 0xff, 0xff, 0xff, 0xff, 0xc1, 0x0,
    0x0, 0x0, 0x39, 0xde, 0xfe, 0xa5, 0x0, 0x0,

    /* U+37 "7" */
    0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7,
    0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7,
    0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7,
    0x34, 0x44, 0x44, 0x44, 0x44, 0x4a, 0xff, 0xf2,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4f, 0xff, 0x40,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xef, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6f, 0xff, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xf9, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9, 0xff, 0xe1, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2f, 0xff, 0x70, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xaf, 0xff, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x9, 0xff, 0xf2, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0xff, 0x70, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xaf, 0xff, 0x30, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x9, 0xff, 0xf5, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xd, 0xff, 0xf2, 0x0, 0x0, 0x0, 0x0,

    /* U+38 "8" */
    0x0, 0x0, 0x6, 0xbe, 0xff, 0xea, 0x50, 0x0,
    0x0, 0x0, 0x3e, 0xff, 0xff, 0xff, 0xff, 0xc1,
    0x0, 0x0, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xd0, 0x0, 0x9, 0xff, 0xfb, 0x20, 0x3, 0xdf,
    0xff, 0x60, 0x0, 0xef, 0xfd, 0x0, 0x0, 0x1,
    0xff, 0xfb, 0x0, 0xf, 0xff, 0x70, 0x0, 0x0,
    0xb, 0xff, 0xd0, 0x0, 0xff, 0xf7, 0x0, 0x0,
    0x0, 0xaf, 0xfc, 0x0, 0xd, 0xff, 0xb0, 0x0,
    0x0, 0xe, 0xff, 0x90, 0x0, 0x5f, 0xff, 0x80,
    0x0, 0x1a, 0xff, 0xf2, 0x0, 0x0, 0x7f, 0xff,
    0xfc, 0xdf, 0xff, 0xe4, 0x0, 0x0, 0x0, 0x6f,
    0xff, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x1, 0xdf,
    0xff, 0xff, 0xff, 0xff, 0xfb, 0x0, 0x1, 0xef,
    0xff, 0x93, 0x0, 0x4b, 0xff, 0xfb, 0x0, 0x8f,
    0xff, 0x70, 0x0, 0x0, 0xa, 0xff, 0xf5, 0xd,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xa0,
    0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0xef, 0xfc,
    0xf, 0xff, 0xa0, 0x0, 0x0, 0x0, 0xe, 0xff,
    0xb0, 0xdf, 0xfe, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xfa, 0x9, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x9f,
    0xff, 0x50, 0x2f, 0xff, 0xf8, 0x10, 0x2, 0xaf,
    0xff, 0xd0, 0x0, 0x5f, 0xff, 0xff, 0xef, 0xff,
    0xff, 0xf3, 0x0, 0x0, 0x5e, 0xff, 0xff, 0xff,
    0xff, 0xd2, 0x0, 0x0, 0x0, 0x6, 0xbe, 0xff,
    0xda, 0x50, 0x0, 0x0,

    /* U+39 "9" */
    0x0, 0x0, 0x6b, 0xef, 0xed, 0x82, 0x0, 0x0,
    0x0, 0x3e, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0,
    0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x0,
    0xd, 0xff, 0xfa, 0x31, 0x27, 0xff, 0xff, 0x20,
    0x5f, 0xff, 0xa0, 0x0, 0x0, 0x4f, 0xff, 0x90,
    0xaf, 0xff, 0x20, 0x0, 0x0, 0xa, 0xff, 0xe0,
    0xdf, 0xfd, 0x0, 0x0, 0x0, 0x6, 0xff, 0xf3,
    0xef, 0xfc, 0x0, 0x0, 0x0, 0x5, 0xff, 0xf6,
    0xdf, 0xfe, 0x0, 0x0, 0x0, 0x6, 0xff, 0xf8,
    0xaf, 0xff, 0x20, 0x0, 0x0, 0xb, 0xff, 0xf9,
    0x6f, 0xff, 0xa0, 0x0, 0x0, 0x4f, 0xff, 0xfa,
    0xe, 0xff, 0xfa, 0x20, 0x16, 0xff, 0xff, 0xfb,
    0x4, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xfa,
    0x0, 0x4e, 0xff, 0xff, 0xff, 0xc2, 0xff, 0xf9,
    0x0, 0x0, 0x6b, 0xdd, 0xb6, 0x3, 0xff, 0xf7,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0xff, 0xf4,
    0x12, 0x22, 0x0, 0x0, 0x0, 0x9, 0xff, 0xf0,
    0x6f, 0xff, 0x40, 0x0, 0x0, 0x1f, 0xff, 0xa0,
    0x3f, 0xff, 0xb0, 0x0, 0x0, 0xaf, 0xff, 0x30,
    0xc, 0xff, 0xfa, 0x31, 0x3a, 0xff, 0xfa, 0x0,
    0x2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x0,
    0x0, 0x3e, 0xff, 0xff, 0xff, 0xfb, 0x10, 0x0,
    0x0, 0x0, 0x7c, 0xff, 0xeb, 0x50, 0x0, 0x0,

    /* U+3A ":" */
    0x35, 0x55, 0x3c, 0xff, 0xfa, 0xcf, 0xff, 0xac,
    0xff, 0xfa, 0xcf, 0xff, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x45, 0x55,
    0x3c, 0xff, 0xfa, 0xcf, 0xff, 0xac, 0xff, 0xfa,
    0xcf, 0xff, 0xa0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 142, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 199, .box_w = 10, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 20, .adv_w = 285, .box_w = 16, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 285, .box_w = 11, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 285, .box_w = 16, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 285, .box_w = 17, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 285, .box_w = 17, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 907, .adv_w = 285, .box_w = 16, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 285, .box_w = 16, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1275, .adv_w = 285, .box_w = 16, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1459, .adv_w = 285, .box_w = 17, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1655, .adv_w = 285, .box_w = 16, .box_h = 23, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1839, .adv_w = 142, .box_w = 5, .box_h = 17, .ofs_x = 2, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0xd
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 14, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 3,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t font_clock_32 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 23,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -4,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if FONT_CLOCK_32*/

