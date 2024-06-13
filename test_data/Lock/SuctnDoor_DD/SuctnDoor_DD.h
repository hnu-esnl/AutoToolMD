/*
 * File: SuctnDoor_DD.h
 *
 * Code generated for Simulink model 'SuctnDoor_DD'.
 *
 * Model version                  : 1.183
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Sep 30 16:00:26 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SuctnDoor_DD_h_
#define RTW_HEADER_SuctnDoor_DD_h_
#ifndef SuctnDoor_DD_COMMON_INCLUDES_
# define SuctnDoor_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_SuctnDoor_DD.h"
#include "efx.h"
#include "bfx.h"
#endif                                 /* SuctnDoor_DD_COMMON_INCLUDES_ */

#include "SuctnDoor_DD_types.h"
#include "mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define SuctnDoor_DD_VAR
#define SuctnDoor_DD_CODE_LOCAL

/* Block states (default storage) for system '<S31>/Chart' */
typedef struct {
  uint8 is_active_c3_SuctnDoor_DD;     /* '<S31>/Chart' */
  uint8 is_c3_SuctnDoor_DD;            /* '<S31>/Chart' */
  uint8 temporalCounter_i1;            /* '<S31>/Chart' */
  uint8 u8CinchCmd_prev;               /* '<S31>/Chart' */
  uint8 u8CinchCmd_start;              /* '<S31>/Chart' */
} DW_Chart_SuctnDoor_DD_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_SuctnDoor_DD_T {
  sint16 UnitDelay2_DSTATE;            /* '<S1>/UnitDelay2' */
  uint8 UnitDelay3_DSTATE;             /* '<S1>/UnitDelay3' */
  uint8 UnitDelay4_DSTATE;             /* '<S1>/UnitDelay4' */
  boolean UnitDelay5_DSTATE;           /* '<S1>/UnitDelay5' */
  DW_Chart_SuctnDoor_DD_T sf_Chart_m;  /* '<S32>/Chart' */
  DW_Chart_SuctnDoor_DD_T sf_Chart;    /* '<S31>/Chart' */
} DW_SuctnDoor_DD_T;

/* Block states (default storage) */
extern VAR(DW_SuctnDoor_DD_T, SuctnDoor_DD_VAR) SuctnDoor_DD_DW;

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FLCinchResetSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FLCinchResetSwDeb_I'
                                                                                    * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                    */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FLElecDoorSwtDeb_I;/* Simulink.Signal object 'SuctnDoor_FLElecDoorSwtDeb_I'
                                                                                   * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                   */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FLInPowerReleaseSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FLInPowerReleaseSwDeb_I'
                                                                                        * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                        */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FLPAWLSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FLPAWLSwDeb_I'
                                                                              * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                              */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FLSecondLockFeedbackSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FLSecondLockFeedbackSwDeb_I'
                                                                                            * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                            */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FRCinchResetSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FRCinchResetSwDeb_I'
                                                                                    * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                    */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FRElecDoorCloseSwt_I;/* Simulink.Signal object 'SuctnDoor_FRElecDoorCloseSwt_I'
                                                                                     * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                     */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FRPAWLSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FRPAWLSwDeb_I'
                                                                              * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                              */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FRPowerOutReleaseSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FRPowerOutReleaseSwDeb_I'
                                                                                         * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                         */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FRSecondLockFeedbackSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FRSecondLockFeedbackSwDeb_I'
                                                                                            * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                            */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_RLCinchResetSwDeb_I;/* Simulink.Signal object 'SuctnDoor_RLCinchResetSwDeb_I'
                                                                                    * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                    */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_RLPowerInReleaseSwDeb_I;/* Simulink.Signal object 'SuctnDoor_RLPowerInReleaseSwDeb_I'
                                                                                        * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                        */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_RLSecondLockFeedbackSwDeb_I;/* Simulink.Signal object 'SuctnDoor_RLSecondLockFeedbackSwDeb_I'
                                                                                            * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                            */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_RRCinchResetSwDeb_I;/* Simulink.Signal object 'SuctnDoor_RRCinchResetSwDeb_I'
                                                                                    * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                    */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_RRPowerInReleaseSwDeb_I;/* Simulink.Signal object 'SuctnDoor_RRPowerInReleaseSwDeb_I'
                                                                                        * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                        */
