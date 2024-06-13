/*
 * File: IntLamp_Ctrl.c
 *
 * Code generated for Simulink model 'IntLamp_Ctrl'.
 *
 * Model version                  : 1.32
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Oct 12 17:15:30 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "IntLamp_Ctrl.h"

/* Named constants for Chart: '<S2>/Chart' */
#define IntLamp_Ctrl_IN_Clean          ((uint8)1U)
#define IntLamp_Ctrl_IN_Output         ((uint8)2U)

/* Named constants for Chart: '<S2>/Light_Control' */
#define IntLamp_Ct_IN_NO_ACTIVE_CHILD_n ((uint8)0U)
#define IntLamp_Ctrl_IN_Flicker        ((uint8)1U)
#define IntLamp_Ctrl_IN_Flicker_Off    ((uint8)1U)
#define IntLamp_Ctrl_IN_Flicker_On     ((uint8)2U)
#define IntLamp_Ctrl_IN_Grad_Decreasing ((uint8)1U)
#define IntLamp_Ctrl_IN_Grad_Increasing ((uint8)2U)
#define IntLamp_Ctrl_IN_Grad_Init      ((uint8)3U)
#define IntLamp_Ctrl_IN_Norm_Decreasing ((uint8)1U)
#define IntLamp_Ctrl_IN_Norm_Increasing ((uint8)2U)
#define IntLamp_Ctrl_IN_Norm_Init      ((uint8)3U)
#define IntLamp_Ctrl_IN_OFF            ((uint8)2U)
#define IntLamp_Ctrl_IN_OFF_Decreasing ((uint8)1U)
#define IntLamp_Ctrl_IN_OFF_Normal     ((uint8)2U)
#define IntLamp_Ctrl_IN_ON             ((uint8)3U)
#define IntLamp_Ctrl_IN_ON_Grad        ((uint8)1U)
#define IntLamp_Ctrl_IN_ON_Normal      ((uint8)2U)
#define IntLamp_Ctrl_IN_wait           ((uint8)4U)

/* Named constants for Chart: '<S11>/Timer_Occur' */
#define IntLamp_Ctrl_IN_TimerOFF       ((uint8)1U)
#define IntLamp_Ctrl_IN_TimerON        ((uint8)2U)
#define IntLamp_Ctrl_IN_Wait           ((uint8)3U)

/* Named constants for Chart: '<S4>/Light_Control' */
#define IntLamp_Ct_IN_Grad_Decreasing_a ((uint8)1U)
#define IntLamp_Ct_IN_Grad_Increasing_c ((uint8)2U)
#define IntLamp_Ct_IN_NO_ACTIVE_CHILD_b ((uint8)0U)
#define IntLamp_Ct_IN_Norm_Decreasing_k ((uint8)1U)
#define IntLamp_Ct_IN_Norm_Increasing_m ((uint8)2U)
#define IntLamp_Ctr_IN_OFF_Decreasing_b ((uint8)1U)
#define IntLamp_Ctrl_IN_Flicker_Off_d  ((uint8)1U)
#define IntLamp_Ctrl_IN_Flicker_On_p   ((uint8)2U)
#define IntLamp_Ctrl_IN_Flicker_f      ((uint8)1U)
#define IntLamp_Ctrl_IN_Grad_Init_d    ((uint8)3U)
#define IntLamp_Ctrl_IN_Norm_Init_m    ((uint8)3U)
#define IntLamp_Ctrl_IN_OFF_Normal_k   ((uint8)2U)
#define IntLamp_Ctrl_IN_OFF_c          ((uint8)2U)
#define IntLamp_Ctrl_IN_ON_Grad_p      ((uint8)1U)
#define IntLamp_Ctrl_IN_ON_Normal_h    ((uint8)2U)
#define IntLamp_Ctrl_IN_ON_e           ((uint8)3U)
#define IntLamp_Ctrl_IN_wait_a         ((uint8)4U)
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Invariant block signals (default storage) */
const ConstB_IntLamp_Ctrl_T IntLamp_Ctrl_ConstB = {
  0U,                                  /* '<S6>/Constant' */
  0U                                   /* '<S6>/Constant2' */
};

/* Block signals (default storage) */
B_IntLamp_Ctrl_T IntLamp_Ctrl_B;

/* Block states (default storage) */
DW_IntLamp_Ctrl_T IntLamp_Ctrl_DW;
static void IntLamp_Ctrl_Chart(uint8 rtu_CtrCmd, uint8 rtu_CtrMode, uint8
  rtu_FlickerCycle, uint16 rtu_TargetBrightness, uint16 rtu_SlopePara, uint16
  rtu_FlickerOnT, uint16 rtu_FlickerOffT, uint8 rtu_TimerEnable, uint8
  rtu_TimerAction, uint16 rtu_TimerTrigtime, uint8 rtu_TimerMode, uint16
  rtu_TimerGrad, boolean rtu_MessageTrigFlag, float64 rtu_TimerOccur, uint8
  *rty_CtrCmd_Inp, uint8 *rty_CtrMode_Inp, uint8 *rty_FlickerCycle_Inp, uint16
  *rty_TargetBrightness_Inp, uint16 *rty_SlopePara_Inp, uint16
  *rty_FlickerOnT_Inp, uint16 *rty_FlickerOffT_Inp, uint8 *rty_TimerEnable_Inp,
  uint8 *rty_TimerAction_Inp, uint16 *rty_TimerTrigtime_Inp, uint8
  *rty_TimerMode_Inp, uint16 *rty_TimerGrad_Inp, DW_Chart_IntLamp_Ctrl_T
  *localDW);
static void IntLamp_Ctrl_Light_Control_Init(float64 *rty_TimerShutdown, float64 *
  rty_PWM_Out);
static void IntLamp_Ctrl_Light_Control(uint8 rtu_Ctrl_Cmd, uint8 rtu_Ctrl_Mode,
  float64 rtu_Ctrl_Slope, float64 rtu_TargetBright, uint8 rtu_FlickerCycle,
  float64 rtu_FlickerOnTime, float64 rtu_FlickerOffTime, float64 rtu_TimerOccur,
  float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_IntLamp_Ctrl_T *localDW);
static void IntLamp_MsgTimeOut_Counter_Init(float64 *rty_n);
static void IntLamp_Ctrl_MsgTimeOut_Counter(boolean rtu_MsgTimeOut, float64
  rtu_gPRM_u8MsgOutLampShutdownT, float64 *rty_MsgTimeOut_En, float64 *rty_n);
static void IntLamp_Ctrl_Timer_Occur(float64 rtu_TimerEn, uint32
  rtu_TimerTrigtime, float64 *rty_TimerOccur, DW_Timer_Occur_IntLamp_Ctrl_T
  *localDW);
static void IntLamp_Ct_Light_Control_a_Init(float64 *rty_TimerShutdown, float64 *
  rty_PWM_Out);
static void IntLamp_Ctrl_Light_Control_l(uint8 rtu_Ctrl_Cmd, uint8 rtu_Ctrl_Mode,
  float64 rtu_Ctrl_Slope, float64 rtu_TargetBright, uint8 rtu_FlickerCycle,
  float64 rtu_FlickerOnTime, float64 rtu_FlickerOffTime, float64 rtu_TimerOccur,
  float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_IntLamp_Ct_g_T *localDW);

/* Forward declaration for local functions */
static void IntLamp_Ctrl_enter_atomic_Clean(uint8 *rty_CtrCmd_Inp, uint8
  *rty_CtrMode_Inp, uint8 *rty_FlickerCycle_Inp, uint16
  *rty_TargetBrightness_Inp, uint16 *rty_SlopePara_Inp, uint16
  *rty_FlickerOnT_Inp, uint16 *rty_FlickerOffT_Inp, uint8 *rty_TimerEnable_Inp,
  uint8 *rty_TimerAction_Inp, uint16 *rty_TimerTrigtime_Inp, uint8
  *rty_TimerMode_Inp, uint16 *rty_TimerGrad_Inp);
static void IntLamp_Ctr_enter_atomic_Output(uint8 rtu_CtrCmd, uint8 rtu_CtrMode,
  uint8 rtu_FlickerCycle, uint16 rtu_TargetBrightness, uint16 rtu_SlopePara,
  uint16 rtu_FlickerOnT, uint16 rtu_FlickerOffT, uint8 rtu_TimerEnable, uint8
  rtu_TimerAction, uint16 rtu_TimerTrigtime, uint8 rtu_TimerMode, uint16
  rtu_TimerGrad, uint8 *rty_CtrCmd_Inp, uint8 *rty_CtrMode_Inp, uint8
  *rty_FlickerCycle_Inp, uint16 *rty_TargetBrightness_Inp, uint16
  *rty_SlopePara_Inp, uint16 *rty_FlickerOnT_Inp, uint16 *rty_FlickerOffT_Inp,
  uint8 *rty_TimerEnable_Inp, uint8 *rty_TimerAction_Inp, uint16
  *rty_TimerTrigtime_Inp, uint8 *rty_TimerMode_Inp, uint16 *rty_TimerGrad_Inp);

/* Forward declaration for local functions */
static void IntLamp_Ctrl_enter_internal_OFF(uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_IntLamp_Ctrl_T *localDW);
static void IntLamp_Ctrl_ON(uint8 rtu_Ctrl_Cmd, uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 rtu_TargetBright, float64 rtu_FlickerOnTime, float64
  rtu_TimerOccur, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_IntLamp_Ctrl_T *localDW);

/* Forward declaration for local functions */
static void IntLamp_Ct_enter_internal_OFF_h(uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_IntLamp_Ct_g_T *localDW);
static void IntLamp_Ctrl_ON_l(uint8 rtu_Ctrl_Cmd, uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 rtu_TargetBright, float64 rtu_FlickerOnTime, float64
  rtu_TimerOccur, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_IntLamp_Ct_g_T *localDW);

/* Function for Chart: '<S2>/Chart' */
static void IntLamp_Ctrl_enter_atomic_Clean(uint8 *rty_CtrCmd_Inp, uint8
  *rty_CtrMode_Inp, uint8 *rty_FlickerCycle_Inp, uint16
  *rty_TargetBrightness_Inp, uint16 *rty_SlopePara_Inp, uint16
  *rty_FlickerOnT_Inp, uint16 *rty_FlickerOffT_Inp, uint8 *rty_TimerEnable_Inp,
  uint8 *rty_TimerAction_Inp, uint16 *rty_TimerTrigtime_Inp, uint8
  *rty_TimerMode_Inp, uint16 *rty_TimerGrad_Inp)
{
  /* Chart: '<S2>/Chart' */
  *rty_CtrCmd_Inp = 1U;
  *rty_CtrMode_Inp = 0U;
  *rty_FlickerCycle_Inp = 0U;
  *rty_TargetBrightness_Inp = 0U;
  *rty_SlopePara_Inp = 0U;
  *rty_FlickerOnT_Inp = 0U;
  *rty_FlickerOffT_Inp = 0U;
  *rty_TimerEnable_Inp = 2U;
  *rty_TimerAction_Inp = 0U;
  *rty_TimerTrigtime_Inp = 0U;
  *rty_TimerMode_Inp = 0U;
  *rty_TimerGrad_Inp = 0U;
}

/* Function for Chart: '<S2>/Chart' */
static void IntLamp_Ctr_enter_atomic_Output(uint8 rtu_CtrCmd, uint8 rtu_CtrMode,
  uint8 rtu_FlickerCycle, uint16 rtu_TargetBrightness, uint16 rtu_SlopePara,
  uint16 rtu_FlickerOnT, uint16 rtu_FlickerOffT, uint8 rtu_TimerEnable, uint8
  rtu_TimerAction, uint16 rtu_TimerTrigtime, uint8 rtu_TimerMode, uint16
  rtu_TimerGrad, uint8 *rty_CtrCmd_Inp, uint8 *rty_CtrMode_Inp, uint8
  *rty_FlickerCycle_Inp, uint16 *rty_TargetBrightness_Inp, uint16
  *rty_SlopePara_Inp, uint16 *rty_FlickerOnT_Inp, uint16 *rty_FlickerOffT_Inp,
  uint8 *rty_TimerEnable_Inp, uint8 *rty_TimerAction_Inp, uint16
  *rty_TimerTrigtime_Inp, uint8 *rty_TimerMode_Inp, uint16 *rty_TimerGrad_Inp)
{
  *rty_CtrCmd_Inp = rtu_CtrCmd;
  *rty_CtrMode_Inp = rtu_CtrMode;
  *rty_FlickerCycle_Inp = rtu_FlickerCycle;
  *rty_TargetBrightness_Inp = rtu_TargetBrightness;
  *rty_SlopePara_Inp = rtu_SlopePara;
  *rty_FlickerOnT_Inp = rtu_FlickerOnT;
  *rty_FlickerOffT_Inp = rtu_FlickerOffT;
  *rty_TimerEnable_Inp = rtu_TimerEnable;
  *rty_TimerAction_Inp = rtu_TimerAction;
  *rty_TimerTrigtime_Inp = rtu_TimerTrigtime;
  *rty_TimerMode_Inp = rtu_TimerMode;
  *rty_TimerGrad_Inp = rtu_TimerGrad;
}

