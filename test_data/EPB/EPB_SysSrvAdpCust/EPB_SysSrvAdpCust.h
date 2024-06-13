/*
 * File: EPB_SysSrvAdpCust.h
 *
 * Code generated for Simulink model 'EPB_SysSrvAdpCust'.
 *
 * Model version                  : 1.76
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Thu Oct 13 13:50:35 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EPB_SysSrvAdpCust_h_
#define RTW_HEADER_EPB_SysSrvAdpCust_h_
#include <string.h>
#ifndef EPB_SysSrvAdpCust_COMMON_INCLUDES_
#define EPB_SysSrvAdpCust_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_EPB_SysSrvAdpCust.h"
#endif                                 /* EPB_SysSrvAdpCust_COMMON_INCLUDES_ */

#include "EPB_SysSrvAdpCust_types.h"
#include "Mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define EPB_SysSrvAdpCust_VAR

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_EPB_SysSrvAdpCust_T {
  uint8 UnitDelay1_DSTATE;             /* '<S4>/Unit Delay1' */
  uint8 UnitDelay_DSTATE[128];         /* '<S4>/Unit Delay' */
} DW_EPB_SysSrvAdpCust_T;

/* Block states (default storage) */
extern VAR(DW_EPB_SysSrvAdpCust_T, EPB_SysSrvAdpCust_VAR) EPB_SysSrvAdpCust_DW;

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
 * '<Root>' : 'EPB_SysSrvAdpCust'
 * '<S1>'   : 'EPB_SysSrvAdpCust/EPB_SysSrvAdpCust_Init'
 * '<S2>'   : 'EPB_SysSrvAdpCust/EPB_SysSrvAdpCust_Input_Runnable_10ms_sys'
 * '<S3>'   : 'EPB_SysSrvAdpCust/EPB_SysSrvAdpCust_Input_Runnable_Init_sys'
 * '<S4>'   : 'EPB_SysSrvAdpCust/EPB_SysSrvAdpCust_Output_Runnable_10ms_sys'
 * '<S5>'   : 'EPB_SysSrvAdpCust/EPB_SysSrvAdpCust_Output_Runnable_Init_sys'
 * '<S6>'   : 'EPB_SysSrvAdpCust/EPB_SysSrvAdpCust_Output_Runnable_10ms_sys/If_Action_Subsystem'
 * '<S7>'   : 'EPB_SysSrvAdpCust/EPB_SysSrvAdpCust_Output_Runnable_10ms_sys/If_Action_Subsystem1'
 * '<S8>'   : 'EPB_SysSrvAdpCust/EPB_SysSrvAdpCust_Output_Runnable_10ms_sys/If_Action_Subsystem/If_Action_Subsystem'
 * '<S9>'   : 'EPB_SysSrvAdpCust/EPB_SysSrvAdpCust_Output_Runnable_10ms_sys/If_Action_Subsystem/If_Action_Subsystem1'
 */
#endif                                 /* RTW_HEADER_EPB_SysSrvAdpCust_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
