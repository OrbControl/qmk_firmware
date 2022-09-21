// Copyright 2022 K. (@OrbControl)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 6

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define MANUFACTURER    Orb_Control
#define PRODUCT         Cephalopod_Left_Hand_Side

#define DEBOUNCE 5

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