/*
 * Output and update for atomic system:
 *    '<S2>/Chart'
 *    '<S4>/Chart'
 *    '<S5>/Chart'
 *    '<S7>/Chart'
 */
static void IntLamp_Ctrl_Chart(uint8 rtu_CtrCmd, uint8 rtu_CtrMode, uint8
  rtu_FlickerCycle, uint16 rtu_TargetBrightness, uint16 rtu_SlopePara, uint16
  rtu_FlickerOnT, uint16 rtu_FlickerOffT, uint8 rtu_TimerEnable, uint8
  rtu_TimerAction, uint16 rtu_TimerTrigtime, uint8 rtu_TimerMode, uint16
  rtu_TimerGrad, boolean rtu_MessageTrigFlag, float64 rtu_TimerOccur, uint8
  *rty_CtrCmd_Inp, uint8 *rty_CtrMode_Inp, uint8 *rty_FlickerCycle_Inp, uint16
  *rty_TargetBrightness_Inp, uint16 *rty_SlopePara_Inp, uint16
  *rty_FlickerOnT_Inp, uint16 *rty_FlickerOffT_Inp, uint8 *rty_TimerEnable_Inp,
  uint8 *rty_TimerAction_Inp, uint16 *rty_TimerTrigtime_Inp, uint8
  *rty_TimerMode_Inp, uint16 *rty_TimerGrad_Inp, DW_Chart_IntLamp_Ctrl_T
  *localDW)
{
  /* Chart: '<S2>/Chart' */
  if (localDW->is_active_c1_IntLamp_Ctrl == 0U) {
    localDW->is_active_c1_IntLamp_Ctrl = 1U;
    localDW->is_c1_IntLamp_Ctrl = IntLamp_Ctrl_IN_Clean;
    IntLamp_Ctrl_enter_atomic_Clean(rty_CtrCmd_Inp, rty_CtrMode_Inp,
      rty_FlickerCycle_Inp, rty_TargetBrightness_Inp, rty_SlopePara_Inp,
      rty_FlickerOnT_Inp, rty_FlickerOffT_Inp, rty_TimerEnable_Inp,
      rty_TimerAction_Inp, rty_TimerTrigtime_Inp, rty_TimerMode_Inp,
      rty_TimerGrad_Inp);
  } else if (localDW->is_c1_IntLamp_Ctrl == IntLamp_Ctrl_IN_Clean) {
    if (rtu_MessageTrigFlag) {
      localDW->is_c1_IntLamp_Ctrl = IntLamp_Ctrl_IN_Output;
      IntLamp_Ctr_enter_atomic_Output(rtu_CtrCmd, rtu_CtrMode, rtu_FlickerCycle,
        rtu_TargetBrightness, rtu_SlopePara, rtu_FlickerOnT, rtu_FlickerOffT,
        rtu_TimerEnable, rtu_TimerAction, rtu_TimerTrigtime, rtu_TimerMode,
        rtu_TimerGrad, rty_CtrCmd_Inp, rty_CtrMode_Inp, rty_FlickerCycle_Inp,
        rty_TargetBrightness_Inp, rty_SlopePara_Inp, rty_FlickerOnT_Inp,
        rty_FlickerOffT_Inp, rty_TimerEnable_Inp, rty_TimerAction_Inp,
        rty_TimerTrigtime_Inp, rty_TimerMode_Inp, rty_TimerGrad_Inp);
    }
  } else if (rtu_TimerOccur == 1.0) {
    localDW->is_c1_IntLamp_Ctrl = IntLamp_Ctrl_IN_Clean;
    IntLamp_Ctrl_enter_atomic_Clean(rty_CtrCmd_Inp, rty_CtrMode_Inp,
      rty_FlickerCycle_Inp, rty_TargetBrightness_Inp, rty_SlopePara_Inp,
      rty_FlickerOnT_Inp, rty_FlickerOffT_Inp, rty_TimerEnable_Inp,
      rty_TimerAction_Inp, rty_TimerTrigtime_Inp, rty_TimerMode_Inp,
      rty_TimerGrad_Inp);
  } else {
    if (rtu_MessageTrigFlag) {
      localDW->is_c1_IntLamp_Ctrl = IntLamp_Ctrl_IN_Output;
      IntLamp_Ctr_enter_atomic_Output(rtu_CtrCmd, rtu_CtrMode, rtu_FlickerCycle,
        rtu_TargetBrightness, rtu_SlopePara, rtu_FlickerOnT, rtu_FlickerOffT,
        rtu_TimerEnable, rtu_TimerAction, rtu_TimerTrigtime, rtu_TimerMode,
        rtu_TimerGrad, rty_CtrCmd_Inp, rty_CtrMode_Inp, rty_FlickerCycle_Inp,
        rty_TargetBrightness_Inp, rty_SlopePara_Inp, rty_FlickerOnT_Inp,
        rty_FlickerOffT_Inp, rty_TimerEnable_Inp, rty_TimerAction_Inp,
        rty_TimerTrigtime_Inp, rty_TimerMode_Inp, rty_TimerGrad_Inp);
    }
  }

  /* End of Chart: '<S2>/Chart' */
}

/* Function for Chart: '<S2>/Light_Control' */
static void IntLamp_Ctrl_enter_internal_OFF(uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_IntLamp_Ctrl_T *localDW)
{
  if ((rtu_Ctrl_Mode == 1) && (*rty_PWM_Out >= rtu_Ctrl_Slope)) {
    localDW->is_OFF = IntLamp_Ctrl_IN_OFF_Decreasing;
    if (*rty_PWM_Out >= rtu_Ctrl_Slope) {
      *rty_PWM_Out -= rtu_Ctrl_Slope;
    } else {
      *rty_PWM_Out = 0.0;
    }
  } else {
    localDW->is_OFF = IntLamp_Ctrl_IN_OFF_Normal;
    *rty_PWM_Out = 0.0;
    *rty_TimerShutdown = 1.0;
  }
}

