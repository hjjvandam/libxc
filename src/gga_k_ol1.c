/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include "util.h"

#define XC_GGA_K_OL1          512 /* Ou-Yang and Levy v.1 */

#include "maple2c/gga_exc/gga_k_ol1.c"
#include "work_gga_new.c"

const xc_func_info_type xc_func_info_gga_k_ol1 = {
  XC_GGA_K_OL1,
  XC_KINETIC,
  "Ou-Yang and Levy v.1",
  XC_FAMILY_GGA,
  {&xc_ref_OuYang1991_379, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_I_HAVE_ALL,
  5e-26,
  0, NULL, NULL,
  NULL, NULL, 
  NULL, work_gga, NULL
};
