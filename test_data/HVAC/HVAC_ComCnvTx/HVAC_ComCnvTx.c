/*
 * File: HVAC_ComCnvTx.c
 *
 * Code generated for Simulink model 'HVAC_ComCnvTx'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Sep 30 14:07:53 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HVAC_ComCnvTx.h"
#include "HVAC_ComCnvTx_private.h"

/* Model step function for TID1 */
FUNC(void, HVAC_ComCnvTx_CODE) HVAC_ComCnvTx_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  uint8 tmpRead;
  uint16 tmpRead_0;
  uint16 tmpRead_1;
  uint8 tmpRead_2;
  uint8 tmpRead_3;
  uint8 tmpRead_4;
  uint8 tmpRead_5;
  uint8 tmpRead_6;
  uint8 tmpRead_7;
  uint8 tmpRead_8;
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
  uint16 tmpRead_n;
  uint16 tmpRead_o;
  uint8 tmpRead_p;
  sint16 tmpRead_q;
  sint16 tmpRead_r;
  sint16 tmpRead_s;
  sint16 tmpRead_t;
  sint16 tmpRead_u;
  sint16 tmpRead_v;
  sint16 tmpRead_w;
  sint16 tmpRead_x;
  boolean rtb_DTC_LeReMirrHeatgMax_GetE_c;
  boolean rtb_DTC_LeReMirrHeatgMax_GetE_j;
  boolean rtb_DTC_LeReMirrHeatgMin_GetE_p;
  boolean rtb_DTC_LeReMirrHeatgMin_GetE_e;
  boolean rtb_DTC_ReWndshdHeatgMax_Get_dm;
  boolean rtb_DTC_ReWndshdHeatgMax_GetE_k;
  boolean rtb_DTC_ReWndshdHeatgMin_GetE_f;
  boolean rtb_DTC_ReWndshdHeatgMin_GetE_n;
  boolean rtb_DTC_RiReMirrHeatgMax_GetE_e;
  boolean rtb_DTC_RiReMirrHeatgMax_GetE_a;
  boolean rtb_DTC_RiReMirrHeatgMin_GetE_c;
  boolean rtb_DTC_RiReMirrHeatgMin_GetE_i;
  boolean rtb_DTC_RiSolarSnsrSRCMax_Get_i;
  boolean rtb_DTC_RiSolarSnsrSRCMax_Get_c;
  boolean rtb_DTC_CabinTSRCMin_GetEvent_g;
  boolean rtb_DTC_CabinTSRCMin_GetEvent_i;
  boolean rtb_DTC_EvaprTSRCMin_GetEvent_m;
  boolean rtb_DTC_EvaprTSRCMin_GetEvent_o;
  boolean rtb_DTC_ReCabinTSRCMin_GetEve_o;
  boolean rtb_DTC_ReCabinTSRCMin_GetEve_f;
  boolean rtb_DTC_ReEvaprTSRCMin_GetEve_k;
  boolean rtb_DTC_ReEvaprTSRCMin_GetEve_e;
  boolean rtb_DTC_LeSolarSnsrSRCMin_Get_k;
  boolean rtb_DTC_LeSolarSnsrSRCMin_Ge_dk;
  boolean rtb_DTC_RiSolarSnsrSRCMin_Get_i;
  boolean rtb_DTC_RiSolarSnsrSRCMin_Get_e;
  boolean rtb_DTC_DrvrMixDamprMotMaxErr_n;
  boolean rtb_DTC_DrvrMixDamprMotMaxErr_g;
  boolean rtb_DTC_DrvrMixDamprMotMinErr_l;
  boolean rtb_DTC_DrvrMixDamprMotMinEr_ml;
  boolean rtb_DTC_DrvrMixDamprMotStuck__p;
  boolean rtb_DTC_DrvrMixDamprMotStuck__f;
  boolean rtb_DTC_ModDamprMotMaxErr_Ge_kn;
  boolean rtb_DTC_ModDamprMotMaxErr_Get_a;
  boolean rtb_DTC_ModDamprMotMinErr_Get_o;
  boolean rtb_DTC_ModDamprMotMinErr_Ge_l1;
  boolean rtb_DTC_ModDamprMotStuck_GetE_a;
  boolean rtb_DTC_ModDamprMotStuck_GetE_o;
  boolean rtb_DTC_PassMixDamprMotMaxEr_mq;
  boolean rtb_DTC_PassMixDamprMotMaxErr_c;
  boolean rtb_DTC_PassMixDamprMotMinErr_g;
  boolean rtb_DTC_PassMixDamprMotMinErr_e;
  boolean rtb_DTC_PassMixDamprMotStuck__b;
  boolean rtb_DTC_PassMixDamprMotStuck__d;
  boolean rtb_DTC_RcrltnDamprMotMaxErr__j;
  boolean rtb_DTC_RcrltnDamprMotMaxErr__c;
  boolean rtb_DTC_RcrltnDamprMotMinErr__g;
  boolean rtb_DTC_RcrltnDamprMotMinErr__c;
  boolean rtb_DTC_RcrltnDamprMotStuck_G_j;
  boolean rtb_DTC_RcrltnDamprMotStuck_G_a;
  uint16 rtb_TmpSignalConversionAtHvacDa;
  uint16 rtb_TmpSignalConversionAtHva_gy;
  uint16 rtb_TmpSignalConversionAtHva_pi;
  uint16 rtb_TmpSignalConversionAtHvac_h;
  uint16 rtb_TmpSignalConversionAtHvac_n;
  uint16 rtb_TmpSignalConversionAtHvac_l;
  uint8 rtb_TmpSignalConversionAtHvac_d;
  uint8 rtb_TmpSignalConversionAtHvac_j;
  uint16 rtb_DataTypeConversion3;
  uint8 rtb_Divide10_0;
  float32 tmp;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HVAC_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HVAC_ComCnvTx_Runnable_10ms_sys'
   */
  /* FunctionCaller: '<S5>/DTC_LeReMirrHeatgMax_GetEventFailed' */
  Rte_Call_DTC_LeReMirrHeatgMax_GetEventFailed(&rtb_DTC_LeReMirrHeatgMax_GetE_c);

  /* FunctionCaller: '<S5>/DTC_LeReMirrHeatgMax_GetEventTested' */
  Rte_Call_DTC_LeReMirrHeatgMax_GetEventTested(&rtb_DTC_LeReMirrHeatgMax_GetE_j);

  /* FunctionCaller: '<S5>/DTC_LeReMirrHeatgMin_GetEventFailed' */
  Rte_Call_DTC_LeReMirrHeatgMin_GetEventFailed(&rtb_DTC_LeReMirrHeatgMin_GetE_p);

  /* FunctionCaller: '<S5>/DTC_LeReMirrHeatgMin_GetEventTested' */
  Rte_Call_DTC_LeReMirrHeatgMin_GetEventTested(&rtb_DTC_LeReMirrHeatgMin_GetE_e);

  /* FunctionCaller: '<S5>/DTC_ReWndshdHeatgMax_GetEventFailed' */
  Rte_Call_DTC_ReWndshdHeatgMax_GetEventFailed(&rtb_DTC_ReWndshdHeatgMax_Get_dm);

  /* FunctionCaller: '<S5>/DTC_ReWndshdHeatgMax_GetEventTested' */
  Rte_Call_DTC_ReWndshdHeatgMax_GetEventTested(&rtb_DTC_ReWndshdHeatgMax_GetE_k);

  /* FunctionCaller: '<S5>/DTC_ReWndshdHeatgMin_GetEventFailed' */
  Rte_Call_DTC_ReWndshdHeatgMin_GetEventFailed(&rtb_DTC_ReWndshdHeatgMin_GetE_f);

  /* FunctionCaller: '<S5>/DTC_ReWndshdHeatgMin_GetEventTested' */
  Rte_Call_DTC_ReWndshdHeatgMin_GetEventTested(&rtb_DTC_ReWndshdHeatgMin_GetE_n);

  /* FunctionCaller: '<S5>/DTC_RiReMirrHeatgMax_GetEventFailed' */
  Rte_Call_DTC_RiReMirrHeatgMax_GetEventFailed(&rtb_DTC_RiReMirrHeatgMax_GetE_e);

  /* FunctionCaller: '<S5>/DTC_RiReMirrHeatgMax_GetEventTested' */
  Rte_Call_DTC_RiReMirrHeatgMax_GetEventTested(&rtb_DTC_RiReMirrHeatgMax_GetE_a);

  /* FunctionCaller: '<S5>/DTC_RiReMirrHeatgMin_GetEventFailed' */
  Rte_Call_DTC_RiReMirrHeatgMin_GetEventFailed(&rtb_DTC_RiReMirrHeatgMin_GetE_c);

  /* FunctionCaller: '<S5>/DTC_RiReMirrHeatgMin_GetEventTested' */
  Rte_Call_DTC_RiReMirrHeatgMin_GetEventTested(&rtb_DTC_RiReMirrHeatgMin_GetE_i);

  /* FunctionCaller: '<S7>/DTC_CabinTSRCMax_GetEventFailed' */
  Rte_Call_DTC_CabinTSRCMax_GetEventFailed(&rtb_DTC_RiSolarSnsrSRCMax_Get_i);

  /* FunctionCaller: '<S7>/DTC_CabinTSRCMax_GetEventTested' */
  Rte_Call_DTC_CabinTSRCMax_GetEventTested(&rtb_DTC_RiSolarSnsrSRCMax_Get_c);

  /* FunctionCaller: '<S7>/DTC_CabinTSRCMin_GetEventFailed' */
  Rte_Call_DTC_CabinTSRCMin_GetEventFailed(&rtb_DTC_CabinTSRCMin_GetEvent_g);

  /* FunctionCaller: '<S7>/DTC_CabinTSRCMin_GetEventTested' */
  Rte_Call_DTC_CabinTSRCMin_GetEventTested(&rtb_DTC_CabinTSRCMin_GetEvent_i);

  /* Switch: '<S7>/Switch5' incorporates:
   *  Logic: '<S7>/LogicalOperator4'
   */
  if (rtb_DTC_RiSolarSnsrSRCMax_Get_i && rtb_DTC_RiSolarSnsrSRCMax_Get_c) {
    /* Outport: '<Root>/ComTx_u8HVAC_RawCabinTempFault_Val' incorporates:
     *  Constant: '<S7>/Constant10'
     */
    (void) Rte_Write_ComTx_u8HVAC_RawCabinTempFault_Val(2U);
  } else {
    /* Outport: '<Root>/ComTx_u8HVAC_RawCabinTempFault_Val' incorporates:
     *  Logic: '<S7>/LogicalOperator5'
     */
    (void) Rte_Write_ComTx_u8HVAC_RawCabinTempFault_Val((uint8)(rtb_DTC_CabinTSRCMin_GetEvent_g && rtb_DTC_CabinTSRCMin_GetEvent_i));
  }

  /* End of Switch: '<S7>/Switch5' */

  /* FunctionCaller: '<S7>/DTC_EvaprTSRCMax_GetEventFailed' */
  Rte_Call_DTC_EvaprTSRCMax_GetEventFailed(&rtb_DTC_RiSolarSnsrSRCMax_Get_c);

  /* FunctionCaller: '<S7>/DTC_EvaprTSRCMax_GetEventTested' */
  Rte_Call_DTC_EvaprTSRCMax_GetEventTested(&rtb_DTC_RiSolarSnsrSRCMax_Get_i);

  /* FunctionCaller: '<S7>/DTC_EvaprTSRCMin_GetEventFailed' */
  Rte_Call_DTC_EvaprTSRCMin_GetEventFailed(&rtb_DTC_EvaprTSRCMin_GetEvent_m);

  /* FunctionCaller: '<S7>/DTC_EvaprTSRCMin_GetEventTested' */
  Rte_Call_DTC_EvaprTSRCMin_GetEventTested(&rtb_DTC_EvaprTSRCMin_GetEvent_o);

  /* Switch: '<S7>/Switch9' incorporates:
   *  Logic: '<S7>/LogicalOperator8'
   */
  if (rtb_DTC_RiSolarSnsrSRCMax_Get_c && rtb_DTC_RiSolarSnsrSRCMax_Get_i) {
    /* Outport: '<Root>/ComTx_u8HVAC_RawEvaTempFault_Val' incorporates:
     *  Constant: '<S7>/Constant22'
     */
    (void) Rte_Write_ComTx_u8HVAC_RawEvaTempFault_Val(2U);
  } else {
    /* Outport: '<Root>/ComTx_u8HVAC_RawEvaTempFault_Val' incorporates:
     *  Logic: '<S7>/LogicalOperator9'
     */
    (void) Rte_Write_ComTx_u8HVAC_RawEvaTempFault_Val((uint8)(rtb_DTC_EvaprTSRCMin_GetEvent_m && rtb_DTC_EvaprTSRCMin_GetEvent_o));
  }

  /* End of Switch: '<S7>/Switch9' */

  /* FunctionCaller: '<S7>/DTC_ReCabinTSRCMax_GetEventFailed' */
  Rte_Call_DTC_ReCabinTSRCMax_GetEventFailed(&rtb_DTC_RiSolarSnsrSRCMax_Get_c);

  /* FunctionCaller: '<S7>/DTC_ReCabinTSRCMax_GetEventTested' */
  Rte_Call_DTC_ReCabinTSRCMax_GetEventTested(&rtb_DTC_RiSolarSnsrSRCMax_Get_i);

  /* FunctionCaller: '<S7>/DTC_ReCabinTSRCMin_GetEventFailed' */
  Rte_Call_DTC_ReCabinTSRCMin_GetEventFailed(&rtb_DTC_ReCabinTSRCMin_GetEve_o);

  /* FunctionCaller: '<S7>/DTC_ReCabinTSRCMin_GetEventTested' */
  Rte_Call_DTC_ReCabinTSRCMin_GetEventTested(&rtb_DTC_ReCabinTSRCMin_GetEve_f);

  /* Switch: '<S7>/Switch7' incorporates:
   *  Logic: '<S7>/LogicalOperator6'
   */
  if (rtb_DTC_RiSolarSnsrSRCMax_Get_c && rtb_DTC_RiSolarSnsrSRCMax_Get_i) {
    /* Outport: '<Root>/ComTx_u8HVAC_RrRawCabinTempFault_Val' incorporates:
     *  Constant: '<S7>/Constant15'
     */
    (void) Rte_Write_ComTx_u8HVAC_RrRawCabinTempFault_Val(2U);
  } else {
    /* Outport: '<Root>/ComTx_u8HVAC_RrRawCabinTempFault_Val' incorporates:
     *  Logic: '<S7>/LogicalOperator7'
     */
    (void) Rte_Write_ComTx_u8HVAC_RrRawCabinTempFault_Val((uint8)(rtb_DTC_ReCabinTSRCMin_GetEve_o && rtb_DTC_ReCabinTSRCMin_GetEve_f));
  }

  /* End of Switch: '<S7>/Switch7' */

  /* FunctionCaller: '<S7>/DTC_ReEvaprTSRCMax_GetEventFailed' */
  Rte_Call_DTC_ReEvaprTSRCMax_GetEventFailed(&rtb_DTC_RiSolarSnsrSRCMax_Get_c);

  /* FunctionCaller: '<S7>/DTC_ReEvaprTSRCMax_GetEventTested' */
  Rte_Call_DTC_ReEvaprTSRCMax_GetEventTested(&rtb_DTC_RiSolarSnsrSRCMax_Get_i);

  /* FunctionCaller: '<S7>/DTC_ReEvaprTSRCMin_GetEventFailed' */
  Rte_Call_DTC_ReEvaprTSRCMin_GetEventFailed(&rtb_DTC_ReEvaprTSRCMin_GetEve_k);

  /* FunctionCaller: '<S7>/DTC_ReEvaprTSRCMin_GetEventTested' */
  Rte_Call_DTC_ReEvaprTSRCMin_GetEventTested(&rtb_DTC_ReEvaprTSRCMin_GetEve_e);

  /* Switch: '<S7>/Switch11' incorporates:
   *  Logic: '<S7>/LogicalOperator10'
   */
  if (rtb_DTC_RiSolarSnsrSRCMax_Get_c && rtb_DTC_RiSolarSnsrSRCMax_Get_i) {
    /* Outport: '<Root>/ComTx_u8HVAC_RrRawEvaTempFault_Val' incorporates:
     *  Constant: '<S7>/Constant25'
     */
    (void) Rte_Write_ComTx_u8HVAC_RrRawEvaTempFault_Val(2U);
  } else {
    /* Outport: '<Root>/ComTx_u8HVAC_RrRawEvaTempFault_Val' incorporates:
     *  Logic: '<S7>/LogicalOperator11'
     */
    (void) Rte_Write_ComTx_u8HVAC_RrRawEvaTempFault_Val((uint8)(rtb_DTC_ReEvaprTSRCMin_GetEve_k && rtb_DTC_ReEvaprTSRCMin_GetEve_e));
  }

  /* End of Switch: '<S7>/Switch11' */

  /* FunctionCaller: '<S7>/DTC_LeSolarSnsrSRCMax_GetEventFailed' */
  Rte_Call_DTC_LeSolarSnsrSRCMax_GetEventFailed(&rtb_DTC_RiSolarSnsrSRCMax_Get_c);

  /* FunctionCaller: '<S7>/DTC_LeSolarSnsrSRCMax_GetEventTested' */
  Rte_Call_DTC_LeSolarSnsrSRCMax_GetEventTested(&rtb_DTC_RiSolarSnsrSRCMax_Get_i);

  /* FunctionCaller: '<S7>/DTC_LeSolarSnsrSRCMin_GetEventFailed' */
  Rte_Call_DTC_LeSolarSnsrSRCMin_GetEventFailed(&rtb_DTC_LeSolarSnsrSRCMin_Get_k);

  /* FunctionCaller: '<S7>/DTC_LeSolarSnsrSRCMin_GetEventTested' */
  Rte_Call_DTC_LeSolarSnsrSRCMin_GetEventTested(&rtb_DTC_LeSolarSnsrSRCMin_Ge_dk);

  /* Switch: '<S7>/Switch1' incorporates:
   *  Logic: '<S7>/LogicalOperator'
   */
  if (rtb_DTC_RiSolarSnsrSRCMax_Get_c && rtb_DTC_RiSolarSnsrSRCMax_Get_i) {
    /* Outport: '<Root>/ComTx_u8HVAC_SolarValueLeftFault_Val' incorporates:
     *  Constant: '<S7>/Constant4'
     */
    (void) Rte_Write_ComTx_u8HVAC_SolarValueLeftFault_Val(2U);
  } else {
    /* Outport: '<Root>/ComTx_u8HVAC_SolarValueLeftFault_Val' incorporates:
     *  Logic: '<S7>/LogicalOperator1'
     */
    (void) Rte_Write_ComTx_u8HVAC_SolarValueLeftFault_Val((uint8)(rtb_DTC_LeSolarSnsrSRCMin_Get_k && rtb_DTC_LeSolarSnsrSRCMin_Ge_dk));
  }

  /* End of Switch: '<S7>/Switch1' */

  /* FunctionCaller: '<S7>/DTC_RiSolarSnsrSRCMax_GetEventFailed' */
  Rte_Call_DTC_RiSolarSnsrSRCMax_GetEventFailed(&rtb_DTC_RiSolarSnsrSRCMax_Get_c);

  /* FunctionCaller: '<S7>/DTC_RiSolarSnsrSRCMax_GetEventTested' */
  Rte_Call_DTC_RiSolarSnsrSRCMax_GetEventTested(&rtb_DTC_RiSolarSnsrSRCMax_Get_i);

  /* FunctionCaller: '<S7>/DTC_RiSolarSnsrSRCMin_GetEventFailed' */
  Rte_Call_DTC_RiSolarSnsrSRCMin_GetEventFailed(&rtb_DTC_RiSolarSnsrSRCMin_Get_i);

  /* FunctionCaller: '<S7>/DTC_RiSolarSnsrSRCMin_GetEventTested' */
  Rte_Call_DTC_RiSolarSnsrSRCMin_GetEventTested(&rtb_DTC_RiSolarSnsrSRCMin_Get_e);

  /* Switch: '<S7>/Switch3' incorporates:
   *  Logic: '<S7>/LogicalOperator2'
   */
  if (rtb_DTC_RiSolarSnsrSRCMax_Get_c && rtb_DTC_RiSolarSnsrSRCMax_Get_i) {
    /* Outport: '<Root>/ComTx_u8HVAC_SolarValueRightFault_Val' incorporates:
     *  Constant: '<S7>/Constant7'
     */
    (void) Rte_Write_ComTx_u8HVAC_SolarValueRightFault_Val(2U);
  } else {
    /* Outport: '<Root>/ComTx_u8HVAC_SolarValueRightFault_Val' incorporates:
     *  Logic: '<S7>/LogicalOperator3'
     */
    (void) Rte_Write_ComTx_u8HVAC_SolarValueRightFault_Val((uint8)(rtb_DTC_RiSolarSnsrSRCMin_Get_i && rtb_DTC_RiSolarSnsrSRCMin_Get_e));
  }

  /* End of Switch: '<S7>/Switch3' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HVAC_ComCnvTx_Runnable_10ms_at_outport_1' */

  /* Inport: '<Root>/HvacVentT_tPassFootVent_Val' */
  Rte_Read_HvacVentT_tPassFootVent_Val(&tmpRead_x);

  /* Inport: '<Root>/HvacVentT_tPassFaceVent_Val' */
  Rte_Read_HvacVentT_tPassFaceVent_Val(&tmpRead_w);

  /* Inport: '<Root>/HvacVentT_tDrvrFootVent_Val' */
  Rte_Read_HvacVentT_tDrvrFootVent_Val(&tmpRead_v);

  /* Inport: '<Root>/HvacVentT_tDrvrFaceVent_Val' */
  Rte_Read_HvacVentT_tDrvrFaceVent_Val(&tmpRead_u);

  /* Inport: '<Root>/EvaprT_tRe_Val' */
  Rte_Read_EvaprT_tRe_Val(&tmpRead_t);

  /* Inport: '<Root>/EvaprT_t_Val' */
  Rte_Read_EvaprT_t_Val(&tmpRead_s);

  /* Inport: '<Root>/CabinT_tRe_Val' */
  Rte_Read_CabinT_tRe_Val(&tmpRead_r);

  /* Inport: '<Root>/CabinT_t_Val' */
  Rte_Read_CabinT_t_Val(&tmpRead_q);

  /* Inport: '<Root>/WndshdHeatg_stPsRe_Val' */
  Rte_Read_WndshdHeatg_stPsRe_Val(&tmpRead_p);

  /* Inport: '<Root>/SolarSnsr_riRi_Val' */
  Rte_Read_SolarSnsr_riRi_Val(&tmpRead_o);

  /* Inport: '<Root>/SolarSnsr_riLe_Val' */
  Rte_Read_SolarSnsr_riLe_Val(&tmpRead_n);

  /* Inport: '<Root>/ReMirrHeatg_stPsRi_Val' */
  Rte_Read_ReMirrHeatg_stPsRi_Val(&tmpRead_m);

  /* Inport: '<Root>/ReMirrHeatg_stPsLe_Val' */
  Rte_Read_ReMirrHeatg_stPsLe_Val(&tmpRead_l);

  /* Inport: '<Root>/HvacDampr_uReModMotFb_Val' */
  Rte_Read_HvacDampr_uReModMotFb_Val(&rtb_DataTypeConversion3);

  /* Inport: '<Root>/HvacDampr_uReMixMotFb_Val' */
  Rte_Read_HvacDampr_uReMixMotFb_Val(&tmpRead_k);

  /* Inport: '<Root>/HvacDampr_stReModMotRunng_Val' */
  Rte_Read_HvacDampr_stReModMotRunng_Val(&tmpRead_j);

  /* Inport: '<Root>/HvacDampr_stReModMotFlt_Val' */
  Rte_Read_HvacDampr_stReModMotFlt_Val(&tmpRead_i);

  /* Inport: '<Root>/HvacDampr_stReModMotAct_Val' */
  Rte_Read_HvacDampr_stReModMotAct_Val(&tmpRead_h);

  /* Inport: '<Root>/HvacDampr_stRcrltnMotFlt_Val' */
  Rte_Read_HvacDampr_stRcrltnMotFlt_Val(&tmpRead_g);

  /* Inport: '<Root>/HvacDampr_stRcrltnMotAct_Val' */
  Rte_Read_HvacDampr_stRcrltnMotAct_Val(&tmpRead_f);

  /* Inport: '<Root>/HvacDampr_stPassRcrltnMotFlt_Val' */
  Rte_Read_HvacDampr_stPassRcrltnMotFlt_Val(&tmpRead_e);

  /* Inport: '<Root>/HvacDampr_stPassRcrltnMotAct_Val' */
  Rte_Read_HvacDampr_stPassRcrltnMotAct_Val(&tmpRead_d);

  /* Inport: '<Root>/HvacDampr_stPassMixMotFlt_Val' */
  Rte_Read_HvacDampr_stPassMixMotFlt_Val(&tmpRead_c);

  /* Inport: '<Root>/HvacDampr_stPassMixMotAct_Val' */
  Rte_Read_HvacDampr_stPassMixMotAct_Val(&tmpRead_b);

  /* Inport: '<Root>/HvacDampr_stModMotRunng_Val' */
  Rte_Read_HvacDampr_stModMotRunng_Val(&tmpRead_a);

  /* Inport: '<Root>/HvacDampr_stModMotFlt_Val' */
  Rte_Read_HvacDampr_stModMotFlt_Val(&tmpRead_9);

  /* Inport: '<Root>/HvacDampr_stModMotAct_Val' */
  Rte_Read_HvacDampr_stModMotAct_Val(&tmpRead_8);

  /* Inport: '<Root>/HvacDampr_stDrvrRcrltnMotFlt_Val' */
  Rte_Read_HvacDampr_stDrvrRcrltnMotFlt_Val(&tmpRead_7);

  /* Inport: '<Root>/HvacDampr_stDrvrRcrltnMotAct_Val' */
  Rte_Read_HvacDampr_stDrvrRcrltnMotAct_Val(&tmpRead_6);

  /* Inport: '<Root>/HvacDampr_stDrvrMixMotFlt_Val' */
  Rte_Read_HvacDampr_stDrvrMixMotFlt_Val(&tmpRead_5);

  /* Inport: '<Root>/HvacDampr_stDrvrMixMotAct_Val' */
  Rte_Read_HvacDampr_stDrvrMixMotAct_Val(&tmpRead_4);

  /* Inport: '<Root>/HvacBlowr_stWindExitSpdLvlAct_Val' */
  Rte_Read_HvacBlowr_stWindExitSpdLvlAct_Val(&tmpRead_3);

  /* Inport: '<Root>/HvacBlowr_stReWindExitSpdLvlAct_Val' */
  Rte_Read_HvacBlowr_stReWindExitSpdLvlAct_Val(&tmpRead_2);

  /* Inport: '<Root>/HvacBlowr_ratPWMBlowr_Val' */
  Rte_Read_HvacBlowr_ratPWMBlowr_Val(&tmpRead_1);

  /* Inport: '<Root>/HvacBlowr_ratLPMBlowr_Val' */
  Rte_Read_HvacBlowr_ratLPMBlowr_Val(&tmpRead_0);

  /* Inport: '<Root>/gCFG_u8BlowrCtrlTyp_Val' */
  Rte_Read_gCFG_u8BlowrCtrlTyp_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HVAC_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HVAC_ComCnvTx_Runnable_10ms_sys'
   */
  /* FunctionCaller: '<S1>/DTC_DrvrMixDamprMotMaxErr_GetEventFailed' */
  Rte_Call_DTC_DrvrMixDamprMotMaxErr_GetEventFailed(&rtb_DTC_DrvrMixDamprMotMaxErr_n);

  /* FunctionCaller: '<S1>/DTC_DrvrMixDamprMotMaxErr_GetEventTested' */
  Rte_Call_DTC_DrvrMixDamprMotMaxErr_GetEventTested(&rtb_DTC_DrvrMixDamprMotMaxErr_g);

  /* FunctionCaller: '<S1>/DTC_DrvrMixDamprMotMinErr_GetEventFailed' */
  Rte_Call_DTC_DrvrMixDamprMotMinErr_GetEventFailed(&rtb_DTC_DrvrMixDamprMotMinErr_l);

  /* FunctionCaller: '<S1>/DTC_DrvrMixDamprMotMinErr_GetEventTested' */
  Rte_Call_DTC_DrvrMixDamprMotMinErr_GetEventTested(&rtb_DTC_DrvrMixDamprMotMinEr_ml);

  /* FunctionCaller: '<S1>/DTC_DrvrMixDamprMotStuck_GetEventFailed' */
  Rte_Call_DTC_DrvrMixDamprMotStuck_GetEventFailed(&rtb_DTC_DrvrMixDamprMotStuck__p);

  /* FunctionCaller: '<S1>/DTC_DrvrMixDamprMotStuck_GetEventTested' */
  Rte_Call_DTC_DrvrMixDamprMotStuck_GetEventTested(&rtb_DTC_DrvrMixDamprMotStuck__f);

  /* FunctionCaller: '<S1>/DTC_ModDamprMotMaxErr_GetEventFailed' */
  Rte_Call_DTC_ModDamprMotMaxErr_GetEventFailed(&rtb_DTC_ModDamprMotMaxErr_Ge_kn);

  /* FunctionCaller: '<S1>/DTC_ModDamprMotMaxErr_GetEventTested' */
  Rte_Call_DTC_ModDamprMotMaxErr_GetEventTested(&rtb_DTC_ModDamprMotMaxErr_Get_a);

  /* FunctionCaller: '<S1>/DTC_ModDamprMotMinErr_GetEventFailed' */
  Rte_Call_DTC_ModDamprMotMinErr_GetEventFailed(&rtb_DTC_ModDamprMotMinErr_Get_o);

  /* FunctionCaller: '<S1>/DTC_ModDamprMotMinErr_GetEventTested' */
  Rte_Call_DTC_ModDamprMotMinErr_GetEventTested(&rtb_DTC_ModDamprMotMinErr_Ge_l1);

  /* FunctionCaller: '<S1>/DTC_ModDamprMotStuck_GetEventFailed' */
  Rte_Call_DTC_ModDamprMotStuck_GetEventFailed(&rtb_DTC_ModDamprMotStuck_GetE_a);

  /* FunctionCaller: '<S1>/DTC_ModDamprMotStuck_GetEventTested' */
  Rte_Call_DTC_ModDamprMotStuck_GetEventTested(&rtb_DTC_ModDamprMotStuck_GetE_o);

  /* FunctionCaller: '<S1>/DTC_PassMixDamprMotMaxErr_GetEventFailed' */
  Rte_Call_DTC_PassMixDamprMotMaxErr_GetEventFailed(&rtb_DTC_PassMixDamprMotMaxEr_mq);

  /* FunctionCaller: '<S1>/DTC_PassMixDamprMotMaxErr_GetEventTested' */
  Rte_Call_DTC_PassMixDamprMotMaxErr_GetEventTested(&rtb_DTC_PassMixDamprMotMaxErr_c);

  /* FunctionCaller: '<S1>/DTC_PassMixDamprMotMinErr_GetEventFailed' */
  Rte_Call_DTC_PassMixDamprMotMinErr_GetEventFailed(&rtb_DTC_PassMixDamprMotMinErr_g);

  /* FunctionCaller: '<S1>/DTC_PassMixDamprMotMinErr_GetEventTested' */
  Rte_Call_DTC_PassMixDamprMotMinErr_GetEventTested(&rtb_DTC_PassMixDamprMotMinErr_e);

  /* FunctionCaller: '<S1>/DTC_PassMixDamprMotStuck_GetEventFailed' */
  Rte_Call_DTC_PassMixDamprMotStuck_GetEventFailed(&rtb_DTC_PassMixDamprMotStuck__b);

  /* FunctionCaller: '<S1>/DTC_PassMixDamprMotStuck_GetEventTested' */
  Rte_Call_DTC_PassMixDamprMotStuck_GetEventTested(&rtb_DTC_PassMixDamprMotStuck__d);

  /* FunctionCaller: '<S1>/DTC_RcrltnDamprMotMaxErr_GetEventFailed' */
  Rte_Call_DTC_RcrltnDamprMotMaxErr_GetEventFailed(&rtb_DTC_RcrltnDamprMotMaxErr__j);

  /* FunctionCaller: '<S1>/DTC_RcrltnDamprMotMaxErr_GetEventTested' */
  Rte_Call_DTC_RcrltnDamprMotMaxErr_GetEventTested(&rtb_DTC_RcrltnDamprMotMaxErr__c);

  /* FunctionCaller: '<S1>/DTC_RcrltnDamprMotMinErr_GetEventFailed' */
  Rte_Call_DTC_RcrltnDamprMotMinErr_GetEventFailed(&rtb_DTC_RcrltnDamprMotMinErr__g);

  /* FunctionCaller: '<S1>/DTC_RcrltnDamprMotMinErr_GetEventTested' */
  Rte_Call_DTC_RcrltnDamprMotMinErr_GetEventTested(&rtb_DTC_RcrltnDamprMotMinErr__c);

  /* FunctionCaller: '<S1>/DTC_RcrltnDamprMotStuck_GetEventFailed' */
  Rte_Call_DTC_RcrltnDamprMotStuck_GetEventFailed(&rtb_DTC_RcrltnDamprMotStuck_G_j);

  /* FunctionCaller: '<S1>/DTC_RcrltnDamprMotStuck_GetEventTested' */
  Rte_Call_DTC_RcrltnDamprMotStuck_GetEventTested(&rtb_DTC_RcrltnDamprMotStuck_G_a);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtHvacDampr_uRcrltnMotFb_Val_readOutport1' incorporates:
   *  Inport: '<Root>/HvacDampr_uRcrltnMotFb_Val'
   */
  Rte_Read_HvacDampr_uRcrltnMotFb_Val(&rtb_TmpSignalConversionAtHvacDa);

  /* Product: '<S4>/Divide3' incorporates:
   *  Constant: '<S4>/Constant3'
   */
  tmp = (float32)rtb_TmpSignalConversionAtHvacDa / 100.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/ComTx_u8HVAC_CirculationServoFB_Val' incorporates:
   *  Product: '<S4>/Divide3'
   */
  (void) Rte_Write_ComTx_u8HVAC_CirculationServoFB_Val(rtb_Divide10_0);

  /* Product: '<S4>/Divide9' incorporates:
   *  Constant: '<S4>/Constant9'
   */
  tmp = (float32)rtb_TmpSignalConversionAtHvacDa / 20.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/HvacDampr_uTarRcrltnMotUds_Val' incorporates:
   *  Product: '<S4>/Divide9'
   *  SignalConversion: '<S4>/SignalConversion16'
   */
  (void) Rte_Write_HvacDampr_uTarRcrltnMotUds_Val(rtb_Divide10_0);

  /* Outport: '<Root>/HvacDampr_uActRcrltnMotUds_Val' incorporates:
   *  Product: '<S4>/Divide9'
   *  SignalConversion: '<S4>/SignalConversion17'
   */
  (void) Rte_Write_HvacDampr_uActRcrltnMotUds_Val(rtb_Divide10_0);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtHvacDampr_uDrvrRcrltnMotFb_Val_readOutport1' incorporates:
   *  Inport: '<Root>/HvacDampr_uDrvrRcrltnMotFb_Val'
   */
  Rte_Read_HvacDampr_uDrvrRcrltnMotFb_Val(&rtb_TmpSignalConversionAtHva_gy);

  /* Product: '<S4>/Divide11' incorporates:
   *  Constant: '<S4>/Constant11'
   */
  tmp = (float32)rtb_TmpSignalConversionAtHva_gy / 20.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/HvacDampr_uTarDrvrRcrltnMotUds_Val' incorporates:
   *  Product: '<S4>/Divide11'
   *  SignalConversion: '<S4>/SignalConversion20'
   */
  (void) Rte_Write_HvacDampr_uTarDrvrRcrltnMotUds_Val(rtb_Divide10_0);

  /* Outport: '<Root>/HvacDampr_uActDrvrRcrltnMotUds_Val' incorporates:
   *  Product: '<S4>/Divide11'
   *  SignalConversion: '<S4>/SignalConversion21'
   */
  (void) Rte_Write_HvacDampr_uActDrvrRcrltnMotUds_Val(rtb_Divide10_0);

  /* Product: '<S4>/Divide5' incorporates:
   *  Constant: '<S4>/Constant5'
   */
  tmp = (float32)rtb_TmpSignalConversionAtHva_gy / 100.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/ComTx_u8HVAC_DrAirCirculationServoFB_Val' incorporates:
   *  Product: '<S4>/Divide5'
   */
  (void) Rte_Write_ComTx_u8HVAC_DrAirCirculationServoFB_Val(rtb_Divide10_0);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtHvacDampr_uDrvrMixMotFb_Val_readOutport1' incorporates:
   *  Inport: '<Root>/HvacDampr_uDrvrMixMotFb_Val'
   */
  Rte_Read_HvacDampr_uDrvrMixMotFb_Val(&rtb_TmpSignalConversionAtHva_pi);

  /* Product: '<S4>/Divide' incorporates:
   *  Constant: '<S4>/Constant'
   */
  tmp = (float32)rtb_TmpSignalConversionAtHva_pi / 100.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/ComTx_u8HVAC_DrAMServoFB_Val' incorporates:
   *  Product: '<S4>/Divide'
   */
  (void) Rte_Write_ComTx_u8HVAC_DrAMServoFB_Val(rtb_Divide10_0);

  /* Product: '<S4>/Divide6' incorporates:
   *  Constant: '<S4>/Constant6'
   */
  tmp = (float32)rtb_TmpSignalConversionAtHva_pi / 20.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/HvacDampr_uTarDrvrMixMotUds_Val' incorporates:
   *  Product: '<S4>/Divide6'
   *  SignalConversion: '<S4>/SignalConversion10'
   */
  (void) Rte_Write_HvacDampr_uTarDrvrMixMotUds_Val(rtb_Divide10_0);

  /* Outport: '<Root>/HvacDampr_uActPsgrMixMotUds_Val' incorporates:
   *  Product: '<S4>/Divide6'
   *  SignalConversion: '<S4>/SignalConversion11'
   */
  (void) Rte_Write_HvacDampr_uActPsgrMixMotUds_Val(rtb_Divide10_0);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtHvacDampr_uModMotFb_Val_readOutport1' incorporates:
   *  Inport: '<Root>/HvacDampr_uModMotFb_Val'
   */
  Rte_Read_HvacDampr_uModMotFb_Val(&rtb_TmpSignalConversionAtHvac_h);

  /* Product: '<S4>/Divide1' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  tmp = (float32)rtb_TmpSignalConversionAtHvac_h / 100.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/ComTx_u8HVAC_ModeServoFB_Val' incorporates:
   *  Product: '<S4>/Divide1'
   */
  (void) Rte_Write_ComTx_u8HVAC_ModeServoFB_Val(rtb_Divide10_0);

  /* Product: '<S4>/Divide7' incorporates:
   *  Constant: '<S4>/Constant7'
   */
  tmp = (float32)rtb_TmpSignalConversionAtHvac_h / 20.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/HvacDampr_uTarModMotUds_Val' incorporates:
   *  Product: '<S4>/Divide7'
   *  SignalConversion: '<S4>/SignalConversion12'
   */
  (void) Rte_Write_HvacDampr_uTarModMotUds_Val(rtb_Divide10_0);

  /* Outport: '<Root>/HvacDampr_uActModMotUds_Val' incorporates:
   *  Product: '<S4>/Divide7'
   *  SignalConversion: '<S4>/SignalConversion13'
   */
  (void) Rte_Write_HvacDampr_uActModMotUds_Val(rtb_Divide10_0);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtHvacDampr_uPassRcrltnMotFb_Val_readOutport1' incorporates:
   *  Inport: '<Root>/HvacDampr_uPassRcrltnMotFb_Val'
   */
  Rte_Read_HvacDampr_uPassRcrltnMotFb_Val(&rtb_TmpSignalConversionAtHvac_n);

  /* Product: '<S4>/Divide2' incorporates:
   *  Constant: '<S4>/Constant2'
   */
  tmp = (float32)rtb_TmpSignalConversionAtHvac_n / 100.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/ComTx_u8HVAC_PaAirCirculationServoFB_Val' incorporates:
   *  Product: '<S4>/Divide2'
   */
  (void) Rte_Write_ComTx_u8HVAC_PaAirCirculationServoFB_Val(rtb_Divide10_0);

  /* Product: '<S4>/Divide8' incorporates:
   *  Constant: '<S4>/Constant8'
   */
  tmp = (float32)rtb_TmpSignalConversionAtHvac_n / 20.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/HvacDampr_uTarPassRcrltnMotUds_Val' incorporates:
   *  Product: '<S4>/Divide8'
   *  SignalConversion: '<S4>/SignalConversion14'
   */
  (void) Rte_Write_HvacDampr_uTarPassRcrltnMotUds_Val(rtb_Divide10_0);

  /* Outport: '<Root>/HvacDampr_uActPassRcrltnMotUds_Val' incorporates:
   *  Product: '<S4>/Divide8'
   *  SignalConversion: '<S4>/SignalConversion15'
   */
  (void) Rte_Write_HvacDampr_uActPassRcrltnMotUds_Val(rtb_Divide10_0);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtHvacDampr_uPassMixMotFb_Val_readOutport1' incorporates:
   *  Inport: '<Root>/HvacDampr_uPassMixMotFb_Val'
   */
  Rte_Read_HvacDampr_uPassMixMotFb_Val(&rtb_TmpSignalConversionAtHvac_l);

  /* Product: '<S4>/Divide10' incorporates:
   *  Constant: '<S4>/Constant10'
   */
  tmp = (float32)rtb_TmpSignalConversionAtHvac_l / 20.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/HvacDampr_uTarPassMixMotUds_Val' incorporates:
   *  Product: '<S4>/Divide10'
   *  SignalConversion: '<S4>/SignalConversion18'
   */
  (void) Rte_Write_HvacDampr_uTarPassMixMotUds_Val(rtb_Divide10_0);

  /* Outport: '<Root>/HvacDampr_uActPassMixMotUds_Val' incorporates:
   *  Product: '<S4>/Divide10'
   *  SignalConversion: '<S4>/SignalConversion19'
   */
  (void) Rte_Write_HvacDampr_uActPassMixMotUds_Val(rtb_Divide10_0);

  /* Product: '<S4>/Divide4' incorporates:
   *  Constant: '<S4>/Constant4'
   */
  tmp = (float32)rtb_TmpSignalConversionAtHvac_l / 100.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/ComTx_u8HVAC_PaAMServoFB_Val' incorporates:
   *  Product: '<S4>/Divide4'
   */
  (void) Rte_Write_ComTx_u8HVAC_PaAMServoFB_Val(rtb_Divide10_0);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtHvacDampr_stReMixMotFlt_Val_readOutport1' incorporates:
   *  Inport: '<Root>/HvacDampr_stReMixMotFlt_Val'
   */
  Rte_Read_HvacDampr_stReMixMotFlt_Val(&rtb_TmpSignalConversionAtHvac_d);

  /* Outport: '<Root>/ComTx_bHVAC_RrAMDoorPostionVD_Val' incorporates:
   *  Constant: '<S6>/Constant2'
   *  RelationalOperator: '<S6>/RelationalOperator'
   */
  (void) Rte_Write_ComTx_bHVAC_RrAMDoorPostionVD_Val(rtb_TmpSignalConversionAtHvac_d == 0);

  /* Outport: '<Root>/ComTx_u8HVAC_RrAMServoFault_Val' incorporates:
   *  SignalConversion: '<S6>/SignalConversion2'
   */
  (void) Rte_Write_ComTx_u8HVAC_RrAMServoFault_Val(rtb_TmpSignalConversionAtHvac_d);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtHvacDampr_stReMixMotAct_Val_readOutport1' incorporates:
   *  Inport: '<Root>/HvacDampr_stReMixMotAct_Val'
   */
  Rte_Read_HvacDampr_stReMixMotAct_Val(&rtb_TmpSignalConversionAtHvac_j);

  /* Outport: '<Root>/ComTx_u8HVAC_RrAMDoorPostion_Val' incorporates:
   *  SignalConversion: '<S6>/SignalConversion'
   */
  (void) Rte_Write_ComTx_u8HVAC_RrAMDoorPostion_Val(rtb_TmpSignalConversionAtHvac_j);

  /* Outport: '<Root>/ComTx_u8HVAC_RrAMDoorPostionAct_Val' incorporates:
   *  SignalConversion: '<S6>/SignalConversion1'
   */
  (void) Rte_Write_ComTx_u8HVAC_RrAMDoorPostionAct_Val(rtb_TmpSignalConversionAtHvac_j);

  /* Product: '<S6>/Divide1' incorporates:
   *  Constant: '<S6>/Constant1'
   */
  tmp = (float32)tmpRead_k / 100.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/ComTx_u8HVAC_RrAMServoFB_Val' incorporates:
   *  Product: '<S6>/Divide1'
   */
  (void) Rte_Write_ComTx_u8HVAC_RrAMServoFB_Val(rtb_Divide10_0);

  /* Product: '<S6>/Divide' incorporates:
   *  Constant: '<S6>/Constant'
   */
  tmp = (float32)rtb_DataTypeConversion3 / 100.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/ComTx_u8HVAC_RrModeServoFB_Val' incorporates:
   *  Product: '<S6>/Divide'
   */
  (void) Rte_Write_ComTx_u8HVAC_RrModeServoFB_Val(rtb_Divide10_0);

  /* Switch: '<S3>/Switch' */
  if (tmpRead != 0) {
    rtb_DataTypeConversion3 = tmpRead_0;
  } else {
    rtb_DataTypeConversion3 = tmpRead_1;
  }

  /* End of Switch: '<S3>/Switch' */

  /* Product: '<S3>/Divide' */
  tmpRead_k = (uint16)((uint32)rtb_DataTypeConversion3 >> 2);
  if (tmpRead_k > 255) {
    tmpRead_k = 255U;
  }

  /* Outport: '<Root>/HvacBlowr_prcTarFrntBlowrUds_Val' incorporates:
   *  Product: '<S3>/Divide'
   */
  (void) Rte_Write_HvacBlowr_prcTarFrntBlowrUds_Val((uint8)tmpRead_k);

  /* DataTypeConversion: '<S3>/DataTypeConversion2' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Product: '<S3>/Product'
   */
  tmp = (float32)rtb_DataTypeConversion3 * 0.12F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/HvacBlowr_uTarFrntBlowrUds_Val' incorporates:
   *  DataTypeConversion: '<S3>/DataTypeConversion2'
   */
  (void) Rte_Write_HvacBlowr_uTarFrntBlowrUds_Val(rtb_Divide10_0);

  /* DataTypeConversion: '<S7>/DataTypeConversion4' incorporates:
   *  Constant: '<S7>/Constant28'
   *  Constant: '<S7>/Constant29'
   *  Inport: '<Root>/HvacVentT_tDrvrFaceVent_Val'
   *  Product: '<S7>/Product4'
   *  Sum: '<S7>/Add5'
   */
  tmp = (((float32)tmpRead_u * 0.1F + -546.28F) + 313.2F) * 10.0F;
  if (tmp >= 0.0F) {
    tmpRead_k = (uint16)tmp;
  } else {
    tmpRead_k = 0U;
  }

  /* End of DataTypeConversion: '<S7>/DataTypeConversion4' */

  /* Outport: '<Root>/ComTx_u16HVAC_DrFaceOutletTemp_Val' incorporates:
   *  Saturate: '<S7>/Saturation4'
   */
  (void) Rte_Write_ComTx_u16HVAC_DrFaceOutletTemp_Val(Mfx_Min_u16(tmpRead_k, 1275U));

  /* DataTypeConversion: '<S7>/DataTypeConversion5' incorporates:
   *  Constant: '<S7>/Constant30'
   *  Constant: '<S7>/Constant31'
   *  Inport: '<Root>/HvacVentT_tDrvrFootVent_Val'
   *  Product: '<S7>/Product5'
   *  Sum: '<S7>/Add6'
   */
  tmp = (((float32)tmpRead_v * 0.1F + -546.28F) + 313.2F) * 10.0F;
  if (tmp >= 0.0F) {
    tmpRead_k = (uint16)tmp;
  } else {
    tmpRead_k = 0U;
  }

  /* End of DataTypeConversion: '<S7>/DataTypeConversion5' */

  /* Outport: '<Root>/ComTx_u16HVAC_DrFootOutletTemp_Val' incorporates:
   *  Saturate: '<S7>/Saturation5'
   */
  (void) Rte_Write_ComTx_u16HVAC_DrFootOutletTemp_Val(Mfx_Min_u16(tmpRead_k, 1275U));

  /* DataTypeConversion: '<S7>/DataTypeConversion7' incorporates:
   *  Constant: '<S7>/Constant32'
   *  Constant: '<S7>/Constant33'
   *  Inport: '<Root>/HvacVentT_tPassFaceVent_Val'
   *  Product: '<S7>/Product7'
   *  Sum: '<S7>/Add7'
   */
  tmp = (((float32)tmpRead_w * 0.1F + -546.28F) + 313.2F) * 10.0F;
  if (tmp >= 0.0F) {
    tmpRead_k = (uint16)tmp;
  } else {
    tmpRead_k = 0U;
  }

  /* End of DataTypeConversion: '<S7>/DataTypeConversion7' */

  /* Outport: '<Root>/ComTx_u16HVAC_PaFaceOutletTemp_Val' incorporates:
   *  Saturate: '<S7>/Saturation6'
   */
  (void) Rte_Write_ComTx_u16HVAC_PaFaceOutletTemp_Val(Mfx_Min_u16(tmpRead_k, 1275U));

  /* DataTypeConversion: '<S7>/DataTypeConversion8' incorporates:
   *  Constant: '<S7>/Constant34'
   *  Constant: '<S7>/Constant35'
   *  Inport: '<Root>/HvacVentT_tPassFootVent_Val'
   *  Product: '<S7>/Product8'
   *  Sum: '<S7>/Add8'
   */
  tmp = (((float32)tmpRead_x * 0.1F + -546.28F) + 313.2F) * 10.0F;
  if (tmp >= 0.0F) {
    tmpRead_k = (uint16)tmp;
  } else {
    tmpRead_k = 0U;
  }

  /* End of DataTypeConversion: '<S7>/DataTypeConversion8' */

  /* Outport: '<Root>/ComTx_u16HVAC_PaFootOutletTemp_Val' incorporates:
   *  Saturate: '<S7>/Saturation7'
   */
  (void) Rte_Write_ComTx_u16HVAC_PaFootOutletTemp_Val(Mfx_Min_u16(tmpRead_k, 1275U));

  /* DataTypeConversion: '<S7>/DataTypeConversion6' incorporates:
   *  Constant: '<S7>/Constant11'
   *  Constant: '<S7>/Constant12'
   *  Inport: '<Root>/CabinT_t_Val'
   *  Product: '<S7>/Product6'
   *  Sum: '<S7>/Add4'
   */
  tmp = (((float32)tmpRead_q * 0.1F + -546.28F) + 313.2F) * 10.0F;
  if (tmp >= 0.0F) {
    tmpRead_k = (uint16)tmp;
  } else {
    tmpRead_k = 0U;
  }

  /* End of DataTypeConversion: '<S7>/DataTypeConversion6' */

  /* Outport: '<Root>/ComTx_u16HVAC_RawCabinTemp_Val' incorporates:
   *  Saturate: '<S7>/Saturation'
   */
  (void) Rte_Write_ComTx_u16HVAC_RawCabinTemp_Val(Mfx_Min_u16(tmpRead_k, 1275U));

  /* DataTypeConversion: '<S7>/DataTypeConversion2' incorporates:
   *  Constant: '<S7>/Constant18'
   *  Constant: '<S7>/Constant19'
   *  Inport: '<Root>/EvaprT_t_Val'
   *  Product: '<S7>/Product2'
   *  Sum: '<S7>/Add2'
   */
  tmp = (((float32)tmpRead_s * 0.1F + -546.28F) + 313.2F) * 10.0F;
  if (tmp >= 0.0F) {
    tmpRead_k = (uint16)tmp;
  } else {
    tmpRead_k = 0U;
  }

  /* End of DataTypeConversion: '<S7>/DataTypeConversion2' */

  /* Outport: '<Root>/ComTx_u16HVAC_RawEvaTemp_Val' incorporates:
   *  Saturate: '<S7>/Saturation3'
   */
  (void) Rte_Write_ComTx_u16HVAC_RawEvaTemp_Val(Mfx_Min_u16(tmpRead_k, 1275U));

  /* DataTypeConversion: '<S7>/DataTypeConversion1' incorporates:
   *  Constant: '<S7>/Constant13'
   *  Constant: '<S7>/Constant14'
   *  Inport: '<Root>/CabinT_tRe_Val'
   *  Product: '<S7>/Product1'
   *  Sum: '<S7>/Add1'
   */
  tmp = (((float32)tmpRead_r * 0.1F + -546.28F) + 313.2F) * 10.0F;
  if (tmp >= 0.0F) {
    tmpRead_k = (uint16)tmp;
  } else {
    tmpRead_k = 0U;
  }

  /* End of DataTypeConversion: '<S7>/DataTypeConversion1' */

  /* Outport: '<Root>/ComTx_u16HVAC_RrRawCabinTemp_Val' incorporates:
   *  Saturate: '<S7>/Saturation1'
   */
  (void) Rte_Write_ComTx_u16HVAC_RrRawCabinTemp_Val(Mfx_Min_u16(tmpRead_k, 1275U));

  /* DataTypeConversion: '<S7>/DataTypeConversion3' incorporates:
   *  Constant: '<S7>/Constant20'
   *  Constant: '<S7>/Constant21'
   *  Inport: '<Root>/EvaprT_tRe_Val'
   *  Product: '<S7>/Product3'
   *  Sum: '<S7>/Add3'
   */
  tmp = (((float32)tmpRead_t * 0.1F + -546.28F) + 313.2F) * 10.0F;
  if (tmp >= 0.0F) {
    tmpRead_k = (uint16)tmp;
  } else {
    tmpRead_k = 0U;
  }

  /* End of DataTypeConversion: '<S7>/DataTypeConversion3' */

  /* Outport: '<Root>/ComTx_u16HVAC_RrRawEvaTemp_Val' incorporates:
   *  Saturate: '<S7>/Saturation2'
   */
  (void) Rte_Write_ComTx_u16HVAC_RrRawEvaTemp_Val(Mfx_Min_u16(tmpRead_k, 1275U));

  /* Product: '<S7>/Divide' incorporates:
   *  Constant: '<S7>/Constant'
   */
  tmp = (float32)tmpRead_n / 5.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/ComTx_u8HVAC_SolarValueLeft_Val' incorporates:
   *  Product: '<S7>/Divide'
   */
  (void) Rte_Write_ComTx_u8HVAC_SolarValueLeft_Val(rtb_Divide10_0);

  /* Product: '<S7>/Divide1' incorporates:
   *  Constant: '<S7>/Constant1'
   */
  tmp = (float32)tmpRead_o / 5.0F;
  if (tmp < 256.0F) {
    rtb_Divide10_0 = (uint8)tmp;
  } else {
    rtb_Divide10_0 = MAX_uint8_T;
  }

  /* Outport: '<Root>/ComTx_u8HVAC_SolarValueRight_Val' incorporates:
   *  Product: '<S7>/Divide1'
   */
  (void) Rte_Write_ComTx_u8HVAC_SolarValueRight_Val(rtb_Divide10_0);

  /* Outport: '<Root>/ComTx_bHVAC_LeftExtMirrorHeatActSt_Val' incorporates:
   *  DataTypeConversion: '<S5>/DataTypeConversion'
   */
  (void) Rte_Write_ComTx_bHVAC_LeftExtMirrorHeatActSt_Val(tmpRead_l != 0);

  /* Outport: '<Root>/ComTx_bHVAC_RearDefrostActSt_Val' incorporates:
   *  DataTypeConversion: '<S5>/DataTypeConversion1'
   */
  (void) Rte_Write_ComTx_bHVAC_RearDefrostActSt_Val(tmpRead_p != 0);

  /* Outport: '<Root>/ComTx_bHVAC_RightExtMirrorHeatActSt_Val' incorporates:
   *  DataTypeConversion: '<S5>/DataTypeConversion2'
   */
  (void) Rte_Write_ComTx_bHVAC_RightExtMirrorHeatActSt_Val(tmpRead_m != 0);

  /* Outport: '<Root>/ComTx_bHVAC_ModeServoSt_Val' incorporates:
   *  DataTypeConversion: '<S4>/DataTypeConversion'
   */
  (void) Rte_Write_ComTx_bHVAC_ModeServoSt_Val(tmpRead_a != 0);

  /* Outport: '<Root>/ComTx_u8HVAC_AirCirculationAct_Val' incorporates:
   *  SignalConversion: '<S4>/SignalConversion6'
   */
  (void) Rte_Write_ComTx_u8HVAC_AirCirculationAct_Val(tmpRead_f);

  /* Outport: '<Root>/ComTx_u8HVAC_CirculationServoFault_Val' incorporates:
   *  SignalConversion: '<S4>/SignalConversion7'
   */
  (void) Rte_Write_ComTx_u8HVAC_CirculationServoFault_Val(tmpRead_g);

  /* Outport: '<Root>/ComTx_u8HVAC_DrAirCirculationAct_Val' incorporates:
   *  SignalConversion: '<S4>/SignalConversion22'
   */
  (void) Rte_Write_ComTx_u8HVAC_DrAirCirculationAct_Val(tmpRead_6);

  /* Outport: '<Root>/ComTx_u8HVAC_DrAirCirculationServoFault_Val' incorporates:
   *  SignalConversion: '<S4>/SignalConversion23'
   */
  (void) Rte_Write_ComTx_u8HVAC_DrAirCirculationServoFault_Val(tmpRead_7);

  /* Outport: '<Root>/ComTx_u8HVAC_DrAMDoorPostionAct_Val' incorporates:
   *  SignalConversion: '<S4>/SignalConversion'
   */
  (void) Rte_Write_ComTx_u8HVAC_DrAMDoorPostionAct_Val(tmpRead_4);

  /* Outport: '<Root>/ComTx_u8HVAC_DrAMServoFault_Val' incorporates:
   *  SignalConversion: '<S4>/SignalConversion1'
   */
  (void) Rte_Write_ComTx_u8HVAC_DrAMServoFault_Val(tmpRead_5);

  /* Outport: '<Root>/ComTx_u8HVAC_ModeServoFault_Val' incorporates:
   *  SignalConversion: '<S4>/SignalConversion3'
   */
  (void) Rte_Write_ComTx_u8HVAC_ModeServoFault_Val(tmpRead_9);

  /* Outport: '<Root>/ComTx_u8HVAC_PaAirCirculationAct_Val' incorporates:
   *  SignalConversion: '<S4>/SignalConversion5'
   */
  (void) Rte_Write_ComTx_u8HVAC_PaAirCirculationAct_Val(tmpRead_d);

  /* Outport: '<Root>/ComTx_u8HVAC_PaAirCirculationServoFault_Val' incorporates:
   *  SignalConversion: '<S4>/SignalConversion4'
   */
  (void) Rte_Write_ComTx_u8HVAC_PaAirCirculationServoFault_Val(tmpRead_e);

  /* Outport: '<Root>/ComTx_u8HVAC_PaAMDoorPostionAct_Val' incorporates:
   *  SignalConversion: '<S4>/SignalConversion8'
   */
  (void) Rte_Write_ComTx_u8HVAC_PaAMDoorPostionAct_Val(tmpRead_b);

  /* Outport: '<Root>/ComTx_u8HVAC_PaAMServoFault_Val' incorporates:
   *  SignalConversion: '<S4>/SignalConversion9'
   */
  (void) Rte_Write_ComTx_u8HVAC_PaAMServoFault_Val(tmpRead_c);

  /* Outport: '<Root>/ComTx_u8HVAC_WindExitModeAct_Val' incorporates:
   *  SignalConversion: '<S4>/SignalConversion2'
   */
  (void) Rte_Write_ComTx_u8HVAC_WindExitModeAct_Val(tmpRead_8);

  /* Outport: '<Root>/ComTx_bHVAC_RrModeServoSt_Val' incorporates:
   *  DataTypeConversion: '<S6>/DataTypeConversion'
   */
  (void) Rte_Write_ComTx_bHVAC_RrModeServoSt_Val(tmpRead_j != 0);

  /* Outport: '<Root>/ComTx_u8HVAC_RrModeServoFault_Val' incorporates:
   *  SignalConversion: '<S6>/SignalConversion3'
   */
  (void) Rte_Write_ComTx_u8HVAC_RrModeServoFault_Val(tmpRead_i);

  /* Outport: '<Root>/ComTx_u8HVAC_RrWindExitModeAct_Val' incorporates:
   *  SignalConversion: '<S6>/SignalConversion4'
   */
  (void) Rte_Write_ComTx_u8HVAC_RrWindExitModeAct_Val(tmpRead_h);

  /* Outport: '<Root>/ComTx_u8HVAC_RrWindExitSpdLvlAct_Val' incorporates:
   *  DataTypeConversion: '<S3>/DataTypeConversion1'
   */
  (void) Rte_Write_ComTx_u8HVAC_RrWindExitSpdLvlAct_Val(tmpRead_2);

  /* Outport: '<Root>/ComTx_u8HVAC_WindExitSpdLvlAct_Val' incorporates:
   *  DataTypeConversion: '<S3>/DataTypeConversion'
   */
  (void) Rte_Write_ComTx_u8HVAC_WindExitSpdLvlAct_Val(tmpRead_3);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HVAC_ComCnvTx_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, HVAC_ComCnvTx_CODE) HVAC_ComCnvTx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
