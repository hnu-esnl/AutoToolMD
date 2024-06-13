/*
 * File: Lock_Ctrl.c
 *
 * Code generated for Simulink model 'Lock_Ctrl'.
 *
 * Model version                  : 1.5637
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Oct 27 16:02:15 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: NEC->V850
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Lock_Ctrl.h"

/* Named constants for Chart: '<S4>/UNLOCKDTCDETECT' */
#define Lock_Ctrl_IN_LOCKDTC           ((uint8)1U)
#define Lock_Ctrl_IN_NULL              ((uint8)2U)
#define Lock_Ctrl_IN_hold1             ((uint8)3U)
#define Lock_Ctrl_IN_hold2             ((uint8)4U)

/* Named constants for Chart: '<S55>/Chart' */
#define Lock_Ctrl_IN_NoReq             ((uint8)1U)
#define Lock_Ctrl_IN_Req               ((uint8)2U)

/* Named constants for Chart: '<S56>/Chart1' */
#define Lock_Ctrl_IN_Clear             ((uint8)1U)
#define Lock_Ctrl_IN_ReqChangeOutput   ((uint8)2U)
#define Lock_Ctrl_IN_Update            ((uint8)3U)

/* Named constants for Chart: '<S57>/Chart' */
#define Lock_Ctrl_IN_Hold1             ((uint8)1U)
#define Lock_Ctrl_IN_Hold2             ((uint8)2U)
#define Lock_Ctrl_IN_NoRemind          ((uint8)3U)
#define Lock_Ctrl_IN_Remind            ((uint8)4U)

/* Named constants for Chart: '<S64>/Chart' */
#define Lock_Ctrl_IN_Lock              ((uint8)1U)
#define Lock_Ctrl_IN_NO_ACTIVE_CHILD_i ((uint8)0U)
#define Lock_Ctrl_IN_NoReq_e           ((uint8)1U)
#define Lock_Ctrl_IN_Req_p             ((uint8)2U)
#define Lock_Ctrl_IN_UnLock            ((uint8)2U)

/* Named constants for Chart: '<S3>/bFrontLeftDoorKeepAwakeFlag' */
#define Lock_Ctrl_IN_CLCFLAG           ((uint8)1U)
#define Lock_Ctrl_IN_Close             ((uint8)2U)
#define Lock_Ctrl_IN_OPEN              ((uint8)3U)

/* Named constants for Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1' */
#define Lock_Ctrl_IN_Close_m           ((uint8)1U)
#define Lock_Ctrl_IN_OPEN_b            ((uint8)2U)

/* Named constants for Chart: '<S4>/ExterSwOpenFillerCapReq' */
#define Lock_Ctrl_IN_NO_ACTIVE_CHILD_if ((uint8)0U)
#define Lock_Ctrl_IN_ReqOFF            ((uint8)1U)
#define Lock_Ctrl_IN_ReqON             ((uint8)2U)

/* Named constants for Chart: '<S16>/DoorsMotorOutput' */
#define Lock_Ctrl_IN_CentralLock       ((uint8)1U)
#define Lock_Ctrl_IN_CentralUnlock     ((uint8)2U)
#define Lock_Ctrl_IN_NULL_f            ((uint8)3U)
#define Lock_Ctrl_IN_Null              ((uint8)1U)
#define Lock_Ctrl_IN_RELOCKREQ         ((uint8)2U)
#define Lock_Ctrl_IN_REUNLOCKREQ       ((uint8)3U)
#define Lock_Ctrl_IN_wait              ((uint8)4U)
#define Lock_Ctrl_IN_wait1             ((uint8)5U)

/* Named constants for Chart: '<S16>/TrunkUnlockReq' */
#define Lock_Ctrl_IN_LockReq           ((uint8)1U)
#define Lock_Ctrl_IN_NoReq_l           ((uint8)1U)
#define Lock_Ctrl_IN_REQ               ((uint8)2U)
#define Lock_Ctrl_IN_UnlockReq         ((uint8)2U)

/* Named constants for Chart: '<S20>/DoorsMotorOutput' */
#define Lock_Ctrl_IN_NULL_fe           ((uint8)1U)
#define Lock_Ctrl_IN_RESETREQ          ((uint8)2U)
#define Lock_Ctrl_IN_REUNLOCKREQ_p     ((uint8)2U)
#define Lock_Ctrl_IN_Release           ((uint8)2U)
#define Lock_Ctrl_IN_hold              ((uint8)3U)
#define Lock_Ctrl_IN_wait1_p           ((uint8)3U)

/* Named constants for Chart: '<S20>/PowerDoorLockReq' */
#define Lock_Ctrl_IN_Req_h             ((uint8)2U)

/* Named constants for Chart: '<S26>/MotorStuck' */
#define Lock_Ctrl_IN_IDEL              ((uint8)1U)
#define Lock_Ctrl_IN_STUCK             ((uint8)2U)

/* Named constants for Chart: '<S27>/FillerCapBLockMotor' */
#define Lock_Ctrl_IN_CloseAction       ((uint8)1U)
#define Lock_Ctrl_IN_Close_k           ((uint8)1U)
#define Lock_Ctrl_IN_Hold1_e           ((uint8)2U)
#define Lock_Ctrl_IN_Hold2_p           ((uint8)1U)
#define Lock_Ctrl_IN_NoAction          ((uint8)2U)
#define Lock_Ctrl_IN_Open              ((uint8)3U)
#define Lock_Ctrl_IN_OpenAction        ((uint8)2U)
#define Lock_Ctrl_IN_Stop1             ((uint8)4U)
#define Lock_Ctrl_IN_Stop2             ((uint8)5U)

/* Named constants for Chart: '<S28>/DoorsMotorOutput' */
#define Lock_Ct_IN_REEMERGENCYUNLOCKREQ ((uint8)2U)
#define Lock_Ctrl_IN_EmergrencyUnlock  ((uint8)3U)
#define Lock_Ctrl_IN_EmergrencyUnlock1 ((uint8)4U)
#define Lock_Ctrl_IN_NULL_fz           ((uint8)5U)
#define Lock_Ctrl_IN_RELOCKREQ_g       ((uint8)3U)
#define Lock_Ctrl_IN_REUNLOCKREQ_j     ((uint8)4U)
#define Lock_Ctrl_IN_hold1_o           ((uint8)6U)
#define Lock_Ctrl_IN_wait1_a           ((uint8)8U)
#define Lock_Ctrl_IN_wait3             ((uint8)9U)
#define Lock_Ctrl_IN_wait_n            ((uint8)7U)

/* Named constants for Chart: '<S28>/LockReq' */
#define Lock_Ctrl_IN_EmergencyUnlock   ((uint8)1U)
#define Lock_Ctrl_IN_Lock_i            ((uint8)2U)
#define Lock_Ctrl_IN_unlock            ((uint8)3U)

/* Named constants for Chart: '<S30>/DoorsMotorOutput' */
#define Lock_Ctrl_IN_Lock_il           ((uint8)5U)
#define Lock_Ctrl_IN_NULL_l            ((uint8)6U)
#define Lock_Ctrl_IN_REREVERSEUNLOCKREQ ((uint8)4U)
#define Lock_Ctrl_IN_REUNLOCKREQ_a     ((uint8)5U)
#define Lock_Ctrl_IN_Unlock            ((uint8)7U)
#define Lock_Ctrl_IN_hold1_a           ((uint8)9U)
#define Lock_Ctrl_IN_hold_o            ((uint8)8U)
#define Lock_Ctrl_IN_wait1_k           ((uint8)11U)
#define Lock_Ctrl_IN_wait2             ((uint8)12U)
#define Lock_Ctrl_IN_wait3_n           ((uint8)13U)
#define Lock_Ctrl_IN_wait_l            ((uint8)10U)

/* Named constants for Chart: '<S30>/RLDoorLockReq' */
#define Lock_Ctrl_IN_ReverseUnlock     ((uint8)3U)
#define Lock_Ctrl_IN_unlock_e          ((uint8)4U)

/* Named constants for Chart: '<S36>/OutHoodLockAction' */
#define Lock_Ctrl_IN_Noreq             ((uint8)1U)
#define Lock_Ctrl_IN_ReUnlock          ((uint8)2U)
#define Lock_Ctrl_IN_Unlock_o          ((uint8)3U)
#define Lock_Ctrl_IN_hold1_m           ((uint8)5U)
#define Lock_Ctrl_IN_hold_d            ((uint8)4U)

/* data stores shared across model instances */
SharedDSM_Lock_Ctrl Lock_Ctrl_SharedDSM;

/* Block signals (default storage) */
BlockIO_Lock_Ctrl Lock_Ctrl_B;

/* Block states (default storage) */
D_Work_Lock_Ctrl Lock_Ctrl_DWork;
static void Lock_Ctrl_UNLOCKDTCDETECT_Init(boolean *rty_bUnLockDTCflag);
static void Lock_Ctrl_UNLOCKDTCDETECT(boolean rtu_bUnLockSW, boolean *rty_bUnLockDTCflag, rtDW_UNLOCKDTCDETECT_Lock_Ctrl *localDW);
static void Lock_Ctrl_Chart_Init(uint8 *rty_UdsReq);
static void Lock_Ctrl_Chart(uint8 rtu_UdsCmd, boolean rtu_UdsTrig, uint16 rtu_VehSpd, boolean rtu_VehSpdVD, uint8 rtu_UsageMode, uint8 *rty_UdsReq, rtDW_Chart_Lock_Ctrl *localDW);
static void Lock_Ctrl_Chart1_Init(uint8 *rty_gLockCtrl_u8PowerDoorCmd, uint8 *rty_gLockCtrl_u8PowerDoorCmdTmp);
static void Lock_Ctrl_Chart1(boolean rtu_gLockCtrl_bPowerDoorReqEn, uint8 rtu_gLockCtrl_u8PowerDoorCmdNew, uint8 *rty_gLockCtrl_u8PowerDoorCmd, uint8 *rty_gLockCtrl_u8PowerDoorCmdTmp, rtDW_Chart1_Lock_Ctrl *localDW);
static void Lock_Ctrl_Chart_b_Init(boolean *rty_bPwrRelsFailedRemind);
static void Lock_Ctrl_Chart_f(uint8 rtu_gPRM_u8PowerDoorCfg, uint8 rtu_u8PowerDoorRelDoneFlag, boolean rtu_bDoorOpenSt, boolean *rty_bPwrRelsFailedRemind, rtDW_Chart_Lock_Ctrl_n *localDW);
static void Lock_Ctrl_Chart_g_Init(uint8 *rty_UdsReq);
static void Lock_Ctrl_Chart_k(uint8 rtu_UdsCmd, boolean rtu_UdsTrig, uint8 *rty_UdsReq, rtDW_Chart_Lock_Ctrl_d *localDW);
static void bFrontLeftDoorKeepAwakeFla_Init(boolean *rty_bNMLocKeepAwakeFlag);
static void Loc_bFrontLeftDoorKeepAwakeFlag(boolean rtu_bActiveSt, uint8 rtu_gPRM_u8tAjarKeepAwakeCfg, boolean *rty_bNMLocKeepAwakeFlag, rtDW_bFrontLeftDoorKeepAwakeFla *localDW);
static void bRLSecondLockFeedbackSwKee_Init(boolean *rty_bNMLocKeepAwakeFlag);
static void bRLSecondLockFeedbackSwKeepAwak(boolean rtu_bActiveSt, boolean *rty_bNMLocKeepAwakeFlag, rtDW_bRLSecondLockFeedbackSwKee *localDW);

/* Forward declaration for local functions */
static void Lock_Ct_enter_internal_NoAction(const float32 *gLOC_u16ChrgCapPosVolt);
static void Lock_Ctrl_ReqDect(void);
static void Lock_Ctrl_ReqCmd(void);
static void Lock_Ctrl_ReqDect_d(void);
static void Lock_Ctrl_ReqCmd_n(void);

/*
 * System initialize for atomic system:
 *    '<S4>/UNLOCKDTCDETECT'
 *    '<S5>/UNLOCKDTCDETECT'
 *    '<S6>/UNLOCKDTCDETECT'
 */
static void Lock_Ctrl_UNLOCKDTCDETECT_Init(boolean *rty_bUnLockDTCflag)
{
  *rty_bUnLockDTCflag = false;
}

/*
 * Output and update for atomic system:
 *    '<S4>/UNLOCKDTCDETECT'
 *    '<S5>/UNLOCKDTCDETECT'
 *    '<S6>/UNLOCKDTCDETECT'
 */
static void Lock_Ctrl_UNLOCKDTCDETECT(boolean rtu_bUnLockSW, boolean *rty_bUnLockDTCflag, rtDW_UNLOCKDTCDETECT_Lock_Ctrl *localDW)
{
  /* Chart: '<S4>/UNLOCKDTCDETECT' */
  if (localDW->temporalCounter_i1 < 8191U) {
    localDW->temporalCounter_i1++;
  }

  localDW->bUnLockSW_prev = localDW->bUnLockSW_start;
  localDW->bUnLockSW_start = rtu_bUnLockSW;

  /* Chart: '<S4>/UNLOCKDTCDETECT' */
  if (localDW->is_active_c4_Lock_Ctrl == 0U) {
    localDW->bUnLockSW_prev = rtu_bUnLockSW;
    localDW->is_active_c4_Lock_Ctrl = 1U;
    localDW->is_c4_Lock_Ctrl = Lock_Ctrl_IN_NULL;
    *rty_bUnLockDTCflag = false;
  } else {
    switch (localDW->is_c4_Lock_Ctrl) {
     case Lock_Ctrl_IN_LOCKDTC:
      if (!rtu_bUnLockSW) {
        localDW->is_c4_Lock_Ctrl = Lock_Ctrl_IN_hold2;
        localDW->temporalCounter_i1 = 0U;
      }
      break;

     case Lock_Ctrl_IN_NULL:
      if ((localDW->bUnLockSW_prev != localDW->bUnLockSW_start) && localDW->bUnLockSW_start) {
        localDW->is_c4_Lock_Ctrl = Lock_Ctrl_IN_hold1;
        localDW->temporalCounter_i1 = 0U;
      }
      break;

     case Lock_Ctrl_IN_hold1:
      if (!rtu_bUnLockSW) {
        localDW->is_c4_Lock_Ctrl = Lock_Ctrl_IN_NULL;
        *rty_bUnLockDTCflag = false;
      } else {
        if (localDW->temporalCounter_i1 >= 6000) {
          localDW->is_c4_Lock_Ctrl = Lock_Ctrl_IN_LOCKDTC;
          *rty_bUnLockDTCflag = true;
        }
      }
      break;

     default:
      if (rtu_bUnLockSW) {
        localDW->is_c4_Lock_Ctrl = Lock_Ctrl_IN_LOCKDTC;
        *rty_bUnLockDTCflag = true;
      } else {
        if (localDW->temporalCounter_i1 >= 20) {
          localDW->is_c4_Lock_Ctrl = Lock_Ctrl_IN_NULL;
          *rty_bUnLockDTCflag = false;
        }
      }
      break;
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S55>/Chart'
 *    '<S78>/Chart'
 */
static void Lock_Ctrl_Chart_Init(uint8 *rty_UdsReq)
{
  *rty_UdsReq = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S55>/Chart'
 *    '<S78>/Chart'
 */
static void Lock_Ctrl_Chart(uint8 rtu_UdsCmd, boolean rtu_UdsTrig, uint16 rtu_VehSpd, boolean rtu_VehSpdVD, uint8 rtu_UsageMode, uint8 *rty_UdsReq, rtDW_Chart_Lock_Ctrl *localDW)
{
  /* Chart: '<S55>/Chart' */
  if (localDW->temporalCounter_i1 < 3U) {
    localDW->temporalCounter_i1++;
  }

  localDW->UdsCmd_prev = localDW->UdsCmd_start;
  localDW->UdsCmd_start = rtu_UdsCmd;
  localDW->UdsTrig_prev = localDW->UdsTrig_start;
  localDW->UdsTrig_start = rtu_UdsTrig;

  /* Chart: '<S55>/Chart' */
  if (localDW->is_active_c32_Lock_Ctrl == 0U) {
    localDW->UdsCmd_prev = rtu_UdsCmd;
    localDW->UdsTrig_prev = rtu_UdsTrig;
    localDW->is_active_c32_Lock_Ctrl = 1U;
    localDW->is_c32_Lock_Ctrl = Lock_Ctrl_IN_NoReq;
    *rty_UdsReq = 0U;
  } else if (localDW->is_c32_Lock_Ctrl == Lock_Ctrl_IN_NoReq) {
    *rty_UdsReq = 0U;
    if (((rtu_VehSpd <= 3) && rtu_VehSpdVD) || ((!rtu_VehSpdVD) && (rtu_UsageMode != 3))) {
      if ((rtu_UdsTrig && ((localDW->UdsCmd_prev != localDW->UdsCmd_start) && (localDW->UdsCmd_start == 2))) || ((rtu_UdsCmd == 2) && ((localDW->UdsTrig_prev != localDW->UdsTrig_start) && localDW->UdsTrig_start))) {
        localDW->is_c32_Lock_Ctrl = Lock_Ctrl_IN_Req;
        localDW->temporalCounter_i1 = 0U;
        *rty_UdsReq = 2U;
      } else {
        localDW->is_c32_Lock_Ctrl = Lock_Ctrl_IN_NoReq;
        *rty_UdsReq = 0U;
      }
    }
  } else {
    *rty_UdsReq = 2U;
    if (localDW->temporalCounter_i1 >= 2) {
      localDW->is_c32_Lock_Ctrl = Lock_Ctrl_IN_NoReq;
      *rty_UdsReq = 0U;
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S56>/Chart1'
 *    '<S79>/Chart1'
 */
static void Lock_Ctrl_Chart1_Init(uint8 *rty_gLockCtrl_u8PowerDoorCmd, uint8 *rty_gLockCtrl_u8PowerDoorCmdTmp)
{
  *rty_gLockCtrl_u8PowerDoorCmd = 0U;
  *rty_gLockCtrl_u8PowerDoorCmdTmp = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S56>/Chart1'
 *    '<S79>/Chart1'
 */
static void Lock_Ctrl_Chart1(boolean rtu_gLockCtrl_bPowerDoorReqEn, uint8 rtu_gLockCtrl_u8PowerDoorCmdNew, uint8 *rty_gLockCtrl_u8PowerDoorCmd, uint8 *rty_gLockCtrl_u8PowerDoorCmdTmp, rtDW_Chart1_Lock_Ctrl *localDW)
{
  boolean guard1 = false;

  /* Chart: '<S56>/Chart1' */
  if (localDW->temporalCounter_i1 < 3U) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c33_Lock_Ctrl == 0U) {
    localDW->is_active_c33_Lock_Ctrl = 1U;
    localDW->is_c33_Lock_Ctrl = Lock_Ctrl_IN_Clear;
    *rty_gLockCtrl_u8PowerDoorCmd = 0U;
  } else {
    guard1 = false;
    switch (localDW->is_c33_Lock_Ctrl) {
     case Lock_Ctrl_IN_Clear:
      if (rtu_gLockCtrl_bPowerDoorReqEn && (*rty_gLockCtrl_u8PowerDoorCmdTmp != 0)) {
        guard1 = true;
      } else if (rtu_gLockCtrl_bPowerDoorReqEn && (rtu_gLockCtrl_u8PowerDoorCmdNew != 0)) {
        *rty_gLockCtrl_u8PowerDoorCmdTmp = rtu_gLockCtrl_u8PowerDoorCmdNew;
        guard1 = true;
      } else {
        if (rtu_gLockCtrl_u8PowerDoorCmdNew != 0) {
          localDW->is_c33_Lock_Ctrl = Lock_Ctrl_IN_Update;
          *rty_gLockCtrl_u8PowerDoorCmdTmp = rtu_gLockCtrl_u8PowerDoorCmdNew;
        }
      }
      break;

     case Lock_Ctrl_IN_ReqChangeOutput:
      if (localDW->temporalCounter_i1 >= 2) {
        *rty_gLockCtrl_u8PowerDoorCmdTmp = 0U;
        localDW->is_c33_Lock_Ctrl = Lock_Ctrl_IN_Clear;
        *rty_gLockCtrl_u8PowerDoorCmd = 0U;
      }
      break;

     default:
      if (rtu_gLockCtrl_bPowerDoorReqEn && (*rty_gLockCtrl_u8PowerDoorCmdTmp != 0)) {
        localDW->is_c33_Lock_Ctrl = Lock_Ctrl_IN_ReqChangeOutput;
        localDW->temporalCounter_i1 = 0U;
        *rty_gLockCtrl_u8PowerDoorCmd = *rty_gLockCtrl_u8PowerDoorCmdTmp;
      } else if (rtu_gLockCtrl_u8PowerDoorCmdNew == 0) {
        localDW->is_c33_Lock_Ctrl = Lock_Ctrl_IN_Clear;
        *rty_gLockCtrl_u8PowerDoorCmd = 0U;
      } else {
        *rty_gLockCtrl_u8PowerDoorCmdTmp = rtu_gLockCtrl_u8PowerDoorCmdNew;
      }
      break;
    }

    if (guard1) {
      localDW->is_c33_Lock_Ctrl = Lock_Ctrl_IN_ReqChangeOutput;
      localDW->temporalCounter_i1 = 0U;
      *rty_gLockCtrl_u8PowerDoorCmd = *rty_gLockCtrl_u8PowerDoorCmdTmp;
    }
  }

  /* End of Chart: '<S56>/Chart1' */
}

/*
 * System initialize for atomic system:
 *    '<S57>/Chart'
 *    '<S80>/Chart'
 */
static void Lock_Ctrl_Chart_b_Init(boolean *rty_bPwrRelsFailedRemind)
{
  *rty_bPwrRelsFailedRemind = false;
}

/*
 * Output and update for atomic system:
 *    '<S57>/Chart'
 *    '<S80>/Chart'
 */
static void Lock_Ctrl_Chart_f(uint8 rtu_gPRM_u8PowerDoorCfg, uint8 rtu_u8PowerDoorRelDoneFlag, boolean rtu_bDoorOpenSt, boolean *rty_bPwrRelsFailedRemind, rtDW_Chart_Lock_Ctrl_n *localDW)
{
  /* Chart: '<S57>/Chart' */
  if (localDW->temporalCounter_i1 < 63U) {
    localDW->temporalCounter_i1++;
  }

  localDW->u8PowerDoorRelDoneFlag_prev = localDW->u8PowerDoorRelDoneFlag_start;
  localDW->u8PowerDoorRelDoneFlag_start = rtu_u8PowerDoorRelDoneFlag;

  /* Chart: '<S57>/Chart' */
  if (localDW->is_active_c34_Lock_Ctrl == 0U) {
    localDW->u8PowerDoorRelDoneFlag_prev = rtu_u8PowerDoorRelDoneFlag;
    localDW->is_active_c34_Lock_Ctrl = 1U;
    localDW->is_c34_Lock_Ctrl = Lock_Ctrl_IN_NoRemind;
    *rty_bPwrRelsFailedRemind = false;
  } else {
    switch (localDW->is_c34_Lock_Ctrl) {
     case Lock_Ctrl_IN_Hold1:
      if (localDW->temporalCounter_i1 >= 30) {
        localDW->is_c34_Lock_Ctrl = Lock_Ctrl_IN_Hold2;
      }
      break;

     case Lock_Ctrl_IN_Hold2:
      if (!rtu_bDoorOpenSt) {
        localDW->is_c34_Lock_Ctrl = Lock_Ctrl_IN_Remind;
        localDW->temporalCounter_i1 = 0U;
        *rty_bPwrRelsFailedRemind = true;
      } else {
        localDW->is_c34_Lock_Ctrl = Lock_Ctrl_IN_NoRemind;
        *rty_bPwrRelsFailedRemind = false;
      }
      break;

     case Lock_Ctrl_IN_NoRemind:
      if (((rtu_gPRM_u8PowerDoorCfg == 2) || (rtu_gPRM_u8PowerDoorCfg == 3)) && ((localDW->u8PowerDoorRelDoneFlag_prev != localDW->u8PowerDoorRelDoneFlag_start) && (localDW->u8PowerDoorRelDoneFlag_start == 1))) {
        localDW->is_c34_Lock_Ctrl = Lock_Ctrl_IN_Hold1;
        localDW->temporalCounter_i1 = 0U;
      }
      break;

     default:
      if (localDW->temporalCounter_i1 >= 35) {
        localDW->is_c34_Lock_Ctrl = Lock_Ctrl_IN_NoRemind;
        *rty_bPwrRelsFailedRemind = false;
      }
      break;
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S64>/Chart'
 *    '<S68>/Chart'
 *    '<S72>/Chart'
 *    '<S84>/Chart'
 */
static void Lock_Ctrl_Chart_g_Init(uint8 *rty_UdsReq)
{
  *rty_UdsReq = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S64>/Chart'
 *    '<S68>/Chart'
 *    '<S72>/Chart'
 *    '<S84>/Chart'
 */
static void Lock_Ctrl_Chart_k(uint8 rtu_UdsCmd, boolean rtu_UdsTrig, uint8 *rty_UdsReq, rtDW_Chart_Lock_Ctrl_d *localDW)
{
  /* Chart: '<S64>/Chart' */
  if (localDW->temporalCounter_i1 < 3U) {
    localDW->temporalCounter_i1++;
  }

  localDW->UdsTrig_prev = localDW->UdsTrig_start;
  localDW->UdsTrig_start = rtu_UdsTrig;
  localDW->UdsCmd_prev = localDW->UdsCmd_start;
  localDW->UdsCmd_start = rtu_UdsCmd;

  /* Chart: '<S64>/Chart' */
  if (localDW->is_active_c42_Lock_Ctrl == 0U) {
    localDW->UdsTrig_prev = rtu_UdsTrig;
    localDW->UdsCmd_prev = rtu_UdsCmd;
    localDW->is_active_c42_Lock_Ctrl = 1U;
    localDW->is_c42_Lock_Ctrl = Lock_Ctrl_IN_NoReq_e;
    *rty_UdsReq = 0U;
  } else if (localDW->is_c42_Lock_Ctrl == Lock_Ctrl_IN_NoReq_e) {
    *rty_UdsReq = 0U;
    if (((rtu_UdsCmd == 1) && ((localDW->UdsTrig_prev != localDW->UdsTrig_start) && localDW->UdsTrig_start)) || (rtu_UdsTrig && ((localDW->UdsCmd_prev != localDW->UdsCmd_start) && (localDW->UdsCmd_start == 1)))) {
      localDW->is_c42_Lock_Ctrl = Lock_Ctrl_IN_Req_p;
      localDW->temporalCounter_i1 = 0U;
      localDW->is_Req = Lock_Ctrl_IN_Lock;
      *rty_UdsReq = 1U;
    } else {
      if (((rtu_UdsCmd == 2) && ((localDW->UdsTrig_prev != localDW->UdsTrig_start) && localDW->UdsTrig_start)) || (rtu_UdsTrig && ((localDW->UdsCmd_prev != localDW->UdsCmd_start) && (localDW->UdsCmd_start == 2)))) {
        localDW->is_c42_Lock_Ctrl = Lock_Ctrl_IN_Req_p;
        localDW->temporalCounter_i1 = 0U;
        localDW->is_Req = Lock_Ctrl_IN_UnLock;
        *rty_UdsReq = 4U;
      }
    }
  } else if (localDW->temporalCounter_i1 >= 2) {
    localDW->is_Req = Lock_Ctrl_IN_NO_ACTIVE_CHILD_i;
    localDW->is_c42_Lock_Ctrl = Lock_Ctrl_IN_NoReq_e;
    *rty_UdsReq = 0U;
  } else if (localDW->is_Req == Lock_Ctrl_IN_Lock) {
    *rty_UdsReq = 1U;
  } else {
    *rty_UdsReq = 4U;
  }
}

/*
 * System initialize for atomic system:
 *    '<S3>/bFrontLeftDoorKeepAwakeFlag'
 *    '<S3>/bRRDoorAjarSwKeepAwakeFlag'
 *    '<S3>/bTrunkAjarSwKeepAwakeFlag'
 */
static void bFrontLeftDoorKeepAwakeFla_Init(boolean *rty_bNMLocKeepAwakeFlag)
{
  *rty_bNMLocKeepAwakeFlag = false;
}

/*
 * Output and update for atomic system:
 *    '<S3>/bFrontLeftDoorKeepAwakeFlag'
 *    '<S3>/bRRDoorAjarSwKeepAwakeFlag'
 *    '<S3>/bTrunkAjarSwKeepAwakeFlag'
 */
static void Loc_bFrontLeftDoorKeepAwakeFlag(boolean rtu_bActiveSt, uint8 rtu_gPRM_u8tAjarKeepAwakeCfg, boolean *rty_bNMLocKeepAwakeFlag, rtDW_bFrontLeftDoorKeepAwakeFla *localDW)
{
  /* Chart: '<S3>/bFrontLeftDoorKeepAwakeFlag' */
  if (localDW->temporalCounter_i1 < 4095U) {
    localDW->temporalCounter_i1++;
  }

  localDW->bActiveSt_prev = localDW->bActiveSt_start;
  localDW->bActiveSt_start = rtu_bActiveSt;

  /* Chart: '<S3>/bFrontLeftDoorKeepAwakeFlag' */
  if (localDW->is_active_c112_Lock_Ctrl == 0U) {
    localDW->bActiveSt_prev = rtu_bActiveSt;
    localDW->is_active_c112_Lock_Ctrl = 1U;
    if (rtu_bActiveSt) {
      /* &#x5F00; */
      localDW->is_c112_Lock_Ctrl = Lock_Ctrl_IN_OPEN;
      localDW->temporalCounter_i1 = 0U;
      *rty_bNMLocKeepAwakeFlag = true;
    } else {
      localDW->is_c112_Lock_Ctrl = Lock_Ctrl_IN_Close;
      localDW->temporalCounter_i1 = 0U;
      *rty_bNMLocKeepAwakeFlag = true;
    }
  } else {
    switch (localDW->is_c112_Lock_Ctrl) {
     case Lock_Ctrl_IN_CLCFLAG:
      if ((localDW->bActiveSt_prev != localDW->bActiveSt_start) && localDW->bActiveSt_start) {
        localDW->is_c112_Lock_Ctrl = Lock_Ctrl_IN_OPEN;
        localDW->temporalCounter_i1 = 0U;
        *rty_bNMLocKeepAwakeFlag = true;
      } else {
        if ((localDW->bActiveSt_prev != localDW->bActiveSt_start) && (!localDW->bActiveSt_start)) {
          localDW->is_c112_Lock_Ctrl = Lock_Ctrl_IN_Close;
          localDW->temporalCounter_i1 = 0U;
          *rty_bNMLocKeepAwakeFlag = true;
        }
      }
      break;

     case Lock_Ctrl_IN_Close:
      if ((localDW->bActiveSt_prev != localDW->bActiveSt_start) && localDW->bActiveSt_start) {
        localDW->is_c112_Lock_Ctrl = Lock_Ctrl_IN_OPEN;
        localDW->temporalCounter_i1 = 0U;
        *rty_bNMLocKeepAwakeFlag = true;
      } else {
        if (localDW->temporalCounter_i1 >= 3000) {
          localDW->is_c112_Lock_Ctrl = Lock_Ctrl_IN_CLCFLAG;
          *rty_bNMLocKeepAwakeFlag = false;
        }
      }
      break;

     default:
      if (localDW->temporalCounter_i1 >= rtu_gPRM_u8tAjarKeepAwakeCfg) {
        localDW->is_c112_Lock_Ctrl = Lock_Ctrl_IN_CLCFLAG;
        *rty_bNMLocKeepAwakeFlag = false;
      } else {
        if ((localDW->bActiveSt_prev != localDW->bActiveSt_start) && (!localDW->bActiveSt_start)) {
          localDW->is_c112_Lock_Ctrl = Lock_Ctrl_IN_Close;
          localDW->temporalCounter_i1 = 0U;
          *rty_bNMLocKeepAwakeFlag = true;
        }
      }
      break;
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag2'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag3'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag4'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag5'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag6'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag7'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag9'
 */
static void bRLSecondLockFeedbackSwKee_Init(boolean *rty_bNMLocKeepAwakeFlag)
{
  *rty_bNMLocKeepAwakeFlag = false;
}

/*
 * Output and update for atomic system:
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag2'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag3'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag4'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag5'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag6'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag7'
 *    '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag9'
 */
static void bRLSecondLockFeedbackSwKeepAwak(boolean rtu_bActiveSt, boolean *rty_bNMLocKeepAwakeFlag, rtDW_bRLSecondLockFeedbackSwKee *localDW)
{
  /* Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1' */
  if (localDW->temporalCounter_i1 < 4095U) {
    localDW->temporalCounter_i1++;
  }

  localDW->bActiveSt_prev = localDW->bActiveSt_start;
  localDW->bActiveSt_start = rtu_bActiveSt;

  /* Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1' */
  if (localDW->is_active_c113_Lock_Ctrl == 0U) {
    localDW->bActiveSt_prev = rtu_bActiveSt;
    localDW->is_active_c113_Lock_Ctrl = 1U;
    localDW->is_c113_Lock_Ctrl = Lock_Ctrl_IN_OPEN_b;
    localDW->temporalCounter_i1 = 0U;
    *rty_bNMLocKeepAwakeFlag = true;
  } else if (localDW->is_c113_Lock_Ctrl == Lock_Ctrl_IN_Close_m) {
    if (localDW->bActiveSt_prev != localDW->bActiveSt_start) {
      localDW->is_c113_Lock_Ctrl = Lock_Ctrl_IN_OPEN_b;
      localDW->temporalCounter_i1 = 0U;
      *rty_bNMLocKeepAwakeFlag = true;
    }
  } else if (localDW->bActiveSt_prev != localDW->bActiveSt_start) {
    localDW->is_c113_Lock_Ctrl = Lock_Ctrl_IN_OPEN_b;
    localDW->temporalCounter_i1 = 0U;
    *rty_bNMLocKeepAwakeFlag = true;
  } else {
    if (localDW->temporalCounter_i1 >= 3000) {
      localDW->is_c113_Lock_Ctrl = Lock_Ctrl_IN_Close_m;
      *rty_bNMLocKeepAwakeFlag = false;
    }
  }
}

/* Function for Chart: '<S27>/FillerCapBLockMotor' */
static void Lock_Ct_enter_internal_NoAction(const float32 *gLOC_u16ChrgCapPosVolt)
{
  sint32 tmp;
  Lock_Ctrl_B.LCK_FillerCapAction = 0U;
  Lock_Ctrl_DWork.u16StallTimer1 = 0U;
  Lock_Ctrl_DWork.u16StallTimer2 = 0U;
  Lock_Ctrl_DWork.u16WaitTimer1 = 0U;
  Lock_Ctrl_DWork.u16WaitTimer2 = 0U;
  Lock_Ctrl_DWork.u16CloseTimer = 0U;
  Lock_Ctrl_DWork.u16OpenTimer = 0U;
  Lock_Ctrl_DWork.u16NoActionTimer = 0U;

  /* Constant: '<S27>/Constant3' */
  if (Lock_Ctrl_DWork.u16NoActionTimer >= 50) {
    Lock_Ctrl_DWork.bActionFlag = false;
  } else {
    tmp = Lock_Ctrl_DWork.u16NoActionTimer + 1;
    if (tmp > 65535) {
      tmp = 65535;
    }

    Lock_Ctrl_DWork.u16NoActionTimer = (uint16)tmp;
    if (Lock_Ctrl_DWork.bStallCloseFinishFlag && (Lock_Ctrl_DWork.u16NoActionTimer >= Rte_CData_Cal_UinitDelay()) && (*gLOC_u16ChrgCapPosVolt < 2.6)) {
      Lock_Ctrl_B.FillerCapAngleVoltInitOut = *gLOC_u16ChrgCapPosVolt;
      Lock_Ctrl_DWork.bStallCloseFinishFlag = false;
    }
  }

  /* End of Constant: '<S27>/Constant3' */
}

/* Function for Chart: '<S30>/DoorsMotorOutput' */
static void Lock_Ctrl_ReqDect(void)
{
  switch (Lock_Ctrl_DWork.is_ReqDect_b) {
   case Lock_Ctrl_IN_Null:
    if (Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag) {
      if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 1)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_RELOCKREQ_g;
        Lock_Ctrl_B.bRelockflag_n = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 6)) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
        Lock_Ctrl_B.bReEmergencyunlockflag_k = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 5)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalReverseUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_REREVERSEUNLOCKREQ;
        Lock_Ctrl_B.bReReverseunlockflag_f = true;
      } else {
        if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 4)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_REUNLOCKREQ_a;
          Lock_Ctrl_B.bReunlockflag_g = true;
        }
      }
    }
    break;

   case Lock_Ct_IN_REEMERGENCYUNLOCKREQ:
    if (Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag) {
      if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 1)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReEmergencyunlockflag_k = false;
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_RELOCKREQ_g;
        Lock_Ctrl_B.bRelockflag_n = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 6)) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
        Lock_Ctrl_B.bReEmergencyunlockflag_k = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 5)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalReverseUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReEmergencyunlockflag_k = false;
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_REREVERSEUNLOCKREQ;
        Lock_Ctrl_B.bReReverseunlockflag_f = true;
      } else {
        if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 4)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bReEmergencyunlockflag_k = false;
          Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_REUNLOCKREQ_a;
          Lock_Ctrl_B.bReunlockflag_g = true;
        }
      }
    }
    break;

   case Lock_Ctrl_IN_RELOCKREQ_g:
    if (Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag) {
      if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 1)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_RELOCKREQ_g;
        Lock_Ctrl_B.bRelockflag_n = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 6)) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bRelockflag_n = false;
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
        Lock_Ctrl_B.bReEmergencyunlockflag_k = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 5)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalReverseUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bRelockflag_n = false;
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_REREVERSEUNLOCKREQ;
        Lock_Ctrl_B.bReReverseunlockflag_f = true;
      } else {
        if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 4)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bRelockflag_n = false;
          Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_REUNLOCKREQ_a;
          Lock_Ctrl_B.bReunlockflag_g = true;
        }
      }
    }
    break;

   case Lock_Ctrl_IN_REREVERSEUNLOCKREQ:
    if (Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag) {
      if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 1)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReReverseunlockflag_f = false;
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_RELOCKREQ_g;
        Lock_Ctrl_B.bRelockflag_n = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 6)) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReReverseunlockflag_f = false;
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
        Lock_Ctrl_B.bReEmergencyunlockflag_k = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 5)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalReverseUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_REREVERSEUNLOCKREQ;
        Lock_Ctrl_B.bReReverseunlockflag_f = true;
      } else {
        if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 4)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bReReverseunlockflag_f = false;
          Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_REUNLOCKREQ_a;
          Lock_Ctrl_B.bReunlockflag_g = true;
        }
      }
    }
    break;

   default:
    if (Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag) {
      if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 1)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReunlockflag_g = false;
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_RELOCKREQ_g;
        Lock_Ctrl_B.bRelockflag_n = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 6)) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReunlockflag_g = false;
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
        Lock_Ctrl_B.bReEmergencyunlockflag_k = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 5)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalReverseUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReunlockflag_g = false;
        Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_REREVERSEUNLOCKREQ;
        Lock_Ctrl_B.bReReverseunlockflag_f = true;
      } else {
        if ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 4)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_REUNLOCKREQ_a;
          Lock_Ctrl_B.bReunlockflag_g = true;
        }
      }
    }
    break;
  }
}

