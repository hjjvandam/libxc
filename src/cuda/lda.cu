/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/


#include "util.cuh"
#include "funcs_lda.cu"

/* get the lda functional */
__device__
void 
xc_lda_cuda(const xc_func_type *func, int np, const double *rho, 
	double *zk, double *vrho, double *v2rho2, double *v3rho3)
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
    memset(zk,     0, np*sizeof(double)*dim->zk);

  if(vrho != NULL)
    memset(vrho,   0, np*sizeof(double)*dim->vrho);

  if(v2rho2 != NULL)
    memset(v2rho2, 0, np*sizeof(double)*dim->v2rho2);

  if(v3rho3 != NULL)
    memset(v3rho3, 0, np*sizeof(double)*dim->v3rho3);


  assert(func->info!=NULL && func->info->lda!=NULL);

  /* call the LDA routines */
  func->info->lda_cuda(func, np, rho, zk, vrho, v2rho2, v3rho3);
}


/* specializations */
__device__
void
xc_lda_exc_cuda(const xc_func_type *p, int np, const double *rho, double *zk)
{
  xc_lda_cuda(p, np, rho, zk, NULL, NULL, NULL);
}

__device__
void
xc_lda_exc_vxc_cuda(const xc_func_type *p, int np, const double *rho, double *zk, double *vrho)
{
  xc_lda_cuda(p, np, rho, zk, vrho, NULL, NULL);
}

__device__
void
xc_lda_vxc_cuda(const xc_func_type *p, int np, const double *rho, double *vrho)
{
  xc_lda_cuda(p, np, rho, NULL, vrho, NULL, NULL);
}

__device__
void
xc_lda_fxc_cuda(const xc_func_type *p, int np, const double *rho, double *v2rho2)
{
  xc_lda_cuda(p, np, rho, NULL, NULL, v2rho2, NULL);
}

__device__
void
xc_lda_kxc_cuda(const xc_func_type *p, int np, const double *rho, double *v3rho3)
{
  xc_lda_cuda(p, np, rho, NULL, NULL, NULL, v3rho3);
}
