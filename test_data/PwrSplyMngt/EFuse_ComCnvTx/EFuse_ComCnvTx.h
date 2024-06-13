/*
 * File: EFuse_ComCnvTx.h
 *
 * Code generated for Simulink model 'EFuse_ComCnvTx'.
 *
 * Model version                  : 1.50
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Sep 30 09:56:31 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EFuse_ComCnvTx_h_
#define RTW_HEADER_EFuse_ComCnvTx_h_
#ifndef EFuse_ComCnvTx_COMMON_INCLUDES_
#define EFuse_ComCnvTx_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_EFuse_ComCnvTx.h"
#endif                                 /* EFuse_ComCnvTx_COMMON_INCLUDES_ */

#include "EFuse_ComCnvTx_types.h"

/* Macros for accessing real-time model data structure */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S10>/DTProp1' : Unused code path elimination
 * Block '<S10>/DTProp2' : Unused code path elimination
 * Block '<S11>/DTProp1' : Unused code path elimination
 * Block '<S11>/DTProp2' : Unused code path elimination
 * Block '<S11>/Extract Desired Bits' : Unused code path elimination
 * Block '<S11>/Modify Scaling Only' : Unused code path elimination
 * Block '<S12>/DTProp1' : Unused code path elimination
 * Block '<S12>/DTProp2' : Unused code path elimination
 * Block '<S13>/DTProp1' : Unused code path elimination
 * Block '<S13>/DTProp2' : Unused code path elimination
 * Block '<S14>/DTProp1' : Unused code path elimination
 * Block '<S14>/DTProp2' : Unused code path elimination
 * Block '<S15>/DTProp1' : Unused code path elimination
 * Block '<S15>/DTProp2' : Unused code path elimination
 * Block '<S16>/DTProp1' : Unused code path elimination
 * Block '<S16>/DTProp2' : Unused code path elimination
 * Block '<S17>/DTProp1' : Unused code path elimination
 * Block '<S17>/DTProp2' : Unused code path elimination
 * Block '<S17>/Extract Desired Bits' : Unused code path elimination
 * Block '<S17>/Modify Scaling Only' : Unused code path elimination
 * Block '<S18>/DTProp1' : Unused code path elimination
 * Block '<S18>/DTProp2' : Unused code path elimination
 * Block '<S19>/DTProp1' : Unused code path elimination
 * Block '<S19>/DTProp2' : Unused code path elimination
 * Block '<S20>/DTProp1' : Unused code path elimination
 * Block '<S20>/DTProp2' : Unused code path elimination
 * Block '<S21>/DTProp1' : Unused code path elimination
 * Block '<S21>/DTProp2' : Unused code path elimination
 * Block '<S21>/Extract Desired Bits' : Unused code path elimination
 * Block '<S21>/Modify Scaling Only' : Unused code path elimination
 * Block '<S10>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S12>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S13>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S14>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S15>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S16>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S18>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S19>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S20>/Modify Scaling Only' : Eliminate redundant data type conversion
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
 * '<Root>' : 'EFuse_ComCnvTx'
 * '<S1>'   : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys'
 * '<S2>'   : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_Init'
 * '<S3>'   : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem'
 * '<S4>'   : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1'
 * '<S5>'   : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem2'
 * '<S6>'   : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem3'
 * '<S7>'   : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem'
 * '<S8>'   : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem1'
 * '<S9>'   : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem2'
 * '<S10>'  : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem/Extract Bits'
 * '<S11>'  : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem/Extract Bits1'
 * '<S12>'  : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem/Extract Bits2'
 * '<S13>'  : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem/Extract Bits3'
 * '<S14>'  : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem1/Extract Bits'
 * '<S15>'  : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem1/Extract Bits1'
 * '<S16>'  : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem1/Extract Bits2'
 * '<S17>'  : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem1/Extract Bits3'
 * '<S18>'  : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem2/Extract Bits'
 * '<S19>'  : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem2/Extract Bits1'
 * '<S20>'  : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem2/Extract Bits2'
 * '<S21>'  : 'EFuse_ComCnvTx/EFuse_ComCnvTx_Runnable_10ms_sys/Subsystem1/Subsystem2/Extract Bits3'
 */
#endif                                 /* RTW_HEADER_EFuse_ComCnvTx_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
