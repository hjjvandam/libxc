/* 
  This file was generated automatically with ./scripts/maple2c_new.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_exc/gga_k_exp4.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 3

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t10, t12, t13, t15, t17, t21, t25;
  double t26, t28, t29, t31, t35, t37, t39, t42;
  double t43, t44, t45, t49, t52, t55, t56, t57;
  double t60, t68, t69, t70, t74, t76, t77, t87;
  double t92, t93, t97, t100, t103, t104, t105, t106;
  double t111, t114, t118, t123, t130, t131, t132, t134;
  double t140, t149, t151, t157, t179, t198, t249;


  t1 = M_CBRT6;
  t2 = t1 * t1;
  t3 = M_PI * M_PI;
  t4 = POW_1_3(t3);
  t5 = t4 * t4;
  t6 = t2 * t5;
  t7 = M_CBRT2;
  t8 = POW_1_3(rho[0]);
  t9 = t8 * t8;
  t10 = t7 * t9;
  t12 = t1 / t5;
  t13 = t7 * t7;
  t15 = rho[0] * rho[0];
  t17 = 0.1e1 / t9 / t15;
  t21 = exp(-0.83254166666666666664e1 * t12 * sigma[0] * t13 * t17);
  t25 = t2 / t4 / t3;
  t26 = sigma[0] * sigma[0];
  t28 = t15 * t15;
  t29 = t28 * rho[0];
  t31 = 0.1e1 / t8 / t29;
  t35 = exp(-0.15095833333333333333e-1 * t25 * t26 * t7 * t31);
  t37 = 0.20788e1 - 0.8524e0 * t21 - 0.12264e1 * t35;
  t39 = t6 * t10 * t37;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = 0.3e1 / 0.20e2 * t39;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t42 = t9 * rho[0] * t2;
  t43 = t5 * t7;
  t44 = t12 * sigma[0];
  t45 = t15 * rho[0];
  t49 = t13 / t9 / t45 * t21;
  t52 = t25 * t26;
  t55 = 0.1e1 / t8 / t28 / t15;
  t56 = t7 * t55;
  t57 = t56 * t35;
  t60 = -0.18924227111111111110e2 * t44 * t49 - 0.98738826666666666664e-1 * t52 * t57;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t39 / 0.4e1 + 0.3e1 / 0.20e2 * t42 * t43 * t60;

  t68 = t25 * sigma[0];
  t69 = t7 * t31;
  t70 = t69 * t35;
  t74 = t43 * (0.70965851666666666664e1 * t12 * t13 * t17 * t21 + 0.37027059999999999999e-1 * t68 * t70);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.3e1 / 0.20e2 * t42 * t74;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t76 = 0.1e1 / t8;
  t77 = t7 * t76;
  t87 = t13 / t9 / t28 * t21;
  t92 = 0.1e1 / t8 / t28 / t45;
  t93 = t7 * t92;
  t97 = t93 * t35;
  t100 = t3 * t3;
  t103 = t1 / t5 / t100;
  t104 = t26 * t26;
  t105 = t103 * t104;
  t106 = t28 * t28;
  t111 = t13 / t9 / t106 / t28 * t35;
  t114 = 0.69388832740740740737e2 * t44 * t87 - 0.84027773757135802460e3 * t52 * t93 * t21 + 0.62534590222222222221e0 * t52 * t97 - 0.47697435868444444442e-1 * t105 * t111;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = t6 * t77 * t37 / 0.6e1 + t6 * t10 * t60 / 0.2e1 + 0.3e1 / 0.20e2 * t42 * t43 * t114;

  t118 = t9 * t2;
  t123 = t25 * t7;
  t130 = t26 * sigma[0];
  t131 = t103 * t130;
  t132 = t106 * t45;
  t134 = 0.1e1 / t9 / t132;
  t140 = t43 * (-0.18924227111111111110e2 * t12 * t49 + 0.31510415158925925923e3 * t123 * t55 * sigma[0] * t21 - 0.19747765333333333333e0 * t68 * t57 + 0.17886538450666666666e-1 * t131 * t13 * t134 * t35);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t118 * t74 / 0.4e1 + 0.3e1 / 0.20e2 * t42 * t140;

  t149 = t106 * t15;
  t151 = 0.1e1 / t9 / t149;
  t157 = t43 * (-0.11816405684597222222e3 * t25 * t69 * t21 + 0.37027059999999999999e-1 * t25 * t70 - 0.67074519189999999998e-2 * t103 * t26 * t13 * t151 * t35);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.3e1 / 0.20e2 * t42 * t157;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t179 = t7 / t8 / t106;
  t198 = t106 * t106;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -t6 * t7 / t8 / rho[0] * t37 / 0.18e2 + t6 * t77 * t60 / 0.2e1 + 0.3e1 / 0.4e1 * t6 * t10 * t114 + 0.3e1 / 0.20e2 * t42 * t43 * (-0.32381455279012345677e3 * t44 * t13 / t9 / t29 * t21 + 0.92430551132849382706e4 * t52 * t179 * t21 - 0.22981550347701583984e4 * t130 / t132 * t21 - 0.45858699496296296295e1 * t52 * t179 * t35 + 0.90625128150044444440e0 * t105 * t13 / t9 / t106 / t29 * t35 - 0.48566087447029087710e-5 * t104 * t26 / t198 / t45 * t35);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = t76 * t2 * t74 / 0.6e1 + t118 * t140 / 0.2e1 + 0.3e1 / 0.20e2 * t42 * t43 * (0.69388832740740740737e2 * t12 * t87 - 0.28359373643033333331e4 * t123 * t92 * sigma[0] * t21 + 0.86180813803880939941e3 / t149 * t26 * t21 + 0.12506918044444444444e1 * t68 * t97 - 0.30407115366133333332e0 * t131 * t111 + 0.18212282792635907892e-5 * t104 * sigma[0] / t198 / t15 * t35);

  t249 = t103 * t13;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = t118 * t157 / 0.4e1 + 0.3e1 / 0.20e2 * t42 * t43 * (0.63020830317851851851e3 * t25 * t56 * t21 - 0.32317805176455352480e3 / t106 / rho[0] * sigma[0] * t21 - 0.19747765333333333333e0 * t25 * t57 + 0.89432692253333333331e-1 * t249 * t134 * t26 * t35 - 0.68296060472384654594e-6 * t104 / t198 / rho[0] * t35);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = 0.3e1 / 0.20e2 * t42 * t43 * (0.12119176941170757180e3 / t106 * t21 - 0.20122355757000000000e-1 * t249 * t151 * sigma[0] * t35 + 0.25611022677144245472e-6 * t130 / t198 * t35);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t10, t11, t13, t17, t21, t22, t23, t24;
  double t26, t30, t32, t34, t37, t38, t40, t47;
  double t52, t64, t66, t73, t80, t81, t88, t91;
  double t92, t93, t96, t101, t105, t111, t118, t119;
  double t121, t127, t136, t138, t144, t164, t183, t200;


  t1 = M_CBRT6;
  t2 = t1 * t1;
  t3 = M_PI * M_PI;
  t4 = POW_1_3(t3);
  t5 = t4 * t4;
  t6 = t2 * t5;
  t7 = POW_1_3(rho[0]);
  t8 = t7 * t7;
  t10 = t1 / t5;
  t11 = rho[0] * rho[0];
  t13 = 0.1e1 / t8 / t11;
  t17 = exp(-0.83254166666666666664e1 * t10 * sigma[0] * t13);
  t21 = t2 / t4 / t3;
  t22 = sigma[0] * sigma[0];
  t23 = t11 * t11;
  t24 = t23 * rho[0];
  t26 = 0.1e1 / t7 / t24;
  t30 = exp(-0.75479166666666666666e-2 * t21 * t22 * t26);
  t32 = 0.20788e1 - 0.8524e0 * t17 - 0.12264e1 * t30;
  t34 = t6 * t8 * t32;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = 0.3e1 / 0.10e2 * t34;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t37 = t8 * rho[0] * t2;
  t38 = t11 * rho[0];
  t40 = 0.1e1 / t8 / t38;
  t47 = 0.1e1 / t7 / t23 / t11;
  t52 = -0.18924227111111111110e2 * t10 * sigma[0] * t40 * t17 - 0.49369413333333333333e-1 * t21 * t22 * t47 * t30;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t34 / 0.2e1 + 0.3e1 / 0.10e2 * t37 * t5 * t52;

  t64 = t5 * (0.70965851666666666664e1 * t10 * t13 * t17 + 0.18513530000000000000e-1 * t21 * sigma[0] * t26 * t30);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.3e1 / 0.10e2 * t37 * t64;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t66 = 0.1e1 / t7;
  t73 = 0.1e1 / t8 / t23;
  t80 = 0.1e1 / t7 / t23 / t38;
  t81 = t22 * t80;
  t88 = t3 * t3;
  t91 = t1 / t5 / t88;
  t92 = t22 * t22;
  t93 = t23 * t23;
  t96 = 0.1e1 / t8 / t93 / t23;
  t101 = 0.69388832740740740737e2 * t10 * sigma[0] * t73 * t17 - 0.42013886878567901230e3 * t21 * t81 * t17 + 0.31267295111111111111e0 * t21 * t81 * t30 - 0.11924358967111111111e-1 * t91 * t92 * t96 * t30;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = t6 * t66 * t32 / 0.3e1 + t6 * t8 * t52 + 0.3e1 / 0.10e2 * t37 * t5 * t101;

  t105 = t8 * t2;
  t111 = t47 * sigma[0];
  t118 = t22 * sigma[0];
  t119 = t93 * t38;
  t121 = 0.1e1 / t8 / t119;
  t127 = t5 * (-0.18924227111111111110e2 * t10 * t40 * t17 + 0.15755207579462962962e3 * t21 * t111 * t17 - 0.98738826666666666667e-1 * t21 * t111 * t30 + 0.44716346126666666666e-2 * t91 * t118 * t121 * t30);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t105 * t64 / 0.2e1 + 0.3e1 / 0.10e2 * t37 * t127;

  t136 = t93 * t11;
  t138 = 0.1e1 / t8 / t136;
  t144 = t5 * (-0.59082028422986111107e2 * t21 * t26 * t17 + 0.18513530000000000000e-1 * t21 * t26 * t30 - 0.16768629797500000000e-2 * t91 * t22 * t138 * t30);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.3e1 / 0.10e2 * t37 * t144;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t164 = t22 / t7 / t93;
  t183 = t93 * t93;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -t6 / t7 / rho[0] * t32 / 0.9e1 + t6 * t66 * t52 + 0.3e1 / 0.2e1 * t6 * t8 * t101 + 0.3e1 / 0.10e2 * t37 * t5 * (-0.32381455279012345677e3 * t10 * sigma[0] / t8 / t24 * t17 + 0.46215275566424691353e4 * t21 * t164 * t17 - 0.57453875869253959957e3 * t118 / t119 * t17 - 0.22929349748148148148e1 * t21 * t164 * t30 + 0.22656282037511111111e0 * t91 * t92 / t8 / t93 / t24 * t30 - 0.30353804654393179820e-6 * t92 * t22 / t183 / t38 * t30);

  t200 = t80 * sigma[0];
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = t66 * t2 * t64 / 0.3e1 + t105 * t127 + 0.3e1 / 0.10e2 * t37 * t5 * (0.69388832740740740737e2 * t10 * t73 * t17 - 0.14179686821516666666e4 * t21 * t200 * t17 + 0.21545203450970234985e3 / t136 * t22 * t17 + 0.62534590222222222222e0 * t21 * t200 * t30 - 0.76017788415333333332e-1 * t91 * t118 * t96 * t30 + 0.11382676745397442432e-6 * t92 * sigma[0] / t183 / t11 * t30);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = t105 * t144 / 0.2e1 + 0.3e1 / 0.10e2 * t37 * t5 * (0.31510415158925925924e3 * t21 * t47 * t17 - 0.80794512941138381193e2 / t93 / rho[0] * sigma[0] * t17 - 0.98738826666666666667e-1 * t21 * t47 * t30 + 0.22358173063333333334e-1 * t91 * t121 * t22 * t30 - 0.42685037795240409122e-7 * t92 / t183 / rho[0] * t30);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = 0.3e1 / 0.10e2 * t37 * t5 * (0.30297942352926892948e2 / t93 * t17 - 0.50305889392500000000e-2 * t91 * t138 * sigma[0] * t30 + 0.16006889173215153421e-7 * t118 / t183 * t30);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t10, t12, t13, t14, t15, t16, t17;
  double t18, t20, t21, t22, t23, t25, t29, t33;
  double t34, t35, t36, t38, t42, t44, t46, t48;
  double t49, t50, t51, t52, t53, t54, t55, t57;
  double t61, t63, t64, t65, t67, t71, t73, t75;
  double t77, t78, t79, t80, t81, t82, t83, t85;
  double t87, t88, t89, t90, t92, t93, t94, t96;
  double t103, t108, t110, t111, t112, t113, t114, t116;
  double t117, t118, t120, t121, t125, t127, t128, t129;
  double t131, t132, t133, t135, t142, t147, t149, t150;
  double t154, t155, t163, t166, t174, t177, t179, t180;
  double t181, t182, t184, t185, t186, t188, t189, t190;
  double t192, t193, t194, t195, t196, t198, t199, t201;
  double t202, t204, t205, t207, t208, t210, t217, t218;
  double t225, t228, t229, t230, t233, t238, t240, t241;
  double t242, t243, t244, t246, t247, t248, t250, t251;
  double t252, t254, t255, t256, t258, t259, t260, t262;
  double t264, t267, t270, t273, t274, t276, t280, t282;
  double t285, t287, t289, t292, t294, t297, t299, t302;
  double t304, t305, t306, t307, t309, t310, t311, t313;
  double t314, t315, t317, t318, t320, t321, t322, t324;
  double t331, t332, t339, t340, t343, t348, t350, t351;
  double t352, t355, t357, t358, t365, t372, t373, t375;
  double t380, t385, t386, t390, t394, t400, t407, t408;
  double t410, t415, t416, t425, t427, t432, t433, t441;
  double t443, t448, t449, t455, t457, t462, t464, t467;
  double t468, t475, t477, t479, t486, t488, t496, t500;
  double t506, t511, t513, t517, t523, t528, t530, t533;
  double t536, t546, t565, t575, t582, t583, t585, t606;
  double t610, t612, t615, t618, t624, t629, t632, t635;
  double t661, t672, t673, t676, t682, t685, t688, t691;
  double t694, t703, t714, t719, t723, t757, t760, t796;
  double t815, t828, t844, t849, t853, t855, t856, t860;
  double t869, t896, t900, t901, t910, t911, t912, t921;
  double t926, t934, t936, t959, t984, t986, t1014, t1015;


  t1 = M_CBRT6;
  t2 = t1 * t1;
  t3 = M_PI * M_PI;
  t4 = POW_1_3(t3);
  t5 = t4 * t4;
  t6 = t2 * t5;
  t7 = rho[0] - rho[1];
  t8 = rho[0] + rho[1];
  t9 = 0.1e1 / t8;
  t10 = t7 * t9;
  t12 = 0.1e1 / 0.2e1 + t10 / 0.2e1;
  t13 = POW_1_3(t12);
  t14 = t13 * t13;
  t15 = t14 * t12;
  t16 = POW_1_3(t8);
  t17 = t16 * t16;
  t18 = t15 * t17;
  t20 = t1 / t5;
  t21 = rho[0] * rho[0];
  t22 = POW_1_3(rho[0]);
  t23 = t22 * t22;
  t25 = 0.1e1 / t23 / t21;
  t29 = exp(-0.83254166666666666664e1 * t20 * sigma[0] * t25);
  t33 = t2 / t4 / t3;
  t34 = sigma[0] * sigma[0];
  t35 = t21 * t21;
  t36 = t35 * rho[0];
  t38 = 0.1e1 / t22 / t36;
  t42 = exp(-0.75479166666666666666e-2 * t33 * t34 * t38);
  t44 = 0.20788e1 - 0.8524e0 * t29 - 0.12264e1 * t42;
  t46 = t6 * t18 * t44;
  t48 = 0.1e1 / 0.2e1 - t10 / 0.2e1;
  t49 = POW_1_3(t48);
  t50 = t49 * t49;
  t51 = t50 * t48;
  t52 = t51 * t17;
  t53 = rho[1] * rho[1];
  t54 = POW_1_3(rho[1]);
  t55 = t54 * t54;
  t57 = 0.1e1 / t55 / t53;
  t61 = exp(-0.83254166666666666664e1 * t20 * sigma[2] * t57);
  t63 = sigma[2] * sigma[2];
  t64 = t53 * t53;
  t65 = t64 * rho[1];
  t67 = 0.1e1 / t54 / t65;
  t71 = exp(-0.75479166666666666666e-2 * t33 * t63 * t67);
  t73 = 0.20788e1 - 0.8524e0 * t61 - 0.12264e1 * t71;
  t75 = t6 * t52 * t73;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = 0.3e1 / 0.10e2 * t46 + 0.3e1 / 0.10e2 * t75;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t77 = 0.3e1 / 0.10e2 * t46;
  t78 = 0.3e1 / 0.10e2 * t75;
  t79 = t6 * t14;
  t80 = t17 * t44;
  t81 = t8 * t8;
  t82 = 0.1e1 / t81;
  t83 = t7 * t82;
  t85 = t9 / 0.2e1 - t83 / 0.2e1;
  t87 = t79 * t80 * t85;
  t88 = t87 / 0.2e1;
  t89 = 0.1e1 / t16;
  t90 = t15 * t89;
  t92 = t6 * t90 * t44;
  t93 = t92 / 0.5e1;
  t94 = t21 * rho[0];
  t96 = 0.1e1 / t23 / t94;
  t103 = 0.1e1 / t22 / t35 / t21;
  t108 = -0.18924227111111111110e2 * t20 * sigma[0] * t96 * t29 - 0.49369413333333333333e-1 * t33 * t34 * t103 * t42;
  t110 = t6 * t18 * t108;
  t111 = 0.3e1 / 0.10e2 * t110;
  t112 = t6 * t50;
  t113 = t17 * t73;
  t114 = -t85;
  t116 = t112 * t113 * t114;
  t117 = t116 / 0.2e1;
  t118 = t51 * t89;
  t120 = t6 * t118 * t73;
  t121 = t120 / 0.5e1;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t77 + t78 + t8 * (t88 + t93 + t111 + t117 + t121);

  t125 = -t9 / 0.2e1 - t83 / 0.2e1;
  t127 = t79 * t80 * t125;
  t128 = t127 / 0.2e1;
  t129 = -t125;
  t131 = t112 * t113 * t129;
  t132 = t131 / 0.2e1;
  t133 = t53 * rho[1];
  t135 = 0.1e1 / t55 / t133;
  t142 = 0.1e1 / t54 / t64 / t53;
  t147 = -0.18924227111111111110e2 * t20 * sigma[2] * t135 * t61 - 0.49369413333333333333e-1 * t33 * t63 * t142 * t71;
  t149 = t6 * t52 * t147;
  t150 = 0.3e1 / 0.10e2 * t149;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t77 + t78 + t8 * (t128 + t93 + t132 + t121 + t150);

  t154 = t17 * t8 * t2;
  t155 = t5 * t15;
  t163 = 0.70965851666666666664e1 * t20 * t25 * t29 + 0.18513530000000000000e-1 * t33 * sigma[0] * t38 * t42;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.3e1 / 0.10e2 * t154 * t155 * t163;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  t166 = t5 * t51;
  t174 = 0.70965851666666666664e1 * t20 * t57 * t61 + 0.18513530000000000000e-1 * t33 * sigma[2] * t67 * t71;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = 0.3e1 / 0.10e2 * t154 * t166 * t174;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t177 = 0.2e1 / 0.5e1 * t92;
  t179 = 0.2e1 / 0.5e1 * t120;
  t180 = 0.1e1 / t13;
  t181 = t6 * t180;
  t182 = t85 * t85;
  t184 = t181 * t80 * t182;
  t185 = t184 / 0.3e1;
  t186 = t89 * t44;
  t188 = t79 * t186 * t85;
  t189 = 0.2e1 / 0.3e1 * t188;
  t190 = t17 * t108;
  t192 = t79 * t190 * t85;
  t193 = t81 * t8;
  t194 = 0.1e1 / t193;
  t195 = t7 * t194;
  t196 = -t82 + t195;
  t198 = t79 * t80 * t196;
  t199 = t198 / 0.2e1;
  t201 = 0.1e1 / t16 / t8;
  t202 = t15 * t201;
  t204 = t6 * t202 * t44;
  t205 = t204 / 0.15e2;
  t207 = t6 * t90 * t108;
  t208 = 0.2e1 / 0.5e1 * t207;
  t210 = 0.1e1 / t23 / t35;
  t217 = 0.1e1 / t22 / t35 / t94;
  t218 = t34 * t217;
  t225 = t3 * t3;
  t228 = t1 / t5 / t225;
  t229 = t34 * t34;
  t230 = t35 * t35;
  t233 = 0.1e1 / t23 / t230 / t35;
  t238 = 0.69388832740740740737e2 * t20 * sigma[0] * t210 * t29 - 0.42013886878567901230e3 * t33 * t218 * t29 + 0.31267295111111111111e0 * t33 * t218 * t42 - 0.11924358967111111111e-1 * t228 * t229 * t233 * t42;
  t240 = t6 * t18 * t238;
  t241 = 0.3e1 / 0.10e2 * t240;
  t242 = 0.1e1 / t49;
  t243 = t6 * t242;
  t244 = t114 * t114;
  t246 = t243 * t113 * t244;
  t247 = t246 / 0.3e1;
  t248 = t89 * t73;
  t250 = t112 * t248 * t114;
  t251 = 0.2e1 / 0.3e1 * t250;
  t252 = -t196;
  t254 = t112 * t113 * t252;
  t255 = t254 / 0.2e1;
  t256 = t51 * t201;
  t258 = t6 * t256 * t73;
  t259 = t258 / 0.15e2;
  t260 = t185 + t189 + t192 + t199 - t205 + t208 + t241 + t247 + t251 + t255 - t259;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = t87 + t177 + 0.3e1 / 0.5e1 * t110 + t116 + t179 + t8 * t260;

  t262 = t125 * t85;
  t264 = t181 * t80 * t262;
  t267 = t79 * t186 * t125;
  t270 = t79 * t190 * t125;
  t273 = 0.1e1 / t16 / t81;
  t274 = t273 * t44;
  t276 = t79 * t274 * t7;
  t280 = t129 * t114;
  t282 = t243 * t113 * t280;
  t285 = t112 * t248 * t129;
  t287 = t273 * t73;
  t289 = t112 * t287 * t7;
  t292 = t17 * t147;
  t294 = t112 * t292 * t114;
  t297 = t6 * t118 * t147;
  t299 = t264 / 0.3e1 + t267 / 0.3e1 + t270 / 0.2e1 + t276 / 0.2e1 + t188 / 0.3e1 - t205 + t207 / 0.5e1 + t282 / 0.3e1 + t285 / 0.3e1 - t289 / 0.2e1 + t250 / 0.3e1 - t259 + t294 / 0.2e1 + t297 / 0.5e1;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t8 * t299 + t111 + t117 + t128 + t132 + t150 + t177 + t179 + t88;

  t302 = t125 * t125;
  t304 = t181 * t80 * t302;
  t305 = t304 / 0.3e1;
  t306 = 0.2e1 / 0.3e1 * t267;
  t307 = t82 + t195;
  t309 = t79 * t80 * t307;
  t310 = t309 / 0.2e1;
  t311 = t129 * t129;
  t313 = t243 * t113 * t311;
  t314 = t313 / 0.3e1;
  t315 = 0.2e1 / 0.3e1 * t285;
  t317 = t112 * t292 * t129;
  t318 = -t307;
  t320 = t112 * t113 * t318;
  t321 = t320 / 0.2e1;
  t322 = 0.2e1 / 0.5e1 * t297;
  t324 = 0.1e1 / t55 / t64;
  t331 = 0.1e1 / t54 / t64 / t133;
  t332 = t63 * t331;
  t339 = t63 * t63;
  t340 = t64 * t64;
  t343 = 0.1e1 / t55 / t340 / t64;
  t348 = 0.69388832740740740737e2 * t20 * sigma[2] * t324 * t61 - 0.42013886878567901230e3 * t33 * t332 * t61 + 0.31267295111111111111e0 * t33 * t332 * t71 - 0.11924358967111111111e-1 * t228 * t339 * t343 * t71;
  t350 = t6 * t52 * t348;
  t351 = 0.3e1 / 0.10e2 * t350;
  t352 = t305 + t306 + t310 - t205 + t314 + t315 + t317 + t321 - t259 + t322 + t351;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = t127 + t177 + t131 + t179 + 0.3e1 / 0.5e1 * t149 + t8 * t352;

  t355 = t6 * t18 * t163;
  t357 = t154 * t5;
  t358 = t14 * t163;
  t365 = t103 * sigma[0];
  t372 = t34 * sigma[0];
  t373 = t230 * t94;
  t375 = 0.1e1 / t23 / t373;
  t380 = -0.18924227111111111110e2 * t20 * t96 * t29 + 0.15755207579462962962e3 * t33 * t365 * t29 - 0.98738826666666666667e-1 * t33 * t365 * t42 + 0.44716346126666666666e-2 * t228 * t372 * t375 * t42;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t355 / 0.2e1 + t357 * t358 * t85 / 0.2e1 + 0.3e1 / 0.10e2 * t154 * t155 * t380;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  t385 = t6 * t52 * t174;
  t386 = t50 * t174;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = t357 * t386 * t114 / 0.2e1 + t385 / 0.2e1;

  t390 = t358 * t125;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = t357 * t390 / 0.2e1 + t355 / 0.2e1;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t394 = t386 * t129;
  t400 = t142 * sigma[2];
  t407 = t63 * sigma[2];
  t408 = t340 * t133;
  t410 = 0.1e1 / t55 / t408;
  t415 = -0.18924227111111111110e2 * t20 * t135 * t61 + 0.15755207579462962962e3 * t33 * t400 * t61 - 0.98738826666666666667e-1 * t33 * t400 * t71 + 0.44716346126666666666e-2 * t228 * t407 * t410 * t71;
  t416 = t166 * t415;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = t385 / 0.2e1 + t357 * t394 / 0.2e1 + 0.3e1 / 0.10e2 * t154 * t416;

  t425 = t230 * t21;
  t427 = 0.1e1 / t23 / t425;
  t432 = -0.59082028422986111107e2 * t33 * t38 * t29 + 0.18513530000000000000e-1 * t33 * t38 * t42 - 0.16768629797500000000e-2 * t228 * t34 * t427 * t42;
  t433 = t155 * t432;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.3e1 / 0.10e2 * t154 * t433;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  t441 = t340 * t53;
  t443 = 0.1e1 / t55 / t441;
  t448 = -0.59082028422986111107e2 * t33 * t67 * t61 + 0.18513530000000000000e-1 * t33 * t67 * t71 - 0.16768629797500000000e-2 * t228 * t63 * t443 * t71;
  t449 = t166 * t448;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = 0.3e1 / 0.10e2 * t154 * t449;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t455 = t204 / 0.5e1;
  t457 = t258 / 0.5e1;
  t462 = t89 * t108;
  t464 = t79 * t462 * t85;
  t467 = t79 * t186 * t196;
  t468 = t17 * t238;
  t475 = t81 * t81;
  t477 = t7 / t475;
  t479 = 0.3e1 * t194 - 0.3e1 * t477;
  t486 = 0.4e1 / 0.45e2 * t6 * t15 * t273 * t44;
  t488 = t112 * t248 * t252;
  t496 = 0.4e1 / 0.45e2 * t6 * t51 * t273 * t73;
  t500 = t6 / t13 / t12;
  t506 = t181 * t186 * t182;
  t511 = t201 * t44;
  t513 = t79 * t511 * t85;
  t517 = t6 / t49 / t48;
  t523 = t243 * t248 * t244;
  t528 = t201 * t73;
  t530 = t112 * t528 * t114;
  t533 = t6 * t202 * t108;
  t536 = t6 * t90 * t238;
  t546 = t34 / t22 / t230;
  t565 = t230 * t230;
  t575 = -t500 * t80 * t182 * t85 / 0.9e1 + 0.2e1 / 0.3e1 * t506 + t181 * t80 * t85 * t196 - t513 / 0.3e1 - t517 * t113 * t244 * t114 / 0.9e1 + 0.2e1 / 0.3e1 * t523 + t243 * t113 * t114 * t252 - t530 / 0.3e1 - t533 / 0.5e1 + 0.3e1 / 0.5e1 * t536 + 0.3e1 / 0.10e2 * t6 * t18 * (-0.32381455279012345677e3 * t20 * sigma[0] / t23 / t36 * t29 + 0.46215275566424691353e4 * t33 * t546 * t29 - 0.57453875869253959957e3 * t372 / t373 * t29 - 0.22929349748148148148e1 * t33 * t546 * t42 + 0.22656282037511111111e0 * t228 * t229 / t23 / t230 / t36 * t42 - 0.30353804654393179820e-6 * t229 * t34 / t565 / t94 * t42);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.6e1 / 0.5e1 * t207 + 0.9e1 / 0.10e2 * t240 + 0.3e1 * t192 + 0.3e1 / 0.2e1 * t198 - t455 + 0.3e1 / 0.2e1 * t254 - t457 + t184 + 0.2e1 * t188 + t246 + 0.2e1 * t250 + t8 * (t181 * t190 * t182 + 0.2e1 * t464 + t467 + 0.3e1 / 0.2e1 * t79 * t468 * t85 + 0.3e1 / 0.2e1 * t79 * t190 * t196 + t79 * t80 * t479 / 0.2e1 + t486 + t488 - t112 * t113 * t479 / 0.2e1 + t496 + t575);

  t582 = 0.2e1 / 0.3e1 * t264;
  t583 = 0.2e1 / 0.3e1 * t282;
  t585 = t6 * t256 * t147;
  t606 = 0.2e1 / 0.3e1 * t79 * t462 * t125;
  t610 = -t585 / 0.15e2 + t6 * t14 * t273 * t44 / 0.2e1 - t6 * t50 * t273 * t73 / 0.2e1 + t486 + t496 - 0.2e1 / 0.15e2 * t533 + t536 / 0.5e1 + 0.2e1 / 0.3e1 * t464 + t467 / 0.3e1 + t488 / 0.3e1 + 0.2e1 / 0.9e1 * t506 - 0.2e1 / 0.9e1 * t513 + 0.2e1 / 0.9e1 * t523 - 0.2e1 / 0.9e1 * t530 + t606 + t79 * t468 * t125 / 0.2e1;
  t612 = t79 * t511 * t125;
  t615 = 0.1e1 / t16 / t193;
  t618 = t79 * t615 * t44 * t7;
  t624 = t112 * t528 * t129;
  t629 = t89 * t147;
  t632 = 0.2e1 / 0.3e1 * t112 * t629 * t114;
  t635 = t112 * t615 * t73 * t7;
  t661 = 0.4e1 / 0.9e1 * t181 * t186 * t262;
  t672 = 0.4e1 / 0.9e1 * t243 * t248 * t280;
  t673 = -t612 / 0.9e1 - 0.5e1 / 0.6e1 * t618 + t79 * t273 * t108 * t7 - t624 / 0.9e1 + t243 * t292 * t244 / 0.3e1 + t632 + 0.5e1 / 0.6e1 * t635 + t112 * t292 * t252 / 0.2e1 + 0.2e1 / 0.3e1 * t181 * t190 * t262 + t181 * t80 * t125 * t196 / 0.3e1 + t243 * t113 * t129 * t252 / 0.3e1 - 0.2e1 / 0.3e1 * t243 * t287 * t7 * t114 - t500 * t80 * t125 * t182 / 0.9e1 + t661 + 0.2e1 / 0.3e1 * t181 * t274 * t7 * t85 - t517 * t113 * t129 * t244 / 0.9e1 + t672;
  t676 = t322 + t185 + 0.4e1 / 0.3e1 * t188 + t247 + 0.4e1 / 0.3e1 * t250 + t582 + t306 + t276 + t583 + t315 + t8 * (t610 + t673);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = 0.4e1 / 0.5e1 * t207 + t241 + t192 + t199 - t455 + t255 - t457 + t270 - t289 + t294 + t676;

  t682 = t181 * t186 * t302;
  t685 = t79 * t186 * t307;
  t688 = t243 * t248 * t311;
  t691 = t112 * t629 * t129;
  t694 = t112 * t248 * t318;
  t703 = -t194 - 0.3e1 * t477;
  t714 = t17 * t348;
  t719 = t6 * t118 * t348;
  t723 = 0.2e1 / 0.9e1 * t682 + t685 / 0.3e1 + 0.2e1 / 0.9e1 * t688 + 0.2e1 / 0.3e1 * t691 + t694 / 0.3e1 + t181 * t190 * t302 / 0.3e1 + t79 * t190 * t307 / 0.2e1 + t79 * t80 * t703 / 0.2e1 - t112 * t273 * t147 * t7 - t112 * t113 * t703 / 0.2e1 + t112 * t714 * t114 / 0.2e1 + t719 / 0.5e1 - 0.2e1 / 0.15e2 * t585 + t486 + t496 - t533 / 0.15e2;
  t757 = -t513 / 0.9e1 - t530 / 0.9e1 + t606 - 0.2e1 / 0.9e1 * t612 + 0.2e1 / 0.3e1 * t618 - 0.2e1 / 0.9e1 * t624 + t632 - 0.2e1 / 0.3e1 * t635 + t661 + t672 - t500 * t80 * t302 * t85 / 0.9e1 + t181 * t80 * t307 * t85 / 0.3e1 - t517 * t113 * t311 * t114 / 0.9e1 - 0.2e1 / 0.3e1 * t243 * t287 * t129 * t7 + 0.2e1 / 0.3e1 * t243 * t292 * t280 + t243 * t113 * t318 * t114 / 0.3e1 + 0.2e1 / 0.3e1 * t181 * t274 * t125 * t7;
  t760 = t321 + t189 + t251 + t582 + 0.4e1 / 0.3e1 * t267 + t276 + t583 + 0.4e1 / 0.3e1 * t285 + t305 + t314 + t8 * (t723 + t757);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t208 + t351 - t455 - t457 + t270 - t289 + t294 + 0.4e1 / 0.5e1 * t297 + t310 + t317 + t760;

  t796 = t63 / t54 / t340;
  t815 = t340 * t340;
  t828 = -0.3e1 * t194 - 0.3e1 * t477;
  t844 = t181 * t80 * t125 * t307 - t517 * t113 * t311 * t129 / 0.9e1 + t243 * t113 * t129 * t318 + 0.3e1 / 0.10e2 * t6 * t52 * (-0.32381455279012345677e3 * t20 * sigma[2] / t55 / t65 * t61 + 0.46215275566424691353e4 * t33 * t796 * t61 - 0.57453875869253959957e3 * t407 / t408 * t61 - 0.22929349748148148148e1 * t33 * t796 * t71 + 0.22656282037511111111e0 * t228 * t339 / t55 / t340 / t65 * t71 - 0.30353804654393179820e-6 * t339 * t63 / t815 / t133 * t71) - t585 / 0.5e1 + 0.3e1 / 0.5e1 * t719 + t79 * t80 * t828 / 0.2e1 + t243 * t292 * t311 + 0.3e1 / 0.2e1 * t112 * t714 * t129 + 0.3e1 / 0.2e1 * t112 * t292 * t318 - t112 * t113 * t828 / 0.2e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = 0.9e1 / 0.10e2 * t350 - t455 - t457 + 0.6e1 / 0.5e1 * t297 + 0.3e1 / 0.2e1 * t309 + 0.3e1 * t317 + 0.3e1 / 0.2e1 * t320 + 0.2e1 * t267 + 0.2e1 * t285 + t304 + t313 + t8 * (t486 + t496 - t612 / 0.3e1 - t624 / 0.3e1 + 0.2e1 / 0.3e1 * t682 + t685 + 0.2e1 / 0.3e1 * t688 + 0.2e1 * t691 + t694 - t500 * t80 * t302 * t125 / 0.9e1 + t844);

  t849 = t79 * t17 * t163 * t85;
  t853 = t6 * t90 * t163 / 0.3e1;
  t855 = t6 * t18 * t380;
  t856 = t180 * t163;
  t860 = t14 * t380;
  t869 = t217 * sigma[0];
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = 0.5e1 / 0.3e1 * t849 + t853 + t855 + t357 * t856 * t182 / 0.3e1 + t357 * t860 * t85 + t357 * t358 * t196 / 0.2e1 + 0.3e1 / 0.10e2 * t154 * t155 * (0.69388832740740740737e2 * t20 * t210 * t29 - 0.14179686821516666666e4 * t33 * t869 * t29 + 0.21545203450970234985e3 / t425 * t34 * t29 + 0.62534590222222222222e0 * t33 * t869 * t42 - 0.76017788415333333332e-1 * t228 * t372 * t233 * t42 + 0.11382676745397442432e-6 * t229 * sigma[0] / t565 / t21 * t42);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[1] = 0.0e0;

  t896 = t112 * t17 * t174 * t114;
  t900 = t6 * t118 * t174 / 0.3e1;
  t901 = t242 * t174;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[2] = 0.5e1 / 0.3e1 * t896 + t900 + t357 * t901 * t244 / 0.3e1 + t357 * t386 * t252 / 0.2e1;

  t910 = t17 * t2;
  t911 = t910 * t5;
  t912 = t911 * t390;
  t921 = t201 * t2 * t5;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[3] = 0.5e1 / 0.6e1 * t849 + t853 + t855 / 0.2e1 + 0.5e1 / 0.6e1 * t912 + t357 * t856 * t262 / 0.3e1 + t357 * t860 * t125 / 0.2e1 + t921 * t358 * t7 / 0.2e1;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[4] = 0.0e0;

  t926 = t911 * t394;
  t934 = t910 * t416;
  t936 = t50 * t415;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[5] = 0.5e1 / 0.6e1 * t896 + t900 + 0.5e1 / 0.6e1 * t926 + t357 * t901 * t280 / 0.3e1 - t921 * t386 * t7 / 0.2e1 + t934 / 0.2e1 + t357 * t936 * t114 / 0.2e1;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[6] = 0.5e1 / 0.3e1 * t912 + t853 + t357 * t856 * t302 / 0.3e1 + t357 * t358 * t307 / 0.2e1;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[7] = 0.0e0;

  t959 = t331 * sigma[2];
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[8] = 0.5e1 / 0.3e1 * t926 + t900 + t934 + t357 * t901 * t311 / 0.3e1 + t357 * t936 * t129 + t357 * t386 * t318 / 0.2e1 + 0.3e1 / 0.10e2 * t154 * t166 * (0.69388832740740740737e2 * t20 * t324 * t61 - 0.14179686821516666666e4 * t33 * t959 * t61 + 0.21545203450970234985e3 / t441 * t63 * t61 + 0.62534590222222222222e0 * t33 * t959 * t71 - 0.76017788415333333332e-1 * t228 * t407 * t343 * t71 + 0.11382676745397442432e-6 * t339 * sigma[2] / t815 / t53 * t71);

  t984 = t910 * t433;
  t986 = t14 * t432;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = t984 / 0.2e1 + t357 * t986 * t85 / 0.2e1 + 0.3e1 / 0.10e2 * t154 * t155 * (0.31510415158925925924e3 * t33 * t103 * t29 - 0.80794512941138381193e2 / t230 / rho[0] * sigma[0] * t29 - 0.98738826666666666667e-1 * t33 * t103 * t42 + 0.22358173063333333334e-1 * t228 * t375 * t34 * t42 - 0.42685037795240409122e-7 * t229 / t565 / rho[0] * t42);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[1] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[2] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[3] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[4] = 0.0e0;

  t1014 = t910 * t449;
  t1015 = t50 * t448;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[5] = t357 * t1015 * t114 / 0.2e1 + t1014 / 0.2e1;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[6] = t357 * t986 * t125 / 0.2e1 + t984 / 0.2e1;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[8] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[9] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[10] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[11] = t1014 / 0.2e1 + t357 * t1015 * t129 / 0.2e1 + 0.3e1 / 0.10e2 * t154 * t166 * (0.31510415158925925924e3 * t33 * t142 * t61 - 0.80794512941138381193e2 / t340 / rho[1] * sigma[2] * t61 - 0.98738826666666666667e-1 * t33 * t142 * t71 + 0.22358173063333333334e-1 * t228 * t410 * t63 * t71 - 0.42685037795240409122e-7 * t339 / t815 / rho[1] * t71);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = 0.3e1 / 0.10e2 * t154 * t155 * (0.30297942352926892948e2 / t230 * t29 - 0.50305889392500000000e-2 * t228 * t427 * sigma[0] * t42 + 0.16006889173215153421e-7 * t372 / t565 * t42);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[1] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[2] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[3] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[4] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[5] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[6] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[8] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[9] = 0.3e1 / 0.10e2 * t154 * t166 * (0.30297942352926892948e2 / t340 * t61 - 0.50305889392500000000e-2 * t228 * t443 * sigma[2] * t71 + 0.16006889173215153421e-7 * t407 / t815 * t71);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}

