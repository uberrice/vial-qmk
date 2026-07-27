#pragma once

/*
 * Double-tap RESET to enter the RP2040 UF2 bootloader.
 *
 * Remove these definitions if your development board already implements
 * its own double-tap reset mechanism or if it causes problems.
 */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
