/*
 Copyright (C) 2008 Georg Madsen

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include "util.h"

#define XC_GGA_X_EV93  35 /* Engel and Vosko */

#include "maple2c/gga_exc/gga_x_ev93.c"
#include "work_gga_new.c"

const xc_func_info_type xc_func_info_gga_x_ev93 = {
  XC_GGA_X_EV93,
  XC_EXCHANGE,
  "Engel and Vosko",
  XC_FAMILY_GGA,
  {&xc_ref_Engel1993_13164, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_I_HAVE_ALL,
  1e-25,
  0, NULL, NULL,
  NULL, NULL, 
  NULL, work_gga, NULL
};
