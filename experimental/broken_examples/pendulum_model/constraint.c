/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) constraint_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_sq CASADI_PREFIX(sq)

static const casadi_int casadi_s0[8] = {4, 1, 0, 4, 0, 1, 2, 3};
static const casadi_int casadi_s1[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s2[6] = {4, 1, 0, 2, 0, 2};

casadi_real casadi_sq(casadi_real x) { return x*x;}

/* constraint:(i0[4])->(o0,o1[4x1,2nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a2, a3, a4, a5;
  a0=arg[0] ? arg[0][0] : 0;
  a1=8.0000000000000004e-01;
  a2=arg[0] ? arg[0][2] : 0;
  a3=sin(a2);
  a3=(a1*a3);
  a0=(a0-a3);
  a0=(a0-a1);
  a3=casadi_sq(a0);
  a4=cos(a2);
  a4=(a1*a4);
  a4=(a4-a1);
  a5=casadi_sq(a4);
  a3=(a3+a5);
  if (res[0]!=0) res[0][0]=a3;
  a0=(a0+a0);
  if (res[1]!=0) res[1][0]=a0;
  a3=cos(a2);
  a3=(a1*a3);
  a0=(a0*a3);
  a4=(a4+a4);
  a2=sin(a2);
  a1=(a1*a2);
  a4=(a4*a1);
  a0=(a0+a4);
  a0=(-a0);
  if (res[1]!=0) res[1][1]=a0;
  return 0;
}

int constraint(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

void constraint_incref(void) {
}

void constraint_decref(void) {
}

casadi_int constraint_n_in(void) { return 1;}

casadi_int constraint_n_out(void) { return 2;}

const char* constraint_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    default: return 0;
  }
}

const char* constraint_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

const casadi_int* constraint_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

const casadi_int* constraint_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    case 1: return casadi_s2;
    default: return 0;
  }
}

int constraint_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif