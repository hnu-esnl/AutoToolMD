/*
 * File: ChrgMngt_ComCnvTx.c
 *
 * Code generated for Simulink model 'ChrgMngt_ComCnvTx'.
 *
 * Model version                  : 1.32
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Oct 24 17:06:19 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ChrgMngt_ComCnvTx.h"
#include "ChrgMngt_ComCnvTx_private.h"

/* Model step function for TID1 */
FUNC(void, ChrgMngt_ComCnvTx_CODE) ChrgMngt_ComCnvTx_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  uint8 rtb_MultiportSwitch;
  boolean rtb_LogicalOperator14;
  boolean rtb_DTC_AcChrgrIntkTSRCMax_Ge_l;
  boolean rtb_LogicalOperator15;
  boolean rtb_DTC_AcChrgrIntkTSRCMin_Ge_k;
  boolean rtb_LogicalOperator16;
  boolean rtb_DTC_AcChrgrIntkT2SRCMax_G_d;
  boolean rtb_LogicalOperator17;
  boolean rtb_DTC_AcChrgrIntkT2SRCMin_G_b;
  boolean rtb_LogicalOperator18;
  boolean rtb_DTC_DcChrgrIntkTSRCMax_G_mb;
  boolean rtb_LogicalOperator19;
  boolean rtb_DTC_DcChrgrIntkTSRCMin_Ge_l;
  boolean rtb_LogicalOperator20;
  boolean rtb_DTC_DcChrgrIntkT2SRCMax_G_l;
  boolean rtb_LogicalOperator21;
  boolean rtb_DTC_DcChrgrIntkT2SRCMin_G_n;
  boolean rtb_DTC_IntlckChrgPlgHBrgOL2__o;
  boolean rtb_LogicalOperator1;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCB1_h;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCB1_b;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCG1_e;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCG1_c;
  uint8 rtb_Switch12;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCB_ld;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCB2_a;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCG2_g;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCG2_j;
  boolean rtb_DTC_ChgrPlugLockSnsrErr_G_l;
  boolean rtb_DTC_ChgrPlugLockSnsrErr_G_p;
  boolean rtb_DTC_DcChrgrPileU1SRCMax_G_e;
  boolean rtb_DTC_DcChrgrPileU1SRCMax_G_a;
  boolean rtb_DTC_DcChrgrPileU1SRCMin_G_n;
  boolean rtb_DTC_DcChrgrPileU1SRCMin_G_l;
  boolean rtb_DTC_DcChrgrPileU2SRCMax_G_m;
  boolean rtb_DTC_DcChrgrPileU2SRCMax_G_i;
  boolean rtb_DTC_DcChrgrPileU2SRCMin_G_f;
  boolean rtb_DTC_DcChrgrPileU2SRCMin_G_h;
  boolean rtb_DTC_DcChrgrPileU3SRCMax_G_a;
  boolean rtb_DTC_DcChrgrPileU3SRCMax_G_j;
  boolean rtb_DTC_DcChrgrPileU3SRCMin_G_g;
  boolean rtb_DTC_DcChrgrPileU3SRCMin_G_d;
  uint16 Saturation3;
  uint8 SignalConversion10;
  float32 tmp;
  sint32 tmp_0;
  uint16 tmp_1;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgMngt_ComCnvTx_Runnable_10ms_sys'
   */
  /* FunctionCaller: '<S1>/DTC_AcChrgrIntkTSRCMax_GetEventFailed' */
  Rte_Call_DTC_AcChrgrIntkTSRCMax_GetEventFailed(&rtb_LogicalOperator14);

  /* FunctionCaller: '<S1>/DTC_AcChrgrIntkTSRCMax_GetEventTested' */
  Rte_Call_DTC_AcChrgrIntkTSRCMax_GetEventTested(&rtb_DTC_AcChrgrIntkTSRCMax_Ge_l);

  /* FunctionCaller: '<S1>/DTC_AcChrgrIntkTSRCMin_GetEventFailed' */
  Rte_Call_DTC_AcChrgrIntkTSRCMin_GetEventFailed(&rtb_LogicalOperator15);

  /* FunctionCaller: '<S1>/DTC_AcChrgrIntkTSRCMin_GetEventTested' */
  Rte_Call_DTC_AcChrgrIntkTSRCMin_GetEventTested(&rtb_DTC_AcChrgrIntkTSRCMin_Ge_k);

  /* FunctionCaller: '<S1>/DTC_AcChrgrIntkT2SRCMax_GetEventFailed' */
  Rte_Call_DTC_AcChrgrIntkT2SRCMax_GetEventFailed(&rtb_LogicalOperator16);

  /* FunctionCaller: '<S1>/DTC_AcChrgrIntkT2SRCMax_GetEventTested' */
  Rte_Call_DTC_AcChrgrIntkT2SRCMax_GetEventTested(&rtb_DTC_AcChrgrIntkT2SRCMax_G_d);

  /* FunctionCaller: '<S1>/DTC_AcChrgrIntkT2SRCMin_GetEventFailed' */
  Rte_Call_DTC_AcChrgrIntkT2SRCMin_GetEventFailed(&rtb_LogicalOperator17);

  /* FunctionCaller: '<S1>/DTC_AcChrgrIntkT2SRCMin_GetEventTested' */
  Rte_Call_DTC_AcChrgrIntkT2SRCMin_GetEventTested(&rtb_DTC_AcChrgrIntkT2SRCMin_G_b);

  /* FunctionCaller: '<S1>/DTC_DcChrgrIntkTSRCMax_GetEventFailed' */
  Rte_Call_DTC_DcChrgrIntkTSRCMax_GetEventFailed(&rtb_LogicalOperator18);

  /* FunctionCaller: '<S1>/DTC_DcChrgrIntkTSRCMax_GetEventTested' */
  Rte_Call_DTC_DcChrgrIntkTSRCMax_GetEventTested(&rtb_DTC_DcChrgrIntkTSRCMax_G_mb);

  /* FunctionCaller: '<S1>/DTC_DcChrgrIntkTSRCMin_GetEventFailed' */
  Rte_Call_DTC_DcChrgrIntkTSRCMin_GetEventFailed(&rtb_LogicalOperator19);

  /* FunctionCaller: '<S1>/DTC_DcChrgrIntkTSRCMin_GetEventTested' */
  Rte_Call_DTC_DcChrgrIntkTSRCMin_GetEventTested(&rtb_DTC_DcChrgrIntkTSRCMin_Ge_l);

  /* FunctionCaller: '<S1>/DTC_DcChrgrIntkT2SRCMax_GetEventFailed' */
  Rte_Call_DTC_DcChrgrIntkT2SRCMax_GetEventFailed(&rtb_LogicalOperator20);

  /* FunctionCaller: '<S1>/DTC_DcChrgrIntkT2SRCMax_GetEventTested' */
  Rte_Call_DTC_DcChrgrIntkT2SRCMax_GetEventTested(&rtb_DTC_DcChrgrIntkT2SRCMax_G_l);

  /* FunctionCaller: '<S1>/DTC_DcChrgrIntkT2SRCMin_GetEventFailed' */
  Rte_Call_DTC_DcChrgrIntkT2SRCMin_GetEventFailed(&rtb_LogicalOperator21);

  /* FunctionCaller: '<S1>/DTC_DcChrgrIntkT2SRCMin_GetEventTested' */
  Rte_Call_DTC_DcChrgrIntkT2SRCMin_GetEventTested(&rtb_DTC_DcChrgrIntkT2SRCMin_G_n);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgOL1_GetEventFailed' */
  Rte_Call_DTC_IntlckChrgPlgHBrgOL1_GetEventFailed(&rtb_DTC_IntlckChrgPlgHBrgOL2__o);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgOL1_GetEventTested' */
  Rte_Call_DTC_IntlckChrgPlgHBrgOL1_GetEventTested(&rtb_LogicalOperator1);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCB1_GetEventFailed' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCB1_GetEventFailed(&rtb_DTC_IntlckChrgPlgHBrgSCB1_h);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCB1_GetEventTested' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCB1_GetEventTested(&rtb_DTC_IntlckChrgPlgHBrgSCB1_b);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCG1_GetEventFailed' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCG1_GetEventFailed(&rtb_DTC_IntlckChrgPlgHBrgSCG1_e);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCG1_GetEventTested' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCG1_GetEventTested(&rtb_DTC_IntlckChrgPlgHBrgSCG1_c);

  /* Switch: '<S1>/Switch8' incorporates:
   *  Logic: '<S1>/LogicalOperator29'
   *  Logic: '<S1>/LogicalOperator30'
   *  Logic: '<S1>/LogicalOperator31'
   *  Switch: '<S1>/Switch10'
   *  Switch: '<S1>/Switch9'
   */
  if (rtb_DTC_IntlckChrgPlgHBrgOL2__o && rtb_LogicalOperator1) {
    /* SignalConversion: '<S1>/SignalConversion10' incorporates:
     *  Constant: '<S1>/Constant25'
     */
    SignalConversion10 = 1U;
  } else if (rtb_DTC_IntlckChrgPlgHBrgSCB1_h && rtb_DTC_IntlckChrgPlgHBrgSCB1_b) {
    /* Switch: '<S1>/Switch9' incorporates:
     *  Constant: '<S1>/Constant31'
     *  SignalConversion: '<S1>/SignalConversion10'
     */
    SignalConversion10 = 2U;
  } else if (rtb_DTC_IntlckChrgPlgHBrgSCG1_e && rtb_DTC_IntlckChrgPlgHBrgSCG1_c) {
    /* Switch: '<S1>/Switch10' incorporates:
     *  Constant: '<S1>/Constant32'
     *  SignalConversion: '<S1>/SignalConversion10'
     *  Switch: '<S1>/Switch9'
     */
    SignalConversion10 = 3U;
  } else {
    /* SignalConversion: '<S1>/SignalConversion10' incorporates:
     *  Constant: '<S1>/Constant33'
     *  Switch: '<S1>/Switch10'
     *  Switch: '<S1>/Switch9'
     */
    SignalConversion10 = 0U;
  }

  /* End of Switch: '<S1>/Switch8' */

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgOL2_GetEventFailed' */
  Rte_Call_DTC_IntlckChrgPlgHBrgOL2_GetEventFailed(&rtb_LogicalOperator1);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgOL2_GetEventTested' */
  Rte_Call_DTC_IntlckChrgPlgHBrgOL2_GetEventTested(&rtb_DTC_IntlckChrgPlgHBrgOL2__o);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCB2_GetEventFailed' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCB2_GetEventFailed(&rtb_DTC_IntlckChrgPlgHBrgSCB_ld);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCB2_GetEventTested' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCB2_GetEventTested(&rtb_DTC_IntlckChrgPlgHBrgSCB2_a);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCG2_GetEventFailed' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCG2_GetEventFailed(&rtb_DTC_IntlckChrgPlgHBrgSCG2_g);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCG2_GetEventTested' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCG2_GetEventTested(&rtb_DTC_IntlckChrgPlgHBrgSCG2_j);

  /* Switch: '<S1>/Switch12' incorporates:
   *  Constant: '<S1>/Constant36'
   *  Logic: '<S1>/LogicalOperator32'
   *  Logic: '<S1>/LogicalOperator33'
   *  Logic: '<S1>/LogicalOperator34'
   *  Switch: '<S1>/Switch11'
   *  Switch: '<S1>/Switch13'
   */
  if (rtb_LogicalOperator1 && rtb_DTC_IntlckChrgPlgHBrgOL2__o) {
    rtb_Switch12 = 1U;
  } else if (rtb_DTC_IntlckChrgPlgHBrgSCB_ld && rtb_DTC_IntlckChrgPlgHBrgSCB2_a) {
    /* Switch: '<S1>/Switch13' incorporates:
     *  Constant: '<S1>/Constant37'
     */
    rtb_Switch12 = 2U;
  } else if (rtb_DTC_IntlckChrgPlgHBrgSCG2_g && rtb_DTC_IntlckChrgPlgHBrgSCG2_j) {
    /* Switch: '<S1>/Switch11' incorporates:
     *  Constant: '<S1>/Constant38'
     *  Switch: '<S1>/Switch13'
     */
    rtb_Switch12 = 3U;
  } else {
    /* Switch: '<S1>/Switch13' incorporates:
     *  Constant: '<S1>/Constant39'
     *  Switch: '<S1>/Switch11'
     */
    rtb_Switch12 = 0U;
  }

  /* End of Switch: '<S1>/Switch12' */

  /* FunctionCaller: '<S1>/DTC_ChgrPlugLockSnsrErr_GetEventFailed' */
  Rte_Call_DTC_ChgrPlugLockSnsrErr_GetEventFailed(&rtb_DTC_ChgrPlugLockSnsrErr_G_l);

  /* FunctionCaller: '<S1>/DTC_ChgrPlugLockSnsrErr_GetEventTested' */
  Rte_Call_DTC_ChgrPlugLockSnsrErr_GetEventTested(&rtb_DTC_ChgrPlugLockSnsrErr_G_p);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU1SRCMax_GetEventFailed' */
  Rte_Call_DTC_DcChrgrPileU1SRCMax_GetEventFailed(&rtb_DTC_DcChrgrPileU1SRCMax_G_e);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU1SRCMax_GetEventTested' */
  Rte_Call_DTC_DcChrgrPileU1SRCMax_GetEventTested(&rtb_DTC_DcChrgrPileU1SRCMax_G_a);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU1SRCMin_GetEventFailed' */
  Rte_Call_DTC_DcChrgrPileU1SRCMin_GetEventFailed(&rtb_DTC_DcChrgrPileU1SRCMin_G_n);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU1SRCMin_GetEventTested' */
  Rte_Call_DTC_DcChrgrPileU1SRCMin_GetEventTested(&rtb_DTC_DcChrgrPileU1SRCMin_G_l);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU2SRCMax_GetEventFailed' */
  Rte_Call_DTC_DcChrgrPileU2SRCMax_GetEventFailed(&rtb_DTC_DcChrgrPileU2SRCMax_G_m);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU2SRCMax_GetEventTested' */
  Rte_Call_DTC_DcChrgrPileU2SRCMax_GetEventTested(&rtb_DTC_DcChrgrPileU2SRCMax_G_i);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU2SRCMin_GetEventFailed' */
  Rte_Call_DTC_DcChrgrPileU2SRCMin_GetEventFailed(&rtb_DTC_DcChrgrPileU2SRCMin_G_f);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU2SRCMin_GetEventTested' */
  Rte_Call_DTC_DcChrgrPileU2SRCMin_GetEventTested(&rtb_DTC_DcChrgrPileU2SRCMin_G_h);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU3SRCMax_GetEventFailed' */
  Rte_Call_DTC_DcChrgrPileU3SRCMax_GetEventFailed(&rtb_DTC_DcChrgrPileU3SRCMax_G_a);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU3SRCMax_GetEventTested' */
  Rte_Call_DTC_DcChrgrPileU3SRCMax_GetEventTested(&rtb_DTC_DcChrgrPileU3SRCMax_G_j);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU3SRCMin_GetEventFailed' */
  Rte_Call_DTC_DcChrgrPileU3SRCMin_GetEventFailed(&rtb_DTC_DcChrgrPileU3SRCMin_G_g);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU3SRCMin_GetEventTested' */
  Rte_Call_DTC_DcChrgrPileU3SRCMin_GetEventTested(&rtb_DTC_DcChrgrPileU3SRCMin_G_d);

  /* Logic: '<S1>/LogicalOperator21' */
  rtb_LogicalOperator21 = (rtb_LogicalOperator21 && rtb_DTC_DcChrgrIntkT2SRCMin_G_n);

  /* Logic: '<S1>/LogicalOperator20' */
  rtb_LogicalOperator20 = (rtb_LogicalOperator20 && rtb_DTC_DcChrgrIntkT2SRCMax_G_l);

  /* Logic: '<S1>/LogicalOperator19' */
  rtb_LogicalOperator19 = (rtb_LogicalOperator19 && rtb_DTC_DcChrgrIntkTSRCMin_Ge_l);

  /* Logic: '<S1>/LogicalOperator18' */
  rtb_LogicalOperator18 = (rtb_LogicalOperator18 && rtb_DTC_DcChrgrIntkTSRCMax_G_mb);

  /* Logic: '<S1>/LogicalOperator17' */
  rtb_LogicalOperator17 = (rtb_LogicalOperator17 && rtb_DTC_AcChrgrIntkT2SRCMin_G_b);

  /* Logic: '<S1>/LogicalOperator16' */
  rtb_LogicalOperator16 = (rtb_LogicalOperator16 && rtb_DTC_AcChrgrIntkT2SRCMax_G_d);

  /* Logic: '<S1>/LogicalOperator15' */
  rtb_LogicalOperator15 = (rtb_LogicalOperator15 && rtb_DTC_AcChrgrIntkTSRCMin_Ge_k);

  /* Logic: '<S1>/LogicalOperator14' */
  rtb_LogicalOperator14 = (rtb_LogicalOperator14 && rtb_DTC_AcChrgrIntkTSRCMax_Ge_l);

  /* Sum: '<S1>/Add3' incorporates:
   *  Constant: '<S1>/Constant20'
   *  Inport: '<Root>/DcChrgrIntkT2_t_Val'
   */
  tmp_0 = Mfx_Add_s32s32_s32(Mfx_Add_s32s32_s32(-349619, Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_DcChrgrIntkT2_t_Val() << 7), 400896) >> 7;
  if (tmp_0 > 32767) {
    tmp_0 = 32767;
  } else {
    if (tmp_0 < -32768) {
      tmp_0 = -32768;
    }
  }

  /* DataTypeConversion: '<S1>/DataTypeConversion11' incorporates:
   *  Constant: '<S1>/Constant19'
   *  Product: '<S1>/Product3'
   *  Sum: '<S1>/Add3'
   */
  tmp = ((float32)tmp_0 * 0.1F - 273.14F) * 10.0F;
  if (tmp >= 0.0F) {
    tmp_1 = (uint16)tmp;
  } else {
    tmp_1 = 0U;
  }

  /* End of DataTypeConversion: '<S1>/DataTypeConversion11' */

  /* Saturate: '<S1>/Saturation3' */
  Saturation3 = Mfx_Min_u16(tmp_1, 1650U);

  /* MultiPortSwitch: '<S1>/MultiportSwitch' incorporates:
   *  Constant: '<S1>/Constant21'
   *  Constant: '<S1>/Constant23'
   *  Constant: '<S1>/Constant24'
   *  Constant: '<S1>/Constant27'
   *  Constant: '<S1>/Constant28'
   *  Inport: '<Root>/ChrgPlgPosn_st_Val'
   */
  switch (Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_ChrgPlgPosn_st_Val()) {
   case 0:
    rtb_MultiportSwitch = 1U;
    break;

   case 1:
    rtb_MultiportSwitch = 2U;
    break;

   case 2:
    rtb_MultiportSwitch = 4U;
    break;

   case 3:
    rtb_MultiportSwitch = 3U;
    break;

   default:
    rtb_MultiportSwitch = 0U;
    break;
  }

  /* End of MultiPortSwitch: '<S1>/MultiportSwitch' */

  /* RelationalOperator: '<S1>/RelationalOperator' incorporates:
   *  Inport: '<Root>/ChrgIndcr_rIndcr1_Val'
   */
  rtb_DTC_AcChrgrIntkTSRCMax_Ge_l = (Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_ChrgIndcr_rIndcr1_Val() > 0);

  /* RelationalOperator: '<S1>/RelationalOperator1' incorporates:
   *  Inport: '<Root>/ChrgIndcr_rIndcr2_Val'
   */
  rtb_DTC_AcChrgrIntkTSRCMin_Ge_k = (Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_ChrgIndcr_rIndcr2_Val() > 0);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' */

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgMngt_ComCnvTx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/ComTx_bACChgL1TempVoltOvr_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion2'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bACChgL1TempVoltOvr_Val(rtb_LogicalOperator14);

  /* Outport: '<Root>/ComTx_bACChgL1TempVoltUnd_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion3'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bACChgL1TempVoltUnd_Val(rtb_LogicalOperator15);

  /* Outport: '<Root>/ComTx_bACChgNTempVoltOvr_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion4'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bACChgNTempVoltOvr_Val(rtb_LogicalOperator16);

  /* Outport: '<Root>/ComTx_bACChgNTempVoltUnd_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion5'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bACChgNTempVoltUnd_Val(rtb_LogicalOperator17);

  /* Outport: '<Root>/ComTx_bACEleclocksSt1_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion10'
   *  Inport: '<Root>/ChrgPlgPosn_stRaw_Val'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bACEleclocksSt1_Val(Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_ChrgPlgPosn_stRaw_Val() != 0);

  /* Outport: '<Root>/ComTx_bACEleclocksSt2_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion12'
   *  Inport: '<Root>/ChrgPlgPosn_stRaw2_Val'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bACEleclocksSt2_Val(Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_ChrgPlgPosn_stRaw2_Val() != 0);

  /* Outport: '<Root>/ComTx_bDCChgDC1TempVoltOvr_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion6'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bDCChgDC1TempVoltOvr_Val(rtb_LogicalOperator18);

  /* Outport: '<Root>/ComTx_bDCChgDC1TempVoltUnd_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion7'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bDCChgDC1TempVoltUnd_Val(rtb_LogicalOperator19);

  /* Outport: '<Root>/ComTx_bDCChgDC2TempVoltOvr_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion8'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bDCChgDC2TempVoltOvr_Val(rtb_LogicalOperator20);

  /* Outport: '<Root>/ComTx_bDCChgDC2TempVoltUnd_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion9'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bDCChgDC2TempVoltUnd_Val(rtb_LogicalOperator21);

  /* Outport: '<Root>/ComTx_bDCchgpileA1voltVD_Val' incorporates:
   *  Constant: '<S1>/TRUE'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bDCchgpileA1voltVD_Val(true);

  /* Outport: '<Root>/ComTx_bDCchgpileCC1voltVD_Val' incorporates:
   *  Constant: '<S1>/TRUE1'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bDCchgpileCC1voltVD_Val(true);

  /* Outport: '<Root>/ComTx_bDCchgpileCC2voltVD_Val' incorporates:
   *  Constant: '<S1>/TRUE2'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bDCchgpileCC2voltVD_Val(true);

  /* Outport: '<Root>/ComTx_bEL_BlueChargeLightFaultSt_Val_write' incorporates:
   *  Inport: '<Root>/ChrgIndcr_bBlueFaultSt_Val'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtChrgIndcr_bBlueFaultSt_Val_readOutport1'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bEL_BlueChargeLightFaultSt_Val(Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_ChrgIndcr_bBlueFaultSt_Val());

  /* Outport: '<Root>/ComTx_bEL_GreenChargeLightFaultSt_Val_write' incorporates:
   *  Inport: '<Root>/ChrgIndcr_bGreenFaultSt_Val'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtChrgIndcr_bGreenFaultSt_Val_readOutport1'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bEL_GreenChargeLightFaultSt_Val(Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_ChrgIndcr_bGreenFaultSt_Val());

  /* Outport: '<Root>/ComTx_bEL_RedChargeLightFaultSt_Val_write' incorporates:
   *  Inport: '<Root>/ChrgIndcr_bRedFaultSt_Val'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtChrgIndcr_bRedFaultSt_Val_readOutport1'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_bEL_RedChargeLightFaultSt_Val(Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_ChrgIndcr_bRedFaultSt_Val());

  /* Sum: '<S1>/Add6' incorporates:
   *  Constant: '<S1>/Constant35'
   *  Inport: '<Root>/AcChrgrIntkT_t_Val'
   */
  tmp_0 = Mfx_Add_s32s32_s32(Mfx_Add_s32s32_s32(-349619, Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_AcChrgrIntkT_t_Val() << 7), 400896) >> 7;
  if (tmp_0 > 32767) {
    tmp_0 = 32767;
  } else {
    if (tmp_0 < -32768) {
      tmp_0 = -32768;
    }
  }

  /* DataTypeConversion: '<S1>/DataTypeConversion5' incorporates:
   *  Constant: '<S1>/Constant34'
   *  Product: '<S1>/Product11'
   *  Sum: '<S1>/Add6'
   */
  tmp = ((float32)tmp_0 * 0.1F - 273.14F) * 10.0F;
  if (tmp >= 0.0F) {
    tmp_1 = (uint16)tmp;
  } else {
    tmp_1 = 0U;
  }

  /* End of DataTypeConversion: '<S1>/DataTypeConversion5' */

  /* Outport: '<Root>/ComTx_u16ACChgL1Temp_Val' incorporates:
   *  Saturate: '<S1>/Saturation'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u16ACChgL1Temp_Val(Mfx_Min_u16(tmp_1, 1650U));

  /* Sum: '<S1>/Add1' incorporates:
   *  Constant: '<S1>/Constant16'
   *  Inport: '<Root>/AcChrgrIntkT2_t_Val'
   */
  tmp_0 = Mfx_Add_s32s32_s32(Mfx_Add_s32s32_s32(-349619, Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_AcChrgrIntkT2_t_Val() << 7), 400896) >> 7;
  if (tmp_0 > 32767) {
    tmp_0 = 32767;
  } else {
    if (tmp_0 < -32768) {
      tmp_0 = -32768;
    }
  }

  /* DataTypeConversion: '<S1>/DataTypeConversion6' incorporates:
   *  Constant: '<S1>/Constant15'
   *  Product: '<S1>/Product1'
   *  Sum: '<S1>/Add1'
   */
  tmp = ((float32)tmp_0 * 0.1F - 273.14F) * 10.0F;
  if (tmp >= 0.0F) {
    tmp_1 = (uint16)tmp;
  } else {
    tmp_1 = 0U;
  }

  /* End of DataTypeConversion: '<S1>/DataTypeConversion6' */

  /* Outport: '<Root>/ComTx_u16ACChgNTemp_Val' incorporates:
   *  Saturate: '<S1>/Saturation1'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u16ACChgNTemp_Val(Mfx_Min_u16(tmp_1, 1650U));

  /* Sum: '<S1>/Add2' incorporates:
   *  Constant: '<S1>/Constant18'
   *  Inport: '<Root>/DcChrgrIntkT_t_Val'
   */
  tmp_0 = Mfx_Add_s32s32_s32(Mfx_Add_s32s32_s32(-349619, Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_DcChrgrIntkT_t_Val() << 7), 400896) >> 7;
  if (tmp_0 > 32767) {
    tmp_0 = 32767;
  } else {
    if (tmp_0 < -32768) {
      tmp_0 = -32768;
    }
  }

  /* DataTypeConversion: '<S1>/DataTypeConversion9' incorporates:
   *  Constant: '<S1>/Constant17'
   *  Product: '<S1>/Product2'
   *  Sum: '<S1>/Add2'
   */
  tmp = ((float32)tmp_0 * 0.1F - 273.14F) * 10.0F;
  if (tmp >= 0.0F) {
    tmp_1 = (uint16)tmp;
  } else {
    tmp_1 = 0U;
  }

  /* End of DataTypeConversion: '<S1>/DataTypeConversion9' */

  /* Outport: '<Root>/ComTx_u16DCChgDC1Temp_Val' incorporates:
   *  Saturate: '<S1>/Saturation2'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u16DCChgDC1Temp_Val(Mfx_Min_u16(tmp_1, 1650U));

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' */

  /* Outport: '<Root>/ComTx_u16DCChgDC2emp_Val' */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u16DCChgDC2emp_Val(Saturation3);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgMngt_ComCnvTx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/ComTx_u16DCChgDC2Temp_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion1'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u16DCChgDC2Temp_Val(Saturation3);

  /* Outport: '<Root>/ComTx_u16DCchgpileA1volt_Val' incorporates:
   *  Constant: '<S1>/Constant22'
   *  DataTypeConversion: '<S1>/DataTypeConversion13'
   *  Inport: '<Root>/DcChrgrPileU1_uRaw_Val'
   *  Product: '<S1>/Divide'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u16DCchgpileA1volt_Val((uint16)((float32)Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_DcChrgrPileU1_uRaw_Val() / 100.0F));

  /* Outport: '<Root>/ComTx_u8ACChgL1TempVD_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion3'
   *  Logic: '<S1>/LogicalOperator'
   *  Logic: '<S1>/LogicalOperator1'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8ACChgL1TempVD_Val((uint8)((!rtb_LogicalOperator14) && (!rtb_LogicalOperator15)));

  /* Outport: '<Root>/ComTx_u8ACChgNTempVD_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion4'
   *  Logic: '<S1>/LogicalOperator2'
   *  Logic: '<S1>/LogicalOperator3'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8ACChgNTempVD_Val((uint8)((!rtb_LogicalOperator16) && (!rtb_LogicalOperator17)));

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' */

  /* Outport: '<Root>/ComTx_u8ACEleclocksSt_Val' */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8ACEleclocksSt_Val(rtb_MultiportSwitch);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgMngt_ComCnvTx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/ComTx_u8DCChgDC1TempVD_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion7'
   *  Logic: '<S1>/LogicalOperator4'
   *  Logic: '<S1>/LogicalOperator5'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8DCChgDC1TempVD_Val((uint8)((!rtb_LogicalOperator18) && (!rtb_LogicalOperator19)));

  /* Outport: '<Root>/ComTx_u8DCChgDC2TempVD_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion8'
   *  Logic: '<S1>/LogicalOperator6'
   *  Logic: '<S1>/LogicalOperator7'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8DCChgDC2TempVD_Val((uint8)((!rtb_LogicalOperator20) && (!rtb_LogicalOperator21)));

  /* DataTypeConversion: '<S1>/DataTypeConversion14' incorporates:
   *  Constant: '<S1>/Constant3'
   *  Inport: '<Root>/DcChrgrPileU2_uRaw_Val'
   *  Product: '<S1>/Divide1'
   */
  tmp = (float32)Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_DcChrgrPileU2_uRaw_Val() / 100.0F;
  if (tmp < 256.0F) {
    rtb_MultiportSwitch = (uint8)tmp;
  } else {
    rtb_MultiportSwitch = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S1>/DataTypeConversion14' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' */

  /* Outport: '<Root>/ComTx_u8DCchgpileCC1volt_Val' */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8DCchgpileCC1volt_Val(rtb_MultiportSwitch);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgMngt_ComCnvTx_Runnable_10ms_sys'
   */
  /* DataTypeConversion: '<S1>/DataTypeConversion15' incorporates:
   *  Constant: '<S1>/Constant4'
   *  Inport: '<Root>/DcChrgrPileU3_uRaw_Val'
   *  Product: '<S1>/Divide2'
   */
  tmp = (float32)Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_DcChrgrPileU3_uRaw_Val() / 100.0F;
  if (tmp < 256.0F) {
    rtb_MultiportSwitch = (uint8)tmp;
  } else {
    rtb_MultiportSwitch = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S1>/DataTypeConversion15' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' */

  /* Outport: '<Root>/ComTx_u8DCchgpileCC2volt_Val' */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8DCchgpileCC2volt_Val(rtb_MultiportSwitch);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgMngt_ComCnvTx_Runnable_10ms_sys'
   */
  /* Switch: '<S1>/Switch1' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant14'
   *  Inport: '<Root>/ChrgIndcr_rIndcr3_Val'
   *  Logic: '<S1>/LogicalOperator28'
   *  RelationalOperator: '<S1>/RelationalOperator2'
   *  Switch: '<S1>/Switch5'
   *  Switch: '<S1>/Switch6'
   *  Switch: '<S1>/Switch7'
   */
  if (rtb_DTC_AcChrgrIntkTSRCMax_Ge_l && rtb_DTC_AcChrgrIntkTSRCMin_Ge_k) {
    rtb_MultiportSwitch = 1U;
  } else if (rtb_DTC_AcChrgrIntkTSRCMax_Ge_l) {
    /* Switch: '<S1>/Switch5' incorporates:
     *  Constant: '<S1>/Constant7'
     */
    rtb_MultiportSwitch = 2U;
  } else if (rtb_DTC_AcChrgrIntkTSRCMin_Ge_k) {
    /* Switch: '<S1>/Switch6' incorporates:
     *  Constant: '<S1>/Constant8'
     *  Switch: '<S1>/Switch5'
     */
    rtb_MultiportSwitch = 3U;
  } else if (Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_ChrgIndcr_rIndcr3_Val() > 0) {
    /* Switch: '<S1>/Switch7' incorporates:
     *  Constant: '<S1>/Constant9'
     *  Switch: '<S1>/Switch5'
     *  Switch: '<S1>/Switch6'
     */
    rtb_MultiportSwitch = 4U;
  } else {
    rtb_MultiportSwitch = 0U;
  }

  /* End of Switch: '<S1>/Switch1' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' */

  /* Outport: '<Root>/ComTx_u8EL_IndChargeLightSt_Val' */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8EL_IndChargeLightSt_Val(rtb_MultiportSwitch);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgMngt_ComCnvTx_Runnable_10ms_sys'
   */
  /* RelationalOperator: '<S1>/RelationalOperator3' incorporates:
   *  Inport: '<Root>/IntlckChrgPlg_rActr_Val'
   *  RelationalOperator: '<S1>/RelationalOperator4'
   *  Switch: '<S1>/Switch2'
   */
  tmp_0 = Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_IntlckChrgPlg_rActr_Val();

  /* Switch: '<S1>/Switch2' incorporates:
   *  Constant: '<S1>/Constant10'
   *  Constant: '<S1>/Constant13'
   *  RelationalOperator: '<S1>/RelationalOperator3'
   *  RelationalOperator: '<S1>/RelationalOperator4'
   *  Switch: '<S1>/Switch3'
   */
  if (tmp_0 == 0) {
    rtb_MultiportSwitch = 0U;
  } else if (tmp_0 > 0) {
    /* Switch: '<S1>/Switch3' incorporates:
     *  Constant: '<S1>/Constant12'
     */
    rtb_MultiportSwitch = 1U;
  } else {
    rtb_MultiportSwitch = 2U;
  }

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' */

  /* Outport: '<Root>/ComTx_u8Elecunlockdrvst_Val' */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8Elecunlockdrvst_Val(rtb_MultiportSwitch);

  /* Outport: '<Root>/ComTx_u8ElecunlockM1diagnosisoupt_Val' */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8ElecunlockM1diagnosisoupt_Val(SignalConversion10);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgMngt_ComCnvTx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/ComTx_u8ElecunlockM2diagnosisoupt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion11'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8ElecunlockM2diagnosisoupt_Val(rtb_Switch12);

  /* Switch: '<S1>/Switch4' incorporates:
   *  Constant: '<S1>/Constant26'
   *  Constant: '<S1>/Constant29'
   *  Constant: '<S1>/Constant30'
   *  Inport: '<Root>/ChgrPlug_stPlgLock_Val'
   *  RelationalOperator: '<S1>/RelationalOperator5'
   */
  if (Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_ChgrPlug_stPlgLock_Val() == 9) {
    rtb_MultiportSwitch = 2U;
  } else {
    rtb_MultiportSwitch = 0U;
  }

  /* End of Switch: '<S1>/Switch4' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' */

  /* Outport: '<Root>/ComTx_u8ElecunlockProSt_Val' */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8ElecunlockProSt_Val(rtb_MultiportSwitch);

  /* Outport: '<Root>/ComTx_u8ElecunlockM1diagnosisoupt1_Val' */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8ElecunlockM1diagnosisoupt1_Val(SignalConversion10);

  /* Outport: '<Root>/ComTx_u8ElecunlockM1diagnosisoupt2_Val' */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8ElecunlockM1diagnosisoupt2_Val(SignalConversion10);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgMngt_ComCnvTx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/ComTx_u8ElecunlockM2diagnosisoupt1_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion11'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8ElecunlockM2diagnosisoupt1_Val(rtb_Switch12);

  /* Outport: '<Root>/ComTx_u8ElecunlockM2diagnosisoupt2_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion11'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_ComTx_u8ElecunlockM2diagnosisoupt2_Val(rtb_Switch12);

  /* Outport: '<Root>/VehCoorn_stPwrMod_Val' incorporates:
   *  Inport: '<Root>/ComRx_u8UMM_UsageModeSt_Val'
   *  SignalConversion: '<S1>/SignalConversion12'
   */
  Rte_IWrite_ChrgMngt_ComCnvTx_Runnable_10ms_VehCoorn_stPwrMod_Val(Rte_IRead_ChrgMngt_ComCnvTx_Runnable_10ms_ComRx_u8UMM_UsageModeSt_Val());

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvTx_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, ChrgMngt_ComCnvTx_CODE) ChrgMngt_ComCnvTx_Runnable_Init(void)
{
  /* SystemInitialize for Outport: '<Root>/ComTx_bDCchgpileA1voltVD_Val' */

  /* SystemInitialize for Outport: '<Root>/ComTx_bDCchgpileCC1voltVD_Val' */

  /* SystemInitialize for Outport: '<Root>/ComTx_bDCchgpileCC2voltVD_Val' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
