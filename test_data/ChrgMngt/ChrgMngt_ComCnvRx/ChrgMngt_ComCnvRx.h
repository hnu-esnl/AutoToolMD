/*
 * File: ChrgMngt_ComCnvRx.h
 *
 * Code generated for Simulink model 'ChrgMngt_ComCnvRx'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Sep 30 12:14:14 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ChrgMngt_ComCnvRx_h_
#define RTW_HEADER_ChrgMngt_ComCnvRx_h_
#ifndef ChrgMngt_ComCnvRx_COMMON_INCLUDES_
# define ChrgMngt_ComCnvRx_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ChrgMngt_ComCnvRx.h"
#include "efx.h"
#endif                                 /* ChrgMngt_ComCnvRx_COMMON_INCLUDES_ */

#include "ChrgMngt_ComCnvRx_types.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define ChrgMngt_ComCnvRx_VAR

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_ChrgMngt_ComCnvRx_T {
  uint8 UnitDelay_DSTATE;              /* '<S1>/UnitDelay' */
} DW_ChrgMngt_ComCnvRx_T;

/* Block states (default storage) */
extern VAR(DW_ChrgMngt_ComCnvRx_T, ChrgMngt_ComCnvRx_VAR) ChrgMngt_ComCnvRx_DW;

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern VAR(Efx_DebounceState_Type, ChrgMngt_ComCnvRx_VAR) ChrgMngt_ComCnvRx_PlgLockTON_I;/* Simulink.Signal object 'ChrgMngt_ComCnvRx_PlgLockTON_I'
                                                                                          * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                                          */
extern VAR(Efx_DebounceState_Type, ChrgMngt_ComCnvRx_VAR) ChrgMngt_ComCnvRx_PlgUnLockTON_I;/* Simulink.Signal object 'ChrgMngt_ComCnvRx_PlgUnLockTON_I'
                                                                                            * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                                            */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S3>/SameDT' : Unused code path elimination
 * Block '<S4>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S4>/SameDT' : Unused code path elimination
 * Block '<S1>/DataTypeConversion16' : Eliminate redundant data type conversion
 * Block '<S1>/DataTypeConversion18' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S3>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S4>/DataTypeConversion' : Eliminate redundant data type conversion
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
 * '<Root>' : 'ChrgMngt_ComCnvRx'
 * '<S1>'   : 'ChrgMngt_ComCnvRx/ChrgMngt_ComCnvRx_Runnable_10ms_sys'
 * '<S2>'   : 'ChrgMngt_ComCnvRx/ChrgMngt_ComCnvRx_Runnable_Init'
 * '<S3>'   : 'ChrgMngt_ComCnvRx/ChrgMngt_ComCnvRx_Runnable_10ms_sys/TurnOnDelay (Fixed-point only)'
 * '<S4>'   : 'ChrgMngt_ComCnvRx/ChrgMngt_ComCnvRx_Runnable_10ms_sys/TurnOnDelay (Fixed-point only)1'
 */
#endif                                 /* RTW_HEADER_ChrgMngt_ComCnvRx_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
