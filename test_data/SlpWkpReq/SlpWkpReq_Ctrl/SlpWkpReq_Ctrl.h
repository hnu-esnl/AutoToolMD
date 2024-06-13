/*
 * File: SlpWkpReq_Ctrl.h
 *
 * Code generated for Simulink model 'SlpWkpReq_Ctrl'.
 *
 * Model version                  : 1.63
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Nov  1 16:36:23 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Renesas->V850
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SlpWkpReq_Ctrl_h_
#define RTW_HEADER_SlpWkpReq_Ctrl_h_
#ifndef SlpWkpReq_Ctrl_COMMON_INCLUDES_
# define SlpWkpReq_Ctrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_SlpWkpReq_Ctrl.h"
#endif                                 /* SlpWkpReq_Ctrl_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#include "APP_CFG.h"
#include "ModeM.h"

/* Block states (default storage) for system '<S5>/HWAllowSleepDelay_Local' */
typedef struct {
  uint32 u32HWAllowSleep_Temp1[2];     /* '<S5>/HWAllowSleepDelay_Local' */
  uint32 u32HWAllowSleep_Temp2[2];     /* '<S5>/HWAllowSleepDelay_Local' */
  uint32 temporalCounter_i1;           /* '<S5>/HWAllowSleepDelay_Local' */
  uint32 temporalCounter_i2;           /* '<S5>/HWAllowSleepDelay_Local' */
  uint8 is_active_c10_SlpWkpReq_Ctrl;  /* '<S5>/HWAllowSleepDelay_Local' */
  uint8 is_Timing1;                    /* '<S5>/HWAllowSleepDelay_Local' */
  uint8 is_Timing2;                    /* '<S5>/HWAllowSleepDelay_Local' */
  boolean bTimingFlag1;                /* '<S5>/HWAllowSleepDelay_Local' */
  boolean bTimingFlag2;                /* '<S5>/HWAllowSleepDelay_Local' */
  boolean bNoZeroFlag1;                /* '<S5>/HWAllowSleepDelay_Local' */
  boolean bNoZeroFlag2;                /* '<S5>/HWAllowSleepDelay_Local' */
} DW_HWAllowSleepDelay_Local_Sl_T;

