/*
 * File: HvacBlowr_Ctrl.h
 *
 * Code generated for Simulink model 'HvacBlowr_Ctrl'.
 *
 * Model version                  : 1.15
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Oct 26 19:58:52 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HvacBlowr_Ctrl_h_
#define RTW_HEADER_HvacBlowr_Ctrl_h_
#ifndef HvacBlowr_Ctrl_COMMON_INCLUDES_
# define HvacBlowr_Ctrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_HvacBlowr_Ctrl.h"
#endif                                 /* HvacBlowr_Ctrl_COMMON_INCLUDES_ */

#include "HvacBlowr_Ctrl_types.h"
#include "Ifx.h"
#include "mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define HvacBlowr_Ctrl_VAR

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_HvacBlowr_Ctrl_T {
  uint16 HvacBlowr_uLPMBlowrNegVolt;   /* '<S3>/Data Store Memory16' */
  uint16 HvacBlowr_uLPMBlowrPosVolt;   /* '<S3>/Data Store Memory17' */
  uint16 HvacBlowr_uReLPMBlowrFb;      /* '<S4>/Data Store Memory1' */
  uint16 HvacBlowr_uReLPMBlowrNegVolt; /* '<S4>/Data Store Memory16' */
  uint16 HvacBlowr_uReLPMBlowrPosVolt; /* '<S4>/Data Store Memory17' */
  uint8 HvacBlowr_stWindExitSpdLvl;    /* '<S3>/Data Store Memory19' */
  uint8 HvacBlowr_stReWindExitSpdLvl;  /* '<S4>/Data Store Memory19' */
} DW_HvacBlowr_Ctrl_T;

/* Block states (default storage) */
extern VAR(DW_HvacBlowr_Ctrl_T, HvacBlowr_Ctrl_VAR) HvacBlowr_Ctrl_DW;

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
 * '<Root>' : 'HvacBlowr_Ctrl'
 * '<S1>'   : 'HvacBlowr_Ctrl/HvacBlowr_Ctrl_Runnable_10ms_sys'
 * '<S2>'   : 'HvacBlowr_Ctrl/HvacBlowr_Ctrl_Runnable_Init'
 * '<S3>'   : 'HvacBlowr_Ctrl/HvacBlowr_Ctrl_Runnable_10ms_sys/FrontBlower'
 * '<S4>'   : 'HvacBlowr_Ctrl/HvacBlowr_Ctrl_Runnable_10ms_sys/RearBlower'
 * '<S5>'   : 'HvacBlowr_Ctrl/HvacBlowr_Ctrl_Runnable_10ms_sys/FrontBlower/Linear_Blower'
 * '<S6>'   : 'HvacBlowr_Ctrl/HvacBlowr_Ctrl_Runnable_10ms_sys/FrontBlower/PWM_Blower'
 * '<S7>'   : 'HvacBlowr_Ctrl/HvacBlowr_Ctrl_Runnable_10ms_sys/RearBlower/Linear_Blower'
 * '<S8>'   : 'HvacBlowr_Ctrl/HvacBlowr_Ctrl_Runnable_10ms_sys/RearBlower/PWM_Blower'
 */
#endif                                 /* RTW_HEADER_HvacBlowr_Ctrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