/* Function for Chart: '<S30>/DoorsMotorOutput' */
static void Lock_Ctrl_ReqCmd(void)
{
  switch (Lock_Ctrl_DWork.is_ReqCmd_o) {
   case Lock_Ctrl_IN_CentralLock:
    Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 1U;
    if (Lock_Ctrl_DWork.temporalCounter_i1_p >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
      /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NULL;
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_wait_l;
      Lock_Ctrl_DWork.temporalCounter_i1_p = 0U;
      Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
    }
    break;

   case Lock_Ctrl_IN_CentralUnlock:
    Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 2U;
    if (Lock_Ctrl_DWork.temporalCounter_i1_p >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
      /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NULL;
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_wait1_k;
      Lock_Ctrl_DWork.temporalCounter_i1_p = 0U;
      Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
    }
    break;

   case Lock_Ctrl_IN_EmergrencyUnlock:
    Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 2U;
    if (Lock_Ctrl_DWork.temporalCounter_i1_p >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
      /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NULL;
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_hold1_a;
      Lock_Ctrl_DWork.temporalCounter_i1_p = 0U;
    }
    break;

   case Lock_Ctrl_IN_EmergrencyUnlock1:
    if (Lock_Ctrl_DWork.temporalCounter_i1_p >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
      /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NULL;
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_wait3_n;
      Lock_Ctrl_DWork.temporalCounter_i1_p = 0U;
      Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
    }
    break;

   case Lock_Ctrl_IN_Lock_il:
    Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 2U;
    if (Lock_Ctrl_DWork.temporalCounter_i1_p >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
      /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NULL;
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_hold_o;
      Lock_Ctrl_DWork.temporalCounter_i1_p = 0U;
    }
    break;

   case Lock_Ctrl_IN_NULL_l:
    Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
    if (Lock_Ctrl_B.bRelockflag_n || ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 1))) {
      /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_CentralLock;
      Lock_Ctrl_DWork.temporalCounter_i1_p = 0U;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NORMAL_LOCK;
      Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 1U;
      Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag = true;
      Lock_Ctrl_B.bRelockflag_n = false;
    } else if (Lock_Ctrl_B.bReunlockflag_g || ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 4))) {
      /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_CentralUnlock;
      Lock_Ctrl_DWork.temporalCounter_i1_p = 0U;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NORMAL_UNLOCK;
      Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 2U;
      Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag = true;
      Lock_Ctrl_B.bReunlockflag_g = false;
    } else if (Lock_Ctrl_B.bReReverseunlockflag_f || ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 5))) {
      /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock
         &#x5EF6;&#x8FDF;tIntervalReverseUnlock
         &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_Lock_il;
      Lock_Ctrl_DWork.temporalCounter_i1_p = 0U;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NORMAL_LOCK;
      Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 2U;
      Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag = true;
      Lock_Ctrl_B.bReReverseunlockflag_f = false;
    } else {
      if (Lock_Ctrl_B.bReEmergencyunlockflag_k || ((Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start == 6))) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_EmergrencyUnlock;
        Lock_Ctrl_DWork.temporalCounter_i1_p = 0U;
        Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NORMAL_UNLOCK;
        Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 2U;
        Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag = true;
        Lock_Ctrl_B.bReEmergencyunlockflag_k = false;
      }
    }
    break;

   case Lock_Ctrl_IN_Unlock:
    if (Lock_Ctrl_DWork.temporalCounter_i1_p >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
      /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NULL;
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_wait2;
      Lock_Ctrl_DWork.temporalCounter_i1_p = 0U;
      Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
    }
    break;

   case Lock_Ctrl_IN_hold_o:
    if (Lock_Ctrl_DWork.temporalCounter_i1_p >= Lock_Ctrl_B.gPRM_u8tIntervalReverseUnlockCf) {
      /* &#x5EF6;&#x8FDF;tIntervalReverseUnlock */
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_Unlock;
      Lock_Ctrl_DWork.temporalCounter_i1_p = 0U;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NORMAL_UNLOCK;
    }
    break;

   case Lock_Ctrl_IN_hold1_a:
    if (Lock_Ctrl_DWork.temporalCounter_i1_p >= (uint32)(Lock_Ctrl_B.gPRM_u8tIntervalEmgcUnlockCfg * 10)) {
      /* &#x5EF6;&#x8FDF;tIntervalEmgcUnlock */
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_EmergrencyUnlock1;
      Lock_Ctrl_DWork.temporalCounter_i1_p = 0U;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NORMAL_UNLOCK;
    }
    break;

   case Lock_Ctrl_IN_wait_l:
    Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
    if (Lock_Ctrl_DWork.temporalCounter_i1_p >= 20U) {
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_NULL_l;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NULL;
      Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
      Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag = false;
    }
    break;

   case Lock_Ctrl_IN_wait1_k:
    Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
    if (Lock_Ctrl_DWork.temporalCounter_i1_p >= 20U) {
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_NULL_l;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NULL;
      Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
      Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag = false;
    }
    break;

   case Lock_Ctrl_IN_wait2:
    Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
    if (Lock_Ctrl_DWork.temporalCounter_i1_p >= 20U) {
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_NULL_l;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NULL;
      Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
      Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag = false;
    }
    break;

   default:
    Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
    if (Lock_Ctrl_DWork.temporalCounter_i1_p >= 20U) {
      Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_NULL_l;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NULL;
      Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
      Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag = false;
    }
    break;
  }
}

/* Function for Chart: '<S34>/DoorsMotorOutput' */
static void Lock_Ctrl_ReqDect_d(void)
{
  switch (Lock_Ctrl_DWork.is_ReqDect) {
   case Lock_Ctrl_IN_Null:
    if (Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag) {
      if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 1)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_RELOCKREQ_g;
        Lock_Ctrl_B.bRelockflag = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 6)) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
        Lock_Ctrl_B.bReEmergencyunlockflag = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 5)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalReverseUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_REREVERSEUNLOCKREQ;
        Lock_Ctrl_B.bReReverseunlockflag = true;
      } else {
        if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 4)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_REUNLOCKREQ_a;
          Lock_Ctrl_B.bReunlockflag = true;
        }
      }
    }
    break;

   case Lock_Ct_IN_REEMERGENCYUNLOCKREQ:
    if (Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag) {
      if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 1)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReEmergencyunlockflag = false;
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_RELOCKREQ_g;
        Lock_Ctrl_B.bRelockflag = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 6)) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
        Lock_Ctrl_B.bReEmergencyunlockflag = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 5)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalReverseUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReEmergencyunlockflag = false;
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_REREVERSEUNLOCKREQ;
        Lock_Ctrl_B.bReReverseunlockflag = true;
      } else {
        if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 4)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bReEmergencyunlockflag = false;
          Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_REUNLOCKREQ_a;
          Lock_Ctrl_B.bReunlockflag = true;
        }
      }
    }
    break;

   case Lock_Ctrl_IN_RELOCKREQ_g:
    if (Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag) {
      if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 1)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_RELOCKREQ_g;
        Lock_Ctrl_B.bRelockflag = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 6)) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bRelockflag = false;
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
        Lock_Ctrl_B.bReEmergencyunlockflag = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 5)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalReverseUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bRelockflag = false;
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_REREVERSEUNLOCKREQ;
        Lock_Ctrl_B.bReReverseunlockflag = true;
      } else {
        if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 4)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bRelockflag = false;
          Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_REUNLOCKREQ_a;
          Lock_Ctrl_B.bReunlockflag = true;
        }
      }
    }
    break;

   case Lock_Ctrl_IN_REREVERSEUNLOCKREQ:
    if (Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag) {
      if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 1)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReReverseunlockflag = false;
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_RELOCKREQ_g;
        Lock_Ctrl_B.bRelockflag = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 6)) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReReverseunlockflag = false;
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
        Lock_Ctrl_B.bReEmergencyunlockflag = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 5)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalReverseUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_REREVERSEUNLOCKREQ;
        Lock_Ctrl_B.bReReverseunlockflag = true;
      } else {
        if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 4)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bReReverseunlockflag = false;
          Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_REUNLOCKREQ_a;
          Lock_Ctrl_B.bReunlockflag = true;
        }
      }
    }
    break;

   default:
    if (Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag) {
      if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 1)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReunlockflag = false;
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_RELOCKREQ_g;
        Lock_Ctrl_B.bRelockflag = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 6)) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReunlockflag = false;
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
        Lock_Ctrl_B.bReEmergencyunlockflag = true;
      } else if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 5)) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalReverseUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_B.bReunlockflag = false;
        Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_REREVERSEUNLOCKREQ;
        Lock_Ctrl_B.bReReverseunlockflag = true;
      } else {
        if ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 4)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_REUNLOCKREQ_a;
          Lock_Ctrl_B.bReunlockflag = true;
        }
      }
    }
    break;
  }
}

/* Function for Chart: '<S34>/DoorsMotorOutput' */
static void Lock_Ctrl_ReqCmd_n(void)
{
  switch (Lock_Ctrl_DWork.is_ReqCmd) {
   case Lock_Ctrl_IN_CentralLock:
    Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 1U;
    if (Lock_Ctrl_DWork.temporalCounter_i1 >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
      /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NULL;
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_wait_l;
      Lock_Ctrl_DWork.temporalCounter_i1 = 0U;
      Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
    }
    break;

   case Lock_Ctrl_IN_CentralUnlock:
    Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 2U;
    if (Lock_Ctrl_DWork.temporalCounter_i1 >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
      /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NULL;
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_wait1_k;
      Lock_Ctrl_DWork.temporalCounter_i1 = 0U;
      Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
    }
    break;

   case Lock_Ctrl_IN_EmergrencyUnlock:
    Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 2U;
    if (Lock_Ctrl_DWork.temporalCounter_i1 >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
      /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NULL;
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_hold1_a;
      Lock_Ctrl_DWork.temporalCounter_i1 = 0U;
    }
    break;

   case Lock_Ctrl_IN_EmergrencyUnlock1:
    if (Lock_Ctrl_DWork.temporalCounter_i1 >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
      /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NULL;
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_wait3_n;
      Lock_Ctrl_DWork.temporalCounter_i1 = 0U;
      Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
    }
    break;

   case Lock_Ctrl_IN_Lock_il:
    Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 2U;
    if (Lock_Ctrl_DWork.temporalCounter_i1 >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
      /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NULL;
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_hold_o;
      Lock_Ctrl_DWork.temporalCounter_i1 = 0U;
    }
    break;

   case Lock_Ctrl_IN_NULL_l:
    Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
    if (Lock_Ctrl_B.bRelockflag || ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 1))) {
      /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_CentralLock;
      Lock_Ctrl_DWork.temporalCounter_i1 = 0U;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NORMAL_LOCK;
      Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 1U;
      Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag = true;
      Lock_Ctrl_B.bRelockflag = false;
    } else if (Lock_Ctrl_B.bReunlockflag || ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 4))) {
      /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_CentralUnlock;
      Lock_Ctrl_DWork.temporalCounter_i1 = 0U;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NORMAL_UNLOCK;
      Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 2U;
      Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag = true;
      Lock_Ctrl_B.bReunlockflag = false;
    } else if (Lock_Ctrl_B.bReReverseunlockflag || ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 5))) {
      /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock
         &#x5EF6;&#x8FDF;tIntervalReverseUnlock
         &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_Lock_il;
      Lock_Ctrl_DWork.temporalCounter_i1 = 0U;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NORMAL_LOCK;
      Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 2U;
      Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag = true;
      Lock_Ctrl_B.bReReverseunlockflag = false;
    } else {
      if (Lock_Ctrl_B.bReEmergencyunlockflag || ((Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start == 6))) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
           &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
           &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_EmergrencyUnlock;
        Lock_Ctrl_DWork.temporalCounter_i1 = 0U;
        Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NORMAL_UNLOCK;
        Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 2U;
        Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag = true;
        Lock_Ctrl_B.bReEmergencyunlockflag = false;
      }
    }
    break;

   case Lock_Ctrl_IN_Unlock:
    if (Lock_Ctrl_DWork.temporalCounter_i1 >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
      /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NULL;
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_wait2;
      Lock_Ctrl_DWork.temporalCounter_i1 = 0U;
      Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
    }
    break;

   case Lock_Ctrl_IN_hold_o:
    if (Lock_Ctrl_DWork.temporalCounter_i1 >= Lock_Ctrl_B.gPRM_u8tIntervalReverseUnlockCf) {
      /* &#x5EF6;&#x8FDF;tIntervalReverseUnlock */
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_Unlock;
      Lock_Ctrl_DWork.temporalCounter_i1 = 0U;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NORMAL_UNLOCK;
    }
    break;

   case Lock_Ctrl_IN_hold1_a:
    if (Lock_Ctrl_DWork.temporalCounter_i1 >= (uint32)(Lock_Ctrl_B.gPRM_u8tIntervalEmgcUnlockCfg * 10)) {
      /* &#x5EF6;&#x8FDF;tIntervalEmgcUnlock */
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_EmergrencyUnlock1;
      Lock_Ctrl_DWork.temporalCounter_i1 = 0U;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NORMAL_UNLOCK;
    }
    break;

   case Lock_Ctrl_IN_wait_l:
    Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
    if (Lock_Ctrl_DWork.temporalCounter_i1 >= 20U) {
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_NULL_l;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NULL;
      Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
      Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag = false;
    }
    break;

   case Lock_Ctrl_IN_wait1_k:
    Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
    if (Lock_Ctrl_DWork.temporalCounter_i1 >= 20U) {
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_NULL_l;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NULL;
      Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
      Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag = false;
    }
    break;

   case Lock_Ctrl_IN_wait2:
    Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
    if (Lock_Ctrl_DWork.temporalCounter_i1 >= 20U) {
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_NULL_l;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NULL;
      Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
      Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag = false;
    }
    break;

   default:
    Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
    if (Lock_Ctrl_DWork.temporalCounter_i1 >= 20U) {
      Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_NULL_l;
      Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NULL;
      Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
      Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag = false;
    }
    break;
  }
}

