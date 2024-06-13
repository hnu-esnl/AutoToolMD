/*
 * File: AcChrgrIntkT2_DD.h
 *
 * Code generated for Simulink model 'AcChrgrIntkT2_DD'.
 *
 * Model version                  : 1.40
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Sep 27 20:57:46 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AcChrgrIntkT2_DD_h_
#define RTW_HEADER_AcChrgrIntkT2_DD_h_
#ifndef AcChrgrIntkT2_DD_COMMON_INCLUDES_
# define AcChrgrIntkT2_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_AcChrgrIntkT2_DD.h"
#endif                                 /* AcChrgrIntkT2_DD_COMMON_INCLUDES_ */

#include "AcChrgrIntkT2_DD_types.h"
#include "Ifx.h"
#include "mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define AcChrgrIntkT2_DD_VAR

/* Block signals (default storage) */
typedef struct tag_B_AcChrgrIntkT2_DD_T {
  float32 Add;                         /* '<S6>/Add' */
} B_AcChrgrIntkT2_DD_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_AcChrgrIntkT2_DD_T {
  float64 UnitDelay1_DSTATE;           /* '<S5>/UnitDelay1' */
  float64 UnitDelay_DSTATE;            /* '<S5>/UnitDelay' */
  float32 uRawBuf[20];                 /* '<S5>/Data Store Memory' */
} DW_AcChrgrIntkT2_DD_T;

/* Block signals (default storage) */
extern VAR(B_AcChrgrIntkT2_DD_T, AcChrgrIntkT2_DD_VAR) AcChrgrIntkT2_DD_B;

/* Block states (default storage) */
extern VAR(DW_AcChrgrIntkT2_DD_T, AcChrgrIntkT2_DD_VAR) AcChrgrIntkT2_DD_DW;

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
 * '<Root>' : 'AcChrgrIntkT2_DD'
 * '<S1>'   : 'AcChrgrIntkT2_DD/AcChrgrIntkT2_DD_Runnable_100ms_sys'
 * '<S2>'   : 'AcChrgrIntkT2_DD/AcChrgrIntkT2_DD_Runnable_Init'
 * '<S3>'   : 'AcChrgrIntkT2_DD/AcChrgrIntkT2_DD_Runnable_100ms_sys/AcChrgrIntkT2FailDiagDebounceReSet'
 * '<S4>'   : 'AcChrgrIntkT2_DD/AcChrgrIntkT2_DD_Runnable_100ms_sys/AcChrgrIntkT2FailDiagSet'
 * '<S5>'   : 'AcChrgrIntkT2_DD/AcChrgrIntkT2_DD_Runnable_100ms_sys/Moving_Average_Filter'
 * '<S6>'   : 'AcChrgrIntkT2_DD/AcChrgrIntkT2_DD_Runnable_100ms_sys/Moving_Average_Filter/ForIteratorSubsystem'
 */
#endif                                 /* RTW_HEADER_AcChrgrIntkT2_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