/* Function for Chart: '<S2>/Light_Control' */
static void IntLamp_Ctrl_ON(uint8 rtu_Ctrl_Cmd, uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 rtu_TargetBright, float64 rtu_FlickerOnTime, float64
  rtu_TimerOccur, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_IntLamp_Ctrl_T *localDW)
{
  if ((rtu_Ctrl_Cmd == 1) || (rtu_TimerOccur == 1.0)) {
    localDW->is_ON_Grad = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
    localDW->is_ON_Normal = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
    localDW->is_ON = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
    localDW->is_c2_IntLamp_Ctrl = IntLamp_Ctrl_IN_OFF;
    IntLamp_Ctrl_enter_internal_OFF(rtu_Ctrl_Mode, rtu_Ctrl_Slope,
      rty_TimerShutdown, rty_PWM_Out, localDW);
  } else if (rtu_Ctrl_Cmd == 3) {
    localDW->is_ON_Grad = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
    localDW->is_ON_Normal = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
    localDW->is_ON = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
    localDW->is_c2_IntLamp_Ctrl = IntLamp_Ctrl_IN_Flicker;
    localDW->n = 0.0;
    localDW->is_Flicker = IntLamp_Ctrl_IN_Flicker_On;
    *rty_PWM_Out = rtu_TargetBright;
    localDW->OnTime = 0.0;
    if (localDW->OnTime < rtu_FlickerOnTime) {
      localDW->OnTime++;
    } else {
      localDW->OnTime = rtu_FlickerOnTime;
    }
  } else if (localDW->is_ON == IntLamp_Ctrl_IN_ON_Grad) {
    if (rtu_Ctrl_Mode == 0) {
      localDW->is_ON_Grad = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
      localDW->is_ON = IntLamp_Ctrl_IN_ON_Normal;
      localDW->is_ON_Normal = IntLamp_Ctrl_IN_Norm_Init;
      *rty_PWM_Out = rtu_TargetBright;
    } else {
      switch (localDW->is_ON_Grad) {
       case IntLamp_Ctrl_IN_Grad_Decreasing:
        if (*rty_PWM_Out <= rtu_TargetBright) {
          localDW->is_ON_Grad = IntLamp_Ctrl_IN_Grad_Init;
          *rty_PWM_Out = rtu_TargetBright;
        } else if (*rty_PWM_Out > rtu_TargetBright) {
          *rty_PWM_Out -= rtu_Ctrl_Slope;
        } else {
          *rty_PWM_Out = rtu_TargetBright;
        }
        break;

       case IntLamp_Ctrl_IN_Grad_Increasing:
        if (*rty_PWM_Out >= rtu_TargetBright) {
          localDW->is_ON_Grad = IntLamp_Ctrl_IN_Grad_Init;
          *rty_PWM_Out = rtu_TargetBright;
        } else if (*rty_PWM_Out < rtu_TargetBright) {
          *rty_PWM_Out += rtu_Ctrl_Slope;
        } else {
          *rty_PWM_Out = rtu_TargetBright;
        }
        break;

       case IntLamp_Ctrl_IN_Grad_Init:
        if (*rty_PWM_Out < rtu_TargetBright) {
          localDW->is_ON_Grad = IntLamp_Ctrl_IN_Grad_Increasing;
          if (*rty_PWM_Out < rtu_TargetBright) {
            *rty_PWM_Out += rtu_Ctrl_Slope;
          } else {
            *rty_PWM_Out = rtu_TargetBright;
          }
        } else {
          if (*rty_PWM_Out > rtu_TargetBright) {
            localDW->is_ON_Grad = IntLamp_Ctrl_IN_Grad_Decreasing;
            if (*rty_PWM_Out > rtu_TargetBright) {
              *rty_PWM_Out -= rtu_Ctrl_Slope;
            } else {
              *rty_PWM_Out = rtu_TargetBright;
            }
          }
        }
        break;

       default:
        if (*rty_PWM_Out < rtu_TargetBright) {
          localDW->is_ON_Grad = IntLamp_Ctrl_IN_Grad_Increasing;
          if (*rty_PWM_Out < rtu_TargetBright) {
            *rty_PWM_Out += rtu_Ctrl_Slope;
          } else {
            *rty_PWM_Out = rtu_TargetBright;
          }
        } else {
          if (*rty_PWM_Out > rtu_TargetBright) {
            localDW->is_ON_Grad = IntLamp_Ctrl_IN_Grad_Decreasing;
            if (*rty_PWM_Out > rtu_TargetBright) {
              *rty_PWM_Out -= rtu_Ctrl_Slope;
            } else {
              *rty_PWM_Out = rtu_TargetBright;
            }
          }
        }
        break;
      }
    }
  } else if (rtu_Ctrl_Mode == 1) {
    localDW->is_ON_Normal = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
    localDW->is_ON = IntLamp_Ctrl_IN_ON_Grad;
    localDW->is_ON_Grad = IntLamp_Ctrl_IN_wait;
  } else {
    switch (localDW->is_ON_Normal) {
     case IntLamp_Ctrl_IN_Norm_Decreasing:
      if (*rty_PWM_Out <= rtu_TargetBright) {
        localDW->is_ON_Normal = IntLamp_Ctrl_IN_Norm_Init;
        *rty_PWM_Out = rtu_TargetBright;
      }
      break;

     case IntLamp_Ctrl_IN_Norm_Increasing:
      if (*rty_PWM_Out >= rtu_TargetBright) {
        localDW->is_ON_Normal = IntLamp_Ctrl_IN_Norm_Init;
        *rty_PWM_Out = rtu_TargetBright;
      }
      break;

     default:
      if (*rty_PWM_Out < rtu_TargetBright) {
        localDW->is_ON_Normal = IntLamp_Ctrl_IN_Norm_Increasing;
        *rty_PWM_Out = rtu_TargetBright;
      } else {
        if (*rty_PWM_Out > rtu_TargetBright) {
          localDW->is_ON_Normal = IntLamp_Ctrl_IN_Norm_Decreasing;
          *rty_PWM_Out = rtu_TargetBright;
        }
      }
      break;
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S2>/Light_Control'
 *    '<S7>/Light_Control'
 */
static void IntLamp_Ctrl_Light_Control_Init(float64 *rty_TimerShutdown, float64 *
  rty_PWM_Out)
{
  *rty_TimerShutdown = 0.0;
  *rty_PWM_Out = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S2>/Light_Control'
 *    '<S7>/Light_Control'
 */
static void IntLamp_Ctrl_Light_Control(uint8 rtu_Ctrl_Cmd, uint8 rtu_Ctrl_Mode,
  float64 rtu_Ctrl_Slope, float64 rtu_TargetBright, uint8 rtu_FlickerCycle,
  float64 rtu_FlickerOnTime, float64 rtu_FlickerOffTime, float64 rtu_TimerOccur,
  float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_IntLamp_Ctrl_T *localDW)
{
  /* Chart: '<S2>/Light_Control' */
  if (localDW->is_active_c2_IntLamp_Ctrl == 0U) {
    localDW->is_active_c2_IntLamp_Ctrl = 1U;
    localDW->is_c2_IntLamp_Ctrl = IntLamp_Ctrl_IN_OFF;
    IntLamp_Ctrl_enter_internal_OFF(rtu_Ctrl_Mode, rtu_Ctrl_Slope,
      rty_TimerShutdown, rty_PWM_Out, localDW);
  } else {
    switch (localDW->is_c2_IntLamp_Ctrl) {
     case IntLamp_Ctrl_IN_Flicker:
      if ((rtu_Ctrl_Cmd == 1) || (rtu_TimerOccur == 1.0)) {
        localDW->is_Flicker = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
        *rty_TimerShutdown = 1.0;
        localDW->is_c2_IntLamp_Ctrl = IntLamp_Ctrl_IN_OFF;
        IntLamp_Ctrl_enter_internal_OFF(rtu_Ctrl_Mode, rtu_Ctrl_Slope,
          rty_TimerShutdown, rty_PWM_Out, localDW);
      } else if (rtu_Ctrl_Cmd == 2) {
        localDW->is_Flicker = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
        *rty_TimerShutdown = 1.0;
        localDW->is_c2_IntLamp_Ctrl = IntLamp_Ctrl_IN_ON;
        localDW->is_ON = IntLamp_Ctrl_IN_ON_Normal;
        localDW->is_ON_Normal = IntLamp_Ctrl_IN_Norm_Init;
        *rty_PWM_Out = rtu_TargetBright;
      } else if (localDW->is_Flicker == IntLamp_Ctrl_IN_Flicker_Off) {
        if ((localDW->OffTime >= rtu_FlickerOffTime) && (localDW->n <
             rtu_FlickerCycle)) {
          localDW->is_Flicker = IntLamp_Ctrl_IN_Flicker_On;
          *rty_PWM_Out = rtu_TargetBright;
          localDW->OnTime = 0.0;
          if (localDW->OnTime < rtu_FlickerOnTime) {
            localDW->OnTime++;
          } else {
            localDW->OnTime = rtu_FlickerOnTime;
          }
        } else if (localDW->OffTime < rtu_FlickerOffTime) {
          localDW->OffTime++;
          if (localDW->n == rtu_FlickerCycle) {
            *rty_TimerShutdown = 1.0;
          }
        } else {
          localDW->OffTime = rtu_FlickerOffTime;
        }
      } else if (localDW->OnTime >= rtu_FlickerOnTime) {
        localDW->n++;
        localDW->is_Flicker = IntLamp_Ctrl_IN_Flicker_Off;
        *rty_PWM_Out = 0.0;
        localDW->OffTime = 0.0;
        if (localDW->OffTime < rtu_FlickerOffTime) {
          localDW->OffTime++;
          if (localDW->n == rtu_FlickerCycle) {
            *rty_TimerShutdown = 1.0;
          }
        } else {
          localDW->OffTime = rtu_FlickerOffTime;
        }
      } else if (localDW->OnTime < rtu_FlickerOnTime) {
        localDW->OnTime++;
      } else {
        localDW->OnTime = rtu_FlickerOnTime;
      }
      break;

     case IntLamp_Ctrl_IN_OFF:
      if ((rtu_Ctrl_Cmd == 2) && (rtu_TimerOccur != 1.0)) {
        if (localDW->is_OFF == IntLamp_Ctrl_IN_OFF_Normal) {
          *rty_TimerShutdown = 0.0;
          localDW->is_OFF = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
        } else {
          localDW->is_OFF = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
        }

        localDW->is_c2_IntLamp_Ctrl = IntLamp_Ctrl_IN_ON;
        localDW->is_ON = IntLamp_Ctrl_IN_ON_Normal;
        localDW->is_ON_Normal = IntLamp_Ctrl_IN_Norm_Init;
        *rty_PWM_Out = rtu_TargetBright;
      } else if ((rtu_Ctrl_Cmd == 3) && (rtu_TimerOccur != 1.0)) {
        if (localDW->is_OFF == IntLamp_Ctrl_IN_OFF_Normal) {
          *rty_TimerShutdown = 0.0;
          localDW->is_OFF = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
        } else {
          localDW->is_OFF = IntLamp_Ct_IN_NO_ACTIVE_CHILD_n;
        }

        localDW->is_c2_IntLamp_Ctrl = IntLamp_Ctrl_IN_Flicker;
        localDW->n = 0.0;
        localDW->is_Flicker = IntLamp_Ctrl_IN_Flicker_On;
        *rty_PWM_Out = rtu_TargetBright;
        localDW->OnTime = 0.0;
        if (localDW->OnTime < rtu_FlickerOnTime) {
          localDW->OnTime++;
        } else {
          localDW->OnTime = rtu_FlickerOnTime;
        }
      } else {
        if (localDW->is_OFF == IntLamp_Ctrl_IN_OFF_Decreasing) {
          if ((*rty_PWM_Out == 0.0) || (*rty_PWM_Out <= rtu_Ctrl_Slope)) {
            localDW->is_OFF = IntLamp_Ctrl_IN_OFF_Normal;
            *rty_PWM_Out = 0.0;
            *rty_TimerShutdown = 1.0;
          } else if (*rty_PWM_Out >= rtu_Ctrl_Slope) {
            *rty_PWM_Out -= rtu_Ctrl_Slope;
          } else {
            *rty_PWM_Out = 0.0;
          }
        }
      }
      break;

     default:
      IntLamp_Ctrl_ON(rtu_Ctrl_Cmd, rtu_Ctrl_Mode, rtu_Ctrl_Slope,
                      rtu_TargetBright, rtu_FlickerOnTime, rtu_TimerOccur,
                      rty_TimerShutdown, rty_PWM_Out, localDW);
      break;
    }
  }

  /* End of Chart: '<S2>/Light_Control' */
}

/*
 * System initialize for atomic system:
 *    '<S2>/MsgTimeOut_Counter'
 *    '<S4>/MsgTimeOut_Counter'
 *    '<S5>/MsgTimeOut_Counter'
 *    '<S7>/MsgTimeOut_Counter'
 */
static void IntLamp_MsgTimeOut_Counter_Init(float64 *rty_n)
{
  *rty_n = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S2>/MsgTimeOut_Counter'
 *    '<S4>/MsgTimeOut_Counter'
 *    '<S5>/MsgTimeOut_Counter'
 *    '<S7>/MsgTimeOut_Counter'
 */
static void IntLamp_Ctrl_MsgTimeOut_Counter(boolean rtu_MsgTimeOut, float64
  rtu_gPRM_u8MsgOutLampShutdownT, float64 *rty_MsgTimeOut_En, float64 *rty_n)
{
  /* Chart: '<S2>/MsgTimeOut_Counter' */
  if (rtu_MsgTimeOut) {
    if (*rty_n < rtu_gPRM_u8MsgOutLampShutdownT * 6000.0) {
      *rty_MsgTimeOut_En = 0.0;
      (*rty_n)++;
    } else {
      *rty_MsgTimeOut_En = 1.0;
    }
  } else {
    *rty_MsgTimeOut_En = 0.0;
    *rty_n = 0.0;
  }

  /* End of Chart: '<S2>/MsgTimeOut_Counter' */
}

/*
 * Output and update for atomic system:
 *    '<S11>/Timer_Occur'
 *    '<S16>/Timer_Occur'
 *    '<S21>/Timer_Occur'
 *    '<S26>/Timer_Occur'
 */
static void IntLamp_Ctrl_Timer_Occur(float64 rtu_TimerEn, uint32
  rtu_TimerTrigtime, float64 *rty_TimerOccur, DW_Timer_Occur_IntLamp_Ctrl_T
  *localDW)
{
  /* Chart: '<S11>/Timer_Occur' */
  if (localDW->temporalCounter_i1 < 16777215U) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c14_IntLamp_Ctrl == 0U) {
    localDW->is_active_c14_IntLamp_Ctrl = 1U;
    localDW->is_c14_IntLamp_Ctrl = IntLamp_Ctrl_IN_TimerOFF;
    *rty_TimerOccur = 0.0;
  } else {
    switch (localDW->is_c14_IntLamp_Ctrl) {
     case IntLamp_Ctrl_IN_TimerOFF:
      *rty_TimerOccur = 0.0;
      if (rtu_TimerEn == 1.0) {
        localDW->is_c14_IntLamp_Ctrl = IntLamp_Ctrl_IN_Wait;
        localDW->temporalCounter_i1 = 0U;
      }
      break;

     case IntLamp_Ctrl_IN_TimerON:
      *rty_TimerOccur = 1.0;
      if (rtu_TimerEn == 2.0) {
        localDW->is_c14_IntLamp_Ctrl = IntLamp_Ctrl_IN_TimerOFF;
        *rty_TimerOccur = 0.0;
      }
      break;

     default:
      if (localDW->temporalCounter_i1 >= (rtu_TimerTrigtime >> 9)) {
        localDW->is_c14_IntLamp_Ctrl = IntLamp_Ctrl_IN_TimerON;
        *rty_TimerOccur = 1.0;
      } else {
        if (rtu_TimerEn == 2.0) {
          localDW->is_c14_IntLamp_Ctrl = IntLamp_Ctrl_IN_TimerOFF;
          *rty_TimerOccur = 0.0;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S11>/Timer_Occur' */
}

/* Function for Chart: '<S4>/Light_Control' */
static void IntLamp_Ct_enter_internal_OFF_h(uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_IntLamp_Ct_g_T *localDW)
{
  if ((rtu_Ctrl_Mode == 1) && (*rty_PWM_Out >= rtu_Ctrl_Slope)) {
    localDW->is_OFF = IntLamp_Ctr_IN_OFF_Decreasing_b;
    *rty_PWM_Out = 0.0;
  } else {
    localDW->is_OFF = IntLamp_Ctrl_IN_OFF_Normal_k;
    *rty_PWM_Out = 0.0;
    *rty_TimerShutdown = 1.0;
  }
}

/* Function for Chart: '<S4>/Light_Control' */
static void IntLamp_Ctrl_ON_l(uint8 rtu_Ctrl_Cmd, uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 rtu_TargetBright, float64 rtu_FlickerOnTime, float64
  rtu_TimerOccur, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_IntLamp_Ct_g_T *localDW)
{
  if ((rtu_Ctrl_Cmd == 1) || (rtu_TimerOccur == 1.0)) {
    localDW->is_ON_Grad = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
    localDW->is_ON_Normal = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
    localDW->is_ON = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
    localDW->is_c8_IntLamp_Ctrl = IntLamp_Ctrl_IN_OFF_c;
    IntLamp_Ct_enter_internal_OFF_h(rtu_Ctrl_Mode, rtu_Ctrl_Slope,
      rty_TimerShutdown, rty_PWM_Out, localDW);
  } else if (rtu_Ctrl_Cmd == 3) {
    localDW->is_ON_Grad = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
    localDW->is_ON_Normal = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
    localDW->is_ON = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
    localDW->is_c8_IntLamp_Ctrl = IntLamp_Ctrl_IN_Flicker_f;
    localDW->n = 0.0;
    localDW->is_Flicker = IntLamp_Ctrl_IN_Flicker_On_p;
    *rty_PWM_Out = rtu_TargetBright;
    localDW->OnTime = 0.0;
    if (localDW->OnTime < rtu_FlickerOnTime) {
      localDW->OnTime++;
    } else {
      localDW->OnTime = rtu_FlickerOnTime;
    }
  } else if (localDW->is_ON == IntLamp_Ctrl_IN_ON_Grad_p) {
    if (rtu_Ctrl_Mode == 0) {
      localDW->is_ON_Grad = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
      localDW->is_ON = IntLamp_Ctrl_IN_ON_Normal_h;
      localDW->is_ON_Normal = IntLamp_Ctrl_IN_Norm_Init_m;
      *rty_PWM_Out = rtu_TargetBright;
    } else {
      switch (localDW->is_ON_Grad) {
       case IntLamp_Ct_IN_Grad_Decreasing_a:
        if (*rty_PWM_Out <= rtu_TargetBright) {
          localDW->is_ON_Grad = IntLamp_Ctrl_IN_Grad_Init_d;
          *rty_PWM_Out = rtu_TargetBright;
        }
        break;

       case IntLamp_Ct_IN_Grad_Increasing_c:
        if (*rty_PWM_Out >= rtu_TargetBright) {
          localDW->is_ON_Grad = IntLamp_Ctrl_IN_Grad_Init_d;
          *rty_PWM_Out = rtu_TargetBright;
        } else {
          *rty_PWM_Out = rtu_TargetBright;
        }
        break;

       case IntLamp_Ctrl_IN_Grad_Init_d:
        if (*rty_PWM_Out < rtu_TargetBright) {
          localDW->is_ON_Grad = IntLamp_Ct_IN_Grad_Increasing_c;
          *rty_PWM_Out = rtu_TargetBright;
        } else {
          if (*rty_PWM_Out > rtu_TargetBright) {
            localDW->is_ON_Grad = IntLamp_Ct_IN_Grad_Decreasing_a;
            *rty_PWM_Out = rtu_TargetBright;
          }
        }
        break;

       default:
        if (*rty_PWM_Out < rtu_TargetBright) {
          localDW->is_ON_Grad = IntLamp_Ct_IN_Grad_Increasing_c;
          *rty_PWM_Out = rtu_TargetBright;
        } else {
          if (*rty_PWM_Out > rtu_TargetBright) {
            localDW->is_ON_Grad = IntLamp_Ct_IN_Grad_Decreasing_a;
            *rty_PWM_Out = rtu_TargetBright;
          }
        }
        break;
      }
    }
  } else if (rtu_Ctrl_Mode == 1) {
    localDW->is_ON_Normal = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
    localDW->is_ON = IntLamp_Ctrl_IN_ON_Grad_p;
    localDW->is_ON_Grad = IntLamp_Ctrl_IN_wait_a;
  } else {
    switch (localDW->is_ON_Normal) {
     case IntLamp_Ct_IN_Norm_Decreasing_k:
      if (*rty_PWM_Out <= rtu_TargetBright) {
        localDW->is_ON_Normal = IntLamp_Ctrl_IN_Norm_Init_m;
        *rty_PWM_Out = rtu_TargetBright;
      }
      break;

     case IntLamp_Ct_IN_Norm_Increasing_m:
      if (*rty_PWM_Out >= rtu_TargetBright) {
        localDW->is_ON_Normal = IntLamp_Ctrl_IN_Norm_Init_m;
        *rty_PWM_Out = rtu_TargetBright;
      }
      break;

     default:
      if (*rty_PWM_Out < rtu_TargetBright) {
        localDW->is_ON_Normal = IntLamp_Ct_IN_Norm_Increasing_m;
        *rty_PWM_Out = rtu_TargetBright;
      } else {
        if (*rty_PWM_Out > rtu_TargetBright) {
          localDW->is_ON_Normal = IntLamp_Ct_IN_Norm_Decreasing_k;
          *rty_PWM_Out = rtu_TargetBright;
        }
      }
      break;
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S4>/Light_Control'
 *    '<S5>/Light_Control'
 */
static void IntLamp_Ct_Light_Control_a_Init(float64 *rty_TimerShutdown, float64 *
  rty_PWM_Out)
{
  *rty_TimerShutdown = 0.0;
  *rty_PWM_Out = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S4>/Light_Control'
 *    '<S5>/Light_Control'
 */
static void IntLamp_Ctrl_Light_Control_l(uint8 rtu_Ctrl_Cmd, uint8 rtu_Ctrl_Mode,
  float64 rtu_Ctrl_Slope, float64 rtu_TargetBright, uint8 rtu_FlickerCycle,
  float64 rtu_FlickerOnTime, float64 rtu_FlickerOffTime, float64 rtu_TimerOccur,
  float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_IntLamp_Ct_g_T *localDW)
{
  /* Chart: '<S4>/Light_Control' */
  if (localDW->is_active_c8_IntLamp_Ctrl == 0U) {
    localDW->is_active_c8_IntLamp_Ctrl = 1U;
    localDW->is_c8_IntLamp_Ctrl = IntLamp_Ctrl_IN_OFF_c;
    IntLamp_Ct_enter_internal_OFF_h(rtu_Ctrl_Mode, rtu_Ctrl_Slope,
      rty_TimerShutdown, rty_PWM_Out, localDW);
  } else {
    switch (localDW->is_c8_IntLamp_Ctrl) {
     case IntLamp_Ctrl_IN_Flicker_f:
      if ((rtu_Ctrl_Cmd == 1) || (rtu_TimerOccur == 1.0)) {
        localDW->is_Flicker = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
        *rty_TimerShutdown = 1.0;
        localDW->is_c8_IntLamp_Ctrl = IntLamp_Ctrl_IN_OFF_c;
        IntLamp_Ct_enter_internal_OFF_h(rtu_Ctrl_Mode, rtu_Ctrl_Slope,
          rty_TimerShutdown, rty_PWM_Out, localDW);
      } else if (rtu_Ctrl_Cmd == 2) {
        localDW->is_Flicker = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
        *rty_TimerShutdown = 1.0;
        localDW->is_c8_IntLamp_Ctrl = IntLamp_Ctrl_IN_ON_e;
        localDW->is_ON = IntLamp_Ctrl_IN_ON_Normal_h;
        localDW->is_ON_Normal = IntLamp_Ctrl_IN_Norm_Init_m;
        *rty_PWM_Out = rtu_TargetBright;
      } else if (localDW->is_Flicker == IntLamp_Ctrl_IN_Flicker_Off_d) {
        if ((localDW->OffTime >= rtu_FlickerOffTime) && (localDW->n <
             rtu_FlickerCycle)) {
          localDW->is_Flicker = IntLamp_Ctrl_IN_Flicker_On_p;
          *rty_PWM_Out = rtu_TargetBright;
          localDW->OnTime = 0.0;
          if (localDW->OnTime < rtu_FlickerOnTime) {
            localDW->OnTime++;
          } else {
            localDW->OnTime = rtu_FlickerOnTime;
          }
        } else if (localDW->OffTime < rtu_FlickerOffTime) {
          localDW->OffTime++;
          if (localDW->n == rtu_FlickerCycle) {
            *rty_TimerShutdown = 1.0;
          }
        } else {
          localDW->OffTime = rtu_FlickerOffTime;
        }
      } else if (localDW->OnTime >= rtu_FlickerOnTime) {
        localDW->n++;
        localDW->is_Flicker = IntLamp_Ctrl_IN_Flicker_Off_d;
        *rty_PWM_Out = 0.0;
        localDW->OffTime = 0.0;
        if (localDW->OffTime < rtu_FlickerOffTime) {
          localDW->OffTime++;
          if (localDW->n == rtu_FlickerCycle) {
            *rty_TimerShutdown = 1.0;
          }
        } else {
          localDW->OffTime = rtu_FlickerOffTime;
        }
      } else if (localDW->OnTime < rtu_FlickerOnTime) {
        localDW->OnTime++;
      } else {
        localDW->OnTime = rtu_FlickerOnTime;
      }
      break;

     case IntLamp_Ctrl_IN_OFF_c:
      if ((rtu_Ctrl_Cmd == 2) && (rtu_TimerOccur != 1.0)) {
        if (localDW->is_OFF == IntLamp_Ctrl_IN_OFF_Normal_k) {
          *rty_TimerShutdown = 0.0;
          localDW->is_OFF = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
        } else {
          localDW->is_OFF = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
        }

        localDW->is_c8_IntLamp_Ctrl = IntLamp_Ctrl_IN_ON_e;
        localDW->is_ON = IntLamp_Ctrl_IN_ON_Normal_h;
        localDW->is_ON_Normal = IntLamp_Ctrl_IN_Norm_Init_m;
        *rty_PWM_Out = rtu_TargetBright;
      } else if ((rtu_Ctrl_Cmd == 3) && (rtu_TimerOccur != 1.0)) {
        if (localDW->is_OFF == IntLamp_Ctrl_IN_OFF_Normal_k) {
          *rty_TimerShutdown = 0.0;
          localDW->is_OFF = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
        } else {
          localDW->is_OFF = IntLamp_Ct_IN_NO_ACTIVE_CHILD_b;
        }

        localDW->is_c8_IntLamp_Ctrl = IntLamp_Ctrl_IN_Flicker_f;
        localDW->n = 0.0;
        localDW->is_Flicker = IntLamp_Ctrl_IN_Flicker_On_p;
        *rty_PWM_Out = rtu_TargetBright;
        localDW->OnTime = 0.0;
        if (localDW->OnTime < rtu_FlickerOnTime) {
          localDW->OnTime++;
        } else {
          localDW->OnTime = rtu_FlickerOnTime;
        }
      } else {
        if ((localDW->is_OFF == IntLamp_Ctr_IN_OFF_Decreasing_b) &&
            ((*rty_PWM_Out == 0.0) || (*rty_PWM_Out <= rtu_Ctrl_Slope))) {
          localDW->is_OFF = IntLamp_Ctrl_IN_OFF_Normal_k;
          *rty_PWM_Out = 0.0;
          *rty_TimerShutdown = 1.0;
        }
      }
      break;

     default:
      IntLamp_Ctrl_ON_l(rtu_Ctrl_Cmd, rtu_Ctrl_Mode, rtu_Ctrl_Slope,
                        rtu_TargetBright, rtu_FlickerOnTime, rtu_TimerOccur,
                        rty_TimerShutdown, rty_PWM_Out, localDW);
      break;
    }
  }

  /* End of Chart: '<S4>/Light_Control' */
}

/* Model step function */
void IntLamp_Ctrl_Runnable_10ms(void)
{
  /* local block i/o variables */
  boolean rtb_TmpSignalConversionAtgASI_b;
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  uint8 tmpRead_3;
  uint8 tmpRead_4;
  uint8 tmpRead_5;
  uint16 tmpRead_6;
  uint8 tmpRead_7;
  boolean tmpRead_8;
  boolean tmpRead_9;
  uint8 tmpRead_a;
  uint8 tmpRead_b;
  uint8 tmpRead_c;
  uint8 tmpRead_d;
  uint8 tmpRead_e;
  uint8 tmpRead_f;
  uint8 tmpRead_g;
  uint16 tmpRead_h;
  uint8 tmpRead_i;
  uint8 tmpRead_j;
  boolean tmpRead_k;
  boolean tmpRead_l;
  uint8 tmpRead_m;
  uint8 tmpRead_n;
  uint8 tmpRead_o;
  uint8 tmpRead_p;
  uint8 tmpRead_q;
  uint8 tmpRead_r;
  uint8 tmpRead_s;
  uint16 tmpRead_t;
  uint8 tmpRead_u;
  uint8 tmpRead_v;
  boolean tmpRead_w;
  boolean tmpRead_x;
  uint8 tmpRead_y;
  uint8 tmpRead_z;
  uint8 tmpRead_10;
  uint8 tmpRead_11;
  uint8 tmpRead_12;
  uint8 tmpRead_13;
  uint8 tmpRead_14;
  uint16 tmpRead_15;
  uint8 tmpRead_16;
  uint8 rtb_Divide1;
  boolean rtb_RelationalOperator1;
  uint8 rtb_Divide1_e;
  boolean rtb_Switch1_h;
  boolean rtb_Switch1_l;
  boolean rtb_Switch_jr;
  float64 rtb_MsgTimeOut_En_j;
  sint32 tmp;

  /* Inport: '<Root>/gDiag_bReBkgLightPowerOpenCirErrorFlag' */
  Rte_Read_gDiag_bReBkgLightPowerOpenCirErrorFlag_Val(&rtb_Switch1_h);

  /* Inport: '<Root>/gDiag_bReBkgLightPowerShortCirErrorFlag' */
  Rte_Read_gDiag_bReBkgLightPowerShortCirErrorFlag_Val(&rtb_Switch1_l);

  /* Inport: '<Root>/gCAN_u8IL_TimerGradientTimeBKGLight' */
  Rte_Read_gCAN_u8IL_TimerGradientTimeBKGLight_Val(&rtb_Divide1);

  /* Inport: '<Root>/gCAN_u8IL_TimerActionModeBKGLight' */
  Rte_Read_gCAN_u8IL_TimerActionModeBKGLight_Val(&tmpRead_16);

  /* Inport: '<Root>/gCAN_u16IL_TimerTriTimeBKGLight' */
  Rte_Read_gCAN_u16IL_TimerTriTimeBKGLight_Val(&tmpRead_15);

  /* Inport: '<Root>/gCAN_u8IL_TimerActionBKGLight' */
  Rte_Read_gCAN_u8IL_TimerActionBKGLight_Val(&tmpRead_14);

  /* Inport: '<Root>/gCAN_u8IL_FlickerOffTBKGLight' */
  Rte_Read_gCAN_u8IL_FlickerOffTBKGLight_Val(&tmpRead_13);

  /* Inport: '<Root>/gCAN_u8IL_FlickerOnTBKGLight' */
  Rte_Read_gCAN_u8IL_FlickerOnTBKGLight_Val(&tmpRead_12);

  /* Inport: '<Root>/gCAN_u8IL_SlopeParaBKGLight' */
  Rte_Read_gCAN_u8IL_SlopeParaBKGLight_Val(&tmpRead_11);

  /* Inport: '<Root>/gCAN_u8IL_TargetBriBKGLight' */
  Rte_Read_gCAN_u8IL_TargetBriBKGLight_Val(&tmpRead_10);

  /* Inport: '<Root>/gCAN_u8IL_FlickerCntBKGLight' */
  Rte_Read_gCAN_u8IL_FlickerCntBKGLight_Val(&tmpRead_z);

  /* Inport: '<Root>/gCAN_u8IL_CtrModeBKGLight' */
  Rte_Read_gCAN_u8IL_CtrModeBKGLight_Val(&tmpRead_y);

  /* Inport: '<Root>/gDiag_bRRCourtesyLightOpenCirErrorFlag' */
  Rte_Read_gDiag_bRRCourtesyLightOpenCirErrorFlag_Val(&tmpRead_x);

  /* Inport: '<Root>/gDiag_bRRCourtesyLightShortCirErrorFlag' */
  Rte_Read_gDiag_bRRCourtesyLightShortCirErrorFlag_Val(&tmpRead_w);

  /* Inport: '<Root>/gCAN_u8IL_TimerGradientTimeCourtesyLightRR' */
  Rte_Read_gCAN_u8IL_TimerGradientTimeCourtesyLightRR_Val(&tmpRead_v);

  /* Inport: '<Root>/gCAN_u8IL_TimerActionModeCourtesyLightRR' */
  Rte_Read_gCAN_u8IL_TimerActionModeCourtesyLightRR_Val(&tmpRead_u);

  /* Inport: '<Root>/gCAN_u16IL_TimerTriTimeCourtesyLightRR' */
  Rte_Read_gCAN_u16IL_TimerTriTimeCourtesyLightRR_Val(&tmpRead_t);

  /* Inport: '<Root>/gCAN_u8IL_TimerActionCourtesyLightRR' */
  Rte_Read_gCAN_u8IL_TimerActionCourtesyLightRR_Val(&tmpRead_s);

  /* Inport: '<Root>/gCAN_u8IL_FlickerOffTCourtesyLightRR' */
  Rte_Read_gCAN_u8IL_FlickerOffTCourtesyLightRR_Val(&tmpRead_r);

  /* Inport: '<Root>/gCAN_u8IL_FlickerOnTCourtesyLightRR' */
  Rte_Read_gCAN_u8IL_FlickerOnTCourtesyLightRR_Val(&tmpRead_q);

  /* Inport: '<Root>/gCAN_u8IL_SlopeParaCourtesyLightRR' */
  Rte_Read_gCAN_u8IL_SlopeParaCourtesyLightRR_Val(&tmpRead_p);

  /* Inport: '<Root>/gCAN_u8IL_TargetBriCourtesyLightRR' */
  Rte_Read_gCAN_u8IL_TargetBriCourtesyLightRR_Val(&tmpRead_o);

  /* Inport: '<Root>/gCAN_u8IL_FlickerCntCourtesyLightRR' */
  Rte_Read_gCAN_u8IL_FlickerCntCourtesyLightRR_Val(&tmpRead_n);

  /* Inport: '<Root>/gCAN_u8IL_CtrModeCourtesyLightRR' */
  Rte_Read_gCAN_u8IL_CtrModeCourtesyLightRR_Val(&tmpRead_m);

  /* Inport: '<Root>/gDiag_bRLCourtesyLightOpenCirErrorFlag' */
  Rte_Read_gDiag_bRLCourtesyLightOpenCirErrorFlag_Val(&tmpRead_l);

  /* Inport: '<Root>/gDiag_bRLCourtesyLightShortCirErrorFlag' */
  Rte_Read_gDiag_bRLCourtesyLightShortCirErrorFlag_Val(&tmpRead_k);

  /* Inport: '<Root>/gCAN_u8IL_TimerGradientTimeCourtesyLightRL' */
  Rte_Read_gCAN_u8IL_TimerGradientTimeCourtesyLightRL_Val(&tmpRead_j);

  /* Inport: '<Root>/gCAN_u8IL_TimerActionModeCourtesyLightRL' */
  Rte_Read_gCAN_u8IL_TimerActionModeCourtesyLightRL_Val(&tmpRead_i);

  /* Inport: '<Root>/gCAN_u16IL_TimerTriTimeCourtesyLightRL' */
  Rte_Read_gCAN_u16IL_TimerTriTimeCourtesyLightRL_Val(&tmpRead_h);

  /* Inport: '<Root>/gCAN_u8IL_TimerActionCourtesyLightRL' */
  Rte_Read_gCAN_u8IL_TimerActionCourtesyLightRL_Val(&tmpRead_g);

  /* Inport: '<Root>/gCAN_u8IL_FlickerOffTCourtesyLightRL' */
  Rte_Read_gCAN_u8IL_FlickerOffTCourtesyLightRL_Val(&tmpRead_f);

  /* Inport: '<Root>/gCAN_u8IL_FlickerOnTCourtesyLightRL' */
  Rte_Read_gCAN_u8IL_FlickerOnTCourtesyLightRL_Val(&tmpRead_e);

  /* Inport: '<Root>/gCAN_u8IL_SlopeParaCourtesyLightRL' */
  Rte_Read_gCAN_u8IL_SlopeParaCourtesyLightRL_Val(&tmpRead_d);

  /* Inport: '<Root>/gCAN_u8IL_TargetBriCourtesyLightRL' */
  Rte_Read_gCAN_u8IL_TargetBriCourtesyLightRL_Val(&tmpRead_c);

  /* Inport: '<Root>/gCAN_u8IL_FlickerCntCourtesyLightRL' */
  Rte_Read_gCAN_u8IL_FlickerCntCourtesyLightRL_Val(&tmpRead_b);

  /* Inport: '<Root>/gCAN_u8IL_CtrModeCourtesyLightRL' */
  Rte_Read_gCAN_u8IL_CtrModeCourtesyLightRL_Val(&tmpRead_a);

  /* Inport: '<Root>/gDiag_bTrunkLightOpenCirErrorFlag' */
  Rte_Read_gDiag_bTrunkLightOpenCirErrorFlag_Val(&tmpRead_9);

  /* Inport: '<Root>/gDiag_bTrunkLightShortCirErrorFlag' */
  Rte_Read_gDiag_bTrunkLightShortCirErrorFlag_Val(&tmpRead_8);

  /* Inport: '<Root>/gCAN_u8IL_TimerGradientTimeTrunkLight' */
  Rte_Read_gCAN_u8IL_TimerGradientTimeTrunkLight_Val(&rtb_Divide1_e);

  /* Inport: '<Root>/gCAN_u8IL_TimerActionModeTrunkLight' */
  Rte_Read_gCAN_u8IL_TimerActionModeTrunkLight_Val(&tmpRead_7);

  /* Inport: '<Root>/gCAN_u16IL_TimerTriTimeTrunkLight' */
  Rte_Read_gCAN_u16IL_TimerTriTimeTrunkLight_Val(&tmpRead_6);

  /* Inport: '<Root>/gCAN_u8IL_TimerActionTrunkLight' */
  Rte_Read_gCAN_u8IL_TimerActionTrunkLight_Val(&tmpRead_5);

  /* Inport: '<Root>/gCAN_u8IL_FlickerOffTTrunkLight' */
  Rte_Read_gCAN_u8IL_FlickerOffTTrunkLight_Val(&tmpRead_4);

  /* Inport: '<Root>/gCAN_u8IL_FlickerOnTTrunkLight' */
  Rte_Read_gCAN_u8IL_FlickerOnTTrunkLight_Val(&tmpRead_3);

  /* Inport: '<Root>/gCAN_u8IL_SlopeParaTrunkLight' */
  Rte_Read_gCAN_u8IL_SlopeParaTrunkLight_Val(&tmpRead_2);

  /* Inport: '<Root>/gCAN_u8IL_TargetBriTrunkLight' */
  Rte_Read_gCAN_u8IL_TargetBriTrunkLight_Val(&tmpRead_1);

  /* Inport: '<Root>/gCAN_u8IL_FlickerCntTrunkLight' */
  Rte_Read_gCAN_u8IL_FlickerCntTrunkLight_Val(&tmpRead_0);

  /* Inport: '<Root>/gCAN_u8IL_CtrModeTrunkLight' */
  Rte_Read_gCAN_u8IL_CtrModeTrunkLight_Val(&tmpRead);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_CtrCmdBKGLightOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_CtrCmdBKGLight'
   */
  Rte_Read_gCAN_u8IL_CtrCmdBKGLight_Val
    (&IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8IL_);

  /* Logic: '<S2>/Logical Operator4' incorporates:
   *  Delay: '<S2>/Delay2'
   *  RelationalOperator: '<S2>/Relational Operator4'
   *  RelationalOperator: '<S2>/Relational Operator5'
   */
  IntLamp_Ctrl_B.LogicalOperator4 =
    ((IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8IL_ >= 1) &&
     (IntLamp_Ctrl_DW.Delay2_DSTATE == 0));

  /* Gain: '<S3>/Gain15' */
  IntLamp_Ctrl_B.Gain15 = (uint16)(tmpRead_10 << 7);

  /* Gain: '<S3>/Gain16' */
  IntLamp_Ctrl_B.Gain16 = (uint16)(200U * tmpRead_11);

  /* Gain: '<S3>/Gain17' */
  IntLamp_Ctrl_B.Gain17 = (uint16)(200U * tmpRead_12);

  /* Gain: '<S3>/Gain18' */
  IntLamp_Ctrl_B.Gain18 = (uint16)(200U * tmpRead_13);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_TimerEnBKGLightOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerEnBKGLight'
   */
  Rte_Read_gCAN_u8IL_TimerEnBKGLight_Val
    (&IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_p);

  /* Gain: '<S3>/Gain19' */
  IntLamp_Ctrl_B.Gain19 = (uint16)(200U * rtb_Divide1);

  /* Chart: '<S2>/Chart' incorporates:
   *  Delay: '<S2>/Delay3'
   */
  IntLamp_Ctrl_Chart(IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8IL_, tmpRead_y,
                     tmpRead_z, IntLamp_Ctrl_B.Gain15, IntLamp_Ctrl_B.Gain16,
                     IntLamp_Ctrl_B.Gain17, IntLamp_Ctrl_B.Gain18,
                     IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_p, tmpRead_14,
                     tmpRead_15, tmpRead_16, IntLamp_Ctrl_B.Gain19,
                     IntLamp_Ctrl_B.LogicalOperator4,
                     IntLamp_Ctrl_DW.Delay3_DSTATE, &IntLamp_Ctrl_B.CtrCmd_Inp_o,
                     &IntLamp_Ctrl_B.CtrMode_Inp_k,
                     &IntLamp_Ctrl_B.FlickerCycle_Inp_f,
                     &IntLamp_Ctrl_B.TargetBrightness_Inp_l,
                     &IntLamp_Ctrl_B.SlopePara_Inp_ej,
                     &IntLamp_Ctrl_B.FlickerOnT_Inp_p,
                     &IntLamp_Ctrl_B.FlickerOffT_Inp_d,
                     &IntLamp_Ctrl_B.TimerEnable_Inp_a,
                     &IntLamp_Ctrl_B.TimerAction_Inp_p,
                     &IntLamp_Ctrl_B.TimerTrigtime_Inp_k,
                     &IntLamp_Ctrl_B.TimerMode_Inp_j,
                     &IntLamp_Ctrl_B.TimerGrad_Inp_k, &IntLamp_Ctrl_DW.sf_Chart);

  /* DataStoreWrite: '<S11>/Data Store Write' */
  IntLamp_Ctrl_DW.TimerAction = IntLamp_Ctrl_B.TimerAction_Inp_p;

  /* Switch: '<S11>/Switch1' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Delay: '<S2>/Delay'
   */
  if (IntLamp_Ctrl_DW.Delay_DSTATE) {
    tmp = 2;
  } else {
    tmp = IntLamp_Ctrl_B.TimerEnable_Inp_a;
  }

  /* End of Switch: '<S11>/Switch1' */

  /* Chart: '<S11>/Timer_Occur' incorporates:
   *  Gain: '<S2>/Gain'
   */
  IntLamp_Ctrl_Timer_Occur((float64)tmp, 51200U *
    IntLamp_Ctrl_B.TimerTrigtime_Inp_k, &IntLamp_Ctrl_B.TimerOccur_d,
    &IntLamp_Ctrl_DW.sf_Timer_Occur);

  /* Switch: '<S11>/Switch' incorporates:
   *  Logic: '<S11>/Logical Operator'
   *  RelationalOperator: '<S11>/Relational Operator'
   */
  if ((IntLamp_Ctrl_B.TimerMode_Inp_j == 1) && (IntLamp_Ctrl_B.TimerOccur_d !=
       0.0)) {
    tmpRead_15 = IntLamp_Ctrl_B.TimerGrad_Inp_k;
  } else {
    tmpRead_15 = IntLamp_Ctrl_B.SlopePara_Inp_ej;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Product: '<S2>/Divide' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S2>/Constant7'
   *  Sum: '<S2>/Add'
   */
  IntLamp_Ctrl_B.Divide = 10000.0 / ((float64)tmpRead_15 * 0.5 +
    2.2204460492503131E-16);

  /* Switch: '<S11>/Switch2' */
  if (IntLamp_Ctrl_B.TimerOccur_d > 0.0) {
    IntLamp_Ctrl_B.Switch2 = IntLamp_Ctrl_B.TimerMode_Inp_j;
  } else {
    IntLamp_Ctrl_B.Switch2 = IntLamp_Ctrl_B.CtrMode_Inp_k;
  }

  /* End of Switch: '<S11>/Switch2' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bIL_CtrCmdTrunkLight_TimeOutOutport1' incorporates:
   *  Inport: '<Root>/gASI_bIL_CtrCmdTrunkLight_TimeOut'
   */
  Rte_Read_gASI_bIL_CtrCmdTrunkLight_TimeOut_Val
    (&rtb_TmpSignalConversionAtgASI_b);

  /* Chart: '<S2>/MsgTimeOut_Counter' incorporates:
   *  Constant: '<S2>/Constant9'
   */
  IntLamp_Ctrl_MsgTimeOut_Counter(rtb_TmpSignalConversionAtgASI_b, 15.0,
    &rtb_MsgTimeOut_En_j, &IntLamp_Ctrl_B.n_c);

  /* Switch: '<S2>/Switch2' incorporates:
   *  Constant: '<S2>/Constant12'
   */
  if (rtb_MsgTimeOut_En_j > 0.0) {
    IntLamp_Ctrl_B.Switch2_d = 1U;
  } else {
    IntLamp_Ctrl_B.Switch2_d = IntLamp_Ctrl_B.CtrCmd_Inp_o;
  }

  /* End of Switch: '<S2>/Switch2' */

  /* Product: '<S2>/Product' incorporates:
   *  Constant: '<S2>/Constant1'
   */
  IntLamp_Ctrl_B.Product = (float64)IntLamp_Ctrl_B.TargetBrightness_Inp_l *
    0.00390625 * 10.0;

  /* Product: '<S2>/Divide2' incorporates:
   *  Constant: '<S2>/Constant3'
   */
  IntLamp_Ctrl_B.Divide2 = (float64)IntLamp_Ctrl_B.FlickerOnT_Inp_p * 0.5 / 10.0;

  /* Product: '<S2>/Divide3' incorporates:
   *  Constant: '<S2>/Constant4'
   */
  IntLamp_Ctrl_B.Divide3 = (float64)IntLamp_Ctrl_B.FlickerOffT_Inp_d * 0.5 /
    10.0;

  /* Chart: '<S2>/Light_Control' incorporates:
   *  Delay: '<S2>/Delay3'
   */
  IntLamp_Ctrl_Light_Control(IntLamp_Ctrl_B.Switch2_d, IntLamp_Ctrl_B.Switch2,
    IntLamp_Ctrl_B.Divide, IntLamp_Ctrl_B.Product,
    IntLamp_Ctrl_B.FlickerCycle_Inp_f, IntLamp_Ctrl_B.Divide2,
    IntLamp_Ctrl_B.Divide3, IntLamp_Ctrl_DW.Delay3_DSTATE,
    &IntLamp_Ctrl_B.TimerShutdown_hs, &IntLamp_Ctrl_B.PWM_Out_m,
    &IntLamp_Ctrl_DW.sf_Light_Control);

  /* DataTypeConversion: '<S2>/Data Type Conversion1' incorporates:
   *  Delay: '<S2>/Delay'
   */
  IntLamp_Ctrl_DW.Delay_DSTATE = (IntLamp_Ctrl_B.TimerShutdown_hs != 0.0);

  /* Product: '<S2>/Divide1' incorporates:
   *  Constant: '<S2>/Constant2'
   */
  rtb_MsgTimeOut_En_j = fmod(floor(IntLamp_Ctrl_B.PWM_Out_m / 10.0), 256.0);
  rtb_Divide1 = (uint8)(rtb_MsgTimeOut_En_j < 0.0 ? (sint32)(uint8)-(sint8)
                        (uint8)-rtb_MsgTimeOut_En_j : (sint32)(uint8)
                        rtb_MsgTimeOut_En_j);

  /* RelationalOperator: '<S2>/Relational Operator1' */
  rtb_RelationalOperator1 = (rtb_Divide1 > 0);

  /* Outport: '<Root>/gINL_bIL_BkgLightOutputFaultSt_T' incorporates:
   *  Logic: '<S2>/Logical Operator'
   *  Logic: '<S2>/Logical Operator1'
   */
  (void) Rte_Write_gINL_bIL_BkgLightOutputFaultSt_T_Val((rtb_Switch1_l ||
    rtb_Switch1_h) && rtb_RelationalOperator1);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_CtrCmdCourtesyLightRLOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_CtrCmdCourtesyLightRL'
   */
  Rte_Read_gCAN_u8IL_CtrCmdCourtesyLightRL_Val
    (&IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_c);

  /* Gain: '<S3>/Gain5' */
  IntLamp_Ctrl_B.Gain5 = (uint16)(tmpRead_c << 7);

  /* Gain: '<S3>/Gain6' */
  IntLamp_Ctrl_B.Gain6 = (uint16)(200U * tmpRead_d);

  /* Gain: '<S3>/Gain7' */
  IntLamp_Ctrl_B.Gain7 = (uint16)(200U * tmpRead_e);

  /* Gain: '<S3>/Gain8' */
  IntLamp_Ctrl_B.Gain8 = (uint16)(200U * tmpRead_f);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_TimerEnCourtesyLightRLOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerEnCourtesyLightRL'
   */
  Rte_Read_gCAN_u8IL_TimerEnCourtesyLightRL_Val
    (&IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_o);

  /* Gain: '<S3>/Gain9' */
  IntLamp_Ctrl_B.Gain9 = (uint16)(200U * tmpRead_j);

  /* Logic: '<S4>/Logical Operator4' incorporates:
   *  Delay: '<S4>/Delay2'
   *  RelationalOperator: '<S4>/Relational Operator4'
   *  RelationalOperator: '<S4>/Relational Operator5'
   */
  IntLamp_Ctrl_B.LogicalOperator4_a =
    ((IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_c >= 1) &&
     (IntLamp_Ctrl_DW.Delay2_DSTATE_h == 0));

  /* Chart: '<S4>/Chart' incorporates:
   *  Delay: '<S4>/Delay3'
   */
  IntLamp_Ctrl_Chart(IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_c, tmpRead_a,
                     tmpRead_b, IntLamp_Ctrl_B.Gain5, IntLamp_Ctrl_B.Gain6,
                     IntLamp_Ctrl_B.Gain7, IntLamp_Ctrl_B.Gain8,
                     IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_o, tmpRead_g,
                     tmpRead_h, tmpRead_i, IntLamp_Ctrl_B.Gain9,
                     IntLamp_Ctrl_B.LogicalOperator4_a,
                     IntLamp_Ctrl_DW.Delay3_DSTATE_o,
                     &IntLamp_Ctrl_B.CtrCmd_Inp_l, &IntLamp_Ctrl_B.CtrMode_Inp_i,
                     &IntLamp_Ctrl_B.FlickerCycle_Inp_k,
                     &IntLamp_Ctrl_B.TargetBrightness_Inp_b,
                     &IntLamp_Ctrl_B.SlopePara_Inp_i,
                     &IntLamp_Ctrl_B.FlickerOnT_Inp_j,
                     &IntLamp_Ctrl_B.FlickerOffT_Inp_p,
                     &IntLamp_Ctrl_B.TimerEnable_Inp_g,
                     &IntLamp_Ctrl_B.TimerAction_Inp_n,
                     &IntLamp_Ctrl_B.TimerTrigtime_Inp_hz,
                     &IntLamp_Ctrl_B.TimerMode_Inp_o,
                     &IntLamp_Ctrl_B.TimerGrad_Inp_cu,
                     &IntLamp_Ctrl_DW.sf_Chart_h);

  /* Switch: '<S16>/Switch1' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Delay: '<S4>/Delay'
   */
  if (IntLamp_Ctrl_DW.Delay_DSTATE_f) {
    tmp = 2;
  } else {
    tmp = IntLamp_Ctrl_B.TimerEnable_Inp_g;
  }

  /* End of Switch: '<S16>/Switch1' */

  /* Chart: '<S16>/Timer_Occur' incorporates:
   *  Gain: '<S4>/Gain'
   */
  IntLamp_Ctrl_Timer_Occur((float64)tmp, 51200U *
    IntLamp_Ctrl_B.TimerTrigtime_Inp_hz, &IntLamp_Ctrl_B.TimerOccur_n,
    &IntLamp_Ctrl_DW.sf_Timer_Occur_e);

  /* Switch: '<S16>/Switch2' */
  if (IntLamp_Ctrl_B.TimerOccur_n > 0.0) {
    IntLamp_Ctrl_B.Switch2_g = IntLamp_Ctrl_B.TimerMode_Inp_o;
  } else {
    IntLamp_Ctrl_B.Switch2_g = IntLamp_Ctrl_B.CtrMode_Inp_i;
  }

  /* End of Switch: '<S16>/Switch2' */

  /* Chart: '<S4>/MsgTimeOut_Counter' incorporates:
   *  Constant: '<S4>/Constant9'
   */
  IntLamp_Ctrl_MsgTimeOut_Counter(rtb_TmpSignalConversionAtgASI_b, 15.0,
    &rtb_MsgTimeOut_En_j, &IntLamp_Ctrl_B.n_k);

  /* Switch: '<S4>/Switch2' incorporates:
   *  Constant: '<S4>/Constant12'
   */
  if (rtb_MsgTimeOut_En_j > 0.0) {
    IntLamp_Ctrl_B.Switch2_m = 1U;
  } else {
    IntLamp_Ctrl_B.Switch2_m = IntLamp_Ctrl_B.CtrCmd_Inp_l;
  }

  /* End of Switch: '<S4>/Switch2' */

  /* Switch: '<S16>/Switch' incorporates:
   *  Logic: '<S16>/Logical Operator'
   *  RelationalOperator: '<S16>/Relational Operator'
   */
  if ((IntLamp_Ctrl_B.TimerMode_Inp_o == 1) && (IntLamp_Ctrl_B.TimerOccur_n !=
       0.0)) {
    tmpRead_15 = IntLamp_Ctrl_B.TimerGrad_Inp_cu;
  } else {
    tmpRead_15 = IntLamp_Ctrl_B.SlopePara_Inp_i;
  }

  /* End of Switch: '<S16>/Switch' */

  /* Product: '<S4>/Divide' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S4>/Constant7'
   *  Sum: '<S4>/Add'
   */
  IntLamp_Ctrl_B.Divide_o = 10000.0 / ((float64)tmpRead_15 * 0.5 +
    2.2204460492503131E-16);

  /* Product: '<S4>/Product' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  IntLamp_Ctrl_B.Product_h = (float64)IntLamp_Ctrl_B.TargetBrightness_Inp_b *
    0.00390625 * 10.0;

  /* Product: '<S4>/Divide2' incorporates:
   *  Constant: '<S4>/Constant3'
   */
  IntLamp_Ctrl_B.Divide2_j = (float64)IntLamp_Ctrl_B.FlickerOnT_Inp_j * 0.5 /
    10.0;

  /* Product: '<S4>/Divide3' incorporates:
   *  Constant: '<S4>/Constant4'
   */
  IntLamp_Ctrl_B.Divide3_h = (float64)IntLamp_Ctrl_B.FlickerOffT_Inp_p * 0.5 /
    10.0;

  /* Chart: '<S4>/Light_Control' incorporates:
   *  Delay: '<S4>/Delay3'
   */
  IntLamp_Ctrl_Light_Control_l(IntLamp_Ctrl_B.Switch2_m,
    IntLamp_Ctrl_B.Switch2_g, IntLamp_Ctrl_B.Divide_o, IntLamp_Ctrl_B.Product_h,
    IntLamp_Ctrl_B.FlickerCycle_Inp_k, IntLamp_Ctrl_B.Divide2_j,
    IntLamp_Ctrl_B.Divide3_h, IntLamp_Ctrl_DW.Delay3_DSTATE_o,
    &IntLamp_Ctrl_B.TimerShutdown_l, &IntLamp_Ctrl_B.PWM_Out_o,
    &IntLamp_Ctrl_DW.sf_Light_Control_l);

  /* Product: '<S4>/Divide1' incorporates:
   *  Constant: '<S4>/Constant2'
   */
  rtb_MsgTimeOut_En_j = fmod(floor(IntLamp_Ctrl_B.PWM_Out_o / 10.0), 256.0);

  /* Switch: '<S4>/Switch1' incorporates:
   *  Product: '<S4>/Divide1'
   *  RelationalOperator: '<S4>/Relational Operator6'
   */
  rtb_Switch1_h = ((rtb_MsgTimeOut_En_j < 0.0 ? (sint32)(uint8)-(sint8)(uint8)-
                    rtb_MsgTimeOut_En_j : (sint32)(uint8)rtb_MsgTimeOut_En_j) >
                   0);

  /* Delay: '<S5>/Delay3' */
  IntLamp_Ctrl_B.Delay3_i = IntLamp_Ctrl_B.TimerOccur_k;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_CtrCmdCourtesyLightRROutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_CtrCmdCourtesyLightRR'
   */
  Rte_Read_gCAN_u8IL_CtrCmdCourtesyLightRR_Val
    (&IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_g);

  /* Gain: '<S3>/Gain10' */
  IntLamp_Ctrl_B.Gain10 = (uint16)(tmpRead_o << 7);

  /* Gain: '<S3>/Gain11' */
  IntLamp_Ctrl_B.Gain11 = (uint16)(200U * tmpRead_p);

  /* Gain: '<S3>/Gain12' */
  IntLamp_Ctrl_B.Gain12 = (uint16)(200U * tmpRead_q);

  /* Gain: '<S3>/Gain13' */
  IntLamp_Ctrl_B.Gain13 = (uint16)(200U * tmpRead_r);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_TimerEnCourtesyLightRROutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerEnCourtesyLightRR'
   */
  Rte_Read_gCAN_u8IL_TimerEnCourtesyLightRR_Val
    (&IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_i);

  /* Gain: '<S3>/Gain14' */
  IntLamp_Ctrl_B.Gain14 = (uint16)(200U * tmpRead_v);

  /* Logic: '<S5>/Logical Operator4' incorporates:
   *  Delay: '<S5>/Delay2'
   *  RelationalOperator: '<S5>/Relational Operator4'
   *  RelationalOperator: '<S5>/Relational Operator5'
   */
  IntLamp_Ctrl_B.LogicalOperator4_p =
    ((IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_g >= 1) &&
     (IntLamp_Ctrl_DW.Delay2_DSTATE_i == 0));

  /* Chart: '<S5>/Chart' */
  IntLamp_Ctrl_Chart(IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_g, tmpRead_m,
                     tmpRead_n, IntLamp_Ctrl_B.Gain10, IntLamp_Ctrl_B.Gain11,
                     IntLamp_Ctrl_B.Gain12, IntLamp_Ctrl_B.Gain13,
                     IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_i, tmpRead_s,
                     tmpRead_t, tmpRead_u, IntLamp_Ctrl_B.Gain14,
                     IntLamp_Ctrl_B.LogicalOperator4_p, IntLamp_Ctrl_B.Delay3_i,
                     &IntLamp_Ctrl_B.CtrCmd_Inp_j, &IntLamp_Ctrl_B.CtrMode_Inp_p,
                     &IntLamp_Ctrl_B.FlickerCycle_Inp_c,
                     &IntLamp_Ctrl_B.TargetBrightness_Inp_p,
                     &IntLamp_Ctrl_B.SlopePara_Inp_e,
                     &IntLamp_Ctrl_B.FlickerOnT_Inp_a,
                     &IntLamp_Ctrl_B.FlickerOffT_Inp_n,
                     &IntLamp_Ctrl_B.TimerEnable_Inp_f,
                     &IntLamp_Ctrl_B.TimerAction_Inp_o,
                     &IntLamp_Ctrl_B.TimerTrigtime_Inp_h,
                     &IntLamp_Ctrl_B.TimerMode_Inp_b,
                     &IntLamp_Ctrl_B.TimerGrad_Inp_c,
                     &IntLamp_Ctrl_DW.sf_Chart_hv);

  /* Switch: '<S21>/Switch1' incorporates:
   *  Constant: '<S21>/Constant1'
   *  Delay: '<S5>/Delay'
   */
  if (IntLamp_Ctrl_DW.Delay_DSTATE_c) {
    tmp = 2;
  } else {
    tmp = IntLamp_Ctrl_B.TimerEnable_Inp_f;
  }

  /* End of Switch: '<S21>/Switch1' */

  /* Chart: '<S21>/Timer_Occur' incorporates:
   *  Gain: '<S5>/Gain'
   */
  IntLamp_Ctrl_Timer_Occur((float64)tmp, 51200U *
    IntLamp_Ctrl_B.TimerTrigtime_Inp_h, &IntLamp_Ctrl_B.TimerOccur_k,
    &IntLamp_Ctrl_DW.sf_Timer_Occur_ek);

  /* Switch: '<S21>/Switch2' */
  if (IntLamp_Ctrl_B.TimerOccur_k > 0.0) {
    IntLamp_Ctrl_B.Switch2_j = IntLamp_Ctrl_B.TimerMode_Inp_b;
  } else {
    IntLamp_Ctrl_B.Switch2_j = IntLamp_Ctrl_B.CtrMode_Inp_p;
  }

  /* End of Switch: '<S21>/Switch2' */

  /* Chart: '<S5>/MsgTimeOut_Counter' incorporates:
   *  Constant: '<S5>/Constant9'
   */
  IntLamp_Ctrl_MsgTimeOut_Counter(rtb_TmpSignalConversionAtgASI_b, 15.0,
    &rtb_MsgTimeOut_En_j, &IntLamp_Ctrl_B.n_e);

  /* Switch: '<S5>/Switch2' incorporates:
   *  Constant: '<S5>/Constant12'
   */
  if (rtb_MsgTimeOut_En_j > 0.0) {
    IntLamp_Ctrl_B.Switch2_o = 1U;
  } else {
    IntLamp_Ctrl_B.Switch2_o = IntLamp_Ctrl_B.CtrCmd_Inp_j;
  }

  /* End of Switch: '<S5>/Switch2' */

  /* Switch: '<S21>/Switch' incorporates:
   *  Logic: '<S21>/Logical Operator'
   *  RelationalOperator: '<S21>/Relational Operator'
   */
  if ((IntLamp_Ctrl_B.TimerMode_Inp_b == 1) && (IntLamp_Ctrl_B.TimerOccur_k !=
       0.0)) {
    tmpRead_15 = IntLamp_Ctrl_B.TimerGrad_Inp_c;
  } else {
    tmpRead_15 = IntLamp_Ctrl_B.SlopePara_Inp_e;
  }

  /* End of Switch: '<S21>/Switch' */

  /* Product: '<S5>/Divide' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant7'
   *  Sum: '<S5>/Add'
   */
  IntLamp_Ctrl_B.Divide_l = 10000.0 / ((float64)tmpRead_15 * 0.5 +
    2.2204460492503131E-16);

  /* Product: '<S5>/Product' incorporates:
   *  Constant: '<S5>/Constant1'
   */
  IntLamp_Ctrl_B.Product_c = (float64)IntLamp_Ctrl_B.TargetBrightness_Inp_p *
    0.00390625 * 10.0;

  /* Product: '<S5>/Divide2' incorporates:
   *  Constant: '<S5>/Constant3'
   */
  IntLamp_Ctrl_B.Divide2_f = (float64)IntLamp_Ctrl_B.FlickerOnT_Inp_a * 0.5 /
    10.0;

  /* Product: '<S5>/Divide3' incorporates:
   *  Constant: '<S5>/Constant4'
   */
  IntLamp_Ctrl_B.Divide3_g = (float64)IntLamp_Ctrl_B.FlickerOffT_Inp_n * 0.5 /
    10.0;

  /* Chart: '<S5>/Light_Control' */
  IntLamp_Ctrl_Light_Control_l(IntLamp_Ctrl_B.Switch2_o,
    IntLamp_Ctrl_B.Switch2_j, IntLamp_Ctrl_B.Divide_l, IntLamp_Ctrl_B.Product_c,
    IntLamp_Ctrl_B.FlickerCycle_Inp_c, IntLamp_Ctrl_B.Divide2_f,
    IntLamp_Ctrl_B.Divide3_g, IntLamp_Ctrl_B.Delay3_i,
    &IntLamp_Ctrl_B.TimerShutdown_h, &IntLamp_Ctrl_B.PWM_Out_e,
    &IntLamp_Ctrl_DW.sf_Light_Control_d);

  /* Product: '<S5>/Divide1' incorporates:
   *  Constant: '<S5>/Constant2'
   */
  rtb_MsgTimeOut_En_j = fmod(floor(IntLamp_Ctrl_B.PWM_Out_e / 10.0), 256.0);

  /* Switch: '<S5>/Switch1' incorporates:
   *  Product: '<S5>/Divide1'
   *  RelationalOperator: '<S5>/Relational Operator6'
   */
  rtb_Switch1_l = ((rtb_MsgTimeOut_En_j < 0.0 ? (sint32)(uint8)-(sint8)(uint8)-
                    rtb_MsgTimeOut_En_j : (sint32)(uint8)rtb_MsgTimeOut_En_j) >
                   0);

  /* Delay: '<S7>/Delay3' */
  IntLamp_Ctrl_B.Delay3_o = IntLamp_Ctrl_B.TimerOccur;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_CtrCmdTrunkLightOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_CtrCmdTrunkLight'
   */
  Rte_Read_gCAN_u8IL_CtrCmdTrunkLight_Val
    (&IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_f);

  /* Gain: '<S3>/Gain' */
  IntLamp_Ctrl_B.Gain = (uint16)(tmpRead_1 << 7);

  /* Gain: '<S3>/Gain1' */
  IntLamp_Ctrl_B.Gain1 = (uint16)(200U * tmpRead_2);

  /* Gain: '<S3>/Gain2' */
  IntLamp_Ctrl_B.Gain2 = (uint16)(200U * tmpRead_3);

  /* Gain: '<S3>/Gain3' */
  IntLamp_Ctrl_B.Gain3 = (uint16)(200U * tmpRead_4);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_TimerEnTrunkLightOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerEnTrunkLight'
   */
  Rte_Read_gCAN_u8IL_TimerEnTrunkLight_Val
    (&IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8_cn);

  /* Gain: '<S3>/Gain4' */
  IntLamp_Ctrl_B.Gain4 = (uint16)(200U * rtb_Divide1_e);

  /* Logic: '<S7>/Logical Operator4' incorporates:
   *  Delay: '<S7>/Delay2'
   *  RelationalOperator: '<S7>/Relational Operator4'
   *  RelationalOperator: '<S7>/Relational Operator5'
   */
  IntLamp_Ctrl_B.LogicalOperator4_o =
    ((IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_f >= 1) &&
     (IntLamp_Ctrl_DW.Delay2_DSTATE_i5 == 0));

  /* Chart: '<S7>/Chart' */
  IntLamp_Ctrl_Chart(IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_f, tmpRead,
                     tmpRead_0, IntLamp_Ctrl_B.Gain, IntLamp_Ctrl_B.Gain1,
                     IntLamp_Ctrl_B.Gain2, IntLamp_Ctrl_B.Gain3,
                     IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8_cn, tmpRead_5,
                     tmpRead_6, tmpRead_7, IntLamp_Ctrl_B.Gain4,
                     IntLamp_Ctrl_B.LogicalOperator4_o, IntLamp_Ctrl_B.Delay3_o,
                     &IntLamp_Ctrl_B.CtrCmd_Inp, &IntLamp_Ctrl_B.CtrMode_Inp,
                     &IntLamp_Ctrl_B.FlickerCycle_Inp,
                     &IntLamp_Ctrl_B.TargetBrightness_Inp,
                     &IntLamp_Ctrl_B.SlopePara_Inp,
                     &IntLamp_Ctrl_B.FlickerOnT_Inp,
                     &IntLamp_Ctrl_B.FlickerOffT_Inp,
                     &IntLamp_Ctrl_B.TimerEnable_Inp,
                     &IntLamp_Ctrl_B.TimerAction_Inp,
                     &IntLamp_Ctrl_B.TimerTrigtime_Inp,
                     &IntLamp_Ctrl_B.TimerMode_Inp,
                     &IntLamp_Ctrl_B.TimerGrad_Inp, &IntLamp_Ctrl_DW.sf_Chart_f);

  /* Switch: '<S26>/Switch1' incorporates:
   *  Constant: '<S26>/Constant1'
   *  Delay: '<S7>/Delay'
   */
  if (IntLamp_Ctrl_DW.Delay_DSTATE_c0) {
    tmp = 2;
  } else {
    tmp = IntLamp_Ctrl_B.TimerEnable_Inp;
  }

  /* End of Switch: '<S26>/Switch1' */

  /* Chart: '<S26>/Timer_Occur' incorporates:
   *  Gain: '<S7>/Gain'
   */
  IntLamp_Ctrl_Timer_Occur((float64)tmp, 51200U *
    IntLamp_Ctrl_B.TimerTrigtime_Inp, &IntLamp_Ctrl_B.TimerOccur,
    &IntLamp_Ctrl_DW.sf_Timer_Occur_n);

  /* Switch: '<S26>/Switch2' */
  if (IntLamp_Ctrl_B.TimerOccur > 0.0) {
    IntLamp_Ctrl_B.Switch2_a = IntLamp_Ctrl_B.TimerMode_Inp;
  } else {
    IntLamp_Ctrl_B.Switch2_a = IntLamp_Ctrl_B.CtrMode_Inp;
  }

  /* End of Switch: '<S26>/Switch2' */

  /* Chart: '<S7>/MsgTimeOut_Counter' incorporates:
   *  Constant: '<S7>/Constant9'
   */
  IntLamp_Ctrl_MsgTimeOut_Counter(rtb_TmpSignalConversionAtgASI_b, 15.0,
    &rtb_MsgTimeOut_En_j, &IntLamp_Ctrl_B.n);

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant12'
   */
  if (rtb_MsgTimeOut_En_j > 0.0) {
    IntLamp_Ctrl_B.Switch2_dd = 1U;
  } else {
    IntLamp_Ctrl_B.Switch2_dd = IntLamp_Ctrl_B.CtrCmd_Inp;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* Switch: '<S26>/Switch' incorporates:
   *  Logic: '<S26>/Logical Operator'
   *  RelationalOperator: '<S26>/Relational Operator'
   */
  if ((IntLamp_Ctrl_B.TimerMode_Inp == 1) && (IntLamp_Ctrl_B.TimerOccur != 0.0))
  {
    tmpRead_15 = IntLamp_Ctrl_B.TimerGrad_Inp;
  } else {
    tmpRead_15 = IntLamp_Ctrl_B.SlopePara_Inp;
  }

  /* End of Switch: '<S26>/Switch' */

  /* Product: '<S7>/Divide' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant7'
   *  Sum: '<S7>/Add'
   */
  IntLamp_Ctrl_B.Divide_m = 10000.0 / ((float64)tmpRead_15 * 0.5 +
    2.2204460492503131E-16);

  /* Product: '<S7>/Product' incorporates:
   *  Constant: '<S7>/Constant1'
   */
  IntLamp_Ctrl_B.Product_b = (float64)IntLamp_Ctrl_B.TargetBrightness_Inp *
    0.00390625 * 10.0;

  /* Product: '<S7>/Divide2' incorporates:
   *  Constant: '<S7>/Constant3'
   */
  IntLamp_Ctrl_B.Divide2_g = (float64)IntLamp_Ctrl_B.FlickerOnT_Inp * 0.5 / 10.0;

  /* Product: '<S7>/Divide3' incorporates:
   *  Constant: '<S7>/Constant4'
   */
  IntLamp_Ctrl_B.Divide3_j = (float64)IntLamp_Ctrl_B.FlickerOffT_Inp * 0.5 /
    10.0;

  /* Chart: '<S7>/Light_Control' */
  IntLamp_Ctrl_Light_Control(IntLamp_Ctrl_B.Switch2_dd, IntLamp_Ctrl_B.Switch2_a,
    IntLamp_Ctrl_B.Divide_m, IntLamp_Ctrl_B.Product_b,
    IntLamp_Ctrl_B.FlickerCycle_Inp, IntLamp_Ctrl_B.Divide2_g,
    IntLamp_Ctrl_B.Divide3_j, IntLamp_Ctrl_B.Delay3_o,
    &IntLamp_Ctrl_B.TimerShutdown, &IntLamp_Ctrl_B.PWM_Out,
    &IntLamp_Ctrl_DW.sf_Light_Control_i);

  /* Product: '<S7>/Divide1' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  rtb_MsgTimeOut_En_j = fmod(floor(IntLamp_Ctrl_B.PWM_Out / 10.0), 256.0);
  rtb_Divide1_e = (uint8)(rtb_MsgTimeOut_En_j < 0.0 ? (sint32)(uint8)-(sint8)
    (uint8)-rtb_MsgTimeOut_En_j : (sint32)(uint8)rtb_MsgTimeOut_En_j);

  /* RelationalOperator: '<S7>/Relational Operator1' */
  rtb_Switch_jr = (rtb_Divide1_e > 0);

  /* Outport: '<Root>/gINL_u32AllowSleep_Local' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion'
   *  Logic: '<S2>/Logical Operator2'
   *  Logic: '<S4>/Logical Operator2'
   *  Logic: '<S5>/Logical Operator2'
   *  Logic: '<S6>/Logical Operator'
   *  Logic: '<S7>/Logical Operator2'
   *  RelationalOperator: '<S2>/Relational Operator'
   *  RelationalOperator: '<S4>/Relational Operator'
   *  RelationalOperator: '<S5>/Relational Operator'
   *  RelationalOperator: '<S7>/Relational Operator'
   */
  (void) Rte_Write_gINL_u32AllowSleep_Local_Val((uint32)((rtb_Switch_jr &&
    (IntLamp_Ctrl_B.TimerEnable_Inp == 1)) || (rtb_Switch1_l &&
    (IntLamp_Ctrl_B.TimerEnable_Inp_f == 1)) || (rtb_Switch1_h &&
    (IntLamp_Ctrl_B.TimerEnable_Inp_g == 1)) || (rtb_RelationalOperator1 &&
    (IntLamp_Ctrl_B.TimerEnable_Inp_a == 1))));

  /* Outport: '<Root>/gINL_bIL_TrunkLightOutputFaultSt' incorporates:
   *  Logic: '<S7>/Logical Operator'
   *  Logic: '<S7>/Logical Operator1'
   */
  (void) Rte_Write_gINL_bIL_TrunkLightOutputFaultSt_Val((tmpRead_8 || tmpRead_9)
    && rtb_Switch_jr);

  /* Outport: '<Root>/gINL_bIL_TrunkLightOutputSt' */
  (void) Rte_Write_gINL_bIL_TrunkLightOutputSt_Val(rtb_Switch_jr);

  /* Outport: '<Root>/gINL_u8TrunkLampOutput' */
  (void) Rte_Write_gINL_u8TrunkLampOutput_Val(rtb_Divide1_e);

  /* DataTypeConversion: '<S7>/Data Type Conversion1' incorporates:
   *  Delay: '<S7>/Delay'
   */
  IntLamp_Ctrl_DW.Delay_DSTATE_c0 = (IntLamp_Ctrl_B.TimerShutdown != 0.0);

  /* DataStoreWrite: '<S26>/Data Store Write' */
  IntLamp_Ctrl_DW.TimerAction_l = IntLamp_Ctrl_B.TimerAction_Inp;

  /* Outport: '<Root>/gINL_bIL_RRCourtesyLightOutputFaultSt' incorporates:
   *  Logic: '<S5>/Logical Operator'
   *  Logic: '<S5>/Logical Operator1'
   */
  (void) Rte_Write_gINL_bIL_RRCourtesyLightOutputFaultSt_Val((tmpRead_w ||
    tmpRead_x) && rtb_Switch1_l);

  /* Outport: '<Root>/gINL_bIL_RRCourtesyLightOutputSt' */
  (void) Rte_Write_gINL_bIL_RRCourtesyLightOutputSt_Val(rtb_Switch1_l);

  /* Outport: '<Root>/gINL_bRRCourtesyLightOutput' */
  (void) Rte_Write_gINL_bRRCourtesyLightOutput_Val(rtb_Switch1_l);

  /* DataTypeConversion: '<S5>/Data Type Conversion1' incorporates:
   *  Delay: '<S5>/Delay'
   */
  IntLamp_Ctrl_DW.Delay_DSTATE_c = (IntLamp_Ctrl_B.TimerShutdown_h != 0.0);

  /* DataStoreWrite: '<S21>/Data Store Write' */
  IntLamp_Ctrl_DW.TimerAction_e = IntLamp_Ctrl_B.TimerAction_Inp_o;

  /* Outport: '<Root>/gINL_bIL_RLCourtesyLightOutputFaultSt' incorporates:
   *  Logic: '<S4>/Logical Operator'
   *  Logic: '<S4>/Logical Operator1'
   */
  (void) Rte_Write_gINL_bIL_RLCourtesyLightOutputFaultSt_Val((tmpRead_k ||
    tmpRead_l) && rtb_Switch1_h);

  /* Outport: '<Root>/gINL_bIL_RLCourtesyLightOutputSt' */
  (void) Rte_Write_gINL_bIL_RLCourtesyLightOutputSt_Val(rtb_Switch1_h);

  /* Outport: '<Root>/gINL_bRLCourtesyLightOutput' */
  (void) Rte_Write_gINL_bRLCourtesyLightOutput_Val(rtb_Switch1_h);

  /* DataTypeConversion: '<S4>/Data Type Conversion1' incorporates:
   *  Delay: '<S4>/Delay'
   */
  IntLamp_Ctrl_DW.Delay_DSTATE_f = (IntLamp_Ctrl_B.TimerShutdown_l != 0.0);

  /* DataStoreWrite: '<S16>/Data Store Write' */
  IntLamp_Ctrl_DW.TimerAction_p = IntLamp_Ctrl_B.TimerAction_Inp_n;

  /* Outport: '<Root>/gINL_bIL_BkgLightOutputSt_T' */
  (void) Rte_Write_gINL_bIL_BkgLightOutputSt_T_Val(rtb_RelationalOperator1);

  /* Outport: '<Root>/gINL_u8RearBackGroudLightOutput' */
  (void) Rte_Write_gINL_u8RearBackGroudLightOutput_Val(rtb_Divide1);

  /* Outport: '<Root>/gINL_u32AllowSleep_NW' */
  (void) Rte_Write_gINL_u32AllowSleep_NW_Val(IntLamp_Ctrl_ConstB.Constant);

  /* Outport: '<Root>/gINL_u8Wakeup' */
  (void) Rte_Write_gINL_u8Wakeup_Val(IntLamp_Ctrl_ConstB.Constant2);

  /* Update for Delay: '<S2>/Delay2' */
  IntLamp_Ctrl_DW.Delay2_DSTATE = IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8IL_;

  /* Update for Delay: '<S2>/Delay3' */
  IntLamp_Ctrl_DW.Delay3_DSTATE = IntLamp_Ctrl_B.TimerOccur_d;

  /* Update for Delay: '<S4>/Delay3' */
  IntLamp_Ctrl_DW.Delay3_DSTATE_o = IntLamp_Ctrl_B.TimerOccur_n;

  /* Update for Delay: '<S4>/Delay2' */
  IntLamp_Ctrl_DW.Delay2_DSTATE_h =
    IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_c;

  /* Update for Delay: '<S5>/Delay2' */
  IntLamp_Ctrl_DW.Delay2_DSTATE_i =
    IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_g;

  /* Update for Delay: '<S7>/Delay2' */
  IntLamp_Ctrl_DW.Delay2_DSTATE_i5 =
    IntLamp_Ctrl_B.TmpSignalConversionAtgCAN_u8I_f;
}

/* Model initialize function */
void IntLamp_Ctrl_Runnable_Init(void)
{
  /* SystemInitialize for Chart: '<S2>/MsgTimeOut_Counter' */
  IntLamp_MsgTimeOut_Counter_Init(&IntLamp_Ctrl_B.n_c);

  /* SystemInitialize for Chart: '<S2>/Light_Control' */
  IntLamp_Ctrl_Light_Control_Init(&IntLamp_Ctrl_B.TimerShutdown_hs,
    &IntLamp_Ctrl_B.PWM_Out_m);

  /* SystemInitialize for Chart: '<S4>/MsgTimeOut_Counter' */
  IntLamp_MsgTimeOut_Counter_Init(&IntLamp_Ctrl_B.n_k);

  /* SystemInitialize for Chart: '<S4>/Light_Control' */
  IntLamp_Ct_Light_Control_a_Init(&IntLamp_Ctrl_B.TimerShutdown_l,
    &IntLamp_Ctrl_B.PWM_Out_o);

  /* SystemInitialize for Chart: '<S5>/MsgTimeOut_Counter' */
  IntLamp_MsgTimeOut_Counter_Init(&IntLamp_Ctrl_B.n_e);

  /* SystemInitialize for Chart: '<S5>/Light_Control' */
  IntLamp_Ct_Light_Control_a_Init(&IntLamp_Ctrl_B.TimerShutdown_h,
    &IntLamp_Ctrl_B.PWM_Out_e);

  /* SystemInitialize for Chart: '<S7>/MsgTimeOut_Counter' */
  IntLamp_MsgTimeOut_Counter_Init(&IntLamp_Ctrl_B.n);

  /* SystemInitialize for Chart: '<S7>/Light_Control' */
  IntLamp_Ctrl_Light_Control_Init(&IntLamp_Ctrl_B.TimerShutdown,
    &IntLamp_Ctrl_B.PWM_Out);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
