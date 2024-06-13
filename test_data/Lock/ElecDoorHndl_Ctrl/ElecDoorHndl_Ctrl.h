/*
 * File: ElecDoorHndl_Ctrl.h
 *
 * Code generated for Simulink model 'ElecDoorHndl_Ctrl'.
 *
 * Model version                  : 1.6620
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Oct 23 12:41:53 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: NEC->V850
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ElecDoorHndl_Ctrl_h_
#define RTW_HEADER_ElecDoorHndl_Ctrl_h_
#ifndef ElecDoorHndl_Ctrl_COMMON_INCLUDES_
# define ElecDoorHndl_Ctrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_ElecDoorHndl_Ctrl.h"
#endif                                 /* ElecDoorHndl_Ctrl_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "APP_CFG.h"

/* Block states (default storage) for system '<S13>/HallSupplyOutput' */
typedef struct {
  uint8 is_active_c17_ElecDoorHndl_Ctrl;/* '<S13>/HallSupplyOutput' */
  uint8 is_c17_ElecDoorHndl_Ctrl;      /* '<S13>/HallSupplyOutput' */
  uint8 is_IDEL;                       /* '<S13>/HallSupplyOutput' */
  uint8 temporalCounter_i1;            /* '<S13>/HallSupplyOutput' */
} rtDW_HallSupplyOutput_ElecDoorH;

/* Block states (default storage) for system '<S14>/MotorOutput' */
typedef struct {
  uint32 u32FoldTimeOutCnt;            /* '<S14>/MotorOutput' */
  uint32 temporalCounter_i1;           /* '<S14>/MotorOutput' */
  uint8 is_active_c5_ElecDoorHndl_Ctrl;/* '<S14>/MotorOutput' */
  uint8 is_c5_ElecDoorHndl_Ctrl;       /* '<S14>/MotorOutput' */
  uint8 is_Motor_Reverse;              /* '<S14>/MotorOutput' */
  uint8 is_Motor_Drive;                /* '<S14>/MotorOutput' */
  uint8 u8DoorHandleReq_prev;          /* '<S14>/MotorOutput' */
  uint8 u8DoorHandleReq_start;         /* '<S14>/MotorOutput' */
  boolean ReUnfoldFlag;                /* '<S14>/MotorOutput' */
  boolean ReFoldFlag;                  /* '<S14>/MotorOutput' */
  boolean ReEmergencyUnfold;           /* '<S14>/MotorOutput' */
} rtDW_MotorOutput_ElecDoorHndl_C;

/* Block states (default storage) for system '<S17>/CurrentPosition' */
typedef struct {
  uint16 gASI_u16HallCntSTD;           /* '<S17>/CurrentPosition' */
  uint8 u8HallDirction_prev;           /* '<S17>/CurrentPosition' */
  uint8 u8HallDirction_start;          /* '<S17>/CurrentPosition' */
  boolean doneDoubleBufferReInit;      /* '<S17>/CurrentPosition' */
  boolean bFirstRun;                   /* '<S17>/CurrentPosition' */
} rtDW_CurrentPosition_ElecDoorHn;

/* Block states (default storage) for system '<S19>/LimitPositionLearn' */
typedef struct {
  uint8 is_active_c28_ElecDoorHndl_Ctrl;/* '<S19>/LimitPositionLearn' */
  uint8 is_c28_ElecDoorHndl_Ctrl;      /* '<S19>/LimitPositionLearn' */
  uint8 u8BigEndPosLearnCnt;           /* '<S19>/LimitPositionLearn' */
  uint8 u8LittleEndPosLearnCnt;        /* '<S19>/LimitPositionLearn' */
  uint8 temporalCounter_i1;            /* '<S19>/LimitPositionLearn' */
  uint8 u8DefaultValueWrtCnt_prev;     /* '<S19>/LimitPositionLearn' */
  uint8 u8DefaultValueWrtCnt_start;    /* '<S19>/LimitPositionLearn' */
  boolean bPosRecover;                 /* '<S19>/LimitPositionLearn' */
  boolean bMotorStallFlag_prev;        /* '<S19>/LimitPositionLearn' */
  boolean bMotorStallFlag_start;       /* '<S19>/LimitPositionLearn' */
} rtDW_LimitPositionLearn_ElecDoo;

