#pragma once
#include "config_common.h"

#define MATRIX_ROWS 5
#define MATRIX_COLS 14
#define DIODE_DIRECTION COL2ROW

/* RP2040 flash size (あなたの基板仕様に合わせる) */
#define PICO_FLASH_SIZE_BYTES (1 * 1024 * 1024)  /* ← 以前の値が1MBだったので同じに */
