/*
 * File: Lock_DD.h
 *
 * Code generated for Simulink model 'Lock_DD'.
 *
 * Model version                  : 1.315
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Oct 19 10:36:27 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Lock_DD_h_
#define RTW_HEADER_Lock_DD_h_
#ifndef Lock_DD_COMMON_INCLUDES_
# define Lock_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_Lock_DD.h"
#include "efx.h"
#include "Efx.h"
#endif                                 /* Lock_DD_COMMON_INCLUDES_ */

#include "Lock_DD_types.h"
#include "mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define Lock_DD_VAR
#define Lock_DD_CODE_LOCAL

/* Block signals (default storage) */
typedef struct tag_B_Lock_DD_T {
  uint8 TmpSignalConversionAtgLOC_u8Boo;
  uint8 TmpSignalConversionAtgLOC_u8Chr;
  uint8 TmpSignalConversionAtgLOC_u8Ele;
  uint8 TmpSignalConversionAtgLOC_u8Oil;
  uint8 TmpSignalConversionAtgLOC_u8RLD;
  uint8 TmpSignalConversionAtgLOC_u8RRD;
} B_Lock_DD_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_Lock_DD_T {
  Efx_MovingAvrgS16_Type MovingAverageS32_MvgAvgPlumbing;/* '<S21>/MovingAverageS32' */
  sint16 MovingAverageS32_Array[5];    /* '<S21>/MovingAverageS32' */
  uint8 UnitDelay_DSTATE;              /* '<S1>/UnitDelay' */
} DW_Lock_DD_T;

/* Block signals (default storage) */
extern VAR(B_Lock_DD_T, Lock_DD_VAR) Lock_DD_B;

/* Block states (default storage) */
extern VAR(DW_Lock_DD_T, Lock_DD_VAR) Lock_DD_DW;

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) LOCDev_ChrgCapSwtDeb_I;/* Simulink.Signal object 'LOCDev_ChrgCapSwtDeb_I'
                                                                        * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                        */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) LOCDev_RLChildLockFeedbackSwDeb_I;/* Simulink.Signal object 'LOCDev_RLChildLockFeedbackSwDeb_I'
                                                                                   * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                   */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) LOCDev_RLDoorLockFeedbackSwDeb_I;/* Simulink.Signal object 'LOCDev_RLDoorLockFeedbackSwDeb_I'
                                                                                  * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                  */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) LOCDev_RRChildLockFeedbackSwDeb_I;/* Simulink.Signal object 'LOCDev_RRChildLockFeedbackSwDeb_I'
                                                                                   * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                   */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) LOCDev_RRDoorLockFeedbackSwDeb_I;/* Simulink.Signal object 'LOCDev_RRDoorLockFeedbackSwDeb_I'
                                                                                  * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                  */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_DrvChrgCapUnlockSwDeb_I;/* Simulink.Signal object 'Lock_DD_DrvChrgCapUnlockSwDeb_I'
                                                                                 * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                 */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_ExtTrunkUnlockSwDeb_I;/* Simulink.Signal object 'Lock_DD_ExtTrunkUnlockSwDeb_I'
                                                                               * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                               */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_FLDoorLockFeedbackSwDeb_I;/* Simulink.Signal object 'Lock_DD_FLDoorLockFeedbackSwDeb_I'
                                                                                   * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                   */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_FRDoorLockFeedbackSwDeb_I;/* Simulink.Signal object 'Lock_DD_FRDoorLockFeedbackSwDeb_I'
                                                                                   * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                   */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_HoodUnlockSwDeb_I;/* Simulink.Signal object 'Lock_DD_HoodUnlockSwDeb_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                           */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_IntTrunkUnlockSwDeb_I;/* Simulink.Signal object 'Lock_DD_IntTrunkUnlockSwDeb_I'
                                                                               * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                               */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_MasterDrvLockSwDeb_I;/* Simulink.Signal object 'Lock_DD_MasterDrvLockSwDeb_I'
                                                                              * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                              */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_MasterLockSwDeb_I;/* Simulink.Signal object 'Lock_DD_MasterLockSwDeb_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                           */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_MasterPsgLockSwDeb_I;/* Simulink.Signal object 'Lock_DD_MasterPsgLockSwDeb_I'
                                                                              * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                              */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_MasterUnlockSwDeb_I;/* Simulink.Signal object 'Lock_DD_MasterUnlockSwDeb_I'
                                                                             * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                             */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_MechKeyLockSwDeb_I;/* Simulink.Signal object 'Lock_DD_MechKeyLockSwDeb_I'
                                                                            * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                            */
