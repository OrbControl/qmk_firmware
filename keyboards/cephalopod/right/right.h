#pragma once

#include "quantum.h"


    /*
     *    ┌───┬───┬───┬───┐  ┌───┬───┬───┬───┐
     *    │F5 │F6 │F7 │F8 │  │F9 │F10│F11│F12│
     *    └───┴───┴───┴───┘  └───┴───┴───┴───┘
     *   ┌───┬───┬───┬───┬───┬───┬───┬───────┐
     *   │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│
     *   └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     *     │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
     *     └┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     *      │ H │ J │ K │ L │ ; │ ' │  Enter │
     *      └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
     *        │ N │ M │ , │ . │ / │    Shift │
     * ┌──────┴───┴┬──┴─┬─┴──┬┴───┼────┬─────┤
     * │           │Bksp│ Alt│ GUI│Caps│ Ctrl│
     * └───────────┴────┴────┴────┴────┴─────┘
     */
       
#define LAYOUT_right( \
	K00,   K01,   K02,   K03,   K04,   K05,   K06,   \
	K10,   K11,   K12,   K13,   K14,   K15,   K16,   \
  K20,   K21,   K22,   K23,   K24,   K25,   K26,   \
	K30,   K31,   K32,   K33,   K34,   K35,   K36,   \
	K40,   K41,   K42,   K43,   K44,   K45,   K46,   \
	K50,   K51,   K52,   K53,   K54,   K55,   K56,   \
                                            K66    \
) { \
  { K00,   K01,   K02,   K03,   K04,   K05,   K06   }, \
  { K10,   K11,   K12,   K13,   K14,   K15,   K16   }, \
  { K20,   K21,   K22,   K23,   K24,   K25,   K26   }, \
  { K30,   K31,   K32,   K33,   K34,   K35,   K36   }, \
  { K40,   K41,   K42,   K43,   K44,   K45,   K46   }, \
  { K50,   K51,   K52,   K53,   K54,   K55,   K56   }, \
  { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K66   }  \
}
       