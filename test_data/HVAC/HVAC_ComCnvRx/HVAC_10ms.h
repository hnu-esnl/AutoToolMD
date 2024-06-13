/*
 * File: HVAC_10ms.h
 *
 * Code generated for Simulink model 'HVAC_10ms'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Jul 29 14:19:37 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HVAC_10ms_h_
#define RTW_HEADER_HVAC_10ms_h_
#ifndef HVAC_10ms_COMMON_INCLUDES_
# define HVAC_10ms_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_HVAC_10ms.h"
#endif                                 /* HVAC_10ms_COMMON_INCLUDES_ */

#include "HVAC_10ms_types.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define HVAC_10ms_VAR

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_HVAC_10ms_T {
  uint8 gCAN_u8UMM_UsageModeSt;        /* '<S1>/Data Store Memory' */
} DW_HVAC_10ms_T;

/* Block states (default storage) */
extern VAR(DW_HVAC_10ms_T, HVAC_10ms_VAR) HVAC_10ms_DW;

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
 * '<Root>' : 'HVAC_10ms'
 * '<S1>'   : 'HVAC_10ms/HVAC_Runnable_10ms_sys'
 * '<S2>'   : 'HVAC_10ms/HVAC_Runnable_Init'
 */
#endif                                 /* RTW_HEADER_HVAC_10ms_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
