/*
 * File: EPB_SysSrvAdpVDA.h
 *
 * Code generated for Simulink model 'EPB_SysSrvAdpVDA'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Jul 29 13:50:04 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EPB_SysSrvAdpVDA_h_
#define RTW_HEADER_EPB_SysSrvAdpVDA_h_
#include <string.h>
#ifndef EPB_SysSrvAdpVDA_COMMON_INCLUDES_
#define EPB_SysSrvAdpVDA_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_EPB_SysSrvAdpVDA.h"
#endif                                 /* EPB_SysSrvAdpVDA_COMMON_INCLUDES_ */

#include "EPB_SysSrvAdpVDA_types.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define EPB_SysSrvAdpVDA_VAR

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_EPB_SysSrvAdpVDA_T {
  uint8 UnitDelay_DSTATE;              /* '<S6>/Unit Delay' */
  uint8 UnitDelay_DSTATE_e[8];         /* '<S4>/Unit Delay' */
  uint8 UnitDelay_DSTATE_k;            /* '<S8>/Unit Delay' */
  uint8 UnitDelay1_DSTATE[8];          /* '<S4>/Unit Delay1' */
  uint8 UnitDelay_DSTATE_a;            /* '<S7>/Unit Delay' */
  boolean DelayInput1_DSTATE;          /* '<S13>/Delay Input1' */
} DW_EPB_SysSrvAdpVDA_T;

/* Block states (default storage) */
extern VAR(DW_EPB_SysSrvAdpVDA_T, EPB_SysSrvAdpVDA_VAR) EPB_SysSrvAdpVDA_DW;

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
 * '<Root>' : 'EPB_SysSrvAdpVDA'
 * '<S1>'   : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Init'
 * '<S2>'   : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Input_Runnable_10ms_sys'
 * '<S3>'   : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Input_Runnable_Init_sys'
 * '<S4>'   : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys'
 * '<S5>'   : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_Init_sys'
 * '<S6>'   : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem'
 * '<S7>'   : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem1'
 * '<S8>'   : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem2'
 * '<S9>'   : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem/If_Action_Subsystem'
 * '<S10>'  : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem/If_Action_Subsystem1'
 * '<S11>'  : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem/If_Action_Subsystem/If_Action_Subsystem'
 * '<S12>'  : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem/If_Action_Subsystem/If_Action_Subsystem1'
 * '<S13>'  : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem1/Detect Rise Positive'
 * '<S14>'  : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem1/If_Action_Subsystem'
 * '<S15>'  : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem1/If_Action_Subsystem1'
 * '<S16>'  : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem1/Detect Rise Positive/Positive'
 * '<S17>'  : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem2/If_Action_Subsystem'
 * '<S18>'  : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem2/If_Action_Subsystem1'
 * '<S19>'  : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem2/If_Action_Subsystem/If_Action_Subsystem'
 * '<S20>'  : 'EPB_SysSrvAdpVDA/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys/Subsystem2/If_Action_Subsystem/If_Action_Subsystem1'
 */
#endif                                 /* RTW_HEADER_EPB_SysSrvAdpVDA_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
