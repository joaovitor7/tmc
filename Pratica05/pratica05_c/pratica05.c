/* --- Generated the 7/1/2019 at 8:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s task pratica05.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pratica05.h"

void Pratica05__rad_reset(Pratica05__rad_mem* self) {
  self->pnr = false;
  self->v_149 = false;
  self->v_150 = false;
}

void Pratica05__rad_step(int up1, int down1, int up2, int down2, int c1,
                         int c2, Pratica05__rad_out* _out,
                         Pratica05__rad_mem* self) {
  
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int ns_St_HIGHT_2_0;
  int ns_St_HIGHT_2_1;
  int ns_St_ECO_2_0;
  int ns_St_ECO_2_1;
  int ns_St_FROST_2_0;
  int ns_St_FROST_2_1;
  int ns_St_OFF_2_0;
  int ns_St_OFF_2_1;
  int ck_1_2_0;
  int ck_1_2_1;
  int nr_St_HIGHT;
  int ns_St_HIGHT_2;
  int ns_St_HIGHT_1;
  int ss_St_HIGHT;
  int power_St_HIGHT;
  int nr_St_ECO;
  int ns_St_ECO_2;
  int ns_St_ECO_1;
  int ss_St_ECO;
  int power_St_ECO;
  int nr_St_FROST;
  int ns_St_FROST_2;
  int ns_St_FROST_1;
  int ss_St_FROST;
  int power_St_FROST;
  int nr_St_OFF;
  int ns_St_OFF_2;
  int ns_St_OFF_1;
  int ss_St_OFF;
  int power_St_OFF;
  int ck_1_2;
  int ck_1_1;
  int v_20;
  int v_19;
  int v_17_2_0;
  int v_17_2_1;
  int v_15_2_0;
  int v_15_2_1;
  int v_18;
  int v_17_2;
  int v_17_1;
  int v_16;
  int v_15_2;
  int v_15_1;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_9_2_0;
  int v_9_2_1;
  int v_10;
  int v_9_2;
  int v_9_1;
  int v_8;
  int v_7;
  int v_6;
  int v_4_2_0;
  int v_4_2_1;
  int v_5;
  int v_4_2;
  int v_4_1;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int s_St_HIGHT_2_0;
  int s_St_HIGHT_2_1;
  int s_St_ECO_2_0;
  int s_St_ECO_2_1;
  int s_St_FROST_2_0;
  int s_St_FROST_2_1;
  int s_St_OFF_2_0;
  int s_St_OFF_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_HIGHT;
  int s_St_HIGHT_2;
  int s_St_HIGHT_1;
  int r_St_ECO;
  int s_St_ECO_2;
  int s_St_ECO_1;
  int r_St_FROST;
  int s_St_FROST_2;
  int s_St_FROST_1;
  int r_St_OFF;
  int s_St_OFF_2;
  int s_St_OFF_1;
  int ck_2;
  int ck_1_3;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_3 = self->v_149;
  ck_2 = self->v_150;
  if (ck_1_3) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_8 = (up2&&c2);
      if (v_8) {
        v_10 = true;
        v_9_1 = false;
        v_9_2 = true;
      } else {
        v_10 = self->pnr;
        v_9_1 = true;
        v_9_2 = true;
      };
      v_6 = !(c1);
      v_7 = (down1||v_6);
      if (v_7) {
        r_St_ECO = true;
      } else {
        r_St_ECO = v_10;
      };
      v_155 = r_St_ECO;
      if (v_7) {
        s_St_ECO_1 = true;
      } else {
        s_St_ECO_1 = v_9_1;
      };
      v_151 = s_St_ECO_1;
      if (v_7) {
        s_St_ECO_2 = false;
      } else {
        s_St_ECO_2 = v_9_2;
      };
      v_152 = s_St_ECO_2;
      if (v_9_1) {
        v_9_2_1 = v_9_2;
      } else {
        v_9_2_0 = v_9_2;
      };
      if (s_St_ECO_1) {
        s_St_ECO_2_1 = s_St_ECO_2;
      } else {
        s_St_ECO_2_0 = s_St_ECO_2;
      };
    } else {
      v_14 = (up2&&c2);
      if (v_14) {
        v_16 = true;
        v_15_1 = false;
        v_15_2 = true;
      } else {
        v_16 = self->pnr;
        v_15_1 = true;
        v_15_2 = false;
      };
      v_12 = !(c1);
      v_13 = (down1||v_12);
      if (v_13) {
        v_18 = true;
        v_17_1 = false;
        v_17_2 = false;
      } else {
        v_18 = v_16;
        v_17_1 = v_15_1;
        v_17_2 = v_15_2;
      };
      v_11 = (up1&&c1);
      if (v_11) {
        r_St_FROST = true;
        s_St_FROST_1 = true;
        s_St_FROST_2 = true;
      } else {
        r_St_FROST = v_18;
        s_St_FROST_1 = v_17_1;
        s_St_FROST_2 = v_17_2;
      };
      v_155 = r_St_FROST;
      v_151 = s_St_FROST_1;
      v_152 = s_St_FROST_2;
      if (v_15_1) {
        v_15_2_1 = v_15_2;
      } else {
        v_15_2_0 = v_15_2;
      };
      if (v_17_1) {
        v_17_2_1 = v_17_2;
      } else {
        v_17_2_0 = v_17_2;
      };
      if (s_St_FROST_1) {
        s_St_FROST_2_1 = s_St_FROST_2;
      } else {
        s_St_FROST_2_0 = s_St_FROST_2;
      };
    };
    s_1 = v_151;
    s_2 = v_152;
    r = v_155;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_2 = !(c2);
      v_3 = (down2&&v_2);
      if (v_3) {
        v_5 = true;
        v_4_1 = true;
        v_4_2 = false;
      } else {
        v_5 = self->pnr;
        v_4_1 = false;
        v_4_2 = true;
      };
      v = !(c1);
      v_1 = (down1&&v);
      if (v_1) {
        r_St_HIGHT = true;
      } else {
        r_St_HIGHT = v_5;
      };
      v_156 = r_St_HIGHT;
      if (v_1) {
        s_St_HIGHT_1 = true;
      } else {
        s_St_HIGHT_1 = v_4_1;
      };
      v_153 = s_St_HIGHT_1;
      if (v_1) {
        s_St_HIGHT_2 = true;
      } else {
        s_St_HIGHT_2 = v_4_2;
      };
      v_154 = s_St_HIGHT_2;
    } else {
      v_19 = !(c1);
      v_20 = (up1||v_19);
      if (v_20) {
        r_St_OFF = true;
        s_St_OFF_1 = true;
        s_St_OFF_2 = false;
      } else {
        r_St_OFF = self->pnr;
        s_St_OFF_1 = false;
        s_St_OFF_2 = false;
      };
      v_156 = r_St_OFF;
      v_153 = s_St_OFF_1;
      v_154 = s_St_OFF_2;
    };
    s_1 = v_153;
    s_2 = v_154;
    r = v_156;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      power_St_ECO = 1500;
      v_139 = power_St_ECO;
      ss_St_ECO = 2;
      v_141 = ss_St_ECO;
      nr_St_ECO = false;
      v_147 = nr_St_ECO;
      ns_St_ECO_1 = true;
      v_143 = ns_St_ECO_1;
      ns_St_ECO_2 = true;
      v_144 = ns_St_ECO_2;
      if (ns_St_ECO_1) {
        ns_St_ECO_2_1 = ns_St_ECO_2;
      } else {
        ns_St_ECO_2_0 = ns_St_ECO_2;
      };
    } else {
      power_St_FROST = 300;
      ss_St_FROST = 1;
      nr_St_FROST = false;
      ns_St_FROST_1 = true;
      ns_St_FROST_2 = false;
      v_139 = power_St_FROST;
      v_141 = ss_St_FROST;
      v_147 = nr_St_FROST;
      v_143 = ns_St_FROST_1;
      v_144 = ns_St_FROST_2;
      if (ns_St_FROST_1) {
        ns_St_FROST_2_1 = ns_St_FROST_2;
      } else {
        ns_St_FROST_2_0 = ns_St_FROST_2;
      };
    };
    _out->power = v_139;
    _out->ss = v_141;
    ns_1 = v_143;
    ns_2 = v_144;
    nr = v_147;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      power_St_HIGHT = 2000;
      v_140 = power_St_HIGHT;
      ss_St_HIGHT = 3;
      v_142 = ss_St_HIGHT;
      nr_St_HIGHT = false;
      v_148 = nr_St_HIGHT;
      ns_St_HIGHT_1 = false;
      v_145 = ns_St_HIGHT_1;
      ns_St_HIGHT_2 = true;
      v_146 = ns_St_HIGHT_2;
    } else {
      power_St_OFF = 0;
      ss_St_OFF = 0;
      nr_St_OFF = false;
      ns_St_OFF_1 = false;
      ns_St_OFF_2 = false;
      v_140 = power_St_OFF;
      v_142 = ss_St_OFF;
      v_148 = nr_St_OFF;
      v_145 = ns_St_OFF_1;
      v_146 = ns_St_OFF_2;
    };
    _out->power = v_140;
    _out->ss = v_142;
    ns_1 = v_145;
    ns_2 = v_146;
    nr = v_148;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_1_1)) {
    if (ck_1_2_0) {
      if (ns_St_HIGHT_1) {
        ns_St_HIGHT_2_1 = ns_St_HIGHT_2;
      } else {
        ns_St_HIGHT_2_0 = ns_St_HIGHT_2;
      };
    } else {
      if (ns_St_OFF_1) {
        ns_St_OFF_2_1 = ns_St_OFF_2;
      } else {
        ns_St_OFF_2_0 = ns_St_OFF_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1_3)) {
    if (ck_2_0) {
      if (v_4_1) {
        v_4_2_1 = v_4_2;
      } else {
        v_4_2_0 = v_4_2;
      };
      if (s_St_HIGHT_1) {
        s_St_HIGHT_2_1 = s_St_HIGHT_2;
      } else {
        s_St_HIGHT_2_0 = s_St_HIGHT_2;
      };
    } else {
      if (s_St_OFF_1) {
        s_St_OFF_2_1 = s_St_OFF_2;
      } else {
        s_St_OFF_2_0 = s_St_OFF_2;
      };
    };
  };
  self->pnr = nr;
  self->v_149 = ns_1;
  self->v_150 = ns_2;;
}

void Pratica05__police_reset(Pratica05__police_mem* self) {
  self->pnr = false;
  self->v_169 = false;
  self->v_170 = false;
}

void Pratica05__police_step(int eco, int confort,
                            Pratica05__police_out* _out,
                            Pratica05__police_mem* self) {
  
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int ns_St_1_CONFORT_2_0;
  int ns_St_1_CONFORT_2_1;
  int s_St_1_CONFORT_2_0;
  int s_St_1_CONFORT_2_1;
  int ns_St_1_ECO_2_0;
  int ns_St_1_ECO_2_1;
  int s_St_1_ECO_2_0;
  int s_St_1_ECO_2_1;
  int ns_St_1_MS_2_0;
  int ns_St_1_MS_2_1;
  int s_St_1_MS_2_0;
  int s_St_1_MS_2_1;
  int ck_2_2_0;
  int ck_2_2_1;
  int nr_St_1_CONFORT;
  int ns_St_1_CONFORT_2;
  int ns_St_1_CONFORT_1;
  int s_St_1_CONFORT_2;
  int s_St_1_CONFORT_1;
  int pl_St_1_CONFORT;
  int nr_St_1_ECO;
  int ns_St_1_ECO_2;
  int ns_St_1_ECO_1;
  int s_St_1_ECO_2;
  int s_St_1_ECO_1;
  int pl_St_1_ECO;
  int nr_St_1_MS;
  int ns_St_1_MS_2;
  int ns_St_1_MS_1;
  int s_St_1_MS_2;
  int s_St_1_MS_1;
  int pl_St_1_MS;
  int ck_2_2;
  int ck_2_1;
  int v_26_2_0;
  int v_26_2_1;
  int v_27;
  int v_26_2;
  int v_26_1;
  int v_24_2_0;
  int v_24_2_1;
  int v_25;
  int v_24_2;
  int v_24_1;
  int v_23;
  int v_21_2_0;
  int v_21_2_1;
  int v_22;
  int v_21_2;
  int v_21_1;
  int v;
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int s_3_St_1_CONFORT_2_0;
  int s_3_St_1_CONFORT_2_1;
  int s_3_St_1_ECO_2_0;
  int s_3_St_1_ECO_2_1;
  int s_3_St_1_MS_2_0;
  int s_3_St_1_MS_2_1;
  int ck_2_3_0;
  int ck_2_3_1;
  int r_St_1_CONFORT;
  int s_3_St_1_CONFORT_2;
  int s_3_St_1_CONFORT_1;
  int r_St_1_ECO;
  int s_3_St_1_ECO_2;
  int s_3_St_1_ECO_1;
  int r_St_1_MS;
  int s_3_St_1_MS_2;
  int s_3_St_1_MS_1;
  int ck_2_3;
  int ck_1;
  int s_2_0;
  int s_2_1;
  int s_3_2_0;
  int s_3_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_3_2;
  int s_3_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_169;
  ck_2_3 = self->v_170;
  if (ck_1) {
    ck_2_3_1 = ck_2_3;
    if (ck_2_3_1) {
      if (eco) {
        v_22 = true;
        v_21_1 = true;
        v_21_2 = false;
      } else {
        v_22 = self->pnr;
        v_21_1 = true;
        v_21_2 = true;
      };
      v = !(confort);
      if (v) {
        r_St_1_CONFORT = true;
      } else {
        r_St_1_CONFORT = v_22;
      };
      v_175 = r_St_1_CONFORT;
      if (v) {
        s_3_St_1_CONFORT_1 = false;
      } else {
        s_3_St_1_CONFORT_1 = v_21_1;
      };
      v_171 = s_3_St_1_CONFORT_1;
      if (v) {
        s_3_St_1_CONFORT_2 = false;
      } else {
        s_3_St_1_CONFORT_2 = v_21_2;
      };
      v_172 = s_3_St_1_CONFORT_2;
    } else {
      if (confort) {
        v_25 = true;
        v_24_1 = true;
        v_24_2 = true;
      } else {
        v_25 = self->pnr;
        v_24_1 = true;
        v_24_2 = false;
      };
      v_23 = !(eco);
      if (v_23) {
        r_St_1_ECO = true;
        s_3_St_1_ECO_1 = false;
        s_3_St_1_ECO_2 = false;
      } else {
        r_St_1_ECO = v_25;
        s_3_St_1_ECO_1 = v_24_1;
        s_3_St_1_ECO_2 = v_24_2;
      };
      v_175 = r_St_1_ECO;
      v_171 = s_3_St_1_ECO_1;
      v_172 = s_3_St_1_ECO_2;
    };
    s_3_1 = v_171;
    s_3_2 = v_172;
    r = v_175;
  } else {
    ck_2_3_0 = ck_2_3;
    if (ck_2_3_0) {
      v_176 = true;
      v_173 = true;
      v_174 = true;
    } else {
      if (confort) {
        v_27 = true;
      } else {
        v_27 = self->pnr;
      };
      if (eco) {
        r_St_1_MS = true;
      } else {
        r_St_1_MS = v_27;
      };
      v_176 = r_St_1_MS;
      if (confort) {
        v_26_1 = true;
      } else {
        v_26_1 = false;
      };
      if (eco) {
        s_3_St_1_MS_1 = true;
      } else {
        s_3_St_1_MS_1 = v_26_1;
      };
      v_173 = s_3_St_1_MS_1;
      if (confort) {
        v_26_2 = true;
      } else {
        v_26_2 = false;
      };
      if (eco) {
        s_3_St_1_MS_2 = false;
      } else {
        s_3_St_1_MS_2 = v_26_2;
      };
      v_174 = s_3_St_1_MS_2;
      if (v_26_1) {
        v_26_2_1 = v_26_2;
      } else {
        v_26_2_0 = v_26_2;
      };
      if (s_3_St_1_MS_1) {
        s_3_St_1_MS_2_1 = s_3_St_1_MS_2;
      } else {
        s_3_St_1_MS_2_0 = s_3_St_1_MS_2;
      };
    };
    s_3_1 = v_173;
    s_3_2 = v_174;
    r = v_176;
  };
  ck_2_1 = s_3_1;
  ck_2_2 = s_3_2;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      pl_St_1_CONFORT = 7000;
      v_157 = pl_St_1_CONFORT;
      s_St_1_CONFORT_1 = true;
      v_159 = s_St_1_CONFORT_1;
      s_St_1_CONFORT_2 = true;
      v_160 = s_St_1_CONFORT_2;
      nr_St_1_CONFORT = false;
      v_167 = nr_St_1_CONFORT;
      ns_St_1_CONFORT_1 = true;
      v_163 = ns_St_1_CONFORT_1;
      ns_St_1_CONFORT_2 = true;
      v_164 = ns_St_1_CONFORT_2;
    } else {
      pl_St_1_ECO = 5000;
      s_St_1_ECO_1 = true;
      s_St_1_ECO_2 = false;
      nr_St_1_ECO = false;
      ns_St_1_ECO_1 = true;
      ns_St_1_ECO_2 = false;
      v_157 = pl_St_1_ECO;
      v_159 = s_St_1_ECO_1;
      v_160 = s_St_1_ECO_2;
      v_167 = nr_St_1_ECO;
      v_163 = ns_St_1_ECO_1;
      v_164 = ns_St_1_ECO_2;
    };
    _out->pl = v_157;
    _out->s_1 = v_159;
    _out->s_2 = v_160;
    ns_1 = v_163;
    ns_2 = v_164;
    nr = v_167;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      v_158 = 0;
      v_161 = true;
      v_162 = true;
      v_168 = true;
      v_165 = true;
      v_166 = true;
    } else {
      pl_St_1_MS = 3000;
      v_158 = pl_St_1_MS;
      s_St_1_MS_1 = false;
      v_161 = s_St_1_MS_1;
      s_St_1_MS_2 = false;
      v_162 = s_St_1_MS_2;
      nr_St_1_MS = false;
      v_168 = nr_St_1_MS;
      ns_St_1_MS_1 = false;
      v_165 = ns_St_1_MS_1;
      ns_St_1_MS_2 = false;
      v_166 = ns_St_1_MS_2;
      if (s_St_1_MS_1) {
        s_St_1_MS_2_1 = s_St_1_MS_2;
      } else {
        s_St_1_MS_2_0 = s_St_1_MS_2;
      };
      if (ns_St_1_MS_1) {
        ns_St_1_MS_2_1 = ns_St_1_MS_2;
      } else {
        ns_St_1_MS_2_0 = ns_St_1_MS_2;
      };
    };
    _out->pl = v_158;
    _out->s_1 = v_161;
    _out->s_2 = v_162;
    ns_1 = v_165;
    ns_2 = v_166;
    nr = v_168;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (_out->s_1) {
    s_2_1 = _out->s_2;
  } else {
    s_2_0 = _out->s_2;
  };
  if (ck_2_1) {
    if (ck_2_2_1) {
      if (s_St_1_CONFORT_1) {
        s_St_1_CONFORT_2_1 = s_St_1_CONFORT_2;
      } else {
        s_St_1_CONFORT_2_0 = s_St_1_CONFORT_2;
      };
      if (ns_St_1_CONFORT_1) {
        ns_St_1_CONFORT_2_1 = ns_St_1_CONFORT_2;
      } else {
        ns_St_1_CONFORT_2_0 = ns_St_1_CONFORT_2;
      };
    } else {
      if (s_St_1_ECO_1) {
        s_St_1_ECO_2_1 = s_St_1_ECO_2;
      } else {
        s_St_1_ECO_2_0 = s_St_1_ECO_2;
      };
      if (ns_St_1_ECO_1) {
        ns_St_1_ECO_2_1 = ns_St_1_ECO_2;
      } else {
        ns_St_1_ECO_2_0 = ns_St_1_ECO_2;
      };
    };
  };
  if (s_3_1) {
    s_3_2_1 = s_3_2;
  } else {
    s_3_2_0 = s_3_2;
  };
  if (ck_1) {
    if (ck_2_3_1) {
      if (v_21_1) {
        v_21_2_1 = v_21_2;
      } else {
        v_21_2_0 = v_21_2;
      };
      if (s_3_St_1_CONFORT_1) {
        s_3_St_1_CONFORT_2_1 = s_3_St_1_CONFORT_2;
      } else {
        s_3_St_1_CONFORT_2_0 = s_3_St_1_CONFORT_2;
      };
    } else {
      if (v_24_1) {
        v_24_2_1 = v_24_2;
      } else {
        v_24_2_0 = v_24_2;
      };
      if (s_3_St_1_ECO_1) {
        s_3_St_1_ECO_2_1 = s_3_St_1_ECO_2;
      } else {
        s_3_St_1_ECO_2_0 = s_3_St_1_ECO_2;
      };
    };
  };
  self->pnr = nr;
  self->v_169 = ns_1;
  self->v_170 = ns_2;;
}

void Pratica05__ws_reset(Pratica05__ws_mem* self) {
  self->pnr = false;
  self->v_207 = true;
  self->v_208 = true;
  self->v_209 = true;
}

void Pratica05__ws_step(int s, int e, int c, Pratica05__ws_out* _out,
                        Pratica05__ws_mem* self) {
  
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int ns_St_2_STANDBY_2_0;
  int ns_St_2_STANDBY_3_0_0;
  int ns_St_2_STANDBY_3_0_1;
  int ns_St_2_STANDBY_2_1;
  int ns_St_2_STANDBY_3_1_0;
  int ns_St_2_STANDBY_3_1_1;
  int ns_St_2_SPIN_2_0;
  int ns_St_2_SPIN_3_0_0;
  int ns_St_2_SPIN_3_0_1;
  int ns_St_2_SPIN_2_1;
  int ns_St_2_SPIN_3_1_0;
  int ns_St_2_SPIN_3_1_1;
  int ns_St_2_RINSE_2_0;
  int ns_St_2_RINSE_3_0_0;
  int ns_St_2_RINSE_3_0_1;
  int ns_St_2_RINSE_2_1;
  int ns_St_2_RINSE_3_1_0;
  int ns_St_2_RINSE_3_1_1;
  int ns_St_2_WASHING_2_0;
  int ns_St_2_WASHING_3_0_0;
  int ns_St_2_WASHING_3_0_1;
  int ns_St_2_WASHING_2_1;
  int ns_St_2_WASHING_3_1_0;
  int ns_St_2_WASHING_3_1_1;
  int ns_St_2_WF_2_0;
  int ns_St_2_WF_3_0_0;
  int ns_St_2_WF_3_0_1;
  int ns_St_2_WF_2_1;
  int ns_St_2_WF_3_1_0;
  int ns_St_2_WF_3_1_1;
  int ns_St_2_OFF_2_0;
  int ns_St_2_OFF_3_0_0;
  int ns_St_2_OFF_3_0_1;
  int ns_St_2_OFF_2_1;
  int ns_St_2_OFF_3_1_0;
  int ns_St_2_OFF_3_1_1;
  int ck_3_2_0;
  int ck_3_3_0_0;
  int ck_3_3_0_1;
  int ck_3_2_1;
  int ck_3_3_1_0;
  int ck_3_3_1_1;
  int nr_St_2_STANDBY;
  int ns_St_2_STANDBY_3;
  int ns_St_2_STANDBY_2;
  int ns_St_2_STANDBY_1;
  int power_St_2_STANDBY;
  int nr_St_2_SPIN;
  int ns_St_2_SPIN_3;
  int ns_St_2_SPIN_2;
  int ns_St_2_SPIN_1;
  int power_St_2_SPIN;
  int nr_St_2_RINSE;
  int ns_St_2_RINSE_3;
  int ns_St_2_RINSE_2;
  int ns_St_2_RINSE_1;
  int power_St_2_RINSE;
  int nr_St_2_WASHING;
  int ns_St_2_WASHING_3;
  int ns_St_2_WASHING_2;
  int ns_St_2_WASHING_1;
  int power_St_2_WASHING;
  int nr_St_2_WF;
  int ns_St_2_WF_3;
  int ns_St_2_WF_2;
  int ns_St_2_WF_1;
  int power_St_2_WF;
  int nr_St_2_OFF;
  int ns_St_2_OFF_3;
  int ns_St_2_OFF_2;
  int ns_St_2_OFF_1;
  int power_St_2_OFF;
  int ck_3_3;
  int ck_3_2;
  int ck_3_1;
  int v_30_2_0;
  int v_30_3_0_0;
  int v_30_3_0_1;
  int v_30_2_1;
  int v_30_3_1_0;
  int v_30_3_1_1;
  int v_31;
  int v_30_3;
  int v_30_2;
  int v_30_1;
  int v_29;
  int v_28;
  int v;
  int v_233;
  int v_232;
  int v_231;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int s_4_St_2_STANDBY_2_0;
  int s_4_St_2_STANDBY_3_0_0;
  int s_4_St_2_STANDBY_3_0_1;
  int s_4_St_2_STANDBY_2_1;
  int s_4_St_2_STANDBY_3_1_0;
  int s_4_St_2_STANDBY_3_1_1;
  int s_4_St_2_SPIN_2_0;
  int s_4_St_2_SPIN_3_0_0;
  int s_4_St_2_SPIN_3_0_1;
  int s_4_St_2_SPIN_2_1;
  int s_4_St_2_SPIN_3_1_0;
  int s_4_St_2_SPIN_3_1_1;
  int s_4_St_2_RINSE_2_0;
  int s_4_St_2_RINSE_3_0_0;
  int s_4_St_2_RINSE_3_0_1;
  int s_4_St_2_RINSE_2_1;
  int s_4_St_2_RINSE_3_1_0;
  int s_4_St_2_RINSE_3_1_1;
  int s_4_St_2_WASHING_2_0;
  int s_4_St_2_WASHING_3_0_0;
  int s_4_St_2_WASHING_3_0_1;
  int s_4_St_2_WASHING_2_1;
  int s_4_St_2_WASHING_3_1_0;
  int s_4_St_2_WASHING_3_1_1;
  int s_4_St_2_WF_2_0;
  int s_4_St_2_WF_3_0_0;
  int s_4_St_2_WF_3_0_1;
  int s_4_St_2_WF_2_1;
  int s_4_St_2_WF_3_1_0;
  int s_4_St_2_WF_3_1_1;
  int s_4_St_2_OFF_2_0;
  int s_4_St_2_OFF_3_0_0;
  int s_4_St_2_OFF_3_0_1;
  int s_4_St_2_OFF_2_1;
  int s_4_St_2_OFF_3_1_0;
  int s_4_St_2_OFF_3_1_1;
  int ck_2_0;
  int ck_3_4_0_0;
  int ck_3_4_0_1;
  int ck_2_1;
  int ck_3_4_1_0;
  int ck_3_4_1_1;
  int r_St_2_STANDBY;
  int s_4_St_2_STANDBY_3;
  int s_4_St_2_STANDBY_2;
  int s_4_St_2_STANDBY_1;
  int r_St_2_SPIN;
  int s_4_St_2_SPIN_3;
  int s_4_St_2_SPIN_2;
  int s_4_St_2_SPIN_1;
  int r_St_2_RINSE;
  int s_4_St_2_RINSE_3;
  int s_4_St_2_RINSE_2;
  int s_4_St_2_RINSE_1;
  int r_St_2_WASHING;
  int s_4_St_2_WASHING_3;
  int s_4_St_2_WASHING_2;
  int s_4_St_2_WASHING_1;
  int r_St_2_WF;
  int s_4_St_2_WF_3;
  int s_4_St_2_WF_2;
  int s_4_St_2_WF_1;
  int r_St_2_OFF;
  int s_4_St_2_OFF_3;
  int s_4_St_2_OFF_2;
  int s_4_St_2_OFF_1;
  int ck_3_4;
  int ck_2;
  int ck_1;
  int s_4_2_0;
  int s_4_3_0_0;
  int s_4_3_0_1;
  int s_4_2_1;
  int s_4_3_1_0;
  int s_4_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_4_3;
  int s_4_2;
  int s_4_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_207;
  ck_2 = self->v_208;
  ck_3_4 = self->v_209;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_4_1_1 = ck_3_4;
      if (ck_3_4_1_1) {
        if (s) {
          r_St_2_OFF = true;
          s_4_St_2_OFF_1 = false;
          s_4_St_2_OFF_2 = false;
          s_4_St_2_OFF_3 = false;
        } else {
          r_St_2_OFF = self->pnr;
          s_4_St_2_OFF_1 = true;
          s_4_St_2_OFF_2 = true;
          s_4_St_2_OFF_3 = true;
        };
        v_228 = r_St_2_OFF;
        v_210 = s_4_St_2_OFF_1;
        v_211 = s_4_St_2_OFF_2;
        v_212 = s_4_St_2_OFF_3;
        if (s_4_St_2_OFF_1) {
          s_4_St_2_OFF_2_1 = s_4_St_2_OFF_2;
          if (s_4_St_2_OFF_2_1) {
            s_4_St_2_OFF_3_1_1 = s_4_St_2_OFF_3;
          } else {
            s_4_St_2_OFF_3_1_0 = s_4_St_2_OFF_3;
          };
        } else {
          s_4_St_2_OFF_2_0 = s_4_St_2_OFF_2;
          if (s_4_St_2_OFF_2_0) {
            s_4_St_2_OFF_3_0_1 = s_4_St_2_OFF_3;
          } else {
            s_4_St_2_OFF_3_0_0 = s_4_St_2_OFF_3;
          };
        };
      } else {
        if (e) {
          r_St_2_RINSE = true;
        } else {
          r_St_2_RINSE = self->pnr;
        };
        v_228 = r_St_2_RINSE;
        if (e) {
          s_4_St_2_RINSE_1 = true;
        } else {
          s_4_St_2_RINSE_1 = true;
        };
        v_210 = s_4_St_2_RINSE_1;
        if (e) {
          s_4_St_2_RINSE_2 = false;
        } else {
          s_4_St_2_RINSE_2 = true;
        };
        v_211 = s_4_St_2_RINSE_2;
        if (e) {
          s_4_St_2_RINSE_3 = false;
        } else {
          s_4_St_2_RINSE_3 = false;
        };
        v_212 = s_4_St_2_RINSE_3;
        if (s_4_St_2_RINSE_1) {
          s_4_St_2_RINSE_2_1 = s_4_St_2_RINSE_2;
          if (s_4_St_2_RINSE_2_1) {
            s_4_St_2_RINSE_3_1_1 = s_4_St_2_RINSE_3;
          } else {
            s_4_St_2_RINSE_3_1_0 = s_4_St_2_RINSE_3;
          };
        } else {
          s_4_St_2_RINSE_2_0 = s_4_St_2_RINSE_2;
          if (s_4_St_2_RINSE_2_0) {
            s_4_St_2_RINSE_3_0_1 = s_4_St_2_RINSE_3;
          } else {
            s_4_St_2_RINSE_3_0_0 = s_4_St_2_RINSE_3;
          };
        };
      };
      v_222 = v_210;
      v_223 = v_211;
      v_224 = v_212;
      v_230 = v_228;
    } else {
      ck_3_4_1_0 = ck_3_4;
      if (ck_3_4_1_0) {
        v_229 = true;
        v_213 = true;
        v_214 = true;
        v_215 = true;
      } else {
        if (e) {
          r_St_2_SPIN = true;
        } else {
          r_St_2_SPIN = self->pnr;
        };
        v_229 = r_St_2_SPIN;
        if (e) {
          s_4_St_2_SPIN_1 = true;
        } else {
          s_4_St_2_SPIN_1 = true;
        };
        v_213 = s_4_St_2_SPIN_1;
        if (e) {
          s_4_St_2_SPIN_2 = true;
        } else {
          s_4_St_2_SPIN_2 = false;
        };
        v_214 = s_4_St_2_SPIN_2;
        if (e) {
          s_4_St_2_SPIN_3 = true;
        } else {
          s_4_St_2_SPIN_3 = false;
        };
        v_215 = s_4_St_2_SPIN_3;
      };
      v_222 = v_213;
      v_223 = v_214;
      v_224 = v_215;
      v_230 = v_229;
      if (!(ck_3_4_1_0)) {
        if (s_4_St_2_SPIN_1) {
          s_4_St_2_SPIN_2_1 = s_4_St_2_SPIN_2;
          if (s_4_St_2_SPIN_2_1) {
            s_4_St_2_SPIN_3_1_1 = s_4_St_2_SPIN_3;
          } else {
            s_4_St_2_SPIN_3_1_0 = s_4_St_2_SPIN_3;
          };
        } else {
          s_4_St_2_SPIN_2_0 = s_4_St_2_SPIN_2;
          if (s_4_St_2_SPIN_2_0) {
            s_4_St_2_SPIN_3_0_1 = s_4_St_2_SPIN_3;
          } else {
            s_4_St_2_SPIN_3_0_0 = s_4_St_2_SPIN_3;
          };
        };
      };
    };
    s_4_1 = v_222;
    s_4_2 = v_223;
    s_4_3 = v_224;
    r = v_230;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_4_0_1 = ck_3_4;
      if (ck_3_4_0_1) {
        if (c) {
          r_St_2_STANDBY = true;
        } else {
          r_St_2_STANDBY = self->pnr;
        };
        v_231 = r_St_2_STANDBY;
        if (c) {
          s_4_St_2_STANDBY_1 = false;
        } else {
          s_4_St_2_STANDBY_1 = false;
        };
        v_216 = s_4_St_2_STANDBY_1;
        if (c) {
          s_4_St_2_STANDBY_2 = true;
        } else {
          s_4_St_2_STANDBY_2 = true;
        };
        v_217 = s_4_St_2_STANDBY_2;
        if (c) {
          s_4_St_2_STANDBY_3 = false;
        } else {
          s_4_St_2_STANDBY_3 = true;
        };
        v_218 = s_4_St_2_STANDBY_3;
      } else {
        if (e) {
          r_St_2_WASHING = true;
          s_4_St_2_WASHING_1 = true;
          s_4_St_2_WASHING_2 = true;
          s_4_St_2_WASHING_3 = false;
        } else {
          r_St_2_WASHING = self->pnr;
          s_4_St_2_WASHING_1 = false;
          s_4_St_2_WASHING_2 = true;
          s_4_St_2_WASHING_3 = false;
        };
        v_231 = r_St_2_WASHING;
        v_216 = s_4_St_2_WASHING_1;
        v_217 = s_4_St_2_WASHING_2;
        v_218 = s_4_St_2_WASHING_3;
      };
      v_225 = v_216;
      v_226 = v_217;
      v_227 = v_218;
      v_233 = v_231;
    } else {
      ck_3_4_0_0 = ck_3_4;
      if (ck_3_4_0_0) {
        v_232 = true;
        v_219 = true;
        v_220 = true;
        v_221 = true;
      } else {
        v_28 = !(c);
        v_29 = (e&&v_28);
        if (v_29) {
          v_31 = true;
          v_30_1 = false;
          v_30_2 = true;
          v_30_3 = true;
        } else {
          v_31 = self->pnr;
          v_30_1 = false;
          v_30_2 = false;
          v_30_3 = false;
        };
        v = (e&&c);
        if (v) {
          r_St_2_WF = true;
        } else {
          r_St_2_WF = v_31;
        };
        v_232 = r_St_2_WF;
        if (v) {
          s_4_St_2_WF_1 = false;
        } else {
          s_4_St_2_WF_1 = v_30_1;
        };
        v_219 = s_4_St_2_WF_1;
        if (v) {
          s_4_St_2_WF_2 = true;
        } else {
          s_4_St_2_WF_2 = v_30_2;
        };
        v_220 = s_4_St_2_WF_2;
        if (v) {
          s_4_St_2_WF_3 = false;
        } else {
          s_4_St_2_WF_3 = v_30_3;
        };
        v_221 = s_4_St_2_WF_3;
        if (v_30_1) {
          v_30_2_1 = v_30_2;
          if (v_30_2_1) {
            v_30_3_1_1 = v_30_3;
          } else {
            v_30_3_1_0 = v_30_3;
          };
        } else {
          v_30_2_0 = v_30_2;
          if (v_30_2_0) {
            v_30_3_0_1 = v_30_3;
          } else {
            v_30_3_0_0 = v_30_3;
          };
        };
        if (s_4_St_2_WF_1) {
          s_4_St_2_WF_2_1 = s_4_St_2_WF_2;
          if (s_4_St_2_WF_2_1) {
            s_4_St_2_WF_3_1_1 = s_4_St_2_WF_3;
          } else {
            s_4_St_2_WF_3_1_0 = s_4_St_2_WF_3;
          };
        } else {
          s_4_St_2_WF_2_0 = s_4_St_2_WF_2;
          if (s_4_St_2_WF_2_0) {
            s_4_St_2_WF_3_0_1 = s_4_St_2_WF_3;
          } else {
            s_4_St_2_WF_3_0_0 = s_4_St_2_WF_3;
          };
        };
      };
      v_225 = v_219;
      v_226 = v_220;
      v_227 = v_221;
      v_233 = v_232;
    };
    s_4_1 = v_225;
    s_4_2 = v_226;
    s_4_3 = v_227;
    r = v_233;
  };
  ck_3_1 = s_4_1;
  ck_3_2 = s_4_2;
  ck_3_3 = s_4_3;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      ck_3_3_1_1 = ck_3_3;
      if (ck_3_3_1_1) {
        power_St_2_OFF = 0;
        nr_St_2_OFF = false;
        ns_St_2_OFF_1 = true;
        ns_St_2_OFF_2 = true;
        ns_St_2_OFF_3 = true;
        v_177 = power_St_2_OFF;
        v_201 = nr_St_2_OFF;
        v_183 = ns_St_2_OFF_1;
        v_184 = ns_St_2_OFF_2;
        v_185 = ns_St_2_OFF_3;
        if (ns_St_2_OFF_1) {
          ns_St_2_OFF_2_1 = ns_St_2_OFF_2;
          if (ns_St_2_OFF_2_1) {
            ns_St_2_OFF_3_1_1 = ns_St_2_OFF_3;
          } else {
            ns_St_2_OFF_3_1_0 = ns_St_2_OFF_3;
          };
        } else {
          ns_St_2_OFF_2_0 = ns_St_2_OFF_2;
          if (ns_St_2_OFF_2_0) {
            ns_St_2_OFF_3_0_1 = ns_St_2_OFF_3;
          } else {
            ns_St_2_OFF_3_0_0 = ns_St_2_OFF_3;
          };
        };
      } else {
        power_St_2_RINSE = 200;
        v_177 = power_St_2_RINSE;
        nr_St_2_RINSE = false;
        v_201 = nr_St_2_RINSE;
        ns_St_2_RINSE_1 = true;
        v_183 = ns_St_2_RINSE_1;
        ns_St_2_RINSE_2 = true;
        v_184 = ns_St_2_RINSE_2;
        ns_St_2_RINSE_3 = false;
        v_185 = ns_St_2_RINSE_3;
        if (ns_St_2_RINSE_1) {
          ns_St_2_RINSE_2_1 = ns_St_2_RINSE_2;
          if (ns_St_2_RINSE_2_1) {
            ns_St_2_RINSE_3_1_1 = ns_St_2_RINSE_3;
          } else {
            ns_St_2_RINSE_3_1_0 = ns_St_2_RINSE_3;
          };
        } else {
          ns_St_2_RINSE_2_0 = ns_St_2_RINSE_2;
          if (ns_St_2_RINSE_2_0) {
            ns_St_2_RINSE_3_0_1 = ns_St_2_RINSE_3;
          } else {
            ns_St_2_RINSE_3_0_0 = ns_St_2_RINSE_3;
          };
        };
      };
      v_179 = v_177;
      v_195 = v_183;
      v_196 = v_184;
      v_197 = v_185;
      v_203 = v_201;
    } else {
      ck_3_3_1_0 = ck_3_3;
      if (ck_3_3_1_0) {
        v_178 = 0;
        v_202 = true;
        v_186 = true;
        v_187 = true;
        v_188 = true;
      } else {
        power_St_2_SPIN = 800;
        v_178 = power_St_2_SPIN;
        nr_St_2_SPIN = false;
        v_202 = nr_St_2_SPIN;
        ns_St_2_SPIN_1 = true;
        v_186 = ns_St_2_SPIN_1;
        ns_St_2_SPIN_2 = false;
        v_187 = ns_St_2_SPIN_2;
        ns_St_2_SPIN_3 = false;
        v_188 = ns_St_2_SPIN_3;
      };
      v_179 = v_178;
      v_195 = v_186;
      v_196 = v_187;
      v_197 = v_188;
      v_203 = v_202;
      if (!(ck_3_3_1_0)) {
        if (ns_St_2_SPIN_1) {
          ns_St_2_SPIN_2_1 = ns_St_2_SPIN_2;
          if (ns_St_2_SPIN_2_1) {
            ns_St_2_SPIN_3_1_1 = ns_St_2_SPIN_3;
          } else {
            ns_St_2_SPIN_3_1_0 = ns_St_2_SPIN_3;
          };
        } else {
          ns_St_2_SPIN_2_0 = ns_St_2_SPIN_2;
          if (ns_St_2_SPIN_2_0) {
            ns_St_2_SPIN_3_0_1 = ns_St_2_SPIN_3;
          } else {
            ns_St_2_SPIN_3_0_0 = ns_St_2_SPIN_3;
          };
        };
      };
    };
    _out->power = v_179;
    ns_1 = v_195;
    ns_2 = v_196;
    ns_3 = v_197;
    nr = v_203;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      ck_3_3_0_1 = ck_3_3;
      if (ck_3_3_0_1) {
        power_St_2_STANDBY = 0;
        v_180 = power_St_2_STANDBY;
        nr_St_2_STANDBY = false;
        v_204 = nr_St_2_STANDBY;
        ns_St_2_STANDBY_1 = false;
        v_189 = ns_St_2_STANDBY_1;
        ns_St_2_STANDBY_2 = true;
        v_190 = ns_St_2_STANDBY_2;
        ns_St_2_STANDBY_3 = true;
        v_191 = ns_St_2_STANDBY_3;
      } else {
        power_St_2_WASHING = 250;
        nr_St_2_WASHING = false;
        ns_St_2_WASHING_1 = false;
        ns_St_2_WASHING_2 = true;
        ns_St_2_WASHING_3 = false;
        v_180 = power_St_2_WASHING;
        v_204 = nr_St_2_WASHING;
        v_189 = ns_St_2_WASHING_1;
        v_190 = ns_St_2_WASHING_2;
        v_191 = ns_St_2_WASHING_3;
      };
      v_182 = v_180;
      v_198 = v_189;
      v_199 = v_190;
      v_200 = v_191;
      v_206 = v_204;
    } else {
      ck_3_3_0_0 = ck_3_3;
      if (ck_3_3_0_0) {
        v_181 = 0;
        v_205 = true;
        v_192 = true;
        v_193 = true;
        v_194 = true;
      } else {
        power_St_2_WF = 15;
        v_181 = power_St_2_WF;
        nr_St_2_WF = false;
        v_205 = nr_St_2_WF;
        ns_St_2_WF_1 = false;
        v_192 = ns_St_2_WF_1;
        ns_St_2_WF_2 = false;
        v_193 = ns_St_2_WF_2;
        ns_St_2_WF_3 = false;
        v_194 = ns_St_2_WF_3;
        if (ns_St_2_WF_1) {
          ns_St_2_WF_2_1 = ns_St_2_WF_2;
          if (ns_St_2_WF_2_1) {
            ns_St_2_WF_3_1_1 = ns_St_2_WF_3;
          } else {
            ns_St_2_WF_3_1_0 = ns_St_2_WF_3;
          };
        } else {
          ns_St_2_WF_2_0 = ns_St_2_WF_2;
          if (ns_St_2_WF_2_0) {
            ns_St_2_WF_3_0_1 = ns_St_2_WF_3;
          } else {
            ns_St_2_WF_3_0_0 = ns_St_2_WF_3;
          };
        };
      };
      v_182 = v_181;
      v_198 = v_192;
      v_199 = v_193;
      v_200 = v_194;
      v_206 = v_205;
    };
    _out->power = v_182;
    ns_1 = v_198;
    ns_2 = v_199;
    ns_3 = v_200;
    nr = v_206;
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
  if (!(ck_3_1)) {
    if (ck_3_2_0) {
      if (ck_3_3_0_1) {
        if (ns_St_2_STANDBY_1) {
          ns_St_2_STANDBY_2_1 = ns_St_2_STANDBY_2;
          if (ns_St_2_STANDBY_2_1) {
            ns_St_2_STANDBY_3_1_1 = ns_St_2_STANDBY_3;
          } else {
            ns_St_2_STANDBY_3_1_0 = ns_St_2_STANDBY_3;
          };
        } else {
          ns_St_2_STANDBY_2_0 = ns_St_2_STANDBY_2;
          if (ns_St_2_STANDBY_2_0) {
            ns_St_2_STANDBY_3_0_1 = ns_St_2_STANDBY_3;
          } else {
            ns_St_2_STANDBY_3_0_0 = ns_St_2_STANDBY_3;
          };
        };
      } else {
        if (ns_St_2_WASHING_1) {
          ns_St_2_WASHING_2_1 = ns_St_2_WASHING_2;
          if (ns_St_2_WASHING_2_1) {
            ns_St_2_WASHING_3_1_1 = ns_St_2_WASHING_3;
          } else {
            ns_St_2_WASHING_3_1_0 = ns_St_2_WASHING_3;
          };
        } else {
          ns_St_2_WASHING_2_0 = ns_St_2_WASHING_2;
          if (ns_St_2_WASHING_2_0) {
            ns_St_2_WASHING_3_0_1 = ns_St_2_WASHING_3;
          } else {
            ns_St_2_WASHING_3_0_0 = ns_St_2_WASHING_3;
          };
        };
      };
    };
  };
  if (s_4_1) {
    s_4_2_1 = s_4_2;
    if (s_4_2_1) {
      s_4_3_1_1 = s_4_3;
    } else {
      s_4_3_1_0 = s_4_3;
    };
  } else {
    s_4_2_0 = s_4_2;
    if (s_4_2_0) {
      s_4_3_0_1 = s_4_3;
    } else {
      s_4_3_0_0 = s_4_3;
    };
  };
  if (!(ck_1)) {
    if (ck_2_0) {
      if (ck_3_4_0_1) {
        if (s_4_St_2_STANDBY_1) {
          s_4_St_2_STANDBY_2_1 = s_4_St_2_STANDBY_2;
          if (s_4_St_2_STANDBY_2_1) {
            s_4_St_2_STANDBY_3_1_1 = s_4_St_2_STANDBY_3;
          } else {
            s_4_St_2_STANDBY_3_1_0 = s_4_St_2_STANDBY_3;
          };
        } else {
          s_4_St_2_STANDBY_2_0 = s_4_St_2_STANDBY_2;
          if (s_4_St_2_STANDBY_2_0) {
            s_4_St_2_STANDBY_3_0_1 = s_4_St_2_STANDBY_3;
          } else {
            s_4_St_2_STANDBY_3_0_0 = s_4_St_2_STANDBY_3;
          };
        };
      } else {
        if (s_4_St_2_WASHING_1) {
          s_4_St_2_WASHING_2_1 = s_4_St_2_WASHING_2;
          if (s_4_St_2_WASHING_2_1) {
            s_4_St_2_WASHING_3_1_1 = s_4_St_2_WASHING_3;
          } else {
            s_4_St_2_WASHING_3_1_0 = s_4_St_2_WASHING_3;
          };
        } else {
          s_4_St_2_WASHING_2_0 = s_4_St_2_WASHING_2;
          if (s_4_St_2_WASHING_2_0) {
            s_4_St_2_WASHING_3_0_1 = s_4_St_2_WASHING_3;
          } else {
            s_4_St_2_WASHING_3_0_0 = s_4_St_2_WASHING_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_207 = ns_1;
  self->v_208 = ns_2;
  self->v_209 = ns_3;;
}

void Pratica05__oven_reset(Pratica05__oven_mem* self) {
  self->pnr = false;
  self->v_259 = true;
  self->v_260 = false;
  self->v_261 = false;
}

void Pratica05__oven_step(int finish, int start, int cold, int temp_ok,
                          int c, Pratica05__oven_out* _out,
                          Pratica05__oven_mem* self) {
  
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int ns_St_3_REHEAT_2_0;
  int ns_St_3_REHEAT_3_0_0;
  int ns_St_3_REHEAT_3_0_1;
  int ns_St_3_REHEAT_2_1;
  int ns_St_3_REHEAT_3_1_0;
  int ns_St_3_REHEAT_3_1_1;
  int ns_St_3_MAINTAIN_2_0;
  int ns_St_3_MAINTAIN_3_0_0;
  int ns_St_3_MAINTAIN_3_0_1;
  int ns_St_3_MAINTAIN_2_1;
  int ns_St_3_MAINTAIN_3_1_0;
  int ns_St_3_MAINTAIN_3_1_1;
  int ns_St_3_STANDBY_2_0;
  int ns_St_3_STANDBY_3_0_0;
  int ns_St_3_STANDBY_3_0_1;
  int ns_St_3_STANDBY_2_1;
  int ns_St_3_STANDBY_3_1_0;
  int ns_St_3_STANDBY_3_1_1;
  int ns_St_3_HEAT_2_0;
  int ns_St_3_HEAT_3_0_0;
  int ns_St_3_HEAT_3_0_1;
  int ns_St_3_HEAT_2_1;
  int ns_St_3_HEAT_3_1_0;
  int ns_St_3_HEAT_3_1_1;
  int ns_St_3_OFF_2_0;
  int ns_St_3_OFF_3_0_0;
  int ns_St_3_OFF_3_0_1;
  int ns_St_3_OFF_2_1;
  int ns_St_3_OFF_3_1_0;
  int ns_St_3_OFF_3_1_1;
  int ck_4_2_0;
  int ck_4_3_0_0;
  int ck_4_3_0_1;
  int ck_4_2_1;
  int ck_4_3_1_0;
  int ck_4_3_1_1;
  int nr_St_3_REHEAT;
  int ns_St_3_REHEAT_3;
  int ns_St_3_REHEAT_2;
  int ns_St_3_REHEAT_1;
  int power_St_3_REHEAT;
  int nr_St_3_MAINTAIN;
  int ns_St_3_MAINTAIN_3;
  int ns_St_3_MAINTAIN_2;
  int ns_St_3_MAINTAIN_1;
  int power_St_3_MAINTAIN;
  int nr_St_3_STANDBY;
  int ns_St_3_STANDBY_3;
  int ns_St_3_STANDBY_2;
  int ns_St_3_STANDBY_1;
  int power_St_3_STANDBY;
  int nr_St_3_HEAT;
  int ns_St_3_HEAT_3;
  int ns_St_3_HEAT_2;
  int ns_St_3_HEAT_1;
  int power_St_3_HEAT;
  int nr_St_3_OFF;
  int ns_St_3_OFF_3;
  int ns_St_3_OFF_2;
  int ns_St_3_OFF_1;
  int power_St_3_OFF;
  int ck_4_3;
  int ck_4_2;
  int ck_4_1;
  int v_41_2_0;
  int v_41_3_0_0;
  int v_41_3_0_1;
  int v_41_2_1;
  int v_41_3_1_0;
  int v_41_3_1_1;
  int v_42;
  int v_41_3;
  int v_41_2;
  int v_41_1;
  int v_40;
  int v_39;
  int v_38;
  int v_36_2_0;
  int v_36_3_0_0;
  int v_36_3_0_1;
  int v_36_2_1;
  int v_36_3_1_0;
  int v_36_3_1_1;
  int v_37;
  int v_36_3;
  int v_36_2;
  int v_36_1;
  int v_34_2_0;
  int v_34_3_0_0;
  int v_34_3_0_1;
  int v_34_2_1;
  int v_34_3_1_0;
  int v_34_3_1_1;
  int v_35;
  int v_34_3;
  int v_34_2;
  int v_34_1;
  int v_33;
  int v_2_0;
  int v_3_0_0;
  int v_3_0_1;
  int v_2_1;
  int v_3_1_0;
  int v_3_1_1;
  int v_32;
  int v_3;
  int v_2;
  int v_1;
  int v_281;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_262;
  int s_St_3_REHEAT_2_0;
  int s_St_3_REHEAT_3_0_0;
  int s_St_3_REHEAT_3_0_1;
  int s_St_3_REHEAT_2_1;
  int s_St_3_REHEAT_3_1_0;
  int s_St_3_REHEAT_3_1_1;
  int s_St_3_MAINTAIN_2_0;
  int s_St_3_MAINTAIN_3_0_0;
  int s_St_3_MAINTAIN_3_0_1;
  int s_St_3_MAINTAIN_2_1;
  int s_St_3_MAINTAIN_3_1_0;
  int s_St_3_MAINTAIN_3_1_1;
  int s_St_3_STANDBY_2_0;
  int s_St_3_STANDBY_3_0_0;
  int s_St_3_STANDBY_3_0_1;
  int s_St_3_STANDBY_2_1;
  int s_St_3_STANDBY_3_1_0;
  int s_St_3_STANDBY_3_1_1;
  int s_St_3_HEAT_2_0;
  int s_St_3_HEAT_3_0_0;
  int s_St_3_HEAT_3_0_1;
  int s_St_3_HEAT_2_1;
  int s_St_3_HEAT_3_1_0;
  int s_St_3_HEAT_3_1_1;
  int s_St_3_OFF_2_0;
  int s_St_3_OFF_3_0_0;
  int s_St_3_OFF_3_0_1;
  int s_St_3_OFF_2_1;
  int s_St_3_OFF_3_1_0;
  int s_St_3_OFF_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_3_REHEAT;
  int s_St_3_REHEAT_3;
  int s_St_3_REHEAT_2;
  int s_St_3_REHEAT_1;
  int r_St_3_MAINTAIN;
  int s_St_3_MAINTAIN_3;
  int s_St_3_MAINTAIN_2;
  int s_St_3_MAINTAIN_1;
  int r_St_3_STANDBY;
  int s_St_3_STANDBY_3;
  int s_St_3_STANDBY_2;
  int s_St_3_STANDBY_1;
  int r_St_3_HEAT;
  int s_St_3_HEAT_3;
  int s_St_3_HEAT_2;
  int s_St_3_HEAT_1;
  int r_St_3_OFF;
  int s_St_3_OFF_3;
  int s_St_3_OFF_2;
  int s_St_3_OFF_1;
  int ck_3;
  int ck_2;
  int ck_1;
  int s_2_0;
  int s_3_0_0;
  int s_3_0_1;
  int s_2_1;
  int s_3_1_0;
  int s_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_3;
  int s_2;
  int s_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_259;
  ck_2 = self->v_260;
  ck_3 = self->v_261;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (temp_ok) {
          v_37 = true;
        } else {
          v_37 = self->pnr;
        };
        if (finish) {
          r_St_3_HEAT = true;
        } else {
          r_St_3_HEAT = v_37;
        };
        if (temp_ok) {
          v_36_1 = true;
        } else {
          v_36_1 = true;
        };
        if (finish) {
          s_St_3_HEAT_1 = true;
        } else {
          s_St_3_HEAT_1 = v_36_1;
        };
        if (temp_ok) {
          v_36_2 = true;
        } else {
          v_36_2 = true;
        };
        if (finish) {
          s_St_3_HEAT_2 = false;
        } else {
          s_St_3_HEAT_2 = v_36_2;
        };
        if (temp_ok) {
          v_36_3 = false;
        } else {
          v_36_3 = true;
        };
        if (finish) {
          s_St_3_HEAT_3 = false;
        } else {
          s_St_3_HEAT_3 = v_36_3;
        };
        v_277 = r_St_3_HEAT;
        v_262 = s_St_3_HEAT_1;
        v_263 = s_St_3_HEAT_2;
        v_264 = s_St_3_HEAT_3;
      } else {
        if (finish) {
          v_35 = true;
          v_34_1 = true;
          v_34_2 = false;
          v_34_3 = false;
        } else {
          v_35 = self->pnr;
          v_34_1 = true;
          v_34_2 = true;
          v_34_3 = false;
        };
        v_33 = (cold&&c);
        if (v_33) {
          r_St_3_MAINTAIN = true;
        } else {
          r_St_3_MAINTAIN = v_35;
        };
        v_277 = r_St_3_MAINTAIN;
        if (v_33) {
          s_St_3_MAINTAIN_1 = false;
        } else {
          s_St_3_MAINTAIN_1 = v_34_1;
        };
        v_262 = s_St_3_MAINTAIN_1;
        if (v_33) {
          s_St_3_MAINTAIN_2 = false;
        } else {
          s_St_3_MAINTAIN_2 = v_34_2;
        };
        v_263 = s_St_3_MAINTAIN_2;
        if (v_33) {
          s_St_3_MAINTAIN_3 = true;
        } else {
          s_St_3_MAINTAIN_3 = v_34_3;
        };
        v_264 = s_St_3_MAINTAIN_3;
      };
      v_271 = v_262;
      v_272 = v_263;
      v_273 = v_264;
      v_279 = v_277;
      if (ck_3_1_1) {
        if (v_36_1) {
          v_36_2_1 = v_36_2;
          if (v_36_2_1) {
            v_36_3_1_1 = v_36_3;
          } else {
            v_36_3_1_0 = v_36_3;
          };
        } else {
          v_36_2_0 = v_36_2;
          if (v_36_2_0) {
            v_36_3_0_1 = v_36_3;
          } else {
            v_36_3_0_0 = v_36_3;
          };
        };
        if (s_St_3_HEAT_1) {
          s_St_3_HEAT_2_1 = s_St_3_HEAT_2;
          if (s_St_3_HEAT_2_1) {
            s_St_3_HEAT_3_1_1 = s_St_3_HEAT_3;
          } else {
            s_St_3_HEAT_3_1_0 = s_St_3_HEAT_3;
          };
        } else {
          s_St_3_HEAT_2_0 = s_St_3_HEAT_2;
          if (s_St_3_HEAT_2_0) {
            s_St_3_HEAT_3_0_1 = s_St_3_HEAT_3;
          } else {
            s_St_3_HEAT_3_0_0 = s_St_3_HEAT_3;
          };
        };
      } else {
        if (v_34_1) {
          v_34_2_1 = v_34_2;
          if (v_34_2_1) {
            v_34_3_1_1 = v_34_3;
          } else {
            v_34_3_1_0 = v_34_3;
          };
        } else {
          v_34_2_0 = v_34_2;
          if (v_34_2_0) {
            v_34_3_0_1 = v_34_3;
          } else {
            v_34_3_0_0 = v_34_3;
          };
        };
        if (s_St_3_MAINTAIN_1) {
          s_St_3_MAINTAIN_2_1 = s_St_3_MAINTAIN_2;
          if (s_St_3_MAINTAIN_2_1) {
            s_St_3_MAINTAIN_3_1_1 = s_St_3_MAINTAIN_3;
          } else {
            s_St_3_MAINTAIN_3_1_0 = s_St_3_MAINTAIN_3;
          };
        } else {
          s_St_3_MAINTAIN_2_0 = s_St_3_MAINTAIN_2;
          if (s_St_3_MAINTAIN_2_0) {
            s_St_3_MAINTAIN_3_0_1 = s_St_3_MAINTAIN_3;
          } else {
            s_St_3_MAINTAIN_3_0_0 = s_St_3_MAINTAIN_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_278 = true;
        v_265 = true;
        v_266 = true;
        v_267 = true;
      } else {
        v_40 = (start&&c);
        if (v_40) {
          v_42 = true;
          v_41_1 = true;
          v_41_2 = true;
          v_41_3 = true;
        } else {
          v_42 = self->pnr;
          v_41_1 = true;
          v_41_2 = false;
          v_41_3 = false;
        };
        v_38 = !(c);
        v_39 = (start&&v_38);
        if (v_39) {
          r_St_3_OFF = true;
        } else {
          r_St_3_OFF = v_42;
        };
        v_278 = r_St_3_OFF;
        if (v_39) {
          s_St_3_OFF_1 = false;
        } else {
          s_St_3_OFF_1 = v_41_1;
        };
        v_265 = s_St_3_OFF_1;
        if (v_39) {
          s_St_3_OFF_2 = false;
        } else {
          s_St_3_OFF_2 = v_41_2;
        };
        v_266 = s_St_3_OFF_2;
        if (v_39) {
          s_St_3_OFF_3 = false;
        } else {
          s_St_3_OFF_3 = v_41_3;
        };
        v_267 = s_St_3_OFF_3;
        if (v_41_1) {
          v_41_2_1 = v_41_2;
          if (v_41_2_1) {
            v_41_3_1_1 = v_41_3;
          } else {
            v_41_3_1_0 = v_41_3;
          };
        } else {
          v_41_2_0 = v_41_2;
          if (v_41_2_0) {
            v_41_3_0_1 = v_41_3;
          } else {
            v_41_3_0_0 = v_41_3;
          };
        };
        if (s_St_3_OFF_1) {
          s_St_3_OFF_2_1 = s_St_3_OFF_2;
          if (s_St_3_OFF_2_1) {
            s_St_3_OFF_3_1_1 = s_St_3_OFF_3;
          } else {
            s_St_3_OFF_3_1_0 = s_St_3_OFF_3;
          };
        } else {
          s_St_3_OFF_2_0 = s_St_3_OFF_2;
          if (s_St_3_OFF_2_0) {
            s_St_3_OFF_3_0_1 = s_St_3_OFF_3;
          } else {
            s_St_3_OFF_3_0_0 = s_St_3_OFF_3;
          };
        };
      };
      v_271 = v_265;
      v_272 = v_266;
      v_273 = v_267;
      v_279 = v_278;
    };
    s_1 = v_271;
    s_2 = v_272;
    s_3 = v_273;
    r = v_279;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      v_274 = true;
      v_275 = true;
      v_276 = true;
      v_281 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (finish) {
          v_32 = true;
        } else {
          v_32 = self->pnr;
        };
        if (temp_ok) {
          r_St_3_REHEAT = true;
        } else {
          r_St_3_REHEAT = v_32;
        };
        v_280 = r_St_3_REHEAT;
        if (finish) {
          v_1 = true;
        } else {
          v_1 = false;
        };
        if (temp_ok) {
          s_St_3_REHEAT_1 = true;
        } else {
          s_St_3_REHEAT_1 = v_1;
        };
        v_268 = s_St_3_REHEAT_1;
        if (finish) {
          v_2 = false;
        } else {
          v_2 = false;
        };
        if (temp_ok) {
          s_St_3_REHEAT_2 = true;
        } else {
          s_St_3_REHEAT_2 = v_2;
        };
        v_269 = s_St_3_REHEAT_2;
        if (finish) {
          v_3 = false;
        } else {
          v_3 = true;
        };
        if (temp_ok) {
          s_St_3_REHEAT_3 = false;
        } else {
          s_St_3_REHEAT_3 = v_3;
        };
        v_270 = s_St_3_REHEAT_3;
        if (v_1) {
          v_2_1 = v_2;
          if (v_2_1) {
            v_3_1_1 = v_3;
          } else {
            v_3_1_0 = v_3;
          };
        } else {
          v_2_0 = v_2;
          if (v_2_0) {
            v_3_0_1 = v_3;
          } else {
            v_3_0_0 = v_3;
          };
        };
      } else {
        if (c) {
          r_St_3_STANDBY = true;
          s_St_3_STANDBY_1 = true;
          s_St_3_STANDBY_2 = true;
          s_St_3_STANDBY_3 = true;
        } else {
          r_St_3_STANDBY = self->pnr;
          s_St_3_STANDBY_1 = false;
          s_St_3_STANDBY_2 = false;
          s_St_3_STANDBY_3 = false;
        };
        v_280 = r_St_3_STANDBY;
        v_268 = s_St_3_STANDBY_1;
        v_269 = s_St_3_STANDBY_2;
        v_270 = s_St_3_STANDBY_3;
      };
      v_274 = v_268;
      v_275 = v_269;
      v_276 = v_270;
      v_281 = v_280;
    };
    s_1 = v_274;
    s_2 = v_275;
    s_3 = v_276;
    r = v_281;
  };
  ck_4_1 = s_1;
  ck_4_2 = s_2;
  ck_4_3 = s_3;
  if (ck_4_1) {
    ck_4_2_1 = ck_4_2;
    if (ck_4_2_1) {
      ck_4_3_1_1 = ck_4_3;
      if (ck_4_3_1_1) {
        power_St_3_HEAT = 1500;
        nr_St_3_HEAT = false;
        ns_St_3_HEAT_1 = true;
        ns_St_3_HEAT_2 = true;
        ns_St_3_HEAT_3 = true;
        v_234 = power_St_3_HEAT;
        v_254 = nr_St_3_HEAT;
        v_239 = ns_St_3_HEAT_1;
        v_240 = ns_St_3_HEAT_2;
        v_241 = ns_St_3_HEAT_3;
      } else {
        power_St_3_MAINTAIN = 300;
        v_234 = power_St_3_MAINTAIN;
        nr_St_3_MAINTAIN = false;
        v_254 = nr_St_3_MAINTAIN;
        ns_St_3_MAINTAIN_1 = true;
        v_239 = ns_St_3_MAINTAIN_1;
        ns_St_3_MAINTAIN_2 = true;
        v_240 = ns_St_3_MAINTAIN_2;
        ns_St_3_MAINTAIN_3 = false;
        v_241 = ns_St_3_MAINTAIN_3;
      };
      v_236 = v_234;
      v_248 = v_239;
      v_249 = v_240;
      v_250 = v_241;
      v_256 = v_254;
      if (ck_4_3_1_1) {
        if (ns_St_3_HEAT_1) {
          ns_St_3_HEAT_2_1 = ns_St_3_HEAT_2;
          if (ns_St_3_HEAT_2_1) {
            ns_St_3_HEAT_3_1_1 = ns_St_3_HEAT_3;
          } else {
            ns_St_3_HEAT_3_1_0 = ns_St_3_HEAT_3;
          };
        } else {
          ns_St_3_HEAT_2_0 = ns_St_3_HEAT_2;
          if (ns_St_3_HEAT_2_0) {
            ns_St_3_HEAT_3_0_1 = ns_St_3_HEAT_3;
          } else {
            ns_St_3_HEAT_3_0_0 = ns_St_3_HEAT_3;
          };
        };
      } else {
        if (ns_St_3_MAINTAIN_1) {
          ns_St_3_MAINTAIN_2_1 = ns_St_3_MAINTAIN_2;
          if (ns_St_3_MAINTAIN_2_1) {
            ns_St_3_MAINTAIN_3_1_1 = ns_St_3_MAINTAIN_3;
          } else {
            ns_St_3_MAINTAIN_3_1_0 = ns_St_3_MAINTAIN_3;
          };
        } else {
          ns_St_3_MAINTAIN_2_0 = ns_St_3_MAINTAIN_2;
          if (ns_St_3_MAINTAIN_2_0) {
            ns_St_3_MAINTAIN_3_0_1 = ns_St_3_MAINTAIN_3;
          } else {
            ns_St_3_MAINTAIN_3_0_0 = ns_St_3_MAINTAIN_3;
          };
        };
      };
    } else {
      ck_4_3_1_0 = ck_4_3;
      if (ck_4_3_1_0) {
        v_235 = 0;
        v_255 = true;
        v_242 = true;
        v_243 = true;
        v_244 = true;
      } else {
        power_St_3_OFF = 0;
        v_235 = power_St_3_OFF;
        nr_St_3_OFF = false;
        v_255 = nr_St_3_OFF;
        ns_St_3_OFF_1 = true;
        v_242 = ns_St_3_OFF_1;
        ns_St_3_OFF_2 = false;
        v_243 = ns_St_3_OFF_2;
        ns_St_3_OFF_3 = false;
        v_244 = ns_St_3_OFF_3;
        if (ns_St_3_OFF_1) {
          ns_St_3_OFF_2_1 = ns_St_3_OFF_2;
          if (ns_St_3_OFF_2_1) {
            ns_St_3_OFF_3_1_1 = ns_St_3_OFF_3;
          } else {
            ns_St_3_OFF_3_1_0 = ns_St_3_OFF_3;
          };
        } else {
          ns_St_3_OFF_2_0 = ns_St_3_OFF_2;
          if (ns_St_3_OFF_2_0) {
            ns_St_3_OFF_3_0_1 = ns_St_3_OFF_3;
          } else {
            ns_St_3_OFF_3_0_0 = ns_St_3_OFF_3;
          };
        };
      };
      v_236 = v_235;
      v_248 = v_242;
      v_249 = v_243;
      v_250 = v_244;
      v_256 = v_255;
    };
    _out->power = v_236;
    ns_1 = v_248;
    ns_2 = v_249;
    ns_3 = v_250;
    nr = v_256;
  } else {
    ck_4_2_0 = ck_4_2;
    if (ck_4_2_0) {
      ck_4_3_0_1 = ck_4_3;
      v_238 = 0;
      v_251 = true;
      v_252 = true;
      v_253 = true;
      v_258 = true;
    } else {
      ck_4_3_0_0 = ck_4_3;
      if (ck_4_3_0_0) {
        power_St_3_REHEAT = 1000;
        v_237 = power_St_3_REHEAT;
        nr_St_3_REHEAT = false;
        v_257 = nr_St_3_REHEAT;
        ns_St_3_REHEAT_1 = false;
        v_245 = ns_St_3_REHEAT_1;
        ns_St_3_REHEAT_2 = false;
        v_246 = ns_St_3_REHEAT_2;
        ns_St_3_REHEAT_3 = true;
        v_247 = ns_St_3_REHEAT_3;
      } else {
        power_St_3_STANDBY = 0;
        nr_St_3_STANDBY = false;
        ns_St_3_STANDBY_1 = false;
        ns_St_3_STANDBY_2 = false;
        ns_St_3_STANDBY_3 = false;
        v_237 = power_St_3_STANDBY;
        v_257 = nr_St_3_STANDBY;
        v_245 = ns_St_3_STANDBY_1;
        v_246 = ns_St_3_STANDBY_2;
        v_247 = ns_St_3_STANDBY_3;
      };
      v_238 = v_237;
      v_251 = v_245;
      v_252 = v_246;
      v_253 = v_247;
      v_258 = v_257;
    };
    _out->power = v_238;
    ns_1 = v_251;
    ns_2 = v_252;
    ns_3 = v_253;
    nr = v_258;
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
  if (!(ck_4_1)) {
    if (!(ck_4_2_0)) {
      if (ck_4_3_0_0) {
        if (ns_St_3_REHEAT_1) {
          ns_St_3_REHEAT_2_1 = ns_St_3_REHEAT_2;
          if (ns_St_3_REHEAT_2_1) {
            ns_St_3_REHEAT_3_1_1 = ns_St_3_REHEAT_3;
          } else {
            ns_St_3_REHEAT_3_1_0 = ns_St_3_REHEAT_3;
          };
        } else {
          ns_St_3_REHEAT_2_0 = ns_St_3_REHEAT_2;
          if (ns_St_3_REHEAT_2_0) {
            ns_St_3_REHEAT_3_0_1 = ns_St_3_REHEAT_3;
          } else {
            ns_St_3_REHEAT_3_0_0 = ns_St_3_REHEAT_3;
          };
        };
      } else {
        if (ns_St_3_STANDBY_1) {
          ns_St_3_STANDBY_2_1 = ns_St_3_STANDBY_2;
          if (ns_St_3_STANDBY_2_1) {
            ns_St_3_STANDBY_3_1_1 = ns_St_3_STANDBY_3;
          } else {
            ns_St_3_STANDBY_3_1_0 = ns_St_3_STANDBY_3;
          };
        } else {
          ns_St_3_STANDBY_2_0 = ns_St_3_STANDBY_2;
          if (ns_St_3_STANDBY_2_0) {
            ns_St_3_STANDBY_3_0_1 = ns_St_3_STANDBY_3;
          } else {
            ns_St_3_STANDBY_3_0_0 = ns_St_3_STANDBY_3;
          };
        };
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
    if (s_2_1) {
      s_3_1_1 = s_3;
    } else {
      s_3_1_0 = s_3;
    };
  } else {
    s_2_0 = s_2;
    if (s_2_0) {
      s_3_0_1 = s_3;
    } else {
      s_3_0_0 = s_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_0)) {
      if (ck_3_0_0) {
        if (s_St_3_REHEAT_1) {
          s_St_3_REHEAT_2_1 = s_St_3_REHEAT_2;
          if (s_St_3_REHEAT_2_1) {
            s_St_3_REHEAT_3_1_1 = s_St_3_REHEAT_3;
          } else {
            s_St_3_REHEAT_3_1_0 = s_St_3_REHEAT_3;
          };
        } else {
          s_St_3_REHEAT_2_0 = s_St_3_REHEAT_2;
          if (s_St_3_REHEAT_2_0) {
            s_St_3_REHEAT_3_0_1 = s_St_3_REHEAT_3;
          } else {
            s_St_3_REHEAT_3_0_0 = s_St_3_REHEAT_3;
          };
        };
      } else {
        if (s_St_3_STANDBY_1) {
          s_St_3_STANDBY_2_1 = s_St_3_STANDBY_2;
          if (s_St_3_STANDBY_2_1) {
            s_St_3_STANDBY_3_1_1 = s_St_3_STANDBY_3;
          } else {
            s_St_3_STANDBY_3_1_0 = s_St_3_STANDBY_3;
          };
        } else {
          s_St_3_STANDBY_2_0 = s_St_3_STANDBY_2;
          if (s_St_3_STANDBY_2_0) {
            s_St_3_STANDBY_3_0_1 = s_St_3_STANDBY_3;
          } else {
            s_St_3_STANDBY_3_0_0 = s_St_3_STANDBY_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_259 = ns_1;
  self->v_260 = ns_2;
  self->v_261 = ns_3;;
}

void Pratica05__room_reset(Pratica05__room_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Pratica05__room_step(int precense, Pratica05__room_out* _out,
                          Pratica05__room_mem* self) {
  
  int nr_St_4_Ocupied;
  int ns_St_4_Ocupied_1;
  int room_oc_St_4_Ocupied;
  int nr_St_4_Empty;
  int ns_St_4_Empty_1;
  int room_oc_St_4_Empty;
  int ck_5_1;
  int v;
  int r_St_4_Ocupied;
  int s_St_4_Ocupied_1;
  int r_St_4_Empty;
  int s_St_4_Empty_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (precense) {
      r_St_4_Empty = true;
      s_St_4_Empty_1 = false;
    } else {
      r_St_4_Empty = self->pnr;
      s_St_4_Empty_1 = true;
    };
    r = r_St_4_Empty;
    s_1 = s_St_4_Empty_1;
  } else {
    v = !(precense);
    if (v) {
      r_St_4_Ocupied = true;
    } else {
      r_St_4_Ocupied = self->pnr;
    };
    r = r_St_4_Ocupied;
    if (v) {
      s_St_4_Ocupied_1 = true;
    } else {
      s_St_4_Ocupied_1 = false;
    };
    s_1 = s_St_4_Ocupied_1;
  };
  ck_5_1 = s_1;
  if (ck_5_1) {
    room_oc_St_4_Empty = false;
    nr_St_4_Empty = false;
    ns_St_4_Empty_1 = true;
    _out->room_oc = room_oc_St_4_Empty;
    nr = nr_St_4_Empty;
    ns_1 = ns_St_4_Empty_1;
  } else {
    room_oc_St_4_Ocupied = true;
    _out->room_oc = room_oc_St_4_Ocupied;
    nr_St_4_Ocupied = false;
    nr = nr_St_4_Ocupied;
    ns_St_4_Ocupied_1 = false;
    ns_1 = ns_St_4_Ocupied_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Pratica05__fonteLuz_reset(Pratica05__fonteLuz_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Pratica05__fonteLuz_step(int onn, int c1, int c2,
                              Pratica05__fonteLuz_out* _out,
                              Pratica05__fonteLuz_mem* self) {
  
  int nr_St_5_On;
  int ns_St_5_On_1;
  int luz_on_St_5_On;
  int nr_St_5_Off;
  int ns_St_5_Off_1;
  int luz_on_St_5_Off;
  int ck_6_1;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v;
  int r_St_5_On;
  int s_St_5_On_1;
  int r_St_5_Off;
  int s_St_5_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_46 = !(c2);
    v_45 = (onn&&c1);
    v_47 = (v_45||v_46);
    if (v_47) {
      r_St_5_Off = true;
      s_St_5_Off_1 = false;
    } else {
      r_St_5_Off = self->pnr;
      s_St_5_Off_1 = true;
    };
    r = r_St_5_Off;
    s_1 = s_St_5_Off_1;
  } else {
    v_43 = !(c1);
    v = (onn&&c2);
    v_44 = (v||v_43);
    if (v_44) {
      r_St_5_On = true;
    } else {
      r_St_5_On = self->pnr;
    };
    r = r_St_5_On;
    if (v_44) {
      s_St_5_On_1 = true;
    } else {
      s_St_5_On_1 = false;
    };
    s_1 = s_St_5_On_1;
  };
  ck_6_1 = s_1;
  if (ck_6_1) {
    luz_on_St_5_Off = false;
    nr_St_5_Off = false;
    ns_St_5_Off_1 = true;
    _out->luz_on = luz_on_St_5_Off;
    nr = nr_St_5_Off;
    ns_1 = ns_St_5_Off_1;
  } else {
    luz_on_St_5_On = true;
    _out->luz_on = luz_on_St_5_On;
    nr_St_5_On = false;
    nr = nr_St_5_On;
    ns_St_5_On_1 = false;
    ns_1 = ns_St_5_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Pratica05__window_reset(Pratica05__window_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Pratica05__window_step(int push, int c_window,
                            Pratica05__window_out* _out,
                            Pratica05__window_mem* self) {
  
  int nr_St_6_Open;
  int ns_St_6_Open_1;
  int window_open_St_6_Open;
  int nr_St_6_Closed;
  int ns_St_6_Closed_1;
  int window_open_St_6_Closed;
  int ck_7_1;
  int v_49;
  int v_48;
  int v;
  int r_St_6_Open;
  int s_St_6_Open_1;
  int r_St_6_Closed;
  int s_St_6_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_49 = (push&&c_window);
    if (v_49) {
      r_St_6_Closed = true;
      s_St_6_Closed_1 = false;
    } else {
      r_St_6_Closed = self->pnr;
      s_St_6_Closed_1 = true;
    };
    r = r_St_6_Closed;
    s_1 = s_St_6_Closed_1;
  } else {
    v = !(c_window);
    v_48 = (push||v);
    if (v_48) {
      r_St_6_Open = true;
    } else {
      r_St_6_Open = self->pnr;
    };
    r = r_St_6_Open;
    if (v_48) {
      s_St_6_Open_1 = true;
    } else {
      s_St_6_Open_1 = false;
    };
    s_1 = s_St_6_Open_1;
  };
  ck_7_1 = s_1;
  if (ck_7_1) {
    window_open_St_6_Closed = false;
    nr_St_6_Closed = false;
    ns_St_6_Closed_1 = true;
    _out->window_open = window_open_St_6_Closed;
    nr = nr_St_6_Closed;
    ns_1 = ns_St_6_Closed_1;
  } else {
    window_open_St_6_Open = true;
    _out->window_open = window_open_St_6_Open;
    nr_St_6_Open = false;
    nr = nr_St_6_Open;
    ns_St_6_Open_1 = false;
    ns_1 = ns_St_6_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Pratica05__door_reset(Pratica05__door_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Pratica05__door_step(int push, int c_door, Pratica05__door_out* _out,
                          Pratica05__door_mem* self) {
  
  int nr_St_7_Open;
  int ns_St_7_Open_1;
  int door_open_St_7_Open;
  int nr_St_7_Closed;
  int ns_St_7_Closed_1;
  int door_open_St_7_Closed;
  int ck_8_1;
  int v_51;
  int v_50;
  int v;
  int r_St_7_Open;
  int s_St_7_Open_1;
  int r_St_7_Closed;
  int s_St_7_Closed_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_51 = (push&&c_door);
    if (v_51) {
      r_St_7_Closed = true;
      s_St_7_Closed_1 = false;
    } else {
      r_St_7_Closed = self->pnr;
      s_St_7_Closed_1 = true;
    };
    r = r_St_7_Closed;
    s_1 = s_St_7_Closed_1;
  } else {
    v = !(c_door);
    v_50 = (push||v);
    if (v_50) {
      r_St_7_Open = true;
    } else {
      r_St_7_Open = self->pnr;
    };
    r = r_St_7_Open;
    if (v_50) {
      s_St_7_Open_1 = true;
    } else {
      s_St_7_Open_1 = false;
    };
    s_1 = s_St_7_Open_1;
  };
  ck_8_1 = s_1;
  if (ck_8_1) {
    door_open_St_7_Closed = false;
    nr_St_7_Closed = false;
    ns_St_7_Closed_1 = true;
    _out->door_open = door_open_St_7_Closed;
    nr = nr_St_7_Closed;
    ns_1 = ns_St_7_Closed_1;
  } else {
    door_open_St_7_Open = true;
    _out->door_open = door_open_St_7_Open;
    nr_St_7_Open = false;
    nr = nr_St_7_Open;
    ns_St_7_Open_1 = false;
    ns_1 = ns_St_7_Open_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Pratica05__task_reset(Pratica05__task_mem* self) {
  self->pnr = false;
  self->ck_25_1 = true;
  self->pnr_1 = false;
  self->ck_23_1 = true;
  self->pnr_2 = false;
  self->ck_21_1 = true;
  self->pnr_3 = false;
  self->ck_19_1 = true;
  self->pnr_4 = false;
  self->ck_17_1 = true;
  self->pnr_5 = false;
  self->v_309 = true;
  self->v_310 = false;
  self->v_311 = false;
  self->pnr_6 = false;
  self->v_362 = true;
  self->v_363 = true;
  self->v_364 = true;
  self->pnr_7 = false;
  self->v_399 = false;
  self->v_400 = false;
  self->pnr_8 = false;
  self->v_419 = false;
  self->v_420 = false;
}

void Pratica05__task_step(int up1, int down1, int up2, int down2, int s,
                          int e, int finish, int start, int cold,
                          int temp_ok, int eco, int confort, int on_lamp,
                          int on_tv, int precense, int push_door,
                          int push_window, Pratica05__task_out* _out,
                          Pratica05__task_mem* self) {
  Task_controller__task_controller_out Task_controller__task_controller_out_st;
  
  int nr_St_8_Open;
  int ns_St_8_Open_1;
  int window_open_1_St_8_Open;
  int nr_St_8_Closed;
  int ns_St_8_Closed_1;
  int window_open_1_St_8_Closed;
  int ck_26_1;
  int v_138;
  int v_137;
  int v_136;
  int r_St_8_Open;
  int s_5_St_8_Open_1;
  int r_St_8_Closed;
  int s_5_St_8_Closed_1;
  int nr_1_St_9_Open;
  int ns_1_St_9_Open_1;
  int door_open_1_St_9_Open;
  int nr_1_St_9_Closed;
  int ns_1_St_9_Closed_1;
  int door_open_1_St_9_Closed;
  int ck_24_1;
  int v_135;
  int v_134;
  int v_133;
  int r_1_St_9_Open;
  int s_6_St_9_Open_1;
  int r_1_St_9_Closed;
  int s_6_St_9_Closed_1;
  int nr_2_St_10_Ocupied;
  int ns_2_St_10_Ocupied_1;
  int room_oc_1_St_10_Ocupied;
  int nr_2_St_10_Empty;
  int ns_2_St_10_Empty_1;
  int room_oc_1_St_10_Empty;
  int ck_22_1;
  int v_132;
  int r_2_St_10_Ocupied;
  int s_7_St_10_Ocupied_1;
  int r_2_St_10_Empty;
  int s_7_St_10_Empty_1;
  int nr_3_St_11_On;
  int ns_3_St_11_On_1;
  int luz_on_1_St_11_On;
  int nr_3_St_11_Off;
  int ns_3_St_11_Off_1;
  int luz_on_1_St_11_Off;
  int ck_20_1;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int r_3_St_11_On;
  int s_8_St_11_On_1;
  int r_3_St_11_Off;
  int s_8_St_11_Off_1;
  int nr_4_St_12_On;
  int ns_4_St_12_On_1;
  int luz_on_St_12_On;
  int nr_4_St_12_Off;
  int ns_4_St_12_Off_1;
  int luz_on_St_12_Off;
  int ck_18_1;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int r_4_St_12_On;
  int s_9_St_12_On_1;
  int r_4_St_12_Off;
  int s_9_St_12_Off_1;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
  int ns_5_St_13_REHEAT_2_0;
  int ns_5_St_13_REHEAT_3_0_0;
  int ns_5_St_13_REHEAT_3_0_1;
  int ns_5_St_13_REHEAT_2_1;
  int ns_5_St_13_REHEAT_3_1_0;
  int ns_5_St_13_REHEAT_3_1_1;
  int ns_5_St_13_MAINTAIN_2_0;
  int ns_5_St_13_MAINTAIN_3_0_0;
  int ns_5_St_13_MAINTAIN_3_0_1;
  int ns_5_St_13_MAINTAIN_2_1;
  int ns_5_St_13_MAINTAIN_3_1_0;
  int ns_5_St_13_MAINTAIN_3_1_1;
  int ns_5_St_13_STANDBY_2_0;
  int ns_5_St_13_STANDBY_3_0_0;
  int ns_5_St_13_STANDBY_3_0_1;
  int ns_5_St_13_STANDBY_2_1;
  int ns_5_St_13_STANDBY_3_1_0;
  int ns_5_St_13_STANDBY_3_1_1;
  int ns_5_St_13_HEAT_2_0;
  int ns_5_St_13_HEAT_3_0_0;
  int ns_5_St_13_HEAT_3_0_1;
  int ns_5_St_13_HEAT_2_1;
  int ns_5_St_13_HEAT_3_1_0;
  int ns_5_St_13_HEAT_3_1_1;
  int ns_5_St_13_OFF_2_0;
  int ns_5_St_13_OFF_3_0_0;
  int ns_5_St_13_OFF_3_0_1;
  int ns_5_St_13_OFF_2_1;
  int ns_5_St_13_OFF_3_1_0;
  int ns_5_St_13_OFF_3_1_1;
  int ck_16_2_0;
  int ck_16_3_0_0;
  int ck_16_3_0_1;
  int ck_16_2_1;
  int ck_16_3_1_0;
  int ck_16_3_1_1;
  int nr_5_St_13_REHEAT;
  int ns_5_St_13_REHEAT_3;
  int ns_5_St_13_REHEAT_2;
  int ns_5_St_13_REHEAT_1;
  int power_2_St_13_REHEAT;
  int nr_5_St_13_MAINTAIN;
  int ns_5_St_13_MAINTAIN_3;
  int ns_5_St_13_MAINTAIN_2;
  int ns_5_St_13_MAINTAIN_1;
  int power_2_St_13_MAINTAIN;
  int nr_5_St_13_STANDBY;
  int ns_5_St_13_STANDBY_3;
  int ns_5_St_13_STANDBY_2;
  int ns_5_St_13_STANDBY_1;
  int power_2_St_13_STANDBY;
  int nr_5_St_13_HEAT;
  int ns_5_St_13_HEAT_3;
  int ns_5_St_13_HEAT_2;
  int ns_5_St_13_HEAT_1;
  int power_2_St_13_HEAT;
  int nr_5_St_13_OFF;
  int ns_5_St_13_OFF_3;
  int ns_5_St_13_OFF_2;
  int ns_5_St_13_OFF_1;
  int power_2_St_13_OFF;
  int ck_16_3;
  int ck_16_2;
  int ck_16_1;
  int v_118_2_0;
  int v_118_3_0_0;
  int v_118_3_0_1;
  int v_118_2_1;
  int v_118_3_1_0;
  int v_118_3_1_1;
  int v_119;
  int v_118_3;
  int v_118_2;
  int v_118_1;
  int v_117;
  int v_116;
  int v_115;
  int v_113_2_0;
  int v_113_3_0_0;
  int v_113_3_0_1;
  int v_113_2_1;
  int v_113_3_1_0;
  int v_113_3_1_1;
  int v_114;
  int v_113_3;
  int v_113_2;
  int v_113_1;
  int v_111_2_0;
  int v_111_3_0_0;
  int v_111_3_0_1;
  int v_111_2_1;
  int v_111_3_1_0;
  int v_111_3_1_1;
  int v_112;
  int v_111_3;
  int v_111_2;
  int v_111_1;
  int v_110;
  int v_108_2_0;
  int v_108_3_0_0;
  int v_108_3_0_1;
  int v_108_2_1;
  int v_108_3_1_0;
  int v_108_3_1_1;
  int v_109;
  int v_108_3;
  int v_108_2;
  int v_108_1;
  int v_331;
  int v_330;
  int v_329;
  int v_328;
  int v_327;
  int v_326;
  int v_325;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int s_10_St_13_REHEAT_2_0;
  int s_10_St_13_REHEAT_3_0_0;
  int s_10_St_13_REHEAT_3_0_1;
  int s_10_St_13_REHEAT_2_1;
  int s_10_St_13_REHEAT_3_1_0;
  int s_10_St_13_REHEAT_3_1_1;
  int s_10_St_13_MAINTAIN_2_0;
  int s_10_St_13_MAINTAIN_3_0_0;
  int s_10_St_13_MAINTAIN_3_0_1;
  int s_10_St_13_MAINTAIN_2_1;
  int s_10_St_13_MAINTAIN_3_1_0;
  int s_10_St_13_MAINTAIN_3_1_1;
  int s_10_St_13_STANDBY_2_0;
  int s_10_St_13_STANDBY_3_0_0;
  int s_10_St_13_STANDBY_3_0_1;
  int s_10_St_13_STANDBY_2_1;
  int s_10_St_13_STANDBY_3_1_0;
  int s_10_St_13_STANDBY_3_1_1;
  int s_10_St_13_HEAT_2_0;
  int s_10_St_13_HEAT_3_0_0;
  int s_10_St_13_HEAT_3_0_1;
  int s_10_St_13_HEAT_2_1;
  int s_10_St_13_HEAT_3_1_0;
  int s_10_St_13_HEAT_3_1_1;
  int s_10_St_13_OFF_2_0;
  int s_10_St_13_OFF_3_0_0;
  int s_10_St_13_OFF_3_0_1;
  int s_10_St_13_OFF_2_1;
  int s_10_St_13_OFF_3_1_0;
  int s_10_St_13_OFF_3_1_1;
  int ck_15_2_0;
  int ck_15_3_0_0;
  int ck_15_3_0_1;
  int ck_15_2_1;
  int ck_15_3_1_0;
  int ck_15_3_1_1;
  int r_5_St_13_REHEAT;
  int s_10_St_13_REHEAT_3;
  int s_10_St_13_REHEAT_2;
  int s_10_St_13_REHEAT_1;
  int r_5_St_13_MAINTAIN;
  int s_10_St_13_MAINTAIN_3;
  int s_10_St_13_MAINTAIN_2;
  int s_10_St_13_MAINTAIN_1;
  int r_5_St_13_STANDBY;
  int s_10_St_13_STANDBY_3;
  int s_10_St_13_STANDBY_2;
  int s_10_St_13_STANDBY_1;
  int r_5_St_13_HEAT;
  int s_10_St_13_HEAT_3;
  int s_10_St_13_HEAT_2;
  int s_10_St_13_HEAT_1;
  int r_5_St_13_OFF;
  int s_10_St_13_OFF_3;
  int s_10_St_13_OFF_2;
  int s_10_St_13_OFF_1;
  int ck_15_3;
  int ck_15_2;
  int ck_15_1;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int v_356;
  int v_355;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int v_350;
  int v_349;
  int v_348;
  int v_347;
  int v_346;
  int v_345;
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_336;
  int v_335;
  int v_334;
  int v_333;
  int v_332;
  int ns_6_St_14_STANDBY_2_0;
  int ns_6_St_14_STANDBY_3_0_0;
  int ns_6_St_14_STANDBY_3_0_1;
  int ns_6_St_14_STANDBY_2_1;
  int ns_6_St_14_STANDBY_3_1_0;
  int ns_6_St_14_STANDBY_3_1_1;
  int ns_6_St_14_SPIN_2_0;
  int ns_6_St_14_SPIN_3_0_0;
  int ns_6_St_14_SPIN_3_0_1;
  int ns_6_St_14_SPIN_2_1;
  int ns_6_St_14_SPIN_3_1_0;
  int ns_6_St_14_SPIN_3_1_1;
  int ns_6_St_14_RINSE_2_0;
  int ns_6_St_14_RINSE_3_0_0;
  int ns_6_St_14_RINSE_3_0_1;
  int ns_6_St_14_RINSE_2_1;
  int ns_6_St_14_RINSE_3_1_0;
  int ns_6_St_14_RINSE_3_1_1;
  int ns_6_St_14_WASHING_2_0;
  int ns_6_St_14_WASHING_3_0_0;
  int ns_6_St_14_WASHING_3_0_1;
  int ns_6_St_14_WASHING_2_1;
  int ns_6_St_14_WASHING_3_1_0;
  int ns_6_St_14_WASHING_3_1_1;
  int ns_6_St_14_WF_2_0;
  int ns_6_St_14_WF_3_0_0;
  int ns_6_St_14_WF_3_0_1;
  int ns_6_St_14_WF_2_1;
  int ns_6_St_14_WF_3_1_0;
  int ns_6_St_14_WF_3_1_1;
  int ns_6_St_14_OFF_2_0;
  int ns_6_St_14_OFF_3_0_0;
  int ns_6_St_14_OFF_3_0_1;
  int ns_6_St_14_OFF_2_1;
  int ns_6_St_14_OFF_3_1_0;
  int ns_6_St_14_OFF_3_1_1;
  int ck_14_2_0;
  int ck_14_3_0_0;
  int ck_14_3_0_1;
  int ck_14_2_1;
  int ck_14_3_1_0;
  int ck_14_3_1_1;
  int nr_6_St_14_STANDBY;
  int ns_6_St_14_STANDBY_3;
  int ns_6_St_14_STANDBY_2;
  int ns_6_St_14_STANDBY_1;
  int power_1_St_14_STANDBY;
  int nr_6_St_14_SPIN;
  int ns_6_St_14_SPIN_3;
  int ns_6_St_14_SPIN_2;
  int ns_6_St_14_SPIN_1;
  int power_1_St_14_SPIN;
  int nr_6_St_14_RINSE;
  int ns_6_St_14_RINSE_3;
  int ns_6_St_14_RINSE_2;
  int ns_6_St_14_RINSE_1;
  int power_1_St_14_RINSE;
  int nr_6_St_14_WASHING;
  int ns_6_St_14_WASHING_3;
  int ns_6_St_14_WASHING_2;
  int ns_6_St_14_WASHING_1;
  int power_1_St_14_WASHING;
  int nr_6_St_14_WF;
  int ns_6_St_14_WF_3;
  int ns_6_St_14_WF_2;
  int ns_6_St_14_WF_1;
  int power_1_St_14_WF;
  int nr_6_St_14_OFF;
  int ns_6_St_14_OFF_3;
  int ns_6_St_14_OFF_2;
  int ns_6_St_14_OFF_1;
  int power_1_St_14_OFF;
  int ck_14_3;
  int ck_14_2;
  int ck_14_1;
  int v_106_2_0;
  int v_106_3_0_0;
  int v_106_3_0_1;
  int v_106_2_1;
  int v_106_3_1_0;
  int v_106_3_1_1;
  int v_107;
  int v_106_3;
  int v_106_2;
  int v_106_1;
  int v_105;
  int v_104;
  int v_103;
  int v_388;
  int v_387;
  int v_386;
  int v_385;
  int v_384;
  int v_383;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_374;
  int v_373;
  int v_372;
  int v_371;
  int v_370;
  int v_369;
  int v_368;
  int v_367;
  int v_366;
  int v_365;
  int s_11_St_14_STANDBY_2_0;
  int s_11_St_14_STANDBY_3_0_0;
  int s_11_St_14_STANDBY_3_0_1;
  int s_11_St_14_STANDBY_2_1;
  int s_11_St_14_STANDBY_3_1_0;
  int s_11_St_14_STANDBY_3_1_1;
  int s_11_St_14_SPIN_2_0;
  int s_11_St_14_SPIN_3_0_0;
  int s_11_St_14_SPIN_3_0_1;
  int s_11_St_14_SPIN_2_1;
  int s_11_St_14_SPIN_3_1_0;
  int s_11_St_14_SPIN_3_1_1;
  int s_11_St_14_RINSE_2_0;
  int s_11_St_14_RINSE_3_0_0;
  int s_11_St_14_RINSE_3_0_1;
  int s_11_St_14_RINSE_2_1;
  int s_11_St_14_RINSE_3_1_0;
  int s_11_St_14_RINSE_3_1_1;
  int s_11_St_14_WASHING_2_0;
  int s_11_St_14_WASHING_3_0_0;
  int s_11_St_14_WASHING_3_0_1;
  int s_11_St_14_WASHING_2_1;
  int s_11_St_14_WASHING_3_1_0;
  int s_11_St_14_WASHING_3_1_1;
  int s_11_St_14_WF_2_0;
  int s_11_St_14_WF_3_0_0;
  int s_11_St_14_WF_3_0_1;
  int s_11_St_14_WF_2_1;
  int s_11_St_14_WF_3_1_0;
  int s_11_St_14_WF_3_1_1;
  int s_11_St_14_OFF_2_0;
  int s_11_St_14_OFF_3_0_0;
  int s_11_St_14_OFF_3_0_1;
  int s_11_St_14_OFF_2_1;
  int s_11_St_14_OFF_3_1_0;
  int s_11_St_14_OFF_3_1_1;
  int ck_13_2_0;
  int ck_13_3_0_0;
  int ck_13_3_0_1;
  int ck_13_2_1;
  int ck_13_3_1_0;
  int ck_13_3_1_1;
  int r_6_St_14_STANDBY;
  int s_11_St_14_STANDBY_3;
  int s_11_St_14_STANDBY_2;
  int s_11_St_14_STANDBY_1;
  int r_6_St_14_SPIN;
  int s_11_St_14_SPIN_3;
  int s_11_St_14_SPIN_2;
  int s_11_St_14_SPIN_1;
  int r_6_St_14_RINSE;
  int s_11_St_14_RINSE_3;
  int s_11_St_14_RINSE_2;
  int s_11_St_14_RINSE_1;
  int r_6_St_14_WASHING;
  int s_11_St_14_WASHING_3;
  int s_11_St_14_WASHING_2;
  int s_11_St_14_WASHING_1;
  int r_6_St_14_WF;
  int s_11_St_14_WF_3;
  int s_11_St_14_WF_2;
  int s_11_St_14_WF_1;
  int r_6_St_14_OFF;
  int s_11_St_14_OFF_3;
  int s_11_St_14_OFF_2;
  int s_11_St_14_OFF_1;
  int ck_13_3;
  int ck_13_2;
  int ck_13_1;
  int v_398;
  int v_397;
  int v_396;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int ns_7_St_15_HIGHT_2_0;
  int ns_7_St_15_HIGHT_2_1;
  int ns_7_St_15_ECO_2_0;
  int ns_7_St_15_ECO_2_1;
  int ns_7_St_15_FROST_2_0;
  int ns_7_St_15_FROST_2_1;
  int ns_7_St_15_OFF_2_0;
  int ns_7_St_15_OFF_2_1;
  int ck_12_2_0;
  int ck_12_2_1;
  int nr_7_St_15_HIGHT;
  int ns_7_St_15_HIGHT_2;
  int ns_7_St_15_HIGHT_1;
  int ss_1_St_15_HIGHT;
  int power_St_15_HIGHT;
  int nr_7_St_15_ECO;
  int ns_7_St_15_ECO_2;
  int ns_7_St_15_ECO_1;
  int ss_1_St_15_ECO;
  int power_St_15_ECO;
  int nr_7_St_15_FROST;
  int ns_7_St_15_FROST_2;
  int ns_7_St_15_FROST_1;
  int ss_1_St_15_FROST;
  int power_St_15_FROST;
  int nr_7_St_15_OFF;
  int ns_7_St_15_OFF_2;
  int ns_7_St_15_OFF_1;
  int ss_1_St_15_OFF;
  int power_St_15_OFF;
  int ck_12_2;
  int ck_12_1;
  int v_102;
  int v_101;
  int v_99_2_0;
  int v_99_2_1;
  int v_97_2_0;
  int v_97_2_1;
  int v_100;
  int v_99_2;
  int v_99_1;
  int v_98;
  int v_97_2;
  int v_97_1;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_91_2_0;
  int v_91_2_1;
  int v_92;
  int v_91_2;
  int v_91_1;
  int v_90;
  int v_89;
  int v_88;
  int v_86_2_0;
  int v_86_2_1;
  int v_87;
  int v_86_2;
  int v_86_1;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_406;
  int v_405;
  int v_404;
  int v_403;
  int v_402;
  int v_401;
  int s_12_St_15_HIGHT_2_0;
  int s_12_St_15_HIGHT_2_1;
  int s_12_St_15_ECO_2_0;
  int s_12_St_15_ECO_2_1;
  int s_12_St_15_FROST_2_0;
  int s_12_St_15_FROST_2_1;
  int s_12_St_15_OFF_2_0;
  int s_12_St_15_OFF_2_1;
  int ck_11_2_0;
  int ck_11_2_1;
  int r_7_St_15_HIGHT;
  int s_12_St_15_HIGHT_2;
  int s_12_St_15_HIGHT_1;
  int r_7_St_15_ECO;
  int s_12_St_15_ECO_2;
  int s_12_St_15_ECO_1;
  int r_7_St_15_FROST;
  int s_12_St_15_FROST_2;
  int s_12_St_15_FROST_1;
  int r_7_St_15_OFF;
  int s_12_St_15_OFF_2;
  int s_12_St_15_OFF_1;
  int ck_11_2;
  int ck_11_1;
  int v_418;
  int v_417;
  int v_416;
  int v_415;
  int v_414;
  int v_413;
  int v_412;
  int v_411;
  int v_410;
  int v_409;
  int v_408;
  int v_407;
  int ns_8_St_16_CONFORT_2_0;
  int ns_8_St_16_CONFORT_2_1;
  int s_1_St_16_CONFORT_2_0;
  int s_1_St_16_CONFORT_2_1;
  int ns_8_St_16_ECO_2_0;
  int ns_8_St_16_ECO_2_1;
  int s_1_St_16_ECO_2_0;
  int s_1_St_16_ECO_2_1;
  int ns_8_St_16_MS_2_0;
  int ns_8_St_16_MS_2_1;
  int s_1_St_16_MS_2_0;
  int s_1_St_16_MS_2_1;
  int ck_10_2_0;
  int ck_10_2_1;
  int nr_8_St_16_CONFORT;
  int ns_8_St_16_CONFORT_2;
  int ns_8_St_16_CONFORT_1;
  int s_1_St_16_CONFORT_2;
  int s_1_St_16_CONFORT_1;
  int pl_1_St_16_CONFORT;
  int nr_8_St_16_ECO;
  int ns_8_St_16_ECO_2;
  int ns_8_St_16_ECO_1;
  int s_1_St_16_ECO_2;
  int s_1_St_16_ECO_1;
  int pl_1_St_16_ECO;
  int nr_8_St_16_MS;
  int ns_8_St_16_MS_2;
  int ns_8_St_16_MS_1;
  int s_1_St_16_MS_2;
  int s_1_St_16_MS_1;
  int pl_1_St_16_MS;
  int ck_10_2;
  int ck_10_1;
  int v_80_2_0;
  int v_80_2_1;
  int v_81;
  int v_80_2;
  int v_80_1;
  int v_78_2_0;
  int v_78_2_1;
  int v_79;
  int v_78_2;
  int v_78_1;
  int v_77;
  int v_75_2_0;
  int v_75_2_1;
  int v_76;
  int v_75_2;
  int v_75_1;
  int v_74;
  int v_426;
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int v_421;
  int s_13_St_16_CONFORT_2_0;
  int s_13_St_16_CONFORT_2_1;
  int s_13_St_16_ECO_2_0;
  int s_13_St_16_ECO_2_1;
  int s_13_St_16_MS_2_0;
  int s_13_St_16_MS_2_1;
  int ck_9_2_0;
  int ck_9_2_1;
  int r_8_St_16_CONFORT;
  int s_13_St_16_CONFORT_2;
  int s_13_St_16_CONFORT_1;
  int r_8_St_16_ECO;
  int s_13_St_16_ECO_2;
  int s_13_St_16_ECO_1;
  int r_8_St_16_MS;
  int s_13_St_16_MS_2;
  int s_13_St_16_MS_1;
  int ck_9_2;
  int ck_9_1;
  int sp_2_0;
  int sp_2_1;
  int s_13_2_0;
  int s_13_2_1;
  int ns_8_2_0;
  int ns_8_2_1;
  int s_12_2_0;
  int s_12_2_1;
  int ns_7_2_0;
  int ns_7_2_1;
  int s_11_2_0;
  int s_11_3_0_0;
  int s_11_3_0_1;
  int s_11_2_1;
  int s_11_3_1_0;
  int s_11_3_1_1;
  int ns_6_2_0;
  int ns_6_3_0_0;
  int ns_6_3_0_1;
  int ns_6_2_1;
  int ns_6_3_1_0;
  int ns_6_3_1_1;
  int s_10_2_0;
  int s_10_3_0_0;
  int s_10_3_0_1;
  int s_10_2_1;
  int s_10_3_1_0;
  int s_10_3_1_1;
  int ns_5_2_0;
  int ns_5_3_0_0;
  int ns_5_3_0_1;
  int ns_5_2_1;
  int ns_5_3_1_0;
  int ns_5_3_1_1;
  int s_1_2_0;
  int s_1_2_1;
  int s_13_2;
  int s_13_1;
  int ns_8_2;
  int ns_8_1;
  int r_8;
  int nr_8;
  int s_12_2;
  int s_12_1;
  int ns_7_2;
  int ns_7_1;
  int r_7;
  int nr_7;
  int s_11_3;
  int s_11_2;
  int s_11_1;
  int ns_6_3;
  int ns_6_2;
  int ns_6_1;
  int r_6;
  int nr_6;
  int s_10_3;
  int s_10_2;
  int s_10_1;
  int ns_5_3;
  int ns_5_2;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_9_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_8_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_7_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_6_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_5_1;
  int ns_1_2;
  int r;
  int nr;
  int push_1;
  int c_window_1;
  int window_open_1;
  int push;
  int c_door_1;
  int door_open_1;
  int precense_1;
  int room_oc_1;
  int onn_1;
  int c1_3;
  int c2_3;
  int luz_on_1;
  int onn;
  int c1_2;
  int c2_2;
  int luz_on;
  int finish_1;
  int start_1;
  int cold_1;
  int temp_ok_1;
  int c_1;
  int power_2;
  int s_2;
  int e_1;
  int c;
  int power_1;
  int up1_1;
  int down1_1;
  int up2_1;
  int down2_1;
  int c1_1;
  int c2_1;
  int power;
  int ss_1;
  int eco_1;
  int confort_1;
  int pl_1;
  int s_1_2;
  int s_1_1;
  int v;
  int v_52;
  int v_53;
  int v_54;
  int v_55;
  int v_56;
  int v_283;
  int v_282;
  int ck_1;
  int ck_2;
  int rule5_S1;
  int rule5_S2;
  int rule5_S3;
  int ck_2_1;
  int ck_2_0;
  int rule5;
  int rule4;
  int rule3;
  int rule2;
  int rule1;
  int v_57;
  int v_58;
  int v_59;
  int v_60;
  int v_61;
  int v_62;
  int v_63;
  int v_64;
  int v_65;
  int v_66;
  int v_67;
  int v_68;
  int v_69;
  int v_70;
  int v_71;
  int v_72;
  int v_73;
  int c_window;
  int c_door;
  int c_tv1;
  int c_tv2;
  int c_lamp2;
  int c_lamp1;
  int c4;
  int c3;
  int c2;
  int c1;
  push_1 = push_window;
  push = push_door;
  precense_1 = precense;
  onn_1 = on_tv;
  onn = on_lamp;
  finish_1 = finish;
  start_1 = start;
  cold_1 = cold;
  temp_ok_1 = temp_ok;
  ck_15_1 = self->v_309;
  ck_15_2 = self->v_310;
  ck_15_3 = self->v_311;
  s_2 = s;
  e_1 = e;
  ck_13_1 = self->v_362;
  ck_13_2 = self->v_363;
  ck_13_3 = self->v_364;
  up1_1 = up1;
  down1_1 = down1;
  up2_1 = up2;
  down2_1 = down2;
  ck_11_1 = self->v_399;
  ck_11_2 = self->v_400;
  eco_1 = eco;
  confort_1 = confort;
  ck_9_1 = self->v_419;
  ck_9_2 = self->v_420;
  Task_controller__task_controller_step(up1, down1, up2, down2, s, e, finish,
                                        start, cold, temp_ok, eco, confort,
                                        on_lamp, on_tv, precense, push_door,
                                        push_window, self->v_420,
                                        self->v_419, self->pnr_8,
                                        self->v_400, self->v_399,
                                        self->pnr_7, self->v_364,
                                        self->v_363, self->v_362,
                                        self->pnr_6, self->v_311,
                                        self->v_310, self->v_309,
                                        self->pnr_5, self->ck_17_1,
                                        self->pnr_4, self->ck_19_1,
                                        self->pnr_3, self->ck_21_1,
                                        self->pnr_2, self->ck_23_1,
                                        self->pnr_1, self->ck_25_1,
                                        self->pnr, true, true, true, true,
                                        true, true, true, true, true, true,
                                        &Task_controller__task_controller_out_st);
  c_window = Task_controller__task_controller_out_st.task_c_window;
  c_door = Task_controller__task_controller_out_st.task_c_door;
  c_tv1 = Task_controller__task_controller_out_st.task_c_tv1;
  c_tv2 = Task_controller__task_controller_out_st.task_c_tv2;
  c_lamp2 = Task_controller__task_controller_out_st.task_c_lamp2;
  c_lamp1 = Task_controller__task_controller_out_st.task_c_lamp1;
  c4 = Task_controller__task_controller_out_st.task_c4;
  c3 = Task_controller__task_controller_out_st.task_c3;
  c2 = Task_controller__task_controller_out_st.task_c2;
  c1 = Task_controller__task_controller_out_st.task_c1;
  c_window_1 = c_window;
  c_door_1 = c_door;
  c1_3 = c_tv1;
  c2_3 = c_tv2;
  c1_2 = c_lamp1;
  c2_2 = c_lamp2;
  c_1 = c4;
  c = c3;
  c1_1 = c1;
  c2_1 = c2;
  if (self->ck_25_1) {
    v_138 = (push_1&&c_window_1);
    if (v_138) {
      r_St_8_Closed = true;
      s_5_St_8_Closed_1 = false;
    } else {
      r_St_8_Closed = self->pnr;
      s_5_St_8_Closed_1 = true;
    };
    r = r_St_8_Closed;
    s_5_1 = s_5_St_8_Closed_1;
  } else {
    v_136 = !(c_window_1);
    v_137 = (push_1||v_136);
    if (v_137) {
      r_St_8_Open = true;
    } else {
      r_St_8_Open = self->pnr;
    };
    r = r_St_8_Open;
    if (v_137) {
      s_5_St_8_Open_1 = true;
    } else {
      s_5_St_8_Open_1 = false;
    };
    s_5_1 = s_5_St_8_Open_1;
  };
  ck_26_1 = s_5_1;
  if (ck_26_1) {
    window_open_1_St_8_Closed = false;
    nr_St_8_Closed = false;
    ns_St_8_Closed_1 = true;
    window_open_1 = window_open_1_St_8_Closed;
    nr = nr_St_8_Closed;
    ns_1_2 = ns_St_8_Closed_1;
  } else {
    window_open_1_St_8_Open = true;
    window_open_1 = window_open_1_St_8_Open;
    nr_St_8_Open = false;
    nr = nr_St_8_Open;
    ns_St_8_Open_1 = false;
    ns_1_2 = ns_St_8_Open_1;
  };
  _out->window_open = window_open_1;
  if (self->ck_23_1) {
    v_135 = (push&&c_door_1);
    if (v_135) {
      r_1_St_9_Closed = true;
      s_6_St_9_Closed_1 = false;
    } else {
      r_1_St_9_Closed = self->pnr_1;
      s_6_St_9_Closed_1 = true;
    };
    r_1 = r_1_St_9_Closed;
    s_6_1 = s_6_St_9_Closed_1;
  } else {
    v_133 = !(c_door_1);
    v_134 = (push||v_133);
    if (v_134) {
      r_1_St_9_Open = true;
    } else {
      r_1_St_9_Open = self->pnr_1;
    };
    r_1 = r_1_St_9_Open;
    if (v_134) {
      s_6_St_9_Open_1 = true;
    } else {
      s_6_St_9_Open_1 = false;
    };
    s_6_1 = s_6_St_9_Open_1;
  };
  ck_24_1 = s_6_1;
  if (ck_24_1) {
    door_open_1_St_9_Closed = false;
    nr_1_St_9_Closed = false;
    ns_1_St_9_Closed_1 = true;
    door_open_1 = door_open_1_St_9_Closed;
    nr_1 = nr_1_St_9_Closed;
    ns_1_1 = ns_1_St_9_Closed_1;
  } else {
    door_open_1_St_9_Open = true;
    door_open_1 = door_open_1_St_9_Open;
    nr_1_St_9_Open = false;
    nr_1 = nr_1_St_9_Open;
    ns_1_St_9_Open_1 = false;
    ns_1_1 = ns_1_St_9_Open_1;
  };
  _out->door_open = door_open_1;
  v_61 = (_out->door_open||_out->window_open);
  v_62 = !(v_61);
  v_66 = (_out->door_open||_out->window_open);
  v_67 = !(v_66);
  if (self->ck_21_1) {
    if (precense_1) {
      r_2_St_10_Empty = true;
      s_7_St_10_Empty_1 = false;
    } else {
      r_2_St_10_Empty = self->pnr_2;
      s_7_St_10_Empty_1 = true;
    };
    r_2 = r_2_St_10_Empty;
    s_7_1 = s_7_St_10_Empty_1;
  } else {
    v_132 = !(precense_1);
    if (v_132) {
      r_2_St_10_Ocupied = true;
    } else {
      r_2_St_10_Ocupied = self->pnr_2;
    };
    r_2 = r_2_St_10_Ocupied;
    if (v_132) {
      s_7_St_10_Ocupied_1 = true;
    } else {
      s_7_St_10_Ocupied_1 = false;
    };
    s_7_1 = s_7_St_10_Ocupied_1;
  };
  ck_22_1 = s_7_1;
  if (ck_22_1) {
    room_oc_1_St_10_Empty = false;
    nr_2_St_10_Empty = false;
    ns_2_St_10_Empty_1 = true;
    room_oc_1 = room_oc_1_St_10_Empty;
    nr_2 = nr_2_St_10_Empty;
    ns_2_1 = ns_2_St_10_Empty_1;
  } else {
    room_oc_1_St_10_Ocupied = true;
    room_oc_1 = room_oc_1_St_10_Ocupied;
    nr_2_St_10_Ocupied = false;
    nr_2 = nr_2_St_10_Ocupied;
    ns_2_St_10_Ocupied_1 = false;
    ns_2_1 = ns_2_St_10_Ocupied_1;
  };
  _out->room_oc = room_oc_1;
  rule2 = (_out->room_oc||v_67);
  v_68 = !(_out->room_oc);
  if (self->ck_19_1) {
    v_130 = !(c2_3);
    v_129 = (onn_1&&c1_3);
    v_131 = (v_129||v_130);
    if (v_131) {
      r_3_St_11_Off = true;
      s_8_St_11_Off_1 = false;
    } else {
      r_3_St_11_Off = self->pnr_3;
      s_8_St_11_Off_1 = true;
    };
    r_3 = r_3_St_11_Off;
    s_8_1 = s_8_St_11_Off_1;
  } else {
    v_127 = !(c1_3);
    v_126 = (onn_1&&c2_3);
    v_128 = (v_126||v_127);
    if (v_128) {
      r_3_St_11_On = true;
    } else {
      r_3_St_11_On = self->pnr_3;
    };
    r_3 = r_3_St_11_On;
    if (v_128) {
      s_8_St_11_On_1 = true;
    } else {
      s_8_St_11_On_1 = false;
    };
    s_8_1 = s_8_St_11_On_1;
  };
  ck_20_1 = s_8_1;
  if (ck_20_1) {
    luz_on_1_St_11_Off = false;
    nr_3_St_11_Off = false;
    ns_3_St_11_Off_1 = true;
    luz_on_1 = luz_on_1_St_11_Off;
    nr_3 = nr_3_St_11_Off;
    ns_3_1 = ns_3_St_11_Off_1;
  } else {
    luz_on_1_St_11_On = true;
    luz_on_1 = luz_on_1_St_11_On;
    nr_3_St_11_On = false;
    nr_3 = nr_3_St_11_On;
    ns_3_St_11_On_1 = false;
    ns_3_1 = ns_3_St_11_On_1;
  };
  _out->tv_on = luz_on_1;
  if (self->ck_17_1) {
    v_124 = !(c2_2);
    v_123 = (onn&&c1_2);
    v_125 = (v_123||v_124);
    if (v_125) {
      r_4_St_12_Off = true;
      s_9_St_12_Off_1 = false;
    } else {
      r_4_St_12_Off = self->pnr_4;
      s_9_St_12_Off_1 = true;
    };
    r_4 = r_4_St_12_Off;
    s_9_1 = s_9_St_12_Off_1;
  } else {
    v_121 = !(c1_2);
    v_120 = (onn&&c2_2);
    v_122 = (v_120||v_121);
    if (v_122) {
      r_4_St_12_On = true;
    } else {
      r_4_St_12_On = self->pnr_4;
    };
    r_4 = r_4_St_12_On;
    if (v_122) {
      s_9_St_12_On_1 = true;
    } else {
      s_9_St_12_On_1 = false;
    };
    s_9_1 = s_9_St_12_On_1;
  };
  ck_18_1 = s_9_1;
  if (ck_18_1) {
    luz_on_St_12_Off = false;
    nr_4_St_12_Off = false;
    ns_4_St_12_Off_1 = true;
    luz_on = luz_on_St_12_Off;
    nr_4 = nr_4_St_12_Off;
    ns_4_1 = ns_4_St_12_Off_1;
  } else {
    luz_on_St_12_On = true;
    luz_on = luz_on_St_12_On;
    nr_4_St_12_On = false;
    nr_4 = nr_4_St_12_On;
    ns_4_St_12_On_1 = false;
    ns_4_1 = ns_4_St_12_On_1;
  };
  _out->lamp_on = luz_on;
  v_57 = (_out->lamp_on||_out->tv_on);
  v_58 = !(v_57);
  v_69 = (_out->lamp_on||_out->tv_on);
  rule1 = (v_68||v_69);
  v_70 = (rule1&&rule2);
  if (ck_15_1) {
    ck_15_2_1 = ck_15_2;
    if (ck_15_2_1) {
      ck_15_3_1_1 = ck_15_3;
      if (ck_15_3_1_1) {
        if (temp_ok_1) {
          v_114 = true;
        } else {
          v_114 = self->pnr_5;
        };
        if (finish_1) {
          r_5_St_13_HEAT = true;
        } else {
          r_5_St_13_HEAT = v_114;
        };
        if (temp_ok_1) {
          v_113_1 = true;
        } else {
          v_113_1 = true;
        };
        if (finish_1) {
          s_10_St_13_HEAT_1 = true;
        } else {
          s_10_St_13_HEAT_1 = v_113_1;
        };
        if (temp_ok_1) {
          v_113_2 = true;
        } else {
          v_113_2 = true;
        };
        if (finish_1) {
          s_10_St_13_HEAT_2 = false;
        } else {
          s_10_St_13_HEAT_2 = v_113_2;
        };
        if (temp_ok_1) {
          v_113_3 = false;
        } else {
          v_113_3 = true;
        };
        if (finish_1) {
          s_10_St_13_HEAT_3 = false;
        } else {
          s_10_St_13_HEAT_3 = v_113_3;
        };
        v_327 = r_5_St_13_HEAT;
        v_312 = s_10_St_13_HEAT_1;
        v_313 = s_10_St_13_HEAT_2;
        v_314 = s_10_St_13_HEAT_3;
      } else {
        if (finish_1) {
          v_112 = true;
          v_111_1 = true;
          v_111_2 = false;
          v_111_3 = false;
        } else {
          v_112 = self->pnr_5;
          v_111_1 = true;
          v_111_2 = true;
          v_111_3 = false;
        };
        v_110 = (cold_1&&c_1);
        if (v_110) {
          r_5_St_13_MAINTAIN = true;
        } else {
          r_5_St_13_MAINTAIN = v_112;
        };
        v_327 = r_5_St_13_MAINTAIN;
        if (v_110) {
          s_10_St_13_MAINTAIN_1 = false;
        } else {
          s_10_St_13_MAINTAIN_1 = v_111_1;
        };
        v_312 = s_10_St_13_MAINTAIN_1;
        if (v_110) {
          s_10_St_13_MAINTAIN_2 = false;
        } else {
          s_10_St_13_MAINTAIN_2 = v_111_2;
        };
        v_313 = s_10_St_13_MAINTAIN_2;
        if (v_110) {
          s_10_St_13_MAINTAIN_3 = true;
        } else {
          s_10_St_13_MAINTAIN_3 = v_111_3;
        };
        v_314 = s_10_St_13_MAINTAIN_3;
      };
      v_321 = v_312;
      v_322 = v_313;
      v_323 = v_314;
      v_329 = v_327;
      if (ck_15_3_1_1) {
        if (v_113_1) {
          v_113_2_1 = v_113_2;
          if (v_113_2_1) {
            v_113_3_1_1 = v_113_3;
          } else {
            v_113_3_1_0 = v_113_3;
          };
        } else {
          v_113_2_0 = v_113_2;
          if (v_113_2_0) {
            v_113_3_0_1 = v_113_3;
          } else {
            v_113_3_0_0 = v_113_3;
          };
        };
        if (s_10_St_13_HEAT_1) {
          s_10_St_13_HEAT_2_1 = s_10_St_13_HEAT_2;
          if (s_10_St_13_HEAT_2_1) {
            s_10_St_13_HEAT_3_1_1 = s_10_St_13_HEAT_3;
          } else {
            s_10_St_13_HEAT_3_1_0 = s_10_St_13_HEAT_3;
          };
        } else {
          s_10_St_13_HEAT_2_0 = s_10_St_13_HEAT_2;
          if (s_10_St_13_HEAT_2_0) {
            s_10_St_13_HEAT_3_0_1 = s_10_St_13_HEAT_3;
          } else {
            s_10_St_13_HEAT_3_0_0 = s_10_St_13_HEAT_3;
          };
        };
      } else {
        if (v_111_1) {
          v_111_2_1 = v_111_2;
          if (v_111_2_1) {
            v_111_3_1_1 = v_111_3;
          } else {
            v_111_3_1_0 = v_111_3;
          };
        } else {
          v_111_2_0 = v_111_2;
          if (v_111_2_0) {
            v_111_3_0_1 = v_111_3;
          } else {
            v_111_3_0_0 = v_111_3;
          };
        };
        if (s_10_St_13_MAINTAIN_1) {
          s_10_St_13_MAINTAIN_2_1 = s_10_St_13_MAINTAIN_2;
          if (s_10_St_13_MAINTAIN_2_1) {
            s_10_St_13_MAINTAIN_3_1_1 = s_10_St_13_MAINTAIN_3;
          } else {
            s_10_St_13_MAINTAIN_3_1_0 = s_10_St_13_MAINTAIN_3;
          };
        } else {
          s_10_St_13_MAINTAIN_2_0 = s_10_St_13_MAINTAIN_2;
          if (s_10_St_13_MAINTAIN_2_0) {
            s_10_St_13_MAINTAIN_3_0_1 = s_10_St_13_MAINTAIN_3;
          } else {
            s_10_St_13_MAINTAIN_3_0_0 = s_10_St_13_MAINTAIN_3;
          };
        };
      };
    } else {
      ck_15_3_1_0 = ck_15_3;
      if (ck_15_3_1_0) {
        v_328 = true;
        v_315 = true;
        v_316 = true;
        v_317 = true;
      } else {
        v_117 = (start_1&&c_1);
        if (v_117) {
          v_119 = true;
          v_118_1 = true;
          v_118_2 = true;
          v_118_3 = true;
        } else {
          v_119 = self->pnr_5;
          v_118_1 = true;
          v_118_2 = false;
          v_118_3 = false;
        };
        v_115 = !(c_1);
        v_116 = (start_1&&v_115);
        if (v_116) {
          r_5_St_13_OFF = true;
        } else {
          r_5_St_13_OFF = v_119;
        };
        v_328 = r_5_St_13_OFF;
        if (v_116) {
          s_10_St_13_OFF_1 = false;
        } else {
          s_10_St_13_OFF_1 = v_118_1;
        };
        v_315 = s_10_St_13_OFF_1;
        if (v_116) {
          s_10_St_13_OFF_2 = false;
        } else {
          s_10_St_13_OFF_2 = v_118_2;
        };
        v_316 = s_10_St_13_OFF_2;
        if (v_116) {
          s_10_St_13_OFF_3 = false;
        } else {
          s_10_St_13_OFF_3 = v_118_3;
        };
        v_317 = s_10_St_13_OFF_3;
        if (v_118_1) {
          v_118_2_1 = v_118_2;
          if (v_118_2_1) {
            v_118_3_1_1 = v_118_3;
          } else {
            v_118_3_1_0 = v_118_3;
          };
        } else {
          v_118_2_0 = v_118_2;
          if (v_118_2_0) {
            v_118_3_0_1 = v_118_3;
          } else {
            v_118_3_0_0 = v_118_3;
          };
        };
        if (s_10_St_13_OFF_1) {
          s_10_St_13_OFF_2_1 = s_10_St_13_OFF_2;
          if (s_10_St_13_OFF_2_1) {
            s_10_St_13_OFF_3_1_1 = s_10_St_13_OFF_3;
          } else {
            s_10_St_13_OFF_3_1_0 = s_10_St_13_OFF_3;
          };
        } else {
          s_10_St_13_OFF_2_0 = s_10_St_13_OFF_2;
          if (s_10_St_13_OFF_2_0) {
            s_10_St_13_OFF_3_0_1 = s_10_St_13_OFF_3;
          } else {
            s_10_St_13_OFF_3_0_0 = s_10_St_13_OFF_3;
          };
        };
      };
      v_321 = v_315;
      v_322 = v_316;
      v_323 = v_317;
      v_329 = v_328;
    };
    s_10_1 = v_321;
    s_10_2 = v_322;
    s_10_3 = v_323;
    r_5 = v_329;
  } else {
    ck_15_2_0 = ck_15_2;
    if (ck_15_2_0) {
      ck_15_3_0_1 = ck_15_3;
      v_324 = true;
      v_325 = true;
      v_326 = true;
      v_331 = true;
    } else {
      ck_15_3_0_0 = ck_15_3;
      if (ck_15_3_0_0) {
        if (finish_1) {
          v_109 = true;
        } else {
          v_109 = self->pnr_5;
        };
        if (temp_ok_1) {
          r_5_St_13_REHEAT = true;
        } else {
          r_5_St_13_REHEAT = v_109;
        };
        v_330 = r_5_St_13_REHEAT;
        if (finish_1) {
          v_108_1 = true;
        } else {
          v_108_1 = false;
        };
        if (temp_ok_1) {
          s_10_St_13_REHEAT_1 = true;
        } else {
          s_10_St_13_REHEAT_1 = v_108_1;
        };
        v_318 = s_10_St_13_REHEAT_1;
        if (finish_1) {
          v_108_2 = false;
        } else {
          v_108_2 = false;
        };
        if (temp_ok_1) {
          s_10_St_13_REHEAT_2 = true;
        } else {
          s_10_St_13_REHEAT_2 = v_108_2;
        };
        v_319 = s_10_St_13_REHEAT_2;
        if (finish_1) {
          v_108_3 = false;
        } else {
          v_108_3 = true;
        };
        if (temp_ok_1) {
          s_10_St_13_REHEAT_3 = false;
        } else {
          s_10_St_13_REHEAT_3 = v_108_3;
        };
        v_320 = s_10_St_13_REHEAT_3;
        if (v_108_1) {
          v_108_2_1 = v_108_2;
          if (v_108_2_1) {
            v_108_3_1_1 = v_108_3;
          } else {
            v_108_3_1_0 = v_108_3;
          };
        } else {
          v_108_2_0 = v_108_2;
          if (v_108_2_0) {
            v_108_3_0_1 = v_108_3;
          } else {
            v_108_3_0_0 = v_108_3;
          };
        };
      } else {
        if (c_1) {
          r_5_St_13_STANDBY = true;
          s_10_St_13_STANDBY_1 = true;
          s_10_St_13_STANDBY_2 = true;
          s_10_St_13_STANDBY_3 = true;
        } else {
          r_5_St_13_STANDBY = self->pnr_5;
          s_10_St_13_STANDBY_1 = false;
          s_10_St_13_STANDBY_2 = false;
          s_10_St_13_STANDBY_3 = false;
        };
        v_330 = r_5_St_13_STANDBY;
        v_318 = s_10_St_13_STANDBY_1;
        v_319 = s_10_St_13_STANDBY_2;
        v_320 = s_10_St_13_STANDBY_3;
      };
      v_324 = v_318;
      v_325 = v_319;
      v_326 = v_320;
      v_331 = v_330;
    };
    s_10_1 = v_324;
    s_10_2 = v_325;
    s_10_3 = v_326;
    r_5 = v_331;
  };
  ck_16_1 = s_10_1;
  ck_16_2 = s_10_2;
  ck_16_3 = s_10_3;
  if (ck_16_1) {
    ck_16_2_1 = ck_16_2;
    if (ck_16_2_1) {
      ck_16_3_1_1 = ck_16_3;
      if (ck_16_3_1_1) {
        power_2_St_13_HEAT = 1500;
        nr_5_St_13_HEAT = false;
        ns_5_St_13_HEAT_1 = true;
        ns_5_St_13_HEAT_2 = true;
        ns_5_St_13_HEAT_3 = true;
        v_284 = power_2_St_13_HEAT;
        v_304 = nr_5_St_13_HEAT;
        v_289 = ns_5_St_13_HEAT_1;
        v_290 = ns_5_St_13_HEAT_2;
        v_291 = ns_5_St_13_HEAT_3;
      } else {
        power_2_St_13_MAINTAIN = 300;
        v_284 = power_2_St_13_MAINTAIN;
        nr_5_St_13_MAINTAIN = false;
        v_304 = nr_5_St_13_MAINTAIN;
        ns_5_St_13_MAINTAIN_1 = true;
        v_289 = ns_5_St_13_MAINTAIN_1;
        ns_5_St_13_MAINTAIN_2 = true;
        v_290 = ns_5_St_13_MAINTAIN_2;
        ns_5_St_13_MAINTAIN_3 = false;
        v_291 = ns_5_St_13_MAINTAIN_3;
      };
      v_286 = v_284;
      v_298 = v_289;
      v_299 = v_290;
      v_300 = v_291;
      v_306 = v_304;
      if (ck_16_3_1_1) {
        if (ns_5_St_13_HEAT_1) {
          ns_5_St_13_HEAT_2_1 = ns_5_St_13_HEAT_2;
          if (ns_5_St_13_HEAT_2_1) {
            ns_5_St_13_HEAT_3_1_1 = ns_5_St_13_HEAT_3;
          } else {
            ns_5_St_13_HEAT_3_1_0 = ns_5_St_13_HEAT_3;
          };
        } else {
          ns_5_St_13_HEAT_2_0 = ns_5_St_13_HEAT_2;
          if (ns_5_St_13_HEAT_2_0) {
            ns_5_St_13_HEAT_3_0_1 = ns_5_St_13_HEAT_3;
          } else {
            ns_5_St_13_HEAT_3_0_0 = ns_5_St_13_HEAT_3;
          };
        };
      } else {
        if (ns_5_St_13_MAINTAIN_1) {
          ns_5_St_13_MAINTAIN_2_1 = ns_5_St_13_MAINTAIN_2;
          if (ns_5_St_13_MAINTAIN_2_1) {
            ns_5_St_13_MAINTAIN_3_1_1 = ns_5_St_13_MAINTAIN_3;
          } else {
            ns_5_St_13_MAINTAIN_3_1_0 = ns_5_St_13_MAINTAIN_3;
          };
        } else {
          ns_5_St_13_MAINTAIN_2_0 = ns_5_St_13_MAINTAIN_2;
          if (ns_5_St_13_MAINTAIN_2_0) {
            ns_5_St_13_MAINTAIN_3_0_1 = ns_5_St_13_MAINTAIN_3;
          } else {
            ns_5_St_13_MAINTAIN_3_0_0 = ns_5_St_13_MAINTAIN_3;
          };
        };
      };
    } else {
      ck_16_3_1_0 = ck_16_3;
      if (ck_16_3_1_0) {
        v_285 = 0;
        v_305 = true;
        v_292 = true;
        v_293 = true;
        v_294 = true;
      } else {
        power_2_St_13_OFF = 0;
        v_285 = power_2_St_13_OFF;
        nr_5_St_13_OFF = false;
        v_305 = nr_5_St_13_OFF;
        ns_5_St_13_OFF_1 = true;
        v_292 = ns_5_St_13_OFF_1;
        ns_5_St_13_OFF_2 = false;
        v_293 = ns_5_St_13_OFF_2;
        ns_5_St_13_OFF_3 = false;
        v_294 = ns_5_St_13_OFF_3;
        if (ns_5_St_13_OFF_1) {
          ns_5_St_13_OFF_2_1 = ns_5_St_13_OFF_2;
          if (ns_5_St_13_OFF_2_1) {
            ns_5_St_13_OFF_3_1_1 = ns_5_St_13_OFF_3;
          } else {
            ns_5_St_13_OFF_3_1_0 = ns_5_St_13_OFF_3;
          };
        } else {
          ns_5_St_13_OFF_2_0 = ns_5_St_13_OFF_2;
          if (ns_5_St_13_OFF_2_0) {
            ns_5_St_13_OFF_3_0_1 = ns_5_St_13_OFF_3;
          } else {
            ns_5_St_13_OFF_3_0_0 = ns_5_St_13_OFF_3;
          };
        };
      };
      v_286 = v_285;
      v_298 = v_292;
      v_299 = v_293;
      v_300 = v_294;
      v_306 = v_305;
    };
    power_2 = v_286;
    ns_5_1 = v_298;
    ns_5_2 = v_299;
    ns_5_3 = v_300;
    nr_5 = v_306;
  } else {
    ck_16_2_0 = ck_16_2;
    if (ck_16_2_0) {
      ck_16_3_0_1 = ck_16_3;
      v_288 = 0;
      v_301 = true;
      v_302 = true;
      v_303 = true;
      v_308 = true;
    } else {
      ck_16_3_0_0 = ck_16_3;
      if (ck_16_3_0_0) {
        power_2_St_13_REHEAT = 1000;
        v_287 = power_2_St_13_REHEAT;
        nr_5_St_13_REHEAT = false;
        v_307 = nr_5_St_13_REHEAT;
        ns_5_St_13_REHEAT_1 = false;
        v_295 = ns_5_St_13_REHEAT_1;
        ns_5_St_13_REHEAT_2 = false;
        v_296 = ns_5_St_13_REHEAT_2;
        ns_5_St_13_REHEAT_3 = true;
        v_297 = ns_5_St_13_REHEAT_3;
      } else {
        power_2_St_13_STANDBY = 0;
        nr_5_St_13_STANDBY = false;
        ns_5_St_13_STANDBY_1 = false;
        ns_5_St_13_STANDBY_2 = false;
        ns_5_St_13_STANDBY_3 = false;
        v_287 = power_2_St_13_STANDBY;
        v_307 = nr_5_St_13_STANDBY;
        v_295 = ns_5_St_13_STANDBY_1;
        v_296 = ns_5_St_13_STANDBY_2;
        v_297 = ns_5_St_13_STANDBY_3;
      };
      v_288 = v_287;
      v_301 = v_295;
      v_302 = v_296;
      v_303 = v_297;
      v_308 = v_307;
    };
    power_2 = v_288;
    ns_5_1 = v_301;
    ns_5_2 = v_302;
    ns_5_3 = v_303;
    nr_5 = v_308;
  };
  _out->p3 = power_2;
  if (ns_5_1) {
    ns_5_2_1 = ns_5_2;
    if (ns_5_2_1) {
      ns_5_3_1_1 = ns_5_3;
    } else {
      ns_5_3_1_0 = ns_5_3;
    };
  } else {
    ns_5_2_0 = ns_5_2;
    if (ns_5_2_0) {
      ns_5_3_0_1 = ns_5_3;
    } else {
      ns_5_3_0_0 = ns_5_3;
    };
  };
  if (!(ck_16_1)) {
    if (!(ck_16_2_0)) {
      if (ck_16_3_0_0) {
        if (ns_5_St_13_REHEAT_1) {
          ns_5_St_13_REHEAT_2_1 = ns_5_St_13_REHEAT_2;
          if (ns_5_St_13_REHEAT_2_1) {
            ns_5_St_13_REHEAT_3_1_1 = ns_5_St_13_REHEAT_3;
          } else {
            ns_5_St_13_REHEAT_3_1_0 = ns_5_St_13_REHEAT_3;
          };
        } else {
          ns_5_St_13_REHEAT_2_0 = ns_5_St_13_REHEAT_2;
          if (ns_5_St_13_REHEAT_2_0) {
            ns_5_St_13_REHEAT_3_0_1 = ns_5_St_13_REHEAT_3;
          } else {
            ns_5_St_13_REHEAT_3_0_0 = ns_5_St_13_REHEAT_3;
          };
        };
      } else {
        if (ns_5_St_13_STANDBY_1) {
          ns_5_St_13_STANDBY_2_1 = ns_5_St_13_STANDBY_2;
          if (ns_5_St_13_STANDBY_2_1) {
            ns_5_St_13_STANDBY_3_1_1 = ns_5_St_13_STANDBY_3;
          } else {
            ns_5_St_13_STANDBY_3_1_0 = ns_5_St_13_STANDBY_3;
          };
        } else {
          ns_5_St_13_STANDBY_2_0 = ns_5_St_13_STANDBY_2;
          if (ns_5_St_13_STANDBY_2_0) {
            ns_5_St_13_STANDBY_3_0_1 = ns_5_St_13_STANDBY_3;
          } else {
            ns_5_St_13_STANDBY_3_0_0 = ns_5_St_13_STANDBY_3;
          };
        };
      };
    };
  };
  if (s_10_1) {
    s_10_2_1 = s_10_2;
    if (s_10_2_1) {
      s_10_3_1_1 = s_10_3;
    } else {
      s_10_3_1_0 = s_10_3;
    };
  } else {
    s_10_2_0 = s_10_2;
    if (s_10_2_0) {
      s_10_3_0_1 = s_10_3;
    } else {
      s_10_3_0_0 = s_10_3;
    };
  };
  if (!(ck_15_1)) {
    if (!(ck_15_2_0)) {
      if (ck_15_3_0_0) {
        if (s_10_St_13_REHEAT_1) {
          s_10_St_13_REHEAT_2_1 = s_10_St_13_REHEAT_2;
          if (s_10_St_13_REHEAT_2_1) {
            s_10_St_13_REHEAT_3_1_1 = s_10_St_13_REHEAT_3;
          } else {
            s_10_St_13_REHEAT_3_1_0 = s_10_St_13_REHEAT_3;
          };
        } else {
          s_10_St_13_REHEAT_2_0 = s_10_St_13_REHEAT_2;
          if (s_10_St_13_REHEAT_2_0) {
            s_10_St_13_REHEAT_3_0_1 = s_10_St_13_REHEAT_3;
          } else {
            s_10_St_13_REHEAT_3_0_0 = s_10_St_13_REHEAT_3;
          };
        };
      } else {
        if (s_10_St_13_STANDBY_1) {
          s_10_St_13_STANDBY_2_1 = s_10_St_13_STANDBY_2;
          if (s_10_St_13_STANDBY_2_1) {
            s_10_St_13_STANDBY_3_1_1 = s_10_St_13_STANDBY_3;
          } else {
            s_10_St_13_STANDBY_3_1_0 = s_10_St_13_STANDBY_3;
          };
        } else {
          s_10_St_13_STANDBY_2_0 = s_10_St_13_STANDBY_2;
          if (s_10_St_13_STANDBY_2_0) {
            s_10_St_13_STANDBY_3_0_1 = s_10_St_13_STANDBY_3;
          } else {
            s_10_St_13_STANDBY_3_0_0 = s_10_St_13_STANDBY_3;
          };
        };
      };
    };
  };
  if (ck_13_1) {
    ck_13_2_1 = ck_13_2;
    if (ck_13_2_1) {
      ck_13_3_1_1 = ck_13_3;
      if (ck_13_3_1_1) {
        if (s_2) {
          r_6_St_14_OFF = true;
          s_11_St_14_OFF_1 = false;
          s_11_St_14_OFF_2 = false;
          s_11_St_14_OFF_3 = false;
        } else {
          r_6_St_14_OFF = self->pnr_6;
          s_11_St_14_OFF_1 = true;
          s_11_St_14_OFF_2 = true;
          s_11_St_14_OFF_3 = true;
        };
        v_383 = r_6_St_14_OFF;
        v_365 = s_11_St_14_OFF_1;
        v_366 = s_11_St_14_OFF_2;
        v_367 = s_11_St_14_OFF_3;
        if (s_11_St_14_OFF_1) {
          s_11_St_14_OFF_2_1 = s_11_St_14_OFF_2;
          if (s_11_St_14_OFF_2_1) {
            s_11_St_14_OFF_3_1_1 = s_11_St_14_OFF_3;
          } else {
            s_11_St_14_OFF_3_1_0 = s_11_St_14_OFF_3;
          };
        } else {
          s_11_St_14_OFF_2_0 = s_11_St_14_OFF_2;
          if (s_11_St_14_OFF_2_0) {
            s_11_St_14_OFF_3_0_1 = s_11_St_14_OFF_3;
          } else {
            s_11_St_14_OFF_3_0_0 = s_11_St_14_OFF_3;
          };
        };
      } else {
        if (e_1) {
          r_6_St_14_RINSE = true;
        } else {
          r_6_St_14_RINSE = self->pnr_6;
        };
        v_383 = r_6_St_14_RINSE;
        if (e_1) {
          s_11_St_14_RINSE_1 = true;
        } else {
          s_11_St_14_RINSE_1 = true;
        };
        v_365 = s_11_St_14_RINSE_1;
        if (e_1) {
          s_11_St_14_RINSE_2 = false;
        } else {
          s_11_St_14_RINSE_2 = true;
        };
        v_366 = s_11_St_14_RINSE_2;
        if (e_1) {
          s_11_St_14_RINSE_3 = false;
        } else {
          s_11_St_14_RINSE_3 = false;
        };
        v_367 = s_11_St_14_RINSE_3;
        if (s_11_St_14_RINSE_1) {
          s_11_St_14_RINSE_2_1 = s_11_St_14_RINSE_2;
          if (s_11_St_14_RINSE_2_1) {
            s_11_St_14_RINSE_3_1_1 = s_11_St_14_RINSE_3;
          } else {
            s_11_St_14_RINSE_3_1_0 = s_11_St_14_RINSE_3;
          };
        } else {
          s_11_St_14_RINSE_2_0 = s_11_St_14_RINSE_2;
          if (s_11_St_14_RINSE_2_0) {
            s_11_St_14_RINSE_3_0_1 = s_11_St_14_RINSE_3;
          } else {
            s_11_St_14_RINSE_3_0_0 = s_11_St_14_RINSE_3;
          };
        };
      };
      v_377 = v_365;
      v_378 = v_366;
      v_379 = v_367;
      v_385 = v_383;
    } else {
      ck_13_3_1_0 = ck_13_3;
      if (ck_13_3_1_0) {
        v_384 = true;
        v_368 = true;
        v_369 = true;
        v_370 = true;
      } else {
        if (e_1) {
          r_6_St_14_SPIN = true;
        } else {
          r_6_St_14_SPIN = self->pnr_6;
        };
        v_384 = r_6_St_14_SPIN;
        if (e_1) {
          s_11_St_14_SPIN_1 = true;
        } else {
          s_11_St_14_SPIN_1 = true;
        };
        v_368 = s_11_St_14_SPIN_1;
        if (e_1) {
          s_11_St_14_SPIN_2 = true;
        } else {
          s_11_St_14_SPIN_2 = false;
        };
        v_369 = s_11_St_14_SPIN_2;
        if (e_1) {
          s_11_St_14_SPIN_3 = true;
        } else {
          s_11_St_14_SPIN_3 = false;
        };
        v_370 = s_11_St_14_SPIN_3;
      };
      v_377 = v_368;
      v_378 = v_369;
      v_379 = v_370;
      v_385 = v_384;
      if (!(ck_13_3_1_0)) {
        if (s_11_St_14_SPIN_1) {
          s_11_St_14_SPIN_2_1 = s_11_St_14_SPIN_2;
          if (s_11_St_14_SPIN_2_1) {
            s_11_St_14_SPIN_3_1_1 = s_11_St_14_SPIN_3;
          } else {
            s_11_St_14_SPIN_3_1_0 = s_11_St_14_SPIN_3;
          };
        } else {
          s_11_St_14_SPIN_2_0 = s_11_St_14_SPIN_2;
          if (s_11_St_14_SPIN_2_0) {
            s_11_St_14_SPIN_3_0_1 = s_11_St_14_SPIN_3;
          } else {
            s_11_St_14_SPIN_3_0_0 = s_11_St_14_SPIN_3;
          };
        };
      };
    };
    s_11_1 = v_377;
    s_11_2 = v_378;
    s_11_3 = v_379;
    r_6 = v_385;
  } else {
    ck_13_2_0 = ck_13_2;
    if (ck_13_2_0) {
      ck_13_3_0_1 = ck_13_3;
      if (ck_13_3_0_1) {
        if (c) {
          r_6_St_14_STANDBY = true;
        } else {
          r_6_St_14_STANDBY = self->pnr_6;
        };
        v_386 = r_6_St_14_STANDBY;
        if (c) {
          s_11_St_14_STANDBY_1 = false;
        } else {
          s_11_St_14_STANDBY_1 = false;
        };
        v_371 = s_11_St_14_STANDBY_1;
        if (c) {
          s_11_St_14_STANDBY_2 = true;
        } else {
          s_11_St_14_STANDBY_2 = true;
        };
        v_372 = s_11_St_14_STANDBY_2;
        if (c) {
          s_11_St_14_STANDBY_3 = false;
        } else {
          s_11_St_14_STANDBY_3 = true;
        };
        v_373 = s_11_St_14_STANDBY_3;
      } else {
        if (e_1) {
          r_6_St_14_WASHING = true;
          s_11_St_14_WASHING_1 = true;
          s_11_St_14_WASHING_2 = true;
          s_11_St_14_WASHING_3 = false;
        } else {
          r_6_St_14_WASHING = self->pnr_6;
          s_11_St_14_WASHING_1 = false;
          s_11_St_14_WASHING_2 = true;
          s_11_St_14_WASHING_3 = false;
        };
        v_386 = r_6_St_14_WASHING;
        v_371 = s_11_St_14_WASHING_1;
        v_372 = s_11_St_14_WASHING_2;
        v_373 = s_11_St_14_WASHING_3;
      };
      v_380 = v_371;
      v_381 = v_372;
      v_382 = v_373;
      v_388 = v_386;
    } else {
      ck_13_3_0_0 = ck_13_3;
      if (ck_13_3_0_0) {
        v_387 = true;
        v_374 = true;
        v_375 = true;
        v_376 = true;
      } else {
        v_104 = !(c);
        v_105 = (e_1&&v_104);
        if (v_105) {
          v_107 = true;
          v_106_1 = false;
          v_106_2 = true;
          v_106_3 = true;
        } else {
          v_107 = self->pnr_6;
          v_106_1 = false;
          v_106_2 = false;
          v_106_3 = false;
        };
        v_103 = (e_1&&c);
        if (v_103) {
          r_6_St_14_WF = true;
        } else {
          r_6_St_14_WF = v_107;
        };
        v_387 = r_6_St_14_WF;
        if (v_103) {
          s_11_St_14_WF_1 = false;
        } else {
          s_11_St_14_WF_1 = v_106_1;
        };
        v_374 = s_11_St_14_WF_1;
        if (v_103) {
          s_11_St_14_WF_2 = true;
        } else {
          s_11_St_14_WF_2 = v_106_2;
        };
        v_375 = s_11_St_14_WF_2;
        if (v_103) {
          s_11_St_14_WF_3 = false;
        } else {
          s_11_St_14_WF_3 = v_106_3;
        };
        v_376 = s_11_St_14_WF_3;
        if (v_106_1) {
          v_106_2_1 = v_106_2;
          if (v_106_2_1) {
            v_106_3_1_1 = v_106_3;
          } else {
            v_106_3_1_0 = v_106_3;
          };
        } else {
          v_106_2_0 = v_106_2;
          if (v_106_2_0) {
            v_106_3_0_1 = v_106_3;
          } else {
            v_106_3_0_0 = v_106_3;
          };
        };
        if (s_11_St_14_WF_1) {
          s_11_St_14_WF_2_1 = s_11_St_14_WF_2;
          if (s_11_St_14_WF_2_1) {
            s_11_St_14_WF_3_1_1 = s_11_St_14_WF_3;
          } else {
            s_11_St_14_WF_3_1_0 = s_11_St_14_WF_3;
          };
        } else {
          s_11_St_14_WF_2_0 = s_11_St_14_WF_2;
          if (s_11_St_14_WF_2_0) {
            s_11_St_14_WF_3_0_1 = s_11_St_14_WF_3;
          } else {
            s_11_St_14_WF_3_0_0 = s_11_St_14_WF_3;
          };
        };
      };
      v_380 = v_374;
      v_381 = v_375;
      v_382 = v_376;
      v_388 = v_387;
    };
    s_11_1 = v_380;
    s_11_2 = v_381;
    s_11_3 = v_382;
    r_6 = v_388;
  };
  ck_14_1 = s_11_1;
  ck_14_2 = s_11_2;
  ck_14_3 = s_11_3;
  if (ck_14_1) {
    ck_14_2_1 = ck_14_2;
    if (ck_14_2_1) {
      ck_14_3_1_1 = ck_14_3;
      if (ck_14_3_1_1) {
        power_1_St_14_OFF = 0;
        nr_6_St_14_OFF = false;
        ns_6_St_14_OFF_1 = true;
        ns_6_St_14_OFF_2 = true;
        ns_6_St_14_OFF_3 = true;
        v_332 = power_1_St_14_OFF;
        v_356 = nr_6_St_14_OFF;
        v_338 = ns_6_St_14_OFF_1;
        v_339 = ns_6_St_14_OFF_2;
        v_340 = ns_6_St_14_OFF_3;
        if (ns_6_St_14_OFF_1) {
          ns_6_St_14_OFF_2_1 = ns_6_St_14_OFF_2;
          if (ns_6_St_14_OFF_2_1) {
            ns_6_St_14_OFF_3_1_1 = ns_6_St_14_OFF_3;
          } else {
            ns_6_St_14_OFF_3_1_0 = ns_6_St_14_OFF_3;
          };
        } else {
          ns_6_St_14_OFF_2_0 = ns_6_St_14_OFF_2;
          if (ns_6_St_14_OFF_2_0) {
            ns_6_St_14_OFF_3_0_1 = ns_6_St_14_OFF_3;
          } else {
            ns_6_St_14_OFF_3_0_0 = ns_6_St_14_OFF_3;
          };
        };
      } else {
        power_1_St_14_RINSE = 200;
        v_332 = power_1_St_14_RINSE;
        nr_6_St_14_RINSE = false;
        v_356 = nr_6_St_14_RINSE;
        ns_6_St_14_RINSE_1 = true;
        v_338 = ns_6_St_14_RINSE_1;
        ns_6_St_14_RINSE_2 = true;
        v_339 = ns_6_St_14_RINSE_2;
        ns_6_St_14_RINSE_3 = false;
        v_340 = ns_6_St_14_RINSE_3;
        if (ns_6_St_14_RINSE_1) {
          ns_6_St_14_RINSE_2_1 = ns_6_St_14_RINSE_2;
          if (ns_6_St_14_RINSE_2_1) {
            ns_6_St_14_RINSE_3_1_1 = ns_6_St_14_RINSE_3;
          } else {
            ns_6_St_14_RINSE_3_1_0 = ns_6_St_14_RINSE_3;
          };
        } else {
          ns_6_St_14_RINSE_2_0 = ns_6_St_14_RINSE_2;
          if (ns_6_St_14_RINSE_2_0) {
            ns_6_St_14_RINSE_3_0_1 = ns_6_St_14_RINSE_3;
          } else {
            ns_6_St_14_RINSE_3_0_0 = ns_6_St_14_RINSE_3;
          };
        };
      };
      v_334 = v_332;
      v_350 = v_338;
      v_351 = v_339;
      v_352 = v_340;
      v_358 = v_356;
    } else {
      ck_14_3_1_0 = ck_14_3;
      if (ck_14_3_1_0) {
        v_333 = 0;
        v_357 = true;
        v_341 = true;
        v_342 = true;
        v_343 = true;
      } else {
        power_1_St_14_SPIN = 800;
        v_333 = power_1_St_14_SPIN;
        nr_6_St_14_SPIN = false;
        v_357 = nr_6_St_14_SPIN;
        ns_6_St_14_SPIN_1 = true;
        v_341 = ns_6_St_14_SPIN_1;
        ns_6_St_14_SPIN_2 = false;
        v_342 = ns_6_St_14_SPIN_2;
        ns_6_St_14_SPIN_3 = false;
        v_343 = ns_6_St_14_SPIN_3;
      };
      v_334 = v_333;
      v_350 = v_341;
      v_351 = v_342;
      v_352 = v_343;
      v_358 = v_357;
      if (!(ck_14_3_1_0)) {
        if (ns_6_St_14_SPIN_1) {
          ns_6_St_14_SPIN_2_1 = ns_6_St_14_SPIN_2;
          if (ns_6_St_14_SPIN_2_1) {
            ns_6_St_14_SPIN_3_1_1 = ns_6_St_14_SPIN_3;
          } else {
            ns_6_St_14_SPIN_3_1_0 = ns_6_St_14_SPIN_3;
          };
        } else {
          ns_6_St_14_SPIN_2_0 = ns_6_St_14_SPIN_2;
          if (ns_6_St_14_SPIN_2_0) {
            ns_6_St_14_SPIN_3_0_1 = ns_6_St_14_SPIN_3;
          } else {
            ns_6_St_14_SPIN_3_0_0 = ns_6_St_14_SPIN_3;
          };
        };
      };
    };
    power_1 = v_334;
    ns_6_1 = v_350;
    ns_6_2 = v_351;
    ns_6_3 = v_352;
    nr_6 = v_358;
  } else {
    ck_14_2_0 = ck_14_2;
    if (ck_14_2_0) {
      ck_14_3_0_1 = ck_14_3;
      if (ck_14_3_0_1) {
        power_1_St_14_STANDBY = 0;
        v_335 = power_1_St_14_STANDBY;
        nr_6_St_14_STANDBY = false;
        v_359 = nr_6_St_14_STANDBY;
        ns_6_St_14_STANDBY_1 = false;
        v_344 = ns_6_St_14_STANDBY_1;
        ns_6_St_14_STANDBY_2 = true;
        v_345 = ns_6_St_14_STANDBY_2;
        ns_6_St_14_STANDBY_3 = true;
        v_346 = ns_6_St_14_STANDBY_3;
      } else {
        power_1_St_14_WASHING = 250;
        nr_6_St_14_WASHING = false;
        ns_6_St_14_WASHING_1 = false;
        ns_6_St_14_WASHING_2 = true;
        ns_6_St_14_WASHING_3 = false;
        v_335 = power_1_St_14_WASHING;
        v_359 = nr_6_St_14_WASHING;
        v_344 = ns_6_St_14_WASHING_1;
        v_345 = ns_6_St_14_WASHING_2;
        v_346 = ns_6_St_14_WASHING_3;
      };
      v_337 = v_335;
      v_353 = v_344;
      v_354 = v_345;
      v_355 = v_346;
      v_361 = v_359;
    } else {
      ck_14_3_0_0 = ck_14_3;
      if (ck_14_3_0_0) {
        v_336 = 0;
        v_360 = true;
        v_347 = true;
        v_348 = true;
        v_349 = true;
      } else {
        power_1_St_14_WF = 15;
        v_336 = power_1_St_14_WF;
        nr_6_St_14_WF = false;
        v_360 = nr_6_St_14_WF;
        ns_6_St_14_WF_1 = false;
        v_347 = ns_6_St_14_WF_1;
        ns_6_St_14_WF_2 = false;
        v_348 = ns_6_St_14_WF_2;
        ns_6_St_14_WF_3 = false;
        v_349 = ns_6_St_14_WF_3;
        if (ns_6_St_14_WF_1) {
          ns_6_St_14_WF_2_1 = ns_6_St_14_WF_2;
          if (ns_6_St_14_WF_2_1) {
            ns_6_St_14_WF_3_1_1 = ns_6_St_14_WF_3;
          } else {
            ns_6_St_14_WF_3_1_0 = ns_6_St_14_WF_3;
          };
        } else {
          ns_6_St_14_WF_2_0 = ns_6_St_14_WF_2;
          if (ns_6_St_14_WF_2_0) {
            ns_6_St_14_WF_3_0_1 = ns_6_St_14_WF_3;
          } else {
            ns_6_St_14_WF_3_0_0 = ns_6_St_14_WF_3;
          };
        };
      };
      v_337 = v_336;
      v_353 = v_347;
      v_354 = v_348;
      v_355 = v_349;
      v_361 = v_360;
    };
    power_1 = v_337;
    ns_6_1 = v_353;
    ns_6_2 = v_354;
    ns_6_3 = v_355;
    nr_6 = v_361;
  };
  _out->p2 = power_1;
  if (ns_6_1) {
    ns_6_2_1 = ns_6_2;
    if (ns_6_2_1) {
      ns_6_3_1_1 = ns_6_3;
    } else {
      ns_6_3_1_0 = ns_6_3;
    };
  } else {
    ns_6_2_0 = ns_6_2;
    if (ns_6_2_0) {
      ns_6_3_0_1 = ns_6_3;
    } else {
      ns_6_3_0_0 = ns_6_3;
    };
  };
  if (!(ck_14_1)) {
    if (ck_14_2_0) {
      if (ck_14_3_0_1) {
        if (ns_6_St_14_STANDBY_1) {
          ns_6_St_14_STANDBY_2_1 = ns_6_St_14_STANDBY_2;
          if (ns_6_St_14_STANDBY_2_1) {
            ns_6_St_14_STANDBY_3_1_1 = ns_6_St_14_STANDBY_3;
          } else {
            ns_6_St_14_STANDBY_3_1_0 = ns_6_St_14_STANDBY_3;
          };
        } else {
          ns_6_St_14_STANDBY_2_0 = ns_6_St_14_STANDBY_2;
          if (ns_6_St_14_STANDBY_2_0) {
            ns_6_St_14_STANDBY_3_0_1 = ns_6_St_14_STANDBY_3;
          } else {
            ns_6_St_14_STANDBY_3_0_0 = ns_6_St_14_STANDBY_3;
          };
        };
      } else {
        if (ns_6_St_14_WASHING_1) {
          ns_6_St_14_WASHING_2_1 = ns_6_St_14_WASHING_2;
          if (ns_6_St_14_WASHING_2_1) {
            ns_6_St_14_WASHING_3_1_1 = ns_6_St_14_WASHING_3;
          } else {
            ns_6_St_14_WASHING_3_1_0 = ns_6_St_14_WASHING_3;
          };
        } else {
          ns_6_St_14_WASHING_2_0 = ns_6_St_14_WASHING_2;
          if (ns_6_St_14_WASHING_2_0) {
            ns_6_St_14_WASHING_3_0_1 = ns_6_St_14_WASHING_3;
          } else {
            ns_6_St_14_WASHING_3_0_0 = ns_6_St_14_WASHING_3;
          };
        };
      };
    };
  };
  if (s_11_1) {
    s_11_2_1 = s_11_2;
    if (s_11_2_1) {
      s_11_3_1_1 = s_11_3;
    } else {
      s_11_3_1_0 = s_11_3;
    };
  } else {
    s_11_2_0 = s_11_2;
    if (s_11_2_0) {
      s_11_3_0_1 = s_11_3;
    } else {
      s_11_3_0_0 = s_11_3;
    };
  };
  if (!(ck_13_1)) {
    if (ck_13_2_0) {
      if (ck_13_3_0_1) {
        if (s_11_St_14_STANDBY_1) {
          s_11_St_14_STANDBY_2_1 = s_11_St_14_STANDBY_2;
          if (s_11_St_14_STANDBY_2_1) {
            s_11_St_14_STANDBY_3_1_1 = s_11_St_14_STANDBY_3;
          } else {
            s_11_St_14_STANDBY_3_1_0 = s_11_St_14_STANDBY_3;
          };
        } else {
          s_11_St_14_STANDBY_2_0 = s_11_St_14_STANDBY_2;
          if (s_11_St_14_STANDBY_2_0) {
            s_11_St_14_STANDBY_3_0_1 = s_11_St_14_STANDBY_3;
          } else {
            s_11_St_14_STANDBY_3_0_0 = s_11_St_14_STANDBY_3;
          };
        };
      } else {
        if (s_11_St_14_WASHING_1) {
          s_11_St_14_WASHING_2_1 = s_11_St_14_WASHING_2;
          if (s_11_St_14_WASHING_2_1) {
            s_11_St_14_WASHING_3_1_1 = s_11_St_14_WASHING_3;
          } else {
            s_11_St_14_WASHING_3_1_0 = s_11_St_14_WASHING_3;
          };
        } else {
          s_11_St_14_WASHING_2_0 = s_11_St_14_WASHING_2;
          if (s_11_St_14_WASHING_2_0) {
            s_11_St_14_WASHING_3_0_1 = s_11_St_14_WASHING_3;
          } else {
            s_11_St_14_WASHING_3_0_0 = s_11_St_14_WASHING_3;
          };
        };
      };
    };
  };
  if (ck_11_1) {
    ck_11_2_1 = ck_11_2;
    if (ck_11_2_1) {
      v_90 = (up2_1&&c2_1);
      if (v_90) {
        v_92 = true;
        v_91_1 = false;
        v_91_2 = true;
      } else {
        v_92 = self->pnr_7;
        v_91_1 = true;
        v_91_2 = true;
      };
      v_88 = !(c1_1);
      v_89 = (down1_1||v_88);
      if (v_89) {
        r_7_St_15_ECO = true;
      } else {
        r_7_St_15_ECO = v_92;
      };
      v_405 = r_7_St_15_ECO;
      if (v_89) {
        s_12_St_15_ECO_1 = true;
      } else {
        s_12_St_15_ECO_1 = v_91_1;
      };
      v_401 = s_12_St_15_ECO_1;
      if (v_89) {
        s_12_St_15_ECO_2 = false;
      } else {
        s_12_St_15_ECO_2 = v_91_2;
      };
      v_402 = s_12_St_15_ECO_2;
      if (v_91_1) {
        v_91_2_1 = v_91_2;
      } else {
        v_91_2_0 = v_91_2;
      };
      if (s_12_St_15_ECO_1) {
        s_12_St_15_ECO_2_1 = s_12_St_15_ECO_2;
      } else {
        s_12_St_15_ECO_2_0 = s_12_St_15_ECO_2;
      };
    } else {
      v_96 = (up2_1&&c2_1);
      if (v_96) {
        v_98 = true;
        v_97_1 = false;
        v_97_2 = true;
      } else {
        v_98 = self->pnr_7;
        v_97_1 = true;
        v_97_2 = false;
      };
      v_94 = !(c1_1);
      v_95 = (down1_1||v_94);
      if (v_95) {
        v_100 = true;
        v_99_1 = false;
        v_99_2 = false;
      } else {
        v_100 = v_98;
        v_99_1 = v_97_1;
        v_99_2 = v_97_2;
      };
      v_93 = (up1_1&&c1_1);
      if (v_93) {
        r_7_St_15_FROST = true;
        s_12_St_15_FROST_1 = true;
        s_12_St_15_FROST_2 = true;
      } else {
        r_7_St_15_FROST = v_100;
        s_12_St_15_FROST_1 = v_99_1;
        s_12_St_15_FROST_2 = v_99_2;
      };
      v_405 = r_7_St_15_FROST;
      v_401 = s_12_St_15_FROST_1;
      v_402 = s_12_St_15_FROST_2;
      if (v_97_1) {
        v_97_2_1 = v_97_2;
      } else {
        v_97_2_0 = v_97_2;
      };
      if (v_99_1) {
        v_99_2_1 = v_99_2;
      } else {
        v_99_2_0 = v_99_2;
      };
      if (s_12_St_15_FROST_1) {
        s_12_St_15_FROST_2_1 = s_12_St_15_FROST_2;
      } else {
        s_12_St_15_FROST_2_0 = s_12_St_15_FROST_2;
      };
    };
    s_12_1 = v_401;
    s_12_2 = v_402;
    r_7 = v_405;
  } else {
    ck_11_2_0 = ck_11_2;
    if (ck_11_2_0) {
      v_84 = !(c2_1);
      v_85 = (down2_1&&v_84);
      if (v_85) {
        v_87 = true;
        v_86_1 = true;
        v_86_2 = false;
      } else {
        v_87 = self->pnr_7;
        v_86_1 = false;
        v_86_2 = true;
      };
      v_82 = !(c1_1);
      v_83 = (down1_1&&v_82);
      if (v_83) {
        r_7_St_15_HIGHT = true;
      } else {
        r_7_St_15_HIGHT = v_87;
      };
      v_406 = r_7_St_15_HIGHT;
      if (v_83) {
        s_12_St_15_HIGHT_1 = true;
      } else {
        s_12_St_15_HIGHT_1 = v_86_1;
      };
      v_403 = s_12_St_15_HIGHT_1;
      if (v_83) {
        s_12_St_15_HIGHT_2 = true;
      } else {
        s_12_St_15_HIGHT_2 = v_86_2;
      };
      v_404 = s_12_St_15_HIGHT_2;
    } else {
      v_101 = !(c1_1);
      v_102 = (up1_1||v_101);
      if (v_102) {
        r_7_St_15_OFF = true;
        s_12_St_15_OFF_1 = true;
        s_12_St_15_OFF_2 = false;
      } else {
        r_7_St_15_OFF = self->pnr_7;
        s_12_St_15_OFF_1 = false;
        s_12_St_15_OFF_2 = false;
      };
      v_406 = r_7_St_15_OFF;
      v_403 = s_12_St_15_OFF_1;
      v_404 = s_12_St_15_OFF_2;
    };
    s_12_1 = v_403;
    s_12_2 = v_404;
    r_7 = v_406;
  };
  ck_12_1 = s_12_1;
  ck_12_2 = s_12_2;
  if (ck_12_1) {
    ck_12_2_1 = ck_12_2;
    if (ck_12_2_1) {
      power_St_15_ECO = 1500;
      v_389 = power_St_15_ECO;
      ss_1_St_15_ECO = 2;
      v_391 = ss_1_St_15_ECO;
      nr_7_St_15_ECO = false;
      v_397 = nr_7_St_15_ECO;
      ns_7_St_15_ECO_1 = true;
      v_393 = ns_7_St_15_ECO_1;
      ns_7_St_15_ECO_2 = true;
      v_394 = ns_7_St_15_ECO_2;
      if (ns_7_St_15_ECO_1) {
        ns_7_St_15_ECO_2_1 = ns_7_St_15_ECO_2;
      } else {
        ns_7_St_15_ECO_2_0 = ns_7_St_15_ECO_2;
      };
    } else {
      power_St_15_FROST = 300;
      ss_1_St_15_FROST = 1;
      nr_7_St_15_FROST = false;
      ns_7_St_15_FROST_1 = true;
      ns_7_St_15_FROST_2 = false;
      v_389 = power_St_15_FROST;
      v_391 = ss_1_St_15_FROST;
      v_397 = nr_7_St_15_FROST;
      v_393 = ns_7_St_15_FROST_1;
      v_394 = ns_7_St_15_FROST_2;
      if (ns_7_St_15_FROST_1) {
        ns_7_St_15_FROST_2_1 = ns_7_St_15_FROST_2;
      } else {
        ns_7_St_15_FROST_2_0 = ns_7_St_15_FROST_2;
      };
    };
    power = v_389;
    ss_1 = v_391;
    ns_7_1 = v_393;
    ns_7_2 = v_394;
    nr_7 = v_397;
  } else {
    ck_12_2_0 = ck_12_2;
    if (ck_12_2_0) {
      power_St_15_HIGHT = 2000;
      v_390 = power_St_15_HIGHT;
      ss_1_St_15_HIGHT = 3;
      v_392 = ss_1_St_15_HIGHT;
      nr_7_St_15_HIGHT = false;
      v_398 = nr_7_St_15_HIGHT;
      ns_7_St_15_HIGHT_1 = false;
      v_395 = ns_7_St_15_HIGHT_1;
      ns_7_St_15_HIGHT_2 = true;
      v_396 = ns_7_St_15_HIGHT_2;
    } else {
      power_St_15_OFF = 0;
      ss_1_St_15_OFF = 0;
      nr_7_St_15_OFF = false;
      ns_7_St_15_OFF_1 = false;
      ns_7_St_15_OFF_2 = false;
      v_390 = power_St_15_OFF;
      v_392 = ss_1_St_15_OFF;
      v_398 = nr_7_St_15_OFF;
      v_395 = ns_7_St_15_OFF_1;
      v_396 = ns_7_St_15_OFF_2;
    };
    power = v_390;
    ss_1 = v_392;
    ns_7_1 = v_395;
    ns_7_2 = v_396;
    nr_7 = v_398;
  };
  _out->ss = ss_1;
  v_59 = (_out->ss<2);
  v_60 = (v_58&&v_59);
  rule4 = (_out->room_oc||v_60);
  v_63 = (_out->ss==0);
  v_64 = (_out->ss==1);
  v_65 = (v_63||v_64);
  rule3 = (v_62||v_65);
  v_71 = (v_70&&rule3);
  v_72 = (v_71&&rule4);
  _out->p1 = power;
  if (ns_7_1) {
    ns_7_2_1 = ns_7_2;
  } else {
    ns_7_2_0 = ns_7_2;
  };
  if (!(ck_12_1)) {
    if (ck_12_2_0) {
      if (ns_7_St_15_HIGHT_1) {
        ns_7_St_15_HIGHT_2_1 = ns_7_St_15_HIGHT_2;
      } else {
        ns_7_St_15_HIGHT_2_0 = ns_7_St_15_HIGHT_2;
      };
    } else {
      if (ns_7_St_15_OFF_1) {
        ns_7_St_15_OFF_2_1 = ns_7_St_15_OFF_2;
      } else {
        ns_7_St_15_OFF_2_0 = ns_7_St_15_OFF_2;
      };
    };
  };
  if (s_12_1) {
    s_12_2_1 = s_12_2;
  } else {
    s_12_2_0 = s_12_2;
  };
  if (!(ck_11_1)) {
    if (ck_11_2_0) {
      if (v_86_1) {
        v_86_2_1 = v_86_2;
      } else {
        v_86_2_0 = v_86_2;
      };
      if (s_12_St_15_HIGHT_1) {
        s_12_St_15_HIGHT_2_1 = s_12_St_15_HIGHT_2;
      } else {
        s_12_St_15_HIGHT_2_0 = s_12_St_15_HIGHT_2;
      };
    } else {
      if (s_12_St_15_OFF_1) {
        s_12_St_15_OFF_2_1 = s_12_St_15_OFF_2;
      } else {
        s_12_St_15_OFF_2_0 = s_12_St_15_OFF_2;
      };
    };
  };
  if (ck_9_1) {
    ck_9_2_1 = ck_9_2;
    if (ck_9_2_1) {
      if (eco_1) {
        v_76 = true;
        v_75_1 = true;
        v_75_2 = false;
      } else {
        v_76 = self->pnr_8;
        v_75_1 = true;
        v_75_2 = true;
      };
      v_74 = !(confort_1);
      if (v_74) {
        r_8_St_16_CONFORT = true;
      } else {
        r_8_St_16_CONFORT = v_76;
      };
      v_425 = r_8_St_16_CONFORT;
      if (v_74) {
        s_13_St_16_CONFORT_1 = false;
      } else {
        s_13_St_16_CONFORT_1 = v_75_1;
      };
      v_421 = s_13_St_16_CONFORT_1;
      if (v_74) {
        s_13_St_16_CONFORT_2 = false;
      } else {
        s_13_St_16_CONFORT_2 = v_75_2;
      };
      v_422 = s_13_St_16_CONFORT_2;
    } else {
      if (confort_1) {
        v_79 = true;
        v_78_1 = true;
        v_78_2 = true;
      } else {
        v_79 = self->pnr_8;
        v_78_1 = true;
        v_78_2 = false;
      };
      v_77 = !(eco_1);
      if (v_77) {
        r_8_St_16_ECO = true;
        s_13_St_16_ECO_1 = false;
        s_13_St_16_ECO_2 = false;
      } else {
        r_8_St_16_ECO = v_79;
        s_13_St_16_ECO_1 = v_78_1;
        s_13_St_16_ECO_2 = v_78_2;
      };
      v_425 = r_8_St_16_ECO;
      v_421 = s_13_St_16_ECO_1;
      v_422 = s_13_St_16_ECO_2;
    };
    s_13_1 = v_421;
    s_13_2 = v_422;
    r_8 = v_425;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      v_426 = true;
      v_423 = true;
      v_424 = true;
    } else {
      if (confort_1) {
        v_81 = true;
      } else {
        v_81 = self->pnr_8;
      };
      if (eco_1) {
        r_8_St_16_MS = true;
      } else {
        r_8_St_16_MS = v_81;
      };
      v_426 = r_8_St_16_MS;
      if (confort_1) {
        v_80_1 = true;
      } else {
        v_80_1 = false;
      };
      if (eco_1) {
        s_13_St_16_MS_1 = true;
      } else {
        s_13_St_16_MS_1 = v_80_1;
      };
      v_423 = s_13_St_16_MS_1;
      if (confort_1) {
        v_80_2 = true;
      } else {
        v_80_2 = false;
      };
      if (eco_1) {
        s_13_St_16_MS_2 = false;
      } else {
        s_13_St_16_MS_2 = v_80_2;
      };
      v_424 = s_13_St_16_MS_2;
      if (v_80_1) {
        v_80_2_1 = v_80_2;
      } else {
        v_80_2_0 = v_80_2;
      };
      if (s_13_St_16_MS_1) {
        s_13_St_16_MS_2_1 = s_13_St_16_MS_2;
      } else {
        s_13_St_16_MS_2_0 = s_13_St_16_MS_2;
      };
    };
    s_13_1 = v_423;
    s_13_2 = v_424;
    r_8 = v_426;
  };
  ck_10_1 = s_13_1;
  ck_10_2 = s_13_2;
  if (ck_10_1) {
    ck_10_2_1 = ck_10_2;
    if (ck_10_2_1) {
      pl_1_St_16_CONFORT = 7000;
      v_407 = pl_1_St_16_CONFORT;
      s_1_St_16_CONFORT_1 = true;
      v_409 = s_1_St_16_CONFORT_1;
      s_1_St_16_CONFORT_2 = true;
      v_410 = s_1_St_16_CONFORT_2;
      nr_8_St_16_CONFORT = false;
      v_417 = nr_8_St_16_CONFORT;
      ns_8_St_16_CONFORT_1 = true;
      v_413 = ns_8_St_16_CONFORT_1;
      ns_8_St_16_CONFORT_2 = true;
      v_414 = ns_8_St_16_CONFORT_2;
    } else {
      pl_1_St_16_ECO = 5000;
      s_1_St_16_ECO_1 = true;
      s_1_St_16_ECO_2 = false;
      nr_8_St_16_ECO = false;
      ns_8_St_16_ECO_1 = true;
      ns_8_St_16_ECO_2 = false;
      v_407 = pl_1_St_16_ECO;
      v_409 = s_1_St_16_ECO_1;
      v_410 = s_1_St_16_ECO_2;
      v_417 = nr_8_St_16_ECO;
      v_413 = ns_8_St_16_ECO_1;
      v_414 = ns_8_St_16_ECO_2;
    };
    pl_1 = v_407;
    s_1_1 = v_409;
    s_1_2 = v_410;
    ns_8_1 = v_413;
    ns_8_2 = v_414;
    nr_8 = v_417;
  } else {
    ck_10_2_0 = ck_10_2;
    if (ck_10_2_0) {
      v_408 = 0;
      v_411 = true;
      v_412 = true;
      v_418 = true;
      v_415 = true;
      v_416 = true;
    } else {
      pl_1_St_16_MS = 3000;
      v_408 = pl_1_St_16_MS;
      s_1_St_16_MS_1 = false;
      v_411 = s_1_St_16_MS_1;
      s_1_St_16_MS_2 = false;
      v_412 = s_1_St_16_MS_2;
      nr_8_St_16_MS = false;
      v_418 = nr_8_St_16_MS;
      ns_8_St_16_MS_1 = false;
      v_415 = ns_8_St_16_MS_1;
      ns_8_St_16_MS_2 = false;
      v_416 = ns_8_St_16_MS_2;
      if (s_1_St_16_MS_1) {
        s_1_St_16_MS_2_1 = s_1_St_16_MS_2;
      } else {
        s_1_St_16_MS_2_0 = s_1_St_16_MS_2;
      };
      if (ns_8_St_16_MS_1) {
        ns_8_St_16_MS_2_1 = ns_8_St_16_MS_2;
      } else {
        ns_8_St_16_MS_2_0 = ns_8_St_16_MS_2;
      };
    };
    pl_1 = v_408;
    s_1_1 = v_411;
    s_1_2 = v_412;
    ns_8_1 = v_415;
    ns_8_2 = v_416;
    nr_8 = v_418;
  };
  _out->sp_1 = s_1_1;
  ck_1 = _out->sp_1;
  _out->sp_2 = s_1_2;
  ck_2 = _out->sp_2;
  _out->pl = pl_1;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v = (_out->p1+_out->p2);
      v_52 = (v+_out->p3);
      rule5_S3 = (v_52<=7000);
      v_283 = rule5_S3;
    } else {
      v_53 = (_out->p1+_out->p2);
      v_54 = (v_53+_out->p3);
      rule5_S2 = (v_54<=5000);
      v_283 = rule5_S2;
    };
    rule5 = v_283;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_282 = true;
    } else {
      v_55 = (_out->p1+_out->p2);
      v_56 = (v_55+_out->p3);
      rule5_S1 = (v_56<=3000);
      v_282 = rule5_S1;
    };
    rule5 = v_282;
  };
  v_73 = (v_72&&rule5);
  if (_out->sp_1) {
    sp_2_1 = _out->sp_2;
  } else {
    sp_2_0 = _out->sp_2;
  };
  if (s_1_1) {
    s_1_2_1 = s_1_2;
  } else {
    s_1_2_0 = s_1_2;
  };
  if (ns_8_1) {
    ns_8_2_1 = ns_8_2;
  } else {
    ns_8_2_0 = ns_8_2;
  };
  if (ck_10_1) {
    if (ck_10_2_1) {
      if (s_1_St_16_CONFORT_1) {
        s_1_St_16_CONFORT_2_1 = s_1_St_16_CONFORT_2;
      } else {
        s_1_St_16_CONFORT_2_0 = s_1_St_16_CONFORT_2;
      };
      if (ns_8_St_16_CONFORT_1) {
        ns_8_St_16_CONFORT_2_1 = ns_8_St_16_CONFORT_2;
      } else {
        ns_8_St_16_CONFORT_2_0 = ns_8_St_16_CONFORT_2;
      };
    } else {
      if (s_1_St_16_ECO_1) {
        s_1_St_16_ECO_2_1 = s_1_St_16_ECO_2;
      } else {
        s_1_St_16_ECO_2_0 = s_1_St_16_ECO_2;
      };
      if (ns_8_St_16_ECO_1) {
        ns_8_St_16_ECO_2_1 = ns_8_St_16_ECO_2;
      } else {
        ns_8_St_16_ECO_2_0 = ns_8_St_16_ECO_2;
      };
    };
  };
  if (s_13_1) {
    s_13_2_1 = s_13_2;
  } else {
    s_13_2_0 = s_13_2;
  };
  if (ck_9_1) {
    if (ck_9_2_1) {
      if (v_75_1) {
        v_75_2_1 = v_75_2;
      } else {
        v_75_2_0 = v_75_2;
      };
      if (s_13_St_16_CONFORT_1) {
        s_13_St_16_CONFORT_2_1 = s_13_St_16_CONFORT_2;
      } else {
        s_13_St_16_CONFORT_2_0 = s_13_St_16_CONFORT_2;
      };
    } else {
      if (v_78_1) {
        v_78_2_1 = v_78_2;
      } else {
        v_78_2_0 = v_78_2;
      };
      if (s_13_St_16_ECO_1) {
        s_13_St_16_ECO_2_1 = s_13_St_16_ECO_2;
      } else {
        s_13_St_16_ECO_2_0 = s_13_St_16_ECO_2;
      };
    };
  };
  self->pnr = nr;
  self->ck_25_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_23_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_21_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_19_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_17_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->v_309 = ns_5_1;
  self->v_310 = ns_5_2;
  self->v_311 = ns_5_3;
  self->pnr_6 = nr_6;
  self->v_362 = ns_6_1;
  self->v_363 = ns_6_2;
  self->v_364 = ns_6_3;
  self->pnr_7 = nr_7;
  self->v_399 = ns_7_1;
  self->v_400 = ns_7_2;
  self->pnr_8 = nr_8;
  self->v_419 = ns_8_1;
  self->v_420 = ns_8_2;;
}

