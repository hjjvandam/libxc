/*
 Copyright (C) 2014 Jess Wellendorff, M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/


#include "util.h"

#define XC_MGGA_X_MBEEF          249 /* mBEEF exchange */

#include "maple2c/mgga_exc/mgga_x_mbeef.c"
#include "work_mgga_new.c"

const xc_func_info_type xc_func_info_mgga_x_mbeef = {
  XC_MGGA_X_MBEEF,
  XC_EXCHANGE,
  "mBEEF exchange",
  XC_FAMILY_MGGA,
  {&xc_ref_Wellendorff2014_144107, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  5e-7,
  0, NULL, NULL,
  NULL, NULL,
  NULL, NULL, work_mgga,
};
