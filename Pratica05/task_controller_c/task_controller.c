/* --- Generated the 7/1/2019 at 8:11 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c task_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task_controller.h"

void Task_controller__task_controller_task_c_window_step(int task_up1,
                                                         int task_down1,
                                                         int task_up2,
                                                         int task_down2,
                                                         int task_s,
                                                         int task_e,
                                                         int task_finish,
                                                         int task_start,
                                                         int task_cold,
                                                         int task_temp_ok,
                                                         int task_eco,
                                                         int task_confort,
                                                         int task_on_lamp,
                                                         int task_on_tv,
                                                         int task_precense,
                                                         int task_push_door,
                                                         int task_push_window,
                                                         int task_v_420,
                                                         int task_v_419,
                                                         int task_pnr_8,
                                                         int task_v_400,
                                                         int task_v_399,
                                                         int task_pnr_7,
                                                         int task_v_364,
                                                         int task_v_363,
                                                         int task_v_362,
                                                         int task_pnr_6,
                                                         int task_v_311,
                                                         int task_v_310,
                                                         int task_v_309,
                                                         int task_pnr_5,
                                                         int task_ck_17_1,
                                                         int task_pnr_4,
                                                         int task_ck_19_1,
                                                         int task_pnr_3,
                                                         int task_ck_21_1,
                                                         int task_pnr_2,
                                                         int task_ck_23_1,
                                                         int task_pnr_1,
                                                         int task_ck_25_1,
                                                         int task_pnr,
                                                         int p_task_c_window,
                                                         int p_task_c_door,
                                                         int p_task_c_tv1,
                                                         int p_task_c_tv2,
                                                         int p_task_c_lamp2,
                                                         int p_task_c_lamp1,
                                                         int p_task_c4,
                                                         int p_task_c3,
                                                         int p_task_c2,
                                                         int p_task_c1,
                                                         int task_c_door,
                                                         int task_c_tv1,
                                                         int task_c_tv2,
                                                         int task_c_lamp2,
                                                         int task_c_lamp1,
                                                         int task_c4,
                                                         int task_c3,
                                                         int task_c2,
                                                         int task_c1,
                                                         Task_controller__task_controller_task_c_window_out* _out) {
  
  int v_151;
  int v_150;
  int v_149;
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
  int v_138;
  int v_137;
  int v_136;
  int v_135;
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
  int v_110;
  int v_109;
  int v_108;
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
  int v_47;
  int v_46;
  int v_45;
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
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  sub_24 = false;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (task_on_tv) {
    sub_21 = false;
    sub_25 = sub_22;
  } else {
    sub_21 = sub_22;
    sub_25 = false;
  };
  if (task_ck_19_1) {
    v_124 = sub_25;
  } else {
    v_124 = sub_21;
  };
  sub_26 = sub_22;
  if (task_ck_19_1) {
    v_126 = sub_26;
  } else {
    v_126 = false;
  };
  if (task_c_tv2) {
    v_127 = false;
    v_125 = v_124;
  } else {
    v_127 = v_126;
    v_125 = sub_26;
  };
  if (task_c_tv1) {
    sub_20 = v_125;
  } else {
    sub_20 = v_127;
  };
  sub_28 = sub_26;
  sub_27 = sub_28;
  if (task_ck_17_1) {
    v_129 = sub_20;
  } else {
    v_129 = sub_27;
  };
  if (task_c_lamp1) {
    v_130 = v_129;
  } else {
    v_130 = sub_20;
  };
  if (task_ck_17_1) {
    sub_19 = sub_27;
  } else {
    sub_19 = sub_20;
  };
  if (task_c_lamp1) {
    v_128 = sub_19;
  } else {
    v_128 = sub_20;
  };
  if (task_on_lamp) {
    v_131 = v_128;
  } else {
    v_131 = v_130;
  };
  if (task_c_lamp1) {
    sub_29 = sub_27;
  } else {
    sub_29 = sub_19;
  };
  if (task_c_lamp2) {
    sub_18 = v_131;
  } else {
    sub_18 = sub_29;
  };
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (task_ck_19_1) {
    v_115 = false;
  } else {
    v_115 = sub_26;
  };
  if (task_c_tv2) {
    v_116 = sub_26;
  } else {
    v_116 = v_115;
  };
  if (task_ck_19_1) {
    v_113 = sub_21;
  } else {
    v_113 = sub_25;
  };
  if (task_c_tv2) {
    v_114 = v_113;
  } else {
    v_114 = false;
  };
  if (task_c_tv1) {
    sub_40 = v_114;
  } else {
    sub_40 = v_116;
  };
  if (task_ck_17_1) {
    v_118 = sub_40;
  } else {
    v_118 = false;
  };
  if (task_c_lamp1) {
    v_119 = v_118;
  } else {
    v_119 = sub_40;
  };
  if (task_ck_17_1) {
    sub_39 = false;
  } else {
    sub_39 = sub_40;
  };
  if (task_c_lamp1) {
    v_117 = sub_39;
  } else {
    v_117 = sub_40;
  };
  if (task_on_lamp) {
    v_120 = v_117;
  } else {
    v_120 = v_119;
  };
  if (task_c_lamp1) {
    sub_41 = false;
  } else {
    sub_41 = sub_39;
  };
  if (task_c_lamp2) {
    sub_38 = v_120;
  } else {
    sub_38 = sub_41;
  };
  sub_37 = sub_38;
  if (task_ck_23_1) {
    v_122 = sub_37;
    v_121 = false;
  } else {
    v_122 = false;
    v_121 = sub_37;
  };
  if (task_push_door) {
    v_123 = v_121;
  } else {
    v_123 = v_122;
  };
  if (task_c_door) {
    sub_36 = v_123;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  if (task_precense) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_30;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (task_down2) {
    sub_42 = sub_8;
  } else {
    sub_42 = false;
  };
  if (task_c2) {
    v_132 = false;
  } else {
    v_132 = sub_42;
  };
  if (task_v_400) {
    sub_4 = v_132;
  } else {
    sub_4 = sub_5;
  };
  if (task_ck_23_1) {
    v_105 = sub_17;
    v_104 = false;
  } else {
    v_105 = false;
    v_104 = sub_17;
  };
  if (task_push_door) {
    v_106 = v_104;
  } else {
    v_106 = v_105;
  };
  if (task_c_door) {
    sub_56 = v_106;
  } else {
    sub_56 = sub_16;
  };
  sub_55 = sub_56;
  if (task_c3) {
    sub_67 = false;
  } else {
    sub_67 = sub_24;
  };
  if (task_v_362) {
    v_90 = sub_23;
  } else {
    v_90 = sub_67;
  };
  if (task_e) {
    sub_66 = v_90;
  } else {
    sub_66 = false;
  };
  if (task_v_363) {
    sub_65 = false;
  } else {
    sub_65 = sub_66;
  };
  sub_69 = (task_s&&false);
  if (task_v_362) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_67;
  };
  if (task_v_363) {
    v_91 = sub_68;
  } else {
    v_91 = sub_22;
  };
  if (task_v_364) {
    sub_64 = v_91;
  } else {
    sub_64 = sub_65;
  };
  if (task_on_tv) {
    v_92 = sub_64;
    sub_63 = false;
  } else {
    v_92 = false;
    sub_63 = sub_64;
  };
  if (task_ck_19_1) {
    v_93 = v_92;
  } else {
    v_93 = sub_63;
  };
  sub_70 = sub_64;
  if (task_ck_19_1) {
    v_95 = sub_70;
  } else {
    v_95 = false;
  };
  if (task_c_tv2) {
    v_96 = false;
    v_94 = v_93;
  } else {
    v_96 = v_95;
    v_94 = sub_70;
  };
  if (task_c_tv1) {
    sub_62 = v_94;
  } else {
    sub_62 = v_96;
  };
  sub_72 = sub_70;
  sub_71 = sub_72;
  if (task_ck_17_1) {
    v_98 = sub_62;
  } else {
    v_98 = sub_71;
  };
  if (task_c_lamp1) {
    v_99 = v_98;
  } else {
    v_99 = sub_62;
  };
  if (task_ck_17_1) {
    sub_61 = sub_71;
  } else {
    sub_61 = sub_62;
  };
  if (task_c_lamp1) {
    v_97 = sub_61;
  } else {
    v_97 = sub_62;
  };
  if (task_on_lamp) {
    v_100 = v_97;
  } else {
    v_100 = v_99;
  };
  if (task_c_lamp1) {
    sub_73 = sub_71;
  } else {
    sub_73 = sub_61;
  };
  if (task_c_lamp2) {
    sub_60 = v_100;
  } else {
    sub_60 = sub_73;
  };
  sub_59 = sub_60;
  if (task_ck_23_1) {
    v_102 = sub_59;
    v_101 = false;
  } else {
    v_102 = false;
    v_101 = sub_59;
  };
  if (task_push_door) {
    v_103 = v_101;
  } else {
    v_103 = v_102;
  };
  if (task_c_door) {
    sub_58 = v_103;
  } else {
    sub_58 = sub_59;
  };
  if (task_v_419) {
    sub_57 = sub_58;
  } else {
    sub_57 = sub_56;
  };
  if (task_confort) {
    v_107 = sub_57;
  } else {
    v_107 = sub_58;
  };
  if (task_eco) {
    sub_54 = sub_55;
  } else {
    sub_54 = v_107;
  };
  if (task_confort) {
    sub_74 = sub_56;
  } else {
    sub_74 = sub_57;
  };
  if (task_v_420) {
    sub_53 = sub_74;
  } else {
    sub_53 = sub_54;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_78 = sub_55;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (task_c4) {
    sub_49 = sub_50;
  } else {
    sub_49 = sub_75;
  };
  if (task_v_362) {
    sub_92 = false;
  } else {
    sub_92 = sub_23;
  };
  if (task_e) {
    v_75 = sub_92;
    sub_91 = sub_23;
  } else {
    v_75 = sub_23;
    sub_91 = sub_92;
  };
  if (task_v_363) {
    sub_90 = v_75;
  } else {
    sub_90 = sub_91;
  };
  if (task_v_364) {
    sub_89 = sub_22;
  } else {
    sub_89 = sub_90;
  };
  if (task_on_tv) {
    v_76 = sub_89;
    sub_88 = false;
  } else {
    v_76 = false;
    sub_88 = sub_89;
  };
  if (task_ck_19_1) {
    v_77 = v_76;
  } else {
    v_77 = sub_88;
  };
  sub_93 = sub_89;
  if (task_ck_19_1) {
    v_79 = sub_93;
  } else {
    v_79 = false;
  };
  if (task_c_tv2) {
    v_80 = false;
    v_78 = v_77;
  } else {
    v_80 = v_79;
    v_78 = sub_93;
  };
  if (task_c_tv1) {
    sub_87 = v_78;
  } else {
    sub_87 = v_80;
  };
  sub_95 = sub_93;
  sub_94 = sub_95;
  if (task_ck_17_1) {
    v_82 = sub_87;
  } else {
    v_82 = sub_94;
  };
  if (task_c_lamp1) {
    v_83 = v_82;
  } else {
    v_83 = sub_87;
  };
  if (task_ck_17_1) {
    sub_86 = sub_94;
  } else {
    sub_86 = sub_87;
  };
  if (task_c_lamp1) {
    v_81 = sub_86;
  } else {
    v_81 = sub_87;
  };
  if (task_on_lamp) {
    v_84 = v_81;
  } else {
    v_84 = v_83;
  };
  if (task_c_lamp1) {
    sub_96 = sub_94;
  } else {
    sub_96 = sub_86;
  };
  if (task_c_lamp2) {
    sub_85 = v_84;
  } else {
    sub_85 = sub_96;
  };
  sub_84 = sub_85;
  if (task_ck_23_1) {
    v_86 = sub_84;
    v_85 = false;
  } else {
    v_86 = false;
    v_85 = sub_84;
  };
  if (task_push_door) {
    v_87 = v_85;
  } else {
    v_87 = v_86;
  };
  if (task_c_door) {
    sub_83 = v_87;
  } else {
    sub_83 = sub_84;
  };
  if (task_v_419) {
    sub_82 = sub_83;
  } else {
    sub_82 = sub_56;
  };
  if (task_confort) {
    v_88 = sub_82;
  } else {
    v_88 = sub_83;
  };
  if (task_eco) {
    sub_81 = sub_55;
  } else {
    sub_81 = v_88;
  };
  if (task_confort) {
    sub_97 = sub_56;
  } else {
    sub_97 = sub_82;
  };
  if (task_v_420) {
    sub_80 = sub_97;
  } else {
    sub_80 = sub_81;
  };
  if (task_finish) {
    v_89 = sub_77;
  } else {
    v_89 = sub_80;
  };
  if (task_temp_ok) {
    sub_79 = sub_76;
  } else {
    sub_79 = v_89;
  };
  if (task_v_311) {
    sub_48 = sub_79;
  } else {
    sub_48 = sub_49;
  };
  sub_98 = sub_50;
  if (task_v_310) {
    sub_47 = sub_98;
  } else {
    sub_47 = sub_48;
  };
  if (task_v_311) {
    sub_99 = sub_98;
  } else {
    sub_99 = sub_49;
  };
  if (task_cold) {
    sub_103 = sub_80;
  } else {
    sub_103 = sub_78;
  };
  sub_102 = sub_103;
  if (task_c4) {
    sub_101 = sub_102;
  } else {
    sub_101 = sub_75;
  };
  if (task_finish) {
    v_74 = sub_77;
  } else {
    v_74 = sub_52;
  };
  if (task_temp_ok) {
    sub_104 = sub_76;
  } else {
    sub_104 = v_74;
  };
  if (task_v_311) {
    sub_100 = sub_104;
  } else {
    sub_100 = sub_101;
  };
  if (task_v_310) {
    v_108 = sub_100;
  } else {
    v_108 = sub_99;
  };
  if (task_v_309) {
    v_109 = v_108;
  } else {
    v_109 = sub_47;
  };
  sub_106 = sub_75;
  if (task_v_311) {
    sub_105 = sub_98;
  } else {
    sub_105 = sub_106;
  };
  if (task_v_310) {
    v_110 = sub_100;
  } else {
    v_110 = sub_105;
  };
  if (task_v_309) {
    v_111 = v_110;
  } else {
    v_111 = sub_47;
  };
  if (task_start) {
    v_112 = v_109;
  } else {
    v_112 = v_111;
  };
  if (task_precense) {
    sub_46 = v_112;
  } else {
    sub_46 = false;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  if (task_v_400) {
    v_135 = sub_5;
    v_133 = sub_43;
  } else {
    v_135 = sub_43;
    v_133 = sub_5;
  };
  if (task_down1) {
    v_134 = v_133;
  } else {
    v_134 = sub_4;
  };
  if (task_c1) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_134;
  };
  sub_2 = sub_3;
  if (task_up2) {
    v_73 = false;
  } else {
    v_73 = sub_45;
  };
  if (task_c2) {
    sub_107 = v_73;
  } else {
    sub_107 = sub_44;
  };
  if (task_v_400) {
    v_136 = sub_107;
  } else {
    v_136 = sub_43;
  };
  if (task_down1) {
    v_137 = v_135;
  } else {
    v_137 = v_136;
  };
  sub_108 = sub_5;
  if (task_c1) {
    v_138 = v_137;
  } else {
    v_138 = sub_108;
  };
  if (task_up2) {
    v_72 = false;
  } else {
    v_72 = sub_7;
  };
  if (task_c2) {
    sub_109 = v_72;
  } else {
    sub_109 = sub_6;
  };
  if (task_v_400) {
    v_139 = sub_107;
  } else {
    v_139 = sub_109;
  };
  if (task_down1) {
    v_140 = sub_5;
  } else {
    v_140 = v_139;
  };
  if (task_c1) {
    v_141 = v_140;
  } else {
    v_141 = sub_108;
  };
  if (task_up1) {
    v_142 = v_138;
  } else {
    v_142 = v_141;
  };
  if (task_v_399) {
    sub_1 = v_142;
  } else {
    sub_1 = sub_2;
  };
  sub_132 = true;
  sub_131 = sub_132;
  sub_130 = sub_131;
  if (task_on_tv) {
    sub_129 = false;
    sub_133 = sub_130;
  } else {
    sub_129 = sub_130;
    sub_133 = false;
  };
  if (task_ck_19_1) {
    v_61 = sub_133;
  } else {
    v_61 = sub_129;
  };
  sub_134 = sub_130;
  if (task_ck_19_1) {
    v_63 = sub_134;
  } else {
    v_63 = false;
  };
  if (task_c_tv2) {
    v_64 = false;
    v_62 = v_61;
  } else {
    v_64 = v_63;
    v_62 = sub_134;
  };
  if (task_c_tv1) {
    sub_128 = v_62;
  } else {
    sub_128 = v_64;
  };
  sub_136 = sub_134;
  sub_135 = sub_136;
  if (task_ck_17_1) {
    v_66 = sub_128;
  } else {
    v_66 = sub_135;
  };
  if (task_c_lamp1) {
    v_67 = v_66;
  } else {
    v_67 = sub_128;
  };
  if (task_ck_17_1) {
    sub_127 = sub_135;
  } else {
    sub_127 = sub_128;
  };
  if (task_c_lamp1) {
    v_65 = sub_127;
  } else {
    v_65 = sub_128;
  };
  if (task_on_lamp) {
    v_68 = v_65;
  } else {
    v_68 = v_67;
  };
  if (task_c_lamp1) {
    sub_137 = sub_135;
  } else {
    sub_137 = sub_127;
  };
  if (task_c_lamp2) {
    sub_126 = v_68;
  } else {
    sub_126 = sub_137;
  };
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  if (task_ck_19_1) {
    v_50 = false;
  } else {
    v_50 = sub_134;
  };
  if (task_c_tv2) {
    v_51 = sub_134;
  } else {
    v_51 = v_50;
  };
  if (task_ck_19_1) {
    v_48 = sub_129;
  } else {
    v_48 = sub_133;
  };
  if (task_c_tv2) {
    v_49 = v_48;
  } else {
    v_49 = false;
  };
  if (task_c_tv1) {
    sub_148 = v_49;
  } else {
    sub_148 = v_51;
  };
  if (task_ck_17_1) {
    v_53 = sub_148;
  } else {
    v_53 = false;
  };
  if (task_c_lamp1) {
    v_54 = v_53;
  } else {
    v_54 = sub_148;
  };
  if (task_ck_17_1) {
    sub_147 = false;
  } else {
    sub_147 = sub_148;
  };
  if (task_c_lamp1) {
    v_52 = sub_147;
  } else {
    v_52 = sub_148;
  };
  if (task_on_lamp) {
    v_55 = v_52;
  } else {
    v_55 = v_54;
  };
  if (task_c_lamp1) {
    sub_149 = false;
  } else {
    sub_149 = sub_147;
  };
  if (task_c_lamp2) {
    sub_146 = v_55;
  } else {
    sub_146 = sub_149;
  };
  if (task_ck_25_1) {
    v_57 = sub_146;
    v_56 = sub_38;
  } else {
    v_57 = sub_38;
    v_56 = sub_146;
  };
  if (task_push_window) {
    sub_145 = v_56;
  } else {
    sub_145 = v_57;
  };
  if (task_ck_23_1) {
    v_59 = sub_145;
    v_58 = false;
  } else {
    v_59 = false;
    v_58 = sub_145;
  };
  if (task_push_door) {
    v_60 = v_58;
  } else {
    v_60 = v_59;
  };
  if (task_c_door) {
    sub_144 = v_60;
  } else {
    sub_144 = sub_145;
  };
  sub_143 = sub_144;
  sub_142 = sub_143;
  sub_141 = sub_142;
  sub_140 = sub_141;
  sub_139 = sub_140;
  sub_138 = sub_139;
  if (task_precense) {
    sub_116 = sub_117;
  } else {
    sub_116 = sub_138;
  };
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  if (task_down2) {
    sub_150 = sub_116;
  } else {
    sub_150 = false;
  };
  if (task_c2) {
    v_69 = false;
  } else {
    v_69 = sub_150;
  };
  if (task_v_400) {
    sub_112 = v_69;
  } else {
    sub_112 = sub_113;
  };
  if (task_ck_25_1) {
    v_38 = sub_126;
    v_37 = sub_18;
  } else {
    v_38 = sub_18;
    v_37 = sub_126;
  };
  if (task_push_window) {
    sub_165 = v_37;
  } else {
    sub_165 = v_38;
  };
  if (task_ck_23_1) {
    v_40 = sub_165;
    v_39 = false;
  } else {
    v_40 = false;
    v_39 = sub_165;
  };
  if (task_push_door) {
    v_41 = v_39;
  } else {
    v_41 = v_40;
  };
  if (task_c_door) {
    sub_164 = v_41;
  } else {
    sub_164 = sub_165;
  };
  sub_163 = sub_164;
  if (task_c3) {
    sub_176 = false;
  } else {
    sub_176 = sub_132;
  };
  if (task_v_362) {
    v_21 = sub_131;
  } else {
    v_21 = sub_176;
  };
  if (task_e) {
    sub_175 = v_21;
  } else {
    sub_175 = false;
  };
  if (task_v_363) {
    sub_174 = false;
  } else {
    sub_174 = sub_175;
  };
  v_20 = !(task_s);
  sub_178 = (v_20||false);
  if (task_v_362) {
    sub_177 = sub_178;
  } else {
    sub_177 = sub_176;
  };
  if (task_v_363) {
    v_22 = sub_177;
  } else {
    v_22 = sub_130;
  };
  if (task_v_364) {
    sub_173 = v_22;
  } else {
    sub_173 = sub_174;
  };
  if (task_on_tv) {
    v_23 = sub_173;
    sub_172 = false;
  } else {
    v_23 = false;
    sub_172 = sub_173;
  };
  if (task_ck_19_1) {
    v_24 = v_23;
  } else {
    v_24 = sub_172;
  };
  sub_179 = sub_173;
  if (task_ck_19_1) {
    v_26 = sub_179;
  } else {
    v_26 = false;
  };
  if (task_c_tv2) {
    v_27 = false;
    v_25 = v_24;
  } else {
    v_27 = v_26;
    v_25 = sub_179;
  };
  if (task_c_tv1) {
    sub_171 = v_25;
  } else {
    sub_171 = v_27;
  };
  sub_181 = sub_179;
  sub_180 = sub_181;
  if (task_ck_17_1) {
    v_29 = sub_171;
  } else {
    v_29 = sub_180;
  };
  if (task_c_lamp1) {
    v_30 = v_29;
  } else {
    v_30 = sub_171;
  };
  if (task_ck_17_1) {
    sub_170 = sub_180;
  } else {
    sub_170 = sub_171;
  };
  if (task_c_lamp1) {
    v_28 = sub_170;
  } else {
    v_28 = sub_171;
  };
  if (task_on_lamp) {
    v_31 = v_28;
  } else {
    v_31 = v_30;
  };
  if (task_c_lamp1) {
    sub_182 = sub_180;
  } else {
    sub_182 = sub_170;
  };
  if (task_c_lamp2) {
    sub_169 = v_31;
  } else {
    sub_169 = sub_182;
  };
  if (task_ck_25_1) {
    v_33 = sub_169;
    v_32 = sub_60;
  } else {
    v_33 = sub_60;
    v_32 = sub_169;
  };
  if (task_push_window) {
    sub_168 = v_32;
  } else {
    sub_168 = v_33;
  };
  if (task_ck_23_1) {
    v_35 = sub_168;
    v_34 = false;
  } else {
    v_35 = false;
    v_34 = sub_168;
  };
  if (task_push_door) {
    v_36 = v_34;
  } else {
    v_36 = v_35;
  };
  if (task_c_door) {
    sub_167 = v_36;
  } else {
    sub_167 = sub_168;
  };
  if (task_v_419) {
    sub_166 = sub_167;
  } else {
    sub_166 = sub_164;
  };
  if (task_confort) {
    v_42 = sub_166;
  } else {
    v_42 = sub_167;
  };
  if (task_eco) {
    sub_162 = sub_163;
  } else {
    sub_162 = v_42;
  };
  if (task_confort) {
    sub_183 = sub_164;
  } else {
    sub_183 = sub_166;
  };
  if (task_v_420) {
    sub_161 = sub_183;
  } else {
    sub_161 = sub_162;
  };
  sub_160 = sub_161;
  sub_159 = sub_160;
  sub_158 = sub_159;
  sub_187 = sub_163;
  sub_186 = sub_187;
  sub_185 = sub_186;
  sub_184 = sub_185;
  if (task_c4) {
    sub_157 = sub_158;
  } else {
    sub_157 = sub_184;
  };
  if (task_v_362) {
    sub_201 = false;
  } else {
    sub_201 = sub_131;
  };
  if (task_e) {
    v_3 = sub_201;
    sub_200 = sub_131;
  } else {
    v_3 = sub_131;
    sub_200 = sub_201;
  };
  if (task_v_363) {
    sub_199 = v_3;
  } else {
    sub_199 = sub_200;
  };
  if (task_v_364) {
    sub_198 = sub_130;
  } else {
    sub_198 = sub_199;
  };
  if (task_on_tv) {
    v_4 = sub_198;
    sub_197 = false;
  } else {
    v_4 = false;
    sub_197 = sub_198;
  };
  if (task_ck_19_1) {
    v_5 = v_4;
  } else {
    v_5 = sub_197;
  };
  sub_202 = sub_198;
  if (task_ck_19_1) {
    v_7 = sub_202;
  } else {
    v_7 = false;
  };
  if (task_c_tv2) {
    v_8 = false;
    v_6 = v_5;
  } else {
    v_8 = v_7;
    v_6 = sub_202;
  };
  if (task_c_tv1) {
    sub_196 = v_6;
  } else {
    sub_196 = v_8;
  };
  sub_204 = sub_202;
  sub_203 = sub_204;
  if (task_ck_17_1) {
    v_10 = sub_196;
  } else {
    v_10 = sub_203;
  };
  if (task_c_lamp1) {
    v_11 = v_10;
  } else {
    v_11 = sub_196;
  };
  if (task_ck_17_1) {
    sub_195 = sub_203;
  } else {
    sub_195 = sub_196;
  };
  if (task_c_lamp1) {
    v_9 = sub_195;
  } else {
    v_9 = sub_196;
  };
  if (task_on_lamp) {
    v_12 = v_9;
  } else {
    v_12 = v_11;
  };
  if (task_c_lamp1) {
    sub_205 = sub_203;
  } else {
    sub_205 = sub_195;
  };
  if (task_c_lamp2) {
    sub_194 = v_12;
  } else {
    sub_194 = sub_205;
  };
  if (task_ck_25_1) {
    v_14 = sub_194;
    v_13 = sub_85;
  } else {
    v_14 = sub_85;
    v_13 = sub_194;
  };
  if (task_push_window) {
    sub_193 = v_13;
  } else {
    sub_193 = v_14;
  };
  if (task_ck_23_1) {
    v_16 = sub_193;
    v_15 = false;
  } else {
    v_16 = false;
    v_15 = sub_193;
  };
  if (task_push_door) {
    v_17 = v_15;
  } else {
    v_17 = v_16;
  };
  if (task_c_door) {
    sub_192 = v_17;
  } else {
    sub_192 = sub_193;
  };
  if (task_v_419) {
    sub_191 = sub_192;
  } else {
    sub_191 = sub_164;
  };
  if (task_confort) {
    v_18 = sub_191;
  } else {
    v_18 = sub_192;
  };
  if (task_eco) {
    sub_190 = sub_163;
  } else {
    sub_190 = v_18;
  };
  if (task_confort) {
    sub_206 = sub_164;
  } else {
    sub_206 = sub_191;
  };
  if (task_v_420) {
    sub_189 = sub_206;
  } else {
    sub_189 = sub_190;
  };
  if (task_finish) {
    v_19 = sub_186;
  } else {
    v_19 = sub_189;
  };
  if (task_temp_ok) {
    sub_188 = sub_185;
  } else {
    sub_188 = v_19;
  };
  if (task_v_311) {
    sub_156 = sub_188;
  } else {
    sub_156 = sub_157;
  };
  sub_207 = sub_158;
  if (task_v_310) {
    sub_155 = sub_207;
  } else {
    sub_155 = sub_156;
  };
  if (task_v_311) {
    sub_208 = sub_207;
  } else {
    sub_208 = sub_157;
  };
  if (task_cold) {
    sub_212 = sub_189;
  } else {
    sub_212 = sub_187;
  };
  sub_211 = sub_212;
  if (task_c4) {
    sub_210 = sub_211;
  } else {
    sub_210 = sub_184;
  };
  if (task_finish) {
    v_2 = sub_186;
  } else {
    v_2 = sub_160;
  };
  if (task_temp_ok) {
    sub_213 = sub_185;
  } else {
    sub_213 = v_2;
  };
  if (task_v_311) {
    sub_209 = sub_213;
  } else {
    sub_209 = sub_210;
  };
  if (task_v_310) {
    v_43 = sub_209;
  } else {
    v_43 = sub_208;
  };
  if (task_v_309) {
    v_44 = v_43;
  } else {
    v_44 = sub_155;
  };
  sub_215 = sub_184;
  if (task_v_311) {
    sub_214 = sub_207;
  } else {
    sub_214 = sub_215;
  };
  if (task_v_310) {
    v_45 = sub_209;
  } else {
    v_45 = sub_214;
  };
  if (task_v_309) {
    v_46 = v_45;
  } else {
    v_46 = sub_155;
  };
  if (task_start) {
    v_47 = v_44;
  } else {
    v_47 = v_46;
  };
  if (task_precense) {
    sub_154 = v_47;
  } else {
    sub_154 = false;
  };
  sub_153 = sub_154;
  sub_152 = sub_153;
  sub_151 = sub_152;
  if (task_v_400) {
    v_143 = sub_113;
    v_70 = sub_151;
  } else {
    v_143 = sub_151;
    v_70 = sub_113;
  };
  if (task_down1) {
    v_71 = v_70;
  } else {
    v_71 = sub_112;
  };
  if (task_c1) {
    sub_111 = sub_112;
  } else {
    sub_111 = v_71;
  };
  sub_110 = sub_111;
  if (task_up2) {
    v_1 = false;
  } else {
    v_1 = sub_153;
  };
  if (task_c2) {
    sub_216 = v_1;
  } else {
    sub_216 = sub_152;
  };
  if (task_v_400) {
    v_144 = sub_216;
  } else {
    v_144 = sub_151;
  };
  if (task_down1) {
    v_145 = v_143;
  } else {
    v_145 = v_144;
  };
  sub_217 = sub_113;
  if (task_c1) {
    v_146 = v_145;
  } else {
    v_146 = sub_217;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_115;
  };
  if (task_c2) {
    sub_218 = v;
  } else {
    sub_218 = sub_114;
  };
  if (task_v_400) {
    v_147 = sub_216;
  } else {
    v_147 = sub_218;
  };
  if (task_down1) {
    v_148 = sub_113;
  } else {
    v_148 = v_147;
  };
  if (task_c1) {
    v_149 = v_148;
  } else {
    v_149 = sub_217;
  };
  if (task_up1) {
    v_150 = v_146;
  } else {
    v_150 = v_149;
  };
  if (task_v_399) {
    v_151 = v_150;
  } else {
    v_151 = sub_110;
  };
  if (p_task_c_window) {
    sub_0 = v_151;
  } else {
    sub_0 = sub_1;
  };
  _out->task_c_window = sub_0;;
}

void Task_controller__task_controller_task_c_door_step(int task_up1,
                                                       int task_down1,
                                                       int task_up2,
                                                       int task_down2,
                                                       int task_s,
                                                       int task_e,
                                                       int task_finish,
                                                       int task_start,
                                                       int task_cold,
                                                       int task_temp_ok,
                                                       int task_eco,
                                                       int task_confort,
                                                       int task_on_lamp,
                                                       int task_on_tv,
                                                       int task_precense,
                                                       int task_push_door,
                                                       int task_push_window,
                                                       int task_v_420,
                                                       int task_v_419,
                                                       int task_pnr_8,
                                                       int task_v_400,
                                                       int task_v_399,
                                                       int task_pnr_7,
                                                       int task_v_364,
                                                       int task_v_363,
                                                       int task_v_362,
                                                       int task_pnr_6,
                                                       int task_v_311,
                                                       int task_v_310,
                                                       int task_v_309,
                                                       int task_pnr_5,
                                                       int task_ck_17_1,
                                                       int task_pnr_4,
                                                       int task_ck_19_1,
                                                       int task_pnr_3,
                                                       int task_ck_21_1,
                                                       int task_pnr_2,
                                                       int task_ck_23_1,
                                                       int task_pnr_1,
                                                       int task_ck_25_1,
                                                       int task_pnr,
                                                       int p_task_c_window,
                                                       int p_task_c_door,
                                                       int p_task_c_tv1,
                                                       int p_task_c_tv2,
                                                       int p_task_c_lamp2,
                                                       int p_task_c_lamp1,
                                                       int p_task_c4,
                                                       int p_task_c3,
                                                       int p_task_c2,
                                                       int p_task_c1,
                                                       int task_c_tv1,
                                                       int task_c_tv2,
                                                       int task_c_lamp2,
                                                       int task_c_lamp1,
                                                       int task_c4,
                                                       int task_c3,
                                                       int task_c2,
                                                       int task_c1,
                                                       Task_controller__task_controller_task_c_door_out* _out) {
  
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
  int v_261;
  int v_260;
  int v_259;
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
  int v_209;
  int v_208;
  int v_207;
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
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
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
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  sub_23 = false;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (task_on_tv) {
    sub_20 = false;
    sub_24 = sub_21;
  } else {
    sub_20 = sub_21;
    sub_24 = false;
  };
  if (task_ck_19_1) {
    v_251 = sub_24;
  } else {
    v_251 = sub_20;
  };
  sub_25 = sub_21;
  if (task_ck_19_1) {
    v_253 = sub_25;
  } else {
    v_253 = false;
  };
  if (task_c_tv2) {
    v_254 = false;
    v_252 = v_251;
  } else {
    v_254 = v_253;
    v_252 = sub_25;
  };
  if (task_c_tv1) {
    sub_19 = v_252;
  } else {
    sub_19 = v_254;
  };
  sub_27 = sub_25;
  sub_26 = sub_27;
  if (task_ck_17_1) {
    v_256 = sub_19;
  } else {
    v_256 = sub_26;
  };
  if (task_c_lamp1) {
    v_257 = v_256;
  } else {
    v_257 = sub_19;
  };
  if (task_ck_17_1) {
    sub_18 = sub_26;
  } else {
    sub_18 = sub_19;
  };
  if (task_c_lamp1) {
    v_255 = sub_18;
  } else {
    v_255 = sub_19;
  };
  if (task_on_lamp) {
    v_258 = v_255;
  } else {
    v_258 = v_257;
  };
  if (task_c_lamp1) {
    sub_28 = sub_26;
  } else {
    sub_28 = sub_18;
  };
  if (task_c_lamp2) {
    sub_17 = v_258;
  } else {
    sub_17 = sub_28;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (task_ck_19_1) {
    v_245 = false;
  } else {
    v_245 = sub_25;
  };
  if (task_c_tv2) {
    v_246 = sub_25;
  } else {
    v_246 = v_245;
  };
  if (task_ck_19_1) {
    v_243 = sub_20;
  } else {
    v_243 = sub_24;
  };
  if (task_c_tv2) {
    v_244 = v_243;
  } else {
    v_244 = false;
  };
  if (task_c_tv1) {
    sub_39 = v_244;
  } else {
    sub_39 = v_246;
  };
  if (task_ck_17_1) {
    v_248 = sub_39;
  } else {
    v_248 = false;
  };
  if (task_c_lamp1) {
    v_249 = v_248;
  } else {
    v_249 = sub_39;
  };
  if (task_ck_17_1) {
    sub_38 = false;
  } else {
    sub_38 = sub_39;
  };
  if (task_c_lamp1) {
    v_247 = sub_38;
  } else {
    v_247 = sub_39;
  };
  if (task_on_lamp) {
    v_250 = v_247;
  } else {
    v_250 = v_249;
  };
  if (task_c_lamp1) {
    sub_40 = false;
  } else {
    sub_40 = sub_38;
  };
  if (task_c_lamp2) {
    sub_37 = v_250;
  } else {
    sub_37 = sub_40;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (task_precense) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_29;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (task_down2) {
    sub_41 = sub_8;
  } else {
    sub_41 = false;
  };
  if (task_c2) {
    v_259 = false;
  } else {
    v_259 = sub_41;
  };
  if (task_v_400) {
    sub_4 = v_259;
  } else {
    sub_4 = sub_5;
  };
  if (task_c3) {
    sub_64 = false;
  } else {
    sub_64 = sub_23;
  };
  if (task_v_362) {
    v_226 = sub_22;
  } else {
    v_226 = sub_64;
  };
  if (task_e) {
    sub_63 = v_226;
  } else {
    sub_63 = false;
  };
  if (task_v_363) {
    sub_62 = false;
  } else {
    sub_62 = sub_63;
  };
  sub_66 = (task_s&&false);
  if (task_v_362) {
    sub_65 = sub_66;
  } else {
    sub_65 = sub_64;
  };
  if (task_v_363) {
    v_227 = sub_65;
  } else {
    v_227 = sub_21;
  };
  if (task_v_364) {
    sub_61 = v_227;
  } else {
    sub_61 = sub_62;
  };
  if (task_on_tv) {
    v_228 = sub_61;
    sub_60 = false;
  } else {
    v_228 = false;
    sub_60 = sub_61;
  };
  if (task_ck_19_1) {
    v_229 = v_228;
  } else {
    v_229 = sub_60;
  };
  sub_67 = sub_61;
  if (task_ck_19_1) {
    v_231 = sub_67;
  } else {
    v_231 = false;
  };
  if (task_c_tv2) {
    v_232 = false;
    v_230 = v_229;
  } else {
    v_232 = v_231;
    v_230 = sub_67;
  };
  if (task_c_tv1) {
    sub_59 = v_230;
  } else {
    sub_59 = v_232;
  };
  sub_69 = sub_67;
  sub_68 = sub_69;
  if (task_ck_17_1) {
    v_234 = sub_59;
  } else {
    v_234 = sub_68;
  };
  if (task_c_lamp1) {
    v_235 = v_234;
  } else {
    v_235 = sub_59;
  };
  if (task_ck_17_1) {
    sub_58 = sub_68;
  } else {
    sub_58 = sub_59;
  };
  if (task_c_lamp1) {
    v_233 = sub_58;
  } else {
    v_233 = sub_59;
  };
  if (task_on_lamp) {
    v_236 = v_233;
  } else {
    v_236 = v_235;
  };
  if (task_c_lamp1) {
    sub_70 = sub_68;
  } else {
    sub_70 = sub_58;
  };
  if (task_c_lamp2) {
    sub_57 = v_236;
  } else {
    sub_57 = sub_70;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  if (task_v_419) {
    sub_54 = sub_55;
  } else {
    sub_54 = sub_15;
  };
  if (task_confort) {
    v_237 = sub_54;
  } else {
    v_237 = sub_55;
  };
  if (task_eco) {
    sub_53 = sub_14;
  } else {
    sub_53 = v_237;
  };
  if (task_confort) {
    sub_71 = sub_15;
  } else {
    sub_71 = sub_54;
  };
  if (task_v_420) {
    sub_52 = sub_71;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  if (task_c4) {
    sub_48 = sub_49;
  } else {
    sub_48 = sub_10;
  };
  if (task_v_362) {
    sub_85 = false;
  } else {
    sub_85 = sub_22;
  };
  if (task_e) {
    v_214 = sub_85;
    sub_84 = sub_22;
  } else {
    v_214 = sub_22;
    sub_84 = sub_85;
  };
  if (task_v_363) {
    sub_83 = v_214;
  } else {
    sub_83 = sub_84;
  };
  if (task_v_364) {
    sub_82 = sub_21;
  } else {
    sub_82 = sub_83;
  };
  if (task_on_tv) {
    v_215 = sub_82;
    sub_81 = false;
  } else {
    v_215 = false;
    sub_81 = sub_82;
  };
  if (task_ck_19_1) {
    v_216 = v_215;
  } else {
    v_216 = sub_81;
  };
  sub_86 = sub_82;
  if (task_ck_19_1) {
    v_218 = sub_86;
  } else {
    v_218 = false;
  };
  if (task_c_tv2) {
    v_219 = false;
    v_217 = v_216;
  } else {
    v_219 = v_218;
    v_217 = sub_86;
  };
  if (task_c_tv1) {
    sub_80 = v_217;
  } else {
    sub_80 = v_219;
  };
  sub_88 = sub_86;
  sub_87 = sub_88;
  if (task_ck_17_1) {
    v_221 = sub_80;
  } else {
    v_221 = sub_87;
  };
  if (task_c_lamp1) {
    v_222 = v_221;
  } else {
    v_222 = sub_80;
  };
  if (task_ck_17_1) {
    sub_79 = sub_87;
  } else {
    sub_79 = sub_80;
  };
  if (task_c_lamp1) {
    v_220 = sub_79;
  } else {
    v_220 = sub_80;
  };
  if (task_on_lamp) {
    v_223 = v_220;
  } else {
    v_223 = v_222;
  };
  if (task_c_lamp1) {
    sub_89 = sub_87;
  } else {
    sub_89 = sub_79;
  };
  if (task_c_lamp2) {
    sub_78 = v_223;
  } else {
    sub_78 = sub_89;
  };
  sub_77 = sub_78;
  sub_76 = sub_77;
  if (task_v_419) {
    sub_75 = sub_76;
  } else {
    sub_75 = sub_15;
  };
  if (task_confort) {
    v_224 = sub_75;
  } else {
    v_224 = sub_76;
  };
  if (task_eco) {
    sub_74 = sub_14;
  } else {
    sub_74 = v_224;
  };
  if (task_confort) {
    sub_90 = sub_15;
  } else {
    sub_90 = sub_75;
  };
  if (task_v_420) {
    sub_73 = sub_90;
  } else {
    sub_73 = sub_74;
  };
  if (task_finish) {
    v_225 = sub_12;
  } else {
    v_225 = sub_73;
  };
  if (task_temp_ok) {
    sub_72 = sub_11;
  } else {
    sub_72 = v_225;
  };
  if (task_v_311) {
    sub_47 = sub_72;
  } else {
    sub_47 = sub_48;
  };
  sub_91 = sub_49;
  if (task_v_310) {
    sub_46 = sub_91;
  } else {
    sub_46 = sub_47;
  };
  if (task_v_311) {
    sub_92 = sub_91;
  } else {
    sub_92 = sub_48;
  };
  if (task_cold) {
    sub_96 = sub_73;
  } else {
    sub_96 = sub_13;
  };
  sub_95 = sub_96;
  if (task_c4) {
    sub_94 = sub_95;
  } else {
    sub_94 = sub_10;
  };
  if (task_finish) {
    v_213 = sub_12;
  } else {
    v_213 = sub_51;
  };
  if (task_temp_ok) {
    sub_97 = sub_11;
  } else {
    sub_97 = v_213;
  };
  if (task_v_311) {
    sub_93 = sub_97;
  } else {
    sub_93 = sub_94;
  };
  if (task_v_310) {
    v_238 = sub_93;
  } else {
    v_238 = sub_92;
  };
  if (task_v_309) {
    v_239 = v_238;
  } else {
    v_239 = sub_46;
  };
  if (task_v_311) {
    sub_98 = sub_91;
  } else {
    sub_98 = sub_9;
  };
  if (task_v_310) {
    v_240 = sub_93;
  } else {
    v_240 = sub_98;
  };
  if (task_v_309) {
    v_241 = v_240;
  } else {
    v_241 = sub_46;
  };
  if (task_start) {
    v_242 = v_239;
  } else {
    v_242 = v_241;
  };
  if (task_precense) {
    sub_45 = v_242;
  } else {
    sub_45 = false;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (task_v_400) {
    v_262 = sub_5;
    v_260 = sub_42;
  } else {
    v_262 = sub_42;
    v_260 = sub_5;
  };
  if (task_down1) {
    v_261 = v_260;
  } else {
    v_261 = sub_4;
  };
  if (task_c1) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_261;
  };
  sub_2 = sub_3;
  if (task_up2) {
    v_212 = false;
  } else {
    v_212 = sub_44;
  };
  if (task_c2) {
    sub_99 = v_212;
  } else {
    sub_99 = sub_43;
  };
  if (task_v_400) {
    v_263 = sub_99;
  } else {
    v_263 = sub_42;
  };
  if (task_down1) {
    v_264 = v_262;
  } else {
    v_264 = v_263;
  };
  sub_100 = sub_5;
  if (task_c1) {
    v_265 = v_264;
  } else {
    v_265 = sub_100;
  };
  if (task_up2) {
    v_211 = false;
  } else {
    v_211 = sub_7;
  };
  if (task_c2) {
    sub_101 = v_211;
  } else {
    sub_101 = sub_6;
  };
  if (task_v_400) {
    v_266 = sub_99;
  } else {
    v_266 = sub_101;
  };
  if (task_down1) {
    v_267 = sub_5;
  } else {
    v_267 = v_266;
  };
  if (task_c1) {
    v_268 = v_267;
  } else {
    v_268 = sub_100;
  };
  if (task_up1) {
    v_269 = v_265;
  } else {
    v_269 = v_268;
  };
  if (task_v_399) {
    sub_1 = v_269;
  } else {
    sub_1 = sub_2;
  };
  sub_123 = true;
  sub_122 = sub_123;
  sub_121 = sub_122;
  if (task_on_tv) {
    sub_120 = false;
    sub_124 = sub_121;
  } else {
    sub_120 = sub_121;
    sub_124 = false;
  };
  if (task_ck_19_1) {
    v_200 = sub_124;
  } else {
    v_200 = sub_120;
  };
  sub_125 = sub_121;
  if (task_ck_19_1) {
    v_202 = sub_125;
  } else {
    v_202 = false;
  };
  if (task_c_tv2) {
    v_203 = false;
    v_201 = v_200;
  } else {
    v_203 = v_202;
    v_201 = sub_125;
  };
  if (task_c_tv1) {
    sub_119 = v_201;
  } else {
    sub_119 = v_203;
  };
  sub_127 = sub_125;
  sub_126 = sub_127;
  if (task_ck_17_1) {
    v_205 = sub_119;
  } else {
    v_205 = sub_126;
  };
  if (task_c_lamp1) {
    v_206 = v_205;
  } else {
    v_206 = sub_119;
  };
  if (task_ck_17_1) {
    sub_118 = sub_126;
  } else {
    sub_118 = sub_119;
  };
  if (task_c_lamp1) {
    v_204 = sub_118;
  } else {
    v_204 = sub_119;
  };
  if (task_on_lamp) {
    v_207 = v_204;
  } else {
    v_207 = v_206;
  };
  if (task_c_lamp1) {
    sub_128 = sub_126;
  } else {
    sub_128 = sub_118;
  };
  if (task_c_lamp2) {
    sub_117 = v_207;
  } else {
    sub_117 = sub_128;
  };
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  if (task_ck_19_1) {
    v_192 = false;
  } else {
    v_192 = sub_125;
  };
  if (task_c_tv2) {
    v_193 = sub_125;
  } else {
    v_193 = v_192;
  };
  if (task_ck_19_1) {
    v_190 = sub_120;
  } else {
    v_190 = sub_124;
  };
  if (task_c_tv2) {
    v_191 = v_190;
  } else {
    v_191 = false;
  };
  if (task_c_tv1) {
    sub_139 = v_191;
  } else {
    sub_139 = v_193;
  };
  if (task_ck_17_1) {
    v_195 = sub_139;
  } else {
    v_195 = false;
  };
  if (task_c_lamp1) {
    v_196 = v_195;
  } else {
    v_196 = sub_139;
  };
  if (task_ck_17_1) {
    sub_138 = false;
  } else {
    sub_138 = sub_139;
  };
  if (task_c_lamp1) {
    v_194 = sub_138;
  } else {
    v_194 = sub_139;
  };
  if (task_on_lamp) {
    v_197 = v_194;
  } else {
    v_197 = v_196;
  };
  if (task_c_lamp1) {
    sub_140 = false;
  } else {
    sub_140 = sub_138;
  };
  if (task_c_lamp2) {
    sub_137 = v_197;
  } else {
    sub_137 = sub_140;
  };
  sub_136 = sub_137;
  if (task_ck_23_1) {
    v_199 = sub_136;
    v_198 = sub_36;
  } else {
    v_199 = sub_36;
    v_198 = sub_136;
  };
  if (task_push_door) {
    sub_135 = v_198;
  } else {
    sub_135 = v_199;
  };
  sub_134 = sub_135;
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  sub_129 = sub_130;
  if (task_precense) {
    sub_108 = sub_109;
  } else {
    sub_108 = sub_129;
  };
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  if (task_down2) {
    sub_141 = sub_108;
  } else {
    sub_141 = false;
  };
  if (task_c2) {
    v_208 = false;
  } else {
    v_208 = sub_141;
  };
  if (task_v_400) {
    sub_104 = v_208;
  } else {
    sub_104 = sub_105;
  };
  if (task_ck_23_1) {
    v_183 = sub_116;
    v_182 = sub_16;
  } else {
    v_183 = sub_16;
    v_182 = sub_116;
  };
  if (task_push_door) {
    sub_155 = v_182;
  } else {
    sub_155 = v_183;
  };
  sub_154 = sub_155;
  if (task_c3) {
    sub_166 = false;
  } else {
    sub_166 = sub_123;
  };
  if (task_v_362) {
    v_169 = sub_122;
  } else {
    v_169 = sub_166;
  };
  if (task_e) {
    sub_165 = v_169;
  } else {
    sub_165 = false;
  };
  if (task_v_363) {
    sub_164 = false;
  } else {
    sub_164 = sub_165;
  };
  v_168 = !(task_s);
  sub_168 = (v_168||false);
  if (task_v_362) {
    sub_167 = sub_168;
  } else {
    sub_167 = sub_166;
  };
  if (task_v_363) {
    v_170 = sub_167;
  } else {
    v_170 = sub_121;
  };
  if (task_v_364) {
    sub_163 = v_170;
  } else {
    sub_163 = sub_164;
  };
  if (task_on_tv) {
    v_171 = sub_163;
    sub_162 = false;
  } else {
    v_171 = false;
    sub_162 = sub_163;
  };
  if (task_ck_19_1) {
    v_172 = v_171;
  } else {
    v_172 = sub_162;
  };
  sub_169 = sub_163;
  if (task_ck_19_1) {
    v_174 = sub_169;
  } else {
    v_174 = false;
  };
  if (task_c_tv2) {
    v_175 = false;
    v_173 = v_172;
  } else {
    v_175 = v_174;
    v_173 = sub_169;
  };
  if (task_c_tv1) {
    sub_161 = v_173;
  } else {
    sub_161 = v_175;
  };
  sub_171 = sub_169;
  sub_170 = sub_171;
  if (task_ck_17_1) {
    v_177 = sub_161;
  } else {
    v_177 = sub_170;
  };
  if (task_c_lamp1) {
    v_178 = v_177;
  } else {
    v_178 = sub_161;
  };
  if (task_ck_17_1) {
    sub_160 = sub_170;
  } else {
    sub_160 = sub_161;
  };
  if (task_c_lamp1) {
    v_176 = sub_160;
  } else {
    v_176 = sub_161;
  };
  if (task_on_lamp) {
    v_179 = v_176;
  } else {
    v_179 = v_178;
  };
  if (task_c_lamp1) {
    sub_172 = sub_170;
  } else {
    sub_172 = sub_160;
  };
  if (task_c_lamp2) {
    sub_159 = v_179;
  } else {
    sub_159 = sub_172;
  };
  sub_158 = sub_159;
  if (task_ck_23_1) {
    v_181 = sub_158;
    v_180 = sub_56;
  } else {
    v_181 = sub_56;
    v_180 = sub_158;
  };
  if (task_push_door) {
    sub_157 = v_180;
  } else {
    sub_157 = v_181;
  };
  if (task_v_419) {
    sub_156 = sub_157;
  } else {
    sub_156 = sub_155;
  };
  if (task_confort) {
    v_184 = sub_156;
  } else {
    v_184 = sub_157;
  };
  if (task_eco) {
    sub_153 = sub_154;
  } else {
    sub_153 = v_184;
  };
  if (task_confort) {
    sub_173 = sub_155;
  } else {
    sub_173 = sub_156;
  };
  if (task_v_420) {
    sub_152 = sub_173;
  } else {
    sub_152 = sub_153;
  };
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  sub_177 = sub_154;
  sub_176 = sub_177;
  sub_175 = sub_176;
  sub_174 = sub_175;
  if (task_c4) {
    sub_148 = sub_149;
  } else {
    sub_148 = sub_174;
  };
  if (task_v_362) {
    sub_191 = false;
  } else {
    sub_191 = sub_122;
  };
  if (task_e) {
    v_154 = sub_191;
    sub_190 = sub_122;
  } else {
    v_154 = sub_122;
    sub_190 = sub_191;
  };
  if (task_v_363) {
    sub_189 = v_154;
  } else {
    sub_189 = sub_190;
  };
  if (task_v_364) {
    sub_188 = sub_121;
  } else {
    sub_188 = sub_189;
  };
  if (task_on_tv) {
    v_155 = sub_188;
    sub_187 = false;
  } else {
    v_155 = false;
    sub_187 = sub_188;
  };
  if (task_ck_19_1) {
    v_156 = v_155;
  } else {
    v_156 = sub_187;
  };
  sub_192 = sub_188;
  if (task_ck_19_1) {
    v_158 = sub_192;
  } else {
    v_158 = false;
  };
  if (task_c_tv2) {
    v_159 = false;
    v_157 = v_156;
  } else {
    v_159 = v_158;
    v_157 = sub_192;
  };
  if (task_c_tv1) {
    sub_186 = v_157;
  } else {
    sub_186 = v_159;
  };
  sub_194 = sub_192;
  sub_193 = sub_194;
  if (task_ck_17_1) {
    v_161 = sub_186;
  } else {
    v_161 = sub_193;
  };
  if (task_c_lamp1) {
    v_162 = v_161;
  } else {
    v_162 = sub_186;
  };
  if (task_ck_17_1) {
    sub_185 = sub_193;
  } else {
    sub_185 = sub_186;
  };
  if (task_c_lamp1) {
    v_160 = sub_185;
  } else {
    v_160 = sub_186;
  };
  if (task_on_lamp) {
    v_163 = v_160;
  } else {
    v_163 = v_162;
  };
  if (task_c_lamp1) {
    sub_195 = sub_193;
  } else {
    sub_195 = sub_185;
  };
  if (task_c_lamp2) {
    sub_184 = v_163;
  } else {
    sub_184 = sub_195;
  };
  sub_183 = sub_184;
  if (task_ck_23_1) {
    v_165 = sub_183;
    v_164 = sub_77;
  } else {
    v_165 = sub_77;
    v_164 = sub_183;
  };
  if (task_push_door) {
    sub_182 = v_164;
  } else {
    sub_182 = v_165;
  };
  if (task_v_419) {
    sub_181 = sub_182;
  } else {
    sub_181 = sub_155;
  };
  if (task_confort) {
    v_166 = sub_181;
  } else {
    v_166 = sub_182;
  };
  if (task_eco) {
    sub_180 = sub_154;
  } else {
    sub_180 = v_166;
  };
  if (task_confort) {
    sub_196 = sub_155;
  } else {
    sub_196 = sub_181;
  };
  if (task_v_420) {
    sub_179 = sub_196;
  } else {
    sub_179 = sub_180;
  };
  if (task_finish) {
    v_167 = sub_176;
  } else {
    v_167 = sub_179;
  };
  if (task_temp_ok) {
    sub_178 = sub_175;
  } else {
    sub_178 = v_167;
  };
  if (task_v_311) {
    sub_147 = sub_178;
  } else {
    sub_147 = sub_148;
  };
  sub_197 = sub_149;
  if (task_v_310) {
    sub_146 = sub_197;
  } else {
    sub_146 = sub_147;
  };
  if (task_v_311) {
    sub_198 = sub_197;
  } else {
    sub_198 = sub_148;
  };
  if (task_cold) {
    sub_202 = sub_179;
  } else {
    sub_202 = sub_177;
  };
  sub_201 = sub_202;
  if (task_c4) {
    sub_200 = sub_201;
  } else {
    sub_200 = sub_174;
  };
  if (task_finish) {
    v_153 = sub_176;
  } else {
    v_153 = sub_151;
  };
  if (task_temp_ok) {
    sub_203 = sub_175;
  } else {
    sub_203 = v_153;
  };
  if (task_v_311) {
    sub_199 = sub_203;
  } else {
    sub_199 = sub_200;
  };
  if (task_v_310) {
    v_185 = sub_199;
  } else {
    v_185 = sub_198;
  };
  if (task_v_309) {
    v_186 = v_185;
  } else {
    v_186 = sub_146;
  };
  sub_205 = sub_174;
  if (task_v_311) {
    sub_204 = sub_197;
  } else {
    sub_204 = sub_205;
  };
  if (task_v_310) {
    v_187 = sub_199;
  } else {
    v_187 = sub_204;
  };
  if (task_v_309) {
    v_188 = v_187;
  } else {
    v_188 = sub_146;
  };
  if (task_start) {
    v_189 = v_186;
  } else {
    v_189 = v_188;
  };
  if (task_precense) {
    sub_145 = v_189;
  } else {
    sub_145 = false;
  };
  sub_144 = sub_145;
  sub_143 = sub_144;
  sub_142 = sub_143;
  if (task_v_400) {
    v_270 = sub_105;
    v_209 = sub_142;
  } else {
    v_270 = sub_142;
    v_209 = sub_105;
  };
  if (task_down1) {
    v_210 = v_209;
  } else {
    v_210 = sub_104;
  };
  if (task_c1) {
    sub_103 = sub_104;
  } else {
    sub_103 = v_210;
  };
  sub_102 = sub_103;
  if (task_up2) {
    v_152 = false;
  } else {
    v_152 = sub_144;
  };
  if (task_c2) {
    sub_206 = v_152;
  } else {
    sub_206 = sub_143;
  };
  if (task_v_400) {
    v_271 = sub_206;
  } else {
    v_271 = sub_142;
  };
  if (task_down1) {
    v_272 = v_270;
  } else {
    v_272 = v_271;
  };
  sub_207 = sub_105;
  if (task_c1) {
    v_273 = v_272;
  } else {
    v_273 = sub_207;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_107;
  };
  if (task_c2) {
    sub_208 = v;
  } else {
    sub_208 = sub_106;
  };
  if (task_v_400) {
    v_274 = sub_206;
  } else {
    v_274 = sub_208;
  };
  if (task_down1) {
    v_275 = sub_105;
  } else {
    v_275 = v_274;
  };
  if (task_c1) {
    v_276 = v_275;
  } else {
    v_276 = sub_207;
  };
  if (task_up1) {
    v_277 = v_273;
  } else {
    v_277 = v_276;
  };
  if (task_v_399) {
    v_278 = v_277;
  } else {
    v_278 = sub_102;
  };
  if (p_task_c_door) {
    sub_0 = v_278;
  } else {
    sub_0 = sub_1;
  };
  _out->task_c_door = sub_0;;
}

void Task_controller__task_controller_task_c_tv1_step(int task_up1,
                                                      int task_down1,
                                                      int task_up2,
                                                      int task_down2,
                                                      int task_s, int task_e,
                                                      int task_finish,
                                                      int task_start,
                                                      int task_cold,
                                                      int task_temp_ok,
                                                      int task_eco,
                                                      int task_confort,
                                                      int task_on_lamp,
                                                      int task_on_tv,
                                                      int task_precense,
                                                      int task_push_door,
                                                      int task_push_window,
                                                      int task_v_420,
                                                      int task_v_419,
                                                      int task_pnr_8,
                                                      int task_v_400,
                                                      int task_v_399,
                                                      int task_pnr_7,
                                                      int task_v_364,
                                                      int task_v_363,
                                                      int task_v_362,
                                                      int task_pnr_6,
                                                      int task_v_311,
                                                      int task_v_310,
                                                      int task_v_309,
                                                      int task_pnr_5,
                                                      int task_ck_17_1,
                                                      int task_pnr_4,
                                                      int task_ck_19_1,
                                                      int task_pnr_3,
                                                      int task_ck_21_1,
                                                      int task_pnr_2,
                                                      int task_ck_23_1,
                                                      int task_pnr_1,
                                                      int task_ck_25_1,
                                                      int task_pnr,
                                                      int p_task_c_window,
                                                      int p_task_c_door,
                                                      int p_task_c_tv1,
                                                      int p_task_c_tv2,
                                                      int p_task_c_lamp2,
                                                      int p_task_c_lamp1,
                                                      int p_task_c4,
                                                      int p_task_c3,
                                                      int p_task_c2,
                                                      int p_task_c1,
                                                      int task_c_tv2,
                                                      int task_c_lamp2,
                                                      int task_c_lamp1,
                                                      int task_c4,
                                                      int task_c3,
                                                      int task_c2,
                                                      int task_c1,
                                                      Task_controller__task_controller_task_c_tv1_out* _out) {
  
  int v_369;
  int v_368;
  int v_367;
  int v_366;
  int v_365;
  int v_364;
  int v_363;
  int v_362;
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
  int v_311;
  int v_310;
  int v_309;
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
  int v_283;
  int v_282;
  int v_281;
  int v_280;
  int v_279;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  sub_24 = true;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (task_on_tv) {
    v_344 = sub_22;
    sub_21 = false;
  } else {
    v_344 = false;
    sub_21 = sub_22;
  };
  if (task_ck_19_1) {
    sub_20 = v_344;
  } else {
    sub_20 = sub_21;
  };
  sub_25 = sub_22;
  sub_29 = false;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (task_ck_19_1) {
    v_345 = sub_26;
  } else {
    v_345 = sub_25;
  };
  if (task_c_tv2) {
    sub_19 = sub_20;
  } else {
    sub_19 = v_345;
  };
  sub_30 = sub_26;
  if (task_ck_17_1) {
    v_347 = sub_19;
  } else {
    v_347 = sub_30;
  };
  if (task_c_lamp1) {
    v_348 = v_347;
  } else {
    v_348 = sub_19;
  };
  if (task_ck_17_1) {
    sub_18 = sub_30;
  } else {
    sub_18 = sub_19;
  };
  if (task_c_lamp1) {
    v_346 = sub_18;
  } else {
    v_346 = sub_19;
  };
  if (task_on_lamp) {
    v_349 = v_346;
  } else {
    v_349 = v_348;
  };
  if (task_c_lamp1) {
    sub_31 = sub_30;
  } else {
    sub_31 = sub_18;
  };
  if (task_c_lamp2) {
    sub_17 = v_349;
  } else {
    sub_17 = sub_31;
  };
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  if (task_ck_19_1) {
    sub_43 = false;
  } else {
    sub_43 = sub_26;
  };
  if (task_c_tv2) {
    sub_42 = sub_26;
  } else {
    sub_42 = sub_43;
  };
  if (task_ck_17_1) {
    v_341 = sub_42;
  } else {
    v_341 = false;
  };
  if (task_c_lamp1) {
    v_342 = v_341;
  } else {
    v_342 = sub_42;
  };
  if (task_ck_17_1) {
    sub_41 = false;
  } else {
    sub_41 = sub_42;
  };
  if (task_c_lamp1) {
    v_340 = sub_41;
  } else {
    v_340 = sub_42;
  };
  if (task_on_lamp) {
    v_343 = v_340;
  } else {
    v_343 = v_342;
  };
  if (task_c_lamp1) {
    sub_44 = false;
  } else {
    sub_44 = sub_41;
  };
  if (task_c_lamp2) {
    sub_40 = v_343;
  } else {
    sub_40 = sub_44;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (task_precense) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_32;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (task_down2) {
    sub_45 = sub_8;
  } else {
    sub_45 = false;
  };
  if (task_c2) {
    v_350 = false;
  } else {
    v_350 = sub_45;
  };
  if (task_v_400) {
    sub_4 = v_350;
  } else {
    sub_4 = sub_5;
  };
  if (task_c3) {
    sub_69 = false;
  } else {
    sub_69 = sub_24;
  };
  if (task_v_362) {
    v_326 = sub_23;
  } else {
    v_326 = sub_69;
  };
  if (task_e) {
    sub_68 = v_326;
  } else {
    sub_68 = false;
  };
  if (task_v_363) {
    sub_67 = false;
  } else {
    sub_67 = sub_68;
  };
  v_325 = !(task_s);
  sub_71 = (v_325||false);
  if (task_v_362) {
    sub_70 = sub_71;
  } else {
    sub_70 = sub_69;
  };
  if (task_v_363) {
    v_327 = sub_70;
  } else {
    v_327 = sub_22;
  };
  if (task_v_364) {
    sub_66 = v_327;
  } else {
    sub_66 = sub_67;
  };
  if (task_on_tv) {
    v_328 = sub_66;
    sub_65 = false;
  } else {
    v_328 = false;
    sub_65 = sub_66;
  };
  if (task_ck_19_1) {
    sub_64 = v_328;
  } else {
    sub_64 = sub_65;
  };
  sub_72 = sub_66;
  if (task_c3) {
    sub_77 = false;
  } else {
    sub_77 = sub_29;
  };
  if (task_v_362) {
    v_323 = sub_28;
  } else {
    v_323 = sub_77;
  };
  if (task_e) {
    sub_76 = v_323;
  } else {
    sub_76 = false;
  };
  if (task_v_363) {
    sub_75 = false;
  } else {
    sub_75 = sub_76;
  };
  sub_79 = (task_s&&false);
  if (task_v_362) {
    sub_78 = sub_79;
  } else {
    sub_78 = sub_77;
  };
  if (task_v_363) {
    v_324 = sub_78;
  } else {
    v_324 = sub_27;
  };
  if (task_v_364) {
    sub_74 = v_324;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  if (task_ck_19_1) {
    v_329 = sub_73;
  } else {
    v_329 = sub_72;
  };
  if (task_c_tv2) {
    sub_63 = sub_64;
  } else {
    sub_63 = v_329;
  };
  sub_80 = sub_73;
  if (task_ck_17_1) {
    v_331 = sub_63;
  } else {
    v_331 = sub_80;
  };
  if (task_c_lamp1) {
    v_332 = v_331;
  } else {
    v_332 = sub_63;
  };
  if (task_ck_17_1) {
    sub_62 = sub_80;
  } else {
    sub_62 = sub_63;
  };
  if (task_c_lamp1) {
    v_330 = sub_62;
  } else {
    v_330 = sub_63;
  };
  if (task_on_lamp) {
    v_333 = v_330;
  } else {
    v_333 = v_332;
  };
  if (task_c_lamp1) {
    sub_81 = sub_80;
  } else {
    sub_81 = sub_62;
  };
  if (task_c_lamp2) {
    sub_61 = v_333;
  } else {
    sub_61 = sub_81;
  };
  sub_60 = sub_61;
  sub_59 = sub_60;
  if (task_v_419) {
    sub_58 = sub_59;
  } else {
    sub_58 = sub_15;
  };
  if (task_confort) {
    v_334 = sub_58;
  } else {
    v_334 = sub_59;
  };
  if (task_eco) {
    sub_57 = sub_14;
  } else {
    sub_57 = v_334;
  };
  if (task_confort) {
    sub_82 = sub_15;
  } else {
    sub_82 = sub_58;
  };
  if (task_v_420) {
    sub_56 = sub_82;
  } else {
    sub_56 = sub_57;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (task_c4) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_10;
  };
  if (task_v_362) {
    sub_97 = false;
  } else {
    sub_97 = sub_23;
  };
  if (task_e) {
    v_314 = sub_97;
    sub_96 = sub_23;
  } else {
    v_314 = sub_23;
    sub_96 = sub_97;
  };
  if (task_v_363) {
    sub_95 = v_314;
  } else {
    sub_95 = sub_96;
  };
  if (task_v_364) {
    sub_94 = sub_22;
  } else {
    sub_94 = sub_95;
  };
  if (task_on_tv) {
    v_315 = sub_94;
    sub_93 = false;
  } else {
    v_315 = false;
    sub_93 = sub_94;
  };
  if (task_ck_19_1) {
    sub_92 = v_315;
  } else {
    sub_92 = sub_93;
  };
  sub_98 = sub_94;
  if (task_v_362) {
    sub_103 = false;
  } else {
    sub_103 = sub_28;
  };
  if (task_e) {
    v_313 = sub_103;
    sub_102 = sub_28;
  } else {
    v_313 = sub_28;
    sub_102 = sub_103;
  };
  if (task_v_363) {
    sub_101 = v_313;
  } else {
    sub_101 = sub_102;
  };
  if (task_v_364) {
    sub_100 = sub_27;
  } else {
    sub_100 = sub_101;
  };
  sub_99 = sub_100;
  if (task_ck_19_1) {
    v_316 = sub_99;
  } else {
    v_316 = sub_98;
  };
  if (task_c_tv2) {
    sub_91 = sub_92;
  } else {
    sub_91 = v_316;
  };
  sub_104 = sub_99;
  if (task_ck_17_1) {
    v_318 = sub_91;
  } else {
    v_318 = sub_104;
  };
  if (task_c_lamp1) {
    v_319 = v_318;
  } else {
    v_319 = sub_91;
  };
  if (task_ck_17_1) {
    sub_90 = sub_104;
  } else {
    sub_90 = sub_91;
  };
  if (task_c_lamp1) {
    v_317 = sub_90;
  } else {
    v_317 = sub_91;
  };
  if (task_on_lamp) {
    v_320 = v_317;
  } else {
    v_320 = v_319;
  };
  if (task_c_lamp1) {
    sub_105 = sub_104;
  } else {
    sub_105 = sub_90;
  };
  if (task_c_lamp2) {
    sub_89 = v_320;
  } else {
    sub_89 = sub_105;
  };
  sub_88 = sub_89;
  sub_87 = sub_88;
  if (task_v_419) {
    sub_86 = sub_87;
  } else {
    sub_86 = sub_15;
  };
  if (task_confort) {
    v_321 = sub_86;
  } else {
    v_321 = sub_87;
  };
  if (task_eco) {
    sub_85 = sub_14;
  } else {
    sub_85 = v_321;
  };
  if (task_confort) {
    sub_106 = sub_15;
  } else {
    sub_106 = sub_86;
  };
  if (task_v_420) {
    sub_84 = sub_106;
  } else {
    sub_84 = sub_85;
  };
  if (task_finish) {
    v_322 = sub_12;
  } else {
    v_322 = sub_84;
  };
  if (task_temp_ok) {
    sub_83 = sub_11;
  } else {
    sub_83 = v_322;
  };
  if (task_v_311) {
    sub_51 = sub_83;
  } else {
    sub_51 = sub_52;
  };
  sub_107 = sub_53;
  if (task_v_310) {
    sub_50 = sub_107;
  } else {
    sub_50 = sub_51;
  };
  if (task_v_311) {
    sub_108 = sub_107;
  } else {
    sub_108 = sub_52;
  };
  if (task_cold) {
    sub_112 = sub_84;
  } else {
    sub_112 = sub_13;
  };
  sub_111 = sub_112;
  if (task_c4) {
    sub_110 = sub_111;
  } else {
    sub_110 = sub_10;
  };
  if (task_finish) {
    v_312 = sub_12;
  } else {
    v_312 = sub_55;
  };
  if (task_temp_ok) {
    sub_113 = sub_11;
  } else {
    sub_113 = v_312;
  };
  if (task_v_311) {
    sub_109 = sub_113;
  } else {
    sub_109 = sub_110;
  };
  if (task_v_310) {
    v_335 = sub_109;
  } else {
    v_335 = sub_108;
  };
  if (task_v_309) {
    v_336 = v_335;
  } else {
    v_336 = sub_50;
  };
  if (task_v_311) {
    sub_114 = sub_107;
  } else {
    sub_114 = sub_9;
  };
  if (task_v_310) {
    v_337 = sub_109;
  } else {
    v_337 = sub_114;
  };
  if (task_v_309) {
    v_338 = v_337;
  } else {
    v_338 = sub_50;
  };
  if (task_start) {
    v_339 = v_336;
  } else {
    v_339 = v_338;
  };
  if (task_precense) {
    sub_49 = v_339;
  } else {
    sub_49 = false;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  if (task_v_400) {
    v_353 = sub_5;
    v_351 = sub_46;
  } else {
    v_353 = sub_46;
    v_351 = sub_5;
  };
  if (task_down1) {
    v_352 = v_351;
  } else {
    v_352 = sub_4;
  };
  if (task_c1) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_352;
  };
  sub_2 = sub_3;
  if (task_up2) {
    v_311 = false;
  } else {
    v_311 = sub_48;
  };
  if (task_c2) {
    sub_115 = v_311;
  } else {
    sub_115 = sub_47;
  };
  if (task_v_400) {
    v_354 = sub_115;
  } else {
    v_354 = sub_46;
  };
  if (task_down1) {
    v_355 = v_353;
  } else {
    v_355 = v_354;
  };
  sub_116 = sub_5;
  if (task_c1) {
    v_356 = v_355;
  } else {
    v_356 = sub_116;
  };
  if (task_up2) {
    v_310 = false;
  } else {
    v_310 = sub_7;
  };
  if (task_c2) {
    sub_117 = v_310;
  } else {
    sub_117 = sub_6;
  };
  if (task_v_400) {
    v_357 = sub_115;
  } else {
    v_357 = sub_117;
  };
  if (task_down1) {
    v_358 = sub_5;
  } else {
    v_358 = v_357;
  };
  if (task_c1) {
    v_359 = v_358;
  } else {
    v_359 = sub_116;
  };
  if (task_up1) {
    v_360 = v_356;
  } else {
    v_360 = v_359;
  };
  if (task_v_399) {
    sub_1 = v_360;
  } else {
    sub_1 = sub_2;
  };
  if (task_c_tv2) {
    sub_135 = sub_20;
  } else {
    sub_135 = sub_25;
  };
  sub_136 = sub_25;
  if (task_ck_17_1) {
    v_304 = sub_135;
  } else {
    v_304 = sub_136;
  };
  if (task_c_lamp1) {
    v_305 = v_304;
  } else {
    v_305 = sub_135;
  };
  if (task_ck_17_1) {
    sub_134 = sub_136;
  } else {
    sub_134 = sub_135;
  };
  if (task_c_lamp1) {
    v_303 = sub_134;
  } else {
    v_303 = sub_135;
  };
  if (task_on_lamp) {
    v_306 = v_303;
  } else {
    v_306 = v_305;
  };
  if (task_c_lamp1) {
    sub_137 = sub_136;
  } else {
    sub_137 = sub_134;
  };
  if (task_c_lamp2) {
    sub_133 = v_306;
  } else {
    sub_133 = sub_137;
  };
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  sub_129 = sub_130;
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  sub_125 = sub_126;
  if (task_on_tv) {
    v_297 = sub_27;
    sub_149 = sub_22;
  } else {
    v_297 = sub_22;
    sub_149 = sub_27;
  };
  if (task_ck_19_1) {
    v_298 = v_297;
  } else {
    v_298 = sub_149;
  };
  if (task_c_tv2) {
    sub_148 = v_298;
  } else {
    sub_148 = sub_43;
  };
  if (task_ck_17_1) {
    v_300 = sub_148;
  } else {
    v_300 = false;
  };
  if (task_c_lamp1) {
    v_301 = v_300;
  } else {
    v_301 = sub_148;
  };
  if (task_ck_17_1) {
    sub_147 = false;
  } else {
    sub_147 = sub_148;
  };
  if (task_c_lamp1) {
    v_299 = sub_147;
  } else {
    v_299 = sub_148;
  };
  if (task_on_lamp) {
    v_302 = v_299;
  } else {
    v_302 = v_301;
  };
  if (task_c_lamp1) {
    sub_150 = false;
  } else {
    sub_150 = sub_147;
  };
  if (task_c_lamp2) {
    sub_146 = v_302;
  } else {
    sub_146 = sub_150;
  };
  sub_145 = sub_146;
  sub_144 = sub_145;
  sub_143 = sub_144;
  sub_142 = sub_143;
  sub_141 = sub_142;
  sub_140 = sub_141;
  sub_139 = sub_140;
  sub_138 = sub_139;
  if (task_precense) {
    sub_124 = sub_125;
  } else {
    sub_124 = sub_138;
  };
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  if (task_down2) {
    sub_151 = sub_124;
  } else {
    sub_151 = false;
  };
  if (task_c2) {
    v_307 = false;
  } else {
    v_307 = sub_151;
  };
  if (task_v_400) {
    sub_120 = v_307;
  } else {
    sub_120 = sub_121;
  };
  if (task_c_tv2) {
    sub_169 = sub_64;
  } else {
    sub_169 = sub_72;
  };
  sub_170 = sub_72;
  if (task_ck_17_1) {
    v_288 = sub_169;
  } else {
    v_288 = sub_170;
  };
  if (task_c_lamp1) {
    v_289 = v_288;
  } else {
    v_289 = sub_169;
  };
  if (task_ck_17_1) {
    sub_168 = sub_170;
  } else {
    sub_168 = sub_169;
  };
  if (task_c_lamp1) {
    v_287 = sub_168;
  } else {
    v_287 = sub_169;
  };
  if (task_on_lamp) {
    v_290 = v_287;
  } else {
    v_290 = v_289;
  };
  if (task_c_lamp1) {
    sub_171 = sub_170;
  } else {
    sub_171 = sub_168;
  };
  if (task_c_lamp2) {
    sub_167 = v_290;
  } else {
    sub_167 = sub_171;
  };
  sub_166 = sub_167;
  sub_165 = sub_166;
  if (task_v_419) {
    sub_164 = sub_165;
  } else {
    sub_164 = sub_131;
  };
  if (task_confort) {
    v_291 = sub_164;
  } else {
    v_291 = sub_165;
  };
  if (task_eco) {
    sub_163 = sub_130;
  } else {
    sub_163 = v_291;
  };
  if (task_confort) {
    sub_172 = sub_131;
  } else {
    sub_172 = sub_164;
  };
  if (task_v_420) {
    sub_162 = sub_172;
  } else {
    sub_162 = sub_163;
  };
  sub_161 = sub_162;
  sub_160 = sub_161;
  sub_159 = sub_160;
  if (task_c4) {
    sub_158 = sub_159;
  } else {
    sub_158 = sub_126;
  };
  if (task_c_tv2) {
    sub_181 = sub_92;
  } else {
    sub_181 = sub_98;
  };
  sub_182 = sub_98;
  if (task_ck_17_1) {
    v_282 = sub_181;
  } else {
    v_282 = sub_182;
  };
  if (task_c_lamp1) {
    v_283 = v_282;
  } else {
    v_283 = sub_181;
  };
  if (task_ck_17_1) {
    sub_180 = sub_182;
  } else {
    sub_180 = sub_181;
  };
  if (task_c_lamp1) {
    v_281 = sub_180;
  } else {
    v_281 = sub_181;
  };
  if (task_on_lamp) {
    v_284 = v_281;
  } else {
    v_284 = v_283;
  };
  if (task_c_lamp1) {
    sub_183 = sub_182;
  } else {
    sub_183 = sub_180;
  };
  if (task_c_lamp2) {
    sub_179 = v_284;
  } else {
    sub_179 = sub_183;
  };
  sub_178 = sub_179;
  sub_177 = sub_178;
  if (task_v_419) {
    sub_176 = sub_177;
  } else {
    sub_176 = sub_131;
  };
  if (task_confort) {
    v_285 = sub_176;
  } else {
    v_285 = sub_177;
  };
  if (task_eco) {
    sub_175 = sub_130;
  } else {
    sub_175 = v_285;
  };
  if (task_confort) {
    sub_184 = sub_131;
  } else {
    sub_184 = sub_176;
  };
  if (task_v_420) {
    sub_174 = sub_184;
  } else {
    sub_174 = sub_175;
  };
  if (task_finish) {
    v_286 = sub_128;
  } else {
    v_286 = sub_174;
  };
  if (task_temp_ok) {
    sub_173 = sub_127;
  } else {
    sub_173 = v_286;
  };
  if (task_v_311) {
    sub_157 = sub_173;
  } else {
    sub_157 = sub_158;
  };
  sub_185 = sub_159;
  if (task_v_310) {
    sub_156 = sub_185;
  } else {
    sub_156 = sub_157;
  };
  if (task_v_311) {
    sub_186 = sub_185;
  } else {
    sub_186 = sub_158;
  };
  if (task_cold) {
    sub_190 = sub_174;
  } else {
    sub_190 = sub_129;
  };
  sub_189 = sub_190;
  if (task_c4) {
    sub_188 = sub_189;
  } else {
    sub_188 = sub_126;
  };
  if (task_finish) {
    v_280 = sub_128;
  } else {
    v_280 = sub_161;
  };
  if (task_temp_ok) {
    sub_191 = sub_127;
  } else {
    sub_191 = v_280;
  };
  if (task_v_311) {
    sub_187 = sub_191;
  } else {
    sub_187 = sub_188;
  };
  if (task_v_310) {
    v_292 = sub_187;
  } else {
    v_292 = sub_186;
  };
  if (task_v_309) {
    v_293 = v_292;
  } else {
    v_293 = sub_156;
  };
  if (task_v_311) {
    sub_192 = sub_185;
  } else {
    sub_192 = sub_125;
  };
  if (task_v_310) {
    v_294 = sub_187;
  } else {
    v_294 = sub_192;
  };
  if (task_v_309) {
    v_295 = v_294;
  } else {
    v_295 = sub_156;
  };
  if (task_start) {
    v_296 = v_293;
  } else {
    v_296 = v_295;
  };
  if (task_precense) {
    sub_155 = v_296;
  } else {
    sub_155 = false;
  };
  sub_154 = sub_155;
  sub_153 = sub_154;
  sub_152 = sub_153;
  if (task_v_400) {
    v_361 = sub_121;
    v_308 = sub_152;
  } else {
    v_361 = sub_152;
    v_308 = sub_121;
  };
  if (task_down1) {
    v_309 = v_308;
  } else {
    v_309 = sub_120;
  };
  if (task_c1) {
    sub_119 = sub_120;
  } else {
    sub_119 = v_309;
  };
  sub_118 = sub_119;
  if (task_up2) {
    v_279 = false;
  } else {
    v_279 = sub_154;
  };
  if (task_c2) {
    sub_193 = v_279;
  } else {
    sub_193 = sub_153;
  };
  if (task_v_400) {
    v_362 = sub_193;
  } else {
    v_362 = sub_152;
  };
  if (task_down1) {
    v_363 = v_361;
  } else {
    v_363 = v_362;
  };
  sub_194 = sub_121;
  if (task_c1) {
    v_364 = v_363;
  } else {
    v_364 = sub_194;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_123;
  };
  if (task_c2) {
    sub_195 = v;
  } else {
    sub_195 = sub_122;
  };
  if (task_v_400) {
    v_365 = sub_193;
  } else {
    v_365 = sub_195;
  };
  if (task_down1) {
    v_366 = sub_121;
  } else {
    v_366 = v_365;
  };
  if (task_c1) {
    v_367 = v_366;
  } else {
    v_367 = sub_194;
  };
  if (task_up1) {
    v_368 = v_364;
  } else {
    v_368 = v_367;
  };
  if (task_v_399) {
    v_369 = v_368;
  } else {
    v_369 = sub_118;
  };
  if (p_task_c_tv1) {
    sub_0 = v_369;
  } else {
    sub_0 = sub_1;
  };
  _out->task_c_tv1 = sub_0;;
}

void Task_controller__task_controller_task_c_tv2_step(int task_up1,
                                                      int task_down1,
                                                      int task_up2,
                                                      int task_down2,
                                                      int task_s, int task_e,
                                                      int task_finish,
                                                      int task_start,
                                                      int task_cold,
                                                      int task_temp_ok,
                                                      int task_eco,
                                                      int task_confort,
                                                      int task_on_lamp,
                                                      int task_on_tv,
                                                      int task_precense,
                                                      int task_push_door,
                                                      int task_push_window,
                                                      int task_v_420,
                                                      int task_v_419,
                                                      int task_pnr_8,
                                                      int task_v_400,
                                                      int task_v_399,
                                                      int task_pnr_7,
                                                      int task_v_364,
                                                      int task_v_363,
                                                      int task_v_362,
                                                      int task_pnr_6,
                                                      int task_v_311,
                                                      int task_v_310,
                                                      int task_v_309,
                                                      int task_pnr_5,
                                                      int task_ck_17_1,
                                                      int task_pnr_4,
                                                      int task_ck_19_1,
                                                      int task_pnr_3,
                                                      int task_ck_21_1,
                                                      int task_pnr_2,
                                                      int task_ck_23_1,
                                                      int task_pnr_1,
                                                      int task_ck_25_1,
                                                      int task_pnr,
                                                      int p_task_c_window,
                                                      int p_task_c_door,
                                                      int p_task_c_tv1,
                                                      int p_task_c_tv2,
                                                      int p_task_c_lamp2,
                                                      int p_task_c_lamp1,
                                                      int p_task_c4,
                                                      int p_task_c3,
                                                      int p_task_c2,
                                                      int p_task_c1,
                                                      int task_c_lamp2,
                                                      int task_c_lamp1,
                                                      int task_c4,
                                                      int task_c3,
                                                      int task_c2,
                                                      int task_c1,
                                                      Task_controller__task_controller_task_c_tv2_out* _out) {
  
  int v_443;
  int v_442;
  int v_441;
  int v_440;
  int v_439;
  int v_438;
  int v_437;
  int v_436;
  int v_435;
  int v_434;
  int v_433;
  int v_432;
  int v_431;
  int v_430;
  int v_429;
  int v_428;
  int v_427;
  int v_426;
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
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
  int v_406;
  int v_405;
  int v_404;
  int v_403;
  int v_402;
  int v_401;
  int v_400;
  int v_399;
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
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  sub_23 = false;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_38 = true;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (task_ck_19_1) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_20;
  };
  if (task_ck_17_1) {
    v_421 = sub_34;
  } else {
    v_421 = false;
  };
  if (task_c_lamp1) {
    v_422 = v_421;
  } else {
    v_422 = sub_34;
  };
  if (task_ck_17_1) {
    sub_33 = false;
  } else {
    sub_33 = sub_34;
  };
  if (task_c_lamp1) {
    v_420 = sub_33;
  } else {
    v_420 = sub_34;
  };
  if (task_on_lamp) {
    v_423 = v_420;
  } else {
    v_423 = v_422;
  };
  if (task_c_lamp1) {
    sub_39 = false;
  } else {
    sub_39 = sub_33;
  };
  if (task_c_lamp2) {
    sub_32 = v_423;
  } else {
    sub_32 = sub_39;
  };
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (task_precense) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_24;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (task_down2) {
    sub_40 = sub_8;
  } else {
    sub_40 = false;
  };
  if (task_c2) {
    v_424 = false;
  } else {
    v_424 = sub_40;
  };
  if (task_v_400) {
    sub_4 = v_424;
  } else {
    sub_4 = sub_5;
  };
  if (task_c3) {
    sub_63 = false;
  } else {
    sub_63 = sub_23;
  };
  if (task_v_362) {
    v_412 = sub_22;
  } else {
    v_412 = sub_63;
  };
  if (task_e) {
    sub_62 = v_412;
  } else {
    sub_62 = false;
  };
  if (task_v_363) {
    sub_61 = false;
  } else {
    sub_61 = sub_62;
  };
  sub_65 = (task_s&&false);
  if (task_v_362) {
    sub_64 = sub_65;
  } else {
    sub_64 = sub_63;
  };
  if (task_v_363) {
    v_413 = sub_64;
  } else {
    v_413 = sub_21;
  };
  if (task_v_364) {
    sub_60 = v_413;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  if (task_v_419) {
    sub_53 = sub_54;
  } else {
    sub_53 = sub_15;
  };
  if (task_confort) {
    v_414 = sub_53;
  } else {
    v_414 = sub_54;
  };
  if (task_eco) {
    sub_52 = sub_14;
  } else {
    sub_52 = v_414;
  };
  if (task_confort) {
    sub_66 = sub_15;
  } else {
    sub_66 = sub_53;
  };
  if (task_v_420) {
    sub_51 = sub_66;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  if (task_c4) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_10;
  };
  if (task_v_362) {
    sub_80 = false;
  } else {
    sub_80 = sub_22;
  };
  if (task_e) {
    v_409 = sub_80;
    sub_79 = sub_22;
  } else {
    v_409 = sub_22;
    sub_79 = sub_80;
  };
  if (task_v_363) {
    sub_78 = v_409;
  } else {
    sub_78 = sub_79;
  };
  if (task_v_364) {
    sub_77 = sub_21;
  } else {
    sub_77 = sub_78;
  };
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  if (task_v_419) {
    sub_70 = sub_71;
  } else {
    sub_70 = sub_15;
  };
  if (task_confort) {
    v_410 = sub_70;
  } else {
    v_410 = sub_71;
  };
  if (task_eco) {
    sub_69 = sub_14;
  } else {
    sub_69 = v_410;
  };
  if (task_confort) {
    sub_81 = sub_15;
  } else {
    sub_81 = sub_70;
  };
  if (task_v_420) {
    sub_68 = sub_81;
  } else {
    sub_68 = sub_69;
  };
  if (task_finish) {
    v_411 = sub_12;
  } else {
    v_411 = sub_68;
  };
  if (task_temp_ok) {
    sub_67 = sub_11;
  } else {
    sub_67 = v_411;
  };
  if (task_v_311) {
    sub_46 = sub_67;
  } else {
    sub_46 = sub_47;
  };
  sub_82 = sub_48;
  if (task_v_310) {
    sub_45 = sub_82;
  } else {
    sub_45 = sub_46;
  };
  if (task_v_311) {
    sub_83 = sub_82;
  } else {
    sub_83 = sub_47;
  };
  if (task_cold) {
    sub_87 = sub_68;
  } else {
    sub_87 = sub_13;
  };
  sub_86 = sub_87;
  if (task_c4) {
    sub_85 = sub_86;
  } else {
    sub_85 = sub_10;
  };
  if (task_finish) {
    v_408 = sub_12;
  } else {
    v_408 = sub_50;
  };
  if (task_temp_ok) {
    sub_88 = sub_11;
  } else {
    sub_88 = v_408;
  };
  if (task_v_311) {
    sub_84 = sub_88;
  } else {
    sub_84 = sub_85;
  };
  if (task_v_310) {
    v_415 = sub_84;
  } else {
    v_415 = sub_83;
  };
  if (task_v_309) {
    v_416 = v_415;
  } else {
    v_416 = sub_45;
  };
  if (task_v_311) {
    sub_89 = sub_82;
  } else {
    sub_89 = sub_9;
  };
  if (task_v_310) {
    v_417 = sub_84;
  } else {
    v_417 = sub_89;
  };
  if (task_v_309) {
    v_418 = v_417;
  } else {
    v_418 = sub_45;
  };
  if (task_start) {
    v_419 = v_416;
  } else {
    v_419 = v_418;
  };
  if (task_precense) {
    sub_44 = v_419;
  } else {
    sub_44 = false;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (task_v_400) {
    v_427 = sub_5;
    v_425 = sub_41;
  } else {
    v_427 = sub_41;
    v_425 = sub_5;
  };
  if (task_down1) {
    v_426 = v_425;
  } else {
    v_426 = sub_4;
  };
  if (task_c1) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_426;
  };
  sub_2 = sub_3;
  if (task_up2) {
    v_407 = false;
  } else {
    v_407 = sub_43;
  };
  if (task_c2) {
    sub_90 = v_407;
  } else {
    sub_90 = sub_42;
  };
  if (task_v_400) {
    v_428 = sub_90;
  } else {
    v_428 = sub_41;
  };
  if (task_down1) {
    v_429 = v_427;
  } else {
    v_429 = v_428;
  };
  sub_91 = sub_5;
  if (task_c1) {
    v_430 = v_429;
  } else {
    v_430 = sub_91;
  };
  if (task_up2) {
    v_406 = false;
  } else {
    v_406 = sub_7;
  };
  if (task_c2) {
    sub_92 = v_406;
  } else {
    sub_92 = sub_6;
  };
  if (task_v_400) {
    v_431 = sub_90;
  } else {
    v_431 = sub_92;
  };
  if (task_down1) {
    v_432 = sub_5;
  } else {
    v_432 = v_431;
  };
  if (task_c1) {
    v_433 = v_432;
  } else {
    v_433 = sub_91;
  };
  if (task_up1) {
    v_434 = v_430;
  } else {
    v_434 = v_433;
  };
  if (task_v_399) {
    sub_1 = v_434;
  } else {
    sub_1 = sub_2;
  };
  if (task_on_tv) {
    v_398 = sub_36;
    sub_111 = sub_21;
  } else {
    v_398 = sub_21;
    sub_111 = sub_36;
  };
  if (task_ck_19_1) {
    sub_110 = v_398;
  } else {
    sub_110 = sub_111;
  };
  if (task_ck_17_1) {
    v_400 = sub_110;
  } else {
    v_400 = sub_35;
  };
  if (task_c_lamp1) {
    v_401 = v_400;
  } else {
    v_401 = sub_110;
  };
  if (task_ck_17_1) {
    sub_109 = sub_35;
  } else {
    sub_109 = sub_110;
  };
  if (task_c_lamp1) {
    v_399 = sub_109;
  } else {
    v_399 = sub_110;
  };
  if (task_on_lamp) {
    v_402 = v_399;
  } else {
    v_402 = v_401;
  };
  if (task_c_lamp1) {
    sub_112 = sub_35;
  } else {
    sub_112 = sub_109;
  };
  if (task_c_lamp2) {
    sub_108 = v_402;
  } else {
    sub_108 = sub_112;
  };
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  if (task_ck_17_1) {
    v_395 = sub_35;
  } else {
    v_395 = false;
  };
  if (task_c_lamp1) {
    v_396 = v_395;
  } else {
    v_396 = sub_35;
  };
  if (task_ck_17_1) {
    sub_122 = false;
  } else {
    sub_122 = sub_35;
  };
  if (task_c_lamp1) {
    v_394 = sub_122;
  } else {
    v_394 = sub_35;
  };
  if (task_on_lamp) {
    v_397 = v_394;
  } else {
    v_397 = v_396;
  };
  if (task_c_lamp1) {
    sub_123 = false;
  } else {
    sub_123 = sub_122;
  };
  if (task_c_lamp2) {
    sub_121 = v_397;
  } else {
    sub_121 = sub_123;
  };
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  if (task_precense) {
    sub_99 = sub_100;
  } else {
    sub_99 = sub_113;
  };
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  if (task_down2) {
    sub_124 = sub_99;
  } else {
    sub_124 = false;
  };
  if (task_c2) {
    v_403 = false;
  } else {
    v_403 = sub_124;
  };
  if (task_v_400) {
    sub_95 = v_403;
  } else {
    sub_95 = sub_96;
  };
  if (task_c3) {
    sub_147 = false;
  } else {
    sub_147 = sub_38;
  };
  if (task_v_362) {
    v_381 = sub_37;
  } else {
    v_381 = sub_147;
  };
  if (task_e) {
    sub_146 = v_381;
  } else {
    sub_146 = false;
  };
  if (task_v_363) {
    sub_145 = false;
  } else {
    sub_145 = sub_146;
  };
  v_380 = !(task_s);
  sub_149 = (v_380||false);
  if (task_v_362) {
    sub_148 = sub_149;
  } else {
    sub_148 = sub_147;
  };
  if (task_v_363) {
    v_382 = sub_148;
  } else {
    v_382 = sub_36;
  };
  if (task_v_364) {
    sub_144 = v_382;
  } else {
    sub_144 = sub_145;
  };
  if (task_on_tv) {
    v_383 = sub_144;
    sub_143 = sub_60;
  } else {
    v_383 = sub_60;
    sub_143 = sub_144;
  };
  if (task_ck_19_1) {
    sub_142 = v_383;
  } else {
    sub_142 = sub_143;
  };
  sub_150 = sub_144;
  if (task_ck_17_1) {
    v_385 = sub_142;
  } else {
    v_385 = sub_150;
  };
  if (task_c_lamp1) {
    v_386 = v_385;
  } else {
    v_386 = sub_142;
  };
  if (task_ck_17_1) {
    sub_141 = sub_150;
  } else {
    sub_141 = sub_142;
  };
  if (task_c_lamp1) {
    v_384 = sub_141;
  } else {
    v_384 = sub_142;
  };
  if (task_on_lamp) {
    v_387 = v_384;
  } else {
    v_387 = v_386;
  };
  if (task_c_lamp1) {
    sub_151 = sub_150;
  } else {
    sub_151 = sub_141;
  };
  if (task_c_lamp2) {
    sub_140 = v_387;
  } else {
    sub_140 = sub_151;
  };
  sub_139 = sub_140;
  sub_138 = sub_139;
  if (task_v_419) {
    sub_137 = sub_138;
  } else {
    sub_137 = sub_106;
  };
  if (task_confort) {
    v_388 = sub_137;
  } else {
    v_388 = sub_138;
  };
  if (task_eco) {
    sub_136 = sub_105;
  } else {
    sub_136 = v_388;
  };
  if (task_confort) {
    sub_152 = sub_106;
  } else {
    sub_152 = sub_137;
  };
  if (task_v_420) {
    sub_135 = sub_152;
  } else {
    sub_135 = sub_136;
  };
  sub_134 = sub_135;
  sub_133 = sub_134;
  sub_132 = sub_133;
  if (task_c4) {
    sub_131 = sub_132;
  } else {
    sub_131 = sub_101;
  };
  if (task_v_362) {
    sub_166 = false;
  } else {
    sub_166 = sub_37;
  };
  if (task_e) {
    v_372 = sub_166;
    sub_165 = sub_37;
  } else {
    v_372 = sub_37;
    sub_165 = sub_166;
  };
  if (task_v_363) {
    sub_164 = v_372;
  } else {
    sub_164 = sub_165;
  };
  if (task_v_364) {
    sub_163 = sub_36;
  } else {
    sub_163 = sub_164;
  };
  if (task_on_tv) {
    v_373 = sub_163;
    sub_162 = sub_77;
  } else {
    v_373 = sub_77;
    sub_162 = sub_163;
  };
  if (task_ck_19_1) {
    sub_161 = v_373;
  } else {
    sub_161 = sub_162;
  };
  sub_167 = sub_163;
  if (task_ck_17_1) {
    v_375 = sub_161;
  } else {
    v_375 = sub_167;
  };
  if (task_c_lamp1) {
    v_376 = v_375;
  } else {
    v_376 = sub_161;
  };
  if (task_ck_17_1) {
    sub_160 = sub_167;
  } else {
    sub_160 = sub_161;
  };
  if (task_c_lamp1) {
    v_374 = sub_160;
  } else {
    v_374 = sub_161;
  };
  if (task_on_lamp) {
    v_377 = v_374;
  } else {
    v_377 = v_376;
  };
  if (task_c_lamp1) {
    sub_168 = sub_167;
  } else {
    sub_168 = sub_160;
  };
  if (task_c_lamp2) {
    sub_159 = v_377;
  } else {
    sub_159 = sub_168;
  };
  sub_158 = sub_159;
  sub_157 = sub_158;
  if (task_v_419) {
    sub_156 = sub_157;
  } else {
    sub_156 = sub_106;
  };
  if (task_confort) {
    v_378 = sub_156;
  } else {
    v_378 = sub_157;
  };
  if (task_eco) {
    sub_155 = sub_105;
  } else {
    sub_155 = v_378;
  };
  if (task_confort) {
    sub_169 = sub_106;
  } else {
    sub_169 = sub_156;
  };
  if (task_v_420) {
    sub_154 = sub_169;
  } else {
    sub_154 = sub_155;
  };
  if (task_finish) {
    v_379 = sub_103;
  } else {
    v_379 = sub_154;
  };
  if (task_temp_ok) {
    sub_153 = sub_102;
  } else {
    sub_153 = v_379;
  };
  if (task_v_311) {
    sub_130 = sub_153;
  } else {
    sub_130 = sub_131;
  };
  sub_170 = sub_132;
  if (task_v_310) {
    sub_129 = sub_170;
  } else {
    sub_129 = sub_130;
  };
  if (task_v_311) {
    sub_171 = sub_170;
  } else {
    sub_171 = sub_131;
  };
  if (task_cold) {
    sub_175 = sub_154;
  } else {
    sub_175 = sub_104;
  };
  sub_174 = sub_175;
  if (task_c4) {
    sub_173 = sub_174;
  } else {
    sub_173 = sub_101;
  };
  if (task_finish) {
    v_371 = sub_103;
  } else {
    v_371 = sub_134;
  };
  if (task_temp_ok) {
    sub_176 = sub_102;
  } else {
    sub_176 = v_371;
  };
  if (task_v_311) {
    sub_172 = sub_176;
  } else {
    sub_172 = sub_173;
  };
  if (task_v_310) {
    v_389 = sub_172;
  } else {
    v_389 = sub_171;
  };
  if (task_v_309) {
    v_390 = v_389;
  } else {
    v_390 = sub_129;
  };
  if (task_v_311) {
    sub_177 = sub_170;
  } else {
    sub_177 = sub_100;
  };
  if (task_v_310) {
    v_391 = sub_172;
  } else {
    v_391 = sub_177;
  };
  if (task_v_309) {
    v_392 = v_391;
  } else {
    v_392 = sub_129;
  };
  if (task_start) {
    v_393 = v_390;
  } else {
    v_393 = v_392;
  };
  if (task_precense) {
    sub_128 = v_393;
  } else {
    sub_128 = false;
  };
  sub_127 = sub_128;
  sub_126 = sub_127;
  sub_125 = sub_126;
  if (task_v_400) {
    v_435 = sub_96;
    v_404 = sub_125;
  } else {
    v_435 = sub_125;
    v_404 = sub_96;
  };
  if (task_down1) {
    v_405 = v_404;
  } else {
    v_405 = sub_95;
  };
  if (task_c1) {
    sub_94 = sub_95;
  } else {
    sub_94 = v_405;
  };
  sub_93 = sub_94;
  if (task_up2) {
    v_370 = false;
  } else {
    v_370 = sub_127;
  };
  if (task_c2) {
    sub_178 = v_370;
  } else {
    sub_178 = sub_126;
  };
  if (task_v_400) {
    v_436 = sub_178;
  } else {
    v_436 = sub_125;
  };
  if (task_down1) {
    v_437 = v_435;
  } else {
    v_437 = v_436;
  };
  sub_179 = sub_96;
  if (task_c1) {
    v_438 = v_437;
  } else {
    v_438 = sub_179;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_98;
  };
  if (task_c2) {
    sub_180 = v;
  } else {
    sub_180 = sub_97;
  };
  if (task_v_400) {
    v_439 = sub_178;
  } else {
    v_439 = sub_180;
  };
  if (task_down1) {
    v_440 = sub_96;
  } else {
    v_440 = v_439;
  };
  if (task_c1) {
    v_441 = v_440;
  } else {
    v_441 = sub_179;
  };
  if (task_up1) {
    v_442 = v_438;
  } else {
    v_442 = v_441;
  };
  if (task_v_399) {
    v_443 = v_442;
  } else {
    v_443 = sub_93;
  };
  if (p_task_c_tv2) {
    sub_0 = v_443;
  } else {
    sub_0 = sub_1;
  };
  _out->task_c_tv2 = sub_0;;
}

void Task_controller__task_controller_task_c_lamp2_step(int task_up1,
                                                        int task_down1,
                                                        int task_up2,
                                                        int task_down2,
                                                        int task_s,
                                                        int task_e,
                                                        int task_finish,
                                                        int task_start,
                                                        int task_cold,
                                                        int task_temp_ok,
                                                        int task_eco,
                                                        int task_confort,
                                                        int task_on_lamp,
                                                        int task_on_tv,
                                                        int task_precense,
                                                        int task_push_door,
                                                        int task_push_window,
                                                        int task_v_420,
                                                        int task_v_419,
                                                        int task_pnr_8,
                                                        int task_v_400,
                                                        int task_v_399,
                                                        int task_pnr_7,
                                                        int task_v_364,
                                                        int task_v_363,
                                                        int task_v_362,
                                                        int task_pnr_6,
                                                        int task_v_311,
                                                        int task_v_310,
                                                        int task_v_309,
                                                        int task_pnr_5,
                                                        int task_ck_17_1,
                                                        int task_pnr_4,
                                                        int task_ck_19_1,
                                                        int task_pnr_3,
                                                        int task_ck_21_1,
                                                        int task_pnr_2,
                                                        int task_ck_23_1,
                                                        int task_pnr_1,
                                                        int task_ck_25_1,
                                                        int task_pnr,
                                                        int p_task_c_window,
                                                        int p_task_c_door,
                                                        int p_task_c_tv1,
                                                        int p_task_c_tv2,
                                                        int p_task_c_lamp2,
                                                        int p_task_c_lamp1,
                                                        int p_task_c4,
                                                        int p_task_c3,
                                                        int p_task_c2,
                                                        int p_task_c1,
                                                        int task_c_lamp1,
                                                        int task_c4,
                                                        int task_c3,
                                                        int task_c2,
                                                        int task_c1,
                                                        Task_controller__task_controller_task_c_lamp2_out* _out) {
  
  int v_498;
  int v_497;
  int v_496;
  int v_495;
  int v_494;
  int v_493;
  int v_492;
  int v_491;
  int v_490;
  int v_489;
  int v_488;
  int v_487;
  int v_486;
  int v_485;
  int v_484;
  int v_483;
  int v_482;
  int v_481;
  int v_480;
  int v_479;
  int v_478;
  int v_477;
  int v_476;
  int v_475;
  int v_474;
  int v_473;
  int v_472;
  int v_471;
  int v_470;
  int v_469;
  int v_468;
  int v_467;
  int v_466;
  int v_465;
  int v_464;
  int v_463;
  int v_462;
  int v_461;
  int v_460;
  int v_459;
  int v_458;
  int v_457;
  int v_456;
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int v_451;
  int v_450;
  int v_449;
  int v_448;
  int v_447;
  int v_446;
  int v_445;
  int v_444;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  sub_22 = false;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_36 = true;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (task_ck_17_1) {
    sub_32 = false;
    sub_37 = sub_33;
  } else {
    sub_32 = sub_33;
    sub_37 = sub_19;
  };
  if (task_c_lamp1) {
    v_477 = sub_32;
  } else {
    v_477 = sub_37;
  };
  if (task_ck_17_1) {
    sub_38 = sub_33;
  } else {
    sub_38 = false;
  };
  if (task_c_lamp1) {
    v_478 = sub_38;
  } else {
    v_478 = sub_37;
  };
  if (task_on_lamp) {
    sub_31 = v_477;
  } else {
    sub_31 = v_478;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (task_precense) {
    sub_8 = sub_9;
  } else {
    sub_8 = sub_23;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (task_down2) {
    sub_39 = sub_8;
  } else {
    sub_39 = false;
  };
  if (task_c2) {
    v_479 = false;
  } else {
    v_479 = sub_39;
  };
  if (task_v_400) {
    sub_4 = v_479;
  } else {
    sub_4 = sub_5;
  };
  if (task_c3) {
    sub_61 = false;
  } else {
    sub_61 = sub_22;
  };
  if (task_v_362) {
    v_469 = sub_21;
  } else {
    v_469 = sub_61;
  };
  if (task_e) {
    sub_60 = v_469;
  } else {
    sub_60 = false;
  };
  if (task_v_363) {
    sub_59 = false;
  } else {
    sub_59 = sub_60;
  };
  sub_63 = (task_s&&false);
  if (task_v_362) {
    sub_62 = sub_63;
  } else {
    sub_62 = sub_61;
  };
  if (task_v_363) {
    v_470 = sub_62;
  } else {
    v_470 = sub_20;
  };
  if (task_v_364) {
    sub_58 = v_470;
  } else {
    sub_58 = sub_59;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  if (task_v_419) {
    sub_52 = sub_53;
  } else {
    sub_52 = sub_15;
  };
  if (task_confort) {
    v_471 = sub_52;
  } else {
    v_471 = sub_53;
  };
  if (task_eco) {
    sub_51 = sub_14;
  } else {
    sub_51 = v_471;
  };
  if (task_confort) {
    sub_64 = sub_15;
  } else {
    sub_64 = sub_52;
  };
  if (task_v_420) {
    sub_50 = sub_64;
  } else {
    sub_50 = sub_51;
  };
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (task_c4) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_10;
  };
  if (task_v_362) {
    sub_77 = false;
  } else {
    sub_77 = sub_21;
  };
  if (task_e) {
    v_466 = sub_77;
    sub_76 = sub_21;
  } else {
    v_466 = sub_21;
    sub_76 = sub_77;
  };
  if (task_v_363) {
    sub_75 = v_466;
  } else {
    sub_75 = sub_76;
  };
  if (task_v_364) {
    sub_74 = sub_20;
  } else {
    sub_74 = sub_75;
  };
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (task_v_419) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_15;
  };
  if (task_confort) {
    v_467 = sub_68;
  } else {
    v_467 = sub_69;
  };
  if (task_eco) {
    sub_67 = sub_14;
  } else {
    sub_67 = v_467;
  };
  if (task_confort) {
    sub_78 = sub_15;
  } else {
    sub_78 = sub_68;
  };
  if (task_v_420) {
    sub_66 = sub_78;
  } else {
    sub_66 = sub_67;
  };
  if (task_finish) {
    v_468 = sub_12;
  } else {
    v_468 = sub_66;
  };
  if (task_temp_ok) {
    sub_65 = sub_11;
  } else {
    sub_65 = v_468;
  };
  if (task_v_311) {
    sub_45 = sub_65;
  } else {
    sub_45 = sub_46;
  };
  sub_79 = sub_47;
  if (task_v_310) {
    sub_44 = sub_79;
  } else {
    sub_44 = sub_45;
  };
  if (task_v_311) {
    sub_80 = sub_79;
  } else {
    sub_80 = sub_46;
  };
  if (task_cold) {
    sub_84 = sub_66;
  } else {
    sub_84 = sub_13;
  };
  sub_83 = sub_84;
  if (task_c4) {
    sub_82 = sub_83;
  } else {
    sub_82 = sub_10;
  };
  if (task_finish) {
    v_465 = sub_12;
  } else {
    v_465 = sub_49;
  };
  if (task_temp_ok) {
    sub_85 = sub_11;
  } else {
    sub_85 = v_465;
  };
  if (task_v_311) {
    sub_81 = sub_85;
  } else {
    sub_81 = sub_82;
  };
  if (task_v_310) {
    v_472 = sub_81;
  } else {
    v_472 = sub_80;
  };
  if (task_v_309) {
    v_473 = v_472;
  } else {
    v_473 = sub_44;
  };
  if (task_v_311) {
    sub_86 = sub_79;
  } else {
    sub_86 = sub_9;
  };
  if (task_v_310) {
    v_474 = sub_81;
  } else {
    v_474 = sub_86;
  };
  if (task_v_309) {
    v_475 = v_474;
  } else {
    v_475 = sub_44;
  };
  if (task_start) {
    v_476 = v_473;
  } else {
    v_476 = v_475;
  };
  if (task_precense) {
    sub_43 = v_476;
  } else {
    sub_43 = false;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  if (task_v_400) {
    v_482 = sub_5;
    v_480 = sub_40;
  } else {
    v_482 = sub_40;
    v_480 = sub_5;
  };
  if (task_down1) {
    v_481 = v_480;
  } else {
    v_481 = sub_4;
  };
  if (task_c1) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_481;
  };
  sub_2 = sub_3;
  if (task_up2) {
    v_464 = false;
  } else {
    v_464 = sub_42;
  };
  if (task_c2) {
    sub_87 = v_464;
  } else {
    sub_87 = sub_41;
  };
  if (task_v_400) {
    v_483 = sub_87;
  } else {
    v_483 = sub_40;
  };
  if (task_down1) {
    v_484 = v_482;
  } else {
    v_484 = v_483;
  };
  sub_88 = sub_5;
  if (task_c1) {
    v_485 = v_484;
  } else {
    v_485 = sub_88;
  };
  if (task_up2) {
    v_463 = false;
  } else {
    v_463 = sub_7;
  };
  if (task_c2) {
    sub_89 = v_463;
  } else {
    sub_89 = sub_6;
  };
  if (task_v_400) {
    v_486 = sub_87;
  } else {
    v_486 = sub_89;
  };
  if (task_down1) {
    v_487 = sub_5;
  } else {
    v_487 = v_486;
  };
  if (task_c1) {
    v_488 = v_487;
  } else {
    v_488 = sub_88;
  };
  if (task_up1) {
    v_489 = v_485;
  } else {
    v_489 = v_488;
  };
  if (task_v_399) {
    sub_1 = v_489;
  } else {
    sub_1 = sub_2;
  };
  sub_106 = sub_33;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  if (task_c_lamp1) {
    v_459 = sub_38;
    v_458 = sub_32;
  } else {
    v_459 = sub_33;
    v_458 = sub_33;
  };
  if (task_on_lamp) {
    sub_115 = v_458;
  } else {
    sub_115 = v_459;
  };
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  if (task_precense) {
    sub_96 = sub_97;
  } else {
    sub_96 = sub_107;
  };
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  if (task_down2) {
    sub_116 = sub_96;
  } else {
    sub_116 = false;
  };
  if (task_c2) {
    v_460 = false;
  } else {
    v_460 = sub_116;
  };
  if (task_v_400) {
    sub_92 = v_460;
  } else {
    sub_92 = sub_93;
  };
  if (task_c3) {
    sub_138 = false;
  } else {
    sub_138 = sub_36;
  };
  if (task_v_362) {
    v_450 = sub_35;
  } else {
    v_450 = sub_138;
  };
  if (task_e) {
    sub_137 = v_450;
  } else {
    sub_137 = false;
  };
  if (task_v_363) {
    sub_136 = false;
  } else {
    sub_136 = sub_137;
  };
  v_449 = !(task_s);
  sub_140 = (v_449||false);
  if (task_v_362) {
    sub_139 = sub_140;
  } else {
    sub_139 = sub_138;
  };
  if (task_v_363) {
    v_451 = sub_139;
  } else {
    v_451 = sub_34;
  };
  if (task_v_364) {
    sub_135 = v_451;
  } else {
    sub_135 = sub_136;
  };
  sub_134 = sub_135;
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  if (task_v_419) {
    sub_129 = sub_130;
  } else {
    sub_129 = sub_103;
  };
  if (task_confort) {
    v_452 = sub_129;
  } else {
    v_452 = sub_130;
  };
  if (task_eco) {
    sub_128 = sub_102;
  } else {
    sub_128 = v_452;
  };
  if (task_confort) {
    sub_141 = sub_103;
  } else {
    sub_141 = sub_129;
  };
  if (task_v_420) {
    sub_127 = sub_141;
  } else {
    sub_127 = sub_128;
  };
  sub_126 = sub_127;
  sub_125 = sub_126;
  sub_124 = sub_125;
  if (task_c4) {
    sub_123 = sub_124;
  } else {
    sub_123 = sub_98;
  };
  if (task_v_362) {
    sub_154 = false;
  } else {
    sub_154 = sub_35;
  };
  if (task_e) {
    v_446 = sub_154;
    sub_153 = sub_35;
  } else {
    v_446 = sub_35;
    sub_153 = sub_154;
  };
  if (task_v_363) {
    sub_152 = v_446;
  } else {
    sub_152 = sub_153;
  };
  if (task_v_364) {
    sub_151 = sub_34;
  } else {
    sub_151 = sub_152;
  };
  sub_150 = sub_151;
  sub_149 = sub_150;
  sub_148 = sub_149;
  sub_147 = sub_148;
  sub_146 = sub_147;
  if (task_v_419) {
    sub_145 = sub_146;
  } else {
    sub_145 = sub_103;
  };
  if (task_confort) {
    v_447 = sub_145;
  } else {
    v_447 = sub_146;
  };
  if (task_eco) {
    sub_144 = sub_102;
  } else {
    sub_144 = v_447;
  };
  if (task_confort) {
    sub_155 = sub_103;
  } else {
    sub_155 = sub_145;
  };
  if (task_v_420) {
    sub_143 = sub_155;
  } else {
    sub_143 = sub_144;
  };
  if (task_finish) {
    v_448 = sub_100;
  } else {
    v_448 = sub_143;
  };
  if (task_temp_ok) {
    sub_142 = sub_99;
  } else {
    sub_142 = v_448;
  };
  if (task_v_311) {
    sub_122 = sub_142;
  } else {
    sub_122 = sub_123;
  };
  sub_156 = sub_124;
  if (task_v_310) {
    sub_121 = sub_156;
  } else {
    sub_121 = sub_122;
  };
  if (task_v_311) {
    sub_157 = sub_156;
  } else {
    sub_157 = sub_123;
  };
  if (task_cold) {
    sub_161 = sub_143;
  } else {
    sub_161 = sub_101;
  };
  sub_160 = sub_161;
  if (task_c4) {
    sub_159 = sub_160;
  } else {
    sub_159 = sub_98;
  };
  if (task_finish) {
    v_445 = sub_100;
  } else {
    v_445 = sub_126;
  };
  if (task_temp_ok) {
    sub_162 = sub_99;
  } else {
    sub_162 = v_445;
  };
  if (task_v_311) {
    sub_158 = sub_162;
  } else {
    sub_158 = sub_159;
  };
  if (task_v_310) {
    v_453 = sub_158;
  } else {
    v_453 = sub_157;
  };
  if (task_v_309) {
    v_454 = v_453;
  } else {
    v_454 = sub_121;
  };
  if (task_v_311) {
    sub_163 = sub_156;
  } else {
    sub_163 = sub_97;
  };
  if (task_v_310) {
    v_455 = sub_158;
  } else {
    v_455 = sub_163;
  };
  if (task_v_309) {
    v_456 = v_455;
  } else {
    v_456 = sub_121;
  };
  if (task_start) {
    v_457 = v_454;
  } else {
    v_457 = v_456;
  };
  if (task_precense) {
    sub_120 = v_457;
  } else {
    sub_120 = false;
  };
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  if (task_v_400) {
    v_490 = sub_93;
    v_461 = sub_117;
  } else {
    v_490 = sub_117;
    v_461 = sub_93;
  };
  if (task_down1) {
    v_462 = v_461;
  } else {
    v_462 = sub_92;
  };
  if (task_c1) {
    sub_91 = sub_92;
  } else {
    sub_91 = v_462;
  };
  sub_90 = sub_91;
  if (task_up2) {
    v_444 = false;
  } else {
    v_444 = sub_119;
  };
  if (task_c2) {
    sub_164 = v_444;
  } else {
    sub_164 = sub_118;
  };
  if (task_v_400) {
    v_491 = sub_164;
  } else {
    v_491 = sub_117;
  };
  if (task_down1) {
    v_492 = v_490;
  } else {
    v_492 = v_491;
  };
  sub_165 = sub_93;
  if (task_c1) {
    v_493 = v_492;
  } else {
    v_493 = sub_165;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_95;
  };
  if (task_c2) {
    sub_166 = v;
  } else {
    sub_166 = sub_94;
  };
  if (task_v_400) {
    v_494 = sub_164;
  } else {
    v_494 = sub_166;
  };
  if (task_down1) {
    v_495 = sub_93;
  } else {
    v_495 = v_494;
  };
  if (task_c1) {
    v_496 = v_495;
  } else {
    v_496 = sub_165;
  };
  if (task_up1) {
    v_497 = v_493;
  } else {
    v_497 = v_496;
  };
  if (task_v_399) {
    v_498 = v_497;
  } else {
    v_498 = sub_90;
  };
  if (p_task_c_lamp2) {
    sub_0 = v_498;
  } else {
    sub_0 = sub_1;
  };
  _out->task_c_lamp2 = sub_0;;
}

void Task_controller__task_controller_task_c_lamp1_step(int task_up1,
                                                        int task_down1,
                                                        int task_up2,
                                                        int task_down2,
                                                        int task_s,
                                                        int task_e,
                                                        int task_finish,
                                                        int task_start,
                                                        int task_cold,
                                                        int task_temp_ok,
                                                        int task_eco,
                                                        int task_confort,
                                                        int task_on_lamp,
                                                        int task_on_tv,
                                                        int task_precense,
                                                        int task_push_door,
                                                        int task_push_window,
                                                        int task_v_420,
                                                        int task_v_419,
                                                        int task_pnr_8,
                                                        int task_v_400,
                                                        int task_v_399,
                                                        int task_pnr_7,
                                                        int task_v_364,
                                                        int task_v_363,
                                                        int task_v_362,
                                                        int task_pnr_6,
                                                        int task_v_311,
                                                        int task_v_310,
                                                        int task_v_309,
                                                        int task_pnr_5,
                                                        int task_ck_17_1,
                                                        int task_pnr_4,
                                                        int task_ck_19_1,
                                                        int task_pnr_3,
                                                        int task_ck_21_1,
                                                        int task_pnr_2,
                                                        int task_ck_23_1,
                                                        int task_pnr_1,
                                                        int task_ck_25_1,
                                                        int task_pnr,
                                                        int p_task_c_window,
                                                        int p_task_c_door,
                                                        int p_task_c_tv1,
                                                        int p_task_c_tv2,
                                                        int p_task_c_lamp2,
                                                        int p_task_c_lamp1,
                                                        int p_task_c4,
                                                        int p_task_c3,
                                                        int p_task_c2,
                                                        int p_task_c1,
                                                        int task_c4,
                                                        int task_c3,
                                                        int task_c2,
                                                        int task_c1,
                                                        Task_controller__task_controller_task_c_lamp1_out* _out) {
  
  int v_527;
  int v_526;
  int v_525;
  int v_524;
  int v_523;
  int v_522;
  int v_521;
  int v_520;
  int v_519;
  int v_518;
  int v_517;
  int v_516;
  int v_515;
  int v_514;
  int v_513;
  int v_512;
  int v_511;
  int v_510;
  int v_509;
  int v_508;
  int v_507;
  int v_506;
  int v_505;
  int v_504;
  int v_503;
  int v_502;
  int v_501;
  int v_500;
  int v_499;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  sub_21 = false;
  sub_20 = sub_21;
  sub_22 = true;
  if (p_task_c_lamp1) {
    sub_19 = sub_22;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_33 = sub_20;
  sub_32 = sub_33;
  if (task_ck_17_1) {
    v_516 = sub_17;
    v_515 = sub_32;
  } else {
    v_516 = sub_32;
    v_515 = sub_17;
  };
  if (task_on_lamp) {
    sub_31 = v_515;
  } else {
    sub_31 = v_516;
  };
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (task_precense) {
    sub_7 = sub_8;
  } else {
    sub_7 = sub_23;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (task_down2) {
    sub_34 = sub_7;
  } else {
    sub_34 = false;
  };
  if (task_c2) {
    v_517 = false;
  } else {
    v_517 = sub_34;
  };
  if (task_v_400) {
    sub_3 = v_517;
  } else {
    sub_3 = sub_4;
  };
  if (task_c3) {
    v_506 = false;
    sub_56 = false;
  } else {
    v_506 = sub_22;
    sub_56 = sub_21;
  };
  if (p_task_c_lamp1) {
    sub_55 = v_506;
  } else {
    sub_55 = sub_56;
  };
  if (task_v_362) {
    v_507 = sub_19;
  } else {
    v_507 = sub_55;
  };
  if (task_e) {
    sub_54 = v_507;
  } else {
    sub_54 = false;
  };
  if (task_v_363) {
    sub_53 = false;
  } else {
    sub_53 = sub_54;
  };
  sub_59 = (task_s&&false);
  sub_58 = sub_59;
  v_504 = !(task_s);
  sub_60 = (v_504||false);
  if (p_task_c_lamp1) {
    v_505 = sub_60;
  } else {
    v_505 = sub_58;
  };
  if (task_v_362) {
    sub_57 = v_505;
  } else {
    sub_57 = sub_55;
  };
  if (task_v_363) {
    v_508 = sub_57;
  } else {
    v_508 = sub_18;
  };
  if (task_v_364) {
    sub_52 = v_508;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  if (task_v_419) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_14;
  };
  if (task_confort) {
    v_509 = sub_47;
  } else {
    v_509 = sub_48;
  };
  if (task_eco) {
    sub_46 = sub_13;
  } else {
    sub_46 = v_509;
  };
  if (task_confort) {
    sub_61 = sub_14;
  } else {
    sub_61 = sub_47;
  };
  if (task_v_420) {
    sub_45 = sub_61;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (task_c4) {
    sub_41 = sub_42;
  } else {
    sub_41 = sub_9;
  };
  if (task_v_362) {
    sub_73 = false;
  } else {
    sub_73 = sub_19;
  };
  if (task_e) {
    v_501 = sub_73;
    sub_72 = sub_19;
  } else {
    v_501 = sub_19;
    sub_72 = sub_73;
  };
  if (task_v_363) {
    sub_71 = v_501;
  } else {
    sub_71 = sub_72;
  };
  if (task_v_364) {
    sub_70 = sub_18;
  } else {
    sub_70 = sub_71;
  };
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (task_v_419) {
    sub_65 = sub_66;
  } else {
    sub_65 = sub_14;
  };
  if (task_confort) {
    v_502 = sub_65;
  } else {
    v_502 = sub_66;
  };
  if (task_eco) {
    sub_64 = sub_13;
  } else {
    sub_64 = v_502;
  };
  if (task_confort) {
    sub_74 = sub_14;
  } else {
    sub_74 = sub_65;
  };
  if (task_v_420) {
    sub_63 = sub_74;
  } else {
    sub_63 = sub_64;
  };
  if (task_finish) {
    v_503 = sub_11;
  } else {
    v_503 = sub_63;
  };
  if (task_temp_ok) {
    sub_62 = sub_10;
  } else {
    sub_62 = v_503;
  };
  if (task_v_311) {
    sub_40 = sub_62;
  } else {
    sub_40 = sub_41;
  };
  sub_75 = sub_42;
  if (task_v_310) {
    sub_39 = sub_75;
  } else {
    sub_39 = sub_40;
  };
  if (task_v_311) {
    sub_76 = sub_75;
  } else {
    sub_76 = sub_41;
  };
  if (task_cold) {
    sub_80 = sub_63;
  } else {
    sub_80 = sub_12;
  };
  sub_79 = sub_80;
  if (task_c4) {
    sub_78 = sub_79;
  } else {
    sub_78 = sub_9;
  };
  if (task_finish) {
    v_500 = sub_11;
  } else {
    v_500 = sub_44;
  };
  if (task_temp_ok) {
    sub_81 = sub_10;
  } else {
    sub_81 = v_500;
  };
  if (task_v_311) {
    sub_77 = sub_81;
  } else {
    sub_77 = sub_78;
  };
  if (task_v_310) {
    v_510 = sub_77;
  } else {
    v_510 = sub_76;
  };
  if (task_v_309) {
    v_511 = v_510;
  } else {
    v_511 = sub_39;
  };
  if (task_v_311) {
    sub_82 = sub_75;
  } else {
    sub_82 = sub_8;
  };
  if (task_v_310) {
    v_512 = sub_77;
  } else {
    v_512 = sub_82;
  };
  if (task_v_309) {
    v_513 = v_512;
  } else {
    v_513 = sub_39;
  };
  if (task_start) {
    v_514 = v_511;
  } else {
    v_514 = v_513;
  };
  if (task_precense) {
    sub_38 = v_514;
  } else {
    sub_38 = false;
  };
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (task_v_400) {
    v_520 = sub_4;
    v_518 = sub_35;
  } else {
    v_520 = sub_35;
    v_518 = sub_4;
  };
  if (task_down1) {
    v_519 = v_518;
  } else {
    v_519 = sub_3;
  };
  if (task_c1) {
    sub_2 = sub_3;
  } else {
    sub_2 = v_519;
  };
  sub_1 = sub_2;
  if (task_up2) {
    v_499 = false;
  } else {
    v_499 = sub_37;
  };
  if (task_c2) {
    sub_83 = v_499;
  } else {
    sub_83 = sub_36;
  };
  if (task_v_400) {
    v_521 = sub_83;
  } else {
    v_521 = sub_35;
  };
  if (task_down1) {
    v_522 = v_520;
  } else {
    v_522 = v_521;
  };
  sub_84 = sub_4;
  if (task_c1) {
    v_523 = v_522;
  } else {
    v_523 = sub_84;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_6;
  };
  if (task_c2) {
    sub_85 = v;
  } else {
    sub_85 = sub_5;
  };
  if (task_v_400) {
    v_524 = sub_83;
  } else {
    v_524 = sub_85;
  };
  if (task_down1) {
    v_525 = sub_4;
  } else {
    v_525 = v_524;
  };
  if (task_c1) {
    v_526 = v_525;
  } else {
    v_526 = sub_84;
  };
  if (task_up1) {
    v_527 = v_523;
  } else {
    v_527 = v_526;
  };
  if (task_v_399) {
    sub_0 = v_527;
  } else {
    sub_0 = sub_1;
  };
  _out->task_c_lamp1 = sub_0;;
}

void Task_controller__task_controller_task_c4_step(int task_up1,
                                                   int task_down1,
                                                   int task_up2,
                                                   int task_down2,
                                                   int task_s, int task_e,
                                                   int task_finish,
                                                   int task_start,
                                                   int task_cold,
                                                   int task_temp_ok,
                                                   int task_eco,
                                                   int task_confort,
                                                   int task_on_lamp,
                                                   int task_on_tv,
                                                   int task_precense,
                                                   int task_push_door,
                                                   int task_push_window,
                                                   int task_v_420,
                                                   int task_v_419,
                                                   int task_pnr_8,
                                                   int task_v_400,
                                                   int task_v_399,
                                                   int task_pnr_7,
                                                   int task_v_364,
                                                   int task_v_363,
                                                   int task_v_362,
                                                   int task_pnr_6,
                                                   int task_v_311,
                                                   int task_v_310,
                                                   int task_v_309,
                                                   int task_pnr_5,
                                                   int task_ck_17_1,
                                                   int task_pnr_4,
                                                   int task_ck_19_1,
                                                   int task_pnr_3,
                                                   int task_ck_21_1,
                                                   int task_pnr_2,
                                                   int task_ck_23_1,
                                                   int task_pnr_1,
                                                   int task_ck_25_1,
                                                   int task_pnr,
                                                   int p_task_c_window,
                                                   int p_task_c_door,
                                                   int p_task_c_tv1,
                                                   int p_task_c_tv2,
                                                   int p_task_c_lamp2,
                                                   int p_task_c_lamp1,
                                                   int p_task_c4,
                                                   int p_task_c3,
                                                   int p_task_c2,
                                                   int p_task_c1,
                                                   int task_c3, int task_c2,
                                                   int task_c1,
                                                   Task_controller__task_controller_task_c4_out* _out) {
  
  int v_585;
  int v_584;
  int v_583;
  int v_582;
  int v_581;
  int v_580;
  int v_579;
  int v_578;
  int v_577;
  int v_576;
  int v_575;
  int v_574;
  int v_573;
  int v_572;
  int v_571;
  int v_570;
  int v_569;
  int v_568;
  int v_567;
  int v_566;
  int v_565;
  int v_564;
  int v_563;
  int v_562;
  int v_561;
  int v_560;
  int v_559;
  int v_558;
  int v_557;
  int v_556;
  int v_555;
  int v_554;
  int v_553;
  int v_552;
  int v_551;
  int v_550;
  int v_549;
  int v_548;
  int v_547;
  int v_546;
  int v_545;
  int v_544;
  int v_543;
  int v_542;
  int v_541;
  int v_540;
  int v_539;
  int v_538;
  int v_537;
  int v_536;
  int v_535;
  int v_534;
  int v_533;
  int v_532;
  int v_531;
  int v_530;
  int v_529;
  int v_528;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  sub_21 = false;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (task_down2) {
    sub_22 = sub_8;
  } else {
    sub_22 = false;
  };
  if (task_c2) {
    v_566 = false;
  } else {
    v_566 = sub_22;
  };
  if (task_v_400) {
    sub_4 = v_566;
  } else {
    sub_4 = sub_5;
  };
  if (task_v_362) {
    sub_40 = false;
  } else {
    sub_40 = sub_20;
  };
  if (task_e) {
    v_558 = sub_40;
    sub_39 = sub_20;
  } else {
    v_558 = sub_20;
    sub_39 = sub_40;
  };
  if (task_v_363) {
    sub_38 = v_558;
  } else {
    sub_38 = sub_39;
  };
  if (task_v_364) {
    sub_37 = sub_19;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (task_v_419) {
    sub_32 = sub_33;
  } else {
    sub_32 = sub_15;
  };
  if (task_confort) {
    v_559 = sub_32;
  } else {
    v_559 = sub_33;
  };
  if (task_eco) {
    sub_31 = sub_14;
  } else {
    sub_31 = v_559;
  };
  if (task_confort) {
    sub_41 = sub_15;
  } else {
    sub_41 = sub_32;
  };
  if (task_v_420) {
    sub_30 = sub_41;
  } else {
    sub_30 = sub_31;
  };
  if (task_finish) {
    v_560 = sub_12;
  } else {
    v_560 = sub_30;
  };
  if (task_temp_ok) {
    v_561 = sub_11;
  } else {
    v_561 = v_560;
  };
  if (task_v_311) {
    sub_29 = v_561;
  } else {
    sub_29 = sub_10;
  };
  if (task_c3) {
    sub_55 = false;
  } else {
    sub_55 = sub_21;
  };
  if (task_v_362) {
    v_555 = sub_20;
  } else {
    v_555 = sub_55;
  };
  if (task_e) {
    sub_54 = v_555;
  } else {
    sub_54 = false;
  };
  if (task_v_363) {
    sub_53 = false;
  } else {
    sub_53 = sub_54;
  };
  sub_57 = (task_s&&false);
  if (task_v_362) {
    sub_56 = sub_57;
  } else {
    sub_56 = sub_55;
  };
  if (task_v_363) {
    v_556 = sub_56;
  } else {
    v_556 = sub_19;
  };
  if (task_v_364) {
    sub_52 = v_556;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  if (task_v_419) {
    sub_47 = sub_48;
  } else {
    sub_47 = sub_15;
  };
  if (task_confort) {
    v_557 = sub_47;
  } else {
    v_557 = sub_48;
  };
  if (task_eco) {
    sub_46 = sub_14;
  } else {
    sub_46 = v_557;
  };
  if (task_confort) {
    sub_58 = sub_15;
  } else {
    sub_58 = sub_47;
  };
  if (task_v_420) {
    sub_45 = sub_58;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  if (task_finish) {
    v_562 = sub_12;
  } else {
    v_562 = sub_44;
  };
  if (task_temp_ok) {
    v_563 = sub_11;
  } else {
    v_563 = v_562;
  };
  if (task_v_311) {
    v_564 = v_563;
  } else {
    v_564 = sub_10;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (task_v_310) {
    sub_28 = sub_42;
  } else {
    sub_28 = sub_29;
  };
  if (task_v_311) {
    sub_59 = sub_42;
  } else {
    sub_59 = sub_10;
  };
  if (task_v_310) {
    v_565 = v_564;
  } else {
    v_565 = sub_59;
  };
  if (task_v_309) {
    sub_27 = v_565;
  } else {
    sub_27 = sub_28;
  };
  if (task_precense) {
    sub_26 = sub_27;
  } else {
    sub_26 = false;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (task_v_400) {
    v_569 = sub_5;
    v_567 = sub_23;
  } else {
    v_569 = sub_23;
    v_567 = sub_5;
  };
  if (task_down1) {
    v_568 = v_567;
  } else {
    v_568 = sub_4;
  };
  if (task_c1) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_568;
  };
  sub_2 = sub_3;
  if (task_up2) {
    v_554 = false;
  } else {
    v_554 = sub_25;
  };
  if (task_c2) {
    sub_60 = v_554;
  } else {
    sub_60 = sub_24;
  };
  if (task_v_400) {
    v_570 = sub_60;
  } else {
    v_570 = sub_23;
  };
  if (task_down1) {
    v_571 = v_569;
  } else {
    v_571 = v_570;
  };
  sub_61 = sub_5;
  if (task_c1) {
    v_572 = v_571;
  } else {
    v_572 = sub_61;
  };
  if (task_up2) {
    v_553 = false;
  } else {
    v_553 = sub_7;
  };
  if (task_c2) {
    sub_62 = v_553;
  } else {
    sub_62 = sub_6;
  };
  if (task_v_400) {
    v_573 = sub_60;
  } else {
    v_573 = sub_62;
  };
  if (task_down1) {
    v_574 = sub_5;
  } else {
    v_574 = v_573;
  };
  if (task_c1) {
    v_575 = v_574;
  } else {
    v_575 = sub_61;
  };
  if (task_up1) {
    v_576 = v_572;
  } else {
    v_576 = v_575;
  };
  if (task_v_399) {
    sub_1 = v_576;
  } else {
    sub_1 = sub_2;
  };
  sub_82 = true;
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (task_down2) {
    sub_83 = sub_69;
  } else {
    sub_83 = false;
  };
  if (task_c2) {
    v_550 = false;
  } else {
    v_550 = sub_83;
  };
  if (task_v_400) {
    sub_65 = v_550;
  } else {
    sub_65 = sub_66;
  };
  if (task_c3) {
    sub_103 = sub_21;
  } else {
    sub_103 = sub_82;
  };
  if (task_v_362) {
    v_540 = sub_81;
  } else {
    v_540 = sub_103;
  };
  if (task_e) {
    sub_102 = v_540;
  } else {
    sub_102 = sub_20;
  };
  if (task_v_363) {
    sub_101 = sub_19;
  } else {
    sub_101 = sub_102;
  };
  sub_105 = !(task_s);
  if (task_v_362) {
    sub_104 = sub_105;
  } else {
    sub_104 = sub_103;
  };
  if (task_v_363) {
    v_541 = sub_104;
  } else {
    v_541 = sub_80;
  };
  if (task_v_364) {
    sub_100 = v_541;
  } else {
    sub_100 = sub_101;
  };
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  if (task_v_419) {
    sub_95 = sub_96;
  } else {
    sub_95 = sub_76;
  };
  if (task_confort) {
    v_542 = sub_95;
  } else {
    v_542 = sub_96;
  };
  if (task_eco) {
    sub_94 = sub_75;
  } else {
    sub_94 = v_542;
  };
  if (task_confort) {
    sub_106 = sub_76;
  } else {
    sub_106 = sub_95;
  };
  if (task_v_420) {
    sub_93 = sub_106;
  } else {
    sub_93 = sub_94;
  };
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  if (task_v_362) {
    sub_117 = false;
  } else {
    sub_117 = sub_81;
  };
  if (task_e) {
    v_538 = sub_117;
    sub_116 = sub_81;
  } else {
    v_538 = sub_81;
    sub_116 = sub_117;
  };
  if (task_v_363) {
    sub_115 = v_538;
  } else {
    sub_115 = sub_116;
  };
  if (task_v_364) {
    sub_114 = sub_80;
  } else {
    sub_114 = sub_115;
  };
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  if (task_v_419) {
    sub_109 = sub_110;
  } else {
    sub_109 = sub_76;
  };
  if (task_confort) {
    v_539 = sub_109;
  } else {
    v_539 = sub_110;
  };
  if (task_eco) {
    sub_108 = sub_75;
  } else {
    sub_108 = v_539;
  };
  if (task_confort) {
    sub_118 = sub_76;
  } else {
    sub_118 = sub_109;
  };
  if (task_v_420) {
    sub_107 = sub_118;
  } else {
    sub_107 = sub_108;
  };
  if (task_finish) {
    v_543 = sub_73;
  } else {
    v_543 = sub_107;
  };
  if (task_temp_ok) {
    v_544 = sub_72;
  } else {
    v_544 = v_543;
  };
  if (task_v_311) {
    sub_89 = v_544;
  } else {
    sub_89 = sub_90;
  };
  if (task_c3) {
    sub_132 = false;
  } else {
    sub_132 = sub_82;
  };
  if (task_v_362) {
    v_535 = sub_81;
  } else {
    v_535 = sub_132;
  };
  if (task_e) {
    sub_131 = v_535;
  } else {
    sub_131 = false;
  };
  if (task_v_363) {
    sub_130 = false;
  } else {
    sub_130 = sub_131;
  };
  v_534 = !(task_s);
  sub_134 = (v_534||false);
  if (task_v_362) {
    sub_133 = sub_134;
  } else {
    sub_133 = sub_132;
  };
  if (task_v_363) {
    v_536 = sub_133;
  } else {
    v_536 = sub_80;
  };
  if (task_v_364) {
    sub_129 = v_536;
  } else {
    sub_129 = sub_130;
  };
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  sub_125 = sub_126;
  if (task_v_419) {
    sub_124 = sub_125;
  } else {
    sub_124 = sub_76;
  };
  if (task_confort) {
    v_537 = sub_124;
  } else {
    v_537 = sub_125;
  };
  if (task_eco) {
    sub_123 = sub_75;
  } else {
    sub_123 = v_537;
  };
  if (task_confort) {
    sub_135 = sub_76;
  } else {
    sub_135 = sub_124;
  };
  if (task_v_420) {
    sub_122 = sub_135;
  } else {
    sub_122 = sub_123;
  };
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  if (task_v_310) {
    sub_88 = sub_119;
  } else {
    sub_88 = sub_89;
  };
  if (task_v_311) {
    sub_136 = sub_119;
  } else {
    sub_136 = sub_90;
  };
  if (task_finish) {
    v_532 = sub_73;
  } else {
    v_532 = sub_121;
  };
  if (task_temp_ok) {
    v_533 = sub_72;
  } else {
    v_533 = v_532;
  };
  if (task_v_362) {
    sub_150 = sub_20;
  } else {
    sub_150 = sub_81;
  };
  if (task_e) {
    v_529 = sub_150;
    sub_149 = sub_81;
  } else {
    v_529 = sub_81;
    sub_149 = sub_150;
  };
  if (task_v_363) {
    sub_148 = v_529;
  } else {
    sub_148 = sub_149;
  };
  if (task_v_364) {
    sub_147 = sub_80;
  } else {
    sub_147 = sub_148;
  };
  sub_146 = sub_147;
  sub_145 = sub_146;
  sub_144 = sub_145;
  sub_143 = sub_144;
  if (task_v_419) {
    sub_142 = sub_143;
  } else {
    sub_142 = sub_76;
  };
  if (task_confort) {
    v_530 = sub_142;
  } else {
    v_530 = sub_143;
  };
  if (task_eco) {
    sub_141 = sub_75;
  } else {
    sub_141 = v_530;
  };
  if (task_confort) {
    sub_151 = sub_76;
  } else {
    sub_151 = sub_142;
  };
  if (task_v_420) {
    v_531 = sub_151;
  } else {
    v_531 = sub_141;
  };
  if (task_cold) {
    sub_140 = v_531;
  } else {
    sub_140 = sub_74;
  };
  sub_139 = sub_140;
  sub_138 = sub_139;
  if (task_v_311) {
    sub_137 = v_533;
  } else {
    sub_137 = sub_138;
  };
  if (task_v_310) {
    v_545 = sub_137;
  } else {
    v_545 = sub_136;
  };
  if (task_v_309) {
    v_546 = v_545;
  } else {
    v_546 = sub_88;
  };
  if (task_v_311) {
    sub_152 = sub_119;
  } else {
    sub_152 = sub_71;
  };
  if (task_v_310) {
    v_547 = sub_137;
  } else {
    v_547 = sub_152;
  };
  if (task_v_309) {
    v_548 = v_547;
  } else {
    v_548 = sub_88;
  };
  if (task_start) {
    v_549 = v_546;
  } else {
    v_549 = v_548;
  };
  if (task_precense) {
    sub_87 = v_549;
  } else {
    sub_87 = false;
  };
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  if (task_v_400) {
    v_577 = sub_66;
    v_551 = sub_84;
  } else {
    v_577 = sub_84;
    v_551 = sub_66;
  };
  if (task_down1) {
    v_552 = v_551;
  } else {
    v_552 = sub_65;
  };
  if (task_c1) {
    sub_64 = sub_65;
  } else {
    sub_64 = v_552;
  };
  sub_63 = sub_64;
  if (task_up2) {
    v_528 = false;
  } else {
    v_528 = sub_86;
  };
  if (task_c2) {
    sub_153 = v_528;
  } else {
    sub_153 = sub_85;
  };
  if (task_v_400) {
    v_578 = sub_153;
  } else {
    v_578 = sub_84;
  };
  if (task_down1) {
    v_579 = v_577;
  } else {
    v_579 = v_578;
  };
  sub_154 = sub_66;
  if (task_c1) {
    v_580 = v_579;
  } else {
    v_580 = sub_154;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_68;
  };
  if (task_c2) {
    sub_155 = v;
  } else {
    sub_155 = sub_67;
  };
  if (task_v_400) {
    v_581 = sub_153;
  } else {
    v_581 = sub_155;
  };
  if (task_down1) {
    v_582 = sub_66;
  } else {
    v_582 = v_581;
  };
  if (task_c1) {
    v_583 = v_582;
  } else {
    v_583 = sub_154;
  };
  if (task_up1) {
    v_584 = v_580;
  } else {
    v_584 = v_583;
  };
  if (task_v_399) {
    v_585 = v_584;
  } else {
    v_585 = sub_63;
  };
  if (p_task_c4) {
    sub_0 = v_585;
  } else {
    sub_0 = sub_1;
  };
  _out->task_c4 = sub_0;;
}

void Task_controller__task_controller_task_c3_step(int task_up1,
                                                   int task_down1,
                                                   int task_up2,
                                                   int task_down2,
                                                   int task_s, int task_e,
                                                   int task_finish,
                                                   int task_start,
                                                   int task_cold,
                                                   int task_temp_ok,
                                                   int task_eco,
                                                   int task_confort,
                                                   int task_on_lamp,
                                                   int task_on_tv,
                                                   int task_precense,
                                                   int task_push_door,
                                                   int task_push_window,
                                                   int task_v_420,
                                                   int task_v_419,
                                                   int task_pnr_8,
                                                   int task_v_400,
                                                   int task_v_399,
                                                   int task_pnr_7,
                                                   int task_v_364,
                                                   int task_v_363,
                                                   int task_v_362,
                                                   int task_pnr_6,
                                                   int task_v_311,
                                                   int task_v_310,
                                                   int task_v_309,
                                                   int task_pnr_5,
                                                   int task_ck_17_1,
                                                   int task_pnr_4,
                                                   int task_ck_19_1,
                                                   int task_pnr_3,
                                                   int task_ck_21_1,
                                                   int task_pnr_2,
                                                   int task_ck_23_1,
                                                   int task_pnr_1,
                                                   int task_ck_25_1,
                                                   int task_pnr,
                                                   int p_task_c_window,
                                                   int p_task_c_door,
                                                   int p_task_c_tv1,
                                                   int p_task_c_tv2,
                                                   int p_task_c_lamp2,
                                                   int p_task_c_lamp1,
                                                   int p_task_c4,
                                                   int p_task_c3,
                                                   int p_task_c2,
                                                   int p_task_c1,
                                                   int task_c2, int task_c1,
                                                   Task_controller__task_controller_task_c3_out* _out) {
  
  int v_611;
  int v_610;
  int v_609;
  int v_608;
  int v_607;
  int v_606;
  int v_605;
  int v_604;
  int v_603;
  int v_602;
  int v_601;
  int v_600;
  int v_599;
  int v_598;
  int v_597;
  int v_596;
  int v_595;
  int v_594;
  int v_593;
  int v_592;
  int v_591;
  int v_590;
  int v_589;
  int v_588;
  int v_587;
  int v_586;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  sub_20 = false;
  if (p_task_c3) {
    sub_19 = true;
  } else {
    sub_19 = sub_20;
  };
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (task_down2) {
    sub_21 = sub_7;
  } else {
    sub_21 = false;
  };
  if (task_c2) {
    v_601 = false;
  } else {
    v_601 = sub_21;
  };
  if (task_v_400) {
    sub_3 = v_601;
  } else {
    sub_3 = sub_4;
  };
  if (task_v_362) {
    sub_39 = false;
  } else {
    sub_39 = sub_19;
  };
  if (task_e) {
    v_593 = sub_39;
    sub_38 = sub_19;
  } else {
    v_593 = sub_19;
    sub_38 = sub_39;
  };
  if (task_v_363) {
    sub_37 = v_593;
  } else {
    sub_37 = sub_38;
  };
  if (task_v_364) {
    sub_36 = sub_18;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (task_v_419) {
    sub_31 = sub_32;
  } else {
    sub_31 = sub_14;
  };
  if (task_confort) {
    v_594 = sub_31;
  } else {
    v_594 = sub_32;
  };
  if (task_eco) {
    sub_30 = sub_13;
  } else {
    sub_30 = v_594;
  };
  if (task_confort) {
    sub_40 = sub_14;
  } else {
    sub_40 = sub_31;
  };
  if (task_v_420) {
    sub_29 = sub_40;
  } else {
    sub_29 = sub_30;
  };
  if (task_finish) {
    v_595 = sub_11;
  } else {
    v_595 = sub_29;
  };
  if (task_temp_ok) {
    v_596 = sub_10;
  } else {
    v_596 = v_595;
  };
  if (task_v_311) {
    sub_28 = v_596;
  } else {
    sub_28 = sub_9;
  };
  if (task_v_362) {
    v_590 = sub_19;
  } else {
    v_590 = sub_20;
  };
  if (task_e) {
    sub_53 = v_590;
  } else {
    sub_53 = false;
  };
  if (task_v_363) {
    sub_52 = false;
  } else {
    sub_52 = sub_53;
  };
  v_587 = !(task_s);
  v_588 = (v_587||false);
  sub_55 = (task_s&&false);
  if (p_task_c3) {
    v_589 = v_588;
  } else {
    v_589 = sub_55;
  };
  if (task_v_362) {
    sub_54 = v_589;
  } else {
    sub_54 = sub_20;
  };
  if (task_v_363) {
    v_591 = sub_54;
  } else {
    v_591 = sub_18;
  };
  if (task_v_364) {
    sub_51 = v_591;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (task_v_419) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_14;
  };
  if (task_confort) {
    v_592 = sub_46;
  } else {
    v_592 = sub_47;
  };
  if (task_eco) {
    sub_45 = sub_13;
  } else {
    sub_45 = v_592;
  };
  if (task_confort) {
    sub_56 = sub_14;
  } else {
    sub_56 = sub_46;
  };
  if (task_v_420) {
    sub_44 = sub_56;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  if (task_finish) {
    v_597 = sub_11;
  } else {
    v_597 = sub_43;
  };
  if (task_temp_ok) {
    v_598 = sub_10;
  } else {
    v_598 = v_597;
  };
  if (task_v_311) {
    v_599 = v_598;
  } else {
    v_599 = sub_9;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (task_v_310) {
    sub_27 = sub_41;
  } else {
    sub_27 = sub_28;
  };
  if (task_v_311) {
    sub_57 = sub_41;
  } else {
    sub_57 = sub_9;
  };
  if (task_v_310) {
    v_600 = v_599;
  } else {
    v_600 = sub_57;
  };
  if (task_v_309) {
    sub_26 = v_600;
  } else {
    sub_26 = sub_27;
  };
  if (task_precense) {
    sub_25 = sub_26;
  } else {
    sub_25 = false;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (task_v_400) {
    v_604 = sub_4;
    v_602 = sub_22;
  } else {
    v_604 = sub_22;
    v_602 = sub_4;
  };
  if (task_down1) {
    v_603 = v_602;
  } else {
    v_603 = sub_3;
  };
  if (task_c1) {
    sub_2 = sub_3;
  } else {
    sub_2 = v_603;
  };
  sub_1 = sub_2;
  if (task_up2) {
    v_586 = false;
  } else {
    v_586 = sub_24;
  };
  if (task_c2) {
    sub_58 = v_586;
  } else {
    sub_58 = sub_23;
  };
  if (task_v_400) {
    v_605 = sub_58;
  } else {
    v_605 = sub_22;
  };
  if (task_down1) {
    v_606 = v_604;
  } else {
    v_606 = v_605;
  };
  sub_59 = sub_4;
  if (task_c1) {
    v_607 = v_606;
  } else {
    v_607 = sub_59;
  };
  if (task_up2) {
    v = false;
  } else {
    v = sub_6;
  };
  if (task_c2) {
    sub_60 = v;
  } else {
    sub_60 = sub_5;
  };
  if (task_v_400) {
    v_608 = sub_58;
  } else {
    v_608 = sub_60;
  };
  if (task_down1) {
    v_609 = sub_4;
  } else {
    v_609 = v_608;
  };
  if (task_c1) {
    v_610 = v_609;
  } else {
    v_610 = sub_59;
  };
  if (task_up1) {
    v_611 = v_607;
  } else {
    v_611 = v_610;
  };
  if (task_v_399) {
    sub_0 = v_611;
  } else {
    sub_0 = sub_1;
  };
  _out->task_c3 = sub_0;;
}

void Task_controller__task_controller_task_c2_step(int task_up1,
                                                   int task_down1,
                                                   int task_up2,
                                                   int task_down2,
                                                   int task_s, int task_e,
                                                   int task_finish,
                                                   int task_start,
                                                   int task_cold,
                                                   int task_temp_ok,
                                                   int task_eco,
                                                   int task_confort,
                                                   int task_on_lamp,
                                                   int task_on_tv,
                                                   int task_precense,
                                                   int task_push_door,
                                                   int task_push_window,
                                                   int task_v_420,
                                                   int task_v_419,
                                                   int task_pnr_8,
                                                   int task_v_400,
                                                   int task_v_399,
                                                   int task_pnr_7,
                                                   int task_v_364,
                                                   int task_v_363,
                                                   int task_v_362,
                                                   int task_pnr_6,
                                                   int task_v_311,
                                                   int task_v_310,
                                                   int task_v_309,
                                                   int task_pnr_5,
                                                   int task_ck_17_1,
                                                   int task_pnr_4,
                                                   int task_ck_19_1,
                                                   int task_pnr_3,
                                                   int task_ck_21_1,
                                                   int task_pnr_2,
                                                   int task_ck_23_1,
                                                   int task_pnr_1,
                                                   int task_ck_25_1,
                                                   int task_pnr,
                                                   int p_task_c_window,
                                                   int p_task_c_door,
                                                   int p_task_c_tv1,
                                                   int p_task_c_tv2,
                                                   int p_task_c_lamp2,
                                                   int p_task_c_lamp1,
                                                   int p_task_c4,
                                                   int p_task_c3,
                                                   int p_task_c2,
                                                   int p_task_c1,
                                                   int task_c1,
                                                   Task_controller__task_controller_task_c2_out* _out) {
  
  int v_651;
  int v_650;
  int v_649;
  int v_648;
  int v_647;
  int v_646;
  int v_645;
  int v_644;
  int v_643;
  int v_642;
  int v_641;
  int v_640;
  int v_639;
  int v_638;
  int v_637;
  int v_636;
  int v_635;
  int v_634;
  int v_633;
  int v_632;
  int v_631;
  int v_630;
  int v_629;
  int v_628;
  int v_627;
  int v_626;
  int v_625;
  int v_624;
  int v_623;
  int v_622;
  int v_621;
  int v_620;
  int v_619;
  int v_618;
  int v_617;
  int v_616;
  int v_615;
  int v_614;
  int v_613;
  int v_612;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  sub_19 = false;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (task_down2) {
    sub_21 = sub_7;
  } else {
    sub_21 = false;
  };
  sub_20 = sub_21;
  if (task_v_400) {
    sub_4 = sub_20;
  } else {
    sub_4 = sub_5;
  };
  if (task_v_362) {
    sub_39 = false;
  } else {
    sub_39 = sub_19;
  };
  if (task_e) {
    v_628 = sub_39;
    sub_38 = sub_19;
  } else {
    v_628 = sub_19;
    sub_38 = sub_39;
  };
  if (task_v_363) {
    sub_37 = v_628;
  } else {
    sub_37 = sub_38;
  };
  if (task_v_364) {
    sub_36 = sub_18;
  } else {
    sub_36 = sub_37;
  };
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  if (task_v_419) {
    sub_31 = sub_32;
  } else {
    sub_31 = sub_14;
  };
  if (task_confort) {
    v_629 = sub_31;
  } else {
    v_629 = sub_32;
  };
  if (task_eco) {
    sub_30 = sub_13;
  } else {
    sub_30 = v_629;
  };
  if (task_confort) {
    sub_40 = sub_14;
  } else {
    sub_40 = sub_31;
  };
  if (task_v_420) {
    sub_29 = sub_40;
  } else {
    sub_29 = sub_30;
  };
  if (task_finish) {
    v_630 = sub_11;
  } else {
    v_630 = sub_29;
  };
  if (task_temp_ok) {
    v_631 = sub_10;
  } else {
    v_631 = v_630;
  };
  if (task_v_311) {
    sub_28 = v_631;
  } else {
    sub_28 = sub_9;
  };
  if (task_e) {
    sub_53 = sub_19;
  } else {
    sub_53 = false;
  };
  if (task_v_363) {
    sub_52 = false;
  } else {
    sub_52 = sub_53;
  };
  v_625 = (task_s&&false);
  if (task_v_362) {
    sub_54 = v_625;
  } else {
    sub_54 = sub_19;
  };
  if (task_v_363) {
    v_626 = sub_54;
  } else {
    v_626 = sub_18;
  };
  if (task_v_364) {
    sub_51 = v_626;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (task_v_419) {
    sub_46 = sub_47;
  } else {
    sub_46 = sub_14;
  };
  if (task_confort) {
    v_627 = sub_46;
  } else {
    v_627 = sub_47;
  };
  if (task_eco) {
    sub_45 = sub_13;
  } else {
    sub_45 = v_627;
  };
  if (task_confort) {
    sub_55 = sub_14;
  } else {
    sub_55 = sub_46;
  };
  if (task_v_420) {
    sub_44 = sub_55;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  if (task_finish) {
    v_632 = sub_11;
  } else {
    v_632 = sub_43;
  };
  if (task_temp_ok) {
    v_633 = sub_10;
  } else {
    v_633 = v_632;
  };
  if (task_v_311) {
    v_634 = v_633;
  } else {
    v_634 = sub_9;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (task_v_310) {
    sub_27 = sub_41;
  } else {
    sub_27 = sub_28;
  };
  if (task_v_311) {
    sub_56 = sub_41;
  } else {
    sub_56 = sub_9;
  };
  if (task_v_310) {
    v_635 = v_634;
  } else {
    v_635 = sub_56;
  };
  if (task_v_309) {
    sub_26 = v_635;
  } else {
    sub_26 = sub_27;
  };
  if (task_precense) {
    sub_25 = sub_26;
  } else {
    sub_25 = false;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (task_v_400) {
    v_637 = sub_5;
  } else {
    v_637 = sub_23;
  };
  if (task_down1) {
    v_638 = v_637;
  } else {
    v_638 = sub_23;
  };
  if (task_v_400) {
    sub_22 = sub_23;
  } else {
    sub_22 = sub_5;
  };
  if (task_down1) {
    v_640 = sub_5;
    v_636 = sub_22;
  } else {
    v_640 = sub_22;
    v_636 = sub_4;
  };
  if (task_c1) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_636;
  };
  sub_2 = sub_3;
  sub_57 = sub_5;
  if (task_c1) {
    v_641 = v_640;
    v_639 = v_638;
  } else {
    v_641 = sub_57;
    v_639 = sub_57;
  };
  if (task_up1) {
    v_642 = v_639;
  } else {
    v_642 = v_641;
  };
  if (task_v_399) {
    sub_1 = v_642;
  } else {
    sub_1 = sub_2;
  };
  sub_75 = true;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  sub_61 = sub_62;
  if (task_v_400) {
    sub_60 = sub_20;
  } else {
    sub_60 = sub_61;
  };
  if (task_v_362) {
    sub_92 = false;
  } else {
    sub_92 = sub_75;
  };
  if (task_e) {
    v_615 = sub_92;
    sub_91 = sub_75;
  } else {
    v_615 = sub_75;
    sub_91 = sub_92;
  };
  if (task_v_363) {
    sub_90 = v_615;
  } else {
    sub_90 = sub_91;
  };
  if (task_v_364) {
    sub_89 = sub_74;
  } else {
    sub_89 = sub_90;
  };
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  if (task_v_419) {
    sub_84 = sub_85;
  } else {
    sub_84 = sub_70;
  };
  if (task_confort) {
    v_616 = sub_84;
  } else {
    v_616 = sub_85;
  };
  if (task_eco) {
    sub_83 = sub_69;
  } else {
    sub_83 = v_616;
  };
  if (task_confort) {
    sub_93 = sub_70;
  } else {
    sub_93 = sub_84;
  };
  if (task_v_420) {
    sub_82 = sub_93;
  } else {
    sub_82 = sub_83;
  };
  if (task_finish) {
    v_617 = sub_67;
  } else {
    v_617 = sub_82;
  };
  if (task_temp_ok) {
    v_618 = sub_66;
  } else {
    v_618 = v_617;
  };
  if (task_v_311) {
    sub_81 = v_618;
  } else {
    sub_81 = sub_65;
  };
  if (task_e) {
    sub_106 = sub_75;
  } else {
    sub_106 = false;
  };
  if (task_v_363) {
    sub_105 = false;
  } else {
    sub_105 = sub_106;
  };
  v = !(task_s);
  v_612 = (v||false);
  if (task_v_362) {
    sub_107 = v_612;
  } else {
    sub_107 = sub_75;
  };
  if (task_v_363) {
    v_613 = sub_107;
  } else {
    v_613 = sub_74;
  };
  if (task_v_364) {
    sub_104 = v_613;
  } else {
    sub_104 = sub_105;
  };
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  if (task_v_419) {
    sub_99 = sub_100;
  } else {
    sub_99 = sub_70;
  };
  if (task_confort) {
    v_614 = sub_99;
  } else {
    v_614 = sub_100;
  };
  if (task_eco) {
    sub_98 = sub_69;
  } else {
    sub_98 = v_614;
  };
  if (task_confort) {
    sub_108 = sub_70;
  } else {
    sub_108 = sub_99;
  };
  if (task_v_420) {
    sub_97 = sub_108;
  } else {
    sub_97 = sub_98;
  };
  sub_96 = sub_97;
  if (task_finish) {
    v_619 = sub_67;
  } else {
    v_619 = sub_96;
  };
  if (task_temp_ok) {
    v_620 = sub_66;
  } else {
    v_620 = v_619;
  };
  if (task_v_311) {
    v_621 = v_620;
  } else {
    v_621 = sub_65;
  };
  sub_95 = sub_96;
  sub_94 = sub_95;
  if (task_v_310) {
    sub_80 = sub_94;
  } else {
    sub_80 = sub_81;
  };
  if (task_v_311) {
    sub_109 = sub_94;
  } else {
    sub_109 = sub_65;
  };
  if (task_v_310) {
    v_622 = v_621;
  } else {
    v_622 = sub_109;
  };
  if (task_v_309) {
    sub_79 = v_622;
  } else {
    sub_79 = sub_80;
  };
  if (task_precense) {
    sub_78 = sub_79;
  } else {
    sub_78 = false;
  };
  sub_77 = sub_78;
  sub_76 = sub_77;
  if (task_v_400) {
    v_643 = sub_61;
    v_623 = sub_76;
  } else {
    v_643 = sub_76;
    v_623 = sub_61;
  };
  if (task_down1) {
    v_624 = v_623;
  } else {
    v_624 = sub_60;
  };
  if (task_c1) {
    sub_59 = sub_60;
  } else {
    sub_59 = v_624;
  };
  sub_58 = sub_59;
  if (task_up2) {
    sub_110 = sub_24;
  } else {
    sub_110 = sub_77;
  };
  if (task_v_400) {
    v_644 = sub_110;
  } else {
    v_644 = sub_76;
  };
  if (task_down1) {
    v_645 = v_643;
  } else {
    v_645 = v_644;
  };
  sub_111 = sub_61;
  if (task_c1) {
    v_646 = v_645;
  } else {
    v_646 = sub_111;
  };
  if (task_up2) {
    sub_112 = sub_6;
  } else {
    sub_112 = sub_62;
  };
  if (task_v_400) {
    v_647 = sub_110;
  } else {
    v_647 = sub_112;
  };
  if (task_down1) {
    v_648 = sub_61;
  } else {
    v_648 = v_647;
  };
  if (task_c1) {
    v_649 = v_648;
  } else {
    v_649 = sub_111;
  };
  if (task_up1) {
    v_650 = v_646;
  } else {
    v_650 = v_649;
  };
  if (task_v_399) {
    v_651 = v_650;
  } else {
    v_651 = sub_58;
  };
  if (p_task_c2) {
    sub_0 = v_651;
  } else {
    sub_0 = sub_1;
  };
  _out->task_c2 = sub_0;;
}

void Task_controller__task_controller_task_c1_step(int task_up1,
                                                   int task_down1,
                                                   int task_up2,
                                                   int task_down2,
                                                   int task_s, int task_e,
                                                   int task_finish,
                                                   int task_start,
                                                   int task_cold,
                                                   int task_temp_ok,
                                                   int task_eco,
                                                   int task_confort,
                                                   int task_on_lamp,
                                                   int task_on_tv,
                                                   int task_precense,
                                                   int task_push_door,
                                                   int task_push_window,
                                                   int task_v_420,
                                                   int task_v_419,
                                                   int task_pnr_8,
                                                   int task_v_400,
                                                   int task_v_399,
                                                   int task_pnr_7,
                                                   int task_v_364,
                                                   int task_v_363,
                                                   int task_v_362,
                                                   int task_pnr_6,
                                                   int task_v_311,
                                                   int task_v_310,
                                                   int task_v_309,
                                                   int task_pnr_5,
                                                   int task_ck_17_1,
                                                   int task_pnr_4,
                                                   int task_ck_19_1,
                                                   int task_pnr_3,
                                                   int task_ck_21_1,
                                                   int task_pnr_2,
                                                   int task_ck_23_1,
                                                   int task_pnr_1,
                                                   int task_ck_25_1,
                                                   int task_pnr,
                                                   int p_task_c_window,
                                                   int p_task_c_door,
                                                   int p_task_c_tv1,
                                                   int p_task_c_tv2,
                                                   int p_task_c_lamp2,
                                                   int p_task_c_lamp1,
                                                   int p_task_c4,
                                                   int p_task_c3,
                                                   int p_task_c2,
                                                   int p_task_c1,
                                                   Task_controller__task_controller_task_c1_out* _out) {
  
  int v_692;
  int v_691;
  int v_690;
  int v_689;
  int v_688;
  int v_687;
  int v_686;
  int v_685;
  int v_684;
  int v_683;
  int v_682;
  int v_681;
  int v_680;
  int v_679;
  int v_678;
  int v_677;
  int v_676;
  int v_675;
  int v_674;
  int v_673;
  int v_672;
  int v_671;
  int v_670;
  int v_669;
  int v_668;
  int v_667;
  int v_666;
  int v_665;
  int v_664;
  int v_663;
  int v_662;
  int v_661;
  int v_660;
  int v_659;
  int v_658;
  int v_657;
  int v_656;
  int v_655;
  int v_654;
  int v_653;
  int v_652;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  sub_18 = false;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_32 = true;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (p_task_c1) {
    sub_3 = sub_19;
  } else {
    sub_3 = sub_4;
  };
  if (task_v_362) {
    sub_48 = sub_32;
  } else {
    sub_48 = sub_18;
  };
  if (task_e) {
    v_675 = sub_48;
    sub_47 = sub_18;
  } else {
    v_675 = sub_18;
    sub_47 = sub_48;
  };
  if (task_v_363) {
    sub_46 = v_675;
  } else {
    sub_46 = sub_47;
  };
  if (task_v_364) {
    sub_45 = sub_17;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (task_v_419) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_13;
  };
  if (task_confort) {
    v_676 = sub_40;
  } else {
    v_676 = sub_41;
  };
  if (task_eco) {
    sub_39 = sub_12;
  } else {
    sub_39 = v_676;
  };
  if (task_confort) {
    sub_49 = sub_13;
  } else {
    sub_49 = sub_40;
  };
  if (task_v_420) {
    sub_38 = sub_49;
  } else {
    sub_38 = sub_39;
  };
  if (task_finish) {
    v_677 = sub_10;
  } else {
    v_677 = sub_38;
  };
  if (task_temp_ok) {
    v_678 = sub_9;
  } else {
    v_678 = v_677;
  };
  if (task_v_311) {
    sub_37 = v_678;
  } else {
    sub_37 = sub_8;
  };
  if (task_e) {
    sub_62 = sub_18;
  } else {
    sub_62 = sub_32;
  };
  if (task_v_363) {
    sub_61 = sub_31;
  } else {
    sub_61 = sub_62;
  };
  if (task_v_362) {
    sub_63 = task_s;
  } else {
    sub_63 = sub_18;
  };
  if (task_v_363) {
    v_673 = sub_63;
  } else {
    v_673 = sub_17;
  };
  if (task_v_364) {
    sub_60 = v_673;
  } else {
    sub_60 = sub_61;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (task_v_419) {
    sub_55 = sub_56;
  } else {
    sub_55 = sub_13;
  };
  if (task_confort) {
    v_674 = sub_55;
  } else {
    v_674 = sub_56;
  };
  if (task_eco) {
    sub_54 = sub_12;
  } else {
    sub_54 = v_674;
  };
  if (task_confort) {
    sub_64 = sub_13;
  } else {
    sub_64 = sub_55;
  };
  if (task_v_420) {
    sub_53 = sub_64;
  } else {
    sub_53 = sub_54;
  };
  sub_52 = sub_53;
  if (task_finish) {
    v_679 = sub_10;
  } else {
    v_679 = sub_52;
  };
  if (task_temp_ok) {
    v_680 = sub_9;
  } else {
    v_680 = v_679;
  };
  if (task_v_311) {
    v_681 = v_680;
  } else {
    v_681 = sub_8;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  if (task_v_310) {
    sub_36 = sub_50;
  } else {
    sub_36 = sub_37;
  };
  if (task_v_311) {
    sub_65 = sub_50;
  } else {
    sub_65 = sub_8;
  };
  if (task_v_310) {
    v_682 = v_681;
  } else {
    v_682 = sub_65;
  };
  if (task_v_309) {
    sub_35 = v_682;
  } else {
    sub_35 = sub_36;
  };
  if (task_precense) {
    v_683 = sub_35;
  } else {
    v_683 = sub_21;
  };
  if (task_v_362) {
    sub_80 = false;
  } else {
    sub_80 = sub_18;
  };
  if (task_e) {
    v_665 = sub_80;
    sub_79 = sub_18;
  } else {
    v_665 = sub_18;
    sub_79 = sub_80;
  };
  if (task_v_363) {
    sub_78 = v_665;
  } else {
    sub_78 = sub_79;
  };
  if (task_v_364) {
    sub_77 = sub_17;
  } else {
    sub_77 = sub_78;
  };
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  if (task_v_419) {
    sub_72 = sub_73;
  } else {
    sub_72 = sub_13;
  };
  if (task_confort) {
    v_666 = sub_72;
  } else {
    v_666 = sub_73;
  };
  if (task_eco) {
    sub_71 = sub_12;
  } else {
    sub_71 = v_666;
  };
  if (task_confort) {
    sub_81 = sub_13;
  } else {
    sub_81 = sub_72;
  };
  if (task_v_420) {
    sub_70 = sub_81;
  } else {
    sub_70 = sub_71;
  };
  if (task_finish) {
    v_667 = sub_10;
  } else {
    v_667 = sub_70;
  };
  if (task_temp_ok) {
    v_668 = sub_9;
  } else {
    v_668 = v_667;
  };
  if (task_v_311) {
    sub_69 = v_668;
  } else {
    sub_69 = sub_8;
  };
  if (task_e) {
    sub_94 = sub_18;
  } else {
    sub_94 = false;
  };
  if (task_v_363) {
    sub_93 = false;
  } else {
    sub_93 = sub_94;
  };
  v_662 = (task_s&&false);
  if (task_v_362) {
    sub_95 = v_662;
  } else {
    sub_95 = sub_18;
  };
  if (task_v_363) {
    v_663 = sub_95;
  } else {
    v_663 = sub_17;
  };
  if (task_v_364) {
    sub_92 = v_663;
  } else {
    sub_92 = sub_93;
  };
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  if (task_v_419) {
    sub_87 = sub_88;
  } else {
    sub_87 = sub_13;
  };
  if (task_confort) {
    v_664 = sub_87;
  } else {
    v_664 = sub_88;
  };
  if (task_eco) {
    sub_86 = sub_12;
  } else {
    sub_86 = v_664;
  };
  if (task_confort) {
    sub_96 = sub_13;
  } else {
    sub_96 = sub_87;
  };
  if (task_v_420) {
    sub_85 = sub_96;
  } else {
    sub_85 = sub_86;
  };
  sub_84 = sub_85;
  if (task_finish) {
    v_669 = sub_10;
  } else {
    v_669 = sub_84;
  };
  if (task_temp_ok) {
    v_670 = sub_9;
  } else {
    v_670 = v_669;
  };
  if (task_v_311) {
    v_671 = v_670;
  } else {
    v_671 = sub_8;
  };
  sub_83 = sub_84;
  sub_82 = sub_83;
  if (task_v_310) {
    sub_68 = sub_82;
  } else {
    sub_68 = sub_69;
  };
  if (task_v_311) {
    sub_97 = sub_82;
  } else {
    sub_97 = sub_8;
  };
  if (task_v_310) {
    v_672 = v_671;
  } else {
    v_672 = sub_97;
  };
  if (task_v_309) {
    sub_67 = v_672;
  } else {
    sub_67 = sub_68;
  };
  if (task_precense) {
    sub_66 = sub_67;
  } else {
    sub_66 = false;
  };
  if (task_down2) {
    sub_34 = v_683;
  } else {
    sub_34 = sub_66;
  };
  sub_33 = sub_34;
  if (task_down2) {
    sub_98 = sub_20;
  } else {
    sub_98 = sub_66;
  };
  if (p_task_c1) {
    v_684 = sub_98;
  } else {
    v_684 = sub_33;
  };
  if (task_v_400) {
    v_685 = v_684;
  } else {
    v_685 = sub_3;
  };
  if (task_down2) {
    sub_100 = sub_6;
  } else {
    sub_100 = false;
  };
  sub_99 = sub_100;
  if (task_down2) {
    sub_101 = sub_20;
  } else {
    sub_101 = false;
  };
  if (p_task_c1) {
    v_686 = sub_101;
  } else {
    v_686 = sub_99;
  };
  if (task_v_400) {
    v_687 = v_686;
  } else {
    v_687 = sub_3;
  };
  if (task_down1) {
    sub_2 = v_685;
  } else {
    sub_2 = v_687;
  };
  sub_1 = sub_2;
  if (task_v_362) {
    sub_118 = sub_18;
  } else {
    sub_118 = sub_32;
  };
  if (task_e) {
    v_654 = sub_118;
    sub_117 = sub_32;
  } else {
    v_654 = sub_32;
    sub_117 = sub_118;
  };
  if (task_v_363) {
    sub_116 = v_654;
  } else {
    sub_116 = sub_117;
  };
  if (task_v_364) {
    sub_115 = sub_31;
  } else {
    sub_115 = sub_116;
  };
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  if (task_v_419) {
    sub_110 = sub_111;
  } else {
    sub_110 = sub_27;
  };
  if (task_confort) {
    v_655 = sub_110;
  } else {
    v_655 = sub_111;
  };
  if (task_eco) {
    sub_109 = sub_26;
  } else {
    sub_109 = v_655;
  };
  if (task_confort) {
    sub_119 = sub_27;
  } else {
    sub_119 = sub_110;
  };
  if (task_v_420) {
    sub_108 = sub_119;
  } else {
    sub_108 = sub_109;
  };
  if (task_finish) {
    v_656 = sub_24;
  } else {
    v_656 = sub_108;
  };
  if (task_temp_ok) {
    v_657 = sub_23;
  } else {
    v_657 = v_656;
  };
  if (task_v_311) {
    sub_107 = v_657;
  } else {
    sub_107 = sub_22;
  };
  if (task_e) {
    sub_132 = sub_32;
  } else {
    sub_132 = sub_18;
  };
  if (task_v_363) {
    sub_131 = sub_17;
  } else {
    sub_131 = sub_132;
  };
  v = !(task_s);
  if (task_v_362) {
    sub_133 = v;
  } else {
    sub_133 = sub_32;
  };
  if (task_v_363) {
    v_652 = sub_133;
  } else {
    v_652 = sub_31;
  };
  if (task_v_364) {
    sub_130 = v_652;
  } else {
    sub_130 = sub_131;
  };
  sub_129 = sub_130;
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  if (task_v_419) {
    sub_125 = sub_126;
  } else {
    sub_125 = sub_27;
  };
  if (task_confort) {
    v_653 = sub_125;
  } else {
    v_653 = sub_126;
  };
  if (task_eco) {
    sub_124 = sub_26;
  } else {
    sub_124 = v_653;
  };
  if (task_confort) {
    sub_134 = sub_27;
  } else {
    sub_134 = sub_125;
  };
  if (task_v_420) {
    sub_123 = sub_134;
  } else {
    sub_123 = sub_124;
  };
  sub_122 = sub_123;
  if (task_finish) {
    v_658 = sub_24;
  } else {
    v_658 = sub_122;
  };
  if (task_temp_ok) {
    v_659 = sub_23;
  } else {
    v_659 = v_658;
  };
  if (task_v_311) {
    v_660 = v_659;
  } else {
    v_660 = sub_22;
  };
  sub_121 = sub_122;
  sub_120 = sub_121;
  if (task_v_310) {
    sub_106 = sub_120;
  } else {
    sub_106 = sub_107;
  };
  if (task_v_311) {
    sub_135 = sub_120;
  } else {
    sub_135 = sub_22;
  };
  if (task_v_310) {
    v_661 = v_660;
  } else {
    v_661 = sub_135;
  };
  if (task_v_309) {
    sub_105 = v_661;
  } else {
    sub_105 = sub_106;
  };
  if (task_precense) {
    sub_104 = sub_105;
  } else {
    sub_104 = sub_7;
  };
  sub_103 = sub_104;
  if (p_task_c1) {
    sub_102 = sub_103;
  } else {
    sub_102 = sub_4;
  };
  if (task_v_400) {
    v_690 = sub_102;
  } else {
    v_690 = sub_3;
  };
  if (task_down1) {
    v_691 = sub_3;
  } else {
    v_691 = v_690;
  };
  if (task_v_400) {
    v_688 = sub_3;
  } else {
    v_688 = sub_102;
  };
  if (task_down1) {
    v_689 = v_688;
  } else {
    v_689 = sub_102;
  };
  if (task_up1) {
    v_692 = v_689;
  } else {
    v_692 = v_691;
  };
  if (task_v_399) {
    sub_0 = v_692;
  } else {
    sub_0 = sub_1;
  };
  _out->task_c1 = sub_0;;
}

void Task_controller__task_controller_step(int task_up1, int task_down1,
                                           int task_up2, int task_down2,
                                           int task_s, int task_e,
                                           int task_finish, int task_start,
                                           int task_cold, int task_temp_ok,
                                           int task_eco, int task_confort,
                                           int task_on_lamp, int task_on_tv,
                                           int task_precense,
                                           int task_push_door,
                                           int task_push_window,
                                           int task_v_420, int task_v_419,
                                           int task_pnr_8, int task_v_400,
                                           int task_v_399, int task_pnr_7,
                                           int task_v_364, int task_v_363,
                                           int task_v_362, int task_pnr_6,
                                           int task_v_311, int task_v_310,
                                           int task_v_309, int task_pnr_5,
                                           int task_ck_17_1, int task_pnr_4,
                                           int task_ck_19_1, int task_pnr_3,
                                           int task_ck_21_1, int task_pnr_2,
                                           int task_ck_23_1, int task_pnr_1,
                                           int task_ck_25_1, int task_pnr,
                                           int p_task_c_window,
                                           int p_task_c_door,
                                           int p_task_c_tv1,
                                           int p_task_c_tv2,
                                           int p_task_c_lamp2,
                                           int p_task_c_lamp1, int p_task_c4,
                                           int p_task_c3, int p_task_c2,
                                           int p_task_c1,
                                           Task_controller__task_controller_out* _out) {
  Task_controller__task_controller_task_c_window_out Task_controller__task_controller_task_c_window_out_st;
  Task_controller__task_controller_task_c_lamp1_out Task_controller__task_controller_task_c_lamp1_out_st;
  Task_controller__task_controller_task_c4_out Task_controller__task_controller_task_c4_out_st;
  Task_controller__task_controller_task_c_tv2_out Task_controller__task_controller_task_c_tv2_out_st;
  Task_controller__task_controller_task_c_tv1_out Task_controller__task_controller_task_c_tv1_out_st;
  Task_controller__task_controller_task_c1_out Task_controller__task_controller_task_c1_out_st;
  Task_controller__task_controller_task_c_lamp2_out Task_controller__task_controller_task_c_lamp2_out_st;
  Task_controller__task_controller_task_c_door_out Task_controller__task_controller_task_c_door_out_st;
  Task_controller__task_controller_task_c3_out Task_controller__task_controller_task_c3_out_st;
  Task_controller__task_controller_task_c2_out Task_controller__task_controller_task_c2_out_st;
  Task_controller__task_controller_task_c1_step(task_up1, task_down1,
                                                task_up2, task_down2, task_s,
                                                task_e, task_finish,
                                                task_start, task_cold,
                                                task_temp_ok, task_eco,
                                                task_confort, task_on_lamp,
                                                task_on_tv, task_precense,
                                                task_push_door,
                                                task_push_window, task_v_420,
                                                task_v_419, task_pnr_8,
                                                task_v_400, task_v_399,
                                                task_pnr_7, task_v_364,
                                                task_v_363, task_v_362,
                                                task_pnr_6, task_v_311,
                                                task_v_310, task_v_309,
                                                task_pnr_5, task_ck_17_1,
                                                task_pnr_4, task_ck_19_1,
                                                task_pnr_3, task_ck_21_1,
                                                task_pnr_2, task_ck_23_1,
                                                task_pnr_1, task_ck_25_1,
                                                task_pnr, p_task_c_window,
                                                p_task_c_door, p_task_c_tv1,
                                                p_task_c_tv2, p_task_c_lamp2,
                                                p_task_c_lamp1, p_task_c4,
                                                p_task_c3, p_task_c2,
                                                p_task_c1,
                                                &Task_controller__task_controller_task_c1_out_st);
  _out->task_c1 = Task_controller__task_controller_task_c1_out_st.task_c1;
  Task_controller__task_controller_task_c2_step(task_up1, task_down1,
                                                task_up2, task_down2, task_s,
                                                task_e, task_finish,
                                                task_start, task_cold,
                                                task_temp_ok, task_eco,
                                                task_confort, task_on_lamp,
                                                task_on_tv, task_precense,
                                                task_push_door,
                                                task_push_window, task_v_420,
                                                task_v_419, task_pnr_8,
                                                task_v_400, task_v_399,
                                                task_pnr_7, task_v_364,
                                                task_v_363, task_v_362,
                                                task_pnr_6, task_v_311,
                                                task_v_310, task_v_309,
                                                task_pnr_5, task_ck_17_1,
                                                task_pnr_4, task_ck_19_1,
                                                task_pnr_3, task_ck_21_1,
                                                task_pnr_2, task_ck_23_1,
                                                task_pnr_1, task_ck_25_1,
                                                task_pnr, p_task_c_window,
                                                p_task_c_door, p_task_c_tv1,
                                                p_task_c_tv2, p_task_c_lamp2,
                                                p_task_c_lamp1, p_task_c4,
                                                p_task_c3, p_task_c2,
                                                p_task_c1, _out->task_c1,
                                                &Task_controller__task_controller_task_c2_out_st);
  _out->task_c2 = Task_controller__task_controller_task_c2_out_st.task_c2;
  Task_controller__task_controller_task_c3_step(task_up1, task_down1,
                                                task_up2, task_down2, task_s,
                                                task_e, task_finish,
                                                task_start, task_cold,
                                                task_temp_ok, task_eco,
                                                task_confort, task_on_lamp,
                                                task_on_tv, task_precense,
                                                task_push_door,
                                                task_push_window, task_v_420,
                                                task_v_419, task_pnr_8,
                                                task_v_400, task_v_399,
                                                task_pnr_7, task_v_364,
                                                task_v_363, task_v_362,
                                                task_pnr_6, task_v_311,
                                                task_v_310, task_v_309,
                                                task_pnr_5, task_ck_17_1,
                                                task_pnr_4, task_ck_19_1,
                                                task_pnr_3, task_ck_21_1,
                                                task_pnr_2, task_ck_23_1,
                                                task_pnr_1, task_ck_25_1,
                                                task_pnr, p_task_c_window,
                                                p_task_c_door, p_task_c_tv1,
                                                p_task_c_tv2, p_task_c_lamp2,
                                                p_task_c_lamp1, p_task_c4,
                                                p_task_c3, p_task_c2,
                                                p_task_c1, _out->task_c2,
                                                _out->task_c1,
                                                &Task_controller__task_controller_task_c3_out_st);
  _out->task_c3 = Task_controller__task_controller_task_c3_out_st.task_c3;
  Task_controller__task_controller_task_c4_step(task_up1, task_down1,
                                                task_up2, task_down2, task_s,
                                                task_e, task_finish,
                                                task_start, task_cold,
                                                task_temp_ok, task_eco,
                                                task_confort, task_on_lamp,
                                                task_on_tv, task_precense,
                                                task_push_door,
                                                task_push_window, task_v_420,
                                                task_v_419, task_pnr_8,
                                                task_v_400, task_v_399,
                                                task_pnr_7, task_v_364,
                                                task_v_363, task_v_362,
                                                task_pnr_6, task_v_311,
                                                task_v_310, task_v_309,
                                                task_pnr_5, task_ck_17_1,
                                                task_pnr_4, task_ck_19_1,
                                                task_pnr_3, task_ck_21_1,
                                                task_pnr_2, task_ck_23_1,
                                                task_pnr_1, task_ck_25_1,
                                                task_pnr, p_task_c_window,
                                                p_task_c_door, p_task_c_tv1,
                                                p_task_c_tv2, p_task_c_lamp2,
                                                p_task_c_lamp1, p_task_c4,
                                                p_task_c3, p_task_c2,
                                                p_task_c1, _out->task_c3,
                                                _out->task_c2, _out->task_c1,
                                                &Task_controller__task_controller_task_c4_out_st);
  _out->task_c4 = Task_controller__task_controller_task_c4_out_st.task_c4;
  Task_controller__task_controller_task_c_lamp1_step(task_up1, task_down1,
                                                     task_up2, task_down2,
                                                     task_s, task_e,
                                                     task_finish, task_start,
                                                     task_cold, task_temp_ok,
                                                     task_eco, task_confort,
                                                     task_on_lamp,
                                                     task_on_tv,
                                                     task_precense,
                                                     task_push_door,
                                                     task_push_window,
                                                     task_v_420, task_v_419,
                                                     task_pnr_8, task_v_400,
                                                     task_v_399, task_pnr_7,
                                                     task_v_364, task_v_363,
                                                     task_v_362, task_pnr_6,
                                                     task_v_311, task_v_310,
                                                     task_v_309, task_pnr_5,
                                                     task_ck_17_1,
                                                     task_pnr_4,
                                                     task_ck_19_1,
                                                     task_pnr_3,
                                                     task_ck_21_1,
                                                     task_pnr_2,
                                                     task_ck_23_1,
                                                     task_pnr_1,
                                                     task_ck_25_1, task_pnr,
                                                     p_task_c_window,
                                                     p_task_c_door,
                                                     p_task_c_tv1,
                                                     p_task_c_tv2,
                                                     p_task_c_lamp2,
                                                     p_task_c_lamp1,
                                                     p_task_c4, p_task_c3,
                                                     p_task_c2, p_task_c1,
                                                     _out->task_c4,
                                                     _out->task_c3,
                                                     _out->task_c2,
                                                     _out->task_c1,
                                                     &Task_controller__task_controller_task_c_lamp1_out_st);
  _out->task_c_lamp1 = Task_controller__task_controller_task_c_lamp1_out_st.task_c_lamp1;
  Task_controller__task_controller_task_c_lamp2_step(task_up1, task_down1,
                                                     task_up2, task_down2,
                                                     task_s, task_e,
                                                     task_finish, task_start,
                                                     task_cold, task_temp_ok,
                                                     task_eco, task_confort,
                                                     task_on_lamp,
                                                     task_on_tv,
                                                     task_precense,
                                                     task_push_door,
                                                     task_push_window,
                                                     task_v_420, task_v_419,
                                                     task_pnr_8, task_v_400,
                                                     task_v_399, task_pnr_7,
                                                     task_v_364, task_v_363,
                                                     task_v_362, task_pnr_6,
                                                     task_v_311, task_v_310,
                                                     task_v_309, task_pnr_5,
                                                     task_ck_17_1,
                                                     task_pnr_4,
                                                     task_ck_19_1,
                                                     task_pnr_3,
                                                     task_ck_21_1,
                                                     task_pnr_2,
                                                     task_ck_23_1,
                                                     task_pnr_1,
                                                     task_ck_25_1, task_pnr,
                                                     p_task_c_window,
                                                     p_task_c_door,
                                                     p_task_c_tv1,
                                                     p_task_c_tv2,
                                                     p_task_c_lamp2,
                                                     p_task_c_lamp1,
                                                     p_task_c4, p_task_c3,
                                                     p_task_c2, p_task_c1,
                                                     _out->task_c_lamp1,
                                                     _out->task_c4,
                                                     _out->task_c3,
                                                     _out->task_c2,
                                                     _out->task_c1,
                                                     &Task_controller__task_controller_task_c_lamp2_out_st);
  _out->task_c_lamp2 = Task_controller__task_controller_task_c_lamp2_out_st.task_c_lamp2;
  Task_controller__task_controller_task_c_tv2_step(task_up1, task_down1,
                                                   task_up2, task_down2,
                                                   task_s, task_e,
                                                   task_finish, task_start,
                                                   task_cold, task_temp_ok,
                                                   task_eco, task_confort,
                                                   task_on_lamp, task_on_tv,
                                                   task_precense,
                                                   task_push_door,
                                                   task_push_window,
                                                   task_v_420, task_v_419,
                                                   task_pnr_8, task_v_400,
                                                   task_v_399, task_pnr_7,
                                                   task_v_364, task_v_363,
                                                   task_v_362, task_pnr_6,
                                                   task_v_311, task_v_310,
                                                   task_v_309, task_pnr_5,
                                                   task_ck_17_1, task_pnr_4,
                                                   task_ck_19_1, task_pnr_3,
                                                   task_ck_21_1, task_pnr_2,
                                                   task_ck_23_1, task_pnr_1,
                                                   task_ck_25_1, task_pnr,
                                                   p_task_c_window,
                                                   p_task_c_door,
                                                   p_task_c_tv1,
                                                   p_task_c_tv2,
                                                   p_task_c_lamp2,
                                                   p_task_c_lamp1, p_task_c4,
                                                   p_task_c3, p_task_c2,
                                                   p_task_c1,
                                                   _out->task_c_lamp2,
                                                   _out->task_c_lamp1,
                                                   _out->task_c4,
                                                   _out->task_c3,
                                                   _out->task_c2,
                                                   _out->task_c1,
                                                   &Task_controller__task_controller_task_c_tv2_out_st);
  _out->task_c_tv2 = Task_controller__task_controller_task_c_tv2_out_st.task_c_tv2;
  Task_controller__task_controller_task_c_tv1_step(task_up1, task_down1,
                                                   task_up2, task_down2,
                                                   task_s, task_e,
                                                   task_finish, task_start,
                                                   task_cold, task_temp_ok,
                                                   task_eco, task_confort,
                                                   task_on_lamp, task_on_tv,
                                                   task_precense,
                                                   task_push_door,
                                                   task_push_window,
                                                   task_v_420, task_v_419,
                                                   task_pnr_8, task_v_400,
                                                   task_v_399, task_pnr_7,
                                                   task_v_364, task_v_363,
                                                   task_v_362, task_pnr_6,
                                                   task_v_311, task_v_310,
                                                   task_v_309, task_pnr_5,
                                                   task_ck_17_1, task_pnr_4,
                                                   task_ck_19_1, task_pnr_3,
                                                   task_ck_21_1, task_pnr_2,
                                                   task_ck_23_1, task_pnr_1,
                                                   task_ck_25_1, task_pnr,
                                                   p_task_c_window,
                                                   p_task_c_door,
                                                   p_task_c_tv1,
                                                   p_task_c_tv2,
                                                   p_task_c_lamp2,
                                                   p_task_c_lamp1, p_task_c4,
                                                   p_task_c3, p_task_c2,
                                                   p_task_c1,
                                                   _out->task_c_tv2,
                                                   _out->task_c_lamp2,
                                                   _out->task_c_lamp1,
                                                   _out->task_c4,
                                                   _out->task_c3,
                                                   _out->task_c2,
                                                   _out->task_c1,
                                                   &Task_controller__task_controller_task_c_tv1_out_st);
  _out->task_c_tv1 = Task_controller__task_controller_task_c_tv1_out_st.task_c_tv1;
  Task_controller__task_controller_task_c_door_step(task_up1, task_down1,
                                                    task_up2, task_down2,
                                                    task_s, task_e,
                                                    task_finish, task_start,
                                                    task_cold, task_temp_ok,
                                                    task_eco, task_confort,
                                                    task_on_lamp, task_on_tv,
                                                    task_precense,
                                                    task_push_door,
                                                    task_push_window,
                                                    task_v_420, task_v_419,
                                                    task_pnr_8, task_v_400,
                                                    task_v_399, task_pnr_7,
                                                    task_v_364, task_v_363,
                                                    task_v_362, task_pnr_6,
                                                    task_v_311, task_v_310,
                                                    task_v_309, task_pnr_5,
                                                    task_ck_17_1, task_pnr_4,
                                                    task_ck_19_1, task_pnr_3,
                                                    task_ck_21_1, task_pnr_2,
                                                    task_ck_23_1, task_pnr_1,
                                                    task_ck_25_1, task_pnr,
                                                    p_task_c_window,
                                                    p_task_c_door,
                                                    p_task_c_tv1,
                                                    p_task_c_tv2,
                                                    p_task_c_lamp2,
                                                    p_task_c_lamp1,
                                                    p_task_c4, p_task_c3,
                                                    p_task_c2, p_task_c1,
                                                    _out->task_c_tv1,
                                                    _out->task_c_tv2,
                                                    _out->task_c_lamp2,
                                                    _out->task_c_lamp1,
                                                    _out->task_c4,
                                                    _out->task_c3,
                                                    _out->task_c2,
                                                    _out->task_c1,
                                                    &Task_controller__task_controller_task_c_door_out_st);
  _out->task_c_door = Task_controller__task_controller_task_c_door_out_st.task_c_door;
  Task_controller__task_controller_task_c_window_step(task_up1, task_down1,
                                                      task_up2, task_down2,
                                                      task_s, task_e,
                                                      task_finish,
                                                      task_start, task_cold,
                                                      task_temp_ok, task_eco,
                                                      task_confort,
                                                      task_on_lamp,
                                                      task_on_tv,
                                                      task_precense,
                                                      task_push_door,
                                                      task_push_window,
                                                      task_v_420, task_v_419,
                                                      task_pnr_8, task_v_400,
                                                      task_v_399, task_pnr_7,
                                                      task_v_364, task_v_363,
                                                      task_v_362, task_pnr_6,
                                                      task_v_311, task_v_310,
                                                      task_v_309, task_pnr_5,
                                                      task_ck_17_1,
                                                      task_pnr_4,
                                                      task_ck_19_1,
                                                      task_pnr_3,
                                                      task_ck_21_1,
                                                      task_pnr_2,
                                                      task_ck_23_1,
                                                      task_pnr_1,
                                                      task_ck_25_1, task_pnr,
                                                      p_task_c_window,
                                                      p_task_c_door,
                                                      p_task_c_tv1,
                                                      p_task_c_tv2,
                                                      p_task_c_lamp2,
                                                      p_task_c_lamp1,
                                                      p_task_c4, p_task_c3,
                                                      p_task_c2, p_task_c1,
                                                      _out->task_c_door,
                                                      _out->task_c_tv1,
                                                      _out->task_c_tv2,
                                                      _out->task_c_lamp2,
                                                      _out->task_c_lamp1,
                                                      _out->task_c4,
                                                      _out->task_c3,
                                                      _out->task_c2,
                                                      _out->task_c1,
                                                      &Task_controller__task_controller_task_c_window_out_st);
  _out->task_c_window = Task_controller__task_controller_task_c_window_out_st.task_c_window;
}

