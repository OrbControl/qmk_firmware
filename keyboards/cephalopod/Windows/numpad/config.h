// Copyright 2022 K. (@OrbControl)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { D6, F7, F6, F5, B4, B5 }
#define MATRIX_COL_PINS { D4, D7, F0, F1, F4, B7 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define LED_SCROLL_LOCK_PIN C6

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
