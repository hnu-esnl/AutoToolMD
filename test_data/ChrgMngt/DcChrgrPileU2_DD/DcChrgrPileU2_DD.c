/*
 * File: DcChrgrPileU2_DD.c
 *
 * Code generated for Simulink model 'DcChrgrPileU2_DD'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Sep 27 21:21:46 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DcChrgrPileU2_DD.h"
#include "DcChrgrPileU2_DD_private.h"

/* Model step function for TID1 */
FUNC(void, DcChrgrPileU2_DD_CODE) DcChrgrPileU2_DD_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  sint16 rtb_IoHwAb_AdcFac_Get_AdcFac_Ge;
  boolean rtb_RelationalOperator_i;
  boolean rtb_RelationalOperator1;
  boolean rtb_DTC_DcChrgrPileU2SRCMax_G_c;
  boolean rtb_DTC_DcChrgrPileU2SRCMax_G_p;
  boolean rtb_DTC_DcChrgrPileU2SRCMin_G_b;
  boolean rtb_DTC_DcChrgrPileU2SRCMin_G_m;
  Dem_EventStatusType rtb_RelationalOperator_g;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrPileU2_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/DcChrgrPileU2_DD_Runnable_10ms_sys'
   */
  /* FunctionCaller: '<S1>/IoHwAb_AdcFac_Get_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_DcChrgrPileU2, &rtb_IoHwAb_AdcFac_Get_AdcFac_Ge);

  /* DataTypeConversion: '<S1>/DataTypeConversion1' */
  if (rtb_IoHwAb_AdcFac_Get_AdcFac_Ge < 0) {
    rtb_IoHwAb_AdcFac_Get_AdcFac_Ge = 0;
  }

  /* RelationalOperator: '<S1>/RelationalOperator' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  rtb_RelationalOperator_i = ((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge < Rte_CData_DcChrgrPileU2_uRawMinSRC_C());

  /* RelationalOperator: '<S1>/RelationalOperator1' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  rtb_RelationalOperator1 = ((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge > Rte_CData_DcChrgrPileU2_uRawMaxSRC_C());

  /* If: '<S1>/If' incorporates:
   *  Constant: '<S1>/Constant3'
   *  Inport: '<Root>/BattU_bVoltEnbPinDiag_Val'
   *  Inport: '<Root>/VehCoorn_stPwrMod_Val'
   *  Logic: '<S1>/LogicalOperator'
   *  RelationalOperator: '<S1>/Relational Operator'
   */
  if (Rte_IRead_DcChrgrPileU2_DD_Runnable_10ms_BattU_bVoltEnbPinDiag_Val() && (Rte_IRead_DcChrgrPileU2_DD_Runnable_10ms_VehCoorn_stPwrMod_Val() != 0)) {
    /* Outputs for IfAction SubSystem: '<S1>/DcChrgrPileU2FailDiagSet' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S4>/Constant1'
     *  Constant: '<S4>/Constant2'
     */
    if (rtb_RelationalOperator_i) {
      rtb_RelationalOperator_g = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_RelationalOperator_g = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S4>/Switch' */

    /* FunctionCaller: '<S4>/DTC_DcChrgrPileU2SRCMax_SetEventStatus' */
    Rte_Call_DTC_DcChrgrPileU2SRCMax_SetEventStatus(rtb_RelationalOperator_g);

    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant3'
     *  Constant: '<S4>/Constant4'
     */
    if (rtb_RelationalOperator1) {
      rtb_RelationalOperator_g = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_RelationalOperator_g = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S4>/Switch1' */

    /* FunctionCaller: '<S4>/DTC_DcChrgrPileU2SRCMin_SetEventStatus' */
    Rte_Call_DTC_DcChrgrPileU2SRCMin_SetEventStatus(rtb_RelationalOperator_g);

    /* End of Outputs for SubSystem: '<S1>/DcChrgrPileU2FailDiagSet' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/DcChrgrPileU2FailDiagDebounceReSet' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* FunctionCaller: '<S3>/DTC_DcChrgrPileU2SRCMax_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S3>/Constant'
     */
    Rte_Call_DTC_DcChrgrPileU2SRCMax_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S3>/DTC_DcChrgrPileU2SRCMin_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    Rte_Call_DTC_DcChrgrPileU2SRCMin_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S1>/DcChrgrPileU2FailDiagDebounceReSet' */
  }

  /* End of If: '<S1>/If' */

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU2SRCMax_GetEventFailed' */
  Rte_Call_DTC_DcChrgrPileU2SRCMax_GetEventFailed(&rtb_DTC_DcChrgrPileU2SRCMax_G_c);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU2SRCMax_GetEventTested' */
  Rte_Call_DTC_DcChrgrPileU2SRCMax_GetEventTested(&rtb_DTC_DcChrgrPileU2SRCMax_G_p);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU2SRCMin_GetEventFailed' */
  Rte_Call_DTC_DcChrgrPileU2SRCMin_GetEventFailed(&rtb_DTC_DcChrgrPileU2SRCMin_G_b);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU2SRCMin_GetEventTested' */
  Rte_Call_DTC_DcChrgrPileU2SRCMin_GetEventTested(&rtb_DTC_DcChrgrPileU2SRCMin_G_m);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrPileU2_DD_Runnable_10ms_at_outport_1' */

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrPileU2_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/DcChrgrPileU2_DD_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/DcChrgrPileU2_flgSRCMaxErr_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion2'
   */
  Rte_IWrite_DcChrgrPileU2_DD_Runnable_10ms_DcChrgrPileU2_flgSRCMaxErr_Val(rtb_RelationalOperator1);

  /* Outport: '<Root>/DcChrgrPileU2_flgSRCMinErr_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion1'
   */
  Rte_IWrite_DcChrgrPileU2_DD_Runnable_10ms_DcChrgrPileU2_flgSRCMinErr_Val(rtb_RelationalOperator_i);

  /* Outport: '<Root>/DcChrgrPileU2_uRaw_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  Rte_IWrite_DcChrgrPileU2_DD_Runnable_10ms_DcChrgrPileU2_uRaw_Val((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge);

  /* Outport: '<Root>/DcChrgrPileU2_bVoltLvl_Val' incorporates:
   *  Constant: '<S1>/Constant2'
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   *  RelationalOperator: '<S1>/RelationalOperator2'
   */
  Rte_IWrite_DcChrgrPileU2_DD_Runnable_10ms_DcChrgrPileU2_bVoltLvl_Val((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge > 7500);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrPileU2_DD_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, DcChrgrPileU2_DD_CODE) DcChrgrPileU2_DD_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
