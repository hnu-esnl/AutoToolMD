/*
 * File: Win_SLC.c
 *
 * Code generated for Simulink model 'Win_SLC'.
 *
 * Model version                  : 1.229
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Oct 28 12:12:13 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Win_SLC.h"
#define b_UP1_AP_EN                    ((uint8)0U)
#define b_SOFTWARE_CIRCLE              (1.0)

/* Named constants for Chart: '<S4>/MotorProtect_FL' */
#define Win_SLC_IN_Dn                  ((uint8)1U)
#define Win_SLC_IN_Init                ((uint8)1U)
#define Win_SLC_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#define Win_SLC_IN_RVS                 ((uint8)2U)
#define Win_SLC_IN_Stop                ((uint8)2U)
#define Win_SLC_IN_Timer               ((uint8)2U)
#define Win_SLC_IN_Up                  ((uint8)3U)
#define Win_SLC_IN_UpDn                ((uint8)3U)

/* Named constants for Chart: '<S6>/Reverse_FL' */
#define Win_SLC_IN_Init_f              ((uint8)1U)
#define Win_SLC_IN_Reverse             ((uint8)2U)

/* Named constants for Chart: '<S6>/StartAtDiffTime' */
#define Win_SLC_IN_START_DISABLE       ((uint8)1U)
#define Win_SLC_IN_START_ENABLE        ((uint8)2U)

/* Block signals (default storage) */
BlockIO_Win_SLC Win_SLC_B;

/* Block states (default storage) */
D_Work_Win_SLC Win_SLC_DWork;
static void Win_SLC_MotorProtect_FL_Init(uint8 *rty_u8OutputReq);
static void Win_SLC_MotorProtect_FL(uint8 rtu_u8OutputSts, uint8
  *rty_u8OutputReq, rtDW_MotorProtect_FL_Win_SLC *localDW);
static void Win_SLC_Reverse_FL_Init(uint8 *rty_gWND_u8ReverseCmd, boolean
  *rty_gDCU_bReverseFlag);
static void Win_SLC_Reverse_FL(boolean rtu_bReverse, boolean rtu_bOverCur,
  boolean rtu_bBDCSoftStopReq, float64 rtu_u16Posi, float64 rtu_bActiveFlg,
  uint8 *rty_gWND_u8ReverseCmd, boolean *rty_gDCU_bReverseFlag,
  rtDW_Reverse_FL_Win_SLC *localDW);

/*
 * System initialize for atomic system:
 *    '<S4>/MotorProtect_FL'
 *    '<S4>/MotorProtect_FR'
 *    '<S4>/MotorProtect_RL'
 *    '<S4>/MotorProtect_RR'
 */
