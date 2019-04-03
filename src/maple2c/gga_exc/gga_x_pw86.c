/* 
  This file was generated automatically with scripts/maple2c_new.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_x_pw86.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 3

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t3, t5, t6, t7, t8, t9, t10;
  double t11, t12, t13, t14, t15, t16, t17, t18;
  double t19, t20, t21, t23, t27, t28, t30, t31;
  double t32, t33, t34, t35, t37, t41, t43, t44;
  double t45, t46, t50, t51, t53, t57, t58, t59;
  double t60, t61, t63, t64, t65, t66, t68, t72;
  double t74, t79, t83, t84, t88, t92, t99, t101;
  double t104, t105, t113, t114, t115, t120, t126, t131;
  double t135, t136, t140, t141, t144, t145, t146, t148;
  double t160, t162, t165, t167, t170, t177, t179, t197;
  double t199, t238;

  gga_x_pw86_params *params;
 
  assert(p->params != NULL);
  params = (gga_x_pw86_params * )(p->params);

  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = t1 * t3 * t6;
  t8 = M_CBRT2;
  t9 = t8 * t8;
  t10 = POW_1_3(rho[0]);
  t11 = t9 * t10;
  t12 = M_CBRT6;
  t13 = params->aa * t12;
  t14 = M_PI * M_PI;
  t15 = POW_1_3(t14);
  t16 = t15 * t15;
  t17 = 0.1e1 / t16;
  t18 = t13 * t17;
  t19 = sigma[0] * t9;
  t20 = rho[0] * rho[0];
  t21 = t10 * t10;
  t23 = 0.1e1 / t21 / t20;
  t27 = t12 * t12;
  t28 = params->bb * t27;
  t30 = 0.1e1 / t15 / t14;
  t31 = t28 * t30;
  t32 = sigma[0] * sigma[0];
  t33 = t32 * t8;
  t34 = t20 * t20;
  t35 = t34 * rho[0];
  t37 = 0.1e1 / t10 / t35;
  t41 = t14 * t14;
  t43 = params->cc / t41;
  t44 = t32 * sigma[0];
  t45 = t34 * t34;
  t46 = 0.1e1 / t45;
  t50 = 0.1e1 + t18 * t19 * t23 / 0.24e2 + t31 * t33 * t37 / 0.288e3 + t43 * t44 * t46 / 0.576e3;
  t51 = pow(t50, 0.1e1 / 0.15e2);
  t53 = t7 * t11 * t51;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.3e1 / 0.16e2 * t53;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t57 = t10 * rho[0] * t1;
  t58 = t57 * t3;
  t59 = t6 * t9;
  t60 = t51 * t51;
  t61 = t60 * t60;
  t63 = t61 * t61;
  t64 = t63 * t61 * t60;
  t65 = 0.1e1 / t64;
  t66 = t20 * rho[0];
  t68 = 0.1e1 / t21 / t66;
  t72 = t34 * t20;
  t74 = 0.1e1 / t10 / t72;
  t79 = 0.1e1 / t45 / rho[0];
  t83 = -t18 * t19 * t68 / 0.9e1 - t31 * t33 * t74 / 0.54e2 - t43 * t44 * t79 / 0.72e2;
  t84 = t65 * t83;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t53 / 0.4e1 - t58 * t59 * t84 / 0.80e2;

  t88 = t17 * t9;
  t92 = sigma[0] * t8;
  t99 = t13 * t88 * t23 / 0.24e2 + t31 * t92 * t37 / 0.144e3 + t43 * t32 * t46 / 0.192e3;
  t101 = t59 * t65 * t99;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -t58 * t101 / 0.80e2;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t104 = 0.1e1 / t21;
  t105 = t9 * t104;
  t113 = 0.1e1 / t64 / t50;
  t114 = t83 * t83;
  t115 = t113 * t114;
  t120 = 0.1e1 / t21 / t34;
  t126 = 0.1e1 / t10 / t34 / t66;
  t131 = 0.1e1 / t45 / t20;
  t135 = 0.11e2 / 0.27e2 * t18 * t19 * t120 + 0.19e2 / 0.162e3 * t31 * t33 * t126 + t43 * t44 * t131 / 0.8e1;
  t136 = t65 * t135;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t7 * t105 * t51 / 0.12e2 - t7 * t11 * t84 / 0.30e2 + 0.7e1 / 0.600e3 * t58 * t59 * t115 - t58 * t59 * t136 / 0.80e2;

  t140 = t10 * t1;
  t141 = t140 * t3;
  t144 = t3 * t6;
  t145 = t57 * t144;
  t146 = t9 * t113;
  t148 = t146 * t99 * t83;
  t160 = -t13 * t88 * t68 / 0.9e1 - t31 * t92 * t74 / 0.27e2 - t43 * t32 * t79 / 0.24e2;
  t162 = t59 * t65 * t160;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -t141 * t101 / 0.60e2 + 0.7e1 / 0.600e3 * t145 * t148 - t58 * t162 / 0.80e2;

  t165 = t99 * t99;
  t167 = t59 * t113 * t165;
  t170 = t30 * t8;
  t177 = t28 * t170 * t37 / 0.144e3 + t43 * sigma[0] * t46 / 0.96e2;
  t179 = t59 * t65 * t177;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.7e1 / 0.600e3 * t58 * t167 - t58 * t179 / 0.80e2;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t197 = t50 * t50;
  t199 = 0.1e1 / t64 / t197;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t7 * t9 / t21 / rho[0] * t51 / 0.18e2 - t7 * t105 * t84 / 0.60e2 + 0.7e1 / 0.150e3 * t7 * t11 * t115 - t7 * t11 * t136 / 0.20e2 - 0.203e3 / 0.9000e4 * t58 * t59 * t199 * t114 * t83 + 0.7e1 / 0.200e3 * t145 * t146 * t83 * t135 - t58 * t59 * t65 * (-0.154e3 / 0.81e2 * t18 * t19 / t21 / t35 - 0.209e3 / 0.243e3 * t31 * t33 / t10 / t45 - 0.5e1 / 0.4e1 * t43 * t44 / t45 / t66) / 0.80e2;

  t238 = t9 * t199;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -t104 * t1 * t3 * t101 / 0.180e3 + 0.7e1 / 0.225e3 * t140 * t144 * t148 - t141 * t162 / 0.30e2 - 0.203e3 / 0.9000e4 * t145 * t238 * t99 * t114 + 0.7e1 / 0.300e3 * t145 * t146 * t160 * t83 + 0.7e1 / 0.600e3 * t145 * t146 * t99 * t135 - t58 * t59 * t65 * (0.11e2 / 0.27e2 * t13 * t88 * t120 + 0.19e2 / 0.81e2 * t31 * t92 * t126 + 0.3e1 / 0.8e1 * t43 * t32 * t131) / 0.80e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = 0.7e1 / 0.450e3 * t141 * t167 - 0.203e3 / 0.9000e4 * t145 * t238 * t165 * t83 + 0.7e1 / 0.300e3 * t145 * t146 * t99 * t160 - t141 * t179 / 0.60e2 + 0.7e1 / 0.600e3 * t145 * t146 * t177 * t83 - t58 * t59 * t65 * (-t28 * t170 * t74 / 0.27e2 - t43 * sigma[0] * t79 / 0.12e2) / 0.80e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = -0.203e3 / 0.9000e4 * t58 * t59 * t199 * t165 * t99 + 0.7e1 / 0.200e3 * t145 * t146 * t99 * t177 - 0.1e1 / t21 / t72 * t1 * t144 * t9 * t65 * t43 / 0.7680e4;

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
  double t1, t3, t4, t5, t6, t7, t9, t10;
  double t11, t12, t13, t14, t15, t16, t17, t19;
  double t23, t24, t26, t27, t28, t29, t30, t32;
  double t36, t38, t39, t40, t41, t45, t46, t48;
  double t53, t54, t55, t57, t58, t59, t60, t61;
  double t63, t67, t69, t74, t78, t85, t92, t93;
  double t96, t101, t102, t107, t108, t109, t114, t120;
  double t125, t129, t134, t138, t150, t151, t154, t155;
  double t164, t165, t185, t188;

  gga_x_pw86_params *params;
 
  assert(p->params != NULL);
  params = (gga_x_pw86_params * )(p->params);

  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = POW_1_3(rho[0]);
  t9 = M_CBRT6;
  t10 = params->aa * t9;
  t11 = M_PI * M_PI;
  t12 = POW_1_3(t11);
  t13 = t12 * t12;
  t14 = 0.1e1 / t13;
  t15 = t14 * sigma[0];
  t16 = rho[0] * rho[0];
  t17 = t7 * t7;
  t19 = 0.1e1 / t17 / t16;
  t23 = t9 * t9;
  t24 = params->bb * t23;
  t26 = 0.1e1 / t12 / t11;
  t27 = sigma[0] * sigma[0];
  t28 = t26 * t27;
  t29 = t16 * t16;
  t30 = t29 * rho[0];
  t32 = 0.1e1 / t7 / t30;
  t36 = t11 * t11;
  t38 = params->cc / t36;
  t39 = t27 * sigma[0];
  t40 = t29 * t29;
  t41 = 0.1e1 / t40;
  t45 = 0.1e1 + t10 * t15 * t19 / 0.24e2 + t24 * t28 * t32 / 0.576e3 + t38 * t39 * t41 / 0.2304e4;
  t46 = pow(t45, 0.1e1 / 0.15e2);
  t48 = t4 * t6 * t7 * t46;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.3e1 / 0.8e1 * t48;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t53 = t7 * rho[0] * t1 * t3;
  t54 = t46 * t46;
  t55 = t54 * t54;
  t57 = t55 * t55;
  t58 = t57 * t55 * t54;
  t59 = 0.1e1 / t58;
  t60 = t6 * t59;
  t61 = t16 * rho[0];
  t63 = 0.1e1 / t17 / t61;
  t67 = t29 * t16;
  t69 = 0.1e1 / t7 / t67;
  t74 = 0.1e1 / t40 / rho[0];
  t78 = -t10 * t15 * t63 / 0.9e1 - t24 * t28 * t69 / 0.108e3 - t38 * t39 * t74 / 0.288e3;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t48 / 0.2e1 - t53 * t60 * t78 / 0.40e2;

  t85 = t26 * sigma[0];
  t92 = t10 * t14 * t19 / 0.24e2 + t24 * t85 * t32 / 0.288e3 + t38 * t27 * t41 / 0.768e3;
  t93 = t60 * t92;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -t53 * t93 / 0.40e2;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t96 = 0.1e1 / t17;
  t101 = t4 * t6;
  t102 = t7 * t59;
  t107 = 0.1e1 / t58 / t45;
  t108 = t6 * t107;
  t109 = t78 * t78;
  t114 = 0.1e1 / t17 / t29;
  t120 = 0.1e1 / t7 / t29 / t61;
  t125 = 0.1e1 / t40 / t16;
  t129 = 0.11e2 / 0.27e2 * t10 * t15 * t114 + 0.19e2 / 0.324e3 * t24 * t28 * t120 + t38 * t39 * t125 / 0.32e2;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t4 * t6 * t96 * t46 / 0.6e1 - t101 * t102 * t78 / 0.15e2 + 0.7e1 / 0.300e3 * t53 * t108 * t109 - t53 * t60 * t129 / 0.40e2;

  t134 = t7 * t1 * t3;
  t138 = t108 * t92 * t78;
  t150 = -t10 * t14 * t63 / 0.9e1 - t24 * t85 * t69 / 0.54e2 - t38 * t27 * t74 / 0.96e2;
  t151 = t60 * t150;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -t134 * t93 / 0.30e2 + 0.7e1 / 0.300e3 * t53 * t138 - t53 * t151 / 0.40e2;

  t154 = t92 * t92;
  t155 = t108 * t154;
  t164 = t24 * t26 * t32 / 0.288e3 + t38 * sigma[0] * t41 / 0.384e3;
  t165 = t60 * t164;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.7e1 / 0.300e3 * t53 * t155 - t53 * t165 / 0.40e2;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t185 = t45 * t45;
  t188 = t6 / t58 / t185;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t4 * t6 / t17 / rho[0] * t46 / 0.9e1 - t101 * t96 * t59 * t78 / 0.30e2 + 0.7e1 / 0.75e2 * t101 * t7 * t107 * t109 - t101 * t102 * t129 / 0.10e2 - 0.203e3 / 0.4500e4 * t53 * t188 * t109 * t78 + 0.7e1 / 0.100e3 * t53 * t108 * t78 * t129 - t53 * t60 * (-0.154e3 / 0.81e2 * t10 * t15 / t17 / t30 - 0.209e3 / 0.486e3 * t24 * t28 / t7 / t40 - 0.5e1 / 0.16e2 * t38 * t39 / t40 / t61) / 0.40e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -t96 * t1 * t3 * t93 / 0.90e2 + 0.14e2 / 0.225e3 * t134 * t138 - t134 * t151 / 0.15e2 - 0.203e3 / 0.4500e4 * t53 * t188 * t92 * t109 + 0.7e1 / 0.150e3 * t53 * t108 * t150 * t78 + 0.7e1 / 0.300e3 * t53 * t108 * t92 * t129 - t53 * t60 * (0.11e2 / 0.27e2 * t10 * t14 * t114 + 0.19e2 / 0.162e3 * t24 * t85 * t120 + 0.3e1 / 0.32e2 * t38 * t27 * t125) / 0.40e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = 0.7e1 / 0.225e3 * t134 * t155 - 0.203e3 / 0.4500e4 * t53 * t188 * t154 * t78 + 0.7e1 / 0.150e3 * t53 * t108 * t92 * t150 - t134 * t165 / 0.30e2 + 0.7e1 / 0.300e3 * t53 * t108 * t164 * t78 - t53 * t60 * (-t24 * t26 * t69 / 0.54e2 - t38 * sigma[0] * t74 / 0.48e2) / 0.40e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = -0.203e3 / 0.4500e4 * t53 * t188 * t154 * t92 + 0.7e1 / 0.100e3 * t53 * t108 * t92 * t164 - 0.1e1 / t17 / t67 * t1 * t3 * t60 * t38 / 0.15360e5;

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
  double t19, t20, t21, t22, t23, t24, t25, t26;
  double t27, t29, t33, t34, t36, t37, t38, t39;
  double t40, t42, t46, t48, t49, t50, t51, t55;
  double t56, t58, t60, t61, t62, t63, t64, t65;
  double t66, t67, t69, t73, t74, t75, t76, t78;
  double t82, t83, t84, t88, t89, t91, t93, t94;
  double t95, t96, t97, t98, t100, t101, t103, t104;
  double t105, t106, t107, t109, t110, t111, t112, t114;
  double t115, t116, t117, t119, t125, t130, t134, t135;
  double t137, t138, t139, t140, t141, t143, t144, t145;
  double t147, t148, t152, t153, t155, t156, t157, t158;
  double t160, t161, t162, t163, t165, t166, t167, t168;
  double t170, t176, t181, t185, t186, t188, t189, t193;
  double t194, t195, t199, t206, t207, t211, t215, t222;
  double t223, t227, t229, t230, t231, t232, t233, t234;
  double t236, t237, t238, t240, t241, t243, t244, t245;
  double t247, t248, t249, t250, t251, t252, t253, t255;
  double t256, t258, t259, t261, t262, t264, t265, t267;
  double t268, t269, t271, t272, t274, t280, t285, t289;
  double t290, t292, t293, t294, t295, t296, t297, t298;
  double t300, t301, t302, t304, t305, t306, t307, t309;
  double t310, t311, t313, t314, t315, t318, t319, t320;
  double t322, t325, t327, t329, t332, t333, t334, t336;
  double t341, t342, t343, t345, t348, t350, t351, t353;
  double t357, t358, t359, t361, t364, t366, t369, t370;
  double t372, t373, t374, t375, t376, t378, t379, t380;
  double t381, t383, t384, t385, t386, t388, t389, t390;
  double t391, t393, t394, t395, t397, t398, t399, t401;
  double t402, t404, t410, t415, t419, t420, t422, t423;
  double t424, t427, t429, t430, t431, t432, t436, t437;
  double t450, t451, t456, t457, t458, t462, t463, t467;
  double t468, t471, t472, t473, t485, t487, t490, t492;
  double t501, t503, t506, t508, t517, t519, t527, t531;
  double t535, t539, t541, t543, t545, t547, t553, t556;
  double t579, t587, t588, t594, t596, t598, t600, t602;
  double t604, t606, t608, t615, t616, t622, t624, t626;
  double t628, t630, t643, t645, t655, t664, t669, t670;
  double t671, t672, t674, t682, t685, t688, t692, t695;
  double t698, t708, t716, t724, t725, t740, t748, t753;
  double t756, t763, t772, t781, t784, t787, t796, t831;
  double t841, t845, t856, t859, t862, t865, t868, t871;
  double t880, t883, t924, t933, t973, t975, t981, t985;
  double t989, t991, t994, t996, t1001, t1014, t1042, t1046;
  double t1047, t1059, t1060, t1061, t1076, t1082, t1092, t1094;
  double t1099, t1100, t1134, t1162, t1176, t1197, t1203;

  gga_x_pw86_params *params;
 
  assert(p->params != NULL);
  params = (gga_x_pw86_params * )(p->params);

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
  t18 = M_CBRT6;
  t19 = params->aa * t18;
  t20 = M_PI * M_PI;
  t21 = POW_1_3(t20);
  t22 = t21 * t21;
  t23 = 0.1e1 / t22;
  t24 = t23 * sigma[0];
  t25 = rho[0] * rho[0];
  t26 = POW_1_3(rho[0]);
  t27 = t26 * t26;
  t29 = 0.1e1 / t27 / t25;
  t33 = t18 * t18;
  t34 = params->bb * t33;
  t36 = 0.1e1 / t21 / t20;
  t37 = sigma[0] * sigma[0];
  t38 = t36 * t37;
  t39 = t25 * t25;
  t40 = t39 * rho[0];
  t42 = 0.1e1 / t26 / t40;
  t46 = t20 * t20;
  t48 = params->cc / t46;
  t49 = t37 * sigma[0];
  t50 = t39 * t39;
  t51 = 0.1e1 / t50;
  t55 = 0.1e1 + t19 * t24 * t29 / 0.24e2 + t34 * t38 * t42 / 0.576e3 + t48 * t49 * t51 / 0.2304e4;
  t56 = pow(t55, 0.1e1 / 0.15e2);
  t58 = t7 * t17 * t56;
  t60 = 0.1e1 / 0.2e1 - t11 / 0.2e1;
  t61 = POW_1_3(t60);
  t62 = t61 * t60;
  t63 = t62 * t16;
  t64 = t23 * sigma[2];
  t65 = rho[1] * rho[1];
  t66 = POW_1_3(rho[1]);
  t67 = t66 * t66;
  t69 = 0.1e1 / t67 / t65;
  t73 = sigma[2] * sigma[2];
  t74 = t36 * t73;
  t75 = t65 * t65;
  t76 = t75 * rho[1];
  t78 = 0.1e1 / t66 / t76;
  t82 = t73 * sigma[2];
  t83 = t75 * t75;
  t84 = 0.1e1 / t83;
  t88 = 0.1e1 + t19 * t64 * t69 / 0.24e2 + t34 * t74 * t78 / 0.576e3 + t48 * t82 * t84 / 0.2304e4;
  t89 = pow(t88, 0.1e1 / 0.15e2);
  t91 = t7 * t63 * t89;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.3e1 / 0.8e1 * t58 - 0.3e1 / 0.8e1 * t91;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t93 = 0.3e1 / 0.8e1 * t58;
  t94 = 0.3e1 / 0.8e1 * t91;
  t95 = t14 * t16;
  t96 = t9 * t9;
  t97 = 0.1e1 / t96;
  t98 = t8 * t97;
  t100 = t10 / 0.2e1 - t98 / 0.2e1;
  t101 = t56 * t100;
  t103 = t7 * t95 * t101;
  t104 = t103 / 0.2e1;
  t105 = t16 * t16;
  t106 = 0.1e1 / t105;
  t107 = t15 * t106;
  t109 = t7 * t107 * t56;
  t110 = t109 / 0.8e1;
  t111 = t56 * t56;
  t112 = t111 * t111;
  t114 = t112 * t112;
  t115 = t114 * t112 * t111;
  t116 = 0.1e1 / t115;
  t117 = t25 * rho[0];
  t119 = 0.1e1 / t27 / t117;
  t125 = 0.1e1 / t26 / t39 / t25;
  t130 = 0.1e1 / t50 / rho[0];
  t134 = -t19 * t24 * t119 / 0.9e1 - t34 * t38 * t125 / 0.108e3 - t48 * t49 * t130 / 0.288e3;
  t135 = t116 * t134;
  t137 = t7 * t17 * t135;
  t138 = t137 / 0.40e2;
  t139 = t61 * t16;
  t140 = -t100;
  t141 = t89 * t140;
  t143 = t7 * t139 * t141;
  t144 = t143 / 0.2e1;
  t145 = t62 * t106;
  t147 = t7 * t145 * t89;
  t148 = t147 / 0.8e1;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t93 - t94 + t9 * (-t104 - t110 - t138 - t144 - t148);

  t152 = -t10 / 0.2e1 - t98 / 0.2e1;
  t153 = t56 * t152;
  t155 = t7 * t95 * t153;
  t156 = t155 / 0.2e1;
  t157 = -t152;
  t158 = t89 * t157;
  t160 = t7 * t139 * t158;
  t161 = t160 / 0.2e1;
  t162 = t89 * t89;
  t163 = t162 * t162;
  t165 = t163 * t163;
  t166 = t165 * t163 * t162;
  t167 = 0.1e1 / t166;
  t168 = t65 * rho[1];
  t170 = 0.1e1 / t67 / t168;
  t176 = 0.1e1 / t66 / t75 / t65;
  t181 = 0.1e1 / t83 / rho[1];
  t185 = -t19 * t64 * t170 / 0.9e1 - t34 * t74 * t176 / 0.108e3 - t48 * t82 * t181 / 0.288e3;
  t186 = t167 * t185;
  t188 = t7 * t63 * t186;
  t189 = t188 / 0.40e2;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = -t93 - t94 + t9 * (-t156 - t110 - t161 - t148 - t189);

  t193 = t16 * t9 * t1;
  t194 = t193 * t3;
  t195 = t6 * t15;
  t199 = t36 * sigma[0];
  t206 = t19 * t23 * t29 / 0.24e2 + t34 * t199 * t42 / 0.288e3 + t48 * t37 * t51 / 0.768e3;
  t207 = t116 * t206;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -t194 * t195 * t207 / 0.40e2;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  t211 = t6 * t62;
  t215 = t36 * sigma[2];
  t222 = t19 * t23 * t69 / 0.24e2 + t34 * t215 * t78 / 0.288e3 + t48 * t73 * t84 / 0.768e3;
  t223 = t167 * t222;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = -t194 * t211 * t223 / 0.40e2;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t227 = t109 / 0.4e1;
  t229 = t147 / 0.4e1;
  t230 = t14 * t14;
  t231 = 0.1e1 / t230;
  t232 = t231 * t16;
  t233 = t100 * t100;
  t234 = t56 * t233;
  t236 = t7 * t232 * t234;
  t237 = t236 / 0.6e1;
  t238 = t14 * t106;
  t240 = t7 * t238 * t101;
  t241 = t240 / 0.3e1;
  t243 = t4 * t6 * t14;
  t244 = t16 * t116;
  t245 = t100 * t134;
  t247 = t243 * t244 * t245;
  t248 = t247 / 0.15e2;
  t249 = t96 * t9;
  t250 = 0.1e1 / t249;
  t251 = t8 * t250;
  t252 = -t97 + t251;
  t253 = t56 * t252;
  t255 = t7 * t95 * t253;
  t256 = t255 / 0.2e1;
  t258 = 0.1e1 / t105 / t9;
  t259 = t15 * t258;
  t261 = t7 * t259 * t56;
  t262 = t261 / 0.12e2;
  t264 = t7 * t107 * t135;
  t265 = t264 / 0.60e2;
  t267 = 0.1e1 / t115 / t55;
  t268 = t134 * t134;
  t269 = t267 * t268;
  t271 = t7 * t17 * t269;
  t272 = 0.7e1 / 0.300e3 * t271;
  t274 = 0.1e1 / t27 / t39;
  t280 = 0.1e1 / t26 / t39 / t117;
  t285 = 0.1e1 / t50 / t25;
  t289 = 0.11e2 / 0.27e2 * t19 * t24 * t274 + 0.19e2 / 0.324e3 * t34 * t38 * t280 + t48 * t49 * t285 / 0.32e2;
  t290 = t116 * t289;
  t292 = t7 * t17 * t290;
  t293 = t292 / 0.40e2;
  t294 = t61 * t61;
  t295 = 0.1e1 / t294;
  t296 = t295 * t16;
  t297 = t140 * t140;
  t298 = t89 * t297;
  t300 = t7 * t296 * t298;
  t301 = t300 / 0.6e1;
  t302 = t61 * t106;
  t304 = t7 * t302 * t141;
  t305 = t304 / 0.3e1;
  t306 = -t252;
  t307 = t89 * t306;
  t309 = t7 * t139 * t307;
  t310 = t309 / 0.2e1;
  t311 = t62 * t258;
  t313 = t7 * t311 * t89;
  t314 = t313 / 0.12e2;
  t315 = -t237 - t241 - t248 - t256 + t262 - t265 + t272 - t293 - t301 - t305 - t310 + t314;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t103 - t227 - t137 / 0.20e2 - t143 - t229 + t9 * t315;

  t318 = t4 * t6 * t231;
  t319 = t16 * t56;
  t320 = t152 * t100;
  t322 = t318 * t319 * t320;
  t325 = t7 * t238 * t153;
  t327 = t152 * t134;
  t329 = t243 * t244 * t327;
  t332 = 0.1e1 / t105 / t96;
  t333 = t14 * t332;
  t334 = t56 * t8;
  t336 = t7 * t333 * t334;
  t341 = t4 * t6 * t295;
  t342 = t16 * t89;
  t343 = t157 * t140;
  t345 = t341 * t342 * t343;
  t348 = t7 * t302 * t158;
  t350 = t61 * t332;
  t351 = t89 * t8;
  t353 = t7 * t350 * t351;
  t357 = t4 * t6 * t61;
  t358 = t16 * t167;
  t359 = t185 * t140;
  t361 = t357 * t358 * t359;
  t364 = t7 * t145 * t186;
  t366 = -t322 / 0.6e1 - t325 / 0.6e1 - t329 / 0.30e2 - t336 / 0.2e1 - t240 / 0.6e1 + t262 - t264 / 0.120e3 - t345 / 0.6e1 - t348 / 0.6e1 + t353 / 0.2e1 - t304 / 0.6e1 + t314 - t361 / 0.30e2 - t364 / 0.120e3;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t9 * t366 - t104 - t138 - t144 - t156 - t161 - t189 - t227 - t229;

  t369 = t152 * t152;
  t370 = t56 * t369;
  t372 = t7 * t232 * t370;
  t373 = t372 / 0.6e1;
  t374 = t325 / 0.3e1;
  t375 = t97 + t251;
  t376 = t56 * t375;
  t378 = t7 * t95 * t376;
  t379 = t378 / 0.2e1;
  t380 = t157 * t157;
  t381 = t89 * t380;
  t383 = t7 * t296 * t381;
  t384 = t383 / 0.6e1;
  t385 = t348 / 0.3e1;
  t386 = t157 * t185;
  t388 = t357 * t358 * t386;
  t389 = t388 / 0.15e2;
  t390 = -t375;
  t391 = t89 * t390;
  t393 = t7 * t139 * t391;
  t394 = t393 / 0.2e1;
  t395 = t364 / 0.60e2;
  t397 = 0.1e1 / t166 / t88;
  t398 = t185 * t185;
  t399 = t397 * t398;
  t401 = t7 * t63 * t399;
  t402 = 0.7e1 / 0.300e3 * t401;
  t404 = 0.1e1 / t67 / t75;
  t410 = 0.1e1 / t66 / t75 / t168;
  t415 = 0.1e1 / t83 / t65;
  t419 = 0.11e2 / 0.27e2 * t19 * t64 * t404 + 0.19e2 / 0.324e3 * t34 * t74 * t410 + t48 * t82 * t415 / 0.32e2;
  t420 = t167 * t419;
  t422 = t7 * t63 * t420;
  t423 = t422 / 0.40e2;
  t424 = -t373 - t374 - t379 + t262 - t384 - t385 - t389 - t394 + t314 - t395 + t402 - t423;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = -t155 - t227 - t160 - t229 - t188 / 0.20e2 + t9 * t424;

  t427 = t7 * t17 * t207;
  t429 = t3 * t6;
  t430 = t193 * t429;
  t431 = t14 * t116;
  t432 = t206 * t100;
  t436 = t15 * t267;
  t437 = t206 * t134;
  t450 = -t19 * t23 * t119 / 0.9e1 - t34 * t199 * t125 / 0.54e2 - t48 * t37 * t130 / 0.96e2;
  t451 = t116 * t450;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -t427 / 0.30e2 - t430 * t431 * t432 / 0.30e2 + 0.7e1 / 0.300e3 * t430 * t436 * t437 - t194 * t195 * t451 / 0.40e2;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  t456 = t7 * t63 * t223;
  t457 = t61 * t167;
  t458 = t222 * t140;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = -t430 * t457 * t458 / 0.30e2 - t456 / 0.30e2;

  t462 = t206 * t152;
  t463 = t431 * t462;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = -t430 * t463 / 0.30e2 - t427 / 0.30e2;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t467 = t222 * t157;
  t468 = t457 * t467;
  t471 = t62 * t397;
  t472 = t222 * t185;
  t473 = t471 * t472;
  t485 = -t19 * t23 * t170 / 0.9e1 - t34 * t215 * t176 / 0.54e2 - t48 * t73 * t181 / 0.96e2;
  t487 = t211 * t167 * t485;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = -t456 / 0.30e2 - t430 * t468 / 0.30e2 + 0.7e1 / 0.300e3 * t430 * t473 - t194 * t487 / 0.40e2;

  t490 = t206 * t206;
  t492 = t195 * t267 * t490;
  t501 = t34 * t36 * t42 / 0.288e3 + t48 * sigma[0] * t51 / 0.384e3;
  t503 = t195 * t116 * t501;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.7e1 / 0.300e3 * t194 * t492 - t194 * t503 / 0.40e2;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  t506 = t222 * t222;
  t508 = t211 * t397 * t506;
  t517 = t34 * t36 * t78 / 0.288e3 + t48 * sigma[2] * t84 / 0.384e3;
  t519 = t211 * t167 * t517;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = 0.7e1 / 0.300e3 * t194 * t508 - t194 * t519 / 0.40e2;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t527 = t261 / 0.4e1;
  t531 = t313 / 0.4e1;
  t535 = 0.5e1 / 0.36e2 * t7 * t15 * t332 * t56;
  t539 = 0.5e1 / 0.36e2 * t7 * t62 * t332 * t89;
  t541 = t7 * t238 * t253;
  t543 = t96 * t96;
  t545 = t8 / t543;
  t547 = 0.3e1 * t250 - 0.3e1 * t545;
  t553 = t7 * t259 * t135;
  t556 = t7 * t107 * t290;
  t579 = t7 * t302 * t307;
  t587 = 0.1e1 / t230 / t13;
  t588 = t587 * t16;
  t594 = t231 * t106;
  t596 = t7 * t594 * t234;
  t598 = t14 * t258;
  t600 = t7 * t598 * t101;
  t602 = -t535 - t539 - t541 / 0.2e1 - t7 * t95 * t56 * t547 / 0.2e1 + t553 / 0.60e2 - t556 / 0.40e2 - t7 * t17 * t116 * (-0.154e3 / 0.81e2 * t19 * t24 / t27 / t40 - 0.209e3 / 0.486e3 * t34 * t38 / t26 / t50 - 0.5e1 / 0.16e2 * t48 * t49 / t50 / t117) / 0.40e2 - t579 / 0.2e1 + t7 * t139 * t89 * t547 / 0.2e1 + t7 * t588 * t56 * t233 * t100 / 0.9e1 - t596 / 0.6e1 + t600 / 0.3e1;
  t604 = t7 * t107 * t269;
  t606 = t55 * t55;
  t608 = 0.1e1 / t115 / t606;
  t615 = 0.1e1 / t294 / t60;
  t616 = t615 * t16;
  t622 = t295 * t106;
  t624 = t7 * t622 * t298;
  t626 = t61 * t258;
  t628 = t7 * t626 * t141;
  t630 = t16 * t267;
  t643 = t106 * t116;
  t645 = t243 * t643 * t245;
  t655 = t4 * t195;
  t664 = 0.7e1 / 0.300e3 * t604 - 0.203e3 / 0.4500e4 * t7 * t17 * t608 * t268 * t134 + t7 * t616 * t89 * t297 * t140 / 0.9e1 - t624 / 0.6e1 + t628 / 0.3e1 + 0.7e1 / 0.75e2 * t243 * t630 * t100 * t268 - t318 * t244 * t233 * t134 / 0.30e2 - t318 * t319 * t100 * t252 / 0.2e1 - t645 / 0.15e2 - t243 * t244 * t252 * t134 / 0.10e2 - t243 * t244 * t100 * t289 / 0.10e2 + 0.7e1 / 0.100e3 * t655 * t630 * t134 * t289 - t341 * t342 * t140 * t306 / 0.2e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -t236 / 0.2e1 - t240 - t247 / 0.5e1 + 0.7e1 / 0.100e3 * t271 - t300 / 0.2e1 - t304 - 0.3e1 / 0.2e1 * t255 + t527 - t264 / 0.20e2 - 0.3e1 / 0.40e2 * t292 - 0.3e1 / 0.2e1 * t309 + t531 + t9 * (t602 + t664);

  t669 = t322 / 0.3e1;
  t670 = t329 / 0.15e2;
  t671 = t345 / 0.3e1;
  t672 = -t237 - 0.2e1 / 0.3e1 * t240 - t248 + t272 - t301 - 0.2e1 / 0.3e1 * t304 - t669 - t374 - t670 - t336 - t671;
  t674 = t361 / 0.15e2;
  t682 = 0.1e1 / t105 / t249;
  t685 = t7 * t61 * t682 * t351;
  t688 = t7 * t598 * t153;
  t692 = t7 * t14 * t682 * t334;
  t695 = t7 * t626 * t158;
  t698 = t7 * t311 * t186;
  t708 = t7 * t350 * t89 / 0.2e1 - t7 * t333 * t56 / 0.2e1 - t535 - t539 - 0.7e1 / 0.6e1 * t685 + t688 / 0.9e1 + 0.7e1 / 0.6e1 * t692 + t695 / 0.9e1 + t698 / 0.180e3 - t541 / 0.6e1 + t553 / 0.90e2 - t556 / 0.120e3 - t579 / 0.6e1 - t596 / 0.18e2 + 0.2e1 / 0.9e1 * t600 + 0.7e1 / 0.900e3 * t604 - t624 / 0.18e2;
  t716 = t4 * t6 * t587;
  t724 = t318 * t106 * t56 * t320 / 0.9e1;
  t725 = t332 * t56;
  t740 = t4 * t6 * t615;
  t748 = t341 * t106 * t89 * t343 / 0.9e1;
  t753 = t106 * t167;
  t756 = t357 * t753 * t359 / 0.45e2;
  t763 = t243 * t643 * t327 / 0.45e2;
  t772 = t332 * t89;
  t781 = 0.2e1 / 0.9e1 * t628 - t318 * t244 * t320 * t134 / 0.45e2 - t645 / 0.45e2 + t716 * t319 * t152 * t233 / 0.9e1 - t724 - t318 * t725 * t8 * t100 / 0.3e1 + 0.7e1 / 0.225e3 * t243 * t630 * t152 * t268 - t243 * t332 * t116 * t8 * t134 / 0.15e2 + t740 * t342 * t157 * t297 / 0.9e1 - t748 - t341 * t358 * t185 * t297 / 0.90e2 - t756 - t318 * t319 * t152 * t252 / 0.6e1 - t763 - t243 * t244 * t152 * t289 / 0.30e2 - t341 * t342 * t157 * t306 / 0.6e1 + t341 * t772 * t8 * t140 / 0.3e1 - t357 * t358 * t185 * t306 / 0.30e2;
  t784 = -t385 - t256 + t527 - t264 / 0.30e2 - t293 - t310 + t531 + t353 - t674 - t395 + t9 * (t708 + t781);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = t672 + t784;

  t787 = -t241 - t305 - t669 - 0.2e1 / 0.3e1 * t325 - t670 - t336 - t671 - 0.2e1 / 0.3e1 * t348 + t527 - t265 + t531;
  t796 = t357 * t753 * t386;
  t831 = t16 * t397;
  t841 = -t535 - t539 + t685 / 0.3e1 + 0.2e1 / 0.9e1 * t688 - t318 * t725 * t152 * t8 / 0.3e1 - t796 / 0.45e2 + t716 * t319 * t369 * t100 / 0.9e1 - t318 * t244 * t369 * t134 / 0.90e2 - t318 * t319 * t375 * t100 / 0.6e1 - t243 * t244 * t375 * t134 / 0.30e2 + t740 * t342 * t380 * t140 / 0.9e1 + t341 * t772 * t157 * t8 / 0.3e1 + t357 * t332 * t167 * t8 * t185 / 0.15e2 - t341 * t342 * t390 * t140 / 0.6e1 + 0.7e1 / 0.225e3 * t357 * t831 * t398 * t140 - t357 * t358 * t419 * t140 / 0.30e2 - t692 / 0.3e1;
  t845 = -t250 - 0.3e1 * t545;
  t856 = t7 * t594 * t370;
  t859 = t7 * t238 * t376;
  t862 = t7 * t622 * t381;
  t865 = t7 * t302 * t391;
  t868 = t7 * t145 * t399;
  t871 = t7 * t145 * t420;
  t880 = 0.2e1 / 0.9e1 * t695 + t698 / 0.90e2 - t7 * t95 * t56 * t845 / 0.2e1 + t7 * t139 * t89 * t845 / 0.2e1 - t856 / 0.18e2 - t859 / 0.6e1 - t862 / 0.18e2 - t865 / 0.6e1 + 0.7e1 / 0.900e3 * t868 - t871 / 0.120e3 + t553 / 0.180e3 + t600 / 0.9e1 + t628 / 0.9e1 - t341 * t358 * t386 * t140 / 0.45e2 - t724 - t748 - t756 - t763;
  t883 = t353 - t379 - t394 - t423 - t674 - t364 / 0.30e2 - t373 - t384 - t389 + t402 + t9 * (t841 + t880);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t787 + t883;

  t924 = -t535 - t539 + t688 / 0.3e1 - t796 / 0.15e2 + 0.7e1 / 0.75e2 * t357 * t831 * t157 * t398 - t318 * t319 * t152 * t375 / 0.2e1 - t341 * t358 * t380 * t185 / 0.30e2 - t341 * t342 * t157 * t390 / 0.2e1 - t357 * t358 * t390 * t185 / 0.10e2 - t357 * t358 * t157 * t419 / 0.10e2 + 0.7e1 / 0.100e3 * t4 * t211 * t831 * t185 * t419 + t695 / 0.3e1;
  t933 = -0.3e1 * t250 - 0.3e1 * t545;
  t973 = t88 * t88;
  t975 = 0.1e1 / t166 / t973;
  t981 = t698 / 0.60e2 - t856 / 0.6e1 - t859 / 0.2e1 - t862 / 0.6e1 - t865 / 0.2e1 + 0.7e1 / 0.300e3 * t868 - t871 / 0.40e2 - t7 * t95 * t56 * t933 / 0.2e1 + t7 * t139 * t89 * t933 / 0.2e1 - t7 * t63 * t167 * (-0.154e3 / 0.81e2 * t19 * t64 / t67 / t76 - 0.209e3 / 0.486e3 * t34 * t74 / t66 / t83 - 0.5e1 / 0.16e2 * t48 * t82 / t83 / t168) / 0.40e2 + t7 * t588 * t56 * t369 * t152 / 0.9e1 + t7 * t616 * t89 * t380 * t157 / 0.9e1 - 0.203e3 / 0.4500e4 * t7 * t63 * t975 * t398 * t185;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -t325 - t348 + t527 + t531 - 0.3e1 / 0.2e1 * t378 - 0.3e1 / 0.2e1 * t393 - 0.3e1 / 0.40e2 * t422 - t364 / 0.20e2 - t372 / 0.2e1 - t383 / 0.2e1 - t388 / 0.5e1 + 0.7e1 / 0.100e3 * t401 + t9 * (t924 + t981);

  t985 = t243 * t244 * t432;
  t989 = t7 * t107 * t207 / 0.90e2;
  t991 = t655 * t630 * t437;
  t994 = t7 * t17 * t451;
  t996 = t231 * t116;
  t1001 = t14 * t267;
  t1014 = t15 * t608;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -0.4e1 / 0.45e2 * t985 - t989 + 0.14e2 / 0.225e3 * t991 - t994 / 0.15e2 - t430 * t996 * t206 * t233 / 0.90e2 + 0.14e2 / 0.225e3 * t430 * t1001 * t432 * t134 - t430 * t431 * t450 * t100 / 0.15e2 - t430 * t431 * t206 * t252 / 0.30e2 - 0.203e3 / 0.4500e4 * t430 * t1014 * t206 * t268 + 0.7e1 / 0.150e3 * t430 * t436 * t450 * t134 + 0.7e1 / 0.300e3 * t430 * t436 * t206 * t289 - t194 * t195 * t116 * (0.11e2 / 0.27e2 * t19 * t23 * t274 + 0.19e2 / 0.162e3 * t34 * t199 * t280 + 0.3e1 / 0.32e2 * t48 * t37 * t285) / 0.40e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[1] = 0.0e0;

  t1042 = t357 * t358 * t458;
  t1046 = t7 * t145 * t223 / 0.90e2;
  t1047 = t295 * t167;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[2] = -0.4e1 / 0.45e2 * t1042 - t1046 - t430 * t1047 * t222 * t297 / 0.90e2 - t430 * t457 * t222 * t306 / 0.30e2;

  t1059 = t16 * t1;
  t1060 = t1059 * t429;
  t1061 = t1060 * t463;
  t1076 = t258 * t1 * t429;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[3] = -0.2e1 / 0.45e2 * t985 - t989 + 0.7e1 / 0.225e3 * t991 - t994 / 0.30e2 - 0.2e1 / 0.45e2 * t1061 - t430 * t996 * t462 * t100 / 0.90e2 + 0.7e1 / 0.225e3 * t430 * t1001 * t462 * t134 - t430 * t431 * t450 * t152 / 0.30e2 - t1076 * t431 * t206 * t8 / 0.30e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[4] = 0.0e0;

  t1082 = t1060 * t468;
  t1092 = t1060 * t473;
  t1094 = t61 * t397;
  t1099 = t1059 * t3;
  t1100 = t1099 * t487;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[5] = -0.2e1 / 0.45e2 * t1042 - t1046 - 0.2e1 / 0.45e2 * t1082 - t430 * t1047 * t467 * t140 / 0.90e2 + t1076 * t457 * t222 * t8 / 0.30e2 + 0.7e1 / 0.225e3 * t1092 + 0.7e1 / 0.225e3 * t430 * t1094 * t472 * t140 - t1100 / 0.30e2 - t430 * t457 * t485 * t140 / 0.30e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[6] = -0.4e1 / 0.45e2 * t1061 - t989 - t430 * t996 * t206 * t369 / 0.90e2 - t430 * t431 * t206 * t375 / 0.30e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[7] = 0.0e0;

  t1134 = t62 * t975;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[8] = -0.4e1 / 0.45e2 * t1082 - t1046 + 0.14e2 / 0.225e3 * t1092 - t1100 / 0.15e2 - t430 * t1047 * t222 * t380 / 0.90e2 + 0.14e2 / 0.225e3 * t430 * t1094 * t467 * t185 - t430 * t457 * t485 * t157 / 0.15e2 - t430 * t457 * t222 * t390 / 0.30e2 - 0.203e3 / 0.4500e4 * t430 * t1134 * t222 * t398 + 0.7e1 / 0.150e3 * t430 * t471 * t485 * t185 + 0.7e1 / 0.300e3 * t430 * t471 * t222 * t419 - t194 * t211 * t167 * (0.11e2 / 0.27e2 * t19 * t23 * t404 + 0.19e2 / 0.162e3 * t34 * t215 * t410 + 0.3e1 / 0.32e2 * t48 * t73 * t415) / 0.40e2;

  t1162 = 0.7e1 / 0.225e3 * t1099 * t492;
  t1176 = t1099 * t503 / 0.30e2;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = t1162 + 0.7e1 / 0.225e3 * t430 * t1001 * t490 * t100 - 0.203e3 / 0.4500e4 * t430 * t1014 * t490 * t134 + 0.7e1 / 0.150e3 * t430 * t436 * t206 * t450 - t1176 - t430 * t431 * t501 * t100 / 0.30e2 + 0.7e1 / 0.300e3 * t430 * t436 * t501 * t134 - t194 * t195 * t116 * (-t34 * t36 * t125 / 0.54e2 - t48 * sigma[0] * t130 / 0.48e2) / 0.40e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[1] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[2] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[3] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[4] = 0.0e0;

  t1197 = 0.7e1 / 0.225e3 * t1099 * t508;
  t1203 = t1099 * t519 / 0.30e2;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[5] = t1197 + 0.7e1 / 0.225e3 * t430 * t1094 * t506 * t140 - t1203 - t430 * t457 * t517 * t140 / 0.30e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[6] = t1162 + 0.7e1 / 0.225e3 * t430 * t1001 * t490 * t152 - t1176 - t430 * t431 * t501 * t152 / 0.30e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[8] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[9] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[10] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[11] = t1197 + 0.7e1 / 0.225e3 * t430 * t1094 * t506 * t157 - 0.203e3 / 0.4500e4 * t430 * t1134 * t506 * t185 + 0.7e1 / 0.150e3 * t430 * t471 * t222 * t485 - t1203 - t430 * t457 * t517 * t157 / 0.30e2 + 0.7e1 / 0.300e3 * t430 * t471 * t517 * t185 - t194 * t211 * t167 * (-t34 * t36 * t176 / 0.54e2 - t48 * sigma[2] * t181 / 0.48e2) / 0.40e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = -0.203e3 / 0.4500e4 * t194 * t195 * t608 * t490 * t206 + 0.7e1 / 0.100e3 * t430 * t436 * t206 * t501 - t430 * t15 * t116 * t48 * t51 / 0.15360e5;

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
    v3sigma3[9] = -0.203e3 / 0.4500e4 * t194 * t211 * t975 * t506 * t222 + 0.7e1 / 0.100e3 * t430 * t471 * t222 * t517 - t430 * t62 * t167 * t48 * t84 / 0.15360e5;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}

