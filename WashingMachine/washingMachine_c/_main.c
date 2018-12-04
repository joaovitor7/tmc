/* --- Generated the 26/11/2018 at 8:27 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s onetask washingMachine.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

WashingMachine__onetask_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int e;
  int s;
  int c;
  WashingMachine__onetask_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  WashingMachine__onetask_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("e ? ");
    scanf("%d", &e);;
    
    printf("s ? ");
    scanf("%d", &s);;
    
    printf("c ? ");
    scanf("%d", &c);;
    WashingMachine__onetask_step(e, s, c, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.p);
    printf("=> ");
    printf("%d ", _res.stateA);
    puts("");
    fflush(stdout);
  };
  return 0;
}

