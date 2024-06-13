/*
 * File: EFuse_ComCnvRx.h
 *
 * Code generated for Simulink model 'EFuse_ComCnvRx'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed Sep 28 14:01:21 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EFuse_ComCnvRx_h_
#define RTW_HEADER_EFuse_ComCnvRx_h_
#ifndef EFuse_ComCnvRx_COMMON_INCLUDES_
#define EFuse_ComCnvRx_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_EFuse_ComCnvRx.h"
#endif                                 /* EFuse_ComCnvRx_COMMON_INCLUDES_ */

#include "EFuse_ComCnvRx_types.h"

/* Macros for accessing real-time model data structure */

#define EFuse_ComCnvRx_VAR

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_EFuse_ComCnvRx_T {
  uint8 UnitDelay_DSTATE;              /* '<S1>/Unit Delay' */
} DW_EFuse_ComCnvRx_T;

/* Block states (default storage) */
extern VAR(DW_EFuse_ComCnvRx_T, EFuse_ComCnvRx_VAR) EFuse_ComCnvRx_DW;

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
 * '<Root>' : 'EFuse_ComCnvRx'
 * '<S1>'   : 'EFuse_ComCnvRx/EFuse_ComCnvRx_Runnable_10ms_sys'
 * '<S2>'   : 'EFuse_ComCnvRx/EFuse_ComCnvRx_Runnable_Init'
 */
#endif                                 /* RTW_HEADER_EFuse_ComCnvRx_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
