/*
 Copyright (C) 2006-2009 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include "util.h"
#include "xc_device.h"
#include "xc_extern.h"

#define XC_LDA_C_1D_LOOS          26 /* P-F Loos correlation LDA     */

#include "maple2c/lda_exc/lda_c_1d_loos.c"
#include "work_lda_new.c"
#include "work_lda_new.cu"

EXTERN const xc_func_info_type xc_func_info_lda_c_1d_loos = {
  XC_LDA_C_1D_LOOS,
  XC_CORRELATION,
  "P-F Loos correlation LDA",
  XC_FAMILY_LDA,
  {&xc_ref_Loos2013_064108, NULL, NULL, NULL, NULL},
  XC_FLAGS_1D |  XC_FLAGS_I_HAVE_ALL,
  5e-28,
  0, NULL, NULL,
  NULL, NULL,
  work_lda, NULL, NULL,
#ifndef __CUDACC__
  NULL, NULL, NULL
#else
  work_lda_offload, NULL, NULL
#endif
};
