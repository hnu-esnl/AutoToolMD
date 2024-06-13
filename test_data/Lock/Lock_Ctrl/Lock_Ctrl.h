/*
 * File: Lock_Ctrl.h
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

#ifndef RTW_HEADER_Lock_Ctrl_h_
#define RTW_HEADER_Lock_Ctrl_h_
#ifndef Lock_Ctrl_COMMON_INCLUDES_
# define Lock_Ctrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_Lock_Ctrl.h"
#endif                                 /* Lock_Ctrl_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "app_cfg.h"

/* Block states (default storage) for system '<S4>/UNLOCKDTCDETECT' */
typedef struct {
  uint16 temporalCounter_i1;           /* '<S4>/UNLOCKDTCDETECT' */
  uint8 is_active_c4_Lock_Ctrl;        /* '<S4>/UNLOCKDTCDETECT' */
  uint8 is_c4_Lock_Ctrl;               /* '<S4>/UNLOCKDTCDETECT' */
  boolean bUnLockSW_prev;              /* '<S4>/UNLOCKDTCDETECT' */
  boolean bUnLockSW_start;             /* '<S4>/UNLOCKDTCDETECT' */
} rtDW_UNLOCKDTCDETECT_Lock_Ctrl;

/* Block states (default storage) for system '<S55>/Chart' */
typedef struct {
  uint8 is_active_c32_Lock_Ctrl;       /* '<S55>/Chart' */
  uint8 is_c32_Lock_Ctrl;              /* '<S55>/Chart' */
  uint8 temporalCounter_i1;            /* '<S55>/Chart' */
  uint8 UdsCmd_prev;                   /* '<S55>/Chart' */
  uint8 UdsCmd_start;                  /* '<S55>/Chart' */
  boolean UdsTrig_prev;                /* '<S55>/Chart' */
  boolean UdsTrig_start;               /* '<S55>/Chart' */
} rtDW_Chart_Lock_Ctrl;

/* Block states (default storage) for system '<S56>/Chart1' */
typedef struct {
  uint8 is_active_c33_Lock_Ctrl;       /* '<S56>/Chart1' */
  uint8 is_c33_Lock_Ctrl;              /* '<S56>/Chart1' */
  uint8 temporalCounter_i1;            /* '<S56>/Chart1' */
} rtDW_Chart1_Lock_Ctrl;

/* Block states (default storage) for system '<S57>/Chart' */
typedef struct {
  uint8 is_active_c34_Lock_Ctrl;       /* '<S57>/Chart' */
  uint8 is_c34_Lock_Ctrl;              /* '<S57>/Chart' */
  uint8 temporalCounter_i1;            /* '<S57>/Chart' */
  uint8 u8PowerDoorRelDoneFlag_prev;   /* '<S57>/Chart' */
  uint8 u8PowerDoorRelDoneFlag_start;  /* '<S57>/Chart' */
} rtDW_Chart_Lock_Ctrl_n;

/* Block states (default storage) for system '<S64>/Chart' */
typedef struct {
  uint8 is_active_c42_Lock_Ctrl;       /* '<S64>/Chart' */
  uint8 is_c42_Lock_Ctrl;              /* '<S64>/Chart' */
  uint8 is_Req;                        /* '<S64>/Chart' */
  uint8 temporalCounter_i1;            /* '<S64>/Chart' */
  uint8 UdsCmd_prev;                   /* '<S64>/Chart' */
  uint8 UdsCmd_start;                  /* '<S64>/Chart' */
  boolean UdsTrig_prev;                /* '<S64>/Chart' */
  boolean UdsTrig_start;               /* '<S64>/Chart' */
} rtDW_Chart_Lock_Ctrl_d;

/* Block states (default storage) for system '<S3>/bFrontLeftDoorKeepAwakeFlag' */
typedef struct {
  uint16 temporalCounter_i1;           /* '<S3>/bFrontLeftDoorKeepAwakeFlag' */
  uint8 is_active_c112_Lock_Ctrl;      /* '<S3>/bFrontLeftDoorKeepAwakeFlag' */
  uint8 is_c112_Lock_Ctrl;             /* '<S3>/bFrontLeftDoorKeepAwakeFlag' */
  boolean bActiveSt_prev;              /* '<S3>/bFrontLeftDoorKeepAwakeFlag' */
  boolean bActiveSt_start;             /* '<S3>/bFrontLeftDoorKeepAwakeFlag' */
} rtDW_bFrontLeftDoorKeepAwakeFla;

/* Block states (default storage) for system '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1' */
typedef struct {
  uint16 temporalCounter_i1;           /* '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1' */
  uint8 is_active_c113_Lock_Ctrl;      /* '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1' */
  uint8 is_c113_Lock_Ctrl;             /* '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1' */
  boolean bActiveSt_prev;              /* '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1' */
  boolean bActiveSt_start;             /* '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1' */
} rtDW_bRLSecondLockFeedbackSwKee;

