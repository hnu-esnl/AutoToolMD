/*
 * File: EFuse_DD.h
 *
 * Code generated for Simulink model 'EFuse_DD'.
 *
 * Model version                  : 1.30
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed Sep 28 11:53:03 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EFuse_DD_h_
#define RTW_HEADER_EFuse_DD_h_
#ifndef EFuse_DD_COMMON_INCLUDES_
#define EFuse_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_EFuse_DD.h"
#endif                                 /* EFuse_DD_COMMON_INCLUDES_ */

#include "EFuse_DD_types.h"

/* Macros for accessing real-time model data structure */

#define EFuse_DD_VAR

/* Static Memory for Internal Data */
extern VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse09;

/* '<S11>/Multiport Switch' */
extern VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse08;

/* '<S10>/Multiport Switch' */
extern VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse07;

/* '<S9>/Multiport Switch' */
extern VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse06;

/* '<S8>/Multiport Switch' */
extern VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse05;

/* '<S7>/Multiport Switch' */
extern VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse04;

/* '<S6>/Multiport Switch' */
extern VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse03;

/* '<S5>/Multiport Switch' */
extern VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse02;

/* '<S4>/Multiport Switch' */
extern VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse01;

/* '<S3>/Multiport Switch' */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S14>/DTProp1' : Unused code path elimination
 * Block '<S14>/DTProp2' : Unused code path elimination
 * Block '<S15>/DTProp1' : Unused code path elimination
 * Block '<S15>/DTProp2' : Unused code path elimination
 * Block '<S16>/DTProp1' : Unused code path elimination
 * Block '<S16>/DTProp2' : Unused code path elimination
 * Block '<S17>/DTProp1' : Unused code path elimination
 * Block '<S17>/DTProp2' : Unused code path elimination
 * Block '<S18>/DTProp1' : Unused code path elimination
 * Block '<S18>/DTProp2' : Unused code path elimination
 * Block '<S19>/DTProp1' : Unused code path elimination
 * Block '<S19>/DTProp2' : Unused code path elimination
 * Block '<S20>/DTProp1' : Unused code path elimination
 * Block '<S20>/DTProp2' : Unused code path elimination
 * Block '<S21>/DTProp1' : Unused code path elimination
 * Block '<S21>/DTProp2' : Unused code path elimination
 * Block '<S22>/DTProp1' : Unused code path elimination
 * Block '<S22>/DTProp2' : Unused code path elimination
 * Block '<S14>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S15>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S16>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S17>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S18>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S19>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S20>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S21>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S22>/Modify Scaling Only' : Eliminate redundant data type conversion
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
 * '<Root>' : 'EFuse_DD'
 * '<S1>'   : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys'
 * '<S2>'   : 'EFuse_DD/EFuse_DD_Runnable_Init'
 * '<S3>'   : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Fuse01Drive'
 * '<S4>'   : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Fuse02Drive'
 * '<S5>'   : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Fuse03Drive'
 * '<S6>'   : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Fuse04Drive'
 * '<S7>'   : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Fuse05Drive'
 * '<S8>'   : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Fuse06Drive'
 * '<S9>'   : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Fuse07Drive'
 * '<S10>'  : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Fuse08Drive'
 * '<S11>'  : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Fuse09Drive'
 * '<S12>'  : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Subsystem'
 * '<S13>'  : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Subsystem2'
 * '<S14>'  : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Subsystem/Extract Bits'
 * '<S15>'  : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Subsystem/Extract Bits1'
 * '<S16>'  : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Subsystem/Extract Bits2'
 * '<S17>'  : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Subsystem/Extract Bits3'
 * '<S18>'  : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Subsystem/Extract Bits4'
 * '<S19>'  : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Subsystem/Extract Bits5'
 * '<S20>'  : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Subsystem/Extract Bits6'
 * '<S21>'  : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Subsystem/Extract Bits7'
 * '<S22>'  : 'EFuse_DD/EFuse_DD_Runnable_10ms_sys/Subsystem/Extract Bits8'
 */
#endif                                 /* RTW_HEADER_EFuse_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
