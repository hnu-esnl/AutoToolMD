/*
 * File: DcChrgrPileU1_DD.c
 *
 * Code generated for Simulink model 'DcChrgrPileU1_DD'.
 *
 * Model version                  : 1.31
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Oct 24 16:58:05 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DcChrgrPileU1_DD.h"
#include "DcChrgrPileU1_DD_private.h"

/* Model step function for TID1 */
FUNC(void, DcChrgrPileU1_DD_CODE) DcChrgrPileU1_DD_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  sint16 rtb_IoHwAb_AdcFac_Get_AdcFac_Ge;
  boolean rtb_RelationalOperator_l;
  boolean rtb_RelationalOperator1;
  boolean rtb_DTC_DcChrgrPileU1SRCMax_G_m;
  boolean rtb_DTC_DcChrgrPileU1SRCMax_G_b;
  boolean rtb_DTC_DcChrgrPileU1SRCMin_G_i;
  boolean rtb_DTC_DcChrgrPileU1SRCMin_G_d;
  Dem_EventStatusType rtb_RelationalOperator_e;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrPileU1_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/DcChrgrPileU1_DD_Runnable_10ms_sys'
   */
  /* FunctionCaller: '<S1>/IoHwAb_AdcFac_Get_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_DcChrgrPileU1, &rtb_IoHwAb_AdcFac_Get_AdcFac_Ge);

  /* DataTypeConversion: '<S1>/DataTypeConversion1' */
  if (rtb_IoHwAb_AdcFac_Get_AdcFac_Ge < 0) {
    rtb_IoHwAb_AdcFac_Get_AdcFac_Ge = 0;
  }

  /* RelationalOperator: '<S1>/RelationalOperator' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  rtb_RelationalOperator_l = ((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge < Rte_CData_DcChrgrPileU1_uRawMinSRC_C());

  /* RelationalOperator: '<S1>/RelationalOperator1' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  rtb_RelationalOperator1 = ((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge > Rte_CData_DcChrgrPileU1_uRawMaxSRC_C());

  /* If: '<S1>/If' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Inport: '<Root>/BattU_bVoltEnbPinDiag_Val'
   *  Inport: '<Root>/VehCoorn_stPwrMod_Val'
   *  Logic: '<S1>/LogicalOperator'
   *  RelationalOperator: '<S1>/Relational Operator'
   */
  if (Rte_IRead_DcChrgrPileU1_DD_Runnable_10ms_BattU_bVoltEnbPinDiag_Val() && (Rte_IRead_DcChrgrPileU1_DD_Runnable_10ms_VehCoorn_stPwrMod_Val() != 0)) {
    /* Outputs for IfAction SubSystem: '<S1>/DcChrgrPileU1FailDiagSet' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S4>/Constant1'
     *  Constant: '<S4>/Constant2'
     */
    if (rtb_RelationalOperator_l) {
      rtb_RelationalOperator_e = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_RelationalOperator_e = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S4>/Switch' */

    /* FunctionCaller: '<S4>/DTC_DcChrgrPileU1SRCMax_SetEventStatus' */
    Rte_Call_DTC_DcChrgrPileU1SRCMax_SetEventStatus(rtb_RelationalOperator_e);

    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant3'
     *  Constant: '<S4>/Constant4'
     */
    if (rtb_RelationalOperator1) {
      rtb_RelationalOperator_e = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_RelationalOperator_e = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S4>/Switch1' */

    /* FunctionCaller: '<S4>/DTC_DcChrgrPileU1SRCMin_SetEventStatus' */
    Rte_Call_DTC_DcChrgrPileU1SRCMin_SetEventStatus(rtb_RelationalOperator_e);

    /* End of Outputs for SubSystem: '<S1>/DcChrgrPileU1FailDiagSet' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/DcChrgrPileU1FailDiagDebounceReSet' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* FunctionCaller: '<S3>/DTC_DcChrgrPileU1SRCMax_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S3>/Constant'
     */
    Rte_Call_DTC_DcChrgrPileU1SRCMax_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S3>/DTC_DcChrgrPileU1SRCMin_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    Rte_Call_DTC_DcChrgrPileU1SRCMin_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S1>/DcChrgrPileU1FailDiagDebounceReSet' */
  }

  /* End of If: '<S1>/If' */

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU1SRCMax_GetEventFailed' */
  Rte_Call_DTC_DcChrgrPileU1SRCMax_GetEventFailed(&rtb_DTC_DcChrgrPileU1SRCMax_G_m);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU1SRCMax_GetEventTested' */
  Rte_Call_DTC_DcChrgrPileU1SRCMax_GetEventTested(&rtb_DTC_DcChrgrPileU1SRCMax_G_b);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU1SRCMin_GetEventFailed' */
  Rte_Call_DTC_DcChrgrPileU1SRCMin_GetEventFailed(&rtb_DTC_DcChrgrPileU1SRCMin_G_i);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU1SRCMin_GetEventTested' */
  Rte_Call_DTC_DcChrgrPileU1SRCMin_GetEventTested(&rtb_DTC_DcChrgrPileU1SRCMin_G_d);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrPileU1_DD_Runnable_10ms_at_outport_1' */

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrPileU1_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/DcChrgrPileU1_DD_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/DcChrgrPileU1_flgSRCMaxErr_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion2'
   */
  Rte_IWrite_DcChrgrPileU1_DD_Runnable_10ms_DcChrgrPileU1_flgSRCMaxErr_Val(rtb_RelationalOperator1);

  /* Outport: '<Root>/DcChrgrPileU1_flgSRCMinErr_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion1'
   */
  Rte_IWrite_DcChrgrPileU1_DD_Runnable_10ms_DcChrgrPileU1_flgSRCMinErr_Val(rtb_RelationalOperator_l);

  /* Outport: '<Root>/DcChrgrPileU1_uRaw_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  Rte_IWrite_DcChrgrPileU1_DD_Runnable_10ms_DcChrgrPileU1_uRaw_Val((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge);

  /* Outport: '<Root>/DcChrgrPileU1_bVoltLvl_Val' incorporates:
   *  Constant: '<S1>/Constant3'
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   *  RelationalOperator: '<S1>/RelationalOperator2'
   */
  Rte_IWrite_DcChrgrPileU1_DD_Runnable_10ms_DcChrgrPileU1_bVoltLvl_Val((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge > 4000);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrPileU1_DD_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, DcChrgrPileU1_DD_CODE) DcChrgrPileU1_DD_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
