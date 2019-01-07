/* --- Generated the 7/1/2019 at 8:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s task pratica05.ept --- */

#ifndef PRATICA05_H
#define PRATICA05_H

#include "pratica05_types.h"
#include "task_controller.h"
typedef struct Pratica05__rad_mem {
  int v_150;
  int v_149;
  int pnr;
} Pratica05__rad_mem;

typedef struct Pratica05__rad_out {
  int power;
  int ss;
} Pratica05__rad_out;

void Pratica05__rad_reset(Pratica05__rad_mem* self);

void Pratica05__rad_step(int up1, int down1, int up2, int down2, int c1,
                         int c2, Pratica05__rad_out* _out,
                         Pratica05__rad_mem* self);

typedef struct Pratica05__police_mem {
  int v_170;
  int v_169;
  int pnr;
} Pratica05__police_mem;

typedef struct Pratica05__police_out {
  int pl;
  int s_2;
  int s_1;
} Pratica05__police_out;

void Pratica05__police_reset(Pratica05__police_mem* self);

void Pratica05__police_step(int eco, int confort,
                            Pratica05__police_out* _out,
                            Pratica05__police_mem* self);

typedef struct Pratica05__ws_mem {
  int v_209;
  int v_208;
  int v_207;
  int pnr;
} Pratica05__ws_mem;

typedef struct Pratica05__ws_out {
  int power;
} Pratica05__ws_out;

void Pratica05__ws_reset(Pratica05__ws_mem* self);

void Pratica05__ws_step(int s, int e, int c, Pratica05__ws_out* _out,
                        Pratica05__ws_mem* self);

typedef struct Pratica05__oven_mem {
  int v_261;
  int v_260;
  int v_259;
  int pnr;
} Pratica05__oven_mem;

typedef struct Pratica05__oven_out {
  int power;
} Pratica05__oven_out;

void Pratica05__oven_reset(Pratica05__oven_mem* self);

void Pratica05__oven_step(int finish, int start, int cold, int temp_ok,
                          int c, Pratica05__oven_out* _out,
                          Pratica05__oven_mem* self);

typedef struct Pratica05__room_mem {
  int ck_1;
  int pnr;
} Pratica05__room_mem;

typedef struct Pratica05__room_out {
  int room_oc;
} Pratica05__room_out;

void Pratica05__room_reset(Pratica05__room_mem* self);

void Pratica05__room_step(int precense, Pratica05__room_out* _out,
                          Pratica05__room_mem* self);

typedef struct Pratica05__fonteLuz_mem {
  int ck_1;
  int pnr;
} Pratica05__fonteLuz_mem;

typedef struct Pratica05__fonteLuz_out {
  int luz_on;
} Pratica05__fonteLuz_out;

void Pratica05__fonteLuz_reset(Pratica05__fonteLuz_mem* self);

void Pratica05__fonteLuz_step(int onn, int c1, int c2,
                              Pratica05__fonteLuz_out* _out,
                              Pratica05__fonteLuz_mem* self);

typedef struct Pratica05__window_mem {
  int ck_1;
  int pnr;
} Pratica05__window_mem;

typedef struct Pratica05__window_out {
  int window_open;
} Pratica05__window_out;

void Pratica05__window_reset(Pratica05__window_mem* self);

void Pratica05__window_step(int push, int c_window,
                            Pratica05__window_out* _out,
                            Pratica05__window_mem* self);

typedef struct Pratica05__door_mem {
  int ck_1;
  int pnr;
} Pratica05__door_mem;

typedef struct Pratica05__door_out {
  int door_open;
} Pratica05__door_out;

void Pratica05__door_reset(Pratica05__door_mem* self);

void Pratica05__door_step(int push, int c_door, Pratica05__door_out* _out,
                          Pratica05__door_mem* self);

typedef struct Pratica05__task_mem {
  int ck_25_1;
  int ck_23_1;
  int ck_21_1;
  int ck_19_1;
  int ck_17_1;
  int v_311;
  int v_310;
  int v_309;
  int v_364;
  int v_363;
  int v_362;
  int v_400;
  int v_399;
  int v_420;
  int v_419;
  int pnr_8;
  int pnr_7;
  int pnr_6;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} Pratica05__task_mem;

typedef struct Pratica05__task_out {
  int pl;
  int p1;
  int p2;
  int p3;
  int ss;
  int sp_2;
  int sp_1;
  int lamp_on;
  int tv_on;
  int room_oc;
  int door_open;
  int window_open;
} Pratica05__task_out;

void Pratica05__task_reset(Pratica05__task_mem* self);

void Pratica05__task_step(int up1, int down1, int up2, int down2, int s,
                          int e, int finish, int start, int cold,
                          int temp_ok, int eco, int confort, int on_lamp,
                          int on_tv, int precense, int push_door,
                          int push_window, Pratica05__task_out* _out,
                          Pratica05__task_mem* self);

#endif // PRATICA05_H
