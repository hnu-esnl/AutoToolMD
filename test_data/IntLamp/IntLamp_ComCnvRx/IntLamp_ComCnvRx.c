/*
 * File: IntLamp_ComCnvRx.c
 *
 * Code generated for Simulink model 'IntLamp_ComCnvRx'.
 *
 * Model version                  : 1.32
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Sep 27 16:41:25 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "IntLamp_ComCnvRx.h"

/* Invariant block signals (default storage) */
const ConstB_IntLamp_ComCnvRx_T IntLamp_ComCnvRx_ConstB = {
  0,                                   /* '<Root>/Constant4' */
  0,                                   /* '<Root>/Constant5' */
  0,                                   /* '<Root>/Constant1' */
  0,                                   /* '<Root>/Constant2' */
  0,                                   /* '<Root>/Constant3' */
  0,                                   /* '<Root>/Constant6' */
  0,                                   /* '<Root>/Constant7' */
  0                                    /* '<Root>/Constant8' */
};

/* Model step function */
void IntLamp_ComCnvRx_Runnable_10ms(void)
{
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  uint8 tmpRead_3;
  uint8 tmpRead_4;
  uint8 tmpRead_5;
  uint8 tmpRead_6;
  uint8 tmpRead_7;
  uint16 tmpRead_8;
  uint8 tmpRead_9;
  uint8 tmpRead_a;
  uint8 tmpRead_b;
  uint8 tmpRead_c;
  uint8 tmpRead_d;
  uint8 tmpRead_e;
  uint8 tmpRead_f;
  uint8 tmpRead_g;
  uint8 tmpRead_h;
  uint8 tmpRead_i;
  uint8 tmpRead_j;
  uint16 tmpRead_k;
  uint8 tmpRead_l;
  uint8 tmpRead_m;
  uint8 tmpRead_n;
  uint8 tmpRead_o;
  uint8 tmpRead_p;
  uint8 tmpRead_q;
  uint8 tmpRead_r;
  uint8 tmpRead_s;
  uint8 tmpRead_t;
  uint8 tmpRead_u;
  uint8 tmpRead_v;
  uint16 tmpRead_w;
  uint8 tmpRead_x;
  uint8 tmpRead_y;
  uint8 tmpRead_z;
  uint8 tmpRead_10;
  uint8 tmpRead_11;
  uint8 tmpRead_12;
  uint8 tmpRead_13;
  uint8 tmpRead_14;
  uint8 tmpRead_15;
  uint8 tmpRead_16;
  uint8 tmpRead_17;
  uint16 tmpRead_18;
  uint8 tmpRead_19;
  uint8 tmpRead_1a;
  boolean tmpRead_1b;

  /* Inport: '<Root>/ComRx_bIL_CtrCmdTrunkLight_TiOut' */
  Rte_Read_ComRx_bIL_CtrCmdTrunkLight_TiOut_Val(&tmpRead_1b);

  /* Inport: '<Root>/ComRx_u8IL_TimerGradientTimeBKGLight' */
  Rte_Read_ComRx_u8IL_TimerGradientTimeBKGLight_Val(&tmpRead_1a);

  /* Inport: '<Root>/ComRx_u8IL_TimerActionModeBKGLight' */
  Rte_Read_ComRx_u8IL_TimerActionModeBKGLight_Val(&tmpRead_19);

  /* Inport: '<Root>/ComRx_u16IL_TimerTriTimeBKGLight' */
  Rte_Read_ComRx_u16IL_TimerTriTimeBKGLight_Val(&tmpRead_18);

  /* Inport: '<Root>/ComRx_u8IL_TimerActionBKGLight' */
  Rte_Read_ComRx_u8IL_TimerActionBKGLight_Val(&tmpRead_17);

  /* Inport: '<Root>/ComRx_u8IL_TimerEnBKGLight' */
  Rte_Read_ComRx_u8IL_TimerEnBKGLight_Val(&tmpRead_16);

  /* Inport: '<Root>/ComRx_u8IL_FlickerOffTBKGLight' */
  Rte_Read_ComRx_u8IL_FlickerOffTBKGLight_Val(&tmpRead_15);

  /* Inport: '<Root>/ComRx_u8IL_FlickerOnTBKGLight' */
  Rte_Read_ComRx_u8IL_FlickerOnTBKGLight_Val(&tmpRead_14);

  /* Inport: '<Root>/ComRx_u8IL_SlopeParaBKGLight' */
  Rte_Read_ComRx_u8IL_SlopeParaBKGLight_Val(&tmpRead_13);

  /* Inport: '<Root>/ComRx_u8IL_TargetBriBKGLight' */
  Rte_Read_ComRx_u8IL_TargetBriBKGLight_Val(&tmpRead_12);

  /* Inport: '<Root>/ComRx_u8IL_FlickerCntBKGLight' */
  Rte_Read_ComRx_u8IL_FlickerCntBKGLight_Val(&tmpRead_11);

  /* Inport: '<Root>/ComRx_u8IL_CtrModeBKGLight' */
  Rte_Read_ComRx_u8IL_CtrModeBKGLight_Val(&tmpRead_10);

  /* Inport: '<Root>/ComRx_u8IL_CtrCmdBKGLight' */
  Rte_Read_ComRx_u8IL_CtrCmdBKGLight_Val(&tmpRead_z);

  /* Inport: '<Root>/ComRx_u8IL_TimerGradientTimeCourtesyLightRR' */
  Rte_Read_ComRx_u8IL_TimerGradientTimeCourtesyLightRR_Val(&tmpRead_y);

  /* Inport: '<Root>/ComRx_u8IL_TimerActionModeCourtesyLightRR' */
  Rte_Read_ComRx_u8IL_TimerActionModeCourtesyLightRR_Val(&tmpRead_x);

  /* Inport: '<Root>/ComRx_u16IL_TimerTriTimeCourtesyLightRR' */
  Rte_Read_ComRx_u16IL_TimerTriTimeCourtesyLightRR_Val(&tmpRead_w);

  /* Inport: '<Root>/ComRx_u8IL_TimerActionCourtesyLightRR' */
  Rte_Read_ComRx_u8IL_TimerActionCourtesyLightRR_Val(&tmpRead_v);

  /* Inport: '<Root>/ComRx_u8IL_TimerEnCourtesyLightRR' */
  Rte_Read_ComRx_u8IL_TimerEnCourtesyLightRR_Val(&tmpRead_u);

  /* Inport: '<Root>/ComRx_u8IL_FlickerOffTCourtesyLightRR' */
  Rte_Read_ComRx_u8IL_FlickerOffTCourtesyLightRR_Val(&tmpRead_t);

  /* Inport: '<Root>/ComRx_u8IL_FlickerOnTCourtesyLightRR' */
  Rte_Read_ComRx_u8IL_FlickerOnTCourtesyLightRR_Val(&tmpRead_s);

  /* Inport: '<Root>/ComRx_u8IL_SlopeParaCourtesyLightRR' */
  Rte_Read_ComRx_u8IL_SlopeParaCourtesyLightRR_Val(&tmpRead_r);

  /* Inport: '<Root>/ComRx_u8IL_TargetBriCourtesyLightRR' */
  Rte_Read_ComRx_u8IL_TargetBriCourtesyLightRR_Val(&tmpRead_q);

  /* Inport: '<Root>/ComRx_u8IL_FlickerCntCourtesyLightRR' */
  Rte_Read_ComRx_u8IL_FlickerCntCourtesyLightRR_Val(&tmpRead_p);

  /* Inport: '<Root>/ComRx_u8IL_CtrModeCourtesyLightRR' */
  Rte_Read_ComRx_u8IL_CtrModeCourtesyLightRR_Val(&tmpRead_o);

  /* Inport: '<Root>/ComRx_u8IL_CtrCmdCourtesyLightRR' */
  Rte_Read_ComRx_u8IL_CtrCmdCourtesyLightRR_Val(&tmpRead_n);

  /* Inport: '<Root>/ComRx_u8IL_TimerGradientTimeCourtesyLightRL' */
  Rte_Read_ComRx_u8IL_TimerGradientTimeCourtesyLightRL_Val(&tmpRead_m);

  /* Inport: '<Root>/ComRx_u8IL_TimerActionModeCourtesyLightRL' */
  Rte_Read_ComRx_u8IL_TimerActionModeCourtesyLightRL_Val(&tmpRead_l);

  /* Inport: '<Root>/ComRx_u16IL_TimerTriTimeCourtesyLightRL' */
  Rte_Read_ComRx_u16IL_TimerTriTimeCourtesyLightRL_Val(&tmpRead_k);

  /* Inport: '<Root>/ComRx_u8IL_TimerActionCourtesyLightRL' */
  Rte_Read_ComRx_u8IL_TimerActionCourtesyLightRL_Val(&tmpRead_j);

  /* Inport: '<Root>/ComRx_u8IL_TimerEnCourtesyLightRL' */
  Rte_Read_ComRx_u8IL_TimerEnCourtesyLightRL_Val(&tmpRead_i);

  /* Inport: '<Root>/ComRx_u8IL_FlickerOffTCourtesyLightRL' */
  Rte_Read_ComRx_u8IL_FlickerOffTCourtesyLightRL_Val(&tmpRead_h);

  /* Inport: '<Root>/ComRx_u8IL_FlickerOnTCourtesyLightRL' */
  Rte_Read_ComRx_u8IL_FlickerOnTCourtesyLightRL_Val(&tmpRead_g);

  /* Inport: '<Root>/ComRx_u8IL_SlopeParaCourtesyLightRL' */
  Rte_Read_ComRx_u8IL_SlopeParaCourtesyLightRL_Val(&tmpRead_f);

  /* Inport: '<Root>/ComRx_u8IL_TargetBriCourtesyLightRL' */
  Rte_Read_ComRx_u8IL_TargetBriCourtesyLightRL_Val(&tmpRead_e);

  /* Inport: '<Root>/ComRx_u8IL_FlickerCntCourtesyLightRL' */
  Rte_Read_ComRx_u8IL_FlickerCntCourtesyLightRL_Val(&tmpRead_d);

  /* Inport: '<Root>/ComRx_u8IL_CtrModeCourtesyLightRL' */
  Rte_Read_ComRx_u8IL_CtrModeCourtesyLightRL_Val(&tmpRead_c);

  /* Inport: '<Root>/ComRx_u8IL_CtrCmdCourtesyLightRL' */
  Rte_Read_ComRx_u8IL_CtrCmdCourtesyLightRL_Val(&tmpRead_b);

  /* Inport: '<Root>/ComRx_u8IL_TimerGradientTimeTrunkLight' */
  Rte_Read_ComRx_u8IL_TimerGradientTimeTrunkLight_Val(&tmpRead_a);

  /* Inport: '<Root>/ComRx_u8IL_TimerActionModeTrunkLight' */
  Rte_Read_ComRx_u8IL_TimerActionModeTrunkLight_Val(&tmpRead_9);

  /* Inport: '<Root>/ComRx_u16IL_TimerTriTimeTrunkLight' */
  Rte_Read_ComRx_u16IL_TimerTriTimeTrunkLight_Val(&tmpRead_8);

  /* Inport: '<Root>/ComRx_u8IL_TimerActionTrunkLight' */
  Rte_Read_ComRx_u8IL_TimerActionTrunkLight_Val(&tmpRead_7);

  /* Inport: '<Root>/ComRx_u8IL_TimerEnTrunkLight' */
  Rte_Read_ComRx_u8IL_TimerEnTrunkLight_Val(&tmpRead_6);

  /* Inport: '<Root>/ComRx_u8IL_FlickerOffTTrunkLight' */
  Rte_Read_ComRx_u8IL_FlickerOffTTrunkLight_Val(&tmpRead_5);

  /* Inport: '<Root>/ComRx_u8IL_FlickerOnTTrunkLight' */
  Rte_Read_ComRx_u8IL_FlickerOnTTrunkLight_Val(&tmpRead_4);

  /* Inport: '<Root>/ComRx_u8IL_SlopeParaTrunkLight' */
  Rte_Read_ComRx_u8IL_SlopeParaTrunkLight_Val(&tmpRead_3);

  /* Inport: '<Root>/ComRx_u8IL_TargetBriTrunkLight' */
  Rte_Read_ComRx_u8IL_TargetBriTrunkLight_Val(&tmpRead_2);

  /* Inport: '<Root>/ComRx_u8IL_FlickerCntTrunkLight' */
  Rte_Read_ComRx_u8IL_FlickerCntTrunkLight_Val(&tmpRead_1);

  /* Inport: '<Root>/ComRx_u8IL_CtrModeTrunkLight' */
  Rte_Read_ComRx_u8IL_CtrModeTrunkLight_Val(&tmpRead_0);

  /* Inport: '<Root>/ComRx_u8IL_CtrCmdTrunkLight' */
  Rte_Read_ComRx_u8IL_CtrCmdTrunkLight_Val(&tmpRead);

  /* Outport: '<Root>/gDiag_bTrunkLightShortCirErrorFlag' */
  (void) Rte_Write_gDiag_bTrunkLightShortCirErrorFlag_Val
    (IntLamp_ComCnvRx_ConstB.Constant4);

  /* Outport: '<Root>/gDiag_bTrunkLightOpenCirErrorFlag' */
  (void) Rte_Write_gDiag_bTrunkLightOpenCirErrorFlag_Val
    (IntLamp_ComCnvRx_ConstB.Constant5);

  /* Outport: '<Root>/gDiag_bRLCourtesyLightShortCirErrorFlag' */
  (void) Rte_Write_gDiag_bRLCourtesyLightShortCirErrorFlag_Val
    (IntLamp_ComCnvRx_ConstB.Constant1);

  /* Outport: '<Root>/gDiag_bRLCourtesyLightOpenCirErrorFlag' */
  (void) Rte_Write_gDiag_bRLCourtesyLightOpenCirErrorFlag_Val
    (IntLamp_ComCnvRx_ConstB.Constant2);

  /* Outport: '<Root>/gDiag_bRRCourtesyLightShortCirErrorFlag' */
  (void) Rte_Write_gDiag_bRRCourtesyLightShortCirErrorFlag_Val
    (IntLamp_ComCnvRx_ConstB.Constant3);

  /* Outport: '<Root>/gDiag_bRRCourtesyLightOpenCirErrorFlag' */
  (void) Rte_Write_gDiag_bRRCourtesyLightOpenCirErrorFlag_Val
    (IntLamp_ComCnvRx_ConstB.Constant6);

  /* Outport: '<Root>/gDiag_bReBkgLightPowerShortCirErrorFlag' */
  (void) Rte_Write_gDiag_bReBkgLightPowerShortCirErrorFlag_Val
    (IntLamp_ComCnvRx_ConstB.Constant7);

  /* Outport: '<Root>/gDiag_bReBkgLightPowerOpenCirErrorFlag' */
  (void) Rte_Write_gDiag_bReBkgLightPowerOpenCirErrorFlag_Val
    (IntLamp_ComCnvRx_ConstB.Constant8);

  /* Outport: '<Root>/gCAN_u8IL_CtrCmdTrunkLight' */
  (void) Rte_Write_gCAN_u8IL_CtrCmdTrunkLight_Val(tmpRead);

  /* Outport: '<Root>/gCAN_u8IL_CtrModeTrunkLight' */
  (void) Rte_Write_gCAN_u8IL_CtrModeTrunkLight_Val(tmpRead_0);

  /* Outport: '<Root>/gCAN_u8IL_FlickerCntTrunkLight' */
  (void) Rte_Write_gCAN_u8IL_FlickerCntTrunkLight_Val(tmpRead_1);

  /* Outport: '<Root>/gCAN_u8IL_TargetBriTrunkLight' */
  (void) Rte_Write_gCAN_u8IL_TargetBriTrunkLight_Val(tmpRead_2);

  /* Outport: '<Root>/gCAN_u8IL_SlopeParaTrunkLight' */
  (void) Rte_Write_gCAN_u8IL_SlopeParaTrunkLight_Val(tmpRead_3);

  /* Outport: '<Root>/gCAN_u8IL_FlickerOnTTrunkLight' */
  (void) Rte_Write_gCAN_u8IL_FlickerOnTTrunkLight_Val(tmpRead_4);

  /* Outport: '<Root>/gCAN_u8IL_FlickerOffTTrunkLight' */
  (void) Rte_Write_gCAN_u8IL_FlickerOffTTrunkLight_Val(tmpRead_5);

  /* Outport: '<Root>/gCAN_u8IL_TimerEnTrunkLight' */
  (void) Rte_Write_gCAN_u8IL_TimerEnTrunkLight_Val(tmpRead_6);

  /* Outport: '<Root>/gCAN_u8IL_TimerActionTrunkLight' */
  (void) Rte_Write_gCAN_u8IL_TimerActionTrunkLight_Val(tmpRead_7);

  /* Outport: '<Root>/gCAN_u16IL_TimerTriTimeTrunkLight' */
  (void) Rte_Write_gCAN_u16IL_TimerTriTimeTrunkLight_Val(tmpRead_8);

  /* Outport: '<Root>/gCAN_u8IL_TimerActionModeTrunkLight' */
  (void) Rte_Write_gCAN_u8IL_TimerActionModeTrunkLight_Val(tmpRead_9);

  /* Outport: '<Root>/gCAN_u8IL_TimerGradientTimeTrunkLight' */
  (void) Rte_Write_gCAN_u8IL_TimerGradientTimeTrunkLight_Val(tmpRead_a);

  /* Outport: '<Root>/gCAN_u8IL_CtrCmdCourtesyLightRL' */
  (void) Rte_Write_gCAN_u8IL_CtrCmdCourtesyLightRL_Val(tmpRead_b);

  /* Outport: '<Root>/gCAN_u8IL_CtrModeCourtesyLightRL' */
  (void) Rte_Write_gCAN_u8IL_CtrModeCourtesyLightRL_Val(tmpRead_c);

  /* Outport: '<Root>/gCAN_u8IL_FlickerCntCourtesyLightRL' */
  (void) Rte_Write_gCAN_u8IL_FlickerCntCourtesyLightRL_Val(tmpRead_d);

  /* Outport: '<Root>/gCAN_u8IL_TargetBriCourtesyLightRL' */
  (void) Rte_Write_gCAN_u8IL_TargetBriCourtesyLightRL_Val(tmpRead_e);

  /* Outport: '<Root>/gCAN_u8IL_SlopeParaCourtesyLightRL' */
  (void) Rte_Write_gCAN_u8IL_SlopeParaCourtesyLightRL_Val(tmpRead_f);

  /* Outport: '<Root>/gCAN_u8IL_FlickerOnTCourtesyLightRL' */
  (void) Rte_Write_gCAN_u8IL_FlickerOnTCourtesyLightRL_Val(tmpRead_g);

  /* Outport: '<Root>/gCAN_u8IL_FlickerOffTCourtesyLightRL' */
  (void) Rte_Write_gCAN_u8IL_FlickerOffTCourtesyLightRL_Val(tmpRead_h);

  /* Outport: '<Root>/gCAN_u8IL_TimerEnCourtesyLightRL' */
  (void) Rte_Write_gCAN_u8IL_TimerEnCourtesyLightRL_Val(tmpRead_i);

  /* Outport: '<Root>/gCAN_u8IL_TimerActionCourtesyLightRL' */
  (void) Rte_Write_gCAN_u8IL_TimerActionCourtesyLightRL_Val(tmpRead_j);

  /* Outport: '<Root>/gCAN_u16IL_TimerTriTimeCourtesyLightRL' */
  (void) Rte_Write_gCAN_u16IL_TimerTriTimeCourtesyLightRL_Val(tmpRead_k);

  /* Outport: '<Root>/gCAN_u8IL_TimerActionModeCourtesyLightRL' */
  (void) Rte_Write_gCAN_u8IL_TimerActionModeCourtesyLightRL_Val(tmpRead_l);

  /* Outport: '<Root>/gCAN_u8IL_TimerGradientTimeCourtesyLightRL' */
  (void) Rte_Write_gCAN_u8IL_TimerGradientTimeCourtesyLightRL_Val(tmpRead_m);

  /* Outport: '<Root>/gCAN_u8IL_CtrCmdCourtesyLightRR' */
  (void) Rte_Write_gCAN_u8IL_CtrCmdCourtesyLightRR_Val(tmpRead_n);

  /* Outport: '<Root>/gCAN_u8IL_CtrModeCourtesyLightRR' */
  (void) Rte_Write_gCAN_u8IL_CtrModeCourtesyLightRR_Val(tmpRead_o);

  /* Outport: '<Root>/gCAN_u8IL_FlickerCntCourtesyLightRR' */
  (void) Rte_Write_gCAN_u8IL_FlickerCntCourtesyLightRR_Val(tmpRead_p);

  /* Outport: '<Root>/gCAN_u8IL_TargetBriCourtesyLightRR' */
  (void) Rte_Write_gCAN_u8IL_TargetBriCourtesyLightRR_Val(tmpRead_q);

  /* Outport: '<Root>/gCAN_u8IL_SlopeParaCourtesyLightRR' */
  (void) Rte_Write_gCAN_u8IL_SlopeParaCourtesyLightRR_Val(tmpRead_r);

  /* Outport: '<Root>/gCAN_u8IL_FlickerOnTCourtesyLightRR' */
  (void) Rte_Write_gCAN_u8IL_FlickerOnTCourtesyLightRR_Val(tmpRead_s);

  /* Outport: '<Root>/gCAN_u8IL_FlickerOffTCourtesyLightRR' */
  (void) Rte_Write_gCAN_u8IL_FlickerOffTCourtesyLightRR_Val(tmpRead_t);

  /* Outport: '<Root>/gCAN_u8IL_TimerEnCourtesyLightRR' */
  (void) Rte_Write_gCAN_u8IL_TimerEnCourtesyLightRR_Val(tmpRead_u);

  /* Outport: '<Root>/gCAN_u8IL_TimerActionCourtesyLightRR' */
  (void) Rte_Write_gCAN_u8IL_TimerActionCourtesyLightRR_Val(tmpRead_v);

  /* Outport: '<Root>/gCAN_u16IL_TimerTriTimeCourtesyLightRR' */
  (void) Rte_Write_gCAN_u16IL_TimerTriTimeCourtesyLightRR_Val(tmpRead_w);

  /* Outport: '<Root>/gCAN_u8IL_TimerActionModeCourtesyLightRR' */
  (void) Rte_Write_gCAN_u8IL_TimerActionModeCourtesyLightRR_Val(tmpRead_x);

  /* Outport: '<Root>/gCAN_u8IL_TimerGradientTimeCourtesyLightRR' */
  (void) Rte_Write_gCAN_u8IL_TimerGradientTimeCourtesyLightRR_Val(tmpRead_y);

  /* Outport: '<Root>/gCAN_u8IL_CtrCmdBKGLight' */
  (void) Rte_Write_gCAN_u8IL_CtrCmdBKGLight_Val(tmpRead_z);

  /* Outport: '<Root>/gCAN_u8IL_CtrModeBKGLight' */
  (void) Rte_Write_gCAN_u8IL_CtrModeBKGLight_Val(tmpRead_10);

  /* Outport: '<Root>/gCAN_u8IL_FlickerCntBKGLight' */
  (void) Rte_Write_gCAN_u8IL_FlickerCntBKGLight_Val(tmpRead_11);

  /* Outport: '<Root>/gCAN_u8IL_TargetBriBKGLight' */
  (void) Rte_Write_gCAN_u8IL_TargetBriBKGLight_Val(tmpRead_12);

  /* Outport: '<Root>/gCAN_u8IL_SlopeParaBKGLight' */
  (void) Rte_Write_gCAN_u8IL_SlopeParaBKGLight_Val(tmpRead_13);

  /* Outport: '<Root>/gCAN_u8IL_FlickerOnTBKGLight' */
  (void) Rte_Write_gCAN_u8IL_FlickerOnTBKGLight_Val(tmpRead_14);

  /* Outport: '<Root>/gCAN_u8IL_FlickerOffTBKGLight' */
  (void) Rte_Write_gCAN_u8IL_FlickerOffTBKGLight_Val(tmpRead_15);

  /* Outport: '<Root>/gCAN_u8IL_TimerEnBKGLight' */
  (void) Rte_Write_gCAN_u8IL_TimerEnBKGLight_Val(tmpRead_16);

  /* Outport: '<Root>/gCAN_u8IL_TimerActionBKGLight' */
  (void) Rte_Write_gCAN_u8IL_TimerActionBKGLight_Val(tmpRead_17);

  /* Outport: '<Root>/gCAN_u16IL_TimerTriTimeBKGLight' */
  (void) Rte_Write_gCAN_u16IL_TimerTriTimeBKGLight_Val(tmpRead_18);

  /* Outport: '<Root>/gCAN_u8IL_TimerActionModeBKGLight' */
  (void) Rte_Write_gCAN_u8IL_TimerActionModeBKGLight_Val(tmpRead_19);

  /* Outport: '<Root>/gCAN_u8IL_TimerGradientTimeBKGLight' */
  (void) Rte_Write_gCAN_u8IL_TimerGradientTimeBKGLight_Val(tmpRead_1a);

  /* Outport: '<Root>/gASI_bIL_CtrCmdTrunkLight_TimeOut' */
  (void) Rte_Write_gASI_bIL_CtrCmdTrunkLight_TimeOut_Val(tmpRead_1b);
}

/* Model initialize function */
void IntLamp_ComCnvRx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
