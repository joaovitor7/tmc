/* --- Generated the 7/1/2019 at 8:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s task pratica05.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Pratica05__task_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int up1;
  int down1;
  int up2;
  int down2;
  int s;
  int e;
  int finish;
  int start;
  int cold;
  int temp_ok;
  int eco;
  int confort;
  int on_lamp;
  int on_tv;
  int precense;
  int push_door;
  int push_window;
  Pratica05__task_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Pratica05__task_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("up1 ? ");
    scanf("%d", &up1);;
    
    printf("down1 ? ");
    scanf("%d", &down1);;
    
    printf("up2 ? ");
    scanf("%d", &up2);;
    
    printf("down2 ? ");
    scanf("%d", &down2);;
    
    printf("s ? ");
    scanf("%d", &s);;
    
    printf("e ? ");
    scanf("%d", &e);;
    
    printf("finish ? ");
    scanf("%d", &finish);;
    
    printf("start ? ");
    scanf("%d", &start);;
    
    printf("cold ? ");
    scanf("%d", &cold);;
    
    printf("temp_ok ? ");
    scanf("%d", &temp_ok);;
    
    printf("eco ? ");
    scanf("%d", &eco);;
    
    printf("confort ? ");
    scanf("%d", &confort);;
    
    printf("on_lamp ? ");
    scanf("%d", &on_lamp);;
    
    printf("on_tv ? ");
    scanf("%d", &on_tv);;
    
    printf("precense ? ");
    scanf("%d", &precense);;
    
    printf("push_door ? ");
    scanf("%d", &push_door);;
    
    printf("push_window ? ");
    scanf("%d", &push_window);;
    Pratica05__task_step(up1, down1, up2, down2, s, e, finish, start, cold,
                         temp_ok, eco, confort, on_lamp, on_tv, precense,
                         push_door, push_window, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.pl);
    printf("=> ");
    printf("%d ", _res.p1);
    printf("=> ");
    printf("%d ", _res.p2);
    printf("=> ");
    printf("%d ", _res.p3);
    printf("=> ");
    printf("%d ", _res.ss);
    printf("=> ");
    printf("%d ", _res.sp_2);
    printf("=> ");
    printf("%d ", _res.sp_1);
    printf("=> ");
    printf("%d ", _res.lamp_on);
    printf("=> ");
    printf("%d ", _res.tv_on);
    printf("=> ");
    printf("%d ", _res.room_oc);
    printf("=> ");
    printf("%d ", _res.door_open);
    printf("=> ");
    printf("%d ", _res.window_open);
    puts("");
    fflush(stdout);
  };
  return 0;
}

