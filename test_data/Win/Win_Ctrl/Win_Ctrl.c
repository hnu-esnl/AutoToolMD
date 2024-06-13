/*
 * File: Win_Ctrl.c
 *
 * Code generated for Simulink model 'Win_Ctrl'.
 *
 * Model version                  : 1.300
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Nov  1 10:59:07 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Win_Ctrl.h"
#include "plook_u32u8_even0cka.h"
#define b_UP1_AP_EN                    ((uint8)0U)
#define b_SOFTWARE_CIRCLE              (1.0)

/* Named constants for Chart: '<S18>/SWTypeStateDvFL' */
#define Win_Ctrl_IN_DnTEMP             ((uint8)1U)
#define Win_Ctrl_IN_DnTime             ((uint8)2U)
#define Win_Ctrl_IN_Down               ((uint8)1U)
#define Win_Ctrl_IN_Init               ((uint8)2U)
#define Win_Ctrl_IN_NO_ACTIVE_CHILD_k  ((uint8)0U)
#define Win_Ctrl_IN_SwType0            ((uint8)1U)
#define Win_Ctrl_IN_SwType1            ((uint8)2U)
#define Win_Ctrl_IN_UP                 ((uint8)3U)
#define Win_Ctrl_IN_UPTEMP             ((uint8)1U)
#define Win_Ctrl_IN_UPTime             ((uint8)2U)

/* Named constants for Chart: '<S27>/SLC_Initialization_FR' */
#define Win_Ctrl_IN_Init_Finished      ((uint8)2U)
#define Win_Ctrl_IN_Init_g             ((uint8)1U)
#define Win_Ctrl_IN_MovingUp           ((uint8)3U)
#define Win_Ctrl_IN_NO_ACTIVE_CHILD_ks ((uint8)0U)
#define Win_Ctrl_IN_Success            ((uint8)1U)
#define Win_Ctrl_IN_SwHold             ((uint8)4U)
#define Win_Ctrl_IN_Temp               ((uint8)2U)
#define Win_Ctrl_IN_Wait               ((uint8)5U)
#define Win_Ctrl_IN_WaitSecond         ((uint8)6U)

/* Named constants for Chart: '<S28>/Over_Time_Protect' */
#define Win_Ctrl_IN_Delay              ((uint8)1U)
#define Win_Ctrl_IN_NotProt            ((uint8)2U)
#define Win_Ctrl_IN_OverRunTime        ((uint8)3U)

/* Named constants for Chart: '<S39>/MotionIdx' */
#define Win_Ctrl_IN_Initial            ((uint8)1U)
#define Win_Ctrl_IN_NO_ACTIVE_CHILD_m  ((uint8)0U)
#define Win_Ctrl_IN_ShortDrops         ((uint8)2U)
#define Win_Ctrl_IN_Wait_h             ((uint8)3U)

/* Named constants for Chart: '<S46>/SLC_ThermalProtection' */
#define Win_Ctrl_IN_WND_MV             ((uint8)1U)
#define Win_Ctrl_IN_WND_STOP           ((uint8)2U)

/* Named constants for Chart: '<S79>/SLC' */
#define Win_Ctrl_IN_AUTO_DN            ((uint8)1U)
#define Win_Ctrl_IN_AUTO_UP            ((uint8)2U)
#define Win_Ctrl_IN_Action             ((uint8)1U)
#define Win_Ctrl_IN_DN                 ((uint8)1U)
#define Win_Ctrl_IN_DN1                ((uint8)2U)
#define Win_Ctrl_IN_ElecDn             ((uint8)2U)
#define Win_Ctrl_IN_ElecDoor           ((uint8)2U)
#define Win_Ctrl_IN_Init_a             ((uint8)3U)
#define Win_Ctrl_IN_MANUAL_DN          ((uint8)3U)
#define Win_Ctrl_IN_MANUAL_UP          ((uint8)4U)
#define Win_Ctrl_IN_NO_ACTIVE_CHILD_f  ((uint8)0U)
#define Win_Ctrl_IN_NormalizeStop      ((uint8)1U)
#define Win_Ctrl_IN_NormalizeStop1     ((uint8)2U)
#define Win_Ctrl_IN_OPDn               ((uint8)3U)
#define Win_Ctrl_IN_OPDoor             ((uint8)4U)
#define Win_Ctrl_IN_Relearn_DN         ((uint8)5U)
#define Win_Ctrl_IN_Reverse            ((uint8)3U)
#define Win_Ctrl_IN_STOP               ((uint8)3U)
#define Win_Ctrl_IN_Stop               ((uint8)4U)
#define Win_Ctrl_IN_Stop1              ((uint8)2U)
#define Win_Ctrl_IN_Stop2              ((uint8)3U)
#define Win_Ctrl_IN_Stop_g             ((uint8)2U)
#define Win_Ctrl_IN_Target             ((uint8)5U)
#define Win_Ctrl_IN_UPFrame            ((uint8)6U)
#define Win_Ctrl_IN_UPFrameLess        ((uint8)7U)
#define Win_Ctrl_IN_UP_i               ((uint8)5U)
#define Win_Ctrl_IN_Ventilation        ((uint8)6U)
#define Win_Ctrl_IN_Wait_a             ((uint8)8U)
#define Win_Ctrl_IN_Wait_ay            ((uint8)5U)

/* Named constants for Chart: '<S101>/CCU_Req' */
#define Wi_IN_Target_Percentage_Control ((uint8)5U)
#define Win_Ctrl_IN_AutoDown           ((uint8)1U)
#define Win_Ctrl_IN_AutoUp             ((uint8)1U)
#define Win_Ctrl_IN_DnWait             ((uint8)1U)
#define Win_Ctrl_IN_Down_a             ((uint8)2U)
#define Win_Ctrl_IN_INIT               ((uint8)3U)
#define Win_Ctrl_IN_ManualDown         ((uint8)2U)
#define Win_Ctrl_IN_ManualUp           ((uint8)2U)
#define Win_Ctrl_IN_NO_ACTIVE_CHILD_m1 ((uint8)0U)
#define Win_Ctrl_IN_Stop_i             ((uint8)4U)
#define Win_Ctrl_IN_UPWait             ((uint8)6U)
#define Win_Ctrl_IN_Up                 ((uint8)7U)
#define Win_Ctrl_IN_VentilationMode    ((uint8)8U)
#define Win_Ctrl_IN_Wait1              ((uint8)10U)
#define Win_Ctrl_IN_Wait_p             ((uint8)9U)

/* Named constants for Chart: '<S114>/Chart' */
#define Win_Ctrl_IN_CLShortUp          ((uint8)1U)
#define Win_Ctrl_IN_Init_l             ((uint8)2U)
#define Win_Ctrl_IN_NO_ACTIVE_CHILD_b  ((uint8)0U)
#define Win_Ctrl_IN_Wait_i             ((uint8)3U)

/* Named constants for Chart: '<S130>/ElecDoor_Req' */
#define Win_Ctrl_IN_ELECShortDrop      ((uint8)1U)
#define Win_Ctrl_IN_Init_gw            ((uint8)2U)
#define Win_Ctrl_IN_NO_ACTIVE_CHILD_e  ((uint8)0U)

/* Named constants for Chart: '<S145>/OpenDoor_Req' */
#define Win_Ctrl_IN_Init_h             ((uint8)1U)
#define Win_Ctrl_IN_NO_ACTIVE_CHILD_bi ((uint8)0U)
#define Win_Ctrl_IN_OPShortDrop        ((uint8)2U)

/* Named constants for Chart: '<S157>/Outside_Req' */
#define Win_Ctrl_IN_Init_d             ((uint8)1U)
#define Win_Ctrl_IN_NO_ACTIVE_CHILD_eo ((uint8)0U)
#define Win_Ctrl_IN_OutSideShortDrop   ((uint8)2U)

/* Named constants for Chart: '<S165>/Special_Mode_Req' */
#define Win_Ctrl_IN_INIT_h             ((uint8)1U)
#define Win_Ctrl_IN_ManualDown_e       ((uint8)2U)
#define Win_Ctrl_IN_ManualUp_o         ((uint8)3U)
#define Win_Ctrl_IN_NO_ACTIVE_CHILD_l  ((uint8)0U)
#define Win_Ctrl_IN_SPECIALMODE        ((uint8)2U)
#define Win_Ctrl_IN_Stop_o             ((uint8)4U)

/* Named constants for Chart: '<S175>/DriverSide_FLSwStuck' */
#define Win_Ctrl_IN_DelayRec           ((uint8)2U)
#define Win_Ctrl_IN_Delay_p            ((uint8)1U)
#define Win_Ctrl_IN_NotStuck           ((uint8)3U)
#define Win_Ctrl_IN_Prot               ((uint8)4U)

/* Named constants for Chart: '<S27>/SLC_Initialization_FL' */
#define Win_Ctrl_IN_Init_Finished_c    ((uint8)2U)
#define Win_Ctrl_IN_Init_m             ((uint8)1U)
#define Win_Ctrl_IN_MovingUp_n         ((uint8)3U)
#define Win_Ctrl_IN_NO_ACTIVE_CHILD_bd ((uint8)0U)
#define Win_Ctrl_IN_Success_o          ((uint8)1U)
#define Win_Ctrl_IN_SwHold_c           ((uint8)4U)
#define Win_Ctrl_IN_Temp_l             ((uint8)2U)
#define Win_Ctrl_IN_WaitSecond_m       ((uint8)6U)
#define Win_Ctrl_IN_Wait_b             ((uint8)5U)

/* Named constants for Chart: '<S3>/voltage_protection' */
#define Win_Ctrl_IN_CONFIRM            ((uint8)1U)
#define Win_Ctrl_IN_DELAY              ((uint8)2U)
#define Win_Ctrl_IN_DELAY1             ((uint8)2U)
#define Win_Ctrl_IN_Delay_px           ((uint8)1U)
#define Win_Ctrl_IN_NORMAL             ((uint8)2U)
#define Win_Ctrl_IN_OVER_VOLT          ((uint8)3U)
#define Win_Ctrl_IN_UNDER_VOLT         ((uint8)4U)

/* Named constants for Chart: '<S71>/StartAtDiffTime' */
#define Win_Ctrl_IN_START_DISABLE      ((uint8)1U)
#define Win_Ctrl_IN_START_ENABLE       ((uint8)2U)
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

/* Exported block signals */
uint8 u8WndCmdOutputReq_RRCCU;         /* '<S100>/CCU_Req' */
uint8 u8WndCmdOutputReq_RLCCU;         /* '<S99>/CCU_Req' */
uint8 u8WndCmdOutputReq_FRCCU;         /* '<S98>/CCU_Req' */
uint8 u8WndCmdOutputReq_FLCCU;         /* '<S97>/CCU_Req' */

/* Exported block states */
boolean gSLC_bRLIsInAPRangeRTE;        /* '<S1>/Data Store Memory100' */
boolean gSLC_bRRIsInAPRangeRTE;        /* '<S1>/Data Store Memory101' */
boolean gSLC_bFLIsInAPRangeRTE;        /* '<S1>/Data Store Memory98' */
boolean gSLC_bFRIsInAPRangeRTE;        /* '<S1>/Data Store Memory99' */

/* Invariant block signals (default storage) */
const ConstBlockIO_Win_Ctrl Win_Ctrl_ConstB = {
  0U,                                  /* '<S1>/Gain9' */
  0U,                                  /* '<S1>/Gain7' */

  /* Start of '<S29>/Wnd_ThermalProt_RR' */
  {
    1                                  /* '<S42>/Logical Operator' */
  }
  ,

  /* End of '<S29>/Wnd_ThermalProt_RR' */

  /* Start of '<S29>/Wnd_ThermalProt_RL' */
  {
    1                                  /* '<S41>/Logical Operator' */
  }
  ,

  /* End of '<S29>/Wnd_ThermalProt_RL' */

  /* Start of '<S29>/Wnd_ThermalProt_FR' */
  {
    1                                  /* '<S40>/Logical Operator' */
  }
  ,

  /* End of '<S29>/Wnd_ThermalProt_FR' */

  /* Start of '<S29>/Wnd_ThermalProt_FL' */
  {
    1                                  /* '<S39>/Logical Operator' */
  }
  /* End of '<S29>/Wnd_ThermalProt_FL' */
};

/* Constant parameters (default storage) */
const ConstParam_Win_Ctrl Win_Ctrl_ConstP = {
  /* Pooled Parameter (Expression: wndThermoPwPrm)
   * Referenced by:
   *   '<S46>/TempProc_Lookup'
   *   '<S53>/TempProc_Lookup'
   *   '<S60>/TempProc_Lookup'
   *   '<S67>/TempProc_Lookup'
   */
  { 5U, 8U, 40U, 8U, 5U, 8U, 40U, 16U, 5U, 8U, 40U, 16U, 5U, 5U, 40U, 8U, 5U, 8U,
    40U, 16U, 5U, 8U, 40U, 16U }
};

/* Block signals (default storage) */
BlockIO_Win_Ctrl Win_Ctrl_B;

/* Block states (default storage) */
D_Work_Win_Ctrl Win_Ctrl_DWork;
static void Win_Ctrl_ShortDropStsFL_Init(boolean *rty_bWinShortDropSt);
static void Win_Ctrl_ShortDropStsFL(boolean rtu_bWinShrtDrpFlgNVM, uint8
  rtu_u8WinCurrentPosPercent, uint8 rtu_u8WinShortDropPst, uint8
  rtu_u8NormalizeSts, boolean *rty_bWinShortDropSt);
static void Win_Ctrl_PositionSts_FL_Init(uint8 *rty_u8PositionSts);
static void Win_Ctrl_PositionSts_FL(uint8 rtu_u8NormalizeSts, uint8
  rtu_WinCurrentPos, uint8 *rty_u8PositionSts);
static void Win_Ctrl_SWTypeStateDvFL_Init(uint8 *rty_u8UINMWinSwSt);
static void Win_Ctrl_SWTypeStateDvFL(uint8 rtu_UINMWinSwType, uint8
  rtu_u8WindowSw, uint8 rtu_WinSwActivetime, uint8 *rty_u8UINMWinSwSt,
  rtDW_SWTypeStateDvFL_Win_Ctrl *localDW);
static void Win__SLC_Initialization_FR_Init(boolean *rty_bNormStartFlg);
static void Win_Ctrl_SLC_Initialization_FR(uint8 rtu_u8OutputSts, boolean
  rtu_bOverCur, uint8 rtu_u8Sw1Sts_asi, uint8 rtu_u8Sw2Sts_asi, uint8
  rtu_u8NormalizeSts, boolean rtu_bPositionLostFlg, uint8 rtu_wndIniHoldTimer,
  boolean rtu_bStall, uint8 rtu_wndNormalizeValidTimePrm, boolean
  *rty_bNormStartFlg, rtDW_SLC_Initialization_FR_Win_ *localDW);
static void Win_Ctrl_Over_Time_Protect_Init(boolean *rty_bWndOverRunTime);
static void Win_Ctrl_Over_Time_Protect(boolean rtu_u8WinOutput, uint8
  rtu_wndMaxRuntimePrm, boolean *rty_bWndOverRunTime,
  rtDW_Over_Time_Protect_Win_Ctrl *localDW);
static void Win_Ctr_Wnd_ThermalProt_FL_Init(rtB_Wnd_ThermalProt_FL_Win_Ctrl
  *localB, rtDW_Wnd_ThermalProt_FL_Win_Ctr *localDW);
static void Win_Ctrl_Wnd_ThermalProt_FL(uint32 rtu_WndTPDisableUpPrm, uint32
  rtu_WndTPDisableAllPrm, uint32 rtu_WndTPCoolDownPrm, uint32 rtu_wndTempMinAmb,
  uint32 rtu_WndAmbientTemPrm, uint16 rtu_BatteryVolt, uint32
  rtu_MotorTemperature, uint16 rtu_MotorActualCurrent, uint8
  rtu_MotorOverCurrentCfg, boolean rtu_bWinUpOutput, boolean rtu_bWinDownOutput,
  uint8 *rty_WndTPflg, uint32 *rty_WndMotorTemperature, uint32
  *rty_u32TempOffset, rtB_Wnd_ThermalProt_FL_Win_Ctrl *localB, const
  rtC_Wnd_ThermalProt_FL_Win_Ctrl *localC, rtDW_Wnd_ThermalProt_FL_Win_Ctr
  *localDW);
static void Win_Ctrl_EEPWriteShortFlag_Init(boolean *rty_bWinShrtDrpFlg, uint8
  *rty_bWinShrtDrpFlgWrtCnt);
static void Win_Ctrl_EEPWriteShortFlag(boolean rtu_bWinShrtDrpFlgTemp, uint8
  rtu_bWinShrtDrpFlgWrtCntTemp, uint8 rtu_u8WNDExecReq, boolean
  rtu_bWinShrtDrpFlgNVM, boolean *rty_bWinShrtDrpFlg, uint8
  *rty_bWinShrtDrpFlgWrtCnt, rtDW_EEPWriteShortFlag_Win_Ctrl *localDW);
static void Win_Ctrl_SLC_Init(uint8 *rty_u8WNDExecReq, boolean
  *rty_bWinShrtDrpFlgTemp, uint8 *rty_u8PWL_WinOpeationSt, uint8
  *rty_u8WNDExecStatus, uint8 *rty_bWinShrtDrpFlgWrtCntTemp);
static void Win_Ctrl_SLC(uint8 rtu_u8WNDCmd, uint8 rtu_u8MotorTargetPstCtr,
  uint8 rtu_u8WLVentilationPst, uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, uint8 rtu_u8PowerDoorReqWinOpenPst, boolean
  rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8 rtu_u8CurrtFixFlg, uint8
  rtu_u8NormalizeSts, boolean rtu_bDoorFramelessGlassCfg, boolean
  rtu_bDoorAjarSt, boolean rtu_bReverse, boolean rtu_bPositionLostFlg, boolean
  rtu_bOverRunTime, boolean rtu_bReverseFinish, boolean rtu_bActiveFlg, boolean
  rtu_bWinRelearnReq, boolean rtu_bWinShrtDrpFlgNVM, boolean rtu_bBDCSStopReq,
  boolean rtu_bTDCSStopReq, uint8 *rty_u8WNDExecReq, boolean
  *rty_bWinShrtDrpFlgTemp, uint8 *rty_u8PWL_WinOpeationSt, uint8
  *rty_u8WNDExecStatus, uint8 *rty_bWinShrtDrpFlgWrtCntTemp, rtDW_SLC_Win_Ctrl
  *localDW);
static void Win_Ctrl_CCU_Req_Reset(rtB_CCU_Req_Win_Ctrl *localB,
  rtDW_CCU_Req_Win_Ctrl *localDW);
static void Win_Ctrl_CCU_Req_Disable(uint8 *rty_u8WndCmdOutputReq_CCU, boolean
  *rty_bDelayAdjSpdFlg, rtDW_CCU_Req_Win_Ctrl *localDW);
static void Win_Ctrl_CCU_Req(boolean rtu_Enable, uint8 rtu_u8WinMotorOpeCtr,
  boolean rtu_bEnableAutoUpPrm, uint8 rtu_u8MotorTargetPstCtr, boolean
  rtu_bDoorFramelessGlassCfg, uint8 rtu_u8WNDExecStatus, boolean rtu_bSwStuckFlg,
  uint8 rtu_u8WndCmdOutputReq_OPDoor, uint8 rtu_u8WndCmdOutputReq_OutSide, uint8
  rtu_u8WndCmdOutputReq_ElecDoor, uint8 rtu_u8WndCmdOutputReq_CLDoor, uint8
  *rty_u8WndCmdOutputReq_CCU, boolean *rty_bManualUpFlg_CCU, boolean
  *rty_bDelayAdjSpdFlg, rtB_CCU_Req_Win_Ctrl *localB, rtDW_CCU_Req_Win_Ctrl
  *localDW);
static void Win_Ctrl_CCU_Req_FL(boolean rtu_bCCULostCommon, uint8
  rtu_u8WinMotorOpeCtr, boolean rtu_bEnableAutoUpPrm, uint8
  rtu_u8MotorTargetPstCtr, boolean rtu_bDoorFramelessGlassCfg, uint8
  rtu_u8WNDExecStatus, boolean rtu_bSwStuckFlg, uint8
  rtu_u8WndCmdOutputReq_OPDoor, uint8 rtu_u8WndCmdOutputReq_OutSide, uint8
  rtu_u8WndCmdOutputReq_ElecDoor, uint8 rtu_u8WndCmdOutputReq_CLDoor, uint8
  *rty_u8WndCmdOutputReq_CCU, boolean *rty_1, boolean *rty_bDelayAdjSpdFlg,
  rtB_CCU_Req_FL_Win_Ctrl *localB, rtDW_CCU_Req_FL_Win_Ctrl *localDW);
static void Win_Ctrl_CLDoor_Req_Init(uint8 *rty_u8WndCmdOutputReq_CLDoor);
static void Win_Ctrl_CLDoor_Req_Reset(uint8 *rty_u8WndCmdOutputReq_CLDoor,
  rtDW_CLDoor_Req_Win_Ctrl *localDW);
static void Win_Ctrl_CLDoor_Req_Disable(rtDW_CLDoor_Req_Win_Ctrl *localDW);
static void Win_Ctrl_CLDoor_Req(boolean rtu_Enable, boolean rtu_bDoorAjarSt,
  boolean rtu_bDoorOutsideSwSt, uint8 rtu_u8WNDExecStatus, boolean
  rtu_bWinShrtDrpFlgNVM, uint8 *rty_u8WndCmdOutputReq_CLDoor,
  rtDW_CLDoor_Req_Win_Ctrl *localDW);
static void Win_Ctrl_ElecDoor_Req_Init(uint8 *rty_u8WndCmdOutputReq_ElecDoor);
static void Win_Ctrl_ElecDoor_Req_Reset(uint8 *rty_u8WndCmdOutputReq_ElecDoor,
  rtDW_ElecDoor_Req_Win_Ctrl *localDW);
static void Win_Ctrl_ElecDoor_Req_Disable(rtDW_ElecDoor_Req_Win_Ctrl *localDW);
static void Win_Ctrl_ElecDoor_Req(boolean rtu_Enable, uint8
  rtu_u8WinShortDropCmd, uint8 rtu_u8WNDExecStatus, uint8
  *rty_u8WndCmdOutputReq_ElecDoor, rtDW_ElecDoor_Req_Win_Ctrl *localDW);
static void Win_Ctrl_OpenDoor_Req_Init(uint8 *rty_u8WndCmdOutputReq_OPDoor);
static void Win_Ctrl_OpenDoor_Req_Reset(uint8 *rty_u8WndCmdOutputReq_OPDoor,
  rtDW_OpenDoor_Req_Win_Ctrl *localDW);
static void Win_Ctrl_OpenDoor_Req_Disable(rtDW_OpenDoor_Req_Win_Ctrl *localDW);
static void Win_Ctrl_OpenDoor_Req(boolean rtu_Enable, boolean rtu_bDoorAjarSt,
  uint8 rtu_u8WNDExecStatus, uint8 *rty_u8WndCmdOutputReq_OPDoor,
  rtDW_OpenDoor_Req_Win_Ctrl *localDW);
static void Win_Ctrl_Outside_Req_Init(uint8 *rty_u8WndCmdOutputReq_OutSide);
static void Win_Ctrl_Outside_Req_Reset(uint8 *rty_u8WndCmdOutputReq_OutSide,
  rtDW_Outside_Req_Win_Ctrl *localDW);
static void Win_Ctrl_Outside_Req_Disable(rtDW_Outside_Req_Win_Ctrl *localDW);
static void Win_Ctrl_Outside_Req(boolean rtu_Enable, boolean rtu_bDoorLockFbSt,
  boolean rtu_bDoorOutsideSwSt, uint8 rtu_u8WNDExecStatus, uint8
  *rty_u8WndCmdOutputReq_OutSide, rtDW_Outside_Req_Win_Ctrl *localDW);
static void Win_Ctrl_Special_Mode_Req_Init(uint8 *rty_u8WndCmdOutputReq_SP,
  boolean *rty_bManualUpFlg_SP, boolean *rty_bAllow_sleep, boolean
  *rty_bSpecialFlag);
static void Win_Ctrl_Special_Mode_Req(uint8 rtu_u8WndSw, boolean
  rtu_bCCULostCommon, uint8 rtu_u8WNDExecStatus, boolean rtu_bSwStuckFlg, uint8 *
  rty_u8WndCmdOutputReq_SP, boolean *rty_bManualUpFlg_SP, boolean
  *rty_bAllow_sleep, boolean *rty_bSpecialFlag, rtDW_Special_Mode_Req_Win_Ctrl
  *localDW);
static void Win_C_DriverSide_FLSwStuck_Init(boolean *rty_bSwStuckFlg);
static void Win_Ctrl_DriverSide_FLSwStuck(uint8 rtu_u8SwSts, boolean
  *rty_bSwStuckFlg, rtDW_DriverSide_FLSwStuck_Win_C *localDW);

/* Forward declaration for local functions */
static void Win_Ctrl_exit_internal_Action(rtDW_SLC_Win_Ctrl *localDW);
static void Win_Ctrl_enter_atomic_Init(uint8 *rty_u8WNDExecReq, uint8
  *rty_u8PWL_WinOpeationSt, uint8 *rty_u8WNDExecStatus, rtDW_SLC_Win_Ctrl
  *localDW);
static void Win_Ctrl_enter_internal_AUTO_DN(uint8 rtu_u8MotorTargetPstCtr, uint8
  rtu_u8WLVentilationPst, uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, uint8 rtu_u8PowerDoorReqWinOpenPst, boolean
  rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8 rtu_u8CurrtFixFlg, uint8
  rtu_u8NormalizeSts, uint8 *rty_u8WNDExecReq, uint8 *rty_u8PWL_WinOpeationSt,
  uint8 *rty_u8WNDExecStatus, rtDW_SLC_Win_Ctrl *localDW);
static void Win_Ctrl_enter_internal_AUTO_UP(uint8 rtu_u8MotorTargetPstCtr, uint8
  rtu_u8WLVentilationPst, uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, boolean rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8
  rtu_u8CurrtFixFlg, uint8 rtu_u8NormalizeSts, boolean
  rtu_bDoorFramelessGlassCfg, boolean rtu_bDoorAjarSt, uint8 *rty_u8WNDExecReq,
  uint8 *rty_u8PWL_WinOpeationSt, uint8 *rty_u8WNDExecStatus, rtDW_SLC_Win_Ctrl *
  localDW);
static void Win_Ctrl_enter_internal_Action(uint8 rtu_u8WNDCmd, uint8
  rtu_u8MotorTargetPstCtr, uint8 rtu_u8WLVentilationPst, uint8
  rtu_u8WinCurrentPosPercent, uint8 rtu_u8WinShortDropPst, uint8
  rtu_u8PowerDoorReqWinOpenPst, boolean rtu_bVoltDisableFlg, uint8 rtu_u8TPflg,
  uint8 rtu_u8CurrtFixFlg, uint8 rtu_u8NormalizeSts, boolean
  rtu_bDoorFramelessGlassCfg, boolean rtu_bDoorAjarSt, uint8 *rty_u8WNDExecReq,
  uint8 *rty_u8PWL_WinOpeationSt, uint8 *rty_u8WNDExecStatus, rtDW_SLC_Win_Ctrl *
  localDW);
static void Win_Ctrl_AUTO_DN(uint8 rtu_u8MotorTargetPstCtr, uint8
  rtu_u8WLVentilationPst, uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, uint8 rtu_u8PowerDoorReqWinOpenPst, boolean
  rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8 rtu_u8CurrtFixFlg, uint8
  rtu_u8NormalizeSts, boolean rtu_bPositionLostFlg, boolean rtu_bOverRunTime,
  boolean rtu_bBDCSStopReq, uint8 *rty_u8WNDExecReq, boolean
  *rty_bWinShrtDrpFlgTemp, uint8 *rty_u8PWL_WinOpeationSt, uint8
  *rty_u8WNDExecStatus, uint8 *rty_bWinShrtDrpFlgWrtCntTemp, rtDW_SLC_Win_Ctrl
  *localDW);
static void Win_Ctrl_AUTO_UP(uint8 rtu_u8MotorTargetPstCtr, uint8
  rtu_u8WLVentilationPst, uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, boolean rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8
  rtu_u8CurrtFixFlg, uint8 rtu_u8NormalizeSts, boolean rtu_bDoorAjarSt, boolean
  rtu_bPositionLostFlg, boolean rtu_bOverRunTime, boolean rtu_bActiveFlg,
  boolean rtu_bTDCSStopReq, uint8 *rty_u8WNDExecReq, uint8
  *rty_u8PWL_WinOpeationSt, uint8 *rty_u8WNDExecStatus, rtDW_SLC_Win_Ctrl
  *localDW);
static void Win_Ctrl_MANUAL_UP(uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, boolean rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8
  rtu_u8CurrtFixFlg, uint8 rtu_u8NormalizeSts, boolean rtu_bDoorAjarSt, boolean
  rtu_bOverRunTime, uint8 *rty_u8WNDExecReq, uint8 *rty_u8PWL_WinOpeationSt,
  uint8 *rty_u8WNDExecStatus, rtDW_SLC_Win_Ctrl *localDW);
static void Win_Ctrl_Action(uint8 rtu_u8WNDCmd, uint8 rtu_u8MotorTargetPstCtr,
  uint8 rtu_u8WLVentilationPst, uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, uint8 rtu_u8PowerDoorReqWinOpenPst, boolean
  rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8 rtu_u8CurrtFixFlg, uint8
  rtu_u8NormalizeSts, boolean rtu_bDoorFramelessGlassCfg, boolean
  rtu_bDoorAjarSt, boolean rtu_bPositionLostFlg, boolean rtu_bOverRunTime,
  boolean rtu_bActiveFlg, boolean rtu_bWinShrtDrpFlgNVM, boolean
  rtu_bBDCSStopReq, boolean rtu_bTDCSStopReq, uint8 *rty_u8WNDExecReq, boolean
  *rty_bWinShrtDrpFlgTemp, uint8 *rty_u8PWL_WinOpeationSt, uint8
  *rty_u8WNDExecStatus, uint8 *rty_bWinShrtDrpFlgWrtCntTemp, rtDW_SLC_Win_Ctrl
  *localDW);

/* Forward declaration for local functions */
static void Win_Ctrl_inner_default_FL(uint8 *u8FLWNDCmdSrc);
static void Win_Ctrl_inner_default_FR(uint8 *u8FRWNDCmdSrc);
static void Win_Ctrl_inner_default_RL(uint8 *u8RLWNDCmdSrc);
static void Win_Ctrl_inner_default_RR(uint8 *u8RRWNDCmdSrc);

/*
 * System initialize for atomic system:
 *    '<S6>/ShortDropStsFL'
 *    '<S6>/ShortDropStsFR'
 *    '<S6>/ShortDropStsRL'
 *    '<S6>/ShortDropStsRR'
 */
static void Win_Ctrl_ShortDropStsFL_Init(boolean *rty_bWinShortDropSt)
{
  *rty_bWinShortDropSt = false;
}

/*
 * Output and update for atomic system:
 *    '<S6>/ShortDropStsFL'
 *    '<S6>/ShortDropStsFR'
 *    '<S6>/ShortDropStsRL'
 *    '<S6>/ShortDropStsRR'
 */
static void Win_Ctrl_ShortDropStsFL(boolean rtu_bWinShrtDrpFlgNVM, uint8
  rtu_u8WinCurrentPosPercent, uint8 rtu_u8WinShortDropPst, uint8
  rtu_u8NormalizeSts, boolean *rty_bWinShortDropSt)
{
  /* Chart: '<S6>/ShortDropStsFL' */
  if (rtu_bWinShrtDrpFlgNVM || ((rtu_u8NormalizeSts == 1) &&
       (rtu_u8WinCurrentPosPercent >= rtu_u8WinShortDropPst))) {
    /* 执行过短降或当前位置大于短降距离 */
    *rty_bWinShortDropSt = true;
  } else {
    *rty_bWinShortDropSt = false;
  }

  /* End of Chart: '<S6>/ShortDropStsFL' */
}

/*
 * System initialize for atomic system:
 *    '<S7>/PositionSts_FL'
 *    '<S7>/PositionSts_FR'
 *    '<S7>/PositionSts_RL'
 *    '<S7>/PositionSts_RR'
 */
static void Win_Ctrl_PositionSts_FL_Init(uint8 *rty_u8PositionSts)
{
  *rty_u8PositionSts = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S7>/PositionSts_FL'
 *    '<S7>/PositionSts_FR'
 *    '<S7>/PositionSts_RL'
 *    '<S7>/PositionSts_RR'
 */
static void Win_Ctrl_PositionSts_FL(uint8 rtu_u8NormalizeSts, uint8
  rtu_WinCurrentPos, uint8 *rty_u8PositionSts)
{
  /* Chart: '<S7>/PositionSts_FL' */
  if (rtu_u8NormalizeSts == 1) {
    /* 已学习 */
    switch (rtu_WinCurrentPos) {
     case 0:
      /* 全开 */
      *rty_u8PositionSts = 3U;

      /* 车窗完全打开 */
      break;

     case 200:
      /* 全关 */
      *rty_u8PositionSts = 1U;

      /* 车窗完全关闭 */
      break;

     default:
      *rty_u8PositionSts = 2U;

      /* 车窗处于中间位置 */
      break;
    }
  } else {
    *rty_u8PositionSts = 0U;
  }

  /* End of Chart: '<S7>/PositionSts_FL' */
}

/*
 * System initialize for atomic system:
 *    '<S18>/SWTypeStateDvFL'
 *    '<S18>/SWTypeStateDvFR'
 *    '<S18>/SWTypeStateDvRL'
 *    '<S18>/SWTypeStateDvRR'
 *    '<S19>/SWTypeStateFR'
 *    '<S19>/SWTypeStateRL'
 *    '<S19>/SWTypeStateRR'
 */
static void Win_Ctrl_SWTypeStateDvFL_Init(uint8 *rty_u8UINMWinSwSt)
{
  *rty_u8UINMWinSwSt = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S18>/SWTypeStateDvFL'
 *    '<S18>/SWTypeStateDvFR'
 *    '<S18>/SWTypeStateDvRL'
 *    '<S18>/SWTypeStateDvRR'
 *    '<S19>/SWTypeStateFR'
 *    '<S19>/SWTypeStateRL'
 *    '<S19>/SWTypeStateRR'
 */
static void Win_Ctrl_SWTypeStateDvFL(uint8 rtu_UINMWinSwType, uint8
  rtu_u8WindowSw, uint8 rtu_WinSwActivetime, uint8 *rty_u8UINMWinSwSt,
  rtDW_SWTypeStateDvFL_Win_Ctrl *localDW)
{
  /* Chart: '<S18>/SWTypeStateDvFL' */
  if (localDW->temporalCounter_i1 < 255U) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c35_zcu_wnd_lib == 0U) {
    localDW->is_active_c35_zcu_wnd_lib = 1U;
    localDW->is_c35_zcu_wnd_lib = Win_Ctrl_IN_SwType1;
    localDW->is_SwType1 = Win_Ctrl_IN_Init;
    *rty_u8UINMWinSwSt = 0U;
  } else if (localDW->is_c35_zcu_wnd_lib == Win_Ctrl_IN_SwType0) {
    if (rtu_UINMWinSwType == 1) {
      localDW->is_c35_zcu_wnd_lib = Win_Ctrl_IN_SwType1;
      localDW->is_SwType1 = Win_Ctrl_IN_Init;
      *rty_u8UINMWinSwSt = 0U;
    } else {
      switch (rtu_u8WindowSw) {
       case 0x01:
        /* Manual UP挡开关接通 */
        *rty_u8UINMWinSwSt = 1U;
        break;

       case 0x02:
        /* AUTO UP挡开关接通 */
        *rty_u8UINMWinSwSt = 2U;
        break;

       case 0x03:
        /* Manual Down挡开关接通 */
        *rty_u8UINMWinSwSt = 3U;
        break;

       case 0x04:
        /* AUTO Down挡开关接通 */
        *rty_u8UINMWinSwSt = 4U;
        break;

       default:
        *rty_u8UINMWinSwSt = 0U;
        break;
      }
    }
  } else if (rtu_UINMWinSwType == 0) {
    localDW->is_Down = Win_Ctrl_IN_NO_ACTIVE_CHILD_k;
    localDW->is_UP = Win_Ctrl_IN_NO_ACTIVE_CHILD_k;
    localDW->is_SwType1 = Win_Ctrl_IN_NO_ACTIVE_CHILD_k;
    localDW->is_c35_zcu_wnd_lib = Win_Ctrl_IN_SwType0;
    switch (rtu_u8WindowSw) {
     case 0x01:
      /* Manual UP挡开关接通 */
      *rty_u8UINMWinSwSt = 1U;
      break;

     case 0x02:
      /* AUTO UP挡开关接通 */
      *rty_u8UINMWinSwSt = 2U;
      break;

     case 0x03:
      /* Manual Down挡开关接通 */
      *rty_u8UINMWinSwSt = 3U;
      break;

     case 0x04:
      /* AUTO Down挡开关接通 */
      *rty_u8UINMWinSwSt = 4U;
      break;

     default:
      *rty_u8UINMWinSwSt = 0U;
      break;
    }
  } else {
    switch (localDW->is_SwType1) {
     case Win_Ctrl_IN_Down:
      if (rtu_u8WindowSw == 0x01) {
        /* UP挡开关接通 */
        localDW->is_Down = Win_Ctrl_IN_NO_ACTIVE_CHILD_k;
        localDW->is_SwType1 = Win_Ctrl_IN_UP;
        localDW->is_UP = Win_Ctrl_IN_UPTime;
        localDW->temporalCounter_i1 = 0U;
        *rty_u8UINMWinSwSt = 1U;
      } else if (localDW->is_Down == Win_Ctrl_IN_DnTEMP) {
        if (rtu_u8WindowSw == 0x03) {
          /* DOWN挡开关接通 */
          localDW->is_Down = Win_Ctrl_IN_DnTime;
          localDW->temporalCounter_i1 = 0U;
          *rty_u8UINMWinSwSt = 3U;
        } else {
          if (localDW->temporalCounter_i1 >= 7) {
            /* 报文发3帧 */
            localDW->is_Down = Win_Ctrl_IN_NO_ACTIVE_CHILD_k;
            localDW->is_SwType1 = Win_Ctrl_IN_Init;
            *rty_u8UINMWinSwSt = 0U;
          }
        }
      } else if ((localDW->temporalCounter_i1 >= rtu_WinSwActivetime) &&
                 (rtu_u8WindowSw == 0x00)) {
        /* 开关断开 */
        localDW->is_Down = Win_Ctrl_IN_NO_ACTIVE_CHILD_k;
        localDW->is_SwType1 = Win_Ctrl_IN_Init;
        *rty_u8UINMWinSwSt = 0U;
      } else {
        if (rtu_u8WindowSw == 0x00) {
          /* 开关断开 */
          localDW->is_Down = Win_Ctrl_IN_DnTEMP;
          localDW->temporalCounter_i1 = 0U;
          *rty_u8UINMWinSwSt = 4U;
        }
      }
      break;

     case Win_Ctrl_IN_Init:
      switch (rtu_u8WindowSw) {
       case 0x01:
        /* UP挡开关接通 */
        localDW->is_SwType1 = Win_Ctrl_IN_UP;
        localDW->is_UP = Win_Ctrl_IN_UPTime;
        localDW->temporalCounter_i1 = 0U;
        *rty_u8UINMWinSwSt = 1U;
        break;

       case 0x03:
        /* DOWN挡开关接通 */
        localDW->is_SwType1 = Win_Ctrl_IN_Down;
        localDW->is_Down = Win_Ctrl_IN_DnTime;
        localDW->temporalCounter_i1 = 0U;
        *rty_u8UINMWinSwSt = 3U;
        break;
      }
      break;

     default:
      if (rtu_u8WindowSw == 0x03) {
        /* DOWN挡开关接通 */
        localDW->is_UP = Win_Ctrl_IN_NO_ACTIVE_CHILD_k;
        localDW->is_SwType1 = Win_Ctrl_IN_Down;
        localDW->is_Down = Win_Ctrl_IN_DnTime;
        localDW->temporalCounter_i1 = 0U;
        *rty_u8UINMWinSwSt = 3U;
      } else if (localDW->is_UP == Win_Ctrl_IN_UPTEMP) {
        if (rtu_u8WindowSw == 0x01) {
          /* UP挡开关接通 */
          localDW->is_UP = Win_Ctrl_IN_UPTime;
          localDW->temporalCounter_i1 = 0U;
          *rty_u8UINMWinSwSt = 1U;
        } else {
          if (localDW->temporalCounter_i1 >= 7) {
            /* 报文发3帧 */
            localDW->is_UP = Win_Ctrl_IN_NO_ACTIVE_CHILD_k;
            localDW->is_SwType1 = Win_Ctrl_IN_Init;
            *rty_u8UINMWinSwSt = 0U;
          }
        }
      } else if ((localDW->temporalCounter_i1 >= rtu_WinSwActivetime) &&
                 (rtu_u8WindowSw == 0x00)) {
        /* 开关断开 */
        localDW->is_UP = Win_Ctrl_IN_NO_ACTIVE_CHILD_k;
        localDW->is_SwType1 = Win_Ctrl_IN_Init;
        *rty_u8UINMWinSwSt = 0U;
      } else {
        if (rtu_u8WindowSw == 0x00) {
          /* 开关断开 */
          localDW->is_UP = Win_Ctrl_IN_UPTEMP;
          localDW->temporalCounter_i1 = 0U;
          *rty_u8UINMWinSwSt = 2U;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S18>/SWTypeStateDvFL' */
}

/*
 * System initialize for atomic system:
 *    '<S27>/SLC_Initialization_FR'
 *    '<S27>/SLC_Initialization_RL'
 *    '<S27>/SLC_Initialization_RR'
 */
static void Win__SLC_Initialization_FR_Init(boolean *rty_bNormStartFlg)
{
  *rty_bNormStartFlg = false;
}

/*
 * Output and update for atomic system:
 *    '<S27>/SLC_Initialization_FR'
 *    '<S27>/SLC_Initialization_RL'
 *    '<S27>/SLC_Initialization_RR'
 */
static void Win_Ctrl_SLC_Initialization_FR(uint8 rtu_u8OutputSts, boolean
  rtu_bOverCur, uint8 rtu_u8Sw1Sts_asi, uint8 rtu_u8Sw2Sts_asi, uint8
  rtu_u8NormalizeSts, boolean rtu_bPositionLostFlg, uint8 rtu_wndIniHoldTimer,
  boolean rtu_bStall, uint8 rtu_wndNormalizeValidTimePrm, boolean
  *rty_bNormStartFlg, rtDW_SLC_Initialization_FR_Win_ *localDW)
{
  /* Chart: '<S27>/SLC_Initialization_FR' */
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  localDW->bStall_prev = localDW->bStall_start;
  localDW->bStall_start = rtu_bStall;

  /* Chart: '<S27>/SLC_Initialization_FR' */
  if (localDW->is_active_c7_zcu_wnd_lib == 0U) {
    localDW->bStall_prev = rtu_bStall;
    localDW->is_active_c7_zcu_wnd_lib = 1U;
    if (rtu_u8NormalizeSts == 1) {
      localDW->is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_Finished;
      *rty_bNormStartFlg = true;
      localDW->is_Init_Finished = Win_Ctrl_IN_Temp;
    } else {
      localDW->is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_g;
      *rty_bNormStartFlg = false;
    }
  } else {
    switch (localDW->is_c7_zcu_wnd_lib) {
     case Win_Ctrl_IN_Init_g:
      if (rtu_u8OutputSts == 1) {
        localDW->is_c7_zcu_wnd_lib = Win_Ctrl_IN_MovingUp;
      }
      break;

     case Win_Ctrl_IN_Init_Finished:
      if (localDW->is_Init_Finished == Win_Ctrl_IN_Success) {
        if ((rtu_u8NormalizeSts == 0) || rtu_bPositionLostFlg) {
          /*  normalize status 0=no, 1=success, 2=ing */
          localDW->is_Init_Finished = Win_Ctrl_IN_NO_ACTIVE_CHILD_ks;
          localDW->is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_g;
          *rty_bNormStartFlg = false;
        }
      } else {
        if (rtu_u8NormalizeSts == 1) {
          /* {u8NormState = 1;} */
          localDW->is_Init_Finished = Win_Ctrl_IN_Success;
        }
      }
      break;

     case Win_Ctrl_IN_MovingUp:
      if (rtu_bOverCur) {
        localDW->is_c7_zcu_wnd_lib = Win_Ctrl_IN_SwHold;
        localDW->temporalCounter_i1 = 0U;

        /* u8NormState = 2; */
        if ((rtu_u8Sw1Sts_asi == 1) || (rtu_u8Sw1Sts_asi == 3)) {
          localDW->u8Sw1Rec = rtu_u8Sw1Sts_asi;
        } else {
          localDW->u8Sw1Rec = 0U;
        }

        if ((rtu_u8Sw2Sts_asi == 1) || (rtu_u8Sw2Sts_asi == 3)) {
          localDW->u8Sw2Rec = rtu_u8Sw2Sts_asi;
        } else {
          localDW->u8Sw2Rec = 0U;
        }
      } else if ((localDW->bStall_prev != localDW->bStall_start) &&
                 localDW->bStall_start) {
        localDW->is_c7_zcu_wnd_lib = Win_Ctrl_IN_Wait;
        localDW->temporalCounter_i1 = 0U;
      } else {
        if (rtu_u8OutputSts != 1) {
          localDW->is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_g;
          *rty_bNormStartFlg = false;
        }
      }
      break;

     case Win_Ctrl_IN_SwHold:
      if (localDW->temporalCounter_i1 >= (uint32)(rtu_wndIniHoldTimer * 100)) {
        /*  1.5s */
        localDW->is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_Finished;
        *rty_bNormStartFlg = true;
        localDW->is_Init_Finished = Win_Ctrl_IN_Temp;
      } else {
        if (((localDW->u8Sw1Rec != 0) && (rtu_u8Sw1Sts_asi != 1) &&
             (rtu_u8Sw1Sts_asi != 3)) || ((localDW->u8Sw2Rec != 0) &&
             (rtu_u8Sw2Sts_asi != 1) && (rtu_u8Sw2Sts_asi != 3))) {
          /* SW = Up, not hold */
          /* GloSW = Up, not hold */
          localDW->is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_g;
          *rty_bNormStartFlg = false;
        }
      }
      break;

     case Win_Ctrl_IN_Wait:
      if (rtu_bOverCur) {
        localDW->is_c7_zcu_wnd_lib = Win_Ctrl_IN_SwHold;
        localDW->temporalCounter_i1 = 0U;

        /* u8NormState = 2; */
        if ((rtu_u8Sw1Sts_asi == 1) || (rtu_u8Sw1Sts_asi == 3)) {
          localDW->u8Sw1Rec = rtu_u8Sw1Sts_asi;
        } else {
          localDW->u8Sw1Rec = 0U;
        }

        if ((rtu_u8Sw2Sts_asi == 1) || (rtu_u8Sw2Sts_asi == 3)) {
          localDW->u8Sw2Rec = rtu_u8Sw2Sts_asi;
        } else {
          localDW->u8Sw2Rec = 0U;
        }
      } else {
        if (localDW->temporalCounter_i1 >= 5U) {
          localDW->is_c7_zcu_wnd_lib = Win_Ctrl_IN_WaitSecond;
          localDW->temporalCounter_i1 = 0U;
        }
      }
      break;

     default:
      if (rtu_bOverCur || ((localDW->bStall_prev != localDW->bStall_start) &&
                           localDW->bStall_start && (rtu_u8OutputSts == 1))) {
        localDW->is_c7_zcu_wnd_lib = Win_Ctrl_IN_SwHold;
        localDW->temporalCounter_i1 = 0U;

        /* u8NormState = 2; */
        if ((rtu_u8Sw1Sts_asi == 1) || (rtu_u8Sw1Sts_asi == 3)) {
          localDW->u8Sw1Rec = rtu_u8Sw1Sts_asi;
        } else {
          localDW->u8Sw1Rec = 0U;
        }

        if ((rtu_u8Sw2Sts_asi == 1) || (rtu_u8Sw2Sts_asi == 3)) {
          localDW->u8Sw2Rec = rtu_u8Sw2Sts_asi;
        } else {
          localDW->u8Sw2Rec = 0U;
        }
      } else {
        if ((rtu_u8Sw1Sts_asi == 2) || (rtu_u8Sw1Sts_asi == 4) ||
            (rtu_u8Sw2Sts_asi == 2) || (rtu_u8Sw2Sts_asi == 4) ||
            (localDW->temporalCounter_i1 >= (uint32)
             (rtu_wndNormalizeValidTimePrm * 1000))) {
          localDW->is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_g;
          *rty_bNormStartFlg = false;
        }
      }
      break;
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S28>/Over_Time_Protect'
 *    '<S28>/Over_Time_Protect1'
 *    '<S28>/Over_Time_Protect2'
 *    '<S28>/Over_Time_Protect3'
 */
static void Win_Ctrl_Over_Time_Protect_Init(boolean *rty_bWndOverRunTime)
{
  *rty_bWndOverRunTime = false;
}

/*
 * Output and update for atomic system:
 *    '<S28>/Over_Time_Protect'
 *    '<S28>/Over_Time_Protect1'
 *    '<S28>/Over_Time_Protect2'
 *    '<S28>/Over_Time_Protect3'
 */
static void Win_Ctrl_Over_Time_Protect(boolean rtu_u8WinOutput, uint8
  rtu_wndMaxRuntimePrm, boolean *rty_bWndOverRunTime,
  rtDW_Over_Time_Protect_Win_Ctrl *localDW)
{
  /* Chart: '<S28>/Over_Time_Protect' */
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c3_zcu_wnd_lib == 0U) {
    localDW->is_active_c3_zcu_wnd_lib = 1U;
    localDW->is_c3_zcu_wnd_lib = Win_Ctrl_IN_NotProt;
    *rty_bWndOverRunTime = false;
  } else {
    switch (localDW->is_c3_zcu_wnd_lib) {
     case Win_Ctrl_IN_Delay:
      if (localDW->temporalCounter_i1 >= (uint32)(rtu_wndMaxRuntimePrm * 100)) {
        /*  10s */
        localDW->is_c3_zcu_wnd_lib = Win_Ctrl_IN_OverRunTime;
        *rty_bWndOverRunTime = true;
      } else {
        if (!rtu_u8WinOutput) {
          localDW->is_c3_zcu_wnd_lib = Win_Ctrl_IN_NotProt;
          *rty_bWndOverRunTime = false;
        }
      }
      break;

     case Win_Ctrl_IN_NotProt:
      if (rtu_u8WinOutput) {
        localDW->is_c3_zcu_wnd_lib = Win_Ctrl_IN_Delay;
        localDW->temporalCounter_i1 = 0U;
        *rty_bWndOverRunTime = false;
      }
      break;

     default:
      if (!rtu_u8WinOutput) {
        localDW->is_c3_zcu_wnd_lib = Win_Ctrl_IN_NotProt;
        *rty_bWndOverRunTime = false;
      }
      break;
    }
  }

  /* End of Chart: '<S28>/Over_Time_Protect' */
}

/*
 * System initialize for atomic system:
 *    '<S29>/Wnd_ThermalProt_FL'
 *    '<S29>/Wnd_ThermalProt_FR'
 *    '<S29>/Wnd_ThermalProt_RL'
 *    '<S29>/Wnd_ThermalProt_RR'
 */
static void Win_Ctr_Wnd_ThermalProt_FL_Init(rtB_Wnd_ThermalProt_FL_Win_Ctrl
  *localB, rtDW_Wnd_ThermalProt_FL_Win_Ctr *localDW)
{
  /* SystemInitialize for Enabled SubSystem: '<S39>/ThermoProtect' */
  /* SystemInitialize for Chart: '<S46>/SLC_ThermalProtection' */
  localDW->u8TPFlag_prev = localB->u8TPFlag;
  localDW->u8TPFlag_start = localB->u8TPFlag;

  /* End of SystemInitialize for SubSystem: '<S39>/ThermoProtect' */
}

/*
 * Output and update for atomic system:
 *    '<S29>/Wnd_ThermalProt_FL'
 *    '<S29>/Wnd_ThermalProt_FR'
 *    '<S29>/Wnd_ThermalProt_RL'
 *    '<S29>/Wnd_ThermalProt_RR'
 */
static void Win_Ctrl_Wnd_ThermalProt_FL(uint32 rtu_WndTPDisableUpPrm, uint32
  rtu_WndTPDisableAllPrm, uint32 rtu_WndTPCoolDownPrm, uint32 rtu_wndTempMinAmb,
  uint32 rtu_WndAmbientTemPrm, uint16 rtu_BatteryVolt, uint32
  rtu_MotorTemperature, uint16 rtu_MotorActualCurrent, uint8
  rtu_MotorOverCurrentCfg, boolean rtu_bWinUpOutput, boolean rtu_bWinDownOutput,
  uint8 *rty_WndTPflg, uint32 *rty_WndMotorTemperature, uint32
  *rty_u32TempOffset, rtB_Wnd_ThermalProt_FL_Win_Ctrl *localB, const
  rtC_Wnd_ThermalProt_FL_Win_Ctrl *localC, rtDW_Wnd_ThermalProt_FL_Win_Ctr
  *localDW)
{
  boolean rtb_LogicalOperator18;
  uint8 rtb_u8MotionIdx;
  uint32 qY;
  sint32 tmp;
  uint8 rtu_BatteryVolt_0;

  /* Logic: '<S39>/Logical Operator18' */
  rtb_LogicalOperator18 = (rtu_bWinUpOutput || rtu_bWinDownOutput);

  /* Chart: '<S39>/MotionIdx' */
  if (localDW->temporalCounter_i1 < 255U) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c14_zcu_wnd_lib == 0U) {
    localDW->is_active_c14_zcu_wnd_lib = 1U;
    localDW->is_ShortDrop = Win_Ctrl_IN_Initial;
    localDW->count = 0U;
    if ((rtu_MotorActualCurrent > rtu_MotorOverCurrentCfg) &&
        rtb_LogicalOperator18) {
      rtb_u8MotionIdx = 2U;
    } else if (localDW->count > 2) {
      rtb_u8MotionIdx = 3U;
    } else {
      rtb_u8MotionIdx = (uint8)(rtb_LogicalOperator18 && (localDW->count <= 2));
    }
  } else {
    switch (localDW->is_ShortDrop) {
     case Win_Ctrl_IN_Initial:
      if (rtb_LogicalOperator18) {
        localDW->is_ShortDrop = Win_Ctrl_IN_Wait_h;
        localDW->temporalCounter_i1 = 0U;
      }
      break;

     case Win_Ctrl_IN_ShortDrops:
      if (rtb_LogicalOperator18) {
        localDW->is_ShortDrop = Win_Ctrl_IN_Wait_h;
        localDW->temporalCounter_i1 = 0U;
      } else {
        if (localDW->temporalCounter_i1 >= 200) {
          localDW->is_ShortDrop = Win_Ctrl_IN_Initial;
          localDW->count = 0U;
        }
      }
      break;

     default:
      if (localDW->temporalCounter_i1 >= 200) {
        localDW->is_ShortDrop = Win_Ctrl_IN_Initial;
        localDW->count = 0U;
      } else {
        if (!rtb_LogicalOperator18) {
          localDW->is_ShortDrop = Win_Ctrl_IN_ShortDrops;
          localDW->temporalCounter_i1 = 0U;
          tmp = localDW->count + 1;
          if (tmp > 255) {
            tmp = 255;
          }

          localDW->count = (uint8)tmp;
        }
      }
      break;
    }

    if ((rtu_MotorActualCurrent > rtu_MotorOverCurrentCfg) &&
        rtb_LogicalOperator18) {
      rtb_u8MotionIdx = 2U;
    } else if (localDW->count > 2) {
      rtb_u8MotionIdx = 3U;
    } else {
      rtb_u8MotionIdx = (uint8)(rtb_LogicalOperator18 && (localDW->count <= 2));
    }
  }

  /* End of Chart: '<S39>/MotionIdx' */

  /* Chart: '<S39>/TempConvert' */
  qY = rtu_wndTempMinAmb + /*MW:OvSatOk*/ 40U;
  if (qY < rtu_wndTempMinAmb) {
    qY = MAX_uint32_T;
  }

  if (qY > 2147483647U) {
    qY = MAX_uint32_T;
  } else {
    qY <<= 1;
  }

  if (qY <= rtu_WndAmbientTemPrm) {
    qY = rtu_WndAmbientTemPrm >> 1;
    localB->out = qY - /*MW:OvSatOk*/ 40U;
    if (localB->out > qY) {
      localB->out = 0U;
    }

    /* conversion: E = N/2-40, -40~87 degree */
    if (rtu_WndAmbientTemPrm > 255U) {
      /* >87degree */
      localB->out = 87U;
    } else {
      qY = rtu_wndTempMinAmb + /*MW:OvSatOk*/ 40U;
      if (qY < rtu_wndTempMinAmb) {
        qY = MAX_uint32_T;
      }

      if (qY > 2147483647U) {
        qY = MAX_uint32_T;
      } else {
        qY <<= 1;
      }

      if (rtu_WndAmbientTemPrm < qY) {
        /* <Min */
        localB->out = rtu_wndTempMinAmb;
      } else {
        /* Keep */
      }
    }
  }

  /* End of Chart: '<S39>/TempConvert' */

  /* Outputs for Enabled SubSystem: '<S39>/ThermoProtect' incorporates:
   *  EnablePort: '<S46>/Enable'
   */
  if (localC->LogicalOperator) {
    if (!localDW->ThermoProtect_MODE) {
      /* SystemReset for Chart: '<S46>/SLC_ThermalProtection' */
      localDW->is_TemperaturProtect_Req = Win_Ctrl_IN_NO_ACTIVE_CHILD_m;
      localDW->is_active_c6_zcu_wnd_lib = 0U;
      localDW->bAmbTempRecFlg = false;
      localDW->u8TPOPcntTemp = 0U;
      localDW->u8TPActCnt = 0U;
      localB->u8TPFlag = 0U;
      localB->u32MotorTemperature = 0U;
      localDW->u8TPFlag_prev = localB->u8TPFlag;
      localDW->u8TPFlag_start = localB->u8TPFlag;
      localDW->ThermoProtect_MODE = true;
    }

    /* Lookup_n-D: '<S46>/TempProc_Lookup' incorporates:
     *  Chart: '<S39>/TemperatureIdx'
     *  Chart: '<S39>/VoltageIdx'
     */
    if (rtu_BatteryVolt > 13000) {
      rtu_BatteryVolt_0 = 2U;
    } else {
      rtu_BatteryVolt_0 = (uint8)(rtu_BatteryVolt > 10000);
    }

    *rty_u32TempOffset = Win_Ctrl_ConstP.pooled14[((plook_u32u8_even0cka
      (rtu_BatteryVolt_0, 0U, 2U) << 2) + plook_u32u8_even0cka(rtb_u8MotionIdx,
      0U, 3U)) + plook_u32u8_even0cka((uint8)(rtu_MotorTemperature > 800000U),
      0U, 1U) * 12U];

    /* End of Lookup_n-D: '<S46>/TempProc_Lookup' */

    /* Chart: '<S46>/SLC_ThermalProtection' incorporates:
     *  Constant: '<S48>/Constant'
     *  RelationalOperator: '<S48>/Compare'
     */
    localDW->u8TPFlag_prev = localDW->u8TPFlag_start;
    localDW->u8TPFlag_start = localB->u8TPFlag;
    if (localDW->is_active_c6_zcu_wnd_lib == 0U) {
      localDW->is_active_c6_zcu_wnd_lib = 1U;
      localB->u32MotorTemperature = (uint32)((sint32)localB->out * 10000);
      localDW->u8TPOPcntTemp = 0U;
      localDW->bAmbTempRecFlg = false;
      localDW->u8TPActCnt = 0U;
      localDW->is_TemperaturProtect_Req = Win_Ctrl_IN_WND_STOP;
      if ((localB->u32MotorTemperature > (uint32)((sint32)localB->out * 10000)) &&
          (localB->u32MotorTemperature > *rty_u32TempOffset)) {
        localB->u32MotorTemperature -= *rty_u32TempOffset;
      } else {
        localB->u32MotorTemperature = (uint32)((sint32)localB->out * 10000);
        localDW->u8TPActCnt = 0U;
      }

      if (localB->u8TPFlag > 0) {
        localDW->bAmbTempRecFlg = true;
      }

      if ((localDW->u8TPFlag_prev != localDW->u8TPFlag_start) &&
          (localDW->u8TPFlag_start == 0)) {
        localDW->u8TPOPcntTemp = 0U;
      }

      if (localB->u32MotorTemperature >= (uint32)((sint32)rtu_WndTPDisableAllPrm
           * 10000)) {
        localB->u8TPFlag = 2U;

        /* all movements disabled */
      } else if ((localB->u32MotorTemperature >= (uint32)((sint32)
                   rtu_WndTPDisableUpPrm * 10000)) && (localB->u8TPFlag == 0)) {
        localB->u8TPFlag = 1U;

        /* only superviced down and reversal allowed */
      } else if ((localB->u32MotorTemperature <= (uint32)((sint32)
                   rtu_WndTPCoolDownPrm * 10000)) && (localDW->u8TPActCnt < 4))
      {
        localB->u8TPFlag = 0U;

        /* all movements allowed */
      } else {
        /* keep state */
      }
    } else {
      if (localDW->is_TemperaturProtect_Req == Win_Ctrl_IN_WND_MV) {
        if ((rtb_u8MotionIdx == 0) || (localB->u8TPFlag == 2)) {
          localDW->is_TemperaturProtect_Req = Win_Ctrl_IN_WND_STOP;
          if ((localB->u32MotorTemperature > (uint32)((sint32)localB->out *
                10000)) && (localB->u32MotorTemperature > *rty_u32TempOffset)) {
            localB->u32MotorTemperature -= *rty_u32TempOffset;
          } else {
            localB->u32MotorTemperature = (uint32)((sint32)localB->out * 10000);
            localDW->u8TPActCnt = 0U;
          }

          if (localB->u8TPFlag > 0) {
            localDW->bAmbTempRecFlg = true;
          }

          if ((localDW->u8TPFlag_prev != localDW->u8TPFlag_start) &&
              (localDW->u8TPFlag_start == 0)) {
            localDW->u8TPOPcntTemp = 0U;
          }
        } else {
          qY = localB->u32MotorTemperature + *rty_u32TempOffset;
          localB->u32MotorTemperature = (uint32)((sint32)rtu_WndTPDisableAllPrm *
            10000);
          if (qY < localB->u32MotorTemperature) {
            localB->u32MotorTemperature = qY;
          }
        }
      } else if ((rtb_u8MotionIdx != 0) && (localB->u8TPFlag != 2)) {
        localDW->is_TemperaturProtect_Req = Win_Ctrl_IN_WND_MV;
        localB->u32MotorTemperature += *rty_u32TempOffset;
        localDW->u8TPOPcntTemp++;
        if (localDW->bAmbTempRecFlg) {
          localDW->bAmbTempRecFlg = false;
        }
      } else {
        qY = (uint32)((sint32)localB->out * 10000);
        if ((localB->u32MotorTemperature > qY) && (localB->u32MotorTemperature >
             *rty_u32TempOffset)) {
          localB->u32MotorTemperature -= *rty_u32TempOffset;
        } else {
          localB->u32MotorTemperature = qY;
          localDW->u8TPActCnt = 0U;
        }

        if (localB->u8TPFlag > 0) {
          localDW->bAmbTempRecFlg = true;
        }

        if ((localDW->u8TPFlag_prev != localDW->u8TPFlag_start) &&
            (localDW->u8TPFlag_start == 0)) {
          localDW->u8TPOPcntTemp = 0U;
        }
      }

      if (localB->u32MotorTemperature >= (uint32)((sint32)rtu_WndTPDisableAllPrm
           * 10000)) {
        localB->u8TPFlag = 2U;

        /* all movements disabled */
      } else if ((localB->u32MotorTemperature >= (uint32)((sint32)
                   rtu_WndTPDisableUpPrm * 10000)) && (localB->u8TPFlag == 0)) {
        localB->u8TPFlag = 1U;

        /* only superviced down and reversal allowed */
      } else if ((localB->u32MotorTemperature <= (uint32)((sint32)
                   rtu_WndTPCoolDownPrm * 10000)) && (localDW->u8TPActCnt < 4))
      {
        localB->u8TPFlag = 0U;

        /* all movements allowed */
      } else {
        /* keep state */
      }
    }

    /* End of Chart: '<S46>/SLC_ThermalProtection' */

    /* SignalConversion: '<S46>/OutportBufferForu8TPFlag' */
    *rty_WndTPflg = localB->u8TPFlag;

    /* SignalConversion: '<S46>/OutportBufferForu32MotorTemperature' */
    *rty_WndMotorTemperature = localB->u32MotorTemperature;
  } else {
    if (localDW->ThermoProtect_MODE) {
      localDW->ThermoProtect_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S39>/ThermoProtect' */
}

/*
 * System initialize for atomic system:
 *    '<S79>/EEPWriteShortFlag'
 *    '<S80>/EEPWriteShortFlag'
 *    '<S81>/EEPWriteShortFlag'
 *    '<S82>/EEPWriteShortFlag'
 */
static void Win_Ctrl_EEPWriteShortFlag_Init(boolean *rty_bWinShrtDrpFlg, uint8
  *rty_bWinShrtDrpFlgWrtCnt)
{
  *rty_bWinShrtDrpFlg = false;
  *rty_bWinShrtDrpFlgWrtCnt = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S79>/EEPWriteShortFlag'
 *    '<S80>/EEPWriteShortFlag'
 *    '<S81>/EEPWriteShortFlag'
 *    '<S82>/EEPWriteShortFlag'
 */
static void Win_Ctrl_EEPWriteShortFlag(boolean rtu_bWinShrtDrpFlgTemp, uint8
  rtu_bWinShrtDrpFlgWrtCntTemp, uint8 rtu_u8WNDExecReq, boolean
  rtu_bWinShrtDrpFlgNVM, boolean *rty_bWinShrtDrpFlg, uint8
  *rty_bWinShrtDrpFlgWrtCnt, rtDW_EEPWriteShortFlag_Win_Ctrl *localDW)
{
  sint32 tmp;
  localDW->bWinShrtDrpFlgWrtCntTemp_prev =
    localDW->bWinShrtDrpFlgWrtCntTemp_start;
  localDW->bWinShrtDrpFlgWrtCntTemp_start = rtu_bWinShrtDrpFlgWrtCntTemp;
  localDW->u8WNDExecReq_prev = localDW->u8WNDExecReq_start;
  localDW->u8WNDExecReq_start = rtu_u8WNDExecReq;

  /* Chart: '<S79>/EEPWriteShortFlag' */
  if (localDW->is_active_c33_zcu_wnd_lib == 0U) {
    localDW->bWinShrtDrpFlgWrtCntTemp_prev = rtu_bWinShrtDrpFlgWrtCntTemp;
    localDW->u8WNDExecReq_prev = rtu_u8WNDExecReq;
    localDW->is_active_c33_zcu_wnd_lib = 1U;
    *rty_bWinShrtDrpFlg = rtu_bWinShrtDrpFlgNVM;
    *rty_bWinShrtDrpFlgWrtCnt = 0U;
    if (localDW->bWinShrtDrpFlgWrtCntTemp_prev !=
        localDW->bWinShrtDrpFlgWrtCntTemp_start) {
      /* 执行短降后，需把短降标志记入EEP */
      if (*rty_bWinShrtDrpFlgWrtCnt < 255) {
        *rty_bWinShrtDrpFlg = true;
        tmp = *rty_bWinShrtDrpFlgWrtCnt + 1;
        if (tmp > 255) {
          tmp = 255;
        }

        *rty_bWinShrtDrpFlgWrtCnt = (uint8)tmp;
      } else {
        *rty_bWinShrtDrpFlg = true;
        *rty_bWinShrtDrpFlgWrtCnt = 0U;
      }
    } else {
      if ((localDW->u8WNDExecReq_prev != localDW->u8WNDExecReq_start) &&
          (localDW->u8WNDExecReq_prev == 0) && (rtu_u8WNDExecReq != 0) &&
          rtu_bWinShrtDrpFlgTemp) {
        /* 短降过后第二次车窗动作时短降标志清零 */
        if (*rty_bWinShrtDrpFlgWrtCnt < 255) {
          *rty_bWinShrtDrpFlg = false;
          tmp = *rty_bWinShrtDrpFlgWrtCnt + 1;
          if (tmp > 255) {
            tmp = 255;
          }

          *rty_bWinShrtDrpFlgWrtCnt = (uint8)tmp;
        } else {
          *rty_bWinShrtDrpFlg = false;
          *rty_bWinShrtDrpFlgWrtCnt = 0U;
        }
      }
    }
  } else if (localDW->bWinShrtDrpFlgWrtCntTemp_prev !=
             localDW->bWinShrtDrpFlgWrtCntTemp_start) {
    /* 执行短降后，需把短降标志记入EEP */
    if (*rty_bWinShrtDrpFlgWrtCnt < 255) {
      *rty_bWinShrtDrpFlg = true;
      tmp = *rty_bWinShrtDrpFlgWrtCnt + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      *rty_bWinShrtDrpFlgWrtCnt = (uint8)tmp;
    } else {
      *rty_bWinShrtDrpFlg = true;
      *rty_bWinShrtDrpFlgWrtCnt = 0U;
    }
  } else {
    if ((localDW->u8WNDExecReq_prev != localDW->u8WNDExecReq_start) &&
        (localDW->u8WNDExecReq_prev == 0) && (rtu_u8WNDExecReq != 0) &&
        rtu_bWinShrtDrpFlgTemp) {
      /* 短降过后第二次车窗动作时短降标志清零 */
      if (*rty_bWinShrtDrpFlgWrtCnt < 255) {
        *rty_bWinShrtDrpFlg = false;
        tmp = *rty_bWinShrtDrpFlgWrtCnt + 1;
        if (tmp > 255) {
          tmp = 255;
        }

        *rty_bWinShrtDrpFlgWrtCnt = (uint8)tmp;
      } else {
        *rty_bWinShrtDrpFlg = false;
        *rty_bWinShrtDrpFlgWrtCnt = 0U;
      }
    }
  }

  /* End of Chart: '<S79>/EEPWriteShortFlag' */
}

/* Function for Chart: '<S79>/SLC' */
static void Win_Ctrl_exit_internal_Action(rtDW_SLC_Win_Ctrl *localDW)
{
  localDW->is_AUTO_DN = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
  localDW->is_AUTO_UP = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
  localDW->is_MANUAL_DN = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
  localDW->is_MANUAL_UP = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
  localDW->is_Relearn_DN = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
  localDW->is_Action = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
}

/* Function for Chart: '<S79>/SLC' */
static void Win_Ctrl_enter_atomic_Init(uint8 *rty_u8WNDExecReq, uint8
  *rty_u8PWL_WinOpeationSt, uint8 *rty_u8WNDExecStatus, rtDW_SLC_Win_Ctrl
  *localDW)
{
  *rty_u8WNDExecReq = 0U;
  *rty_u8WNDExecStatus = (uint8)0xFF;
  localDW->u8VentilateReq = 0U;
  localDW->u8TargetReq = 0U;
  localDW->u8OPDoorReq = 0U;
  localDW->u8ElecDoorReq = 0U;
  localDW->bVentilateFlag = false;
  localDW->bTargetFlag = false;
  localDW->bOPDoorFlag = false;
  localDW->bElecDoorFlag = false;
  *rty_u8PWL_WinOpeationSt = 0U;
  localDW->bRelearnFlg = false;
}

/* Function for Chart: '<S79>/SLC' */
static void Win_Ctrl_enter_internal_AUTO_DN(uint8 rtu_u8MotorTargetPstCtr, uint8
  rtu_u8WLVentilationPst, uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, uint8 rtu_u8PowerDoorReqWinOpenPst, boolean
  rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8 rtu_u8CurrtFixFlg, uint8
  rtu_u8NormalizeSts, uint8 *rty_u8WNDExecReq, uint8 *rty_u8PWL_WinOpeationSt,
  uint8 *rty_u8WNDExecStatus, rtDW_SLC_Win_Ctrl *localDW)
{
  boolean guard1 = false;
  boolean guard2 = false;
  guard1 = false;
  guard2 = false;
  if ((localDW->u8DnMotorStallCount >= 3) || rtu_bVoltDisableFlg ||
      (localDW->bTargetFlag && (rtu_u8NormalizeSts == 1) &&
       (rtu_u8WinCurrentPosPercent >= rtu_u8MotorTargetPstCtr)) ||
      (localDW->bVentilateFlag && (rtu_u8NormalizeSts == 1) &&
       (rtu_u8WinCurrentPosPercent >= rtu_u8WLVentilationPst))) {
    /* 电压过高或过低 */
    /* 开度控制下降请求 */
    /* 车窗位置大于目标位置 */
    /* 透气模式下降请求 */
    /* 玻璃开度大于透气距离 */
    guard1 = true;
  } else if (localDW->bOPDoorFlag) {
    /* 开门/拉外把手短降 */
    if (rtu_u8NormalizeSts == 1) {
      /* 已学习 */
      if (rtu_u8WinCurrentPosPercent >= rtu_u8WinShortDropPst) {
        /* 玻璃开度大于短降距离 */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      localDW->is_AUTO_DN = Win_Ctrl_IN_OPDn;
      localDW->temporalCounter_i1 = 0U;
      *rty_u8WNDExecReq = 4U;
      *rty_u8PWL_WinOpeationSt = 2U;

      /* window opening */
    }
  } else if (localDW->bElecDoorFlag) {
    /* 电动开门短降 */
    if (rtu_u8NormalizeSts == 1) {
      /* 已学习 */
      if ((float64)rtu_u8WinCurrentPosPercent * 0.5 >=
          rtu_u8PowerDoorReqWinOpenPst) {
        /* 玻璃开度大于电动门短降距离 */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      localDW->is_AUTO_DN = Win_Ctrl_IN_ElecDn;
      localDW->temporalCounter_i1 = 0U;
      *rty_u8WNDExecReq = 4U;
      *rty_u8PWL_WinOpeationSt = 2U;

      /* window opening */
    }
  } else if (rtu_u8TPflg == 2) {
    /* 电机处于二级热保护 */
    *rty_u8PWL_WinOpeationSt = 4U;

    /* window MotOverheat */
    guard1 = true;
  } else if (rtu_u8CurrtFixFlg == 1) {
    /* 堵转发生 */
    guard1 = true;
  } else {
    guard2 = true;
  }

  if (guard2) {
    localDW->is_AUTO_DN = Win_Ctrl_IN_DN;
    *rty_u8WNDExecReq = 4U;
    *rty_u8PWL_WinOpeationSt = 2U;

    /* window opening */
  }

  if (guard1) {
    localDW->is_AUTO_DN = Win_Ctrl_IN_Stop;
    *rty_u8WNDExecReq = 0U;
    *rty_u8WNDExecStatus = 0U;
    if (*rty_u8PWL_WinOpeationSt != 4) {
      /* 不在热保护 */
      *rty_u8PWL_WinOpeationSt = 0U;
    }
  }
}

/* Function for Chart: '<S79>/SLC' */
static void Win_Ctrl_enter_internal_AUTO_UP(uint8 rtu_u8MotorTargetPstCtr, uint8
  rtu_u8WLVentilationPst, uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, boolean rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8
  rtu_u8CurrtFixFlg, uint8 rtu_u8NormalizeSts, boolean
  rtu_bDoorFramelessGlassCfg, boolean rtu_bDoorAjarSt, uint8 *rty_u8WNDExecReq,
  uint8 *rty_u8PWL_WinOpeationSt, uint8 *rty_u8WNDExecStatus, rtDW_SLC_Win_Ctrl *
  localDW)
{
  boolean guard1 = false;
  guard1 = false;
  if ((localDW->u8UpMotorStallCount >= 3) || rtu_bVoltDisableFlg ||
      (localDW->bTargetFlag && (rtu_u8NormalizeSts == 1) &&
       (rtu_u8WinCurrentPosPercent <= rtu_u8MotorTargetPstCtr)) ||
      (localDW->bVentilateFlag && (rtu_u8NormalizeSts == 1) &&
       (rtu_u8WinCurrentPosPercent <= rtu_u8WLVentilationPst))) {
    /* 电压过高或过低 */
    /* 开度控制上升请求 */
    /* 车窗位置小于目标位置 */
    /* 透气模式上升请求 */
    /* 玻璃位置小于透气距离 */
    guard1 = true;
  } else if (rtu_u8TPflg >= 1) {
    /* 电机处于热保护 */
    *rty_u8PWL_WinOpeationSt = 4U;

    /* window MotOverheat */
    guard1 = true;
  } else if (rtu_u8CurrtFixFlg == 1) {
    /* 堵转发生 */
    guard1 = true;
  } else if (rtu_u8NormalizeSts == 0) {
    /* 未初始化 */
    if (rtu_bDoorFramelessGlassCfg) {
      /* 无框车门 */
      if (rtu_bDoorAjarSt) {
        /* 车门打开 */
        /* 无框车门未初始化，车门打开禁止升窗 */
        guard1 = true;
      } else {
        localDW->is_AUTO_UP = Win_Ctrl_IN_UPFrameLess;
        localDW->temporalCounter_i1 = 0U;
        *rty_u8WNDExecReq = 2U;
        *rty_u8PWL_WinOpeationSt = 1U;

        /* window closing */
      }
    } else {
      localDW->is_AUTO_UP = Win_Ctrl_IN_UPFrame;
      localDW->temporalCounter_i1 = 0U;
      *rty_u8WNDExecReq = 2U;
      *rty_u8PWL_WinOpeationSt = 1U;

      /* window closing */
    }
  } else {
    /* 已学习 */
    if (rtu_bDoorFramelessGlassCfg && rtu_bDoorAjarSt &&
        (rtu_u8WinCurrentPosPercent <= rtu_u8WinShortDropPst)) {
      /* 无框车门 */
      /* 车门打开 */
      /* 玻璃开度小于短降距离，禁止升窗 */
      guard1 = true;
    } else {
      localDW->is_AUTO_UP = Win_Ctrl_IN_UP_i;
      *rty_u8WNDExecReq = 2U;
      *rty_u8PWL_WinOpeationSt = 1U;

      /* window closing */
    }
  }

  if (guard1) {
    localDW->is_AUTO_UP = Win_Ctrl_IN_Stop;
    *rty_u8WNDExecReq = 0U;
    *rty_u8WNDExecStatus = 0U;
    if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
      /* 不在热保护，防夹 */
      *rty_u8PWL_WinOpeationSt = 0U;
    }
  }
}

/* Function for Chart: '<S79>/SLC' */
static void Win_Ctrl_enter_internal_Action(uint8 rtu_u8WNDCmd, uint8
  rtu_u8MotorTargetPstCtr, uint8 rtu_u8WLVentilationPst, uint8
  rtu_u8WinCurrentPosPercent, uint8 rtu_u8WinShortDropPst, uint8
  rtu_u8PowerDoorReqWinOpenPst, boolean rtu_bVoltDisableFlg, uint8 rtu_u8TPflg,
  uint8 rtu_u8CurrtFixFlg, uint8 rtu_u8NormalizeSts, boolean
  rtu_bDoorFramelessGlassCfg, boolean rtu_bDoorAjarSt, uint8 *rty_u8WNDExecReq,
  uint8 *rty_u8PWL_WinOpeationSt, uint8 *rty_u8WNDExecStatus, rtDW_SLC_Win_Ctrl *
  localDW)
{
  boolean guard1 = false;
  boolean guard2 = false;
  boolean guard3 = false;
  guard1 = false;
  guard2 = false;
  guard3 = false;
  if (rtu_u8WNDCmd == 3) {
    guard1 = true;
  } else if (rtu_u8WNDCmd == 4) {
    localDW->is_Action = Win_Ctrl_IN_AUTO_DN;
    localDW->u8UpMotorStallCount = 0U;
    Win_Ctrl_enter_internal_AUTO_DN(rtu_u8MotorTargetPstCtr,
      rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent, rtu_u8WinShortDropPst,
      rtu_u8PowerDoorReqWinOpenPst, rtu_bVoltDisableFlg, rtu_u8TPflg,
      rtu_u8CurrtFixFlg, rtu_u8NormalizeSts, rty_u8WNDExecReq,
      rty_u8PWL_WinOpeationSt, rty_u8WNDExecStatus, localDW);
  } else if (rtu_u8WNDCmd == 1) {
    localDW->is_Action = Win_Ctrl_IN_MANUAL_UP;
    localDW->u8DnMotorStallCount = 0U;
    localDW->u8StepMotionLimitFrame = 0U;
    localDW->u8StepMotionLimit = 0U;
    if ((localDW->u8UpMotorStallCount >= 3) || rtu_bVoltDisableFlg) {
      /* 电压过高或过低 */
      guard2 = true;
    } else if (rtu_u8TPflg >= 1) {
      /* 电机处于热保护 */
      *rty_u8PWL_WinOpeationSt = 4U;

      /* window MotOverheat */
      guard2 = true;
    } else if (rtu_u8CurrtFixFlg == 1) {
      /* 堵转发生 */
      guard2 = true;
    } else if (rtu_u8NormalizeSts == 0) {
      /* 未初始化 */
      if (rtu_bDoorFramelessGlassCfg) {
        /* 无框车门 */
        if (rtu_bDoorAjarSt) {
          /* 车门打开 */
          /* 无框车门未初始化，车门打开禁止升窗 */
          guard2 = true;
        } else {
          localDW->is_MANUAL_UP = Win_Ctrl_IN_UPFrameLess;
          localDW->temporalCounter_i1 = 0U;
          *rty_u8WNDExecReq = 1U;
          *rty_u8PWL_WinOpeationSt = 1U;

          /* window closing */
        }
      } else {
        localDW->is_MANUAL_UP = Win_Ctrl_IN_UPFrame;
        localDW->temporalCounter_i1 = 0U;
        *rty_u8WNDExecReq = 1U;
        *rty_u8PWL_WinOpeationSt = 1U;

        /* window closing */
      }
    } else {
      /* 已学习 */
      if (rtu_bDoorFramelessGlassCfg && rtu_bDoorAjarSt &&
          (rtu_u8WinCurrentPosPercent <= rtu_u8WinShortDropPst)) {
        /* 无框车门 */
        /* 车门打开 */
        /* 玻璃开度小于短降距离，禁止升窗 */
        guard2 = true;
      } else {
        localDW->is_MANUAL_UP = Win_Ctrl_IN_UP_i;
        *rty_u8WNDExecReq = 1U;
        *rty_u8PWL_WinOpeationSt = 1U;

        /* window closing */
      }
    }
  } else if (rtu_u8WNDCmd == 2) {
    localDW->is_Action = Win_Ctrl_IN_MANUAL_DN;
    localDW->u8UpMotorStallCount = 0U;
    localDW->u8StepMotionLimitFrame = 0U;
    localDW->u8StepMotionLimit = 0U;
    if (rtu_bVoltDisableFlg || (localDW->u8DnMotorStallCount >= 3)) {
      /* 电压过高或过低 */
      guard3 = true;
    } else if (rtu_u8TPflg == 2) {
      /* 电机处于二级热保护 */
      *rty_u8PWL_WinOpeationSt = 4U;

      /* window MotOverheat */
      guard3 = true;
    } else if (rtu_u8CurrtFixFlg == 1) {
      /* 堵转发生 */
      guard3 = true;
    } else {
      localDW->is_MANUAL_DN = Win_Ctrl_IN_DN;
      *rty_u8WNDExecReq = 3U;
      *rty_u8PWL_WinOpeationSt = 2U;

      /* window opening */
    }
  } else {
    guard1 = true;
  }

  if (guard3) {
    localDW->is_MANUAL_DN = Win_Ctrl_IN_Stop_g;
    *rty_u8WNDExecReq = 0U;
    *rty_u8WNDExecStatus = 0U;
    if (*rty_u8PWL_WinOpeationSt != 4) {
      /* 不在热保护 */
      *rty_u8PWL_WinOpeationSt = 0U;
    }
  }

  if (guard2) {
    localDW->is_MANUAL_UP = Win_Ctrl_IN_Stop;
    *rty_u8WNDExecReq = 0U;
    *rty_u8WNDExecStatus = 0U;
    if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
      /* 不在热保护，防夹 */
      *rty_u8PWL_WinOpeationSt = 0U;
    }
  }

  if (guard1) {
    localDW->is_Action = Win_Ctrl_IN_AUTO_UP;
    localDW->u8DnMotorStallCount = 0U;
    localDW->u8StepMotionLimitFrame = 0U;
    localDW->u8StepMotionLimit = 0U;
    Win_Ctrl_enter_internal_AUTO_UP(rtu_u8MotorTargetPstCtr,
      rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent, rtu_u8WinShortDropPst,
      rtu_bVoltDisableFlg, rtu_u8TPflg, rtu_u8CurrtFixFlg, rtu_u8NormalizeSts,
      rtu_bDoorFramelessGlassCfg, rtu_bDoorAjarSt, rty_u8WNDExecReq,
      rty_u8PWL_WinOpeationSt, rty_u8WNDExecStatus, localDW);
  }
}

/* Function for Chart: '<S79>/SLC' */
static void Win_Ctrl_AUTO_DN(uint8 rtu_u8MotorTargetPstCtr, uint8
  rtu_u8WLVentilationPst, uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, uint8 rtu_u8PowerDoorReqWinOpenPst, boolean
  rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8 rtu_u8CurrtFixFlg, uint8
  rtu_u8NormalizeSts, boolean rtu_bPositionLostFlg, boolean rtu_bOverRunTime,
  boolean rtu_bBDCSStopReq, uint8 *rty_u8WNDExecReq, boolean
  *rty_bWinShrtDrpFlgTemp, uint8 *rty_u8PWL_WinOpeationSt, uint8
  *rty_u8WNDExecStatus, uint8 *rty_bWinShrtDrpFlgWrtCntTemp, rtDW_SLC_Win_Ctrl
  *localDW)
{
  sint32 tmp;
  boolean guard1 = false;
  boolean guard2 = false;
  boolean guard3 = false;
  boolean guard4 = false;
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  switch (localDW->is_AUTO_DN) {
   case Win_Ctrl_IN_DN:
    *rty_u8WNDExecReq = 4U;
    if ((localDW->bTargetFlag && (rtu_u8NormalizeSts == 1) &&
         (rtu_u8WinCurrentPosPercent >= rtu_u8MotorTargetPstCtr)) ||
        (localDW->bVentilateFlag && (rtu_u8NormalizeSts == 1) &&
         (rtu_u8WinCurrentPosPercent >= rtu_u8WLVentilationPst))) {
      /* 开度控制下降请求 */
      /* 车窗位置小于目标位置 */
      /* 透气模式下降请求 */
      /* 玻璃开度大于透气距离 */
      guard1 = true;
    } else if ((localDW->bOPDoorFlag && (rtu_u8NormalizeSts == 1) &&
                (rtu_u8WinCurrentPosPercent >= rtu_u8WinShortDropPst)) ||
               (localDW->bElecDoorFlag && (rtu_u8NormalizeSts == 1) && ((float64)
                 rtu_u8WinCurrentPosPercent * 0.5 >=
                 rtu_u8PowerDoorReqWinOpenPst))) {
      /* 开门/拉外把手短降 */
      /* 玻璃开度大于短降距离 */
      /* 电动开门短降 */
      /* 玻璃开度大于电动门短降距离 */
      if (*rty_bWinShrtDrpFlgWrtCntTemp < 255) {
        *rty_bWinShrtDrpFlgTemp = true;
        tmp = *rty_bWinShrtDrpFlgWrtCntTemp + 1;
        if (tmp > 255) {
          tmp = 255;
        }

        *rty_bWinShrtDrpFlgWrtCntTemp = (uint8)tmp;

        /* 短降标志置位 */
      } else {
        *rty_bWinShrtDrpFlgWrtCntTemp = 0U;
      }

      guard1 = true;
    } else if ((rtu_u8NormalizeSts == 1) && rtu_bBDCSStopReq) {
      /* 达到下软停位置 */
      guard1 = true;
    } else if (rtu_bVoltDisableFlg || rtu_bOverRunTime) {
      guard2 = true;
    } else if (rtu_u8CurrtFixFlg == 1) {
      tmp = localDW->u8DnMotorStallCount + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8DnMotorStallCount = (uint8)tmp;
      localDW->is_AUTO_DN = Win_Ctrl_IN_Stop;
      *rty_u8WNDExecReq = 0U;
      *rty_u8WNDExecStatus = 0U;
      if (*rty_u8PWL_WinOpeationSt != 4) {
        /* 不在热保护 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    } else {
      if (rtu_u8TPflg == 2) {
        *rty_u8PWL_WinOpeationSt = 4U;

        /* window MotOverheat */
        guard2 = true;
      }
    }
    break;

   case Win_Ctrl_IN_ElecDn:
    *rty_u8WNDExecReq = 4U;
    if (localDW->temporalCounter_i1 >= 20) {
      /* 未学习强制下降200ms */
      if (*rty_bWinShrtDrpFlgWrtCntTemp < 255) {
        *rty_bWinShrtDrpFlgTemp = true;
        tmp = *rty_bWinShrtDrpFlgWrtCntTemp + 1;
        if (tmp > 255) {
          tmp = 255;
        }

        *rty_bWinShrtDrpFlgWrtCntTemp = (uint8)tmp;

        /* 短降标志置位 */
      } else {
        *rty_bWinShrtDrpFlgWrtCntTemp = 0U;
      }

      guard3 = true;
    } else if (rtu_bPositionLostFlg || rtu_bVoltDisableFlg || rtu_bOverRunTime)
    {
      guard3 = true;
    } else if (rtu_u8CurrtFixFlg == 1) {
      tmp = localDW->u8DnMotorStallCount + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8DnMotorStallCount = (uint8)tmp;
      localDW->is_AUTO_DN = Win_Ctrl_IN_Stop;
      *rty_u8WNDExecReq = 0U;
      *rty_u8WNDExecStatus = 0U;
      if (*rty_u8PWL_WinOpeationSt != 4) {
        /* 不在热保护 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    } else {
      if (rtu_u8TPflg == 2) {
        *rty_u8PWL_WinOpeationSt = 4U;

        /* window MotOverheat */
        guard3 = true;
      }
    }
    break;

   case Win_Ctrl_IN_OPDn:
    *rty_u8WNDExecReq = 4U;
    if (localDW->temporalCounter_i1 >= 20) {
      /* 未学习强制下降200ms */
      if (*rty_bWinShrtDrpFlgWrtCntTemp < 255) {
        *rty_bWinShrtDrpFlgTemp = true;
        tmp = *rty_bWinShrtDrpFlgWrtCntTemp + 1;
        if (tmp > 255) {
          tmp = 255;
        }

        *rty_bWinShrtDrpFlgWrtCntTemp = (uint8)tmp;
      } else {
        *rty_bWinShrtDrpFlgWrtCntTemp = 0U;
      }

      guard4 = true;
    } else if (rtu_bPositionLostFlg || rtu_bVoltDisableFlg || rtu_bOverRunTime)
    {
      guard4 = true;
    } else if (rtu_u8CurrtFixFlg == 1) {
      tmp = localDW->u8DnMotorStallCount + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8DnMotorStallCount = (uint8)tmp;
      localDW->is_AUTO_DN = Win_Ctrl_IN_Stop;
      *rty_u8WNDExecReq = 0U;
      *rty_u8WNDExecStatus = 0U;
      if (*rty_u8PWL_WinOpeationSt != 4) {
        /* 不在热保护 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    } else {
      if (rtu_u8TPflg == 2) {
        *rty_u8PWL_WinOpeationSt = 4U;

        /* window MotOverheat */
        guard4 = true;
      }
    }
    break;

   case Win_Ctrl_IN_Stop:
    *rty_u8WNDExecReq = 0U;
    *rty_u8WNDExecStatus = 0U;
    localDW->is_AUTO_DN = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
    localDW->is_Action = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
    localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Init_a;
    Win_Ctrl_enter_atomic_Init(rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
      rty_u8WNDExecStatus, localDW);
    break;

   default:
    if (localDW->temporalCounter_i1 >= 10) {
      /* 延迟100ms停止车窗便于调速 */
      localDW->is_AUTO_DN = Win_Ctrl_IN_Stop;
      *rty_u8WNDExecReq = 0U;
      *rty_u8WNDExecStatus = 0U;
      if (*rty_u8PWL_WinOpeationSt != 4) {
        /* 不在热保护 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    }
    break;
  }

  if (guard4) {
    localDW->is_AUTO_DN = Win_Ctrl_IN_Stop;
    *rty_u8WNDExecReq = 0U;
    *rty_u8WNDExecStatus = 0U;
    if (*rty_u8PWL_WinOpeationSt != 4) {
      /* 不在热保护 */
      *rty_u8PWL_WinOpeationSt = 0U;
    }
  }

  if (guard3) {
    localDW->is_AUTO_DN = Win_Ctrl_IN_Stop;
    *rty_u8WNDExecReq = 0U;
    *rty_u8WNDExecStatus = 0U;
    if (*rty_u8PWL_WinOpeationSt != 4) {
      /* 不在热保护 */
      *rty_u8PWL_WinOpeationSt = 0U;
    }
  }

  if (guard2) {
    localDW->is_AUTO_DN = Win_Ctrl_IN_Stop;
    *rty_u8WNDExecReq = 0U;
    *rty_u8WNDExecStatus = 0U;
    if (*rty_u8PWL_WinOpeationSt != 4) {
      /* 不在热保护 */
      *rty_u8PWL_WinOpeationSt = 0U;
    }
  }

  if (guard1) {
    localDW->is_AUTO_DN = Win_Ctrl_IN_Wait_ay;
    localDW->temporalCounter_i1 = 0U;
  }
}

/* Function for Chart: '<S79>/SLC' */
static void Win_Ctrl_AUTO_UP(uint8 rtu_u8MotorTargetPstCtr, uint8
  rtu_u8WLVentilationPst, uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, boolean rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8
  rtu_u8CurrtFixFlg, uint8 rtu_u8NormalizeSts, boolean rtu_bDoorAjarSt, boolean
  rtu_bPositionLostFlg, boolean rtu_bOverRunTime, boolean rtu_bActiveFlg,
  boolean rtu_bTDCSStopReq, uint8 *rty_u8WNDExecReq, uint8
  *rty_u8PWL_WinOpeationSt, uint8 *rty_u8WNDExecStatus, rtDW_SLC_Win_Ctrl
  *localDW)
{
  sint32 tmp;
  boolean guard1 = false;
  boolean guard2 = false;
  boolean guard3 = false;
  guard1 = false;
  guard2 = false;
  guard3 = false;
  switch (localDW->is_AUTO_UP) {
   case Win_Ctrl_IN_NormalizeStop:
    *rty_u8WNDExecReq = 0U;
    if ((localDW->temporalCounter_i1 >= 50) && (localDW->u8StepMotionLimitFrame <
         10)) {
      localDW->is_AUTO_UP = Win_Ctrl_IN_UPFrame;
      localDW->temporalCounter_i1 = 0U;
      *rty_u8WNDExecReq = 2U;
      *rty_u8PWL_WinOpeationSt = 1U;

      /* window closing */
    } else if (localDW->u8StepMotionLimitFrame >= 10) {
      guard1 = true;
    } else if (rtu_u8CurrtFixFlg == 1) {
      tmp = localDW->u8UpMotorStallCount + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8UpMotorStallCount = (uint8)tmp;
      localDW->is_AUTO_UP = Win_Ctrl_IN_Stop;
      *rty_u8WNDExecStatus = 0U;
      if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
        /* 不在热保护，防夹 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    } else if (rtu_u8TPflg == 2) {
      *rty_u8PWL_WinOpeationSt = 4U;

      /* window MotOverheat */
      guard1 = true;
    } else {
      if (rtu_bVoltDisableFlg || rtu_bOverRunTime) {
        guard1 = true;
      }
    }
    break;

   case Win_Ctrl_IN_NormalizeStop1:
    *rty_u8WNDExecReq = 0U;
    if ((localDW->temporalCounter_i1 >= 50) && (localDW->u8StepMotionLimit < 10))
    {
      localDW->is_AUTO_UP = Win_Ctrl_IN_UPFrameLess;
      localDW->temporalCounter_i1 = 0U;
      *rty_u8WNDExecReq = 2U;
      *rty_u8PWL_WinOpeationSt = 1U;

      /* window closing */
    } else if (localDW->u8StepMotionLimit >= 10) {
      guard2 = true;
    } else if (rtu_u8CurrtFixFlg == 1) {
      tmp = localDW->u8UpMotorStallCount + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8UpMotorStallCount = (uint8)tmp;
      localDW->is_AUTO_UP = Win_Ctrl_IN_Stop;
      *rty_u8WNDExecStatus = 0U;
      if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
        /* 不在热保护，防夹 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    } else if (rtu_u8TPflg == 2) {
      *rty_u8PWL_WinOpeationSt = 4U;

      /* window MotOverheat */
      guard2 = true;
    } else {
      if (rtu_bVoltDisableFlg || rtu_bOverRunTime) {
        guard2 = true;
      }
    }
    break;

   case Win_Ctrl_IN_Reverse:
    if ((localDW->bReverseFinish_prev != localDW->bReverseFinish_start) &&
        localDW->bReverseFinish_start) {
      /* 防夹反转完成标志 */
      *rty_u8PWL_WinOpeationSt = 3U;

      /* anti-pinch reversing */
      localDW->is_AUTO_UP = Win_Ctrl_IN_Stop;
      *rty_u8WNDExecReq = 0U;
      *rty_u8WNDExecStatus = 0U;
      if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
        /* 不在热保护，防夹 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    }
    break;

   case Win_Ctrl_IN_Stop:
    *rty_u8WNDExecReq = 0U;
    *rty_u8WNDExecStatus = 0U;
    localDW->is_AUTO_UP = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
    localDW->is_Action = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
    localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Init_a;
    Win_Ctrl_enter_atomic_Init(rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
      rty_u8WNDExecStatus, localDW);
    break;

   case Win_Ctrl_IN_UP_i:
    *rty_u8WNDExecReq = 2U;
    if ((localDW->bTargetFlag && (((rtu_u8NormalizeSts == 1) &&
           (rtu_u8WinCurrentPosPercent <= rtu_u8MotorTargetPstCtr)) ||
          (rtu_bDoorAjarSt && (rtu_u8NormalizeSts == 1) &&
           (rtu_u8WinCurrentPosPercent <= rtu_u8WinShortDropPst)))) ||
        ((localDW->bVentilateFlag && (rtu_u8NormalizeSts == 1) &&
          (rtu_u8WinCurrentPosPercent <= rtu_u8WLVentilationPst)) ||
         (rtu_bDoorAjarSt && (rtu_u8NormalizeSts == 1) &&
          (rtu_u8WinCurrentPosPercent <= rtu_u8WinShortDropPst))) ||
        ((rtu_u8NormalizeSts == 1) && rtu_bTDCSStopReq)) {
      /* 开度控制上升请求 */
      /* 车窗位置小于目标位置 */
      /* 车门打开 */
      /* 玻璃位置小于短降距离，禁止升窗 */
      /* 透气模式上升请求 */
      /* 玻璃位置小于透气距离，停止升窗 */
      /* 车门打开 */
      /* 玻璃位置小于短降距离，禁止升窗 */
      /* 达到上软停位置 */
      localDW->is_AUTO_UP = Win_Ctrl_IN_Wait_a;
      localDW->temporalCounter_i1 = 0U;
    } else if ((localDW->bReverse_prev != localDW->bReverse_start) &&
               localDW->bReverse_start) {
      /* 防夹反转请求 */
      localDW->is_AUTO_UP = Win_Ctrl_IN_Reverse;
    } else if ((rtu_u8NormalizeSts == 0) || rtu_bPositionLostFlg ||
               rtu_bActiveFlg || rtu_bVoltDisableFlg || rtu_bOverRunTime) {
      guard3 = true;
    } else if (rtu_u8CurrtFixFlg == 1) {
      tmp = localDW->u8UpMotorStallCount + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8UpMotorStallCount = (uint8)tmp;
      localDW->is_AUTO_UP = Win_Ctrl_IN_Stop;
      *rty_u8WNDExecReq = 0U;
      *rty_u8WNDExecStatus = 0U;
      if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
        /* 不在热保护，防夹 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    } else {
      if (rtu_u8TPflg == 2) {
        *rty_u8PWL_WinOpeationSt = 4U;

        /* window MotOverheat */
        guard3 = true;
      }
    }
    break;

   case Win_Ctrl_IN_UPFrame:
    *rty_u8WNDExecReq = 2U;
    if (localDW->temporalCounter_i1 >= 50) {
      /* 有框车门未初始化，500ms步进上升，寸动十次 */
      localDW->is_AUTO_UP = Win_Ctrl_IN_NormalizeStop;
      localDW->temporalCounter_i1 = 0U;
      *rty_u8WNDExecReq = 0U;
      tmp = localDW->u8StepMotionLimitFrame + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8StepMotionLimitFrame = (uint8)tmp;
    }
    break;

   case Win_Ctrl_IN_UPFrameLess:
    *rty_u8WNDExecReq = 2U;
    if (localDW->temporalCounter_i1 >= 50) {
      /* 无框车门未初始化，车门关闭则500ms步进上升，寸动十次 */
      localDW->is_AUTO_UP = Win_Ctrl_IN_NormalizeStop1;
      localDW->temporalCounter_i1 = 0U;
      *rty_u8WNDExecReq = 0U;
      tmp = localDW->u8StepMotionLimit + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8StepMotionLimit = (uint8)tmp;
    }
    break;

   default:
    if (localDW->temporalCounter_i1 >= 10) {
      /* 延迟100ms停止车窗便于调速 */
      localDW->is_AUTO_UP = Win_Ctrl_IN_Stop;
      *rty_u8WNDExecReq = 0U;
      *rty_u8WNDExecStatus = 0U;
      if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
        /* 不在热保护，防夹 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    }
    break;
  }

  if (guard3) {
    localDW->is_AUTO_UP = Win_Ctrl_IN_Stop;
    *rty_u8WNDExecReq = 0U;
    *rty_u8WNDExecStatus = 0U;
    if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
      /* 不在热保护，防夹 */
      *rty_u8PWL_WinOpeationSt = 0U;
    }
  }

  if (guard2) {
    localDW->is_AUTO_UP = Win_Ctrl_IN_Stop;
    *rty_u8WNDExecStatus = 0U;
    if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
      /* 不在热保护，防夹 */
      *rty_u8PWL_WinOpeationSt = 0U;
    }
  }

  if (guard1) {
    localDW->is_AUTO_UP = Win_Ctrl_IN_Stop;
    *rty_u8WNDExecStatus = 0U;
    if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
      /* 不在热保护，防夹 */
      *rty_u8PWL_WinOpeationSt = 0U;
    }
  }
}

/* Function for Chart: '<S79>/SLC' */
static void Win_Ctrl_MANUAL_UP(uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, boolean rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8
  rtu_u8CurrtFixFlg, uint8 rtu_u8NormalizeSts, boolean rtu_bDoorAjarSt, boolean
  rtu_bOverRunTime, uint8 *rty_u8WNDExecReq, uint8 *rty_u8PWL_WinOpeationSt,
  uint8 *rty_u8WNDExecStatus, rtDW_SLC_Win_Ctrl *localDW)
{
  sint32 tmp;
  boolean guard1 = false;
  boolean guard2 = false;
  boolean guard3 = false;
  guard1 = false;
  guard2 = false;
  guard3 = false;
  switch (localDW->is_MANUAL_UP) {
   case Win_Ctrl_IN_NormalizeStop:
    *rty_u8WNDExecReq = 0U;
    if ((localDW->temporalCounter_i1 >= 50) && (localDW->u8StepMotionLimitFrame <
         10)) {
      localDW->is_MANUAL_UP = Win_Ctrl_IN_UPFrame;
      localDW->temporalCounter_i1 = 0U;
      *rty_u8WNDExecReq = 1U;
      *rty_u8PWL_WinOpeationSt = 1U;

      /* window closing */
    } else if (localDW->u8StepMotionLimitFrame >= 10) {
      guard1 = true;
    } else if (rtu_u8CurrtFixFlg == 1) {
      tmp = localDW->u8UpMotorStallCount + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8UpMotorStallCount = (uint8)tmp;
      localDW->is_MANUAL_UP = Win_Ctrl_IN_Stop;
      *rty_u8WNDExecStatus = 0U;
      if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
        /* 不在热保护，防夹 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    } else if (rtu_u8TPflg == 2) {
      *rty_u8PWL_WinOpeationSt = 4U;

      /* window MotOverheat */
      guard1 = true;
    } else {
      if (rtu_bVoltDisableFlg || rtu_bOverRunTime) {
        guard1 = true;
      }
    }
    break;

   case Win_Ctrl_IN_NormalizeStop1:
    *rty_u8WNDExecReq = 0U;
    if ((localDW->temporalCounter_i1 >= 50) && (localDW->u8StepMotionLimit < 10))
    {
      localDW->is_MANUAL_UP = Win_Ctrl_IN_UPFrameLess;
      localDW->temporalCounter_i1 = 0U;
      *rty_u8WNDExecReq = 1U;
      *rty_u8PWL_WinOpeationSt = 1U;

      /* window closing */
    } else if (localDW->u8StepMotionLimit >= 10) {
      guard2 = true;
    } else if (rtu_u8CurrtFixFlg == 1) {
      tmp = localDW->u8UpMotorStallCount + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8UpMotorStallCount = (uint8)tmp;
      localDW->is_MANUAL_UP = Win_Ctrl_IN_Stop;
      *rty_u8WNDExecStatus = 0U;
      if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
        /* 不在热保护，防夹 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    } else if (rtu_u8TPflg == 2) {
      *rty_u8PWL_WinOpeationSt = 4U;

      /* window MotOverheat */
      guard2 = true;
    } else {
      if (rtu_bVoltDisableFlg || rtu_bOverRunTime) {
        guard2 = true;
      }
    }
    break;

   case Win_Ctrl_IN_Reverse:
    if ((localDW->bReverseFinish_prev != localDW->bReverseFinish_start) &&
        localDW->bReverseFinish_start) {
      /* 防夹反转完成标志 */
      *rty_u8PWL_WinOpeationSt = 3U;

      /* anti-pinch reversing */
      localDW->is_MANUAL_UP = Win_Ctrl_IN_Stop;
      *rty_u8WNDExecReq = 0U;
      *rty_u8WNDExecStatus = 0U;
      if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
        /* 不在热保护，防夹 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    }
    break;

   case Win_Ctrl_IN_Stop:
    *rty_u8WNDExecReq = 0U;
    *rty_u8WNDExecStatus = 0U;
    localDW->is_MANUAL_UP = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
    localDW->is_Action = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
    localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Init_a;
    Win_Ctrl_enter_atomic_Init(rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
      rty_u8WNDExecStatus, localDW);
    break;

   case Win_Ctrl_IN_UP_i:
    *rty_u8WNDExecReq = 1U;
    if (rtu_bDoorAjarSt && (rtu_u8NormalizeSts == 1) &&
        (rtu_u8WinCurrentPosPercent <= rtu_u8WinShortDropPst)) {
      /* 车门打开 */
      /* 玻璃开度小于短降距离，禁止升窗 */
      guard3 = true;
    } else if ((localDW->bReverse_prev != localDW->bReverse_start) &&
               localDW->bReverse_start) {
      /* 防夹反转请求 */
      localDW->is_MANUAL_UP = Win_Ctrl_IN_Reverse;
    } else if (rtu_bVoltDisableFlg || rtu_bOverRunTime) {
      guard3 = true;
    } else if (rtu_u8CurrtFixFlg == 1) {
      tmp = localDW->u8UpMotorStallCount + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8UpMotorStallCount = (uint8)tmp;
      localDW->is_MANUAL_UP = Win_Ctrl_IN_Stop;
      *rty_u8WNDExecReq = 0U;
      *rty_u8WNDExecStatus = 0U;
      if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
        /* 不在热保护，防夹 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    } else {
      if (rtu_u8TPflg == 2) {
        *rty_u8PWL_WinOpeationSt = 4U;

        /* window MotOverheat */
        guard3 = true;
      }
    }
    break;

   case Win_Ctrl_IN_UPFrame:
    *rty_u8WNDExecReq = 1U;
    if (localDW->temporalCounter_i1 >= 50) {
      /* 有框车门未初始化，500ms步进上升 */
      localDW->is_MANUAL_UP = Win_Ctrl_IN_NormalizeStop;
      localDW->temporalCounter_i1 = 0U;
      *rty_u8WNDExecReq = 0U;
      tmp = localDW->u8StepMotionLimitFrame + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8StepMotionLimitFrame = (uint8)tmp;
    }
    break;

   default:
    *rty_u8WNDExecReq = 1U;
    if (localDW->temporalCounter_i1 >= 50) {
      /* 无框车门未初始化，车门关闭则500ms步进上升 */
      localDW->is_MANUAL_UP = Win_Ctrl_IN_NormalizeStop1;
      localDW->temporalCounter_i1 = 0U;
      *rty_u8WNDExecReq = 0U;
      tmp = localDW->u8StepMotionLimit + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8StepMotionLimit = (uint8)tmp;
    }
    break;
  }

  if (guard3) {
    localDW->is_MANUAL_UP = Win_Ctrl_IN_Stop;
    *rty_u8WNDExecReq = 0U;
    *rty_u8WNDExecStatus = 0U;
    if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
      /* 不在热保护，防夹 */
      *rty_u8PWL_WinOpeationSt = 0U;
    }
  }

  if (guard2) {
    localDW->is_MANUAL_UP = Win_Ctrl_IN_Stop;
    *rty_u8WNDExecStatus = 0U;
    if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
      /* 不在热保护，防夹 */
      *rty_u8PWL_WinOpeationSt = 0U;
    }
  }

  if (guard1) {
    localDW->is_MANUAL_UP = Win_Ctrl_IN_Stop;
    *rty_u8WNDExecStatus = 0U;
    if ((*rty_u8PWL_WinOpeationSt != 4) && (*rty_u8PWL_WinOpeationSt != 3)) {
      /* 不在热保护，防夹 */
      *rty_u8PWL_WinOpeationSt = 0U;
    }
  }
}

/* Function for Chart: '<S79>/SLC' */
static void Win_Ctrl_Action(uint8 rtu_u8WNDCmd, uint8 rtu_u8MotorTargetPstCtr,
  uint8 rtu_u8WLVentilationPst, uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, uint8 rtu_u8PowerDoorReqWinOpenPst, boolean
  rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8 rtu_u8CurrtFixFlg, uint8
  rtu_u8NormalizeSts, boolean rtu_bDoorFramelessGlassCfg, boolean
  rtu_bDoorAjarSt, boolean rtu_bPositionLostFlg, boolean rtu_bOverRunTime,
  boolean rtu_bActiveFlg, boolean rtu_bWinShrtDrpFlgNVM, boolean
  rtu_bBDCSStopReq, boolean rtu_bTDCSStopReq, uint8 *rty_u8WNDExecReq, boolean
  *rty_bWinShrtDrpFlgTemp, uint8 *rty_u8PWL_WinOpeationSt, uint8
  *rty_u8WNDExecStatus, uint8 *rty_bWinShrtDrpFlgWrtCntTemp, rtDW_SLC_Win_Ctrl
  *localDW)
{
  sint32 tmp;
  boolean guard1 = false;
  boolean guard2 = false;
  if ((!localDW->bRelearnFlg) && (rtu_u8WNDCmd == 0)) {
    Win_Ctrl_exit_internal_Action(localDW);
    localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Init_a;
    Win_Ctrl_enter_atomic_Init(rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
      rty_u8WNDExecStatus, localDW);
  } else if ((localDW->u8WNDCmd_prev != localDW->u8WNDCmd_start) &&
             (rtu_u8WNDCmd != 5) && (rtu_u8WNDCmd != 6) && (rtu_u8WNDCmd != 7) &&
             (rtu_u8WNDCmd != 8)) {
    localDW->bRelearnFlg = false;
    Win_Ctrl_exit_internal_Action(localDW);
    localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Action;
    Win_Ctrl_enter_internal_Action(rtu_u8WNDCmd, rtu_u8MotorTargetPstCtr,
      rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent, rtu_u8WinShortDropPst,
      rtu_u8PowerDoorReqWinOpenPst, rtu_bVoltDisableFlg, rtu_u8TPflg,
      rtu_u8CurrtFixFlg, rtu_u8NormalizeSts, rtu_bDoorFramelessGlassCfg,
      rtu_bDoorAjarSt, rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
      rty_u8WNDExecStatus, localDW);
  } else if ((localDW->u8WNDCmd_prev != localDW->u8WNDCmd_start) &&
             (localDW->u8WNDCmd_start == 6)) {
    Win_Ctrl_exit_internal_Action(localDW);
    localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Ventilation;
    localDW->bVentilateFlag = true;
    *rty_u8PWL_WinOpeationSt = 5U;
    if (rtu_u8WinCurrentPosPercent > rtu_u8WLVentilationPst) {
      /* 玻璃开度大于透气距离 */
      localDW->u8VentilateReq = 2U;
    } else {
      localDW->u8VentilateReq = 4U;
    }
  } else if ((localDW->u8WNDCmd_prev != localDW->u8WNDCmd_start) &&
             (localDW->u8WNDCmd_start == 5)) {
    Win_Ctrl_exit_internal_Action(localDW);
    localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Target;
    localDW->bTargetFlag = true;
    if (rtu_u8WinCurrentPosPercent > rtu_u8MotorTargetPstCtr) {
      /* 车窗位置小于目标位置 */
      localDW->u8TargetReq = 2U;
    } else {
      localDW->u8TargetReq = 4U;
    }
  } else if ((localDW->u8WNDCmd_prev != localDW->u8WNDCmd_start) &&
             (localDW->u8WNDCmd_start == 7)) {
    Win_Ctrl_exit_internal_Action(localDW);
    localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_OPDoor;
    localDW->bOPDoorFlag = true;
    if (rtu_u8WinCurrentPosPercent < rtu_u8WinShortDropPst) {
      /* 玻璃开度小于短降距离 */
      localDW->is_OPDoor = Win_Ctrl_IN_DN;
      localDW->u8OPDoorReq = 4U;
    } else if ((rtu_u8NormalizeSts == 0) && (!rtu_bWinShrtDrpFlgNVM)) {
      /* 未学习且没有执行过短降 */
      localDW->is_OPDoor = Win_Ctrl_IN_DN1;
      localDW->u8OPDoorReq = 4U;
    } else {
      localDW->is_OPDoor = Win_Ctrl_IN_STOP;
      *rty_u8WNDExecStatus = 0U;
    }
  } else if ((localDW->u8WNDCmd_prev != localDW->u8WNDCmd_start) &&
             (localDW->u8WNDCmd_start == 8)) {
    Win_Ctrl_exit_internal_Action(localDW);
    localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_ElecDoor;
    localDW->bElecDoorFlag = true;
    if ((float64)rtu_u8WinCurrentPosPercent * 0.5 < rtu_u8PowerDoorReqWinOpenPst)
    {
      /* 玻璃开度小于电动门短降距离 */
      localDW->is_ElecDoor = Win_Ctrl_IN_DN;
      localDW->u8ElecDoorReq = 4U;
    } else if ((rtu_u8NormalizeSts == 0) && (!rtu_bWinShrtDrpFlgNVM)) {
      /* 未学习且没有执行过短降 */
      localDW->is_ElecDoor = Win_Ctrl_IN_DN1;
      localDW->u8ElecDoorReq = 4U;
    } else {
      localDW->is_ElecDoor = Win_Ctrl_IN_STOP;
      *rty_u8WNDExecStatus = 0U;
    }
  } else {
    guard1 = false;
    guard2 = false;
    switch (localDW->is_Action) {
     case Win_Ctrl_IN_AUTO_DN:
      Win_Ctrl_AUTO_DN(rtu_u8MotorTargetPstCtr, rtu_u8WLVentilationPst,
                       rtu_u8WinCurrentPosPercent, rtu_u8WinShortDropPst,
                       rtu_u8PowerDoorReqWinOpenPst, rtu_bVoltDisableFlg,
                       rtu_u8TPflg, rtu_u8CurrtFixFlg, rtu_u8NormalizeSts,
                       rtu_bPositionLostFlg, rtu_bOverRunTime, rtu_bBDCSStopReq,
                       rty_u8WNDExecReq, rty_bWinShrtDrpFlgTemp,
                       rty_u8PWL_WinOpeationSt, rty_u8WNDExecStatus,
                       rty_bWinShrtDrpFlgWrtCntTemp, localDW);
      break;

     case Win_Ctrl_IN_AUTO_UP:
      Win_Ctrl_AUTO_UP(rtu_u8MotorTargetPstCtr, rtu_u8WLVentilationPst,
                       rtu_u8WinCurrentPosPercent, rtu_u8WinShortDropPst,
                       rtu_bVoltDisableFlg, rtu_u8TPflg, rtu_u8CurrtFixFlg,
                       rtu_u8NormalizeSts, rtu_bDoorAjarSt, rtu_bPositionLostFlg,
                       rtu_bOverRunTime, rtu_bActiveFlg, rtu_bTDCSStopReq,
                       rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
                       rty_u8WNDExecStatus, localDW);
      break;

     case Win_Ctrl_IN_MANUAL_DN:
      switch (localDW->is_MANUAL_DN) {
       case Win_Ctrl_IN_DN:
        *rty_u8WNDExecReq = 3U;
        if (rtu_bVoltDisableFlg || rtu_bOverRunTime) {
          guard2 = true;
        } else if (rtu_u8CurrtFixFlg == 1) {
          tmp = localDW->u8DnMotorStallCount + 1;
          if (tmp > 255) {
            tmp = 255;
          }

          localDW->u8DnMotorStallCount = (uint8)tmp;
          localDW->is_MANUAL_DN = Win_Ctrl_IN_Stop_g;
          *rty_u8WNDExecReq = 0U;
          *rty_u8WNDExecStatus = 0U;
          if (*rty_u8PWL_WinOpeationSt != 4) {
            /* 不在热保护 */
            *rty_u8PWL_WinOpeationSt = 0U;
          }
        } else {
          if (rtu_u8TPflg == 2) {
            *rty_u8PWL_WinOpeationSt = 4U;

            /* window MotOverheat */
            guard2 = true;
          }
        }
        break;

       default:
        *rty_u8WNDExecReq = 0U;
        *rty_u8WNDExecStatus = 0U;
        localDW->is_MANUAL_DN = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
        localDW->is_Action = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Init_a;
        Win_Ctrl_enter_atomic_Init(rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
          rty_u8WNDExecStatus, localDW);
        break;
      }
      break;

     case Win_Ctrl_IN_MANUAL_UP:
      Win_Ctrl_MANUAL_UP(rtu_u8WinCurrentPosPercent, rtu_u8WinShortDropPst,
                         rtu_bVoltDisableFlg, rtu_u8TPflg, rtu_u8CurrtFixFlg,
                         rtu_u8NormalizeSts, rtu_bDoorAjarSt, rtu_bOverRunTime,
                         rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
                         rty_u8WNDExecStatus, localDW);
      break;

     default:
      switch (localDW->is_Relearn_DN) {
       case Win_Ctrl_IN_DN:
        *rty_u8WNDExecReq = 4U;
        if (rtu_bVoltDisableFlg || rtu_bOverRunTime) {
          guard1 = true;
        } else if (rtu_u8TPflg == 2) {
          *rty_u8PWL_WinOpeationSt = 4U;

          /* window MotOverheat */
          guard1 = true;
        } else {
          if (rtu_u8CurrtFixFlg == 1) {
            tmp = localDW->u8DnMotorStallCount + 1;
            if (tmp > 255) {
              tmp = 255;
            }

            localDW->u8DnMotorStallCount = (uint8)tmp;
            localDW->is_Relearn_DN = Win_Ctrl_IN_Stop2;
            localDW->temporalCounter_i1 = 0U;
            *rty_u8WNDExecReq = 0U;
            *rty_u8WNDExecStatus = 0U;
          }
        }
        break;

       case Win_Ctrl_IN_Stop1:
        *rty_u8WNDExecReq = 0U;
        *rty_u8WNDExecStatus = 0U;
        localDW->is_Relearn_DN = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
        localDW->is_Action = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Init_a;
        Win_Ctrl_enter_atomic_Init(rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
          rty_u8WNDExecStatus, localDW);
        break;

       default:
        *rty_u8WNDExecReq = 0U;
        *rty_u8WNDExecStatus = 0U;
        if (localDW->temporalCounter_i1 >= 50) {
          /* 下降到底堵转后，延迟500ms再上升到堵转，完成重新学习 */
          localDW->is_Relearn_DN = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
          localDW->is_Action = Win_Ctrl_IN_AUTO_UP;
          localDW->u8DnMotorStallCount = 0U;
          localDW->u8StepMotionLimitFrame = 0U;
          localDW->u8StepMotionLimit = 0U;
          Win_Ctrl_enter_internal_AUTO_UP(rtu_u8MotorTargetPstCtr,
            rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent,
            rtu_u8WinShortDropPst, rtu_bVoltDisableFlg, rtu_u8TPflg,
            rtu_u8CurrtFixFlg, rtu_u8NormalizeSts, rtu_bDoorFramelessGlassCfg,
            rtu_bDoorAjarSt, rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
            rty_u8WNDExecStatus, localDW);
        }
        break;
      }
      break;
    }

    if (guard2) {
      localDW->is_MANUAL_DN = Win_Ctrl_IN_Stop_g;
      *rty_u8WNDExecReq = 0U;
      *rty_u8WNDExecStatus = 0U;
      if (*rty_u8PWL_WinOpeationSt != 4) {
        /* 不在热保护 */
        *rty_u8PWL_WinOpeationSt = 0U;
      }
    }

    if (guard1) {
      localDW->is_Relearn_DN = Win_Ctrl_IN_Stop1;
      *rty_u8WNDExecReq = 0U;
      *rty_u8WNDExecStatus = 0U;
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S79>/SLC'
 *    '<S80>/SLC'
 *    '<S81>/SLC'
 *    '<S82>/SLC'
 */
static void Win_Ctrl_SLC_Init(uint8 *rty_u8WNDExecReq, boolean
  *rty_bWinShrtDrpFlgTemp, uint8 *rty_u8PWL_WinOpeationSt, uint8
  *rty_u8WNDExecStatus, uint8 *rty_bWinShrtDrpFlgWrtCntTemp)
{
  *rty_u8WNDExecReq = 0U;
  *rty_bWinShrtDrpFlgTemp = false;
  *rty_u8PWL_WinOpeationSt = 0U;
  *rty_u8WNDExecStatus = 0U;
  *rty_bWinShrtDrpFlgWrtCntTemp = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S79>/SLC'
 *    '<S80>/SLC'
 *    '<S81>/SLC'
 *    '<S82>/SLC'
 */
static void Win_Ctrl_SLC(uint8 rtu_u8WNDCmd, uint8 rtu_u8MotorTargetPstCtr,
  uint8 rtu_u8WLVentilationPst, uint8 rtu_u8WinCurrentPosPercent, uint8
  rtu_u8WinShortDropPst, uint8 rtu_u8PowerDoorReqWinOpenPst, boolean
  rtu_bVoltDisableFlg, uint8 rtu_u8TPflg, uint8 rtu_u8CurrtFixFlg, uint8
  rtu_u8NormalizeSts, boolean rtu_bDoorFramelessGlassCfg, boolean
  rtu_bDoorAjarSt, boolean rtu_bReverse, boolean rtu_bPositionLostFlg, boolean
  rtu_bOverRunTime, boolean rtu_bReverseFinish, boolean rtu_bActiveFlg, boolean
  rtu_bWinRelearnReq, boolean rtu_bWinShrtDrpFlgNVM, boolean rtu_bBDCSStopReq,
  boolean rtu_bTDCSStopReq, uint8 *rty_u8WNDExecReq, boolean
  *rty_bWinShrtDrpFlgTemp, uint8 *rty_u8PWL_WinOpeationSt, uint8
  *rty_u8WNDExecStatus, uint8 *rty_bWinShrtDrpFlgWrtCntTemp, rtDW_SLC_Win_Ctrl
  *localDW)
{
  boolean guard1 = false;

  /* Chart: '<S79>/SLC' */
  if (localDW->temporalCounter_i1 < 63U) {
    localDW->temporalCounter_i1++;
  }

  localDW->bReverse_prev = localDW->bReverse_start;
  localDW->bReverse_start = rtu_bReverse;
  localDW->bReverseFinish_prev = localDW->bReverseFinish_start;
  localDW->bReverseFinish_start = rtu_bReverseFinish;
  localDW->bWinRelearnReq_prev = localDW->bWinRelearnReq_start;
  localDW->bWinRelearnReq_start = rtu_bWinRelearnReq;
  localDW->u8WNDCmd_prev = localDW->u8WNDCmd_start;
  localDW->u8WNDCmd_start = rtu_u8WNDCmd;

  /* Chart: '<S79>/SLC' */
  if (localDW->is_active_c29_zcu_wnd_lib == 0U) {
    localDW->bReverse_prev = rtu_bReverse;
    localDW->bReverseFinish_prev = rtu_bReverseFinish;
    localDW->bWinRelearnReq_prev = rtu_bWinRelearnReq;
    localDW->u8WNDCmd_prev = rtu_u8WNDCmd;
    localDW->is_active_c29_zcu_wnd_lib = 1U;
    localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Init_a;
    Win_Ctrl_enter_atomic_Init(rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
      rty_u8WNDExecStatus, localDW);
  } else {
    guard1 = false;
    switch (localDW->is_c29_zcu_wnd_lib) {
     case Win_Ctrl_IN_Action:
      Win_Ctrl_Action(rtu_u8WNDCmd, rtu_u8MotorTargetPstCtr,
                      rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent,
                      rtu_u8WinShortDropPst, rtu_u8PowerDoorReqWinOpenPst,
                      rtu_bVoltDisableFlg, rtu_u8TPflg, rtu_u8CurrtFixFlg,
                      rtu_u8NormalizeSts, rtu_bDoorFramelessGlassCfg,
                      rtu_bDoorAjarSt, rtu_bPositionLostFlg, rtu_bOverRunTime,
                      rtu_bActiveFlg, rtu_bWinShrtDrpFlgNVM, rtu_bBDCSStopReq,
                      rtu_bTDCSStopReq, rty_u8WNDExecReq, rty_bWinShrtDrpFlgTemp,
                      rty_u8PWL_WinOpeationSt, rty_u8WNDExecStatus,
                      rty_bWinShrtDrpFlgWrtCntTemp, localDW);
      break;

     case Win_Ctrl_IN_ElecDoor:
      if (localDW->u8ElecDoorReq == 2) {
        localDW->is_ElecDoor = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Action;
        localDW->is_Action = Win_Ctrl_IN_AUTO_UP;
        localDW->u8DnMotorStallCount = 0U;
        localDW->u8StepMotionLimitFrame = 0U;
        localDW->u8StepMotionLimit = 0U;
        Win_Ctrl_enter_internal_AUTO_UP(rtu_u8MotorTargetPstCtr,
          rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent,
          rtu_u8WinShortDropPst, rtu_bVoltDisableFlg, rtu_u8TPflg,
          rtu_u8CurrtFixFlg, rtu_u8NormalizeSts, rtu_bDoorFramelessGlassCfg,
          rtu_bDoorAjarSt, rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
          rty_u8WNDExecStatus, localDW);
      } else if (localDW->u8ElecDoorReq == 4) {
        localDW->is_ElecDoor = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Action;
        localDW->is_Action = Win_Ctrl_IN_AUTO_DN;
        localDW->u8UpMotorStallCount = 0U;
        Win_Ctrl_enter_internal_AUTO_DN(rtu_u8MotorTargetPstCtr,
          rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent,
          rtu_u8WinShortDropPst, rtu_u8PowerDoorReqWinOpenPst,
          rtu_bVoltDisableFlg, rtu_u8TPflg, rtu_u8CurrtFixFlg,
          rtu_u8NormalizeSts, rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
          rty_u8WNDExecStatus, localDW);
      } else if (*rty_u8WNDExecStatus == 0) {
        localDW->is_ElecDoor = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Init_a;
        Win_Ctrl_enter_atomic_Init(rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
          rty_u8WNDExecStatus, localDW);
      } else {
        switch (localDW->is_ElecDoor) {
         case Win_Ctrl_IN_DN:
         case Win_Ctrl_IN_DN1:
          break;

         default:
          *rty_u8WNDExecStatus = 0U;
          break;
        }
      }
      break;

     case Win_Ctrl_IN_Init_a:
      *rty_u8WNDExecReq = 0U;
      *rty_u8WNDExecStatus = (uint8)0xFF;
      if ((rtu_u8NormalizeSts == 0) && ((localDW->bWinRelearnReq_prev !=
            localDW->bWinRelearnReq_start) && localDW->bWinRelearnReq_start)) {
        localDW->bRelearnFlg = true;

        /* 未学习时收到强制学习请求 */
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Action;
        localDW->is_Action = Win_Ctrl_IN_Relearn_DN;
        localDW->u8UpMotorStallCount = 0U;
        localDW->u8StepMotionLimitFrame = 0U;
        localDW->u8StepMotionLimit = 0U;
        if ((localDW->u8DnMotorStallCount >= 3) || rtu_bVoltDisableFlg) {
          /* 电压过高或过低 */
          guard1 = true;
        } else if (rtu_u8TPflg == 2) {
          /* 电机处于二级热保护 */
          *rty_u8PWL_WinOpeationSt = 4U;

          /* window MotOverheat */
          guard1 = true;
        } else {
          localDW->is_Relearn_DN = Win_Ctrl_IN_DN;
          *rty_u8WNDExecReq = 4U;
          *rty_u8PWL_WinOpeationSt = 2U;

          /* window opening */
        }
      } else if ((rtu_u8WNDCmd == 3) || (rtu_u8WNDCmd == 4) || (rtu_u8WNDCmd ==
                  1) || (rtu_u8WNDCmd == 2)) {
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Action;
        Win_Ctrl_enter_internal_Action(rtu_u8WNDCmd, rtu_u8MotorTargetPstCtr,
          rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent,
          rtu_u8WinShortDropPst, rtu_u8PowerDoorReqWinOpenPst,
          rtu_bVoltDisableFlg, rtu_u8TPflg, rtu_u8CurrtFixFlg,
          rtu_u8NormalizeSts, rtu_bDoorFramelessGlassCfg, rtu_bDoorAjarSt,
          rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt, rty_u8WNDExecStatus,
          localDW);
      } else if (rtu_u8WNDCmd == 6) {
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Ventilation;
        localDW->bVentilateFlag = true;
        *rty_u8PWL_WinOpeationSt = 5U;
        if (rtu_u8WinCurrentPosPercent > rtu_u8WLVentilationPst) {
          /* 玻璃开度大于透气距离 */
          localDW->u8VentilateReq = 2U;
        } else {
          localDW->u8VentilateReq = 4U;
        }
      } else if (rtu_u8WNDCmd == 5) {
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Target;
        localDW->bTargetFlag = true;
        if (rtu_u8WinCurrentPosPercent > rtu_u8MotorTargetPstCtr) {
          /* 车窗位置小于目标位置 */
          localDW->u8TargetReq = 2U;
        } else {
          localDW->u8TargetReq = 4U;
        }
      } else if (rtu_u8WNDCmd == 7) {
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_OPDoor;
        localDW->bOPDoorFlag = true;
        if (rtu_u8WinCurrentPosPercent < rtu_u8WinShortDropPst) {
          /* 玻璃开度小于短降距离 */
          localDW->is_OPDoor = Win_Ctrl_IN_DN;
          localDW->u8OPDoorReq = 4U;
        } else if ((rtu_u8NormalizeSts == 0) && (!rtu_bWinShrtDrpFlgNVM)) {
          /* 未学习且没有执行过短降 */
          localDW->is_OPDoor = Win_Ctrl_IN_DN1;
          localDW->u8OPDoorReq = 4U;
        } else {
          localDW->is_OPDoor = Win_Ctrl_IN_STOP;
          *rty_u8WNDExecStatus = 0U;
        }
      } else {
        if (rtu_u8WNDCmd == 8) {
          localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_ElecDoor;
          localDW->bElecDoorFlag = true;
          if ((float64)rtu_u8WinCurrentPosPercent * 0.5 <
              rtu_u8PowerDoorReqWinOpenPst) {
            /* 玻璃开度小于电动门短降距离 */
            localDW->is_ElecDoor = Win_Ctrl_IN_DN;
            localDW->u8ElecDoorReq = 4U;
          } else if ((rtu_u8NormalizeSts == 0) && (!rtu_bWinShrtDrpFlgNVM)) {
            /* 未学习且没有执行过短降 */
            localDW->is_ElecDoor = Win_Ctrl_IN_DN1;
            localDW->u8ElecDoorReq = 4U;
          } else {
            localDW->is_ElecDoor = Win_Ctrl_IN_STOP;
            *rty_u8WNDExecStatus = 0U;
          }
        }
      }
      break;

     case Win_Ctrl_IN_OPDoor:
      if (localDW->u8OPDoorReq == 2) {
        localDW->is_OPDoor = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Action;
        localDW->is_Action = Win_Ctrl_IN_AUTO_UP;
        localDW->u8DnMotorStallCount = 0U;
        localDW->u8StepMotionLimitFrame = 0U;
        localDW->u8StepMotionLimit = 0U;
        Win_Ctrl_enter_internal_AUTO_UP(rtu_u8MotorTargetPstCtr,
          rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent,
          rtu_u8WinShortDropPst, rtu_bVoltDisableFlg, rtu_u8TPflg,
          rtu_u8CurrtFixFlg, rtu_u8NormalizeSts, rtu_bDoorFramelessGlassCfg,
          rtu_bDoorAjarSt, rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
          rty_u8WNDExecStatus, localDW);
      } else if (localDW->u8OPDoorReq == 4) {
        localDW->is_OPDoor = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Action;
        localDW->is_Action = Win_Ctrl_IN_AUTO_DN;
        localDW->u8UpMotorStallCount = 0U;
        Win_Ctrl_enter_internal_AUTO_DN(rtu_u8MotorTargetPstCtr,
          rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent,
          rtu_u8WinShortDropPst, rtu_u8PowerDoorReqWinOpenPst,
          rtu_bVoltDisableFlg, rtu_u8TPflg, rtu_u8CurrtFixFlg,
          rtu_u8NormalizeSts, rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
          rty_u8WNDExecStatus, localDW);
      } else if (*rty_u8WNDExecStatus == 0) {
        localDW->is_OPDoor = Win_Ctrl_IN_NO_ACTIVE_CHILD_f;
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Init_a;
        Win_Ctrl_enter_atomic_Init(rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
          rty_u8WNDExecStatus, localDW);
      } else {
        switch (localDW->is_OPDoor) {
         case Win_Ctrl_IN_DN:
         case Win_Ctrl_IN_DN1:
          break;

         default:
          *rty_u8WNDExecStatus = 0U;
          break;
        }
      }
      break;

     case Win_Ctrl_IN_Target:
      if (localDW->u8TargetReq == 2) {
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Action;
        localDW->is_Action = Win_Ctrl_IN_AUTO_UP;
        localDW->u8DnMotorStallCount = 0U;
        localDW->u8StepMotionLimitFrame = 0U;
        localDW->u8StepMotionLimit = 0U;
        Win_Ctrl_enter_internal_AUTO_UP(rtu_u8MotorTargetPstCtr,
          rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent,
          rtu_u8WinShortDropPst, rtu_bVoltDisableFlg, rtu_u8TPflg,
          rtu_u8CurrtFixFlg, rtu_u8NormalizeSts, rtu_bDoorFramelessGlassCfg,
          rtu_bDoorAjarSt, rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
          rty_u8WNDExecStatus, localDW);
      } else {
        if (localDW->u8TargetReq == 4) {
          localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Action;
          localDW->is_Action = Win_Ctrl_IN_AUTO_DN;
          localDW->u8UpMotorStallCount = 0U;
          Win_Ctrl_enter_internal_AUTO_DN(rtu_u8MotorTargetPstCtr,
            rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent,
            rtu_u8WinShortDropPst, rtu_u8PowerDoorReqWinOpenPst,
            rtu_bVoltDisableFlg, rtu_u8TPflg, rtu_u8CurrtFixFlg,
            rtu_u8NormalizeSts, rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
            rty_u8WNDExecStatus, localDW);
        }
      }
      break;

     default:
      if (localDW->u8VentilateReq == 2) {
        localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Action;
        localDW->is_Action = Win_Ctrl_IN_AUTO_UP;
        localDW->u8DnMotorStallCount = 0U;
        localDW->u8StepMotionLimitFrame = 0U;
        localDW->u8StepMotionLimit = 0U;
        Win_Ctrl_enter_internal_AUTO_UP(rtu_u8MotorTargetPstCtr,
          rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent,
          rtu_u8WinShortDropPst, rtu_bVoltDisableFlg, rtu_u8TPflg,
          rtu_u8CurrtFixFlg, rtu_u8NormalizeSts, rtu_bDoorFramelessGlassCfg,
          rtu_bDoorAjarSt, rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
          rty_u8WNDExecStatus, localDW);
      } else {
        if (localDW->u8VentilateReq == 4) {
          localDW->is_c29_zcu_wnd_lib = Win_Ctrl_IN_Action;
          localDW->is_Action = Win_Ctrl_IN_AUTO_DN;
          localDW->u8UpMotorStallCount = 0U;
          Win_Ctrl_enter_internal_AUTO_DN(rtu_u8MotorTargetPstCtr,
            rtu_u8WLVentilationPst, rtu_u8WinCurrentPosPercent,
            rtu_u8WinShortDropPst, rtu_u8PowerDoorReqWinOpenPst,
            rtu_bVoltDisableFlg, rtu_u8TPflg, rtu_u8CurrtFixFlg,
            rtu_u8NormalizeSts, rty_u8WNDExecReq, rty_u8PWL_WinOpeationSt,
            rty_u8WNDExecStatus, localDW);
        }
      }
      break;
    }

    if (guard1) {
      localDW->is_Relearn_DN = Win_Ctrl_IN_Stop1;
      *rty_u8WNDExecStatus = 0U;
    }
  }
}

/*
 * System reset for enable system:
 *    '<S97>/CCU_Req'
 *    '<S98>/CCU_Req'
 *    '<S99>/CCU_Req'
 *    '<S100>/CCU_Req'
 */
static void Win_Ctrl_CCU_Req_Reset(rtB_CCU_Req_Win_Ctrl *localB,
  rtDW_CCU_Req_Win_Ctrl *localDW)
{
  /* SystemReset for Chart: '<S101>/CCU_Req' */
  localDW->is_Down = Win_Ctrl_IN_NO_ACTIVE_CHILD_m1;
  localDW->is_Up = Win_Ctrl_IN_NO_ACTIVE_CHILD_m1;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c1_zcu_wnd_lib = 0U;
  localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_NO_ACTIVE_CHILD_m1;
  localB->u8WndCmdOutputReq_CCU = 0U;
  localB->bManualUpFlg_CCU = false;
  localB->bDelayAdjSpdFlg = false;
}

/*
 * Disable for enable system:
 *    '<S97>/CCU_Req'
 *    '<S98>/CCU_Req'
 *    '<S99>/CCU_Req'
 *    '<S100>/CCU_Req'
 */
static void Win_Ctrl_CCU_Req_Disable(uint8 *rty_u8WndCmdOutputReq_CCU, boolean
  *rty_bDelayAdjSpdFlg, rtDW_CCU_Req_Win_Ctrl *localDW)
{
  /* Outputs for Enabled SubSystem: '<S97>/CCU_Req' incorporates:
   *  EnablePort: '<S101>/Enable'
   */
  /* Disable for Outport: '<S101>/u8WndCmdOutputReq_CCU' */
  *rty_u8WndCmdOutputReq_CCU = 0U;

  /* Disable for Outport: '<S101>/bDelayAdjSpdFlg' */
  *rty_bDelayAdjSpdFlg = false;

  /* End of Outputs for SubSystem: '<S97>/CCU_Req' */
  localDW->CCU_Req_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S97>/CCU_Req'
 *    '<S98>/CCU_Req'
 *    '<S99>/CCU_Req'
 *    '<S100>/CCU_Req'
 */
static void Win_Ctrl_CCU_Req(boolean rtu_Enable, uint8 rtu_u8WinMotorOpeCtr,
  boolean rtu_bEnableAutoUpPrm, uint8 rtu_u8MotorTargetPstCtr, boolean
  rtu_bDoorFramelessGlassCfg, uint8 rtu_u8WNDExecStatus, boolean rtu_bSwStuckFlg,
  uint8 rtu_u8WndCmdOutputReq_OPDoor, uint8 rtu_u8WndCmdOutputReq_OutSide, uint8
  rtu_u8WndCmdOutputReq_ElecDoor, uint8 rtu_u8WndCmdOutputReq_CLDoor, uint8
  *rty_u8WndCmdOutputReq_CCU, boolean *rty_bManualUpFlg_CCU, boolean
  *rty_bDelayAdjSpdFlg, rtB_CCU_Req_Win_Ctrl *localB, rtDW_CCU_Req_Win_Ctrl
  *localDW)
{
  boolean guard1 = false;
  boolean guard2 = false;
  boolean guard3 = false;

  /* Outputs for Enabled SubSystem: '<S97>/CCU_Req' incorporates:
   *  EnablePort: '<S101>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->CCU_Req_MODE) {
      Win_Ctrl_CCU_Req_Reset(localB, localDW);
      localDW->CCU_Req_MODE = true;
    }

    /* Chart: '<S101>/CCU_Req' */
    if (localDW->temporalCounter_i1 < 15U) {
      localDW->temporalCounter_i1++;
    }

    localDW->u8WinMotorOpeCtr_prev = localDW->u8WinMotorOpeCtr_start;
    localDW->u8WinMotorOpeCtr_start = rtu_u8WinMotorOpeCtr;
    if (localDW->is_active_c1_zcu_wnd_lib == 0U) {
      localDW->u8WinMotorOpeCtr_prev = rtu_u8WinMotorOpeCtr;
      localDW->is_active_c1_zcu_wnd_lib = 1U;
      if ((rtu_u8WinMotorOpeCtr == 0) || (rtu_u8WinMotorOpeCtr == 1)) {
        localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Stop_i;
        localB->u8WndCmdOutputReq_CCU = 0U;
        localB->bDelayAdjSpdFlg = false;
      } else {
        localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_INIT;
        localB->u8WndCmdOutputReq_CCU = 0U;
      }
    } else {
      guard1 = false;
      guard2 = false;
      guard3 = false;
      switch (localDW->is_c1_zcu_wnd_lib) {
       case Win_Ctrl_IN_DnWait:
        if (localDW->temporalCounter_i1 >= 10) {
          /* 延迟100ms调速 */
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Stop_i;
          localB->u8WndCmdOutputReq_CCU = 0U;
          localB->bDelayAdjSpdFlg = false;
        }
        break;

       case Win_Ctrl_IN_Down_a:
        if (rtu_u8WinMotorOpeCtr == 1) {
          localB->bDelayAdjSpdFlg = true;

          /* CCU发停止命令，立调速Flag传给SLC */
          localDW->is_Down = Win_Ctrl_IN_NO_ACTIVE_CHILD_m1;
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_DnWait;
          localDW->temporalCounter_i1 = 0U;
        } else if (rtu_bSwStuckFlg || (rtu_u8WNDExecStatus == 0)) {
          /* 开关粘滞 */
          /* 执行请求要求停止 */
          guard1 = true;
        } else if ((rtu_u8WinMotorOpeCtr == 2) || (rtu_u8WinMotorOpeCtr == 3)) {
          localDW->is_Down = Win_Ctrl_IN_NO_ACTIVE_CHILD_m1;
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Up;
          localDW->is_Up = Win_Ctrl_IN_ManualUp;
          localB->u8WndCmdOutputReq_CCU = 1U;
          localB->bManualUpFlg_CCU = true;
        } else if (rtu_bDoorFramelessGlassCfg && ((rtu_u8WndCmdOutputReq_OPDoor ==
          7) || (rtu_u8WndCmdOutputReq_OutSide == 7) ||
                    (rtu_u8WndCmdOutputReq_ElecDoor == 8) ||
                    (rtu_u8WndCmdOutputReq_CLDoor == 3))) {
          /* 无框车门 */
          /* 短升、短降请求优先 */
          guard1 = true;
        } else if (localDW->is_Down == Win_Ctrl_IN_AutoDown) {
          localB->u8WndCmdOutputReq_CCU = 4U;
          if (!rtu_bEnableAutoUpPrm) {
            localDW->is_Down = Win_Ctrl_IN_NO_ACTIVE_CHILD_m1;
            localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Stop_i;
            localB->u8WndCmdOutputReq_CCU = 0U;
            localB->bDelayAdjSpdFlg = false;
          }
        } else {
          localB->u8WndCmdOutputReq_CCU = 2U;
          if ((rtu_u8WinMotorOpeCtr == 5) && rtu_bEnableAutoUpPrm) {
            localDW->is_Down = Win_Ctrl_IN_AutoDown;
            localB->u8WndCmdOutputReq_CCU = 4U;
          }
        }
        break;

       case Win_Ctrl_IN_INIT:
        localB->u8WndCmdOutputReq_CCU = 0U;
        if ((rtu_u8WinMotorOpeCtr == 0) || (rtu_u8WinMotorOpeCtr == 1)) {
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Stop_i;
          localB->bDelayAdjSpdFlg = false;
        }
        break;

       case Win_Ctrl_IN_Stop_i:
        localB->u8WndCmdOutputReq_CCU = 0U;
        if (((localDW->u8WinMotorOpeCtr_prev != localDW->u8WinMotorOpeCtr_start)
             && (localDW->u8WinMotorOpeCtr_start == 2)) ||
            ((localDW->u8WinMotorOpeCtr_prev != localDW->u8WinMotorOpeCtr_start)
             && (localDW->u8WinMotorOpeCtr_start == 3))) {
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Up;
          localDW->is_Up = Win_Ctrl_IN_ManualUp;
          localB->u8WndCmdOutputReq_CCU = 1U;
          localB->bManualUpFlg_CCU = true;
        } else if (((localDW->u8WinMotorOpeCtr_prev !=
                     localDW->u8WinMotorOpeCtr_start) &&
                    (localDW->u8WinMotorOpeCtr_start == 4)) ||
                   ((localDW->u8WinMotorOpeCtr_prev !=
                     localDW->u8WinMotorOpeCtr_start) &&
                    (localDW->u8WinMotorOpeCtr_start == 5))) {
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Down_a;
          localDW->is_Down = Win_Ctrl_IN_ManualDown;
          localB->u8WndCmdOutputReq_CCU = 2U;
        } else if ((localDW->u8WinMotorOpeCtr_prev !=
                    localDW->u8WinMotorOpeCtr_start) &&
                   (localDW->u8WinMotorOpeCtr_start == 6)) {
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_VentilationMode;
          localB->u8WndCmdOutputReq_CCU = 6U;
        } else {
          if ((rtu_u8MotorTargetPstCtr > 0) && (rtu_u8MotorTargetPstCtr <= 200) &&
              (rtu_u8WinMotorOpeCtr == 0)) {
            localDW->is_c1_zcu_wnd_lib = Wi_IN_Target_Percentage_Control;
            localB->u8WndCmdOutputReq_CCU = 5U;
          }
        }
        break;

       case Wi_IN_Target_Percentage_Control:
        localB->u8WndCmdOutputReq_CCU = 5U;
        if (rtu_u8WNDExecStatus == 0) {
          /* 执行请求要求停止 */
          guard2 = true;
        } else if (rtu_u8WinMotorOpeCtr == 1) {
          localB->bDelayAdjSpdFlg = true;

          /* CCU发停止命令，立调速Flag传给SLC */
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Wait_p;
          localDW->temporalCounter_i1 = 0U;
        } else {
          if (((rtu_u8WinMotorOpeCtr != 0) && (rtu_u8WinMotorOpeCtr != 1) &&
               (rtu_u8WinMotorOpeCtr != 0xFF)) || (rtu_bDoorFramelessGlassCfg &&
               ((rtu_u8WndCmdOutputReq_OPDoor == 7) ||
                (rtu_u8WndCmdOutputReq_OutSide == 7) ||
                (rtu_u8WndCmdOutputReq_ElecDoor == 8) ||
                (rtu_u8WndCmdOutputReq_CLDoor == 3)))) {
            /* 无框车门 */
            /* 短升、短降请求优先 */
            guard2 = true;
          }
        }
        break;

       case Win_Ctrl_IN_UPWait:
        if (localDW->temporalCounter_i1 >= 10) {
          /* 延迟100ms调速 */
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Stop_i;
          localB->u8WndCmdOutputReq_CCU = 0U;
          localB->bDelayAdjSpdFlg = false;
        }
        break;

       case Win_Ctrl_IN_Up:
        if (rtu_u8WinMotorOpeCtr == 1) {
          localB->bDelayAdjSpdFlg = true;

          /* CCU发停止命令，立调速Flag传给SLC */
          localDW->is_Up = Win_Ctrl_IN_NO_ACTIVE_CHILD_m1;
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_UPWait;
          localDW->temporalCounter_i1 = 0U;
        } else if (rtu_bSwStuckFlg || (rtu_u8WNDExecStatus == 0)) {
          /* 开关粘滞 */
          /* 执行请求要求停止 */
          guard3 = true;
        } else if ((rtu_u8WinMotorOpeCtr == 4) || (rtu_u8WinMotorOpeCtr == 5)) {
          localDW->is_Up = Win_Ctrl_IN_NO_ACTIVE_CHILD_m1;
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Down_a;
          localDW->is_Down = Win_Ctrl_IN_ManualDown;
          localB->u8WndCmdOutputReq_CCU = 2U;
        } else if (rtu_bDoorFramelessGlassCfg && ((rtu_u8WndCmdOutputReq_OPDoor ==
          7) || (rtu_u8WndCmdOutputReq_OutSide == 7) ||
                    (rtu_u8WndCmdOutputReq_ElecDoor == 8) ||
                    (rtu_u8WndCmdOutputReq_CLDoor == 3))) {
          /* 无框车门 */
          /* 短升、短降请求优先 */
          guard3 = true;
        } else if (localDW->is_Up == Win_Ctrl_IN_AutoUp) {
          localB->u8WndCmdOutputReq_CCU = 3U;
          if (!rtu_bEnableAutoUpPrm) {
            localDW->is_Up = Win_Ctrl_IN_NO_ACTIVE_CHILD_m1;
            localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Stop_i;
            localB->u8WndCmdOutputReq_CCU = 0U;
            localB->bDelayAdjSpdFlg = false;
          }
        } else {
          localB->u8WndCmdOutputReq_CCU = 1U;
          if ((rtu_u8WinMotorOpeCtr == 3) && rtu_bEnableAutoUpPrm) {
            localDW->is_Up = Win_Ctrl_IN_AutoUp;
            localB->u8WndCmdOutputReq_CCU = 3U;
          }
        }
        break;

       case Win_Ctrl_IN_VentilationMode:
        localB->u8WndCmdOutputReq_CCU = 6U;
        if (rtu_u8WinMotorOpeCtr == 1) {
          localB->bDelayAdjSpdFlg = true;

          /* CCU发停止命令，立调速Flag传给SLC */
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Wait1;
          localDW->temporalCounter_i1 = 0U;
        } else {
          if ((rtu_u8WNDExecStatus == 0) || (rtu_bDoorFramelessGlassCfg &&
               ((rtu_u8WndCmdOutputReq_OPDoor == 7) ||
                (rtu_u8WndCmdOutputReq_OutSide == 7) ||
                (rtu_u8WndCmdOutputReq_ElecDoor == 8) ||
                (rtu_u8WndCmdOutputReq_CLDoor == 3)))) {
            /* 执行请求要求停止 */
            /* 无框车门 */
            /* 短升、短降请求优先 */
            localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Stop_i;
            localB->u8WndCmdOutputReq_CCU = 0U;
            localB->bDelayAdjSpdFlg = false;
          }
        }
        break;

       case Win_Ctrl_IN_Wait_p:
        if (localDW->temporalCounter_i1 >= 10) {
          /* 延迟100ms调速 */
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Stop_i;
          localB->u8WndCmdOutputReq_CCU = 0U;
          localB->bDelayAdjSpdFlg = false;
        }
        break;

       default:
        if (localDW->temporalCounter_i1 >= 10) {
          /* 延迟100ms调速 */
          localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Stop_i;
          localB->u8WndCmdOutputReq_CCU = 0U;
          localB->bDelayAdjSpdFlg = false;
        }
        break;
      }

      if (guard3) {
        localDW->is_Up = Win_Ctrl_IN_NO_ACTIVE_CHILD_m1;
        localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Stop_i;
        localB->u8WndCmdOutputReq_CCU = 0U;
        localB->bDelayAdjSpdFlg = false;
      }

      if (guard2) {
        localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Stop_i;
        localB->u8WndCmdOutputReq_CCU = 0U;
        localB->bDelayAdjSpdFlg = false;
      }

      if (guard1) {
        localDW->is_Down = Win_Ctrl_IN_NO_ACTIVE_CHILD_m1;
        localDW->is_c1_zcu_wnd_lib = Win_Ctrl_IN_Stop_i;
        localB->u8WndCmdOutputReq_CCU = 0U;
        localB->bDelayAdjSpdFlg = false;
      }
    }

    /* End of Chart: '<S101>/CCU_Req' */

    /* SignalConversion: '<S101>/OutportBufferForbDelayAdjSpdFlg' */
    *rty_bDelayAdjSpdFlg = localB->bDelayAdjSpdFlg;

    /* SignalConversion: '<S101>/OutportBufferForbManualUpFlg_CCU' */
    *rty_bManualUpFlg_CCU = localB->bManualUpFlg_CCU;

    /* SignalConversion: '<S101>/OutportBufferForu8WndCmdOutputReq_CCU' */
    *rty_u8WndCmdOutputReq_CCU = localB->u8WndCmdOutputReq_CCU;
  } else {
    if (localDW->CCU_Req_MODE) {
      Win_Ctrl_CCU_Req_Disable(rty_u8WndCmdOutputReq_CCU, rty_bDelayAdjSpdFlg,
        localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S97>/CCU_Req' */
}

/*
 * Output and update for atomic system:
 *    '<S91>/CCU_Req_FL'
 *    '<S91>/CCU_Req_FR'
 *    '<S91>/CCU_Req_RL'
 *    '<S91>/CCU_Req_RR'
 */
static void Win_Ctrl_CCU_Req_FL(boolean rtu_bCCULostCommon, uint8
  rtu_u8WinMotorOpeCtr, boolean rtu_bEnableAutoUpPrm, uint8
  rtu_u8MotorTargetPstCtr, boolean rtu_bDoorFramelessGlassCfg, uint8
  rtu_u8WNDExecStatus, boolean rtu_bSwStuckFlg, uint8
  rtu_u8WndCmdOutputReq_OPDoor, uint8 rtu_u8WndCmdOutputReq_OutSide, uint8
  rtu_u8WndCmdOutputReq_ElecDoor, uint8 rtu_u8WndCmdOutputReq_CLDoor, uint8
  *rty_u8WndCmdOutputReq_CCU, boolean *rty_1, boolean *rty_bDelayAdjSpdFlg,
  rtB_CCU_Req_FL_Win_Ctrl *localB, rtDW_CCU_Req_FL_Win_Ctrl *localDW)
{
  /* Outputs for Enabled SubSystem: '<S97>/CCU_Req' */

  /* Logic: '<S97>/Logical Operator2' */
  Win_Ctrl_CCU_Req(!rtu_bCCULostCommon, rtu_u8WinMotorOpeCtr,
                   rtu_bEnableAutoUpPrm, rtu_u8MotorTargetPstCtr,
                   rtu_bDoorFramelessGlassCfg, rtu_u8WNDExecStatus,
                   rtu_bSwStuckFlg, rtu_u8WndCmdOutputReq_OPDoor,
                   rtu_u8WndCmdOutputReq_OutSide, rtu_u8WndCmdOutputReq_ElecDoor,
                   rtu_u8WndCmdOutputReq_CLDoor,
                   &localB->OutportBufferForu8WndCmdOutputR, rty_1,
                   rty_bDelayAdjSpdFlg, &localB->CCU_Req, &localDW->CCU_Req);

  /* End of Outputs for SubSystem: '<S97>/CCU_Req' */

  /* SignalConversion: '<S97>/TmpSignal ConversionAtCCU_ReqOutport1' */
  *rty_u8WndCmdOutputReq_CCU = localB->OutportBufferForu8WndCmdOutputR;
}

/*
 * System initialize for enable system:
 *    '<S109>/CLDoor_Req'
 *    '<S110>/CLDoor_Req'
 *    '<S111>/CLDoor_Req'
 *    '<S112>/CLDoor_Req'
 */
static void Win_Ctrl_CLDoor_Req_Init(uint8 *rty_u8WndCmdOutputReq_CLDoor)
{
  /* SystemInitialize for Chart: '<S114>/Chart' */
  *rty_u8WndCmdOutputReq_CLDoor = 0U;
}

/*
 * System reset for enable system:
 *    '<S109>/CLDoor_Req'
 *    '<S110>/CLDoor_Req'
 *    '<S111>/CLDoor_Req'
 *    '<S112>/CLDoor_Req'
 */
static void Win_Ctrl_CLDoor_Req_Reset(uint8 *rty_u8WndCmdOutputReq_CLDoor,
  rtDW_CLDoor_Req_Win_Ctrl *localDW)
{
  /* SystemReset for Chart: '<S114>/Chart' */
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c28_zcu_wnd_lib = 0U;
  localDW->is_c28_zcu_wnd_lib = Win_Ctrl_IN_NO_ACTIVE_CHILD_b;
  *rty_u8WndCmdOutputReq_CLDoor = 0U;
}

/*
 * Disable for enable system:
 *    '<S109>/CLDoor_Req'
 *    '<S110>/CLDoor_Req'
 *    '<S111>/CLDoor_Req'
 *    '<S112>/CLDoor_Req'
 */
static void Win_Ctrl_CLDoor_Req_Disable(rtDW_CLDoor_Req_Win_Ctrl *localDW)
{
  localDW->CLDoor_Req_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S109>/CLDoor_Req'
 *    '<S110>/CLDoor_Req'
 *    '<S111>/CLDoor_Req'
 *    '<S112>/CLDoor_Req'
 */
static void Win_Ctrl_CLDoor_Req(boolean rtu_Enable, boolean rtu_bDoorAjarSt,
  boolean rtu_bDoorOutsideSwSt, uint8 rtu_u8WNDExecStatus, boolean
  rtu_bWinShrtDrpFlgNVM, uint8 *rty_u8WndCmdOutputReq_CLDoor,
  rtDW_CLDoor_Req_Win_Ctrl *localDW)
{
  /* Outputs for Enabled SubSystem: '<S109>/CLDoor_Req' incorporates:
   *  EnablePort: '<S113>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->CLDoor_Req_MODE) {
      Win_Ctrl_CLDoor_Req_Reset(rty_u8WndCmdOutputReq_CLDoor, localDW);
      localDW->CLDoor_Req_MODE = true;
    }

    /* Chart: '<S114>/Chart' */
    if (localDW->temporalCounter_i1 < 127U) {
      localDW->temporalCounter_i1++;
    }

    if (localDW->is_active_c28_zcu_wnd_lib == 0U) {
      localDW->is_active_c28_zcu_wnd_lib = 1U;
      localDW->is_c28_zcu_wnd_lib = Win_Ctrl_IN_Init_l;
      *rty_u8WndCmdOutputReq_CLDoor = 0U;
    } else {
      switch (localDW->is_c28_zcu_wnd_lib) {
       case Win_Ctrl_IN_CLShortUp:
        *rty_u8WndCmdOutputReq_CLDoor = 3U;
        localDW->is_c28_zcu_wnd_lib = Win_Ctrl_IN_Wait_i;
        localDW->temporalCounter_i1 = 0U;
        break;

       case Win_Ctrl_IN_Init_l:
        *rty_u8WndCmdOutputReq_CLDoor = 0U;
        if ((!rtu_bDoorOutsideSwSt) && rtu_bWinShrtDrpFlgNVM &&
            (!rtu_bDoorAjarSt)) {
          /* 执行过短降且车外门把手开关无效 */
          localDW->is_c28_zcu_wnd_lib = Win_Ctrl_IN_Wait_i;
          localDW->temporalCounter_i1 = 0U;
        }
        break;

       default:
        if (localDW->temporalCounter_i1 >= 100) {
          /* 1s */
          localDW->is_c28_zcu_wnd_lib = Win_Ctrl_IN_CLShortUp;
          *rty_u8WndCmdOutputReq_CLDoor = 3U;
        } else {
          if (rtu_bDoorOutsideSwSt || rtu_bDoorAjarSt || (rtu_u8WNDExecStatus ==
               0)) {
            /* 执行请求要求停止 */
            localDW->is_c28_zcu_wnd_lib = Win_Ctrl_IN_Init_l;
            *rty_u8WndCmdOutputReq_CLDoor = 0U;
          }
        }
        break;
      }
    }

    /* End of Chart: '<S114>/Chart' */
  } else {
    if (localDW->CLDoor_Req_MODE) {
      Win_Ctrl_CLDoor_Req_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S109>/CLDoor_Req' */
}

/*
 * System initialize for enable system:
 *    '<S125>/ElecDoor_Req'
 *    '<S126>/ElecDoor_Req'
 *    '<S127>/ElecDoor_Req'
 *    '<S128>/ElecDoor_Req'
 */
static void Win_Ctrl_ElecDoor_Req_Init(uint8 *rty_u8WndCmdOutputReq_ElecDoor)
{
  /* SystemInitialize for Chart: '<S130>/ElecDoor_Req' */
  *rty_u8WndCmdOutputReq_ElecDoor = 0U;
}

/*
 * System reset for enable system:
 *    '<S125>/ElecDoor_Req'
 *    '<S126>/ElecDoor_Req'
 *    '<S127>/ElecDoor_Req'
 *    '<S128>/ElecDoor_Req'
 */
static void Win_Ctrl_ElecDoor_Req_Reset(uint8 *rty_u8WndCmdOutputReq_ElecDoor,
  rtDW_ElecDoor_Req_Win_Ctrl *localDW)
{
  /* SystemReset for Chart: '<S130>/ElecDoor_Req' */
  localDW->is_active_c27_zcu_wnd_lib = 0U;
  localDW->is_c27_zcu_wnd_lib = Win_Ctrl_IN_NO_ACTIVE_CHILD_e;
  *rty_u8WndCmdOutputReq_ElecDoor = 0U;
}

/*
 * Disable for enable system:
 *    '<S125>/ElecDoor_Req'
 *    '<S126>/ElecDoor_Req'
 *    '<S127>/ElecDoor_Req'
 *    '<S128>/ElecDoor_Req'
 */
static void Win_Ctrl_ElecDoor_Req_Disable(rtDW_ElecDoor_Req_Win_Ctrl *localDW)
{
  localDW->ElecDoor_Req_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S125>/ElecDoor_Req'
 *    '<S126>/ElecDoor_Req'
 *    '<S127>/ElecDoor_Req'
 *    '<S128>/ElecDoor_Req'
 */
static void Win_Ctrl_ElecDoor_Req(boolean rtu_Enable, uint8
  rtu_u8WinShortDropCmd, uint8 rtu_u8WNDExecStatus, uint8
  *rty_u8WndCmdOutputReq_ElecDoor, rtDW_ElecDoor_Req_Win_Ctrl *localDW)
{
  /* Outputs for Enabled SubSystem: '<S125>/ElecDoor_Req' incorporates:
   *  EnablePort: '<S129>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->ElecDoor_Req_MODE) {
      Win_Ctrl_ElecDoor_Req_Reset(rty_u8WndCmdOutputReq_ElecDoor, localDW);
      localDW->ElecDoor_Req_MODE = true;
    }

    /* Chart: '<S130>/ElecDoor_Req' */
    localDW->u8WinShortDropCmd_prev = localDW->u8WinShortDropCmd_start;
    localDW->u8WinShortDropCmd_start = rtu_u8WinShortDropCmd;
    if (localDW->is_active_c27_zcu_wnd_lib == 0U) {
      localDW->u8WinShortDropCmd_prev = rtu_u8WinShortDropCmd;
      localDW->is_active_c27_zcu_wnd_lib = 1U;
      localDW->is_c27_zcu_wnd_lib = Win_Ctrl_IN_Init_gw;
      *rty_u8WndCmdOutputReq_ElecDoor = 0U;
    } else if (localDW->is_c27_zcu_wnd_lib == Win_Ctrl_IN_ELECShortDrop) {
      *rty_u8WndCmdOutputReq_ElecDoor = 8U;
      if (rtu_u8WNDExecStatus == 0) {
        /* 执行请求要求停止 */
        localDW->is_c27_zcu_wnd_lib = Win_Ctrl_IN_Init_gw;
        *rty_u8WndCmdOutputReq_ElecDoor = 0U;
      }
    } else {
      *rty_u8WndCmdOutputReq_ElecDoor = 0U;
      if ((localDW->u8WinShortDropCmd_prev != localDW->u8WinShortDropCmd_start) &&
          (localDW->u8WinShortDropCmd_start == 1)) {
        localDW->is_c27_zcu_wnd_lib = Win_Ctrl_IN_ELECShortDrop;
        *rty_u8WndCmdOutputReq_ElecDoor = 8U;
      }
    }

    /* End of Chart: '<S130>/ElecDoor_Req' */
  } else {
    if (localDW->ElecDoor_Req_MODE) {
      Win_Ctrl_ElecDoor_Req_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S125>/ElecDoor_Req' */
}

/*
 * System initialize for enable system:
 *    '<S141>/OpenDoor_Req'
 *    '<S142>/OpenDoor_Req'
 *    '<S143>/OpenDoor_Req'
 *    '<S144>/OpenDoor_Req'
 */
static void Win_Ctrl_OpenDoor_Req_Init(uint8 *rty_u8WndCmdOutputReq_OPDoor)
{
  /* SystemInitialize for Chart: '<S145>/OpenDoor_Req' */
  *rty_u8WndCmdOutputReq_OPDoor = 0U;
}

/*
 * System reset for enable system:
 *    '<S141>/OpenDoor_Req'
 *    '<S142>/OpenDoor_Req'
 *    '<S143>/OpenDoor_Req'
 *    '<S144>/OpenDoor_Req'
 */
static void Win_Ctrl_OpenDoor_Req_Reset(uint8 *rty_u8WndCmdOutputReq_OPDoor,
  rtDW_OpenDoor_Req_Win_Ctrl *localDW)
{
  /* SystemReset for Chart: '<S145>/OpenDoor_Req' */
  localDW->is_active_c26_zcu_wnd_lib = 0U;
  localDW->is_c26_zcu_wnd_lib = Win_Ctrl_IN_NO_ACTIVE_CHILD_bi;
  *rty_u8WndCmdOutputReq_OPDoor = 0U;
}

/*
 * Disable for enable system:
 *    '<S141>/OpenDoor_Req'
 *    '<S142>/OpenDoor_Req'
 *    '<S143>/OpenDoor_Req'
 *    '<S144>/OpenDoor_Req'
 */
static void Win_Ctrl_OpenDoor_Req_Disable(rtDW_OpenDoor_Req_Win_Ctrl *localDW)
{
  localDW->OpenDoor_Req_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S141>/OpenDoor_Req'
 *    '<S142>/OpenDoor_Req'
 *    '<S143>/OpenDoor_Req'
 *    '<S144>/OpenDoor_Req'
 */
static void Win_Ctrl_OpenDoor_Req(boolean rtu_Enable, boolean rtu_bDoorAjarSt,
  uint8 rtu_u8WNDExecStatus, uint8 *rty_u8WndCmdOutputReq_OPDoor,
  rtDW_OpenDoor_Req_Win_Ctrl *localDW)
{
  /* Outputs for Enabled SubSystem: '<S141>/OpenDoor_Req' incorporates:
   *  EnablePort: '<S145>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->OpenDoor_Req_MODE) {
      Win_Ctrl_OpenDoor_Req_Reset(rty_u8WndCmdOutputReq_OPDoor, localDW);
      localDW->OpenDoor_Req_MODE = true;
    }

    /* Chart: '<S145>/OpenDoor_Req' */
    localDW->bDoorAjarSt_prev = localDW->bDoorAjarSt_start;
    localDW->bDoorAjarSt_start = rtu_bDoorAjarSt;
    if (localDW->is_active_c26_zcu_wnd_lib == 0U) {
      localDW->bDoorAjarSt_prev = rtu_bDoorAjarSt;
      localDW->is_active_c26_zcu_wnd_lib = 1U;
      localDW->is_c26_zcu_wnd_lib = Win_Ctrl_IN_Init_h;
      *rty_u8WndCmdOutputReq_OPDoor = 0U;
    } else if (localDW->is_c26_zcu_wnd_lib == Win_Ctrl_IN_Init_h) {
      *rty_u8WndCmdOutputReq_OPDoor = 0U;
      if ((localDW->bDoorAjarSt_prev != localDW->bDoorAjarSt_start) &&
          (!localDW->bDoorAjarSt_prev) && ((localDW->bDoorAjarSt_prev !=
            localDW->bDoorAjarSt_start) && localDW->bDoorAjarSt_start)) {
        localDW->is_c26_zcu_wnd_lib = Win_Ctrl_IN_OPShortDrop;
        *rty_u8WndCmdOutputReq_OPDoor = 7U;
      }
    } else {
      *rty_u8WndCmdOutputReq_OPDoor = 7U;
      if (rtu_u8WNDExecStatus == 0) {
        /* 执行请求要求停止 */
        localDW->is_c26_zcu_wnd_lib = Win_Ctrl_IN_Init_h;
        *rty_u8WndCmdOutputReq_OPDoor = 0U;
      }
    }

    /* End of Chart: '<S145>/OpenDoor_Req' */
  } else {
    if (localDW->OpenDoor_Req_MODE) {
      Win_Ctrl_OpenDoor_Req_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S141>/OpenDoor_Req' */
}

/*
 * System initialize for enable system:
 *    '<S153>/Outside_Req'
 *    '<S154>/Outside_Req'
 *    '<S155>/Outside_Req'
 *    '<S156>/Outside_Req'
 */
static void Win_Ctrl_Outside_Req_Init(uint8 *rty_u8WndCmdOutputReq_OutSide)
{
  /* SystemInitialize for Chart: '<S157>/Outside_Req' */
  *rty_u8WndCmdOutputReq_OutSide = 0U;
}

/*
 * System reset for enable system:
 *    '<S153>/Outside_Req'
 *    '<S154>/Outside_Req'
 *    '<S155>/Outside_Req'
 *    '<S156>/Outside_Req'
 */
static void Win_Ctrl_Outside_Req_Reset(uint8 *rty_u8WndCmdOutputReq_OutSide,
  rtDW_Outside_Req_Win_Ctrl *localDW)
{
  /* SystemReset for Chart: '<S157>/Outside_Req' */
  localDW->is_active_c25_zcu_wnd_lib = 0U;
  localDW->is_c25_zcu_wnd_lib = Win_Ctrl_IN_NO_ACTIVE_CHILD_eo;
  *rty_u8WndCmdOutputReq_OutSide = 0U;
}

/*
 * Disable for enable system:
 *    '<S153>/Outside_Req'
 *    '<S154>/Outside_Req'
 *    '<S155>/Outside_Req'
 *    '<S156>/Outside_Req'
 */
static void Win_Ctrl_Outside_Req_Disable(rtDW_Outside_Req_Win_Ctrl *localDW)
{
  localDW->Outside_Req_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S153>/Outside_Req'
 *    '<S154>/Outside_Req'
 *    '<S155>/Outside_Req'
 *    '<S156>/Outside_Req'
 */
static void Win_Ctrl_Outside_Req(boolean rtu_Enable, boolean rtu_bDoorLockFbSt,
  boolean rtu_bDoorOutsideSwSt, uint8 rtu_u8WNDExecStatus, uint8
  *rty_u8WndCmdOutputReq_OutSide, rtDW_Outside_Req_Win_Ctrl *localDW)
{
  /* Outputs for Enabled SubSystem: '<S153>/Outside_Req' incorporates:
   *  EnablePort: '<S157>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->Outside_Req_MODE) {
      Win_Ctrl_Outside_Req_Reset(rty_u8WndCmdOutputReq_OutSide, localDW);
      localDW->Outside_Req_MODE = true;
    }

    /* Chart: '<S157>/Outside_Req' */
    localDW->bDoorOutsideSwSt_prev = localDW->bDoorOutsideSwSt_start;
    localDW->bDoorOutsideSwSt_start = rtu_bDoorOutsideSwSt;
    if (localDW->is_active_c25_zcu_wnd_lib == 0U) {
      localDW->bDoorOutsideSwSt_prev = rtu_bDoorOutsideSwSt;
      localDW->is_active_c25_zcu_wnd_lib = 1U;
      localDW->is_c25_zcu_wnd_lib = Win_Ctrl_IN_Init_d;
      *rty_u8WndCmdOutputReq_OutSide = 0U;
    } else if (localDW->is_c25_zcu_wnd_lib == Win_Ctrl_IN_Init_d) {
      *rty_u8WndCmdOutputReq_OutSide = 0U;
      if ((localDW->bDoorOutsideSwSt_prev != localDW->bDoorOutsideSwSt_start) &&
          (!localDW->bDoorOutsideSwSt_prev) && ((localDW->bDoorOutsideSwSt_prev
            != localDW->bDoorOutsideSwSt_start) &&
           localDW->bDoorOutsideSwSt_start) && (!rtu_bDoorLockFbSt)) {
        /* Unlock */
        localDW->is_c25_zcu_wnd_lib = Win_Ctrl_IN_OutSideShortDrop;
        *rty_u8WndCmdOutputReq_OutSide = 7U;
      }
    } else {
      *rty_u8WndCmdOutputReq_OutSide = 7U;
      if ((rtu_u8WNDExecStatus == 0) || rtu_bDoorLockFbSt) {
        /* 执行请求要求停止 */
        localDW->is_c25_zcu_wnd_lib = Win_Ctrl_IN_Init_d;
        *rty_u8WndCmdOutputReq_OutSide = 0U;
      }
    }

    /* End of Chart: '<S157>/Outside_Req' */
  } else {
    if (localDW->Outside_Req_MODE) {
      Win_Ctrl_Outside_Req_Disable(localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S153>/Outside_Req' */
}

/*
 * System initialize for atomic system:
 *    '<S96>/Special_Mode_FLReq'
 *    '<S96>/Special_Mode_FRReq'
 *    '<S96>/Special_Mode_RLReq'
 *    '<S96>/Special_Mode_RRReq'
 */
static void Win_Ctrl_Special_Mode_Req_Init(uint8 *rty_u8WndCmdOutputReq_SP,
  boolean *rty_bManualUpFlg_SP, boolean *rty_bAllow_sleep, boolean
  *rty_bSpecialFlag)
{
  /* SystemInitialize for Chart: '<S165>/Special_Mode_Req' */
  *rty_u8WndCmdOutputReq_SP = 0U;
  *rty_bManualUpFlg_SP = false;
  *rty_bAllow_sleep = false;
  *rty_bSpecialFlag = false;
}

/*
 * Output and update for atomic system:
 *    '<S96>/Special_Mode_FLReq'
 *    '<S96>/Special_Mode_FRReq'
 *    '<S96>/Special_Mode_RLReq'
 *    '<S96>/Special_Mode_RRReq'
 */
static void Win_Ctrl_Special_Mode_Req(uint8 rtu_u8WndSw, boolean
  rtu_bCCULostCommon, uint8 rtu_u8WNDExecStatus, boolean rtu_bSwStuckFlg, uint8 *
  rty_u8WndCmdOutputReq_SP, boolean *rty_bManualUpFlg_SP, boolean
  *rty_bAllow_sleep, boolean *rty_bSpecialFlag, rtDW_Special_Mode_Req_Win_Ctrl
  *localDW)
{
  boolean guard1 = false;

  /* Chart: '<S165>/Special_Mode_Req' */
  if (localDW->temporalCounter_i1 < 65535U) {
    localDW->temporalCounter_i1++;
  }

  localDW->u8WndSw_prev = localDW->u8WndSw_start;
  localDW->u8WndSw_start = rtu_u8WndSw;
  localDW->bCCULostCommon_prev = localDW->bCCULostCommon_start;
  localDW->bCCULostCommon_start = rtu_bCCULostCommon;
  if (localDW->is_active_c24_zcu_wnd_lib == 0U) {
    localDW->u8WndSw_prev = rtu_u8WndSw;
    localDW->bCCULostCommon_prev = rtu_bCCULostCommon;
    localDW->is_active_c24_zcu_wnd_lib = 1U;
    localDW->is_c24_zcu_wnd_lib = Win_Ctrl_IN_INIT_h;
    *rty_bAllow_sleep = false;
    *rty_bSpecialFlag = false;
  } else if (localDW->is_c24_zcu_wnd_lib == Win_Ctrl_IN_INIT_h) {
    if ((localDW->bCCULostCommon_prev != localDW->bCCULostCommon_start) &&
        localDW->bCCULostCommon_start) {
      localDW->is_c24_zcu_wnd_lib = Win_Ctrl_IN_SPECIALMODE;
      localDW->temporalCounter_i1 = 0U;
      *rty_bAllow_sleep = true;
      *rty_bSpecialFlag = true;
      if (rtu_u8WndSw == 0) {
        localDW->is_SPECIALMODE = Win_Ctrl_IN_Stop_o;
        *rty_u8WndCmdOutputReq_SP = 0U;
      } else {
        localDW->is_SPECIALMODE = Win_Ctrl_IN_INIT_h;
        *rty_u8WndCmdOutputReq_SP = 0U;
      }
    }
  } else if ((!rtu_bCCULostCommon) || (localDW->temporalCounter_i1 >= 60000)) {
    localDW->is_SPECIALMODE = Win_Ctrl_IN_NO_ACTIVE_CHILD_l;
    localDW->is_c24_zcu_wnd_lib = Win_Ctrl_IN_INIT_h;
    *rty_bAllow_sleep = false;
    *rty_bSpecialFlag = false;
  } else {
    guard1 = false;
    switch (localDW->is_SPECIALMODE) {
     case Win_Ctrl_IN_INIT_h:
      *rty_u8WndCmdOutputReq_SP = 0U;
      if (rtu_u8WndSw == 0) {
        localDW->is_SPECIALMODE = Win_Ctrl_IN_Stop_o;
      }
      break;

     case Win_Ctrl_IN_ManualDown_e:
      *rty_u8WndCmdOutputReq_SP = 2U;
      if ((rtu_u8WNDExecStatus == 0) || (rtu_u8WndSw == 0)) {
        /* 执行请求要求停止 */
        guard1 = true;
      } else if (rtu_u8WndSw == 1) {
        localDW->is_SPECIALMODE = Win_Ctrl_IN_ManualUp_o;
        *rty_u8WndCmdOutputReq_SP = 1U;
        *rty_bManualUpFlg_SP = true;
      } else {
        if (rtu_bSwStuckFlg) {
          /* 开关粘滞 */
          guard1 = true;
        }
      }
      break;

     case Win_Ctrl_IN_ManualUp_o:
      *rty_u8WndCmdOutputReq_SP = 1U;
      if ((rtu_u8WNDExecStatus == 0) || rtu_bSwStuckFlg || (rtu_u8WndSw == 0)) {
        /* 执行请求要求停止 */
        /* 开关粘滞 */
        localDW->is_SPECIALMODE = Win_Ctrl_IN_Stop_o;
        *rty_u8WndCmdOutputReq_SP = 0U;
      } else {
        if (rtu_u8WndSw == 3) {
          localDW->is_SPECIALMODE = Win_Ctrl_IN_ManualDown_e;
          *rty_u8WndCmdOutputReq_SP = 2U;
        }
      }
      break;

     default:
      *rty_u8WndCmdOutputReq_SP = 0U;
      if ((localDW->u8WndSw_prev != localDW->u8WndSw_start) &&
          (localDW->u8WndSw_prev == 0) && ((localDW->u8WndSw_prev !=
            localDW->u8WndSw_start) && (localDW->u8WndSw_start == 1))) {
        localDW->is_SPECIALMODE = Win_Ctrl_IN_ManualUp_o;
        *rty_u8WndCmdOutputReq_SP = 1U;
        *rty_bManualUpFlg_SP = true;
      } else {
        if ((localDW->u8WndSw_prev != localDW->u8WndSw_start) &&
            (localDW->u8WndSw_prev == 0) && ((localDW->u8WndSw_prev !=
              localDW->u8WndSw_start) && (localDW->u8WndSw_start == 3))) {
          localDW->is_SPECIALMODE = Win_Ctrl_IN_ManualDown_e;
          *rty_u8WndCmdOutputReq_SP = 2U;
        }
      }
      break;
    }

    if (guard1) {
      localDW->is_SPECIALMODE = Win_Ctrl_IN_Stop_o;
      *rty_u8WndCmdOutputReq_SP = 0U;
    }
  }

  /* End of Chart: '<S165>/Special_Mode_Req' */
}

/*
 * System initialize for atomic system:
 *    '<S175>/DriverSide_FLSwStuck'
 *    '<S175>/DriverSide_FRSwStuck'
 *    '<S175>/DriverSide_RLSwStuck'
 *    '<S175>/DriverSide_RRSwStuck'
 *    '<S176>/FRLocalWin_SwStuck'
 *    '<S176>/RLLocalWin_SwStuck'
 *    '<S176>/RRLocalWin_SwStuck'
 */
static void Win_C_DriverSide_FLSwStuck_Init(boolean *rty_bSwStuckFlg)
{
  *rty_bSwStuckFlg = false;
}

/*
 * Output and update for atomic system:
 *    '<S175>/DriverSide_FLSwStuck'
 *    '<S175>/DriverSide_FRSwStuck'
 *    '<S175>/DriverSide_RLSwStuck'
 *    '<S175>/DriverSide_RRSwStuck'
 *    '<S176>/FRLocalWin_SwStuck'
 *    '<S176>/RLLocalWin_SwStuck'
 *    '<S176>/RRLocalWin_SwStuck'
 */
static void Win_Ctrl_DriverSide_FLSwStuck(uint8 rtu_u8SwSts, boolean
  *rty_bSwStuckFlg, rtDW_DriverSide_FLSwStuck_Win_C *localDW)
{
  /* Chart: '<S175>/DriverSide_FLSwStuck' */
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  localDW->u8SwSts_prev = localDW->u8SwSts_start;
  localDW->u8SwSts_start = rtu_u8SwSts;

  /* Chart: '<S175>/DriverSide_FLSwStuck' */
  if (localDW->is_active_c12_zcu_wnd_lib == 0U) {
    localDW->u8SwSts_prev = rtu_u8SwSts;
    localDW->is_active_c12_zcu_wnd_lib = 1U;
    localDW->is_c12_zcu_wnd_lib = Win_Ctrl_IN_NotStuck;
    *rty_bSwStuckFlg = false;
  } else {
    switch (localDW->is_c12_zcu_wnd_lib) {
     case Win_Ctrl_IN_Delay_p:
      if (rtu_u8SwSts == 0) {
        localDW->is_c12_zcu_wnd_lib = Win_Ctrl_IN_NotStuck;
        *rty_bSwStuckFlg = false;
      } else if (localDW->u8SwSts_prev != localDW->u8SwSts_start) {
        /*  SwSts changed && ~=0 */
        localDW->is_c12_zcu_wnd_lib = Win_Ctrl_IN_Delay_p;
        localDW->temporalCounter_i1 = 0U;
      } else {
        if (localDW->temporalCounter_i1 >= 6000U) {
          /*  6*10s */
          localDW->is_c12_zcu_wnd_lib = Win_Ctrl_IN_Prot;
          *rty_bSwStuckFlg = true;
        }
      }
      break;

     case Win_Ctrl_IN_DelayRec:
      if (localDW->temporalCounter_i1 >= 20U) {
        /*  0.2s */
        localDW->is_c12_zcu_wnd_lib = Win_Ctrl_IN_NotStuck;
        *rty_bSwStuckFlg = false;
      } else {
        if (localDW->u8SwSts_prev != localDW->u8SwSts_start) {
          /*  SwSts changed */
          localDW->is_c12_zcu_wnd_lib = Win_Ctrl_IN_DelayRec;
          localDW->temporalCounter_i1 = 0U;
        }
      }
      break;

     case Win_Ctrl_IN_NotStuck:
      if (rtu_u8SwSts != 0) {
        localDW->is_c12_zcu_wnd_lib = Win_Ctrl_IN_Delay_p;
        localDW->temporalCounter_i1 = 0U;
      }
      break;

     default:
      if (localDW->u8SwSts_prev != localDW->u8SwSts_start) {
        /*  SwSts changed */
        localDW->is_c12_zcu_wnd_lib = Win_Ctrl_IN_DelayRec;
        localDW->temporalCounter_i1 = 0U;
      }
      break;
    }
  }
}

/* Function for Chart: '<S77>/WNDCmdSrc' */
static void Win_Ctrl_inner_default_FL(uint8 *u8FLWNDCmdSrc)
{
  if (Win_Ctrl_B.u8WndCmdOutputReq_SP_i != 0) {
    *u8FLWNDCmdSrc = (uint8)0x01;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_d != 0) {
    *u8FLWNDCmdSrc = (uint8)0x02;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OutSide_l5 != 0) {
    *u8FLWNDCmdSrc = (uint8)0x03;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_b != 0) {
    *u8FLWNDCmdSrc = (uint8)0x04;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_ln != 0) {
    *u8FLWNDCmdSrc = (uint8)0x05;
  } else if (u8WndCmdOutputReq_FLCCU != 0) {
    *u8FLWNDCmdSrc = (uint8)0x06;
  } else {
    *u8FLWNDCmdSrc = (uint8)0x00;
  }
}

/* Function for Chart: '<S77>/WNDCmdSrc' */
static void Win_Ctrl_inner_default_FR(uint8 *u8FRWNDCmdSrc)
{
  if (Win_Ctrl_B.u8WndCmdOutputReq_SP_k != 0) {
    *u8FRWNDCmdSrc = (uint8)0x01;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_a != 0) {
    *u8FRWNDCmdSrc = (uint8)0x02;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OutSide_g != 0) {
    *u8FRWNDCmdSrc = (uint8)0x03;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_n != 0) {
    *u8FRWNDCmdSrc = (uint8)0x04;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_e != 0) {
    *u8FRWNDCmdSrc = (uint8)0x05;
  } else if (u8WndCmdOutputReq_FRCCU != 0) {
    *u8FRWNDCmdSrc = (uint8)0x06;
  } else {
    *u8FRWNDCmdSrc = (uint8)0x00;
  }
}

/* Function for Chart: '<S77>/WNDCmdSrc' */
static void Win_Ctrl_inner_default_RL(uint8 *u8RLWNDCmdSrc)
{
  if (Win_Ctrl_B.u8WndCmdOutputReq_SP_m != 0) {
    *u8RLWNDCmdSrc = (uint8)0x01;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_m != 0) {
    *u8RLWNDCmdSrc = (uint8)0x02;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OutSide_l != 0) {
    *u8RLWNDCmdSrc = (uint8)0x03;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_i != 0) {
    *u8RLWNDCmdSrc = (uint8)0x04;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_l != 0) {
    *u8RLWNDCmdSrc = (uint8)0x05;
  } else if (u8WndCmdOutputReq_RLCCU != 0) {
    *u8RLWNDCmdSrc = (uint8)0x06;
  } else {
    *u8RLWNDCmdSrc = (uint8)0x00;
  }
}

/* Function for Chart: '<S77>/WNDCmdSrc' */
static void Win_Ctrl_inner_default_RR(uint8 *u8RRWNDCmdSrc)
{
  if (Win_Ctrl_B.u8WndCmdOutputReq_SP != 0) {
    *u8RRWNDCmdSrc = (uint8)0x01;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OPDoor != 0) {
    *u8RRWNDCmdSrc = (uint8)0x02;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OutSide != 0) {
    *u8RRWNDCmdSrc = (uint8)0x03;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor != 0) {
    *u8RRWNDCmdSrc = (uint8)0x04;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_CLDoor != 0) {
    *u8RRWNDCmdSrc = (uint8)0x05;
  } else if (u8WndCmdOutputReq_RRCCU != 0) {
    *u8RRWNDCmdSrc = (uint8)0x06;
  } else {
    *u8RRWNDCmdSrc = (uint8)0x00;
  }
}

/* Model step function */
void Win_Ctrl_Runnable_10ms(void)
{
  /* local block i/o variables */
  uint16 rtb_gSLC_u16VbatVoltage;
  uint8 rtb_gASI_u8RRLocalWindowSw;
  uint8 rtb_gASI_u8RLLocalWindowSw;
  uint8 rtb_gASI_u8FRLocalWindowSw;
  uint8 rtb_gASI_u8FLWindowSw;
  uint8 rtb_gASI_u8FRWindowSw;
  uint8 rtb_gASI_u8RLWindowSw;
  uint8 rtb_gASI_u8RRWindowSw;
  uint8 rtb_gCFG_u8DriverSideWinSwType;
  uint8 rtb_gPRM_u8UINM_DriverSideWinSw;
  uint8 rtb_gCFG_u8LocalSideWinSwType;
  uint8 rtb_gPRM_u8UINM_LocalSideWinSwA;
  boolean rtb_gDCU_bFLWinUpOutput;
  boolean rtb_gDCU_bFLWinDownOutput;
  boolean rtb_gDCU_bFRWinUpOutput;
  boolean rtb_gDCU_bFRWinDownOutput;
  boolean rtb_gDCU_bRLWinUpOutput;
  boolean rtb_gDCU_bRLWinDownOutput;
  boolean rtb_gDCU_bRRWinUpOutput;
  boolean rtb_gDCU_bRRWinDownOutput;
  boolean rtb_gASI_bFLDoorHSUSw;
  boolean rtb_gASI_bFRDoorHSUSw;
  boolean rtb_gASI_bRLDoorHSUSw;
  boolean rtb_gASI_bRRDoorHSUSw;
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  boolean tmpRead_3;
  uint16 tmpRead_4;
  uint16 tmpRead_5;
  uint16 tmpRead_6;
  uint16 tmpRead_7;
  uint8 tmpRead_8;
  uint8 tmpRead_9;
  uint8 tmpRead_a;
  uint8 tmpRead_b;
  boolean tmpRead_c;
  boolean tmpRead_d;
  boolean tmpRead_e;
  boolean tmpRead_f;
  boolean tmpRead_g;
  boolean tmpRead_h;
  boolean tmpRead_i;
  boolean tmpRead_j;
  boolean tmpRead_k;
  boolean tmpRead_l;
  boolean tmpRead_m;
  uint8 tmpRead_n;
  uint8 tmpRead_o;
  uint8 tmpRead_p;
  uint8 tmpRead_q;
  uint8 tmpRead_r;
  uint8 tmpRead_s;
  uint8 tmpRead_t;
  uint8 tmpRead_u;
  uint16 tmpRead_v;
  boolean tmpRead_w;
  boolean tmpRead_x;
  boolean tmpRead_y;
  boolean tmpRead_z;
  boolean tmpRead_10;
  boolean tmpWrite;
  boolean tmpWrite_0;
  boolean tmpWrite_1;
  uint8 tmpWrite_2;
  uint8 tmpWrite_3;
  uint8 tmpWrite_4;
  boolean tmpWrite_5;
  boolean rtb_LogicalOperator;
  boolean rtb_LogicalOperator1;
  boolean rtb_gPRM_bPODRelsCinchFunEnCfgF;
  boolean rtb_gPRM_bPODRelsCinchFunEnCf_l;
  boolean rtb_gPRM_bPODRelsCinchFunEnCfgR;
  boolean rtb_gPRM_bPODRelsCinchFunEnCf_b;
  uint32 rtb_u32LookUp;
  boolean rtb_OutportBufferForbManualUp_m;
  boolean rtb_OutportBufferForbManualUp_b;
  boolean rtb_OutportBufferForbManualUp_a;
  boolean rtb_OutportBufferForbManualUpFl;
  uint8 u8FLWNDCmdSrc;
  uint8 u8FRWNDCmdSrc;
  uint8 u8RLWNDCmdSrc;
  uint8 u8RRWNDCmdSrc;
  boolean bManualUpFlg_SP_d;
  boolean bManualUpFlg_SP;
  boolean bWinShrtDrpFlgTemp_f;
  boolean bWinShrtDrpFlgTemp_g;
  boolean bWinShrtDrpFlgTemp_h;
  boolean bWinShrtDrpFlgTemp;
  boolean guard1 = false;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u8RRNormalizeStsOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u8RRNormalizeSts'
   */
  Rte_Read_gSLC_u8RRNormalizeSts_Val(&Win_Ctrl_B.gSLC_u8RRNormalizeSts);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u16RRRpPositionOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u16RRRpPosition'
   */
  Rte_Read_gSLC_u16RRRpPosition_Val(&Win_Ctrl_B.gSLC_u16RRRpPosition);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u16RRRpTravelLengthOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u16RRRpTravelLength'
   */
  Rte_Read_gSLC_u16RRRpTravelLength_Val(&Win_Ctrl_B.gSLC_u16RRRpTravelLength);

  /* Switch: '<S173>/Switch10' incorporates:
   *  Logic: '<S173>/Logical Operator11'
   *  RelationalOperator: '<S173>/Relational Operator3'
   */
  if ((Win_Ctrl_B.gSLC_u16RRRpPosition <= Win_Ctrl_B.gSLC_u16RRRpTravelLength) &&
      (Win_Ctrl_B.gSLC_u8RRNormalizeSts != 0)) {
    /* Outport: '<Root>/gWND_u8CurrentRRWinPst' incorporates:
     *  Product: '<S173>/Divide2'
     *  Product: '<S173>/Product3'
     */
    u8FLWNDCmdSrc = (uint8)(Win_Ctrl_B.gSLC_u16RRRpTravelLength == 0U ?
      MAX_uint32_T : Win_Ctrl_B.gSLC_u16RRRpPosition * 200U /
      Win_Ctrl_B.gSLC_u16RRRpTravelLength);
  } else {
    /* Outport: '<Root>/gWND_u8CurrentRRWinPst' incorporates:
     *  Constant: '<S173>/Constant10'
     */
    u8FLWNDCmdSrc = MAX_uint8_T;
  }

  /* End of Switch: '<S173>/Switch10' */

  /* Outport: '<Root>/gWND_u8CurrentRRWinPst' */
  (void) Rte_Write_gWND_u8CurrentRRWinPst_Val(u8FLWNDCmdSrc);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u8RLNormalizeStsOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u8RLNormalizeSts'
   */
  Rte_Read_gSLC_u8RLNormalizeSts_Val(&Win_Ctrl_B.gSLC_u8RLNormalizeSts);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u16RLRpPositionOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u16RLRpPosition'
   */
  Rte_Read_gSLC_u16RLRpPosition_Val(&Win_Ctrl_B.gSLC_u16RLRpPosition);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u16RLRpTravelLengthOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u16RLRpTravelLength'
   */
  Rte_Read_gSLC_u16RLRpTravelLength_Val(&Win_Ctrl_B.gSLC_u16RLRpTravelLength);

  /* Switch: '<S173>/Switch8' incorporates:
   *  Logic: '<S173>/Logical Operator10'
   *  RelationalOperator: '<S173>/Relational Operator2'
   */
  if ((Win_Ctrl_B.gSLC_u16RLRpPosition <= Win_Ctrl_B.gSLC_u16RLRpTravelLength) &&
      (Win_Ctrl_B.gSLC_u8RLNormalizeSts != 0)) {
    /* Outport: '<Root>/gWND_u8CurrentRLWinPst' incorporates:
     *  Product: '<S173>/Divide'
     *  Product: '<S173>/Product2'
     */
    u8FRWNDCmdSrc = (uint8)(Win_Ctrl_B.gSLC_u16RLRpTravelLength == 0U ?
      MAX_uint32_T : Win_Ctrl_B.gSLC_u16RLRpPosition * 200U /
      Win_Ctrl_B.gSLC_u16RLRpTravelLength);
  } else {
    /* Outport: '<Root>/gWND_u8CurrentRLWinPst' incorporates:
     *  Constant: '<S173>/Constant9'
     */
    u8FRWNDCmdSrc = MAX_uint8_T;
  }

  /* End of Switch: '<S173>/Switch8' */

  /* Outport: '<Root>/gWND_u8CurrentRLWinPst' */
  (void) Rte_Write_gWND_u8CurrentRLWinPst_Val(u8FRWNDCmdSrc);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u8FRNormalizeStsOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u8FRNormalizeSts'
   */
  Rte_Read_gSLC_u8FRNormalizeSts_Val(&Win_Ctrl_B.gSLC_u8FRNormalizeSts);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u16FRRpPositionOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u16FRRpPosition'
   */
  Rte_Read_gSLC_u16FRRpPosition_Val(&Win_Ctrl_B.gSLC_u16FRRpPosition);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u16FRRpTravelLengthOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u16FRRpTravelLength'
   */
  Rte_Read_gSLC_u16FRRpTravelLength_Val(&Win_Ctrl_B.gSLC_u16FRRpTravelLength);

  /* Switch: '<S173>/Switch9' incorporates:
   *  Logic: '<S173>/Logical Operator9'
   *  RelationalOperator: '<S173>/Relational Operator1'
   */
  if ((Win_Ctrl_B.gSLC_u16FRRpPosition <= Win_Ctrl_B.gSLC_u16FRRpTravelLength) &&
      (Win_Ctrl_B.gSLC_u8FRNormalizeSts != 0)) {
    /* Outport: '<Root>/gWND_u8CurrentFRWinPst' incorporates:
     *  Product: '<S173>/Divide1'
     *  Product: '<S173>/Product1'
     */
    u8RLWNDCmdSrc = (uint8)(Win_Ctrl_B.gSLC_u16FRRpTravelLength == 0U ?
      MAX_uint32_T : Win_Ctrl_B.gSLC_u16FRRpPosition * 200U /
      Win_Ctrl_B.gSLC_u16FRRpTravelLength);
  } else {
    /* Outport: '<Root>/gWND_u8CurrentFRWinPst' incorporates:
     *  Constant: '<S173>/Constant6'
     */
    u8RLWNDCmdSrc = MAX_uint8_T;
  }

  /* End of Switch: '<S173>/Switch9' */

  /* Outport: '<Root>/gWND_u8CurrentFRWinPst' */
  (void) Rte_Write_gWND_u8CurrentFRWinPst_Val(u8RLWNDCmdSrc);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u8FLNormalizeStsOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u8FLNormalizeSts'
   */
  Rte_Read_gSLC_u8FLNormalizeSts_Val(&Win_Ctrl_B.gSLC_u8FLNormalizeSts);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u16FLRpPositionOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u16FLRpPosition'
   */
  Rte_Read_gSLC_u16FLRpPosition_Val(&Win_Ctrl_B.gSLC_u16FLRpPosition);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u16FLRpTravelLengthOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u16FLRpTravelLength'
   */
  Rte_Read_gSLC_u16FLRpTravelLength_Val(&Win_Ctrl_B.gSLC_u16FLRpTravelLength);

  /* Switch: '<S173>/Switch7' incorporates:
   *  Logic: '<S173>/Logical Operator8'
   *  RelationalOperator: '<S173>/Relational Operator'
   */
  if ((Win_Ctrl_B.gSLC_u16FLRpPosition <= Win_Ctrl_B.gSLC_u16FLRpTravelLength) &&
      (Win_Ctrl_B.gSLC_u8FLNormalizeSts != 0)) {
    /* Outport: '<Root>/gWND_u8CurrentFLWinPst' incorporates:
     *  Product: '<S173>/Divide3'
     *  Product: '<S173>/Product'
     */
    u8RRWNDCmdSrc = (uint8)(Win_Ctrl_B.gSLC_u16FLRpTravelLength == 0U ?
      MAX_uint32_T : Win_Ctrl_B.gSLC_u16FLRpPosition * 200U /
      Win_Ctrl_B.gSLC_u16FLRpTravelLength);
  } else {
    /* Outport: '<Root>/gWND_u8CurrentFLWinPst' incorporates:
     *  Constant: '<S173>/Constant20'
     */
    u8RRWNDCmdSrc = MAX_uint8_T;
  }

  /* End of Switch: '<S173>/Switch7' */

  /* Outport: '<Root>/gWND_u8CurrentFLWinPst' */
  (void) Rte_Write_gWND_u8CurrentFLWinPst_Val(u8RRWNDCmdSrc);

  /* Inport: '<Root>/gASI_bCCULostCommon' */
  Rte_Read_gASI_bCCULostCommon_Val(&bWinShrtDrpFlgTemp);

  /* Inport: '<Root>/gSLC_u8FLCurrtOverFlg' */
  Rte_Read_gSLC_u8FLCurrtOverFlg_Val(&tmpRead_8);

  /* Inport: '<Root>/gSLC_u16FLActualCurrent' */
  Rte_Read_gSLC_u16FLActualCurrent_Val(&tmpRead_4);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_u8RRLocalWindowSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_u8RRLocalWindowSw'
   */
  Rte_Read_gASI_u8RRLocalWindowSw_Val(&rtb_gASI_u8RRLocalWindowSw);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_u8RLLocalWindowSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_u8RLLocalWindowSw'
   */
  Rte_Read_gASI_u8RLLocalWindowSw_Val(&rtb_gASI_u8RLLocalWindowSw);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_u8FRLocalWindowSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_u8FRLocalWindowSw'
   */
  Rte_Read_gASI_u8FRLocalWindowSw_Val(&rtb_gASI_u8FRLocalWindowSw);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_u8FLWindowSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_u8FLWindowSw'
   */
  Rte_Read_gASI_u8FLWindowSw_Val(&rtb_gASI_u8FLWindowSw);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u16VbatVoltageOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u16VbatVoltage'
   */
  Rte_Read_gSLC_u16VbatVoltage_Val(&rtb_gSLC_u16VbatVoltage);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDCU_bFLWinUpOutputOutport1' incorporates:
   *  Inport: '<Root>/gDCU_bFLWinUpOutput'
   */
  Rte_Read_gDCU_bFLWinUpOutput_Val(&rtb_gDCU_bFLWinUpOutput);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDCU_bFLWinDownOutputOutport1' incorporates:
   *  Inport: '<Root>/gDCU_bFLWinDownOutput'
   */
  Rte_Read_gDCU_bFLWinDownOutput_Val(&rtb_gDCU_bFLWinDownOutput);

  /* Outputs for Atomic SubSystem: '<S29>/Wnd_ThermalProt_FL' */
  /* Constant: '<S1>/Constant73' incorporates:
   *  Constant: '<S1>/Constant74'
   *  Constant: '<S1>/Constant75'
   *  Constant: '<S29>/Constant33'
   *  Constant: '<S29>/Constant34'
   *  UnitDelay: '<S29>/Unit Delay16'
   */
  Win_Ctrl_Wnd_ThermalProt_FL(100U, 120U, 80U, 20U, 120U,
    rtb_gSLC_u16VbatVoltage, Win_Ctrl_DWork.UnitDelay16_DSTATE, tmpRead_4,
    tmpRead_8, rtb_gDCU_bFLWinUpOutput, rtb_gDCU_bFLWinDownOutput,
    &Win_Ctrl_B.OutportBufferForu8TPFlag_n, &Win_Ctrl_DWork.UnitDelay16_DSTATE,
    &rtb_u32LookUp, &Win_Ctrl_B.Wnd_ThermalProt_FL,
    &Win_Ctrl_ConstB.Wnd_ThermalProt_FL, &Win_Ctrl_DWork.Wnd_ThermalProt_FL);

  /* End of Outputs for SubSystem: '<S29>/Wnd_ThermalProt_FL' */

  /* Chart: '<S175>/DriverSide_FLSwStuck' */
  Win_Ctrl_DriverSide_FLSwStuck(rtb_gASI_u8FLWindowSw, &Win_Ctrl_B.bSwStuckFlg_m,
    &Win_Ctrl_DWork.sf_DriverSide_FLSwStuck);

  /* Outputs for Atomic SubSystem: '<S96>/Special_Mode_FLReq' */
  /* DataTypeConversion: '<S74>/u8_bool9' incorporates:
   *  Delay: '<S4>/Delay'
   */
  Win_Ctrl_Special_Mode_Req(rtb_gASI_u8FLWindowSw, bWinShrtDrpFlgTemp,
    Win_Ctrl_B.u8WNDExecStatus_o, Win_Ctrl_B.bSwStuckFlg_m,
    &Win_Ctrl_B.u8WndCmdOutputReq_SP_i, &bManualUpFlg_SP_d,
    &Win_Ctrl_B.bAllow_sleep_l, &Win_Ctrl_B.bSpecialFlag_b,
    &Win_Ctrl_DWork.Special_Mode_FLReq);

  /* End of Outputs for SubSystem: '<S96>/Special_Mode_FLReq' */

  /* Chart: '<S176>/FRLocalWin_SwStuck' */
  Win_Ctrl_DriverSide_FLSwStuck(rtb_gASI_u8FRLocalWindowSw,
    &Win_Ctrl_B.bSwStuckFlg_o, &Win_Ctrl_DWork.sf_FRLocalWin_SwStuck);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_u8FRWindowSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_u8FRWindowSw'
   */
  Rte_Read_gASI_u8FRWindowSw_Val(&rtb_gASI_u8FRWindowSw);

  /* Chart: '<S175>/DriverSide_FRSwStuck' */
  Win_Ctrl_DriverSide_FLSwStuck(rtb_gASI_u8FRWindowSw, &Win_Ctrl_B.bSwStuckFlg_f,
    &Win_Ctrl_DWork.sf_DriverSide_FRSwStuck);

  /* Logic: '<S174>/Logical Operator' */
  rtb_LogicalOperator = (Win_Ctrl_B.bSwStuckFlg_o || Win_Ctrl_B.bSwStuckFlg_f);

  /* Outputs for Atomic SubSystem: '<S96>/Special_Mode_FRReq' */
  /* DataTypeConversion: '<S74>/u8_bool9' incorporates:
   *  Delay: '<S4>/Delay1'
   */
  Win_Ctrl_Special_Mode_Req(rtb_gASI_u8FRLocalWindowSw, bWinShrtDrpFlgTemp,
    Win_Ctrl_B.u8WNDExecStatus_f, rtb_LogicalOperator,
    &Win_Ctrl_B.u8WndCmdOutputReq_SP_k, &bManualUpFlg_SP_d,
    &Win_Ctrl_B.bAllow_sleep_e, &Win_Ctrl_B.bSpecialFlag_n,
    &Win_Ctrl_DWork.Special_Mode_FRReq);

  /* End of Outputs for SubSystem: '<S96>/Special_Mode_FRReq' */

  /* Chart: '<S176>/RLLocalWin_SwStuck' */
  Win_Ctrl_DriverSide_FLSwStuck(rtb_gASI_u8RLLocalWindowSw,
    &Win_Ctrl_B.bSwStuckFlg_p, &Win_Ctrl_DWork.sf_RLLocalWin_SwStuck);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_u8RLWindowSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_u8RLWindowSw'
   */
  Rte_Read_gASI_u8RLWindowSw_Val(&rtb_gASI_u8RLWindowSw);

  /* Chart: '<S175>/DriverSide_RLSwStuck' */
  Win_Ctrl_DriverSide_FLSwStuck(rtb_gASI_u8RLWindowSw, &Win_Ctrl_B.bSwStuckFlg_j,
    &Win_Ctrl_DWork.sf_DriverSide_RLSwStuck);

  /* Logic: '<S174>/Logical Operator1' */
  rtb_LogicalOperator1 = (Win_Ctrl_B.bSwStuckFlg_p || Win_Ctrl_B.bSwStuckFlg_j);

  /* Outputs for Atomic SubSystem: '<S96>/Special_Mode_RLReq' */
  /* DataTypeConversion: '<S74>/u8_bool9' incorporates:
   *  Delay: '<S4>/Delay2'
   */
  Win_Ctrl_Special_Mode_Req(rtb_gASI_u8RLLocalWindowSw, bWinShrtDrpFlgTemp,
    Win_Ctrl_B.u8WNDExecStatus_n, rtb_LogicalOperator1,
    &Win_Ctrl_B.u8WndCmdOutputReq_SP_m, &bManualUpFlg_SP_d,
    &Win_Ctrl_B.bAllow_sleep_n, &Win_Ctrl_B.bSpecialFlag_m,
    &Win_Ctrl_DWork.Special_Mode_RLReq);

  /* End of Outputs for SubSystem: '<S96>/Special_Mode_RLReq' */

  /* Chart: '<S176>/RRLocalWin_SwStuck' */
  Win_Ctrl_DriverSide_FLSwStuck(rtb_gASI_u8RRLocalWindowSw,
    &Win_Ctrl_B.bSwStuckFlg, &Win_Ctrl_DWork.sf_RRLocalWin_SwStuck);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_u8RRWindowSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_u8RRWindowSw'
   */
  Rte_Read_gASI_u8RRWindowSw_Val(&rtb_gASI_u8RRWindowSw);

  /* Chart: '<S175>/DriverSide_RRSwStuck' */
  Win_Ctrl_DriverSide_FLSwStuck(rtb_gASI_u8RRWindowSw,
    &Win_Ctrl_B.bSwStuckFlg_pq, &Win_Ctrl_DWork.sf_DriverSide_RRSwStuck);

  /* Logic: '<S174>/Logical Operator2' */
  bManualUpFlg_SP_d = (Win_Ctrl_B.bSwStuckFlg || Win_Ctrl_B.bSwStuckFlg_pq);

  /* Outputs for Atomic SubSystem: '<S96>/Special_Mode_RRReq' */
  /* DataTypeConversion: '<S74>/u8_bool9' incorporates:
   *  Delay: '<S4>/Delay3'
   */
  Win_Ctrl_Special_Mode_Req(rtb_gASI_u8RRLocalWindowSw, bWinShrtDrpFlgTemp,
    Win_Ctrl_B.u8WNDExecStatus, bManualUpFlg_SP_d,
    &Win_Ctrl_B.u8WndCmdOutputReq_SP, &bManualUpFlg_SP, &Win_Ctrl_B.bAllow_sleep,
    &Win_Ctrl_B.bSpecialFlag, &Win_Ctrl_DWork.Special_Mode_RRReq);

  /* End of Outputs for SubSystem: '<S96>/Special_Mode_RRReq' */

  /* Chart: '<S3>/voltage_protection' incorporates:
   *  Constant: '<S1>/Constant70'
   *  Constant: '<S1>/Constant71'
   *  Inport: '<Root>/gVRM_u16BatteryVolt_mv'
   */
  if (Win_Ctrl_DWork.temporalCounter_i1 < MAX_uint32_T) {
    Win_Ctrl_DWork.temporalCounter_i1++;
  }

  if (Win_Ctrl_DWork.is_active_c22_zcu_wnd_lib == 0U) {
    Win_Ctrl_DWork.is_active_c22_zcu_wnd_lib = 1U;
    Win_Ctrl_DWork.is_c22_zcu_wnd_lib = Win_Ctrl_IN_Delay_px;
    Win_Ctrl_DWork.temporalCounter_i1 = 0U;
    Win_Ctrl_B.bVoltDisableFlg = false;
  } else {
    Rte_Read_gVRM_u16BatteryVolt_mv_Val(&tmpRead_v);
    switch (Win_Ctrl_DWork.is_c22_zcu_wnd_lib) {
     case Win_Ctrl_IN_Delay_px:
      if (Win_Ctrl_DWork.temporalCounter_i1 >= 500U) {
        Win_Ctrl_DWork.is_c22_zcu_wnd_lib = Win_Ctrl_IN_NORMAL;
        Win_Ctrl_DWork.is_NORMAL = Win_Ctrl_IN_CONFIRM;
      }
      break;

     case Win_Ctrl_IN_NORMAL:
      if ((tmpRead_v > 16000) || (tmpRead_v < 10000)) {
        /* U<10000 or U>16000 */
        if (tmpRead_v < 10000) {
          /* Eng not Cranking */
          /* U<10000 */
          Win_Ctrl_DWork.is_NORMAL = Win_Ctrl_IN_NO_ACTIVE_CHILD_bd;
          Win_Ctrl_DWork.is_c22_zcu_wnd_lib = Win_Ctrl_IN_UNDER_VOLT;
          Win_Ctrl_DWork.is_UNDER_VOLT = Win_Ctrl_IN_DELAY1;
          Win_Ctrl_DWork.temporalCounter_i1 = 0U;
        } else if (tmpRead_v > 16000) {
          /* U>16000 */
          Win_Ctrl_DWork.is_NORMAL = Win_Ctrl_IN_NO_ACTIVE_CHILD_bd;
          Win_Ctrl_DWork.is_c22_zcu_wnd_lib = Win_Ctrl_IN_OVER_VOLT;
          Win_Ctrl_DWork.is_OVER_VOLT = Win_Ctrl_IN_DELAY;
          Win_Ctrl_DWork.temporalCounter_i1 = 0U;
        } else {
          /* 10000<U<16000 or EngineCranking */
          Win_Ctrl_DWork.is_c22_zcu_wnd_lib = Win_Ctrl_IN_NORMAL;
          Win_Ctrl_DWork.is_NORMAL = Win_Ctrl_IN_DELAY;
          Win_Ctrl_DWork.temporalCounter_i1 = 0U;
        }
      } else if (Win_Ctrl_DWork.is_NORMAL == Win_Ctrl_IN_CONFIRM) {
        Win_Ctrl_B.bVoltDisableFlg = false;
      } else {
        if (Win_Ctrl_DWork.temporalCounter_i1 >= 1000U) {
          /* t=Prm/10>1s */
          Win_Ctrl_DWork.is_NORMAL = Win_Ctrl_IN_CONFIRM;
        }
      }
      break;

     case Win_Ctrl_IN_OVER_VOLT:
      if (tmpRead_v <= 15600) {
        /* U<15600 */
        if (tmpRead_v < 10000) {
          /* Eng not Cranking */
          /* U<10000 */
          Win_Ctrl_DWork.is_OVER_VOLT = Win_Ctrl_IN_NO_ACTIVE_CHILD_bd;
          Win_Ctrl_DWork.is_c22_zcu_wnd_lib = Win_Ctrl_IN_UNDER_VOLT;
          Win_Ctrl_DWork.is_UNDER_VOLT = Win_Ctrl_IN_DELAY1;
          Win_Ctrl_DWork.temporalCounter_i1 = 0U;
        } else {
          /* 10000<U<16000 or EngineCranking */
          Win_Ctrl_DWork.is_OVER_VOLT = Win_Ctrl_IN_NO_ACTIVE_CHILD_bd;
          Win_Ctrl_DWork.is_c22_zcu_wnd_lib = Win_Ctrl_IN_NORMAL;
          Win_Ctrl_DWork.is_NORMAL = Win_Ctrl_IN_DELAY;
          Win_Ctrl_DWork.temporalCounter_i1 = 0U;
        }
      } else if (Win_Ctrl_DWork.is_OVER_VOLT == Win_Ctrl_IN_CONFIRM) {
        Win_Ctrl_B.bVoltDisableFlg = true;
      } else if (Win_Ctrl_DWork.temporalCounter_i1 >= 100U) {
        /* t>Prm/10 s */
        Win_Ctrl_DWork.is_OVER_VOLT = Win_Ctrl_IN_CONFIRM;
      } else {
        if (tmpRead_v > 18000) {
          Win_Ctrl_DWork.is_OVER_VOLT = Win_Ctrl_IN_CONFIRM;
        }
      }
      break;

     default:
      if (tmpRead_v >= 10600) {
        /* 10600<U */
        if (tmpRead_v > 16000) {
          /* U>16000 */
          Win_Ctrl_DWork.is_UNDER_VOLT = Win_Ctrl_IN_NO_ACTIVE_CHILD_bd;
          Win_Ctrl_DWork.is_c22_zcu_wnd_lib = Win_Ctrl_IN_OVER_VOLT;
          Win_Ctrl_DWork.is_OVER_VOLT = Win_Ctrl_IN_DELAY;
          Win_Ctrl_DWork.temporalCounter_i1 = 0U;
        } else {
          /* 10000<U<16000 or EngineCranking */
          Win_Ctrl_DWork.is_UNDER_VOLT = Win_Ctrl_IN_NO_ACTIVE_CHILD_bd;
          Win_Ctrl_DWork.is_c22_zcu_wnd_lib = Win_Ctrl_IN_NORMAL;
          Win_Ctrl_DWork.is_NORMAL = Win_Ctrl_IN_DELAY;
          Win_Ctrl_DWork.temporalCounter_i1 = 0U;
        }
      } else if (Win_Ctrl_DWork.is_UNDER_VOLT == Win_Ctrl_IN_CONFIRM) {
        Win_Ctrl_B.bVoltDisableFlg = true;
      } else if (Win_Ctrl_DWork.temporalCounter_i1 >= 100U) {
        /* t>Prm/10 s */
        Win_Ctrl_DWork.is_UNDER_VOLT = Win_Ctrl_IN_CONFIRM;
      } else {
        if (tmpRead_v < 7000) {
          Win_Ctrl_DWork.is_UNDER_VOLT = Win_Ctrl_IN_CONFIRM;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S3>/voltage_protection' */

  /* Inport: '<Root>/gSLC_u8RRCurrtOverFlg' */
  Rte_Read_gSLC_u8RRCurrtOverFlg_Val(&tmpRead_b);

  /* Inport: '<Root>/gSLC_u8RLCurrtOverFlg' */
  Rte_Read_gSLC_u8RLCurrtOverFlg_Val(&tmpRead_a);

  /* Inport: '<Root>/gSLC_u8FRCurrtOverFlg' */
  Rte_Read_gSLC_u8FRCurrtOverFlg_Val(&tmpRead_9);

  /* Inport: '<Root>/gSLC_u16RRActualCurrent' */
  Rte_Read_gSLC_u16RRActualCurrent_Val(&tmpRead_7);

  /* Inport: '<Root>/gSLC_u16RLActualCurrent' */
  Rte_Read_gSLC_u16RLActualCurrent_Val(&tmpRead_6);

  /* Inport: '<Root>/gSLC_u16FRActualCurrent' */
  Rte_Read_gSLC_u16FRActualCurrent_Val(&tmpRead_5);

  /* Inport: '<Root>/gASI_bWindowdInhibitSw' */
  Rte_Read_gASI_bWindowdInhibitSw_Val(&tmpRead_3);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCFG_u8DriverSideWinSwTypeOutport1' incorporates:
   *  Inport: '<Root>/gCFG_u8DriverSideWinSwType'
   */
  Rte_Read_gCFG_u8DriverSideWinSwType_Val(&rtb_gCFG_u8DriverSideWinSwType);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8UINM_DriverSideWinSwActivetimeOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8UINM_DriverSideWinSwActivetime'
   */
  Rte_Read_gPRM_u8UINM_DriverSideWinSwActivetime_Val
    (&rtb_gPRM_u8UINM_DriverSideWinSw);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCFG_u8LocalSideWinSwTypeOutport1' incorporates:
   *  Inport: '<Root>/gCFG_u8LocalSideWinSwType'
   */
  Rte_Read_gCFG_u8LocalSideWinSwType_Val(&rtb_gCFG_u8LocalSideWinSwType);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8UINM_LocalSideWinSwActivetimeOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8UINM_LocalSideWinSwActivetime'
   */
  Rte_Read_gPRM_u8UINM_LocalSideWinSwActivetime_Val
    (&rtb_gPRM_u8UINM_LocalSideWinSwA);

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant16'
   */
  if (Win_Ctrl_B.bVoltDisableFlg) {
    tmpRead_8 = 0U;
  } else {
    tmpRead_8 = rtb_gASI_u8FLWindowSw;
  }

  /* Outputs for Atomic SubSystem: '<S8>/Valid SW state' */
  /* Chart: '<S18>/SWTypeStateDvFL' */
  Win_Ctrl_SWTypeStateDvFL(rtb_gCFG_u8DriverSideWinSwType, tmpRead_8,
    rtb_gPRM_u8UINM_DriverSideWinSw, &Win_Ctrl_B.u8UINMWinSwSt_f,
    &Win_Ctrl_DWork.sf_SWTypeStateDvFL);

  /* End of Outputs for SubSystem: '<S8>/Valid SW state' */

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant17'
   */
  if (Win_Ctrl_B.bVoltDisableFlg) {
    tmpRead_8 = 0U;
  } else {
    tmpRead_8 = rtb_gASI_u8FRWindowSw;
  }

  /* Outputs for Atomic SubSystem: '<S8>/Valid SW state' */
  /* Chart: '<S18>/SWTypeStateDvFR' */
  Win_Ctrl_SWTypeStateDvFL(rtb_gCFG_u8DriverSideWinSwType, tmpRead_8,
    rtb_gPRM_u8UINM_DriverSideWinSw, &Win_Ctrl_B.u8UINMWinSwSt_l,
    &Win_Ctrl_DWork.sf_SWTypeStateDvFR);

  /* End of Outputs for SubSystem: '<S8>/Valid SW state' */

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant18'
   */
  if (Win_Ctrl_B.bVoltDisableFlg) {
    tmpRead_8 = 0U;
  } else {
    tmpRead_8 = rtb_gASI_u8RLWindowSw;
  }

  /* Outputs for Atomic SubSystem: '<S8>/Valid SW state' */
  /* Chart: '<S18>/SWTypeStateDvRL' */
  Win_Ctrl_SWTypeStateDvFL(rtb_gCFG_u8DriverSideWinSwType, tmpRead_8,
    rtb_gPRM_u8UINM_DriverSideWinSw, &Win_Ctrl_B.u8UINMWinSwSt_p,
    &Win_Ctrl_DWork.sf_SWTypeStateDvRL);

  /* End of Outputs for SubSystem: '<S8>/Valid SW state' */

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant19'
   */
  if (Win_Ctrl_B.bVoltDisableFlg) {
    tmpRead_8 = 0U;
  } else {
    tmpRead_8 = rtb_gASI_u8RRWindowSw;
  }

  /* Outputs for Atomic SubSystem: '<S8>/Valid SW state' */
  /* Chart: '<S18>/SWTypeStateDvRR' */
  Win_Ctrl_SWTypeStateDvFL(rtb_gCFG_u8DriverSideWinSwType, tmpRead_8,
    rtb_gPRM_u8UINM_DriverSideWinSw, &Win_Ctrl_B.u8UINMWinSwSt_o,
    &Win_Ctrl_DWork.sf_SWTypeStateDvRR);

  /* End of Outputs for SubSystem: '<S8>/Valid SW state' */

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant51'
   */
  if (Win_Ctrl_B.bVoltDisableFlg) {
    tmpRead_8 = 0U;
  } else {
    tmpRead_8 = rtb_gASI_u8FRLocalWindowSw;
  }

  /* Outputs for Atomic SubSystem: '<S8>/Valid SW state' */
  /* Chart: '<S19>/SWTypeStateFR' */
  Win_Ctrl_SWTypeStateDvFL(rtb_gCFG_u8LocalSideWinSwType, tmpRead_8,
    rtb_gPRM_u8UINM_LocalSideWinSwA, &Win_Ctrl_B.u8UINMWinSwSt_bz,
    &Win_Ctrl_DWork.sf_SWTypeStateFR);

  /* End of Outputs for SubSystem: '<S8>/Valid SW state' */

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant52'
   */
  if (Win_Ctrl_B.bVoltDisableFlg) {
    tmpRead_8 = 0U;
  } else {
    tmpRead_8 = rtb_gASI_u8RLLocalWindowSw;
  }

  /* Outputs for Atomic SubSystem: '<S8>/Valid SW state' */
  /* Chart: '<S19>/SWTypeStateRL' */
  Win_Ctrl_SWTypeStateDvFL(rtb_gCFG_u8LocalSideWinSwType, tmpRead_8,
    rtb_gPRM_u8UINM_LocalSideWinSwA, &Win_Ctrl_B.u8UINMWinSwSt_b,
    &Win_Ctrl_DWork.sf_SWTypeStateRL);

  /* End of Outputs for SubSystem: '<S8>/Valid SW state' */

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant53'
   */
  if (Win_Ctrl_B.bVoltDisableFlg) {
    tmpRead_8 = 0U;
  } else {
    tmpRead_8 = rtb_gASI_u8RRLocalWindowSw;
  }

  /* Outputs for Atomic SubSystem: '<S8>/Valid SW state' */
  /* Chart: '<S19>/SWTypeStateRR' */
  Win_Ctrl_SWTypeStateDvFL(rtb_gCFG_u8LocalSideWinSwType, tmpRead_8,
    rtb_gPRM_u8UINM_LocalSideWinSwA, &Win_Ctrl_B.u8UINMWinSwSt,
    &Win_Ctrl_DWork.sf_SWTypeStateRR);

  /* End of Outputs for SubSystem: '<S8>/Valid SW state' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgNVM_bFLWinShrtDrpFlgOutport1' incorporates:
   *  Inport: '<Root>/gNVM_bFLWinShrtDrpFlg'
   */
  Rte_Read_gNVM_bFLWinShrtDrpFlg_Val(&Win_Ctrl_B.TmpSignalConversionAtgNVM_bFLWi);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8FLWinShortDropPstOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8FLWinShortDropPst'
   */
  Rte_Read_gPRM_u8FLWinShortDropPst_Val(&Win_Ctrl_B.gPRM_u8FLWinShortDropPst);

  /* Chart: '<S6>/ShortDropStsFL' incorporates:
   *  Outport: '<Root>/gWND_u8CurrentFLWinPst'
   *  Outport: '<Root>/gWin_bFLWinShortDropSt'
   */
  Win_Ctrl_ShortDropStsFL(Win_Ctrl_B.TmpSignalConversionAtgNVM_bFLWi,
    u8RRWNDCmdSrc, Win_Ctrl_B.gPRM_u8FLWinShortDropPst,
    Win_Ctrl_B.gSLC_u8FLNormalizeSts, &bManualUpFlg_SP);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgNVM_bFRWinShrtDrpFlgOutport1' incorporates:
   *  Inport: '<Root>/gNVM_bFRWinShrtDrpFlg'
   */
  Rte_Read_gNVM_bFRWinShrtDrpFlg_Val(&Win_Ctrl_B.TmpSignalConversionAtgNVM_bFRWi);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8FRWinShortDropPstOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8FRWinShortDropPst'
   */
  Rte_Read_gPRM_u8FRWinShortDropPst_Val(&Win_Ctrl_B.gPRM_u8FRWinShortDropPst);

  /* Chart: '<S6>/ShortDropStsFR' incorporates:
   *  Outport: '<Root>/gWND_u8CurrentFRWinPst'
   *  Outport: '<Root>/gWin_bFRWinShortDropSt'
   */
  Win_Ctrl_ShortDropStsFL(Win_Ctrl_B.TmpSignalConversionAtgNVM_bFRWi,
    u8RLWNDCmdSrc, Win_Ctrl_B.gPRM_u8FRWinShortDropPst,
    Win_Ctrl_B.gSLC_u8FRNormalizeSts, &tmpWrite_1);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgNVM_bRLWinShrtDrpFlgOutport1' incorporates:
   *  Inport: '<Root>/gNVM_bRLWinShrtDrpFlg'
   */
  Rte_Read_gNVM_bRLWinShrtDrpFlg_Val(&Win_Ctrl_B.TmpSignalConversionAtgNVM_bRLWi);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8RLWinShortDropPstOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8RLWinShortDropPst'
   */
  Rte_Read_gPRM_u8RLWinShortDropPst_Val(&Win_Ctrl_B.gPRM_u8RLWinShortDropPst);

  /* Chart: '<S6>/ShortDropStsRL' incorporates:
   *  Outport: '<Root>/gWND_u8CurrentRLWinPst'
   *  Outport: '<Root>/gWin_bUINM_RLDoorOutsideSwSt'
   */
  Win_Ctrl_ShortDropStsFL(Win_Ctrl_B.TmpSignalConversionAtgNVM_bRLWi,
    u8FRWNDCmdSrc, Win_Ctrl_B.gPRM_u8RLWinShortDropPst,
    Win_Ctrl_B.gSLC_u8RLNormalizeSts, &tmpWrite);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgNVM_bRRWinShrtDrpFlgOutport1' incorporates:
   *  Inport: '<Root>/gNVM_bRRWinShrtDrpFlg'
   */
  Rte_Read_gNVM_bRRWinShrtDrpFlg_Val(&Win_Ctrl_B.TmpSignalConversionAtgNVM_bRRWi);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8RRWinShortDropPstOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8RRWinShortDropPst'
   */
  Rte_Read_gPRM_u8RRWinShortDropPst_Val(&Win_Ctrl_B.gPRM_u8RRWinShortDropPst);

  /* Chart: '<S6>/ShortDropStsRR' incorporates:
   *  Outport: '<Root>/gWND_u8CurrentRRWinPst'
   *  Outport: '<Root>/gWin_bUINM_RRDoorOutsideSwSt'
   */
  Win_Ctrl_ShortDropStsFL(Win_Ctrl_B.TmpSignalConversionAtgNVM_bRRWi,
    u8FLWNDCmdSrc, Win_Ctrl_B.gPRM_u8RRWinShortDropPst,
    Win_Ctrl_B.gSLC_u8RRNormalizeSts, &tmpWrite_0);

  /* Chart: '<S7>/PositionSts_FL' incorporates:
   *  Outport: '<Root>/gWND_u8CurrentFLWinPst'
   *  Outport: '<Root>/gWND_u8FLPositionSts'
   */
  Win_Ctrl_PositionSts_FL(Win_Ctrl_B.gSLC_u8FLNormalizeSts, u8RRWNDCmdSrc,
    &tmpRead_8);

  /* Chart: '<S7>/PositionSts_FR' incorporates:
   *  Outport: '<Root>/gWND_u8CurrentFRWinPst'
   *  Outport: '<Root>/gWND_u8FRPositionSts'
   */
  Win_Ctrl_PositionSts_FL(Win_Ctrl_B.gSLC_u8FRNormalizeSts, u8RLWNDCmdSrc,
    &tmpWrite_2);

  /* Chart: '<S7>/PositionSts_RL' incorporates:
   *  Outport: '<Root>/gWND_u8CurrentRLWinPst'
   *  Outport: '<Root>/gWND_u8RLPositionSts'
   */
  Win_Ctrl_PositionSts_FL(Win_Ctrl_B.gSLC_u8RLNormalizeSts, u8FRWNDCmdSrc,
    &tmpWrite_3);

  /* Chart: '<S7>/PositionSts_RR' incorporates:
   *  Outport: '<Root>/gWND_u8CurrentRRWinPst'
   *  Outport: '<Root>/gWND_u8RRPositionSts'
   */
  Win_Ctrl_PositionSts_FL(Win_Ctrl_B.gSLC_u8RRNormalizeSts, u8FLWNDCmdSrc,
    &tmpWrite_4);

  /* Chart: '<S28>/Over_Time_Protect' incorporates:
   *  Constant: '<S1>/Constant25'
   *  Logic: '<S28>/Logical Operator'
   */
  Win_Ctrl_Over_Time_Protect(rtb_gDCU_bFLWinUpOutput ||
    rtb_gDCU_bFLWinDownOutput, 12, &Win_Ctrl_B.bWndOverRunTime_l,
    &Win_Ctrl_DWork.sf_Over_Time_Protect);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDCU_bFRWinUpOutputOutport1' incorporates:
   *  Inport: '<Root>/gDCU_bFRWinUpOutput'
   */
  Rte_Read_gDCU_bFRWinUpOutput_Val(&rtb_gDCU_bFRWinUpOutput);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDCU_bFRWinDownOutputOutport1' incorporates:
   *  Inport: '<Root>/gDCU_bFRWinDownOutput'
   */
  Rte_Read_gDCU_bFRWinDownOutput_Val(&rtb_gDCU_bFRWinDownOutput);

  /* Chart: '<S28>/Over_Time_Protect1' incorporates:
   *  Constant: '<S1>/Constant25'
   *  Logic: '<S28>/Logical Operator1'
   */
  Win_Ctrl_Over_Time_Protect(rtb_gDCU_bFRWinUpOutput ||
    rtb_gDCU_bFRWinDownOutput, 12, &Win_Ctrl_B.bWndOverRunTime_a,
    &Win_Ctrl_DWork.sf_Over_Time_Protect1);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDCU_bRLWinUpOutputOutport1' incorporates:
   *  Inport: '<Root>/gDCU_bRLWinUpOutput'
   */
  Rte_Read_gDCU_bRLWinUpOutput_Val(&rtb_gDCU_bRLWinUpOutput);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDCU_bRLWinDownOutputOutport1' incorporates:
   *  Inport: '<Root>/gDCU_bRLWinDownOutput'
   */
  Rte_Read_gDCU_bRLWinDownOutput_Val(&rtb_gDCU_bRLWinDownOutput);

  /* Chart: '<S28>/Over_Time_Protect2' incorporates:
   *  Constant: '<S1>/Constant25'
   *  Logic: '<S28>/Logical Operator2'
   */
  Win_Ctrl_Over_Time_Protect(rtb_gDCU_bRLWinUpOutput ||
    rtb_gDCU_bRLWinDownOutput, 12, &Win_Ctrl_B.bWndOverRunTime_p,
    &Win_Ctrl_DWork.sf_Over_Time_Protect2);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDCU_bRRWinUpOutputOutport1' incorporates:
   *  Inport: '<Root>/gDCU_bRRWinUpOutput'
   */
  Rte_Read_gDCU_bRRWinUpOutput_Val(&rtb_gDCU_bRRWinUpOutput);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDCU_bRRWinDownOutputOutport1' incorporates:
   *  Inport: '<Root>/gDCU_bRRWinDownOutput'
   */
  Rte_Read_gDCU_bRRWinDownOutput_Val(&rtb_gDCU_bRRWinDownOutput);

  /* Chart: '<S28>/Over_Time_Protect3' incorporates:
   *  Constant: '<S1>/Constant25'
   *  Logic: '<S28>/Logical Operator3'
   */
  Win_Ctrl_Over_Time_Protect(rtb_gDCU_bRRWinUpOutput ||
    rtb_gDCU_bRRWinDownOutput, 12, &Win_Ctrl_B.bWndOverRunTime,
    &Win_Ctrl_DWork.sf_Over_Time_Protect3);

  /* Outputs for Atomic SubSystem: '<S29>/Wnd_ThermalProt_FR' */
  /* Constant: '<S1>/Constant73' incorporates:
   *  Constant: '<S1>/Constant74'
   *  Constant: '<S1>/Constant75'
   *  Constant: '<S29>/Constant1'
   *  Constant: '<S29>/Constant2'
   *  Constant: '<S29>/Constant35'
   *  Constant: '<S29>/Constant36'
   *  Constant: '<S29>/Constant39'
   *  Constant: '<S29>/Constant40'
   *  UnitDelay: '<S29>/Unit Delay17'
   *  UnitDelay: '<S29>/Unit Delay18'
   *  UnitDelay: '<S29>/Unit Delay19'
   */
  Win_Ctrl_Wnd_ThermalProt_FL(100U, 120U, 80U, 0U, 120U, rtb_gSLC_u16VbatVoltage,
    Win_Ctrl_DWork.UnitDelay17_DSTATE, tmpRead_5, tmpRead_9,
    rtb_gDCU_bFRWinUpOutput, rtb_gDCU_bFRWinDownOutput,
    &Win_Ctrl_B.OutportBufferForu8TPFlag_c, &Win_Ctrl_DWork.UnitDelay17_DSTATE,
    &rtb_u32LookUp, &Win_Ctrl_B.Wnd_ThermalProt_FR,
    &Win_Ctrl_ConstB.Wnd_ThermalProt_FR, &Win_Ctrl_DWork.Wnd_ThermalProt_FR);

  /* End of Outputs for SubSystem: '<S29>/Wnd_ThermalProt_FR' */

  /* Outputs for Atomic SubSystem: '<S29>/Wnd_ThermalProt_RL' */
  Win_Ctrl_Wnd_ThermalProt_FL(100U, 120U, 80U, 0U, 120U, rtb_gSLC_u16VbatVoltage,
    Win_Ctrl_DWork.UnitDelay18_DSTATE, tmpRead_6, tmpRead_a,
    rtb_gDCU_bRLWinUpOutput, rtb_gDCU_bRLWinDownOutput,
    &Win_Ctrl_B.OutportBufferForu8TPFlag_f, &Win_Ctrl_DWork.UnitDelay18_DSTATE,
    &rtb_u32LookUp, &Win_Ctrl_B.Wnd_ThermalProt_RL,
    &Win_Ctrl_ConstB.Wnd_ThermalProt_RL, &Win_Ctrl_DWork.Wnd_ThermalProt_RL);

  /* End of Outputs for SubSystem: '<S29>/Wnd_ThermalProt_RL' */

  /* Outputs for Atomic SubSystem: '<S29>/Wnd_ThermalProt_RR' */
  Win_Ctrl_Wnd_ThermalProt_FL(100U, 120U, 80U, 0U, 120U, rtb_gSLC_u16VbatVoltage,
    Win_Ctrl_DWork.UnitDelay19_DSTATE, tmpRead_7, tmpRead_b,
    rtb_gDCU_bRRWinUpOutput, rtb_gDCU_bRRWinDownOutput,
    &Win_Ctrl_B.OutportBufferForu8TPFlag, &Win_Ctrl_DWork.UnitDelay19_DSTATE,
    &rtb_u32LookUp, &Win_Ctrl_B.Wnd_ThermalProt_RR,
    &Win_Ctrl_ConstB.Wnd_ThermalProt_RR, &Win_Ctrl_DWork.Wnd_ThermalProt_RR);

  /* End of Outputs for SubSystem: '<S29>/Wnd_ThermalProt_RR' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u8FLCurrtFixFlgOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u8FLCurrtFixFlg'
   */
  Rte_Read_gSLC_u8FLCurrtFixFlg_Val(&Win_Ctrl_B.gSLC_u8FLCurrtFixFlg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_bFLPositionLostFlgOutport1' incorporates:
   *  Inport: '<Root>/gSLC_bFLPositionLostFlg'
   */
  Rte_Read_gSLC_bFLPositionLostFlg_Val(&Win_Ctrl_B.gSLC_bFLPositionLostFlg);

  /* Outport: '<Root>/gWin_bUINM_RLDoorOutsideSwSt' */
  (void) Rte_Write_gWin_bUINM_RLDoorOutsideSwSt_Val(tmpWrite);

  /* Outport: '<Root>/gWin_bUINM_RRDoorOutsideSwSt' */
  (void) Rte_Write_gWin_bUINM_RRDoorOutsideSwSt_Val(tmpWrite_0);

  /* Outport: '<Root>/gWin_bFRWinShortDropSt' */
  (void) Rte_Write_gWin_bFRWinShortDropSt_Val(tmpWrite_1);

  /* Outport: '<Root>/gWin_bFLWinShortDropSt' */
  (void) Rte_Write_gWin_bFLWinShortDropSt_Val(bManualUpFlg_SP);

  /* Outport: '<Root>/gWND_u8FLPositionSts' */
  (void) Rte_Write_gWND_u8FLPositionSts_Val(tmpRead_8);

  /* Outport: '<Root>/gWND_u8FRPositionSts' */
  (void) Rte_Write_gWND_u8FRPositionSts_Val(tmpWrite_2);

  /* Outport: '<Root>/gWND_u8RLPositionSts' */
  (void) Rte_Write_gWND_u8RLPositionSts_Val(tmpWrite_3);

  /* Outport: '<Root>/gWND_u8RRPositionSts' */
  (void) Rte_Write_gWND_u8RRPositionSts_Val(tmpWrite_4);

  /* Chart: '<S27>/SLC_Initialization_FL' incorporates:
   *  Constant: '<S1>/Constant28'
   *  Constant: '<S27>/Constant43'
   *  Constant: '<S27>/Constant47'
   *  DataTypeConversion: '<S27>/Data Type Conversion'
   *  Delay: '<S1>/Delay'
   */
  if (Win_Ctrl_DWork.temporalCounter_i1_l < MAX_uint32_T) {
    Win_Ctrl_DWork.temporalCounter_i1_l++;
  }

  Win_Ctrl_DWork.bStall_prev = Win_Ctrl_DWork.bStall_start;
  Win_Ctrl_DWork.bStall_start = false;
  if (Win_Ctrl_DWork.is_active_c7_zcu_wnd_lib == 0U) {
    Win_Ctrl_DWork.bStall_prev = false;
    Win_Ctrl_DWork.is_active_c7_zcu_wnd_lib = 1U;
    if (Win_Ctrl_B.gSLC_u8FLNormalizeSts == 1) {
      Win_Ctrl_DWork.is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_Finished_c;
      Win_Ctrl_B.bNormStartFlg_m = true;
      Win_Ctrl_DWork.is_Init_Finished = Win_Ctrl_IN_Temp_l;
    } else {
      Win_Ctrl_DWork.is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_m;
      Win_Ctrl_B.bNormStartFlg_m = false;
    }
  } else {
    switch (Win_Ctrl_DWork.is_c7_zcu_wnd_lib) {
     case Win_Ctrl_IN_Init_m:
      if (Win_Ctrl_B.u8FLOutputSts == 1) {
        Win_Ctrl_DWork.is_c7_zcu_wnd_lib = Win_Ctrl_IN_MovingUp_n;
      }
      break;

     case Win_Ctrl_IN_Init_Finished_c:
      if (Win_Ctrl_DWork.is_Init_Finished == Win_Ctrl_IN_Success_o) {
        if ((Win_Ctrl_B.gSLC_u8FLNormalizeSts == 0) ||
            Win_Ctrl_B.gSLC_bFLPositionLostFlg) {
          /*  normalize status 0=no, 1=success, 2=ing */
          Win_Ctrl_DWork.is_Init_Finished = Win_Ctrl_IN_NO_ACTIVE_CHILD_bd;
          Win_Ctrl_DWork.is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_m;
          Win_Ctrl_B.bNormStartFlg_m = false;
        }
      } else {
        if (Win_Ctrl_B.gSLC_u8FLNormalizeSts == 1) {
          /* {u8NormState = 1;} */
          Win_Ctrl_DWork.is_Init_Finished = Win_Ctrl_IN_Success_o;
        }
      }
      break;

     case Win_Ctrl_IN_MovingUp_n:
      if (Win_Ctrl_B.gSLC_u8FLCurrtFixFlg != 0) {
        Win_Ctrl_DWork.is_c7_zcu_wnd_lib = Win_Ctrl_IN_SwHold_c;
        Win_Ctrl_DWork.temporalCounter_i1_l = 0U;

        /* u8NormState = 2; */
        if ((rtb_gASI_u8FLWindowSw == 1) || (rtb_gASI_u8FLWindowSw == 3)) {
          Win_Ctrl_DWork.u8Sw1Rec = rtb_gASI_u8FLWindowSw;
        } else {
          Win_Ctrl_DWork.u8Sw1Rec = 0U;
        }

        Win_Ctrl_DWork.u8Sw2Rec = 0U;
      } else if ((Win_Ctrl_DWork.bStall_prev != Win_Ctrl_DWork.bStall_start) &&
                 Win_Ctrl_DWork.bStall_start) {
        Win_Ctrl_DWork.is_c7_zcu_wnd_lib = Win_Ctrl_IN_Wait_b;
        Win_Ctrl_DWork.temporalCounter_i1_l = 0U;
      } else {
        if (Win_Ctrl_B.u8FLOutputSts != 1) {
          Win_Ctrl_DWork.is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_m;
          Win_Ctrl_B.bNormStartFlg_m = false;
        }
      }
      break;

     case Win_Ctrl_IN_SwHold_c:
      if (Win_Ctrl_DWork.temporalCounter_i1_l >= 400U) {
        /*  1.5s */
        Win_Ctrl_DWork.is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_Finished_c;
        Win_Ctrl_B.bNormStartFlg_m = true;
        Win_Ctrl_DWork.is_Init_Finished = Win_Ctrl_IN_Temp_l;
      } else {
        if (((Win_Ctrl_DWork.u8Sw1Rec != 0) && (rtb_gASI_u8FLWindowSw != 1) &&
             (rtb_gASI_u8FLWindowSw != 3)) || (Win_Ctrl_DWork.u8Sw2Rec != 0)) {
          /* SW = Up, not hold */
          /* GloSW = Up, not hold */
          Win_Ctrl_DWork.is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_m;
          Win_Ctrl_B.bNormStartFlg_m = false;
        }
      }
      break;

     case Win_Ctrl_IN_Wait_b:
      if (Win_Ctrl_B.gSLC_u8FLCurrtFixFlg != 0) {
        Win_Ctrl_DWork.is_c7_zcu_wnd_lib = Win_Ctrl_IN_SwHold_c;
        Win_Ctrl_DWork.temporalCounter_i1_l = 0U;

        /* u8NormState = 2; */
        if ((rtb_gASI_u8FLWindowSw == 1) || (rtb_gASI_u8FLWindowSw == 3)) {
          Win_Ctrl_DWork.u8Sw1Rec = rtb_gASI_u8FLWindowSw;
        } else {
          Win_Ctrl_DWork.u8Sw1Rec = 0U;
        }

        Win_Ctrl_DWork.u8Sw2Rec = 0U;
      } else {
        if (Win_Ctrl_DWork.temporalCounter_i1_l >= 5U) {
          Win_Ctrl_DWork.is_c7_zcu_wnd_lib = Win_Ctrl_IN_WaitSecond_m;
          Win_Ctrl_DWork.temporalCounter_i1_l = 0U;
        }
      }
      break;

     default:
      if ((Win_Ctrl_B.gSLC_u8FLCurrtFixFlg != 0) || ((Win_Ctrl_DWork.bStall_prev
            != Win_Ctrl_DWork.bStall_start) && Win_Ctrl_DWork.bStall_start &&
           (Win_Ctrl_B.u8FLOutputSts == 1))) {
        Win_Ctrl_DWork.is_c7_zcu_wnd_lib = Win_Ctrl_IN_SwHold_c;
        Win_Ctrl_DWork.temporalCounter_i1_l = 0U;

        /* u8NormState = 2; */
        if ((rtb_gASI_u8FLWindowSw == 1) || (rtb_gASI_u8FLWindowSw == 3)) {
          Win_Ctrl_DWork.u8Sw1Rec = rtb_gASI_u8FLWindowSw;
        } else {
          Win_Ctrl_DWork.u8Sw1Rec = 0U;
        }

        Win_Ctrl_DWork.u8Sw2Rec = 0U;
      } else {
        if ((rtb_gASI_u8FLWindowSw == 2) || (rtb_gASI_u8FLWindowSw == 4) ||
            (Win_Ctrl_DWork.temporalCounter_i1_l >= 5000U)) {
          Win_Ctrl_DWork.is_c7_zcu_wnd_lib = Win_Ctrl_IN_Init_m;
          Win_Ctrl_B.bNormStartFlg_m = false;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S27>/SLC_Initialization_FL' */

  /* Inport: '<Root>/gCAN_u8POD_FLWinShortDropCmd' */
  Rte_Read_gCAN_u8POD_FLWinShortDropCmd_Val(&tmpRead_n);

  /* Inport: '<Root>/gLock_bFLDoorLockFbSt' */
  Rte_Read_gLock_bFLDoorLockFbSt_Val(&rtb_OutportBufferForbManualUp_m);

  /* Inport: '<Root>/gCAN_u8PWL_FLWinMotorOpeCtr' */
  Rte_Read_gCAN_u8PWL_FLWinMotorOpeCtr_Val(&tmpRead);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u8FRCurrtFixFlgOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u8FRCurrtFixFlg'
   */
  Rte_Read_gSLC_u8FRCurrtFixFlg_Val(&Win_Ctrl_B.gSLC_u8FRCurrtFixFlg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_bFRPositionLostFlgOutport1' incorporates:
   *  Inport: '<Root>/gSLC_bFRPositionLostFlg'
   */
  Rte_Read_gSLC_bFRPositionLostFlg_Val(&Win_Ctrl_B.gSLC_bFRPositionLostFlg);

  /* Chart: '<S27>/SLC_Initialization_FR' incorporates:
   *  Constant: '<S1>/Constant28'
   *  Constant: '<S27>/Constant44'
   *  Constant: '<S27>/Constant48'
   *  DataTypeConversion: '<S27>/Data Type Conversion1'
   *  Delay: '<S1>/Delay1'
   */
  Win_Ctrl_SLC_Initialization_FR(Win_Ctrl_B.u8FROutputSts,
    Win_Ctrl_B.gSLC_u8FRCurrtFixFlg != 0, rtb_gASI_u8FRWindowSw,
    rtb_gASI_u8FRLocalWindowSw, Win_Ctrl_B.gSLC_u8FRNormalizeSts,
    Win_Ctrl_B.gSLC_bFRPositionLostFlg, 4, false, 5, &Win_Ctrl_B.bNormStartFlg_l,
    &Win_Ctrl_DWork.sf_SLC_Initialization_FR);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u8RLCurrtFixFlgOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u8RLCurrtFixFlg'
   */
  Rte_Read_gSLC_u8RLCurrtFixFlg_Val(&Win_Ctrl_B.gSLC_u8RLCurrtFixFlg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_bRLPositionLostFlgOutport1' incorporates:
   *  Inport: '<Root>/gSLC_bRLPositionLostFlg'
   */
  Rte_Read_gSLC_bRLPositionLostFlg_Val(&Win_Ctrl_B.gSLC_bRLPositionLostFlg);

  /* Chart: '<S27>/SLC_Initialization_RL' incorporates:
   *  Constant: '<S1>/Constant28'
   *  Constant: '<S27>/Constant46'
   *  Constant: '<S27>/Constant49'
   *  DataTypeConversion: '<S27>/Data Type Conversion2'
   *  Delay: '<S1>/Delay2'
   */
  Win_Ctrl_SLC_Initialization_FR(Win_Ctrl_B.u8RLOutputSts,
    Win_Ctrl_B.gSLC_u8RLCurrtFixFlg != 0, rtb_gASI_u8RLWindowSw,
    rtb_gASI_u8RLLocalWindowSw, Win_Ctrl_B.gSLC_u8RLNormalizeSts,
    Win_Ctrl_B.gSLC_bRLPositionLostFlg, 4, false, 5, &Win_Ctrl_B.bNormStartFlg_a,
    &Win_Ctrl_DWork.sf_SLC_Initialization_RL);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_u8RRCurrtFixFlgOutport1' incorporates:
   *  Inport: '<Root>/gSLC_u8RRCurrtFixFlg'
   */
  Rte_Read_gSLC_u8RRCurrtFixFlg_Val(&Win_Ctrl_B.gSLC_u8RRCurrtFixFlg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSLC_bRRPositionLostFlgOutport1' incorporates:
   *  Inport: '<Root>/gSLC_bRRPositionLostFlg'
   */
  Rte_Read_gSLC_bRRPositionLostFlg_Val(&Win_Ctrl_B.gSLC_bRRPositionLostFlg);

  /* Chart: '<S27>/SLC_Initialization_RR' incorporates:
   *  Constant: '<S1>/Constant28'
   *  Constant: '<S27>/Constant45'
   *  Constant: '<S27>/Constant50'
   *  DataTypeConversion: '<S27>/Data Type Conversion3'
   *  Delay: '<S1>/Delay3'
   */
  Win_Ctrl_SLC_Initialization_FR(Win_Ctrl_B.u8RROutputSts,
    Win_Ctrl_B.gSLC_u8RRCurrtFixFlg != 0, rtb_gASI_u8RRWindowSw,
    rtb_gASI_u8RRLocalWindowSw, Win_Ctrl_B.gSLC_u8RRNormalizeSts,
    Win_Ctrl_B.gSLC_bRRPositionLostFlg, 4, false, 5, &Win_Ctrl_B.bNormStartFlg,
    &Win_Ctrl_DWork.sf_SLC_Initialization_RR);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCFG_bFLDoorFramelessGlassCfgOutport1' incorporates:
   *  Inport: '<Root>/gCFG_bFLDoorFramelessGlassCfg'
   */
  Rte_Read_gCFG_bFLDoorFramelessGlassCfg_Val
    (&Win_Ctrl_B.gCFG_bFLDoorFramelessGlassCfg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_bPODRelsCinchFunEnCfgFLOutport1' incorporates:
   *  Inport: '<Root>/gPRM_bPODRelsCinchFunEnCfgFL'
   */
  Rte_Read_gPRM_bPODRelsCinchFunEnCfgFL_Val(&rtb_gPRM_bPODRelsCinchFunEnCfgF);

  /* Outputs for Enabled SubSystem: '<S125>/ElecDoor_Req' */
  /* Logic: '<S125>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay'
   *  Logic: '<S125>/Logical Operator2'
   *  RelationalOperator: '<S125>/Equal'
   *  RelationalOperator: '<S125>/Equal1'
   */
  Win_Ctrl_ElecDoor_Req(Win_Ctrl_B.gCFG_bFLDoorFramelessGlassCfg &&
                        rtb_gPRM_bPODRelsCinchFunEnCfgF && (!bWinShrtDrpFlgTemp),
                        tmpRead_n, Win_Ctrl_B.u8WNDExecStatus_o,
                        &Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_b,
                        &Win_Ctrl_DWork.ElecDoor_Req);

  /* End of Outputs for SubSystem: '<S125>/ElecDoor_Req' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDoor_bFLDoorAjarStOutport1' incorporates:
   *  Inport: '<Root>/gDoor_bFLDoorAjarSt'
   */
  Rte_Read_gDoor_bFLDoorAjarSt_Val(&Win_Ctrl_B.gDoor_bFLDoorAjarSt);

  /* Outputs for Enabled SubSystem: '<S141>/OpenDoor_Req' */
  /* Logic: '<S141>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay'
   *  Logic: '<S141>/Logical Operator2'
   *  RelationalOperator: '<S141>/Equal'
   */
  Win_Ctrl_OpenDoor_Req(Win_Ctrl_B.gCFG_bFLDoorFramelessGlassCfg &&
                        (!bWinShrtDrpFlgTemp), Win_Ctrl_B.gDoor_bFLDoorAjarSt,
                        Win_Ctrl_B.u8WNDExecStatus_o,
                        &Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_d,
                        &Win_Ctrl_DWork.OpenDoor_Req);

  /* End of Outputs for SubSystem: '<S141>/OpenDoor_Req' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bFLDoorHSUSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_bFLDoorHSUSw'
   */
  Rte_Read_gASI_bFLDoorHSUSw_Val(&rtb_gASI_bFLDoorHSUSw);

  /* Outputs for Enabled SubSystem: '<S153>/Outside_Req' */
  /* Logic: '<S153>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay'
   *  Logic: '<S153>/Logical Operator2'
   *  RelationalOperator: '<S153>/Equal'
   *  RelationalOperator: '<S153>/Equal1'
   */
  Win_Ctrl_Outside_Req(Win_Ctrl_B.gCFG_bFLDoorFramelessGlassCfg &&
                       (!rtb_gPRM_bPODRelsCinchFunEnCfgF) &&
                       (!bWinShrtDrpFlgTemp), rtb_OutportBufferForbManualUp_m,
                       rtb_gASI_bFLDoorHSUSw, Win_Ctrl_B.u8WNDExecStatus_o,
                       &Win_Ctrl_B.u8WndCmdOutputReq_OutSide_l5,
                       &Win_Ctrl_DWork.Outside_Req);

  /* End of Outputs for SubSystem: '<S153>/Outside_Req' */

  /* Outputs for Enabled SubSystem: '<S109>/CLDoor_Req' */
  /* Logic: '<S109>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay'
   *  Logic: '<S109>/Logical Operator2'
   *  RelationalOperator: '<S109>/Equal'
   */
  Win_Ctrl_CLDoor_Req(Win_Ctrl_B.gCFG_bFLDoorFramelessGlassCfg &&
                      (!bWinShrtDrpFlgTemp), Win_Ctrl_B.gDoor_bFLDoorAjarSt,
                      rtb_gASI_bFLDoorHSUSw, Win_Ctrl_B.u8WNDExecStatus_o,
                      Win_Ctrl_B.TmpSignalConversionAtgNVM_bFLWi,
                      &Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_ln,
                      &Win_Ctrl_DWork.CLDoor_Req);

  /* End of Outputs for SubSystem: '<S109>/CLDoor_Req' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8PWL_FLWinMotorTargetPstCtrOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8PWL_FLWinMotorTargetPstCtr'
   */
  Rte_Read_gCAN_u8PWL_FLWinMotorTargetPstCtr_Val
    (&Win_Ctrl_B.gCAN_u8PWL_FLWinMotorTargetPstC);

  /* Outputs for Atomic SubSystem: '<S91>/CCU_Req_FL' */
  /* DataTypeConversion: '<S74>/u8_bool9' incorporates:
   *  Constant: '<S1>/Constant59'
   *  Delay: '<S4>/Delay'
   *  Delay: '<S74>/Delay4'
   *  Delay: '<S74>/Delay5'
   *  Delay: '<S74>/Delay6'
   *  Delay: '<S74>/Delay7'
   *  Outport: '<Root>/gWin_bFLDelayAdjSpdFlg'
   */
  Win_Ctrl_CCU_Req_FL(bWinShrtDrpFlgTemp, tmpRead, true,
                      Win_Ctrl_B.gCAN_u8PWL_FLWinMotorTargetPstC,
                      Win_Ctrl_B.gCFG_bFLDoorFramelessGlassCfg,
                      Win_Ctrl_B.u8WNDExecStatus_o, Win_Ctrl_B.bSwStuckFlg_m,
                      Win_Ctrl_DWork.Delay4_DSTATE, Win_Ctrl_DWork.Delay5_DSTATE,
                      Win_Ctrl_DWork.Delay6_DSTATE, Win_Ctrl_DWork.Delay7_DSTATE,
                      &u8WndCmdOutputReq_FLCCU, &rtb_OutportBufferForbManualUp_m,
                      &bWinShrtDrpFlgTemp_f, &Win_Ctrl_B.CCU_Req_FL,
                      &Win_Ctrl_DWork.CCU_Req_FL);

  /* End of Outputs for SubSystem: '<S91>/CCU_Req_FL' */

  /* Outport: '<Root>/gWin_bFLDelayAdjSpdFlg' */
  (void) Rte_Write_gWin_bFLDelayAdjSpdFlg_Val(bWinShrtDrpFlgTemp_f);

  /* Switch: '<S76>/Switch' incorporates:
   *  Switch: '<S76>/Switch1'
   *  Switch: '<S76>/Switch10'
   *  Switch: '<S76>/Switch8'
   *  Switch: '<S76>/Switch9'
   */
  if (Win_Ctrl_B.u8WndCmdOutputReq_SP_i != 0) {
    /* Outport: '<Root>/gWin_u8FLWNDCmd' */
    tmpRead_8 = Win_Ctrl_B.u8WndCmdOutputReq_SP_i;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_b != 0) {
    /* Switch: '<S76>/Switch1' incorporates:
     *  Outport: '<Root>/gWin_u8FLWNDCmd'
     */
    tmpRead_8 = Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_b;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_d != 0) {
    /* Switch: '<S76>/Switch8' incorporates:
     *  Outport: '<Root>/gWin_u8FLWNDCmd'
     *  Switch: '<S76>/Switch1'
     */
    tmpRead_8 = Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_d;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OutSide_l5 != 0) {
    /* Switch: '<S76>/Switch9' incorporates:
     *  Outport: '<Root>/gWin_u8FLWNDCmd'
     *  Switch: '<S76>/Switch1'
     *  Switch: '<S76>/Switch8'
     */
    tmpRead_8 = Win_Ctrl_B.u8WndCmdOutputReq_OutSide_l5;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_ln != 0) {
    /* Switch: '<S76>/Switch10' incorporates:
     *  Outport: '<Root>/gWin_u8FLWNDCmd'
     *  Switch: '<S76>/Switch1'
     *  Switch: '<S76>/Switch8'
     *  Switch: '<S76>/Switch9'
     */
    tmpRead_8 = Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_ln;
  } else {
    /* Outport: '<Root>/gWin_u8FLWNDCmd' incorporates:
     *  Switch: '<S76>/Switch1'
     *  Switch: '<S76>/Switch10'
     *  Switch: '<S76>/Switch8'
     *  Switch: '<S76>/Switch9'
     */
    tmpRead_8 = u8WndCmdOutputReq_FLCCU;
  }

  /* End of Switch: '<S76>/Switch' */

  /* Outport: '<Root>/gWin_u8FLWNDCmd' */
  (void) Rte_Write_gWin_u8FLWNDCmd_Val(tmpRead_8);

  /* Inport: '<Root>/gCAN_bPWL_FLWinRelearnReq' */
  Rte_Read_gCAN_bPWL_FLWinRelearnReq_Val(&rtb_OutportBufferForbManualUp_b);

  /* Inport: '<Root>/gSLC_bFLActiveFlg' */
  Rte_Read_gSLC_bFLActiveFlg_Val(&tmpRead_w);

  /* Inport: '<Root>/gPRM_u8FLPowerDoorReqWinOpenPst' */
  Rte_Read_gPRM_u8FLPowerDoorReqWinOpenPst_Val(&tmpRead_r);

  /* Inport: '<Root>/gCAN_u8POD_FRWinShortDropCmd' */
  Rte_Read_gCAN_u8POD_FRWinShortDropCmd_Val(&tmpRead_o);

  /* Inport: '<Root>/gLock_bFRDoorLockFbSt' */
  Rte_Read_gLock_bFRDoorLockFbSt_Val(&tmpRead_m);

  /* Inport: '<Root>/gSLC_bFLBDCSStopReq' */
  Rte_Read_gSLC_bFLBDCSStopReq_Val(&tmpRead_g);

  /* Inport: '<Root>/gSLC_bFLTDCSStopReq' */
  Rte_Read_gSLC_bFLTDCSStopReq_Val(&tmpRead_c);

  /* Inport: '<Root>/gCAN_u8PWL_FRWinMotorOpeCtr' */
  Rte_Read_gCAN_u8PWL_FRWinMotorOpeCtr_Val(&tmpRead_0);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDCU_bFLReverseFlagOutport1' incorporates:
   *  Inport: '<Root>/gDCU_bFLReverseFlag'
   */
  Rte_Read_gDCU_bFLReverseFlag_Val(&Win_Ctrl_B.gDCU_bFLReverseFlag);

  /* Logic: '<S1>/Logical Operator' */
  Win_Ctrl_B.LogicalOperator = !Win_Ctrl_B.gDCU_bFLReverseFlag;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8WndVentilationPstOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8WndVentilationPst'
   */
  Rte_Read_gPRM_u8WndVentilationPst_Val(&Win_Ctrl_B.gPRM_u8WndVentilationPst);

  /* Chart: '<S79>/SLC' incorporates:
   *  Outport: '<Root>/gWND_u8CurrentFLWinPst'
   *  Outport: '<Root>/gWin_u8FLWNDCmd'
   */
  Win_Ctrl_SLC(tmpRead_8, Win_Ctrl_B.gCAN_u8PWL_FLWinMotorTargetPstC,
               Win_Ctrl_B.gPRM_u8WndVentilationPst, u8RRWNDCmdSrc,
               Win_Ctrl_B.gPRM_u8FLWinShortDropPst, tmpRead_r,
               Win_Ctrl_B.bVoltDisableFlg, Win_Ctrl_B.OutportBufferForu8TPFlag_n,
               Win_Ctrl_B.gSLC_u8FLCurrtFixFlg, Win_Ctrl_B.gSLC_u8FLNormalizeSts,
               Win_Ctrl_B.gCFG_bFLDoorFramelessGlassCfg,
               Win_Ctrl_B.gDoor_bFLDoorAjarSt, Win_Ctrl_B.gDCU_bFLReverseFlag,
               Win_Ctrl_B.gSLC_bFLPositionLostFlg, Win_Ctrl_B.bWndOverRunTime_l,
               Win_Ctrl_B.LogicalOperator, tmpRead_w,
               rtb_OutportBufferForbManualUp_b,
               Win_Ctrl_B.TmpSignalConversionAtgNVM_bFLWi, tmpRead_g, tmpRead_c,
               &Win_Ctrl_B.u8WNDExecReq_g, &bWinShrtDrpFlgTemp_f,
               &Win_Ctrl_B.u8PWL_WinOpeationSt_i, &Win_Ctrl_B.u8WNDExecStatus_o,
               &Win_Ctrl_B.bWinShrtDrpFlgWrtCntTemp_i, &Win_Ctrl_DWork.sf_SLC);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCFG_bFRDoorFramelessGlassCfgOutport1' incorporates:
   *  Inport: '<Root>/gCFG_bFRDoorFramelessGlassCfg'
   */
  Rte_Read_gCFG_bFRDoorFramelessGlassCfg_Val
    (&Win_Ctrl_B.gCFG_bFRDoorFramelessGlassCfg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_bPODRelsCinchFunEnCfgFROutport1' incorporates:
   *  Inport: '<Root>/gPRM_bPODRelsCinchFunEnCfgFR'
   */
  Rte_Read_gPRM_bPODRelsCinchFunEnCfgFR_Val(&rtb_gPRM_bPODRelsCinchFunEnCf_l);

  /* Outputs for Enabled SubSystem: '<S126>/ElecDoor_Req' */
  /* Logic: '<S126>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay1'
   *  Logic: '<S126>/Logical Operator2'
   *  RelationalOperator: '<S126>/Equal'
   *  RelationalOperator: '<S126>/Equal1'
   */
  Win_Ctrl_ElecDoor_Req(Win_Ctrl_B.gCFG_bFRDoorFramelessGlassCfg &&
                        rtb_gPRM_bPODRelsCinchFunEnCf_l && (!bWinShrtDrpFlgTemp),
                        tmpRead_o, Win_Ctrl_B.u8WNDExecStatus_f,
                        &Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_n,
                        &Win_Ctrl_DWork.ElecDoor_Req_i);

  /* End of Outputs for SubSystem: '<S126>/ElecDoor_Req' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDoor_bFRDoorAjarStOutport1' incorporates:
   *  Inport: '<Root>/gDoor_bFRDoorAjarSt'
   */
  Rte_Read_gDoor_bFRDoorAjarSt_Val(&Win_Ctrl_B.gDoor_bFRDoorAjarSt);

  /* Outputs for Enabled SubSystem: '<S142>/OpenDoor_Req' */
  /* Logic: '<S142>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay1'
   *  Logic: '<S142>/Logical Operator2'
   *  RelationalOperator: '<S142>/Equal'
   */
  Win_Ctrl_OpenDoor_Req(Win_Ctrl_B.gCFG_bFRDoorFramelessGlassCfg &&
                        (!bWinShrtDrpFlgTemp), Win_Ctrl_B.gDoor_bFRDoorAjarSt,
                        Win_Ctrl_B.u8WNDExecStatus_f,
                        &Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_a,
                        &Win_Ctrl_DWork.OpenDoor_Req_n);

  /* End of Outputs for SubSystem: '<S142>/OpenDoor_Req' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bFRDoorHSUSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_bFRDoorHSUSw'
   */
  Rte_Read_gASI_bFRDoorHSUSw_Val(&rtb_gASI_bFRDoorHSUSw);

  /* Outputs for Enabled SubSystem: '<S154>/Outside_Req' */
  /* Logic: '<S154>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay1'
   *  Logic: '<S154>/Logical Operator2'
   *  RelationalOperator: '<S154>/Equal'
   *  RelationalOperator: '<S154>/Equal1'
   */
  Win_Ctrl_Outside_Req(Win_Ctrl_B.gCFG_bFRDoorFramelessGlassCfg &&
                       (!rtb_gPRM_bPODRelsCinchFunEnCf_l) &&
                       (!bWinShrtDrpFlgTemp), tmpRead_m, rtb_gASI_bFRDoorHSUSw,
                       Win_Ctrl_B.u8WNDExecStatus_f,
                       &Win_Ctrl_B.u8WndCmdOutputReq_OutSide_g,
                       &Win_Ctrl_DWork.Outside_Req_a);

  /* End of Outputs for SubSystem: '<S154>/Outside_Req' */

  /* Outputs for Enabled SubSystem: '<S110>/CLDoor_Req' */
  /* Logic: '<S110>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay1'
   *  Logic: '<S110>/Logical Operator2'
   *  RelationalOperator: '<S110>/Equal'
   */
  Win_Ctrl_CLDoor_Req(Win_Ctrl_B.gCFG_bFRDoorFramelessGlassCfg &&
                      (!bWinShrtDrpFlgTemp), Win_Ctrl_B.gDoor_bFRDoorAjarSt,
                      rtb_gASI_bFRDoorHSUSw, Win_Ctrl_B.u8WNDExecStatus_f,
                      Win_Ctrl_B.TmpSignalConversionAtgNVM_bFRWi,
                      &Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_e,
                      &Win_Ctrl_DWork.CLDoor_Req_m);

  /* End of Outputs for SubSystem: '<S110>/CLDoor_Req' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8PWL_FRWinMotorTargetPstCtrOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8PWL_FRWinMotorTargetPstCtr'
   */
  Rte_Read_gCAN_u8PWL_FRWinMotorTargetPstCtr_Val
    (&Win_Ctrl_B.gCAN_u8PWL_FRWinMotorTargetPstC);

  /* Outputs for Atomic SubSystem: '<S91>/CCU_Req_FR' */
  /* DataTypeConversion: '<S74>/u8_bool9' incorporates:
   *  Constant: '<S1>/Constant60'
   *  Delay: '<S4>/Delay1'
   *  Delay: '<S74>/Delay10'
   *  Delay: '<S74>/Delay11'
   *  Delay: '<S74>/Delay8'
   *  Delay: '<S74>/Delay9'
   *  Outport: '<Root>/gWin_bFRDelayAdjSpdFlg'
   */
  Win_Ctrl_CCU_Req_FL(bWinShrtDrpFlgTemp, tmpRead_0, true,
                      Win_Ctrl_B.gCAN_u8PWL_FRWinMotorTargetPstC,
                      Win_Ctrl_B.gCFG_bFRDoorFramelessGlassCfg,
                      Win_Ctrl_B.u8WNDExecStatus_f, rtb_LogicalOperator,
                      Win_Ctrl_DWork.Delay8_DSTATE, Win_Ctrl_DWork.Delay9_DSTATE,
                      Win_Ctrl_DWork.Delay10_DSTATE,
                      Win_Ctrl_DWork.Delay11_DSTATE, &u8WndCmdOutputReq_FRCCU,
                      &rtb_OutportBufferForbManualUp_b, &bWinShrtDrpFlgTemp_g,
                      &Win_Ctrl_B.CCU_Req_FR, &Win_Ctrl_DWork.CCU_Req_FR);

  /* End of Outputs for SubSystem: '<S91>/CCU_Req_FR' */

  /* Outport: '<Root>/gWin_bFRDelayAdjSpdFlg' */
  (void) Rte_Write_gWin_bFRDelayAdjSpdFlg_Val(bWinShrtDrpFlgTemp_g);

  /* Switch: '<S76>/Switch2' incorporates:
   *  Switch: '<S76>/Switch3'
   *  Switch: '<S76>/Switch4'
   *  Switch: '<S76>/Switch5'
   *  Switch: '<S76>/Switch6'
   */
  if (Win_Ctrl_B.u8WndCmdOutputReq_SP_k != 0) {
    /* Outport: '<Root>/gWin_u8FRWNDCmd' */
    u8RRWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_SP_k;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_n != 0) {
    /* Switch: '<S76>/Switch3' incorporates:
     *  Outport: '<Root>/gWin_u8FRWNDCmd'
     */
    u8RRWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_n;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_a != 0) {
    /* Switch: '<S76>/Switch5' incorporates:
     *  Outport: '<Root>/gWin_u8FRWNDCmd'
     *  Switch: '<S76>/Switch3'
     */
    u8RRWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_a;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OutSide_g != 0) {
    /* Switch: '<S76>/Switch6' incorporates:
     *  Outport: '<Root>/gWin_u8FRWNDCmd'
     *  Switch: '<S76>/Switch3'
     *  Switch: '<S76>/Switch5'
     */
    u8RRWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_OutSide_g;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_e != 0) {
    /* Switch: '<S76>/Switch4' incorporates:
     *  Outport: '<Root>/gWin_u8FRWNDCmd'
     *  Switch: '<S76>/Switch3'
     *  Switch: '<S76>/Switch5'
     *  Switch: '<S76>/Switch6'
     */
    u8RRWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_e;
  } else {
    /* Outport: '<Root>/gWin_u8FRWNDCmd' incorporates:
     *  Switch: '<S76>/Switch3'
     *  Switch: '<S76>/Switch4'
     *  Switch: '<S76>/Switch5'
     *  Switch: '<S76>/Switch6'
     */
    u8RRWNDCmdSrc = u8WndCmdOutputReq_FRCCU;
  }

  /* End of Switch: '<S76>/Switch2' */

  /* Outport: '<Root>/gWin_u8FRWNDCmd' */
  (void) Rte_Write_gWin_u8FRWNDCmd_Val(u8RRWNDCmdSrc);

  /* Inport: '<Root>/gCAN_bPWL_FRWinRelearnReq' */
  Rte_Read_gCAN_bPWL_FRWinRelearnReq_Val(&rtb_OutportBufferForbManualUp_a);

  /* Inport: '<Root>/gSLC_bFRActiveFlg' */
  Rte_Read_gSLC_bFRActiveFlg_Val(&tmpRead_x);

  /* Inport: '<Root>/gPRM_u8FRPowerDoorReqWinOpenPst' */
  Rte_Read_gPRM_u8FRPowerDoorReqWinOpenPst_Val(&tmpRead_s);

  /* Inport: '<Root>/gCAN_u8POD_RLWinShortDropCmd' */
  Rte_Read_gCAN_u8POD_RLWinShortDropCmd_Val(&tmpRead_p);

  /* Inport: '<Root>/gLock_bRLDoorLockFbSt' */
  Rte_Read_gLock_bRLDoorLockFbSt_Val(&tmpRead_k);

  /* Inport: '<Root>/gSLC_bFRBDCSStopReq' */
  Rte_Read_gSLC_bFRBDCSStopReq_Val(&tmpRead_h);

  /* Inport: '<Root>/gSLC_bFRTDCSStopReq' */
  Rte_Read_gSLC_bFRTDCSStopReq_Val(&tmpRead_d);

  /* Inport: '<Root>/gCAN_u8PWL_RLWinMotorOpeCtr' */
  Rte_Read_gCAN_u8PWL_RLWinMotorOpeCtr_Val(&tmpRead_1);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDCU_bFRReverseFlagOutport1' incorporates:
   *  Inport: '<Root>/gDCU_bFRReverseFlag'
   */
  Rte_Read_gDCU_bFRReverseFlag_Val(&Win_Ctrl_B.gDCU_bFRReverseFlag);

  /* Logic: '<S1>/Logical Operator1' */
  Win_Ctrl_B.LogicalOperator1 = !Win_Ctrl_B.gDCU_bFRReverseFlag;

  /* Chart: '<S80>/SLC' incorporates:
   *  Outport: '<Root>/gWND_u8CurrentFRWinPst'
   *  Outport: '<Root>/gWin_u8FRWNDCmd'
   */
  Win_Ctrl_SLC(u8RRWNDCmdSrc, Win_Ctrl_B.gCAN_u8PWL_FRWinMotorTargetPstC,
               Win_Ctrl_B.gPRM_u8WndVentilationPst, u8RLWNDCmdSrc,
               Win_Ctrl_B.gPRM_u8FRWinShortDropPst, tmpRead_s,
               Win_Ctrl_B.bVoltDisableFlg, Win_Ctrl_B.OutportBufferForu8TPFlag_c,
               Win_Ctrl_B.gSLC_u8FRCurrtFixFlg, Win_Ctrl_B.gSLC_u8FRNormalizeSts,
               Win_Ctrl_B.gCFG_bFRDoorFramelessGlassCfg,
               Win_Ctrl_B.gDoor_bFRDoorAjarSt, Win_Ctrl_B.gDCU_bFRReverseFlag,
               Win_Ctrl_B.gSLC_bFRPositionLostFlg, Win_Ctrl_B.bWndOverRunTime_a,
               Win_Ctrl_B.LogicalOperator1, tmpRead_x,
               rtb_OutportBufferForbManualUp_a,
               Win_Ctrl_B.TmpSignalConversionAtgNVM_bFRWi, tmpRead_h, tmpRead_d,
               &Win_Ctrl_B.u8WNDExecReq_f, &bWinShrtDrpFlgTemp_g,
               &Win_Ctrl_B.u8PWL_WinOpeationSt_h, &Win_Ctrl_B.u8WNDExecStatus_f,
               &Win_Ctrl_B.bWinShrtDrpFlgWrtCntTemp_k, &Win_Ctrl_DWork.sf_SLC_k);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCFG_bRLDoorFramelessGlassCfgOutport1' incorporates:
   *  Inport: '<Root>/gCFG_bRLDoorFramelessGlassCfg'
   */
  Rte_Read_gCFG_bRLDoorFramelessGlassCfg_Val
    (&Win_Ctrl_B.gCFG_bRLDoorFramelessGlassCfg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_bPODRelsCinchFunEnCfgRLOutport1' incorporates:
   *  Inport: '<Root>/gPRM_bPODRelsCinchFunEnCfgRL'
   */
  Rte_Read_gPRM_bPODRelsCinchFunEnCfgRL_Val(&rtb_gPRM_bPODRelsCinchFunEnCfgR);

  /* Outputs for Enabled SubSystem: '<S127>/ElecDoor_Req' */
  /* Logic: '<S127>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay2'
   *  Logic: '<S127>/Logical Operator2'
   *  RelationalOperator: '<S127>/Equal'
   *  RelationalOperator: '<S127>/Equal1'
   */
  Win_Ctrl_ElecDoor_Req(Win_Ctrl_B.gCFG_bRLDoorFramelessGlassCfg &&
                        rtb_gPRM_bPODRelsCinchFunEnCfgR && (!bWinShrtDrpFlgTemp),
                        tmpRead_p, Win_Ctrl_B.u8WNDExecStatus_n,
                        &Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_i,
                        &Win_Ctrl_DWork.ElecDoor_Req_b);

  /* End of Outputs for SubSystem: '<S127>/ElecDoor_Req' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDoor_bRLDoorAjarStOutport1' incorporates:
   *  Inport: '<Root>/gDoor_bRLDoorAjarSt'
   */
  Rte_Read_gDoor_bRLDoorAjarSt_Val(&Win_Ctrl_B.gDoor_bRLDoorAjarSt);

  /* Outputs for Enabled SubSystem: '<S143>/OpenDoor_Req' */
  /* Logic: '<S143>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay2'
   *  Logic: '<S143>/Logical Operator2'
   *  RelationalOperator: '<S143>/Equal'
   */
  Win_Ctrl_OpenDoor_Req(Win_Ctrl_B.gCFG_bRLDoorFramelessGlassCfg &&
                        (!bWinShrtDrpFlgTemp), Win_Ctrl_B.gDoor_bRLDoorAjarSt,
                        Win_Ctrl_B.u8WNDExecStatus_n,
                        &Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_m,
                        &Win_Ctrl_DWork.OpenDoor_Req_m);

  /* End of Outputs for SubSystem: '<S143>/OpenDoor_Req' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bRLDoorHSUSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_bRLDoorHSUSw'
   */
  Rte_Read_gASI_bRLDoorHSUSw_Val(&rtb_gASI_bRLDoorHSUSw);

  /* Outputs for Enabled SubSystem: '<S155>/Outside_Req' */
  /* Logic: '<S155>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay2'
   *  Logic: '<S155>/Logical Operator2'
   *  RelationalOperator: '<S155>/Equal'
   *  RelationalOperator: '<S155>/Equal1'
   */
  Win_Ctrl_Outside_Req(Win_Ctrl_B.gCFG_bRLDoorFramelessGlassCfg &&
                       (!rtb_gPRM_bPODRelsCinchFunEnCfgR) &&
                       (!bWinShrtDrpFlgTemp), tmpRead_k, rtb_gASI_bRLDoorHSUSw,
                       Win_Ctrl_B.u8WNDExecStatus_n,
                       &Win_Ctrl_B.u8WndCmdOutputReq_OutSide_l,
                       &Win_Ctrl_DWork.Outside_Req_am);

  /* End of Outputs for SubSystem: '<S155>/Outside_Req' */

  /* Outputs for Enabled SubSystem: '<S111>/CLDoor_Req' */
  /* Logic: '<S111>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay2'
   *  Logic: '<S111>/Logical Operator2'
   *  RelationalOperator: '<S111>/Equal'
   */
  Win_Ctrl_CLDoor_Req(Win_Ctrl_B.gCFG_bRLDoorFramelessGlassCfg &&
                      (!bWinShrtDrpFlgTemp), Win_Ctrl_B.gDoor_bRLDoorAjarSt,
                      rtb_gASI_bRLDoorHSUSw, Win_Ctrl_B.u8WNDExecStatus_n,
                      Win_Ctrl_B.TmpSignalConversionAtgNVM_bRLWi,
                      &Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_l,
                      &Win_Ctrl_DWork.CLDoor_Req_mo);

  /* End of Outputs for SubSystem: '<S111>/CLDoor_Req' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8PWL_RLWinMotorTargetPstCtrOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8PWL_RLWinMotorTargetPstCtr'
   */
  Rte_Read_gCAN_u8PWL_RLWinMotorTargetPstCtr_Val
    (&Win_Ctrl_B.gCAN_u8PWL_RLWinMotorTargetPstC);

  /* Outputs for Atomic SubSystem: '<S91>/CCU_Req_RL' */
  /* DataTypeConversion: '<S74>/u8_bool9' incorporates:
   *  Constant: '<S1>/Constant61'
   *  Delay: '<S4>/Delay2'
   *  Delay: '<S74>/Delay12'
   *  Delay: '<S74>/Delay13'
   *  Delay: '<S74>/Delay14'
   *  Delay: '<S74>/Delay15'
   *  Outport: '<Root>/gWin_bRLDelayAdjSpdFlg'
   */
  Win_Ctrl_CCU_Req_FL(bWinShrtDrpFlgTemp, tmpRead_1, true,
                      Win_Ctrl_B.gCAN_u8PWL_RLWinMotorTargetPstC,
                      Win_Ctrl_B.gCFG_bRLDoorFramelessGlassCfg,
                      Win_Ctrl_B.u8WNDExecStatus_n, rtb_LogicalOperator1,
                      Win_Ctrl_DWork.Delay12_DSTATE,
                      Win_Ctrl_DWork.Delay13_DSTATE,
                      Win_Ctrl_DWork.Delay14_DSTATE,
                      Win_Ctrl_DWork.Delay15_DSTATE, &u8WndCmdOutputReq_RLCCU,
                      &rtb_OutportBufferForbManualUp_a, &bWinShrtDrpFlgTemp_h,
                      &Win_Ctrl_B.CCU_Req_RL, &Win_Ctrl_DWork.CCU_Req_RL);

  /* End of Outputs for SubSystem: '<S91>/CCU_Req_RL' */

  /* Outport: '<Root>/gWin_bRLDelayAdjSpdFlg' */
  (void) Rte_Write_gWin_bRLDelayAdjSpdFlg_Val(bWinShrtDrpFlgTemp_h);

  /* Switch: '<S76>/Switch7' incorporates:
   *  Switch: '<S76>/Switch11'
   *  Switch: '<S76>/Switch12'
   *  Switch: '<S76>/Switch13'
   *  Switch: '<S76>/Switch14'
   */
  if (Win_Ctrl_B.u8WndCmdOutputReq_SP_m != 0) {
    /* Outport: '<Root>/gWin_u8RLWNDCmd' */
    u8RLWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_SP_m;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_i != 0) {
    /* Switch: '<S76>/Switch11' incorporates:
     *  Outport: '<Root>/gWin_u8RLWNDCmd'
     */
    u8RLWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_i;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_m != 0) {
    /* Switch: '<S76>/Switch13' incorporates:
     *  Outport: '<Root>/gWin_u8RLWNDCmd'
     *  Switch: '<S76>/Switch11'
     */
    u8RLWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_m;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OutSide_l != 0) {
    /* Switch: '<S76>/Switch14' incorporates:
     *  Outport: '<Root>/gWin_u8RLWNDCmd'
     *  Switch: '<S76>/Switch11'
     *  Switch: '<S76>/Switch13'
     */
    u8RLWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_OutSide_l;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_l != 0) {
    /* Switch: '<S76>/Switch12' incorporates:
     *  Outport: '<Root>/gWin_u8RLWNDCmd'
     *  Switch: '<S76>/Switch11'
     *  Switch: '<S76>/Switch13'
     *  Switch: '<S76>/Switch14'
     */
    u8RLWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_l;
  } else {
    /* Outport: '<Root>/gWin_u8RLWNDCmd' incorporates:
     *  Switch: '<S76>/Switch11'
     *  Switch: '<S76>/Switch12'
     *  Switch: '<S76>/Switch13'
     *  Switch: '<S76>/Switch14'
     */
    u8RLWNDCmdSrc = u8WndCmdOutputReq_RLCCU;
  }

  /* End of Switch: '<S76>/Switch7' */

  /* Outport: '<Root>/gWin_u8RLWNDCmd' */
  (void) Rte_Write_gWin_u8RLWNDCmd_Val(u8RLWNDCmdSrc);

  /* Inport: '<Root>/gCAN_bPWL_RLWinRelearnReq' */
  Rte_Read_gCAN_bPWL_RLWinRelearnReq_Val(&rtb_OutportBufferForbManualUpFl);

  /* Inport: '<Root>/gSLC_bRLActiveFlg' */
  Rte_Read_gSLC_bRLActiveFlg_Val(&tmpRead_y);

  /* Inport: '<Root>/gPRM_u8RLPowerDoorReqWinOpenPst' */
  Rte_Read_gPRM_u8RLPowerDoorReqWinOpenPst_Val(&tmpRead_t);

  /* Inport: '<Root>/gCAN_u8POD_RRWinShortDropCmd' */
  Rte_Read_gCAN_u8POD_RRWinShortDropCmd_Val(&tmpRead_q);

  /* Inport: '<Root>/gLock_bRRDoorLockFbSt' */
  Rte_Read_gLock_bRRDoorLockFbSt_Val(&tmpRead_l);

  /* Inport: '<Root>/gSLC_bRLBDCSStopReq' */
  Rte_Read_gSLC_bRLBDCSStopReq_Val(&tmpRead_i);

  /* Inport: '<Root>/gSLC_bRLTDCSStopReq' */
  Rte_Read_gSLC_bRLTDCSStopReq_Val(&tmpRead_e);

  /* Inport: '<Root>/gCAN_u8PWL_RRWinMotorOpeCtr' */
  Rte_Read_gCAN_u8PWL_RRWinMotorOpeCtr_Val(&tmpRead_2);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDCU_bRLReverseFlagOutport1' incorporates:
   *  Inport: '<Root>/gDCU_bRLReverseFlag'
   */
  Rte_Read_gDCU_bRLReverseFlag_Val(&Win_Ctrl_B.gDCU_bRLReverseFlag);

  /* Logic: '<S1>/Logical Operator2' */
  Win_Ctrl_B.LogicalOperator2 = !Win_Ctrl_B.gDCU_bRLReverseFlag;

  /* Chart: '<S81>/SLC' incorporates:
   *  Outport: '<Root>/gWND_u8CurrentRLWinPst'
   *  Outport: '<Root>/gWin_u8RLWNDCmd'
   */
  Win_Ctrl_SLC(u8RLWNDCmdSrc, Win_Ctrl_B.gCAN_u8PWL_RLWinMotorTargetPstC,
               Win_Ctrl_B.gPRM_u8WndVentilationPst, u8FRWNDCmdSrc,
               Win_Ctrl_B.gPRM_u8RLWinShortDropPst, tmpRead_t,
               Win_Ctrl_B.bVoltDisableFlg, Win_Ctrl_B.OutportBufferForu8TPFlag_f,
               Win_Ctrl_B.gSLC_u8RLCurrtFixFlg, Win_Ctrl_B.gSLC_u8RLNormalizeSts,
               Win_Ctrl_B.gCFG_bRLDoorFramelessGlassCfg,
               Win_Ctrl_B.gDoor_bRLDoorAjarSt, Win_Ctrl_B.gDCU_bRLReverseFlag,
               Win_Ctrl_B.gSLC_bRLPositionLostFlg, Win_Ctrl_B.bWndOverRunTime_p,
               Win_Ctrl_B.LogicalOperator2, tmpRead_y,
               rtb_OutportBufferForbManualUpFl,
               Win_Ctrl_B.TmpSignalConversionAtgNVM_bRLWi, tmpRead_i, tmpRead_e,
               &Win_Ctrl_B.u8WNDExecReq_c, &bWinShrtDrpFlgTemp_h,
               &Win_Ctrl_B.u8PWL_WinOpeationSt_l, &Win_Ctrl_B.u8WNDExecStatus_n,
               &Win_Ctrl_B.bWinShrtDrpFlgWrtCntTemp_f, &Win_Ctrl_DWork.sf_SLC_o);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCFG_bRRDoorFramelessGlassCfgOutport1' incorporates:
   *  Inport: '<Root>/gCFG_bRRDoorFramelessGlassCfg'
   */
  Rte_Read_gCFG_bRRDoorFramelessGlassCfg_Val
    (&Win_Ctrl_B.gCFG_bRRDoorFramelessGlassCfg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_bPODRelsCinchFunEnCfgRROutport1' incorporates:
   *  Inport: '<Root>/gPRM_bPODRelsCinchFunEnCfgRR'
   */
  Rte_Read_gPRM_bPODRelsCinchFunEnCfgRR_Val(&rtb_gPRM_bPODRelsCinchFunEnCf_b);

  /* Outputs for Enabled SubSystem: '<S128>/ElecDoor_Req' */
  /* Logic: '<S128>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay3'
   *  Logic: '<S128>/Logical Operator2'
   *  RelationalOperator: '<S128>/Equal'
   *  RelationalOperator: '<S128>/Equal1'
   */
  Win_Ctrl_ElecDoor_Req(Win_Ctrl_B.gCFG_bRRDoorFramelessGlassCfg &&
                        rtb_gPRM_bPODRelsCinchFunEnCf_b && (!bWinShrtDrpFlgTemp),
                        tmpRead_q, Win_Ctrl_B.u8WNDExecStatus,
                        &Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor,
                        &Win_Ctrl_DWork.ElecDoor_Req_g);

  /* End of Outputs for SubSystem: '<S128>/ElecDoor_Req' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDoor_bRRDoorAjarStOutport1' incorporates:
   *  Inport: '<Root>/gDoor_bRRDoorAjarSt'
   */
  Rte_Read_gDoor_bRRDoorAjarSt_Val(&Win_Ctrl_B.gDoor_bRRDoorAjarSt);

  /* Outputs for Enabled SubSystem: '<S144>/OpenDoor_Req' */
  /* Logic: '<S144>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay3'
   *  Logic: '<S144>/Logical Operator2'
   *  RelationalOperator: '<S144>/Equal'
   */
  Win_Ctrl_OpenDoor_Req(Win_Ctrl_B.gCFG_bRRDoorFramelessGlassCfg &&
                        (!bWinShrtDrpFlgTemp), Win_Ctrl_B.gDoor_bRRDoorAjarSt,
                        Win_Ctrl_B.u8WNDExecStatus,
                        &Win_Ctrl_B.u8WndCmdOutputReq_OPDoor,
                        &Win_Ctrl_DWork.OpenDoor_Req_k);

  /* End of Outputs for SubSystem: '<S144>/OpenDoor_Req' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bRRDoorHSUSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_bRRDoorHSUSw'
   */
  Rte_Read_gASI_bRRDoorHSUSw_Val(&rtb_gASI_bRRDoorHSUSw);

  /* Outputs for Enabled SubSystem: '<S156>/Outside_Req' */
  /* Logic: '<S156>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay3'
   *  Logic: '<S156>/Logical Operator2'
   *  RelationalOperator: '<S156>/Equal'
   *  RelationalOperator: '<S156>/Equal1'
   */
  Win_Ctrl_Outside_Req(Win_Ctrl_B.gCFG_bRRDoorFramelessGlassCfg &&
                       (!rtb_gPRM_bPODRelsCinchFunEnCf_b) &&
                       (!bWinShrtDrpFlgTemp), tmpRead_l, rtb_gASI_bRRDoorHSUSw,
                       Win_Ctrl_B.u8WNDExecStatus,
                       &Win_Ctrl_B.u8WndCmdOutputReq_OutSide,
                       &Win_Ctrl_DWork.Outside_Req_h);

  /* End of Outputs for SubSystem: '<S156>/Outside_Req' */

  /* Outputs for Enabled SubSystem: '<S112>/CLDoor_Req' */
  /* Logic: '<S112>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S74>/u8_bool9'
   *  Delay: '<S4>/Delay3'
   *  Logic: '<S112>/Logical Operator2'
   *  RelationalOperator: '<S112>/Equal'
   */
  Win_Ctrl_CLDoor_Req(Win_Ctrl_B.gCFG_bRRDoorFramelessGlassCfg &&
                      (!bWinShrtDrpFlgTemp), Win_Ctrl_B.gDoor_bRRDoorAjarSt,
                      rtb_gASI_bRRDoorHSUSw, Win_Ctrl_B.u8WNDExecStatus,
                      Win_Ctrl_B.TmpSignalConversionAtgNVM_bRRWi,
                      &Win_Ctrl_B.u8WndCmdOutputReq_CLDoor,
                      &Win_Ctrl_DWork.CLDoor_Req_i);

  /* End of Outputs for SubSystem: '<S112>/CLDoor_Req' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8PWL_RRWinMotorTargetPstCtrOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8PWL_RRWinMotorTargetPstCtr'
   */
  Rte_Read_gCAN_u8PWL_RRWinMotorTargetPstCtr_Val
    (&Win_Ctrl_B.gCAN_u8PWL_RRWinMotorTargetPstC);

  /* Outputs for Atomic SubSystem: '<S91>/CCU_Req_RR' */
  /* DataTypeConversion: '<S74>/u8_bool9' incorporates:
   *  Constant: '<S1>/Constant62'
   *  Delay: '<S4>/Delay3'
   *  Delay: '<S74>/Delay'
   *  Delay: '<S74>/Delay1'
   *  Delay: '<S74>/Delay2'
   *  Delay: '<S74>/Delay3'
   *  Outport: '<Root>/gWin_bRRDelayAdjSpdFlg'
   */
  Win_Ctrl_CCU_Req_FL(bWinShrtDrpFlgTemp, tmpRead_2, true,
                      Win_Ctrl_B.gCAN_u8PWL_RRWinMotorTargetPstC,
                      Win_Ctrl_B.gCFG_bRRDoorFramelessGlassCfg,
                      Win_Ctrl_B.u8WNDExecStatus, bManualUpFlg_SP_d,
                      Win_Ctrl_DWork.Delay_DSTATE_p1,
                      Win_Ctrl_DWork.Delay1_DSTATE_f,
                      Win_Ctrl_DWork.Delay2_DSTATE_i,
                      Win_Ctrl_DWork.Delay3_DSTATE_f, &u8WndCmdOutputReq_RRCCU,
                      &rtb_OutportBufferForbManualUpFl, &tmpWrite_5,
                      &Win_Ctrl_B.CCU_Req_RR, &Win_Ctrl_DWork.CCU_Req_RR);

  /* End of Outputs for SubSystem: '<S91>/CCU_Req_RR' */

  /* Outport: '<Root>/gWin_bRRDelayAdjSpdFlg' */
  (void) Rte_Write_gWin_bRRDelayAdjSpdFlg_Val(tmpWrite_5);

  /* Switch: '<S76>/Switch15' incorporates:
   *  Switch: '<S76>/Switch16'
   *  Switch: '<S76>/Switch17'
   *  Switch: '<S76>/Switch18'
   *  Switch: '<S76>/Switch19'
   */
  if (Win_Ctrl_B.u8WndCmdOutputReq_SP != 0) {
    /* Outport: '<Root>/gWin_u8RRWNDCmd' */
    u8FRWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_SP;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor != 0) {
    /* Switch: '<S76>/Switch16' incorporates:
     *  Outport: '<Root>/gWin_u8RRWNDCmd'
     */
    u8FRWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OPDoor != 0) {
    /* Switch: '<S76>/Switch18' incorporates:
     *  Outport: '<Root>/gWin_u8RRWNDCmd'
     *  Switch: '<S76>/Switch16'
     */
    u8FRWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_OPDoor;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_OutSide != 0) {
    /* Switch: '<S76>/Switch19' incorporates:
     *  Outport: '<Root>/gWin_u8RRWNDCmd'
     *  Switch: '<S76>/Switch16'
     *  Switch: '<S76>/Switch18'
     */
    u8FRWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_OutSide;
  } else if (Win_Ctrl_B.u8WndCmdOutputReq_CLDoor != 0) {
    /* Switch: '<S76>/Switch17' incorporates:
     *  Outport: '<Root>/gWin_u8RRWNDCmd'
     *  Switch: '<S76>/Switch16'
     *  Switch: '<S76>/Switch18'
     *  Switch: '<S76>/Switch19'
     */
    u8FRWNDCmdSrc = Win_Ctrl_B.u8WndCmdOutputReq_CLDoor;
  } else {
    /* Outport: '<Root>/gWin_u8RRWNDCmd' incorporates:
     *  Switch: '<S76>/Switch16'
     *  Switch: '<S76>/Switch17'
     *  Switch: '<S76>/Switch18'
     *  Switch: '<S76>/Switch19'
     */
    u8FRWNDCmdSrc = u8WndCmdOutputReq_RRCCU;
  }

  /* End of Switch: '<S76>/Switch15' */

  /* Outport: '<Root>/gWin_u8RRWNDCmd' */
  (void) Rte_Write_gWin_u8RRWNDCmd_Val(u8FRWNDCmdSrc);

  /* Inport: '<Root>/gCAN_bPWL_RRWinRelearnReq' */
  Rte_Read_gCAN_bPWL_RRWinRelearnReq_Val(&tmpRead_10);

  /* Inport: '<Root>/gSLC_bRRActiveFlg' */
  Rte_Read_gSLC_bRRActiveFlg_Val(&tmpRead_z);

  /* Inport: '<Root>/gPRM_u8RRPowerDoorReqWinOpenPst' */
  Rte_Read_gPRM_u8RRPowerDoorReqWinOpenPst_Val(&tmpRead_u);

  /* Inport: '<Root>/gSLC_bRRBDCSStopReq' */
  Rte_Read_gSLC_bRRBDCSStopReq_Val(&tmpRead_j);

  /* Inport: '<Root>/gSLC_bRRTDCSStopReq' */
  Rte_Read_gSLC_bRRTDCSStopReq_Val(&tmpRead_f);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDCU_bRRReverseFlagOutport1' incorporates:
   *  Inport: '<Root>/gDCU_bRRReverseFlag'
   */
  Rte_Read_gDCU_bRRReverseFlag_Val(&Win_Ctrl_B.gDCU_bRRReverseFlag);

  /* Logic: '<S1>/Logical Operator3' */
  Win_Ctrl_B.LogicalOperator3 = !Win_Ctrl_B.gDCU_bRRReverseFlag;

  /* Chart: '<S82>/SLC' incorporates:
   *  Outport: '<Root>/gWND_u8CurrentRRWinPst'
   *  Outport: '<Root>/gWin_u8RRWNDCmd'
   */
  Win_Ctrl_SLC(u8FRWNDCmdSrc, Win_Ctrl_B.gCAN_u8PWL_RRWinMotorTargetPstC,
               Win_Ctrl_B.gPRM_u8WndVentilationPst, u8FLWNDCmdSrc,
               Win_Ctrl_B.gPRM_u8RRWinShortDropPst, tmpRead_u,
               Win_Ctrl_B.bVoltDisableFlg, Win_Ctrl_B.OutportBufferForu8TPFlag,
               Win_Ctrl_B.gSLC_u8RRCurrtFixFlg, Win_Ctrl_B.gSLC_u8RRNormalizeSts,
               Win_Ctrl_B.gCFG_bRRDoorFramelessGlassCfg,
               Win_Ctrl_B.gDoor_bRRDoorAjarSt, Win_Ctrl_B.gDCU_bRRReverseFlag,
               Win_Ctrl_B.gSLC_bRRPositionLostFlg, Win_Ctrl_B.bWndOverRunTime,
               Win_Ctrl_B.LogicalOperator3, tmpRead_z, tmpRead_10,
               Win_Ctrl_B.TmpSignalConversionAtgNVM_bRRWi, tmpRead_j, tmpRead_f,
               &Win_Ctrl_B.u8WNDExecReq, &bWinShrtDrpFlgTemp,
               &Win_Ctrl_B.u8PWL_WinOpeationSt, &Win_Ctrl_B.u8WNDExecStatus,
               &Win_Ctrl_B.bWinShrtDrpFlgWrtCntTemp, &Win_Ctrl_DWork.sf_SLC_h);

  /* Chart: '<S71>/StartAtDiffTime' incorporates:
   *  Constant: '<S71>/Constant1'
   */
  if (Win_Ctrl_DWork.temporalCounter_i1_b < 255U) {
    Win_Ctrl_DWork.temporalCounter_i1_b++;
  }

  if (Win_Ctrl_DWork.is_active_c2_Win_Ctrl == 0U) {
    Win_Ctrl_DWork.is_active_c2_Win_Ctrl = 1U;
    Win_Ctrl_DWork.is_Output_Set = Win_Ctrl_IN_START_ENABLE;
  } else {
    if ((Win_Ctrl_B.u8WNDExecReq_g != 1) && (Win_Ctrl_B.u8WNDExecReq_g != 2)) {
      Win_Ctrl_DWork.bFLUpOutput = false;
    }

    if ((Win_Ctrl_B.u8WNDExecReq_g != 3) && (Win_Ctrl_B.u8WNDExecReq_g != 4)) {
      Win_Ctrl_DWork.bFLDnOutput = false;
    }

    if ((Win_Ctrl_B.u8WNDExecReq_f != 1) && (Win_Ctrl_B.u8WNDExecReq_f != 2)) {
      Win_Ctrl_DWork.bFRUpOutput = false;
    }

    if ((Win_Ctrl_B.u8WNDExecReq_f != 3) && (Win_Ctrl_B.u8WNDExecReq_f != 4)) {
      Win_Ctrl_DWork.bFRDnOutput = false;
    }

    if ((Win_Ctrl_B.u8WNDExecReq_c != 1) && (Win_Ctrl_B.u8WNDExecReq_c != 2)) {
      Win_Ctrl_DWork.bRLUpOutput = false;
    }

    if ((Win_Ctrl_B.u8WNDExecReq_c != 3) && (Win_Ctrl_B.u8WNDExecReq_c != 4)) {
      Win_Ctrl_DWork.bRLDnOutput = false;
    }

    if ((Win_Ctrl_B.u8WNDExecReq != 1) && (Win_Ctrl_B.u8WNDExecReq != 2)) {
      Win_Ctrl_DWork.bRRUpOutput = false;
    }

    if ((Win_Ctrl_B.u8WNDExecReq != 3) && (Win_Ctrl_B.u8WNDExecReq != 4)) {
      Win_Ctrl_DWork.bRRDnOutput = false;
    }

    if (Win_Ctrl_DWork.is_Output_Set == Win_Ctrl_IN_START_DISABLE) {
      if ((Win_Ctrl_DWork.temporalCounter_i1_b >= 10) ||
          ((Win_Ctrl_DWork.u8OutputRec == 1) && (!Win_Ctrl_DWork.bFLUpOutput) &&
           (!Win_Ctrl_DWork.bFLDnOutput)) || ((Win_Ctrl_DWork.u8OutputRec == 2) &&
           (!Win_Ctrl_DWork.bFRUpOutput) && (!Win_Ctrl_DWork.bFRDnOutput)) ||
          ((Win_Ctrl_DWork.u8OutputRec == 3) && (!Win_Ctrl_DWork.bRLUpOutput) &&
           (!Win_Ctrl_DWork.bRLDnOutput)) || ((Win_Ctrl_DWork.u8OutputRec == 4) &&
           (!Win_Ctrl_DWork.bRRUpOutput) && (!Win_Ctrl_DWork.bRRDnOutput))) {
        Win_Ctrl_DWork.is_Output_Set = Win_Ctrl_IN_START_ENABLE;
      }
    } else {
      guard1 = false;
      if ((!Win_Ctrl_DWork.bFLUpOutput) && ((Win_Ctrl_B.u8WNDExecReq_g == 1) ||
           (Win_Ctrl_B.u8WNDExecReq_g == 2))) {
        Win_Ctrl_DWork.bFLUpOutput = true;
        Win_Ctrl_DWork.u8OutputRec = 1U;
        guard1 = true;
      } else if ((!Win_Ctrl_DWork.bFLDnOutput) && ((Win_Ctrl_B.u8WNDExecReq_g ==
        3) || (Win_Ctrl_B.u8WNDExecReq_g == 4))) {
        Win_Ctrl_DWork.bFLDnOutput = true;
        Win_Ctrl_DWork.u8OutputRec = 1U;
        guard1 = true;
      } else if ((!Win_Ctrl_DWork.bFRUpOutput) && ((Win_Ctrl_B.u8WNDExecReq_f ==
        1) || (Win_Ctrl_B.u8WNDExecReq_f == 2))) {
        Win_Ctrl_DWork.bFRUpOutput = true;
        Win_Ctrl_DWork.u8OutputRec = 2U;
        guard1 = true;
      } else if ((!Win_Ctrl_DWork.bFRDnOutput) && ((Win_Ctrl_B.u8WNDExecReq_f ==
        3) || (Win_Ctrl_B.u8WNDExecReq_f == 4))) {
        Win_Ctrl_DWork.bFRDnOutput = true;
        Win_Ctrl_DWork.u8OutputRec = 2U;
        guard1 = true;
      } else if ((!Win_Ctrl_DWork.bRLUpOutput) && ((Win_Ctrl_B.u8WNDExecReq_c ==
        1) || (Win_Ctrl_B.u8WNDExecReq_c == 2))) {
        Win_Ctrl_DWork.bRLUpOutput = true;
        Win_Ctrl_DWork.u8OutputRec = 3U;
        guard1 = true;
      } else if ((!Win_Ctrl_DWork.bRLDnOutput) && ((Win_Ctrl_B.u8WNDExecReq_c ==
        3) || (Win_Ctrl_B.u8WNDExecReq_c == 4))) {
        Win_Ctrl_DWork.bRLDnOutput = true;
        Win_Ctrl_DWork.u8OutputRec = 3U;
        guard1 = true;
      } else if ((!Win_Ctrl_DWork.bRRUpOutput) && ((Win_Ctrl_B.u8WNDExecReq == 1)
                  || (Win_Ctrl_B.u8WNDExecReq == 2))) {
        Win_Ctrl_DWork.bRRUpOutput = true;
        Win_Ctrl_DWork.u8OutputRec = 4U;
        guard1 = true;
      } else {
        if ((!Win_Ctrl_DWork.bRRDnOutput) && ((Win_Ctrl_B.u8WNDExecReq == 3) ||
             (Win_Ctrl_B.u8WNDExecReq == 4))) {
          Win_Ctrl_DWork.bRRDnOutput = true;
          Win_Ctrl_DWork.u8OutputRec = 4U;
          guard1 = true;
        }
      }

      if (guard1) {
        Win_Ctrl_DWork.is_Output_Set = Win_Ctrl_IN_START_DISABLE;
        Win_Ctrl_DWork.temporalCounter_i1_b = 0U;
      }
    }

    Win_Ctrl_B.u8FLOutputSts = 0U;
    Win_Ctrl_B.u8FROutputSts = 0U;
    Win_Ctrl_B.u8RLOutputSts = 0U;
    Win_Ctrl_B.u8RROutputSts = 0U;
    if (Win_Ctrl_DWork.bFLUpOutput || Win_Ctrl_DWork.bFLDnOutput) {
      Win_Ctrl_B.u8FLOutputSts = Win_Ctrl_B.u8WNDExecReq_g;
    }

    if (Win_Ctrl_DWork.bFRUpOutput || Win_Ctrl_DWork.bFRDnOutput) {
      Win_Ctrl_B.u8FROutputSts = Win_Ctrl_B.u8WNDExecReq_f;
    }

    if (Win_Ctrl_DWork.bRLUpOutput || Win_Ctrl_DWork.bRLDnOutput) {
      Win_Ctrl_B.u8RLOutputSts = Win_Ctrl_B.u8WNDExecReq_c;
    }

    if (Win_Ctrl_DWork.bRRUpOutput || Win_Ctrl_DWork.bRRDnOutput) {
      Win_Ctrl_B.u8RROutputSts = Win_Ctrl_B.u8WNDExecReq;
    }
  }

  /* End of Chart: '<S71>/StartAtDiffTime' */

  /* Chart: '<S77>/WNDCmdSrc' */
  if (Win_Ctrl_DWork.is_active_c3_Win_Ctrl == 0U) {
    Win_Ctrl_DWork.is_active_c3_Win_Ctrl = 1U;
    Win_Ctrl_inner_default_FL(&u8FLWNDCmdSrc);
    Win_Ctrl_inner_default_FR(&u8FRWNDCmdSrc);
    Win_Ctrl_inner_default_RL(&u8RLWNDCmdSrc);
    Win_Ctrl_inner_default_RR(&u8RRWNDCmdSrc);
  } else {
    Win_Ctrl_inner_default_FL(&u8FLWNDCmdSrc);
    Win_Ctrl_inner_default_FR(&u8FRWNDCmdSrc);
    Win_Ctrl_inner_default_RL(&u8RLWNDCmdSrc);
    Win_Ctrl_inner_default_RR(&u8RRWNDCmdSrc);
  }

  /* End of Chart: '<S77>/WNDCmdSrc' */

  /* DataStoreWrite: '<S1>/gWND_u8RRWinOutput_Write' incorporates:
   *  Inport: '<Root>/gWND_u8RRWinOutput'
   */
  Rte_Read_gWND_u8RRWinOutput_Val(&Win_Ctrl_DWork.gWND_u8RRWinOutput_inWin);

  /* DataStoreWrite: '<S1>/gWND_u8RLWinOutput_Write' incorporates:
   *  Inport: '<Root>/gWND_u8RLWinOutput'
   */
  Rte_Read_gWND_u8RLWinOutput_Val(&Win_Ctrl_DWork.gWND_u8RLWinOutput_inWin);

  /* DataStoreWrite: '<S1>/gWND_u8PsgWinOutput_Write' incorporates:
   *  Inport: '<Root>/gWND_u8PsgWinOutput'
   */
  Rte_Read_gWND_u8PsgWinOutput_Val(&Win_Ctrl_DWork.gWND_u8PsgWinOutput_inWin);

  /* DataStoreWrite: '<S1>/gWND_u8DrvWinOutput_Write' incorporates:
   *  Inport: '<Root>/gWND_u8DrvWinOutput'
   */
  Rte_Read_gWND_u8DrvWinOutput_Val(&Win_Ctrl_DWork.gWND_u8DrvWinOutput_inWin);

  /* DataStoreWrite: '<S1>/gASI_bPowerOnReset_Write' incorporates:
   *  Inport: '<Root>/gASI_bPowerOnReset'
   */
  Rte_Read_gASI_bPowerOnReset_Val(&Win_Ctrl_DWork.gASI_bPowerOnReset_inWin);

  /* DataStoreWrite: '<S1>/gPRM_u8WndLckLEDPWM_Lv2_Write' incorporates:
   *  Inport: '<Root>/gPRM_u8WndLckLEDPWM_Lv2'
   */
  Rte_Read_gPRM_u8WndLckLEDPWM_Lv2_Val
    (&Win_Ctrl_DWork.gPRM_u8WndLckLEDPWM_Lv2_inWin);

  /* DataStoreWrite: '<S1>/gPRM_u8WndLckLEDPWM_Lv1_Write' incorporates:
   *  Inport: '<Root>/gPRM_u8WndLckLEDPWM_Lv1'
   */
  Rte_Read_gPRM_u8WndLckLEDPWM_Lv1_Val
    (&Win_Ctrl_DWork.gPRM_u8WndLckLEDPWM_Lv1_inWin);

  /* DataStoreWrite: '<S1>/gCFG_u8PwrRelsType_Write' incorporates:
   *  Inport: '<Root>/gCFG_u8PwrRelsType'
   */
  Rte_Read_gCFG_u8PwrRelsType_Val(&Win_Ctrl_DWork.gCFG_u8PwrRelsType_inWin);

  /* DataStoreWrite: '<S1>/Data Store Write51' incorporates:
   *  Inport: '<Root>/gSLC_bRRIsInAPRange'
   */
  Rte_Read_gSLC_bRRIsInAPRange_Val(&gSLC_bRRIsInAPRangeRTE);

  /* DataStoreWrite: '<S1>/Data Store Write50' incorporates:
   *  Inport: '<Root>/gSLC_bRLIsInAPRange'
   */
  Rte_Read_gSLC_bRLIsInAPRange_Val(&gSLC_bRLIsInAPRangeRTE);

  /* DataStoreWrite: '<S1>/Data Store Write49' incorporates:
   *  Inport: '<Root>/gSLC_bFRIsInAPRange'
   */
  Rte_Read_gSLC_bFRIsInAPRange_Val(&gSLC_bFRIsInAPRangeRTE);

  /* DataStoreWrite: '<S1>/Data Store Write48' incorporates:
   *  Inport: '<Root>/gSLC_bFLIsInAPRange'
   */
  Rte_Read_gSLC_bFLIsInAPRange_Val(&gSLC_bFLIsInAPRangeRTE);

  /* DataStoreWrite: '<S1>/gSLC_bRRAPHappen_Write' incorporates:
   *  Inport: '<Root>/gSLC_bRRAPHappen'
   */
  Rte_Read_gSLC_bRRAPHappen_Val(&Win_Ctrl_DWork.gSLC_bRRAPHappen_inWin);

  /* DataStoreWrite: '<S1>/gSLC_bRLAPHappen_Write' incorporates:
   *  Inport: '<Root>/gSLC_bRLAPHappen'
   */
  Rte_Read_gSLC_bRLAPHappen_Val(&Win_Ctrl_DWork.gSLC_bRLAPHappen_inWin);

  /* DataStoreWrite: '<S1>/gSLC_bFRAPHappen_Write' incorporates:
   *  Inport: '<Root>/gSLC_bFRAPHappen'
   */
  Rte_Read_gSLC_bFRAPHappen_Val(&Win_Ctrl_DWork.gSLC_bFRAPHappen_inWin);

  /* DataStoreWrite: '<S1>/gSLC_bFLAPHappen_Write' incorporates:
   *  Inport: '<Root>/gSLC_bFLAPHappen'
   */
  Rte_Read_gSLC_bFLAPHappen_Val(&Win_Ctrl_DWork.gSLC_bFLAPHappen_inWin);

  /* DataStoreWrite: '<S1>/gCAN_u8UMM_UsageModeSt_Write' incorporates:
   *  Inport: '<Root>/gCAN_u8UMM_UsageModeSt'
   */
  Rte_Read_gCAN_u8UMM_UsageModeSt_Val
    (&Win_Ctrl_DWork.gCAN_u8UMM_UsageModeSt_inWin);

  /* Chart: '<S79>/EEPWriteShortFlag' incorporates:
   *  Delay: '<S79>/Delay'
   */
  Win_Ctrl_EEPWriteShortFlag(Win_Ctrl_DWork.Delay_DSTATE_d,
    Win_Ctrl_B.bWinShrtDrpFlgWrtCntTemp_i, Win_Ctrl_B.u8WNDExecReq_g,
    Win_Ctrl_B.TmpSignalConversionAtgNVM_bFLWi, &Win_Ctrl_B.bWinShrtDrpFlg_i,
    &Win_Ctrl_B.bWinShrtDrpFlgWrtCnt_d, &Win_Ctrl_DWork.sf_EEPWriteShortFlag);

  /* Chart: '<S80>/EEPWriteShortFlag' incorporates:
   *  Delay: '<S80>/Delay'
   */
  Win_Ctrl_EEPWriteShortFlag(Win_Ctrl_DWork.Delay_DSTATE_o,
    Win_Ctrl_B.bWinShrtDrpFlgWrtCntTemp_k, Win_Ctrl_B.u8WNDExecReq_f,
    Win_Ctrl_B.TmpSignalConversionAtgNVM_bFRWi, &Win_Ctrl_B.bWinShrtDrpFlg_d,
    &Win_Ctrl_B.bWinShrtDrpFlgWrtCnt_l, &Win_Ctrl_DWork.sf_EEPWriteShortFlag_m);

  /* Chart: '<S81>/EEPWriteShortFlag' incorporates:
   *  Delay: '<S81>/Delay'
   */
  Win_Ctrl_EEPWriteShortFlag(Win_Ctrl_DWork.Delay_DSTATE_pr,
    Win_Ctrl_B.bWinShrtDrpFlgWrtCntTemp_f, Win_Ctrl_B.u8WNDExecReq_c,
    Win_Ctrl_B.TmpSignalConversionAtgNVM_bRLWi, &Win_Ctrl_B.bWinShrtDrpFlg_h,
    &Win_Ctrl_B.bWinShrtDrpFlgWrtCnt_n, &Win_Ctrl_DWork.sf_EEPWriteShortFlag_n);

  /* Chart: '<S82>/EEPWriteShortFlag' incorporates:
   *  Delay: '<S82>/Delay'
   */
  Win_Ctrl_EEPWriteShortFlag(Win_Ctrl_DWork.Delay_DSTATE_j,
    Win_Ctrl_B.bWinShrtDrpFlgWrtCntTemp, Win_Ctrl_B.u8WNDExecReq,
    Win_Ctrl_B.TmpSignalConversionAtgNVM_bRRWi, &Win_Ctrl_B.bWinShrtDrpFlg,
    &Win_Ctrl_B.bWinShrtDrpFlgWrtCnt, &Win_Ctrl_DWork.sf_EEPWriteShortFlag_nl);

  /* Outport: '<Root>/gWin_bRRWinShrtDrpFlg' */
  (void) Rte_Write_gWin_bRRWinShrtDrpFlg_Val(Win_Ctrl_B.bWinShrtDrpFlg);

  /* Outport: '<Root>/gWin_bRRWinShrtDrpFlgWrtCnt' */
  (void) Rte_Write_gWin_bRRWinShrtDrpFlgWrtCnt_Val
    (Win_Ctrl_B.bWinShrtDrpFlgWrtCnt);

  /* Outport: '<Root>/gWin_bRLWinShrtDrpFlg' */
  (void) Rte_Write_gWin_bRLWinShrtDrpFlg_Val(Win_Ctrl_B.bWinShrtDrpFlg_h);

  /* Outport: '<Root>/gWin_bRLWinShrtDrpFlgWrtCnt' */
  (void) Rte_Write_gWin_bRLWinShrtDrpFlgWrtCnt_Val
    (Win_Ctrl_B.bWinShrtDrpFlgWrtCnt_n);

  /* Outport: '<Root>/gWin_bFRWinShrtDrpFlg' */
  (void) Rte_Write_gWin_bFRWinShrtDrpFlg_Val(Win_Ctrl_B.bWinShrtDrpFlg_d);

  /* Outport: '<Root>/gWin_bFRWinShrtDrpFlgWrtCnt' */
  (void) Rte_Write_gWin_bFRWinShrtDrpFlgWrtCnt_Val
    (Win_Ctrl_B.bWinShrtDrpFlgWrtCnt_l);

  /* Outport: '<Root>/gWin_bFLWinShrtDrpFlg' */
  (void) Rte_Write_gWin_bFLWinShrtDrpFlg_Val(Win_Ctrl_B.bWinShrtDrpFlg_i);

  /* Outport: '<Root>/gWin_bFLWinShrtDrpFlgWrtCnt' */
  (void) Rte_Write_gWin_bFLWinShrtDrpFlgWrtCnt_Val
    (Win_Ctrl_B.bWinShrtDrpFlgWrtCnt_d);

  /* Outport: '<Root>/gWin_u8FLWNDCmdSrc' */
  (void) Rte_Write_gWin_u8FLWNDCmdSrc_Val(u8FLWNDCmdSrc);

  /* Outport: '<Root>/gWin_u8FRWNDCmdSrc' */
  (void) Rte_Write_gWin_u8FRWNDCmdSrc_Val(u8FRWNDCmdSrc);

  /* Outport: '<Root>/gWin_u8RLWNDCmdSrc' */
  (void) Rte_Write_gWin_u8RLWNDCmdSrc_Val(u8RLWNDCmdSrc);

  /* Outport: '<Root>/gWin_u8RRWNDCmdSrc' */
  (void) Rte_Write_gWin_u8RRWNDCmdSrc_Val(u8RRWNDCmdSrc);

  /* Outport: '<Root>/gWin_u8FLOutputSts' */
  (void) Rte_Write_gWin_u8FLOutputSts_Val(Win_Ctrl_B.u8FLOutputSts);

  /* Outport: '<Root>/gWin_u8FROutputSts' */
  (void) Rte_Write_gWin_u8FROutputSts_Val(Win_Ctrl_B.u8FROutputSts);

  /* Outport: '<Root>/gWin_u8RLOutputSts' */
  (void) Rte_Write_gWin_u8RLOutputSts_Val(Win_Ctrl_B.u8RLOutputSts);

  /* Outport: '<Root>/gWin_u8RROutputSts' */
  (void) Rte_Write_gWin_u8RROutputSts_Val(Win_Ctrl_B.u8RROutputSts);

  /* Outport: '<Root>/gWin_u8RRWNDExecReq' */
  (void) Rte_Write_gWin_u8RRWNDExecReq_Val(Win_Ctrl_B.u8WNDExecReq);

  /* Outport: '<Root>/gWin_u8PWL_WinOpeationSt_RRWinSt' */
  (void) Rte_Write_gWin_u8PWL_WinOpeationSt_RRWinSt_Val
    (Win_Ctrl_B.u8PWL_WinOpeationSt);

  /* Outport: '<Root>/gWND_bRRDoorOutsideSwSt' incorporates:
   *  Gain: '<S1>/Gain10'
   */
  (void) Rte_Write_gWND_bRRDoorOutsideSwSt_Val(rtb_gASI_bRRDoorHSUSw);

  /* Outport: '<Root>/gWin_u8RLWNDExecReq' */
  (void) Rte_Write_gWin_u8RLWNDExecReq_Val(Win_Ctrl_B.u8WNDExecReq_c);

  /* Outport: '<Root>/gWin_u8PWL_WinOpeationSt_RLWinSt' */
  (void) Rte_Write_gWin_u8PWL_WinOpeationSt_RLWinSt_Val
    (Win_Ctrl_B.u8PWL_WinOpeationSt_l);

  /* Outport: '<Root>/gWND_bRLDoorOutsideSwSt' incorporates:
   *  Gain: '<S1>/Gain6'
   */
  (void) Rte_Write_gWND_bRLDoorOutsideSwSt_Val(rtb_gASI_bRLDoorHSUSw);

  /* Outport: '<Root>/gWin_u8FRWNDExecReq' */
  (void) Rte_Write_gWin_u8FRWNDExecReq_Val(Win_Ctrl_B.u8WNDExecReq_f);

  /* Outport: '<Root>/gWin_u8PWL_WinOpeationSt_FRWinSt' */
  (void) Rte_Write_gWin_u8PWL_WinOpeationSt_FRWinSt_Val
    (Win_Ctrl_B.u8PWL_WinOpeationSt_h);

  /* Outport: '<Root>/gWin_bUINM_FRDoorOutsideSwSt' incorporates:
   *  Gain: '<S1>/Gain33'
   */
  (void) Rte_Write_gWin_bUINM_FRDoorOutsideSwSt_Val(rtb_gASI_bFRDoorHSUSw);

  /* Outport: '<Root>/gWin_u8FLWNDExecReq' */
  (void) Rte_Write_gWin_u8FLWNDExecReq_Val(Win_Ctrl_B.u8WNDExecReq_g);

  /* Outport: '<Root>/gWin_u8PWL_WinOpeationSt_FLWinSt' */
  (void) Rte_Write_gWin_u8PWL_WinOpeationSt_FLWinSt_Val
    (Win_Ctrl_B.u8PWL_WinOpeationSt_i);

  /* Outport: '<Root>/gWin_bUINM_FLDoorOutsideSwSt' incorporates:
   *  Gain: '<S1>/Gain34'
   */
  (void) Rte_Write_gWin_bUINM_FLDoorOutsideSwSt_Val(rtb_gASI_bFLDoorHSUSw);

  /* Outport: '<Root>/gWND_bRRNormStartFlg' */
  (void) Rte_Write_gWND_bRRNormStartFlg_Val(Win_Ctrl_B.bNormStartFlg);

  /* Outport: '<Root>/gWND_bRLNormStartFlg' */
  (void) Rte_Write_gWND_bRLNormStartFlg_Val(Win_Ctrl_B.bNormStartFlg_a);

  /* Outport: '<Root>/gWND_bFRNormStartFlg' */
  (void) Rte_Write_gWND_bFRNormStartFlg_Val(Win_Ctrl_B.bNormStartFlg_l);

  /* Outport: '<Root>/gWND_bFLNormStartFlg' */
  (void) Rte_Write_gWND_bFLNormStartFlg_Val(Win_Ctrl_B.bNormStartFlg_m);

  /* Outport: '<Root>/gWND_bRRDnOutputWinSt' */
  (void) Rte_Write_gWND_bRRDnOutputWinSt_Val(rtb_gDCU_bRRWinDownOutput);

  /* Outport: '<Root>/gWND_bRRUpOutputWinSt' */
  (void) Rte_Write_gWND_bRRUpOutputWinSt_Val(rtb_gDCU_bRRWinUpOutput);

  /* Outport: '<Root>/gWND_bRLDnOutputWinSt' */
  (void) Rte_Write_gWND_bRLDnOutputWinSt_Val(rtb_gDCU_bRLWinDownOutput);

  /* Outport: '<Root>/gWND_bRLUpOutputWinSt' */
  (void) Rte_Write_gWND_bRLUpOutputWinSt_Val(rtb_gDCU_bRLWinUpOutput);

  /* Outport: '<Root>/gWND_bFRDnOutputWinSt' */
  (void) Rte_Write_gWND_bFRDnOutputWinSt_Val(rtb_gDCU_bFRWinDownOutput);

  /* Outport: '<Root>/gWND_bFRUpOutputWinSt' */
  (void) Rte_Write_gWND_bFRUpOutputWinSt_Val(rtb_gDCU_bFRWinUpOutput);

  /* Outport: '<Root>/gWND_u8DrvSideFLWinSwSt' */
  (void) Rte_Write_gWND_u8DrvSideFLWinSwSt_Val(Win_Ctrl_B.u8UINMWinSwSt_f);

  /* Outport: '<Root>/gWND_u8DrvSideFRWinSwSt' */
  (void) Rte_Write_gWND_u8DrvSideFRWinSwSt_Val(Win_Ctrl_B.u8UINMWinSwSt_l);

  /* Outport: '<Root>/gWND_u8DrvSideRLWinSwSt' */
  (void) Rte_Write_gWND_u8DrvSideRLWinSwSt_Val(Win_Ctrl_B.u8UINMWinSwSt_p);

  /* Outport: '<Root>/gWND_u8DrvSideRRWinSwSt' */
  (void) Rte_Write_gWND_u8DrvSideRRWinSwSt_Val(Win_Ctrl_B.u8UINMWinSwSt_o);

  /* Outport: '<Root>/gWND_u8LocalSideFRWinSwSt' */
  (void) Rte_Write_gWND_u8LocalSideFRWinSwSt_Val(Win_Ctrl_B.u8UINMWinSwSt_bz);

  /* Outport: '<Root>/gWND_u8LocalSideRLWinSwSt' */
  (void) Rte_Write_gWND_u8LocalSideRLWinSwSt_Val(Win_Ctrl_B.u8UINMWinSwSt_b);

  /* Outport: '<Root>/gWND_u8LocalSideRRWinSwSt' */
  (void) Rte_Write_gWND_u8LocalSideRRWinSwSt_Val(Win_Ctrl_B.u8UINMWinSwSt);

  /* Outport: '<Root>/gWND_bPsgWinLockBtnSt' incorporates:
   *  Switch: '<S8>/Switch1'
   */
  (void) Rte_Write_gWND_bPsgWinLockBtnSt_Val((!Win_Ctrl_B.bVoltDisableFlg) &&
    tmpRead_3);

  /* Outport: '<Root>/gWND_u32AllowSleep_Local' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion4'
   *  Logic: '<S1>/Logical Operator5'
   */
  (void) Rte_Write_gWND_u32AllowSleep_Local_Val((uint16)
    ((Win_Ctrl_B.OutportBufferForu8TPFlag_n != 0) || Win_Ctrl_B.bAllow_sleep_l ||
     Win_Ctrl_B.bAllow_sleep_e || Win_Ctrl_B.bAllow_sleep_n ||
     Win_Ctrl_B.bAllow_sleep));

  /* Outport: '<Root>/gWin_bAllow_RRSPsleep' */
  (void) Rte_Write_gWin_bAllow_RRSPsleep_Val(Win_Ctrl_B.bAllow_sleep);

  /* Outport: '<Root>/gWin_bSpecialFlag_RR' */
  (void) Rte_Write_gWin_bSpecialFlag_RR_Val(Win_Ctrl_B.bSpecialFlag);

  /* Outport: '<Root>/gWin_bAllow_RLSPsleep' */
  (void) Rte_Write_gWin_bAllow_RLSPsleep_Val(Win_Ctrl_B.bAllow_sleep_n);

  /* Outport: '<Root>/gWin_bSpecialFlag_RL' */
  (void) Rte_Write_gWin_bSpecialFlag_RL_Val(Win_Ctrl_B.bSpecialFlag_m);

  /* Outport: '<Root>/gWin_bAllow_FRSPsleep' */
  (void) Rte_Write_gWin_bAllow_FRSPsleep_Val(Win_Ctrl_B.bAllow_sleep_e);

  /* Outport: '<Root>/gWin_bSpecialFlag_FR' */
  (void) Rte_Write_gWin_bSpecialFlag_FR_Val(Win_Ctrl_B.bSpecialFlag_n);

  /* Outport: '<Root>/gWin_bAllow_FLSPsleep' */
  (void) Rte_Write_gWin_bAllow_FLSPsleep_Val(Win_Ctrl_B.bAllow_sleep_l);

  /* Outport: '<Root>/gWin_bSpecialFlag_FL' */
  (void) Rte_Write_gWin_bSpecialFlag_FL_Val(Win_Ctrl_B.bSpecialFlag_b);

  /* Outport: '<Root>/gWND_bFLDnOutputWinSt' */
  (void) Rte_Write_gWND_bFLDnOutputWinSt_Val(rtb_gDCU_bFLWinDownOutput);

  /* Outport: '<Root>/gWND_bFLUpOutputWinSt' */
  (void) Rte_Write_gWND_bFLUpOutputWinSt_Val(rtb_gDCU_bFLWinUpOutput);

  /* Outport: '<Root>/gWND_bFLWinMotErrSt' incorporates:
   *  DataStoreRead: '<S1>/gWND_bFLWinMotErrSt_Read'
   */
  (void) Rte_Write_gWND_bFLWinMotErrSt_Val
    (Win_Ctrl_DWork.gWND_bFLWinMotErrSt_inWin);

  /* Outport: '<Root>/gWND_bFRWinMotErrSt' incorporates:
   *  DataStoreRead: '<S1>/gWND_bFRWinMotErrSt_Read'
   */
  (void) Rte_Write_gWND_bFRWinMotErrSt_Val
    (Win_Ctrl_DWork.gWND_bFRWinMotErrSt_inWin);

  /* Outport: '<Root>/gWND_bRLWinMotErrSt' incorporates:
   *  DataStoreRead: '<S1>/gWND_bRLWinMotErrSt_Read'
   */
  (void) Rte_Write_gWND_bRLWinMotErrSt_Val
    (Win_Ctrl_DWork.gWND_bRLWinMotErrSt_inWin);

  /* Outport: '<Root>/gWND_bRRWinMotErrSt' incorporates:
   *  DataStoreRead: '<S1>/gWND_bRRWinMotErrSt_Read'
   */
  (void) Rte_Write_gWND_bRRWinMotErrSt_Val
    (Win_Ctrl_DWork.gWND_bRRWinMotErrSt_inWin);

  /* Outport: '<Root>/gWND_u8Wakeup' */
  (void) Rte_Write_gWND_u8Wakeup_Val(Win_Ctrl_ConstB.Gain7);

  /* Outport: '<Root>/gWND_u32AllowSleep_NW' */
  (void) Rte_Write_gWND_u32AllowSleep_NW_Val(Win_Ctrl_ConstB.Gain9);

  /* Outport: '<Root>/gWin_bRLOutSideDoorSwFlg' incorporates:
   *  DataStoreRead: '<S1>/gWin_bRLOutSideDoorSwFlg_Read'
   */
  (void) Rte_Write_gWin_bRLOutSideDoorSwFlg_Val
    (Win_Ctrl_DWork.gWin_bRLOutSideDoorSwFlg_inWin);

  /* Outport: '<Root>/gWin_bRROutSideDoorSwFlg' incorporates:
   *  DataStoreRead: '<S1>/gWin_bRROutSideDoorSwFlg_Read'
   */
  (void) Rte_Write_gWin_bRROutSideDoorSwFlg_Val
    (Win_Ctrl_DWork.gWin_bRROutSideDoorSwFlg_inWin);

  /* Outport: '<Root>/gWin_bFLOutSideDoorSwFlg' incorporates:
   *  DataStoreRead: '<S1>/gWin_bFLOutSideDoorSwFlg_Read'
   */
  (void) Rte_Write_gWin_bFLOutSideDoorSwFlg_Val
    (Win_Ctrl_DWork.gWin_bFLOutSideDoorSwFlg_inWin);

  /* Outport: '<Root>/gWin_bFROutSideDoorSwFlg' incorporates:
   *  DataStoreRead: '<S1>/gWin_bFROutSideDoorSwFlg_Read'
   */
  (void) Rte_Write_gWin_bFROutSideDoorSwFlg_Val
    (Win_Ctrl_DWork.gWin_bFROutSideDoorSwFlg_inWin);

  /* Outport: '<Root>/gWin_bPWL_PassengerWinLockLedFltSt' incorporates:
   *  DataStoreRead: '<S1>/gWin_bPWL_PassengerWinLockLedFltSt_Read'
   */
  (void) Rte_Write_gWin_bPWL_PassengerWinLockLedFltSt_Val
    (Win_Ctrl_DWork.gWin_bPWL_PassengerWinLockLedFl);

  /* Outport: '<Root>/gWin_bUINM_PassengerWinLockBtnSt' incorporates:
   *  DataStoreRead: '<S1>/gWin_bUINM_PassengerWinLockBtnSt_Read'
   */
  (void) Rte_Write_gWin_bUINM_PassengerWinLockBtnSt_Val
    (Win_Ctrl_DWork.gWin_bUINM_PassengerWinLockBtnS);

  /* Update for Delay: '<S74>/Delay4' */
  Win_Ctrl_DWork.Delay4_DSTATE = Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_d;

  /* Update for Delay: '<S74>/Delay5' */
  Win_Ctrl_DWork.Delay5_DSTATE = Win_Ctrl_B.u8WndCmdOutputReq_OutSide_l5;

  /* Update for Delay: '<S74>/Delay6' */
  Win_Ctrl_DWork.Delay6_DSTATE = Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_b;

  /* Update for Delay: '<S74>/Delay7' */
  Win_Ctrl_DWork.Delay7_DSTATE = Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_ln;

  /* Update for Delay: '<S74>/Delay8' */
  Win_Ctrl_DWork.Delay8_DSTATE = Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_a;

  /* Update for Delay: '<S74>/Delay9' */
  Win_Ctrl_DWork.Delay9_DSTATE = Win_Ctrl_B.u8WndCmdOutputReq_OutSide_g;

  /* Update for Delay: '<S74>/Delay10' */
  Win_Ctrl_DWork.Delay10_DSTATE = Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_n;

  /* Update for Delay: '<S74>/Delay11' */
  Win_Ctrl_DWork.Delay11_DSTATE = Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_e;

  /* Update for Delay: '<S74>/Delay12' */
  Win_Ctrl_DWork.Delay12_DSTATE = Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_m;

  /* Update for Delay: '<S74>/Delay13' */
  Win_Ctrl_DWork.Delay13_DSTATE = Win_Ctrl_B.u8WndCmdOutputReq_OutSide_l;

  /* Update for Delay: '<S74>/Delay14' */
  Win_Ctrl_DWork.Delay14_DSTATE = Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_i;

  /* Update for Delay: '<S74>/Delay15' */
  Win_Ctrl_DWork.Delay15_DSTATE = Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_l;

  /* Update for Delay: '<S74>/Delay' */
  Win_Ctrl_DWork.Delay_DSTATE_p1 = Win_Ctrl_B.u8WndCmdOutputReq_OPDoor;

  /* Update for Delay: '<S74>/Delay1' */
  Win_Ctrl_DWork.Delay1_DSTATE_f = Win_Ctrl_B.u8WndCmdOutputReq_OutSide;

  /* Update for Delay: '<S74>/Delay2' */
  Win_Ctrl_DWork.Delay2_DSTATE_i = Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor;

  /* Update for Delay: '<S74>/Delay3' */
  Win_Ctrl_DWork.Delay3_DSTATE_f = Win_Ctrl_B.u8WndCmdOutputReq_CLDoor;

  /* Update for Delay: '<S79>/Delay' */
  Win_Ctrl_DWork.Delay_DSTATE_d = Win_Ctrl_B.bWinShrtDrpFlg_i;

  /* Update for Delay: '<S80>/Delay' */
  Win_Ctrl_DWork.Delay_DSTATE_o = Win_Ctrl_B.bWinShrtDrpFlg_d;

  /* Update for Delay: '<S81>/Delay' */
  Win_Ctrl_DWork.Delay_DSTATE_pr = Win_Ctrl_B.bWinShrtDrpFlg_h;

  /* Update for Delay: '<S82>/Delay' */
  Win_Ctrl_DWork.Delay_DSTATE_j = Win_Ctrl_B.bWinShrtDrpFlg;
}

/* Model initialize function */
void Win_Ctrl_Runnable_Init(void)
{
  {
    boolean tmpWrite;
    boolean tmpWrite_0;
    boolean tmpWrite_1;
    uint8 tmpWrite_2;
    uint8 tmpWrite_3;
    uint8 tmpWrite_4;
    uint8 tmpWrite_5;
    boolean bManualUpFlg_SP_d;
    boolean bWinShrtDrpFlgTemp_f;

    /* Machine initializer */
    Win_Ctrl_DWork.wndOverVoltImmPrm = 0;

    /* SystemInitialize for Atomic SubSystem: '<S29>/Wnd_ThermalProt_FL' */
    Win_Ctr_Wnd_ThermalProt_FL_Init(&Win_Ctrl_B.Wnd_ThermalProt_FL,
      &Win_Ctrl_DWork.Wnd_ThermalProt_FL);

    /* End of SystemInitialize for SubSystem: '<S29>/Wnd_ThermalProt_FL' */

    /* SystemInitialize for Chart: '<S175>/DriverSide_FLSwStuck' */
    Win_C_DriverSide_FLSwStuck_Init(&Win_Ctrl_B.bSwStuckFlg_m);

    /* SystemInitialize for Atomic SubSystem: '<S96>/Special_Mode_FLReq' */
    Win_Ctrl_Special_Mode_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_SP_i,
      &bManualUpFlg_SP_d, &Win_Ctrl_B.bAllow_sleep_l, &Win_Ctrl_B.bSpecialFlag_b);

    /* End of SystemInitialize for SubSystem: '<S96>/Special_Mode_FLReq' */

    /* SystemInitialize for Chart: '<S176>/FRLocalWin_SwStuck' */
    Win_C_DriverSide_FLSwStuck_Init(&Win_Ctrl_B.bSwStuckFlg_o);

    /* SystemInitialize for Chart: '<S175>/DriverSide_FRSwStuck' */
    Win_C_DriverSide_FLSwStuck_Init(&Win_Ctrl_B.bSwStuckFlg_f);

    /* SystemInitialize for Atomic SubSystem: '<S96>/Special_Mode_FRReq' */
    Win_Ctrl_Special_Mode_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_SP_k,
      &bManualUpFlg_SP_d, &Win_Ctrl_B.bAllow_sleep_e, &Win_Ctrl_B.bSpecialFlag_n);

    /* End of SystemInitialize for SubSystem: '<S96>/Special_Mode_FRReq' */

    /* SystemInitialize for Chart: '<S176>/RLLocalWin_SwStuck' */
    Win_C_DriverSide_FLSwStuck_Init(&Win_Ctrl_B.bSwStuckFlg_p);

    /* SystemInitialize for Chart: '<S175>/DriverSide_RLSwStuck' */
    Win_C_DriverSide_FLSwStuck_Init(&Win_Ctrl_B.bSwStuckFlg_j);

    /* SystemInitialize for Atomic SubSystem: '<S96>/Special_Mode_RLReq' */
    Win_Ctrl_Special_Mode_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_SP_m,
      &bManualUpFlg_SP_d, &Win_Ctrl_B.bAllow_sleep_n, &Win_Ctrl_B.bSpecialFlag_m);

    /* End of SystemInitialize for SubSystem: '<S96>/Special_Mode_RLReq' */

    /* SystemInitialize for Chart: '<S176>/RRLocalWin_SwStuck' */
    Win_C_DriverSide_FLSwStuck_Init(&Win_Ctrl_B.bSwStuckFlg);

    /* SystemInitialize for Chart: '<S175>/DriverSide_RRSwStuck' */
    Win_C_DriverSide_FLSwStuck_Init(&Win_Ctrl_B.bSwStuckFlg_pq);

    /* SystemInitialize for Atomic SubSystem: '<S96>/Special_Mode_RRReq' */
    Win_Ctrl_Special_Mode_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_SP,
      &bManualUpFlg_SP_d, &Win_Ctrl_B.bAllow_sleep, &Win_Ctrl_B.bSpecialFlag);

    /* End of SystemInitialize for SubSystem: '<S96>/Special_Mode_RRReq' */

    /* SystemInitialize for Atomic SubSystem: '<S8>/Valid SW state' */

    /* SystemInitialize for Chart: '<S18>/SWTypeStateDvFL' */
    Win_Ctrl_SWTypeStateDvFL_Init(&Win_Ctrl_B.u8UINMWinSwSt_f);

    /* SystemInitialize for Chart: '<S18>/SWTypeStateDvFR' */
    Win_Ctrl_SWTypeStateDvFL_Init(&Win_Ctrl_B.u8UINMWinSwSt_l);

    /* SystemInitialize for Chart: '<S18>/SWTypeStateDvRL' */
    Win_Ctrl_SWTypeStateDvFL_Init(&Win_Ctrl_B.u8UINMWinSwSt_p);

    /* SystemInitialize for Chart: '<S18>/SWTypeStateDvRR' */
    Win_Ctrl_SWTypeStateDvFL_Init(&Win_Ctrl_B.u8UINMWinSwSt_o);

    /* SystemInitialize for Chart: '<S19>/SWTypeStateFR' */
    Win_Ctrl_SWTypeStateDvFL_Init(&Win_Ctrl_B.u8UINMWinSwSt_bz);

    /* SystemInitialize for Chart: '<S19>/SWTypeStateRL' */
    Win_Ctrl_SWTypeStateDvFL_Init(&Win_Ctrl_B.u8UINMWinSwSt_b);

    /* SystemInitialize for Chart: '<S19>/SWTypeStateRR' */
    Win_Ctrl_SWTypeStateDvFL_Init(&Win_Ctrl_B.u8UINMWinSwSt);

    /* End of SystemInitialize for SubSystem: '<S8>/Valid SW state' */

    /* SystemInitialize for Chart: '<S6>/ShortDropStsFL' incorporates:
     *  Outport: '<Root>/gWin_bFLWinShortDropSt'
     */
    Win_Ctrl_ShortDropStsFL_Init(&bManualUpFlg_SP_d);

    /* SystemInitialize for Chart: '<S6>/ShortDropStsFR' incorporates:
     *  Outport: '<Root>/gWin_bFRWinShortDropSt'
     */
    Win_Ctrl_ShortDropStsFL_Init(&tmpWrite_1);

    /* SystemInitialize for Chart: '<S6>/ShortDropStsRL' incorporates:
     *  Outport: '<Root>/gWin_bUINM_RLDoorOutsideSwSt'
     */
    Win_Ctrl_ShortDropStsFL_Init(&tmpWrite);

    /* SystemInitialize for Chart: '<S6>/ShortDropStsRR' incorporates:
     *  Outport: '<Root>/gWin_bUINM_RRDoorOutsideSwSt'
     */
    Win_Ctrl_ShortDropStsFL_Init(&tmpWrite_0);

    /* SystemInitialize for Chart: '<S7>/PositionSts_FL' incorporates:
     *  Outport: '<Root>/gWND_u8FLPositionSts'
     */
    Win_Ctrl_PositionSts_FL_Init(&tmpWrite_2);

    /* SystemInitialize for Chart: '<S7>/PositionSts_FR' incorporates:
     *  Outport: '<Root>/gWND_u8FRPositionSts'
     */
    Win_Ctrl_PositionSts_FL_Init(&tmpWrite_3);

    /* SystemInitialize for Chart: '<S7>/PositionSts_RL' incorporates:
     *  Outport: '<Root>/gWND_u8RLPositionSts'
     */
    Win_Ctrl_PositionSts_FL_Init(&tmpWrite_4);

    /* SystemInitialize for Chart: '<S7>/PositionSts_RR' incorporates:
     *  Outport: '<Root>/gWND_u8RRPositionSts'
     */
    Win_Ctrl_PositionSts_FL_Init(&tmpWrite_5);

    /* SystemInitialize for Chart: '<S28>/Over_Time_Protect' */
    Win_Ctrl_Over_Time_Protect_Init(&Win_Ctrl_B.bWndOverRunTime_l);

    /* SystemInitialize for Chart: '<S28>/Over_Time_Protect1' */
    Win_Ctrl_Over_Time_Protect_Init(&Win_Ctrl_B.bWndOverRunTime_a);

    /* SystemInitialize for Chart: '<S28>/Over_Time_Protect2' */
    Win_Ctrl_Over_Time_Protect_Init(&Win_Ctrl_B.bWndOverRunTime_p);

    /* SystemInitialize for Chart: '<S28>/Over_Time_Protect3' */
    Win_Ctrl_Over_Time_Protect_Init(&Win_Ctrl_B.bWndOverRunTime);

    /* SystemInitialize for Atomic SubSystem: '<S29>/Wnd_ThermalProt_FR' */
    Win_Ctr_Wnd_ThermalProt_FL_Init(&Win_Ctrl_B.Wnd_ThermalProt_FR,
      &Win_Ctrl_DWork.Wnd_ThermalProt_FR);

    /* End of SystemInitialize for SubSystem: '<S29>/Wnd_ThermalProt_FR' */

    /* SystemInitialize for Atomic SubSystem: '<S29>/Wnd_ThermalProt_RL' */
    Win_Ctr_Wnd_ThermalProt_FL_Init(&Win_Ctrl_B.Wnd_ThermalProt_RL,
      &Win_Ctrl_DWork.Wnd_ThermalProt_RL);

    /* End of SystemInitialize for SubSystem: '<S29>/Wnd_ThermalProt_RL' */

    /* SystemInitialize for Atomic SubSystem: '<S29>/Wnd_ThermalProt_RR' */
    Win_Ctr_Wnd_ThermalProt_FL_Init(&Win_Ctrl_B.Wnd_ThermalProt_RR,
      &Win_Ctrl_DWork.Wnd_ThermalProt_RR);

    /* End of SystemInitialize for SubSystem: '<S29>/Wnd_ThermalProt_RR' */

    /* SystemInitialize for Chart: '<S27>/SLC_Initialization_FR' */
    Win__SLC_Initialization_FR_Init(&Win_Ctrl_B.bNormStartFlg_l);

    /* SystemInitialize for Chart: '<S27>/SLC_Initialization_RL' */
    Win__SLC_Initialization_FR_Init(&Win_Ctrl_B.bNormStartFlg_a);

    /* SystemInitialize for Chart: '<S27>/SLC_Initialization_RR' */
    Win__SLC_Initialization_FR_Init(&Win_Ctrl_B.bNormStartFlg);

    /* SystemInitialize for Enabled SubSystem: '<S125>/ElecDoor_Req' */
    Win_Ctrl_ElecDoor_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_b);

    /* End of SystemInitialize for SubSystem: '<S125>/ElecDoor_Req' */

    /* SystemInitialize for Enabled SubSystem: '<S141>/OpenDoor_Req' */
    Win_Ctrl_OpenDoor_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_d);

    /* End of SystemInitialize for SubSystem: '<S141>/OpenDoor_Req' */

    /* SystemInitialize for Enabled SubSystem: '<S153>/Outside_Req' */
    Win_Ctrl_Outside_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_OutSide_l5);

    /* End of SystemInitialize for SubSystem: '<S153>/Outside_Req' */

    /* SystemInitialize for Enabled SubSystem: '<S109>/CLDoor_Req' */
    Win_Ctrl_CLDoor_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_ln);

    /* End of SystemInitialize for SubSystem: '<S109>/CLDoor_Req' */

    /* SystemInitialize for Chart: '<S79>/SLC' */
    Win_Ctrl_SLC_Init(&Win_Ctrl_B.u8WNDExecReq_g, &bWinShrtDrpFlgTemp_f,
                      &Win_Ctrl_B.u8PWL_WinOpeationSt_i,
                      &Win_Ctrl_B.u8WNDExecStatus_o,
                      &Win_Ctrl_B.bWinShrtDrpFlgWrtCntTemp_i);

    /* SystemInitialize for Enabled SubSystem: '<S126>/ElecDoor_Req' */
    Win_Ctrl_ElecDoor_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_n);

    /* End of SystemInitialize for SubSystem: '<S126>/ElecDoor_Req' */

    /* SystemInitialize for Enabled SubSystem: '<S142>/OpenDoor_Req' */
    Win_Ctrl_OpenDoor_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_a);

    /* End of SystemInitialize for SubSystem: '<S142>/OpenDoor_Req' */

    /* SystemInitialize for Enabled SubSystem: '<S154>/Outside_Req' */
    Win_Ctrl_Outside_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_OutSide_g);

    /* End of SystemInitialize for SubSystem: '<S154>/Outside_Req' */

    /* SystemInitialize for Enabled SubSystem: '<S110>/CLDoor_Req' */
    Win_Ctrl_CLDoor_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_e);

    /* End of SystemInitialize for SubSystem: '<S110>/CLDoor_Req' */

    /* SystemInitialize for Chart: '<S80>/SLC' */
    Win_Ctrl_SLC_Init(&Win_Ctrl_B.u8WNDExecReq_f, &bWinShrtDrpFlgTemp_f,
                      &Win_Ctrl_B.u8PWL_WinOpeationSt_h,
                      &Win_Ctrl_B.u8WNDExecStatus_f,
                      &Win_Ctrl_B.bWinShrtDrpFlgWrtCntTemp_k);

    /* SystemInitialize for Enabled SubSystem: '<S127>/ElecDoor_Req' */
    Win_Ctrl_ElecDoor_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor_i);

    /* End of SystemInitialize for SubSystem: '<S127>/ElecDoor_Req' */

    /* SystemInitialize for Enabled SubSystem: '<S143>/OpenDoor_Req' */
    Win_Ctrl_OpenDoor_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_OPDoor_m);

    /* End of SystemInitialize for SubSystem: '<S143>/OpenDoor_Req' */

    /* SystemInitialize for Enabled SubSystem: '<S155>/Outside_Req' */
    Win_Ctrl_Outside_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_OutSide_l);

    /* End of SystemInitialize for SubSystem: '<S155>/Outside_Req' */

    /* SystemInitialize for Enabled SubSystem: '<S111>/CLDoor_Req' */
    Win_Ctrl_CLDoor_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_CLDoor_l);

    /* End of SystemInitialize for SubSystem: '<S111>/CLDoor_Req' */

    /* SystemInitialize for Chart: '<S81>/SLC' */
    Win_Ctrl_SLC_Init(&Win_Ctrl_B.u8WNDExecReq_c, &bWinShrtDrpFlgTemp_f,
                      &Win_Ctrl_B.u8PWL_WinOpeationSt_l,
                      &Win_Ctrl_B.u8WNDExecStatus_n,
                      &Win_Ctrl_B.bWinShrtDrpFlgWrtCntTemp_f);

    /* SystemInitialize for Enabled SubSystem: '<S128>/ElecDoor_Req' */
    Win_Ctrl_ElecDoor_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_ElecDoor);

    /* End of SystemInitialize for SubSystem: '<S128>/ElecDoor_Req' */

    /* SystemInitialize for Enabled SubSystem: '<S144>/OpenDoor_Req' */
    Win_Ctrl_OpenDoor_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_OPDoor);

    /* End of SystemInitialize for SubSystem: '<S144>/OpenDoor_Req' */

    /* SystemInitialize for Enabled SubSystem: '<S156>/Outside_Req' */
    Win_Ctrl_Outside_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_OutSide);

    /* End of SystemInitialize for SubSystem: '<S156>/Outside_Req' */

    /* SystemInitialize for Enabled SubSystem: '<S112>/CLDoor_Req' */
    Win_Ctrl_CLDoor_Req_Init(&Win_Ctrl_B.u8WndCmdOutputReq_CLDoor);

    /* End of SystemInitialize for SubSystem: '<S112>/CLDoor_Req' */

    /* SystemInitialize for Chart: '<S82>/SLC' */
    Win_Ctrl_SLC_Init(&Win_Ctrl_B.u8WNDExecReq, &bWinShrtDrpFlgTemp_f,
                      &Win_Ctrl_B.u8PWL_WinOpeationSt,
                      &Win_Ctrl_B.u8WNDExecStatus,
                      &Win_Ctrl_B.bWinShrtDrpFlgWrtCntTemp);

    /* SystemInitialize for Chart: '<S79>/EEPWriteShortFlag' */
    Win_Ctrl_EEPWriteShortFlag_Init(&Win_Ctrl_B.bWinShrtDrpFlg_i,
      &Win_Ctrl_B.bWinShrtDrpFlgWrtCnt_d);

    /* SystemInitialize for Chart: '<S80>/EEPWriteShortFlag' */
    Win_Ctrl_EEPWriteShortFlag_Init(&Win_Ctrl_B.bWinShrtDrpFlg_d,
      &Win_Ctrl_B.bWinShrtDrpFlgWrtCnt_l);

    /* SystemInitialize for Chart: '<S81>/EEPWriteShortFlag' */
    Win_Ctrl_EEPWriteShortFlag_Init(&Win_Ctrl_B.bWinShrtDrpFlg_h,
      &Win_Ctrl_B.bWinShrtDrpFlgWrtCnt_n);

    /* SystemInitialize for Chart: '<S82>/EEPWriteShortFlag' */
    Win_Ctrl_EEPWriteShortFlag_Init(&Win_Ctrl_B.bWinShrtDrpFlg,
      &Win_Ctrl_B.bWinShrtDrpFlgWrtCnt);

    /* Outport: '<Root>/gWin_bUINM_RLDoorOutsideSwSt' */
    (void) Rte_Write_gWin_bUINM_RLDoorOutsideSwSt_Val(tmpWrite);

    /* Outport: '<Root>/gWin_bUINM_RRDoorOutsideSwSt' */
    (void) Rte_Write_gWin_bUINM_RRDoorOutsideSwSt_Val(tmpWrite_0);

    /* Outport: '<Root>/gWin_bFRWinShortDropSt' */
    (void) Rte_Write_gWin_bFRWinShortDropSt_Val(tmpWrite_1);

    /* Outport: '<Root>/gWin_bFLWinShortDropSt' */
    (void) Rte_Write_gWin_bFLWinShortDropSt_Val(bManualUpFlg_SP_d);

    /* Outport: '<Root>/gWND_u8FLPositionSts' */
    (void) Rte_Write_gWND_u8FLPositionSts_Val(tmpWrite_2);

    /* Outport: '<Root>/gWND_u8FRPositionSts' */
    (void) Rte_Write_gWND_u8FRPositionSts_Val(tmpWrite_3);

    /* Outport: '<Root>/gWND_u8RLPositionSts' */
    (void) Rte_Write_gWND_u8RLPositionSts_Val(tmpWrite_4);

    /* Outport: '<Root>/gWND_u8RRPositionSts' */
    (void) Rte_Write_gWND_u8RRPositionSts_Val(tmpWrite_5);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
