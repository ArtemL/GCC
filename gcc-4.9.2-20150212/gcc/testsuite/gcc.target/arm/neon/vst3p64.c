/* Test the `vst3p64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_crypto_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_crypto } */

#include "arm_neon.h"

void test_vst3p64 (void)
{
  poly64_t *arg0_poly64_t;
  poly64x1x3_t arg1_poly64x1x3_t;

  vst3_p64 (arg0_poly64_t, arg1_poly64x1x3_t);
}

/* { dg-final { scan-assembler "vst1\.64\[ 	\]+\\\{((\[dD\]\[0-9\]+-\[dD\]\[0-9\]+)|(\[dD\]\[0-9\]+, \[dD\]\[0-9\]+, \[dD\]\[0-9\]+, \[dD\]\[0-9\]+))\\\}, \\\[\[rR\]\[0-9\]+\(:\[0-9\]+\)?\\\]!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
