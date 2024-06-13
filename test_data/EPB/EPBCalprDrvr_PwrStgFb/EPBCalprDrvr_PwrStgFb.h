/*
 * File: EPBCalprDrvr_PwrStgFb.h
 *
 * Code generated for Simulink model 'EPBCalprDrvr_PwrStgFb'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Thu Jul 28 12:38:17 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EPBCalprDrvr_PwrStgFb_h_
#define RTW_HEADER_EPBCalprDrvr_PwrStgFb_h_
#ifndef EPBCalprDrvr_PwrStgFb_COMMON_INCLUDES_
#define EPBCalprDrvr_PwrStgFb_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_EPBCalprDrvr_PwrStgFb.h"
#endif                              /* EPBCalprDrvr_PwrStgFb_COMMON_INCLUDES_ */

#include "EPBCalprDrvr_PwrStgFb_types.h"

/* Child system includes */
#include "Rte_Type.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define EPBCalprDrvr_PwrStgFb_VAR

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_EPBCalprDrvr_PwrStgFb_T {
  uint8 EPB_stMotorDrvrOld_DSTATE;     /* '<S14>/EPB_stMotorDrvrOld' */
} DW_EPBCalprDrvr_PwrStgFb_T;

/* Block states (default storage) */
extern VAR(DW_EPBCalprDrvr_PwrStgFb_T, EPBCalprDrvr_PwrStgFb_VAR)
  EPBCalprDrvr_PwrStgFb_DW;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern VAR(uint8, EPBCalprDrvr_PwrStgFb_VAR) EPBCalprDrvr_stFreerunJudg;/* '<S15>/Add' */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/PA_EPBCalprDrvr_stPwrStgIndexStrt_C' : Unused code path elimination
 * Block '<S1>/PA_EPBCalprDrvr_uAplySh2VoltMax_C' : Unused code path elimination
 * Block '<S1>/PA_EPBCalprDrvr_uAplySh2VoltMin_C' : Unused code path elimination
 * Block '<S1>/PA_EPBCalprDrvr_uHBrigVoltOffSet_C' : Unused code path elimination
 * Block '<S1>/PA_EPBCalprDrvr_uPwrSuplyMax_C' : Unused code path elimination
 * Block '<S1>/PA_EPBCalprDrvr_uPwrSuplyMin_C' : Unused code path elimination
 * Block '<S1>/PA_EPBCalprDrvr_uRelsSh1VoltMax_C' : Unused code path elimination
 * Block '<S1>/PA_EPBCalprDrvr_uRelsSh1VoltMin_C' : Unused code path elimination
 * Block '<S1>/PA_EPBCalprDrvr_uStopSh1VoltMax_C' : Unused code path elimination
 * Block '<S1>/PA_EPBCalprDrvr_uStopSh1VoltMin_C' : Unused code path elimination
 * Block '<S1>/PA_EPBCalprDrvr_uStopSh2VoltMax_C' : Unused code path elimination
 * Block '<S1>/PA_EPBCalprDrvr_uStopSh2VoltMin_C' : Unused code path elimination
 * Block '<S14>/Constant5' : Unused code path elimination
 * Block '<S14>/Relational Operator8' : Unused code path elimination
 * Block '<S17>/FixPt Data Type Duplicate' : Unused code path elimination
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
 * '<Root>' : 'EPBCalprDrvr_PwrStgFb'
 * '<S1>'   : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Init'
 * '<S2>'   : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys'
 * '<S3>'   : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/ErrSummry'
 * '<S4>'   : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/HwDrvrStsFeedback'
 * '<S5>'   : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/ErrSummry/AffectHostAvl'
 * '<S6>'   : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/ErrSummry/OpenSafemode'
 * '<S7>'   : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/ErrSummry/AffectHostAvl/Compare To Constant1'
 * '<S8>'   : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/ErrSummry/AffectHostAvl/Compare To Constant2'
 * '<S9>'   : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/ErrSummry/AffectHostAvl/Compare To Constant3'
 * '<S10>'  : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/ErrSummry/AffectHostAvl/Compare To Constant4'
 * '<S11>'  : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/ErrSummry/AffectHostAvl/Compare To Constant5'
 * '<S12>'  : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/ErrSummry/AffectHostAvl/Compare To Constant6'
 * '<S13>'  : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/ErrSummry/OpenSafemode/Compare To Constant1'
 * '<S14>'  : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/HwDrvrStsFeedback/DrvrState'
 * '<S15>'  : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/HwDrvrStsFeedback/For Iterator Subsystem1'
 * '<S16>'  : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/HwDrvrStsFeedback/Subsystem3'
 * '<S17>'  : 'EPBCalprDrvr_PwrStgFb/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys/HwDrvrStsFeedback/Subsystem3/Interval Test Dynamic'
 */
#endif                                 /* RTW_HEADER_EPBCalprDrvr_PwrStgFb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
