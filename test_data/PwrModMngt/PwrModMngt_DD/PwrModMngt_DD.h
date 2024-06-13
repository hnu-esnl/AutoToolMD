/*
 * File: PwrModMngt_DD.h
 *
 * Code generated for Simulink model 'PwrModMngt_DD'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Oct 21 09:56:15 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PwrModMngt_DD_h_
#define RTW_HEADER_PwrModMngt_DD_h_
#include "Rte_Type.h"
#ifndef PwrModMngt_DD_COMMON_INCLUDES_
#define PwrModMngt_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_PwrModMngt_DD.h"
#endif                                 /* PwrModMngt_DD_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "PwrModMngt_Mapping.h"

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<S3>/MultSwFilter' */
typedef struct {
  uint32 temporalCounter_i1;           /* '<S3>/MultSwFilter' */
  uint8 is_active_c8_ESF_lib;          /* '<S3>/MultSwFilter' */
  uint8 is_c8_ESF_lib;                 /* '<S3>/MultSwFilter' */
  uint8 In_u8SignalSw_prev;            /* '<S3>/MultSwFilter' */
  uint8 In_u8SignalSw_start;           /* '<S3>/MultSwFilter' */
} DW_MultSwFilter_PwrModMngt_DD_T;

/* Block signals (default storage) */
typedef struct tag_B_PwrModMngt_DD_T {
  uint8 Out_u8SignalSw;                /* '<S5>/MultSwFilter' */
  uint8 Out_u8SignalSw_h;              /* '<S4>/MultSwFilter' */
  uint8 Out_u8SignalSw_i;              /* '<S3>/MultSwFilter' */
} B_PwrModMngt_DD_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_PwrModMngt_DD_T {
  sint16 UnitDelay5_DSTATE;            /* '<S1>/UnitDelay5' */
  sint16 UnitDelay1_DSTATE;            /* '<S1>/UnitDelay1' */
  sint16 UnitDelay2_DSTATE;            /* '<S1>/UnitDelay2' */
  uint8 UnitDelay3_DSTATE;             /* '<S1>/UnitDelay3' */
  uint8 UnitDelay4_DSTATE;             /* '<S1>/UnitDelay4' */
  uint8 UnitDelay6_DSTATE;             /* '<S1>/UnitDelay6' */
  DW_MultSwFilter_PwrModMngt_DD_T sf_MultSwFilter_c;/* '<S5>/MultSwFilter' */
  DW_MultSwFilter_PwrModMngt_DD_T sf_MultSwFilter_l;/* '<S4>/MultSwFilter' */
  DW_MultSwFilter_PwrModMngt_DD_T sf_MultSwFilter;/* '<S3>/MultSwFilter' */
} DW_PwrModMngt_DD_T;

/* Invariant block signals (default storage) */
typedef struct {
  const float64 Divide1;               /* '<S3>/Divide1' */
  const float64 Divide1_g;             /* '<S4>/Divide1' */
  const float64 Divide1_f;             /* '<S5>/Divide1' */
} ConstB_PwrModMngt_DD_T;

/* Block signals (default storage) */
extern B_PwrModMngt_DD_T PwrModMngt_DD_B;

/* Block states (default storage) */
extern DW_PwrModMngt_DD_T PwrModMngt_DD_DW;
extern const ConstB_PwrModMngt_DD_T PwrModMngt_DD_ConstB;/* constant block i/o */

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
 * '<Root>' : 'PwrModMngt_DD'
 * '<S1>'   : 'PwrModMngt_DD/PwrModMngt_DD_Runnable_IN_10ms_sys'
 * '<S2>'   : 'PwrModMngt_DD/PwrModMngt_DD_Runnable_Init'
 * '<S3>'   : 'PwrModMngt_DD/PwrModMngt_DD_Runnable_IN_10ms_sys/MultSwFilter1'
 * '<S4>'   : 'PwrModMngt_DD/PwrModMngt_DD_Runnable_IN_10ms_sys/MultSwFilter2'
 * '<S5>'   : 'PwrModMngt_DD/PwrModMngt_DD_Runnable_IN_10ms_sys/MultSwFilter3'
 * '<S6>'   : 'PwrModMngt_DD/PwrModMngt_DD_Runnable_IN_10ms_sys/Subsystem'
 * '<S7>'   : 'PwrModMngt_DD/PwrModMngt_DD_Runnable_IN_10ms_sys/Subsystem1'
 * '<S8>'   : 'PwrModMngt_DD/PwrModMngt_DD_Runnable_IN_10ms_sys/Subsystem2'
 * '<S9>'   : 'PwrModMngt_DD/PwrModMngt_DD_Runnable_IN_10ms_sys/Subsystem3'
 * '<S10>'  : 'PwrModMngt_DD/PwrModMngt_DD_Runnable_IN_10ms_sys/MultSwFilter1/MultSwFilter'
 * '<S11>'  : 'PwrModMngt_DD/PwrModMngt_DD_Runnable_IN_10ms_sys/MultSwFilter2/MultSwFilter'
 * '<S12>'  : 'PwrModMngt_DD/PwrModMngt_DD_Runnable_IN_10ms_sys/MultSwFilter3/MultSwFilter'
 */
#endif                                 /* RTW_HEADER_PwrModMngt_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