/* Block signals (default storage) */
typedef struct tag_BlockIO_Lock_Ctrl {
  float32 FillerCapAngleVoltInitOut;   /* '<S27>/FillerCapBLockMotor' */
  uint16 u16MotorStallOpenCnt;         /* '<S26>/MotorStuck' */
  uint16 u16MotorStallCloseCnt;        /* '<S26>/MotorStuck' */
  uint8 gCAN_u8LockCommandActionType;  /* '<Root>/gCAN_u8LCK_LockCommandActionType' */
  uint8 gPRM_u8tIntervalReverseUnlockCf;/* '<Root>/gPRM_u8tIntervalReverseUnlockCfg' */
  uint8 gPRM_u8tDoorsLockUnlockCfg;    /* '<Root>/gPRM_u8tDoorsLockUnlockCfg' */
  uint8 gPRM_u8tIntervalEmgcUnlockCfg; /* '<Root>/gPRM_u8tIntervalEmgcUnlockCfg' */
  uint8 gLOC_u8TrunkDoorUnlockReq;     /* '<S36>/TrunkUnlockReq' */
  uint8 gLOC_u8TrunkDoorUnlockCmd;     /* '<S36>/OutHoodLockAction' */
  uint8 gLOC_u8RearRightDoorLockAction;/* '<S34>/DoorsMotorOutput' */
  uint8 gLOC_u8LockMotorCmd;           /* '<S34>/DoorsMotorOutput' */
  uint8 gLockCtrl_u8PowerDoorCmd;      /* '<S79>/Chart1' */
  uint8 gLockCtrl_u8PowerDoorCmdTmp;   /* '<S79>/Chart1' */
  uint8 gLOC_u8RRPowerDoorRelDoneFlag; /* '<S33>/DoorsMotorOutput' */
  uint8 gLOC_u8RRPowerDoorRelCmd;      /* '<S33>/DoorsMotorOutput' */
  uint8 gLOC_u8RearRightChildSaftyLockA;/* '<S31>/DoorsMotorOutput' */
  uint8 gLOC_u8RRCSLLockMotorCmd;      /* '<S31>/DoorsMotorOutput' */
  uint8 gLOC_u8RearLeftDoorLockAction; /* '<S30>/DoorsMotorOutput' */
  uint8 gLOC_u8LockMotorCmd_e;         /* '<S30>/DoorsMotorOutput' */
  uint8 gLOC_u8RearLeftChildSaftyLockAc;/* '<S28>/DoorsMotorOutput' */
  uint8 gLOC_u8RLCSLLockMotorCmd;      /* '<S28>/DoorsMotorOutput' */
  uint8 LCK_FillerCapAction;           /* '<S27>/FillerCapBLockMotor' */
  uint8 gLockCtrl_u8PowerDoorCmd_p;    /* '<S56>/Chart1' */
  uint8 gLockCtrl_u8PowerDoorCmdTmp_c; /* '<S56>/Chart1' */
  uint8 gLOC_u8RLPowerDoorRelDoneFlag; /* '<S20>/DoorsMotorOutput' */
  uint8 gLOC_u8RLPowerDoorRelCmd;      /* '<S20>/DoorsMotorOutput' */
  uint8 gLOC_u8FillerCapBMotorCmd;     /* '<S17>/DoorsMotorOutput' */
  uint8 gLOC_u8FillerCapAMotorCmd;     /* '<S16>/DoorsMotorOutput' */
  boolean gLOC_bTrunkMotorMoveFlag;    /* '<S36>/OutHoodLockAction' */
  boolean gLOC_bReUnlockFlag;          /* '<S36>/OutHoodLockAction' */
  boolean bRelockflag;                 /* '<S34>/DoorsMotorOutput' */
  boolean bReunlockflag;               /* '<S34>/DoorsMotorOutput' */
  boolean bReReverseunlockflag;        /* '<S34>/DoorsMotorOutput' */
  boolean bReEmergencyunlockflag;      /* '<S34>/DoorsMotorOutput' */
  boolean gLOC_bRRDoorMotorMoveFlag;   /* '<S34>/DoorsMotorOutput' */
  boolean bPwrRelsFailedRemind;        /* '<S80>/Chart' */
  boolean bReunlockflag_l;             /* '<S33>/DoorsMotorOutput' */
  boolean gLOC_bRRPowerDoorRelsMotorMoveF;/* '<S33>/DoorsMotorOutput' */
  boolean bRelockflag_e;               /* '<S31>/DoorsMotorOutput' */
  boolean bReunlockflag_o;             /* '<S31>/DoorsMotorOutput' */
  boolean bReReverseunlockflag_n;      /* '<S31>/DoorsMotorOutput' */
  boolean bReEmergencyunlockflag_i;    /* '<S31>/DoorsMotorOutput' */
  boolean gLOC_bRRCSLDoorMotorMoveFlag;/* '<S31>/DoorsMotorOutput' */
  boolean bRelockflag_n;               /* '<S30>/DoorsMotorOutput' */
  boolean bReunlockflag_g;             /* '<S30>/DoorsMotorOutput' */
  boolean bReReverseunlockflag_f;      /* '<S30>/DoorsMotorOutput' */
  boolean bReEmergencyunlockflag_k;    /* '<S30>/DoorsMotorOutput' */
  boolean gLOC_bRLDoorMotorMoveFlag;   /* '<S30>/DoorsMotorOutput' */
  boolean bRelockflag_j;               /* '<S28>/DoorsMotorOutput' */
  boolean bReunlockflag_m;             /* '<S28>/DoorsMotorOutput' */
  boolean bReReverseunlockflag_b;      /* '<S28>/DoorsMotorOutput' */
  boolean bReEmergencyunlockflag_o;    /* '<S28>/DoorsMotorOutput' */
  boolean gLOC_bRLCSLDoorMotorMoveFlag;/* '<S28>/DoorsMotorOutput' */
  boolean bMotorStallOpenFlag;         /* '<S26>/MotorStuck' */
  boolean bMotorStallCloseFlag;        /* '<S26>/MotorStuck' */
  boolean bPwrRelsFailedRemind_m;      /* '<S57>/Chart' */
  boolean bReunlockflag_c;             /* '<S20>/DoorsMotorOutput' */
  boolean gLOC_bRLPowerDoorRelsMotorMoveF;/* '<S20>/DoorsMotorOutput' */
  boolean bRelockflag_o;               /* '<S17>/DoorsMotorOutput' */
  boolean bReunlockflag_p;             /* '<S17>/DoorsMotorOutput' */
  boolean gLOC_bFillerCapBMotorMoveFlag;/* '<S17>/DoorsMotorOutput' */
  boolean bRelockflag_c;               /* '<S16>/DoorsMotorOutput' */
  boolean bReunlockflag_k;             /* '<S16>/DoorsMotorOutput' */
  boolean gLOC_bFillerCapAMotorMoveFlag;/* '<S16>/DoorsMotorOutput' */
  boolean bUnLockDTCflag;              /* '<S6>/UNLOCKDTCDETECT' */
  boolean gLOC_bRearRightPowerReleaseReq;/* '<S6>/InterSwLockTrunkReq' */
  boolean bUnLockDTCflag_e;            /* '<S5>/UNLOCKDTCDETECT' */
  boolean gLOC_bRearLeftPowerReleaseReq;/* '<S5>/InterSwLockTrunkReq' */
  boolean bUnLockDTCflag_l;            /* '<S4>/UNLOCKDTCDETECT' */
  boolean gLOC_u8LCK_ExterSwOpenFillerCap;/* '<S4>/ExterSwOpenFillerCapReq' */
} BlockIO_Lock_Ctrl;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_D_Work_Lock_Ctrl {
  uint32 temporalCounter_i1;           /* '<S34>/DoorsMotorOutput' */
  uint32 temporalCounter_i2;           /* '<S33>/DoorsMotorOutput' */
  uint32 temporalCounter_i1_a;         /* '<S31>/DoorsMotorOutput' */
  uint32 temporalCounter_i1_p;         /* '<S30>/DoorsMotorOutput' */
  uint32 temporalCounter_i1_o;         /* '<S28>/DoorsMotorOutput' */
  uint32 temporalCounter_i2_j;         /* '<S20>/DoorsMotorOutput' */
  uint16 u16StallTimer1;               /* '<S27>/FillerCapBLockMotor' */
  uint16 u16StallTimer2;               /* '<S27>/FillerCapBLockMotor' */
  uint16 u16WaitTimer1;                /* '<S27>/FillerCapBLockMotor' */
  uint16 u16WaitTimer2;                /* '<S27>/FillerCapBLockMotor' */
  uint16 u16CloseTimer;                /* '<S27>/FillerCapBLockMotor' */
  uint16 u16NoActionTimer;             /* '<S27>/FillerCapBLockMotor' */
  uint16 u16OpenTimer;                 /* '<S27>/FillerCapBLockMotor' */
  uint8 Delay30_DSTATE;                /* '<S3>/Delay30' */
  uint8 is_active_c110_Lock_Ctrl;      /* '<S36>/TrunkUnlockReq' */
  uint8 is_c110_Lock_Ctrl;             /* '<S36>/TrunkUnlockReq' */
  uint8 temporalCounter_i1_d;          /* '<S36>/TrunkUnlockReq' */
  uint8 gCAN_u8LockCommandActionType_pr;/* '<S36>/TrunkUnlockReq' */
  uint8 gCAN_u8LockCommandActionType_st;/* '<S36>/TrunkUnlockReq' */
  uint8 is_active_c109_Lock_Ctrl;      /* '<S36>/OutHoodLockAction' */
  uint8 is_Unlock;                     /* '<S36>/OutHoodLockAction' */
  uint8 temporalCounter_i1_k;          /* '<S36>/OutHoodLockAction' */
  uint8 gLOC_u8TrunkDoorUnlockReq_prev;/* '<S36>/OutHoodLockAction' */
  uint8 gLOC_u8TrunkDoorUnlockReq_start;/* '<S36>/OutHoodLockAction' */
  uint8 is_active_c107_Lock_Ctrl;      /* '<S34>/FLDoorLockReq' */
  uint8 is_c107_Lock_Ctrl;             /* '<S34>/FLDoorLockReq' */
  uint8 is_REQ;                        /* '<S34>/FLDoorLockReq' */
  uint8 temporalCounter_i1_dn;         /* '<S34>/FLDoorLockReq' */
  uint8 gCAN_u8LockCommandActionType__c;/* '<S34>/FLDoorLockReq' */
  uint8 gCAN_u8LockCommandActionType__i;/* '<S34>/FLDoorLockReq' */
  uint8 is_active_c94_Lock_Ctrl;       /* '<S34>/DoorsMotorOutput' */
  uint8 is_ReqDect;                    /* '<S34>/DoorsMotorOutput' */
  uint8 is_ReqCmd;                     /* '<S34>/DoorsMotorOutput' */
  uint8 gLOC_u8RRDoorLockReq_prev;     /* '<S34>/DoorsMotorOutput' */
  uint8 gLOC_u8RRDoorLockReq_start;    /* '<S34>/DoorsMotorOutput' */
  uint8 is_active_c63_Lock_Ctrl;       /* '<S33>/PowerDoorLockReq' */
  uint8 is_c63_Lock_Ctrl;              /* '<S33>/PowerDoorLockReq' */
  uint8 temporalCounter_i1_l;          /* '<S33>/PowerDoorLockReq' */
  uint8 gCAN_u8PowerDoorCommandActionTy;/* '<S33>/PowerDoorLockReq' */
  uint8 gCAN_u8PowerDoorCommandAction_o;/* '<S33>/PowerDoorLockReq' */
  uint8 is_active_c53_Lock_Ctrl;       /* '<S33>/DoorsMotorOutput' */
  uint8 is_ReqDect_c;                  /* '<S33>/DoorsMotorOutput' */
  uint8 is_ReqCmd_m;                   /* '<S33>/DoorsMotorOutput' */
  uint8 is_Reset;                      /* '<S33>/DoorsMotorOutput' */
  uint8 temporalCounter_i1_lf;         /* '<S33>/DoorsMotorOutput' */
  uint8 gLOC_u8RRPowerDoorReq_prev;    /* '<S33>/DoorsMotorOutput' */
  uint8 gLOC_u8RRPowerDoorReq_start;   /* '<S33>/DoorsMotorOutput' */
  uint8 is_active_c51_Lock_Ctrl;       /* '<S31>/FLDoorLockReq' */
  uint8 is_c51_Lock_Ctrl;              /* '<S31>/FLDoorLockReq' */
  uint8 is_REQ_e;                      /* '<S31>/FLDoorLockReq' */
  uint8 temporalCounter_i1_j;          /* '<S31>/FLDoorLockReq' */
  uint8 gCAN_u8LockCommandActionType_is;/* '<S31>/FLDoorLockReq' */
  uint8 gCAN_u8LockCommandActionType__a;/* '<S31>/FLDoorLockReq' */
  uint8 is_active_c50_Lock_Ctrl;       /* '<S31>/DoorsMotorOutput' */
  uint8 is_ReqDect_n;                  /* '<S31>/DoorsMotorOutput' */
  uint8 is_ReqCmd_g;                   /* '<S31>/DoorsMotorOutput' */
  uint8 gLOC_u8RRCSLDoorLockReq_prev;  /* '<S31>/DoorsMotorOutput' */
  uint8 gLOC_u8RRCSLDoorLockReq_start; /* '<S31>/DoorsMotorOutput' */
  uint8 is_active_c48_Lock_Ctrl;       /* '<S30>/RLDoorLockReq' */
  uint8 is_c48_Lock_Ctrl;              /* '<S30>/RLDoorLockReq' */
  uint8 is_REQ_h;                      /* '<S30>/RLDoorLockReq' */
  uint8 temporalCounter_i1_h;          /* '<S30>/RLDoorLockReq' */
  uint8 gCAN_u8LockCommandActionType__m;/* '<S30>/RLDoorLockReq' */
  uint8 gCAN_u8LockCommandActionType_it;/* '<S30>/RLDoorLockReq' */
  uint8 is_active_c47_Lock_Ctrl;       /* '<S30>/DoorsMotorOutput' */
  uint8 is_ReqDect_b;                  /* '<S30>/DoorsMotorOutput' */
  uint8 is_ReqCmd_o;                   /* '<S30>/DoorsMotorOutput' */
  uint8 gLOC_u8RLDoorLockReq_prev;     /* '<S30>/DoorsMotorOutput' */
  uint8 gLOC_u8RLDoorLockReq_start;    /* '<S30>/DoorsMotorOutput' */
  uint8 is_active_c44_Lock_Ctrl;       /* '<S28>/LockReq' */
  uint8 is_c44_Lock_Ctrl;              /* '<S28>/LockReq' */
  uint8 is_REQ_k;                      /* '<S28>/LockReq' */
  uint8 temporalCounter_i1_d2;         /* '<S28>/LockReq' */
  uint8 gCAN_u8LockCommandActionType__p;/* '<S28>/LockReq' */
  uint8 gCAN_u8LockCommandActionType_me;/* '<S28>/LockReq' */
  uint8 is_active_c43_Lock_Ctrl;       /* '<S28>/DoorsMotorOutput' */
  uint8 is_ReqDect_j;                  /* '<S28>/DoorsMotorOutput' */
  uint8 is_ReqCmd_a;                   /* '<S28>/DoorsMotorOutput' */
  uint8 gLOC_u8RLCSLDoorLockReq_prev;  /* '<S28>/DoorsMotorOutput' */
  uint8 gLOC_u8RLCSLDoorLockReq_start; /* '<S28>/DoorsMotorOutput' */
  uint8 is_active_c41_Lock_Ctrl;       /* '<S27>/FillerCapBLockMotor' */
  uint8 is_c41_Lock_Ctrl;              /* '<S27>/FillerCapBLockMotor' */
  uint8 is_Close;                      /* '<S27>/FillerCapBLockMotor' */
  uint8 is_Open;                       /* '<S27>/FillerCapBLockMotor' */
  uint8 gCAN_u8LockCommandActionType__o;/* '<S27>/FillerCapBLockMotor' */
  uint8 gCAN_u8LockCommandActionType_ib;/* '<S27>/FillerCapBLockMotor' */
  uint8 is_active_c40_Lock_Ctrl;       /* '<S26>/MotorStuck' */
  uint8 is_c40_Lock_Ctrl;              /* '<S26>/MotorStuck' */
  uint8 is_active_c31_Lock_Ctrl;       /* '<S20>/PowerDoorLockReq' */
  uint8 is_c31_Lock_Ctrl;              /* '<S20>/PowerDoorLockReq' */
  uint8 temporalCounter_i1_f;          /* '<S20>/PowerDoorLockReq' */
  uint8 gCAN_u8PowerDoorCommandAction_a;/* '<S20>/PowerDoorLockReq' */
  uint8 gCAN_u8PowerDoorCommandActio_ob;/* '<S20>/PowerDoorLockReq' */
  uint8 is_active_c30_Lock_Ctrl;       /* '<S20>/DoorsMotorOutput' */
  uint8 is_ReqDect_cq;                 /* '<S20>/DoorsMotorOutput' */
  uint8 is_ReqCmd_d;                   /* '<S20>/DoorsMotorOutput' */
  uint8 is_Reset_n;                    /* '<S20>/DoorsMotorOutput' */
  uint8 temporalCounter_i1_pm;         /* '<S20>/DoorsMotorOutput' */
  uint8 gLOC_u8RLPowerDoorReq_prev;    /* '<S20>/DoorsMotorOutput' */
  uint8 gLOC_u8RLPowerDoorReq_start;   /* '<S20>/DoorsMotorOutput' */
  uint8 is_active_c27_Lock_Ctrl;       /* '<S17>/TrunkUnlockReq' */
  uint8 is_c27_Lock_Ctrl;              /* '<S17>/TrunkUnlockReq' */
  uint8 is_REQ_j;                      /* '<S17>/TrunkUnlockReq' */
  uint8 temporalCounter_i1_e;          /* '<S17>/TrunkUnlockReq' */
  uint8 gCAN_u8LockCommandActionType__e;/* '<S17>/TrunkUnlockReq' */
  uint8 gCAN_u8LockCommandActionType__j;/* '<S17>/TrunkUnlockReq' */
  uint8 is_active_c26_Lock_Ctrl;       /* '<S17>/DoorsMotorOutput' */
  uint8 is_ReqDect_c2;                 /* '<S17>/DoorsMotorOutput' */
  uint8 is_ReqCmd_aj;                  /* '<S17>/DoorsMotorOutput' */
  uint8 temporalCounter_i1_hb;         /* '<S17>/DoorsMotorOutput' */
  uint8 gLOC_u8FillerCapLockReqB_prev; /* '<S17>/DoorsMotorOutput' */
  uint8 gLOC_u8FillerCapLockReqB_start;/* '<S17>/DoorsMotorOutput' */
  uint8 is_active_c25_Lock_Ctrl;       /* '<S16>/TrunkUnlockReq' */
  uint8 is_c25_Lock_Ctrl;              /* '<S16>/TrunkUnlockReq' */
  uint8 is_REQ_kg;                     /* '<S16>/TrunkUnlockReq' */
  uint8 temporalCounter_i1_c;          /* '<S16>/TrunkUnlockReq' */
  uint8 gCAN_u8LockCommandActionType_if;/* '<S16>/TrunkUnlockReq' */
  uint8 gCAN_u8LockCommandActionType__h;/* '<S16>/TrunkUnlockReq' */
  uint8 is_active_c24_Lock_Ctrl;       /* '<S16>/DoorsMotorOutput' */
  uint8 is_ReqDect_d;                  /* '<S16>/DoorsMotorOutput' */
  uint8 is_ReqCmd_k;                   /* '<S16>/DoorsMotorOutput' */
  uint8 temporalCounter_i1_at;         /* '<S16>/DoorsMotorOutput' */
  uint8 gLOC_u8FillerCapLockReqA_prev; /* '<S16>/DoorsMotorOutput' */
  uint8 gLOC_u8FillerCapLockReqA_start;/* '<S16>/DoorsMotorOutput' */
  uint8 is_active_c19_Lock_Ctrl;       /* '<S6>/InterSwLockTrunkReq' */
  uint8 is_c19_Lock_Ctrl;              /* '<S6>/InterSwLockTrunkReq' */
  uint8 is_active_c17_Lock_Ctrl;       /* '<S5>/InterSwLockTrunkReq' */
  uint8 is_c17_Lock_Ctrl;              /* '<S5>/InterSwLockTrunkReq' */
  uint8 is_active_c2_Lock_Ctrl;        /* '<S4>/ExterSwOpenFillerCapReq' */
  uint8 is_c2_Lock_Ctrl;               /* '<S4>/ExterSwOpenFillerCapReq' */
  boolean gCAN_bLCK_TrunkLock_prev;    /* '<S36>/TrunkUnlockReq' */
  boolean gCAN_bLCK_TrunkLock_start;   /* '<S36>/TrunkUnlockReq' */
  boolean gCAN_bLCK_RearRightDoorLock_pre;/* '<S34>/FLDoorLockReq' */
  boolean gCAN_bLCK_RearRightDoorLock_sta;/* '<S34>/FLDoorLockReq' */
  boolean gCAN_bLCK_RearRightPowerDoor_pr;/* '<S33>/PowerDoorLockReq' */
  boolean gCAN_bLCK_RearRightPowerDoor_st;/* '<S33>/PowerDoorLockReq' */
  boolean bFirstRun;                   /* '<S33>/DoorsMotorOutput' */
  boolean gCAN_bLCK_RearRightChildSaftyLo;/* '<S31>/FLDoorLockReq' */
  boolean gCAN_bLCK_RearRightChildSafty_n;/* '<S31>/FLDoorLockReq' */
  boolean gCAN_bLCK_RearLeftDoorLock_prev;/* '<S30>/RLDoorLockReq' */
  boolean gCAN_bLCK_RearLeftDoorLock_star;/* '<S30>/RLDoorLockReq' */
  boolean gCAN_bLCK_RearLeftChildSaftyLoc;/* '<S28>/LockReq' */
  boolean gCAN_bLCK_RearLeftChildSaftyL_l;/* '<S28>/LockReq' */
  boolean bActionFlag;                 /* '<S27>/FillerCapBLockMotor' */
  boolean bStallCloseFinishFlag;       /* '<S27>/FillerCapBLockMotor' */
  boolean bFrstRun;                    /* '<S27>/FillerCapBLockMotor' */
  boolean gCAN_bLCK_PowerFillerCap_prev;/* '<S27>/FillerCapBLockMotor' */
  boolean gCAN_bLCK_PowerFillerCap_start;/* '<S27>/FillerCapBLockMotor' */
  boolean gCAN_bLCK_RearLeftPowerDoor_pre;/* '<S20>/PowerDoorLockReq' */
  boolean gCAN_bLCK_RearLeftPowerDoor_sta;/* '<S20>/PowerDoorLockReq' */
  boolean bFirstRun_h;                 /* '<S20>/DoorsMotorOutput' */
  boolean gCAN_bLCK_FillerCapLock_Block_p;/* '<S17>/TrunkUnlockReq' */
  boolean gCAN_bLCK_FillerCapLock_Block_s;/* '<S17>/TrunkUnlockReq' */
  boolean gCAN_bLCK_FillerCapLock_Alock_p;/* '<S16>/TrunkUnlockReq' */
  boolean gCAN_bLCK_FillerCapLock_Alock_s;/* '<S16>/TrunkUnlockReq' */
  boolean gASI_bRRPowerInReleaseSw_prev;/* '<S6>/InterSwLockTrunkReq' */
  boolean gASI_bRRPowerInReleaseSw_start;/* '<S6>/InterSwLockTrunkReq' */
  boolean gASI_bRLPowerInReleaseSw_prev;/* '<S5>/InterSwLockTrunkReq' */
  boolean gASI_bRLPowerInReleaseSw_start;/* '<S5>/InterSwLockTrunkReq' */
  boolean gASI_bChrgCapSwt_prev;       /* '<S4>/ExterSwOpenFillerCapReq' */
  boolean gASI_bChrgCapSwt_start;      /* '<S4>/ExterSwOpenFillerCapReq' */
  rtDW_bFrontLeftDoorKeepAwakeFla sf_bTrunkAjarSwKeepAwakeFlag;/* '<S3>/bTrunkAjarSwKeepAwakeFlag' */
  rtDW_bFrontLeftDoorKeepAwakeFla sf_bRRDoorAjarSwKeepAwakeFlag;/* '<S3>/bRRDoorAjarSwKeepAwakeFlag' */
  rtDW_bRLSecondLockFeedbackSwKee sf_bRLSecondLockFeedbackSwKee_b;/* '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag9' */
  rtDW_bRLSecondLockFeedbackSwKee sf_bRLSecondLockFeedbackSwKe_jj;/* '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag7' */
  rtDW_bRLSecondLockFeedbackSwKee sf_bRLSecondLockFeedbackSwKee_j;/* '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag6' */
  rtDW_bRLSecondLockFeedbackSwKee sf_bRLSecondLockFeedbackSwKee_k;/* '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag5' */
  rtDW_bRLSecondLockFeedbackSwKee sf_bRLSecondLockFeedbackSwKee_f;/* '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag4' */
  rtDW_bRLSecondLockFeedbackSwKee sf_bRLSecondLockFeedbackSwKee_c;/* '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag3' */
  rtDW_bRLSecondLockFeedbackSwKee sf_bRLSecondLockFeedbackSwKee_m;/* '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag2' */
  rtDW_bRLSecondLockFeedbackSwKee sf_bRLSecondLockFeedbackSwKeepA;/* '<S3>/bRLSecondLockFeedbackSwKeepAwakeFlag1' */
  rtDW_bFrontLeftDoorKeepAwakeFla sf_bFrontLeftDoorKeepAwakeFlag;/* '<S3>/bFrontLeftDoorKeepAwakeFlag' */
  rtDW_Chart_Lock_Ctrl_d sf_Chart_i;   /* '<S84>/Chart' */
  rtDW_Chart_Lock_Ctrl_n sf_Chart_a;   /* '<S80>/Chart' */
  rtDW_Chart1_Lock_Ctrl sf_Chart1_p;   /* '<S79>/Chart1' */
  rtDW_Chart_Lock_Ctrl sf_Chart_k4;    /* '<S78>/Chart' */
  rtDW_Chart_Lock_Ctrl_d sf_Chart_fc;  /* '<S72>/Chart' */
  rtDW_Chart_Lock_Ctrl_d sf_Chart_p;   /* '<S68>/Chart' */
  rtDW_Chart_Lock_Ctrl_d sf_Chart_k;   /* '<S64>/Chart' */
  rtDW_Chart_Lock_Ctrl_n sf_Chart_f;   /* '<S57>/Chart' */
  rtDW_Chart1_Lock_Ctrl sf_Chart1;     /* '<S56>/Chart1' */
  rtDW_Chart_Lock_Ctrl sf_Chart;       /* '<S55>/Chart' */
  rtDW_UNLOCKDTCDETECT_Lock_Ctrl sf_UNLOCKDTCDETECT_e;/* '<S6>/UNLOCKDTCDETECT' */
  rtDW_UNLOCKDTCDETECT_Lock_Ctrl sf_UNLOCKDTCDETECT_o;/* '<S5>/UNLOCKDTCDETECT' */
  rtDW_UNLOCKDTCDETECT_Lock_Ctrl sf_UNLOCKDTCDETECT;/* '<S4>/UNLOCKDTCDETECT' */
} D_Work_Lock_Ctrl;