/* Model step function */
void Lock_Ctrl_Runnable_10ms(void)
{
  /* local block i/o variables */
  uint8 rtb_TmpSignalConversionAtgCAN_u;
  uint8 rtb_gPRM_u8PowerDoorCfg;
  uint8 rtb_gPRM_u8tAjarKeepAwakeCfg;
  uint8 rtb_UdsReq;
  uint8 rtb_UdsReq_i;
  uint8 rtb_UdsReq_e;
  uint8 rtb_UdsReq_i1;
  uint8 rtb_UdsReq_o;
  uint8 rtb_UdsReq_n;
  boolean rtb_TmpSignalConversionAtgLoc_p;
  boolean rtb_TmpSignalConversionAtgLoc_d;
  boolean rtb_gCAN_bBCS_VehSpdVD;
  boolean rtb_gASI_bRLSecondLockFeedbackS;
  boolean rtb_gASI_bRLDoorAjarSw;
  boolean rtb_TmpSignalConversionAtgLoc_l;
  boolean rtb_TmpSignalConversionAtgLoc_m;
  boolean rtb_gASI_bRRSecondLockFeedbackS;
  boolean rtb_gASI_bRRDoorAjarSw;
  boolean rtb_TmpSignalConversionAtgLo_pr;
  boolean rtb_TmpSignalConversionAtgLoc_i;
  boolean rtb_gASI_bTrunkAjarSw;
  boolean rtb_gASI_bRLDoorLockFeedbackSw;
  boolean rtb_TmpSignalConversionAtgDoor_;
  boolean rtb_gASI_bRRDoorLockFeedbackSw;
  boolean rtb_TmpSignalConversionAtgASI_b;
  boolean rtb_gDoor_bFuelFlapAjarSt;
  boolean rtb_TmpSignalConversionAtgASI_h;
  boolean rtb_gASI_bChrgCapSwt;
  boolean tmpRead;
  boolean tmpRead_0;
  uint16 tmpRead_1;
  boolean tmpRead_2;
  boolean tmpRead_3;
  boolean tmpRead_4;
  boolean tmpRead_5;
  boolean tmpRead_6;
  boolean tmpRead_7;
  boolean tmpRead_8;
  boolean tmpRead_9;
  boolean tmpRead_a;
  boolean rtb_gASI_bPowerOnReset;
  uint8 rtb_Switch_by;
  uint16 rtb_gCAN_u16BCS_VehSpd;
  boolean rtb_DTC_RLDoorAjarOL_GetEvent_o;
  boolean rtb_DTC_RLPwrRelsSwtStick_Get_c;
  boolean rtb_DTC_RRDoorAjarOL_GetEvent_n;
  boolean rtb_DTC_RRPwrRelsSwtStick_Get_f;
  sint32 rtb_gLOC_u32LeftAllowSleep_NW;
  uint32 rtb_gLOC_u32TruckAllowSleep_Loc;
  uint8 rtb_gLOC_u8FillerCapLockReqB;
  uint8 rtb_gLOC_u8FillerCapLockReqA;
  uint8 rtb_gLOC_u8BootLockMotorOutput;
  uint8 rtb_gLOC_u8RRPowerDoorReq;
  uint8 rtb_gLOC_u8RLDoorElecRelMotorOu;
  uint8 rtb_gLOC_u8RLDoorElecRelPWMMoto;
  uint8 rtb_gLOC_u8RLPowerDoorReq;
  uint8 rtb_gLOC_u8RLDoorLockReq;
  uint8 rtb_gLOC_u8RRDoorLockReq;
  uint8 rtb_gLOC_u8RLCSLDoorLockReq;
  uint8 rtb_gLOC_u8RRCSLDoorLockReq;
  boolean rtb_gCFG_bLCK_PowerFillerCapCfg;
  uint8 rtb_Switch1;
  uint8 rtb_TmpSignalConversionAtgLock_;
  uint8 rtb_TmpSignalConversionAtgLoc_j;
  uint8 rtb_gLOC_u8FillerCapLock_AActio;
  uint8 rtb_TmpSignalConversionAtgLoc_k;
  uint8 rtb_gLOC_u8TrunkLockAction;
  uint8 rtb_TmpSignalConversionAtgLoc_c;
  uint8 rtb_TmpSignalConversionAtgLo_ib;
  uint8 rtb_TmpSignalConversionAtgLoc_b;
  uint8 rtb_TmpSignalConversionAtgLo_lf;
  uint8 rtb_TmpSignalConversionAtgLoc_f;
  uint8 rtb_TmpSignalConversionAtgLo_ja;
  uint8 rtb_gCAN_u8PowerDoorCommandActi;
  uint8 rtb_gCAN_u8SRS_CrashOutputSt;
  uint8 rtb_gPRM_u8tPowerReleaseCfg;
  uint8 rtb_gPRM_u8tPowerReleaseTimeOut;
  uint8 rtb_gPRM_u8tFillerCapLockUnlock;
  float32 gLOC_u16ChrgCapPosVolt;
  boolean bNMLocKeepAwakeFlag_k;
  float64 tmp;
  boolean tmp_0;
  float32 tmp_Cal_MaxStallVolt;
  float32 tmp_Cal_MinStallVolt;
  uint16 tmp_Cal_MaxStallPrm;
  uint16 tmp_Cal_ReactWaitTime;
  uint16 tmp_Cal_MaxStallTime;
  uint16 tmp_Cal_MaxOperationTime;
  boolean guard1 = false;
  boolean guard2 = false;
  boolean guard3 = false;
  boolean guard4 = false;
  boolean guard5 = false;
  tmp_Cal_MaxOperationTime = Rte_CData_Cal_MaxOperationTime();
  tmp_Cal_MaxStallTime = Rte_CData_Cal_MaxStallTime();
  tmp_Cal_ReactWaitTime = Rte_CData_Cal_ReactWaitTime();
  tmp_Cal_MaxStallPrm = Rte_CData_Cal_MaxStallPrm();
  tmp_Cal_MinStallVolt = Rte_CData_Cal_MinStallVolt();
  tmp_Cal_MaxStallVolt = Rte_CData_Cal_MaxStallVolt();

  /* Inport: '<Root>/gCAN_bLCK_TrunkLock_Val' */
  Rte_Read_gCAN_bLCK_TrunkLock_Val(&tmpRead_a);

  /* Inport: '<Root>/gCAN_bLCK_RearRightPowerDoor_Val' */
  Rte_Read_gCAN_bLCK_RearRightPowerDoor_Val(&tmpRead_9);

  /* Inport: '<Root>/gCAN_bLCK_RearRightDoorLock_Val' */
  Rte_Read_gCAN_bLCK_RearRightDoorLock_Val(&tmpRead_8);

  /* Inport: '<Root>/gCAN_bLCK_RearRightChildSaftyLock_Val' */
  Rte_Read_gCAN_bLCK_RearRightChildSaftyLock_Val(&tmpRead_7);

  /* Inport: '<Root>/gCAN_bLCK_RearLeftPowerDoor_Val' */
  Rte_Read_gCAN_bLCK_RearLeftPowerDoor_Val(&tmpRead_6);

  /* Inport: '<Root>/gCAN_bLCK_RearLeftDoorLock_Val' */
  Rte_Read_gCAN_bLCK_RearLeftDoorLock_Val(&tmpRead_5);

  /* Inport: '<Root>/gCAN_bLCK_RearLeftChildSaftyLock_Val' */
  Rte_Read_gCAN_bLCK_RearLeftChildSaftyLock_Val(&tmpRead_4);

  /* Inport: '<Root>/gCAN_bLCK_PowerFillerCap_Val' */
  Rte_Read_gCAN_bLCK_PowerFillerCap_Val(&tmpRead_3);

  /* Inport: '<Root>/gCAN_bLCK_FillerCapLock_Block_Val' */
  Rte_Read_gCAN_bLCK_FillerCapLock_Block_Val(&bNMLocKeepAwakeFlag_k);

  /* Inport: '<Root>/gCAN_bLCK_FillerCapLock_Alock_Val' */
  Rte_Read_gCAN_bLCK_FillerCapLock_Alock_Val(&tmpRead_2);

  /* Inport: '<Root>/gASI_u16ChrgCapPosVolt' */
  Rte_Read_gLock_u16ChrgCapPosVolt_Val(&rtb_gCAN_u16BCS_VehSpd);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8LCK_LockCommandActionTypeOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8LCK_LockCommandActionType'
   */
  Rte_Read_gCAN_u8LCK_LockCommandActionType_Val(&Lock_Ctrl_B.gCAN_u8LockCommandActionType);

  /* Product: '<S1>/Divide1' incorporates:
   *  Constant: '<S1>/Factor'
   */
  gLOC_u16ChrgCapPosVolt = (float32)rtb_gCAN_u16BCS_VehSpd * 0.001F;

  /* Chart: '<S26>/MotorStuck' incorporates:
   *  Constant: '<S26>/Constant1'
   *  Constant: '<S26>/Constant3'
   *  Constant: '<S26>/Constant9'
   *  Delay: '<S3>/Delay30'
   */
  if (Lock_Ctrl_DWork.is_active_c40_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.is_active_c40_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_c40_Lock_Ctrl = Lock_Ctrl_IN_IDEL;
    Lock_Ctrl_B.u16MotorStallOpenCnt = (uint16)0x00;
    Lock_Ctrl_B.u16MotorStallCloseCnt = (uint16)0x00;
    Lock_Ctrl_B.bMotorStallOpenFlag = false;
    Lock_Ctrl_B.bMotorStallCloseFlag = false;
  } else if (Lock_Ctrl_DWork.is_c40_Lock_Ctrl == Lock_Ctrl_IN_IDEL) {
    if (Lock_Ctrl_DWork.Delay30_DSTATE != 0) {
      Lock_Ctrl_DWork.is_c40_Lock_Ctrl = Lock_Ctrl_IN_STUCK;
      Lock_Ctrl_B.u16MotorStallOpenCnt = (uint16)0x00;
      Lock_Ctrl_B.u16MotorStallCloseCnt = (uint16)0x00;
      Lock_Ctrl_B.bMotorStallOpenFlag = false;
      Lock_Ctrl_B.bMotorStallCloseFlag = false;
      if (gLOC_u16ChrgCapPosVolt >= tmp_Cal_MaxStallVolt) {
        rtb_gLOC_u32LeftAllowSleep_NW = Lock_Ctrl_B.u16MotorStallOpenCnt + 1;
        if (rtb_gLOC_u32LeftAllowSleep_NW > 65535) {
          rtb_gLOC_u32LeftAllowSleep_NW = 65535;
        }

        Lock_Ctrl_B.u16MotorStallOpenCnt = (uint16)rtb_gLOC_u32LeftAllowSleep_NW;
      } else {
        Lock_Ctrl_B.u16MotorStallOpenCnt = 0U;
      }

      if (gLOC_u16ChrgCapPosVolt <= tmp_Cal_MinStallVolt) {
        rtb_gLOC_u32LeftAllowSleep_NW = Lock_Ctrl_B.u16MotorStallCloseCnt + 1;
        if (rtb_gLOC_u32LeftAllowSleep_NW > 65535) {
          rtb_gLOC_u32LeftAllowSleep_NW = 65535;
        }

        Lock_Ctrl_B.u16MotorStallCloseCnt = (uint16)rtb_gLOC_u32LeftAllowSleep_NW;
      } else {
        Lock_Ctrl_B.u16MotorStallCloseCnt = 0U;
      }

      if (Lock_Ctrl_B.u16MotorStallOpenCnt >= tmp_Cal_MaxStallPrm) {
        Lock_Ctrl_B.u16MotorStallOpenCnt = tmp_Cal_MaxStallPrm;
        Lock_Ctrl_B.bMotorStallOpenFlag = true;
      } else {
        Lock_Ctrl_B.bMotorStallOpenFlag = false;
      }

      if (Lock_Ctrl_B.u16MotorStallCloseCnt >= tmp_Cal_MaxStallPrm) {
        Lock_Ctrl_B.u16MotorStallCloseCnt = tmp_Cal_MaxStallPrm;
        Lock_Ctrl_B.bMotorStallCloseFlag = true;
      } else {
        Lock_Ctrl_B.bMotorStallCloseFlag = false;
      }
    }
  } else if (Lock_Ctrl_DWork.Delay30_DSTATE == 0) {
    Lock_Ctrl_DWork.is_c40_Lock_Ctrl = Lock_Ctrl_IN_IDEL;
    Lock_Ctrl_B.u16MotorStallOpenCnt = (uint16)0x00;
    Lock_Ctrl_B.u16MotorStallCloseCnt = (uint16)0x00;
    Lock_Ctrl_B.bMotorStallOpenFlag = false;
    Lock_Ctrl_B.bMotorStallCloseFlag = false;
  } else {
    if (gLOC_u16ChrgCapPosVolt >= tmp_Cal_MaxStallVolt) {
      rtb_gLOC_u32LeftAllowSleep_NW = Lock_Ctrl_B.u16MotorStallOpenCnt + 1;
      if (rtb_gLOC_u32LeftAllowSleep_NW > 65535) {
        rtb_gLOC_u32LeftAllowSleep_NW = 65535;
      }

      Lock_Ctrl_B.u16MotorStallOpenCnt = (uint16)rtb_gLOC_u32LeftAllowSleep_NW;
    } else {
      Lock_Ctrl_B.u16MotorStallOpenCnt = 0U;
    }

    if (gLOC_u16ChrgCapPosVolt <= tmp_Cal_MinStallVolt) {
      rtb_gLOC_u32LeftAllowSleep_NW = Lock_Ctrl_B.u16MotorStallCloseCnt + 1;
      if (rtb_gLOC_u32LeftAllowSleep_NW > 65535) {
        rtb_gLOC_u32LeftAllowSleep_NW = 65535;
      }

      Lock_Ctrl_B.u16MotorStallCloseCnt = (uint16)rtb_gLOC_u32LeftAllowSleep_NW;
    } else {
      Lock_Ctrl_B.u16MotorStallCloseCnt = 0U;
    }

    if (Lock_Ctrl_B.u16MotorStallOpenCnt >= tmp_Cal_MaxStallPrm) {
      Lock_Ctrl_B.u16MotorStallOpenCnt = tmp_Cal_MaxStallPrm;
      Lock_Ctrl_B.bMotorStallOpenFlag = true;
    } else {
      Lock_Ctrl_B.bMotorStallOpenFlag = false;
    }

    if (Lock_Ctrl_B.u16MotorStallCloseCnt >= tmp_Cal_MaxStallPrm) {
      Lock_Ctrl_B.u16MotorStallCloseCnt = tmp_Cal_MaxStallPrm;
      Lock_Ctrl_B.bMotorStallCloseFlag = true;
    } else {
      Lock_Ctrl_B.bMotorStallCloseFlag = false;
    }
  }

  /* End of Chart: '<S26>/MotorStuck' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bPowerOnResetOutport1' incorporates:
   *  Inport: '<Root>/gASI_bPowerOnReset'
   */
  Rte_Read_gASI_bPowerOnReset_Val(&rtb_gASI_bPowerOnReset);

  /* Chart: '<S27>/FillerCapBLockMotor' incorporates:
   *  Constant: '<S27>/Constant'
   *  Constant: '<S27>/Constant1'
   *  Constant: '<S27>/Constant2'
   *  Constant: '<S27>/Constant3'
   *  DataStoreRead: '<S27>/Data Store Read'
   */
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__o = Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_ib;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_ib = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
  Lock_Ctrl_DWork.gCAN_bLCK_PowerFillerCap_prev = Lock_Ctrl_DWork.gCAN_bLCK_PowerFillerCap_start;
  Lock_Ctrl_DWork.gCAN_bLCK_PowerFillerCap_start = tmpRead_3;
  if (Lock_Ctrl_DWork.is_active_c41_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__o = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
    Lock_Ctrl_DWork.gCAN_bLCK_PowerFillerCap_prev = tmpRead_3;
    Lock_Ctrl_DWork.is_active_c41_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.bActionFlag = false;
    Lock_Ctrl_DWork.bStallCloseFinishFlag = false;
    Lock_Ctrl_B.FillerCapAngleVoltInitOut = Lock_Ctrl_SharedDSM.FillerCapAngleVoltInit;
    Lock_Ctrl_DWork.is_c41_Lock_Ctrl = Lock_Ctrl_IN_NoAction;
    Lock_Ct_enter_internal_NoAction(&gLOC_u16ChrgCapPosVolt);
  } else {
    guard1 = false;
    switch (Lock_Ctrl_DWork.is_c41_Lock_Ctrl) {
     case Lock_Ctrl_IN_Close_k:
      if (tmpRead_3 && ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__o != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_ib) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_ib == 4))) {
        Lock_Ctrl_DWork.is_Close = Lock_Ctrl_IN_NO_ACTIVE_CHILD_if;
        Lock_Ctrl_DWork.is_c41_Lock_Ctrl = Lock_Ctrl_IN_Stop1;
        Lock_Ctrl_B.LCK_FillerCapAction = 0U;
        Lock_Ctrl_DWork.u16CloseTimer = 0U;
      } else if (Lock_Ctrl_DWork.is_Close == Lock_Ctrl_IN_CloseAction) {
        if (Lock_Ctrl_B.bMotorStallCloseFlag) {
          Lock_Ctrl_DWork.is_Close = Lock_Ctrl_IN_Hold1_e;
        } else if (Lock_Ctrl_DWork.u16CloseTimer > tmp_Cal_MaxOperationTime) {
          Lock_Ctrl_DWork.is_Close = Lock_Ctrl_IN_NO_ACTIVE_CHILD_if;
          Lock_Ctrl_DWork.is_c41_Lock_Ctrl = Lock_Ctrl_IN_NoAction;
          Lock_Ct_enter_internal_NoAction(&gLOC_u16ChrgCapPosVolt);
        } else {
          rtb_gLOC_u32LeftAllowSleep_NW = Lock_Ctrl_DWork.u16CloseTimer + 1;
          if (rtb_gLOC_u32LeftAllowSleep_NW > 65535) {
            rtb_gLOC_u32LeftAllowSleep_NW = 65535;
          }

          Lock_Ctrl_DWork.u16CloseTimer = (uint16)rtb_gLOC_u32LeftAllowSleep_NW;
        }
      } else if (Lock_Ctrl_DWork.u16StallTimer1 >= tmp_Cal_MaxStallTime) {
        Lock_Ctrl_DWork.bStallCloseFinishFlag = true;
        Lock_Ctrl_DWork.is_Close = Lock_Ctrl_IN_NO_ACTIVE_CHILD_if;
        Lock_Ctrl_DWork.is_c41_Lock_Ctrl = Lock_Ctrl_IN_NoAction;
        Lock_Ct_enter_internal_NoAction(&gLOC_u16ChrgCapPosVolt);
      } else {
        rtb_gLOC_u32LeftAllowSleep_NW = Lock_Ctrl_DWork.u16StallTimer1 + 1;
        if (rtb_gLOC_u32LeftAllowSleep_NW > 65535) {
          rtb_gLOC_u32LeftAllowSleep_NW = 65535;
        }

        Lock_Ctrl_DWork.u16StallTimer1 = (uint16)rtb_gLOC_u32LeftAllowSleep_NW;
      }
      break;

     case Lock_Ctrl_IN_NoAction:
      if (rtb_gASI_bPowerOnReset && (gLOC_u16ChrgCapPosVolt <= Rte_CData_Cal_FillerCapResetVolt()) && Lock_Ctrl_DWork.bFrstRun) {
        Lock_Ctrl_B.FillerCapAngleVoltInitOut = 2.5F;
        Lock_Ctrl_DWork.bFrstRun = false;
        guard1 = true;
      } else {
        tmp_0 = !Lock_Ctrl_DWork.bActionFlag;
        tmpRead_3 = (tmp_0 && tmpRead_3);
        if ((tmpRead_3 && ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__o != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_ib) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_ib == 1))) || (tmp_0 && (Lock_Ctrl_B.gCAN_u8LockCommandActionType == 1) && ((Lock_Ctrl_DWork.gCAN_bLCK_PowerFillerCap_prev != Lock_Ctrl_DWork.gCAN_bLCK_PowerFillerCap_start) && Lock_Ctrl_DWork.gCAN_bLCK_PowerFillerCap_start))) {
          guard1 = true;
        } else if ((tmpRead_3 && ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__o != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_ib) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_ib == 4))) || (tmp_0 && (Lock_Ctrl_B.gCAN_u8LockCommandActionType == 4) && ((Lock_Ctrl_DWork.gCAN_bLCK_PowerFillerCap_prev != Lock_Ctrl_DWork.gCAN_bLCK_PowerFillerCap_start) && Lock_Ctrl_DWork.gCAN_bLCK_PowerFillerCap_start))) {
          Lock_Ctrl_DWork.is_c41_Lock_Ctrl = Lock_Ctrl_IN_Open;
          Lock_Ctrl_DWork.is_Open = Lock_Ctrl_IN_OpenAction;
          Lock_Ctrl_B.LCK_FillerCapAction = 2U;
          Lock_Ctrl_DWork.u16WaitTimer1 = 0U;
          Lock_Ctrl_DWork.bActionFlag = true;
          Lock_Ctrl_DWork.bStallCloseFinishFlag = false;
        } else if (Lock_Ctrl_DWork.u16NoActionTimer >= 50) {
          Lock_Ctrl_DWork.bActionFlag = false;
        } else {
          rtb_gLOC_u32LeftAllowSleep_NW = Lock_Ctrl_DWork.u16NoActionTimer + 1;
          if (rtb_gLOC_u32LeftAllowSleep_NW > 65535) {
            rtb_gLOC_u32LeftAllowSleep_NW = 65535;
          }

          Lock_Ctrl_DWork.u16NoActionTimer = (uint16)rtb_gLOC_u32LeftAllowSleep_NW;
          if (Lock_Ctrl_DWork.bStallCloseFinishFlag && (Lock_Ctrl_DWork.u16NoActionTimer >= Rte_CData_Cal_UinitDelay()) && (gLOC_u16ChrgCapPosVolt < 2.6)) {
            Lock_Ctrl_B.FillerCapAngleVoltInitOut = gLOC_u16ChrgCapPosVolt;
            Lock_Ctrl_DWork.bStallCloseFinishFlag = false;
          }
        }
      }
      break;

     case Lock_Ctrl_IN_Open:
      if (tmpRead_3 && ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__o != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_ib) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_ib == 1))) {
        Lock_Ctrl_DWork.is_Open = Lock_Ctrl_IN_NO_ACTIVE_CHILD_if;
        Lock_Ctrl_DWork.is_c41_Lock_Ctrl = Lock_Ctrl_IN_Stop2;
        Lock_Ctrl_B.LCK_FillerCapAction = 0U;
        Lock_Ctrl_DWork.u16OpenTimer = 0U;
      } else if (Lock_Ctrl_DWork.is_Open == Lock_Ctrl_IN_Hold2_p) {
        if ((Lock_Ctrl_DWork.u16StallTimer2 >= tmp_Cal_MaxStallTime) || (gLOC_u16ChrgCapPosVolt >= 4.0F)) {
          Lock_Ctrl_DWork.is_Open = Lock_Ctrl_IN_NO_ACTIVE_CHILD_if;
          Lock_Ctrl_DWork.is_c41_Lock_Ctrl = Lock_Ctrl_IN_NoAction;
          Lock_Ct_enter_internal_NoAction(&gLOC_u16ChrgCapPosVolt);
        } else {
          rtb_gLOC_u32LeftAllowSleep_NW = Lock_Ctrl_DWork.u16StallTimer2 + 1;
          if (rtb_gLOC_u32LeftAllowSleep_NW > 65535) {
            rtb_gLOC_u32LeftAllowSleep_NW = 65535;
          }

          Lock_Ctrl_DWork.u16StallTimer2 = (uint16)rtb_gLOC_u32LeftAllowSleep_NW;
        }
      } else if (Lock_Ctrl_B.bMotorStallOpenFlag) {
        Lock_Ctrl_DWork.is_Open = Lock_Ctrl_IN_Hold2_p;
      } else if (Lock_Ctrl_DWork.u16OpenTimer > tmp_Cal_MaxOperationTime) {
        Lock_Ctrl_DWork.is_Open = Lock_Ctrl_IN_NO_ACTIVE_CHILD_if;
        Lock_Ctrl_DWork.is_c41_Lock_Ctrl = Lock_Ctrl_IN_NoAction;
        Lock_Ct_enter_internal_NoAction(&gLOC_u16ChrgCapPosVolt);
      } else {
        rtb_gLOC_u32LeftAllowSleep_NW = Lock_Ctrl_DWork.u16OpenTimer + 1;
        if (rtb_gLOC_u32LeftAllowSleep_NW > 65535) {
          rtb_gLOC_u32LeftAllowSleep_NW = 65535;
        }

        Lock_Ctrl_DWork.u16OpenTimer = (uint16)rtb_gLOC_u32LeftAllowSleep_NW;
      }
      break;

     case Lock_Ctrl_IN_Stop1:
      if (Lock_Ctrl_DWork.u16WaitTimer1 >= tmp_Cal_ReactWaitTime) {
        Lock_Ctrl_DWork.is_c41_Lock_Ctrl = Lock_Ctrl_IN_Open;
        Lock_Ctrl_DWork.is_Open = Lock_Ctrl_IN_OpenAction;
        Lock_Ctrl_B.LCK_FillerCapAction = 2U;
        Lock_Ctrl_DWork.u16WaitTimer1 = 0U;
        Lock_Ctrl_DWork.bActionFlag = true;
        Lock_Ctrl_DWork.bStallCloseFinishFlag = false;
      } else {
        rtb_gLOC_u32LeftAllowSleep_NW = Lock_Ctrl_DWork.u16WaitTimer1 + 1;
        if (rtb_gLOC_u32LeftAllowSleep_NW > 65535) {
          rtb_gLOC_u32LeftAllowSleep_NW = 65535;
        }

        Lock_Ctrl_DWork.u16WaitTimer1 = (uint16)rtb_gLOC_u32LeftAllowSleep_NW;
      }
      break;

     default:
      if (Lock_Ctrl_DWork.u16WaitTimer2 >= tmp_Cal_ReactWaitTime) {
        Lock_Ctrl_DWork.is_c41_Lock_Ctrl = Lock_Ctrl_IN_Close_k;
        Lock_Ctrl_DWork.is_Close = Lock_Ctrl_IN_CloseAction;
        Lock_Ctrl_B.LCK_FillerCapAction = 1U;
        Lock_Ctrl_DWork.u16WaitTimer2 = 0U;
        Lock_Ctrl_DWork.bActionFlag = true;
        Lock_Ctrl_DWork.bStallCloseFinishFlag = false;
      } else {
        rtb_gLOC_u32LeftAllowSleep_NW = Lock_Ctrl_DWork.u16WaitTimer2 + 1;
        if (rtb_gLOC_u32LeftAllowSleep_NW > 65535) {
          rtb_gLOC_u32LeftAllowSleep_NW = 65535;
        }

        Lock_Ctrl_DWork.u16WaitTimer2 = (uint16)rtb_gLOC_u32LeftAllowSleep_NW;
      }
      break;
    }

    if (guard1) {
      Lock_Ctrl_DWork.is_c41_Lock_Ctrl = Lock_Ctrl_IN_Close_k;
      Lock_Ctrl_DWork.is_Close = Lock_Ctrl_IN_CloseAction;
      Lock_Ctrl_B.LCK_FillerCapAction = 1U;
      Lock_Ctrl_DWork.u16WaitTimer2 = 0U;
      Lock_Ctrl_DWork.bActionFlag = true;
      Lock_Ctrl_DWork.bStallCloseFinishFlag = false;
    }
  }

  /* End of Chart: '<S27>/FillerCapBLockMotor' */

  /* DataStoreWrite: '<S27>/Data Store Write' */
  Lock_Ctrl_SharedDSM.FillerCapAngleVoltInit = Lock_Ctrl_B.FillerCapAngleVoltInitOut;

  /* DataTypeConversion: '<S62>/Data Type Conversion1' incorporates:
   *  Constant: '<S62>/Constant6'
   *  Constant: '<S62>/Constant7'
   *  Constant: '<S62>/Constant8'
   *  Product: '<S62>/Divide'
   *  Sum: '<S62>/Add'
   *  Sum: '<S62>/Subtract'
   */
  tmp = (gLOC_u16ChrgCapPosVolt - Lock_Ctrl_B.FillerCapAngleVoltInitOut) * 450.0 / 7.0 + 1.0;
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      rtb_Switch_by = (uint8)tmp;
    } else {
      rtb_Switch_by = 0U;
    }
  } else {
    rtb_Switch_by = MAX_uint8_T;
  }

  /* Switch: '<S62>/Switch' incorporates:
   *  Constant: '<S62>/Constant10'
   *  Constant: '<S62>/Constant9'
   *  DataTypeConversion: '<S62>/Data Type Conversion1'
   *  RelationalOperator: '<S62>/Relational Operator1'
   *  RelationalOperator: '<S62>/Relational Operator2'
   */
  if (rtb_Switch_by <= 5) {
    rtb_Switch_by = (uint8)(Lock_Ctrl_B.LCK_FillerCapAction != 0);
  }

  /* End of Switch: '<S62>/Switch' */

  /* Inport: '<Root>/gLock_u8RLDoorLockMotorUds_Val' */
  Rte_Read_gLock_u8RLDoorLockMotorUds_Val(&rtb_gLOC_u8RLDoorLockReq);

  /* Outport: '<Root>/gLOC_u8LCK_FillerCapAngle' */
  (void) Rte_Write_gLOC_u8LCK_FillerCapAngle_Val(rtb_Switch_by);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_bRLDoorLockMotorTrigUds_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_bRLDoorLockMotorTrigUds_Val'
   */
  Rte_Read_gLock_bRLDoorLockMotorTrigUds_Val(&rtb_TmpSignalConversionAtgLoc_p);

  /* Chart: '<S68>/Chart' */
  Lock_Ctrl_Chart_k(rtb_gLOC_u8RLDoorLockReq, rtb_TmpSignalConversionAtgLoc_p, &rtb_UdsReq_i1, &Lock_Ctrl_DWork.sf_Chart_p);

  /* Chart: '<S30>/RLDoorLockReq' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_h < 3U) {
    Lock_Ctrl_DWork.temporalCounter_i1_h++;
  }

  Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_prev = Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_star;
  Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_star = tmpRead_5;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__m = Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_it;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_it = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
  if (Lock_Ctrl_DWork.is_active_c48_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_prev = tmpRead_5;
    Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__m = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
    Lock_Ctrl_DWork.is_active_c48_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_c48_Lock_Ctrl = Lock_Ctrl_IN_NULL_fe;
    rtb_gLOC_u8RLDoorLockReq = 0U;
  } else if (Lock_Ctrl_DWork.is_c48_Lock_Ctrl == Lock_Ctrl_IN_NULL_fe) {
    rtb_gLOC_u8RLDoorLockReq = 0U;
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    guard5 = false;
    if (tmpRead_5) {
      /* Active */
      if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__m != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_it) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_it == 1)) {
        guard1 = true;
      } else if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__m != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_it) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_it == 4)) {
        guard2 = true;
      } else if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__m != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_it) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_it == 5)) {
        guard3 = true;
      } else if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__m != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_it) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_it == 6)) {
        guard4 = true;
      } else {
        guard5 = true;
      }
    } else {
      guard5 = true;
    }

    if (guard5) {
      if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 1) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_prev != Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_star) && Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_star)) {
        guard1 = true;
      } else if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 4) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_prev != Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_star) && Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_star)) {
        guard2 = true;
      } else if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 5) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_prev != Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_star) && Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_star)) {
        guard3 = true;
      } else {
        if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 6) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_prev != Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_star) && Lock_Ctrl_DWork.gCAN_bLCK_RearLeftDoorLock_star)) {
          guard4 = true;
        }
      }
    }

    if (guard4) {
      Lock_Ctrl_DWork.is_c48_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_h = 0U;
      Lock_Ctrl_DWork.is_REQ_h = Lock_Ctrl_IN_EmergencyUnlock;
      rtb_gLOC_u8RLDoorLockReq = 6U;
    }

    if (guard3) {
      Lock_Ctrl_DWork.is_c48_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_h = 0U;
      Lock_Ctrl_DWork.is_REQ_h = Lock_Ctrl_IN_ReverseUnlock;
      rtb_gLOC_u8RLDoorLockReq = 5U;
    }

    if (guard2) {
      Lock_Ctrl_DWork.is_c48_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_h = 0U;
      Lock_Ctrl_DWork.is_REQ_h = Lock_Ctrl_IN_unlock_e;
      rtb_gLOC_u8RLDoorLockReq = 4U;
    }

    if (guard1) {
      Lock_Ctrl_DWork.is_c48_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_h = 0U;
      Lock_Ctrl_DWork.is_REQ_h = Lock_Ctrl_IN_Lock_i;
      rtb_gLOC_u8RLDoorLockReq = 1U;
    }
  } else if (Lock_Ctrl_DWork.temporalCounter_i1_h >= 2) {
    Lock_Ctrl_DWork.is_REQ_h = Lock_Ctrl_IN_NO_ACTIVE_CHILD_if;
    Lock_Ctrl_DWork.is_c48_Lock_Ctrl = Lock_Ctrl_IN_NULL_fe;
    rtb_gLOC_u8RLDoorLockReq = 0U;
  } else {
    switch (Lock_Ctrl_DWork.is_REQ_h) {
     case Lock_Ctrl_IN_EmergencyUnlock:
      rtb_gLOC_u8RLDoorLockReq = 6U;
      break;

     case Lock_Ctrl_IN_Lock_i:
      rtb_gLOC_u8RLDoorLockReq = 1U;
      break;

     case Lock_Ctrl_IN_ReverseUnlock:
      rtb_gLOC_u8RLDoorLockReq = 5U;
      break;

     default:
      rtb_gLOC_u8RLDoorLockReq = 4U;
      break;
    }
  }

  /* End of Chart: '<S30>/RLDoorLockReq' */

  /* Switch: '<S68>/Switch' */
  if (rtb_TmpSignalConversionAtgLoc_p) {
    rtb_gLOC_u8RLDoorLockReq = rtb_UdsReq_i1;
  }

  /* End of Switch: '<S68>/Switch' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8tIntervalReverseUnlockCfgOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8tIntervalReverseUnlockCfg'
   */
  Rte_Read_gPRM_u8tIntervalReverseUnlockCfg_Val(&Lock_Ctrl_B.gPRM_u8tIntervalReverseUnlockCf);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8tDoorsLockUnlockCfgOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8tDoorsLockUnlockCfg'
   */
  Rte_Read_gPRM_u8tDoorsLockUnlockCfg_Val(&Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8tIntervalEmgcUnlockCfgOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8tIntervalEmgcUnlockCfg'
   */
  Rte_Read_gPRM_u8tIntervalEmgcUnlockCfg_Val(&Lock_Ctrl_B.gPRM_u8tIntervalEmgcUnlockCfg);

  /* Chart: '<S30>/DoorsMotorOutput' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_p < MAX_uint32_T) {
    Lock_Ctrl_DWork.temporalCounter_i1_p++;
  }

  Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev = Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start;
  Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_start = rtb_gLOC_u8RLDoorLockReq;
  if (Lock_Ctrl_DWork.is_active_c47_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gLOC_u8RLDoorLockReq_prev = rtb_gLOC_u8RLDoorLockReq;
    Lock_Ctrl_DWork.is_active_c47_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_ReqDect_b = Lock_Ctrl_IN_Null;
    Lock_Ctrl_DWork.is_ReqCmd_o = Lock_Ctrl_IN_NULL_l;
    Lock_Ctrl_B.gLOC_u8LockMotorCmd_e = (uint8)LMO_NULL;
    Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction = 0U;
    Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag = false;
  } else {
    Lock_Ctrl_ReqDect();
    Lock_Ctrl_ReqCmd();
  }

  /* End of Chart: '<S30>/DoorsMotorOutput' */

  /* Chart: '<S3>/LeftRearMotorOutput1' */
  if (Lock_Ctrl_B.gLOC_u8LockMotorCmd_e == LMO_NORMAL_UNLOCK) {
    /* &#x89E3;&#x9501; */
    rtb_gLOC_u8RLDoorLockReq = 2U;
  } else if (Lock_Ctrl_B.gLOC_u8LockMotorCmd_e == LMO_NORMAL_LOCK) {
    /* &#x95ED;&#x9501; */
    rtb_gLOC_u8RLDoorLockReq = 1U;
  } else {
    rtb_gLOC_u8RLDoorLockReq = 0U;
  }

  /* End of Chart: '<S3>/LeftRearMotorOutput1' */

  /* Inport: '<Root>/gLock_u8RLPwrDoorUds_Val' */
  Rte_Read_gLock_u8RLPwrDoorUds_Val(&rtb_gLOC_u8RLPowerDoorReq);

  /* Inport: '<Root>/gCAN_u16BCS_VehSpd' */
  Rte_Read_gCAN_u16BCS_VehSpd_Val(&tmpRead_1);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_bRLPwrDoorTrigUds_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_bRLPwrDoorTrigUds_Val'
   */
  Rte_Read_gLock_bRLPwrDoorTrigUds_Val(&rtb_TmpSignalConversionAtgLoc_d);

  /* Product: '<S1>/Divide' */
  rtb_gLOC_u32TruckAllowSleep_Loc = tmpRead_1 * 9U;
  if (rtb_gLOC_u32TruckAllowSleep_Loc > 65535U) {
    rtb_gLOC_u32TruckAllowSleep_Loc = 65535U;
  }

  rtb_gCAN_u16BCS_VehSpd = (uint16)(rtb_gLOC_u32TruckAllowSleep_Loc / 160U);

  /* End of Product: '<S1>/Divide' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_bBCS_VehSpdVDOutport1' incorporates:
   *  Inport: '<Root>/gCAN_bBCS_VehSpdVD'
   */
  Rte_Read_gCAN_bBCS_VehSpdVD_Val(&rtb_gCAN_bBCS_VehSpdVD);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8UMM_UsageModeSt_ValOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8UMM_UsageModeSt_Val'
   */
  Rte_Read_gCAN_u8UMM_UsageModeSt_Val(&rtb_TmpSignalConversionAtgCAN_u);

  /* Chart: '<S55>/Chart' */
  Lock_Ctrl_Chart(rtb_gLOC_u8RLPowerDoorReq, rtb_TmpSignalConversionAtgLoc_d, rtb_gCAN_u16BCS_VehSpd, rtb_gCAN_bBCS_VehSpdVD, rtb_TmpSignalConversionAtgCAN_u, &rtb_UdsReq_n, &Lock_Ctrl_DWork.sf_Chart);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8PowerDoorCfgOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8PowerDoorCfg'
   */
  Rte_Read_gPRM_u8PowerDoorCfg_Val(&rtb_gPRM_u8PowerDoorCfg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8SRS_CrashOutputStOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8SRS_CrashOutputSt'
   */
  Rte_Read_gCAN_u8SRS_CrashOutputSt_Val(&rtb_gCAN_u8SRS_CrashOutputSt);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bRLSecondLockFeedbackSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_bRLSecondLockFeedbackSw'
   */
  Rte_Read_gSuctnDoor_bRLSecLockFbSt_Val(&rtb_gASI_bRLSecondLockFeedbackS);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8LCK_PowerDoorCommandActionTypeOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8LCK_PowerDoorCommandActionType'
   */
  Rte_Read_gCAN_u8LCK_PowerDoorCommandActionType_Val(&rtb_gCAN_u8PowerDoorCommandActi);

  /* Chart: '<S20>/PowerDoorLockReq' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_f < 3U) {
    Lock_Ctrl_DWork.temporalCounter_i1_f++;
  }

  Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandAction_a = Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandActio_ob;
  Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandActio_ob = rtb_gCAN_u8PowerDoorCommandActi;
  Lock_Ctrl_DWork.gCAN_bLCK_RearLeftPowerDoor_pre = Lock_Ctrl_DWork.gCAN_bLCK_RearLeftPowerDoor_sta;
  Lock_Ctrl_DWork.gCAN_bLCK_RearLeftPowerDoor_sta = tmpRead_6;
  if (Lock_Ctrl_DWork.is_active_c31_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandAction_a = rtb_gCAN_u8PowerDoorCommandActi;
    Lock_Ctrl_DWork.gCAN_bLCK_RearLeftPowerDoor_pre = tmpRead_6;
    Lock_Ctrl_DWork.is_active_c31_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_c31_Lock_Ctrl = Lock_Ctrl_IN_NoReq_l;
    rtb_gLOC_u8RLPowerDoorReq = 0U;
  } else if (Lock_Ctrl_DWork.is_c31_Lock_Ctrl == Lock_Ctrl_IN_NoReq_l) {
    rtb_gLOC_u8RLPowerDoorReq = 0U;
    if (((rtb_gPRM_u8PowerDoorCfg == 2) || (rtb_gPRM_u8PowerDoorCfg == 3)) && (((rtb_gCAN_u16BCS_VehSpd <= 3) && rtb_gCAN_bBCS_VehSpdVD) || ((!rtb_gCAN_bBCS_VehSpdVD) && ((rtb_TmpSignalConversionAtgCAN_u == 0) || (rtb_TmpSignalConversionAtgCAN_u == 1))))) {
      /* RearPowerDoor FourPowerDoor */
      if ((rtb_gCAN_u8SRS_CrashOutputSt == 0) && (!rtb_gASI_bRLSecondLockFeedbackS) && ((tmpRead_6 && ((Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandAction_a != Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandActio_ob) && (Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandActio_ob == 2))) || ((rtb_gCAN_u8PowerDoorCommandActi == 2) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearLeftPowerDoor_pre != Lock_Ctrl_DWork.gCAN_bLCK_RearLeftPowerDoor_sta) && Lock_Ctrl_DWork.gCAN_bLCK_RearLeftPowerDoor_sta)))) {
        Lock_Ctrl_DWork.is_c31_Lock_Ctrl = Lock_Ctrl_IN_Req_h;
        Lock_Ctrl_DWork.temporalCounter_i1_f = 0U;
        rtb_gLOC_u8RLPowerDoorReq = 2U;
      } else {
        Lock_Ctrl_DWork.is_c31_Lock_Ctrl = Lock_Ctrl_IN_NoReq_l;
      }
    }
  } else {
    rtb_gLOC_u8RLPowerDoorReq = 2U;
    if (Lock_Ctrl_DWork.temporalCounter_i1_f >= 2) {
      Lock_Ctrl_DWork.is_c31_Lock_Ctrl = Lock_Ctrl_IN_NoReq_l;
      rtb_gLOC_u8RLPowerDoorReq = 0U;
    }
  }

  /* End of Chart: '<S20>/PowerDoorLockReq' */

  /* Switch: '<S55>/Switch' */
  if (rtb_TmpSignalConversionAtgLoc_d) {
    rtb_gLOC_u8TrunkLockAction = rtb_UdsReq_n;
  } else {
    rtb_gLOC_u8TrunkLockAction = rtb_gLOC_u8RLPowerDoorReq;
  }

  /* End of Switch: '<S55>/Switch' */

  /* Chart: '<S56>/Chart1' incorporates:
   *  RelationalOperator: '<S20>/Equal'
   */
  Lock_Ctrl_Chart1(!Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag, rtb_gLOC_u8TrunkLockAction, &Lock_Ctrl_B.gLockCtrl_u8PowerDoorCmd_p, &Lock_Ctrl_B.gLockCtrl_u8PowerDoorCmdTmp_c, &Lock_Ctrl_DWork.sf_Chart1);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bRLDoorAjarSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_bRLDoorAjarSw'
   */
  Rte_Read_gDoor_bRLDoorAjarSt_Val(&rtb_gASI_bRLDoorAjarSw);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8tPowerReleaseCfgOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8tPowerReleaseCfg'
   */
  Rte_Read_gPRM_u8tPowerReleaseCfg_Val(&rtb_gPRM_u8tPowerReleaseCfg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8tPowerReleaseTimeOutCfgOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8tPowerReleaseTimeOutCfg'
   */
  Rte_Read_gPRM_u8tPowerReleaseTimeOutCfg_Val(&rtb_gPRM_u8tPowerReleaseTimeOut);

  /* Chart: '<S20>/DoorsMotorOutput' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_pm < 255U) {
    Lock_Ctrl_DWork.temporalCounter_i1_pm++;
  }

  if (Lock_Ctrl_DWork.temporalCounter_i2_j < MAX_uint32_T) {
    Lock_Ctrl_DWork.temporalCounter_i2_j++;
  }

  Lock_Ctrl_DWork.gLOC_u8RLPowerDoorReq_prev = Lock_Ctrl_DWork.gLOC_u8RLPowerDoorReq_start;
  Lock_Ctrl_DWork.gLOC_u8RLPowerDoorReq_start = Lock_Ctrl_B.gLockCtrl_u8PowerDoorCmd_p;
  if (Lock_Ctrl_DWork.is_active_c30_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gLOC_u8RLPowerDoorReq_prev = Lock_Ctrl_B.gLockCtrl_u8PowerDoorCmd_p;
    Lock_Ctrl_DWork.is_active_c30_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_ReqDect_cq = Lock_Ctrl_IN_Null;
    Lock_Ctrl_DWork.is_ReqCmd_d = Lock_Ctrl_IN_NULL_fe;
    rtb_Switch_by = 0U;
    Lock_Ctrl_B.gLOC_bRLPowerDoorRelsMotorMoveF = false;
    if ((!Lock_Ctrl_DWork.bFirstRun_h) && rtb_gASI_bPowerOnReset) {
      Lock_Ctrl_DWork.is_Reset_n = Lock_Ctrl_IN_RESETREQ;
      Lock_Ctrl_DWork.temporalCounter_i2_j = 0U;
      Lock_Ctrl_B.gLOC_u8RLPowerDoorRelCmd = (uint8)LMO_RESET;
      Lock_Ctrl_DWork.bFirstRun_h = true;
      Lock_Ctrl_B.gLOC_bRLPowerDoorRelsMotorMoveF = true;
    } else {
      Lock_Ctrl_DWork.is_Reset_n = Lock_Ctrl_IN_NULL_fe;
    }
  } else {
    if (Lock_Ctrl_DWork.is_ReqDect_cq == Lock_Ctrl_IN_Null) {
      if (Lock_Ctrl_B.gLOC_bRLPowerDoorRelsMotorMoveF && ((Lock_Ctrl_DWork.gLOC_u8RLPowerDoorReq_prev != Lock_Ctrl_DWork.gLOC_u8RLPowerDoorReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLPowerDoorReq_start == 2))) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect_cq = Lock_Ctrl_IN_REUNLOCKREQ_p;
        Lock_Ctrl_B.bReunlockflag_c = true;
      }
    } else {
      if (Lock_Ctrl_B.gLOC_bRLPowerDoorRelsMotorMoveF && ((Lock_Ctrl_DWork.gLOC_u8RLPowerDoorReq_prev != Lock_Ctrl_DWork.gLOC_u8RLPowerDoorReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLPowerDoorReq_start == 2))) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect_cq = Lock_Ctrl_IN_REUNLOCKREQ_p;
        Lock_Ctrl_B.bReunlockflag_c = true;
      }
    }

    switch (Lock_Ctrl_DWork.is_ReqCmd_d) {
     case Lock_Ctrl_IN_NULL_fe:
      rtb_Switch_by = 0U;
      if (Lock_Ctrl_B.bReunlockflag_c || ((Lock_Ctrl_DWork.gLOC_u8RLPowerDoorReq_prev != Lock_Ctrl_DWork.gLOC_u8RLPowerDoorReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLPowerDoorReq_start == 2))) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqCmd_d = Lock_Ctrl_IN_Release;
        Lock_Ctrl_DWork.temporalCounter_i1_pm = 0U;
        Lock_Ctrl_B.gLOC_u8RLPowerDoorRelCmd = (uint8)LMO_RELEASE;
        rtb_Switch_by = 2U;
        Lock_Ctrl_B.gLOC_bRLPowerDoorRelsMotorMoveF = true;
        Lock_Ctrl_B.gLOC_u8RLPowerDoorRelDoneFlag = 0U;
        Lock_Ctrl_B.bReunlockflag_c = false;
      }
      break;

     case Lock_Ctrl_IN_Release:
      rtb_Switch_by = 2U;
      Lock_Ctrl_B.gLOC_u8RLPowerDoorRelDoneFlag = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_pm >= rtb_gPRM_u8tPowerReleaseCfg) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8RLPowerDoorRelCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_d = Lock_Ctrl_IN_wait1_p;
        Lock_Ctrl_DWork.temporalCounter_i1_pm = 0U;
        rtb_Switch_by = 0U;
        Lock_Ctrl_B.gLOC_u8RLPowerDoorRelDoneFlag = 1U;
      }
      break;

     default:
      rtb_Switch_by = 0U;
      Lock_Ctrl_B.gLOC_u8RLPowerDoorRelDoneFlag = 1U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_pm >= 10) {
        Lock_Ctrl_DWork.is_ReqCmd_d = Lock_Ctrl_IN_NULL_fe;
        Lock_Ctrl_B.gLOC_bRLPowerDoorRelsMotorMoveF = false;
      }
      break;
    }

    switch (Lock_Ctrl_DWork.is_Reset_n) {
     case Lock_Ctrl_IN_NULL_fe:
      if (Lock_Ctrl_B.gLOC_u8RLPowerDoorRelDoneFlag == 1) {
        Lock_Ctrl_DWork.is_Reset_n = Lock_Ctrl_IN_hold;
        Lock_Ctrl_DWork.temporalCounter_i2_j = 0U;
      }
      break;

     case Lock_Ctrl_IN_RESETREQ:
      if (Lock_Ctrl_DWork.temporalCounter_i2_j >= rtb_gPRM_u8tPowerReleaseCfg) {
        /* 300ms */
        Lock_Ctrl_B.gLOC_u8RLPowerDoorRelCmd = (uint8)LMO_NULL;
        Lock_Ctrl_B.gLOC_bRLPowerDoorRelsMotorMoveF = false;
        Lock_Ctrl_DWork.is_Reset_n = Lock_Ctrl_IN_NULL_fe;
      }
      break;

     default:
      rtb_gLOC_u32TruckAllowSleep_Loc = (uint32)(rtb_gPRM_u8tPowerReleaseTimeOut * 10);
      if (((!rtb_gASI_bRLDoorAjarSw) && ((rtb_gASI_bRLSecondLockFeedbackS && (Lock_Ctrl_DWork.temporalCounter_i2_j >= 5U)) || ((!rtb_gASI_bRLSecondLockFeedbackS) && (Lock_Ctrl_DWork.temporalCounter_i2_j >= rtb_gLOC_u32TruckAllowSleep_Loc)))) || (rtb_gASI_bRLDoorAjarSw && ((rtb_gASI_bRLSecondLockFeedbackS && (Lock_Ctrl_DWork.temporalCounter_i2_j >= 5U)) || ((!rtb_gASI_bRLSecondLockFeedbackS) && (Lock_Ctrl_DWork.temporalCounter_i2_j >= rtb_gLOC_u32TruckAllowSleep_Loc))))) {
        /* 5s */
        /* 5s */
        Lock_Ctrl_DWork.is_Reset_n = Lock_Ctrl_IN_RESETREQ;
        Lock_Ctrl_DWork.temporalCounter_i2_j = 0U;
        Lock_Ctrl_B.gLOC_u8RLPowerDoorRelCmd = (uint8)LMO_RESET;
        Lock_Ctrl_DWork.bFirstRun_h = true;
        Lock_Ctrl_B.gLOC_bRLPowerDoorRelsMotorMoveF = true;
      } else {
        if ((Lock_Ctrl_B.gLOC_u8RLPowerDoorRelDoneFlag == 0) || (Lock_Ctrl_B.gLOC_u8RLPowerDoorRelCmd == LMO_RELEASE)) {
          Lock_Ctrl_DWork.is_Reset_n = Lock_Ctrl_IN_NULL_fe;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S20>/DoorsMotorOutput' */

  /* Chart: '<S3>/LeftRearMotorOutput' */
  if (Lock_Ctrl_B.gLOC_u8RLPowerDoorRelCmd == LMO_RELEASE) {
    /* &#x7535;&#x91CA;&#x653E; */
    rtb_gLOC_u8RLDoorElecRelMotorOu = 1U;
    rtb_gLOC_u8RLDoorElecRelPWMMoto = 50U;
  } else if (Lock_Ctrl_B.gLOC_u8RLPowerDoorRelCmd == LMO_RESET) {
    /* &#x7535;&#x590D;&#x4F4D; */
    rtb_gLOC_u8RLDoorElecRelMotorOu = 2U;
    rtb_gLOC_u8RLDoorElecRelPWMMoto = 50U;
  } else {
    rtb_gLOC_u8RLDoorElecRelMotorOu = 0U;
    rtb_gLOC_u8RLDoorElecRelPWMMoto = 0U;
  }

  /* End of Chart: '<S3>/LeftRearMotorOutput' */

  /* Inport: '<Root>/gLock_u8RRDoorLockMotorUds_Val' */
  Rte_Read_gLock_u8RRDoorLockMotorUds_Val(&rtb_gLOC_u8RRDoorLockReq);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_bRRDoorLockMotorTrigUds_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_bRRDoorLockMotorTrigUds_Val'
   */
  Rte_Read_gLock_bRRDoorLockMotorTrigUds_Val(&rtb_TmpSignalConversionAtgLoc_l);

  /* Chart: '<S84>/Chart' */
  Lock_Ctrl_Chart_k(rtb_gLOC_u8RRDoorLockReq, rtb_TmpSignalConversionAtgLoc_l, &rtb_UdsReq, &Lock_Ctrl_DWork.sf_Chart_i);

  /* Chart: '<S34>/FLDoorLockReq' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_dn < 3U) {
    Lock_Ctrl_DWork.temporalCounter_i1_dn++;
  }

  Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_pre = Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_sta;
  Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_sta = tmpRead_8;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__c = Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__i;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__i = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
  if (Lock_Ctrl_DWork.is_active_c107_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_pre = tmpRead_8;
    Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__c = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
    Lock_Ctrl_DWork.is_active_c107_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_c107_Lock_Ctrl = Lock_Ctrl_IN_NULL_fe;
    rtb_gLOC_u8RRDoorLockReq = 0U;
  } else if (Lock_Ctrl_DWork.is_c107_Lock_Ctrl == Lock_Ctrl_IN_NULL_fe) {
    rtb_gLOC_u8RRDoorLockReq = 0U;
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    guard5 = false;
    if (tmpRead_8) {
      /* Active */
      if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__c != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__i) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__i == 1)) {
        guard1 = true;
      } else if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__c != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__i) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__i == 4)) {
        guard2 = true;
      } else if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__c != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__i) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__i == 5)) {
        guard3 = true;
      } else if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__c != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__i) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__i == 6)) {
        guard4 = true;
      } else {
        guard5 = true;
      }
    } else {
      guard5 = true;
    }

    if (guard5) {
      if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 1) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_pre != Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_sta) && Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_sta)) {
        guard1 = true;
      } else if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 4) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_pre != Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_sta) && Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_sta)) {
        guard2 = true;
      } else if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 5) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_pre != Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_sta) && Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_sta)) {
        guard3 = true;
      } else {
        if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 6) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_pre != Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_sta) && Lock_Ctrl_DWork.gCAN_bLCK_RearRightDoorLock_sta)) {
          guard4 = true;
        }
      }
    }

    if (guard4) {
      Lock_Ctrl_DWork.is_c107_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_dn = 0U;
      Lock_Ctrl_DWork.is_REQ = Lock_Ctrl_IN_EmergencyUnlock;
      rtb_gLOC_u8RRDoorLockReq = 6U;
    }

    if (guard3) {
      Lock_Ctrl_DWork.is_c107_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_dn = 0U;
      Lock_Ctrl_DWork.is_REQ = Lock_Ctrl_IN_ReverseUnlock;
      rtb_gLOC_u8RRDoorLockReq = 5U;
    }

    if (guard2) {
      Lock_Ctrl_DWork.is_c107_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_dn = 0U;
      Lock_Ctrl_DWork.is_REQ = Lock_Ctrl_IN_unlock_e;
      rtb_gLOC_u8RRDoorLockReq = 4U;
    }

    if (guard1) {
      Lock_Ctrl_DWork.is_c107_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_dn = 0U;
      Lock_Ctrl_DWork.is_REQ = Lock_Ctrl_IN_Lock_i;
      rtb_gLOC_u8RRDoorLockReq = 1U;
    }
  } else if (Lock_Ctrl_DWork.temporalCounter_i1_dn >= 2) {
    Lock_Ctrl_DWork.is_REQ = Lock_Ctrl_IN_NO_ACTIVE_CHILD_if;
    Lock_Ctrl_DWork.is_c107_Lock_Ctrl = Lock_Ctrl_IN_NULL_fe;
    rtb_gLOC_u8RRDoorLockReq = 0U;
  } else {
    switch (Lock_Ctrl_DWork.is_REQ) {
     case Lock_Ctrl_IN_EmergencyUnlock:
      rtb_gLOC_u8RRDoorLockReq = 6U;
      break;

     case Lock_Ctrl_IN_Lock_i:
      rtb_gLOC_u8RRDoorLockReq = 1U;
      break;

     case Lock_Ctrl_IN_ReverseUnlock:
      rtb_gLOC_u8RRDoorLockReq = 5U;
      break;

     default:
      rtb_gLOC_u8RRDoorLockReq = 4U;
      break;
    }
  }

  /* End of Chart: '<S34>/FLDoorLockReq' */

  /* Switch: '<S84>/Switch' */
  if (rtb_TmpSignalConversionAtgLoc_l) {
    rtb_gLOC_u8RRDoorLockReq = rtb_UdsReq;
  }

  /* End of Switch: '<S84>/Switch' */

  /* Chart: '<S34>/DoorsMotorOutput' */
  if (Lock_Ctrl_DWork.temporalCounter_i1 < MAX_uint32_T) {
    Lock_Ctrl_DWork.temporalCounter_i1++;
  }

  Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev = Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start;
  Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_start = rtb_gLOC_u8RRDoorLockReq;
  if (Lock_Ctrl_DWork.is_active_c94_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gLOC_u8RRDoorLockReq_prev = rtb_gLOC_u8RRDoorLockReq;
    Lock_Ctrl_DWork.is_active_c94_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_ReqDect = Lock_Ctrl_IN_Null;
    Lock_Ctrl_DWork.is_ReqCmd = Lock_Ctrl_IN_NULL_l;
    Lock_Ctrl_B.gLOC_u8LockMotorCmd = (uint8)LMO_NULL;
    Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction = 0U;
    Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag = false;
  } else {
    Lock_Ctrl_ReqDect_d();
    Lock_Ctrl_ReqCmd_n();
  }

  /* End of Chart: '<S34>/DoorsMotorOutput' */

  /* Chart: '<S3>/LeftRearMotorOutput2' */
  if (Lock_Ctrl_B.gLOC_u8LockMotorCmd == LMO_NORMAL_UNLOCK) {
    /* &#x89E3;&#x9501; */
    rtb_gLOC_u8RRDoorLockReq = 2U;
  } else if (Lock_Ctrl_B.gLOC_u8LockMotorCmd == LMO_NORMAL_LOCK) {
    /* &#x95ED;&#x9501; */
    rtb_gLOC_u8RRDoorLockReq = 1U;
  } else {
    rtb_gLOC_u8RRDoorLockReq = 0U;
  }

  /* End of Chart: '<S3>/LeftRearMotorOutput2' */

  /* Inport: '<Root>/gLock_u8RRPwrDoorUds_Val' */
  Rte_Read_gLock_u8RRPwrDoorUds_Val(&rtb_gLOC_u8RRPowerDoorReq);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_bRRPwrDoorTrigUds_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_bRRPwrDoorTrigUds_Val'
   */
  Rte_Read_gLock_bRRPwrDoorTrigUds_Val(&rtb_TmpSignalConversionAtgLoc_m);

  /* Chart: '<S78>/Chart' */
  Lock_Ctrl_Chart(rtb_gLOC_u8RRPowerDoorReq, rtb_TmpSignalConversionAtgLoc_m, rtb_gCAN_u16BCS_VehSpd, rtb_gCAN_bBCS_VehSpdVD, rtb_TmpSignalConversionAtgCAN_u, &rtb_UdsReq_i, &Lock_Ctrl_DWork.sf_Chart_k4);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bRRSecondLockFeedbackSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_bRRSecondLockFeedbackSw'
   */
  Rte_Read_gSuctnDoor_bRRSecLockFbSt_Val(&rtb_gASI_bRRSecondLockFeedbackS);

  /* Chart: '<S33>/PowerDoorLockReq' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_l < 3U) {
    Lock_Ctrl_DWork.temporalCounter_i1_l++;
  }

  Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandActionTy = Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandAction_o;
  Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandAction_o = rtb_gCAN_u8PowerDoorCommandActi;
  Lock_Ctrl_DWork.gCAN_bLCK_RearRightPowerDoor_pr = Lock_Ctrl_DWork.gCAN_bLCK_RearRightPowerDoor_st;
  Lock_Ctrl_DWork.gCAN_bLCK_RearRightPowerDoor_st = tmpRead_9;
  if (Lock_Ctrl_DWork.is_active_c63_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandActionTy = rtb_gCAN_u8PowerDoorCommandActi;
    Lock_Ctrl_DWork.gCAN_bLCK_RearRightPowerDoor_pr = tmpRead_9;
    Lock_Ctrl_DWork.is_active_c63_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_c63_Lock_Ctrl = Lock_Ctrl_IN_NoReq_l;
    rtb_gLOC_u8RRPowerDoorReq = 0U;
  } else if (Lock_Ctrl_DWork.is_c63_Lock_Ctrl == Lock_Ctrl_IN_NoReq_l) {
    rtb_gLOC_u8RRPowerDoorReq = 0U;
    if (((rtb_gPRM_u8PowerDoorCfg == 2) || (rtb_gPRM_u8PowerDoorCfg == 3)) && (((rtb_gCAN_u16BCS_VehSpd <= 3) && rtb_gCAN_bBCS_VehSpdVD) || ((!rtb_gCAN_bBCS_VehSpdVD) && ((rtb_TmpSignalConversionAtgCAN_u == 0) || (rtb_TmpSignalConversionAtgCAN_u == 1))))) {
      /* RearPowerDoor FourPowerDoor */
      if ((rtb_gCAN_u8SRS_CrashOutputSt == 0) && (!rtb_gASI_bRRSecondLockFeedbackS) && ((tmpRead_9 && ((Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandActionTy != Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandAction_o) && (Lock_Ctrl_DWork.gCAN_u8PowerDoorCommandAction_o == 2))) || ((rtb_gCAN_u8PowerDoorCommandActi == 2) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearRightPowerDoor_pr != Lock_Ctrl_DWork.gCAN_bLCK_RearRightPowerDoor_st) && Lock_Ctrl_DWork.gCAN_bLCK_RearRightPowerDoor_st)))) {
        Lock_Ctrl_DWork.is_c63_Lock_Ctrl = Lock_Ctrl_IN_Req_h;
        Lock_Ctrl_DWork.temporalCounter_i1_l = 0U;
        rtb_gLOC_u8RRPowerDoorReq = 2U;
      } else {
        Lock_Ctrl_DWork.is_c63_Lock_Ctrl = Lock_Ctrl_IN_NoReq_l;
      }
    }
  } else {
    rtb_gLOC_u8RRPowerDoorReq = 2U;
    if (Lock_Ctrl_DWork.temporalCounter_i1_l >= 2) {
      Lock_Ctrl_DWork.is_c63_Lock_Ctrl = Lock_Ctrl_IN_NoReq_l;
      rtb_gLOC_u8RRPowerDoorReq = 0U;
    }
  }

  /* End of Chart: '<S33>/PowerDoorLockReq' */

  /* Switch: '<S78>/Switch' */
  if (rtb_TmpSignalConversionAtgLoc_m) {
    rtb_gLOC_u8TrunkLockAction = rtb_UdsReq_i;
  } else {
    rtb_gLOC_u8TrunkLockAction = rtb_gLOC_u8RRPowerDoorReq;
  }

  /* End of Switch: '<S78>/Switch' */

  /* Chart: '<S79>/Chart1' incorporates:
   *  RelationalOperator: '<S33>/Equal'
   */
  Lock_Ctrl_Chart1(!Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag, rtb_gLOC_u8TrunkLockAction, &Lock_Ctrl_B.gLockCtrl_u8PowerDoorCmd, &Lock_Ctrl_B.gLockCtrl_u8PowerDoorCmdTmp, &Lock_Ctrl_DWork.sf_Chart1_p);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bRRDoorAjarSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_bRRDoorAjarSw'
   */
  Rte_Read_gDoor_bRRDoorAjarSt_Val(&rtb_gASI_bRRDoorAjarSw);

  /* Chart: '<S33>/DoorsMotorOutput' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_lf < 255U) {
    Lock_Ctrl_DWork.temporalCounter_i1_lf++;
  }

  if (Lock_Ctrl_DWork.temporalCounter_i2 < MAX_uint32_T) {
    Lock_Ctrl_DWork.temporalCounter_i2++;
  }

  Lock_Ctrl_DWork.gLOC_u8RRPowerDoorReq_prev = Lock_Ctrl_DWork.gLOC_u8RRPowerDoorReq_start;
  Lock_Ctrl_DWork.gLOC_u8RRPowerDoorReq_start = Lock_Ctrl_B.gLockCtrl_u8PowerDoorCmd;
  if (Lock_Ctrl_DWork.is_active_c53_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gLOC_u8RRPowerDoorReq_prev = Lock_Ctrl_B.gLockCtrl_u8PowerDoorCmd;
    Lock_Ctrl_DWork.is_active_c53_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_ReqDect_c = Lock_Ctrl_IN_Null;
    Lock_Ctrl_DWork.is_ReqCmd_m = Lock_Ctrl_IN_NULL_fe;
    rtb_gCAN_u8PowerDoorCommandActi = 0U;
    Lock_Ctrl_B.gLOC_bRRPowerDoorRelsMotorMoveF = false;
    if ((!Lock_Ctrl_DWork.bFirstRun) && rtb_gASI_bPowerOnReset) {
      Lock_Ctrl_DWork.is_Reset = Lock_Ctrl_IN_RESETREQ;
      Lock_Ctrl_DWork.temporalCounter_i2 = 0U;
      Lock_Ctrl_B.gLOC_u8RRPowerDoorRelCmd = (uint8)LMO_RESET;
      Lock_Ctrl_DWork.bFirstRun = true;
      Lock_Ctrl_B.gLOC_bRRPowerDoorRelsMotorMoveF = true;
    } else {
      Lock_Ctrl_DWork.is_Reset = Lock_Ctrl_IN_NULL_fe;
    }
  } else {
    if (Lock_Ctrl_DWork.is_ReqDect_c == Lock_Ctrl_IN_Null) {
      if (Lock_Ctrl_B.gLOC_bRRPowerDoorRelsMotorMoveF && ((Lock_Ctrl_DWork.gLOC_u8RRPowerDoorReq_prev != Lock_Ctrl_DWork.gLOC_u8RRPowerDoorReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRPowerDoorReq_start == 2))) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect_c = Lock_Ctrl_IN_REUNLOCKREQ_p;
        Lock_Ctrl_B.bReunlockflag_l = true;
      }
    } else {
      if (Lock_Ctrl_B.gLOC_bRRPowerDoorRelsMotorMoveF && ((Lock_Ctrl_DWork.gLOC_u8RRPowerDoorReq_prev != Lock_Ctrl_DWork.gLOC_u8RRPowerDoorReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRPowerDoorReq_start == 2))) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqDect_c = Lock_Ctrl_IN_REUNLOCKREQ_p;
        Lock_Ctrl_B.bReunlockflag_l = true;
      }
    }

    switch (Lock_Ctrl_DWork.is_ReqCmd_m) {
     case Lock_Ctrl_IN_NULL_fe:
      rtb_gCAN_u8PowerDoorCommandActi = 0U;
      if (Lock_Ctrl_B.bReunlockflag_l || ((Lock_Ctrl_DWork.gLOC_u8RRPowerDoorReq_prev != Lock_Ctrl_DWork.gLOC_u8RRPowerDoorReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRPowerDoorReq_start == 2))) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqCmd_m = Lock_Ctrl_IN_Release;
        Lock_Ctrl_DWork.temporalCounter_i1_lf = 0U;
        Lock_Ctrl_B.gLOC_u8RRPowerDoorRelCmd = (uint8)LMO_RELEASE;
        rtb_gCAN_u8PowerDoorCommandActi = 2U;
        Lock_Ctrl_B.gLOC_bRRPowerDoorRelsMotorMoveF = true;
        Lock_Ctrl_B.gLOC_u8RRPowerDoorRelDoneFlag = 0U;
        Lock_Ctrl_B.bReunlockflag_l = false;
      }
      break;

     case Lock_Ctrl_IN_Release:
      rtb_gCAN_u8PowerDoorCommandActi = 2U;
      Lock_Ctrl_B.gLOC_u8RRPowerDoorRelDoneFlag = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_lf >= rtb_gPRM_u8tPowerReleaseCfg) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8RRPowerDoorRelCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_m = Lock_Ctrl_IN_wait1_p;
        Lock_Ctrl_DWork.temporalCounter_i1_lf = 0U;
        rtb_gCAN_u8PowerDoorCommandActi = 0U;
        Lock_Ctrl_B.gLOC_u8RRPowerDoorRelDoneFlag = 1U;
      }
      break;

     default:
      rtb_gCAN_u8PowerDoorCommandActi = 0U;
      Lock_Ctrl_B.gLOC_u8RRPowerDoorRelDoneFlag = 1U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_lf >= 10) {
        Lock_Ctrl_DWork.is_ReqCmd_m = Lock_Ctrl_IN_NULL_fe;
        Lock_Ctrl_B.gLOC_bRRPowerDoorRelsMotorMoveF = false;
      }
      break;
    }

    switch (Lock_Ctrl_DWork.is_Reset) {
     case Lock_Ctrl_IN_NULL_fe:
      if (Lock_Ctrl_B.gLOC_u8RRPowerDoorRelDoneFlag == 1) {
        Lock_Ctrl_DWork.is_Reset = Lock_Ctrl_IN_hold;
        Lock_Ctrl_DWork.temporalCounter_i2 = 0U;
      }
      break;

     case Lock_Ctrl_IN_RESETREQ:
      if (Lock_Ctrl_DWork.temporalCounter_i2 >= rtb_gPRM_u8tPowerReleaseCfg) {
        /* 300ms */
        Lock_Ctrl_B.gLOC_u8RRPowerDoorRelCmd = (uint8)LMO_NULL;
        Lock_Ctrl_B.gLOC_bRRPowerDoorRelsMotorMoveF = false;
        Lock_Ctrl_DWork.is_Reset = Lock_Ctrl_IN_NULL_fe;
      }
      break;

     default:
      if (((!rtb_gASI_bRRDoorAjarSw) && ((rtb_gASI_bRRSecondLockFeedbackS && (Lock_Ctrl_DWork.temporalCounter_i2 >= 5U)) || ((!rtb_gASI_bRRSecondLockFeedbackS) && (Lock_Ctrl_DWork.temporalCounter_i2 >= (uint32)(rtb_gPRM_u8tPowerReleaseTimeOut * 10))))) || (rtb_gASI_bRRDoorAjarSw && ((rtb_gASI_bRRSecondLockFeedbackS && (Lock_Ctrl_DWork.temporalCounter_i2 >= 5U)) || ((!rtb_gASI_bRRSecondLockFeedbackS) && (Lock_Ctrl_DWork.temporalCounter_i2 >= (uint32)(rtb_gPRM_u8tPowerReleaseTimeOut * 10)))))) {
        /* 5s */
        /* 5s */
        Lock_Ctrl_DWork.is_Reset = Lock_Ctrl_IN_RESETREQ;
        Lock_Ctrl_DWork.temporalCounter_i2 = 0U;
        Lock_Ctrl_B.gLOC_u8RRPowerDoorRelCmd = (uint8)LMO_RESET;
        Lock_Ctrl_DWork.bFirstRun = true;
        Lock_Ctrl_B.gLOC_bRRPowerDoorRelsMotorMoveF = true;
      } else {
        if ((Lock_Ctrl_B.gLOC_u8RRPowerDoorRelDoneFlag == 0) || (Lock_Ctrl_B.gLOC_u8RRPowerDoorRelCmd == LMO_RELEASE)) {
          Lock_Ctrl_DWork.is_Reset = Lock_Ctrl_IN_NULL_fe;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S33>/DoorsMotorOutput' */

  /* Chart: '<S3>/LeftRearMotorOutput4' */
  if (Lock_Ctrl_B.gLOC_u8RRPowerDoorRelCmd == LMO_RELEASE) {
    /* &#x7535;&#x91CA;&#x653E; */
    rtb_gPRM_u8tPowerReleaseCfg = 1U;
    rtb_gPRM_u8tPowerReleaseTimeOut = 50U;
  } else if (Lock_Ctrl_B.gLOC_u8RRPowerDoorRelCmd == LMO_RESET) {
    /* &#x7535;&#x590D;&#x4F4D; */
    rtb_gPRM_u8tPowerReleaseCfg = 2U;
    rtb_gPRM_u8tPowerReleaseTimeOut = 50U;
  } else {
    rtb_gPRM_u8tPowerReleaseCfg = 0U;
    rtb_gPRM_u8tPowerReleaseTimeOut = 0U;
  }

  /* End of Chart: '<S3>/LeftRearMotorOutput4' */

  /* Inport: '<Root>/gLock_u8RLChildLockMotorUds_Val' */
  Rte_Read_gLock_u8RLChildLockMotorUds_Val(&rtb_gLOC_u8RLCSLDoorLockReq);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_bRLChildLockMotorTrigUds_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_bRLChildLockMotorTrigUds_Val'
   */
  Rte_Read_gLock_bRLChildLockMotorTrigUds_Val(&rtb_TmpSignalConversionAtgLo_pr);

  /* Chart: '<S64>/Chart' */
  Lock_Ctrl_Chart_k(rtb_gLOC_u8RLCSLDoorLockReq, rtb_TmpSignalConversionAtgLo_pr, &rtb_UdsReq_o, &Lock_Ctrl_DWork.sf_Chart_k);

  /* Chart: '<S28>/LockReq' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_d2 < 3U) {
    Lock_Ctrl_DWork.temporalCounter_i1_d2++;
  }

  Lock_Ctrl_DWork.gCAN_bLCK_RearLeftChildSaftyLoc = Lock_Ctrl_DWork.gCAN_bLCK_RearLeftChildSaftyL_l;
  Lock_Ctrl_DWork.gCAN_bLCK_RearLeftChildSaftyL_l = tmpRead_4;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__p = Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_me;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_me = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
  if (Lock_Ctrl_DWork.is_active_c44_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gCAN_bLCK_RearLeftChildSaftyLoc = tmpRead_4;
    Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__p = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
    Lock_Ctrl_DWork.is_active_c44_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_c44_Lock_Ctrl = Lock_Ctrl_IN_NULL_fe;
    rtb_gLOC_u8RLCSLDoorLockReq = 0U;
  } else if (Lock_Ctrl_DWork.is_c44_Lock_Ctrl == Lock_Ctrl_IN_NULL_fe) {
    rtb_gLOC_u8RLCSLDoorLockReq = 0U;
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    if (tmpRead_4) {
      /* Active */
      if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__p != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_me) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_me == 1)) {
        guard1 = true;
      } else if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__p != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_me) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_me == 4)) {
        guard2 = true;
      } else if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__p != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_me) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_me == 6)) {
        guard3 = true;
      } else {
        guard4 = true;
      }
    } else {
      guard4 = true;
    }

    if (guard4) {
      if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 1) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearLeftChildSaftyLoc != Lock_Ctrl_DWork.gCAN_bLCK_RearLeftChildSaftyL_l) && Lock_Ctrl_DWork.gCAN_bLCK_RearLeftChildSaftyL_l)) {
        guard1 = true;
      } else if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 4) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearLeftChildSaftyLoc != Lock_Ctrl_DWork.gCAN_bLCK_RearLeftChildSaftyL_l) && Lock_Ctrl_DWork.gCAN_bLCK_RearLeftChildSaftyL_l)) {
        guard2 = true;
      } else {
        if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 6) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearLeftChildSaftyLoc != Lock_Ctrl_DWork.gCAN_bLCK_RearLeftChildSaftyL_l) && Lock_Ctrl_DWork.gCAN_bLCK_RearLeftChildSaftyL_l)) {
          guard3 = true;
        }
      }
    }

    if (guard3) {
      Lock_Ctrl_DWork.is_c44_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_d2 = 0U;
      Lock_Ctrl_DWork.is_REQ_k = Lock_Ctrl_IN_EmergencyUnlock;
      rtb_gLOC_u8RLCSLDoorLockReq = 6U;
    }

    if (guard2) {
      Lock_Ctrl_DWork.is_c44_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_d2 = 0U;
      Lock_Ctrl_DWork.is_REQ_k = Lock_Ctrl_IN_unlock;
      rtb_gLOC_u8RLCSLDoorLockReq = 4U;
    }

    if (guard1) {
      Lock_Ctrl_DWork.is_c44_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_d2 = 0U;
      Lock_Ctrl_DWork.is_REQ_k = Lock_Ctrl_IN_Lock_i;
      rtb_gLOC_u8RLCSLDoorLockReq = 1U;
    }
  } else if (Lock_Ctrl_DWork.temporalCounter_i1_d2 >= 2) {
    Lock_Ctrl_DWork.is_REQ_k = Lock_Ctrl_IN_NO_ACTIVE_CHILD_if;
    Lock_Ctrl_DWork.is_c44_Lock_Ctrl = Lock_Ctrl_IN_NULL_fe;
    rtb_gLOC_u8RLCSLDoorLockReq = 0U;
  } else {
    switch (Lock_Ctrl_DWork.is_REQ_k) {
     case Lock_Ctrl_IN_EmergencyUnlock:
      rtb_gLOC_u8RLCSLDoorLockReq = 6U;
      break;

     case Lock_Ctrl_IN_Lock_i:
      rtb_gLOC_u8RLCSLDoorLockReq = 1U;
      break;

     default:
      rtb_gLOC_u8RLCSLDoorLockReq = 4U;
      break;
    }
  }

  /* End of Chart: '<S28>/LockReq' */

  /* Switch: '<S64>/Switch' */
  if (rtb_TmpSignalConversionAtgLo_pr) {
    rtb_gLOC_u8RLCSLDoorLockReq = rtb_UdsReq_o;
  }

  /* End of Switch: '<S64>/Switch' */

  /* Chart: '<S28>/DoorsMotorOutput' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_o < MAX_uint32_T) {
    Lock_Ctrl_DWork.temporalCounter_i1_o++;
  }

  Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev = Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start;
  Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start = rtb_gLOC_u8RLCSLDoorLockReq;
  if (Lock_Ctrl_DWork.is_active_c43_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev = rtb_gLOC_u8RLCSLDoorLockReq;
    Lock_Ctrl_DWork.is_active_c43_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_ReqDect_j = Lock_Ctrl_IN_Null;
    Lock_Ctrl_DWork.is_ReqCmd_a = Lock_Ctrl_IN_NULL_fz;
    Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd = (uint8)LMO_NULL;
    Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 0U;
    Lock_Ctrl_B.gLOC_bRLCSLDoorMotorMoveFlag = false;
  } else {
    switch (Lock_Ctrl_DWork.is_ReqDect_j) {
     case Lock_Ctrl_IN_Null:
      if (Lock_Ctrl_B.gLOC_bRLCSLDoorMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 1)) {
          /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_j = Lock_Ctrl_IN_RELOCKREQ_g;
          Lock_Ctrl_B.bRelockflag_j = true;
        } else if ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 6)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
             &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
             &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_j = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
          Lock_Ctrl_B.bReEmergencyunlockflag_o = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
            Lock_Ctrl_DWork.is_ReqDect_j = Lock_Ctrl_IN_REUNLOCKREQ_j;
            Lock_Ctrl_B.bReunlockflag_m = true;
          }
        }
      }
      break;

     case Lock_Ct_IN_REEMERGENCYUNLOCKREQ:
      if (Lock_Ctrl_B.gLOC_bRLCSLDoorMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 1)) {
          /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bReEmergencyunlockflag_o = false;
          Lock_Ctrl_DWork.is_ReqDect_j = Lock_Ctrl_IN_RELOCKREQ_g;
          Lock_Ctrl_B.bRelockflag_j = true;
        } else if ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 6)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
             &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
             &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_j = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
          Lock_Ctrl_B.bReEmergencyunlockflag_o = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
            Lock_Ctrl_B.bReEmergencyunlockflag_o = false;
            Lock_Ctrl_DWork.is_ReqDect_j = Lock_Ctrl_IN_REUNLOCKREQ_j;
            Lock_Ctrl_B.bReunlockflag_m = true;
          }
        }
      }
      break;

     case Lock_Ctrl_IN_RELOCKREQ_g:
      if (Lock_Ctrl_B.gLOC_bRLCSLDoorMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 1)) {
          /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_j = Lock_Ctrl_IN_RELOCKREQ_g;
          Lock_Ctrl_B.bRelockflag_j = true;
        } else if ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 6)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
             &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
             &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bRelockflag_j = false;
          Lock_Ctrl_DWork.is_ReqDect_j = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
          Lock_Ctrl_B.bReEmergencyunlockflag_o = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
            Lock_Ctrl_B.bRelockflag_j = false;
            Lock_Ctrl_DWork.is_ReqDect_j = Lock_Ctrl_IN_REUNLOCKREQ_j;
            Lock_Ctrl_B.bReunlockflag_m = true;
          }
        }
      }
      break;

     default:
      if (Lock_Ctrl_B.gLOC_bRLCSLDoorMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 1)) {
          /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bReunlockflag_m = false;
          Lock_Ctrl_DWork.is_ReqDect_j = Lock_Ctrl_IN_RELOCKREQ_g;
          Lock_Ctrl_B.bRelockflag_j = true;
        } else if ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 6)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
             &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
             &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bReunlockflag_m = false;
          Lock_Ctrl_DWork.is_ReqDect_j = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
          Lock_Ctrl_B.bReEmergencyunlockflag_o = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
            Lock_Ctrl_DWork.is_ReqDect_j = Lock_Ctrl_IN_REUNLOCKREQ_j;
            Lock_Ctrl_B.bReunlockflag_m = true;
          }
        }
      }
      break;
    }

    switch (Lock_Ctrl_DWork.is_ReqCmd_a) {
     case Lock_Ctrl_IN_CentralLock:
      Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 1U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_o >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_a = Lock_Ctrl_IN_wait_n;
        Lock_Ctrl_DWork.temporalCounter_i1_o = 0U;
        Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 0U;
      }
      break;

     case Lock_Ctrl_IN_CentralUnlock:
      Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 2U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_o >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_a = Lock_Ctrl_IN_wait1_a;
        Lock_Ctrl_DWork.temporalCounter_i1_o = 0U;
        Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 0U;
      }
      break;

     case Lock_Ctrl_IN_EmergrencyUnlock:
      Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 2U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_o >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_a = Lock_Ctrl_IN_hold1_o;
        Lock_Ctrl_DWork.temporalCounter_i1_o = 0U;
      }
      break;

     case Lock_Ctrl_IN_EmergrencyUnlock1:
      if (Lock_Ctrl_DWork.temporalCounter_i1_o >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_a = Lock_Ctrl_IN_wait3;
        Lock_Ctrl_DWork.temporalCounter_i1_o = 0U;
        Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 0U;
      }
      break;

     case Lock_Ctrl_IN_NULL_fz:
      Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 0U;
      if (Lock_Ctrl_B.bRelockflag_j || ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 1))) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqCmd_a = Lock_Ctrl_IN_CentralLock;
        Lock_Ctrl_DWork.temporalCounter_i1_o = 0U;
        Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd = (uint8)LMO_NORMAL_LOCK;
        Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 1U;
        Lock_Ctrl_B.gLOC_bRLCSLDoorMotorMoveFlag = true;
        Lock_Ctrl_B.bRelockflag_j = false;
      } else if (Lock_Ctrl_B.bReunlockflag_m || ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 4))) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqCmd_a = Lock_Ctrl_IN_CentralUnlock;
        Lock_Ctrl_DWork.temporalCounter_i1_o = 0U;
        Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd = (uint8)LMO_NORMAL_UNLOCK;
        Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 2U;
        Lock_Ctrl_B.gLOC_bRLCSLDoorMotorMoveFlag = true;
        Lock_Ctrl_B.bReunlockflag_m = false;
      } else {
        if (Lock_Ctrl_B.bReEmergencyunlockflag_o || ((Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RLCSLDoorLockReq_start == 6))) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
             &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
             &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqCmd_a = Lock_Ctrl_IN_EmergrencyUnlock;
          Lock_Ctrl_DWork.temporalCounter_i1_o = 0U;
          Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd = (uint8)LMO_NORMAL_UNLOCK;
          Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 2U;
          Lock_Ctrl_B.gLOC_bRLCSLDoorMotorMoveFlag = true;
          Lock_Ctrl_B.bReEmergencyunlockflag_o = false;
        }
      }
      break;

     case Lock_Ctrl_IN_hold1_o:
      if (Lock_Ctrl_DWork.temporalCounter_i1_o >= (uint32)(Lock_Ctrl_B.gPRM_u8tIntervalEmgcUnlockCfg * 10)) {
        /* &#x5EF6;&#x8FDF;tIntervalEmgcUnlock */
        Lock_Ctrl_DWork.is_ReqCmd_a = Lock_Ctrl_IN_EmergrencyUnlock1;
        Lock_Ctrl_DWork.temporalCounter_i1_o = 0U;
        Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd = (uint8)LMO_NORMAL_UNLOCK;
      }
      break;

     case Lock_Ctrl_IN_wait_n:
      Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_o >= 20U) {
        Lock_Ctrl_DWork.is_ReqCmd_a = Lock_Ctrl_IN_NULL_fz;
        Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 0U;
        Lock_Ctrl_B.gLOC_bRLCSLDoorMotorMoveFlag = false;
      }
      break;

     case Lock_Ctrl_IN_wait1_a:
      Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_o >= 20U) {
        Lock_Ctrl_DWork.is_ReqCmd_a = Lock_Ctrl_IN_NULL_fz;
        Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 0U;
        Lock_Ctrl_B.gLOC_bRLCSLDoorMotorMoveFlag = false;
      }
      break;

     default:
      Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_o >= 20U) {
        Lock_Ctrl_DWork.is_ReqCmd_a = Lock_Ctrl_IN_NULL_fz;
        Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc = 0U;
        Lock_Ctrl_B.gLOC_bRLCSLDoorMotorMoveFlag = false;
      }
      break;
    }
  }

  /* End of Chart: '<S28>/DoorsMotorOutput' */

  /* Inport: '<Root>/gLock_u8RRChildLockMotorUds_Val' */
  Rte_Read_gLock_u8RRChildLockMotorUds_Val(&rtb_gLOC_u8RRCSLDoorLockReq);

  /* Chart: '<S3>/RLChildLockMotorOutput' */
  if (Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd == LMO_NORMAL_LOCK) {
    rtb_gLOC_u8RLCSLDoorLockReq = 1U;
  } else if (Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd == LMO_NORMAL_UNLOCK) {
    rtb_gLOC_u8RLCSLDoorLockReq = 2U;
  } else {
    rtb_gLOC_u8RLCSLDoorLockReq = 0U;
  }

  /* End of Chart: '<S3>/RLChildLockMotorOutput' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_bRRChildLockMotorTrigUds_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_bRRChildLockMotorTrigUds_Val'
   */
  Rte_Read_gLock_bRRChildLockMotorTrigUds_Val(&rtb_TmpSignalConversionAtgLoc_i);

  /* Chart: '<S72>/Chart' */
  Lock_Ctrl_Chart_k(rtb_gLOC_u8RRCSLDoorLockReq, rtb_TmpSignalConversionAtgLoc_i, &rtb_UdsReq_e, &Lock_Ctrl_DWork.sf_Chart_fc);

  /* Chart: '<S31>/FLDoorLockReq' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_j < 3U) {
    Lock_Ctrl_DWork.temporalCounter_i1_j++;
  }

  Lock_Ctrl_DWork.gCAN_bLCK_RearRightChildSaftyLo = Lock_Ctrl_DWork.gCAN_bLCK_RearRightChildSafty_n;
  Lock_Ctrl_DWork.gCAN_bLCK_RearRightChildSafty_n = tmpRead_7;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_is = Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__a;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__a = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
  if (Lock_Ctrl_DWork.is_active_c51_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gCAN_bLCK_RearRightChildSaftyLo = tmpRead_7;
    Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_is = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
    Lock_Ctrl_DWork.is_active_c51_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_c51_Lock_Ctrl = Lock_Ctrl_IN_NULL_fe;
    rtb_gLOC_u8RRCSLDoorLockReq = 0U;
  } else if (Lock_Ctrl_DWork.is_c51_Lock_Ctrl == Lock_Ctrl_IN_NULL_fe) {
    rtb_gLOC_u8RRCSLDoorLockReq = 0U;
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    if (tmpRead_7) {
      /* Active */
      if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_is != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__a) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__a == 1)) {
        guard1 = true;
      } else if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_is != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__a) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__a == 4)) {
        guard2 = true;
      } else if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_is != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__a) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__a == 6)) {
        guard3 = true;
      } else {
        guard4 = true;
      }
    } else {
      guard4 = true;
    }

    if (guard4) {
      if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 1) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearRightChildSaftyLo != Lock_Ctrl_DWork.gCAN_bLCK_RearRightChildSafty_n) && Lock_Ctrl_DWork.gCAN_bLCK_RearRightChildSafty_n)) {
        guard1 = true;
      } else if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 4) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearRightChildSaftyLo != Lock_Ctrl_DWork.gCAN_bLCK_RearRightChildSafty_n) && Lock_Ctrl_DWork.gCAN_bLCK_RearRightChildSafty_n)) {
        guard2 = true;
      } else {
        if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 6) && ((Lock_Ctrl_DWork.gCAN_bLCK_RearRightChildSaftyLo != Lock_Ctrl_DWork.gCAN_bLCK_RearRightChildSafty_n) && Lock_Ctrl_DWork.gCAN_bLCK_RearRightChildSafty_n)) {
          guard3 = true;
        }
      }
    }

    if (guard3) {
      Lock_Ctrl_DWork.is_c51_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_j = 0U;
      Lock_Ctrl_DWork.is_REQ_e = Lock_Ctrl_IN_EmergencyUnlock;
      rtb_gLOC_u8RRCSLDoorLockReq = 6U;
    }

    if (guard2) {
      Lock_Ctrl_DWork.is_c51_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_j = 0U;
      Lock_Ctrl_DWork.is_REQ_e = Lock_Ctrl_IN_unlock;
      rtb_gLOC_u8RRCSLDoorLockReq = 4U;
    }

    if (guard1) {
      Lock_Ctrl_DWork.is_c51_Lock_Ctrl = Lock_Ctrl_IN_REQ;
      Lock_Ctrl_DWork.temporalCounter_i1_j = 0U;
      Lock_Ctrl_DWork.is_REQ_e = Lock_Ctrl_IN_Lock_i;
      rtb_gLOC_u8RRCSLDoorLockReq = 1U;
    }
  } else if (Lock_Ctrl_DWork.temporalCounter_i1_j >= 2) {
    Lock_Ctrl_DWork.is_REQ_e = Lock_Ctrl_IN_NO_ACTIVE_CHILD_if;
    Lock_Ctrl_DWork.is_c51_Lock_Ctrl = Lock_Ctrl_IN_NULL_fe;
    rtb_gLOC_u8RRCSLDoorLockReq = 0U;
  } else {
    switch (Lock_Ctrl_DWork.is_REQ_e) {
     case Lock_Ctrl_IN_EmergencyUnlock:
      rtb_gLOC_u8RRCSLDoorLockReq = 6U;
      break;

     case Lock_Ctrl_IN_Lock_i:
      rtb_gLOC_u8RRCSLDoorLockReq = 1U;
      break;

     default:
      rtb_gLOC_u8RRCSLDoorLockReq = 4U;
      break;
    }
  }

  /* End of Chart: '<S31>/FLDoorLockReq' */

  /* Switch: '<S72>/Switch' */
  if (rtb_TmpSignalConversionAtgLoc_i) {
    rtb_gLOC_u8RRCSLDoorLockReq = rtb_UdsReq_e;
  }

  /* End of Switch: '<S72>/Switch' */

  /* Chart: '<S31>/DoorsMotorOutput' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_a < MAX_uint32_T) {
    Lock_Ctrl_DWork.temporalCounter_i1_a++;
  }

  Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev = Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start;
  Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start = rtb_gLOC_u8RRCSLDoorLockReq;
  if (Lock_Ctrl_DWork.is_active_c50_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev = rtb_gLOC_u8RRCSLDoorLockReq;
    Lock_Ctrl_DWork.is_active_c50_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_ReqDect_n = Lock_Ctrl_IN_Null;
    Lock_Ctrl_DWork.is_ReqCmd_g = Lock_Ctrl_IN_NULL_fz;
    Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd = (uint8)LMO_NULL;
    Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 0U;
    Lock_Ctrl_B.gLOC_bRRCSLDoorMotorMoveFlag = false;
  } else {
    switch (Lock_Ctrl_DWork.is_ReqDect_n) {
     case Lock_Ctrl_IN_Null:
      if (Lock_Ctrl_B.gLOC_bRRCSLDoorMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 1)) {
          /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_n = Lock_Ctrl_IN_RELOCKREQ_g;
          Lock_Ctrl_B.bRelockflag_e = true;
        } else if ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 6)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
             &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
             &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_n = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
          Lock_Ctrl_B.bReEmergencyunlockflag_i = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
            Lock_Ctrl_DWork.is_ReqDect_n = Lock_Ctrl_IN_REUNLOCKREQ_j;
            Lock_Ctrl_B.bReunlockflag_o = true;
          }
        }
      }
      break;

     case Lock_Ct_IN_REEMERGENCYUNLOCKREQ:
      if (Lock_Ctrl_B.gLOC_bRRCSLDoorMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 1)) {
          /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bReEmergencyunlockflag_i = false;
          Lock_Ctrl_DWork.is_ReqDect_n = Lock_Ctrl_IN_RELOCKREQ_g;
          Lock_Ctrl_B.bRelockflag_e = true;
        } else if ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 6)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
             &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
             &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_n = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
          Lock_Ctrl_B.bReEmergencyunlockflag_i = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
            Lock_Ctrl_B.bReEmergencyunlockflag_i = false;
            Lock_Ctrl_DWork.is_ReqDect_n = Lock_Ctrl_IN_REUNLOCKREQ_j;
            Lock_Ctrl_B.bReunlockflag_o = true;
          }
        }
      }
      break;

     case Lock_Ctrl_IN_RELOCKREQ_g:
      if (Lock_Ctrl_B.gLOC_bRRCSLDoorMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 1)) {
          /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_n = Lock_Ctrl_IN_RELOCKREQ_g;
          Lock_Ctrl_B.bRelockflag_e = true;
        } else if ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 6)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
             &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
             &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bRelockflag_e = false;
          Lock_Ctrl_DWork.is_ReqDect_n = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
          Lock_Ctrl_B.bReEmergencyunlockflag_i = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
            Lock_Ctrl_B.bRelockflag_e = false;
            Lock_Ctrl_DWork.is_ReqDect_n = Lock_Ctrl_IN_REUNLOCKREQ_j;
            Lock_Ctrl_B.bReunlockflag_o = true;
          }
        }
      }
      break;

     default:
      if (Lock_Ctrl_B.gLOC_bRRCSLDoorMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 1)) {
          /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bReunlockflag_o = false;
          Lock_Ctrl_DWork.is_ReqDect_n = Lock_Ctrl_IN_RELOCKREQ_g;
          Lock_Ctrl_B.bRelockflag_e = true;
        } else if ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 6)) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
             &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
             &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_B.bReunlockflag_o = false;
          Lock_Ctrl_DWork.is_ReqDect_n = Lock_Ct_IN_REEMERGENCYUNLOCKREQ;
          Lock_Ctrl_B.bReEmergencyunlockflag_i = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
            Lock_Ctrl_DWork.is_ReqDect_n = Lock_Ctrl_IN_REUNLOCKREQ_j;
            Lock_Ctrl_B.bReunlockflag_o = true;
          }
        }
      }
      break;
    }

    switch (Lock_Ctrl_DWork.is_ReqCmd_g) {
     case Lock_Ctrl_IN_CentralLock:
      Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 1U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_a >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_g = Lock_Ctrl_IN_wait_n;
        Lock_Ctrl_DWork.temporalCounter_i1_a = 0U;
        Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 0U;
      }
      break;

     case Lock_Ctrl_IN_CentralUnlock:
      Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 2U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_a >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_g = Lock_Ctrl_IN_wait1_a;
        Lock_Ctrl_DWork.temporalCounter_i1_a = 0U;
        Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 0U;
      }
      break;

     case Lock_Ctrl_IN_EmergrencyUnlock:
      Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 2U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_a >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_g = Lock_Ctrl_IN_hold1_o;
        Lock_Ctrl_DWork.temporalCounter_i1_a = 0U;
      }
      break;

     case Lock_Ctrl_IN_EmergrencyUnlock1:
      if (Lock_Ctrl_DWork.temporalCounter_i1_a >= Lock_Ctrl_B.gPRM_u8tDoorsLockUnlockCfg) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_g = Lock_Ctrl_IN_wait3;
        Lock_Ctrl_DWork.temporalCounter_i1_a = 0U;
        Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 0U;
      }
      break;

     case Lock_Ctrl_IN_NULL_fz:
      Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 0U;
      if (Lock_Ctrl_B.bRelockflag_e || ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 1))) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqCmd_g = Lock_Ctrl_IN_CentralLock;
        Lock_Ctrl_DWork.temporalCounter_i1_a = 0U;
        Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd = (uint8)LMO_NORMAL_LOCK;
        Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 1U;
        Lock_Ctrl_B.gLOC_bRRCSLDoorMotorMoveFlag = true;
        Lock_Ctrl_B.bRelockflag_e = false;
      } else if (Lock_Ctrl_B.bReunlockflag_o || ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 4))) {
        /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
        Lock_Ctrl_DWork.is_ReqCmd_g = Lock_Ctrl_IN_CentralUnlock;
        Lock_Ctrl_DWork.temporalCounter_i1_a = 0U;
        Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd = (uint8)LMO_NORMAL_UNLOCK;
        Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 2U;
        Lock_Ctrl_B.gLOC_bRRCSLDoorMotorMoveFlag = true;
        Lock_Ctrl_B.bReunlockflag_o = false;
      } else {
        if (Lock_Ctrl_B.bReEmergencyunlockflag_i || ((Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_prev != Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start) && (Lock_Ctrl_DWork.gLOC_u8RRCSLDoorLockReq_start == 6))) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock
             &#x5EF6;&#x8FDF;tIntervalEmgcUnlock
             &#x9A71;&#x52A8;&#x89E3;&#x9501;tDoorsLockUnlock */
          Lock_Ctrl_DWork.is_ReqCmd_g = Lock_Ctrl_IN_EmergrencyUnlock;
          Lock_Ctrl_DWork.temporalCounter_i1_a = 0U;
          Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd = (uint8)LMO_NORMAL_UNLOCK;
          Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 2U;
          Lock_Ctrl_B.gLOC_bRRCSLDoorMotorMoveFlag = true;
          Lock_Ctrl_B.bReEmergencyunlockflag_i = false;
        }
      }
      break;

     case Lock_Ctrl_IN_hold1_o:
      if (Lock_Ctrl_DWork.temporalCounter_i1_a >= (uint32)(Lock_Ctrl_B.gPRM_u8tIntervalEmgcUnlockCfg * 10)) {
        /* &#x5EF6;&#x8FDF;tIntervalEmgcUnlock */
        Lock_Ctrl_DWork.is_ReqCmd_g = Lock_Ctrl_IN_EmergrencyUnlock1;
        Lock_Ctrl_DWork.temporalCounter_i1_a = 0U;
        Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd = (uint8)LMO_NORMAL_UNLOCK;
      }
      break;

     case Lock_Ctrl_IN_wait_n:
      Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_a >= 20U) {
        Lock_Ctrl_DWork.is_ReqCmd_g = Lock_Ctrl_IN_NULL_fz;
        Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 0U;
        Lock_Ctrl_B.gLOC_bRRCSLDoorMotorMoveFlag = false;
      }
      break;

     case Lock_Ctrl_IN_wait1_a:
      Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_a >= 20U) {
        Lock_Ctrl_DWork.is_ReqCmd_g = Lock_Ctrl_IN_NULL_fz;
        Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 0U;
        Lock_Ctrl_B.gLOC_bRRCSLDoorMotorMoveFlag = false;
      }
      break;

     default:
      Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_a >= 20U) {
        Lock_Ctrl_DWork.is_ReqCmd_g = Lock_Ctrl_IN_NULL_fz;
        Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA = 0U;
        Lock_Ctrl_B.gLOC_bRRCSLDoorMotorMoveFlag = false;
      }
      break;
    }
  }

  /* End of Chart: '<S31>/DoorsMotorOutput' */

  /* Chart: '<S3>/RRChildLockMotorOutput' */
  if (Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd == LMO_NORMAL_LOCK) {
    rtb_gLOC_u8RRCSLDoorLockReq = 1U;
  } else if (Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd == LMO_NORMAL_UNLOCK) {
    rtb_gLOC_u8RRCSLDoorLockReq = 2U;
  } else {
    rtb_gLOC_u8RRCSLDoorLockReq = 0U;
  }

  /* End of Chart: '<S3>/RRChildLockMotorOutput' */

  /* Chart: '<S36>/TrunkUnlockReq' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_d < 3U) {
    Lock_Ctrl_DWork.temporalCounter_i1_d++;
  }

  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_pr = Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_st;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_st = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
  Lock_Ctrl_DWork.gCAN_bLCK_TrunkLock_prev = Lock_Ctrl_DWork.gCAN_bLCK_TrunkLock_start;
  Lock_Ctrl_DWork.gCAN_bLCK_TrunkLock_start = tmpRead_a;
  if (Lock_Ctrl_DWork.is_active_c110_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_pr = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
    Lock_Ctrl_DWork.gCAN_bLCK_TrunkLock_prev = tmpRead_a;
    Lock_Ctrl_DWork.is_active_c110_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_c110_Lock_Ctrl = Lock_Ctrl_IN_NoReq_l;
    Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockReq = 0U;
  } else if (Lock_Ctrl_DWork.is_c110_Lock_Ctrl == Lock_Ctrl_IN_NoReq_l) {
    if (((rtb_gCAN_u16BCS_VehSpd <= 3) && rtb_gCAN_bBCS_VehSpdVD) || ((!rtb_gCAN_bBCS_VehSpdVD) && ((rtb_TmpSignalConversionAtgCAN_u == 0) || (rtb_TmpSignalConversionAtgCAN_u == 1)))) {
      if ((rtb_gCAN_u8SRS_CrashOutputSt == 0) && ((tmpRead_a && ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_pr != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_st) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_st == 4))) || ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 4) && ((Lock_Ctrl_DWork.gCAN_bLCK_TrunkLock_prev != Lock_Ctrl_DWork.gCAN_bLCK_TrunkLock_start) && Lock_Ctrl_DWork.gCAN_bLCK_TrunkLock_start)))) {
        Lock_Ctrl_DWork.is_c110_Lock_Ctrl = Lock_Ctrl_IN_Req_h;
        Lock_Ctrl_DWork.temporalCounter_i1_d = 0U;
        Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockReq = 4U;
      } else {
        Lock_Ctrl_DWork.is_c110_Lock_Ctrl = Lock_Ctrl_IN_NoReq_l;
        Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockReq = 0U;
      }
    }
  } else {
    if (Lock_Ctrl_DWork.temporalCounter_i1_d >= 2) {
      Lock_Ctrl_DWork.is_c110_Lock_Ctrl = Lock_Ctrl_IN_NoReq_l;
      Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockReq = 0U;
    }
  }

  /* End of Chart: '<S36>/TrunkUnlockReq' */

  /* Chart: '<S36>/OutHoodLockAction' incorporates:
   *  Inport: '<Root>/gPRM_u8tTrunkUnlockCfg'
   */
  if (Lock_Ctrl_DWork.temporalCounter_i1_k < 255U) {
    Lock_Ctrl_DWork.temporalCounter_i1_k++;
  }

  Lock_Ctrl_DWork.gLOC_u8TrunkDoorUnlockReq_prev = Lock_Ctrl_DWork.gLOC_u8TrunkDoorUnlockReq_start;
  Lock_Ctrl_DWork.gLOC_u8TrunkDoorUnlockReq_start = Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockReq;
  if (Lock_Ctrl_DWork.is_active_c109_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gLOC_u8TrunkDoorUnlockReq_prev = Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockReq;
    Lock_Ctrl_DWork.is_active_c109_Lock_Ctrl = 1U;
    if (Lock_Ctrl_B.gLOC_bTrunkMotorMoveFlag && ((Lock_Ctrl_DWork.gLOC_u8TrunkDoorUnlockReq_prev != Lock_Ctrl_DWork.gLOC_u8TrunkDoorUnlockReq_start) && (Lock_Ctrl_DWork.gLOC_u8TrunkDoorUnlockReq_start == 4))) {
      Lock_Ctrl_B.gLOC_bReUnlockFlag = true;
    }

    Lock_Ctrl_DWork.is_Unlock = Lock_Ctrl_IN_Noreq;
    rtb_gLOC_u8TrunkLockAction = 0U;
    Lock_Ctrl_B.gLOC_bTrunkMotorMoveFlag = false;
    Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockCmd = 0U;
  } else {
    if (Lock_Ctrl_B.gLOC_bTrunkMotorMoveFlag && ((Lock_Ctrl_DWork.gLOC_u8TrunkDoorUnlockReq_prev != Lock_Ctrl_DWork.gLOC_u8TrunkDoorUnlockReq_start) && (Lock_Ctrl_DWork.gLOC_u8TrunkDoorUnlockReq_start == 4))) {
      Lock_Ctrl_B.gLOC_bReUnlockFlag = true;
    }

    Rte_Read_gPRM_u8tTrunkUnlockCfg_Val(&rtb_gLOC_u8BootLockMotorOutput);
    switch (Lock_Ctrl_DWork.is_Unlock) {
     case Lock_Ctrl_IN_Noreq:
      rtb_gLOC_u8TrunkLockAction = 0U;
      if ((Lock_Ctrl_DWork.gLOC_u8TrunkDoorUnlockReq_prev != Lock_Ctrl_DWork.gLOC_u8TrunkDoorUnlockReq_start) && (Lock_Ctrl_DWork.gLOC_u8TrunkDoorUnlockReq_start == 4)) {
        Lock_Ctrl_DWork.is_Unlock = Lock_Ctrl_IN_Unlock_o;
        Lock_Ctrl_DWork.temporalCounter_i1_k = 0U;
        rtb_gLOC_u8TrunkLockAction = 2U;
        Lock_Ctrl_B.gLOC_bTrunkMotorMoveFlag = true;
        Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockCmd = (uint8)LMO_NORMAL_UNLOCK;
      } else {
        if (Lock_Ctrl_B.gLOC_bReUnlockFlag) {
          Lock_Ctrl_DWork.is_Unlock = Lock_Ctrl_IN_ReUnlock;
          Lock_Ctrl_DWork.temporalCounter_i1_k = 0U;
          rtb_gLOC_u8TrunkLockAction = 2U;
          Lock_Ctrl_B.gLOC_bTrunkMotorMoveFlag = true;
          Lock_Ctrl_B.gLOC_bReUnlockFlag = false;
          Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockCmd = (uint8)LMO_NORMAL_UNLOCK;
        }
      }
      break;

     case Lock_Ctrl_IN_ReUnlock:
      rtb_gLOC_u8TrunkLockAction = 2U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_k >= rtb_gLOC_u8BootLockMotorOutput) {
        Lock_Ctrl_DWork.is_Unlock = Lock_Ctrl_IN_hold1_m;
        Lock_Ctrl_DWork.temporalCounter_i1_k = 0U;
        rtb_gLOC_u8TrunkLockAction = 0U;
        Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockCmd = 0U;
      }
      break;

     case Lock_Ctrl_IN_Unlock_o:
      rtb_gLOC_u8TrunkLockAction = 2U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_k >= rtb_gLOC_u8BootLockMotorOutput) {
        Lock_Ctrl_DWork.is_Unlock = Lock_Ctrl_IN_hold_d;
        Lock_Ctrl_DWork.temporalCounter_i1_k = 0U;
        rtb_gLOC_u8TrunkLockAction = 0U;
        Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockCmd = 0U;
      }
      break;

     case Lock_Ctrl_IN_hold_d:
      rtb_gLOC_u8TrunkLockAction = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_k >= 20) {
        Lock_Ctrl_DWork.is_Unlock = Lock_Ctrl_IN_Noreq;
        Lock_Ctrl_B.gLOC_bTrunkMotorMoveFlag = false;
        Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockCmd = 0U;
      }
      break;

     default:
      rtb_gLOC_u8TrunkLockAction = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_k >= 20) {
        Lock_Ctrl_DWork.is_Unlock = Lock_Ctrl_IN_Noreq;
        Lock_Ctrl_B.gLOC_bTrunkMotorMoveFlag = false;
        Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockCmd = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S36>/OutHoodLockAction' */

  /* Chart: '<S3>/TrunkMotorOutput' */
  if (Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockCmd == LMO_NORMAL_UNLOCK) {
    rtb_gLOC_u8BootLockMotorOutput = 2U;
  } else {
    rtb_gLOC_u8BootLockMotorOutput = 0U;
  }

  /* End of Chart: '<S3>/TrunkMotorOutput' */

  /* Chart: '<S16>/TrunkUnlockReq' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_c < 3U) {
    Lock_Ctrl_DWork.temporalCounter_i1_c++;
  }

  Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Alock_p = Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Alock_s;
  Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Alock_s = tmpRead_2;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_if = Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__h;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__h = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
  if (Lock_Ctrl_DWork.is_active_c25_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Alock_p = tmpRead_2;
    Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_if = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
    Lock_Ctrl_DWork.is_active_c25_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_c25_Lock_Ctrl = Lock_Ctrl_IN_NoReq_l;
    rtb_gLOC_u8FillerCapLockReqA = 0U;
  } else if (Lock_Ctrl_DWork.is_c25_Lock_Ctrl == Lock_Ctrl_IN_NoReq_l) {
    rtb_gLOC_u8FillerCapLockReqA = 0U;
    if (rtb_gCAN_u8SRS_CrashOutputSt == 0) {
      guard1 = false;
      guard2 = false;
      guard3 = false;
      if (tmpRead_2) {
        if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_if != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__h) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__h == 1)) {
          guard1 = true;
        } else if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType_if != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__h) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__h == 4)) {
          guard2 = true;
        } else {
          guard3 = true;
        }
      } else {
        guard3 = true;
      }

      if (guard3) {
        if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 1) && ((Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Alock_p != Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Alock_s) && Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Alock_s)) {
          guard1 = true;
        } else {
          if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 4) && ((Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Alock_p != Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Alock_s) && Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Alock_s)) {
            guard2 = true;
          }
        }
      }

      if (guard2) {
        Lock_Ctrl_DWork.is_c25_Lock_Ctrl = Lock_Ctrl_IN_REQ;
        Lock_Ctrl_DWork.temporalCounter_i1_c = 0U;
        Lock_Ctrl_DWork.is_REQ_kg = Lock_Ctrl_IN_UnlockReq;
        rtb_gLOC_u8FillerCapLockReqA = 4U;
      }

      if (guard1) {
        Lock_Ctrl_DWork.is_c25_Lock_Ctrl = Lock_Ctrl_IN_REQ;
        Lock_Ctrl_DWork.temporalCounter_i1_c = 0U;
        Lock_Ctrl_DWork.is_REQ_kg = Lock_Ctrl_IN_LockReq;
        rtb_gLOC_u8FillerCapLockReqA = 1U;
      }
    }
  } else if (Lock_Ctrl_DWork.temporalCounter_i1_c >= 2) {
    Lock_Ctrl_DWork.is_REQ_kg = Lock_Ctrl_IN_NO_ACTIVE_CHILD_if;
    Lock_Ctrl_DWork.is_c25_Lock_Ctrl = Lock_Ctrl_IN_NoReq_l;
    rtb_gLOC_u8FillerCapLockReqA = 0U;
  } else if (Lock_Ctrl_DWork.is_REQ_kg == Lock_Ctrl_IN_LockReq) {
    rtb_gLOC_u8FillerCapLockReqA = 1U;
  } else {
    rtb_gLOC_u8FillerCapLockReqA = 4U;
  }

  /* End of Chart: '<S16>/TrunkUnlockReq' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8tFillerCapLockUnlockCfgOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8tFillerCapLockUnlockCfg'
   */
  Rte_Read_gPRM_u8tFillerCapLockUnlockCfg_Val(&rtb_gPRM_u8tFillerCapLockUnlock);

  /* Chart: '<S16>/DoorsMotorOutput' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_at < 255U) {
    Lock_Ctrl_DWork.temporalCounter_i1_at++;
  }

  Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_prev = Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start;
  Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start = rtb_gLOC_u8FillerCapLockReqA;
  if (Lock_Ctrl_DWork.is_active_c24_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_prev = rtb_gLOC_u8FillerCapLockReqA;
    Lock_Ctrl_DWork.is_active_c24_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_ReqDect_d = Lock_Ctrl_IN_Null;
    Lock_Ctrl_DWork.is_ReqCmd_k = Lock_Ctrl_IN_NULL_f;
    Lock_Ctrl_B.gLOC_u8FillerCapAMotorCmd = (uint8)LMO_NULL;
    rtb_gLOC_u8FillerCapLock_AActio = 0U;
    Lock_Ctrl_B.gLOC_bFillerCapAMotorMoveFlag = false;
  } else {
    switch (Lock_Ctrl_DWork.is_ReqDect_d) {
     case Lock_Ctrl_IN_Null:
      if (Lock_Ctrl_B.gLOC_bFillerCapAMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start == 1)) {
          /* tFillerCapLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_d = Lock_Ctrl_IN_RELOCKREQ;
          Lock_Ctrl_B.bRelockflag_c = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tFillerCapLockUnlock */
            Lock_Ctrl_DWork.is_ReqDect_d = Lock_Ctrl_IN_REUNLOCKREQ;
            Lock_Ctrl_B.bReunlockflag_k = true;
          }
        }
      }
      break;

     case Lock_Ctrl_IN_RELOCKREQ:
      if (Lock_Ctrl_B.gLOC_bFillerCapAMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start == 1)) {
          /* tFillerCapLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_d = Lock_Ctrl_IN_RELOCKREQ;
          Lock_Ctrl_B.bRelockflag_c = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tFillerCapLockUnlock */
            Lock_Ctrl_B.bRelockflag_c = false;
            Lock_Ctrl_DWork.is_ReqDect_d = Lock_Ctrl_IN_REUNLOCKREQ;
            Lock_Ctrl_B.bReunlockflag_k = true;
          }
        }
      }
      break;

     default:
      if (Lock_Ctrl_B.gLOC_bFillerCapAMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start == 1)) {
          /* tFillerCapLockUnlock */
          Lock_Ctrl_B.bReunlockflag_k = false;
          Lock_Ctrl_DWork.is_ReqDect_d = Lock_Ctrl_IN_RELOCKREQ;
          Lock_Ctrl_B.bRelockflag_c = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tFillerCapLockUnlock */
            Lock_Ctrl_DWork.is_ReqDect_d = Lock_Ctrl_IN_REUNLOCKREQ;
            Lock_Ctrl_B.bReunlockflag_k = true;
          }
        }
      }
      break;
    }

    switch (Lock_Ctrl_DWork.is_ReqCmd_k) {
     case Lock_Ctrl_IN_CentralLock:
      rtb_gLOC_u8FillerCapLock_AActio = 1U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_at >= rtb_gPRM_u8tFillerCapLockUnlock) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8FillerCapAMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_k = Lock_Ctrl_IN_wait;
        Lock_Ctrl_DWork.temporalCounter_i1_at = 0U;
        rtb_gLOC_u8FillerCapLock_AActio = 0U;
      }
      break;

     case Lock_Ctrl_IN_CentralUnlock:
      rtb_gLOC_u8FillerCapLock_AActio = 2U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_at >= rtb_gPRM_u8tFillerCapLockUnlock) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8FillerCapAMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_k = Lock_Ctrl_IN_wait1;
        Lock_Ctrl_DWork.temporalCounter_i1_at = 0U;
        rtb_gLOC_u8FillerCapLock_AActio = 0U;
      }
      break;

     case Lock_Ctrl_IN_NULL_f:
      rtb_gLOC_u8FillerCapLock_AActio = 0U;
      if (Lock_Ctrl_B.bRelockflag_c || ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start == 1))) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tFillerCapLockUnlock  */
        Lock_Ctrl_DWork.is_ReqCmd_k = Lock_Ctrl_IN_CentralLock;
        Lock_Ctrl_DWork.temporalCounter_i1_at = 0U;
        Lock_Ctrl_B.gLOC_u8FillerCapAMotorCmd = (uint8)LMO_NORMAL_LOCK;
        rtb_gLOC_u8FillerCapLock_AActio = 1U;
        Lock_Ctrl_B.gLOC_bFillerCapAMotorMoveFlag = true;
        Lock_Ctrl_B.bRelockflag_c = false;
      } else {
        if (Lock_Ctrl_B.bReunlockflag_k || ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqA_start == 4))) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tFillerCapLockUnlock  */
          Lock_Ctrl_DWork.is_ReqCmd_k = Lock_Ctrl_IN_CentralUnlock;
          Lock_Ctrl_DWork.temporalCounter_i1_at = 0U;
          Lock_Ctrl_B.gLOC_u8FillerCapAMotorCmd = (uint8)LMO_NORMAL_UNLOCK;
          rtb_gLOC_u8FillerCapLock_AActio = 2U;
          Lock_Ctrl_B.gLOC_bFillerCapAMotorMoveFlag = true;
          Lock_Ctrl_B.bReunlockflag_k = false;
        }
      }
      break;

     case Lock_Ctrl_IN_wait:
      rtb_gLOC_u8FillerCapLock_AActio = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_at >= 20) {
        Lock_Ctrl_DWork.is_ReqCmd_k = Lock_Ctrl_IN_NULL_f;
        Lock_Ctrl_B.gLOC_u8FillerCapAMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_B.gLOC_bFillerCapAMotorMoveFlag = false;
      }
      break;

     default:
      rtb_gLOC_u8FillerCapLock_AActio = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_at >= 20) {
        Lock_Ctrl_DWork.is_ReqCmd_k = Lock_Ctrl_IN_NULL_f;
        Lock_Ctrl_B.gLOC_u8FillerCapAMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_B.gLOC_bFillerCapAMotorMoveFlag = false;
      }
      break;
    }
  }

  /* End of Chart: '<S16>/DoorsMotorOutput' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCFG_bLCK_PowerFillerCapCfgOutport1' incorporates:
   *  Inport: '<Root>/gCFG_bLCK_PowerFillerCapCfg'
   */
  Rte_Read_gCFG_bLCK_PowerFillerCapCfg_Val(&rtb_gCFG_bLCK_PowerFillerCapCfg);

  /* Switch: '<S3>/Switch1' */
  if (rtb_gCFG_bLCK_PowerFillerCapCfg) {
    rtb_Switch1 = Lock_Ctrl_B.LCK_FillerCapAction;
  } else {
    rtb_Switch1 = Lock_Ctrl_B.gLOC_u8FillerCapAMotorCmd;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* Chart: '<S3>/FillerCapMotorOutput' */
  if (rtb_Switch1 == LMO_NORMAL_UNLOCK) {
    rtb_Switch1 = 2U;
  } else {
    rtb_Switch1 = (uint8)(rtb_Switch1 == LMO_NORMAL_LOCK);
  }

  /* End of Chart: '<S3>/FillerCapMotorOutput' */

  /* Chart: '<S17>/TrunkUnlockReq' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_e < 3U) {
    Lock_Ctrl_DWork.temporalCounter_i1_e++;
  }

  Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Block_p = Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Block_s;
  Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Block_s = bNMLocKeepAwakeFlag_k;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__e = Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__j;
  Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__j = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
  if (Lock_Ctrl_DWork.is_active_c27_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Block_p = bNMLocKeepAwakeFlag_k;
    Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__e = Lock_Ctrl_B.gCAN_u8LockCommandActionType;
    Lock_Ctrl_DWork.is_active_c27_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_c27_Lock_Ctrl = Lock_Ctrl_IN_NoReq_l;
    rtb_gLOC_u8FillerCapLockReqB = 0U;
  } else if (Lock_Ctrl_DWork.is_c27_Lock_Ctrl == Lock_Ctrl_IN_NoReq_l) {
    rtb_gLOC_u8FillerCapLockReqB = 0U;
    if (rtb_gCAN_u8SRS_CrashOutputSt == 0) {
      guard1 = false;
      guard2 = false;
      guard3 = false;
      if (bNMLocKeepAwakeFlag_k) {
        if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__e != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__j) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__j == 1)) {
          guard1 = true;
        } else if ((Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__e != Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__j) && (Lock_Ctrl_DWork.gCAN_u8LockCommandActionType__j == 4)) {
          guard2 = true;
        } else {
          guard3 = true;
        }
      } else {
        guard3 = true;
      }

      if (guard3) {
        if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 1) && ((Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Block_p != Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Block_s) && Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Block_s)) {
          guard1 = true;
        } else {
          if ((Lock_Ctrl_B.gCAN_u8LockCommandActionType == 4) && ((Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Block_p != Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Block_s) && Lock_Ctrl_DWork.gCAN_bLCK_FillerCapLock_Block_s)) {
            guard2 = true;
          }
        }
      }

      if (guard2) {
        Lock_Ctrl_DWork.is_c27_Lock_Ctrl = Lock_Ctrl_IN_REQ;
        Lock_Ctrl_DWork.temporalCounter_i1_e = 0U;
        Lock_Ctrl_DWork.is_REQ_j = Lock_Ctrl_IN_UnlockReq;
        rtb_gLOC_u8FillerCapLockReqB = 4U;
      }

      if (guard1) {
        Lock_Ctrl_DWork.is_c27_Lock_Ctrl = Lock_Ctrl_IN_REQ;
        Lock_Ctrl_DWork.temporalCounter_i1_e = 0U;
        Lock_Ctrl_DWork.is_REQ_j = Lock_Ctrl_IN_LockReq;
        rtb_gLOC_u8FillerCapLockReqB = 1U;
      }
    }
  } else if (Lock_Ctrl_DWork.temporalCounter_i1_e >= 2) {
    Lock_Ctrl_DWork.is_REQ_j = Lock_Ctrl_IN_NO_ACTIVE_CHILD_if;
    Lock_Ctrl_DWork.is_c27_Lock_Ctrl = Lock_Ctrl_IN_NoReq_l;
    rtb_gLOC_u8FillerCapLockReqB = 0U;
  } else if (Lock_Ctrl_DWork.is_REQ_j == Lock_Ctrl_IN_LockReq) {
    rtb_gLOC_u8FillerCapLockReqB = 1U;
  } else {
    rtb_gLOC_u8FillerCapLockReqB = 4U;
  }

  /* End of Chart: '<S17>/TrunkUnlockReq' */

  /* Chart: '<S17>/DoorsMotorOutput' */
  if (Lock_Ctrl_DWork.temporalCounter_i1_hb < 255U) {
    Lock_Ctrl_DWork.temporalCounter_i1_hb++;
  }

  Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_prev = Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start;
  Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start = rtb_gLOC_u8FillerCapLockReqB;
  if (Lock_Ctrl_DWork.is_active_c26_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_prev = rtb_gLOC_u8FillerCapLockReqB;
    Lock_Ctrl_DWork.is_active_c26_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_ReqDect_c2 = Lock_Ctrl_IN_Null;
    Lock_Ctrl_DWork.is_ReqCmd_aj = Lock_Ctrl_IN_NULL_f;
    Lock_Ctrl_B.gLOC_u8FillerCapBMotorCmd = (uint8)LMO_NULL;
    rtb_gCAN_u8SRS_CrashOutputSt = 0U;
    Lock_Ctrl_B.gLOC_bFillerCapBMotorMoveFlag = false;
  } else {
    switch (Lock_Ctrl_DWork.is_ReqDect_c2) {
     case Lock_Ctrl_IN_Null:
      if (Lock_Ctrl_B.gLOC_bFillerCapBMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start == 1)) {
          /* tFillerCapLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_c2 = Lock_Ctrl_IN_RELOCKREQ;
          Lock_Ctrl_B.bRelockflag_o = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tFillerCapLockUnlock */
            Lock_Ctrl_DWork.is_ReqDect_c2 = Lock_Ctrl_IN_REUNLOCKREQ;
            Lock_Ctrl_B.bReunlockflag_p = true;
          }
        }
      }
      break;

     case Lock_Ctrl_IN_RELOCKREQ:
      if (Lock_Ctrl_B.gLOC_bFillerCapBMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start == 1)) {
          /* tFillerCapLockUnlock */
          Lock_Ctrl_DWork.is_ReqDect_c2 = Lock_Ctrl_IN_RELOCKREQ;
          Lock_Ctrl_B.bRelockflag_o = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tFillerCapLockUnlock */
            Lock_Ctrl_B.bRelockflag_o = false;
            Lock_Ctrl_DWork.is_ReqDect_c2 = Lock_Ctrl_IN_REUNLOCKREQ;
            Lock_Ctrl_B.bReunlockflag_p = true;
          }
        }
      }
      break;

     default:
      if (Lock_Ctrl_B.gLOC_bFillerCapBMotorMoveFlag) {
        if ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start == 1)) {
          /* tFillerCapLockUnlock */
          Lock_Ctrl_B.bReunlockflag_p = false;
          Lock_Ctrl_DWork.is_ReqDect_c2 = Lock_Ctrl_IN_RELOCKREQ;
          Lock_Ctrl_B.bRelockflag_o = true;
        } else {
          if ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start == 4)) {
            /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tFillerCapLockUnlock */
            Lock_Ctrl_DWork.is_ReqDect_c2 = Lock_Ctrl_IN_REUNLOCKREQ;
            Lock_Ctrl_B.bReunlockflag_p = true;
          }
        }
      }
      break;
    }

    switch (Lock_Ctrl_DWork.is_ReqCmd_aj) {
     case Lock_Ctrl_IN_CentralLock:
      rtb_gCAN_u8SRS_CrashOutputSt = 1U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_hb >= rtb_gPRM_u8tFillerCapLockUnlock) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8FillerCapBMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_aj = Lock_Ctrl_IN_wait;
        Lock_Ctrl_DWork.temporalCounter_i1_hb = 0U;
        rtb_gCAN_u8SRS_CrashOutputSt = 0U;
      }
      break;

     case Lock_Ctrl_IN_CentralUnlock:
      rtb_gCAN_u8SRS_CrashOutputSt = 2U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_hb >= rtb_gPRM_u8tFillerCapLockUnlock) {
        /* &#x9501;&#x9A71;&#x52A8;&#x65F6;&#x95F4; */
        Lock_Ctrl_B.gLOC_u8FillerCapBMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_DWork.is_ReqCmd_aj = Lock_Ctrl_IN_wait1;
        Lock_Ctrl_DWork.temporalCounter_i1_hb = 0U;
        rtb_gCAN_u8SRS_CrashOutputSt = 0U;
      }
      break;

     case Lock_Ctrl_IN_NULL_f:
      rtb_gCAN_u8SRS_CrashOutputSt = 0U;
      if (Lock_Ctrl_B.bRelockflag_o || ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start == 1))) {
        /* &#x9A71;&#x52A8;&#x95ED;&#x9501;tFillerCapLockUnlock  */
        Lock_Ctrl_DWork.is_ReqCmd_aj = Lock_Ctrl_IN_CentralLock;
        Lock_Ctrl_DWork.temporalCounter_i1_hb = 0U;
        Lock_Ctrl_B.gLOC_u8FillerCapBMotorCmd = (uint8)LMO_NORMAL_LOCK;
        rtb_gCAN_u8SRS_CrashOutputSt = 1U;
        Lock_Ctrl_B.gLOC_bFillerCapBMotorMoveFlag = true;
        Lock_Ctrl_B.bRelockflag_o = false;
      } else {
        if (Lock_Ctrl_B.bReunlockflag_p || ((Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_prev != Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start) && (Lock_Ctrl_DWork.gLOC_u8FillerCapLockReqB_start == 4))) {
          /* &#x9A71;&#x52A8;&#x89E3;&#x9501;tFillerCapLockUnlock  */
          Lock_Ctrl_DWork.is_ReqCmd_aj = Lock_Ctrl_IN_CentralUnlock;
          Lock_Ctrl_DWork.temporalCounter_i1_hb = 0U;
          Lock_Ctrl_B.gLOC_u8FillerCapBMotorCmd = (uint8)LMO_NORMAL_UNLOCK;
          rtb_gCAN_u8SRS_CrashOutputSt = 2U;
          Lock_Ctrl_B.gLOC_bFillerCapBMotorMoveFlag = true;
          Lock_Ctrl_B.bReunlockflag_p = false;
        }
      }
      break;

     case Lock_Ctrl_IN_wait:
      rtb_gCAN_u8SRS_CrashOutputSt = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_hb >= 20) {
        Lock_Ctrl_DWork.is_ReqCmd_aj = Lock_Ctrl_IN_NULL_f;
        Lock_Ctrl_B.gLOC_u8FillerCapBMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_B.gLOC_bFillerCapBMotorMoveFlag = false;
      }
      break;

     default:
      rtb_gCAN_u8SRS_CrashOutputSt = 0U;
      if (Lock_Ctrl_DWork.temporalCounter_i1_hb >= 20) {
        Lock_Ctrl_DWork.is_ReqCmd_aj = Lock_Ctrl_IN_NULL_f;
        Lock_Ctrl_B.gLOC_u8FillerCapBMotorCmd = (uint8)LMO_NULL;
        Lock_Ctrl_B.gLOC_bFillerCapBMotorMoveFlag = false;
      }
      break;
    }
  }

  /* End of Chart: '<S17>/DoorsMotorOutput' */

  /* Chart: '<S3>/FillerCapBMotorOutput' */
  if (Lock_Ctrl_B.gLOC_u8FillerCapBMotorCmd == LMO_NORMAL_UNLOCK) {
    rtb_gPRM_u8tFillerCapLockUnlock = 2U;
  } else {
    rtb_gPRM_u8tFillerCapLockUnlock = (uint8)(Lock_Ctrl_B.gLOC_u8FillerCapBMotorCmd == LMO_NORMAL_LOCK);
  }

  /* End of Chart: '<S3>/FillerCapBMotorOutput' */

  /* Chart: '<S3>/AllowSleep_Local' */
  rtb_gLOC_u32TruckAllowSleep_Loc = (uint32)0x0000;

  /* bit 0 */
  if (rtb_gLOC_u8RLDoorElecRelMotorOu != 0) {
    rtb_gLOC_u32TruckAllowSleep_Loc = 64U;
  }

  if (rtb_gLOC_u8RLDoorLockReq != 0) {
    rtb_gLOC_u32TruckAllowSleep_Loc |= 128U;
  }

  if (rtb_gPRM_u8tPowerReleaseCfg != 0) {
    rtb_gLOC_u32TruckAllowSleep_Loc |= 512U;
  }

  if (rtb_gLOC_u8RRDoorLockReq != 0) {
    rtb_gLOC_u32TruckAllowSleep_Loc |= 1024U;
  }

  if (rtb_gLOC_u8RLCSLDoorLockReq != 0) {
    rtb_gLOC_u32TruckAllowSleep_Loc |= 4096U;
  }

  if (rtb_gLOC_u8RRCSLDoorLockReq != 0) {
    rtb_gLOC_u32TruckAllowSleep_Loc |= 8192U;
  }

  if (rtb_gLOC_u8BootLockMotorOutput != 0) {
    rtb_gLOC_u32TruckAllowSleep_Loc |= 16384U;
  }

  if (rtb_Switch1 != 0) {
    rtb_gLOC_u32TruckAllowSleep_Loc |= 32768U;
  }

  if (rtb_gPRM_u8tFillerCapLockUnlock != 0) {
    rtb_gLOC_u32TruckAllowSleep_Loc |= 65536U;
  }

  /* End of Chart: '<S3>/AllowSleep_Local' */

  /* Chart: '<S3>/AllowSleep_NM2' */
  rtb_gLOC_u32LeftAllowSleep_NW = 0x0000;

  /* bit 0 */
  if (rtb_gLOC_u8RLDoorElecRelMotorOu != 0) {
    rtb_gLOC_u32LeftAllowSleep_NW = 64;
  }

  if (rtb_gPRM_u8tPowerReleaseCfg != 0) {
    rtb_gLOC_u32LeftAllowSleep_NW |= 512U;
  }

  /* End of Chart: '<S3>/AllowSleep_NM2' */

  /* Chart: '<S57>/Chart' */
  Lock_Ctrl_Chart_f(rtb_gPRM_u8PowerDoorCfg, Lock_Ctrl_B.gLOC_u8RLPowerDoorRelDoneFlag, rtb_gASI_bRLSecondLockFeedbackS, &Lock_Ctrl_B.bPwrRelsFailedRemind_m, &Lock_Ctrl_DWork.sf_Chart_f);

  /* Chart: '<S80>/Chart' */
  Lock_Ctrl_Chart_f(rtb_gPRM_u8PowerDoorCfg, Lock_Ctrl_B.gLOC_u8RRPowerDoorRelDoneFlag, rtb_gASI_bRRSecondLockFeedbackS, &Lock_Ctrl_B.bPwrRelsFailedRemind, &Lock_Ctrl_DWork.sf_Chart_a);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8tAjarKeepAwakeCfgOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8tAjarKeepAwakeCfg'
   */
  Rte_Read_gPRM_u8tAjarKeepAwakeCfg_Val(&rtb_gPRM_u8tAjarKeepAwakeCfg);

  /* Chart: '<S3>/bRRDoorAjarSwKeepAwakeFlag' */
  Loc_bFrontLeftDoorKeepAwakeFlag(rtb_gASI_bRRDoorAjarSw, rtb_gPRM_u8tAjarKeepAwakeCfg, &bNMLocKeepAwakeFlag_k, &Lock_Ctrl_DWork.sf_bRRDoorAjarSwKeepAwakeFlag);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bTrunkAjarSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_bTrunkAjarSw'
   */
  Rte_Read_gDoor_bTrunkAjarSt_Val(&rtb_gASI_bTrunkAjarSw);

  /* Chart: '<S3>/bTrunkAjarSwKeepAwakeFlag' */
  Loc_bFrontLeftDoorKeepAwakeFlag(rtb_gASI_bTrunkAjarSw, rtb_gPRM_u8tAjarKeepAwakeCfg, &bNMLocKeepAwakeFlag_k, &Lock_Ctrl_DWork.sf_bTrunkAjarSwKeepAwakeFlag);

  /* Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag9' */
  bRLSecondLockFeedbackSwKeepAwak(rtb_gASI_bRLSecondLockFeedbackS, &bNMLocKeepAwakeFlag_k, &Lock_Ctrl_DWork.sf_bRLSecondLockFeedbackSwKee_b);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bRLDoorLockFeedbackSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_bRLDoorLockFeedbackSw'
   */
  Rte_Read_gLock_bRLDoorLockFbSt_Val(&rtb_gASI_bRLDoorLockFeedbackSw);

  /* Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1' */
  bRLSecondLockFeedbackSwKeepAwak(rtb_gASI_bRLDoorLockFeedbackSw, &bNMLocKeepAwakeFlag_k, &Lock_Ctrl_DWork.sf_bRLSecondLockFeedbackSwKeepA);

  /* Chart: '<S3>/bFrontLeftDoorKeepAwakeFlag' */
  Loc_bFrontLeftDoorKeepAwakeFlag(rtb_gASI_bRLDoorAjarSw, rtb_gPRM_u8tAjarKeepAwakeCfg, &bNMLocKeepAwakeFlag_k, &Lock_Ctrl_DWork.sf_bFrontLeftDoorKeepAwakeFlag);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDoor_bChrgCapAjarSt_ValOutport1' incorporates:
   *  Inport: '<Root>/gDoor_bChrgCapAjarSt_Val'
   */
  Rte_Read_gDoor_bChrgCapAjarSt_Val(&rtb_TmpSignalConversionAtgDoor_);

  /* Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag7' */
  bRLSecondLockFeedbackSwKeepAwak(rtb_TmpSignalConversionAtgDoor_, &bNMLocKeepAwakeFlag_k, &Lock_Ctrl_DWork.sf_bRLSecondLockFeedbackSwKe_jj);

  /* Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag2' */
  bRLSecondLockFeedbackSwKeepAwak(rtb_gASI_bRRSecondLockFeedbackS, &bNMLocKeepAwakeFlag_k, &Lock_Ctrl_DWork.sf_bRLSecondLockFeedbackSwKee_m);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bRRDoorLockFeedbackSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_bRRDoorLockFeedbackSw'
   */
  Rte_Read_gLock_bRRDoorLockFbSt_Val(&rtb_gASI_bRRDoorLockFeedbackSw);

  /* Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag3' */
  bRLSecondLockFeedbackSwKeepAwak(rtb_gASI_bRRDoorLockFeedbackSw, &bNMLocKeepAwakeFlag_k, &Lock_Ctrl_DWork.sf_bRLSecondLockFeedbackSwKee_c);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bRLPowerInReleaseSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_bRLPowerInReleaseSw'
   */
  Rte_Read_gSuctnDoor_bRLInPwrRelsSwt_Val(&rtb_TmpSignalConversionAtgASI_b);

  /* Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag4' */
  bRLSecondLockFeedbackSwKeepAwak(rtb_TmpSignalConversionAtgASI_b, &bNMLocKeepAwakeFlag_k, &Lock_Ctrl_DWork.sf_bRLSecondLockFeedbackSwKee_f);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDoor_bFuelFlapAjarSt_ValOutport1' incorporates:
   *  Inport: '<Root>/gDoor_bFuelFlapAjarSt_Val'
   */
  Rte_Read_gDoor_bFuelFlapAjarSt_Val(&rtb_gDoor_bFuelFlapAjarSt);

  /* Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag5' */
  bRLSecondLockFeedbackSwKeepAwak(rtb_gDoor_bFuelFlapAjarSt, &bNMLocKeepAwakeFlag_k, &Lock_Ctrl_DWork.sf_bRLSecondLockFeedbackSwKee_k);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bRRPowerInReleaseSwOutport1' incorporates:
   *  Inport: '<Root>/gASI_bRRPowerInReleaseSw'
   */
  Rte_Read_gSuctnDoor_bRRInPwrRlesSwt_Val(&rtb_TmpSignalConversionAtgASI_h);

  /* Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag6' */
  bRLSecondLockFeedbackSwKeepAwak(rtb_TmpSignalConversionAtgASI_h, &bNMLocKeepAwakeFlag_k, &Lock_Ctrl_DWork.sf_bRLSecondLockFeedbackSwKee_j);

  /* Chart: '<S5>/UNLOCKDTCDETECT' */
  Lock_Ctrl_UNLOCKDTCDETECT(rtb_TmpSignalConversionAtgASI_b, &Lock_Ctrl_B.bUnLockDTCflag_e, &Lock_Ctrl_DWork.sf_UNLOCKDTCDETECT_o);

  /* Chart: '<S5>/InterSwLockTrunkReq' */
  Lock_Ctrl_DWork.gASI_bRLPowerInReleaseSw_prev = Lock_Ctrl_DWork.gASI_bRLPowerInReleaseSw_start;
  Lock_Ctrl_DWork.gASI_bRLPowerInReleaseSw_start = rtb_TmpSignalConversionAtgASI_b;
  if (Lock_Ctrl_DWork.is_active_c17_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gASI_bRLPowerInReleaseSw_prev = rtb_TmpSignalConversionAtgASI_b;
    Lock_Ctrl_DWork.is_active_c17_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_c17_Lock_Ctrl = Lock_Ctrl_IN_ReqOFF;
    Lock_Ctrl_B.gLOC_bRearLeftPowerReleaseReq = false;
  } else if (Lock_Ctrl_DWork.is_c17_Lock_Ctrl == Lock_Ctrl_IN_ReqOFF) {
    if ((!Lock_Ctrl_B.bUnLockDTCflag_e) && ((Lock_Ctrl_DWork.gASI_bRLPowerInReleaseSw_prev != Lock_Ctrl_DWork.gASI_bRLPowerInReleaseSw_start) && Lock_Ctrl_DWork.gASI_bRLPowerInReleaseSw_start)) {
      Lock_Ctrl_DWork.is_c17_Lock_Ctrl = Lock_Ctrl_IN_ReqON;
      Lock_Ctrl_B.gLOC_bRearLeftPowerReleaseReq = true;
    }
  } else {
    if ((!rtb_TmpSignalConversionAtgASI_b) || Lock_Ctrl_B.bUnLockDTCflag_e) {
      Lock_Ctrl_DWork.is_c17_Lock_Ctrl = Lock_Ctrl_IN_ReqOFF;
      Lock_Ctrl_B.gLOC_bRearLeftPowerReleaseReq = false;
    }
  }

  /* End of Chart: '<S5>/InterSwLockTrunkReq' */

  /* Chart: '<S6>/UNLOCKDTCDETECT' */
  Lock_Ctrl_UNLOCKDTCDETECT(rtb_TmpSignalConversionAtgASI_h, &Lock_Ctrl_B.bUnLockDTCflag, &Lock_Ctrl_DWork.sf_UNLOCKDTCDETECT_e);

  /* Chart: '<S6>/InterSwLockTrunkReq' */
  Lock_Ctrl_DWork.gASI_bRRPowerInReleaseSw_prev = Lock_Ctrl_DWork.gASI_bRRPowerInReleaseSw_start;
  Lock_Ctrl_DWork.gASI_bRRPowerInReleaseSw_start = rtb_TmpSignalConversionAtgASI_h;
  if (Lock_Ctrl_DWork.is_active_c19_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gASI_bRRPowerInReleaseSw_prev = rtb_TmpSignalConversionAtgASI_h;
    Lock_Ctrl_DWork.is_active_c19_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_c19_Lock_Ctrl = Lock_Ctrl_IN_ReqOFF;
    Lock_Ctrl_B.gLOC_bRearRightPowerReleaseReq = false;
  } else if (Lock_Ctrl_DWork.is_c19_Lock_Ctrl == Lock_Ctrl_IN_ReqOFF) {
    if ((!Lock_Ctrl_B.bUnLockDTCflag) && ((Lock_Ctrl_DWork.gASI_bRRPowerInReleaseSw_prev != Lock_Ctrl_DWork.gASI_bRRPowerInReleaseSw_start) && Lock_Ctrl_DWork.gASI_bRRPowerInReleaseSw_start)) {
      Lock_Ctrl_DWork.is_c19_Lock_Ctrl = Lock_Ctrl_IN_ReqON;
      Lock_Ctrl_B.gLOC_bRearRightPowerReleaseReq = true;
    }
  } else {
    if ((!rtb_TmpSignalConversionAtgASI_h) || Lock_Ctrl_B.bUnLockDTCflag) {
      Lock_Ctrl_DWork.is_c19_Lock_Ctrl = Lock_Ctrl_IN_ReqOFF;
      Lock_Ctrl_B.gLOC_bRearRightPowerReleaseReq = false;
    }
  }

  /* End of Chart: '<S6>/InterSwLockTrunkReq' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bChrgCapSwtOutport1' incorporates:
   *  Inport: '<Root>/gASI_bChrgCapSwt'
   */
  Rte_Read_gLock_bChrgCapSwt_Val(&rtb_gASI_bChrgCapSwt);

  /* Chart: '<S4>/UNLOCKDTCDETECT' */
  Lock_Ctrl_UNLOCKDTCDETECT(rtb_gASI_bChrgCapSwt, &Lock_Ctrl_B.bUnLockDTCflag_l, &Lock_Ctrl_DWork.sf_UNLOCKDTCDETECT);

  /* Chart: '<S4>/ExterSwOpenFillerCapReq' */
  Lock_Ctrl_DWork.gASI_bChrgCapSwt_prev = Lock_Ctrl_DWork.gASI_bChrgCapSwt_start;
  Lock_Ctrl_DWork.gASI_bChrgCapSwt_start = rtb_gASI_bChrgCapSwt;
  if (Lock_Ctrl_DWork.is_active_c2_Lock_Ctrl == 0U) {
    Lock_Ctrl_DWork.gASI_bChrgCapSwt_prev = rtb_gASI_bChrgCapSwt;
    Lock_Ctrl_DWork.is_active_c2_Lock_Ctrl = 1U;
    Lock_Ctrl_DWork.is_c2_Lock_Ctrl = Lock_Ctrl_IN_ReqOFF;
    Lock_Ctrl_B.gLOC_u8LCK_ExterSwOpenFillerCap = false;
  } else if (Lock_Ctrl_DWork.is_c2_Lock_Ctrl == Lock_Ctrl_IN_ReqOFF) {
    if ((!Lock_Ctrl_B.bUnLockDTCflag_l) && ((Lock_Ctrl_DWork.gASI_bChrgCapSwt_prev != Lock_Ctrl_DWork.gASI_bChrgCapSwt_start) && Lock_Ctrl_DWork.gASI_bChrgCapSwt_start)) {
      Lock_Ctrl_DWork.is_c2_Lock_Ctrl = Lock_Ctrl_IN_ReqON;
      Lock_Ctrl_B.gLOC_u8LCK_ExterSwOpenFillerCap = true;
    }
  } else {
    if ((!rtb_gASI_bChrgCapSwt) || Lock_Ctrl_B.bUnLockDTCflag_l) {
      Lock_Ctrl_DWork.is_c2_Lock_Ctrl = Lock_Ctrl_IN_ReqOFF;
      Lock_Ctrl_B.gLOC_u8LCK_ExterSwOpenFillerCap = false;
    }
  }

  /* End of Chart: '<S4>/ExterSwOpenFillerCapReq' */

  /* Inport: '<Root>/gASI_bRRChildLockFeedbackSw' */
  Rte_Read_gLock_bRRChildLockFbSt_Val(&tmpRead_0);

  /* Inport: '<Root>/gASI_bRLChildLockFeedbackSw' */
  Rte_Read_gLock_bRLChildLockFbSt_Val(&tmpRead);

  /* Outport: '<Root>/gLOC_bLCK_ExterSwOpenFillerCapReq' */
  (void) Rte_Write_gLOC_bLCK_ExterSwOpenFillerCapReq_Val(Lock_Ctrl_B.gLOC_u8LCK_ExterSwOpenFillerCap);

  /* FunctionCaller: '<Root>/DTC_RLDoorAjarOL_GetEventFailed' */
  Rte_Call_DTC_RLDoorAjarOL_GetEventFailed(&rtb_DTC_RLDoorAjarOL_GetEvent_o);

  /* FunctionCaller: '<Root>/DTC_RLDoorAjarOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLDoorAjarOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<Root>/DTC_RLDoorAjarOL_SetEventStatus' */
  Rte_Call_DTC_RLDoorAjarOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<Root>/DTC_RLPwrRelsSwtStick_GetEventFailed' */
  Rte_Call_DTC_RLPwrRelsSwtStick_GetEventFailed(&rtb_DTC_RLPwrRelsSwtStick_Get_c);

  /* FunctionCaller: '<Root>/DTC_RLPwrRelsSwtStick_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLPwrRelsSwtStick_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<Root>/DTC_RLPwrRelsSwtStick_SetEventStatus' */
  Rte_Call_DTC_RLPwrRelsSwtStick_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<Root>/DTC_RRDoorAjarOL_GetEventFailed' */
  Rte_Call_DTC_RRDoorAjarOL_GetEventFailed(&rtb_DTC_RRDoorAjarOL_GetEvent_n);

  /* FunctionCaller: '<Root>/DTC_RRDoorAjarOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRDoorAjarOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<Root>/DTC_RRDoorAjarOL_SetEventStatus' */
  Rte_Call_DTC_RRDoorAjarOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<Root>/DTC_RRPwrRelsSwtStick_GetEventFailed' */
  Rte_Call_DTC_RRPwrRelsSwtStick_GetEventFailed(&rtb_DTC_RRPwrRelsSwtStick_Get_f);

  /* FunctionCaller: '<Root>/DTC_RRPwrRelsSwtStick_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRPwrRelsSwtStick_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<Root>/DTC_RRPwrRelsSwtStick_SetEventStatus' */
  Rte_Call_DTC_RRPwrRelsSwtStick_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* Outport: '<Root>/gLOC_bChrgCapSwtDTCFlag' */
  (void) Rte_Write_gLockCtrl_bChrgCapSwtDTCFlag_Val(Lock_Ctrl_B.bUnLockDTCflag_l);

  /* Outport: '<Root>/gLOC_bUINM_RearRightPowerReleaseReq' */
  (void) Rte_Write_gLOC_bUINM_RearRightPowerReleaseReq_Val(Lock_Ctrl_B.gLOC_bRearRightPowerReleaseReq);

  /* Outport: '<Root>/gLOC_bRRPowerReleaseSwDTCFlag' */
  (void) Rte_Write_gLockCtrl_bRRPowerReleaseSwDTCFlag_Val(Lock_Ctrl_B.bUnLockDTCflag);

  /* Outport: '<Root>/gLOC_bUINM_RearRightPowerReleaseFaultSt_Val' */
  (void) Rte_Write_gLock_bUINM_RearRightPowerReleaseFaultSt_Val(Lock_Ctrl_B.bUnLockDTCflag);

  /* Outport: '<Root>/gLOC_bUINM_RearLeftPowerReleaseReq' */
  (void) Rte_Write_gLOC_bUINM_RearLeftPowerReleaseReq_Val(Lock_Ctrl_B.gLOC_bRearLeftPowerReleaseReq);

  /* Outport: '<Root>/gLOC_bRLPowerReleaseSwDTCFlag' */
  (void) Rte_Write_gLockCtrl_bRLPowerReleaseSwDTCFlag_Val(Lock_Ctrl_B.bUnLockDTCflag_e);

  /* Outport: '<Root>/gLOC_bUINM_RearLeftPowerReleaseFaultSt_Val' */
  (void) Rte_Write_gLock_bUINM_RearLeftPowerReleaseFaultSt_Val(Lock_Ctrl_B.bUnLockDTCflag_e);

  /* Outport: '<Root>/gLock_bLCK_FillerCapBSt_Val' */
  (void) Rte_Write_gLock_bLCK_FillerCapBSt_Val(rtb_gDoor_bFuelFlapAjarSt);

  /* Outport: '<Root>/gLOC_bLCK_RearRightDoorLockSt' */
  (void) Rte_Write_gLOC_bLCK_RearRightDoorLockSt_Val(rtb_gASI_bRRDoorLockFeedbackSw);

  /* Outport: '<Root>/gLock_bLCK_FillerCapASt_Val' */
  (void) Rte_Write_gLock_bLCK_FillerCapASt_Val(rtb_TmpSignalConversionAtgDoor_);

  /* Outport: '<Root>/gLOC_bLCK_RearLeftDoorLockSt' */
  (void) Rte_Write_gLOC_bLCK_RearLeftDoorLockSt_Val(rtb_gASI_bRLDoorLockFeedbackSw);

  /* Outport: '<Root>/gLOC_bLCK_TrunkAjarSt' */
  (void) Rte_Write_gLOC_bLCK_TrunkAjarSt_Val(rtb_gASI_bTrunkAjarSw);

  /* Outport: '<Root>/gLock_bLCK_RearRightPowerReleaseFailedRemind_Val' */
  (void) Rte_Write_gLock_bLCK_RearRightPowerReleaseFailedRemind_Val(Lock_Ctrl_B.bPwrRelsFailedRemind);

  /* Outport: '<Root>/gLock_bLCK_RearLeftPowerReleaseFailedRemind_Val' */
  (void) Rte_Write_gLock_bLCK_RearLeftPowerReleaseFailedRemind_Val(Lock_Ctrl_B.bPwrRelsFailedRemind_m);

  /* Outport: '<Root>/gLOC_u32TruckAllowSleep_NW' */
  (void) Rte_Write_gLOC_u32AllowSleep_NW_Val((uint32)rtb_gLOC_u32LeftAllowSleep_NW);

  /* Outport: '<Root>/gLOC_u32TruckAllowSleep_Local' */
  (void) Rte_Write_gLOC_u32AllowSleep_Local_Val(rtb_gLOC_u32TruckAllowSleep_Loc);

  /* Outport: '<Root>/gLOC_u8OilTankLockMotorOutput' */
  (void) Rte_Write_gLockCtrl_u8OilTankLockMotorOutput_Val(rtb_gPRM_u8tFillerCapLockUnlock);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_u8OilTankLockMotorPs_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_u8OilTankLockMotorPs_Val'
   */
  Rte_Read_gLock_u8OilTankLockMotorPs_Val(&rtb_TmpSignalConversionAtgLock_);

  /* Switch: '<S17>/Switch' */
  if (rtb_TmpSignalConversionAtgLock_ == 0) {
    rtb_gCAN_u8SRS_CrashOutputSt = 0U;
  }

  /* End of Switch: '<S17>/Switch' */

  /* Outport: '<Root>/gLOC_u8LCK_FillerCapLock_BAction' */
  (void) Rte_Write_gLOC_u8LCK_FillerCapLock_BAction_Val(rtb_gCAN_u8SRS_CrashOutputSt);

  /* Outport: '<Root>/gLOC_u8FillerCapBMotorCmd' */
  (void) Rte_Write_gLockCtrl_u8FillerCapBMotorCmd_Val(Lock_Ctrl_B.gLOC_u8FillerCapBMotorCmd);

  /* Outport: '<Root>/gLOC_bFillerCapBRelockFlag' */
  (void) Rte_Write_gLockCtrl_bFillerCapBRelockFlag_Val(Lock_Ctrl_B.bRelockflag_o);

  /* Outport: '<Root>/gLOC_bFillerCapBReUnlockFlag' */
  (void) Rte_Write_gLockCtrl_bFillerCapBReUnlockFlag_Val(Lock_Ctrl_B.bReunlockflag_p);

  /* Outport: '<Root>/gLOC_bFillerCapBMotorMoveFlag' */
  (void) Rte_Write_gLockCtrl_bFillerCapBMotorMoveFlag_Val(Lock_Ctrl_B.gLOC_bFillerCapBMotorMoveFlag);

  /* Outport: '<Root>/gLOC_u8FillerCapLockReqB' */
  (void) Rte_Write_gLockCtrl_u8FillerCapLockReqB_Val(rtb_gLOC_u8FillerCapLockReqB);

  /* Outport: '<Root>/gLOC_u8ChrgCapLockMotorOutput' */
  (void) Rte_Write_gLockCtrl_u8ChrgCapLockMotorOutput_Val(rtb_Switch1);

  /* Switch: '<S3>/Switch2' incorporates:
   *  Constant: '<S3>/Constant'
   */
  if (rtb_gCFG_bLCK_PowerFillerCapCfg) {
    rtb_TmpSignalConversionAtgLock_ = Lock_Ctrl_B.LCK_FillerCapAction;
  } else {
    rtb_TmpSignalConversionAtgLock_ = 0U;
  }

  /* End of Switch: '<S3>/Switch2' */

  /* Outport: '<Root>/gLOC_u8LCK_FillerCapAction' */
  (void) Rte_Write_gLOC_u8LCK_FillerCapAction_Val(rtb_TmpSignalConversionAtgLock_);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_u8ChrgCapLockMotorPs_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_u8ChrgCapLockMotorPs_Val'
   */
  Rte_Read_gLock_u8ChrgCapLockMotorPs_Val(&rtb_TmpSignalConversionAtgLoc_j);

  /* Switch: '<S16>/Switch' */
  if (rtb_TmpSignalConversionAtgLoc_j == 0) {
    rtb_gLOC_u8FillerCapLock_AActio = 0U;
  }

  /* End of Switch: '<S16>/Switch' */

  /* Outport: '<Root>/gLOC_u8LCK_FillerCapLock_AAction' */
  (void) Rte_Write_gLOC_u8LCK_FillerCapLock_AAction_Val(rtb_gLOC_u8FillerCapLock_AActio);

  /* Outport: '<Root>/gLOC_u8FillerCapAMotorCmd' */
  (void) Rte_Write_gLockCtrl_u8FillerCapAMotorCmd_Val(Lock_Ctrl_B.gLOC_u8FillerCapAMotorCmd);

  /* Outport: '<Root>/gLOC_bFillerCapARelockFlag' */
  (void) Rte_Write_gLockCtrl_bFillerCapARelockFlag_Val(Lock_Ctrl_B.bRelockflag_c);

  /* Outport: '<Root>/gLOC_bFillerCapAReUnlockFlag' */
  (void) Rte_Write_gLockCtrl_bFillerCapAReUnlockFlag_Val(Lock_Ctrl_B.bReunlockflag_k);

  /* Outport: '<Root>/gLOC_bFillerCapAMotorMoveFlag' */
  (void) Rte_Write_gLockCtrl_bFillerCapAMotorMoveFlag_Val(Lock_Ctrl_B.gLOC_bFillerCapAMotorMoveFlag);

  /* Outport: '<Root>/gLOC_u8FillerCapLockReqA' */
  (void) Rte_Write_gLockCtrl_u8FillerCapLockReqA_Val(rtb_gLOC_u8FillerCapLockReqA);

  /* Outport: '<Root>/gLOC_u8BootLockMotorOutput' */
  (void) Rte_Write_gLockCtrl_u8BootLockMotorOutput_Val(rtb_gLOC_u8BootLockMotorOutput);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_u8BootLockMotorPs_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_u8BootLockMotorPs_Val'
   */
  Rte_Read_gLock_u8BootLockMotorPs_Val(&rtb_TmpSignalConversionAtgLoc_k);

  /* Switch: '<S36>/Switch' */
  if (rtb_TmpSignalConversionAtgLoc_k == 0) {
    rtb_gLOC_u8TrunkLockAction = 0U;
  }

  /* End of Switch: '<S36>/Switch' */

  /* Outport: '<Root>/gLOC_u8LCK_TrunkLockAction' */
  (void) Rte_Write_gLOC_u8LCK_TrunkLockAction_Val(rtb_gLOC_u8TrunkLockAction);

  /* Outport: '<Root>/gLOC_bTrunkMotorMoveFlag' */
  (void) Rte_Write_gLockCtrl_bTrunkMotorMoveFlag_Val(Lock_Ctrl_B.gLOC_bTrunkMotorMoveFlag);

  /* Outport: '<Root>/gLOC_bTrunkReUnlockFlag' */
  (void) Rte_Write_gLockCtrl_bTrunkReUnlockFlag_Val(Lock_Ctrl_B.gLOC_bReUnlockFlag);

  /* Outport: '<Root>/gLOC_u8TrunkDoorUnlockReq' */
  (void) Rte_Write_gLockCtrl_u8TrunkDoorUnlockReq_Val(Lock_Ctrl_B.gLOC_u8TrunkDoorUnlockReq);

  /* Outport: '<Root>/gLOC_u8RRChildLockMotorOutput' */
  (void) Rte_Write_gLockCtrl_u8RRChildLockMotorOutput_Val(rtb_gLOC_u8RRCSLDoorLockReq);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_u8RRChildLockMotorPs_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_u8RRChildLockMotorPs_Val'
   */
  Rte_Read_gLock_u8RRChildLockMotorPs_Val(&rtb_TmpSignalConversionAtgLoc_c);

  /* Switch: '<S31>/Switch' */
  if (rtb_TmpSignalConversionAtgLoc_c != 0) {
    rtb_TmpSignalConversionAtgLoc_c = Lock_Ctrl_B.gLOC_u8RearRightChildSaftyLockA;
  } else {
    rtb_TmpSignalConversionAtgLoc_c = 0U;
  }

  /* End of Switch: '<S31>/Switch' */

  /* Outport: '<Root>/gLOC_u8LCK_RearRightChildSaftyLockAction' */
  (void) Rte_Write_gLOC_u8LCK_RearRightChildSaftyLockAction_Val(rtb_TmpSignalConversionAtgLoc_c);

  /* Outport: '<Root>/gLOC_u8RRCSLLockMotorCmd' */
  (void) Rte_Write_gLockCtrl_u8RRCSLLockMotorCmd_Val(Lock_Ctrl_B.gLOC_u8RRCSLLockMotorCmd);

  /* Outport: '<Root>/gLOC_bRRCSLLockMotorRelockflag' */
  (void) Rte_Write_gLockCtrl_bRRCSLLockMotorRelockflag_Val(Lock_Ctrl_B.bRelockflag_e);

  /* Outport: '<Root>/gLOC_bRRCSLLockMotorReunlockflag' */
  (void) Rte_Write_gLockCtrl_bRRCSLLockMotorReunlockflag_Val(Lock_Ctrl_B.bReunlockflag_o);

  /* Outport: '<Root>/gLOC_bRRCSLLockMotorReReverseunlockflag' */
  (void) Rte_Write_gLockCtrl_bRRCSLLockMotorReReverseunlockflag_Val(Lock_Ctrl_B.bReReverseunlockflag_n);

  /* Outport: '<Root>/gLOC_bRRCSLLockMotorReEmergencyunlockflag' */
  (void) Rte_Write_gLockCtrl_bRRCSLLockMotorReEmergencyunlockflag_Val(Lock_Ctrl_B.bReEmergencyunlockflag_i);

  /* Outport: '<Root>/gLOC_bRRCSLDoorMotorMoveFlag' */
  (void) Rte_Write_gLockCtrl_bRRCSLDoorMotorMoveFlag_Val(Lock_Ctrl_B.gLOC_bRRCSLDoorMotorMoveFlag);

  /* Outport: '<Root>/gLOC_u8RLChildLockMotorOutput' */
  (void) Rte_Write_gLockCtrl_u8RLChildLockMotorOutput_Val(rtb_gLOC_u8RLCSLDoorLockReq);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_u8RLChildLockMotorPs_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_u8RLChildLockMotorPs_Val'
   */
  Rte_Read_gLock_u8RLChildLockMotorPs_Val(&rtb_TmpSignalConversionAtgLo_ib);

  /* Switch: '<S28>/Switch' */
  if (rtb_TmpSignalConversionAtgLo_ib != 0) {
    rtb_TmpSignalConversionAtgLo_ib = Lock_Ctrl_B.gLOC_u8RearLeftChildSaftyLockAc;
  } else {
    rtb_TmpSignalConversionAtgLo_ib = 0U;
  }

  /* End of Switch: '<S28>/Switch' */

  /* Outport: '<Root>/gLOC_u8LCK_RearLeftChildSaftyLockAction' */
  (void) Rte_Write_gLOC_u8LCK_RearLeftChildSaftyLockAction_Val(rtb_TmpSignalConversionAtgLo_ib);

  /* Outport: '<Root>/gLOC_u8RLCSLLockMotorCmd' */
  (void) Rte_Write_gLockCtrl_u8RLCSLLockMotorCmd_Val(Lock_Ctrl_B.gLOC_u8RLCSLLockMotorCmd);

  /* Outport: '<Root>/gLOC_bRLCSLLockMotorRelockflag' */
  (void) Rte_Write_gLockCtrl_bRLCSLLockMotorRelockflag_Val(Lock_Ctrl_B.bRelockflag_j);

  /* Outport: '<Root>/gLOC_bRLCSLLockMotorReunlockflag' */
  (void) Rte_Write_gLockCtrl_bRLCSLLockMotorReunlockflag_Val(Lock_Ctrl_B.bReunlockflag_m);

  /* Outport: '<Root>/gLOC_bRLCSLLockMotorReReverseunlockflag' */
  (void) Rte_Write_gLockCtrl_bRLCSLLockMotorReReverseunlockflag_Val(Lock_Ctrl_B.bReReverseunlockflag_b);

  /* Outport: '<Root>/gLOC_bRLCSLLockMotorReEmergencyunlockflag' */
  (void) Rte_Write_gLockCtrl_bRLCSLLockMotorReEmergencyunlockflag_Val(Lock_Ctrl_B.bReEmergencyunlockflag_o);

  /* Outport: '<Root>/gLOC_bRLCSLDoorMotorMoveFlag' */
  (void) Rte_Write_gLockCtrl_bRLCSLDoorMotorMoveFlag_Val(Lock_Ctrl_B.gLOC_bRLCSLDoorMotorMoveFlag);

  /* Outport: '<Root>/gLOC_u8RRDoorElecRelMotorOutput' */
  (void) Rte_Write_gLockCtrl_u8RRDoorElecRelMotorOutput_Val(rtb_gPRM_u8tPowerReleaseCfg);

  /* Outport: '<Root>/gLOC_u8RRDoorElecRelPWMMotorOutput' */
  (void) Rte_Write_gLockCtrl_u8RRDoorElecRelPWMMotorOutput_Val(rtb_gPRM_u8tPowerReleaseTimeOut);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_u8RRPwrRelsMotorPs_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_u8RRPwrRelsMotorPs_Val'
   */
  Rte_Read_gLock_u8RRPwrRelsMotorPs_Val(&rtb_TmpSignalConversionAtgLoc_b);

  /* Switch: '<S33>/Switch' */
  if (rtb_TmpSignalConversionAtgLoc_b == 0) {
    rtb_gCAN_u8PowerDoorCommandActi = 0U;
  }

  /* End of Switch: '<S33>/Switch' */

  /* Outport: '<Root>/gLOC_u8LCK_RearRightPowerDoorAction' */
  (void) Rte_Write_gLOC_u8LCK_RearRightPowerDoorAction_Val(rtb_gCAN_u8PowerDoorCommandActi);

  /* Outport: '<Root>/gLOC_bRRPowerDoorReReleaseflag' */
  (void) Rte_Write_gLockCtrl_bRRPowerDoorReReleaseflag_Val(Lock_Ctrl_B.bReunlockflag_l);

  /* Outport: '<Root>/gLOC_u8RRPowerDoorRelDoneFlag' */
  (void) Rte_Write_gLockCtrl_u8RRPowerDoorRelDoneFlag_Val(Lock_Ctrl_B.gLOC_u8RRPowerDoorRelDoneFlag);

  /* Outport: '<Root>/gLOC_u8RRPowerDoorRelCmd' */
  (void) Rte_Write_gLockCtrl_u8RRPowerDoorRelCmd_Val(Lock_Ctrl_B.gLOC_u8RRPowerDoorRelCmd);

  /* Outport: '<Root>/gLOC_bRRPowerDoorRelsMotorMoveFlag' */
  (void) Rte_Write_gLockCtrl_bRRPowerDoorRelsMotorMoveFlag_Val(Lock_Ctrl_B.gLOC_bRRPowerDoorRelsMotorMoveF);

  /* Outport: '<Root>/gLOC_bLCK_RearRightDoorAjarSt' */
  (void) Rte_Write_gLOC_bLCK_RearRightDoorAjarSt_Val(rtb_gASI_bRRDoorAjarSw);

  /* Outport: '<Root>/gLOC_u8RRPowerDoorReq' */
  (void) Rte_Write_gLockCtrl_u8RRPowerDoorReq_Val(rtb_gLOC_u8RRPowerDoorReq);

  /* Outport: '<Root>/gLOC_bLCK_RearRightDoorOpenSt' */
  (void) Rte_Write_gLOC_bLCK_RearRightDoorOpenSt_Val(rtb_gASI_bRRSecondLockFeedbackS);

  /* Outport: '<Root>/gLOC_u8RRDoorLockMotorOutput' */
  (void) Rte_Write_gLockCtrl_u8RRDoorLockMotorOutput_Val(rtb_gLOC_u8RRDoorLockReq);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_u8RRDoorLockMotorPs_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_u8RRDoorLockMotorPs_Val'
   */
  Rte_Read_gLock_u8RRDoorLockMotorPs_Val(&rtb_TmpSignalConversionAtgLo_lf);

  /* Switch: '<S34>/Switch' */
  if (rtb_TmpSignalConversionAtgLo_lf != 0) {
    rtb_TmpSignalConversionAtgLo_lf = Lock_Ctrl_B.gLOC_u8RearRightDoorLockAction;
  } else {
    rtb_TmpSignalConversionAtgLo_lf = 0U;
  }

  /* End of Switch: '<S34>/Switch' */

  /* Outport: '<Root>/gLOC_u8LCK_RearRightDoorLockAction' */
  (void) Rte_Write_gLOC_u8LCK_RearRightDoorLockAction_Val(rtb_TmpSignalConversionAtgLo_lf);

  /* Outport: '<Root>/gLOC_u8RRLockMotorCmd' */
  (void) Rte_Write_gLockCtrl_u8RRLockMotorCmd_Val(Lock_Ctrl_B.gLOC_u8LockMotorCmd);

  /* Outport: '<Root>/gLOC_bRRLockMotorRelockflag' */
  (void) Rte_Write_gLockCtrl_bRRLockMotorRelockflag_Val(Lock_Ctrl_B.bRelockflag);

  /* Outport: '<Root>/gLOC_bRRLockMotorReunlockflag' */
  (void) Rte_Write_gLockCtrl_bRRLockMotorReunlockflag_Val(Lock_Ctrl_B.bReunlockflag);

  /* Outport: '<Root>/gLOC_bRRLockMotorReReverseunlockflag' */
  (void) Rte_Write_gLockCtrl_bRRLockMotorReReverseunlockflag_Val(Lock_Ctrl_B.bReReverseunlockflag);

  /* Outport: '<Root>/gLOC_bRRLockMotorReEmergencyunlockflag' */
  (void) Rte_Write_gLockCtrl_bRRLockMotorReEmergencyunlockflag_Val(Lock_Ctrl_B.bReEmergencyunlockflag);

  /* Outport: '<Root>/gLOC_bRRDoorMotorMoveFlag' */
  (void) Rte_Write_gLockCtrl_bRRDoorMotorMoveFlag_Val(Lock_Ctrl_B.gLOC_bRRDoorMotorMoveFlag);

  /* Outport: '<Root>/gLOC_u8RLDoorElecRelMotorOutput' */
  (void) Rte_Write_gLockCtrl_u8RLDoorElecRelMotorOutput_Val(rtb_gLOC_u8RLDoorElecRelMotorOu);

  /* Outport: '<Root>/gLOC_u8RLDoorElecRelPWMMotorOutput' */
  (void) Rte_Write_gLockCtrl_u8RLDoorElecRelPWMMotorOutput_Val(rtb_gLOC_u8RLDoorElecRelPWMMoto);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_u8RLPwrRelsMotorPs_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_u8RLPwrRelsMotorPs_Val'
   */
  Rte_Read_gLock_u8RLPwrRelsMotorPs_Val(&rtb_TmpSignalConversionAtgLoc_f);

  /* Switch: '<S20>/Switch' */
  if (rtb_TmpSignalConversionAtgLoc_f == 0) {
    rtb_Switch_by = 0U;
  }

  /* End of Switch: '<S20>/Switch' */

  /* Outport: '<Root>/gLOC_u8LCK_RearLeftPowerDoorAction' */
  (void) Rte_Write_gLOC_u8LCK_RearLeftPowerDoorAction_Val(rtb_Switch_by);

  /* Outport: '<Root>/gLOC_bRLPowerDoorReReleaseflag' */
  (void) Rte_Write_gLockCtrl_bRLPowerDoorReReleaseflag_Val(Lock_Ctrl_B.bReunlockflag_c);

  /* Outport: '<Root>/gLOC_u8RLPowerDoorRelDoneFlag' */
  (void) Rte_Write_gLockCtrl_u8RLPowerDoorRelDoneFlag_Val(Lock_Ctrl_B.gLOC_u8RLPowerDoorRelDoneFlag);

  /* Outport: '<Root>/gLOC_u8RLPowerDoorRelCmd' */
  (void) Rte_Write_gLockCtrl_u8RLPowerDoorRelCmd_Val(Lock_Ctrl_B.gLOC_u8RLPowerDoorRelCmd);

  /* Outport: '<Root>/gLOC_bRLPowerDoorRelsMotorMoveFlag' */
  (void) Rte_Write_gLockCtrl_bRLPowerDoorRelsMotorMoveFlag_Val(Lock_Ctrl_B.gLOC_bRLPowerDoorRelsMotorMoveF);

  /* Outport: '<Root>/gLOC_bLCK_RearLeftDoorAjarSt' */
  (void) Rte_Write_gLOC_bLCK_RearLeftDoorAjarSt_Val(rtb_gASI_bRLDoorAjarSw);

  /* Outport: '<Root>/gLOC_u8RLPowerDoorReq' */
  (void) Rte_Write_gLockCtrl_u8RLPowerDoorReq_Val(rtb_gLOC_u8RLPowerDoorReq);

  /* Outport: '<Root>/gLOC_bLCK_RearLeftDoorOpenSt' */
  (void) Rte_Write_gLOC_bLCK_RearLeftDoorOpenSt_Val(rtb_gASI_bRLSecondLockFeedbackS);

  /* Outport: '<Root>/gLOC_u8RLDoorLockMotorOutput' */
  (void) Rte_Write_gLockCtrl_u8RLDoorLockMotorOutput_Val(rtb_gLOC_u8RLDoorLockReq);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_u8RLDoorLockMotorPs_ValOutport1' incorporates:
   *  Inport: '<Root>/gLock_u8RLDoorLockMotorPs_Val'
   */
  Rte_Read_gLock_u8RLDoorLockMotorPs_Val(&rtb_TmpSignalConversionAtgLo_ja);

  /* Switch: '<S30>/Switch' */
  if (rtb_TmpSignalConversionAtgLo_ja != 0) {
    rtb_TmpSignalConversionAtgLo_ja = Lock_Ctrl_B.gLOC_u8RearLeftDoorLockAction;
  } else {
    rtb_TmpSignalConversionAtgLo_ja = 0U;
  }

  /* End of Switch: '<S30>/Switch' */

  /* Outport: '<Root>/gLOC_u8LCK_RearLeftDoorLockAction' */
  (void) Rte_Write_gLOC_u8LCK_RearLeftDoorLockAction_Val(rtb_TmpSignalConversionAtgLo_ja);

  /* Outport: '<Root>/gLOC_u8RLLockMotorCmd' */
  (void) Rte_Write_gLockCtrl_u8RLLockMotorCmd_Val(Lock_Ctrl_B.gLOC_u8LockMotorCmd_e);

  /* Outport: '<Root>/gLOC_bRLLockMotorRelockflag' */
  (void) Rte_Write_gLockCtrl_bRLLockMotorRelockflag_Val(Lock_Ctrl_B.bRelockflag_n);

  /* Outport: '<Root>/gLOC_bRLLockMotorReunlockflag' */
  (void) Rte_Write_gLockCtrl_bRLLockMotorReunlockflag_Val(Lock_Ctrl_B.bReunlockflag_g);

  /* Outport: '<Root>/gLOC_bRLLockMotorReReverseunlockflag' */
  (void) Rte_Write_gLockCtrl_bRLLockMotorReReverseunlockflag_Val(Lock_Ctrl_B.bReReverseunlockflag_f);

  /* Outport: '<Root>/gLOC_bRLLockMotorReEmergencyunlockflag' */
  (void) Rte_Write_gLockCtrl_bRLLockMotorReEmergencyunlockflag_Val(Lock_Ctrl_B.bReEmergencyunlockflag_k);

  /* Outport: '<Root>/gLOC_bRLDoorMotorMoveFlag' */
  (void) Rte_Write_gLockCtrl_bRLDoorMotorMoveFlag_Val(Lock_Ctrl_B.gLOC_bRLDoorMotorMoveFlag);

  /* Outport: '<Root>/gLOC_bLCK_RearLeftChildSaftyLockSt' */
  (void) Rte_Write_gLOC_bLCK_RearLeftChildSaftyLockSt_Val(tmpRead);

  /* Outport: '<Root>/gLOC_bLCK_RearRightChildSaftyLockSt' */
  (void) Rte_Write_gLOC_bLCK_RearRightChildSaftyLockSt_Val(tmpRead_0);

  /* Update for Delay: '<S3>/Delay30' */
  Lock_Ctrl_DWork.Delay30_DSTATE = Lock_Ctrl_B.LCK_FillerCapAction;
}

