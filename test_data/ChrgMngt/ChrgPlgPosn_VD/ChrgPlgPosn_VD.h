/*
 * File: ChrgPlgPosn_VD.h
 *
 * Code generated for Simulink model 'ChrgPlgPosn_VD'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Sep 27 21:10:39 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ChrgPlgPosn_VD_h_
#define RTW_HEADER_ChrgPlgPosn_VD_h_
#ifndef ChrgPlgPosn_VD_COMMON_INCLUDES_
# define ChrgPlgPosn_VD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ChrgPlgPosn_VD.h"
#endif                                 /* ChrgPlgPosn_VD_COMMON_INCLUDES_ */

#include "ChrgPlgPosn_VD_types.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define ChrgPlgPosn_VD_VAR

/* Block signals (default storage) */
typedef struct tag_B_ChrgPlgPosn_VD_T {
  uint8 IoHwAb_IoSigDio_Di_Get_o1;     /* '<S1>/IoHwAb_IoSigDio_Di_Get' */
  uint8 IoHwAb_IoSigDio_Di_Get1_o1;    /* '<S1>/IoHwAb_IoSigDio_Di_Get1' */
} B_ChrgPlgPosn_VD_T;

/* Block signals (default storage) */
extern VAR(B_ChrgPlgPosn_VD_T, ChrgPlgPosn_VD_VAR) ChrgPlgPosn_VD_B;

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
 * '<Root>' : 'ChrgPlgPosn_VD'
 * '<S1>'   : 'ChrgPlgPosn_VD/ChrgPlgPosn_VD_Runnable_1ms_sys'
 * '<S2>'   : 'ChrgPlgPosn_VD/ChrgPlgPosn_VD_Runnable_Init'
 * '<S3>'   : 'ChrgPlgPosn_VD/ChrgPlgPosn_VD_Runnable_1ms_sys/ChrgPlgPosnFailDiagDebounceReSet'
 * '<S4>'   : 'ChrgPlgPosn_VD/ChrgPlgPosn_VD_Runnable_1ms_sys/ChrgPlgPosnFailDiagSet'
 */
#endif                                 /* RTW_HEADER_ChrgPlgPosn_VD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