extern VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_RRSecondLockFeedbackSwDeb_I;/* Simulink.Signal object 'SuctnDoor_RRSecondLockFeedbackSwDeb_I'
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
 * Block '<S13>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S13>/SameDT' : Unused code path elimination
 * Block '<S14>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S14>/SameDT' : Unused code path elimination
 * Block '<S15>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S15>/SameDT' : Unused code path elimination
 * Block '<S16>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S16>/SameDT' : Unused code path elimination
 * Block '<S17>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S17>/SameDT' : Unused code path elimination
 * Block '<S18>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S18>/SameDT' : Unused code path elimination
 * Block '<S19>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S19>/SameDT' : Unused code path elimination
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
 * Block '<S13>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S13>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S13>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S13>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S14>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S14>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S14>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S14>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S15>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S15>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S15>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S15>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S16>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S16>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S16>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S16>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S17>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S17>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S17>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S17>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S18>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S18>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S18>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S18>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S19>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S19>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S19>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S19>/DataTypeConversion' : Eliminate redundant data type conversion
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
 * '<Root>' : 'SuctnDoor_DD'
 * '<S1>'   : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys'
 * '<S2>'   : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_Init'
 * '<S3>'   : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys'
 * '<S4>'   : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)'
 * '<S5>'   : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)1'
 * '<S6>'   : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)10'
 * '<S7>'   : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)11'
 * '<S8>'   : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)12'
 * '<S9>'   : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)13'
 * '<S10>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)14'
 * '<S11>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)16'
 * '<S12>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)2'
 * '<S13>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)3'
 * '<S14>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)4'
 * '<S15>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)5'
 * '<S16>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)6'
 * '<S17>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)7'
 * '<S18>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)8'
 * '<S19>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)9'
 * '<S20>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/FLDoorElecCinchMotorOutput'
 * '<S21>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/FRDoorElecCinchMotorOutput'
 * '<S22>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag'
 * '<S23>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/FLDoorElecCinchMotorOutput/Cinch'
 * '<S24>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/FLDoorElecCinchMotorOutput/CinchRst'
 * '<S25>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/FLDoorElecCinchMotorOutput/Switch Case Action Subsystem2'
 * '<S26>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/FLDoorElecCinchMotorOutput/Switch Case Action Subsystem3'
 * '<S27>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/FRDoorElecCinchMotorOutput/Cinch'
 * '<S28>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/FRDoorElecCinchMotorOutput/CinchRst'
 * '<S29>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/FRDoorElecCinchMotorOutput/Switch Case Action Subsystem2'
 * '<S30>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/FRDoorElecCinchMotorOutput/Switch Case Action Subsystem3'
 * '<S31>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag'
 * '<S32>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FRCinchDiag'
 * '<S33>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag/Chart'
 * '<S34>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag/CinchDiag'
 * '<S35>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag/GetBit'
 * '<S36>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag/OFFDiag'
 * '<S37>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag/CinchDiag/GetBit'
 * '<S38>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag/CinchDiag/GetBit1'
 * '<S39>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag/CinchDiag/GetBit2'
 * '<S40>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag/CinchDiag/GetBit3'
 * '<S41>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag/OFFDiag/GetBit'
 * '<S42>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FRCinchDiag/Chart'
 * '<S43>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FRCinchDiag/CinchDiag1'
 * '<S44>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FRCinchDiag/GetBit'
 * '<S45>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FRCinchDiag/OFFDiag'
 * '<S46>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FRCinchDiag/CinchDiag1/GetBit'
 * '<S47>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FRCinchDiag/CinchDiag1/GetBit1'
 * '<S48>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FRCinchDiag/CinchDiag1/GetBit2'
 * '<S49>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FRCinchDiag/CinchDiag1/GetBit3'
 * '<S50>'  : 'SuctnDoor_DD/SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FRCinchDiag/OFFDiag/GetBit'
 */
#endif                                 /* RTW_HEADER_SuctnDoor_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
