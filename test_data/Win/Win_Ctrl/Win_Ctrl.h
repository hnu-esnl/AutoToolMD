/*
 * File: Win_Ctrl.h
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

#ifndef RTW_HEADER_Win_Ctrl_h_
#define RTW_HEADER_Win_Ctrl_h_
#ifndef Win_Ctrl_COMMON_INCLUDES_
# define Win_Ctrl_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "Rte_Win_Ctrl.h"
#endif                                 /* Win_Ctrl_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<S18>/SWTypeStateDvFL' */
typedef struct {
  uint8 is_active_c35_zcu_wnd_lib;     /* '<S18>/SWTypeStateDvFL' */
  uint8 is_c35_zcu_wnd_lib;            /* '<S18>/SWTypeStateDvFL' */
  uint8 is_SwType1;                    /* '<S18>/SWTypeStateDvFL' */
  uint8 is_UP;                         /* '<S18>/SWTypeStateDvFL' */
  uint8 is_Down;                       /* '<S18>/SWTypeStateDvFL' */
  uint8 temporalCounter_i1;            /* '<S18>/SWTypeStateDvFL' */
} rtDW_SWTypeStateDvFL_Win_Ctrl;

/* Block states (default storage) for system '<S27>/SLC_Initialization_FR' */
typedef struct {
  uint32 temporalCounter_i1;           /* '<S27>/SLC_Initialization_FR' */
  uint8 is_active_c7_zcu_wnd_lib;      /* '<S27>/SLC_Initialization_FR' */
  uint8 is_c7_zcu_wnd_lib;             /* '<S27>/SLC_Initialization_FR' */
  uint8 is_Init_Finished;              /* '<S27>/SLC_Initialization_FR' */
  uint8 u8Sw1Rec;                      /* '<S27>/SLC_Initialization_FR' */
  uint8 u8Sw2Rec;                      /* '<S27>/SLC_Initialization_FR' */
  boolean bStall_prev;                 /* '<S27>/SLC_Initialization_FR' */
  boolean bStall_start;                /* '<S27>/SLC_Initialization_FR' */
} rtDW_SLC_Initialization_FR_Win_;

/* Block states (default storage) for system '<S28>/Over_Time_Protect' */
typedef struct {
  uint32 temporalCounter_i1;           /* '<S28>/Over_Time_Protect' */
  uint8 is_active_c3_zcu_wnd_lib;      /* '<S28>/Over_Time_Protect' */
  uint8 is_c3_zcu_wnd_lib;             /* '<S28>/Over_Time_Protect' */
} rtDW_Over_Time_Protect_Win_Ctrl;

/* Block signals for system '<S29>/Wnd_ThermalProt_FL' */
typedef struct {
  uint32 u32MotorTemperature;          /* '<S46>/SLC_ThermalProtection' */
  uint32 out;                          /* '<S39>/TempConvert' */
  uint8 u8TPFlag;                      /* '<S46>/SLC_ThermalProtection' */
} rtB_Wnd_ThermalProt_FL_Win_Ctrl;

/* Block states (default storage) for system '<S29>/Wnd_ThermalProt_FL' */
typedef struct {
  uint32 m_bpIndex[3];                 /* '<S46>/TempProc_Lookup' */
  uint8 m_bpLambda[3];                 /* '<S46>/TempProc_Lookup' */
  uint8 is_active_c6_zcu_wnd_lib;      /* '<S46>/SLC_ThermalProtection' */
  uint8 is_TemperaturProtect_Req;      /* '<S46>/SLC_ThermalProtection' */
  uint8 u8TPOPcntTemp;                 /* '<S46>/SLC_ThermalProtection' */
  uint8 u8TPActCnt;                    /* '<S46>/SLC_ThermalProtection' */
  uint8 u8TPFlag_prev;                 /* '<S46>/SLC_ThermalProtection' */
  uint8 u8TPFlag_start;                /* '<S46>/SLC_ThermalProtection' */
  uint8 is_active_c14_zcu_wnd_lib;     /* '<S39>/MotionIdx' */
  uint8 is_ShortDrop;                  /* '<S39>/MotionIdx' */
  uint8 count;                         /* '<S39>/MotionIdx' */
  uint8 temporalCounter_i1;            /* '<S39>/MotionIdx' */
  boolean bAmbTempRecFlg;              /* '<S46>/SLC_ThermalProtection' */
  boolean ThermoProtect_MODE;          /* '<S39>/ThermoProtect' */
} rtDW_Wnd_ThermalProt_FL_Win_Ctr;

/* Block states (default storage) for system '<S79>/EEPWriteShortFlag' */
typedef struct {
  uint8 is_active_c33_zcu_wnd_lib;     /* '<S79>/EEPWriteShortFlag' */
  uint8 bWinShrtDrpFlgWrtCntTemp_prev; /* '<S79>/EEPWriteShortFlag' */
  uint8 bWinShrtDrpFlgWrtCntTemp_start;/* '<S79>/EEPWriteShortFlag' */
  uint8 u8WNDExecReq_prev;             /* '<S79>/EEPWriteShortFlag' */
  uint8 u8WNDExecReq_start;            /* '<S79>/EEPWriteShortFlag' */
} rtDW_EEPWriteShortFlag_Win_Ctrl;

/* Block states (default storage) for system '<S79>/SLC' */
typedef struct {
  uint8 is_active_c29_zcu_wnd_lib;     /* '<S79>/SLC' */
  uint8 is_c29_zcu_wnd_lib;            /* '<S79>/SLC' */
  uint8 is_Action;                     /* '<S79>/SLC' */
  uint8 is_Relearn_DN;                 /* '<S79>/SLC' */
  uint8 is_AUTO_UP;                    /* '<S79>/SLC' */
  uint8 is_AUTO_DN;                    /* '<S79>/SLC' */
  uint8 is_MANUAL_UP;                  /* '<S79>/SLC' */
  uint8 is_MANUAL_DN;                  /* '<S79>/SLC' */
  uint8 is_OPDoor;                     /* '<S79>/SLC' */
  uint8 is_ElecDoor;                   /* '<S79>/SLC' */
  uint8 u8VentilateReq;                /* '<S79>/SLC' */
  uint8 u8TargetReq;                   /* '<S79>/SLC' */
  uint8 u8OPDoorReq;                   /* '<S79>/SLC' */
  uint8 u8ElecDoorReq;                 /* '<S79>/SLC' */
  uint8 u8StepMotionLimitFrame;        /* '<S79>/SLC' */
  uint8 u8StepMotionLimit;             /* '<S79>/SLC' */
  uint8 u8UpMotorStallCount;           /* '<S79>/SLC' */
  uint8 u8DnMotorStallCount;           /* '<S79>/SLC' */
  uint8 temporalCounter_i1;            /* '<S79>/SLC' */
  uint8 u8WNDCmd_prev;                 /* '<S79>/SLC' */
  uint8 u8WNDCmd_start;                /* '<S79>/SLC' */
  boolean bVentilateFlag;              /* '<S79>/SLC' */
  boolean bTargetFlag;                 /* '<S79>/SLC' */
  boolean bOPDoorFlag;                 /* '<S79>/SLC' */
  boolean bElecDoorFlag;               /* '<S79>/SLC' */
  boolean bRelearnFlg;                 /* '<S79>/SLC' */
  boolean bReverse_prev;               /* '<S79>/SLC' */
  boolean bReverse_start;              /* '<S79>/SLC' */
  boolean bReverseFinish_prev;         /* '<S79>/SLC' */
  boolean bReverseFinish_start;        /* '<S79>/SLC' */
  boolean bWinRelearnReq_prev;         /* '<S79>/SLC' */
  boolean bWinRelearnReq_start;        /* '<S79>/SLC' */
} rtDW_SLC_Win_Ctrl;

/* Block signals for system '<S97>/CCU_Req' */
typedef struct {
  uint8 u8WndCmdOutputReq_CCU;         /* '<S101>/CCU_Req' */
  boolean bManualUpFlg_CCU;            /* '<S101>/CCU_Req' */
  boolean bDelayAdjSpdFlg;             /* '<S101>/CCU_Req' */
} rtB_CCU_Req_Win_Ctrl;

