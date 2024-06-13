/*
 * File: Door_DD.h
 *
 * Code generated for Simulink model 'Door_DD'.
 *
 * Model version                  : 1.32
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Sep 28 19:57:47 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Door_DD_h_
#define RTW_HEADER_Door_DD_h_
#ifndef Door_DD_COMMON_INCLUDES_
# define Door_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_Door_DD.h"
#include "efx.h"
#endif                                 /* Door_DD_COMMON_INCLUDES_ */

#include "Door_DD_types.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define Door_DD_VAR

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_ChrgCapAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_ChrgCapAjarSwDeb_I'
                                                                            * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                            */
extern VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_FLDoorAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_FLDoorAjarSwDeb_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                           */
extern VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_FRDoorAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_FRDoorAjarSwDeb_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                           */
extern VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_FuelFlapSwDeb_I;/* Simulink.Signal object 'DOOR_DD_FuelFlapSwDeb_I'
                                                                         * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                         */
extern VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_HoodAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_HoodAjarSwDeb_I'
                                                                         * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                         */
extern VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_RLDoorAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_RLDoorAjarSwDeb_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                           */
extern VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_RRDoorAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_RRDoorAjarSwDeb_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                           */
extern VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_TrunkAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_TrunkAjarSwDeb_I'
                                                                          * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                          */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S3>/SameDT' : Unused code path elimination
 * Block '<S4>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S4>/SameDT' : Unused code path elimination
 * Block '<S5>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S5>/SameDT' : Unused code path elimination
 * Block '<S6>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S6>/SameDT' : Unused code path elimination
 * Block '<S7>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S7>/SameDT' : Unused code path elimination
 * Block '<S8>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S8>/SameDT' : Unused code path elimination
 * Block '<S9>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S9>/SameDT' : Unused code path elimination
 * Block '<S10>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S10>/SameDT' : Unused code path elimination
 * Block '<S3>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S3>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S3>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S4>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S5>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S6>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S6>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S6>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S6>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S7>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S7>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S7>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S7>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S8>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S8>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S8>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S8>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S9>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S9>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S9>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S9>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S10>/DataTypeConversion' : Eliminate redundant data type conversion
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
 * '<Root>' : 'Door_DD'
 * '<S1>'   : 'Door_DD/Door_DD_Runnable_IN_10ms_sys'
 * '<S2>'   : 'Door_DD/Door_DD_Runnable_Init'
 * '<S3>'   : 'Door_DD/Door_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)'
 * '<S4>'   : 'Door_DD/Door_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)1'
 * '<S5>'   : 'Door_DD/Door_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)2'
 * '<S6>'   : 'Door_DD/Door_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)3'
 * '<S7>'   : 'Door_DD/Door_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)4'
 * '<S8>'   : 'Door_DD/Door_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)5'
 * '<S9>'   : 'Door_DD/Door_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)6'
 * '<S10>'  : 'Door_DD/Door_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)7'
 */
#endif                                 /* RTW_HEADER_Door_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
