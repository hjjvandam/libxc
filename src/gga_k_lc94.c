/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include "util.h"

#define XC_GGA_K_LC94         521 /* Lembarki & Chermette */

typedef struct{
  double a, b, c, d, f, alpha, expo;
} gga_k_lc94_params;

static gga_k_lc94_params par_k_lc94 =
  {0.093907, 76.320, 0.26608, -0.0809615, 0.000057767, 100.0, 4.0};

static void 
gga_k_lc94_init(xc_func_type *p)
{
  gga_k_lc94_params *params;

  assert(p!=NULL && p->params == NULL);
  p->params = malloc(sizeof(gga_k_lc94_params));
  params = (gga_k_lc94_params *) (p->params);

  switch(p->info->number){
  case XC_GGA_K_LC94:
    memcpy(params, &par_k_lc94, sizeof(gga_k_lc94_params));
    break;
  default:
    fprintf(stderr, "Internal error in gga_k_lc94\n");
    exit(1);
  } 
}

#include "maple2c/gga_exc/gga_k_lc94.c"
#include "work_gga_new.c"

const xc_func_info_type xc_func_info_gga_k_lc94 = {
  XC_GGA_K_LC94,
  XC_KINETIC,
  "Lembarki & Chermette",
  XC_FAMILY_GGA,
  {&xc_ref_Lembarki1994_5328, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_I_HAVE_ALL,
  1e-21,
  0, NULL, NULL,
  gga_k_lc94_init, NULL,
  NULL, work_gga, NULL
};
