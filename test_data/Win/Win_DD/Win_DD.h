/*
 * File: Win_DD.h
 *
 * Code generated for Simulink model 'Win_DD'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Oct  9 10:06:34 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Win_DD_h_
#define RTW_HEADER_Win_DD_h_
#ifndef Win_DD_COMMON_INCLUDES_
# define Win_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_WND_DD.h"
#endif                                 /* Win_DD_COMMON_INCLUDES_ */

/* Includes for objects with custom storage classes. */
#include "Win_Mapping.h"

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<S8>/MultSwFilter' */
typedef struct {
  uint32 temporalCounter_i1;           /* '<S8>/MultSwFilter' */
  uint8 is_active_c8_ESF_lib;          /* '<S8>/MultSwFilter' */
  uint8 is_c8_ESF_lib;                 /* '<S8>/MultSwFilter' */
  uint8 In_u8SignalSw_prev;            /* '<S8>/MultSwFilter' */
  uint8 In_u8SignalSw_start;           /* '<S8>/MultSwFilter' */
} DW_MultSwFilter_Win_DD_T;

/* Block signals (default storage) */
typedef struct tag_B_Win_DD_T {
  uint8 Out_u8SignalSw;                /* '<S14>/MultSwFilter' */
  uint8 Out_u8SignalSw_b;              /* '<S12>/MultSwFilter' */
  uint8 Out_u8SignalSw_o;              /* '<S10>/MultSwFilter' */
  uint8 Out_u8SignalSw_h;              /* '<S8>/MultSwFilter' */
} B_Win_DD_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_Win_DD_T {
  uint8 UnitDelay3_DSTATE;             /* '<S4>/UnitDelay3' */
  uint8 UnitDelay3_DSTATE_g;           /* '<S5>/UnitDelay3' */
  uint8 UnitDelay3_DSTATE_b;           /* '<S6>/UnitDelay3' */
  uint8 UnitDelay3_DSTATE_n;           /* '<S7>/UnitDelay3' */
  DW_MultSwFilter_Win_DD_T sf_MultSwFilter_j;/* '<S14>/MultSwFilter' */
  DW_MultSwFilter_Win_DD_T sf_MultSwFilter_c;/* '<S12>/MultSwFilter' */
  DW_MultSwFilter_Win_DD_T sf_MultSwFilter_g;/* '<S10>/MultSwFilter' */
  DW_MultSwFilter_Win_DD_T sf_MultSwFilter;/* '<S8>/MultSwFilter' */
} DW_Win_DD_T;

/* Invariant block signals (default storage) */
typedef struct {
  const float64 Divide1;               /* '<S8>/Divide1' */
  const float64 Divide1_i;             /* '<S10>/Divide1' */
  const float64 Divide1_e;             /* '<S12>/Divide1' */
  const float64 Divide1_b;             /* '<S14>/Divide1' */
  const uint16 Product1;               /* '<S5>/Product1' */
  const uint16 Product2;               /* '<S5>/Product2' */
  const uint16 Product3;               /* '<S5>/Product3' */
  const uint16 Product4;               /* '<S5>/Product4' */
  const uint16 Product5;               /* '<S5>/Product5' */
  const uint16 Product6;               /* '<S5>/Product6' */
  const uint16 Product7;               /* '<S5>/Product7' */
  const uint16 Product8;               /* '<S5>/Product8' */
  const uint16 Product;                /* '<S5>/Product' */
  const uint16 Product1_p;             /* '<S6>/Product1' */
  const uint16 Product2_a;             /* '<S6>/Product2' */
  const uint16 Product3_o;             /* '<S6>/Product3' */
  const uint16 Product4_a;             /* '<S6>/Product4' */
  const uint16 Product5_p;             /* '<S6>/Product5' */
  const uint16 Product6_g;             /* '<S6>/Product6' */
  const uint16 Product7_j;             /* '<S6>/Product7' */
  const uint16 Product8_n;             /* '<S6>/Product8' */
  const uint16 Product_l;              /* '<S6>/Product' */
  const uint16 Product1_pa;            /* '<S7>/Product1' */
  const uint16 Product2_m;             /* '<S7>/Product2' */
  const uint16 Product3_l;             /* '<S7>/Product3' */
  const uint16 Product4_d;             /* '<S7>/Product4' */
  const uint16 Product5_i;             /* '<S7>/Product5' */
  const uint16 Product6_j;             /* '<S7>/Product6' */
  const uint16 Product7_c;             /* '<S7>/Product7' */
  const uint16 Product8_l;             /* '<S7>/Product8' */
  const uint16 Product_i;              /* '<S7>/Product' */
} ConstB_Win_DD_T;

/* Block signals (default storage) */
extern B_Win_DD_T Win_DD_B;

