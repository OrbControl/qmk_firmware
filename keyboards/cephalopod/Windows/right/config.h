// Copyright 2022 K. (@OrbControl)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS { F1, F0, D0, D2, B5, C7, B4 }
#define MATRIX_COL_PINS { B6, D1, D6, D7, D3, D5, D4 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define LED_CAPS_LOCK_PIN C6

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