/* data stores shared across model instances, for system '<Root>' */
typedef struct {
  float32 FillerCapAngleVoltInit;      /* '<S1>/Data Store Memory' */
} SharedDSM_Lock_Ctrl;

/* data stores shared across model instances */
extern SharedDSM_Lock_Ctrl Lock_Ctrl_SharedDSM;

/* Block signals (default storage) */
extern BlockIO_Lock_Ctrl Lock_Ctrl_B;

/* Block states (default storage) */
extern D_Work_Lock_Ctrl Lock_Ctrl_DWork;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Switch' : Unused code path elimination
 * Block '<S2>/Signal Conversion1' : Eliminate redundant signal conversion block
 * Block '<S2>/Signal Conversion10' : Eliminate redundant signal conversion block
 * Block '<S2>/Signal Conversion11' : Eliminate redundant signal conversion block
 * Block '<S2>/Signal Conversion2' : Eliminate redundant signal conversion block
 * Block '<S2>/Signal Conversion3' : Eliminate redundant signal conversion block
 * Block '<S2>/Signal Conversion4' : Eliminate redundant signal conversion block
 * Block '<S2>/Signal Conversion5' : Eliminate redundant signal conversion block
 * Block '<S2>/Signal Conversion6' : Eliminate redundant signal conversion block
 * Block '<S2>/Signal Conversion7' : Eliminate redundant signal conversion block
 * Block '<S2>/Signal Conversion8' : Eliminate redundant signal conversion block
 * Block '<S2>/Signal Conversion9' : Eliminate redundant signal conversion block
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
 * '<Root>' : 'Lock_Ctrl'
 * '<S1>'   : 'Lock_Ctrl/LockSystem'
 * '<S2>'   : 'Lock_Ctrl/LockSystem/Input'
 * '<S3>'   : 'Lock_Ctrl/LockSystem/Output'
 * '<S4>'   : 'Lock_Ctrl/LockSystem/Input/ExterSwOpenFillerCapReq'
 * '<S5>'   : 'Lock_Ctrl/LockSystem/Input/FLPowerReleaseReq'
 * '<S6>'   : 'Lock_Ctrl/LockSystem/Input/FRPowerReleaseReq'
 * '<S7>'   : 'Lock_Ctrl/LockSystem/Input/ExterSwOpenFillerCapReq/ExterSwOpenFillerCapReq'
 * '<S8>'   : 'Lock_Ctrl/LockSystem/Input/ExterSwOpenFillerCapReq/UNLOCKDTCDETECT'
 * '<S9>'   : 'Lock_Ctrl/LockSystem/Input/FLPowerReleaseReq/InterSwLockTrunkReq'
 * '<S10>'  : 'Lock_Ctrl/LockSystem/Input/FLPowerReleaseReq/UNLOCKDTCDETECT'
 * '<S11>'  : 'Lock_Ctrl/LockSystem/Input/FRPowerReleaseReq/InterSwLockTrunkReq'
 * '<S12>'  : 'Lock_Ctrl/LockSystem/Input/FRPowerReleaseReq/UNLOCKDTCDETECT'
 * '<S13>'  : 'Lock_Ctrl/LockSystem/Output/AllowSleep_Local'
 * '<S14>'  : 'Lock_Ctrl/LockSystem/Output/AllowSleep_NM'
 * '<S15>'  : 'Lock_Ctrl/LockSystem/Output/AllowSleep_NM2'
 * '<S16>'  : 'Lock_Ctrl/LockSystem/Output/FillerCapAMotor'
 * '<S17>'  : 'Lock_Ctrl/LockSystem/Output/FillerCapBLockMotor'
 * '<S18>'  : 'Lock_Ctrl/LockSystem/Output/FillerCapBMotorOutput'
 * '<S19>'  : 'Lock_Ctrl/LockSystem/Output/FillerCapMotorOutput'
 * '<S20>'  : 'Lock_Ctrl/LockSystem/Output/LRElecMotorOutput'
 * '<S21>'  : 'Lock_Ctrl/LockSystem/Output/LeftRearMotorOutput'
 * '<S22>'  : 'Lock_Ctrl/LockSystem/Output/LeftRearMotorOutput1'
 * '<S23>'  : 'Lock_Ctrl/LockSystem/Output/LeftRearMotorOutput2'
 * '<S24>'  : 'Lock_Ctrl/LockSystem/Output/LeftRearMotorOutput3'
 * '<S25>'  : 'Lock_Ctrl/LockSystem/Output/LeftRearMotorOutput4'
 * '<S26>'  : 'Lock_Ctrl/LockSystem/Output/MotorStuck'
 * '<S27>'  : 'Lock_Ctrl/LockSystem/Output/PowerFillerCapMotor'
 * '<S28>'  : 'Lock_Ctrl/LockSystem/Output/RLCSLOutput'
 * '<S29>'  : 'Lock_Ctrl/LockSystem/Output/RLChildLockMotorOutput'
 * '<S30>'  : 'Lock_Ctrl/LockSystem/Output/RLMotorOutput'
 * '<S31>'  : 'Lock_Ctrl/LockSystem/Output/RRCSLMotorOutput'
 * '<S32>'  : 'Lock_Ctrl/LockSystem/Output/RRChildLockMotorOutput'
 * '<S33>'  : 'Lock_Ctrl/LockSystem/Output/RRElecMotorOutput'
 * '<S34>'  : 'Lock_Ctrl/LockSystem/Output/RRMotorOutput'
 * '<S35>'  : 'Lock_Ctrl/LockSystem/Output/RightRearMotorOutput'
 * '<S36>'  : 'Lock_Ctrl/LockSystem/Output/TrunkMotorCmdOutput'
 * '<S37>'  : 'Lock_Ctrl/LockSystem/Output/TrunkMotorOutput'
 * '<S38>'  : 'Lock_Ctrl/LockSystem/Output/bFrontLeftDoorKeepAwakeFlag'
 * '<S39>'  : 'Lock_Ctrl/LockSystem/Output/bRLSecondLockFeedbackSwKeepAwakeFlag1'
 * '<S40>'  : 'Lock_Ctrl/LockSystem/Output/bRLSecondLockFeedbackSwKeepAwakeFlag2'
 * '<S41>'  : 'Lock_Ctrl/LockSystem/Output/bRLSecondLockFeedbackSwKeepAwakeFlag3'
 * '<S42>'  : 'Lock_Ctrl/LockSystem/Output/bRLSecondLockFeedbackSwKeepAwakeFlag4'
 * '<S43>'  : 'Lock_Ctrl/LockSystem/Output/bRLSecondLockFeedbackSwKeepAwakeFlag5'
 * '<S44>'  : 'Lock_Ctrl/LockSystem/Output/bRLSecondLockFeedbackSwKeepAwakeFlag6'
 * '<S45>'  : 'Lock_Ctrl/LockSystem/Output/bRLSecondLockFeedbackSwKeepAwakeFlag7'
 * '<S46>'  : 'Lock_Ctrl/LockSystem/Output/bRLSecondLockFeedbackSwKeepAwakeFlag9'
 * '<S47>'  : 'Lock_Ctrl/LockSystem/Output/bRRDoorAjarSwKeepAwakeFlag'
 * '<S48>'  : 'Lock_Ctrl/LockSystem/Output/bTrunkAjarSwKeepAwakeFlag'
 * '<S49>'  : 'Lock_Ctrl/LockSystem/Output/FillerCapAMotor/DoorsMotorOutput'
 * '<S50>'  : 'Lock_Ctrl/LockSystem/Output/FillerCapAMotor/TrunkUnlockReq'
 * '<S51>'  : 'Lock_Ctrl/LockSystem/Output/FillerCapBLockMotor/DoorsMotorOutput'
 * '<S52>'  : 'Lock_Ctrl/LockSystem/Output/FillerCapBLockMotor/TrunkUnlockReq'
 * '<S53>'  : 'Lock_Ctrl/LockSystem/Output/LRElecMotorOutput/DoorsMotorOutput'
 * '<S54>'  : 'Lock_Ctrl/LockSystem/Output/LRElecMotorOutput/PowerDoorLockReq'
 * '<S55>'  : 'Lock_Ctrl/LockSystem/Output/LRElecMotorOutput/PowerDoorLock_Ctrl2F'
 * '<S56>'  : 'Lock_Ctrl/LockSystem/Output/LRElecMotorOutput/PowerDoorReqCoordination'
 * '<S57>'  : 'Lock_Ctrl/LockSystem/Output/LRElecMotorOutput/PwrRelsFailedRemind'
 * '<S58>'  : 'Lock_Ctrl/LockSystem/Output/LRElecMotorOutput/PowerDoorLock_Ctrl2F/Chart'
 * '<S59>'  : 'Lock_Ctrl/LockSystem/Output/LRElecMotorOutput/PowerDoorReqCoordination/Chart1'
 * '<S60>'  : 'Lock_Ctrl/LockSystem/Output/LRElecMotorOutput/PwrRelsFailedRemind/Chart'
 * '<S61>'  : 'Lock_Ctrl/LockSystem/Output/MotorStuck/MotorStuck'
 * '<S62>'  : 'Lock_Ctrl/LockSystem/Output/PowerFillerCapMotor/FillerCapAngleCalculation'
 * '<S63>'  : 'Lock_Ctrl/LockSystem/Output/PowerFillerCapMotor/FillerCapBLockMotor'
 * '<S64>'  : 'Lock_Ctrl/LockSystem/Output/RLCSLOutput/ChildLock_Ctrl2F'
 * '<S65>'  : 'Lock_Ctrl/LockSystem/Output/RLCSLOutput/DoorsMotorOutput'
 * '<S66>'  : 'Lock_Ctrl/LockSystem/Output/RLCSLOutput/LockReq'
 * '<S67>'  : 'Lock_Ctrl/LockSystem/Output/RLCSLOutput/ChildLock_Ctrl2F/Chart'
 * '<S68>'  : 'Lock_Ctrl/LockSystem/Output/RLMotorOutput/DoorLock_Ctrl2F'
 * '<S69>'  : 'Lock_Ctrl/LockSystem/Output/RLMotorOutput/DoorsMotorOutput'
 * '<S70>'  : 'Lock_Ctrl/LockSystem/Output/RLMotorOutput/RLDoorLockReq'
 * '<S71>'  : 'Lock_Ctrl/LockSystem/Output/RLMotorOutput/DoorLock_Ctrl2F/Chart'
 * '<S72>'  : 'Lock_Ctrl/LockSystem/Output/RRCSLMotorOutput/ChildLock_Ctrl2F'
 * '<S73>'  : 'Lock_Ctrl/LockSystem/Output/RRCSLMotorOutput/DoorsMotorOutput'
 * '<S74>'  : 'Lock_Ctrl/LockSystem/Output/RRCSLMotorOutput/FLDoorLockReq'
 * '<S75>'  : 'Lock_Ctrl/LockSystem/Output/RRCSLMotorOutput/ChildLock_Ctrl2F/Chart'
 * '<S76>'  : 'Lock_Ctrl/LockSystem/Output/RRElecMotorOutput/DoorsMotorOutput'
 * '<S77>'  : 'Lock_Ctrl/LockSystem/Output/RRElecMotorOutput/PowerDoorLockReq'
 * '<S78>'  : 'Lock_Ctrl/LockSystem/Output/RRElecMotorOutput/PowerDoorLock_Ctrl2F'
 * '<S79>'  : 'Lock_Ctrl/LockSystem/Output/RRElecMotorOutput/PowerDoorReqCoordination'
 * '<S80>'  : 'Lock_Ctrl/LockSystem/Output/RRElecMotorOutput/PwrRelsFailedRemind'
 * '<S81>'  : 'Lock_Ctrl/LockSystem/Output/RRElecMotorOutput/PowerDoorLock_Ctrl2F/Chart'
 * '<S82>'  : 'Lock_Ctrl/LockSystem/Output/RRElecMotorOutput/PowerDoorReqCoordination/Chart1'
 * '<S83>'  : 'Lock_Ctrl/LockSystem/Output/RRElecMotorOutput/PwrRelsFailedRemind/Chart'
 * '<S84>'  : 'Lock_Ctrl/LockSystem/Output/RRMotorOutput/DoorLock_Ctrl2F'
 * '<S85>'  : 'Lock_Ctrl/LockSystem/Output/RRMotorOutput/DoorsMotorOutput'
 * '<S86>'  : 'Lock_Ctrl/LockSystem/Output/RRMotorOutput/FLDoorLockReq'
 * '<S87>'  : 'Lock_Ctrl/LockSystem/Output/RRMotorOutput/DoorLock_Ctrl2F/Chart'
 * '<S88>'  : 'Lock_Ctrl/LockSystem/Output/TrunkMotorCmdOutput/OutHoodLockAction'
 * '<S89>'  : 'Lock_Ctrl/LockSystem/Output/TrunkMotorCmdOutput/TrunkUnlockReq'
 */

/*-
 * Requirements for '<Root>': Lock_Ctrl
 */
#endif                                 /* RTW_HEADER_Lock_Ctrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
