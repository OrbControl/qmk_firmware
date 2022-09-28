#pragma once

#include "quantum.h"


    /*
     * ┌───┐  ┌───┬───┬───┬───┐
     * │Esc│  │F1 │F2 │F3 │F4 │
     * └───┘  └───┴───┴───┴───┘
     * ┌───┬───┬───┬───┬───┬───┐
     * │ Row 1 is deleted      │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┐
     * │ Tab │ Q │ W │ E │ R │ T │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┐
     * │ Caps │ A │ S │ D │ F │ G │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┐
     * │ Shift  │ Z │ X │ C │ V │ B │
     * ├─────┬──┴─┬─┴──┬┴───┼───┴───┴───┐
     * │Ctrl │GUI │Alt │    │           │
     * └─────┴────┴────┴────┴───────────┘
     */
#define LAYOUT_left( \
	K00,          K02,   K03,   K04,   K05,   \
	
	K20,   K21,   K22,   K23,   K24,   K25,   \
	K30,   K31,   K32,   K33,   K34,   K35,   \
	K40,   K41,   K42,   K43,   K44,   K45,   \
	K50,   K51,   K52,   K53,          K55    \
) { \
  { K00,   KC_NO, K02,   K03,   K04,   K05   }, \

  { K20,   K21,   K22,   K23,   K24,   K25   }, \
  { K30,   K31,   K32,   K33,   K34,   K35   }, \
  { K40,   K41,   K42,   K43,   K44,   K45   }, \
  { K50,   K51,   K52,   K53,   KC_NO, K55   }  \
}