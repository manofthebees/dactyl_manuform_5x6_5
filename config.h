/*
  Copyright (c) 2020 Fred Silberberg

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#pragma once

#include "config_common.h"

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_COL_PINS { D1, F7, D4, C6, D7, E6 }
#define MATRIX_ROW_PINS { B3, B2, B6, B5, B1, B4 }

#define DIODE_DIRECTION COL2ROW

#define ANALOG_JOYSTICK_X_AXIS_PIN F6
#define ANALOG_JOYSTICK_Y_AXIS_PIN F5
#define ANALOG_JOYSTICK_SPEED_REGULATOR 13
#define ANALOG_JOYSTICK_SPEED_MAX 10
#define ANALOG_JOYSTICK_AXIS_MIN 50
#define POINTING_DEVICE_INVERT_X

#define USE_SERIAL
#define EE_HANDS

#define ONESHOT_TAP_TOGGLE 3
#define ONESHOT_TIMEOUT 2500

#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D0
