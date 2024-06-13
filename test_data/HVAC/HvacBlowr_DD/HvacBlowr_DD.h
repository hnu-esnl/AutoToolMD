/*
 * File: HvacBlowr_DD.h
 *
 * Code generated for Simulink model 'HvacBlowr_DD'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Sep 29 14:46:33 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HvacBlowr_DD_h_
#define RTW_HEADER_HvacBlowr_DD_h_
#ifndef HvacBlowr_DD_COMMON_INCLUDES_
# define HvacBlowr_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_HvacBlowr_DD.h"
#endif                                 /* HvacBlowr_DD_COMMON_INCLUDES_ */

#include "HvacBlowr_DD_types.h"
#include "mfl.h"
#include "mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define HvacBlowr_DD_VAR

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
 * '<Root>' : 'HvacBlowr_DD'
 * '<S1>'   : 'HvacBlowr_DD/HvacBlowr_DD_Runnable_10ms_sys'
 * '<S2>'   : 'HvacBlowr_DD/HvacBlowr_DD_Runnable_Init'
 * '<S3>'   : 'HvacBlowr_DD/HvacBlowr_DD_Runnable_10ms_sys/FrontBlower'
 * '<S4>'   : 'HvacBlowr_DD/HvacBlowr_DD_Runnable_10ms_sys/RearBlower'
 * '<S5>'   : 'HvacBlowr_DD/HvacBlowr_DD_Runnable_10ms_sys/FrontBlower/Linear_Blower'
 * '<S6>'   : 'HvacBlowr_DD/HvacBlowr_DD_Runnable_10ms_sys/FrontBlower/PWM_Blower'
 * '<S7>'   : 'HvacBlowr_DD/HvacBlowr_DD_Runnable_10ms_sys/RearBlower/Linear_Blower'
 * '<S8>'   : 'HvacBlowr_DD/HvacBlowr_DD_Runnable_10ms_sys/RearBlower/PWM_Blower'
 */
#endif                                 /* RTW_HEADER_HvacBlowr_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
