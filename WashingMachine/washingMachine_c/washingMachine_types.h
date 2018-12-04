/* --- Generated the 26/11/2018 at 8:27 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s onetask washingMachine.ept --- */

#ifndef WASHINGMACHINE_TYPES_H
#define WASHINGMACHINE_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  WashingMachine__St_1_WaterFill,
  WashingMachine__St_1_Washing,
  WashingMachine__St_1_StandBy,
  WashingMachine__St_1_Spin,
  WashingMachine__St_1_Rise,
  WashingMachine__St_1_Off
} WashingMachine__st_1;

WashingMachine__st_1 WashingMachine__st_1_of_string(char* s);

char* string_of_WashingMachine__st_1(WashingMachine__st_1 x, char* buf);

typedef enum {
  WashingMachine__St_WaterFill,
  WashingMachine__St_Washing,
  WashingMachine__St_StandBy,
  WashingMachine__St_Spin,
  WashingMachine__St_Rise,
  WashingMachine__St_Off
} WashingMachine__st;

WashingMachine__st WashingMachine__st_of_string(char* s);

char* string_of_WashingMachine__st(WashingMachine__st x, char* buf);

#endif // WASHINGMACHINE_TYPES_H