/* Block states (default storage) for system '<S20>/LimitPositionProcess' */
typedef struct {
  uint8 u8PosLearnReq_prev;            /* '<S20>/LimitPositionProcess' */
  uint8 u8PosLearnReq_start;           /* '<S20>/LimitPositionProcess' */
  boolean doneDoubleBufferReInit;      /* '<S20>/LimitPositionProcess' */
} rtDW_LimitPositionProcess_ElecD;

/* Block states (default storage) for system '<S21>/FLDoorLockReq' */
typedef struct {
  boolean bFirstRun;                   /* '<S21>/FLDoorLockReq' */
} rtDW_FLDoorLockReq_ElecDoorHndl;

/* Block states (default storage) for system '<S23>/PositionEEP' */
typedef struct {
  boolean doneDoubleBufferReInit;      /* '<S23>/PositionEEP' */
  boolean bHallSupplyOutput_FB_prev;   /* '<S23>/PositionEEP' */
  boolean bHallSupplyOutput_FB_start;  /* '<S23>/PositionEEP' */
} rtDW_PositionEEP_ElecDoorHndl_C;

/* Block states (default storage) for system '<S24>/PositionLearnSts' */
typedef struct {
  boolean bFirstRun;                   /* '<S24>/PositionLearnSts' */
} rtDW_PositionLearnSts_ElecDoorH;