/* Block states (default storage) for system '<S97>/CCU_Req' */
typedef struct {
  uint8 is_active_c1_zcu_wnd_lib;      /* '<S101>/CCU_Req' */
  uint8 is_c1_zcu_wnd_lib;             /* '<S101>/CCU_Req' */
  uint8 is_Up;                         /* '<S101>/CCU_Req' */
  uint8 is_Down;                       /* '<S101>/CCU_Req' */
  uint8 temporalCounter_i1;            /* '<S101>/CCU_Req' */
  uint8 u8WinMotorOpeCtr_prev;         /* '<S101>/CCU_Req' */
  uint8 u8WinMotorOpeCtr_start;        /* '<S101>/CCU_Req' */
  boolean CCU_Req_MODE;                /* '<S97>/CCU_Req' */
} rtDW_CCU_Req_Win_Ctrl;

/* Block signals for system '<S91>/CCU_Req_FL' */
typedef struct {
  uint8 OutportBufferForu8WndCmdOutputR;/* '<S101>/CCU_Req' */
  rtB_CCU_Req_Win_Ctrl CCU_Req;        /* '<S97>/CCU_Req' */
} rtB_CCU_Req_FL_Win_Ctrl;

/* Block states (default storage) for system '<S91>/CCU_Req_FL' */
typedef struct {
  rtDW_CCU_Req_Win_Ctrl CCU_Req;       /* '<S97>/CCU_Req' */
} rtDW_CCU_Req_FL_Win_Ctrl;

/* Block states (default storage) for system '<S109>/CLDoor_Req' */
typedef struct {
  uint8 is_active_c28_zcu_wnd_lib;     /* '<S114>/Chart' */
  uint8 is_c28_zcu_wnd_lib;            /* '<S114>/Chart' */
  uint8 temporalCounter_i1;            /* '<S114>/Chart' */
  boolean CLDoor_Req_MODE;             /* '<S109>/CLDoor_Req' */
} rtDW_CLDoor_Req_Win_Ctrl;

/* Block states (default storage) for system '<S125>/ElecDoor_Req' */
typedef struct {
  uint8 is_active_c27_zcu_wnd_lib;     /* '<S130>/ElecDoor_Req' */
  uint8 is_c27_zcu_wnd_lib;            /* '<S130>/ElecDoor_Req' */
  uint8 u8WinShortDropCmd_prev;        /* '<S130>/ElecDoor_Req' */
  uint8 u8WinShortDropCmd_start;       /* '<S130>/ElecDoor_Req' */
  boolean ElecDoor_Req_MODE;           /* '<S125>/ElecDoor_Req' */
} rtDW_ElecDoor_Req_Win_Ctrl;

/* Block states (default storage) for system '<S141>/OpenDoor_Req' */
typedef struct {
  uint8 is_active_c26_zcu_wnd_lib;     /* '<S145>/OpenDoor_Req' */
  uint8 is_c26_zcu_wnd_lib;            /* '<S145>/OpenDoor_Req' */
  boolean bDoorAjarSt_prev;            /* '<S145>/OpenDoor_Req' */
  boolean bDoorAjarSt_start;           /* '<S145>/OpenDoor_Req' */
  boolean OpenDoor_Req_MODE;           /* '<S141>/OpenDoor_Req' */
} rtDW_OpenDoor_Req_Win_Ctrl;

/* Block states (default storage) for system '<S153>/Outside_Req' */
typedef struct {
  uint8 is_active_c25_zcu_wnd_lib;     /* '<S157>/Outside_Req' */
  uint8 is_c25_zcu_wnd_lib;            /* '<S157>/Outside_Req' */
  boolean bDoorOutsideSwSt_prev;       /* '<S157>/Outside_Req' */
  boolean bDoorOutsideSwSt_start;      /* '<S157>/Outside_Req' */
  boolean Outside_Req_MODE;            /* '<S153>/Outside_Req' */
} rtDW_Outside_Req_Win_Ctrl;

/* Block states (default storage) for system '<S96>/Special_Mode_FLReq' */
typedef struct {
  uint16 temporalCounter_i1;           /* '<S165>/Special_Mode_Req' */
  uint8 is_active_c24_zcu_wnd_lib;     /* '<S165>/Special_Mode_Req' */
  uint8 is_c24_zcu_wnd_lib;            /* '<S165>/Special_Mode_Req' */
  uint8 is_SPECIALMODE;                /* '<S165>/Special_Mode_Req' */
  uint8 u8WndSw_prev;                  /* '<S165>/Special_Mode_Req' */
  uint8 u8WndSw_start;                 /* '<S165>/Special_Mode_Req' */
  boolean bCCULostCommon_prev;         /* '<S165>/Special_Mode_Req' */
  boolean bCCULostCommon_start;        /* '<S165>/Special_Mode_Req' */
} rtDW_Special_Mode_Req_Win_Ctrl;

/* Block states (default storage) for system '<S175>/DriverSide_FLSwStuck' */
typedef struct {
  uint32 temporalCounter_i1;           /* '<S175>/DriverSide_FLSwStuck' */
  uint8 is_active_c12_zcu_wnd_lib;     /* '<S175>/DriverSide_FLSwStuck' */
  uint8 is_c12_zcu_wnd_lib;            /* '<S175>/DriverSide_FLSwStuck' */
  uint8 u8SwSts_prev;                  /* '<S175>/DriverSide_FLSwStuck' */
  uint8 u8SwSts_start;                 /* '<S175>/DriverSide_FLSwStuck' */
} rtDW_DriverSide_FLSwStuck_Win_C;

