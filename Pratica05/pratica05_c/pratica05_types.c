/* --- Generated the 7/1/2019 at 8:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s task pratica05.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pratica05_types.h"

Pratica05__st_16 Pratica05__st_16_of_string(char* s) {
  if ((strcmp(s, "St_16_MS")==0)) {
    return Pratica05__St_16_MS;
  };
  if ((strcmp(s, "St_16_ECO")==0)) {
    return Pratica05__St_16_ECO;
  };
  if ((strcmp(s, "St_16_CONFORT")==0)) {
    return Pratica05__St_16_CONFORT;
  };
}

char* string_of_Pratica05__st_16(Pratica05__st_16 x, char* buf) {
  switch (x) {
    case Pratica05__St_16_MS:
      strcpy(buf, "St_16_MS");
      break;
    case Pratica05__St_16_ECO:
      strcpy(buf, "St_16_ECO");
      break;
    case Pratica05__St_16_CONFORT:
      strcpy(buf, "St_16_CONFORT");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_15 Pratica05__st_15_of_string(char* s) {
  if ((strcmp(s, "St_15_OFF")==0)) {
    return Pratica05__St_15_OFF;
  };
  if ((strcmp(s, "St_15_HIGHT")==0)) {
    return Pratica05__St_15_HIGHT;
  };
  if ((strcmp(s, "St_15_FROST")==0)) {
    return Pratica05__St_15_FROST;
  };
  if ((strcmp(s, "St_15_ECO")==0)) {
    return Pratica05__St_15_ECO;
  };
}

char* string_of_Pratica05__st_15(Pratica05__st_15 x, char* buf) {
  switch (x) {
    case Pratica05__St_15_OFF:
      strcpy(buf, "St_15_OFF");
      break;
    case Pratica05__St_15_HIGHT:
      strcpy(buf, "St_15_HIGHT");
      break;
    case Pratica05__St_15_FROST:
      strcpy(buf, "St_15_FROST");
      break;
    case Pratica05__St_15_ECO:
      strcpy(buf, "St_15_ECO");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_14 Pratica05__st_14_of_string(char* s) {
  if ((strcmp(s, "St_14_WF")==0)) {
    return Pratica05__St_14_WF;
  };
  if ((strcmp(s, "St_14_WASHING")==0)) {
    return Pratica05__St_14_WASHING;
  };
  if ((strcmp(s, "St_14_STANDBY")==0)) {
    return Pratica05__St_14_STANDBY;
  };
  if ((strcmp(s, "St_14_SPIN")==0)) {
    return Pratica05__St_14_SPIN;
  };
  if ((strcmp(s, "St_14_RINSE")==0)) {
    return Pratica05__St_14_RINSE;
  };
  if ((strcmp(s, "St_14_OFF")==0)) {
    return Pratica05__St_14_OFF;
  };
}

char* string_of_Pratica05__st_14(Pratica05__st_14 x, char* buf) {
  switch (x) {
    case Pratica05__St_14_WF:
      strcpy(buf, "St_14_WF");
      break;
    case Pratica05__St_14_WASHING:
      strcpy(buf, "St_14_WASHING");
      break;
    case Pratica05__St_14_STANDBY:
      strcpy(buf, "St_14_STANDBY");
      break;
    case Pratica05__St_14_SPIN:
      strcpy(buf, "St_14_SPIN");
      break;
    case Pratica05__St_14_RINSE:
      strcpy(buf, "St_14_RINSE");
      break;
    case Pratica05__St_14_OFF:
      strcpy(buf, "St_14_OFF");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_13 Pratica05__st_13_of_string(char* s) {
  if ((strcmp(s, "St_13_STANDBY")==0)) {
    return Pratica05__St_13_STANDBY;
  };
  if ((strcmp(s, "St_13_REHEAT")==0)) {
    return Pratica05__St_13_REHEAT;
  };
  if ((strcmp(s, "St_13_OFF")==0)) {
    return Pratica05__St_13_OFF;
  };
  if ((strcmp(s, "St_13_MAINTAIN")==0)) {
    return Pratica05__St_13_MAINTAIN;
  };
  if ((strcmp(s, "St_13_HEAT")==0)) {
    return Pratica05__St_13_HEAT;
  };
}

char* string_of_Pratica05__st_13(Pratica05__st_13 x, char* buf) {
  switch (x) {
    case Pratica05__St_13_STANDBY:
      strcpy(buf, "St_13_STANDBY");
      break;
    case Pratica05__St_13_REHEAT:
      strcpy(buf, "St_13_REHEAT");
      break;
    case Pratica05__St_13_OFF:
      strcpy(buf, "St_13_OFF");
      break;
    case Pratica05__St_13_MAINTAIN:
      strcpy(buf, "St_13_MAINTAIN");
      break;
    case Pratica05__St_13_HEAT:
      strcpy(buf, "St_13_HEAT");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_12 Pratica05__st_12_of_string(char* s) {
  if ((strcmp(s, "St_12_On")==0)) {
    return Pratica05__St_12_On;
  };
  if ((strcmp(s, "St_12_Off")==0)) {
    return Pratica05__St_12_Off;
  };
}

char* string_of_Pratica05__st_12(Pratica05__st_12 x, char* buf) {
  switch (x) {
    case Pratica05__St_12_On:
      strcpy(buf, "St_12_On");
      break;
    case Pratica05__St_12_Off:
      strcpy(buf, "St_12_Off");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_11 Pratica05__st_11_of_string(char* s) {
  if ((strcmp(s, "St_11_On")==0)) {
    return Pratica05__St_11_On;
  };
  if ((strcmp(s, "St_11_Off")==0)) {
    return Pratica05__St_11_Off;
  };
}

char* string_of_Pratica05__st_11(Pratica05__st_11 x, char* buf) {
  switch (x) {
    case Pratica05__St_11_On:
      strcpy(buf, "St_11_On");
      break;
    case Pratica05__St_11_Off:
      strcpy(buf, "St_11_Off");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_10 Pratica05__st_10_of_string(char* s) {
  if ((strcmp(s, "St_10_Ocupied")==0)) {
    return Pratica05__St_10_Ocupied;
  };
  if ((strcmp(s, "St_10_Empty")==0)) {
    return Pratica05__St_10_Empty;
  };
}

char* string_of_Pratica05__st_10(Pratica05__st_10 x, char* buf) {
  switch (x) {
    case Pratica05__St_10_Ocupied:
      strcpy(buf, "St_10_Ocupied");
      break;
    case Pratica05__St_10_Empty:
      strcpy(buf, "St_10_Empty");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_9 Pratica05__st_9_of_string(char* s) {
  if ((strcmp(s, "St_9_Open")==0)) {
    return Pratica05__St_9_Open;
  };
  if ((strcmp(s, "St_9_Closed")==0)) {
    return Pratica05__St_9_Closed;
  };
}

char* string_of_Pratica05__st_9(Pratica05__st_9 x, char* buf) {
  switch (x) {
    case Pratica05__St_9_Open:
      strcpy(buf, "St_9_Open");
      break;
    case Pratica05__St_9_Closed:
      strcpy(buf, "St_9_Closed");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_8 Pratica05__st_8_of_string(char* s) {
  if ((strcmp(s, "St_8_Open")==0)) {
    return Pratica05__St_8_Open;
  };
  if ((strcmp(s, "St_8_Closed")==0)) {
    return Pratica05__St_8_Closed;
  };
}

char* string_of_Pratica05__st_8(Pratica05__st_8 x, char* buf) {
  switch (x) {
    case Pratica05__St_8_Open:
      strcpy(buf, "St_8_Open");
      break;
    case Pratica05__St_8_Closed:
      strcpy(buf, "St_8_Closed");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_7 Pratica05__st_7_of_string(char* s) {
  if ((strcmp(s, "St_7_Open")==0)) {
    return Pratica05__St_7_Open;
  };
  if ((strcmp(s, "St_7_Closed")==0)) {
    return Pratica05__St_7_Closed;
  };
}

char* string_of_Pratica05__st_7(Pratica05__st_7 x, char* buf) {
  switch (x) {
    case Pratica05__St_7_Open:
      strcpy(buf, "St_7_Open");
      break;
    case Pratica05__St_7_Closed:
      strcpy(buf, "St_7_Closed");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_6 Pratica05__st_6_of_string(char* s) {
  if ((strcmp(s, "St_6_Open")==0)) {
    return Pratica05__St_6_Open;
  };
  if ((strcmp(s, "St_6_Closed")==0)) {
    return Pratica05__St_6_Closed;
  };
}

char* string_of_Pratica05__st_6(Pratica05__st_6 x, char* buf) {
  switch (x) {
    case Pratica05__St_6_Open:
      strcpy(buf, "St_6_Open");
      break;
    case Pratica05__St_6_Closed:
      strcpy(buf, "St_6_Closed");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_5 Pratica05__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_On")==0)) {
    return Pratica05__St_5_On;
  };
  if ((strcmp(s, "St_5_Off")==0)) {
    return Pratica05__St_5_Off;
  };
}

char* string_of_Pratica05__st_5(Pratica05__st_5 x, char* buf) {
  switch (x) {
    case Pratica05__St_5_On:
      strcpy(buf, "St_5_On");
      break;
    case Pratica05__St_5_Off:
      strcpy(buf, "St_5_Off");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_4 Pratica05__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Ocupied")==0)) {
    return Pratica05__St_4_Ocupied;
  };
  if ((strcmp(s, "St_4_Empty")==0)) {
    return Pratica05__St_4_Empty;
  };
}

char* string_of_Pratica05__st_4(Pratica05__st_4 x, char* buf) {
  switch (x) {
    case Pratica05__St_4_Ocupied:
      strcpy(buf, "St_4_Ocupied");
      break;
    case Pratica05__St_4_Empty:
      strcpy(buf, "St_4_Empty");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_3 Pratica05__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_STANDBY")==0)) {
    return Pratica05__St_3_STANDBY;
  };
  if ((strcmp(s, "St_3_REHEAT")==0)) {
    return Pratica05__St_3_REHEAT;
  };
  if ((strcmp(s, "St_3_OFF")==0)) {
    return Pratica05__St_3_OFF;
  };
  if ((strcmp(s, "St_3_MAINTAIN")==0)) {
    return Pratica05__St_3_MAINTAIN;
  };
  if ((strcmp(s, "St_3_HEAT")==0)) {
    return Pratica05__St_3_HEAT;
  };
}

char* string_of_Pratica05__st_3(Pratica05__st_3 x, char* buf) {
  switch (x) {
    case Pratica05__St_3_STANDBY:
      strcpy(buf, "St_3_STANDBY");
      break;
    case Pratica05__St_3_REHEAT:
      strcpy(buf, "St_3_REHEAT");
      break;
    case Pratica05__St_3_OFF:
      strcpy(buf, "St_3_OFF");
      break;
    case Pratica05__St_3_MAINTAIN:
      strcpy(buf, "St_3_MAINTAIN");
      break;
    case Pratica05__St_3_HEAT:
      strcpy(buf, "St_3_HEAT");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_2 Pratica05__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_WF")==0)) {
    return Pratica05__St_2_WF;
  };
  if ((strcmp(s, "St_2_WASHING")==0)) {
    return Pratica05__St_2_WASHING;
  };
  if ((strcmp(s, "St_2_STANDBY")==0)) {
    return Pratica05__St_2_STANDBY;
  };
  if ((strcmp(s, "St_2_SPIN")==0)) {
    return Pratica05__St_2_SPIN;
  };
  if ((strcmp(s, "St_2_RINSE")==0)) {
    return Pratica05__St_2_RINSE;
  };
  if ((strcmp(s, "St_2_OFF")==0)) {
    return Pratica05__St_2_OFF;
  };
}

char* string_of_Pratica05__st_2(Pratica05__st_2 x, char* buf) {
  switch (x) {
    case Pratica05__St_2_WF:
      strcpy(buf, "St_2_WF");
      break;
    case Pratica05__St_2_WASHING:
      strcpy(buf, "St_2_WASHING");
      break;
    case Pratica05__St_2_STANDBY:
      strcpy(buf, "St_2_STANDBY");
      break;
    case Pratica05__St_2_SPIN:
      strcpy(buf, "St_2_SPIN");
      break;
    case Pratica05__St_2_RINSE:
      strcpy(buf, "St_2_RINSE");
      break;
    case Pratica05__St_2_OFF:
      strcpy(buf, "St_2_OFF");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st_1 Pratica05__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_MS")==0)) {
    return Pratica05__St_1_MS;
  };
  if ((strcmp(s, "St_1_ECO")==0)) {
    return Pratica05__St_1_ECO;
  };
  if ((strcmp(s, "St_1_CONFORT")==0)) {
    return Pratica05__St_1_CONFORT;
  };
}

char* string_of_Pratica05__st_1(Pratica05__st_1 x, char* buf) {
  switch (x) {
    case Pratica05__St_1_MS:
      strcpy(buf, "St_1_MS");
      break;
    case Pratica05__St_1_ECO:
      strcpy(buf, "St_1_ECO");
      break;
    case Pratica05__St_1_CONFORT:
      strcpy(buf, "St_1_CONFORT");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__st Pratica05__st_of_string(char* s) {
  if ((strcmp(s, "St_OFF")==0)) {
    return Pratica05__St_OFF;
  };
  if ((strcmp(s, "St_HIGHT")==0)) {
    return Pratica05__St_HIGHT;
  };
  if ((strcmp(s, "St_FROST")==0)) {
    return Pratica05__St_FROST;
  };
  if ((strcmp(s, "St_ECO")==0)) {
    return Pratica05__St_ECO;
  };
}

char* string_of_Pratica05__st(Pratica05__st x, char* buf) {
  switch (x) {
    case Pratica05__St_OFF:
      strcpy(buf, "St_OFF");
      break;
    case Pratica05__St_HIGHT:
      strcpy(buf, "St_HIGHT");
      break;
    case Pratica05__St_FROST:
      strcpy(buf, "St_FROST");
      break;
    case Pratica05__St_ECO:
      strcpy(buf, "St_ECO");
      break;
    default:
      break;
  };
  return buf;
}

Pratica05__spl Pratica05__spl_of_string(char* s) {
  if ((strcmp(s, "S1")==0)) {
    return Pratica05__S1;
  };
  if ((strcmp(s, "S2")==0)) {
    return Pratica05__S2;
  };
  if ((strcmp(s, "S3")==0)) {
    return Pratica05__S3;
  };
}

char* string_of_Pratica05__spl(Pratica05__spl x, char* buf) {
  switch (x) {
    case Pratica05__S1:
      strcpy(buf, "S1");
      break;
    case Pratica05__S2:
      strcpy(buf, "S2");
      break;
    case Pratica05__S3:
      strcpy(buf, "S3");
      break;
    default:
      break;
  };
  return buf;
}

