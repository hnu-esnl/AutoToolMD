/*
 * File: CabinT_DD.h
 *
 * Code generated for Simulink model 'CabinT_DD'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Sep 29 11:04:31 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CabinT_DD_h_
#define RTW_HEADER_CabinT_DD_h_
#ifndef CabinT_DD_COMMON_INCLUDES_
# define CabinT_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CabinT_DD.h"
#endif                                 /* CabinT_DD_COMMON_INCLUDES_ */

#include "CabinT_DD_types.h"
#include "Ifx.h"
#include "mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define CabinT_DD_VAR

/* Block signals (default storage) */
typedef struct tag_B_CabinT_DD_T {
  float32 Add;                         /* '<S14>/Add' */
  float32 Add_a;                       /* '<S10>/Add' */
} B_CabinT_DD_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_CabinT_DD_T {
  float64 UnitDelay1_DSTATE;           /* '<S13>/UnitDelay1' */
  float64 UnitDelay1_DSTATE_a;         /* '<S9>/UnitDelay1' */
  float32 uRawBuf[20];                 /* '<S13>/Data Store Memory' */
  float32 uRawBuf_j[20];               /* '<S9>/Data Store Memory' */
  uint8 UnitDelay_DSTATE_a;            /* '<S13>/UnitDelay' */
  uint8 UnitDelay_DSTATE_i;            /* '<S9>/UnitDelay' */
} DW_CabinT_DD_T;

/* Block signals (default storage) */
extern VAR(B_CabinT_DD_T, CabinT_DD_VAR) CabinT_DD_B;

/* Block states (default storage) */
extern VAR(DW_CabinT_DD_T, CabinT_DD_VAR) CabinT_DD_DW;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CabinT_DD'
 * '<S1>'   : 'CabinT_DD/CabinT_DD_Runnable_100ms_sys'
 * '<S2>'   : 'CabinT_DD/CabinT_DD_Runnable_Init'
 * '<S3>'   : 'CabinT_DD/CabinT_DD_Runnable_100ms_sys/CabinTSnsrAvl'
 * '<S4>'   : 'CabinT_DD/CabinT_DD_Runnable_100ms_sys/CabinTSnsrNotAvl'
 * '<S5>'   : 'CabinT_DD/CabinT_DD_Runnable_100ms_sys/ReCabinTSnsrAvl'
 * '<S6>'   : 'CabinT_DD/CabinT_DD_Runnable_100ms_sys/ReCabinTSnsrNotAvl'
 * '<S7>'   : 'CabinT_DD/CabinT_DD_Runnable_100ms_sys/CabinTSnsrAvl/DiagDisbable'
 * '<S8>'   : 'CabinT_DD/CabinT_DD_Runnable_100ms_sys/CabinTSnsrAvl/DiagEna'
 * '<S9>'   : 'CabinT_DD/CabinT_DD_Runnable_100ms_sys/CabinTSnsrAvl/Moving_Average_Filter'
 * '<S10>'  : 'CabinT_DD/CabinT_DD_Runnable_100ms_sys/CabinTSnsrAvl/Moving_Average_Filter/ForIteratorSubsystem'
 * '<S11>'  : 'CabinT_DD/CabinT_DD_Runnable_100ms_sys/ReCabinTSnsrAvl/DiagDisbable'
 * '<S12>'  : 'CabinT_DD/CabinT_DD_Runnable_100ms_sys/ReCabinTSnsrAvl/DiagEna'
 * '<S13>'  : 'CabinT_DD/CabinT_DD_Runnable_100ms_sys/ReCabinTSnsrAvl/Moving_Average_Filter'
 * '<S14>'  : 'CabinT_DD/CabinT_DD_Runnable_100ms_sys/ReCabinTSnsrAvl/Moving_Average_Filter/ForIteratorSubsystem'
 */
#endif                                 /* RTW_HEADER_CabinT_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