extern VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_MechKeyUnlockSwDeb_I;/* Simulink.Signal object 'Lock_DD_MechKeyUnlockSwDeb_I'
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
 * Block '<S20>/DataTypeDuplicate' : Unused code path elimination
 * Block '<S20>/SameDT' : Unused code path elimination
 * Block '<S21>/Data Type Duplicate' : Unused code path elimination
 * Block '<S22>/FixPt Data Type Propagation' : Unused code path elimination
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
 * Block '<S20>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S20>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S20>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S20>/DataTypeConversion' : Eliminate redundant data type conversion
 * Block '<S22>/FixPt Gateway Out' : Eliminate redundant data type conversion
 * Block '<S21>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S21>/Signal Conversion' : Eliminate redundant signal conversion block
 * Block '<S23>/Signal Conversion' : Eliminate redundant signal conversion block
 * Block '<S24>/Signal Conversion' : Eliminate redundant signal conversion block
 * Block '<S26>/Signal Conversion' : Eliminate redundant signal conversion block
 * Block '<S29>/Signal Conversion' : Eliminate redundant signal conversion block
 * Block '<S30>/Signal Conversion' : Eliminate redundant signal conversion block
 * Block '<S35>/Signal Conversion' : Eliminate redundant signal conversion block
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
 * '<Root>' : 'Lock_DD'
 * '<S1>'   : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys'
 * '<S2>'   : 'Lock_DD/Lock_DD_Runnable_Init'
 * '<S3>'   : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys'
 * '<S4>'   : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)1'
 * '<S5>'   : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)10'
 * '<S6>'   : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)11'
 * '<S7>'   : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)12'
 * '<S8>'   : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)13'
 * '<S9>'   : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)14'
 * '<S10>'  : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)15'
 * '<S11>'  : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)16'
 * '<S12>'  : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)17'
 * '<S13>'  : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)2'
 * '<S14>'  : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)3'
 * '<S15>'  : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)4'
 * '<S16>'  : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)5'
 * '<S17>'  : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)6'
 * '<S18>'  : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)7'
 * '<S19>'  : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)8'
 * '<S20>'  : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/Debounce (Fixed-point only)9'
 * '<S21>'  : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/MovingAverage (Fixed-point only)3'
 * '<S22>'  : 'Lock_DD/Lock_DD_Runnable_IN_10ms_sys/MovingAverage (Fixed-point only)3/Data Type Scaling Strip'
 * '<S23>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/BootLockMotorOutput'
 * '<S24>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/ChrgCapLockMotorOutput'
 * '<S25>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput'
 * '<S26>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/ElectcGlvBoxLockMotorOutput'
 * '<S27>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput'
 * '<S28>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/Lock_DD_Runnable_HoodLock'
 * '<S29>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/OilTankLockMotorOutput'
 * '<S30>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLDoorLockOutput'
 * '<S31>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput'
 * '<S32>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RRChildLockMotorOutput'
 * '<S33>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RRDoorElecRelMotorOutput'
 * '<S34>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RRDoorLockMotorOutput'
 * '<S35>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RRDoorLockOutput'
 * '<S36>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/BootLockMotorOutput/BootLockOutput'
 * '<S37>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/BootLockMotorOutput/BootUnLockOutput'
 * '<S38>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/BootLockMotorOutput/NoBootLockOutput'
 * '<S39>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/ChrgCapLockMotorOutput/ChrgCapLockMotorOutput'
 * '<S40>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/ChrgCapLockMotorOutput/ChrgCapUnLockMotorOutput'
 * '<S41>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/ChrgCapLockMotorOutput/NoChrgCapLockMotorOutput'
 * '<S42>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/Cinch'
 * '<S43>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/Cinch1'
 * '<S44>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/Cinch2'
 * '<S45>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/Cinch3'
 * '<S46>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/M1Active'
 * '<S47>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/M2Active'
 * '<S48>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/M1Active/NoRLDoorLockOutput'
 * '<S49>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/M1Active/RLDoorLockOutput'
 * '<S50>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/M1Active/RLDoorUnLockOutput'
 * '<S51>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/M2Active/ANCLOCKWISE'
 * '<S52>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/M2Active/BREAK_HIGH'
 * '<S53>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/M2Active/BREAK_LOW'
 * '<S54>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/M2Active/CLOCKWISE'
 * '<S55>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/DrvDoorElecRelMotorOutput/M2Active/Default'
 * '<S56>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/ElectcGlvBoxLockMotorOutput/ElectcGlvBoxLockMotorOutput'
 * '<S57>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/ElectcGlvBoxLockMotorOutput/ElectcGlvBoxUnLockMotorOutput'
 * '<S58>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/ElectcGlvBoxLockMotorOutput/NoElectcGlvBoxLockMotorOutput'
 * '<S59>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/M1Active'
 * '<S60>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/M2Active'
 * '<S61>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/PwrRels'
 * '<S62>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/PwrRels2'
 * '<S63>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/PwrRels3'
 * '<S64>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/PwrRels4'
 * '<S65>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/M1Active/FRDoorLockOutput'
 * '<S66>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/M1Active/FRDoorUnLockOutput'
 * '<S67>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/M1Active/NoFRDoorLockOutput'
 * '<S68>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/M2Active/ANCLOCKWISE'
 * '<S69>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/M2Active/BREAK_HIGH'
 * '<S70>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/M2Active/BREAK_LOW'
 * '<S71>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/M2Active/CLOCKWISE'
 * '<S72>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/FRElecRelMotorOutput/M2Active/Default'
 * '<S73>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/Lock_DD_Runnable_HoodLock/FLTurnLampOffDiagErr_DebounceReset'
 * '<S74>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/Lock_DD_Runnable_HoodLock/FLTurnLampOffDiagErr_Set'
 * '<S75>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/Lock_DD_Runnable_HoodLock/FLTurnLampOnDiagErr_DebounceReset'
 * '<S76>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/Lock_DD_Runnable_HoodLock/FLTurnLampOnDiagErr_Set'
 * '<S77>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/OilTankLockMotorOutput/NoOilTankLockOutput'
 * '<S78>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/OilTankLockMotorOutput/OilTankLockOutput'
 * '<S79>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/OilTankLockMotorOutput/OilTankUnlockOutput'
 * '<S80>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLDoorLockOutput/Lock'
 * '<S81>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLDoorLockOutput/Stop'
 * '<S82>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLDoorLockOutput/UnLock'
 * '<S83>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem'
 * '<S84>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem1'
 * '<S85>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem2'
 * '<S86>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem3'
 * '<S87>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem/M1Active'
 * '<S88>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem/M1Active/Off'
 * '<S89>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem/M1Active/PwrRels'
 * '<S90>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem/M1Active/PwrRelsBrkOff'
 * '<S91>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem/M1Active/PwrRelsRst'
 * '<S92>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem1/Lock'
 * '<S93>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem1/OFF'
 * '<S94>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem1/UnLock'
 * '<S95>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem2/Lock'
 * '<S96>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem2/OFF'
 * '<S97>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RLLockMotorCoornOutput/If Action Subsystem2/UnLock'
 * '<S98>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RRChildLockMotorOutput/NoRRChildLockOutput'
 * '<S99>'  : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RRChildLockMotorOutput/RRChildLockOutput'
 * '<S100>' : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RRChildLockMotorOutput/RRChildUnlockOutput'
 * '<S101>' : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RRDoorLockMotorOutput/NoRRDoorLockOutput'
 * '<S102>' : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RRDoorLockMotorOutput/RRDoorLockOutput'
 * '<S103>' : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RRDoorLockMotorOutput/RRDoorUnlockOutput'
 * '<S104>' : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RRDoorLockOutput/Lock'
 * '<S105>' : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RRDoorLockOutput/Stop'
 * '<S106>' : 'Lock_DD/Lock_DD_Runnable_OUT_10ms_sys/RRDoorLockOutput/UnLock'
 */
#endif                                 /* RTW_HEADER_Lock_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
