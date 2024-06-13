/*
 * File: KL15PwrSply_ComCnvRx.h
 *
 * Code generated for Simulink model 'KL15PwrSply_ComCnvRx'.
 *
 * Model version                  : 1.70
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Oct 16 14:22:19 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_KL15PwrSply_ComCnvRx_h_
#define RTW_HEADER_KL15PwrSply_ComCnvRx_h_
#ifndef KL15PwrSply_ComCnvRx_COMMON_INCLUDES_
# define KL15PwrSply_ComCnvRx_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_KL15PwrSply_ComCnvRx.h"
#endif                                 /* KL15PwrSply_ComCnvRx_COMMON_INCLUDES_ */

#include "KL15PwrSply_ComCnvRx_types.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define KL15PwrSply_ComCnvRx_VAR
#define KL15PwrSply_ComCnvRx_CODE_LOCAL

/* Block signals (default storage) */
typedef struct tag_B_KL15PwrSply_ComCnvRx_T {
  uint8 Switch;                        /* '<S20>/Switch' */
  uint8 Switch_i;                      /* '<S19>/Switch' */
  uint8 Switch_a;                      /* '<S18>/Switch' */
  uint8 Switch_l;                      /* '<S17>/Switch' */
  uint8 Switch_k;                      /* '<S16>/Switch' */
  uint8 Switch_lr;                     /* '<S15>/Switch' */
  uint8 Switch_e;                      /* '<S14>/Switch' */
  uint8 Switch_en;                     /* '<S13>/Switch' */
  uint8 Switch_c;                      /* '<S12>/Switch' */
  uint8 Switch_e2;                     /* '<S11>/Switch' */
  uint8 Switch_ci;                     /* '<S10>/Switch' */
  uint8 Switch_p;                      /* '<S9>/Switch' */
  uint8 Switch_f;                      /* '<S8>/Switch' */
  uint8 Switch_g;                      /* '<S7>/Switch' */
  uint8 Switch_pa;                     /* '<S6>/Switch' */
  uint8 Switch_d;                      /* '<S5>/Switch' */
  uint8 Switch_dl;                     /* '<S4>/Switch' */
} B_KL15PwrSply_ComCnvRx_T;

/* Static Memory for Internal Data */
extern VAR(float32, KL15PwrSply_ComCnvRx_VAR) KL15PwrSply_PwrSply_BCS_VehSpd;

/* Block signals (default storage) */
extern VAR(B_KL15PwrSply_ComCnvRx_T, KL15PwrSply_ComCnvRx_VAR) KL15PwrSply_ComCnvRx_B;

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
 * '<Root>' : 'KL15PwrSply_ComCnvRx'
 * '<S1>'   : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys'
 * '<S2>'   : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_Init'
 * '<S3>'   : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract'
 * '<S4>'   : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra01'
 * '<S5>'   : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra02'
 * '<S6>'   : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra03'
 * '<S7>'   : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra04'
 * '<S8>'   : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra05'
 * '<S9>'   : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra06'
 * '<S10>'  : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra07'
 * '<S11>'  : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra08'
 * '<S12>'  : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra09'
 * '<S13>'  : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra10'
 * '<S14>'  : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra11'
 * '<S15>'  : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra12'
 * '<S16>'  : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra25'
 * '<S17>'  : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra26'
 * '<S18>'  : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra27'
 * '<S19>'  : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra28'
 * '<S20>'  : 'KL15PwrSply_ComCnvRx/KL15PwrSply_ComCnvRx_Runnable_10ms_sys/PwrSupSigAbstract/PwrSupTra29'
 */
#endif                                 /* RTW_HEADER_KL15PwrSply_ComCnvRx_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
