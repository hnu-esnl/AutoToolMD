/*
 * File: DcChrgrPileU3_DD.h
 *
 * Code generated for Simulink model 'DcChrgrPileU3_DD'.
 *
 * Model version                  : 1.21
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Oct 24 17:02:12 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DcChrgrPileU3_DD_h_
#define RTW_HEADER_DcChrgrPileU3_DD_h_
#ifndef DcChrgrPileU3_DD_COMMON_INCLUDES_
# define DcChrgrPileU3_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_DcChrgrPileU3_DD.h"
#endif                                 /* DcChrgrPileU3_DD_COMMON_INCLUDES_ */

#include "DcChrgrPileU3_DD_types.h"
#include "mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define DcChrgrPileU3_DD_VAR

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_DcChrgrPileU3_DD_T {
  uint16 BattU_VrmFac;                 /* '<S1>/Data Store Memory' */
} DW_DcChrgrPileU3_DD_T;

/* Block states (default storage) */
extern VAR(DW_DcChrgrPileU3_DD_T, DcChrgrPileU3_DD_VAR) DcChrgrPileU3_DD_DW;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Constant2' : Unused code path elimination
 * Block '<S1>/Product' : Unused code path elimination
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
 * '<Root>' : 'DcChrgrPileU3_DD'
 * '<S1>'   : 'DcChrgrPileU3_DD/DcChrgrPileU3_DD_Runnable_10ms_sys'
 * '<S2>'   : 'DcChrgrPileU3_DD/DcChrgrPileU3_DD_Runnable_Init'
 * '<S3>'   : 'DcChrgrPileU3_DD/DcChrgrPileU3_DD_Runnable_10ms_sys/DcChrgrPileU3FailDiagDebounceReSet'
 * '<S4>'   : 'DcChrgrPileU3_DD/DcChrgrPileU3_DD_Runnable_10ms_sys/DcChrgrPileU3FailDiagSet'
 */
#endif                                 /* RTW_HEADER_DcChrgrPileU3_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
