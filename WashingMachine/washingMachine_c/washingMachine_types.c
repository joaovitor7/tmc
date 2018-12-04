/* --- Generated the 26/11/2018 at 8:27 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s onetask washingMachine.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "washingMachine_types.h"

WashingMachine__st_1 WashingMachine__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_WaterFill")==0)) {
    return WashingMachine__St_1_WaterFill;
  };
  if ((strcmp(s, "St_1_Washing")==0)) {
    return WashingMachine__St_1_Washing;
  };
  if ((strcmp(s, "St_1_StandBy")==0)) {
    return WashingMachine__St_1_StandBy;
  };
  if ((strcmp(s, "St_1_Spin")==0)) {
    return WashingMachine__St_1_Spin;
  };
  if ((strcmp(s, "St_1_Rise")==0)) {
    return WashingMachine__St_1_Rise;
  };
  if ((strcmp(s, "St_1_Off")==0)) {
    return WashingMachine__St_1_Off;
  };
}

char* string_of_WashingMachine__st_1(WashingMachine__st_1 x, char* buf) {
  switch (x) {
    case WashingMachine__St_1_WaterFill:
      strcpy(buf, "St_1_WaterFill");
      break;
    case WashingMachine__St_1_Washing:
      strcpy(buf, "St_1_Washing");
      break;
    case WashingMachine__St_1_StandBy:
      strcpy(buf, "St_1_StandBy");
      break;
    case WashingMachine__St_1_Spin:
      strcpy(buf, "St_1_Spin");
      break;
    case WashingMachine__St_1_Rise:
      strcpy(buf, "St_1_Rise");
      break;
    case WashingMachine__St_1_Off:
      strcpy(buf, "St_1_Off");
      break;
    default:
      break;
  };
  return buf;
}

WashingMachine__st WashingMachine__st_of_string(char* s) {
  if ((strcmp(s, "St_WaterFill")==0)) {
    return WashingMachine__St_WaterFill;
  };
  if ((strcmp(s, "St_Washing")==0)) {
    return WashingMachine__St_Washing;
  };
  if ((strcmp(s, "St_StandBy")==0)) {
    return WashingMachine__St_StandBy;
  };
  if ((strcmp(s, "St_Spin")==0)) {
    return WashingMachine__St_Spin;
  };
  if ((strcmp(s, "St_Rise")==0)) {
    return WashingMachine__St_Rise;
  };
  if ((strcmp(s, "St_Off")==0)) {
    return WashingMachine__St_Off;
  };
}

char* string_of_WashingMachine__st(WashingMachine__st x, char* buf) {
  switch (x) {
    case WashingMachine__St_WaterFill:
      strcpy(buf, "St_WaterFill");
      break;
    case WashingMachine__St_Washing:
      strcpy(buf, "St_Washing");
      break;
    case WashingMachine__St_StandBy:
      strcpy(buf, "St_StandBy");
      break;
    case WashingMachine__St_Spin:
      strcpy(buf, "St_Spin");
      break;
    case WashingMachine__St_Rise:
      strcpy(buf, "St_Rise");
      break;
    case WashingMachine__St_Off:
      strcpy(buf, "St_Off");
      break;
    default:
      break;
  };
  return buf;
}