/* Model initialize function */
void Lock_Ctrl_Runnable_Init(void)
{
  {
    /* local block i/o variables */
    uint8 rtb_UdsReq;
    uint8 rtb_UdsReq_i;
    uint8 rtb_UdsReq_e;
    uint8 rtb_UdsReq_i1;
    uint8 rtb_UdsReq_o;
    uint8 rtb_UdsReq_n;
    boolean bNMLocKeepAwakeFlag_k;

    /* Start for DataStoreMemory: '<S1>/Data Store Memory' */
    Lock_Ctrl_SharedDSM.FillerCapAngleVoltInit = 2.5F;

    /* SystemInitialize for Chart: '<S27>/FillerCapBLockMotor' */
    Lock_Ctrl_DWork.bFrstRun = true;

    /* SystemInitialize for Chart: '<S68>/Chart' */
    Lock_Ctrl_Chart_g_Init(&rtb_UdsReq_i1);

    /* SystemInitialize for Chart: '<S55>/Chart' */
    Lock_Ctrl_Chart_Init(&rtb_UdsReq_n);

    /* SystemInitialize for Chart: '<S56>/Chart1' */
    Lock_Ctrl_Chart1_Init(&Lock_Ctrl_B.gLockCtrl_u8PowerDoorCmd_p, &Lock_Ctrl_B.gLockCtrl_u8PowerDoorCmdTmp_c);

    /* SystemInitialize for Chart: '<S84>/Chart' */
    Lock_Ctrl_Chart_g_Init(&rtb_UdsReq);

    /* SystemInitialize for Chart: '<S78>/Chart' */
    Lock_Ctrl_Chart_Init(&rtb_UdsReq_i);

    /* SystemInitialize for Chart: '<S79>/Chart1' */
    Lock_Ctrl_Chart1_Init(&Lock_Ctrl_B.gLockCtrl_u8PowerDoorCmd, &Lock_Ctrl_B.gLockCtrl_u8PowerDoorCmdTmp);

    /* SystemInitialize for Chart: '<S64>/Chart' */
    Lock_Ctrl_Chart_g_Init(&rtb_UdsReq_o);

    /* SystemInitialize for Chart: '<S72>/Chart' */
    Lock_Ctrl_Chart_g_Init(&rtb_UdsReq_e);

    /* SystemInitialize for Chart: '<S57>/Chart' */
    Lock_Ctrl_Chart_b_Init(&Lock_Ctrl_B.bPwrRelsFailedRemind_m);

    /* SystemInitialize for Chart: '<S80>/Chart' */
    Lock_Ctrl_Chart_b_Init(&Lock_Ctrl_B.bPwrRelsFailedRemind);

    /* SystemInitialize for Chart: '<S3>/bRRDoorAjarSwKeepAwakeFlag' */
    bFrontLeftDoorKeepAwakeFla_Init(&bNMLocKeepAwakeFlag_k);

    /* SystemInitialize for Chart: '<S3>/bTrunkAjarSwKeepAwakeFlag' */
    bFrontLeftDoorKeepAwakeFla_Init(&bNMLocKeepAwakeFlag_k);

    /* SystemInitialize for Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag9' */
    bRLSecondLockFeedbackSwKee_Init(&bNMLocKeepAwakeFlag_k);

    /* SystemInitialize for Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1' */
    bRLSecondLockFeedbackSwKee_Init(&bNMLocKeepAwakeFlag_k);

    /* SystemInitialize for Chart: '<S3>/bFrontLeftDoorKeepAwakeFlag' */
    bFrontLeftDoorKeepAwakeFla_Init(&bNMLocKeepAwakeFlag_k);

    /* SystemInitialize for Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag7' */
    bRLSecondLockFeedbackSwKee_Init(&bNMLocKeepAwakeFlag_k);

    /* SystemInitialize for Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag2' */
    bRLSecondLockFeedbackSwKee_Init(&bNMLocKeepAwakeFlag_k);

    /* SystemInitialize for Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag3' */
    bRLSecondLockFeedbackSwKee_Init(&bNMLocKeepAwakeFlag_k);

    /* SystemInitialize for Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag4' */
    bRLSecondLockFeedbackSwKee_Init(&bNMLocKeepAwakeFlag_k);

    /* SystemInitialize for Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag5' */
    bRLSecondLockFeedbackSwKee_Init(&bNMLocKeepAwakeFlag_k);

    /* SystemInitialize for Chart: '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag6' */
    bRLSecondLockFeedbackSwKee_Init(&bNMLocKeepAwakeFlag_k);

    /* SystemInitialize for Chart: '<S5>/UNLOCKDTCDETECT' */
    Lock_Ctrl_UNLOCKDTCDETECT_Init(&Lock_Ctrl_B.bUnLockDTCflag_e);

    /* SystemInitialize for Chart: '<S6>/UNLOCKDTCDETECT' */
    Lock_Ctrl_UNLOCKDTCDETECT_Init(&Lock_Ctrl_B.bUnLockDTCflag);

    /* SystemInitialize for Chart: '<S4>/UNLOCKDTCDETECT' */
    Lock_Ctrl_UNLOCKDTCDETECT_Init(&Lock_Ctrl_B.bUnLockDTCflag_l);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
