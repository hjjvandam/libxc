/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include "util.h"

#define XC_GGA_X_RGE2         142 /* Regularized PBE                                */

#include "maple2c/gga_exc/gga_x_rge2.c"
#include "work_gga_new.c"

const xc_func_info_type xc_func_info_gga_x_rge2 = {
  XC_GGA_X_RGE2,
  XC_EXCHANGE,
  "Regularized PBE",
  XC_FAMILY_GGA,
  {&xc_ref_Ruzsinszky2009_763, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-32,
  0, NULL, NULL,
  NULL, NULL, 
  NULL, work_gga, NULL
};