/* Block signals (default storage) */
typedef struct tag_BlockIO_Win_Ctrl {
  uint16 gSLC_u16RRRpPosition;         /* '<Root>/gSLC_u16RRRpPosition' */
  uint16 gSLC_u16RRRpTravelLength;     /* '<Root>/gSLC_u16RRRpTravelLength' */
  uint16 gSLC_u16RLRpPosition;         /* '<Root>/gSLC_u16RLRpPosition' */
  uint16 gSLC_u16RLRpTravelLength;     /* '<Root>/gSLC_u16RLRpTravelLength' */
  uint16 gSLC_u16FRRpPosition;         /* '<Root>/gSLC_u16FRRpPosition' */
  uint16 gSLC_u16FRRpTravelLength;     /* '<Root>/gSLC_u16FRRpTravelLength' */
  uint16 gSLC_u16FLRpPosition;         /* '<Root>/gSLC_u16FLRpPosition' */
  uint16 gSLC_u16FLRpTravelLength;     /* '<Root>/gSLC_u16FLRpTravelLength' */
  uint8 gSLC_u8RRNormalizeSts;         /* '<Root>/gSLC_u8RRNormalizeSts' */
  uint8 gSLC_u8RLNormalizeSts;         /* '<Root>/gSLC_u8RLNormalizeSts' */
  uint8 gSLC_u8FRNormalizeSts;         /* '<Root>/gSLC_u8FRNormalizeSts' */
  uint8 gSLC_u8FLNormalizeSts;         /* '<Root>/gSLC_u8FLNormalizeSts' */
  uint8 gPRM_u8FLWinShortDropPst;      /* '<Root>/gPRM_u8FLWinShortDropPst' */
  uint8 gPRM_u8FRWinShortDropPst;      /* '<Root>/gPRM_u8FRWinShortDropPst' */
  uint8 gPRM_u8RLWinShortDropPst;      /* '<Root>/gPRM_u8RLWinShortDropPst' */
  uint8 gPRM_u8RRWinShortDropPst;      /* '<Root>/gPRM_u8RRWinShortDropPst' */
  uint8 gSLC_u8FLCurrtFixFlg;          /* '<Root>/gSLC_u8FLCurrtFixFlg' */
  uint8 gSLC_u8FRCurrtFixFlg;          /* '<Root>/gSLC_u8FRCurrtFixFlg' */
  uint8 gSLC_u8RLCurrtFixFlg;          /* '<Root>/gSLC_u8RLCurrtFixFlg' */
  uint8 gSLC_u8RRCurrtFixFlg;          /* '<Root>/gSLC_u8RRCurrtFixFlg' */
  uint8 gCAN_u8PWL_FLWinMotorTargetPstC;/* '<Root>/gCAN_u8PWL_FLWinMotorTargetPstCtr' */
  uint8 gPRM_u8WndVentilationPst;      /* '<Root>/gPRM_u8WndVentilationPst' */
  uint8 gCAN_u8PWL_FRWinMotorTargetPstC;/* '<Root>/gCAN_u8PWL_FRWinMotorTargetPstCtr' */
  uint8 gCAN_u8PWL_RLWinMotorTargetPstC;/* '<Root>/gCAN_u8PWL_RLWinMotorTargetPstCtr' */
  uint8 gCAN_u8PWL_RRWinMotorTargetPstC;/* '<Root>/gCAN_u8PWL_RRWinMotorTargetPstCtr' */
  uint8 u8WndCmdOutputReq_SP;          /* '<S168>/Special_Mode_Req' */
  uint8 u8WndCmdOutputReq_SP_m;        /* '<S167>/Special_Mode_Req' */
  uint8 u8WndCmdOutputReq_SP_k;        /* '<S166>/Special_Mode_Req' */
  uint8 u8WndCmdOutputReq_SP_i;        /* '<S165>/Special_Mode_Req' */
  uint8 u8WndCmdOutputReq_OutSide;     /* '<S163>/Outside_Req' */
  uint8 u8WndCmdOutputReq_OutSide_l;   /* '<S161>/Outside_Req' */
  uint8 u8WndCmdOutputReq_OutSide_g;   /* '<S159>/Outside_Req' */
  uint8 u8WndCmdOutputReq_OutSide_l5;  /* '<S157>/Outside_Req' */
  uint8 u8WndCmdOutputReq_OPDoor;      /* '<S151>/OpenDoor_Req' */
  uint8 u8WndCmdOutputReq_OPDoor_m;    /* '<S149>/OpenDoor_Req' */
  uint8 u8WndCmdOutputReq_OPDoor_a;    /* '<S147>/OpenDoor_Req' */
  uint8 u8WndCmdOutputReq_OPDoor_d;    /* '<S145>/OpenDoor_Req' */
  uint8 u8WndCmdOutputReq_ElecDoor;    /* '<S139>/ElecDoor_Req' */
  uint8 u8WndCmdOutputReq_ElecDoor_i;  /* '<S136>/ElecDoor_Req' */
  uint8 u8WndCmdOutputReq_ElecDoor_n;  /* '<S133>/ElecDoor_Req' */
  uint8 u8WndCmdOutputReq_ElecDoor_b;  /* '<S130>/ElecDoor_Req' */
  uint8 u8WndCmdOutputReq_CLDoor;      /* '<S123>/Chart' */
  uint8 u8WndCmdOutputReq_CLDoor_l;    /* '<S120>/Chart' */
  uint8 u8WndCmdOutputReq_CLDoor_e;    /* '<S117>/Chart' */
  uint8 u8WndCmdOutputReq_CLDoor_ln;   /* '<S114>/Chart' */
  uint8 u8WNDExecReq;                  /* '<S82>/SLC' */
  uint8 u8PWL_WinOpeationSt;           /* '<S82>/SLC' */
  uint8 u8WNDExecStatus;               /* '<S82>/SLC' */
  uint8 bWinShrtDrpFlgWrtCntTemp;      /* '<S82>/SLC' */
  uint8 bWinShrtDrpFlgWrtCnt;          /* '<S82>/EEPWriteShortFlag' */
  uint8 u8WNDExecReq_c;                /* '<S81>/SLC' */
  uint8 u8PWL_WinOpeationSt_l;         /* '<S81>/SLC' */
  uint8 u8WNDExecStatus_n;             /* '<S81>/SLC' */
  uint8 bWinShrtDrpFlgWrtCntTemp_f;    /* '<S81>/SLC' */
  uint8 bWinShrtDrpFlgWrtCnt_n;        /* '<S81>/EEPWriteShortFlag' */
  uint8 u8WNDExecReq_f;                /* '<S80>/SLC' */
  uint8 u8PWL_WinOpeationSt_h;         /* '<S80>/SLC' */
  uint8 u8WNDExecStatus_f;             /* '<S80>/SLC' */
  uint8 bWinShrtDrpFlgWrtCntTemp_k;    /* '<S80>/SLC' */
  uint8 bWinShrtDrpFlgWrtCnt_l;        /* '<S80>/EEPWriteShortFlag' */
  uint8 u8WNDExecReq_g;                /* '<S79>/SLC' */
  uint8 u8PWL_WinOpeationSt_i;         /* '<S79>/SLC' */
  uint8 u8WNDExecStatus_o;             /* '<S79>/SLC' */
  uint8 bWinShrtDrpFlgWrtCntTemp_i;    /* '<S79>/SLC' */
  uint8 bWinShrtDrpFlgWrtCnt_d;        /* '<S79>/EEPWriteShortFlag' */
  uint8 u8FLOutputSts;                 /* '<S71>/StartAtDiffTime' */
  uint8 u8FROutputSts;                 /* '<S71>/StartAtDiffTime' */
  uint8 u8RLOutputSts;                 /* '<S71>/StartAtDiffTime' */
  uint8 u8RROutputSts;                 /* '<S71>/StartAtDiffTime' */
  uint8 OutportBufferForu8TPFlag;      /* '<S67>/SLC_ThermalProtection' */
  uint8 OutportBufferForu8TPFlag_f;    /* '<S60>/SLC_ThermalProtection' */
  uint8 OutportBufferForu8TPFlag_c;    /* '<S53>/SLC_ThermalProtection' */
  uint8 OutportBufferForu8TPFlag_n;    /* '<S46>/SLC_ThermalProtection' */
  uint8 u8UINMWinSwSt;                 /* '<S19>/SWTypeStateRR' */
  uint8 u8UINMWinSwSt_b;               /* '<S19>/SWTypeStateRL' */
  uint8 u8UINMWinSwSt_bz;              /* '<S19>/SWTypeStateFR' */
  uint8 u8UINMWinSwSt_o;               /* '<S18>/SWTypeStateDvRR' */
  uint8 u8UINMWinSwSt_p;               /* '<S18>/SWTypeStateDvRL' */
  uint8 u8UINMWinSwSt_l;               /* '<S18>/SWTypeStateDvFR' */
  uint8 u8UINMWinSwSt_f;               /* '<S18>/SWTypeStateDvFL' */
  boolean TmpSignalConversionAtgNVM_bFLWi;/* '<Root>/gNVM_bFLWinShrtDrpFlg' */
  boolean TmpSignalConversionAtgNVM_bFRWi;/* '<Root>/gNVM_bFRWinShrtDrpFlg' */
  boolean TmpSignalConversionAtgNVM_bRLWi;/* '<Root>/gNVM_bRLWinShrtDrpFlg' */
  boolean TmpSignalConversionAtgNVM_bRRWi;/* '<Root>/gNVM_bRRWinShrtDrpFlg' */
  boolean gSLC_bFLPositionLostFlg;     /* '<Root>/gSLC_bFLPositionLostFlg' */
  boolean gSLC_bFRPositionLostFlg;     /* '<Root>/gSLC_bFRPositionLostFlg' */
  boolean gSLC_bRLPositionLostFlg;     /* '<Root>/gSLC_bRLPositionLostFlg' */
  boolean gSLC_bRRPositionLostFlg;     /* '<Root>/gSLC_bRRPositionLostFlg' */
  boolean gCFG_bFLDoorFramelessGlassCfg;/* '<Root>/gCFG_bFLDoorFramelessGlassCfg' */
  boolean gDoor_bFLDoorAjarSt;         /* '<Root>/gDoor_bFLDoorAjarSt' */
  boolean gDCU_bFLReverseFlag;         /* '<Root>/gDCU_bFLReverseFlag' */
  boolean LogicalOperator;             /* '<S1>/Logical Operator' */
  boolean gCFG_bFRDoorFramelessGlassCfg;/* '<Root>/gCFG_bFRDoorFramelessGlassCfg' */
  boolean gDoor_bFRDoorAjarSt;         /* '<Root>/gDoor_bFRDoorAjarSt' */
  boolean gDCU_bFRReverseFlag;         /* '<Root>/gDCU_bFRReverseFlag' */
  boolean LogicalOperator1;            /* '<S1>/Logical Operator1' */
  boolean gCFG_bRLDoorFramelessGlassCfg;/* '<Root>/gCFG_bRLDoorFramelessGlassCfg' */
  boolean gDoor_bRLDoorAjarSt;         /* '<Root>/gDoor_bRLDoorAjarSt' */
  boolean gDCU_bRLReverseFlag;         /* '<Root>/gDCU_bRLReverseFlag' */
  boolean LogicalOperator2;            /* '<S1>/Logical Operator2' */
  boolean gCFG_bRRDoorFramelessGlassCfg;/* '<Root>/gCFG_bRRDoorFramelessGlassCfg' */
  boolean gDoor_bRRDoorAjarSt;         /* '<Root>/gDoor_bRRDoorAjarSt' */
  boolean gDCU_bRRReverseFlag;         /* '<Root>/gDCU_bRRReverseFlag' */
  boolean LogicalOperator3;            /* '<S1>/Logical Operator3' */
  boolean bSwStuckFlg;                 /* '<S176>/RRLocalWin_SwStuck' */
  boolean bSwStuckFlg_p;               /* '<S176>/RLLocalWin_SwStuck' */
  boolean bSwStuckFlg_o;               /* '<S176>/FRLocalWin_SwStuck' */
  boolean bSwStuckFlg_pq;              /* '<S175>/DriverSide_RRSwStuck' */
  boolean bSwStuckFlg_j;               /* '<S175>/DriverSide_RLSwStuck' */
  boolean bSwStuckFlg_f;               /* '<S175>/DriverSide_FRSwStuck' */
  boolean bSwStuckFlg_m;               /* '<S175>/DriverSide_FLSwStuck' */
  boolean bAllow_sleep;                /* '<S168>/Special_Mode_Req' */
  boolean bSpecialFlag;                /* '<S168>/Special_Mode_Req' */
  boolean bAllow_sleep_n;              /* '<S167>/Special_Mode_Req' */
  boolean bSpecialFlag_m;              /* '<S167>/Special_Mode_Req' */
  boolean bAllow_sleep_e;              /* '<S166>/Special_Mode_Req' */
  boolean bSpecialFlag_n;              /* '<S166>/Special_Mode_Req' */
  boolean bAllow_sleep_l;              /* '<S165>/Special_Mode_Req' */
  boolean bSpecialFlag_b;              /* '<S165>/Special_Mode_Req' */
  boolean bWinShrtDrpFlg;              /* '<S82>/EEPWriteShortFlag' */
  boolean bWinShrtDrpFlg_h;            /* '<S81>/EEPWriteShortFlag' */
  boolean bWinShrtDrpFlg_d;            /* '<S80>/EEPWriteShortFlag' */
  boolean bWinShrtDrpFlg_i;            /* '<S79>/EEPWriteShortFlag' */
  boolean bVoltDisableFlg;             /* '<S3>/voltage_protection' */
  boolean bWndOverRunTime;             /* '<S28>/Over_Time_Protect3' */
  boolean bWndOverRunTime_p;           /* '<S28>/Over_Time_Protect2' */
  boolean bWndOverRunTime_a;           /* '<S28>/Over_Time_Protect1' */
  boolean bWndOverRunTime_l;           /* '<S28>/Over_Time_Protect' */
  boolean bNormStartFlg;               /* '<S27>/SLC_Initialization_RR' */
  boolean bNormStartFlg_a;             /* '<S27>/SLC_Initialization_RL' */
  boolean bNormStartFlg_l;             /* '<S27>/SLC_Initialization_FR' */
  boolean bNormStartFlg_m;             /* '<S27>/SLC_Initialization_FL' */
  rtB_CCU_Req_FL_Win_Ctrl CCU_Req_RR;  /* '<S91>/CCU_Req_RR' */
  rtB_CCU_Req_FL_Win_Ctrl CCU_Req_RL;  /* '<S91>/CCU_Req_RL' */
  rtB_CCU_Req_FL_Win_Ctrl CCU_Req_FR;  /* '<S91>/CCU_Req_FR' */
  rtB_CCU_Req_FL_Win_Ctrl CCU_Req_FL;  /* '<S91>/CCU_Req_FL' */
  rtB_Wnd_ThermalProt_FL_Win_Ctrl Wnd_ThermalProt_RR;/* '<S29>/Wnd_ThermalProt_RR' */
  rtB_Wnd_ThermalProt_FL_Win_Ctrl Wnd_ThermalProt_RL;/* '<S29>/Wnd_ThermalProt_RL' */
  rtB_Wnd_ThermalProt_FL_Win_Ctrl Wnd_ThermalProt_FR;/* '<S29>/Wnd_ThermalProt_FR' */
  rtB_Wnd_ThermalProt_FL_Win_Ctrl Wnd_ThermalProt_FL;/* '<S29>/Wnd_ThermalProt_FL' */
} BlockIO_Win_Ctrl;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_D_Work_Win_Ctrl {
  uint32 UnitDelay16_DSTATE;           /* '<S29>/Unit Delay16' */
  uint32 UnitDelay17_DSTATE;           /* '<S29>/Unit Delay17' */
  uint32 UnitDelay18_DSTATE;           /* '<S29>/Unit Delay18' */
  uint32 UnitDelay19_DSTATE;           /* '<S29>/Unit Delay19' */
  uint32 temporalCounter_i1;           /* '<S3>/voltage_protection' */
  uint32 temporalCounter_i1_l;         /* '<S27>/SLC_Initialization_FL' */
  uint16 wndOverVoltImmPrm;
  uint8 Delay4_DSTATE;                 /* '<S74>/Delay4' */
  uint8 Delay5_DSTATE;                 /* '<S74>/Delay5' */
  uint8 Delay6_DSTATE;                 /* '<S74>/Delay6' */
  uint8 Delay7_DSTATE;                 /* '<S74>/Delay7' */
  uint8 Delay8_DSTATE;                 /* '<S74>/Delay8' */
  uint8 Delay9_DSTATE;                 /* '<S74>/Delay9' */
  uint8 Delay10_DSTATE;                /* '<S74>/Delay10' */
  uint8 Delay11_DSTATE;                /* '<S74>/Delay11' */
  uint8 Delay12_DSTATE;                /* '<S74>/Delay12' */
  uint8 Delay13_DSTATE;                /* '<S74>/Delay13' */
  uint8 Delay14_DSTATE;                /* '<S74>/Delay14' */
  uint8 Delay15_DSTATE;                /* '<S74>/Delay15' */
  uint8 Delay_DSTATE_p1;               /* '<S74>/Delay' */
  uint8 Delay1_DSTATE_f;               /* '<S74>/Delay1' */
  uint8 Delay2_DSTATE_i;               /* '<S74>/Delay2' */
  uint8 Delay3_DSTATE_f;               /* '<S74>/Delay3' */
  boolean Delay_DSTATE_d;              /* '<S79>/Delay' */
  boolean Delay_DSTATE_o;              /* '<S80>/Delay' */
  boolean Delay_DSTATE_pr;             /* '<S81>/Delay' */
  boolean Delay_DSTATE_j;              /* '<S82>/Delay' */
  uint8 gCAN_u8UMM_UsageModeSt_inWin;  /* '<S1>/gCAN_u8UMM_UsageModeSt_Memory' */
  uint8 gCFG_u8PwrRelsType_inWin;      /* '<S1>/gCFG_u8PwrRelsType_Memory' */
  uint8 gPRM_u8WndLckLEDPWM_Lv1_inWin; /* '<S1>/gPRM_u8WndLckLEDPWM_Lv1_Memory' */
  uint8 gPRM_u8WndLckLEDPWM_Lv2_inWin; /* '<S1>/gPRM_u8WndLckLEDPWM_Lv2_Memory' */
  uint8 gWND_u8DrvWinOutput_inWin;     /* '<S1>/gWND_u8DrvWinOutput_Memory' */
  uint8 gWND_u8PsgWinOutput_inWin;     /* '<S1>/gWND_u8PsgWinOutput_Memory' */
  uint8 gWND_u8RLWinOutput_inWin;      /* '<S1>/gWND_u8RLWinOutput_Memory' */
  uint8 gWND_u8RRWinOutput_inWin;      /* '<S1>/gWND_u8RRWinOutput_Memory' */
  uint8 is_active_c3_Win_Ctrl;         /* '<S77>/WNDCmdSrc' */
  uint8 is_active_c2_Win_Ctrl;         /* '<S71>/StartAtDiffTime' */
  uint8 is_Output_Set;                 /* '<S71>/StartAtDiffTime' */
  uint8 u8OutputRec;                   /* '<S71>/StartAtDiffTime' */
  uint8 temporalCounter_i1_b;          /* '<S71>/StartAtDiffTime' */
  uint8 is_active_c22_zcu_wnd_lib;     /* '<S3>/voltage_protection' */
  uint8 is_c22_zcu_wnd_lib;            /* '<S3>/voltage_protection' */
  uint8 is_NORMAL;                     /* '<S3>/voltage_protection' */
  uint8 is_OVER_VOLT;                  /* '<S3>/voltage_protection' */
  uint8 is_UNDER_VOLT;                 /* '<S3>/voltage_protection' */
  uint8 is_active_c7_zcu_wnd_lib;      /* '<S27>/SLC_Initialization_FL' */
  uint8 is_c7_zcu_wnd_lib;             /* '<S27>/SLC_Initialization_FL' */
  uint8 is_Init_Finished;              /* '<S27>/SLC_Initialization_FL' */
  uint8 u8Sw1Rec;                      /* '<S27>/SLC_Initialization_FL' */
  uint8 u8Sw2Rec;                      /* '<S27>/SLC_Initialization_FL' */
  boolean gASI_bPowerOnReset_inWin;    /* '<S1>/gASI_bPowerOnReset_Memory' */
  boolean gSLC_bFLAPHappen_inWin;      /* '<S1>/gSLC_bFLAPHappen_Memory' */
  boolean gSLC_bFRAPHappen_inWin;      /* '<S1>/gSLC_bFRAPHappen_Memory' */
  boolean gSLC_bRLAPHappen_inWin;      /* '<S1>/gSLC_bRLAPHappen_Memory' */
  boolean gSLC_bRRAPHappen_inWin;      /* '<S1>/gSLC_bRRAPHappen_Memory' */
  boolean gWND_bFLWinMotErrSt_inWin;   /* '<S1>/gWND_bFLWinMotErrSt_Memory' */
  boolean gWND_bFRWinMotErrSt_inWin;   /* '<S1>/gWND_bFRWinMotErrSt_Memory' */
  boolean gWND_bRLWinMotErrSt_inWin;   /* '<S1>/gWND_bRLWinMotErrSt_Memory' */
  boolean gWND_bRRWinMotErrSt_inWin;   /* '<S1>/gWND_bRRWinMotErrSt_Memory' */
  boolean gWin_bFLOutSideDoorSwFlg_inWin;/* '<S1>/gWin_bFLOutSideDoorSwFlg_Memory' */
  boolean gWin_bFROutSideDoorSwFlg_inWin;/* '<S1>/gWin_bFROutSideDoorSwFlg_Memory' */
  boolean gWin_bPWL_PassengerWinLockLedFl;/* '<S1>/gWin_bPWL_PassengerWinLockLedFltSt_Memory' */
  boolean gWin_bRLOutSideDoorSwFlg_inWin;/* '<S1>/gWin_bRLOutSideDoorSwFlg_Memory' */
  boolean gWin_bRROutSideDoorSwFlg_inWin;/* '<S1>/gWin_bRROutSideDoorSwFlg_Memory' */
  boolean gWin_bUINM_PassengerWinLockBtnS;/* '<S1>/gWin_bUINM_PassengerWinLockBtnSt_Memory' */
  boolean bFLUpOutput;                 /* '<S71>/StartAtDiffTime' */
  boolean bFLDnOutput;                 /* '<S71>/StartAtDiffTime' */
  boolean bFRUpOutput;                 /* '<S71>/StartAtDiffTime' */
  boolean bFRDnOutput;                 /* '<S71>/StartAtDiffTime' */
  boolean bRLUpOutput;                 /* '<S71>/StartAtDiffTime' */
  boolean bRLDnOutput;                 /* '<S71>/StartAtDiffTime' */
  boolean bRRUpOutput;                 /* '<S71>/StartAtDiffTime' */
  boolean bRRDnOutput;                 /* '<S71>/StartAtDiffTime' */
  boolean bStall_prev;                 /* '<S27>/SLC_Initialization_FL' */
  boolean bStall_start;                /* '<S27>/SLC_Initialization_FL' */
  rtDW_DriverSide_FLSwStuck_Win_C sf_RRLocalWin_SwStuck;/* '<S176>/RRLocalWin_SwStuck' */
  rtDW_DriverSide_FLSwStuck_Win_C sf_RLLocalWin_SwStuck;/* '<S176>/RLLocalWin_SwStuck' */
  rtDW_DriverSide_FLSwStuck_Win_C sf_FRLocalWin_SwStuck;/* '<S176>/FRLocalWin_SwStuck' */
  rtDW_DriverSide_FLSwStuck_Win_C sf_DriverSide_RRSwStuck;/* '<S175>/DriverSide_RRSwStuck' */
  rtDW_DriverSide_FLSwStuck_Win_C sf_DriverSide_RLSwStuck;/* '<S175>/DriverSide_RLSwStuck' */
  rtDW_DriverSide_FLSwStuck_Win_C sf_DriverSide_FRSwStuck;/* '<S175>/DriverSide_FRSwStuck' */
  rtDW_DriverSide_FLSwStuck_Win_C sf_DriverSide_FLSwStuck;/* '<S175>/DriverSide_FLSwStuck' */
  rtDW_Special_Mode_Req_Win_Ctrl Special_Mode_RRReq;/* '<S96>/Special_Mode_RRReq' */
  rtDW_Special_Mode_Req_Win_Ctrl Special_Mode_RLReq;/* '<S96>/Special_Mode_RLReq' */
  rtDW_Special_Mode_Req_Win_Ctrl Special_Mode_FRReq;/* '<S96>/Special_Mode_FRReq' */
  rtDW_Special_Mode_Req_Win_Ctrl Special_Mode_FLReq;/* '<S96>/Special_Mode_FLReq' */
  rtDW_Outside_Req_Win_Ctrl Outside_Req_h;/* '<S156>/Outside_Req' */
  rtDW_Outside_Req_Win_Ctrl Outside_Req_am;/* '<S155>/Outside_Req' */
  rtDW_Outside_Req_Win_Ctrl Outside_Req_a;/* '<S154>/Outside_Req' */
  rtDW_Outside_Req_Win_Ctrl Outside_Req;/* '<S153>/Outside_Req' */
  rtDW_OpenDoor_Req_Win_Ctrl OpenDoor_Req_k;/* '<S144>/OpenDoor_Req' */
  rtDW_OpenDoor_Req_Win_Ctrl OpenDoor_Req_m;/* '<S143>/OpenDoor_Req' */
  rtDW_OpenDoor_Req_Win_Ctrl OpenDoor_Req_n;/* '<S142>/OpenDoor_Req' */
  rtDW_OpenDoor_Req_Win_Ctrl OpenDoor_Req;/* '<S141>/OpenDoor_Req' */
  rtDW_ElecDoor_Req_Win_Ctrl ElecDoor_Req_g;/* '<S128>/ElecDoor_Req' */
  rtDW_ElecDoor_Req_Win_Ctrl ElecDoor_Req_b;/* '<S127>/ElecDoor_Req' */
  rtDW_ElecDoor_Req_Win_Ctrl ElecDoor_Req_i;/* '<S126>/ElecDoor_Req' */
  rtDW_ElecDoor_Req_Win_Ctrl ElecDoor_Req;/* '<S125>/ElecDoor_Req' */
  rtDW_CLDoor_Req_Win_Ctrl CLDoor_Req_i;/* '<S112>/CLDoor_Req' */
  rtDW_CLDoor_Req_Win_Ctrl CLDoor_Req_mo;/* '<S111>/CLDoor_Req' */
  rtDW_CLDoor_Req_Win_Ctrl CLDoor_Req_m;/* '<S110>/CLDoor_Req' */
  rtDW_CLDoor_Req_Win_Ctrl CLDoor_Req; /* '<S109>/CLDoor_Req' */
  rtDW_CCU_Req_FL_Win_Ctrl CCU_Req_RR; /* '<S91>/CCU_Req_RR' */
  rtDW_CCU_Req_FL_Win_Ctrl CCU_Req_RL; /* '<S91>/CCU_Req_RL' */
  rtDW_CCU_Req_FL_Win_Ctrl CCU_Req_FR; /* '<S91>/CCU_Req_FR' */
  rtDW_CCU_Req_FL_Win_Ctrl CCU_Req_FL; /* '<S91>/CCU_Req_FL' */
  rtDW_SLC_Win_Ctrl sf_SLC_h;          /* '<S82>/SLC' */
  rtDW_EEPWriteShortFlag_Win_Ctrl sf_EEPWriteShortFlag_nl;/* '<S82>/EEPWriteShortFlag' */
  rtDW_SLC_Win_Ctrl sf_SLC_o;          /* '<S81>/SLC' */
  rtDW_EEPWriteShortFlag_Win_Ctrl sf_EEPWriteShortFlag_n;/* '<S81>/EEPWriteShortFlag' */
  rtDW_SLC_Win_Ctrl sf_SLC_k;          /* '<S80>/SLC' */
  rtDW_EEPWriteShortFlag_Win_Ctrl sf_EEPWriteShortFlag_m;/* '<S80>/EEPWriteShortFlag' */
  rtDW_SLC_Win_Ctrl sf_SLC;            /* '<S79>/SLC' */
  rtDW_EEPWriteShortFlag_Win_Ctrl sf_EEPWriteShortFlag;/* '<S79>/EEPWriteShortFlag' */
  rtDW_Wnd_ThermalProt_FL_Win_Ctr Wnd_ThermalProt_RR;/* '<S29>/Wnd_ThermalProt_RR' */
  rtDW_Wnd_ThermalProt_FL_Win_Ctr Wnd_ThermalProt_RL;/* '<S29>/Wnd_ThermalProt_RL' */
  rtDW_Wnd_ThermalProt_FL_Win_Ctr Wnd_ThermalProt_FR;/* '<S29>/Wnd_ThermalProt_FR' */
  rtDW_Wnd_ThermalProt_FL_Win_Ctr Wnd_ThermalProt_FL;/* '<S29>/Wnd_ThermalProt_FL' */
  rtDW_Over_Time_Protect_Win_Ctrl sf_Over_Time_Protect3;/* '<S28>/Over_Time_Protect3' */
  rtDW_Over_Time_Protect_Win_Ctrl sf_Over_Time_Protect2;/* '<S28>/Over_Time_Protect2' */
  rtDW_Over_Time_Protect_Win_Ctrl sf_Over_Time_Protect1;/* '<S28>/Over_Time_Protect1' */
  rtDW_Over_Time_Protect_Win_Ctrl sf_Over_Time_Protect;/* '<S28>/Over_Time_Protect' */
  rtDW_SLC_Initialization_FR_Win_ sf_SLC_Initialization_RR;/* '<S27>/SLC_Initialization_RR' */
  rtDW_SLC_Initialization_FR_Win_ sf_SLC_Initialization_RL;/* '<S27>/SLC_Initialization_RL' */
  rtDW_SLC_Initialization_FR_Win_ sf_SLC_Initialization_FR;/* '<S27>/SLC_Initialization_FR' */
  rtDW_SWTypeStateDvFL_Win_Ctrl sf_SWTypeStateRR;/* '<S19>/SWTypeStateRR' */
  rtDW_SWTypeStateDvFL_Win_Ctrl sf_SWTypeStateRL;/* '<S19>/SWTypeStateRL' */
  rtDW_SWTypeStateDvFL_Win_Ctrl sf_SWTypeStateFR;/* '<S19>/SWTypeStateFR' */
  rtDW_SWTypeStateDvFL_Win_Ctrl sf_SWTypeStateDvRR;/* '<S18>/SWTypeStateDvRR' */
  rtDW_SWTypeStateDvFL_Win_Ctrl sf_SWTypeStateDvRL;/* '<S18>/SWTypeStateDvRL' */
  rtDW_SWTypeStateDvFL_Win_Ctrl sf_SWTypeStateDvFR;/* '<S18>/SWTypeStateDvFR' */
  rtDW_SWTypeStateDvFL_Win_Ctrl sf_SWTypeStateDvFL;/* '<S18>/SWTypeStateDvFL' */
} D_Work_Win_Ctrl;

