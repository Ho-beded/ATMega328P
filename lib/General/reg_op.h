#pragma once

#include "types.h"

#define SET_BIT(reg, idx)           (*(reg) |=  (1u << (idx)))
#define CLR_BIT(reg, idx)           (*(reg) &= ~(1u << (idx)))
#define WRITE_BIT(reg, idx, val)    (((val) != 0) ? SET_BIT(reg, idx) : CLR_BIT(reg, idx))
#define READ_BIT(reg, idx)          ((*(reg) & (1u << (idx))) != 0)
#define TOGGLE_BIT(reg, idx)        (WRITE_BIT(reg, idx, !READ_BIT(reg, idx)))

#define WRITE_BYTE(reg, val)             (*(reg) = (val))
#define READ_BYTE(reg)              (*(reg))