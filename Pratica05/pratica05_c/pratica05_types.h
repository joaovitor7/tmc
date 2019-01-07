/* --- Generated the 7/1/2019 at 8:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s task pratica05.ept --- */

#ifndef PRATICA05_TYPES_H
#define PRATICA05_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "task_controller.h"
typedef enum {
  Pratica05__St_16_MS,
  Pratica05__St_16_ECO,
  Pratica05__St_16_CONFORT
} Pratica05__st_16;

Pratica05__st_16 Pratica05__st_16_of_string(char* s);

char* string_of_Pratica05__st_16(Pratica05__st_16 x, char* buf);

typedef enum {
  Pratica05__St_15_OFF,
  Pratica05__St_15_HIGHT,
  Pratica05__St_15_FROST,
  Pratica05__St_15_ECO
} Pratica05__st_15;

Pratica05__st_15 Pratica05__st_15_of_string(char* s);

char* string_of_Pratica05__st_15(Pratica05__st_15 x, char* buf);

typedef enum {
  Pratica05__St_14_WF,
  Pratica05__St_14_WASHING,
  Pratica05__St_14_STANDBY,
  Pratica05__St_14_SPIN,
  Pratica05__St_14_RINSE,
  Pratica05__St_14_OFF
} Pratica05__st_14;

Pratica05__st_14 Pratica05__st_14_of_string(char* s);

char* string_of_Pratica05__st_14(Pratica05__st_14 x, char* buf);

typedef enum {
  Pratica05__St_13_STANDBY,
  Pratica05__St_13_REHEAT,
  Pratica05__St_13_OFF,
  Pratica05__St_13_MAINTAIN,
  Pratica05__St_13_HEAT
} Pratica05__st_13;

Pratica05__st_13 Pratica05__st_13_of_string(char* s);

char* string_of_Pratica05__st_13(Pratica05__st_13 x, char* buf);

typedef enum {
  Pratica05__St_12_On,
  Pratica05__St_12_Off
} Pratica05__st_12;

Pratica05__st_12 Pratica05__st_12_of_string(char* s);

char* string_of_Pratica05__st_12(Pratica05__st_12 x, char* buf);

typedef enum {
  Pratica05__St_11_On,
  Pratica05__St_11_Off
} Pratica05__st_11;

Pratica05__st_11 Pratica05__st_11_of_string(char* s);

char* string_of_Pratica05__st_11(Pratica05__st_11 x, char* buf);

typedef enum {
  Pratica05__St_10_Ocupied,
  Pratica05__St_10_Empty
} Pratica05__st_10;

Pratica05__st_10 Pratica05__st_10_of_string(char* s);

char* string_of_Pratica05__st_10(Pratica05__st_10 x, char* buf);

typedef enum {
  Pratica05__St_9_Open,
  Pratica05__St_9_Closed
} Pratica05__st_9;

Pratica05__st_9 Pratica05__st_9_of_string(char* s);

char* string_of_Pratica05__st_9(Pratica05__st_9 x, char* buf);

typedef enum {
  Pratica05__St_8_Open,
  Pratica05__St_8_Closed
} Pratica05__st_8;

Pratica05__st_8 Pratica05__st_8_of_string(char* s);

char* string_of_Pratica05__st_8(Pratica05__st_8 x, char* buf);

typedef enum {
  Pratica05__St_7_Open,
  Pratica05__St_7_Closed
} Pratica05__st_7;

Pratica05__st_7 Pratica05__st_7_of_string(char* s);

char* string_of_Pratica05__st_7(Pratica05__st_7 x, char* buf);

typedef enum {
  Pratica05__St_6_Open,
  Pratica05__St_6_Closed
} Pratica05__st_6;

Pratica05__st_6 Pratica05__st_6_of_string(char* s);

char* string_of_Pratica05__st_6(Pratica05__st_6 x, char* buf);

typedef enum {
  Pratica05__St_5_On,
  Pratica05__St_5_Off
} Pratica05__st_5;

Pratica05__st_5 Pratica05__st_5_of_string(char* s);

char* string_of_Pratica05__st_5(Pratica05__st_5 x, char* buf);

typedef enum {
  Pratica05__St_4_Ocupied,
  Pratica05__St_4_Empty
} Pratica05__st_4;

Pratica05__st_4 Pratica05__st_4_of_string(char* s);

char* string_of_Pratica05__st_4(Pratica05__st_4 x, char* buf);

typedef enum {
  Pratica05__St_3_STANDBY,
  Pratica05__St_3_REHEAT,
  Pratica05__St_3_OFF,
  Pratica05__St_3_MAINTAIN,
  Pratica05__St_3_HEAT
} Pratica05__st_3;

Pratica05__st_3 Pratica05__st_3_of_string(char* s);

char* string_of_Pratica05__st_3(Pratica05__st_3 x, char* buf);

typedef enum {
  Pratica05__St_2_WF,
  Pratica05__St_2_WASHING,
  Pratica05__St_2_STANDBY,
  Pratica05__St_2_SPIN,
  Pratica05__St_2_RINSE,
  Pratica05__St_2_OFF
} Pratica05__st_2;

Pratica05__st_2 Pratica05__st_2_of_string(char* s);

char* string_of_Pratica05__st_2(Pratica05__st_2 x, char* buf);

typedef enum {
  Pratica05__St_1_MS,
  Pratica05__St_1_ECO,
  Pratica05__St_1_CONFORT
} Pratica05__st_1;

Pratica05__st_1 Pratica05__st_1_of_string(char* s);

char* string_of_Pratica05__st_1(Pratica05__st_1 x, char* buf);

typedef enum {
  Pratica05__St_OFF,
  Pratica05__St_HIGHT,
  Pratica05__St_FROST,
  Pratica05__St_ECO
} Pratica05__st;

Pratica05__st Pratica05__st_of_string(char* s);

char* string_of_Pratica05__st(Pratica05__st x, char* buf);

typedef enum {
  Pratica05__S1,
  Pratica05__S2,
  Pratica05__S3
} Pratica05__spl;

Pratica05__spl Pratica05__spl_of_string(char* s);

char* string_of_Pratica05__spl(Pratica05__spl x, char* buf);

#endif // PRATICA05_TYPES_H
