/* --- Generated the 26/11/2018 at 8:27 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s onetask washingMachine.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "washingMachine.h"

void WashingMachine__washingMachine_reset(WashingMachine__washingMachine_mem* self) {
  self->pnr = false;
  self->v_45 = true;
  self->v_46 = true;
  self->v_47 = true;
}

void WashingMachine__washingMachine_step(int e, int s, int c,
                                         WashingMachine__washingMachine_out* _out,
                                         WashingMachine__washingMachine_mem* self) {
  
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int ns_St_Spin_2_0;
  int ns_St_Spin_3_0_0;
  int ns_St_Spin_3_0_1;
  int ns_St_Spin_2_1;
  int ns_St_Spin_3_1_0;
  int ns_St_Spin_3_1_1;
  int ns_St_Rise_2_0;
  int ns_St_Rise_3_0_0;
  int ns_St_Rise_3_0_1;
  int ns_St_Rise_2_1;
  int ns_St_Rise_3_1_0;
  int ns_St_Rise_3_1_1;
  int ns_St_Washing_2_0;
  int ns_St_Washing_3_0_0;
  int ns_St_Washing_3_0_1;
  int ns_St_Washing_2_1;
  int ns_St_Washing_3_1_0;
  int ns_St_Washing_3_1_1;
  int ns_St_StandBy_2_0;
  int ns_St_StandBy_3_0_0;
  int ns_St_StandBy_3_0_1;
  int ns_St_StandBy_2_1;
  int ns_St_StandBy_3_1_0;
  int ns_St_StandBy_3_1_1;
  int ns_St_WaterFill_2_0;
  int ns_St_WaterFill_3_0_0;
  int ns_St_WaterFill_3_0_1;
  int ns_St_WaterFill_2_1;
  int ns_St_WaterFill_3_1_0;
  int ns_St_WaterFill_3_1_1;
  int ns_St_Off_2_0;
  int ns_St_Off_3_0_0;
  int ns_St_Off_3_0_1;
  int ns_St_Off_2_1;
  int ns_St_Off_3_1_0;
  int ns_St_Off_3_1_1;
  int ck_1_2_0;
  int ck_1_3_0_0;
  int ck_1_3_0_1;
  int ck_1_2_1;
  int ck_1_3_1_0;
  int ck_1_3_1_1;
  int nr_St_Spin;
  int ns_St_Spin_3;
  int ns_St_Spin_2;
  int ns_St_Spin_1;
  int stateA_St_Spin;
  int power_St_Spin;
  int nr_St_Rise;
  int ns_St_Rise_3;
  int ns_St_Rise_2;
  int ns_St_Rise_1;
  int stateA_St_Rise;
  int power_St_Rise;
  int nr_St_Washing;
  int ns_St_Washing_3;
  int ns_St_Washing_2;
  int ns_St_Washing_1;
  int stateA_St_Washing;
  int power_St_Washing;
  int nr_St_StandBy;
  int ns_St_StandBy_3;
  int ns_St_StandBy_2;
  int ns_St_StandBy_1;
  int stateA_St_StandBy;
  int power_St_StandBy;
  int nr_St_WaterFill;
  int ns_St_WaterFill_3;
  int ns_St_WaterFill_2;
  int ns_St_WaterFill_1;
  int stateA_St_WaterFill;
  int power_St_WaterFill;
  int nr_St_Off;
  int ns_St_Off_3;
  int ns_St_Off_2;
  int ns_St_Off_1;
  int stateA_St_Off;
  int power_St_Off;
  int ck_1_3;
  int ck_1_2;
  int ck_1_1;
  int v_3_2_0;
  int v_3_3_0_0;
  int v_3_3_0_1;
  int v_3_2_1;
  int v_3_3_1_0;
  int v_3_3_1_1;
  int v_4;
  int v_3_3;
  int v_3_2;
  int v_3_1;
  int v_2;
  int v_1;
  int v;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int s_2_St_Spin_2_0;
  int s_2_St_Spin_3_0_0;
  int s_2_St_Spin_3_0_1;
  int s_2_St_Spin_2_1;
  int s_2_St_Spin_3_1_0;
  int s_2_St_Spin_3_1_1;
  int s_2_St_Rise_2_0;
  int s_2_St_Rise_3_0_0;
  int s_2_St_Rise_3_0_1;
  int s_2_St_Rise_2_1;
  int s_2_St_Rise_3_1_0;
  int s_2_St_Rise_3_1_1;
  int s_2_St_Washing_2_0;
  int s_2_St_Washing_3_0_0;
  int s_2_St_Washing_3_0_1;
  int s_2_St_Washing_2_1;
  int s_2_St_Washing_3_1_0;
  int s_2_St_Washing_3_1_1;
  int s_2_St_StandBy_2_0;
  int s_2_St_StandBy_3_0_0;
  int s_2_St_StandBy_3_0_1;
  int s_2_St_StandBy_2_1;
  int s_2_St_StandBy_3_1_0;
  int s_2_St_StandBy_3_1_1;
  int s_2_St_WaterFill_2_0;
  int s_2_St_WaterFill_3_0_0;
  int s_2_St_WaterFill_3_0_1;
  int s_2_St_WaterFill_2_1;
  int s_2_St_WaterFill_3_1_0;
  int s_2_St_WaterFill_3_1_1;
  int s_2_St_Off_2_0;
  int s_2_St_Off_3_0_0;
  int s_2_St_Off_3_0_1;
  int s_2_St_Off_2_1;
  int s_2_St_Off_3_1_0;
  int s_2_St_Off_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_Spin;
  int s_2_St_Spin_3;
  int s_2_St_Spin_2;
  int s_2_St_Spin_1;
  int r_St_Rise;
  int s_2_St_Rise_3;
  int s_2_St_Rise_2;
  int s_2_St_Rise_1;
  int r_St_Washing;
  int s_2_St_Washing_3;
  int s_2_St_Washing_2;
  int s_2_St_Washing_1;
  int r_St_StandBy;
  int s_2_St_StandBy_3;
  int s_2_St_StandBy_2;
  int s_2_St_StandBy_1;
  int r_St_WaterFill;
  int s_2_St_WaterFill_3;
  int s_2_St_WaterFill_2;
  int s_2_St_WaterFill_1;
  int r_St_Off;
  int s_2_St_Off_3;
  int s_2_St_Off_2;
  int s_2_St_Off_1;
  int ck_3;
  int ck_2;
  int ck_1_4;
  int s_2_2_0;
  int s_2_3_0_0;
  int s_2_3_0_1;
  int s_2_2_1;
  int s_2_3_1_0;
  int s_2_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_2_3;
  int s_2_2;
  int s_2_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_4 = self->v_45;
  ck_2 = self->v_46;
  ck_3 = self->v_47;
  if (ck_1_4) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (s) {
          r_St_Off = true;
          s_2_St_Off_1 = false;
          s_2_St_Off_2 = false;
          s_2_St_Off_3 = false;
        } else {
          r_St_Off = self->pnr;
          s_2_St_Off_1 = true;
          s_2_St_Off_2 = true;
          s_2_St_Off_3 = true;
        };
        v_66 = r_St_Off;
        v_48 = s_2_St_Off_1;
        v_49 = s_2_St_Off_2;
        v_50 = s_2_St_Off_3;
        if (s_2_St_Off_1) {
          s_2_St_Off_2_1 = s_2_St_Off_2;
          if (s_2_St_Off_2_1) {
            s_2_St_Off_3_1_1 = s_2_St_Off_3;
          } else {
            s_2_St_Off_3_1_0 = s_2_St_Off_3;
          };
        } else {
          s_2_St_Off_2_0 = s_2_St_Off_2;
          if (s_2_St_Off_2_0) {
            s_2_St_Off_3_0_1 = s_2_St_Off_3;
          } else {
            s_2_St_Off_3_0_0 = s_2_St_Off_3;
          };
        };
      } else {
        if (e) {
          r_St_Rise = true;
        } else {
          r_St_Rise = self->pnr;
        };
        v_66 = r_St_Rise;
        if (e) {
          s_2_St_Rise_1 = true;
        } else {
          s_2_St_Rise_1 = true;
        };
        v_48 = s_2_St_Rise_1;
        if (e) {
          s_2_St_Rise_2 = false;
        } else {
          s_2_St_Rise_2 = true;
        };
        v_49 = s_2_St_Rise_2;
        if (e) {
          s_2_St_Rise_3 = false;
        } else {
          s_2_St_Rise_3 = false;
        };
        v_50 = s_2_St_Rise_3;
        if (s_2_St_Rise_1) {
          s_2_St_Rise_2_1 = s_2_St_Rise_2;
          if (s_2_St_Rise_2_1) {
            s_2_St_Rise_3_1_1 = s_2_St_Rise_3;
          } else {
            s_2_St_Rise_3_1_0 = s_2_St_Rise_3;
          };
        } else {
          s_2_St_Rise_2_0 = s_2_St_Rise_2;
          if (s_2_St_Rise_2_0) {
            s_2_St_Rise_3_0_1 = s_2_St_Rise_3;
          } else {
            s_2_St_Rise_3_0_0 = s_2_St_Rise_3;
          };
        };
      };
      v_60 = v_48;
      v_61 = v_49;
      v_62 = v_50;
      v_68 = v_66;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_67 = true;
        v_51 = true;
        v_52 = true;
        v_53 = true;
      } else {
        if (e) {
          r_St_Spin = true;
        } else {
          r_St_Spin = self->pnr;
        };
        v_67 = r_St_Spin;
        if (e) {
          s_2_St_Spin_1 = true;
        } else {
          s_2_St_Spin_1 = true;
        };
        v_51 = s_2_St_Spin_1;
        if (e) {
          s_2_St_Spin_2 = true;
        } else {
          s_2_St_Spin_2 = false;
        };
        v_52 = s_2_St_Spin_2;
        if (e) {
          s_2_St_Spin_3 = true;
        } else {
          s_2_St_Spin_3 = false;
        };
        v_53 = s_2_St_Spin_3;
      };
      v_60 = v_51;
      v_61 = v_52;
      v_62 = v_53;
      v_68 = v_67;
      if (!(ck_3_1_0)) {
        if (s_2_St_Spin_1) {
          s_2_St_Spin_2_1 = s_2_St_Spin_2;
          if (s_2_St_Spin_2_1) {
            s_2_St_Spin_3_1_1 = s_2_St_Spin_3;
          } else {
            s_2_St_Spin_3_1_0 = s_2_St_Spin_3;
          };
        } else {
          s_2_St_Spin_2_0 = s_2_St_Spin_2;
          if (s_2_St_Spin_2_0) {
            s_2_St_Spin_3_0_1 = s_2_St_Spin_3;
          } else {
            s_2_St_Spin_3_0_0 = s_2_St_Spin_3;
          };
        };
      };
    };
    s_2_1 = v_60;
    s_2_2 = v_61;
    s_2_3 = v_62;
    r = v_68;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (c) {
          r_St_StandBy = true;
          s_2_St_StandBy_1 = false;
          s_2_St_StandBy_2 = true;
          s_2_St_StandBy_3 = false;
        } else {
          r_St_StandBy = self->pnr;
          s_2_St_StandBy_1 = false;
          s_2_St_StandBy_2 = true;
          s_2_St_StandBy_3 = true;
        };
        v_69 = r_St_StandBy;
        v_54 = s_2_St_StandBy_1;
        v_55 = s_2_St_StandBy_2;
        v_56 = s_2_St_StandBy_3;
      } else {
        if (e) {
          r_St_Washing = true;
        } else {
          r_St_Washing = self->pnr;
        };
        v_69 = r_St_Washing;
        if (e) {
          s_2_St_Washing_1 = true;
        } else {
          s_2_St_Washing_1 = false;
        };
        v_54 = s_2_St_Washing_1;
        if (e) {
          s_2_St_Washing_2 = true;
        } else {
          s_2_St_Washing_2 = true;
        };
        v_55 = s_2_St_Washing_2;
        if (e) {
          s_2_St_Washing_3 = false;
        } else {
          s_2_St_Washing_3 = false;
        };
        v_56 = s_2_St_Washing_3;
      };
      v_63 = v_54;
      v_64 = v_55;
      v_65 = v_56;
      v_71 = v_69;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_70 = true;
        v_57 = true;
        v_58 = true;
        v_59 = true;
      } else {
        v_2 = (e&&c);
        if (v_2) {
          v_4 = true;
          v_3_1 = false;
          v_3_2 = true;
          v_3_3 = false;
        } else {
          v_4 = self->pnr;
          v_3_1 = false;
          v_3_2 = false;
          v_3_3 = false;
        };
        v = !(c);
        v_1 = (e&&v);
        if (v_1) {
          r_St_WaterFill = true;
        } else {
          r_St_WaterFill = v_4;
        };
        v_70 = r_St_WaterFill;
        if (v_1) {
          s_2_St_WaterFill_1 = false;
        } else {
          s_2_St_WaterFill_1 = v_3_1;
        };
        v_57 = s_2_St_WaterFill_1;
        if (v_1) {
          s_2_St_WaterFill_2 = true;
        } else {
          s_2_St_WaterFill_2 = v_3_2;
        };
        v_58 = s_2_St_WaterFill_2;
        if (v_1) {
          s_2_St_WaterFill_3 = true;
        } else {
          s_2_St_WaterFill_3 = v_3_3;
        };
        v_59 = s_2_St_WaterFill_3;
        if (v_3_1) {
          v_3_2_1 = v_3_2;
          if (v_3_2_1) {
            v_3_3_1_1 = v_3_3;
          } else {
            v_3_3_1_0 = v_3_3;
          };
        } else {
          v_3_2_0 = v_3_2;
          if (v_3_2_0) {
            v_3_3_0_1 = v_3_3;
          } else {
            v_3_3_0_0 = v_3_3;
          };
        };
        if (s_2_St_WaterFill_1) {
          s_2_St_WaterFill_2_1 = s_2_St_WaterFill_2;
          if (s_2_St_WaterFill_2_1) {
            s_2_St_WaterFill_3_1_1 = s_2_St_WaterFill_3;
          } else {
            s_2_St_WaterFill_3_1_0 = s_2_St_WaterFill_3;
          };
        } else {
          s_2_St_WaterFill_2_0 = s_2_St_WaterFill_2;
          if (s_2_St_WaterFill_2_0) {
            s_2_St_WaterFill_3_0_1 = s_2_St_WaterFill_3;
          } else {
            s_2_St_WaterFill_3_0_0 = s_2_St_WaterFill_3;
          };
        };
      };
      v_63 = v_57;
      v_64 = v_58;
      v_65 = v_59;
      v_71 = v_70;
    };
    s_2_1 = v_63;
    s_2_2 = v_64;
    s_2_3 = v_65;
    r = v_71;
  };
  ck_1_1 = s_2_1;
  ck_1_2 = s_2_2;
  ck_1_3 = s_2_3;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      ck_1_3_1_1 = ck_1_3;
      if (ck_1_3_1_1) {
        power_St_Off = 0;
        stateA_St_Off = 0;
        nr_St_Off = false;
        ns_St_Off_1 = true;
        ns_St_Off_2 = true;
        ns_St_Off_3 = true;
        v_9 = power_St_Off;
        v_15 = stateA_St_Off;
        v_39 = nr_St_Off;
        v_21 = ns_St_Off_1;
        v_22 = ns_St_Off_2;
        v_23 = ns_St_Off_3;
        if (ns_St_Off_1) {
          ns_St_Off_2_1 = ns_St_Off_2;
          if (ns_St_Off_2_1) {
            ns_St_Off_3_1_1 = ns_St_Off_3;
          } else {
            ns_St_Off_3_1_0 = ns_St_Off_3;
          };
        } else {
          ns_St_Off_2_0 = ns_St_Off_2;
          if (ns_St_Off_2_0) {
            ns_St_Off_3_0_1 = ns_St_Off_3;
          } else {
            ns_St_Off_3_0_0 = ns_St_Off_3;
          };
        };
      } else {
        power_St_Rise = 200;
        v_9 = power_St_Rise;
        stateA_St_Rise = 4;
        v_15 = stateA_St_Rise;
        nr_St_Rise = false;
        v_39 = nr_St_Rise;
        ns_St_Rise_1 = true;
        v_21 = ns_St_Rise_1;
        ns_St_Rise_2 = true;
        v_22 = ns_St_Rise_2;
        ns_St_Rise_3 = false;
        v_23 = ns_St_Rise_3;
        if (ns_St_Rise_1) {
          ns_St_Rise_2_1 = ns_St_Rise_2;
          if (ns_St_Rise_2_1) {
            ns_St_Rise_3_1_1 = ns_St_Rise_3;
          } else {
            ns_St_Rise_3_1_0 = ns_St_Rise_3;
          };
        } else {
          ns_St_Rise_2_0 = ns_St_Rise_2;
          if (ns_St_Rise_2_0) {
            ns_St_Rise_3_0_1 = ns_St_Rise_3;
          } else {
            ns_St_Rise_3_0_0 = ns_St_Rise_3;
          };
        };
      };
      v_11 = v_9;
      v_17 = v_15;
      v_33 = v_21;
      v_34 = v_22;
      v_35 = v_23;
      v_41 = v_39;
    } else {
      ck_1_3_1_0 = ck_1_3;
      if (ck_1_3_1_0) {
        v_10 = 0;
        v_16 = 0;
        v_40 = true;
        v_24 = true;
        v_25 = true;
        v_26 = true;
      } else {
        power_St_Spin = 800;
        v_10 = power_St_Spin;
        stateA_St_Spin = 5;
        v_16 = stateA_St_Spin;
        nr_St_Spin = false;
        v_40 = nr_St_Spin;
        ns_St_Spin_1 = true;
        v_24 = ns_St_Spin_1;
        ns_St_Spin_2 = false;
        v_25 = ns_St_Spin_2;
        ns_St_Spin_3 = false;
        v_26 = ns_St_Spin_3;
      };
      v_11 = v_10;
      v_17 = v_16;
      v_33 = v_24;
      v_34 = v_25;
      v_35 = v_26;
      v_41 = v_40;
      if (!(ck_1_3_1_0)) {
        if (ns_St_Spin_1) {
          ns_St_Spin_2_1 = ns_St_Spin_2;
          if (ns_St_Spin_2_1) {
            ns_St_Spin_3_1_1 = ns_St_Spin_3;
          } else {
            ns_St_Spin_3_1_0 = ns_St_Spin_3;
          };
        } else {
          ns_St_Spin_2_0 = ns_St_Spin_2;
          if (ns_St_Spin_2_0) {
            ns_St_Spin_3_0_1 = ns_St_Spin_3;
          } else {
            ns_St_Spin_3_0_0 = ns_St_Spin_3;
          };
        };
      };
    };
    _out->power = v_11;
    _out->stateA = v_17;
    ns_1 = v_33;
    ns_2 = v_34;
    ns_3 = v_35;
    nr = v_41;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      if (ck_1_3_0_1) {
        power_St_StandBy = 0;
        stateA_St_StandBy = 2;
        nr_St_StandBy = false;
        ns_St_StandBy_1 = false;
        ns_St_StandBy_2 = true;
        ns_St_StandBy_3 = true;
        v_12 = power_St_StandBy;
        v_18 = stateA_St_StandBy;
        v_42 = nr_St_StandBy;
        v_27 = ns_St_StandBy_1;
        v_28 = ns_St_StandBy_2;
        v_29 = ns_St_StandBy_3;
      } else {
        power_St_Washing = 250;
        v_12 = power_St_Washing;
        stateA_St_Washing = 3;
        v_18 = stateA_St_Washing;
        nr_St_Washing = false;
        v_42 = nr_St_Washing;
        ns_St_Washing_1 = false;
        v_27 = ns_St_Washing_1;
        ns_St_Washing_2 = true;
        v_28 = ns_St_Washing_2;
        ns_St_Washing_3 = false;
        v_29 = ns_St_Washing_3;
      };
      v_14 = v_12;
      v_20 = v_18;
      v_36 = v_27;
      v_37 = v_28;
      v_38 = v_29;
      v_44 = v_42;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        v_13 = 0;
        v_19 = 0;
        v_43 = true;
        v_30 = true;
        v_31 = true;
        v_32 = true;
      } else {
        power_St_WaterFill = 15;
        v_13 = power_St_WaterFill;
        stateA_St_WaterFill = 1;
        v_19 = stateA_St_WaterFill;
        nr_St_WaterFill = false;
        v_43 = nr_St_WaterFill;
        ns_St_WaterFill_1 = false;
        v_30 = ns_St_WaterFill_1;
        ns_St_WaterFill_2 = false;
        v_31 = ns_St_WaterFill_2;
        ns_St_WaterFill_3 = false;
        v_32 = ns_St_WaterFill_3;
        if (ns_St_WaterFill_1) {
          ns_St_WaterFill_2_1 = ns_St_WaterFill_2;
          if (ns_St_WaterFill_2_1) {
            ns_St_WaterFill_3_1_1 = ns_St_WaterFill_3;
          } else {
            ns_St_WaterFill_3_1_0 = ns_St_WaterFill_3;
          };
        } else {
          ns_St_WaterFill_2_0 = ns_St_WaterFill_2;
          if (ns_St_WaterFill_2_0) {
            ns_St_WaterFill_3_0_1 = ns_St_WaterFill_3;
          } else {
            ns_St_WaterFill_3_0_0 = ns_St_WaterFill_3;
          };
        };
      };
      v_14 = v_13;
      v_20 = v_19;
      v_36 = v_30;
      v_37 = v_31;
      v_38 = v_32;
      v_44 = v_43;
    };
    _out->power = v_14;
    _out->stateA = v_20;
    ns_1 = v_36;
    ns_2 = v_37;
    ns_3 = v_38;
    nr = v_44;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_1_1)) {
    if (ck_1_2_0) {
      if (ck_1_3_0_1) {
        if (ns_St_StandBy_1) {
          ns_St_StandBy_2_1 = ns_St_StandBy_2;
          if (ns_St_StandBy_2_1) {
            ns_St_StandBy_3_1_1 = ns_St_StandBy_3;
          } else {
            ns_St_StandBy_3_1_0 = ns_St_StandBy_3;
          };
        } else {
          ns_St_StandBy_2_0 = ns_St_StandBy_2;
          if (ns_St_StandBy_2_0) {
            ns_St_StandBy_3_0_1 = ns_St_StandBy_3;
          } else {
            ns_St_StandBy_3_0_0 = ns_St_StandBy_3;
          };
        };
      } else {
        if (ns_St_Washing_1) {
          ns_St_Washing_2_1 = ns_St_Washing_2;
          if (ns_St_Washing_2_1) {
            ns_St_Washing_3_1_1 = ns_St_Washing_3;
          } else {
            ns_St_Washing_3_1_0 = ns_St_Washing_3;
          };
        } else {
          ns_St_Washing_2_0 = ns_St_Washing_2;
          if (ns_St_Washing_2_0) {
            ns_St_Washing_3_0_1 = ns_St_Washing_3;
          } else {
            ns_St_Washing_3_0_0 = ns_St_Washing_3;
          };
        };
      };
    };
  };
  if (s_2_1) {
    s_2_2_1 = s_2_2;
    if (s_2_2_1) {
      s_2_3_1_1 = s_2_3;
    } else {
      s_2_3_1_0 = s_2_3;
    };
  } else {
    s_2_2_0 = s_2_2;
    if (s_2_2_0) {
      s_2_3_0_1 = s_2_3;
    } else {
      s_2_3_0_0 = s_2_3;
    };
  };
  if (!(ck_1_4)) {
    if (ck_2_0) {
      if (ck_3_0_1) {
        if (s_2_St_StandBy_1) {
          s_2_St_StandBy_2_1 = s_2_St_StandBy_2;
          if (s_2_St_StandBy_2_1) {
            s_2_St_StandBy_3_1_1 = s_2_St_StandBy_3;
          } else {
            s_2_St_StandBy_3_1_0 = s_2_St_StandBy_3;
          };
        } else {
          s_2_St_StandBy_2_0 = s_2_St_StandBy_2;
          if (s_2_St_StandBy_2_0) {
            s_2_St_StandBy_3_0_1 = s_2_St_StandBy_3;
          } else {
            s_2_St_StandBy_3_0_0 = s_2_St_StandBy_3;
          };
        };
      } else {
        if (s_2_St_Washing_1) {
          s_2_St_Washing_2_1 = s_2_St_Washing_2;
          if (s_2_St_Washing_2_1) {
            s_2_St_Washing_3_1_1 = s_2_St_Washing_3;
          } else {
            s_2_St_Washing_3_1_0 = s_2_St_Washing_3;
          };
        } else {
          s_2_St_Washing_2_0 = s_2_St_Washing_2;
          if (s_2_St_Washing_2_0) {
            s_2_St_Washing_3_0_1 = s_2_St_Washing_3;
          } else {
            s_2_St_Washing_3_0_0 = s_2_St_Washing_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_45 = ns_1;
  self->v_46 = ns_2;
  self->v_47 = ns_3;;
}

void WashingMachine__onetask_reset(WashingMachine__onetask_mem* self) {
  self->pnr = false;
  self->v_108 = true;
  self->v_109 = true;
  self->v_110 = true;
}

void WashingMachine__onetask_step(int e, int s, int c,
                                  WashingMachine__onetask_out* _out,
                                  WashingMachine__onetask_mem* self) {
  
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int ns_St_1_Spin_2_0;
  int ns_St_1_Spin_3_0_0;
  int ns_St_1_Spin_3_0_1;
  int ns_St_1_Spin_2_1;
  int ns_St_1_Spin_3_1_0;
  int ns_St_1_Spin_3_1_1;
  int ns_St_1_Rise_2_0;
  int ns_St_1_Rise_3_0_0;
  int ns_St_1_Rise_3_0_1;
  int ns_St_1_Rise_2_1;
  int ns_St_1_Rise_3_1_0;
  int ns_St_1_Rise_3_1_1;
  int ns_St_1_Washing_2_0;
  int ns_St_1_Washing_3_0_0;
  int ns_St_1_Washing_3_0_1;
  int ns_St_1_Washing_2_1;
  int ns_St_1_Washing_3_1_0;
  int ns_St_1_Washing_3_1_1;
  int ns_St_1_StandBy_2_0;
  int ns_St_1_StandBy_3_0_0;
  int ns_St_1_StandBy_3_0_1;
  int ns_St_1_StandBy_2_1;
  int ns_St_1_StandBy_3_1_0;
  int ns_St_1_StandBy_3_1_1;
  int ns_St_1_WaterFill_2_0;
  int ns_St_1_WaterFill_3_0_0;
  int ns_St_1_WaterFill_3_0_1;
  int ns_St_1_WaterFill_2_1;
  int ns_St_1_WaterFill_3_1_0;
  int ns_St_1_WaterFill_3_1_1;
  int ns_St_1_Off_2_0;
  int ns_St_1_Off_3_0_0;
  int ns_St_1_Off_3_0_1;
  int ns_St_1_Off_2_1;
  int ns_St_1_Off_3_1_0;
  int ns_St_1_Off_3_1_1;
  int ck_2_2_0;
  int ck_2_3_0_0;
  int ck_2_3_0_1;
  int ck_2_2_1;
  int ck_2_3_1_0;
  int ck_2_3_1_1;
  int nr_St_1_Spin;
  int ns_St_1_Spin_3;
  int ns_St_1_Spin_2;
  int ns_St_1_Spin_1;
  int stateA_1_St_1_Spin;
  int power_St_1_Spin;
  int nr_St_1_Rise;
  int ns_St_1_Rise_3;
  int ns_St_1_Rise_2;
  int ns_St_1_Rise_1;
  int stateA_1_St_1_Rise;
  int power_St_1_Rise;
  int nr_St_1_Washing;
  int ns_St_1_Washing_3;
  int ns_St_1_Washing_2;
  int ns_St_1_Washing_1;
  int stateA_1_St_1_Washing;
  int power_St_1_Washing;
  int nr_St_1_StandBy;
  int ns_St_1_StandBy_3;
  int ns_St_1_StandBy_2;
  int ns_St_1_StandBy_1;
  int stateA_1_St_1_StandBy;
  int power_St_1_StandBy;
  int nr_St_1_WaterFill;
  int ns_St_1_WaterFill_3;
  int ns_St_1_WaterFill_2;
  int ns_St_1_WaterFill_1;
  int stateA_1_St_1_WaterFill;
  int power_St_1_WaterFill;
  int nr_St_1_Off;
  int ns_St_1_Off_3;
  int ns_St_1_Off_2;
  int ns_St_1_Off_1;
  int stateA_1_St_1_Off;
  int power_St_1_Off;
  int ck_2_3;
  int ck_2_2;
  int ck_2_1;
  int v_7_2_0;
  int v_7_3_0_0;
  int v_7_3_0_1;
  int v_7_2_1;
  int v_7_3_1_0;
  int v_7_3_1_1;
  int v_8;
  int v_7_3;
  int v_7_2;
  int v_7_1;
  int v_6;
  int v_5;
  int v;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int s_3_St_1_Spin_2_0;
  int s_3_St_1_Spin_3_0_0;
  int s_3_St_1_Spin_3_0_1;
  int s_3_St_1_Spin_2_1;
  int s_3_St_1_Spin_3_1_0;
  int s_3_St_1_Spin_3_1_1;
  int s_3_St_1_Rise_2_0;
  int s_3_St_1_Rise_3_0_0;
  int s_3_St_1_Rise_3_0_1;
  int s_3_St_1_Rise_2_1;
  int s_3_St_1_Rise_3_1_0;
  int s_3_St_1_Rise_3_1_1;
  int s_3_St_1_Washing_2_0;
  int s_3_St_1_Washing_3_0_0;
  int s_3_St_1_Washing_3_0_1;
  int s_3_St_1_Washing_2_1;
  int s_3_St_1_Washing_3_1_0;
  int s_3_St_1_Washing_3_1_1;
  int s_3_St_1_StandBy_2_0;
  int s_3_St_1_StandBy_3_0_0;
  int s_3_St_1_StandBy_3_0_1;
  int s_3_St_1_StandBy_2_1;
  int s_3_St_1_StandBy_3_1_0;
  int s_3_St_1_StandBy_3_1_1;
  int s_3_St_1_WaterFill_2_0;
  int s_3_St_1_WaterFill_3_0_0;
  int s_3_St_1_WaterFill_3_0_1;
  int s_3_St_1_WaterFill_2_1;
  int s_3_St_1_WaterFill_3_1_0;
  int s_3_St_1_WaterFill_3_1_1;
  int s_3_St_1_Off_2_0;
  int s_3_St_1_Off_3_0_0;
  int s_3_St_1_Off_3_0_1;
  int s_3_St_1_Off_2_1;
  int s_3_St_1_Off_3_1_0;
  int s_3_St_1_Off_3_1_1;
  int ck_2_4_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_4_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_1_Spin;
  int s_3_St_1_Spin_3;
  int s_3_St_1_Spin_2;
  int s_3_St_1_Spin_1;
  int r_St_1_Rise;
  int s_3_St_1_Rise_3;
  int s_3_St_1_Rise_2;
  int s_3_St_1_Rise_1;
  int r_St_1_Washing;
  int s_3_St_1_Washing_3;
  int s_3_St_1_Washing_2;
  int s_3_St_1_Washing_1;
  int r_St_1_StandBy;
  int s_3_St_1_StandBy_3;
  int s_3_St_1_StandBy_2;
  int s_3_St_1_StandBy_1;
  int r_St_1_WaterFill;
  int s_3_St_1_WaterFill_3;
  int s_3_St_1_WaterFill_2;
  int s_3_St_1_WaterFill_1;
  int r_St_1_Off;
  int s_3_St_1_Off_3;
  int s_3_St_1_Off_2;
  int s_3_St_1_Off_1;
  int ck_3;
  int ck_2_4;
  int ck_1;
  int s_3_2_0;
  int s_3_3_0_0;
  int s_3_3_0_1;
  int s_3_2_1;
  int s_3_3_1_0;
  int s_3_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_3_3;
  int s_3_2;
  int s_3_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  int e_1;
  int s_1;
  int c_1;
  int power;
  int stateA_1;
  e_1 = e;
  s_1 = s;
  c_1 = c;
  ck_1 = self->v_108;
  ck_2_4 = self->v_109;
  ck_3 = self->v_110;
  if (ck_1) {
    ck_2_4_1 = ck_2_4;
    if (ck_2_4_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (s_1) {
          r_St_1_Off = true;
          s_3_St_1_Off_1 = false;
          s_3_St_1_Off_2 = false;
          s_3_St_1_Off_3 = false;
        } else {
          r_St_1_Off = self->pnr;
          s_3_St_1_Off_1 = true;
          s_3_St_1_Off_2 = true;
          s_3_St_1_Off_3 = true;
        };
        v_129 = r_St_1_Off;
        v_111 = s_3_St_1_Off_1;
        v_112 = s_3_St_1_Off_2;
        v_113 = s_3_St_1_Off_3;
        if (s_3_St_1_Off_1) {
          s_3_St_1_Off_2_1 = s_3_St_1_Off_2;
          if (s_3_St_1_Off_2_1) {
            s_3_St_1_Off_3_1_1 = s_3_St_1_Off_3;
          } else {
            s_3_St_1_Off_3_1_0 = s_3_St_1_Off_3;
          };
        } else {
          s_3_St_1_Off_2_0 = s_3_St_1_Off_2;
          if (s_3_St_1_Off_2_0) {
            s_3_St_1_Off_3_0_1 = s_3_St_1_Off_3;
          } else {
            s_3_St_1_Off_3_0_0 = s_3_St_1_Off_3;
          };
        };
      } else {
        if (e_1) {
          r_St_1_Rise = true;
        } else {
          r_St_1_Rise = self->pnr;
        };
        v_129 = r_St_1_Rise;
        if (e_1) {
          s_3_St_1_Rise_1 = true;
        } else {
          s_3_St_1_Rise_1 = true;
        };
        v_111 = s_3_St_1_Rise_1;
        if (e_1) {
          s_3_St_1_Rise_2 = false;
        } else {
          s_3_St_1_Rise_2 = true;
        };
        v_112 = s_3_St_1_Rise_2;
        if (e_1) {
          s_3_St_1_Rise_3 = false;
        } else {
          s_3_St_1_Rise_3 = false;
        };
        v_113 = s_3_St_1_Rise_3;
        if (s_3_St_1_Rise_1) {
          s_3_St_1_Rise_2_1 = s_3_St_1_Rise_2;
          if (s_3_St_1_Rise_2_1) {
            s_3_St_1_Rise_3_1_1 = s_3_St_1_Rise_3;
          } else {
            s_3_St_1_Rise_3_1_0 = s_3_St_1_Rise_3;
          };
        } else {
          s_3_St_1_Rise_2_0 = s_3_St_1_Rise_2;
          if (s_3_St_1_Rise_2_0) {
            s_3_St_1_Rise_3_0_1 = s_3_St_1_Rise_3;
          } else {
            s_3_St_1_Rise_3_0_0 = s_3_St_1_Rise_3;
          };
        };
      };
      v_123 = v_111;
      v_124 = v_112;
      v_125 = v_113;
      v_131 = v_129;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_130 = true;
        v_114 = true;
        v_115 = true;
        v_116 = true;
      } else {
        if (e_1) {
          r_St_1_Spin = true;
        } else {
          r_St_1_Spin = self->pnr;
        };
        v_130 = r_St_1_Spin;
        if (e_1) {
          s_3_St_1_Spin_1 = true;
        } else {
          s_3_St_1_Spin_1 = true;
        };
        v_114 = s_3_St_1_Spin_1;
        if (e_1) {
          s_3_St_1_Spin_2 = true;
        } else {
          s_3_St_1_Spin_2 = false;
        };
        v_115 = s_3_St_1_Spin_2;
        if (e_1) {
          s_3_St_1_Spin_3 = true;
        } else {
          s_3_St_1_Spin_3 = false;
        };
        v_116 = s_3_St_1_Spin_3;
      };
      v_123 = v_114;
      v_124 = v_115;
      v_125 = v_116;
      v_131 = v_130;
      if (!(ck_3_1_0)) {
        if (s_3_St_1_Spin_1) {
          s_3_St_1_Spin_2_1 = s_3_St_1_Spin_2;
          if (s_3_St_1_Spin_2_1) {
            s_3_St_1_Spin_3_1_1 = s_3_St_1_Spin_3;
          } else {
            s_3_St_1_Spin_3_1_0 = s_3_St_1_Spin_3;
          };
        } else {
          s_3_St_1_Spin_2_0 = s_3_St_1_Spin_2;
          if (s_3_St_1_Spin_2_0) {
            s_3_St_1_Spin_3_0_1 = s_3_St_1_Spin_3;
          } else {
            s_3_St_1_Spin_3_0_0 = s_3_St_1_Spin_3;
          };
        };
      };
    };
    s_3_1 = v_123;
    s_3_2 = v_124;
    s_3_3 = v_125;
    r = v_131;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (c_1) {
          r_St_1_StandBy = true;
          s_3_St_1_StandBy_1 = false;
          s_3_St_1_StandBy_2 = true;
          s_3_St_1_StandBy_3 = false;
        } else {
          r_St_1_StandBy = self->pnr;
          s_3_St_1_StandBy_1 = false;
          s_3_St_1_StandBy_2 = true;
          s_3_St_1_StandBy_3 = true;
        };
        v_132 = r_St_1_StandBy;
        v_117 = s_3_St_1_StandBy_1;
        v_118 = s_3_St_1_StandBy_2;
        v_119 = s_3_St_1_StandBy_3;
      } else {
        if (e_1) {
          r_St_1_Washing = true;
        } else {
          r_St_1_Washing = self->pnr;
        };
        v_132 = r_St_1_Washing;
        if (e_1) {
          s_3_St_1_Washing_1 = true;
        } else {
          s_3_St_1_Washing_1 = false;
        };
        v_117 = s_3_St_1_Washing_1;
        if (e_1) {
          s_3_St_1_Washing_2 = true;
        } else {
          s_3_St_1_Washing_2 = true;
        };
        v_118 = s_3_St_1_Washing_2;
        if (e_1) {
          s_3_St_1_Washing_3 = false;
        } else {
          s_3_St_1_Washing_3 = false;
        };
        v_119 = s_3_St_1_Washing_3;
      };
      v_126 = v_117;
      v_127 = v_118;
      v_128 = v_119;
      v_134 = v_132;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_133 = true;
        v_120 = true;
        v_121 = true;
        v_122 = true;
      } else {
        v_6 = (e_1&&c_1);
        if (v_6) {
          v_8 = true;
          v_7_1 = false;
          v_7_2 = true;
          v_7_3 = false;
        } else {
          v_8 = self->pnr;
          v_7_1 = false;
          v_7_2 = false;
          v_7_3 = false;
        };
        v = !(c_1);
        v_5 = (e_1&&v);
        if (v_5) {
          r_St_1_WaterFill = true;
        } else {
          r_St_1_WaterFill = v_8;
        };
        v_133 = r_St_1_WaterFill;
        if (v_5) {
          s_3_St_1_WaterFill_1 = false;
        } else {
          s_3_St_1_WaterFill_1 = v_7_1;
        };
        v_120 = s_3_St_1_WaterFill_1;
        if (v_5) {
          s_3_St_1_WaterFill_2 = true;
        } else {
          s_3_St_1_WaterFill_2 = v_7_2;
        };
        v_121 = s_3_St_1_WaterFill_2;
        if (v_5) {
          s_3_St_1_WaterFill_3 = true;
        } else {
          s_3_St_1_WaterFill_3 = v_7_3;
        };
        v_122 = s_3_St_1_WaterFill_3;
        if (v_7_1) {
          v_7_2_1 = v_7_2;
          if (v_7_2_1) {
            v_7_3_1_1 = v_7_3;
          } else {
            v_7_3_1_0 = v_7_3;
          };
        } else {
          v_7_2_0 = v_7_2;
          if (v_7_2_0) {
            v_7_3_0_1 = v_7_3;
          } else {
            v_7_3_0_0 = v_7_3;
          };
        };
        if (s_3_St_1_WaterFill_1) {
          s_3_St_1_WaterFill_2_1 = s_3_St_1_WaterFill_2;
          if (s_3_St_1_WaterFill_2_1) {
            s_3_St_1_WaterFill_3_1_1 = s_3_St_1_WaterFill_3;
          } else {
            s_3_St_1_WaterFill_3_1_0 = s_3_St_1_WaterFill_3;
          };
        } else {
          s_3_St_1_WaterFill_2_0 = s_3_St_1_WaterFill_2;
          if (s_3_St_1_WaterFill_2_0) {
            s_3_St_1_WaterFill_3_0_1 = s_3_St_1_WaterFill_3;
          } else {
            s_3_St_1_WaterFill_3_0_0 = s_3_St_1_WaterFill_3;
          };
        };
      };
      v_126 = v_120;
      v_127 = v_121;
      v_128 = v_122;
      v_134 = v_133;
    };
    s_3_1 = v_126;
    s_3_2 = v_127;
    s_3_3 = v_128;
    r = v_134;
  };
  ck_2_1 = s_3_1;
  ck_2_2 = s_3_2;
  ck_2_3 = s_3_3;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      ck_2_3_1_1 = ck_2_3;
      if (ck_2_3_1_1) {
        power_St_1_Off = 0;
        stateA_1_St_1_Off = 0;
        nr_St_1_Off = false;
        ns_St_1_Off_1 = true;
        ns_St_1_Off_2 = true;
        ns_St_1_Off_3 = true;
        v_72 = power_St_1_Off;
        v_78 = stateA_1_St_1_Off;
        v_102 = nr_St_1_Off;
        v_84 = ns_St_1_Off_1;
        v_85 = ns_St_1_Off_2;
        v_86 = ns_St_1_Off_3;
        if (ns_St_1_Off_1) {
          ns_St_1_Off_2_1 = ns_St_1_Off_2;
          if (ns_St_1_Off_2_1) {
            ns_St_1_Off_3_1_1 = ns_St_1_Off_3;
          } else {
            ns_St_1_Off_3_1_0 = ns_St_1_Off_3;
          };
        } else {
          ns_St_1_Off_2_0 = ns_St_1_Off_2;
          if (ns_St_1_Off_2_0) {
            ns_St_1_Off_3_0_1 = ns_St_1_Off_3;
          } else {
            ns_St_1_Off_3_0_0 = ns_St_1_Off_3;
          };
        };
      } else {
        power_St_1_Rise = 200;
        v_72 = power_St_1_Rise;
        stateA_1_St_1_Rise = 4;
        v_78 = stateA_1_St_1_Rise;
        nr_St_1_Rise = false;
        v_102 = nr_St_1_Rise;
        ns_St_1_Rise_1 = true;
        v_84 = ns_St_1_Rise_1;
        ns_St_1_Rise_2 = true;
        v_85 = ns_St_1_Rise_2;
        ns_St_1_Rise_3 = false;
        v_86 = ns_St_1_Rise_3;
        if (ns_St_1_Rise_1) {
          ns_St_1_Rise_2_1 = ns_St_1_Rise_2;
          if (ns_St_1_Rise_2_1) {
            ns_St_1_Rise_3_1_1 = ns_St_1_Rise_3;
          } else {
            ns_St_1_Rise_3_1_0 = ns_St_1_Rise_3;
          };
        } else {
          ns_St_1_Rise_2_0 = ns_St_1_Rise_2;
          if (ns_St_1_Rise_2_0) {
            ns_St_1_Rise_3_0_1 = ns_St_1_Rise_3;
          } else {
            ns_St_1_Rise_3_0_0 = ns_St_1_Rise_3;
          };
        };
      };
      v_74 = v_72;
      v_80 = v_78;
      v_96 = v_84;
      v_97 = v_85;
      v_98 = v_86;
      v_104 = v_102;
    } else {
      ck_2_3_1_0 = ck_2_3;
      if (ck_2_3_1_0) {
        v_73 = 0;
        v_79 = 0;
        v_103 = true;
        v_87 = true;
        v_88 = true;
        v_89 = true;
      } else {
        power_St_1_Spin = 800;
        v_73 = power_St_1_Spin;
        stateA_1_St_1_Spin = 5;
        v_79 = stateA_1_St_1_Spin;
        nr_St_1_Spin = false;
        v_103 = nr_St_1_Spin;
        ns_St_1_Spin_1 = true;
        v_87 = ns_St_1_Spin_1;
        ns_St_1_Spin_2 = false;
        v_88 = ns_St_1_Spin_2;
        ns_St_1_Spin_3 = false;
        v_89 = ns_St_1_Spin_3;
      };
      v_74 = v_73;
      v_80 = v_79;
      v_96 = v_87;
      v_97 = v_88;
      v_98 = v_89;
      v_104 = v_103;
      if (!(ck_2_3_1_0)) {
        if (ns_St_1_Spin_1) {
          ns_St_1_Spin_2_1 = ns_St_1_Spin_2;
          if (ns_St_1_Spin_2_1) {
            ns_St_1_Spin_3_1_1 = ns_St_1_Spin_3;
          } else {
            ns_St_1_Spin_3_1_0 = ns_St_1_Spin_3;
          };
        } else {
          ns_St_1_Spin_2_0 = ns_St_1_Spin_2;
          if (ns_St_1_Spin_2_0) {
            ns_St_1_Spin_3_0_1 = ns_St_1_Spin_3;
          } else {
            ns_St_1_Spin_3_0_0 = ns_St_1_Spin_3;
          };
        };
      };
    };
    power = v_74;
    stateA_1 = v_80;
    ns_1 = v_96;
    ns_2 = v_97;
    ns_3 = v_98;
    nr = v_104;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      ck_2_3_0_1 = ck_2_3;
      if (ck_2_3_0_1) {
        power_St_1_StandBy = 0;
        stateA_1_St_1_StandBy = 2;
        nr_St_1_StandBy = false;
        ns_St_1_StandBy_1 = false;
        ns_St_1_StandBy_2 = true;
        ns_St_1_StandBy_3 = true;
        v_75 = power_St_1_StandBy;
        v_81 = stateA_1_St_1_StandBy;
        v_105 = nr_St_1_StandBy;
        v_90 = ns_St_1_StandBy_1;
        v_91 = ns_St_1_StandBy_2;
        v_92 = ns_St_1_StandBy_3;
      } else {
        power_St_1_Washing = 250;
        v_75 = power_St_1_Washing;
        stateA_1_St_1_Washing = 3;
        v_81 = stateA_1_St_1_Washing;
        nr_St_1_Washing = false;
        v_105 = nr_St_1_Washing;
        ns_St_1_Washing_1 = false;
        v_90 = ns_St_1_Washing_1;
        ns_St_1_Washing_2 = true;
        v_91 = ns_St_1_Washing_2;
        ns_St_1_Washing_3 = false;
        v_92 = ns_St_1_Washing_3;
      };
      v_77 = v_75;
      v_83 = v_81;
      v_99 = v_90;
      v_100 = v_91;
      v_101 = v_92;
      v_107 = v_105;
    } else {
      ck_2_3_0_0 = ck_2_3;
      if (ck_2_3_0_0) {
        v_76 = 0;
        v_82 = 0;
        v_106 = true;
        v_93 = true;
        v_94 = true;
        v_95 = true;
      } else {
        power_St_1_WaterFill = 15;
        v_76 = power_St_1_WaterFill;
        stateA_1_St_1_WaterFill = 1;
        v_82 = stateA_1_St_1_WaterFill;
        nr_St_1_WaterFill = false;
        v_106 = nr_St_1_WaterFill;
        ns_St_1_WaterFill_1 = false;
        v_93 = ns_St_1_WaterFill_1;
        ns_St_1_WaterFill_2 = false;
        v_94 = ns_St_1_WaterFill_2;
        ns_St_1_WaterFill_3 = false;
        v_95 = ns_St_1_WaterFill_3;
        if (ns_St_1_WaterFill_1) {
          ns_St_1_WaterFill_2_1 = ns_St_1_WaterFill_2;
          if (ns_St_1_WaterFill_2_1) {
            ns_St_1_WaterFill_3_1_1 = ns_St_1_WaterFill_3;
          } else {
            ns_St_1_WaterFill_3_1_0 = ns_St_1_WaterFill_3;
          };
        } else {
          ns_St_1_WaterFill_2_0 = ns_St_1_WaterFill_2;
          if (ns_St_1_WaterFill_2_0) {
            ns_St_1_WaterFill_3_0_1 = ns_St_1_WaterFill_3;
          } else {
            ns_St_1_WaterFill_3_0_0 = ns_St_1_WaterFill_3;
          };
        };
      };
      v_77 = v_76;
      v_83 = v_82;
      v_99 = v_93;
      v_100 = v_94;
      v_101 = v_95;
      v_107 = v_106;
    };
    power = v_77;
    stateA_1 = v_83;
    ns_1 = v_99;
    ns_2 = v_100;
    ns_3 = v_101;
    nr = v_107;
  };
  _out->stateA = stateA_1;
  _out->p = power;
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_2_1)) {
    if (ck_2_2_0) {
      if (ck_2_3_0_1) {
        if (ns_St_1_StandBy_1) {
          ns_St_1_StandBy_2_1 = ns_St_1_StandBy_2;
          if (ns_St_1_StandBy_2_1) {
            ns_St_1_StandBy_3_1_1 = ns_St_1_StandBy_3;
          } else {
            ns_St_1_StandBy_3_1_0 = ns_St_1_StandBy_3;
          };
        } else {
          ns_St_1_StandBy_2_0 = ns_St_1_StandBy_2;
          if (ns_St_1_StandBy_2_0) {
            ns_St_1_StandBy_3_0_1 = ns_St_1_StandBy_3;
          } else {
            ns_St_1_StandBy_3_0_0 = ns_St_1_StandBy_3;
          };
        };
      } else {
        if (ns_St_1_Washing_1) {
          ns_St_1_Washing_2_1 = ns_St_1_Washing_2;
          if (ns_St_1_Washing_2_1) {
            ns_St_1_Washing_3_1_1 = ns_St_1_Washing_3;
          } else {
            ns_St_1_Washing_3_1_0 = ns_St_1_Washing_3;
          };
        } else {
          ns_St_1_Washing_2_0 = ns_St_1_Washing_2;
          if (ns_St_1_Washing_2_0) {
            ns_St_1_Washing_3_0_1 = ns_St_1_Washing_3;
          } else {
            ns_St_1_Washing_3_0_0 = ns_St_1_Washing_3;
          };
        };
      };
    };
  };
  if (s_3_1) {
    s_3_2_1 = s_3_2;
    if (s_3_2_1) {
      s_3_3_1_1 = s_3_3;
    } else {
      s_3_3_1_0 = s_3_3;
    };
  } else {
    s_3_2_0 = s_3_2;
    if (s_3_2_0) {
      s_3_3_0_1 = s_3_3;
    } else {
      s_3_3_0_0 = s_3_3;
    };
  };
  if (!(ck_1)) {
    if (ck_2_4_0) {
      if (ck_3_0_1) {
        if (s_3_St_1_StandBy_1) {
          s_3_St_1_StandBy_2_1 = s_3_St_1_StandBy_2;
          if (s_3_St_1_StandBy_2_1) {
            s_3_St_1_StandBy_3_1_1 = s_3_St_1_StandBy_3;
          } else {
            s_3_St_1_StandBy_3_1_0 = s_3_St_1_StandBy_3;
          };
        } else {
          s_3_St_1_StandBy_2_0 = s_3_St_1_StandBy_2;
          if (s_3_St_1_StandBy_2_0) {
            s_3_St_1_StandBy_3_0_1 = s_3_St_1_StandBy_3;
          } else {
            s_3_St_1_StandBy_3_0_0 = s_3_St_1_StandBy_3;
          };
        };
      } else {
        if (s_3_St_1_Washing_1) {
          s_3_St_1_Washing_2_1 = s_3_St_1_Washing_2;
          if (s_3_St_1_Washing_2_1) {
            s_3_St_1_Washing_3_1_1 = s_3_St_1_Washing_3;
          } else {
            s_3_St_1_Washing_3_1_0 = s_3_St_1_Washing_3;
          };
        } else {
          s_3_St_1_Washing_2_0 = s_3_St_1_Washing_2;
          if (s_3_St_1_Washing_2_0) {
            s_3_St_1_Washing_3_0_1 = s_3_St_1_Washing_3;
          } else {
            s_3_St_1_Washing_3_0_0 = s_3_St_1_Washing_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_108 = ns_1;
  self->v_109 = ns_2;
  self->v_110 = ns_3;;
}

