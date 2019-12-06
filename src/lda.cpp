/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include <hip/hip_runtime.h>
#include "xc_device.h"
#include "util.h"

#ifdef __cplusplus
extern "C" {
#endif

/* get the lda functional */
void 
xc_lda_offload(const xc_func_type *func, int np, const double *rho, 
	       double *zk, double *vrho, double *v2rho2, double *v3rho3, hipStream_t stream)
{
  const xc_dimensions *dim = &(func->dim);

  /* sanity check */
  if(zk != NULL && !(func->info->flags & XC_FLAGS_HAVE_EXC)){
    fprintf(stderr, "Functional '%s' does not provide an implementation of Exc\n",
	    func->info->name);
    exit(1);
  }

  if(vrho != NULL && !(func->info->flags & XC_FLAGS_HAVE_VXC)){
    fprintf(stderr, "Functional '%s' does not provide an implementation of vxc\n",
	    func->info->name);
    exit(1);
  }

  if(v2rho2 != NULL && !(func->info->flags & XC_FLAGS_HAVE_FXC)){
    fprintf(stderr, "Functional '%s' does not provide an implementation of fxc\n",
	    func->info->name);
    exit(1);
  }

  if(v3rho3 != NULL && !(func->info->flags & XC_FLAGS_HAVE_KXC)){
    fprintf(stderr, "Functional '%s' does not provide an implementation of kxc\n",
	    func->info->name);
    exit(1);
  }

  /* initialize output */
  if(zk != NULL)
    checkHip(__FILE__,__LINE__,hipMemsetAsync(zk,     0, np*sizeof(double)*dim->zk, stream));

  if(vrho != NULL) 
    checkHip(__FILE__,__LINE__,hipMemsetAsync(vrho,   0, np*sizeof(double)*dim->vrho, stream));

  if(v2rho2 != NULL)
    checkHip(__FILE__,__LINE__,hipMemsetAsync(v2rho2, 0, np*sizeof(double)*dim->v2rho2, stream));

  if(v3rho3 != NULL)
    checkHip(__FILE__,__LINE__,hipMemsetAsync(v3rho3, 0, np*sizeof(double)*dim->v3rho3, stream));

  if (func->info->lda != NULL) {
    if (func->info->lda_offload == NULL) {
      fprintf(stderr,"HIP GPU port of %s not supported\n",func->info->name);
    }
    assert(func->info!=NULL && func->info->lda_offload!=NULL);
  }

  /* call the LDA offload routines */
  func->info->lda_offload(func, np, rho, zk, vrho, v2rho2, v3rho3, stream);
}


/* specializations */
void
xc_lda_exc_offload(const xc_func_type *p, int np, const double *rho, double *zk, hipStream_t stream)
{
  xc_lda_offload(p, np, rho, zk, NULL, NULL, NULL, stream);
}

void
xc_lda_exc_vxc_offload(const xc_func_type *p, int np, const double *rho, double *zk, double *vrho, hipStream_t stream)
{
  xc_lda_offload(p, np, rho, zk, vrho, NULL, NULL, stream);
}

void
xc_lda_vxc_offload(const xc_func_type *p, int np, const double *rho, double *vrho, hipStream_t stream)
{
  xc_lda_offload(p, np, rho, NULL, vrho, NULL, NULL, stream);
}

void
xc_lda_fxc_offload(const xc_func_type *p, int np, const double *rho, double *v2rho2, hipStream_t stream)
{
  xc_lda_offload(p, np, rho, NULL, NULL, v2rho2, NULL, stream);
}

void
xc_lda_kxc_offload(const xc_func_type *p, int np, const double *rho, double *v3rho3, hipStream_t stream)
{
  xc_lda_offload(p, np, rho, NULL, NULL, NULL, v3rho3, stream);
}

#ifdef __cplusplus
}
#endif