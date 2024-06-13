/*
 * File: ElecDoorHndl_DD.h
 *
 * Code generated for Simulink model 'ElecDoorHndl_DD'.
 *
 * Model version                  : 1.96
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Oct 24 19:14:34 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ElecDoorHndl_DD_h_
#define RTW_HEADER_ElecDoorHndl_DD_h_
#ifndef ElecDoorHndl_DD_COMMON_INCLUDES_
# define ElecDoorHndl_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ElecDoorHndl_DD.h"
#include "efx.h"
#include "bfx.h"
#endif                                 /* ElecDoorHndl_DD_COMMON_INCLUDES_ */

#include "ElecDoorHndl_DD_types.h"
#include "mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define ElecDoorHndl_DD_VAR
#define ElecDoorHndl_CODE_LOCAL

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_ElecDoorHndl_DD_T {
  uint8 is_active_c3_ElecDoorHndl_DD;  /* '<S14>/Chart' */
  uint8 is_c3_ElecDoorHndl_DD;         /* '<S14>/Chart' */
  uint8 temporalCounter_i1;            /* '<S14>/Chart' */
  uint8 u8CinchCmd_prev;               /* '<S14>/Chart' */
  uint8 u8CinchCmd_start;              /* '<S14>/Chart' */
} DW_ElecDoorHndl_DD_T;

/* Block states (default storage) */
extern VAR(DW_ElecDoorHndl_DD_T, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_DW;

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_FLDoorHSULockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_FLDoorHSULockSwDeb_I'
                                                                                              * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                              */
extern VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_FLDoorHSUUnlockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_FLDoorHSUUnlockSwDeb_I'
                                                                                                * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                                */
extern VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_FRDoorHSULockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_FRDoorHSULockSwDeb_I'
                                                                                              * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                              */
extern VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_FRDoorHSUSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_FRDoorHSUSwDeb_I'
                                                                                          * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                          */
extern VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_FRDoorHSUUnlockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_FRDoorHSUUnlockSwDeb_I'
                                                                                                * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                                */
extern VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_RLDoorHSULockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_RLDoorHSULockSwDeb_I'
                                                                                              * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                              */
extern VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_RLDoorHSUUnlockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_RLDoorHSUUnlockSwDeb_I'
                                                                                                * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                                */
extern VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_RRDoorHSULockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_RRDoorHSULockSwDeb_I'
                                                                                              * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                              */
extern VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_RRDoorHSUUnlockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_RRDoorHSUUnlockSwDeb_I'
                                                                                                * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                                */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
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
 * Block '<S11>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S11>/SameDT' : Unused code path elimination
 * Block '<S12>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S12>/SameDT' : Unused code path elimination
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
 * Block '<S11>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S11>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S11>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S11>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S12>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S12>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S12>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S12>/DataTypeConversion' : Eliminate redundant data type conversion
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
 * '<Root>' : 'ElecDoorHndl_DD'
 * '<S1>'   : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_IN_10ms_sys'
 * '<S2>'   : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_Init'
 * '<S3>'   : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys'
 * '<S4>'   : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)1'
 * '<S5>'   : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)2'
 * '<S6>'   : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)3'
 * '<S7>'   : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)4'
 * '<S8>'   : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)5'
 * '<S9>'   : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)6'
 * '<S10>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)7'
 * '<S11>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)8'
 * '<S12>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)9'
 * '<S13>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLDoorHandleMotorOutput'
 * '<S14>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag'
 * '<S15>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FRDoorHandleMotorOutput'
 * '<S16>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/RLDoorHandleMotorOutput'
 * '<S17>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/RRDoorHandleMotorOutput'
 * '<S18>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLDoorHandleMotorOutput/FLDoorElecRelPWMMotorRelOutput'
 * '<S19>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLDoorHandleMotorOutput/FLDoorHandleMotorCinchlOutput'
 * '<S20>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLDoorHandleMotorOutput/NoFLDoorHandleMotorOutput'
 * '<S21>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag/Chart'
 * '<S22>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag/GetBit'
 * '<S23>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag/SwitchCaseActionSubsystem'
 * '<S24>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag/SwitchCaseActionSubsystem1'
 * '<S25>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag/SwitchCaseActionSubsystem/GetBit'
 * '<S26>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag/SwitchCaseActionSubsystem/GetBit1'
 * '<S27>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag/SwitchCaseActionSubsystem/GetBit2'
 * '<S28>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag/SwitchCaseActionSubsystem/GetBit3'
 * '<S29>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag/SwitchCaseActionSubsystem1/GetBit'
 * '<S30>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FRDoorHandleMotorOutput/FRDoorHandleMotorCinchOutput'
 * '<S31>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FRDoorHandleMotorOutput/FRDoorHandleMotorRelOutput'
 * '<S32>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FRDoorHandleMotorOutput/NoFRDoorHandleMotorOutput'
 * '<S33>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/RLDoorHandleMotorOutput/NoRLDoorHandleMotorOutput'
 * '<S34>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/RLDoorHandleMotorOutput/RLDoorHandleMotorCinchOutput'
 * '<S35>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/RLDoorHandleMotorOutput/RLDoorHandleMotorRelOutput'
 * '<S36>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/RRDoorHandleMotorOutput/NoRRDoorHandleMotorOutput'
 * '<S37>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/RRDoorHandleMotorOutput/RRDoorHandleMotorCinchOutput'
 * '<S38>'  : 'ElecDoorHndl_DD/ElecDoorHndl_DD_Runnable_OUT_10ms_sys/RRDoorHandleMotorOutput/RRDoorHandleMotorRelOutput'
 */
#endif                                 /* RTW_HEADER_ElecDoorHndl_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