/* Block signals (default storage) */
typedef struct tag_BlockIO_ElecDoorHndl_Ctrl {
  uint16 gVRM_u16BatteryVolt_mv;       /* '<Root>/gVRM_u16BatteryVolt_mv' */
  uint16 u16MotorStallCnt;             /* '<S43>/MotorStuck' */
  uint16 u16StopBigEndPosBuffer;       /* '<S52>/LimitPositionLearn' */
  uint16 u16StopLittleEndPosBuffer;    /* '<S52>/LimitPositionLearn' */
  uint16 u16Position_CUR;              /* '<S50>/CurrentPosition' */
  uint16 u16MotorStallCnt_i;           /* '<S10>/MotorStuck' */
  uint16 u16StopBigEndPosBuffer_c;     /* '<S19>/LimitPositionLearn' */
  uint16 u16StopLittleEndPosBuffer_p;  /* '<S19>/LimitPositionLearn' */
  uint16 u16Position_CUR_j;            /* '<S17>/CurrentPosition' */
  uint8 Switch;                        /* '<S37>/Switch' */
  uint8 Delay1;                        /* '<S5>/Delay1' */
  uint8 Delay4;                        /* '<S9>/Delay4' */
  uint8 gPRM_u8tDoorHandleForceCfg;    /* '<Root>/gPRM_u8tDoorHandleForceCfg' */
  uint8 gPRM_u8tDoorHandleEmergencyCfg;/* '<Root>/gPRM_u8tDoorHandleEmergencyCfg' */
  uint8 gPRM_u8tDoorHandleSoftStopCfg; /* '<Root>/gPRM_u8tDoorHandleSoftStopCfg' */
  uint8 gPRM_u8tDoorHandleTimeOutCfg;  /* '<Root>/gPRM_u8tDoorHandleTimeOutCfg' */
  uint8 Delay1_g;                      /* '<S39>/Delay1' */
  uint8 Switch_m;                      /* '<S70>/Switch' */
  uint8 Delay4_e;                      /* '<S42>/Delay4' */
  uint8 u8DefaultValueWrtCnt;          /* '<S57>/PositionLearnSts' */
  uint8 u8PosEEPWrtCnt;                /* '<S56>/PositionEEP' */
  uint8 temp_u8DoorHandlePosition;     /* '<S54>/FLDoorLockReq' */
  uint8 u8DoorHandleZoneState;         /* '<S54>/FLDoorLockReq' */
  uint8 u8HardStopBigEndPosEEPWrtCnt;  /* '<S53>/LimitPositionProcess' */
  uint8 u8HardStopLittleEndPosEEPWrtCnt;/* '<S53>/LimitPositionProcess' */
  uint8 u8PosLearnReq;                 /* '<S52>/LimitPositionLearn' */
  uint8 u8HallDirction;                /* '<S51>/HallDirction' */
  uint8 u8MotorRunningSts;             /* '<S47>/MotorOutput' */
  uint8 u8MotorOutput;                 /* '<S47>/MotorOutput' */
  uint8 u8MotorTargetSpeed;            /* '<S47>/MotorOutput' */
  uint8 u8DefaultValueWrtCnt_g;        /* '<S24>/PositionLearnSts' */
  uint8 u8PosEEPWrtCnt_g;              /* '<S23>/PositionEEP' */
  uint8 temp_u8DoorHandlePosition_a;   /* '<S21>/FLDoorLockReq' */
  uint8 u8DoorHandleZoneState_n;       /* '<S21>/FLDoorLockReq' */
  uint8 u8HardStopBigEndPosEEPWrtCnt_k;/* '<S20>/LimitPositionProcess' */
  uint8 u8HardStopLittleEndPosEEPWrtC_m;/* '<S20>/LimitPositionProcess' */
  uint8 u8PosLearnReq_f;               /* '<S19>/LimitPositionLearn' */
  uint8 u8HallDirction_c;              /* '<S18>/HallDirction' */
  uint8 u8MotorRunningSts_i;           /* '<S14>/MotorOutput' */
  uint8 u8MotorOutput_a;               /* '<S14>/MotorOutput' */
  uint8 u8MotorTargetSpeed_o;          /* '<S14>/MotorOutput' */
  boolean bMotorStallFlag;             /* '<S43>/MotorStuck' */
  boolean bPosInitSts;                 /* '<S57>/PositionLearnSts' */
  boolean bBigEndPosInitSts;           /* '<S57>/PositionLearnSts' */
  boolean bLittleEndPosInitSts;        /* '<S57>/PositionLearnSts' */
  boolean bHallSupplyOutput;           /* '<S46>/HallSupplyOutput' */
  boolean bMotorStallFlag_f;           /* '<S10>/MotorStuck' */
  boolean bPosInitSts_b;               /* '<S24>/PositionLearnSts' */
  boolean bBigEndPosInitSts_a;         /* '<S24>/PositionLearnSts' */
  boolean bLittleEndPosInitSts_n;      /* '<S24>/PositionLearnSts' */
  boolean bHallSupplyOutput_n;         /* '<S13>/HallSupplyOutput' */
} BlockIO_ElecDoorHndl_Ctrl;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_D_Work_ElecDoorHndl_Ctrl {
  uint16 gASI_u16HallWidth;            /* '<S3>/Data Store Memory1' */
  uint16 gEDH_u16RRHallWidth;          /* '<S4>/Data Store Memory1' */
  uint16 gASI_u16HallCnt_prev;         /* '<S43>/MotorStuck' */
  uint16 gASI_u16HallCnt_start;        /* '<S43>/MotorStuck' */
  uint16 gASI_u16HallCnt_prev_l;       /* '<S10>/MotorStuck' */
  uint16 gASI_u16HallCnt_start_m;      /* '<S10>/MotorStuck' */
  uint8 Delay4_DSTATE;                 /* '<S9>/Delay4' */
  uint8 Delay4_DSTATE_l;               /* '<S42>/Delay4' */
  uint8 gASI_u8MotorErrorSts;          /* '<S3>/Data Store Memory2' */
  uint8 gDiag_u8RRDoorHandleHallErrorFl;/* '<S4>/Data Store Memory2' */
  uint8 is_active_c14_ElecDoorHndl_Ctrl;/* '<S43>/MotorStuck' */
  uint8 is_c14_ElecDoorHndl_Ctrl;      /* '<S43>/MotorStuck' */
  uint8 is_active_c19_ElecDoorHndl_Ctrl;/* '<S10>/MotorStuck' */
  uint8 is_c19_ElecDoorHndl_Ctrl;      /* '<S10>/MotorStuck' */
  rtDW_PositionLearnSts_ElecDoorH sf_PositionLearnSts_n;/* '<S57>/PositionLearnSts' */
  rtDW_PositionEEP_ElecDoorHndl_C sf_PositionEEP_o;/* '<S56>/PositionEEP' */
  rtDW_FLDoorLockReq_ElecDoorHndl sf_FLDoorLockReq_cc;/* '<S54>/FLDoorLockReq' */
  rtDW_LimitPositionProcess_ElecD sf_LimitPositionProcess_p;/* '<S53>/LimitPositionProcess' */
  rtDW_LimitPositionLearn_ElecDoo sf_LimitPositionLearn_g;/* '<S52>/LimitPositionLearn' */
  rtDW_CurrentPosition_ElecDoorHn sf_CurrentPosition_l;/* '<S50>/CurrentPosition' */
  rtDW_MotorOutput_ElecDoorHndl_C sf_MotorOutput_j;/* '<S47>/MotorOutput' */
  rtDW_HallSupplyOutput_ElecDoorH sf_HallSupplyOutput_b;/* '<S46>/HallSupplyOutput' */
  rtDW_PositionLearnSts_ElecDoorH sf_PositionLearnSts;/* '<S24>/PositionLearnSts' */
  rtDW_PositionEEP_ElecDoorHndl_C sf_PositionEEP;/* '<S23>/PositionEEP' */
  rtDW_FLDoorLockReq_ElecDoorHndl sf_FLDoorLockReq;/* '<S21>/FLDoorLockReq' */
  rtDW_LimitPositionProcess_ElecD sf_LimitPositionProcess;/* '<S20>/LimitPositionProcess' */
  rtDW_LimitPositionLearn_ElecDoo sf_LimitPositionLearn;/* '<S19>/LimitPositionLearn' */
  rtDW_CurrentPosition_ElecDoorHn sf_CurrentPosition;/* '<S17>/CurrentPosition' */
  rtDW_MotorOutput_ElecDoorHndl_C sf_MotorOutput;/* '<S14>/MotorOutput' */
  rtDW_HallSupplyOutput_ElecDoorH sf_HallSupplyOutput;/* '<S13>/HallSupplyOutput' */
} D_Work_ElecDoorHndl_Ctrl;

