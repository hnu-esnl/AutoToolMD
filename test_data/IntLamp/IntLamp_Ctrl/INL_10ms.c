/*
 * File: INL_10ms.c
 *
 * Code generated for Simulink model 'INL_10ms'.
 *
 * Model version                  : 1.28
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Aug  1 16:00:04 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "INL_10ms.h"

/* Named constants for Chart: '<S2>/Light_Control' */
#define INL_10ms_IN_Flicker            ((uint8)1U)
#define INL_10ms_IN_Flicker_Off        ((uint8)1U)
#define INL_10ms_IN_Flicker_On         ((uint8)2U)
#define INL_10ms_IN_NO_ACTIVE_CHILD    ((uint8)0U)
#define INL_10ms_IN_OFF                ((uint8)2U)
#define INL_10ms_IN_OFF_Decreasing     ((uint8)1U)
#define INL_10ms_IN_OFF_Normal         ((uint8)2U)
#define INL_10ms_IN_ON                 ((uint8)3U)
#define INL_10ms_IN_ON_Decreasing      ((uint8)1U)
#define INL_10ms_IN_ON_Increasing      ((uint8)2U)
#define INL_10ms_IN_ON_Normal          ((uint8)3U)

/* Named constants for Chart: '<S16>/Timer_Occur' */
#define INL_10ms_IN_TimerOFF           ((uint8)1U)
#define INL_10ms_IN_TimerON            ((uint8)2U)
#define INL_10ms_IN_Wait               ((uint8)3U)

/* Named constants for Chart: '<S4>/Light_Control' */
#define INL_10ms_IN_Flicker_Off_d      ((uint8)1U)
#define INL_10ms_IN_Flicker_On_o       ((uint8)2U)
#define INL_10ms_IN_Flicker_k          ((uint8)1U)
#define INL_10ms_IN_NO_ACTIVE_CHILD_o  ((uint8)0U)
#define INL_10ms_IN_OFF_Decreasing_b   ((uint8)1U)
#define INL_10ms_IN_OFF_Normal_c       ((uint8)2U)
#define INL_10ms_IN_OFF_k              ((uint8)2U)
#define INL_10ms_IN_ON_Decreasing_l    ((uint8)1U)
#define INL_10ms_IN_ON_Increasing_a    ((uint8)2U)
#define INL_10ms_IN_ON_Normal_g        ((uint8)3U)
#define INL_10ms_IN_ON_j               ((uint8)3U)
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
const ConstB_INL_10ms_T INL_10ms_ConstB = {
  0U,                                  /* '<S6>/Constant' */
  0U                                   /* '<S6>/Constant2' */
};

/* Block signals (default storage) */
B_INL_10ms_T INL_10ms_B;

/* Block states (default storage) */
DW_INL_10ms_T INL_10ms_DW;
static void INL_10ms_Light_Control_Init(float64 *rty_PWM_Out);
static void INL_10ms_Light_Control(uint8 rtu_Ctrl_Cmd, uint8 rtu_Ctrl_Mode,
  float64 rtu_Ctrl_Slope, float64 rtu_TargetBright, uint8 rtu_FlickerCycle,
  float64 rtu_FlickerOnTime, float64 rtu_FlickerOffTime, float64 rtu_TimerOccur,
  uint8 rtu_TimerEnable, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_INL_10ms_T *localDW);
static void INL_10m_MsgTimeOut_Counter_Init(float64 *rty_n);
static void INL_10ms_MsgTimeOut_Counter(boolean rtu_MsgTimeOut, float64
  rtu_gPRM_u8MsgOutLampShutdownT, float64 *rty_MsgTimeOut_En, float64 *rty_n);
static void INL_10ms_Timer_Occur(float64 rtu_TimerEn, uint32 rtu_TimerTrigtime,
  float64 *rty_TimerOccur, DW_Timer_Occur_INL_10ms_T *localDW);
static void INL_10ms_Light_Control_i_Init(float64 *rty_PWM_Out);
static void INL_10ms_Light_Control_a(uint8 rtu_Ctrl_Cmd, uint8 rtu_Ctrl_Mode,
  float64 rtu_Ctrl_Slope, float64 rtu_TargetBright, uint8 rtu_FlickerCycle,
  float64 rtu_FlickerOnTime, float64 rtu_FlickerOffTime, float64 rtu_TimerOccur,
  uint8 rtu_TimerEnable, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_INL_10ms_h_T *localDW);

/* Forward declaration for local functions */
static void INL_10ms_enter_internal_OFF(uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_INL_10ms_T *localDW);
static void INL_10ms_enter_internal_ON(uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 rtu_TargetBright, float64 *rty_PWM_Out,
  DW_Light_Control_INL_10ms_T *localDW);

/* Forward declaration for local functions */
static void INL_10ms_enter_internal_OFF_f(uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_INL_10ms_h_T *localDW);
static void INL_10ms_enter_internal_ON_b(uint8 rtu_Ctrl_Mode, float64
  rtu_TargetBright, float64 *rty_PWM_Out, DW_Light_Control_INL_10ms_h_T *localDW);

/* Function for Chart: '<S2>/Light_Control' */
static void INL_10ms_enter_internal_OFF(uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_INL_10ms_T *localDW)
{
  /* Chart: '<S2>/Light_Control' */
  if ((rtu_Ctrl_Mode == 1) && (*rty_PWM_Out >= rtu_Ctrl_Slope)) {
    localDW->is_OFF = INL_10ms_IN_OFF_Decreasing;
    if (*rty_PWM_Out >= rtu_Ctrl_Slope) {
      *rty_PWM_Out -= rtu_Ctrl_Slope;
    } else {
      *rty_PWM_Out = 0.0;
    }
  } else {
    localDW->is_OFF = INL_10ms_IN_OFF_Normal;
    *rty_PWM_Out = 0.0;
    *rty_TimerShutdown = 1.0;
  }

  /* End of Chart: '<S2>/Light_Control' */
}

/* Function for Chart: '<S2>/Light_Control' */
static void INL_10ms_enter_internal_ON(uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 rtu_TargetBright, float64 *rty_PWM_Out,
  DW_Light_Control_INL_10ms_T *localDW)
{
  if ((rtu_Ctrl_Mode == 1) && (*rty_PWM_Out < rtu_TargetBright)) {
    localDW->is_ON = INL_10ms_IN_ON_Increasing;
    if (*rty_PWM_Out < rtu_TargetBright) {
      *rty_PWM_Out += rtu_Ctrl_Slope;
    } else {
      *rty_PWM_Out = rtu_TargetBright;
    }
  } else if ((rtu_Ctrl_Mode == 1) && (*rty_PWM_Out > rtu_TargetBright)) {
    localDW->is_ON = INL_10ms_IN_ON_Decreasing;
    if (*rty_PWM_Out > rtu_TargetBright) {
      *rty_PWM_Out -= rtu_Ctrl_Slope;
    } else {
      *rty_PWM_Out = rtu_TargetBright;
    }
  } else {
    localDW->is_ON = INL_10ms_IN_ON_Normal;
    *rty_PWM_Out = rtu_TargetBright;
  }
}

/*
 * System initialize for atomic system:
 *    '<S2>/Light_Control'
 *    '<S7>/Light_Control'
 */
