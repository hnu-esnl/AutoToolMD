/*
 * File: EvaprT_DD.h
 *
 * Code generated for Simulink model 'EvaprT_DD'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Sep 29 11:06:44 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EvaprT_DD_h_
#define RTW_HEADER_EvaprT_DD_h_
#ifndef EvaprT_DD_COMMON_INCLUDES_
# define EvaprT_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_EvaprT_DD.h"
#endif                                 /* EvaprT_DD_COMMON_INCLUDES_ */

#include "EvaprT_DD_types.h"
#include "Ifx.h"
#include "mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define EvaprT_DD_VAR

/* Block signals (default storage) */
typedef struct tag_B_EvaprT_DD_T {
  float32 Add;                         /* '<S12>/Add' */
  float32 Add_j;                       /* '<S8>/Add' */
} B_EvaprT_DD_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_EvaprT_DD_T {
  float64 UnitDelay1_DSTATE;           /* '<S7>/UnitDelay1' */
  float64 UnitDelay1_DSTATE_d;         /* '<S11>/UnitDelay1' */
  float32 uRawBuf[20];                 /* '<S7>/Data Store Memory' */
  float32 uRawBuf_f[20];               /* '<S11>/Data Store Memory' */
  uint8 UnitDelay_DSTATE_j;            /* '<S11>/UnitDelay' */
  uint8 UnitDelay_DSTATE_f;            /* '<S7>/UnitDelay' */
  uint8 PRM_A02_CFG_SPEC_VAL;          /* '<S3>/Data Store Memory' */
  uint8 PRM_A02_CFG_SPEC_VAL_g;        /* '<S4>/Data Store Memory' */
} DW_EvaprT_DD_T;

/* Block signals (default storage) */
extern VAR(B_EvaprT_DD_T, EvaprT_DD_VAR) EvaprT_DD_B;

/* Block states (default storage) */
extern VAR(DW_EvaprT_DD_T, EvaprT_DD_VAR) EvaprT_DD_DW;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/Constant7' : Unused code path elimination
 * Block '<S3>/Constant8' : Unused code path elimination
 * Block '<S3>/PA_EvaprT_tTrfSnsr_CUR' : Unused code path elimination
 * Block '<S3>/PA_EvaprT_tTrfSnsr_CUR2' : Unused code path elimination
 * Block '<S3>/Relational Operator1' : Unused code path elimination
 * Block '<S3>/Relational Operator2' : Unused code path elimination
 * Block '<S3>/Switch6' : Unused code path elimination
 * Block '<S3>/Switch7' : Unused code path elimination
 * Block '<S2>/Constant7' : Unused code path elimination
 * Block '<S2>/Constant8' : Unused code path elimination
 * Block '<S2>/PA_EvaprT_tTrfSnsr_CUR' : Unused code path elimination
 * Block '<S2>/PA_EvaprT_tTrfSnsr_CUR2' : Unused code path elimination
 * Block '<S2>/Relational Operator1' : Unused code path elimination
 * Block '<S2>/Relational Operator2' : Unused code path elimination
 * Block '<S2>/Switch7' : Unused code path elimination
 */

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
 * '<Root>' : 'EvaprT_DD'
 * '<S1>'   : 'EvaprT_DD/EvaprT_DD_Runnable_100ms_sys'
 * '<S2>'   : 'EvaprT_DD/EvaprT_DD_Runnable_Init'
 * '<S3>'   : 'EvaprT_DD/EvaprT_DD_Runnable_100ms_sys/Temp_Calculate'
 * '<S4>'   : 'EvaprT_DD/EvaprT_DD_Runnable_100ms_sys/Temp_CalculateRe'
 * '<S5>'   : 'EvaprT_DD/EvaprT_DD_Runnable_100ms_sys/Temp_Calculate/DiagDisbable'
 * '<S6>'   : 'EvaprT_DD/EvaprT_DD_Runnable_100ms_sys/Temp_Calculate/DiagEna'
 * '<S7>'   : 'EvaprT_DD/EvaprT_DD_Runnable_100ms_sys/Temp_Calculate/Moving_Average_Filter'
 * '<S8>'   : 'EvaprT_DD/EvaprT_DD_Runnable_100ms_sys/Temp_Calculate/Moving_Average_Filter/ForIteratorSubsystem'
 * '<S9>'   : 'EvaprT_DD/EvaprT_DD_Runnable_100ms_sys/Temp_CalculateRe/DiagDisbable'
 * '<S10>'  : 'EvaprT_DD/EvaprT_DD_Runnable_100ms_sys/Temp_CalculateRe/DiagEna'
 * '<S11>'  : 'EvaprT_DD/EvaprT_DD_Runnable_100ms_sys/Temp_CalculateRe/Moving_Average_Filter'
 * '<S12>'  : 'EvaprT_DD/EvaprT_DD_Runnable_100ms_sys/Temp_CalculateRe/Moving_Average_Filter/ForIteratorSubsystem'
 */
#endif                                 /* RTW_HEADER_EvaprT_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
