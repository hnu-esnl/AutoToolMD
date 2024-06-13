/*
 * File: BattU_DD.h
 *
 * Code generated for Simulink model 'BattU_DD'.
 *
 * Model version                  : 1.22
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Oct  9 10:13:18 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BattU_DD_h_
#define RTW_HEADER_BattU_DD_h_
#ifndef BattU_DD_COMMON_INCLUDES_
# define BattU_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_BattU_DD.h"
#include "efx.h"
#endif                                 /* BattU_DD_COMMON_INCLUDES_ */

#include "BattU_DD_types.h"
#include "Mfl.h"
#include "Mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define BattU_DD_VAR
#define BattU_DD_CODE_LOCAL

/* Block signals (default storage) */
typedef struct tag_B_BattU_DD_T {
  boolean Out_bDiagEna;                /* '<S1>/Battu_DiagEna' */
} B_BattU_DD_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_BattU_DD_T {
  uint16 UnitDelay_DSTATE;             /* '<S6>/UnitDelay' */
  uint16 UnitDelay_DSTATE_h;           /* '<S7>/UnitDelay' */
  sint16 uRawBuf1[5];                  /* '<S6>/Data Store Memory' */
  sint16 uRawBuf2[5];                  /* '<S7>/Data Store Memory' */
  uint16 s_Cntr;                       /* '<S1>/Battu_DiagEna' */
  uint8 UnitDelay1_DSTATE;             /* '<S6>/UnitDelay1' */
  uint8 UnitDelay1_DSTATE_e;           /* '<S7>/UnitDelay1' */
  uint8 UnitDelay2_DSTATE;             /* '<S6>/UnitDelay2' */
  uint8 UnitDelay2_DSTATE_m;           /* '<S7>/UnitDelay2' */
  uint8 is_active_c1_BattU_DD;         /* '<S1>/Battu_DiagEna' */
  uint8 is_c1_BattU_DD;                /* '<S1>/Battu_DiagEna' */
} DW_BattU_DD_T;

/* Block signals (default storage) */
extern VAR(B_BattU_DD_T, BattU_DD_VAR) BattU_DD_B;

/* Block states (default storage) */
extern VAR(DW_BattU_DD_T, BattU_DD_VAR) BattU_DD_DW;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S10>/Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/Data Type Propagation' : Unused code path elimination
 * Block '<S11>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S10>/Data Type Conversion1' : Unused code path elimination
 * Block '<S10>/Signal Conversion1' : Unused code path elimination
 * Block '<S14>/Data Type Duplicate' : Unused code path elimination
 * Block '<S14>/Data Type Propagation' : Unused code path elimination
 * Block '<S15>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S14>/Data Type Conversion1' : Unused code path elimination
 * Block '<S14>/Signal Conversion1' : Unused code path elimination
 * Block '<S11>/FixPt Gateway Out' : Eliminate redundant data type conversion
 * Block '<S10>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S10>/Signal Conversion' : Eliminate redundant signal conversion block
 * Block '<S15>/FixPt Gateway Out' : Eliminate redundant data type conversion
 * Block '<S14>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S14>/Signal Conversion' : Eliminate redundant signal conversion block
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
 * '<Root>' : 'BattU_DD'
 * '<S1>'   : 'BattU_DD/BattU_DD_Runnable_10ms_sys'
 * '<S2>'   : 'BattU_DD/BattU_DD_Runnable_Init'
 * '<S3>'   : 'BattU_DD/BattU_DD_Runnable_10ms_sys/Battu_DiagEna'
 * '<S4>'   : 'BattU_DD/BattU_DD_Runnable_10ms_sys/Error_DebounceReset'
 * '<S5>'   : 'BattU_DD/BattU_DD_Runnable_10ms_sys/Error_Set'
 * '<S6>'   : 'BattU_DD/BattU_DD_Runnable_10ms_sys/uBatt_Average_Filter'
 * '<S7>'   : 'BattU_DD/BattU_DD_Runnable_10ms_sys/uDC_Average_Filter'
 * '<S8>'   : 'BattU_DD/BattU_DD_Runnable_10ms_sys/uBatt_Average_Filter/Switch Case Action Subsystem'
 * '<S9>'   : 'BattU_DD/BattU_DD_Runnable_10ms_sys/uBatt_Average_Filter/Switch Case Action Subsystem1'
 * '<S10>'  : 'BattU_DD/BattU_DD_Runnable_10ms_sys/uBatt_Average_Filter/Switch Case Action Subsystem/MedianSort (Fixed-point only)'
 * '<S11>'  : 'BattU_DD/BattU_DD_Runnable_10ms_sys/uBatt_Average_Filter/Switch Case Action Subsystem/MedianSort (Fixed-point only)/Data Type Scaling Strip'
 * '<S12>'  : 'BattU_DD/BattU_DD_Runnable_10ms_sys/uDC_Average_Filter/Switch Case Action Subsystem'
 * '<S13>'  : 'BattU_DD/BattU_DD_Runnable_10ms_sys/uDC_Average_Filter/Switch Case Action Subsystem1'
 * '<S14>'  : 'BattU_DD/BattU_DD_Runnable_10ms_sys/uDC_Average_Filter/Switch Case Action Subsystem/MedianSort (Fixed-point only)'
 * '<S15>'  : 'BattU_DD/BattU_DD_Runnable_10ms_sys/uDC_Average_Filter/Switch Case Action Subsystem/MedianSort (Fixed-point only)/Data Type Scaling Strip'
 */
#endif                                 /* RTW_HEADER_BattU_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