/* Invariant block signals for system '<S29>/Wnd_ThermalProt_FL' */
typedef struct {
  const boolean LogicalOperator;       /* '<S39>/Logical Operator' */
} rtC_Wnd_ThermalProt_FL_Win_Ctrl;

/* Invariant block signals (default storage) */
typedef struct {
  uint32 Gain9;                        /* '<S1>/Gain9' */
  uint8 Gain7;                         /* '<S1>/Gain7' */
  rtC_Wnd_ThermalProt_FL_Win_Ctrl Wnd_ThermalProt_RR;/* '<S29>/Wnd_ThermalProt_RR' */
  rtC_Wnd_ThermalProt_FL_Win_Ctrl Wnd_ThermalProt_RL;/* '<S29>/Wnd_ThermalProt_RL' */
  rtC_Wnd_ThermalProt_FL_Win_Ctrl Wnd_ThermalProt_FR;/* '<S29>/Wnd_ThermalProt_FR' */
  rtC_Wnd_ThermalProt_FL_Win_Ctrl Wnd_ThermalProt_FL;/* '<S29>/Wnd_ThermalProt_FL' */
} ConstBlockIO_Win_Ctrl;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: wndThermoPwPrm)
   * Referenced by:
   *   '<S46>/TempProc_Lookup'
   *   '<S53>/TempProc_Lookup'
   *   '<S60>/TempProc_Lookup'
   *   '<S67>/TempProc_Lookup'
   */
  uint8 pooled14[24];
} ConstParam_Win_Ctrl;

