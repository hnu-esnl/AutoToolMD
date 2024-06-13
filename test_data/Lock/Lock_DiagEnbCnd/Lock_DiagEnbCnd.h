/*
 * File: Lock_DiagEnbCnd.h
 *
 * Code generated for Simulink model 'Lock_DiagEnbCnd'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Sep 28 20:12:29 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Lock_DiagEnbCnd_h_
#define RTW_HEADER_Lock_DiagEnbCnd_h_
#ifndef Lock_DiagEnbCnd_COMMON_INCLUDES_
# define Lock_DiagEnbCnd_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_Lock_DiagEnbCnd.h"
#include "bfx.h"
#endif                                 /* Lock_DiagEnbCnd_COMMON_INCLUDES_ */

#include "Lock_DiagEnbCnd_types.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define Lock_DiagEnbCnd_VAR

/* Block signals (default storage) */
typedef struct tag_B_Lock_DiagEnbCnd_T {
  uint8 Bfx_PutBit_sf;                 /* '<S7>/Bfx_PutBit_sf' */
  boolean bDiagEnbCnd;                 /* '<S1>/Chart' */
} B_Lock_DiagEnbCnd_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_Lock_DiagEnbCnd_T {
  uint8 u8DiagCndTmp;                  /* '<S1>/Data Store Memory' */
  uint8 is_active_c2_Lock_DiagEnbCnd;  /* '<S1>/Chart' */
  uint8 is_c2_Lock_DiagEnbCnd;         /* '<S1>/Chart' */
  uint8 temporalCounter_i1;            /* '<S1>/Chart' */
  uint8 u8UsageMode_prev;              /* '<S1>/Chart' */
  uint8 u8UsageMode_start;             /* '<S1>/Chart' */
} DW_Lock_DiagEnbCnd_T;

/* Block signals (default storage) */
extern VAR(B_Lock_DiagEnbCnd_T, Lock_DiagEnbCnd_VAR) Lock_DiagEnbCnd_B;

/* Block states (default storage) */
extern VAR(DW_Lock_DiagEnbCnd_T, Lock_DiagEnbCnd_VAR) Lock_DiagEnbCnd_DW;

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
 * '<Root>' : 'Lock_DiagEnbCnd'
 * '<S1>'   : 'Lock_DiagEnbCnd/Lock_DiagEnbCnd_Runnable_10ms_sys'
 * '<S2>'   : 'Lock_DiagEnbCnd/Lock_DiagEnbCnd_Runnable_Init'
 * '<S3>'   : 'Lock_DiagEnbCnd/Lock_DiagEnbCnd_Runnable_10ms_sys/Chart'
 * '<S4>'   : 'Lock_DiagEnbCnd/Lock_DiagEnbCnd_Runnable_10ms_sys/PutBit'
 * '<S5>'   : 'Lock_DiagEnbCnd/Lock_DiagEnbCnd_Runnable_10ms_sys/PutBit1'
 * '<S6>'   : 'Lock_DiagEnbCnd/Lock_DiagEnbCnd_Runnable_10ms_sys/PutBit2'
 * '<S7>'   : 'Lock_DiagEnbCnd/Lock_DiagEnbCnd_Runnable_10ms_sys/PutBit3'
 */
#endif                                 /* RTW_HEADER_Lock_DiagEnbCnd_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