/* Block signals (default storage) */
typedef struct tag_B_SlpWkpReq_Ctrl_T {
  uint32 WakeupSource_o3;              /* '<S44>/WakeupSource' */
  uint32 u32HWAllowSleep_Local[2];     /* '<S5>/HWJudgeAllowSleep' */
  uint32 u32HWAllowSleep_PNCGlobal[2]; /* '<S5>/HWJudgeAllowSleep' */
  uint32 u32HWAllowSleep_PNCCharging[2];/* '<S5>/HWJudgeAllowSleep' */
  uint16 WakeupSource_o2;              /* '<S44>/WakeupSource' */
  uint8 WakeupSource_o1;               /* '<S44>/WakeupSource' */
  uint8 u8HWWakeup_PNCGlobal_Out;      /* '<S5>/HWWakeUpDelay_PNC' */
  uint8 u8HWWakeup_PNCCharging_Out;    /* '<S5>/HWWakeUpDelay_PNC' */
  uint8 u8HWWakeup_PNCGlobal;          /* '<S5>/HWJudgeWakeup' */
  boolean FixPtRelationalOperator_l;   /* '<S25>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_ad;  /* '<S32>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_b;   /* '<S31>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_k;   /* '<S35>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_eb;  /* '<S34>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_od;  /* '<S33>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_c;   /* '<S36>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_kk;  /* '<S28>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_h;   /* '<S27>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_i;   /* '<S29>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_dp;  /* '<S30>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_g;   /* '<S23>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_iy;  /* '<S17>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_ab;  /* '<S16>/FixPt Relational Operator' */
  boolean FixPtRelationalOperator_p;   /* '<S26>/FixPt Relational Operator' */
} B_SlpWkpReq_Ctrl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_SlpWkpReq_Ctrl_T {
  uint32 temporalCounter_i1;           /* '<S5>/HWWakeUpDelay_PNC' */
  uint32 temporalCounter_i2;           /* '<S5>/HWWakeUpDelay_PNC' */
  boolean DelayInput1_DSTATE;          /* '<S18>/Delay Input1' */
  boolean DelayInput1_DSTATE_j;        /* '<S20>/Delay Input1' */
  boolean DelayInput1_DSTATE_h;        /* '<S19>/Delay Input1' */
  boolean DelayInput1_DSTATE_g;        /* '<S22>/Delay Input1' */
  boolean DelayInput1_DSTATE_a;        /* '<S21>/Delay Input1' */
  boolean DelayInput1_DSTATE_k;        /* '<S24>/Delay Input1' */
  boolean DelayInput1_DSTATE_n;        /* '<S25>/Delay Input1' */
  boolean DelayInput1_DSTATE_l;        /* '<S32>/Delay Input1' */
  boolean DelayInput1_DSTATE_p;        /* '<S31>/Delay Input1' */
  boolean DelayInput1_DSTATE_lt;       /* '<S35>/Delay Input1' */
  boolean DelayInput1_DSTATE_jr;       /* '<S34>/Delay Input1' */
  boolean DelayInput1_DSTATE_d;        /* '<S33>/Delay Input1' */
  boolean DelayInput1_DSTATE_c;        /* '<S36>/Delay Input1' */
  boolean DelayInput1_DSTATE_dn;       /* '<S28>/Delay Input1' */
  boolean DelayInput1_DSTATE_di;       /* '<S27>/Delay Input1' */
  boolean DelayInput1_DSTATE_d4;       /* '<S29>/Delay Input1' */
  boolean DelayInput1_DSTATE_e;        /* '<S30>/Delay Input1' */
  boolean DelayInput1_DSTATE_i;        /* '<S23>/Delay Input1' */
  boolean DelayInput1_DSTATE_lg;       /* '<S17>/Delay Input1' */
  boolean DelayInput1_DSTATE_m;        /* '<S16>/Delay Input1' */
  boolean DelayInput1_DSTATE_e5;       /* '<S26>/Delay Input1' */
  boolean DelayInput1_DSTATE_do;       /* '<S15>/Delay Input1' */
  boolean DelayInput1_DSTATE_ny;       /* '<S14>/Delay Input1' */
  boolean DelayInput1_DSTATE_j4;       /* '<S13>/Delay Input1' */
  uint8 is_active_c17_SlpWkpReq_Ctrl;  /* '<S5>/HWWakeUpDelay_PNC' */
  uint8 is_PNC_Global;                 /* '<S5>/HWWakeUpDelay_PNC' */
  uint8 is_PNC_Charging;               /* '<S5>/HWWakeUpDelay_PNC' */
  uint8 u8HWWakeup_PNCGlobal_prev;     /* '<S5>/HWWakeUpDelay_PNC' */
  uint8 u8HWWakeup_PNCGlobal_start;    /* '<S5>/HWWakeUpDelay_PNC' */
  uint8 u8HWWakeup_PNCCharging_prev;   /* '<S5>/HWWakeUpDelay_PNC' */
  uint8 u8HWWakeup_PNCCharging_start;  /* '<S5>/HWWakeUpDelay_PNC' */
  uint8 is_active_c13_SlpWkpReq_Ctrl;  /* '<S5>/HWJudgeWakeup' */
  uint8 is_c13_SlpWkpReq_Ctrl;         /* '<S5>/HWJudgeWakeup' */
  uint8 is_active_c4_SlpWkpReq_Ctrl;   /* '<S5>/HWJudgeAllowSleep' */
  DW_HWAllowSleepDelay_Local_Sl_T sf_HWAllowSleepDelay_PNCGlobal;/* '<S5>/HWAllowSleepDelay_PNCGlobal' */
  DW_HWAllowSleepDelay_Local_Sl_T sf_HWAllowSleepDelay_PNCChargin;/* '<S5>/HWAllowSleepDelay_PNCCharging' */
  DW_HWAllowSleepDelay_Local_Sl_T sf_HWAllowSleepDelay_Local;/* '<S5>/HWAllowSleepDelay_Local' */
} DW_SlpWkpReq_Ctrl_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S5>/u32Timer1BitValue_Local'
   *   '<S5>/u32Timer2BitValue_Local'
   *   '<S5>/u32Timer2BitValue_PNCCharging'
   */
  uint32 pooled1[2];

  /* Computed Parameter: u32Timer1BitValue_PNCGlobal_Val
   * Referenced by: '<S5>/u32Timer1BitValue_PNCGlobal'
   */
  uint32 u32Timer1BitValue_PNCGlobal_Val[2];

  /* Computed Parameter: u32Timer2BitValue_PNCGlobal_Val
   * Referenced by: '<S5>/u32Timer2BitValue_PNCGlobal'
   */
  uint32 u32Timer2BitValue_PNCGlobal_Val[2];

  /* Computed Parameter: u32Timer1BitValue_PNCCharging_V
   * Referenced by: '<S5>/u32Timer1BitValue_PNCCharging'
   */
  uint32 u32Timer1BitValue_PNCCharging_V[2];
} ConstP_SlpWkpReq_Ctrl_T;