/* Block signals (default storage) */
extern BlockIO_Win_Ctrl Win_Ctrl_B;

/* Block states (default storage) */
extern D_Work_Win_Ctrl Win_Ctrl_DWork;
extern const ConstBlockIO_Win_Ctrl Win_Ctrl_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstParam_Win_Ctrl Win_Ctrl_ConstP;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern uint8 u8WndCmdOutputReq_RRCCU;  /* '<S100>/CCU_Req' */
extern uint8 u8WndCmdOutputReq_RLCCU;  /* '<S99>/CCU_Req' */
extern uint8 u8WndCmdOutputReq_FRCCU;  /* '<S98>/CCU_Req' */
extern uint8 u8WndCmdOutputReq_FLCCU;  /* '<S97>/CCU_Req' */

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern boolean gSLC_bRLIsInAPRangeRTE; /* '<S1>/Data Store Memory100' */
extern boolean gSLC_bRRIsInAPRangeRTE; /* '<S1>/Data Store Memory101' */
extern boolean gSLC_bFLIsInAPRangeRTE; /* '<S1>/Data Store Memory98' */
extern boolean gSLC_bFRIsInAPRangeRTE; /* '<S1>/Data Store Memory99' */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Constant120' : Unused code path elimination
 * Block '<S1>/Constant57' : Unused code path elimination
 * Block '<S1>/Constant58' : Unused code path elimination
 * Block '<S1>/Constant63' : Unused code path elimination
 * Block '<S1>/Constant76' : Unused code path elimination
 * Block '<S1>/Constant77' : Unused code path elimination
 * Block '<S8>/Constant55' : Unused code path elimination
 * Block '<S8>/Constant56' : Unused code path elimination
 * Block '<S17>/Gain24' : Unused code path elimination
 * Block '<S17>/Gain25' : Unused code path elimination
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
 * '<Root>' : 'Win_Ctrl'
 * '<S1>'   : 'Win_Ctrl/Win'
 * '<S2>'   : 'Win_Ctrl/Win/Output'
 * '<S3>'   : 'Win_Ctrl/Win/SLCPreProcess'
 * '<S4>'   : 'Win_Ctrl/Win/WND'
 * '<S5>'   : 'Win_Ctrl/Win/WNDPreProcess'
 * '<S6>'   : 'Win_Ctrl/Win/Output/ShortDropSt'
 * '<S7>'   : 'Win_Ctrl/Win/Output/SignalOutput'
 * '<S8>'   : 'Win_Ctrl/Win/Output/Switch State'
 * '<S9>'   : 'Win_Ctrl/Win/Output/ShortDropSt/ShortDropStsFL'
 * '<S10>'  : 'Win_Ctrl/Win/Output/ShortDropSt/ShortDropStsFR'
 * '<S11>'  : 'Win_Ctrl/Win/Output/ShortDropSt/ShortDropStsRL'
 * '<S12>'  : 'Win_Ctrl/Win/Output/ShortDropSt/ShortDropStsRR'
 * '<S13>'  : 'Win_Ctrl/Win/Output/SignalOutput/PositionSts_FL'
 * '<S14>'  : 'Win_Ctrl/Win/Output/SignalOutput/PositionSts_FR'
 * '<S15>'  : 'Win_Ctrl/Win/Output/SignalOutput/PositionSts_RL'
 * '<S16>'  : 'Win_Ctrl/Win/Output/SignalOutput/PositionSts_RR'
 * '<S17>'  : 'Win_Ctrl/Win/Output/Switch State/Valid SW state'
 * '<S18>'  : 'Win_Ctrl/Win/Output/Switch State/Valid SW state/SwTypeStateDriveSide'
 * '<S19>'  : 'Win_Ctrl/Win/Output/Switch State/Valid SW state/SwTypeStateLocalSide'
 * '<S20>'  : 'Win_Ctrl/Win/Output/Switch State/Valid SW state/SwTypeStateDriveSide/SWTypeStateDvFL'
 * '<S21>'  : 'Win_Ctrl/Win/Output/Switch State/Valid SW state/SwTypeStateDriveSide/SWTypeStateDvFR'
 * '<S22>'  : 'Win_Ctrl/Win/Output/Switch State/Valid SW state/SwTypeStateDriveSide/SWTypeStateDvRL'
 * '<S23>'  : 'Win_Ctrl/Win/Output/Switch State/Valid SW state/SwTypeStateDriveSide/SWTypeStateDvRR'
 * '<S24>'  : 'Win_Ctrl/Win/Output/Switch State/Valid SW state/SwTypeStateLocalSide/SWTypeStateFR'
 * '<S25>'  : 'Win_Ctrl/Win/Output/Switch State/Valid SW state/SwTypeStateLocalSide/SWTypeStateRL'
 * '<S26>'  : 'Win_Ctrl/Win/Output/Switch State/Valid SW state/SwTypeStateLocalSide/SWTypeStateRR'
 * '<S27>'  : 'Win_Ctrl/Win/SLCPreProcess/Normalize_Req'
 * '<S28>'  : 'Win_Ctrl/Win/SLCPreProcess/OverRunTime'
 * '<S29>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection'
 * '<S30>'  : 'Win_Ctrl/Win/SLCPreProcess/voltage_protection'
 * '<S31>'  : 'Win_Ctrl/Win/SLCPreProcess/Normalize_Req/SLC_Initialization_FL'
 * '<S32>'  : 'Win_Ctrl/Win/SLCPreProcess/Normalize_Req/SLC_Initialization_FR'
 * '<S33>'  : 'Win_Ctrl/Win/SLCPreProcess/Normalize_Req/SLC_Initialization_RL'
 * '<S34>'  : 'Win_Ctrl/Win/SLCPreProcess/Normalize_Req/SLC_Initialization_RR'
 * '<S35>'  : 'Win_Ctrl/Win/SLCPreProcess/OverRunTime/Over_Time_Protect'
 * '<S36>'  : 'Win_Ctrl/Win/SLCPreProcess/OverRunTime/Over_Time_Protect1'
 * '<S37>'  : 'Win_Ctrl/Win/SLCPreProcess/OverRunTime/Over_Time_Protect2'
 * '<S38>'  : 'Win_Ctrl/Win/SLCPreProcess/OverRunTime/Over_Time_Protect3'
 * '<S39>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FL'
 * '<S40>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FR'
 * '<S41>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RL'
 * '<S42>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RR'
 * '<S43>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FL/MotionIdx'
 * '<S44>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FL/TempConvert'
 * '<S45>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FL/TemperatureIdx'
 * '<S46>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FL/ThermoProtect'
 * '<S47>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FL/VoltageIdx'
 * '<S48>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FL/ThermoProtect/Compare To Constant2'
 * '<S49>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FL/ThermoProtect/SLC_ThermalProtection'
 * '<S50>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FR/MotionIdx'
 * '<S51>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FR/TempConvert'
 * '<S52>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FR/TemperatureIdx'
 * '<S53>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FR/ThermoProtect'
 * '<S54>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FR/VoltageIdx'
 * '<S55>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FR/ThermoProtect/Compare To Constant2'
 * '<S56>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_FR/ThermoProtect/SLC_ThermalProtection'
 * '<S57>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RL/MotionIdx'
 * '<S58>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RL/TempConvert'
 * '<S59>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RL/TemperatureIdx'
 * '<S60>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RL/ThermoProtect'
 * '<S61>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RL/VoltageIdx'
 * '<S62>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RL/ThermoProtect/Compare To Constant2'
 * '<S63>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RL/ThermoProtect/SLC_ThermalProtection'
 * '<S64>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RR/MotionIdx'
 * '<S65>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RR/TempConvert'
 * '<S66>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RR/TemperatureIdx'
 * '<S67>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RR/ThermoProtect'
 * '<S68>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RR/VoltageIdx'
 * '<S69>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RR/ThermoProtect/Compare To Constant2'
 * '<S70>'  : 'Win_Ctrl/Win/SLCPreProcess/Thermal_Protection/Wnd_ThermalProt_RR/ThermoProtect/SLC_ThermalProtection'
 * '<S71>'  : 'Win_Ctrl/Win/WND/FourWindowPriorityArbitration'
 * '<S72>'  : 'Win_Ctrl/Win/WND/ModePriorityArbitration'
 * '<S73>'  : 'Win_Ctrl/Win/WND/SLCProcess'
 * '<S74>'  : 'Win_Ctrl/Win/WND/WNDMode'
 * '<S75>'  : 'Win_Ctrl/Win/WND/FourWindowPriorityArbitration/StartAtDiffTime'
 * '<S76>'  : 'Win_Ctrl/Win/WND/ModePriorityArbitration/WNDCmd'
 * '<S77>'  : 'Win_Ctrl/Win/WND/ModePriorityArbitration/WNDCmdSrc'
 * '<S78>'  : 'Win_Ctrl/Win/WND/ModePriorityArbitration/WNDCmdSrc/WNDCmdSrc'
 * '<S79>'  : 'Win_Ctrl/Win/WND/SLCProcess/SLC_FL'
 * '<S80>'  : 'Win_Ctrl/Win/WND/SLCProcess/SLC_FR'
 * '<S81>'  : 'Win_Ctrl/Win/WND/SLCProcess/SLC_RL'
 * '<S82>'  : 'Win_Ctrl/Win/WND/SLCProcess/SLC_RR'
 * '<S83>'  : 'Win_Ctrl/Win/WND/SLCProcess/SLC_FL/EEPWriteShortFlag'
 * '<S84>'  : 'Win_Ctrl/Win/WND/SLCProcess/SLC_FL/SLC'
 * '<S85>'  : 'Win_Ctrl/Win/WND/SLCProcess/SLC_FR/EEPWriteShortFlag'
 * '<S86>'  : 'Win_Ctrl/Win/WND/SLCProcess/SLC_FR/SLC'
 * '<S87>'  : 'Win_Ctrl/Win/WND/SLCProcess/SLC_RL/EEPWriteShortFlag'
 * '<S88>'  : 'Win_Ctrl/Win/WND/SLCProcess/SLC_RL/SLC'
 * '<S89>'  : 'Win_Ctrl/Win/WND/SLCProcess/SLC_RR/EEPWriteShortFlag'
 * '<S90>'  : 'Win_Ctrl/Win/WND/SLCProcess/SLC_RR/SLC'
 * '<S91>'  : 'Win_Ctrl/Win/WND/WNDMode/CCUReq'
 * '<S92>'  : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req'
 * '<S93>'  : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req'
 * '<S94>'  : 'Win_Ctrl/Win/WND/WNDMode/OpenDoor_Req'
 * '<S95>'  : 'Win_Ctrl/Win/WND/WNDMode/Outside_Req'
 * '<S96>'  : 'Win_Ctrl/Win/WND/WNDMode/Special_Mode'
 * '<S97>'  : 'Win_Ctrl/Win/WND/WNDMode/CCUReq/CCU_Req_FL'
 * '<S98>'  : 'Win_Ctrl/Win/WND/WNDMode/CCUReq/CCU_Req_FR'
 * '<S99>'  : 'Win_Ctrl/Win/WND/WNDMode/CCUReq/CCU_Req_RL'
 * '<S100>' : 'Win_Ctrl/Win/WND/WNDMode/CCUReq/CCU_Req_RR'
 * '<S101>' : 'Win_Ctrl/Win/WND/WNDMode/CCUReq/CCU_Req_FL/CCU_Req'
 * '<S102>' : 'Win_Ctrl/Win/WND/WNDMode/CCUReq/CCU_Req_FL/CCU_Req/CCU_Req'
 * '<S103>' : 'Win_Ctrl/Win/WND/WNDMode/CCUReq/CCU_Req_FR/CCU_Req'
 * '<S104>' : 'Win_Ctrl/Win/WND/WNDMode/CCUReq/CCU_Req_FR/CCU_Req/CCU_Req'
 * '<S105>' : 'Win_Ctrl/Win/WND/WNDMode/CCUReq/CCU_Req_RL/CCU_Req'
 * '<S106>' : 'Win_Ctrl/Win/WND/WNDMode/CCUReq/CCU_Req_RL/CCU_Req/CCU_Req'
 * '<S107>' : 'Win_Ctrl/Win/WND/WNDMode/CCUReq/CCU_Req_RR/CCU_Req'
 * '<S108>' : 'Win_Ctrl/Win/WND/WNDMode/CCUReq/CCU_Req_RR/CCU_Req/CCU_Req'
 * '<S109>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_FL'
 * '<S110>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_FR'
 * '<S111>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_RL'
 * '<S112>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_RR'
 * '<S113>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_FL/CLDoor_Req'
 * '<S114>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_FL/CLDoor_Req/CLDoor_Req'
 * '<S115>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_FL/CLDoor_Req/CLDoor_Req/Chart'
 * '<S116>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_FR/CLDoor_Req'
 * '<S117>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_FR/CLDoor_Req/CLDoor_Req'
 * '<S118>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_FR/CLDoor_Req/CLDoor_Req/Chart'
 * '<S119>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_RL/CLDoor_Req'
 * '<S120>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_RL/CLDoor_Req/CLDoor_Req'
 * '<S121>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_RL/CLDoor_Req/CLDoor_Req/Chart'
 * '<S122>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_RR/CLDoor_Req'
 * '<S123>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_RR/CLDoor_Req/CLDoor_Req'
 * '<S124>' : 'Win_Ctrl/Win/WND/WNDMode/CLDoor_Req/CLDoor_Req_RR/CLDoor_Req/CLDoor_Req/Chart'
 * '<S125>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_FL'
 * '<S126>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_FR'
 * '<S127>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_RL'
 * '<S128>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_RR'
 * '<S129>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_FL/ElecDoor_Req'
 * '<S130>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_FL/ElecDoor_Req/ElecDoor_Req'
 * '<S131>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_FL/ElecDoor_Req/ElecDoor_Req/ElecDoor_Req'
 * '<S132>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_FR/ElecDoor_Req'
 * '<S133>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_FR/ElecDoor_Req/ElecDoor_Req'
 * '<S134>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_FR/ElecDoor_Req/ElecDoor_Req/ElecDoor_Req'
 * '<S135>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_RL/ElecDoor_Req'
 * '<S136>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_RL/ElecDoor_Req/ElecDoor_Req'
 * '<S137>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_RL/ElecDoor_Req/ElecDoor_Req/ElecDoor_Req'
 * '<S138>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_RR/ElecDoor_Req'
 * '<S139>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_RR/ElecDoor_Req/ElecDoor_Req'
 * '<S140>' : 'Win_Ctrl/Win/WND/WNDMode/ElecDoor_Req/ElecDoor_Req_RR/ElecDoor_Req/ElecDoor_Req/ElecDoor_Req'
 * '<S141>' : 'Win_Ctrl/Win/WND/WNDMode/OpenDoor_Req/OpenDoor_Req_FL'
 * '<S142>' : 'Win_Ctrl/Win/WND/WNDMode/OpenDoor_Req/OpenDoor_Req_FR'
 * '<S143>' : 'Win_Ctrl/Win/WND/WNDMode/OpenDoor_Req/OpenDoor_Req_RL'
 * '<S144>' : 'Win_Ctrl/Win/WND/WNDMode/OpenDoor_Req/OpenDoor_Req_RR'
 * '<S145>' : 'Win_Ctrl/Win/WND/WNDMode/OpenDoor_Req/OpenDoor_Req_FL/OpenDoor_Req'
 * '<S146>' : 'Win_Ctrl/Win/WND/WNDMode/OpenDoor_Req/OpenDoor_Req_FL/OpenDoor_Req/OpenDoor_Req'
 * '<S147>' : 'Win_Ctrl/Win/WND/WNDMode/OpenDoor_Req/OpenDoor_Req_FR/OpenDoor_Req'
 * '<S148>' : 'Win_Ctrl/Win/WND/WNDMode/OpenDoor_Req/OpenDoor_Req_FR/OpenDoor_Req/OpenDoor_Req'
 * '<S149>' : 'Win_Ctrl/Win/WND/WNDMode/OpenDoor_Req/OpenDoor_Req_RL/OpenDoor_Req'
 * '<S150>' : 'Win_Ctrl/Win/WND/WNDMode/OpenDoor_Req/OpenDoor_Req_RL/OpenDoor_Req/OpenDoor_Req'
 * '<S151>' : 'Win_Ctrl/Win/WND/WNDMode/OpenDoor_Req/OpenDoor_Req_RR/OpenDoor_Req'
 * '<S152>' : 'Win_Ctrl/Win/WND/WNDMode/OpenDoor_Req/OpenDoor_Req_RR/OpenDoor_Req/OpenDoor_Req'
 * '<S153>' : 'Win_Ctrl/Win/WND/WNDMode/Outside_Req/Outside_Req_FL'
 * '<S154>' : 'Win_Ctrl/Win/WND/WNDMode/Outside_Req/Outside_Req_FR'
 * '<S155>' : 'Win_Ctrl/Win/WND/WNDMode/Outside_Req/Outside_Req_RL'
 * '<S156>' : 'Win_Ctrl/Win/WND/WNDMode/Outside_Req/Outside_Req_RR'
 * '<S157>' : 'Win_Ctrl/Win/WND/WNDMode/Outside_Req/Outside_Req_FL/Outside_Req'
 * '<S158>' : 'Win_Ctrl/Win/WND/WNDMode/Outside_Req/Outside_Req_FL/Outside_Req/Outside_Req'
 * '<S159>' : 'Win_Ctrl/Win/WND/WNDMode/Outside_Req/Outside_Req_FR/Outside_Req'
 * '<S160>' : 'Win_Ctrl/Win/WND/WNDMode/Outside_Req/Outside_Req_FR/Outside_Req/Outside_Req'
 * '<S161>' : 'Win_Ctrl/Win/WND/WNDMode/Outside_Req/Outside_Req_RL/Outside_Req'
 * '<S162>' : 'Win_Ctrl/Win/WND/WNDMode/Outside_Req/Outside_Req_RL/Outside_Req/Outside_Req'
 * '<S163>' : 'Win_Ctrl/Win/WND/WNDMode/Outside_Req/Outside_Req_RR/Outside_Req'
 * '<S164>' : 'Win_Ctrl/Win/WND/WNDMode/Outside_Req/Outside_Req_RR/Outside_Req/Outside_Req'
 * '<S165>' : 'Win_Ctrl/Win/WND/WNDMode/Special_Mode/Special_Mode_FLReq'
 * '<S166>' : 'Win_Ctrl/Win/WND/WNDMode/Special_Mode/Special_Mode_FRReq'
 * '<S167>' : 'Win_Ctrl/Win/WND/WNDMode/Special_Mode/Special_Mode_RLReq'
 * '<S168>' : 'Win_Ctrl/Win/WND/WNDMode/Special_Mode/Special_Mode_RRReq'
 * '<S169>' : 'Win_Ctrl/Win/WND/WNDMode/Special_Mode/Special_Mode_FLReq/Special_Mode_Req'
 * '<S170>' : 'Win_Ctrl/Win/WND/WNDMode/Special_Mode/Special_Mode_FRReq/Special_Mode_Req'
 * '<S171>' : 'Win_Ctrl/Win/WND/WNDMode/Special_Mode/Special_Mode_RLReq/Special_Mode_Req'
 * '<S172>' : 'Win_Ctrl/Win/WND/WNDMode/Special_Mode/Special_Mode_RRReq/Special_Mode_Req'
 * '<S173>' : 'Win_Ctrl/Win/WNDPreProcess/Percent Transform'
 * '<S174>' : 'Win_Ctrl/Win/WNDPreProcess/SwStuck'
 * '<S175>' : 'Win_Ctrl/Win/WNDPreProcess/SwStuck/DriverSideSwStuck'
 * '<S176>' : 'Win_Ctrl/Win/WNDPreProcess/SwStuck/LocalSwStuck'
 * '<S177>' : 'Win_Ctrl/Win/WNDPreProcess/SwStuck/DriverSideSwStuck/DriverSide_FLSwStuck'
 * '<S178>' : 'Win_Ctrl/Win/WNDPreProcess/SwStuck/DriverSideSwStuck/DriverSide_FRSwStuck'
 * '<S179>' : 'Win_Ctrl/Win/WNDPreProcess/SwStuck/DriverSideSwStuck/DriverSide_RLSwStuck'
 * '<S180>' : 'Win_Ctrl/Win/WNDPreProcess/SwStuck/DriverSideSwStuck/DriverSide_RRSwStuck'
 * '<S181>' : 'Win_Ctrl/Win/WNDPreProcess/SwStuck/LocalSwStuck/FRLocalWin_SwStuck'
 * '<S182>' : 'Win_Ctrl/Win/WNDPreProcess/SwStuck/LocalSwStuck/RLLocalWin_SwStuck'
 * '<S183>' : 'Win_Ctrl/Win/WNDPreProcess/SwStuck/LocalSwStuck/RRLocalWin_SwStuck'
 */
#endif                                 /* RTW_HEADER_Win_Ctrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
