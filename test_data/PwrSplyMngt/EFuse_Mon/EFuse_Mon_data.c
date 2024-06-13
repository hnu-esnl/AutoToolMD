/*
 * File: EFuse_Mon_data.c
 *
 * Code generated for Simulink model 'EFuse_Mon'.
 *
 * Model version                  : 1.373
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed Sep 28 16:44:54 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EFuse_Mon.h"
#include "EFuse_Mon_private.h"

/* Invariant block signals (default storage) */
CONST(ConstB_EFuse_Mon_T, EFuse_Mon_VAR) EFuse_Mon_ConstB = {
  4294967295U,                         /* '<S65>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S65>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S65>/FixPt Bitwise Operator5' */
  4U,                                  /* '<S69>/FixPt Bitwise Operator1' */
  4294967295U,                         /* '<S73>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S73>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S73>/FixPt Bitwise Operator5' */
  4U,                                  /* '<S77>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S57>/Switch' */
  4294967295U,                         /* '<S74>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S74>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S74>/FixPt Bitwise Operator5' */
  16U,                                 /* '<S78>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S57>/Switch7' */
  4294967295U,                         /* '<S75>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S75>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S75>/FixPt Bitwise Operator5' */
  32768U,                              /* '<S79>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S57>/Switch8' */
  4294967295U,                         /* '<S76>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S76>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S76>/FixPt Bitwise Operator5' */
  16777216U,                           /* '<S80>/FixPt Bitwise Operator1' */
  4294967295U,                         /* '<S81>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S81>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S81>/FixPt Bitwise Operator5' */
  4U,                                  /* '<S85>/FixPt Bitwise Operator1' */
  4294967295U,                         /* '<S89>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S89>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S89>/FixPt Bitwise Operator5' */
  4U,                                  /* '<S93>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S59>/Switch' */
  4294967295U,                         /* '<S90>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S90>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S90>/FixPt Bitwise Operator5' */
  16U,                                 /* '<S94>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S59>/Switch7' */
  4294967295U,                         /* '<S91>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S91>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S91>/FixPt Bitwise Operator5' */
  32768U,                              /* '<S95>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S59>/Switch8' */
  4294967295U,                         /* '<S92>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S92>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S92>/FixPt Bitwise Operator5' */
  16777216U,                           /* '<S96>/FixPt Bitwise Operator1' */
  4294967295U,                         /* '<S97>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S97>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S97>/FixPt Bitwise Operator5' */
  4U,                                  /* '<S101>/FixPt Bitwise Operator1' */
  4294967295U,                         /* '<S105>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S105>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S105>/FixPt Bitwise Operator5' */
  4U,                                  /* '<S109>/FixPt Bitwise Operator1' */
  4294967295U,                         /* '<S113>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S113>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S113>/FixPt Bitwise Operator5' */
  4U,                                  /* '<S117>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S62>/Switch' */
  4294967295U,                         /* '<S114>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S114>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S114>/FixPt Bitwise Operator5' */
  16U,                                 /* '<S118>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S62>/Switch7' */
  4294967295U,                         /* '<S115>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S115>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S115>/FixPt Bitwise Operator5' */
  32768U,                              /* '<S119>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S62>/Switch8' */
  4294967295U,                         /* '<S116>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S116>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S116>/FixPt Bitwise Operator5' */
  16777216U,                           /* '<S120>/FixPt Bitwise Operator1' */
  4294967295U,                         /* '<S121>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S121>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S121>/FixPt Bitwise Operator5' */
  4U,                                  /* '<S125>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S63>/Switch' */
  4294967295U,                         /* '<S122>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S122>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S122>/FixPt Bitwise Operator5' */
  16U,                                 /* '<S126>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S63>/Switch7' */
  4294967295U,                         /* '<S123>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S123>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S123>/FixPt Bitwise Operator5' */
  32768U,                              /* '<S127>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S63>/Switch8' */
  4294967295U,                         /* '<S124>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S124>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S124>/FixPt Bitwise Operator5' */
  16777216U,                           /* '<S128>/FixPt Bitwise Operator1' */
  4294967295U,                         /* '<S129>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S129>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S129>/FixPt Bitwise Operator5' */
  4U,                                  /* '<S133>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S64>/Switch' */
  4294967295U,                         /* '<S130>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S130>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S130>/FixPt Bitwise Operator5' */
  16U,                                 /* '<S134>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S64>/Switch7' */
  4294967295U,                         /* '<S131>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S131>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S131>/FixPt Bitwise Operator5' */
  32768U,                              /* '<S135>/FixPt Bitwise Operator1' */
  0U,                                  /* '<S64>/Switch8' */
  4294967295U,                         /* '<S132>/FixPt Bitwise Operator4' */
  4294967295U,                         /* '<S132>/FixPt Bitwise Operator3' */
  0U,                                  /* '<S132>/FixPt Bitwise Operator5' */
  16777216U                            /* '<S136>/FixPt Bitwise Operator1' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
