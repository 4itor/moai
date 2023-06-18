// Copyright 2023 4itor (@4itor)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// Declare Low Power USB usage
#define USB_MAX_POWER_CONSUMPTION 100

// Combo Settings
#define COMBO_TERM 40
#define EXTRA_SHORT_COMBOS

// Number of layers
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 210

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Reduce firmware size if not onsehot actions
// #define NO_ACTION_ONESHOT

// Max CapsWord lenght
#define CAPS_WORD_IDLE_TIMEOUT 3000
