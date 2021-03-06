/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/


#include "util.h"

#define XC_GGA_X_FD_LB94     604 /* Functional derivative recovered from the stray LB94 potential */
#define XC_GGA_X_FD_REVLB94  605 /* Revised FD_LB94 */

typedef struct{
  double beta;         /* screening parameter beta */
} gga_x_fd_lb94_params;

static void 
gga_x_fd_lb94_init(xc_func_type *p)
{
  gga_x_fd_lb94_params *params;

  assert(p!=NULL && p->params == NULL);
  p->params = malloc(sizeof(gga_x_fd_lb94_params));
  params = (gga_x_fd_lb94_params *) (p->params);
 
  switch(p->info->number){
  case XC_GGA_X_FD_LB94:
    params->beta = 0.05;
    break;
  case XC_GGA_X_FD_REVLB94:
    params->beta = 0.004;
    break;
   default:
    fprintf(stderr, "Internal error in gga_x_fd_lb94\n");
    exit(1);
  }
}

static inline double FT_inter(int n, double x)
{
  static double fd_beta = 0.05, fd_csi = M_CBRT2;

  double mlog;

  mlog = (n == 0) ? 1 : log(x);
  
  return -3/4 * fd_beta*fd_csi*mlog /
    (1 + 3*fd_beta*fd_csi*x*log(fd_csi*x + sqrt(fd_csi*fd_csi*x*x + 1)));
}

static void func0(double *x, int n, void *dummy)
{
  int ii;
  
  for(ii=0; ii<n; ii++)
    x[ii] = FT_inter(0, x[ii]);
}

static void func1(double *x, int n, void *dummy)
{
  int ii;
  
  for(ii=0; ii<n; ii++)
    x[ii] = FT_inter(1, x[ii]);
}

#include "maple2c/gga_exc/gga_x_fd_lb94.c"
#include "work_gga_new.c"

const xc_func_info_type xc_func_info_gga_x_fd_lb94 = {
  XC_GGA_X_FD_LB94,
  XC_EXCHANGE,
  "Functional derivative recovered from the stray LB94 potential",
  XC_FAMILY_GGA,
  {&xc_ref_Gaiduk2011_012509, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_I_HAVE_ALL,
  1e-26,
  0, NULL, NULL,
  gga_x_fd_lb94_init, NULL,
  NULL, work_gga, NULL
};

const xc_func_info_type xc_func_info_gga_x_fd_revlb94 = {
  XC_GGA_X_FD_REVLB94,
  XC_EXCHANGE,
  "Revised FD_LB94",
  XC_FAMILY_GGA,
  {&xc_ref_Gaiduk2011_012509, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_I_HAVE_ALL,
  1e-26,
  0, NULL, NULL,
  gga_x_fd_lb94_init, NULL,
  NULL, work_gga, NULL
};