/* Invariant block signals (default storage) */
typedef struct {
  const uint32 Switch2;                /* '<S25>/Switch2' */
  uint32 Constant12;                   /* '<S5>/Constant12' */
  const uint32 Switch2_c;              /* '<S58>/Switch2' */
} ConstBlockIO_ElecDoorHndl_Ctrl;

/* Block signals (default storage) */
extern BlockIO_ElecDoorHndl_Ctrl ElecDoorHndl_Ctrl_B;

/* Block states (default storage) */
extern D_Work_ElecDoorHndl_Ctrl ElecDoorHndl_Ctrl_DWork;
extern const ConstBlockIO_ElecDoorHndl_Ctrl ElecDoorHndl_Ctrl_ConstB;/* constant block i/o */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/Constant1' : Unused code path elimination
 * Block '<S5>/Constant10' : Unused code path elimination
 * Block '<S5>/Constant2' : Unused code path elimination
 * Block '<S5>/Constant7' : Unused code path elimination
 * Block '<S5>/Constant8' : Unused code path elimination
 * Block '<S5>/Delay2' : Unused code path elimination
 * Block '<S5>/Delay7' : Unused code path elimination
 * Block '<S12>/Compare' : Unused code path elimination
 * Block '<S12>/Constant' : Unused code path elimination
 * Block '<S7>/Constant2' : Unused code path elimination
 * Block '<S7>/Constant4' : Unused code path elimination
 * Block '<S7>/Logical Operator1' : Unused code path elimination
 * Block '<S7>/Relational Operator3' : Unused code path elimination
 * Block '<S7>/Relational Operator4' : Unused code path elimination
 * Block '<S4>/Constant1' : Unused code path elimination
 * Block '<S39>/Constant10' : Unused code path elimination
 * Block '<S39>/Constant2' : Unused code path elimination
 * Block '<S39>/Constant7' : Unused code path elimination
 * Block '<S39>/Constant8' : Unused code path elimination
 * Block '<S39>/Delay2' : Unused code path elimination
 * Block '<S39>/Delay7' : Unused code path elimination
 * Block '<S45>/Compare' : Unused code path elimination
 * Block '<S45>/Constant' : Unused code path elimination
 * Block '<S40>/Constant2' : Unused code path elimination
 * Block '<S40>/Constant4' : Unused code path elimination
 * Block '<S40>/Logical Operator1' : Unused code path elimination
 * Block '<S40>/Relational Operator3' : Unused code path elimination
 * Block '<S40>/Relational Operator4' : Unused code path elimination
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
 * '<Root>' : 'ElecDoorHndl_Ctrl'
 * '<S1>'   : 'ElecDoorHndl_Ctrl/Subsystem'
 * '<S2>'   : 'ElecDoorHndl_Ctrl/Subsystem/AllowSleep_Local'
 * '<S3>'   : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem'
 * '<S4>'   : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem'
 * '<S5>'   : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input'
 * '<S6>'   : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/AllowSleep_Local'
 * '<S7>'   : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorDriverEn'
 * '<S8>'   : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorOutput2'
 * '<S9>'   : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition'
 * '<S10>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorStuck'
 * '<S11>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/Output2'
 * '<S12>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorDriverEn/Compare To Zero'
 * '<S13>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorOutput2/HallSupplyOutput'
 * '<S14>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorOutput2/MotorOutput1'
 * '<S15>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorOutput2/HallSupplyOutput/HallSupplyOutput'
 * '<S16>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorOutput2/MotorOutput1/MotorOutput'
 * '<S17>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/CurrentPosition'
 * '<S18>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/HallDirction'
 * '<S19>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/LimitPositionLearn'
 * '<S20>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/LimitPositionProcess'
 * '<S21>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/Output3'
 * '<S22>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/PositionDistance'
 * '<S23>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/PositionEEP'
 * '<S24>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/PositionLearnSts'
 * '<S25>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/PositionReduced'
 * '<S26>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/PositionZone'
 * '<S27>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/CurrentPosition/CurrentPosition'
 * '<S28>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/HallDirction/HallDirction'
 * '<S29>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/LimitPositionLearn/LimitPositionLearn'
 * '<S30>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/LimitPositionProcess/LimitPositionProcess'
 * '<S31>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/Output3/FLDoorLockReq'
 * '<S32>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/PositionDistance/PositionDistance'
 * '<S33>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/PositionEEP/PositionEEP'
 * '<S34>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/PositionLearnSts/PositionLearnSts'
 * '<S35>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorPosition/PositionZone/PositionZone'
 * '<S36>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/MotorStuck/MotorStuck'
 * '<S37>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/Output2/EDH_Ctrl2F'
 * '<S38>'  : 'ElecDoorHndl_Ctrl/Subsystem/RLLockSystem/Input/Output2/FLDoorLockReq'
 * '<S39>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input'
 * '<S40>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorDriverEn'
 * '<S41>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorOutput2'
 * '<S42>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition'
 * '<S43>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorStuck'
 * '<S44>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/Output2'
 * '<S45>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorDriverEn/Compare To Zero'
 * '<S46>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorOutput2/HallSupplyOutput'
 * '<S47>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorOutput2/MotorOutput'
 * '<S48>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorOutput2/HallSupplyOutput/HallSupplyOutput'
 * '<S49>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorOutput2/MotorOutput/MotorOutput'
 * '<S50>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/CurrentPosition'
 * '<S51>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/HallDirction'
 * '<S52>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/LimitPositionLearn'
 * '<S53>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/LimitPositionProcess'
 * '<S54>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/Output3'
 * '<S55>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/PositionDistance'
 * '<S56>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/PositionEEP'
 * '<S57>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/PositionLearnSts'
 * '<S58>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/PositionReduced'
 * '<S59>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/PositionZone'
 * '<S60>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/CurrentPosition/CurrentPosition'
 * '<S61>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/HallDirction/HallDirction'
 * '<S62>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/LimitPositionLearn/LimitPositionLearn'
 * '<S63>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/LimitPositionProcess/LimitPositionProcess'
 * '<S64>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/Output3/FLDoorLockReq'
 * '<S65>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/PositionDistance/PositionDistance'
 * '<S66>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/PositionEEP/PositionEEP'
 * '<S67>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/PositionLearnSts/PositionLearnSts'
 * '<S68>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorPosition/PositionZone/PositionZone'
 * '<S69>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/MotorStuck/MotorStuck'
 * '<S70>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/Output2/EDH_Ctrl2F'
 * '<S71>'  : 'ElecDoorHndl_Ctrl/Subsystem/RRLockSystem/Input/Output2/FLDoorLockReq'
 */

/*-
 * Requirements for '<Root>': ElecDoorHndl_Ctrl
 */
#endif                                 /* RTW_HEADER_ElecDoorHndl_Ctrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
