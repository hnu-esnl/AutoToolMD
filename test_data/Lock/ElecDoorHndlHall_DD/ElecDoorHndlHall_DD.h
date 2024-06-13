/*
 * File: ElecDoorHndlHall_DD.h
 *
 * Code generated for Simulink model 'ElecDoorHndlHall_DD'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Sep 30 15:49:07 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ElecDoorHndlHall_DD_h_
#define RTW_HEADER_ElecDoorHndlHall_DD_h_
#ifndef ElecDoorHndlHall_DD_COMMON_INCLUDES_
# define ElecDoorHndlHall_DD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ElecDoorHndlHall_DD.h"
#endif                                 /* ElecDoorHndlHall_DD_COMMON_INCLUDES_ */

#include "ElecDoorHndlHall_DD_types.h"
#include "mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define ElecDoorHndlHall_DD_VAR
#define ElecDoorHndlHall_DD_CODE_LOCAL

/* Block states (default storage) for system '<S3>/Chart' */
typedef struct {
  uint32 tmp_HallCnt;                  /* '<S3>/Chart' */
  uint16 temporalCounter_i1;           /* '<S3>/Chart' */
  uint8 is_active_c4_ElecDoorHndlHall_D;/* '<S3>/Chart' */
  uint8 is_c4_ElecDoorHndlHall_DD;     /* '<S3>/Chart' */
} DW_Chart_ElecDoorHndlHall_DD_T;

/* Block signals (default storage) */
typedef struct tag_B_ElecDoorHndlHall_DD_T {
  uint16 HallCnt;                      /* '<S6>/Chart' */
  uint16 HallCnt_b;                    /* '<S5>/Chart' */
  uint16 HallCnt_a;                    /* '<S4>/Chart' */
  uint16 HallCnt_h;                    /* '<S3>/Chart' */
} B_ElecDoorHndlHall_DD_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_ElecDoorHndlHall_DD_T {
  DW_Chart_ElecDoorHndlHall_DD_T sf_Chart_p;/* '<S6>/Chart' */
  DW_Chart_ElecDoorHndlHall_DD_T sf_Chart_h;/* '<S5>/Chart' */
  DW_Chart_ElecDoorHndlHall_DD_T sf_Chart_m;/* '<S4>/Chart' */
  DW_Chart_ElecDoorHndlHall_DD_T sf_Chart;/* '<S3>/Chart' */
} DW_ElecDoorHndlHall_DD_T;

/* Block signals (default storage) */
extern VAR(B_ElecDoorHndlHall_DD_T, ElecDoorHndlHall_DD_VAR) ElecDoorHndlHall_DD_B;

/* Block states (default storage) */
extern VAR(DW_ElecDoorHndlHall_DD_T, ElecDoorHndlHall_DD_VAR) ElecDoorHndlHall_DD_DW;

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
 * '<Root>' : 'ElecDoorHndlHall_DD'
 * '<S1>'   : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys'
 * '<S2>'   : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_Init'
 * '<S3>'   : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/HallCntFL'
 * '<S4>'   : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/HallCntFR'
 * '<S5>'   : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/HallCntRL'
 * '<S6>'   : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/HallCntRR'
 * '<S7>'   : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/MovingAverage (Fixed-point only)1'
 * '<S8>'   : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/MovingAverage (Fixed-point only)2'
 * '<S9>'   : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/MovingAverage (Fixed-point only)4'
 * '<S10>'  : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/MovingAverage (Fixed-point only)5'
 * '<S11>'  : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/MovingAverage (Fixed-point only)6'
 * '<S12>'  : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/MovingAverage (Fixed-point only)7'
 * '<S13>'  : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/MovingAverage (Fixed-point only)8'
 * '<S14>'  : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/HallCntFL/Chart'
 * '<S15>'  : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/HallCntFR/Chart'
 * '<S16>'  : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/HallCntRL/Chart'
 * '<S17>'  : 'ElecDoorHndlHall_DD/ElecDoorHndlHall_DD_Runnable_1ms_sys/HallCntRR/Chart'
 */
#endif                                 /* RTW_HEADER_ElecDoorHndlHall_DD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