static void Win_SLC_MotorProtect_FL_Init(uint8 *rty_u8OutputReq)
{
  *rty_u8OutputReq = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S4>/MotorProtect_FL'
 *    '<S4>/MotorProtect_FR'
 *    '<S4>/MotorProtect_RL'
 *    '<S4>/MotorProtect_RR'
 */
static void Win_SLC_MotorProtect_FL(uint8 rtu_u8OutputSts, uint8
  *rty_u8OutputReq, rtDW_MotorProtect_FL_Win_SLC *localDW)
{
  boolean guard1 = false;

  /* Chart: '<S4>/MotorProtect_FL' */
  if (localDW->temporalCounter_i1 < 127U) {
    localDW->temporalCounter_i1++;
  }

  localDW->u8OutputSts_prev = localDW->u8OutputSts_start;
  localDW->u8OutputSts_start = rtu_u8OutputSts;

  /* Chart: '<S4>/MotorProtect_FL' */
  if (localDW->is_active_c31_zcu_wnd_lib == 0U) {
    localDW->u8OutputSts_prev = rtu_u8OutputSts;
    localDW->is_active_c31_zcu_wnd_lib = 1U;
    localDW->bDnToUpFlag = false;
    localDW->bUpToDnFlag = false;
    localDW->bUpToRVSFlag = false;
    localDW->is_c31_zcu_wnd_lib = Win_SLC_IN_Stop;
    *rty_u8OutputReq = 0U;
    localDW->is_Stop = Win_SLC_IN_Init;
  } else {
    guard1 = false;
    switch (localDW->is_c31_zcu_wnd_lib) {
     case Win_SLC_IN_Dn:
      if (((localDW->u8OutputSts_prev != localDW->u8OutputSts_start) &&
           (localDW->u8OutputSts_start == 1)) || ((localDW->u8OutputSts_prev !=
            localDW->u8OutputSts_start) && (localDW->u8OutputSts_start == 2)) ||
          ((localDW->u8OutputSts_prev != localDW->u8OutputSts_start) &&
           (localDW->u8OutputSts_start == 0))) {
        localDW->bDnToUpFlag = true;
        localDW->is_c31_zcu_wnd_lib = Win_SLC_IN_Stop;
        *rty_u8OutputReq = 0U;
        localDW->is_Stop = Win_SLC_IN_Init;
      }
      break;

     case Win_SLC_IN_Stop:
      if ((!localDW->bDnToUpFlag) && ((rtu_u8OutputSts == 1) || (rtu_u8OutputSts
            == 2))) {
        localDW->is_RVS = Win_SLC_IN_NO_ACTIVE_CHILD;
        localDW->is_UpDn = Win_SLC_IN_NO_ACTIVE_CHILD;
        localDW->is_Stop = Win_SLC_IN_NO_ACTIVE_CHILD;
        localDW->bDnToUpFlag = false;
        localDW->bUpToDnFlag = false;
        localDW->bUpToRVSFlag = false;
        localDW->is_c31_zcu_wnd_lib = Win_SLC_IN_Up;
        *rty_u8OutputReq = rtu_u8OutputSts;
      } else if (((!localDW->bUpToDnFlag) && ((rtu_u8OutputSts == 3) ||
                   (rtu_u8OutputSts == 4))) || ((!localDW->bUpToRVSFlag) &&
                  (rtu_u8OutputSts == 5))) {
        localDW->is_RVS = Win_SLC_IN_NO_ACTIVE_CHILD;
        localDW->is_UpDn = Win_SLC_IN_NO_ACTIVE_CHILD;
        localDW->is_Stop = Win_SLC_IN_NO_ACTIVE_CHILD;
        localDW->bDnToUpFlag = false;
        localDW->bUpToDnFlag = false;
        localDW->bUpToRVSFlag = false;
        localDW->is_c31_zcu_wnd_lib = Win_SLC_IN_Dn;
        *rty_u8OutputReq = rtu_u8OutputSts;
      } else {
        switch (localDW->is_Stop) {
         case Win_SLC_IN_Init:
          if (localDW->bDnToUpFlag || localDW->bUpToDnFlag) {
            localDW->is_Stop = Win_SLC_IN_UpDn;
            localDW->is_UpDn = Win_SLC_IN_Init;
          } else {
            if (localDW->bUpToRVSFlag) {
              localDW->is_Stop = Win_SLC_IN_RVS;
              localDW->is_RVS = Win_SLC_IN_Init;
            }
          }
          break;

         case Win_SLC_IN_RVS:
          if (localDW->is_RVS == Win_SLC_IN_Init) {
            if (localDW->bUpToRVSFlag) {
              localDW->is_RVS = Win_SLC_IN_Timer;
              localDW->temporalCounter_i1 = 0U;
            }
          } else {
            if (localDW->temporalCounter_i1 >= 10) {
              localDW->bUpToRVSFlag = false;
              localDW->is_RVS = Win_SLC_IN_Init;
            }
          }
          break;

         default:
          if (localDW->is_UpDn == Win_SLC_IN_Init) {
            if (localDW->bDnToUpFlag || localDW->bUpToDnFlag) {
              localDW->is_UpDn = Win_SLC_IN_Timer;
              localDW->temporalCounter_i1 = 0U;
            }
          } else {
            if (localDW->temporalCounter_i1 >= 100) {
              localDW->bDnToUpFlag = false;
              localDW->bUpToDnFlag = false;
              localDW->is_UpDn = Win_SLC_IN_Init;
            }
          }
          break;
        }
      }
      break;

     default:
      if (((localDW->u8OutputSts_prev != localDW->u8OutputSts_start) &&
           (localDW->u8OutputSts_start == 3)) || ((localDW->u8OutputSts_prev !=
            localDW->u8OutputSts_start) && (localDW->u8OutputSts_start == 4)) ||
          ((localDW->u8OutputSts_prev != localDW->u8OutputSts_start) &&
           (localDW->u8OutputSts_start == 0))) {
        localDW->bUpToDnFlag = true;
        guard1 = true;
      } else {
        if ((localDW->u8OutputSts_prev != localDW->u8OutputSts_start) &&
            (localDW->u8OutputSts_start == 5)) {
          localDW->bUpToRVSFlag = true;
          guard1 = true;
        }
      }
      break;
    }

    if (guard1) {
      localDW->is_c31_zcu_wnd_lib = Win_SLC_IN_Stop;
      *rty_u8OutputReq = 0U;
      localDW->is_Stop = Win_SLC_IN_Init;
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S6>/Reverse_FL'
 *    '<S6>/Reverse_FR'
 *    '<S6>/Reverse_RL'
 *    '<S6>/Reverse_RR'
 */
static void Win_SLC_Reverse_FL_Init(uint8 *rty_gWND_u8ReverseCmd, boolean
  *rty_gDCU_bReverseFlag)
{
  *rty_gWND_u8ReverseCmd = 0U;
  *rty_gDCU_bReverseFlag = false;
}

/*
 * Output and update for atomic system:
 *    '<S6>/Reverse_FL'
 *    '<S6>/Reverse_FR'
 *    '<S6>/Reverse_RL'
 *    '<S6>/Reverse_RR'
 */
static void Win_SLC_Reverse_FL(boolean rtu_bReverse, boolean rtu_bOverCur,
  boolean rtu_bBDCSoftStopReq, float64 rtu_u16Posi, float64 rtu_bActiveFlg,
  uint8 *rty_gWND_u8ReverseCmd, boolean *rty_gDCU_bReverseFlag,
  rtDW_Reverse_FL_Win_SLC *localDW)
{
  /* Chart: '<S6>/Reverse_FL' */
  if (localDW->temporalCounter_i1 < 8191U) {
    localDW->temporalCounter_i1++;
  }

  localDW->bReverse_prev = localDW->bReverse_start;
  localDW->bReverse_start = rtu_bReverse;

  /* Chart: '<S6>/Reverse_FL' */
  if (localDW->is_active_c30_zcu_wnd_lib == 0U) {
    localDW->bReverse_prev = rtu_bReverse;
    localDW->is_active_c30_zcu_wnd_lib = 1U;
    localDW->is_c30_zcu_wnd_lib = Win_SLC_IN_Init_f;
    *rty_gWND_u8ReverseCmd = 0U;
    *rty_gDCU_bReverseFlag = false;
  } else if (localDW->is_c30_zcu_wnd_lib == Win_SLC_IN_Init_f) {
    *rty_gWND_u8ReverseCmd = 0U;
    *rty_gDCU_bReverseFlag = false;
    if ((localDW->bReverse_prev != localDW->bReverse_start) &&
        localDW->bReverse_start && (rtu_bActiveFlg == 0.0)) {
      localDW->is_c30_zcu_wnd_lib = Win_SLC_IN_Reverse;
      localDW->temporalCounter_i1 = 0U;
      *rty_gWND_u8ReverseCmd = 5U;
      *rty_gDCU_bReverseFlag = true;
      if (rtu_u16Posi < 65536.0) {
        if (rtu_u16Posi >= 0.0) {
          localDW->u16Posi_prev = (uint16)rtu_u16Posi;
        } else {
          localDW->u16Posi_prev = 0U;
        }
      } else {
        localDW->u16Posi_prev = MAX_uint16_T;
      }
    }
  } else {
    *rty_gWND_u8ReverseCmd = 5U;
    *rty_gDCU_bReverseFlag = true;
    if ((rtu_u16Posi >= (float64)localDW->u16Posi_prev + 630.0) ||
        rtu_bBDCSoftStopReq || rtu_bOverCur || (localDW->temporalCounter_i1 >=
         5000)) {
      /* 防夹反转最多驱动5s */
      localDW->is_c30_zcu_wnd_lib = Win_SLC_IN_Init_f;
      *rty_gWND_u8ReverseCmd = 0U;
      *rty_gDCU_bReverseFlag = false;
    }
  }
}

/* Model step function */
void Win_SLC_Runnable_1ms(void)
{
  /* local block i/o variables */
  uint8 rtb_gWND_u8ReverseCmd;
  uint8 rtb_gWND_u8ReverseCmd_h;
  uint8 rtb_gWND_u8ReverseCmd_a;
  uint8 rtb_gWND_u8ReverseCmd_m;
  boolean rtb_gDCU_bReverseFlag;
  boolean rtb_gDCU_bReverseFlag_k;
  boolean rtb_gDCU_bReverseFlag_m;
  boolean rtb_gDCU_bReverseFlag_b;
  boolean tmpRead;
  boolean tmpRead_0;
  boolean tmpRead_1;
  boolean tmpRead_2;
  float64 tmpRead_3;
  float64 tmpRead_4;
  boolean tmpRead_5;
  boolean tmpRead_6;
  boolean tmpRead_7;
  boolean tmpRead_8;
  float64 tmpRead_9;
  float64 tmpRead_a;
  float64 tmpRead_b;
  float64 tmpRead_c;
  float64 tmpRead_d;
  float64 tmpRead_e;
  uint8 rtb_Switch3;
  uint8 rtb_Switch2;
  uint8 rtb_Switch1;
  uint8 rtb_Switch;
  boolean rtb_Switch_f_idx_0;
  boolean rtb_Switch_f_idx_1;
  boolean rtb_Switch2_j_idx_0;
  boolean rtb_Switch2_j_idx_1;
  boolean rtb_Switch4_idx_0;
  boolean rtb_Switch4_idx_1;
  boolean rtb_Switch6_idx_0;
  boolean rtb_Switch6_idx_1;
  boolean guard1 = false;

  /* Inport: '<Root>/gSLC_bRRActiveFlg' */
  Rte_Read_gSLC_bRRActiveFlg_Val(&tmpRead_e);

  /* Inport: '<Root>/gSLC_u16RRRpPosition' */
  Rte_Read_gSLC_u16RRRpPosition_Val(&tmpRead_d);

  /* Inport: '<Root>/gSLC_bRRBDCSStopReq' */
  Rte_Read_gSLC_bRRBDCSStopReq_Val(&rtb_Switch_f_idx_0);

  /* Inport: '<Root>/gSLC_u8RRCurrtFixFlg' */
  Rte_Read_gSLC_u8RRCurrtFixFlg_Val(&rtb_Switch_f_idx_1);

  /* Inport: '<Root>/gSLC_u8RRCurrtOverFlg' */
  Rte_Read_gSLC_u8RRCurrtOverFlg_Val(&rtb_Switch2_j_idx_0);

  /* Inport: '<Root>/gSLC_bRRAPHappen' */
  Rte_Read_gSLC_bRRAPHappen_Val(&rtb_Switch2_j_idx_1);

  /* Inport: '<Root>/gSLC_bRLActiveFlg' */
  Rte_Read_gSLC_bRLActiveFlg_Val(&tmpRead_c);

  /* Inport: '<Root>/gSLC_u16RLRpPosition' */
  Rte_Read_gSLC_u16RLRpPosition_Val(&tmpRead_b);

  /* Inport: '<Root>/gSLC_bRLBDCSStopReq' */
  Rte_Read_gSLC_bRLBDCSStopReq_Val(&rtb_Switch4_idx_0);

  /* Inport: '<Root>/gSLC_u8RLCurrtFixFlg' */
  Rte_Read_gSLC_u8RLCurrtFixFlg_Val(&rtb_Switch4_idx_1);

  /* Inport: '<Root>/gSLC_u8RLCurrtOverFlg' */
  Rte_Read_gSLC_u8RLCurrtOverFlg_Val(&rtb_Switch6_idx_0);

  /* Inport: '<Root>/gSLC_bRLAPHappen' */
  Rte_Read_gSLC_bRLAPHappen_Val(&rtb_Switch6_idx_1);

  /* Inport: '<Root>/gSLC_bFRActiveFlg' */
  Rte_Read_gSLC_bFRActiveFlg_Val(&tmpRead_a);

  /* Inport: '<Root>/gSLC_u16FRRpPosition' */
  Rte_Read_gSLC_u16FRRpPosition_Val(&tmpRead_9);

  /* Inport: '<Root>/gSLC_bFRBDCSStopReq' */
  Rte_Read_gSLC_bFRBDCSStopReq_Val(&tmpRead_8);

  /* Inport: '<Root>/gSLC_u8FRCurrtFixFlg' */
  Rte_Read_gSLC_u8FRCurrtFixFlg_Val(&tmpRead_7);

  /* Inport: '<Root>/gSLC_u8FRCurrtOverFlg' */
  Rte_Read_gSLC_u8FRCurrtOverFlg_Val(&tmpRead_6);

  /* Inport: '<Root>/gSLC_bFRAPHappen' */
  Rte_Read_gSLC_bFRAPHappen_Val(&tmpRead_5);

  /* Inport: '<Root>/gSLC_bFLActiveFlg' */
  Rte_Read_gSLC_bFLActiveFlg_Val(&tmpRead_4);

  /* Inport: '<Root>/gSLC_u16FLRpPosition' */
  Rte_Read_gSLC_u16FLRpPosition_Val(&tmpRead_3);

  /* Inport: '<Root>/gSLC_bFLBDCSStopReq' */
  Rte_Read_gSLC_bFLBDCSStopReq_Val(&tmpRead_2);

  /* Inport: '<Root>/gSLC_u8FLCurrtFixFlg' */
  Rte_Read_gSLC_u8FLCurrtFixFlg_Val(&tmpRead_1);

  /* Inport: '<Root>/gSLC_u8FLCurrtOverFlg' */
  Rte_Read_gSLC_u8FLCurrtOverFlg_Val(&tmpRead_0);

  /* Inport: '<Root>/gSLC_bFLAPHappen' */
  Rte_Read_gSLC_bFLAPHappen_Val(&tmpRead);

  /* Chart: '<S6>/Reverse_FL' incorporates:
   *  Logic: '<S6>/Logical Operator'
   */
  Win_SLC_Reverse_FL(tmpRead, tmpRead_0 || tmpRead_1, tmpRead_2, tmpRead_3,
                     tmpRead_4, &rtb_gWND_u8ReverseCmd_m,
                     &rtb_gDCU_bReverseFlag_b, &Win_SLC_DWork.sf_Reverse_FL);

  /* Chart: '<S6>/Reverse_FR' incorporates:
   *  Logic: '<S6>/Logical Operator2'
   */
  Win_SLC_Reverse_FL(tmpRead_5, tmpRead_6 || tmpRead_7, tmpRead_8, tmpRead_9,
                     tmpRead_a, &rtb_gWND_u8ReverseCmd_a,
                     &rtb_gDCU_bReverseFlag_m, &Win_SLC_DWork.sf_Reverse_FR);

  /* Chart: '<S6>/Reverse_RL' incorporates:
   *  Logic: '<S6>/Logical Operator1'
   */
  Win_SLC_Reverse_FL(rtb_Switch6_idx_1, rtb_Switch6_idx_0 || rtb_Switch4_idx_1,
                     rtb_Switch4_idx_0, tmpRead_b, tmpRead_c,
                     &rtb_gWND_u8ReverseCmd_h, &rtb_gDCU_bReverseFlag_k,
                     &Win_SLC_DWork.sf_Reverse_RL);

  /* Chart: '<S6>/Reverse_RR' incorporates:
   *  Logic: '<S6>/Logical Operator3'
   */
  Win_SLC_Reverse_FL(rtb_Switch2_j_idx_1, rtb_Switch2_j_idx_0 ||
                     rtb_Switch_f_idx_1, rtb_Switch_f_idx_0, tmpRead_d,
                     tmpRead_e, &rtb_gWND_u8ReverseCmd, &rtb_gDCU_bReverseFlag,
                     &Win_SLC_DWork.sf_Reverse_RR);

  /* Chart: '<S6>/StartAtDiffTime' incorporates:
   *  Constant: '<S6>/Constant1'
   */
  if (Win_SLC_DWork.temporalCounter_i1 < 255U) {
    Win_SLC_DWork.temporalCounter_i1++;
  }

  if (Win_SLC_DWork.is_active_c3_Win_SLC == 0U) {
    Win_SLC_DWork.is_active_c3_Win_SLC = 1U;
    Win_SLC_DWork.is_Output_Set = Win_SLC_IN_START_ENABLE;
  } else {
    if (rtb_gWND_u8ReverseCmd_m != 5) {
      Win_SLC_DWork.bFLDnOutput = false;
    }

    if (rtb_gWND_u8ReverseCmd_a != 5) {
      Win_SLC_DWork.bFRDnOutput = false;
    }

    if (rtb_gWND_u8ReverseCmd_h != 5) {
      Win_SLC_DWork.bRLDnOutput = false;
    }

    if (rtb_gWND_u8ReverseCmd != 5) {
      Win_SLC_DWork.bRRDnOutput = false;
    }

    if (Win_SLC_DWork.is_Output_Set == Win_SLC_IN_START_DISABLE) {
      if ((Win_SLC_DWork.temporalCounter_i1 >= 100) ||
          ((Win_SLC_DWork.u8OutputRec == 1) && (!Win_SLC_DWork.bFLDnOutput)) ||
          ((Win_SLC_DWork.u8OutputRec == 2) && (!Win_SLC_DWork.bFRDnOutput)) ||
          ((Win_SLC_DWork.u8OutputRec == 3) && (!Win_SLC_DWork.bRLDnOutput)) ||
          ((Win_SLC_DWork.u8OutputRec == 4) && (!Win_SLC_DWork.bRRDnOutput))) {
        Win_SLC_DWork.is_Output_Set = Win_SLC_IN_START_ENABLE;
      }
    } else {
      guard1 = false;
      if ((!Win_SLC_DWork.bFLDnOutput) && (rtb_gWND_u8ReverseCmd_m == 5)) {
        Win_SLC_DWork.bFLDnOutput = true;
        Win_SLC_DWork.u8OutputRec = 1U;
        guard1 = true;
      } else if ((!Win_SLC_DWork.bFRDnOutput) && (rtb_gWND_u8ReverseCmd_a == 5))
      {
        Win_SLC_DWork.bFRDnOutput = true;
        Win_SLC_DWork.u8OutputRec = 2U;
        guard1 = true;
      } else if ((!Win_SLC_DWork.bRLDnOutput) && (rtb_gWND_u8ReverseCmd_h == 5))
      {
        Win_SLC_DWork.bRLDnOutput = true;
        Win_SLC_DWork.u8OutputRec = 3U;
        guard1 = true;
      } else {
        if ((!Win_SLC_DWork.bRRDnOutput) && (rtb_gWND_u8ReverseCmd == 5)) {
          Win_SLC_DWork.bRRDnOutput = true;
          Win_SLC_DWork.u8OutputRec = 4U;
          guard1 = true;
        }
      }

      if (guard1) {
        Win_SLC_DWork.is_Output_Set = Win_SLC_IN_START_DISABLE;
        Win_SLC_DWork.temporalCounter_i1 = 0U;
      }
    }

    Win_SLC_B.u8FLOutputSts = 0U;
    Win_SLC_B.u8FROutputSts = 0U;
    Win_SLC_B.u8RLOutputSts = 0U;
    Win_SLC_B.u8RROutputSts = 0U;
    if (Win_SLC_DWork.bFLDnOutput) {
      Win_SLC_B.u8FLOutputSts = rtb_gWND_u8ReverseCmd_m;
    }

    if (Win_SLC_DWork.bFRDnOutput) {
      Win_SLC_B.u8FROutputSts = rtb_gWND_u8ReverseCmd_a;
    }

    if (Win_SLC_DWork.bRLDnOutput) {
      Win_SLC_B.u8RLOutputSts = rtb_gWND_u8ReverseCmd_h;
    }

    if (Win_SLC_DWork.bRRDnOutput) {
      Win_SLC_B.u8RROutputSts = rtb_gWND_u8ReverseCmd;
    }
  }

  /* End of Chart: '<S6>/StartAtDiffTime' */

  /* Inport: '<Root>/gWin_u8FLOutputSts' */
  Rte_Read_gWin_u8FLOutputSts_Val(&rtb_Switch);

  /* Switch: '<S5>/Switch' */
  if (rtb_gDCU_bReverseFlag_b) {
    rtb_Switch = Win_SLC_B.u8FLOutputSts;
  }

  /* End of Switch: '<S5>/Switch' */

  /* Chart: '<S4>/MotorProtect_FL' */
  Win_SLC_MotorProtect_FL(rtb_Switch, &Win_SLC_B.u8OutputReq_kv,
    &Win_SLC_DWork.sf_MotorProtect_FL);

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/Constant18'
   *  Constant: '<S2>/Constant19'
   *  Constant: '<S2>/Constant2'
   *  Logic: '<S2>/Logical Operator1'
   *  Logic: '<S2>/Logical Operator9'
   *  RelationalOperator: '<S2>/Relational Operator'
   *  RelationalOperator: '<S2>/Relational Operator1'
   *  RelationalOperator: '<S2>/Relational Operator2'
   *  RelationalOperator: '<S2>/Relational Operator20'
   *  RelationalOperator: '<S2>/Relational Operator21'
   *  Switch: '<S2>/Switch1'
   */
  if ((Win_SLC_B.u8OutputReq_kv == 1) || (Win_SLC_B.u8OutputReq_kv == 2)) {
    rtb_Switch_f_idx_0 = true;
    rtb_Switch_f_idx_1 = false;
  } else {
    rtb_Switch_f_idx_0 = false;
    rtb_Switch_f_idx_1 = ((Win_SLC_B.u8OutputReq_kv == 3) ||
                          (Win_SLC_B.u8OutputReq_kv == 4) ||
                          (Win_SLC_B.u8OutputReq_kv == 5));
  }

  /* End of Switch: '<S2>/Switch' */

  /* Inport: '<Root>/gWin_u8FROutputSts' */
  Rte_Read_gWin_u8FROutputSts_Val(&rtb_Switch1);

  /* Outport: '<Root>/gDCU_bFLWinUpOutput' */
  (void) Rte_Write_gDCU_bFLWinUpOutput_Val(rtb_Switch_f_idx_0);

  /* Outport: '<Root>/gDCU_bFLWinDownOutput' */
  (void) Rte_Write_gDCU_bFLWinDownOutput_Val(rtb_Switch_f_idx_1);

  /* Switch: '<S5>/Switch1' */
  if (rtb_gDCU_bReverseFlag_m) {
    rtb_Switch1 = Win_SLC_B.u8FROutputSts;
  }

  /* End of Switch: '<S5>/Switch1' */

  /* Chart: '<S4>/MotorProtect_FR' */
  Win_SLC_MotorProtect_FL(rtb_Switch1, &Win_SLC_B.u8OutputReq_k,
    &Win_SLC_DWork.sf_MotorProtect_FR);

  /* Switch: '<S2>/Switch2' incorporates:
   *  Constant: '<S2>/Constant10'
   *  Constant: '<S2>/Constant11'
   *  Constant: '<S2>/Constant9'
   *  Logic: '<S2>/Logical Operator2'
   *  Logic: '<S2>/Logical Operator3'
   *  RelationalOperator: '<S2>/Relational Operator3'
   *  RelationalOperator: '<S2>/Relational Operator4'
   *  RelationalOperator: '<S2>/Relational Operator5'
   *  RelationalOperator: '<S2>/Relational Operator6'
   *  RelationalOperator: '<S2>/Relational Operator7'
   *  Switch: '<S2>/Switch3'
   */
  if ((Win_SLC_B.u8OutputReq_k == 1) || (Win_SLC_B.u8OutputReq_k == 2)) {
    rtb_Switch2_j_idx_0 = true;
    rtb_Switch2_j_idx_1 = false;
  } else {
    rtb_Switch2_j_idx_0 = false;
    rtb_Switch2_j_idx_1 = ((Win_SLC_B.u8OutputReq_k == 3) ||
      (Win_SLC_B.u8OutputReq_k == 4) || (Win_SLC_B.u8OutputReq_k == 5));
  }

  /* End of Switch: '<S2>/Switch2' */

  /* Inport: '<Root>/gWin_u8RLOutputSts' */
  Rte_Read_gWin_u8RLOutputSts_Val(&rtb_Switch2);

  /* Outport: '<Root>/gDCU_bFRWinUpOutput' */
  (void) Rte_Write_gDCU_bFRWinUpOutput_Val(rtb_Switch2_j_idx_0);

  /* Outport: '<Root>/gDCU_bFRWinDownOutput' */
  (void) Rte_Write_gDCU_bFRWinDownOutput_Val(rtb_Switch2_j_idx_1);

  /* Switch: '<S5>/Switch2' */
  if (rtb_gDCU_bReverseFlag_k) {
    rtb_Switch2 = Win_SLC_B.u8RLOutputSts;
  }

  /* End of Switch: '<S5>/Switch2' */

  /* Chart: '<S4>/MotorProtect_RL' */
  Win_SLC_MotorProtect_FL(rtb_Switch2, &Win_SLC_B.u8OutputReq_j,
    &Win_SLC_DWork.sf_MotorProtect_RL);

  /* Switch: '<S2>/Switch4' incorporates:
   *  Constant: '<S2>/Constant30'
   *  Constant: '<S2>/Constant31'
   *  Constant: '<S2>/Constant32'
   *  Logic: '<S2>/Logical Operator4'
   *  Logic: '<S2>/Logical Operator7'
   *  RelationalOperator: '<S2>/Relational Operator10'
   *  RelationalOperator: '<S2>/Relational Operator11'
   *  RelationalOperator: '<S2>/Relational Operator12'
   *  RelationalOperator: '<S2>/Relational Operator8'
   *  RelationalOperator: '<S2>/Relational Operator9'
   *  Switch: '<S2>/Switch5'
   */
  if ((Win_SLC_B.u8OutputReq_j == 1) || (Win_SLC_B.u8OutputReq_j == 2)) {
    rtb_Switch4_idx_0 = true;
    rtb_Switch4_idx_1 = false;
  } else {
    rtb_Switch4_idx_0 = false;
    rtb_Switch4_idx_1 = ((Win_SLC_B.u8OutputReq_j == 3) ||
                         (Win_SLC_B.u8OutputReq_j == 4) ||
                         (Win_SLC_B.u8OutputReq_j == 5));
  }

  /* End of Switch: '<S2>/Switch4' */

  /* Inport: '<Root>/gWin_u8RROutputSts' */
  Rte_Read_gWin_u8RROutputSts_Val(&rtb_Switch3);

  /* Outport: '<Root>/gDCU_bRLWinUpOutput' */
  (void) Rte_Write_gDCU_bRLWinUpOutput_Val(rtb_Switch4_idx_0);

  /* Outport: '<Root>/gDCU_bRLWinDownOutput' */
  (void) Rte_Write_gDCU_bRLWinDownOutput_Val(rtb_Switch4_idx_1);

  /* Switch: '<S5>/Switch3' */
  if (rtb_gDCU_bReverseFlag) {
    rtb_Switch3 = Win_SLC_B.u8RROutputSts;
  }

  /* End of Switch: '<S5>/Switch3' */

  /* Chart: '<S4>/MotorProtect_RR' */
  Win_SLC_MotorProtect_FL(rtb_Switch3, &Win_SLC_B.u8OutputReq,
    &Win_SLC_DWork.sf_MotorProtect_RR);

  /* Switch: '<S2>/Switch6' incorporates:
   *  Constant: '<S2>/Constant22'
   *  Constant: '<S2>/Constant23'
   *  Constant: '<S2>/Constant42'
   *  Logic: '<S2>/Logical Operator5'
   *  Logic: '<S2>/Logical Operator6'
   *  RelationalOperator: '<S2>/Relational Operator13'
   *  RelationalOperator: '<S2>/Relational Operator14'
   *  RelationalOperator: '<S2>/Relational Operator15'
   *  RelationalOperator: '<S2>/Relational Operator16'
   *  RelationalOperator: '<S2>/Relational Operator17'
   *  Switch: '<S2>/Switch7'
   */
  if ((Win_SLC_B.u8OutputReq == 1) || (Win_SLC_B.u8OutputReq == 2)) {
    rtb_Switch6_idx_0 = true;
    rtb_Switch6_idx_1 = false;
  } else {
    rtb_Switch6_idx_0 = false;
    rtb_Switch6_idx_1 = ((Win_SLC_B.u8OutputReq == 3) || (Win_SLC_B.u8OutputReq ==
      4) || (Win_SLC_B.u8OutputReq == 5));
  }

  /* End of Switch: '<S2>/Switch6' */

  /* Outport: '<Root>/gDCU_bRRWinUpOutput' */
  (void) Rte_Write_gDCU_bRRWinUpOutput_Val(rtb_Switch6_idx_0);

  /* Outport: '<Root>/gDCU_bRRWinDownOutput' */
  (void) Rte_Write_gDCU_bRRWinDownOutput_Val(rtb_Switch6_idx_1);

  /* Chart: '<S3>/RelayOutput-ConvertTo-MOS_Driver' */
  if (Win_SLC_DWork.temporalCounter_i1_c < 63U) {
    Win_SLC_DWork.temporalCounter_i1_c++;
  }

  if (Win_SLC_DWork.is_active_c1_Win_SLC == 0U) {
    Win_SLC_DWork.is_active_c1_Win_SLC = 1U;
    Win_SLC_DWork.temporalCounter_i1_c = 0U;
  } else {
    Win_SLC_B.u8FLWinOutput = 0U;
    Win_SLC_B.u8FRWinOutput = 0U;
    Win_SLC_B.u8RLWinOutput = 0U;
    Win_SLC_B.u8RRWinOutput = 0U;
    guard1 = false;
    if (rtb_Switch_f_idx_0 && (!rtb_Switch_f_idx_1)) {
      Win_SLC_B.u8FLWinOutput = 1U;
      if (Win_SLC_DWork.temporalCounter_i1_c >= 50) {
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if ((!rtb_Switch_f_idx_0) && rtb_Switch_f_idx_1) {
        Win_SLC_B.u8FLWinOutput = 2U;
      }
    }

    guard1 = false;
    if (rtb_Switch2_j_idx_0 && (!rtb_Switch2_j_idx_1)) {
      Win_SLC_B.u8FRWinOutput = 1U;
      if (Win_SLC_DWork.temporalCounter_i1_c >= 50) {
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if ((!rtb_Switch2_j_idx_0) && rtb_Switch2_j_idx_1) {
        Win_SLC_B.u8FRWinOutput = 2U;
      }
    }

    guard1 = false;
    if (rtb_Switch4_idx_0 && (!rtb_Switch4_idx_1)) {
      Win_SLC_B.u8RLWinOutput = 1U;
      if (Win_SLC_DWork.temporalCounter_i1_c >= 50) {
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if ((!rtb_Switch4_idx_0) && rtb_Switch4_idx_1) {
        Win_SLC_B.u8RLWinOutput = 2U;
      }
    }

    guard1 = false;
    if (rtb_Switch6_idx_0 && (!rtb_Switch6_idx_1)) {
      Win_SLC_B.u8RRWinOutput = 1U;
      if (Win_SLC_DWork.temporalCounter_i1_c >= 50) {
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if ((!rtb_Switch6_idx_0) && rtb_Switch6_idx_1) {
        Win_SLC_B.u8RRWinOutput = 2U;
      }
    }
  }

  /* End of Chart: '<S3>/RelayOutput-ConvertTo-MOS_Driver' */

  /* Outport: '<Root>/gWND_u8DrvWinOutput' */
  (void) Rte_Write_gWND_u8DrvWinOutput_Val(Win_SLC_B.u8FLWinOutput);

  /* Outport: '<Root>/gWND_u8PsgWinOutput' */
  (void) Rte_Write_gWND_u8PsgWinOutput_Val(Win_SLC_B.u8FRWinOutput);

  /* Outport: '<Root>/gWND_u8RLWinOutput' */
  (void) Rte_Write_gWND_u8RLWinOutput_Val(Win_SLC_B.u8RLWinOutput);

  /* Outport: '<Root>/gWND_u8RRWinOutput' */
  (void) Rte_Write_gWND_u8RRWinOutput_Val(Win_SLC_B.u8RRWinOutput);

  /* Outport: '<Root>/gDCU_u8RROutputReq' */
  (void) Rte_Write_gDCU_u8RROutputReq_Val(Win_SLC_B.u8OutputReq);

  /* Outport: '<Root>/gDCU_u8RROutputSts' */
  (void) Rte_Write_gDCU_u8RROutputSts_Val(rtb_Switch3);

  /* Outport: '<Root>/gDCU_u8RLOutputReq' */
  (void) Rte_Write_gDCU_u8RLOutputReq_Val(Win_SLC_B.u8OutputReq_j);

  /* Outport: '<Root>/gDCU_u8RLOutputSts' */
  (void) Rte_Write_gDCU_u8RLOutputSts_Val(rtb_Switch2);

  /* Outport: '<Root>/gDCU_u8FROutputReq' */
  (void) Rte_Write_gDCU_u8FROutputReq_Val(Win_SLC_B.u8OutputReq_k);

  /* Outport: '<Root>/gDCU_u8FROutputSts' */
  (void) Rte_Write_gDCU_u8FROutputSts_Val(rtb_Switch1);

  /* Outport: '<Root>/gDCU_u8FLOutputReq' */
  (void) Rte_Write_gDCU_u8FLOutputReq_Val(Win_SLC_B.u8OutputReq_kv);

  /* Outport: '<Root>/gDCU_u8FLOutputSts' */
  (void) Rte_Write_gDCU_u8FLOutputSts_Val(rtb_Switch);

  /* Outport: '<Root>/gDCU_u8FLReverseOutputSts' */
  (void) Rte_Write_gDCU_u8FLReverseOutputSts_Val(Win_SLC_B.u8FLOutputSts);

  /* Outport: '<Root>/gDCU_u8FRReverseOutputSts' */
  (void) Rte_Write_gDCU_u8FRReverseOutputSts_Val(Win_SLC_B.u8FROutputSts);

  /* Outport: '<Root>/gDCU_u8RLReverseOutputSts' */
  (void) Rte_Write_gDCU_u8RLReverseOutputSts_Val(Win_SLC_B.u8RLOutputSts);

  /* Outport: '<Root>/gDCU_u8RRReverseOutputSts' */
  (void) Rte_Write_gDCU_u8RRReverseOutputSts_Val(Win_SLC_B.u8RROutputSts);

  /* Outport: '<Root>/gDCU_bRRReverseFlag' */
  (void) Rte_Write_gDCU_bRRReverseFlag_Val(rtb_gDCU_bReverseFlag);

  /* Outport: '<Root>/gDCU_bRLReverseFlag' */
  (void) Rte_Write_gDCU_bRLReverseFlag_Val(rtb_gDCU_bReverseFlag_k);

  /* Outport: '<Root>/gDCU_bFRReverseFlag' */
  (void) Rte_Write_gDCU_bFRReverseFlag_Val(rtb_gDCU_bReverseFlag_m);

  /* Outport: '<Root>/gDCU_bFLReverseFlag' */
  (void) Rte_Write_gDCU_bFLReverseFlag_Val(rtb_gDCU_bReverseFlag_b);
}

/* Model initialize function */
void Win_SLC_Runnable_Init(void)
{
  {
    /* local block i/o variables */
    uint8 rtb_gWND_u8ReverseCmd;
    uint8 rtb_gWND_u8ReverseCmd_h;
    uint8 rtb_gWND_u8ReverseCmd_a;
    uint8 rtb_gWND_u8ReverseCmd_m;
    boolean rtb_gDCU_bReverseFlag;
    boolean rtb_gDCU_bReverseFlag_k;
    boolean rtb_gDCU_bReverseFlag_m;
    boolean rtb_gDCU_bReverseFlag_b;

    /* Machine initializer */
    Win_SLC_DWork.wndOverVoltImmPrm = 0;

    /* SystemInitialize for Chart: '<S6>/Reverse_FL' */
    Win_SLC_Reverse_FL_Init(&rtb_gWND_u8ReverseCmd_m, &rtb_gDCU_bReverseFlag_b);

    /* SystemInitialize for Chart: '<S6>/Reverse_FR' */
    Win_SLC_Reverse_FL_Init(&rtb_gWND_u8ReverseCmd_a, &rtb_gDCU_bReverseFlag_m);

    /* SystemInitialize for Chart: '<S6>/Reverse_RL' */
    Win_SLC_Reverse_FL_Init(&rtb_gWND_u8ReverseCmd_h, &rtb_gDCU_bReverseFlag_k);

    /* SystemInitialize for Chart: '<S6>/Reverse_RR' */
    Win_SLC_Reverse_FL_Init(&rtb_gWND_u8ReverseCmd, &rtb_gDCU_bReverseFlag);

    /* SystemInitialize for Chart: '<S4>/MotorProtect_FL' */
    Win_SLC_MotorProtect_FL_Init(&Win_SLC_B.u8OutputReq_kv);

    /* SystemInitialize for Chart: '<S4>/MotorProtect_FR' */
    Win_SLC_MotorProtect_FL_Init(&Win_SLC_B.u8OutputReq_k);

    /* SystemInitialize for Chart: '<S4>/MotorProtect_RL' */
    Win_SLC_MotorProtect_FL_Init(&Win_SLC_B.u8OutputReq_j);

    /* SystemInitialize for Chart: '<S4>/MotorProtect_RR' */
    Win_SLC_MotorProtect_FL_Init(&Win_SLC_B.u8OutputReq);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
