/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/


#include "util.h"

#define XC_HYB_MGGA_X_DLDF      36 /* Dispersionless Density Functional */

static void
mgga_x_dldf_init(xc_func_type *p)
{
  p->cam_alpha   = 0.6144129;
}

#include "maple2c/mgga_exc/hyb_mgga_x_dldf.c"
#include "work_mgga_new.c"

const xc_func_info_type xc_func_info_hyb_mgga_x_dldf = {
  XC_HYB_MGGA_X_DLDF,
  XC_EXCHANGE,
  "Dispersionless Density Functional",
  XC_FAMILY_HYB_MGGA,
  {&xc_ref_Pernal2009_263201, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_I_HAVE_ALL,
  1.0e-22,
  0, NULL, NULL,
  mgga_x_dldf_init, NULL,
  NULL, NULL, work_mgga,
};
