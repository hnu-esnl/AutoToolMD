/*
 * File: ChrgPlgLock_VD.h
 *
 * Code generated for Simulink model 'ChrgPlgLock_VD'.
 *
 * Model version                  : 1.70
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Sep 28 18:01:23 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ChrgPlgLock_VD_h_
#define RTW_HEADER_ChrgPlgLock_VD_h_
#ifndef ChrgPlgLock_VD_COMMON_INCLUDES_
# define ChrgPlgLock_VD_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ChrgPlgLock_VD.h"
#include "bfx.h"
#endif                                 /* ChrgPlgLock_VD_COMMON_INCLUDES_ */

#include "ChrgPlgLock_VD_types.h"
#include "mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define ChrgPlgLock_VD_VAR

/* Block signals (default storage) */
typedef struct tag_B_ChrgPlgLock_VD_T {
  sint32 ChgrPlug_stPlgLock;           /* '<S1>/Chart2' */
  sint16 IntlckChrgPlg_rActr;          /* '<S1>/Chart2' */
  boolean flgLockPinByndClsd;          /* '<S1>/Chart2' */
} B_ChrgPlgLock_VD_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_ChrgPlgLock_VD_T {
  uint16 ChgrPlug_tiPlgLock;           /* '<S1>/Chart2' */
  uint8 is_active_c1_ChrgPlgLock_VD;   /* '<S1>/Chart2' */
  uint8 is_c1_ChrgPlgLock_VD;          /* '<S1>/Chart2' */
  uint8 is_State_LOCK;                 /* '<S1>/Chart2' */
  uint8 is_State_ERROR;                /* '<S1>/Chart2' */
  uint8 is_State_No_Actuator_Error;    /* '<S1>/Chart2' */
  uint8 is_State_Error_Sensor;         /* '<S1>/Chart2' */
  uint8 is_State_Error_Healed;         /* '<S1>/Chart2' */
  uint8 is_State_UNLOCK;               /* '<S1>/Chart2' */
  uint8 ChgrPlug_cntrPlgLockActrActvn; /* '<S1>/Chart2' */
} DW_ChrgPlgLock_VD_T;

/* Block signals (default storage) */
extern VAR(B_ChrgPlgLock_VD_T, ChrgPlgLock_VD_VAR) ChrgPlgLock_VD_B;

/* Block states (default storage) */
extern VAR(DW_ChrgPlgLock_VD_T, ChrgPlgLock_VD_VAR) ChrgPlgLock_VD_DW;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Constant' : Unused code path elimination
 * Block '<S1>/Constant1' : Unused code path elimination
 * Block '<S1>/Constant2' : Unused code path elimination
 * Block '<S1>/Constant3' : Unused code path elimination
 * Block '<S1>/Constant4' : Unused code path elimination
 * Block '<S1>/Constant5' : Unused code path elimination
 * Block '<S1>/Constant6' : Unused code path elimination
 * Block '<S1>/Constant7' : Unused code path elimination
 * Block '<S1>/Constant8' : Unused code path elimination
 * Block '<S1>/PA_ChgrPlug_flgLockActrErr_C' : Unused code path elimination
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
 * '<Root>' : 'ChrgPlgLock_VD'
 * '<S1>'   : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys'
 * '<S2>'   : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_Init'
 * '<S3>'   : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys/Chart2'
 * '<S4>'   : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys/Lock'
 * '<S5>'   : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys/PlgLockOffDiagErr_DeBounceReset'
 * '<S6>'   : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys/PlgLockOffDiagErr_Set'
 * '<S7>'   : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys/PlgLockOnDiagErr_DeBounceReset'
 * '<S8>'   : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys/PlgLockOnDiagErr_Set'
 * '<S9>'   : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys/Standby'
 * '<S10>'  : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys/Unlock'
 * '<S11>'  : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys/PlgLockOffDiagErr_Set/GetBit'
 * '<S12>'  : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys/PlgLockOnDiagErr_Set/GetBit'
 * '<S13>'  : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys/PlgLockOnDiagErr_Set/GetBit1'
 * '<S14>'  : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys/PlgLockOnDiagErr_Set/GetBit2'
 * '<S15>'  : 'ChrgPlgLock_VD/ChrgPlgLock_VD_Runnable_1ms_sys/PlgLockOnDiagErr_Set/GetBit3'
 */
#endif                                 /* RTW_HEADER_ChrgPlgLock_VD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
