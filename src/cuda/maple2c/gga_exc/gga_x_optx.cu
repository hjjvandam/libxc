/* 
  This file was generated automatically with ./scripts/maple2c_new.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_exc/gga_x_optx.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 3

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t3, t5, t6, t7, t8, t9, t10;
  double t11, t12, t13, t14, t15, t16, t17, t18;
  double t23, t28, t29, t30, t31, t34, t36, t41;
  double t42, t43, t47, t51, t52, t53, t55, t58;
  double t62, t66, t69, t75, t78, t79, t86, t87;
  double t91, t94, t95, t100, t101, t102, t103, t107;
  double t108, t110, t113, t118, t127, t128, t132, t136;
  double t145, t149, t153, t179, t187, t190, t194;

  gga_x_optx_params *params;
 
  assert(p->params != NULL);
  params = (gga_x_optx_params * )(p->params);

  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = t1 * t3 * t6;
  t8 = M_CBRT2;
  t9 = t8 * t8;
  t10 = POW_1_3(rho[0]);
  t11 = t9 * t10;
  t12 = params->gamma * params->gamma;
  t13 = params->b * t12;
  t14 = sigma[0] * sigma[0];
  t15 = t13 * t14;
  t16 = rho[0] * rho[0];
  t17 = t16 * t16;
  t18 = t17 * rho[0];
  t23 = t10 * t10;
  t28 = 0.1e1 + params->gamma * sigma[0] * t9 / t23 / t16;
  t29 = t28 * t28;
  t30 = 0.1e1 / t29;
  t31 = t8 / t10 / t18 * t30;
  t34 = 0.2e1 * t15 * t31 + params->a;
  t36 = t7 * t11 * t34;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.3e1 / 0.16e2 * t36;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t41 = t10 * rho[0] * t1 * t3;
  t42 = t6 * t9;
  t43 = t17 * t16;
  t47 = t8 / t10 / t43 * t30;
  t51 = params->b * t12 * params->gamma;
  t52 = t14 * sigma[0];
  t53 = t17 * t17;
  t55 = 0.1e1 / t53 / rho[0];
  t58 = 0.1e1 / t29 / t28;
  t62 = -0.32e2 / 0.3e1 * t15 * t47 + 0.64e2 / 0.3e1 * t51 * t52 * t55 * t58;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t36 / 0.4e1 - 0.3e1 / 0.16e2 * t41 * t42 * t62;

  t66 = t13 * sigma[0];
  t69 = 0.1e1 / t53;
  t75 = t42 * (-0.8e1 * t51 * t14 * t69 * t58 + 0.4e1 * t66 * t31);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -0.3e1 / 0.16e2 * t41 * t75;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t78 = 0.1e1 / t23;
  t79 = t9 * t78;
  t86 = t16 * rho[0];
  t87 = t17 * t86;
  t91 = t8 / t10 / t87 * t30;
  t94 = t53 * t16;
  t95 = 0.1e1 / t94;
  t100 = t12 * t12;
  t101 = params->b * t100;
  t102 = t14 * t14;
  t103 = t101 * t102;
  t107 = t29 * t29;
  t108 = 0.1e1 / t107;
  t110 = 0.1e1 / t23 / t53 / t17 * t108 * t9;
  t113 = 0.608e3 / 0.9e1 * t15 * t91 - 0.2752e4 / 0.9e1 * t51 * t52 * t95 * t58 + 0.512e3 / 0.3e1 * t103 * t110;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t7 * t79 * t34 / 0.12e2 - t7 * t11 * t62 / 0.2e1 - 0.3e1 / 0.16e2 * t41 * t42 * t113;

  t118 = t10 * t1 * t3;
  t127 = t101 * t52;
  t128 = t53 * t86;
  t132 = 0.1e1 / t23 / t128 * t108 * t9;
  t136 = t42 * (-0.64e2 / 0.3e1 * t66 * t47 + 0.320e3 / 0.3e1 * t51 * t14 * t55 * t58 - 0.64e2 * t127 * t132);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -t118 * t75 / 0.4e1 - 0.3e1 / 0.16e2 * t41 * t136;

  t145 = t101 * t14;
  t149 = 0.1e1 / t23 / t94 * t108 * t9;
  t153 = t42 * (-0.32e2 * t51 * sigma[0] * t69 * t58 + 0.4e1 * t13 * t31 + 0.24e2 * t145 * t149);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = -0.3e1 / 0.16e2 * t41 * t153;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t179 = t53 * t18;
  t187 = params->b * t100 * params->gamma;
  t190 = t53 * t53;
  t194 = 0.1e1 / t107 / t28;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t7 * t9 / t23 / rho[0] * t34 / 0.18e2 - t7 * t79 * t62 / 0.4e1 - 0.3e1 / 0.4e1 * t7 * t11 * t113 - 0.3e1 / 0.16e2 * t41 * t42 * (-0.13376e5 / 0.27e2 * t15 * t8 / t10 / t53 * t30 + 0.102016e6 / 0.27e2 * t51 * t52 / t128 * t58 - 0.4608e4 * t103 / t23 / t179 * t108 * t9 + 0.32768e5 / 0.9e1 * t187 * t102 * sigma[0] / t10 / t190 * t194 * t8);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -t78 * t1 * t3 * t75 / 0.12e2 - t118 * t136 / 0.2e1 - 0.3e1 / 0.16e2 * t41 * t42 * (0.1216e4 / 0.9e1 * t66 * t91 - 0.10688e5 / 0.9e1 * t51 * t14 * t95 * t58 + 0.1600e4 * t127 * t110 - 0.4096e4 / 0.3e1 * t187 * t102 / t10 / t53 / t87 * t194 * t8);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -t118 * t153 / 0.4e1 - 0.3e1 / 0.16e2 * t41 * t42 * (-0.64e2 / 0.3e1 * t13 * t47 + 0.896e3 / 0.3e1 * t51 * t55 * t58 * sigma[0] - 0.512e3 * t145 * t132 + 0.512e3 * t187 * t52 / t10 / t53 / t43 * t194 * t8);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = -0.3e1 / 0.16e2 * t41 * t42 * (-0.48e2 * t51 * t69 * t58 + 0.144e3 * t101 * sigma[0] * t149 - 0.192e3 * t187 * t14 / t10 / t179 * t194 * t8);

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
  double t1, t3, t4, t5, t6, t7, t8, t9;
  double t10, t11, t12, t13, t14, t16, t19, t23;
  double t24, t25, t28, t30, t34, t35, t36, t38;
  double t43, t44, t45, t47, t50, t54, t61, t67;
  double t70, t71, t77, t78, t80, t85, t86, t91;
  double t92, t93, t96, t98, t99, t103, t107, t118;
  double t120, t126, t137, t143, t169, t177, t179, t184;

  gga_x_optx_params *params;
 
  assert(p->params != NULL);
  params = (gga_x_optx_params * )(p->params);

  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = POW_1_3(rho[0]);
  t8 = t6 * t7;
  t9 = params->gamma * params->gamma;
  t10 = params->b * t9;
  t11 = sigma[0] * sigma[0];
  t12 = rho[0] * rho[0];
  t13 = t12 * t12;
  t14 = t13 * rho[0];
  t16 = 0.1e1 / t7 / t14;
  t19 = t7 * t7;
  t23 = 0.1e1 + params->gamma * sigma[0] / t19 / t12;
  t24 = t23 * t23;
  t25 = 0.1e1 / t24;
  t28 = t10 * t11 * t16 * t25 + params->a;
  t30 = t4 * t8 * t28;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.3e1 / 0.8e1 * t30;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t34 = t7 * rho[0] * t1;
  t35 = t3 * t6;
  t36 = t13 * t12;
  t38 = 0.1e1 / t7 / t36;
  t43 = params->b * t9 * params->gamma;
  t44 = t11 * sigma[0];
  t45 = t13 * t13;
  t47 = 0.1e1 / t45 / rho[0];
  t50 = 0.1e1 / t24 / t23;
  t54 = -0.16e2 / 0.3e1 * t10 * t11 * t38 * t25 + 0.16e2 / 0.3e1 * t43 * t44 * t47 * t50;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t30 / 0.2e1 - 0.3e1 / 0.8e1 * t34 * t35 * t54;

  t61 = 0.1e1 / t45;
  t67 = t35 * (0.2e1 * t10 * sigma[0] * t16 * t25 - 0.2e1 * t43 * t11 * t61 * t50);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -0.3e1 / 0.8e1 * t34 * t67;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t70 = 0.1e1 / t19;
  t71 = t6 * t70;
  t77 = t12 * rho[0];
  t78 = t13 * t77;
  t80 = 0.1e1 / t7 / t78;
  t85 = t45 * t12;
  t86 = 0.1e1 / t85;
  t91 = t9 * t9;
  t92 = params->b * t91;
  t93 = t11 * t11;
  t96 = 0.1e1 / t19 / t45 / t13;
  t98 = t24 * t24;
  t99 = 0.1e1 / t98;
  t103 = 0.304e3 / 0.9e1 * t10 * t11 * t80 * t25 - 0.688e3 / 0.9e1 * t43 * t44 * t86 * t50 + 0.128e3 / 0.3e1 * t92 * t93 * t96 * t99;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t4 * t71 * t28 / 0.6e1 - t4 * t8 * t54 - 0.3e1 / 0.8e1 * t34 * t35 * t103;

  t107 = t7 * t1;
  t118 = t45 * t77;
  t120 = 0.1e1 / t19 / t118;
  t126 = t35 * (-0.32e2 / 0.3e1 * t10 * sigma[0] * t38 * t25 + 0.80e2 / 0.3e1 * t43 * t11 * t47 * t50 - 0.16e2 * t92 * t44 * t120 * t99);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -t107 * t67 / 0.2e1 - 0.3e1 / 0.8e1 * t34 * t126;

  t137 = 0.1e1 / t19 / t85;
  t143 = t35 * (0.6e1 * t92 * t11 * t137 * t99 - 0.8e1 * t43 * sigma[0] * t61 * t50 + 0.2e1 * t10 * t16 * t25);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = -0.3e1 / 0.8e1 * t34 * t143;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t169 = t45 * t14;
  t177 = params->b * t91 * params->gamma;
  t179 = t45 * t45;
  t184 = 0.1e1 / t98 / t23;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t4 * t6 / t19 / rho[0] * t28 / 0.9e1 - t4 * t71 * t54 / 0.2e1 - 0.3e1 / 0.2e1 * t4 * t8 * t103 - 0.3e1 / 0.8e1 * t34 * t35 * (-0.6688e4 / 0.27e2 * t10 * t11 / t7 / t45 * t25 + 0.25504e5 / 0.27e2 * t43 * t44 / t118 * t50 - 0.1152e4 * t92 * t93 / t19 / t169 * t99 + 0.4096e4 / 0.9e1 * t177 * t93 * sigma[0] / t7 / t179 * t184);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -t70 * t1 * t67 / 0.6e1 - t107 * t126 - 0.3e1 / 0.8e1 * t34 * t35 * (0.608e3 / 0.9e1 * t10 * sigma[0] * t80 * t25 - 0.2672e4 / 0.9e1 * t43 * t11 * t86 * t50 + 0.400e3 * t92 * t44 * t96 * t99 - 0.512e3 / 0.3e1 * t177 * t93 / t7 / t45 / t78 * t184);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -t107 * t143 / 0.2e1 - 0.3e1 / 0.8e1 * t34 * t35 * (-0.32e2 / 0.3e1 * t10 * t38 * t25 + 0.224e3 / 0.3e1 * t43 * t47 * t50 * sigma[0] - 0.128e3 * t92 * t11 * t120 * t99 + 0.64e2 * t177 * t44 / t7 / t45 / t36 * t184);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = -0.3e1 / 0.8e1 * t34 * t35 * (-0.12e2 * t43 * t61 * t50 + 0.36e2 * t92 * sigma[0] * t137 * t99 - 0.24e2 * t177 * t11 / t7 / t169 * t184);

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
  double t1, t3, t4, t5, t6, t7, t8, t9;
  double t10, t11, t13, t14, t15, t16, t17, t18;
  double t19, t20, t21, t22, t23, t24, t26, t29;
  double t33, t34, t35, t38, t40, t42, t43, t44;
  double t45, t46, t47, t48, t49, t50, t52, t55;
  double t59, t60, t61, t64, t66, t68, t69, t70;
  double t71, t72, t73, t75, t76, t78, t79, t80;
  double t81, t82, t84, t85, t86, t88, t93, t94;
  double t95, t97, t100, t104, t106, t107, t108, t109;
  double t110, t112, t113, t114, t116, t117, t121, t122;
  double t124, t125, t126, t127, t129, t130, t131, t133;
  double t137, t138, t140, t143, t147, t149, t150, t154;
  double t155, t156, t160, t165, t169, t173, t178, t182;
  double t184, t185, t186, t187, t188, t189, t191, t192;
  double t193, t195, t196, t197, t199, t200, t201, t202;
  double t203, t204, t206, t207, t209, t210, t212, t213;
  double t215, t216, t217, t218, t220, t225, t226, t231;
  double t232, t233, t236, t238, t239, t243, t245, t246;
  double t247, t248, t249, t250, t251, t253, t254, t255;
  double t257, t258, t259, t260, t262, t263, t264, t266;
  double t267, t268, t270, t271, t272, t273, t275, t278;
  double t280, t282, t285, t286, t287, t289, t293, t294;
  double t295, t296, t298, t301, t303, t304, t306, t309;
  double t311, t314, t316, t319, t320, t322, t323, t324;
  double t325, t326, t328, t329, t330, t331, t333, t334;
  double t335, t336, t338, t339, t340, t342, t343, t344;
  double t345, t346, t348, t353, t354, t359, t362, t364;
  double t365, t369, t371, t372, t373, t376, t378, t379;
  double t391, t393, t398, t403, t404, t405, t410, t415;
  double t426, t428, t433, t434, t445, t450, t451, t462;
  double t467, t468, t475, t477, t485, t487, t497, t499;
  double t501, t509, t511, t521, t524, t527, t540, t548;
  double t550, t555, t564, t565, t571, t573, t579, t581;
  double t584, t585, t591, t593, t599, t601, t603, t608;
  double t609, t621, t632, t637, t639, t642, t649, t653;
  double t659, t667, t669, t677, t678, t684, t692, t705;
  double t710, t713, t721, t738, t743, t757, t760, t763;
  double t766, t769, t799, t802, t813, t846, t854, t859;
  double t892, t896, t900, t902, t938, t942, t954, t955;
  double t958, t968, t974, t984, t1034, t1062;

  gga_x_optx_params *params;
 
  assert(p->params != NULL);
  params = (gga_x_optx_params * )(p->params);

  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = t4 * t6;
  t8 = rho[0] - rho[1];
  t9 = rho[0] + rho[1];
  t10 = 0.1e1 / t9;
  t11 = t8 * t10;
  t13 = 0.1e1 / 0.2e1 + t11 / 0.2e1;
  t14 = POW_1_3(t13);
  t15 = t14 * t13;
  t16 = POW_1_3(t9);
  t17 = t15 * t16;
  t18 = params->gamma * params->gamma;
  t19 = params->b * t18;
  t20 = sigma[0] * sigma[0];
  t21 = rho[0] * rho[0];
  t22 = t21 * t21;
  t23 = t22 * rho[0];
  t24 = POW_1_3(rho[0]);
  t26 = 0.1e1 / t24 / t23;
  t29 = t24 * t24;
  t33 = 0.1e1 + params->gamma * sigma[0] / t29 / t21;
  t34 = t33 * t33;
  t35 = 0.1e1 / t34;
  t38 = t19 * t20 * t26 * t35 + params->a;
  t40 = t7 * t17 * t38;
  t42 = 0.1e1 / 0.2e1 - t11 / 0.2e1;
  t43 = POW_1_3(t42);
  t44 = t43 * t42;
  t45 = t44 * t16;
  t46 = sigma[2] * sigma[2];
  t47 = rho[1] * rho[1];
  t48 = t47 * t47;
  t49 = t48 * rho[1];
  t50 = POW_1_3(rho[1]);
  t52 = 0.1e1 / t50 / t49;
  t55 = t50 * t50;
  t59 = 0.1e1 + params->gamma * sigma[2] / t55 / t47;
  t60 = t59 * t59;
  t61 = 0.1e1 / t60;
  t64 = t19 * t46 * t52 * t61 + params->a;
  t66 = t7 * t45 * t64;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.3e1 / 0.8e1 * t40 - 0.3e1 / 0.8e1 * t66;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t68 = 0.3e1 / 0.8e1 * t40;
  t69 = 0.3e1 / 0.8e1 * t66;
  t70 = t14 * t16;
  t71 = t9 * t9;
  t72 = 0.1e1 / t71;
  t73 = t8 * t72;
  t75 = t10 / 0.2e1 - t73 / 0.2e1;
  t76 = t38 * t75;
  t78 = t7 * t70 * t76;
  t79 = t78 / 0.2e1;
  t80 = t16 * t16;
  t81 = 0.1e1 / t80;
  t82 = t15 * t81;
  t84 = t7 * t82 * t38;
  t85 = t84 / 0.8e1;
  t86 = t22 * t21;
  t88 = 0.1e1 / t24 / t86;
  t93 = params->b * t18 * params->gamma;
  t94 = t20 * sigma[0];
  t95 = t22 * t22;
  t97 = 0.1e1 / t95 / rho[0];
  t100 = 0.1e1 / t34 / t33;
  t104 = 0.16e2 / 0.3e1 * t93 * t94 * t97 * t100 - 0.16e2 / 0.3e1 * t19 * t20 * t88 * t35;
  t106 = t7 * t17 * t104;
  t107 = 0.3e1 / 0.8e1 * t106;
  t108 = t43 * t16;
  t109 = -t75;
  t110 = t64 * t109;
  t112 = t7 * t108 * t110;
  t113 = t112 / 0.2e1;
  t114 = t44 * t81;
  t116 = t7 * t114 * t64;
  t117 = t116 / 0.8e1;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t68 - t69 + t9 * (-t79 - t85 - t107 - t113 - t117);

  t121 = -t10 / 0.2e1 - t73 / 0.2e1;
  t122 = t38 * t121;
  t124 = t7 * t70 * t122;
  t125 = t124 / 0.2e1;
  t126 = -t121;
  t127 = t64 * t126;
  t129 = t7 * t108 * t127;
  t130 = t129 / 0.2e1;
  t131 = t48 * t47;
  t133 = 0.1e1 / t50 / t131;
  t137 = t46 * sigma[2];
  t138 = t48 * t48;
  t140 = 0.1e1 / t138 / rho[1];
  t143 = 0.1e1 / t60 / t59;
  t147 = -0.16e2 / 0.3e1 * t19 * t46 * t133 * t61 + 0.16e2 / 0.3e1 * t93 * t137 * t140 * t143;
  t149 = t7 * t45 * t147;
  t150 = 0.3e1 / 0.8e1 * t149;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = -t68 - t69 + t9 * (-t125 - t85 - t130 - t117 - t150);

  t154 = t16 * t9 * t1;
  t155 = t154 * t3;
  t156 = t6 * t15;
  t160 = 0.1e1 / t95;
  t165 = -0.2e1 * t93 * t20 * t160 * t100 + 0.2e1 * t19 * sigma[0] * t26 * t35;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -0.3e1 / 0.8e1 * t155 * t156 * t165;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  t169 = t6 * t44;
  t173 = 0.1e1 / t138;
  t178 = -0.2e1 * t93 * t46 * t173 * t143 + 0.2e1 * t19 * sigma[2] * t52 * t61;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = -0.3e1 / 0.8e1 * t155 * t169 * t178;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t182 = t84 / 0.4e1;
  t184 = t116 / 0.4e1;
  t185 = t14 * t14;
  t186 = 0.1e1 / t185;
  t187 = t186 * t16;
  t188 = t75 * t75;
  t189 = t38 * t188;
  t191 = t7 * t187 * t189;
  t192 = t191 / 0.6e1;
  t193 = t14 * t81;
  t195 = t7 * t193 * t76;
  t196 = t195 / 0.3e1;
  t197 = t104 * t75;
  t199 = t7 * t70 * t197;
  t200 = t71 * t9;
  t201 = 0.1e1 / t200;
  t202 = t8 * t201;
  t203 = -t72 + t202;
  t204 = t38 * t203;
  t206 = t7 * t70 * t204;
  t207 = t206 / 0.2e1;
  t209 = 0.1e1 / t80 / t9;
  t210 = t15 * t209;
  t212 = t7 * t210 * t38;
  t213 = t212 / 0.12e2;
  t215 = t7 * t82 * t104;
  t216 = t215 / 0.4e1;
  t217 = t21 * rho[0];
  t218 = t22 * t217;
  t220 = 0.1e1 / t24 / t218;
  t225 = t95 * t21;
  t226 = 0.1e1 / t225;
  t231 = t18 * t18;
  t232 = params->b * t231;
  t233 = t20 * t20;
  t236 = 0.1e1 / t29 / t95 / t22;
  t238 = t34 * t34;
  t239 = 0.1e1 / t238;
  t243 = 0.304e3 / 0.9e1 * t19 * t20 * t220 * t35 - 0.688e3 / 0.9e1 * t93 * t94 * t226 * t100 + 0.128e3 / 0.3e1 * t232 * t233 * t236 * t239;
  t245 = t7 * t17 * t243;
  t246 = 0.3e1 / 0.8e1 * t245;
  t247 = t43 * t43;
  t248 = 0.1e1 / t247;
  t249 = t248 * t16;
  t250 = t109 * t109;
  t251 = t64 * t250;
  t253 = t7 * t249 * t251;
  t254 = t253 / 0.6e1;
  t255 = t43 * t81;
  t257 = t7 * t255 * t110;
  t258 = t257 / 0.3e1;
  t259 = -t203;
  t260 = t64 * t259;
  t262 = t7 * t108 * t260;
  t263 = t262 / 0.2e1;
  t264 = t44 * t209;
  t266 = t7 * t264 * t64;
  t267 = t266 / 0.12e2;
  t268 = -t192 - t196 - t199 - t207 + t213 - t216 - t246 - t254 - t258 - t263 + t267;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t78 - t182 - 0.3e1 / 0.4e1 * t106 - t112 - t184 + t9 * t268;

  t270 = t6 * t186;
  t271 = t4 * t270;
  t272 = t16 * t38;
  t273 = t121 * t75;
  t275 = t271 * t272 * t273;
  t278 = t7 * t193 * t122;
  t280 = t104 * t121;
  t282 = t7 * t70 * t280;
  t285 = 0.1e1 / t80 / t71;
  t286 = t14 * t285;
  t287 = t38 * t8;
  t289 = t7 * t286 * t287;
  t293 = t6 * t248;
  t294 = t4 * t293;
  t295 = t16 * t64;
  t296 = t126 * t109;
  t298 = t294 * t295 * t296;
  t301 = t7 * t255 * t127;
  t303 = t43 * t285;
  t304 = t64 * t8;
  t306 = t7 * t303 * t304;
  t309 = t147 * t109;
  t311 = t7 * t108 * t309;
  t314 = t7 * t114 * t147;
  t316 = -t275 / 0.6e1 - t278 / 0.6e1 - t282 / 0.2e1 - t289 / 0.2e1 - t195 / 0.6e1 + t213 - t215 / 0.8e1 - t298 / 0.6e1 - t301 / 0.6e1 + t306 / 0.2e1 - t257 / 0.6e1 + t267 - t311 / 0.2e1 - t314 / 0.8e1;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t9 * t316 - t107 - t113 - t125 - t130 - t150 - t182 - t184 - t79;

  t319 = t121 * t121;
  t320 = t38 * t319;
  t322 = t7 * t187 * t320;
  t323 = t322 / 0.6e1;
  t324 = t278 / 0.3e1;
  t325 = t72 + t202;
  t326 = t38 * t325;
  t328 = t7 * t70 * t326;
  t329 = t328 / 0.2e1;
  t330 = t126 * t126;
  t331 = t64 * t330;
  t333 = t7 * t249 * t331;
  t334 = t333 / 0.6e1;
  t335 = t301 / 0.3e1;
  t336 = t147 * t126;
  t338 = t7 * t108 * t336;
  t339 = -t325;
  t340 = t64 * t339;
  t342 = t7 * t108 * t340;
  t343 = t342 / 0.2e1;
  t344 = t314 / 0.4e1;
  t345 = t47 * rho[1];
  t346 = t48 * t345;
  t348 = 0.1e1 / t50 / t346;
  t353 = t138 * t47;
  t354 = 0.1e1 / t353;
  t359 = t46 * t46;
  t362 = 0.1e1 / t55 / t138 / t48;
  t364 = t60 * t60;
  t365 = 0.1e1 / t364;
  t369 = 0.304e3 / 0.9e1 * t19 * t46 * t348 * t61 - 0.688e3 / 0.9e1 * t93 * t137 * t354 * t143 + 0.128e3 / 0.3e1 * t232 * t359 * t362 * t365;
  t371 = t7 * t45 * t369;
  t372 = 0.3e1 / 0.8e1 * t371;
  t373 = -t323 - t324 - t329 + t213 - t334 - t335 - t338 - t343 + t267 - t344 - t372;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = -t124 - t182 - t129 - t184 - 0.3e1 / 0.4e1 * t149 + t9 * t373;

  t376 = t7 * t17 * t165;
  t378 = t6 * t14;
  t379 = t165 * t75;
  t391 = t95 * t217;
  t393 = 0.1e1 / t29 / t391;
  t398 = -0.32e2 / 0.3e1 * t19 * sigma[0] * t88 * t35 + 0.80e2 / 0.3e1 * t93 * t20 * t97 * t100 - 0.16e2 * t232 * t94 * t393 * t239;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -t376 / 0.2e1 - t155 * t378 * t379 / 0.2e1 - 0.3e1 / 0.8e1 * t155 * t156 * t398;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  t403 = t7 * t45 * t178;
  t404 = t6 * t43;
  t405 = t178 * t109;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = -t155 * t404 * t405 / 0.2e1 - t403 / 0.2e1;

  t410 = t378 * t165 * t121;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = -t155 * t410 / 0.2e1 - t376 / 0.2e1;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t415 = t404 * t178 * t126;
  t426 = t138 * t345;
  t428 = 0.1e1 / t55 / t426;
  t433 = -0.32e2 / 0.3e1 * t19 * sigma[2] * t133 * t61 + 0.80e2 / 0.3e1 * t93 * t46 * t140 * t143 - 0.16e2 * t232 * t137 * t428 * t365;
  t434 = t169 * t433;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = -t403 / 0.2e1 - t155 * t415 / 0.2e1 - 0.3e1 / 0.8e1 * t155 * t434;

  t445 = 0.1e1 / t29 / t225;
  t450 = -0.8e1 * t93 * sigma[0] * t160 * t100 + 0.6e1 * t232 * t20 * t445 * t239 + 0.2e1 * t19 * t26 * t35;
  t451 = t156 * t450;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = -0.3e1 / 0.8e1 * t155 * t451;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  t462 = 0.1e1 / t55 / t353;
  t467 = -0.8e1 * t93 * sigma[2] * t173 * t143 + 0.6e1 * t232 * t46 * t462 * t365 + 0.2e1 * t19 * t52 * t61;
  t468 = t169 * t467;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = -0.3e1 / 0.8e1 * t155 * t468;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t475 = t212 / 0.4e1;
  t477 = t266 / 0.4e1;
  t485 = t7 * t193 * t197;
  t487 = t7 * t193 * t204;
  t497 = t71 * t71;
  t499 = t8 / t497;
  t501 = 0.3e1 * t201 - 0.3e1 * t499;
  t509 = 0.5e1 / 0.36e2 * t7 * t15 * t285 * t38;
  t511 = t7 * t255 * t260;
  t521 = 0.5e1 / 0.36e2 * t7 * t44 * t285 * t64;
  t524 = t7 * t210 * t104;
  t527 = t7 * t82 * t243;
  t540 = t95 * t23;
  t548 = params->b * t231 * params->gamma;
  t550 = t95 * t95;
  t555 = 0.1e1 / t238 / t33;
  t564 = 0.1e1 / t185 / t13;
  t565 = t564 * t16;
  t571 = t186 * t81;
  t573 = t7 * t571 * t189;
  t579 = t14 * t209;
  t581 = t7 * t579 * t76;
  t584 = 0.1e1 / t247 / t42;
  t585 = t584 * t16;
  t591 = t248 * t81;
  t593 = t7 * t591 * t251;
  t599 = t43 * t209;
  t601 = t7 * t599 * t110;
  t603 = t524 / 0.4e1 - 0.3e1 / 0.8e1 * t527 - 0.3e1 / 0.8e1 * t7 * t17 * (-0.6688e4 / 0.27e2 * t19 * t20 / t24 / t95 * t35 + 0.25504e5 / 0.27e2 * t93 * t94 / t391 * t100 - 0.1152e4 * t232 * t233 / t29 / t540 * t239 + 0.4096e4 / 0.9e1 * t548 * t233 * sigma[0] / t24 / t550 * t555) + t7 * t565 * t38 * t188 * t75 / 0.9e1 - t573 / 0.6e1 - t271 * t272 * t75 * t203 / 0.2e1 + t581 / 0.3e1 + t7 * t585 * t64 * t250 * t109 / 0.9e1 - t593 / 0.6e1 - t294 * t295 * t109 * t259 / 0.2e1 + t601 / 0.3e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -t191 / 0.2e1 - t195 - t253 / 0.2e1 - t257 - 0.3e1 * t199 - 0.3e1 / 0.2e1 * t206 + t475 - 0.3e1 / 0.2e1 * t262 + t477 - 0.3e1 / 0.4e1 * t215 - 0.9e1 / 0.8e1 * t245 + t9 * (-t7 * t187 * t104 * t188 / 0.2e1 - t485 - t487 / 0.2e1 - 0.3e1 / 0.2e1 * t7 * t70 * t243 * t75 - 0.3e1 / 0.2e1 * t7 * t70 * t104 * t203 - t7 * t70 * t38 * t501 / 0.2e1 - t509 - t511 / 0.2e1 + t7 * t108 * t64 * t501 / 0.2e1 - t521 + t603);

  t608 = t275 / 0.3e1;
  t609 = t298 / 0.3e1;
  t621 = t7 * t264 * t147;
  t632 = t7 * t193 * t280 / 0.3e1;
  t637 = -t509 - t521 + t524 / 0.6e1 - t527 / 0.8e1 - t7 * t286 * t38 / 0.2e1 + t7 * t303 * t64 / 0.2e1 + t621 / 0.12e2 - t485 / 0.3e1 - t487 / 0.6e1 - t511 / 0.6e1 - t573 / 0.18e2 + 0.2e1 / 0.9e1 * t581 - t593 / 0.18e2 + 0.2e1 / 0.9e1 * t601 - t632 - t7 * t70 * t243 * t121 / 0.2e1;
  t639 = 0.1e1 / t80 / t200;
  t642 = t7 * t43 * t639 * t304;
  t649 = t7 * t579 * t122;
  t653 = t7 * t14 * t639 * t287;
  t659 = t7 * t599 * t127;
  t667 = t7 * t255 * t309 / 0.3e1;
  t669 = t4 * t6 * t564;
  t677 = t271 * t81 * t38 * t273 / 0.9e1;
  t678 = t285 * t38;
  t684 = t4 * t6 * t584;
  t692 = t294 * t81 * t64 * t296 / 0.9e1;
  t705 = t285 * t64;
  t710 = -0.7e1 / 0.6e1 * t642 - t7 * t108 * t147 * t259 / 0.2e1 + t649 / 0.9e1 + 0.7e1 / 0.6e1 * t653 - t7 * t286 * t104 * t8 + t659 / 0.9e1 - t7 * t249 * t147 * t250 / 0.6e1 - t667 + t669 * t272 * t121 * t188 / 0.9e1 - t677 - t271 * t678 * t8 * t75 / 0.3e1 + t684 * t295 * t126 * t250 / 0.9e1 - t692 - t271 * t16 * t104 * t273 / 0.3e1 - t271 * t272 * t121 * t203 / 0.6e1 - t294 * t295 * t126 * t259 / 0.6e1 + t294 * t705 * t8 * t109 / 0.3e1;
  t713 = -t207 + t475 - t263 + t477 - t282 + t306 - t311 - t344 - t215 / 0.2e1 - t246 + t9 * (t637 + t710);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = -t192 - 0.2e1 / 0.3e1 * t195 - t254 - 0.2e1 / 0.3e1 * t257 - t608 - t324 - t289 - t609 - t335 - t199 + t713;

  t721 = t7 * t114 * t369;
  t738 = -t201 - 0.3e1 * t499;
  t743 = -t509 - t521 + t524 / 0.12e2 + t621 / 0.6e1 - t721 / 0.8e1 + t581 / 0.9e1 + t601 / 0.9e1 - t632 + t642 / 0.3e1 + 0.2e1 / 0.9e1 * t649 - t653 / 0.3e1 + 0.2e1 / 0.9e1 * t659 - t667 - t7 * t187 * t104 * t319 / 0.6e1 - t7 * t70 * t104 * t325 / 0.2e1 - t7 * t70 * t38 * t738 / 0.2e1;
  t757 = t7 * t571 * t320;
  t760 = t7 * t193 * t326;
  t763 = t7 * t591 * t331;
  t766 = t7 * t255 * t336;
  t769 = t7 * t255 * t340;
  t799 = t7 * t303 * t147 * t8 + t7 * t108 * t64 * t738 / 0.2e1 - t7 * t108 * t369 * t109 / 0.2e1 - t757 / 0.18e2 - t760 / 0.6e1 - t763 / 0.18e2 - t766 / 0.3e1 - t769 / 0.6e1 - t677 - t692 - t271 * t678 * t121 * t8 / 0.3e1 + t669 * t272 * t319 * t75 / 0.9e1 - t271 * t272 * t325 * t75 / 0.6e1 + t684 * t295 * t330 * t109 / 0.9e1 + t294 * t705 * t126 * t8 / 0.3e1 - t294 * t16 * t147 * t296 / 0.3e1 - t294 * t295 * t339 * t109 / 0.6e1;
  t802 = t306 - t311 - t314 / 0.2e1 - t329 - t338 - t343 - t216 - t372 - t323 - t334 + t9 * (t743 + t799);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = -t196 - t258 - t608 - 0.2e1 / 0.3e1 * t278 - t289 - t609 - 0.2e1 / 0.3e1 * t301 + t475 + t477 - t282 + t802;

  t813 = -0.3e1 * t201 - 0.3e1 * t499;
  t846 = t138 * t49;
  t854 = t138 * t138;
  t859 = 0.1e1 / t364 / t59;
  t892 = t649 / 0.3e1 + t659 / 0.3e1 - t757 / 0.6e1 - t760 / 0.2e1 - t763 / 0.6e1 - t766 - t769 / 0.2e1 + t7 * t565 * t38 * t319 * t121 / 0.9e1 - t271 * t272 * t121 * t325 / 0.2e1 + t7 * t585 * t64 * t330 * t126 / 0.9e1 - t294 * t295 * t126 * t339 / 0.2e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -t278 - t301 + t475 + t477 - 0.3e1 / 0.4e1 * t314 - 0.3e1 / 0.2e1 * t328 - 0.3e1 * t338 - 0.3e1 / 0.2e1 * t342 - 0.9e1 / 0.8e1 * t371 - t322 / 0.2e1 - t333 / 0.2e1 + t9 * (-t509 - t521 + t621 / 0.4e1 - 0.3e1 / 0.8e1 * t721 - t7 * t70 * t38 * t813 / 0.2e1 - t7 * t249 * t147 * t330 / 0.2e1 - 0.3e1 / 0.2e1 * t7 * t108 * t369 * t126 - 0.3e1 / 0.2e1 * t7 * t108 * t147 * t339 + t7 * t108 * t64 * t813 / 0.2e1 - 0.3e1 / 0.8e1 * t7 * t45 * (-0.6688e4 / 0.27e2 * t19 * t46 / t50 / t138 * t61 + 0.25504e5 / 0.27e2 * t93 * t137 / t426 * t143 - 0.1152e4 * t232 * t359 / t55 / t846 * t365 + 0.4096e4 / 0.9e1 * t548 * t359 * sigma[2] / t50 / t854 * t859) + t892);

  t896 = t7 * t70 * t379;
  t900 = t7 * t82 * t165 / 0.6e1;
  t902 = t7 * t17 * t398;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -0.4e1 / 0.3e1 * t896 - t900 - t902 - t155 * t270 * t165 * t188 / 0.6e1 - t155 * t378 * t398 * t75 - t155 * t378 * t165 * t203 / 0.2e1 - 0.3e1 / 0.8e1 * t155 * t156 * (0.608e3 / 0.9e1 * t19 * sigma[0] * t220 * t35 - 0.2672e4 / 0.9e1 * t93 * t20 * t226 * t100 + 0.400e3 * t232 * t94 * t236 * t239 - 0.512e3 / 0.3e1 * t548 * t233 / t24 / t95 / t218 * t555);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[1] = 0.0e0;

  t938 = t7 * t108 * t405;
  t942 = t7 * t114 * t178 / 0.6e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[2] = -0.4e1 / 0.3e1 * t938 - t942 - t155 * t293 * t178 * t250 / 0.6e1 - t155 * t404 * t178 * t259 / 0.2e1;

  t954 = t16 * t1 * t3;
  t955 = t954 * t410;
  t958 = t154 * t3 * t6;
  t968 = t209 * t1 * t3;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[3] = -0.2e1 / 0.3e1 * t896 - t900 - t902 / 0.2e1 - 0.2e1 / 0.3e1 * t955 - t958 * t186 * t165 * t273 / 0.6e1 - t155 * t378 * t398 * t121 / 0.2e1 - t968 * t378 * t165 * t8 / 0.2e1;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[4] = 0.0e0;

  t974 = t954 * t415;
  t984 = t954 * t434;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[5] = -0.2e1 / 0.3e1 * t938 - t942 - 0.2e1 / 0.3e1 * t974 - t958 * t248 * t178 * t296 / 0.6e1 + t968 * t404 * t178 * t8 / 0.2e1 - t984 / 0.2e1 - t155 * t404 * t433 * t109 / 0.2e1;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[6] = -0.4e1 / 0.3e1 * t955 - t900 - t155 * t270 * t165 * t319 / 0.6e1 - t155 * t378 * t165 * t325 / 0.2e1;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[8] = -0.4e1 / 0.3e1 * t974 - t942 - t984 - t155 * t293 * t178 * t330 / 0.6e1 - t155 * t404 * t433 * t126 - t155 * t404 * t178 * t339 / 0.2e1 - 0.3e1 / 0.8e1 * t155 * t169 * (0.608e3 / 0.9e1 * t19 * sigma[2] * t348 * t61 - 0.2672e4 / 0.9e1 * t93 * t46 * t354 * t143 + 0.400e3 * t232 * t137 * t362 * t365 - 0.512e3 / 0.3e1 * t548 * t359 / t50 / t138 / t346 * t859);

  t1034 = t954 * t451;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -t1034 / 0.2e1 - t155 * t378 * t450 * t75 / 0.2e1 - 0.3e1 / 0.8e1 * t155 * t156 * (-0.32e2 / 0.3e1 * t19 * t88 * t35 + 0.224e3 / 0.3e1 * t93 * t97 * t100 * sigma[0] - 0.128e3 * t232 * t20 * t393 * t239 + 0.64e2 * t548 * t94 / t24 / t95 / t86 * t555);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[1] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[2] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[3] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[4] = 0.0e0;

  t1062 = t954 * t468;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[5] = -t155 * t404 * t467 * t109 / 0.2e1 - t1062 / 0.2e1;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[6] = -t155 * t378 * t450 * t121 / 0.2e1 - t1034 / 0.2e1;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[8] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[9] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[10] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[11] = -t1062 / 0.2e1 - t155 * t404 * t467 * t126 / 0.2e1 - 0.3e1 / 0.8e1 * t155 * t169 * (-0.32e2 / 0.3e1 * t19 * t133 * t61 + 0.224e3 / 0.3e1 * t93 * t140 * t143 * sigma[2] - 0.128e3 * t232 * t46 * t428 * t365 + 0.64e2 * t548 * t137 / t50 / t138 / t131 * t859);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = -0.3e1 / 0.8e1 * t155 * t156 * (-0.12e2 * t93 * t160 * t100 + 0.36e2 * t232 * sigma[0] * t445 * t239 - 0.24e2 * t548 * t20 / t24 / t540 * t555);

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
    v3sigma3[9] = -0.3e1 / 0.8e1 * t155 * t169 * (-0.12e2 * t93 * t173 * t143 + 0.36e2 * t232 * sigma[2] * t462 * t365 - 0.24e2 * t548 * t46 / t50 / t846 * t859);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}
