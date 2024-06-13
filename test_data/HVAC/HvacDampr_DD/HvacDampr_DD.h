/*
 * File: HvacDampr_DD.h
 *
 * Code generated for Simulink model 'HvacDampr_DD'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Sep 26 17:11:09 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HvacDampr_DD_h_
#define RTW_HEADER_HvacDampr_DD_h_
#ifndef HvacDampr_DD_COMMON_INCLUDES_
# define HvacDampr_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_HvacDampr_DD.h"
#endif                                 /* HvacDampr_DD_COMMON_INCLUDES_ */

#include "HvacDampr_DD_types.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define HvacDampr_DD_VAR

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
 * '<Root>' : 'HvacDampr_DD'
 * '<S1>'   : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys'
 * '<S2>'   : 'HvacDampr_DD/HvacDampr_DD_Runnable_Init'
 * '<S3>'   : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/AirCircMotoAntiClockWiseRun'
 * '<S4>'   : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/AirCircMotoClockWiseRun'
 * '<S5>'   : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/AirCircMotoOFF'
 * '<S6>'   : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/LeAirCircMotoAntiClockWiseRun'
 * '<S7>'   : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/LeAirCircMotoClockWiseRun'
 * '<S8>'   : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/LeAirCircMotoOFF'
 * '<S9>'   : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/LeftTempMotoAntiClockWiseRun'
 * '<S10>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/LeftTempMotoClockWiseRun'
 * '<S11>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/LeftTempMotoOFF'
 * '<S12>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/ModeMotoAntiClockWiseRun'
 * '<S13>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/ModeMotoClockWiseRun'
 * '<S14>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/ModeMotoOFF'
 * '<S15>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/ReModeMotoAntiClockWiseRun'
 * '<S16>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/ReModeMotoClockWiseRun1'
 * '<S17>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/ReModeMotoOFF'
 * '<S18>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/ReTempMotoAntiClockWiseRun'
 * '<S19>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/ReTempMotoClockWiseRun'
 * '<S20>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/ReTempMotoOFF'
 * '<S21>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/RightTempMotoAntiClockWiseRun'
 * '<S22>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/RightTempMotoClockWiseRun'
 * '<S23>'  : 'HvacDampr_DD/HvacDampr_DD_Runnable_10ms_sys/RightTempMotoOFF'
 */
#endif                                 /* RTW_HEADER_HvacDampr_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