static void INL_10ms_Light_Control_Init(float64 *rty_PWM_Out)
{
  *rty_PWM_Out = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S2>/Light_Control'
 *    '<S7>/Light_Control'
 */
static void INL_10ms_Light_Control(uint8 rtu_Ctrl_Cmd, uint8 rtu_Ctrl_Mode,
  float64 rtu_Ctrl_Slope, float64 rtu_TargetBright, uint8 rtu_FlickerCycle,
  float64 rtu_FlickerOnTime, float64 rtu_FlickerOffTime, float64 rtu_TimerOccur,
  uint8 rtu_TimerEnable, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_INL_10ms_T *localDW)
{
  /* Chart: '<S2>/Light_Control' */
  if (localDW->is_active_c1_INL_10ms == 0U) {
    localDW->is_active_c1_INL_10ms = 1U;
    localDW->is_c1_INL_10ms = INL_10ms_IN_OFF;
    INL_10ms_enter_internal_OFF(rtu_Ctrl_Mode, rtu_Ctrl_Slope, rty_TimerShutdown,
      rty_PWM_Out, localDW);
  } else {
    switch (localDW->is_c1_INL_10ms) {
     case INL_10ms_IN_Flicker:
      if ((rtu_Ctrl_Cmd == 1) || (rtu_TimerOccur == 1.0)) {
        localDW->is_Flicker = INL_10ms_IN_NO_ACTIVE_CHILD;
        *rty_TimerShutdown = 0.0;
        localDW->is_c1_INL_10ms = INL_10ms_IN_OFF;
        INL_10ms_enter_internal_OFF(rtu_Ctrl_Mode, rtu_Ctrl_Slope,
          rty_TimerShutdown, rty_PWM_Out, localDW);
      } else if (rtu_Ctrl_Cmd == 2) {
        localDW->is_Flicker = INL_10ms_IN_NO_ACTIVE_CHILD;
        *rty_TimerShutdown = 0.0;
        localDW->is_c1_INL_10ms = INL_10ms_IN_ON;
        INL_10ms_enter_internal_ON(rtu_Ctrl_Mode, rtu_Ctrl_Slope,
          rtu_TargetBright, rty_PWM_Out, localDW);
      } else if (localDW->is_Flicker == INL_10ms_IN_Flicker_Off) {
        if ((localDW->OffTime >= rtu_FlickerOffTime) && (localDW->n <
             rtu_FlickerCycle)) {
          localDW->is_Flicker = INL_10ms_IN_Flicker_On;
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
        localDW->is_Flicker = INL_10ms_IN_Flicker_Off;
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

     case INL_10ms_IN_OFF:
      if ((rtu_Ctrl_Cmd == 2) && (rtu_TimerEnable != 1)) {
        if (localDW->is_OFF == INL_10ms_IN_OFF_Normal) {
          *rty_TimerShutdown = 0.0;
          localDW->is_OFF = INL_10ms_IN_NO_ACTIVE_CHILD;
        } else {
          localDW->is_OFF = INL_10ms_IN_NO_ACTIVE_CHILD;
        }

        localDW->is_c1_INL_10ms = INL_10ms_IN_ON;
        INL_10ms_enter_internal_ON(rtu_Ctrl_Mode, rtu_Ctrl_Slope,
          rtu_TargetBright, rty_PWM_Out, localDW);
      } else if ((rtu_Ctrl_Cmd == 3) && (rtu_TimerEnable != 1)) {
        if (localDW->is_OFF == INL_10ms_IN_OFF_Normal) {
          *rty_TimerShutdown = 0.0;
          localDW->is_OFF = INL_10ms_IN_NO_ACTIVE_CHILD;
        } else {
          localDW->is_OFF = INL_10ms_IN_NO_ACTIVE_CHILD;
        }

        localDW->is_c1_INL_10ms = INL_10ms_IN_Flicker;
        localDW->n = 0.0;
        localDW->is_Flicker = INL_10ms_IN_Flicker_On;
        *rty_PWM_Out = rtu_TargetBright;
        localDW->OnTime = 0.0;
        if (localDW->OnTime < rtu_FlickerOnTime) {
          localDW->OnTime++;
        } else {
          localDW->OnTime = rtu_FlickerOnTime;
        }
      } else {
        if (localDW->is_OFF == INL_10ms_IN_OFF_Decreasing) {
          if ((*rty_PWM_Out == 0.0) || (*rty_PWM_Out <= rtu_Ctrl_Slope)) {
            localDW->is_OFF = INL_10ms_IN_OFF_Normal;
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
      if ((rtu_Ctrl_Cmd == 1) || (rtu_TimerOccur == 1.0)) {
        localDW->is_ON = INL_10ms_IN_NO_ACTIVE_CHILD;
        localDW->is_c1_INL_10ms = INL_10ms_IN_OFF;
        INL_10ms_enter_internal_OFF(rtu_Ctrl_Mode, rtu_Ctrl_Slope,
          rty_TimerShutdown, rty_PWM_Out, localDW);
      } else if (rtu_Ctrl_Cmd == 3) {
        localDW->is_ON = INL_10ms_IN_NO_ACTIVE_CHILD;
        localDW->is_c1_INL_10ms = INL_10ms_IN_Flicker;
        localDW->n = 0.0;
        localDW->is_Flicker = INL_10ms_IN_Flicker_On;
        *rty_PWM_Out = rtu_TargetBright;
        localDW->OnTime = 0.0;
        if (localDW->OnTime < rtu_FlickerOnTime) {
          localDW->OnTime++;
        } else {
          localDW->OnTime = rtu_FlickerOnTime;
        }
      } else {
        switch (localDW->is_ON) {
         case INL_10ms_IN_ON_Decreasing:
          if (*rty_PWM_Out <= rtu_TargetBright) {
            localDW->is_ON = INL_10ms_IN_ON_Normal;
            *rty_PWM_Out = rtu_TargetBright;
          } else if (*rty_PWM_Out > rtu_TargetBright) {
            *rty_PWM_Out -= rtu_Ctrl_Slope;
          } else {
            *rty_PWM_Out = rtu_TargetBright;
          }
          break;

         case INL_10ms_IN_ON_Increasing:
          if (*rty_PWM_Out >= rtu_TargetBright) {
            localDW->is_ON = INL_10ms_IN_ON_Normal;
            *rty_PWM_Out = rtu_TargetBright;
          } else if (*rty_PWM_Out < rtu_TargetBright) {
            *rty_PWM_Out += rtu_Ctrl_Slope;
          } else {
            *rty_PWM_Out = rtu_TargetBright;
          }
          break;

         default:
          if (*rty_PWM_Out < rtu_TargetBright) {
            localDW->is_ON = INL_10ms_IN_ON_Increasing;
            if (*rty_PWM_Out < rtu_TargetBright) {
              *rty_PWM_Out += rtu_Ctrl_Slope;
            } else {
              *rty_PWM_Out = rtu_TargetBright;
            }
          } else {
            if (*rty_PWM_Out > rtu_TargetBright) {
              localDW->is_ON = INL_10ms_IN_ON_Decreasing;
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
static void INL_10m_MsgTimeOut_Counter_Init(float64 *rty_n)
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
static void INL_10ms_MsgTimeOut_Counter(boolean rtu_MsgTimeOut, float64
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
 *    '<S16>/Timer_Occur'
 *    '<S26>/Timer_Occur'
 *    '<S36>/Timer_Occur'
 *    '<S46>/Timer_Occur'
 */
static void INL_10ms_Timer_Occur(float64 rtu_TimerEn, uint32 rtu_TimerTrigtime,
  float64 *rty_TimerOccur, DW_Timer_Occur_INL_10ms_T *localDW)
{
  /* Chart: '<S16>/Timer_Occur' */
  if (localDW->temporalCounter_i1 < 16777215U) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c4_INL_10ms == 0U) {
    localDW->is_active_c4_INL_10ms = 1U;
    localDW->is_c4_INL_10ms = INL_10ms_IN_TimerOFF;
    *rty_TimerOccur = 0.0;
  } else {
    switch (localDW->is_c4_INL_10ms) {
     case INL_10ms_IN_TimerOFF:
      *rty_TimerOccur = 0.0;
      if (rtu_TimerEn == 1.0) {
        localDW->is_c4_INL_10ms = INL_10ms_IN_Wait;
        localDW->temporalCounter_i1 = 0U;
      }
      break;

     case INL_10ms_IN_TimerON:
      *rty_TimerOccur = 1.0;
      if (rtu_TimerEn == 2.0) {
        localDW->is_c4_INL_10ms = INL_10ms_IN_TimerOFF;
        *rty_TimerOccur = 0.0;
      }
      break;

     default:
      if (localDW->temporalCounter_i1 >= (rtu_TimerTrigtime >> 9)) {
        localDW->is_c4_INL_10ms = INL_10ms_IN_TimerON;
        *rty_TimerOccur = 1.0;
      } else {
        if (rtu_TimerEn == 2.0) {
          localDW->is_c4_INL_10ms = INL_10ms_IN_TimerOFF;
          *rty_TimerOccur = 0.0;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S16>/Timer_Occur' */
}

/* Function for Chart: '<S4>/Light_Control' */
static void INL_10ms_enter_internal_OFF_f(uint8 rtu_Ctrl_Mode, float64
  rtu_Ctrl_Slope, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_INL_10ms_h_T *localDW)
{
  /* Chart: '<S4>/Light_Control' */
  if ((rtu_Ctrl_Mode == 1) && (*rty_PWM_Out >= rtu_Ctrl_Slope)) {
    localDW->is_OFF = INL_10ms_IN_OFF_Decreasing_b;
    *rty_PWM_Out = 0.0;
  } else {
    localDW->is_OFF = INL_10ms_IN_OFF_Normal_c;
    *rty_PWM_Out = 0.0;
    *rty_TimerShutdown = 1.0;
  }

  /* End of Chart: '<S4>/Light_Control' */
}

/* Function for Chart: '<S4>/Light_Control' */
static void INL_10ms_enter_internal_ON_b(uint8 rtu_Ctrl_Mode, float64
  rtu_TargetBright, float64 *rty_PWM_Out, DW_Light_Control_INL_10ms_h_T *localDW)
{
  if ((rtu_Ctrl_Mode == 1) && (*rty_PWM_Out < rtu_TargetBright)) {
    localDW->is_ON = INL_10ms_IN_ON_Increasing_a;
    *rty_PWM_Out = rtu_TargetBright;
  } else if ((rtu_Ctrl_Mode == 1) && (*rty_PWM_Out > rtu_TargetBright)) {
    localDW->is_ON = INL_10ms_IN_ON_Decreasing_l;
    *rty_PWM_Out = rtu_TargetBright;
  } else {
    localDW->is_ON = INL_10ms_IN_ON_Normal_g;
    *rty_PWM_Out = rtu_TargetBright;
  }
}

/*
 * System initialize for atomic system:
 *    '<S4>/Light_Control'
 *    '<S5>/Light_Control'
 */
static void INL_10ms_Light_Control_i_Init(float64 *rty_PWM_Out)
{
  *rty_PWM_Out = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S4>/Light_Control'
 *    '<S5>/Light_Control'
 */
static void INL_10ms_Light_Control_a(uint8 rtu_Ctrl_Cmd, uint8 rtu_Ctrl_Mode,
  float64 rtu_Ctrl_Slope, float64 rtu_TargetBright, uint8 rtu_FlickerCycle,
  float64 rtu_FlickerOnTime, float64 rtu_FlickerOffTime, float64 rtu_TimerOccur,
  uint8 rtu_TimerEnable, float64 *rty_TimerShutdown, float64 *rty_PWM_Out,
  DW_Light_Control_INL_10ms_h_T *localDW)
{
  /* Chart: '<S4>/Light_Control' */
  if (localDW->is_active_c7_INL_10ms == 0U) {
    localDW->is_active_c7_INL_10ms = 1U;
    localDW->is_c7_INL_10ms = INL_10ms_IN_OFF_k;
    INL_10ms_enter_internal_OFF_f(rtu_Ctrl_Mode, rtu_Ctrl_Slope,
      rty_TimerShutdown, rty_PWM_Out, localDW);
  } else {
    switch (localDW->is_c7_INL_10ms) {
     case INL_10ms_IN_Flicker_k:
      if (rtu_Ctrl_Cmd == 2) {
        localDW->is_Flicker = INL_10ms_IN_NO_ACTIVE_CHILD_o;
        *rty_TimerShutdown = 0.0;
        localDW->is_c7_INL_10ms = INL_10ms_IN_ON_j;
        INL_10ms_enter_internal_ON_b(rtu_Ctrl_Mode, rtu_TargetBright,
          rty_PWM_Out, localDW);
      } else if ((rtu_Ctrl_Cmd == 1) || (rtu_TimerOccur == 1.0)) {
        localDW->is_Flicker = INL_10ms_IN_NO_ACTIVE_CHILD_o;
        *rty_TimerShutdown = 0.0;
        localDW->is_c7_INL_10ms = INL_10ms_IN_OFF_k;
        INL_10ms_enter_internal_OFF_f(rtu_Ctrl_Mode, rtu_Ctrl_Slope,
          rty_TimerShutdown, rty_PWM_Out, localDW);
      } else if (localDW->is_Flicker == INL_10ms_IN_Flicker_Off_d) {
        if ((localDW->OffTime >= rtu_FlickerOffTime) && (localDW->n <
             rtu_FlickerCycle)) {
          localDW->is_Flicker = INL_10ms_IN_Flicker_On_o;
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
        localDW->is_Flicker = INL_10ms_IN_Flicker_Off_d;
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

     case INL_10ms_IN_OFF_k:
      if ((rtu_Ctrl_Cmd == 2) && (rtu_TimerEnable != 1)) {
        if (localDW->is_OFF == INL_10ms_IN_OFF_Normal_c) {
          *rty_TimerShutdown = 0.0;
          localDW->is_OFF = INL_10ms_IN_NO_ACTIVE_CHILD_o;
        } else {
          localDW->is_OFF = INL_10ms_IN_NO_ACTIVE_CHILD_o;
        }

        localDW->is_c7_INL_10ms = INL_10ms_IN_ON_j;
        INL_10ms_enter_internal_ON_b(rtu_Ctrl_Mode, rtu_TargetBright,
          rty_PWM_Out, localDW);
      } else if ((rtu_Ctrl_Cmd == 3) && (rtu_TimerEnable != 1)) {
        if (localDW->is_OFF == INL_10ms_IN_OFF_Normal_c) {
          *rty_TimerShutdown = 0.0;
          localDW->is_OFF = INL_10ms_IN_NO_ACTIVE_CHILD_o;
        } else {
          localDW->is_OFF = INL_10ms_IN_NO_ACTIVE_CHILD_o;
        }

        localDW->is_c7_INL_10ms = INL_10ms_IN_Flicker_k;
        localDW->n = 0.0;
        localDW->is_Flicker = INL_10ms_IN_Flicker_On_o;
        *rty_PWM_Out = rtu_TargetBright;
        localDW->OnTime = 0.0;
        if (localDW->OnTime < rtu_FlickerOnTime) {
          localDW->OnTime++;
        } else {
          localDW->OnTime = rtu_FlickerOnTime;
        }
      } else {
        if ((localDW->is_OFF == INL_10ms_IN_OFF_Decreasing_b) && ((*rty_PWM_Out ==
              0.0) || (*rty_PWM_Out <= rtu_Ctrl_Slope))) {
          localDW->is_OFF = INL_10ms_IN_OFF_Normal_c;
          *rty_PWM_Out = 0.0;
          *rty_TimerShutdown = 1.0;
        }
      }
      break;

     default:
      if ((rtu_Ctrl_Cmd == 1) || (rtu_TimerOccur == 1.0)) {
        localDW->is_ON = INL_10ms_IN_NO_ACTIVE_CHILD_o;
        localDW->is_c7_INL_10ms = INL_10ms_IN_OFF_k;
        INL_10ms_enter_internal_OFF_f(rtu_Ctrl_Mode, rtu_Ctrl_Slope,
          rty_TimerShutdown, rty_PWM_Out, localDW);
      } else if (rtu_Ctrl_Cmd == 3) {
        localDW->is_ON = INL_10ms_IN_NO_ACTIVE_CHILD_o;
        localDW->is_c7_INL_10ms = INL_10ms_IN_Flicker_k;
        localDW->n = 0.0;
        localDW->is_Flicker = INL_10ms_IN_Flicker_On_o;
        *rty_PWM_Out = rtu_TargetBright;
        localDW->OnTime = 0.0;
        if (localDW->OnTime < rtu_FlickerOnTime) {
          localDW->OnTime++;
        } else {
          localDW->OnTime = rtu_FlickerOnTime;
        }
      } else {
        switch (localDW->is_ON) {
         case INL_10ms_IN_ON_Decreasing_l:
          if (*rty_PWM_Out <= rtu_TargetBright) {
            localDW->is_ON = INL_10ms_IN_ON_Normal_g;
            *rty_PWM_Out = rtu_TargetBright;
          }
          break;

         case INL_10ms_IN_ON_Increasing_a:
          if (*rty_PWM_Out >= rtu_TargetBright) {
            localDW->is_ON = INL_10ms_IN_ON_Normal_g;
            *rty_PWM_Out = rtu_TargetBright;
          }
          break;

         default:
          if (*rty_PWM_Out < rtu_TargetBright) {
            localDW->is_ON = INL_10ms_IN_ON_Increasing_a;
            *rty_PWM_Out = rtu_TargetBright;
          } else {
            if (*rty_PWM_Out > rtu_TargetBright) {
              localDW->is_ON = INL_10ms_IN_ON_Decreasing_l;
              *rty_PWM_Out = rtu_TargetBright;
            }
          }
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Light_Control' */
}

/* Model step function */
void INL_Runnable_10ms(void)
{
  /* local block i/o variables */
  boolean rtb_TmpSignalConversionAtgASI_b;
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  uint8 tmpRead_3;
  uint8 tmpRead_4;
  uint16 tmpRead_5;
  uint8 tmpRead_6;
  boolean tmpRead_7;
  boolean tmpRead_8;
  uint8 tmpRead_9;
  uint8 tmpRead_a;
  uint8 tmpRead_b;
  uint8 tmpRead_c;
  uint8 tmpRead_d;
  uint8 tmpRead_e;
  uint16 tmpRead_f;
  uint8 tmpRead_g;
  boolean tmpRead_h;
  boolean tmpRead_i;
  uint8 tmpRead_j;
  uint8 tmpRead_k;
  uint8 tmpRead_l;
  uint8 tmpRead_m;
  uint8 tmpRead_n;
  uint8 tmpRead_o;
  uint16 tmpRead_p;
  uint8 tmpRead_q;
  boolean tmpRead_r;
  boolean tmpRead_s;
  uint8 tmpRead_t;
  uint8 tmpRead_u;
  uint8 tmpRead_v;
  uint8 tmpRead_w;
  uint8 tmpRead_x;
  uint8 tmpRead_y;
  uint8 tmpRead_z;
  boolean rtb_RelationalOperator1;
  uint8 rtb_TmpSignalConversionAtgCAN_b;
  boolean rtb_Switch1_h;
  uint8 rtb_TmpSignalConversionAtgCA_mn;
  uint8 rtb_TmpSignalConversionAtgCAN_o;
  boolean rtb_Switch1_iw;
  uint8 rtb_TmpSignalConversionAtgCAN_i;
  uint8 rtb_TmpSignalConversionAtgCAN_e;
  boolean rtb_RelationalOperator1_b;
  uint8 rtb_TmpSignalConversionAtgCA_gw;
  uint8 rtb_TmpSignalConversionAtgCAN_d;
  float64 rtb_MsgTimeOut_En_b;
  uint16 rtb_Switch;
  sint32 tmp;

  /* Inport: '<Root>/gCAN_u16IL_TimerTriTimeBKGLight' */
  Rte_Read_gCAN_u16IL_TimerTriTimeBKGLight_Val(&rtb_Switch);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_TimerActionModeBKGLightOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerActionModeBKGLight'
   */
  Rte_Read_gCAN_u8IL_TimerActionModeBKGLight_Val(&INL_10ms_B.Switch2);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_TimerEnBKGLightOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerEnBKGLight'
   */
  Rte_Read_gCAN_u8IL_TimerEnBKGLight_Val
    (&INL_10ms_B.TmpSignalConversionAtgCAN_u8IL_);

  /* Switch: '<S16>/Switch1' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Delay: '<S2>/Delay'
   */
  if (INL_10ms_DW.Delay_DSTATE) {
    tmp = 2;
  } else {
    tmp = INL_10ms_B.TmpSignalConversionAtgCAN_u8IL_;
  }

  /* End of Switch: '<S16>/Switch1' */

  /* Chart: '<S16>/Timer_Occur' incorporates:
   *  Gain: '<S2>/Gain'
   */
  INL_10ms_Timer_Occur((float64)tmp, 51200U * rtb_Switch,
                       &INL_10ms_B.TimerOccur_b, &INL_10ms_DW.sf_Timer_Occur);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_CtrCmdBKGLightOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_CtrCmdBKGLight'
   */
  Rte_Read_gCAN_u8IL_CtrCmdBKGLight_Val(&rtb_TmpSignalConversionAtgCAN_b);

  /* Switch: '<S2>/Switch5' incorporates:
   *  Constant: '<S11>/Constant'
   *  Delay: '<S2>/Delay4'
   *  Gain: '<S3>/Gain16'
   *  Inport: '<Root>/gCAN_u8IL_SlopeParaBKGLight'
   *  RelationalOperator: '<S11>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCAN_b != 0) {
    Rte_Read_gCAN_u8IL_SlopeParaBKGLight_Val(&tmpRead_w);
    INL_10ms_DW.Delay4_DSTATE = (uint16)(200U * tmpRead_w);
  }

  /* End of Switch: '<S2>/Switch5' */

  /* Switch: '<S16>/Switch' incorporates:
   *  Delay: '<S2>/Delay4'
   *  Gain: '<S3>/Gain19'
   *  Inport: '<Root>/gCAN_u8IL_TimerGradientTimeBKGLight'
   *  Logic: '<S16>/Logical Operator'
   *  RelationalOperator: '<S16>/Relational Operator'
   */
  if ((INL_10ms_B.Switch2 == 1) && (INL_10ms_B.TimerOccur_b != 0.0)) {
    Rte_Read_gCAN_u8IL_TimerGradientTimeBKGLight_Val(&tmpRead_z);
    rtb_Switch = (uint16)(200U * tmpRead_z);
  } else {
    rtb_Switch = INL_10ms_DW.Delay4_DSTATE;
  }

  /* End of Switch: '<S16>/Switch' */

  /* Inport: '<Root>/gCAN_u8IL_CtrModeBKGLight' */
  Rte_Read_gCAN_u8IL_CtrModeBKGLight_Val(&tmpRead_t);

  /* Product: '<S2>/Divide' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S2>/Constant7'
   *  Sum: '<S2>/Add'
   */
  INL_10ms_B.Divide = 10000.0 / ((float64)rtb_Switch * 0.5 +
    2.2204460492503131E-16);

  /* Switch: '<S2>/Switch1' incorporates:
   *  Constant: '<S8>/Constant'
   *  Delay: '<S2>/Delay1'
   *  RelationalOperator: '<S8>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCAN_b != 0) {
    INL_10ms_DW.Delay1_DSTATE = tmpRead_t;
  }

  /* End of Switch: '<S2>/Switch1' */

  /* Switch: '<S16>/Switch2' incorporates:
   *  Delay: '<S2>/Delay1'
   */
  if (INL_10ms_B.TimerOccur_b <= 0.0) {
    INL_10ms_B.Switch2 = INL_10ms_DW.Delay1_DSTATE;
  }

  /* End of Switch: '<S16>/Switch2' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bCtrCmdTrunkLight_TimeOutOutport1' incorporates:
   *  Inport: '<Root>/gASI_bCtrCmdTrunkLight_TimeOut'
   */
  Rte_Read_gASI_bCtrCmdTrunkLight_TimeOut_Val(&rtb_TmpSignalConversionAtgASI_b);

  /* Chart: '<S2>/MsgTimeOut_Counter' incorporates:
   *  Constant: '<S2>/Constant9'
   */
  INL_10ms_MsgTimeOut_Counter(rtb_TmpSignalConversionAtgASI_b, 15.0,
    &rtb_MsgTimeOut_En_b, &INL_10ms_B.n_e);

  /* Switch: '<S2>/Switch2' incorporates:
   *  Constant: '<S2>/Constant12'
   */
  if (rtb_MsgTimeOut_En_b > 0.0) {
    INL_10ms_B.Switch2_k = 1U;
  } else {
    INL_10ms_B.Switch2_k = rtb_TmpSignalConversionAtgCAN_b;
  }

  /* End of Switch: '<S2>/Switch2' */

  /* Switch: '<S2>/Switch4' incorporates:
   *  Constant: '<S10>/Constant'
   *  Delay: '<S2>/Delay3'
   *  Gain: '<S3>/Gain15'
   *  Inport: '<Root>/gCAN_u8IL_TargetBriBKGLight'
   *  RelationalOperator: '<S10>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCAN_b != 0) {
    Rte_Read_gCAN_u8IL_TargetBriBKGLight_Val(&tmpRead_v);
    INL_10ms_DW.Delay3_DSTATE = (uint16)(tmpRead_v << 7);
  }

  /* End of Switch: '<S2>/Switch4' */

  /* Inport: '<Root>/gCAN_u8IL_FlickerCntBKGLight' */
  Rte_Read_gCAN_u8IL_FlickerCntBKGLight_Val(&tmpRead_u);

  /* Product: '<S2>/Product' incorporates:
   *  Constant: '<S2>/Constant1'
   *  Delay: '<S2>/Delay3'
   */
  INL_10ms_B.Product = (float64)INL_10ms_DW.Delay3_DSTATE * 0.00390625 * 10.0;

  /* Switch: '<S2>/Switch3' incorporates:
   *  Constant: '<S9>/Constant'
   *  Delay: '<S2>/Delay2'
   *  Inport: '<Root>/gCAN_u8IL_FlickerOnTBKGLight'
   *  RelationalOperator: '<S9>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCAN_b != 0) {
    INL_10ms_DW.Delay2_DSTATE = tmpRead_u;
    Rte_Read_gCAN_u8IL_FlickerOnTBKGLight_Val(&tmpRead_x);

    /* Switch: '<S2>/Switch6' incorporates:
     *  Delay: '<S2>/Delay2'
     *  Delay: '<S2>/Delay5'
     *  Gain: '<S3>/Gain17'
     *  Inport: '<Root>/gCAN_u8IL_FlickerOnTBKGLight'
     */
    INL_10ms_DW.Delay5_DSTATE = (uint16)(200U * tmpRead_x);
  }

  /* End of Switch: '<S2>/Switch3' */

  /* Product: '<S2>/Divide2' incorporates:
   *  Constant: '<S2>/Constant3'
   *  Delay: '<S2>/Delay5'
   */
  INL_10ms_B.Divide2 = (float64)INL_10ms_DW.Delay5_DSTATE * 0.5 / 10.0;

  /* Switch: '<S2>/Switch7' incorporates:
   *  Constant: '<S13>/Constant'
   *  Delay: '<S2>/Delay6'
   *  Gain: '<S3>/Gain18'
   *  Inport: '<Root>/gCAN_u8IL_FlickerOffTBKGLight'
   *  RelationalOperator: '<S13>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCAN_b != 0) {
    Rte_Read_gCAN_u8IL_FlickerOffTBKGLight_Val(&tmpRead_y);
    INL_10ms_DW.Delay6_DSTATE = (uint16)(200U * tmpRead_y);
  }

  /* End of Switch: '<S2>/Switch7' */

  /* Inport: '<Root>/gDiag_bRLBkgLightPowerOpenCirErrorFlag' */
  Rte_Read_gDiag_bRLBkgLightPowerOpenCirErrorFlag_Val(&rtb_Switch1_h);

  /* Inport: '<Root>/gDiag_bRLBkgLightPowerShortCirErrorFlag' */
  Rte_Read_gDiag_bRLBkgLightPowerShortCirErrorFlag_Val(&rtb_Switch1_iw);

  /* Inport: '<Root>/gCAN_u16IL_TimerTriTimeCourtesyLightRL' */
  Rte_Read_gCAN_u16IL_TimerTriTimeCourtesyLightRL_Val(&tmpRead_f);

  /* Inport: '<Root>/gCAN_u8IL_CtrModeCourtesyLightRL' */
  Rte_Read_gCAN_u8IL_CtrModeCourtesyLightRL_Val(&tmpRead_9);

  /* Product: '<S2>/Divide3' incorporates:
   *  Constant: '<S2>/Constant4'
   *  Delay: '<S2>/Delay6'
   */
  INL_10ms_B.Divide3 = (float64)INL_10ms_DW.Delay6_DSTATE * 0.5 / 10.0;

  /* Chart: '<S2>/Light_Control' incorporates:
   *  Delay: '<S2>/Delay2'
   */
  INL_10ms_Light_Control(INL_10ms_B.Switch2_k, INL_10ms_B.Switch2,
    INL_10ms_B.Divide, INL_10ms_B.Product, INL_10ms_DW.Delay2_DSTATE,
    INL_10ms_B.Divide2, INL_10ms_B.Divide3, INL_10ms_B.TimerOccur_b,
    INL_10ms_B.TmpSignalConversionAtgCAN_u8IL_, &INL_10ms_B.TimerShutdown_d,
    &INL_10ms_B.PWM_Out_o, &INL_10ms_DW.sf_Light_Control);

  /* DataTypeConversion: '<S2>/Data Type Conversion1' incorporates:
   *  Delay: '<S2>/Delay'
   */
  INL_10ms_DW.Delay_DSTATE = (INL_10ms_B.TimerShutdown_d != 0.0);

  /* Product: '<S2>/Divide1' incorporates:
   *  Constant: '<S2>/Constant2'
   */
  rtb_MsgTimeOut_En_b = fmod(floor(INL_10ms_B.PWM_Out_o / 10.0), 256.0);
  rtb_TmpSignalConversionAtgCAN_b = (uint8)(rtb_MsgTimeOut_En_b < 0.0 ? (sint32)
    (uint8)-(sint8)(uint8)-rtb_MsgTimeOut_En_b : (sint32)(uint8)
    rtb_MsgTimeOut_En_b);

  /* RelationalOperator: '<S2>/Relational Operator1' */
  rtb_RelationalOperator1 = (rtb_TmpSignalConversionAtgCAN_b > 0);

  /* Outport: '<Root>/gINL_bBkgLightOutputFaultSt_T' incorporates:
   *  Logic: '<S2>/Logical Operator'
   *  Logic: '<S2>/Logical Operator1'
   */
  (void) Rte_Write_gINL_bBkgLightOutputFaultSt_T_Val((rtb_Switch1_iw ||
    rtb_Switch1_h) && rtb_RelationalOperator1);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_TimerEnCourtesyLightRLOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerEnCourtesyLightRL'
   */
  Rte_Read_gCAN_u8IL_TimerEnCourtesyLightRL_Val
    (&INL_10ms_B.TmpSignalConversionAtgCAN_u8I_o);

  /* Switch: '<S26>/Switch1' incorporates:
   *  Constant: '<S26>/Constant1'
   *  Delay: '<S4>/Delay'
   */
  if (INL_10ms_DW.Delay_DSTATE_n) {
    tmp = 2;
  } else {
    tmp = INL_10ms_B.TmpSignalConversionAtgCAN_u8I_o;
  }

  /* End of Switch: '<S26>/Switch1' */

  /* Chart: '<S26>/Timer_Occur' incorporates:
   *  Gain: '<S4>/Gain'
   */
  INL_10ms_Timer_Occur((float64)tmp, 51200U * tmpRead_f,
                       &INL_10ms_B.TimerOccur_a, &INL_10ms_DW.sf_Timer_Occur_h);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_TimerActionModeCourtesyLightRLOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerActionModeCourtesyLightRL'
   */
  Rte_Read_gCAN_u8IL_TimerActionModeCourtesyLightRL_Val
    (&rtb_TmpSignalConversionAtgCAN_o);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_CtrCmdCourtesyLightRLOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_CtrCmdCourtesyLightRL'
   */
  Rte_Read_gCAN_u8IL_CtrCmdCourtesyLightRL_Val(&rtb_TmpSignalConversionAtgCA_mn);

  /* Switch: '<S4>/Switch3' incorporates:
   *  Constant: '<S18>/Constant'
   *  Delay: '<S4>/Delay1'
   *  RelationalOperator: '<S18>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCA_mn != 0) {
    INL_10ms_DW.Delay1_DSTATE_a = tmpRead_9;
  }

  /* End of Switch: '<S4>/Switch3' */

  /* Switch: '<S26>/Switch2' incorporates:
   *  Delay: '<S4>/Delay1'
   */
  if (INL_10ms_B.TimerOccur_a > 0.0) {
    INL_10ms_B.Switch2_b = rtb_TmpSignalConversionAtgCAN_o;
  } else {
    INL_10ms_B.Switch2_b = INL_10ms_DW.Delay1_DSTATE_a;
  }

  /* End of Switch: '<S26>/Switch2' */

  /* Chart: '<S4>/MsgTimeOut_Counter' incorporates:
   *  Constant: '<S4>/Constant11'
   */
  INL_10ms_MsgTimeOut_Counter(rtb_TmpSignalConversionAtgASI_b, 15.0,
    &rtb_MsgTimeOut_En_b, &INL_10ms_B.n_d);

  /* Switch: '<S4>/Switch2' incorporates:
   *  Constant: '<S4>/Constant12'
   */
  if (rtb_MsgTimeOut_En_b > 0.0) {
    INL_10ms_B.Switch2_j = 1U;
  } else {
    INL_10ms_B.Switch2_j = rtb_TmpSignalConversionAtgCA_mn;
  }

  /* End of Switch: '<S4>/Switch2' */

  /* Switch: '<S4>/Switch6' incorporates:
   *  Constant: '<S21>/Constant'
   *  Delay: '<S4>/Delay4'
   *  Gain: '<S3>/Gain6'
   *  Inport: '<Root>/gCAN_u8IL_SlopeParaCourtesyLightRL'
   *  RelationalOperator: '<S21>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCA_mn != 0) {
    Rte_Read_gCAN_u8IL_SlopeParaCourtesyLightRL_Val(&tmpRead_c);
    INL_10ms_DW.Delay4_DSTATE_n = (uint16)(200U * tmpRead_c);
  }

  /* End of Switch: '<S4>/Switch6' */

  /* Switch: '<S26>/Switch' incorporates:
   *  Delay: '<S4>/Delay4'
   *  Gain: '<S3>/Gain9'
   *  Inport: '<Root>/gCAN_u8IL_TimerGradientTimeCourtesyLightRL'
   *  Logic: '<S26>/Logical Operator'
   *  RelationalOperator: '<S26>/Relational Operator'
   */
  if ((rtb_TmpSignalConversionAtgCAN_o == 1) && (INL_10ms_B.TimerOccur_a != 0.0))
  {
    Rte_Read_gCAN_u8IL_TimerGradientTimeCourtesyLightRL_Val(&tmpRead_g);
    rtb_Switch = (uint16)(200U * tmpRead_g);
  } else {
    rtb_Switch = INL_10ms_DW.Delay4_DSTATE_n;
  }

  /* End of Switch: '<S26>/Switch' */

  /* Product: '<S4>/Divide' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S4>/Constant7'
   *  Sum: '<S4>/Add'
   */
  INL_10ms_B.Divide_o = 10000.0 / ((float64)rtb_Switch * 0.5 +
    2.2204460492503131E-16);

  /* Switch: '<S4>/Switch5' incorporates:
   *  Constant: '<S20>/Constant'
   *  Delay: '<S4>/Delay3'
   *  Gain: '<S3>/Gain5'
   *  Inport: '<Root>/gCAN_u8IL_TargetBriCourtesyLightRL'
   *  RelationalOperator: '<S20>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCA_mn != 0) {
    Rte_Read_gCAN_u8IL_TargetBriCourtesyLightRL_Val(&tmpRead_b);
    INL_10ms_DW.Delay3_DSTATE_e = (uint16)(tmpRead_b << 7);
  }

  /* End of Switch: '<S4>/Switch5' */

  /* Inport: '<Root>/gCAN_u8IL_FlickerCntCourtesyLightRL' */
  Rte_Read_gCAN_u8IL_FlickerCntCourtesyLightRL_Val(&tmpRead_a);

  /* Product: '<S4>/Product' incorporates:
   *  Constant: '<S4>/Constant1'
   *  Delay: '<S4>/Delay3'
   */
  INL_10ms_B.Product_o = (float64)INL_10ms_DW.Delay3_DSTATE_e * 0.00390625 *
    10.0;

  /* Switch: '<S4>/Switch4' incorporates:
   *  Constant: '<S19>/Constant'
   *  Delay: '<S4>/Delay2'
   *  Inport: '<Root>/gCAN_u8IL_FlickerOnTCourtesyLightRL'
   *  RelationalOperator: '<S19>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCA_mn != 0) {
    INL_10ms_DW.Delay2_DSTATE_o = tmpRead_a;
    Rte_Read_gCAN_u8IL_FlickerOnTCourtesyLightRL_Val(&tmpRead_d);

    /* Switch: '<S4>/Switch7' incorporates:
     *  Delay: '<S4>/Delay2'
     *  Delay: '<S4>/Delay5'
     *  Gain: '<S3>/Gain7'
     *  Inport: '<Root>/gCAN_u8IL_FlickerOnTCourtesyLightRL'
     */
    INL_10ms_DW.Delay5_DSTATE_c = (uint16)(200U * tmpRead_d);
  }

  /* End of Switch: '<S4>/Switch4' */

  /* Product: '<S4>/Divide2' incorporates:
   *  Constant: '<S4>/Constant3'
   *  Delay: '<S4>/Delay5'
   */
  INL_10ms_B.Divide2_f = (float64)INL_10ms_DW.Delay5_DSTATE_c * 0.5 / 10.0;

  /* Switch: '<S4>/Switch8' incorporates:
   *  Constant: '<S23>/Constant'
   *  Delay: '<S4>/Delay6'
   *  Gain: '<S3>/Gain8'
   *  Inport: '<Root>/gCAN_u8IL_FlickerOffTCourtesyLightRL'
   *  RelationalOperator: '<S23>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCA_mn != 0) {
    Rte_Read_gCAN_u8IL_FlickerOffTCourtesyLightRL_Val(&tmpRead_e);
    INL_10ms_DW.Delay6_DSTATE_j = (uint16)(200U * tmpRead_e);
  }

  /* End of Switch: '<S4>/Switch8' */

  /* Inport: '<Root>/gCAN_u16IL_TimerTriTimeCourtesyLightRR' */
  Rte_Read_gCAN_u16IL_TimerTriTimeCourtesyLightRR_Val(&tmpRead_p);

  /* Inport: '<Root>/gCAN_u8IL_CtrModeCourtesyLightRR' */
  Rte_Read_gCAN_u8IL_CtrModeCourtesyLightRR_Val(&tmpRead_j);

  /* Product: '<S4>/Divide3' incorporates:
   *  Constant: '<S4>/Constant4'
   *  Delay: '<S4>/Delay6'
   */
  INL_10ms_B.Divide3_g = (float64)INL_10ms_DW.Delay6_DSTATE_j * 0.5 / 10.0;

  /* Chart: '<S4>/Light_Control' incorporates:
   *  Delay: '<S4>/Delay2'
   */
  INL_10ms_Light_Control_a(INL_10ms_B.Switch2_j, INL_10ms_B.Switch2_b,
    INL_10ms_B.Divide_o, INL_10ms_B.Product_o, INL_10ms_DW.Delay2_DSTATE_o,
    INL_10ms_B.Divide2_f, INL_10ms_B.Divide3_g, INL_10ms_B.TimerOccur_a,
    INL_10ms_B.TmpSignalConversionAtgCAN_u8I_o, &INL_10ms_B.TimerShutdown_i,
    &INL_10ms_B.PWM_Out_g, &INL_10ms_DW.sf_Light_Control_a);

  /* Product: '<S4>/Divide1' incorporates:
   *  Constant: '<S4>/Constant2'
   */
  rtb_MsgTimeOut_En_b = fmod(floor(INL_10ms_B.PWM_Out_g / 10.0), 256.0);

  /* Switch: '<S4>/Switch1' incorporates:
   *  Product: '<S4>/Divide1'
   *  RelationalOperator: '<S4>/Relational Operator'
   */
  rtb_Switch1_h = ((rtb_MsgTimeOut_En_b < 0.0 ? (sint32)(uint8)-(sint8)(uint8)-
                    rtb_MsgTimeOut_En_b : (sint32)(uint8)rtb_MsgTimeOut_En_b) >
                   0);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_TimerEnCourtesyLightRROutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerEnCourtesyLightRR'
   */
  Rte_Read_gCAN_u8IL_TimerEnCourtesyLightRR_Val
    (&INL_10ms_B.TmpSignalConversionAtgCAN_u8I_i);

  /* Switch: '<S36>/Switch1' incorporates:
   *  Constant: '<S36>/Constant1'
   *  Delay: '<S5>/Delay'
   */
  if (INL_10ms_DW.Delay_DSTATE_g) {
    tmp = 2;
  } else {
    tmp = INL_10ms_B.TmpSignalConversionAtgCAN_u8I_i;
  }

  /* End of Switch: '<S36>/Switch1' */

  /* Chart: '<S36>/Timer_Occur' incorporates:
   *  Gain: '<S5>/Gain'
   */
  INL_10ms_Timer_Occur((float64)tmp, 51200U * tmpRead_p,
                       &INL_10ms_B.TimerOccur_p, &INL_10ms_DW.sf_Timer_Occur_n);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_TimerActionModeCourtesyLightRROutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerActionModeCourtesyLightRR'
   */
  Rte_Read_gCAN_u8IL_TimerActionModeCourtesyLightRR_Val
    (&rtb_TmpSignalConversionAtgCAN_e);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_CtrCmdCourtesyLightRROutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_CtrCmdCourtesyLightRR'
   */
  Rte_Read_gCAN_u8IL_CtrCmdCourtesyLightRR_Val(&rtb_TmpSignalConversionAtgCAN_i);

  /* Switch: '<S5>/Switch3' incorporates:
   *  Constant: '<S28>/Constant'
   *  Delay: '<S5>/Delay1'
   *  RelationalOperator: '<S28>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCAN_i != 0) {
    INL_10ms_DW.Delay1_DSTATE_c = tmpRead_j;
  }

  /* End of Switch: '<S5>/Switch3' */

  /* Switch: '<S36>/Switch2' incorporates:
   *  Delay: '<S5>/Delay1'
   */
  if (INL_10ms_B.TimerOccur_p > 0.0) {
    INL_10ms_B.Switch2_c = rtb_TmpSignalConversionAtgCAN_e;
  } else {
    INL_10ms_B.Switch2_c = INL_10ms_DW.Delay1_DSTATE_c;
  }

  /* End of Switch: '<S36>/Switch2' */

  /* Chart: '<S5>/MsgTimeOut_Counter' incorporates:
   *  Constant: '<S5>/Constant11'
   */
  INL_10ms_MsgTimeOut_Counter(rtb_TmpSignalConversionAtgASI_b, 15.0,
    &rtb_MsgTimeOut_En_b, &INL_10ms_B.n_p);

  /* Switch: '<S5>/Switch2' incorporates:
   *  Constant: '<S5>/Constant12'
   */
  if (rtb_MsgTimeOut_En_b > 0.0) {
    INL_10ms_B.Switch2_h = 1U;
  } else {
    INL_10ms_B.Switch2_h = rtb_TmpSignalConversionAtgCAN_i;
  }

  /* End of Switch: '<S5>/Switch2' */

  /* Switch: '<S5>/Switch6' incorporates:
   *  Constant: '<S31>/Constant'
   *  Delay: '<S5>/Delay4'
   *  Gain: '<S3>/Gain11'
   *  Inport: '<Root>/gCAN_u8IL_SlopeParaCourtesyLightRR'
   *  RelationalOperator: '<S31>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCAN_i != 0) {
    Rte_Read_gCAN_u8IL_SlopeParaCourtesyLightRR_Val(&tmpRead_m);
    INL_10ms_DW.Delay4_DSTATE_g = (uint16)(200U * tmpRead_m);
  }

  /* End of Switch: '<S5>/Switch6' */

  /* Switch: '<S36>/Switch' incorporates:
   *  Delay: '<S5>/Delay4'
   *  Gain: '<S3>/Gain14'
   *  Inport: '<Root>/gCAN_u8IL_TimerGradientTimeCourtesyLightRR'
   *  Logic: '<S36>/Logical Operator'
   *  RelationalOperator: '<S36>/Relational Operator'
   */
  if ((rtb_TmpSignalConversionAtgCAN_e == 1) && (INL_10ms_B.TimerOccur_p != 0.0))
  {
    Rte_Read_gCAN_u8IL_TimerGradientTimeCourtesyLightRR_Val(&tmpRead_q);
    rtb_Switch = (uint16)(200U * tmpRead_q);
  } else {
    rtb_Switch = INL_10ms_DW.Delay4_DSTATE_g;
  }

  /* End of Switch: '<S36>/Switch' */

  /* Product: '<S5>/Divide' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant7'
   *  Sum: '<S5>/Add'
   */
  INL_10ms_B.Divide_g = 10000.0 / ((float64)rtb_Switch * 0.5 +
    2.2204460492503131E-16);

  /* Switch: '<S5>/Switch5' incorporates:
   *  Constant: '<S30>/Constant'
   *  Delay: '<S5>/Delay3'
   *  Gain: '<S3>/Gain10'
   *  Inport: '<Root>/gCAN_u8IL_TargetBriCourtesyLightRR'
   *  RelationalOperator: '<S30>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCAN_i != 0) {
    Rte_Read_gCAN_u8IL_TargetBriCourtesyLightRR_Val(&tmpRead_l);
    INL_10ms_DW.Delay3_DSTATE_d = (uint16)(tmpRead_l << 7);
  }

  /* End of Switch: '<S5>/Switch5' */

  /* Inport: '<Root>/gCAN_u8IL_FlickerCntCourtesyLightRR' */
  Rte_Read_gCAN_u8IL_FlickerCntCourtesyLightRR_Val(&tmpRead_k);

  /* Product: '<S5>/Product' incorporates:
   *  Constant: '<S5>/Constant1'
   *  Delay: '<S5>/Delay3'
   */
  INL_10ms_B.Product_h = (float64)INL_10ms_DW.Delay3_DSTATE_d * 0.00390625 *
    10.0;

  /* Switch: '<S5>/Switch4' incorporates:
   *  Constant: '<S29>/Constant'
   *  Delay: '<S5>/Delay2'
   *  Inport: '<Root>/gCAN_u8IL_FlickerOnTCourtesyLightRR'
   *  RelationalOperator: '<S29>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCAN_i != 0) {
    INL_10ms_DW.Delay2_DSTATE_n = tmpRead_k;
    Rte_Read_gCAN_u8IL_FlickerOnTCourtesyLightRR_Val(&tmpRead_n);

    /* Switch: '<S5>/Switch7' incorporates:
     *  Delay: '<S5>/Delay2'
     *  Delay: '<S5>/Delay5'
     *  Gain: '<S3>/Gain12'
     *  Inport: '<Root>/gCAN_u8IL_FlickerOnTCourtesyLightRR'
     */
    INL_10ms_DW.Delay5_DSTATE_k = (uint16)(200U * tmpRead_n);
  }

  /* End of Switch: '<S5>/Switch4' */

  /* Product: '<S5>/Divide2' incorporates:
   *  Constant: '<S5>/Constant3'
   *  Delay: '<S5>/Delay5'
   */
  INL_10ms_B.Divide2_p = (float64)INL_10ms_DW.Delay5_DSTATE_k * 0.5 / 10.0;

  /* Switch: '<S5>/Switch8' incorporates:
   *  Constant: '<S33>/Constant'
   *  Delay: '<S5>/Delay6'
   *  Gain: '<S3>/Gain13'
   *  Inport: '<Root>/gCAN_u8IL_FlickerOffTCourtesyLightRR'
   *  RelationalOperator: '<S33>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCAN_i != 0) {
    Rte_Read_gCAN_u8IL_FlickerOffTCourtesyLightRR_Val(&tmpRead_o);
    INL_10ms_DW.Delay6_DSTATE_d = (uint16)(200U * tmpRead_o);
  }

  /* End of Switch: '<S5>/Switch8' */

  /* Inport: '<Root>/gCAN_u16IL_TimerTriTimeTrunkLight' */
  Rte_Read_gCAN_u16IL_TimerTriTimeTrunkLight_Val(&tmpRead_5);

  /* Inport: '<Root>/gCAN_u8IL_CtrModeTrunkLight' */
  Rte_Read_gCAN_u8IL_CtrModeTrunkLight_Val(&tmpRead);

  /* Product: '<S5>/Divide3' incorporates:
   *  Constant: '<S5>/Constant4'
   *  Delay: '<S5>/Delay6'
   */
  INL_10ms_B.Divide3_o = (float64)INL_10ms_DW.Delay6_DSTATE_d * 0.5 / 10.0;

  /* Chart: '<S5>/Light_Control' incorporates:
   *  Delay: '<S5>/Delay2'
   */
  INL_10ms_Light_Control_a(INL_10ms_B.Switch2_h, INL_10ms_B.Switch2_c,
    INL_10ms_B.Divide_g, INL_10ms_B.Product_h, INL_10ms_DW.Delay2_DSTATE_n,
    INL_10ms_B.Divide2_p, INL_10ms_B.Divide3_o, INL_10ms_B.TimerOccur_p,
    INL_10ms_B.TmpSignalConversionAtgCAN_u8I_i, &INL_10ms_B.TimerShutdown_g,
    &INL_10ms_B.PWM_Out_e, &INL_10ms_DW.sf_Light_Control_p);

  /* Product: '<S5>/Divide1' incorporates:
   *  Constant: '<S5>/Constant2'
   */
  rtb_MsgTimeOut_En_b = fmod(floor(INL_10ms_B.PWM_Out_e / 10.0), 256.0);

  /* Switch: '<S5>/Switch1' incorporates:
   *  Product: '<S5>/Divide1'
   *  RelationalOperator: '<S5>/Relational Operator'
   */
  rtb_Switch1_iw = ((rtb_MsgTimeOut_En_b < 0.0 ? (sint32)(uint8)-(sint8)(uint8)-
                     rtb_MsgTimeOut_En_b : (sint32)(uint8)rtb_MsgTimeOut_En_b) >
                    0);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_TimerEnTrunkLightOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerEnTrunkLight'
   */
  Rte_Read_gCAN_u8IL_TimerEnTrunkLight_Val
    (&INL_10ms_B.TmpSignalConversionAtgCAN_u8I_c);

  /* Switch: '<S46>/Switch1' incorporates:
   *  Constant: '<S46>/Constant1'
   *  Delay: '<S7>/Delay'
   */
  if (INL_10ms_DW.Delay_DSTATE_l) {
    tmp = 2;
  } else {
    tmp = INL_10ms_B.TmpSignalConversionAtgCAN_u8I_c;
  }

  /* End of Switch: '<S46>/Switch1' */

  /* Chart: '<S46>/Timer_Occur' incorporates:
   *  Gain: '<S7>/Gain'
   */
  INL_10ms_Timer_Occur((float64)tmp, 51200U * tmpRead_5, &INL_10ms_B.TimerOccur,
                       &INL_10ms_DW.sf_Timer_Occur_a);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_TimerActionModeTrunkLightOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerActionModeTrunkLight'
   */
  Rte_Read_gCAN_u8IL_TimerActionModeTrunkLight_Val
    (&rtb_TmpSignalConversionAtgCAN_d);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8IL_CtrCmdTrunkLightOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_CtrCmdTrunkLight'
   */
  Rte_Read_gCAN_u8IL_CtrCmdTrunkLight_Val(&rtb_TmpSignalConversionAtgCA_gw);

  /* Switch: '<S7>/Switch1' incorporates:
   *  Constant: '<S38>/Constant'
   *  Delay: '<S7>/Delay1'
   *  RelationalOperator: '<S38>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCA_gw != 0) {
    INL_10ms_DW.Delay1_DSTATE_n = tmpRead;
  }

  /* End of Switch: '<S7>/Switch1' */

  /* Switch: '<S46>/Switch2' incorporates:
   *  Delay: '<S7>/Delay1'
   */
  if (INL_10ms_B.TimerOccur > 0.0) {
    INL_10ms_B.Switch2_j5 = rtb_TmpSignalConversionAtgCAN_d;
  } else {
    INL_10ms_B.Switch2_j5 = INL_10ms_DW.Delay1_DSTATE_n;
  }

  /* End of Switch: '<S46>/Switch2' */

  /* Chart: '<S7>/MsgTimeOut_Counter' incorporates:
   *  Constant: '<S7>/Constant9'
   */
  INL_10ms_MsgTimeOut_Counter(rtb_TmpSignalConversionAtgASI_b, 15.0,
    &rtb_MsgTimeOut_En_b, &INL_10ms_B.n);

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant12'
   */
  if (rtb_MsgTimeOut_En_b > 0.0) {
    INL_10ms_B.Switch2_o = 1U;
  } else {
    INL_10ms_B.Switch2_o = rtb_TmpSignalConversionAtgCA_gw;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* Switch: '<S7>/Switch5' incorporates:
   *  Constant: '<S41>/Constant'
   *  Delay: '<S7>/Delay4'
   *  Gain: '<S3>/Gain1'
   *  Inport: '<Root>/gCAN_u8IL_SlopeParaTrunkLight'
   *  RelationalOperator: '<S41>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCA_gw != 0) {
    Rte_Read_gCAN_u8IL_SlopeParaTrunkLight_Val(&tmpRead_2);
    INL_10ms_DW.Delay4_DSTATE_a = (uint16)(200U * tmpRead_2);
  }

  /* End of Switch: '<S7>/Switch5' */

  /* Switch: '<S46>/Switch' incorporates:
   *  Delay: '<S7>/Delay4'
   *  Gain: '<S3>/Gain4'
   *  Inport: '<Root>/gCAN_u8IL_TimerGradientTimeTrunkLight'
   *  Logic: '<S46>/Logical Operator'
   *  RelationalOperator: '<S46>/Relational Operator'
   */
  if ((rtb_TmpSignalConversionAtgCAN_d == 1) && (INL_10ms_B.TimerOccur != 0.0))
  {
    Rte_Read_gCAN_u8IL_TimerGradientTimeTrunkLight_Val(&tmpRead_6);
    rtb_Switch = (uint16)(200U * tmpRead_6);
  } else {
    rtb_Switch = INL_10ms_DW.Delay4_DSTATE_a;
  }

  /* End of Switch: '<S46>/Switch' */

  /* Product: '<S7>/Divide' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant7'
   *  Sum: '<S7>/Add'
   */
  INL_10ms_B.Divide_i = 10000.0 / ((float64)rtb_Switch * 0.5 +
    2.2204460492503131E-16);

  /* Switch: '<S7>/Switch4' incorporates:
   *  Constant: '<S40>/Constant'
   *  Delay: '<S7>/Delay3'
   *  Gain: '<S3>/Gain'
   *  Inport: '<Root>/gCAN_u8IL_TargetBriTrunkLight'
   *  RelationalOperator: '<S40>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCA_gw != 0) {
    Rte_Read_gCAN_u8IL_TargetBriTrunkLight_Val(&tmpRead_1);
    INL_10ms_DW.Delay3_DSTATE_j = (uint16)(tmpRead_1 << 7);
  }

  /* End of Switch: '<S7>/Switch4' */

  /* Inport: '<Root>/gCAN_u8IL_FlickerCntTrunkLight' */
  Rte_Read_gCAN_u8IL_FlickerCntTrunkLight_Val(&tmpRead_0);

  /* Product: '<S7>/Product' incorporates:
   *  Constant: '<S7>/Constant1'
   *  Delay: '<S7>/Delay3'
   */
  INL_10ms_B.Product_a = (float64)INL_10ms_DW.Delay3_DSTATE_j * 0.00390625 *
    10.0;

  /* Switch: '<S7>/Switch3' incorporates:
   *  Constant: '<S39>/Constant'
   *  Delay: '<S7>/Delay2'
   *  Inport: '<Root>/gCAN_u8IL_FlickerOnTTrunkLight'
   *  RelationalOperator: '<S39>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCA_gw != 0) {
    INL_10ms_DW.Delay2_DSTATE_e = tmpRead_0;
    Rte_Read_gCAN_u8IL_FlickerOnTTrunkLight_Val(&tmpRead_3);

    /* Switch: '<S7>/Switch6' incorporates:
     *  Delay: '<S7>/Delay2'
     *  Delay: '<S7>/Delay5'
     *  Gain: '<S3>/Gain2'
     *  Inport: '<Root>/gCAN_u8IL_FlickerOnTTrunkLight'
     */
    INL_10ms_DW.Delay5_DSTATE_o = (uint16)(200U * tmpRead_3);
  }

  /* End of Switch: '<S7>/Switch3' */

  /* Product: '<S7>/Divide2' incorporates:
   *  Constant: '<S7>/Constant3'
   *  Delay: '<S7>/Delay5'
   */
  INL_10ms_B.Divide2_e = (float64)INL_10ms_DW.Delay5_DSTATE_o * 0.5 / 10.0;

  /* Switch: '<S7>/Switch7' incorporates:
   *  Constant: '<S43>/Constant'
   *  Delay: '<S7>/Delay6'
   *  Gain: '<S3>/Gain3'
   *  Inport: '<Root>/gCAN_u8IL_FlickerOffTTrunkLight'
   *  RelationalOperator: '<S43>/Compare'
   */
  if (rtb_TmpSignalConversionAtgCA_gw != 0) {
    Rte_Read_gCAN_u8IL_FlickerOffTTrunkLight_Val(&tmpRead_4);
    INL_10ms_DW.Delay6_DSTATE_p = (uint16)(200U * tmpRead_4);
  }

  /* End of Switch: '<S7>/Switch7' */

  /* DataStoreWrite: '<S16>/Data Store Write' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerActionBKGLight'
   */
  Rte_Read_gCAN_u8IL_TimerActionBKGLight_Val(&INL_10ms_DW.TimerAction);

  /* Inport: '<Root>/gDiag_bRRCourtesyLightOpenCirErrorFlag' */
  Rte_Read_gDiag_bRRCourtesyLightOpenCirErrorFlag_Val(&tmpRead_s);

  /* Inport: '<Root>/gDiag_bRRCourtesyLightShortCirErrorFlag' */
  Rte_Read_gDiag_bRRCourtesyLightShortCirErrorFlag_Val(&tmpRead_r);

  /* DataStoreWrite: '<S36>/Data Store Write' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerActionCourtesyLightRR'
   */
  Rte_Read_gCAN_u8IL_TimerActionCourtesyLightRR_Val(&INL_10ms_DW.TimerAction_d);

  /* Inport: '<Root>/gDiag_bRLCourtesyLightOpenCirErrorFlag' */
  Rte_Read_gDiag_bRLCourtesyLightOpenCirErrorFlag_Val(&tmpRead_i);

  /* Inport: '<Root>/gDiag_bRLCourtesyLightShortCirErrorFlag' */
  Rte_Read_gDiag_bRLCourtesyLightShortCirErrorFlag_Val(&tmpRead_h);

  /* DataStoreWrite: '<S26>/Data Store Write' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerActionCourtesyLightRL'
   */
  Rte_Read_gCAN_u8IL_TimerActionCourtesyLightRL_Val(&INL_10ms_DW.TimerAction_p);

  /* Inport: '<Root>/gDiag_bTrunkLightOpenCirErrorFlag' */
  Rte_Read_gDiag_bTrunkLightOpenCirErrorFlag_Val(&tmpRead_8);

  /* Inport: '<Root>/gDiag_bTrunkLightShortCirErrorFlag' */
  Rte_Read_gDiag_bTrunkLightShortCirErrorFlag_Val(&tmpRead_7);

  /* DataStoreWrite: '<S46>/Data Store Write' incorporates:
   *  Inport: '<Root>/gCAN_u8IL_TimerActionTrunkLight'
   */
  Rte_Read_gCAN_u8IL_TimerActionTrunkLight_Val(&INL_10ms_DW.TimerAction_l);

  /* Product: '<S7>/Divide3' incorporates:
   *  Constant: '<S7>/Constant4'
   *  Delay: '<S7>/Delay6'
   */
  INL_10ms_B.Divide3_o5 = (float64)INL_10ms_DW.Delay6_DSTATE_p * 0.5 / 10.0;

  /* Chart: '<S7>/Light_Control' incorporates:
   *  Delay: '<S7>/Delay2'
   */
  INL_10ms_Light_Control(INL_10ms_B.Switch2_o, INL_10ms_B.Switch2_j5,
    INL_10ms_B.Divide_i, INL_10ms_B.Product_a, INL_10ms_DW.Delay2_DSTATE_e,
    INL_10ms_B.Divide2_e, INL_10ms_B.Divide3_o5, INL_10ms_B.TimerOccur,
    INL_10ms_B.TmpSignalConversionAtgCAN_u8I_c, &INL_10ms_B.TimerShutdown,
    &INL_10ms_B.PWM_Out, &INL_10ms_DW.sf_Light_Control_p0);

  /* Product: '<S7>/Divide1' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  rtb_MsgTimeOut_En_b = fmod(floor(INL_10ms_B.PWM_Out / 10.0), 256.0);
  rtb_TmpSignalConversionAtgCAN_d = (uint8)(rtb_MsgTimeOut_En_b < 0.0 ? (sint32)
    (uint8)-(sint8)(uint8)-rtb_MsgTimeOut_En_b : (sint32)(uint8)
    rtb_MsgTimeOut_En_b);

  /* RelationalOperator: '<S7>/Relational Operator1' */
  rtb_RelationalOperator1_b = (rtb_TmpSignalConversionAtgCAN_d > 0);

  /* Outport: '<Root>/gINL_u32AllowSleep_Local' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion'
   *  Logic: '<S2>/Logical Operator2'
   *  Logic: '<S4>/Logical Operator2'
   *  Logic: '<S5>/Logical Operator2'
   *  Logic: '<S6>/Logical Operator'
   *  Logic: '<S7>/Logical Operator2'
   *  RelationalOperator: '<S2>/Relational Operator'
   *  RelationalOperator: '<S4>/Relational Operator1'
   *  RelationalOperator: '<S5>/Relational Operator1'
   *  RelationalOperator: '<S7>/Relational Operator'
   */
  (void) Rte_Write_gINL_u32AllowSleep_Local_Val((uint32)
    ((rtb_RelationalOperator1_b && (INL_10ms_B.TmpSignalConversionAtgCAN_u8I_c ==
    1)) || (rtb_Switch1_iw && (INL_10ms_B.TmpSignalConversionAtgCAN_u8I_i == 1))
     || (rtb_Switch1_h && (INL_10ms_B.TmpSignalConversionAtgCAN_u8I_o == 1)) ||
     (rtb_RelationalOperator1 && (INL_10ms_B.TmpSignalConversionAtgCAN_u8IL_ ==
    1))));

  /* Outport: '<Root>/gINL_bTrunkLightOutputFaultSt' incorporates:
   *  Logic: '<S7>/Logical Operator'
   *  Logic: '<S7>/Logical Operator1'
   */
  (void) Rte_Write_gINL_bTrunkLightOutputFaultSt_Val((tmpRead_7 || tmpRead_8) &&
    rtb_RelationalOperator1_b);

  /* Outport: '<Root>/gINL_bTrunkLightOutputSt' */
  (void) Rte_Write_gINL_bTrunkLightOutputSt_Val(rtb_RelationalOperator1_b);

  /* Outport: '<Root>/gINL_u8TrunkLampOutput' */
  (void) Rte_Write_gINL_u8TrunkLampOutput_Val(rtb_TmpSignalConversionAtgCAN_d);

  /* DataTypeConversion: '<S7>/Data Type Conversion1' incorporates:
   *  Delay: '<S7>/Delay'
   */
  INL_10ms_DW.Delay_DSTATE_l = (INL_10ms_B.TimerShutdown != 0.0);

  /* Outport: '<Root>/gINL_bRRCourtesyLightOutputFaultSt' incorporates:
   *  Logic: '<S5>/Logical Operator'
   *  Logic: '<S5>/Logical Operator1'
   */
  (void) Rte_Write_gINL_bRRCourtesyLightOutputFaultSt_Val((tmpRead_r ||
    tmpRead_s) && rtb_Switch1_iw);

  /* Outport: '<Root>/gINL_bRRCourtesyLightOutputSt' */
  (void) Rte_Write_gINL_bRRCourtesyLightOutputSt_Val(rtb_Switch1_iw);

  /* Outport: '<Root>/gINL_bRRCourtesyLightOutput' */
  (void) Rte_Write_gINL_bRRCourtesyLightOutput_Val(rtb_Switch1_iw);

  /* DataTypeConversion: '<S5>/Data Type Conversion1' incorporates:
   *  Delay: '<S5>/Delay'
   */
  INL_10ms_DW.Delay_DSTATE_g = (INL_10ms_B.TimerShutdown_g != 0.0);

  /* Outport: '<Root>/gINL_bRLCourtesyLightOutputFaultSt' incorporates:
   *  Logic: '<S4>/Logical Operator'
   *  Logic: '<S4>/Logical Operator1'
   */
  (void) Rte_Write_gINL_bRLCourtesyLightOutputFaultSt_Val((tmpRead_h ||
    tmpRead_i) && rtb_Switch1_h);

  /* Outport: '<Root>/gINL_bRLCourtesyLightOutputSt' */
  (void) Rte_Write_gINL_bRLCourtesyLightOutputSt_Val(rtb_Switch1_h);

  /* Outport: '<Root>/gINL_bRLCourtesyLightOutput' */
  (void) Rte_Write_gINL_bRLCourtesyLightOutput_Val(rtb_Switch1_h);

  /* DataTypeConversion: '<S4>/Data Type Conversion1' incorporates:
   *  Delay: '<S4>/Delay'
   */
  INL_10ms_DW.Delay_DSTATE_n = (INL_10ms_B.TimerShutdown_i != 0.0);

  /* Outport: '<Root>/gINL_bBkgLightOutputSt_T' */
  (void) Rte_Write_gINL_bBkgLightOutputSt_T_Val(rtb_RelationalOperator1);

  /* Outport: '<Root>/gINL_u8RearBackGroudLightOutput' */
  (void) Rte_Write_gINL_u8RearBackGroudLightOutput_Val
    (rtb_TmpSignalConversionAtgCAN_b);

  /* Outport: '<Root>/gINL_u32AllowSleep_NW' */
  (void) Rte_Write_gINL_u32AllowSleep_NW_Val(INL_10ms_ConstB.Constant);

  /* Outport: '<Root>/gINL_u8Wakeup' */
  (void) Rte_Write_gINL_u8Wakeup_Val(INL_10ms_ConstB.Constant2);
}

/* Model initialize function */
void INL_Runnable_Init(void)
{
  /* SystemInitialize for Chart: '<S2>/MsgTimeOut_Counter' */
  INL_10m_MsgTimeOut_Counter_Init(&INL_10ms_B.n_e);

  /* SystemInitialize for Chart: '<S2>/Light_Control' */
  INL_10ms_Light_Control_Init(&INL_10ms_B.PWM_Out_o);

  /* SystemInitialize for Chart: '<S4>/MsgTimeOut_Counter' */
  INL_10m_MsgTimeOut_Counter_Init(&INL_10ms_B.n_d);

  /* SystemInitialize for Chart: '<S4>/Light_Control' */
  INL_10ms_Light_Control_i_Init(&INL_10ms_B.PWM_Out_g);

  /* SystemInitialize for Chart: '<S5>/MsgTimeOut_Counter' */
  INL_10m_MsgTimeOut_Counter_Init(&INL_10ms_B.n_p);

  /* SystemInitialize for Chart: '<S5>/Light_Control' */
  INL_10ms_Light_Control_i_Init(&INL_10ms_B.PWM_Out_e);

  /* SystemInitialize for Chart: '<S7>/MsgTimeOut_Counter' */
  INL_10m_MsgTimeOut_Counter_Init(&INL_10ms_B.n);

  /* SystemInitialize for Chart: '<S7>/Light_Control' */
  INL_10ms_Light_Control_Init(&INL_10ms_B.PWM_Out);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