/* Block states (default storage) */
extern DW_Win_DD_T Win_DD_DW;
extern const ConstB_Win_DD_T Win_DD_ConstB;/* constant block i/o */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Constant14' : Unused code path elimination
 * Block '<S4>/Constant12' : Unused code path elimination
 * Block '<S4>/Constant13' : Unused code path elimination
 * Block '<S4>/LogicalOperator2' : Unused code path elimination
 * Block '<S4>/RelationalOperator3' : Unused code path elimination
 * Block '<S4>/RelationalOperator4' : Unused code path elimination
 * Block '<S5>/Constant12' : Unused code path elimination
 * Block '<S5>/Constant13' : Unused code path elimination
 * Block '<S5>/LogicalOperator2' : Unused code path elimination
 * Block '<S5>/RelationalOperator3' : Unused code path elimination
 * Block '<S5>/RelationalOperator4' : Unused code path elimination
 * Block '<S6>/Constant12' : Unused code path elimination
 * Block '<S6>/Constant13' : Unused code path elimination
 * Block '<S6>/LogicalOperator2' : Unused code path elimination
 * Block '<S6>/RelationalOperator3' : Unused code path elimination
 * Block '<S6>/RelationalOperator4' : Unused code path elimination
 * Block '<S7>/Constant12' : Unused code path elimination
 * Block '<S7>/Constant13' : Unused code path elimination
 * Block '<S7>/LogicalOperator2' : Unused code path elimination
 * Block '<S7>/RelationalOperator3' : Unused code path elimination
 * Block '<S7>/RelationalOperator4' : Unused code path elimination
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
 * '<Root>' : 'Win_DD'
 * '<S1>'   : 'Win_DD/WND_DD_Runnable_IN_10ms_sys'
 * '<S2>'   : 'Win_DD/WND_DD_Runnable_Init'
 * '<S3>'   : 'Win_DD/WND_DD_Runnable_OUT_10ms_sys'
 * '<S4>'   : 'Win_DD/WND_DD_Runnable_IN_10ms_sys/RLBossWindowSwArb'
 * '<S5>'   : 'Win_DD/WND_DD_Runnable_IN_10ms_sys/RLLocalWindowSwArb'
 * '<S6>'   : 'Win_DD/WND_DD_Runnable_IN_10ms_sys/RRBossWindowSwArb'
 * '<S7>'   : 'Win_DD/WND_DD_Runnable_IN_10ms_sys/RRLocalWindowSwArb'
 * '<S8>'   : 'Win_DD/WND_DD_Runnable_IN_10ms_sys/RLBossWindowSwArb/MultSwFilter'
 * '<S9>'   : 'Win_DD/WND_DD_Runnable_IN_10ms_sys/RLBossWindowSwArb/MultSwFilter/MultSwFilter'
 * '<S10>'  : 'Win_DD/WND_DD_Runnable_IN_10ms_sys/RLLocalWindowSwArb/MultSwFilter'
 * '<S11>'  : 'Win_DD/WND_DD_Runnable_IN_10ms_sys/RLLocalWindowSwArb/MultSwFilter/MultSwFilter'
 * '<S12>'  : 'Win_DD/WND_DD_Runnable_IN_10ms_sys/RRBossWindowSwArb/MultSwFilter'
 * '<S13>'  : 'Win_DD/WND_DD_Runnable_IN_10ms_sys/RRBossWindowSwArb/MultSwFilter/MultSwFilter'
 * '<S14>'  : 'Win_DD/WND_DD_Runnable_IN_10ms_sys/RRLocalWindowSwArb/MultSwFilter'
 * '<S15>'  : 'Win_DD/WND_DD_Runnable_IN_10ms_sys/RRLocalWindowSwArb/MultSwFilter/MultSwFilter'
 * '<S16>'  : 'Win_DD/WND_DD_Runnable_OUT_10ms_sys/OHB05_Ctl'
 * '<S17>'  : 'Win_DD/WND_DD_Runnable_OUT_10ms_sys/OHB07_Ctl'
 * '<S18>'  : 'Win_DD/WND_DD_Runnable_OUT_10ms_sys/OHB05_Ctl/NoRLWinOutput'
 * '<S19>'  : 'Win_DD/WND_DD_Runnable_OUT_10ms_sys/OHB05_Ctl/RLWinDownOutput'
 * '<S20>'  : 'Win_DD/WND_DD_Runnable_OUT_10ms_sys/OHB05_Ctl/RLWinUpOutput'
 * '<S21>'  : 'Win_DD/WND_DD_Runnable_OUT_10ms_sys/OHB07_Ctl/NoRRWinOutput'
 * '<S22>'  : 'Win_DD/WND_DD_Runnable_OUT_10ms_sys/OHB07_Ctl/RRWinDownOutput'
 * '<S23>'  : 'Win_DD/WND_DD_Runnable_OUT_10ms_sys/OHB07_Ctl/RRWinUpOutput'
 */
#endif                                 /* RTW_HEADER_Win_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
