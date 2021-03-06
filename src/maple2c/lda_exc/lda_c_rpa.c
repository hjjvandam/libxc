/* 
  This file was generated automatically with ./scripts/maple2c_new.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_c_rpa.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 3

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, double *zk, double *vrho, double *v2rho2, double *v3rho3)
{
  double t1, t3, t4, t5, t6, t7, t9, t10;
  double t12, t13, t16, t17, t18, t22, t24, t26;
  double t33, t34, t38, t40, t42, t49, t54;


  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = POW_1_3(rho[0]);
  t9 = t6 / t7;
  t10 = t4 * t9;
  t12 = log(t10 / 0.4e1);
  t13 = 0.311e-1 * t12;
  t16 = 0.22500000000000000000e-2 * t4 * t9 * t12;
  t17 = 0.42500000000000000000e-2 * t10;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = t13 - 0.48e-1 + t16 - t17;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t18 = 0.1e1 / rho[0];
  t22 = t6 / t7 / rho[0];
  t24 = t4 * t22 * t12;
  t26 = t4 * t22;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t13 - 0.48e-1 + t16 - t17 + rho[0] * (-0.10366666666666666667e-1 * t18 - 0.75000000000000000000e-3 * t24 + 0.66666666666666666670e-3 * t26);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t33 = rho[0] * rho[0];
  t34 = 0.1e1 / t33;
  t38 = t6 / t7 / t33;
  t40 = t4 * t38 * t12;
  t42 = t4 * t38;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.20733333333333333334e-1 * t18 - 0.15000000000000000000e-2 * t24 + 0.13333333333333333334e-2 * t26 + rho[0] * (0.10366666666666666667e-1 * t34 + 0.10000000000000000000e-2 * t40 - 0.63888888888888888893e-3 * t42);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t49 = t33 * rho[0];
  t54 = t6 / t7 / t49;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.31100000000000000001e-1 * t34 + 0.30000000000000000000e-2 * t40 - 0.19166666666666666668e-2 * t42 + rho[0] * (-0.20733333333333333334e-1 / t49 - 0.23333333333333333333e-2 * t4 * t54 * t12 + 0.11574074074074074075e-2 * t4 * t54);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, double *zk, double *vrho, double *v2rho2, double *v3rho3)
{
  double t1, t3, t4, t5, t6, t7, t9, t10;
  double t12, t13, t16, t17, t18, t22, t24, t26;
  double t33, t34, t38, t40, t42, t49, t54;


  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = POW_1_3(rho[0]);
  t9 = t6 / t7;
  t10 = t4 * t9;
  t12 = log(t10 / 0.4e1);
  t13 = 0.311e-1 * t12;
  t16 = 0.22500000000000000000e-2 * t4 * t9 * t12;
  t17 = 0.42500000000000000000e-2 * t10;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = t13 - 0.48e-1 + t16 - t17;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t18 = 0.1e1 / rho[0];
  t22 = t6 / t7 / rho[0];
  t24 = t4 * t22 * t12;
  t26 = t4 * t22;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t13 - 0.48e-1 + t16 - t17 + rho[0] * (-0.10366666666666666667e-1 * t18 - 0.75000000000000000000e-3 * t24 + 0.66666666666666666670e-3 * t26);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t33 = rho[0] * rho[0];
  t34 = 0.1e1 / t33;
  t38 = t6 / t7 / t33;
  t40 = t4 * t38 * t12;
  t42 = t4 * t38;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.20733333333333333334e-1 * t18 - 0.15000000000000000000e-2 * t24 + 0.13333333333333333334e-2 * t26 + rho[0] * (0.10366666666666666667e-1 * t34 + 0.10000000000000000000e-2 * t40 - 0.63888888888888888893e-3 * t42);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t49 = t33 * rho[0];
  t54 = t6 / t7 / t49;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.31100000000000000001e-1 * t34 + 0.30000000000000000000e-2 * t40 - 0.19166666666666666668e-2 * t42 + rho[0] * (-0.20733333333333333334e-1 / t49 - 0.23333333333333333333e-2 * t4 * t54 * t12 + 0.11574074074074074075e-2 * t4 * t54);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, double *zk, double *vrho, double *v2rho2, double *v3rho3)
{
  double t1, t3, t4, t5, t6, t7, t8, t10;
  double t11, t13, t14, t17, t18, t19, t23, t25;
  double t27, t34, t35, t39, t41, t43, t50, t55;


  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = rho[0] + rho[1];
  t8 = POW_1_3(t7);
  t10 = t6 / t8;
  t11 = t4 * t10;
  t13 = log(t11 / 0.4e1);
  t14 = 0.311e-1 * t13;
  t17 = 0.22500000000000000000e-2 * t4 * t10 * t13;
  t18 = 0.42500000000000000000e-2 * t11;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = t14 - 0.48e-1 + t17 - t18;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t19 = 0.1e1 / t7;
  t23 = t6 / t8 / t7;
  t25 = t4 * t23 * t13;
  t27 = t4 * t23;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t14 - 0.48e-1 + t17 - t18 + t7 * (-0.10366666666666666667e-1 * t19 - 0.75000000000000000000e-3 * t25 + 0.66666666666666666670e-3 * t27);

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = vrho[0];

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t34 = t7 * t7;
  t35 = 0.1e1 / t34;
  t39 = t6 / t8 / t34;
  t41 = t4 * t39 * t13;
  t43 = t4 * t39;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.20733333333333333334e-1 * t19 - 0.15000000000000000000e-2 * t25 + 0.13333333333333333334e-2 * t27 + t7 * (0.10366666666666666667e-1 * t35 + 0.10000000000000000000e-2 * t41 - 0.63888888888888888893e-3 * t43);

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = v2rho2[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = v2rho2[1];

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t50 = t34 * t7;
  t55 = t6 / t8 / t50;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.31100000000000000001e-1 * t35 + 0.30000000000000000000e-2 * t41 - 0.19166666666666666668e-2 * t43 + t7 * (-0.20733333333333333334e-1 / t50 - 0.23333333333333333333e-2 * t4 * t55 * t13 + 0.11574074074074074075e-2 * t4 * t55);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = v3rho3[0];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = v3rho3[1];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = v3rho3[2];

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}

