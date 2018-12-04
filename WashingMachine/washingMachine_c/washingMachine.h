/* --- Generated the 26/11/2018 at 8:27 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s onetask washingMachine.ept --- */

#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H

#include "washingMachine_types.h"
typedef struct WashingMachine__washingMachine_mem {
  int v_47;
  int v_46;
  int v_45;
  int pnr;
} WashingMachine__washingMachine_mem;

typedef struct WashingMachine__washingMachine_out {
  int power;
  int stateA;
} WashingMachine__washingMachine_out;

void WashingMachine__washingMachine_reset(WashingMachine__washingMachine_mem* self);

void WashingMachine__washingMachine_step(int e, int s, int c,
                                         WashingMachine__washingMachine_out* _out,
                                         WashingMachine__washingMachine_mem* self);

typedef struct WashingMachine__onetask_mem {
  int v_110;
  int v_109;
  int v_108;
  int pnr;
} WashingMachine__onetask_mem;

typedef struct WashingMachine__onetask_out {
  int p;
  int stateA;
} WashingMachine__onetask_out;

void WashingMachine__onetask_reset(WashingMachine__onetask_mem* self);

void WashingMachine__onetask_step(int e, int s, int c,
                                  WashingMachine__onetask_out* _out,
                                  WashingMachine__onetask_mem* self);

#endif // WASHINGMACHINE_H
