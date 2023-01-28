// Copyright 2023 TBL (@tehtbl)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5442
#define PRODUCT_ID      0x2023
#define DEVICE_VER		  0x0001
#define MANUFACTURER    tehtbl
#define PRODUCT         macstick

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 7

/* key matrix pins  for beccas board*/
#define MATRIX_ROW_PINS { D1 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0x76, 0xD3, 0x37, 0x24, 0xB0, 0x37, 0x8A, 0x5D}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 2 }
