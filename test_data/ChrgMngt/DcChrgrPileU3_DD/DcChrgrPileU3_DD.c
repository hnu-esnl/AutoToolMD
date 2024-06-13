/*
 * File: DcChrgrPileU3_DD.c
 *
 * Code generated for Simulink model 'DcChrgrPileU3_DD'.
 *
 * Model version                  : 1.21
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Oct 24 17:02:12 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DcChrgrPileU3_DD.h"
#include "DcChrgrPileU3_DD_private.h"

/* Block states (default storage) */
VAR(DW_DcChrgrPileU3_DD_T, DcChrgrPileU3_DD_VAR) DcChrgrPileU3_DD_DW;

/* Model step function for TID1 */
FUNC(void, DcChrgrPileU3_DD_CODE) DcChrgrPileU3_DD_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  sint16 rtb_IoHwAb_AdcFac_Get_AdcFac_Ge;
  boolean rtb_RelationalOperator_i;
  boolean rtb_RelationalOperator1;
  boolean rtb_DTC_DcChrgrPileU3SRCMax_G_e;
  boolean rtb_DTC_DcChrgrPileU3SRCMax_G_b;
  boolean rtb_DTC_DcChrgrPileU3SRCMin_G_e;
  boolean rtb_DTC_DcChrgrPileU3SRCMin_G_b;
  Dem_EventStatusType rtb_RelationalOperator_g;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrPileU3_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/DcChrgrPileU3_DD_Runnable_10ms_sys'
   */
  /* Sum: '<S1>/Add' incorporates:
   *  DataStoreWrite: '<S1>/Data Store Write'
   *  Inport: '<Root>/BattU_VrmFac1_Val'
   *  Inport: '<Root>/BattU_VrmFac2_Val'
   *  Inport: '<Root>/BattU_VrmFac3_Val'
   */
  DcChrgrPileU3_DD_DW.BattU_VrmFac = Mfx_Add_u32u32_u16((uint32)Rte_IRead_DcChrgrPileU3_DD_Runnable_10ms_BattU_VrmFac1_Val() + Rte_IRead_DcChrgrPileU3_DD_Runnable_10ms_BattU_VrmFac2_Val(), Rte_IRead_DcChrgrPileU3_DD_Runnable_10ms_BattU_VrmFac3_Val());

  /* FunctionCaller: '<S1>/IoHwAb_AdcFac_Get_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_DcChrgrPileU3, &rtb_IoHwAb_AdcFac_Get_AdcFac_Ge);

  /* DataTypeConversion: '<S1>/DataTypeConversion1' */
  if (rtb_IoHwAb_AdcFac_Get_AdcFac_Ge < 0) {
    rtb_IoHwAb_AdcFac_Get_AdcFac_Ge = 0;
  }

  /* RelationalOperator: '<S1>/RelationalOperator' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  rtb_RelationalOperator_i = ((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge < Rte_CData_DcChrgrPileU3_uRawMinSRC_C());

  /* RelationalOperator: '<S1>/RelationalOperator1' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  rtb_RelationalOperator1 = ((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge > Rte_CData_DcChrgrPileU3_uRawMaxSRC_C());

  /* If: '<S1>/If' incorporates:
   *  Constant: '<S1>/Constant3'
   *  Inport: '<Root>/BattU_bVoltEnbPinDiag_Val'
   *  Inport: '<Root>/VehCoorn_stPwrMod_Val'
   *  Logic: '<S1>/LogicalOperator'
   *  RelationalOperator: '<S1>/Relational Operator'
   */
  if (Rte_IRead_DcChrgrPileU3_DD_Runnable_10ms_BattU_bVoltEnbPinDiag_Val() && (Rte_IRead_DcChrgrPileU3_DD_Runnable_10ms_VehCoorn_stPwrMod_Val() != 0)) {
    /* Outputs for IfAction SubSystem: '<S1>/DcChrgrPileU3FailDiagSet' incorporates:
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

    /* FunctionCaller: '<S4>/DTC_DcChrgrPileU3SRCMax_SetEventStatus' */
    Rte_Call_DTC_DcChrgrPileU3SRCMax_SetEventStatus(rtb_RelationalOperator_g);

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

    /* FunctionCaller: '<S4>/DTC_DcChrgrPileU3SRCMin_SetEventStatus' */
    Rte_Call_DTC_DcChrgrPileU3SRCMin_SetEventStatus(rtb_RelationalOperator_g);

    /* End of Outputs for SubSystem: '<S1>/DcChrgrPileU3FailDiagSet' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/DcChrgrPileU3FailDiagDebounceReSet' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* FunctionCaller: '<S3>/DTC_DcChrgrPileU3SRCMax_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S3>/Constant'
     */
    Rte_Call_DTC_DcChrgrPileU3SRCMax_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S3>/DTC_DcChrgrPileU3SRCMin_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    Rte_Call_DTC_DcChrgrPileU3SRCMin_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S1>/DcChrgrPileU3FailDiagDebounceReSet' */
  }

  /* End of If: '<S1>/If' */

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU3SRCMax_GetEventFailed' */
  Rte_Call_DTC_DcChrgrPileU3SRCMax_GetEventFailed(&rtb_DTC_DcChrgrPileU3SRCMax_G_e);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU3SRCMax_GetEventTested' */
  Rte_Call_DTC_DcChrgrPileU3SRCMax_GetEventTested(&rtb_DTC_DcChrgrPileU3SRCMax_G_b);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU3SRCMin_GetEventFailed' */
  Rte_Call_DTC_DcChrgrPileU3SRCMin_GetEventFailed(&rtb_DTC_DcChrgrPileU3SRCMin_G_e);

  /* FunctionCaller: '<S1>/DTC_DcChrgrPileU3SRCMin_GetEventTested' */
  Rte_Call_DTC_DcChrgrPileU3SRCMin_GetEventTested(&rtb_DTC_DcChrgrPileU3SRCMin_G_b);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrPileU3_DD_Runnable_10ms_at_outport_1' */

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrPileU3_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/DcChrgrPileU3_DD_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/DcChrgrPileU3_flgSRCMaxErr_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion2'
   */
  Rte_IWrite_DcChrgrPileU3_DD_Runnable_10ms_DcChrgrPileU3_flgSRCMaxErr_Val(rtb_RelationalOperator1);

  /* Outport: '<Root>/DcChrgrPileU3_flgSRCMinErr_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion1'
   */
  Rte_IWrite_DcChrgrPileU3_DD_Runnable_10ms_DcChrgrPileU3_flgSRCMinErr_Val(rtb_RelationalOperator_i);

  /* Outport: '<Root>/DcChrgrPileU3_uRaw_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  Rte_IWrite_DcChrgrPileU3_DD_Runnable_10ms_DcChrgrPileU3_uRaw_Val((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge);

  /* Outport: '<Root>/DcChrgrPileU3_bVoltLvl_Val' incorporates:
   *  Constant: '<S1>/Constant5'
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   *  RelationalOperator: '<S1>/RelationalOperator2'
   */
  Rte_IWrite_DcChrgrPileU3_DD_Runnable_10ms_DcChrgrPileU3_bVoltLvl_Val((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge < 4000);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrPileU3_DD_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, DcChrgrPileU3_DD_CODE) DcChrgrPileU3_DD_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