/* Block signals (default storage) */
extern B_SlpWkpReq_Ctrl_T SlpWkpReq_Ctrl_B;

/* Block states (default storage) */
extern DW_SlpWkpReq_Ctrl_T SlpWkpReq_Ctrl_DW;

/* Constant parameters (default storage) */
extern const ConstP_SlpWkpReq_Ctrl_T SlpWkpReq_Ctrl_ConstP;

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
 * '<Root>' : 'SlpWkpReq_Ctrl'
 * '<S1>'   : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl'
 * '<S2>'   : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/ASW'
 * '<S3>'   : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/ASWJudge'
 * '<S4>'   : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI'
 * '<S5>'   : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWJudge'
 * '<S6>'   : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/ModeM'
 * '<S7>'   : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/SACSourceMerge'
 * '<S8>'   : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/ASWJudge/ASWAllowSleep_Local'
 * '<S9>'   : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/ASWJudge/ASWAllowSleep_PNCCharging'
 * '<S10>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/ASWJudge/ASWAllowSleep_PNCGlobal'
 * '<S11>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/ASWJudge/ASWWakeUp_Charging'
 * '<S12>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/ASWJudge/ASWWakeUp_Global'
 * '<S13>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/DcChrgrPileU1_bVoltLvl_DetectRising'
 * '<S14>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/DcChrgrPileU2_bVoltLvl_DetectRising'
 * '<S15>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/DcChrgrPileU3_bVoltLvl_DetectRising'
 * '<S16>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/LvElecEgyMngt_bSOCTWakeUp_DetectRising'
 * '<S17>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gDoor_bChrgCapAjarSt_DetectChange'
 * '<S18>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gDoor_bFuelFlapAjarSt_DetectChange'
 * '<S19>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gDoor_bRLDoorAjarSt_DetectFalling'
 * '<S20>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gDoor_bRLDoorAjarSt_DetectRising'
 * '<S21>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gDoor_bRRDoorAjarSt_DetectFalling'
 * '<S22>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gDoor_bRRDoorAjarSt_DetectRising'
 * '<S23>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gLock_bChrgCapSwt_DetectChange'
 * '<S24>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gLock_bRLDoorLockFbSt_DetectChange'
 * '<S25>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gLock_bRRDoorLockFbSt_DetectChange'
 * '<S26>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gPLG_bIntUnlockSwt_DetectChange'
 * '<S27>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gPLG_bLatchAjarSwSt_DetectFalling'
 * '<S28>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gPLG_bLatchAjarSwSt_DetectRising'
 * '<S29>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gPLG_bLatchHALFSwSt_DetectChange'
 * '<S30>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gPLG_bLatchNTLSwSt_DetectChange'
 * '<S31>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gSuctnDoor_bRLInPwrRelsSwt_DetectChange'
 * '<S32>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gSuctnDoor_bRLSecLockFbSt_DetectChange'
 * '<S33>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gSuctnDoor_bRRInPwrRlesSwt_DetectChange'
 * '<S34>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gSuctnDoor_bRRSecLockFbSt_DetectChange'
 * '<S35>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gWin_bRLOutSideDoorSwFlg_DetectChange'
 * '<S36>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWI/gWin_bRROutSideDoorSwFlg_DetectChange'
 * '<S37>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWJudge/HWAllowSleepDelay_Local'
 * '<S38>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWJudge/HWAllowSleepDelay_PNCCharging'
 * '<S39>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWJudge/HWAllowSleepDelay_PNCGlobal'
 * '<S40>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWJudge/HWJudgeAllowSleep'
 * '<S41>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWJudge/HWJudgeWakeup'
 * '<S42>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/HWJudge/HWWakeUpDelay_PNC'
 * '<S43>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/ModeM/ModeMInputs'
 * '<S44>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/ModeM/ModeMInputs/WakeupSource'
 * '<S45>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/SACSourceMerge/AllowSleepArb_Charging'
 * '<S46>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/SACSourceMerge/AllowSleepArb_Global'
 * '<S47>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/SACSourceMerge/AllowSleepArb_Local'
 * '<S48>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/SACSourceMerge/WakeupArb_Charging'
 * '<S49>'  : 'SlpWkpReq_Ctrl/SlpWkpReq_Ctrl/SACSourceMerge/WakeupArb_Global'
 */
#endif                                 /* RTW_HEADER_SlpWkpReq_Ctrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
