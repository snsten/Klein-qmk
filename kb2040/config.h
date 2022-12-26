// Copyright 2022 ssh (@snsten)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define I2C_DRIVER I2CD2

#define SERIAL_PIO_USE_PIO1

#ifdef POINTING_DEVICE_ENABLE
    #define POINTING_DEVICE_ROTATION_90
    #define CIRQUE_PINNACLE_DIAMETER_MM 35
    
    #define CIRQUE_PINNACLE_TAP_ENABLE
    #define CIRQUE_PINNACLE_SECONDARY_TAP_ENABLE
    #define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE
    #define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
#endif
