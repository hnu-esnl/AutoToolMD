/*
 * File: EPB_SysSrvAdpCust.c
 *
 * Code generated for Simulink model 'EPB_SysSrvAdpCust'.
 *
 * Model version                  : 1.76
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Thu Oct 13 13:50:35 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EPB_SysSrvAdpCust.h"
#include "EPB_SysSrvAdpCust_private.h"

/* Block states (default storage) */
VAR(DW_EPB_SysSrvAdpCust_T, EPB_SysSrvAdpCust_VAR) EPB_SysSrvAdpCust_DW;

/* Model step function for TID1 */
FUNC(void, EPB_SysSrvAdpCust_CODE) EPB_SysSrvAdpCust_Input_Runnable_10ms(void)
                      /* Explicit Task: EPB_SysSrvAdpCust_Input_Runnable_10ms */
{
  const uint8 *tmpIRead;
  const uint8 *tmpIRead_0;
  uint8 tmp;

  /* Inport: '<Root>/gCFG_u8SsmInVariantCoding_Val' */
  tmpIRead_0 =
    Rte_IRead_EPB_SysSrvAdpCust_Input_Runnable_10ms_gCFG_u8SsmInVariantCoding_Val
    ();

  /* Inport: '<Root>/gNVM_u8SsminDataStorageRead_a_Val' */
  tmpIRead =
    Rte_IRead_EPB_SysSrvAdpCust_Input_Runnable_10ms_gNVM_u8SsminDataStorageRead_a_Val
    ();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Input_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPB_SysSrvAdpCust_Input_Runnable_10ms_sys'
   */
  /* Switch: '<S2>/Switch1' incorporates:
   *  Constant: '<S2>/Constant3'
   *  Constant: '<S2>/Constant4'
   *  Inport: '<Root>/gDiag_bDSMClear_Val'
   */
  if (Rte_IRead_EPB_SysSrvAdpCust_Input_Runnable_10ms_gDiag_bDSMClear_Val()) {
    tmp = 27U;
  } else {
    tmp = 5U;
  }

  /* Outport: '<Root>/EPB_stButtonInFaultMonitorStatusReset_Val' incorporates:
   *  Switch: '<S2>/Switch1'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Input_Runnable_10ms_EPB_stButtonInFaultMonitorStatusReset_Val
    (tmp);

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S2>/Constant1'
   *  Inport: '<Root>/gNVM_bSsminDataStorageValid_Val'
   */
  if (Rte_IRead_EPB_SysSrvAdpCust_Input_Runnable_10ms_gNVM_bSsminDataStorageValid_Val
      ()) {
    tmp = 5U;
  } else {
    tmp = 27U;
  }

  /* Outport: '<Root>/EPB_stSSMInDataStorageValid_Val' incorporates:
   *  Switch: '<S2>/Switch'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Input_Runnable_10ms_EPB_stSSMInDataStorageValid_Val
    (tmp);

  /* Outport: '<Root>/EPB_bFunctionFailed_Val' incorporates:
   *  Constant: '<S2>/Constant2'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Input_Runnable_10ms_EPB_bFunctionFailed_Val(false);

  /* Outport: '<Root>/EPB_SSMInDataStorageRead_Val' incorporates:
   *  SignalConversion: '<S2>/Signal Conversion'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Input_Runnable_10ms_EPB_SSMInDataStorageRead_Val
    (tmpIRead);

  /* Outport: '<Root>/EPB_stSsmInFunctionConfig_Val' incorporates:
   *  Inport: '<Root>/gCFG_u8SsmInFunctionConfig_val'
   *  SignalConversion: '<S2>/Signal Conversion2'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Input_Runnable_10ms_EPB_stSsmInFunctionConfig_Val
    (Rte_IRead_EPB_SysSrvAdpCust_Input_Runnable_10ms_gCFG_u8SsmInFunctionConfig_Val
     ());

  /* Outport: '<Root>/EPB_stSsmInVariantCode_Val' incorporates:
   *  SignalConversion: '<S2>/Signal Conversion1'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Input_Runnable_10ms_EPB_stSsmInVariantCode_Val
    (tmpIRead_0);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Input_Runnable_10ms' */
}

/* Model step function for TID2 */
FUNC(void, EPB_SysSrvAdpCust_CODE) EPB_SysSrvAdpCust_Output_Runnable_10ms(void)
                     /* Explicit Task: EPB_SysSrvAdpCust_Output_Runnable_10ms */
{
  /* local block i/o variables */
  uint8 EPB_u8SsmoutDataStorageWrtCnt_Old;
  uint8 EPB_SSMOutDataStorageWrite_Old[128];
  sint32 i;
  const sint16 *tmpIRead_2;
  const uint8 *tmpIRead;
  const uint8 *tmpIRead_0;
  const uint8 *tmpIRead_1;
  uint8 Merge;
  uint8 rtb_Switch4;
  boolean rtb_RelationalOperator8;

  /* Inport: '<Root>/EPB_SSMOutDataStorageWrite_Val' */
  tmpIRead_0 =
    Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_EPB_SSMOutDataStorageWrite_Val
    ();

  /* Inport: '<Root>/gNVM_u8SsminDataStorageRead_a_Val' */
  tmpIRead =
    Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_gNVM_u8SsminDataStorageRead_a_Val
    ();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_10ms_sys'
   */
  /* UnitDelay: '<S4>/Unit Delay1' */
  EPB_u8SsmoutDataStorageWrtCnt_Old = EPB_SysSrvAdpCust_DW.UnitDelay1_DSTATE;

  /* Gain: '<S4>/Gain' */
  Merge = 0U;
  for (i = 0; i < 128; i++) {
    /* UnitDelay: '<S4>/Unit Delay' */
    EPB_SSMOutDataStorageWrite_Old[i] = EPB_SysSrvAdpCust_DW.UnitDelay_DSTATE[i];

    /* Gain: '<S4>/Gain' incorporates:
     *  RelationalOperator: '<S4>/Relational Operator'
     */
    Merge = (uint8)((uint32)(tmpIRead_0[i] != tmpIRead[i]) + Merge);
  }

  /* If: '<S4>/If' incorporates:
   *  Gain: '<S4>/Gain'
   */
  if (Merge > 0) {
    /* Outputs for IfAction SubSystem: '<S4>/If_Action_Subsystem' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Gain: '<S6>/Gain' incorporates:
     *  RelationalOperator: '<S6>/Relational Operator'
     */
    Merge = 0U;
    for (i = 0; i < 128; i++) {
      Merge = (uint8)((uint32)(tmpIRead_0[i] != EPB_SSMOutDataStorageWrite_Old[i])
                      + Merge);
    }

    /* If: '<S6>/If' incorporates:
     *  Gain: '<S6>/Gain'
     */
    if (Merge > 0) {
      /* Outputs for IfAction SubSystem: '<S6>/If_Action_Subsystem' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      /* Merge: '<S4>/Merge' incorporates:
       *  Constant: '<S8>/Constant'
       *  Sum: '<S8>/Add'
       */
      Merge = (uint8)(EPB_u8SsmoutDataStorageWrtCnt_Old + 1U);

      /* End of Outputs for SubSystem: '<S6>/If_Action_Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S6>/If_Action_Subsystem1' incorporates:
       *  ActionPort: '<S9>/Action Port'
       */
      /* Merge: '<S4>/Merge' incorporates:
       *  Inport: '<S9>/EPB_u8SsmoutDataStorageWrtCnt_Old'
       */
      Merge = EPB_u8SsmoutDataStorageWrtCnt_Old;

      /* End of Outputs for SubSystem: '<S6>/If_Action_Subsystem1' */
    }

    /* End of If: '<S6>/If' */
    /* End of Outputs for SubSystem: '<S4>/If_Action_Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/If_Action_Subsystem1' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* Merge: '<S4>/Merge' incorporates:
     *  SignalConversion: '<S7>/Signal Conversion1'
     */
    Merge = EPB_u8SsmoutDataStorageWrtCnt_Old;

    /* End of Outputs for SubSystem: '<S4>/If_Action_Subsystem1' */
  }

  /* End of If: '<S4>/If' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_10ms' */

  /* Inport: '<Root>/EPBCalprDrvr_CurrMotDrvrCurr_a_Val' */
  tmpIRead_2 =
    Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_EPBCalprDrvr_CurrMotDrvrCurr_a_Val
    ();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/gEPB_u8SsmoutDataStorageWrite_a_Val' incorporates:
   *  SignalConversion: '<S4>/Signal Conversion'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u8SsmoutDataStorageWrite_a_Val
    (tmpIRead_0);

  /* Outport: '<Root>/gEPB_u8SsmoutDataStorageWrtCnt_Val' incorporates:
   *  SignalConversion: '<S4>/Signal Conversion1'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u8SsmoutDataStorageWrtCnt_Val
    (Merge);

  /* Outport: '<Root>/gEPB_s16PbcOutCurrMotDrvrCurr_Val' incorporates:
   *  Constant: '<S4>/Constant23'
   *  DataTypeConversion: '<S4>/Data Type Conversion5'
   *  Selector: '<S4>/Selector'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_s16PbcOutCurrMotDrvrCurr_Val
    ((sint16)((tmpIRead_2[0] * 19275) >> 18));

  /* Outport: '<Root>/gEPB_s16PbcOutDiagBrakeTemperature_Val' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion2'
   *  Inport: '<Root>/EPB_tPbcOutDiagBrakeTemperature_Val'
   *  Saturate: '<S4>/Saturation'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_s16PbcOutDiagBrakeTemperature_Val
    (Mfx_Limit_s16(Mfx_Add_s32s32_s16
                   (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_EPB_tPbcOutDiagBrakeTemperature_Val
                    (), 63), 0, 713));

  /* Outport: '<Root>/gEPB_u16PbcOutDiagAchievedClampForce_Val' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion3'
   *  Inport: '<Root>/EPB_tqPbcOutDiagAchievedClampForce_Val'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u16PbcOutDiagAchievedClampForce_Val
    (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_EPB_tqPbcOutDiagAchievedClampForce_Val
     ());

  /* Outport: '<Root>/gEPB_u32AllowSleep_Local_Val' incorporates:
   *  Inport: '<Root>/EPB_stPbcOutEcuPowerLatchRequest_Val'
   *  RelationalOperator: '<S4>/Relational Operator7'
   *  Switch: '<S4>/Switch6'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u32AllowSleep_Local_Val
    ((uint32)
     (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_EPB_stPbcOutEcuPowerLatchRequest_Val
      () == 5));

  /* RelationalOperator: '<S4>/Relational Operator8' incorporates:
   *  Inport: '<Root>/EPB_stSsmOutCommunicationLatchRequest_Val'
   */
  rtb_RelationalOperator8 =
    (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_EPB_stSsmOutCommunicationLatchRequest_Val
     () == 5);

  /* Outport: '<Root>/gEPB_u32AllowSleep_NW_Val' incorporates:
   *  Switch: '<S4>/Switch7'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u32AllowSleep_NW_Val
    (rtb_RelationalOperator8);

  /* Outport: '<Root>/gEPB_u8Wakeup_Val' incorporates:
   *  Switch: '<S4>/Switch8'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u8Wakeup_Val
    (rtb_RelationalOperator8);

  /* Outport: '<Root>/gEPB_u32PbcOutDiagActuationCounter_Val' incorporates:
   *  Inport: '<Root>/EPB_cntPbcOutDiagActuationCounter_Val'
   *  SignalConversion: '<S4>/Signal Conversion2'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u32PbcOutDiagActuationCounter_Val
    (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_EPB_cntPbcOutDiagActuationCounter_Val
     ());

  /* RelationalOperator: '<S4>/Relational Operator1' incorporates:
   *  Inport: '<Root>/EPB_stPbcOutDiagActuatorState_Val'
   *  RelationalOperator: '<S4>/Relational Operator2'
   *  RelationalOperator: '<S4>/Relational Operator3'
   *  RelationalOperator: '<S4>/Relational Operator4'
   *  RelationalOperator: '<S4>/Relational Operator5'
   *  Switch: '<S4>/Switch'
   *  Switch: '<S4>/Switch1'
   *  Switch: '<S4>/Switch2'
   *  Switch: '<S4>/Switch3'
   */
  rtb_Switch4 =
    Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_EPB_stPbcOutDiagActuatorState_Val
    ();

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S4>/Constant10'
   *  Constant: '<S4>/Constant11'
   *  Constant: '<S4>/Constant7'
   *  Constant: '<S4>/Constant8'
   *  Constant: '<S4>/Constant9'
   *  Inport: '<Root>/EPB_stPbcOutDiagActuatorState_Val'
   *  RelationalOperator: '<S4>/Relational Operator1'
   *  RelationalOperator: '<S4>/Relational Operator2'
   *  RelationalOperator: '<S4>/Relational Operator3'
   *  RelationalOperator: '<S4>/Relational Operator4'
   *  RelationalOperator: '<S4>/Relational Operator5'
   *  RelationalOperator: '<S4>/Relational Operator6'
   *  Switch: '<S4>/Switch1'
   *  Switch: '<S4>/Switch2'
   *  Switch: '<S4>/Switch3'
   *  Switch: '<S4>/Switch4'
   *  Switch: '<S4>/Switch5'
   */
  if (rtb_Switch4 == 27) {
    /* Outport: '<Root>/gEPB_u8PbcOutDiagActuatorState_Val' incorporates:
     *  Constant: '<S4>/Constant1'
     */
    Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u8PbcOutDiagActuatorState_Val
      (0U);
  } else if (rtb_Switch4 == 40) {
    /* Outport: '<Root>/gEPB_u8PbcOutDiagActuatorState_Val' incorporates:
     *  Constant: '<S4>/Constant2'
     *  Switch: '<S4>/Switch1'
     */
    Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u8PbcOutDiagActuatorState_Val
      (5U);
  } else if (rtb_Switch4 == 54) {
    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant3'
     *  Outport: '<Root>/gEPB_u8PbcOutDiagActuatorState_Val'
     *  Switch: '<S4>/Switch2'
     */
    Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u8PbcOutDiagActuatorState_Val
      (1U);
  } else if (rtb_Switch4 == 113) {
    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant4'
     *  Outport: '<Root>/gEPB_u8PbcOutDiagActuatorState_Val'
     *  Switch: '<S4>/Switch2'
     *  Switch: '<S4>/Switch3'
     */
    Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u8PbcOutDiagActuatorState_Val
      (2U);
  } else {
    if (rtb_Switch4 == 142) {
      /* Switch: '<S4>/Switch4' incorporates:
       *  Constant: '<S4>/Constant5'
       *  Switch: '<S4>/Switch1'
       *  Switch: '<S4>/Switch2'
       *  Switch: '<S4>/Switch3'
       */
      rtb_Switch4 = 3U;
    } else if
        (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_EPB_stPbcOutDiagActuatorState_Val
         () == 144) {
      /* Switch: '<S4>/Switch5' incorporates:
       *  Constant: '<S4>/Constant6'
       *  Switch: '<S4>/Switch1'
       *  Switch: '<S4>/Switch2'
       *  Switch: '<S4>/Switch3'
       *  Switch: '<S4>/Switch4'
       */
      rtb_Switch4 = 6U;
    } else {
      /* Switch: '<S4>/Switch4' incorporates:
       *  Constant: '<S4>/Constant13'
       *  Switch: '<S4>/Switch1'
       *  Switch: '<S4>/Switch2'
       *  Switch: '<S4>/Switch3'
       *  Switch: '<S4>/Switch5'
       */
      rtb_Switch4 = 4U;
    }

    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant9'
     *  Outport: '<Root>/gEPB_u8PbcOutDiagActuatorState_Val'
     *  RelationalOperator: '<S4>/Relational Operator6'
     *  Switch: '<S4>/Switch2'
     *  Switch: '<S4>/Switch3'
     *  Switch: '<S4>/Switch4'
     *  Switch: '<S4>/Switch5'
     */
    Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u8PbcOutDiagActuatorState_Val
      (rtb_Switch4);
  }

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_10ms' */

  /* Inport: '<Root>/EPB_PbcOutPbcSoftwareVersion_Val' */
  tmpIRead_1 =
    Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_EPB_PbcOutPbcSoftwareVersion_Val
    ();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/gEPB_u8PbcOutPbcSoftwareVersion_Val' incorporates:
   *  SignalConversion: '<S4>/Signal Conversion6'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u8PbcOutPbcSoftwareVersion_Val
    (tmpIRead_1);

  /* Outport: '<Root>/gEPB_u8SsmOutEpbSwtCycle_Val' incorporates:
   *  Inport: '<Root>/EPB_stSsmOutEpbSwtCycle_Val'
   *  SignalConversion: '<S4>/Signal Conversion3'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u8SsmOutEpbSwtCycle_Val
    (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_EPB_stSsmOutEpbSwtCycle_Val
     ());

  /* Outport: '<Root>/gEPB_u8SsmOutPrkBrkAplSwt_Val' incorporates:
   *  Inport: '<Root>/EPB_stSsmOutPrkBrkAplSwt_Val'
   *  SignalConversion: '<S4>/Signal Conversion4'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u8SsmOutPrkBrkAplSwt_Val
    (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_EPB_stSsmOutPrkBrkAplSwt_Val
     ());

  /* Outport: '<Root>/gEPB_u8SsmOutSysState_Val' incorporates:
   *  Inport: '<Root>/EPB_stSsmOutSysState_Val'
   *  SignalConversion: '<S4>/Signal Conversion5'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_10ms_gEPB_u8SsmOutSysState_Val
    (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_10ms_EPB_stSsmOutSysState_Val());

  /* FunctionCaller: '<S4>/DTC_EPBADBFRL_SetEventStatus' */
  Rte_Call_DTC_EPBADBFRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBADBFRR_SetEventStatus' */
  Rte_Call_DTC_EPBADBFRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBActDefecteErrRL_SetEventStatus' */
  Rte_Call_DTC_EPBActDefecteErrRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBActDefecteErrRR_SetEventStatus' */
  Rte_Call_DTC_EPBActDefecteErrRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBActOLRL_SetEventStatus' */
  Rte_Call_DTC_EPBActOLRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBActOLRR_SetEventStatus' */
  Rte_Call_DTC_EPBActOLRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBActStndstlRL_SetEventStatus' */
  Rte_Call_DTC_EPBActStndstlRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBActStndstlRR_SetEventStatus' */
  Rte_Call_DTC_EPBActStndstlRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBActuatorDmgRL_SetEventStatus' */
  Rte_Call_DTC_EPBActuatorDmgRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBActuatorDmgRR_SetEventStatus' */
  Rte_Call_DTC_EPBActuatorDmgRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBActuatorStukRL_SetEventStatus' */
  Rte_Call_DTC_EPBActuatorStukRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBActuatorStukRR_SetEventStatus' */
  Rte_Call_DTC_EPBActuatorStukRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBAplyPwRRosRR_SetEventStatus' */
  Rte_Call_DTC_EPBAplyPwRRosRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBAplyPwrLosRL_SetEventStatus' */
  Rte_Call_DTC_EPBAplyPwrLosRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBAssemblyTestRL_SetEventStatus' */
  Rte_Call_DTC_EPBAssemblyTestRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBAssemblyTestRR_SetEventStatus' */
  Rte_Call_DTC_EPBAssemblyTestRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBBCSMsgChkErr_SetEventStatus' */
  Rte_Call_DTC_EPBBCSMsgChkErr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBBCSMsgInVld_SetEventStatus' */
  Rte_Call_DTC_EPBBCSMsgInVld_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBBCSMsgTimeOut_SetEventStatus' */
  Rte_Call_DTC_EPBBCSMsgTimeOut_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBCCUMsgInVld_SetEventStatus' */
  Rte_Call_DTC_EPBCCUMsgInVld_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBCCUMsgTimeOut_SetEventStatus' */
  Rte_Call_DTC_EPBCCUMsgTimeOut_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBClpFrcInsuffcientRL_SetEventStatus' */
  Rte_Call_DTC_EPBClpFrcInsuffcientRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBClpFrcInsuffcientRR_SetEventStatus' */
  Rte_Call_DTC_EPBClpFrcInsuffcientRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBDiagnosisModeRL_SetEventStatus' */
  Rte_Call_DTC_EPBDiagnosisModeRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBDiagnosisModeRR_SetEventStatus' */
  Rte_Call_DTC_EPBDiagnosisModeRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBEepInitErrRL_SetEventStatus' */
  Rte_Call_DTC_EPBEepInitErrRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBEepInitErrRR_SetEventStatus' */
  Rte_Call_DTC_EPBEepInitErrRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBFreeRunCurErrRL_SetEventStatus' */
  Rte_Call_DTC_EPBFreeRunCurErrRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBFreeRunCurErrRR_SetEventStatus' */
  Rte_Call_DTC_EPBFreeRunCurErrRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBHostHSPFaultRL_SetEventStatus' */
  Rte_Call_DTC_EPBHostHSPFaultRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBHostHSPFaultRR_SetEventStatus' */
  Rte_Call_DTC_EPBHostHSPFaultRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBHostNoActRL_SetEventStatus' */
  Rte_Call_DTC_EPBHostNoActRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBHostNoActRR_SetEventStatus' */
  Rte_Call_DTC_EPBHostNoActRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBIDCMsgInVld_SetEventStatus' */
  Rte_Call_DTC_EPBIDCMsgInVld_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBLowVoltRL_SetEventStatus' */
  Rte_Call_DTC_EPBLowVoltRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBLowVoltRR_SetEventStatus' */
  Rte_Call_DTC_EPBLowVoltRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBMaintenanceRL_SetEventStatus' */
  Rte_Call_DTC_EPBMaintenanceRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBMaintenanceRR_SetEventStatus' */
  Rte_Call_DTC_EPBMaintenanceRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBMotCurFlutExcessRL_SetEventStatus' */
  Rte_Call_DTC_EPBMotCurFlutExcessRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBMotCurFlutExcessRR_SetEventStatus' */
  Rte_Call_DTC_EPBMotCurFlutExcessRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBOutOfSpecRL_SetEventStatus' */
  Rte_Call_DTC_EPBOutOfSpecRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBOutOfSpecRR_SetEventStatus' */
  Rte_Call_DTC_EPBOutOfSpecRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBOvrTempRL_SetEventStatus' */
  Rte_Call_DTC_EPBOvrTempRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBOvrTempRR_SetEventStatus' */
  Rte_Call_DTC_EPBOvrTempRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBOvrVoltRL_SetEventStatus' */
  Rte_Call_DTC_EPBOvrVoltRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBOvrVoltRR_SetEventStatus' */
  Rte_Call_DTC_EPBOvrVoltRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBPAAMsgChkErr_SetEventStatus' */
  Rte_Call_DTC_EPBPAAMsgChkErr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBPAAMsgTimeOut_SetEventStatus' */
  Rte_Call_DTC_EPBPAAMsgTimeOut_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBPosUnkownRL_SetEventStatus' */
  Rte_Call_DTC_EPBPosUnkownRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBPosUnkownRR_SetEventStatus' */
  Rte_Call_DTC_EPBPosUnkownRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBRBMMsgChkErr_SetEventStatus' */
  Rte_Call_DTC_EPBRBMMsgChkErr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBRBMMsgInVld_SetEventStatus' */
  Rte_Call_DTC_EPBRBMMsgInVld_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBRBMMsgTimeOut_SetEventStatus' */
  Rte_Call_DTC_EPBRBMMsgTimeOut_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBRRsPwRRosRR_SetEventStatus' */
  Rte_Call_DTC_EPBRRsPwRRosRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBRlsPwrLosRL_SetEventStatus' */
  Rte_Call_DTC_EPBRlsPwrLosRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBRollerBenchRL_SetEventStatus' */
  Rte_Call_DTC_EPBRollerBenchRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBRollerBenchRR_SetEventStatus' */
  Rte_Call_DTC_EPBRollerBenchRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBSRSMsgChkErr_SetEventStatus' */
  Rte_Call_DTC_EPBSRSMsgChkErr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBSRSMsgInVld_SetEventStatus' */
  Rte_Call_DTC_EPBSRSMsgInVld_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBSRSMsgTimeOut_SetEventStatus' */
  Rte_Call_DTC_EPBSRSMsgTimeOut_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBSwitchErr_SetEventStatus' */
  Rte_Call_DTC_EPBSwitchErr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBSwitchStuckErr_SetEventStatus' */
  Rte_Call_DTC_EPBSwitchStuckErr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBUndrVoltRL_SetEventStatus' */
  Rte_Call_DTC_EPBUndrVoltRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBUndrVoltRR_SetEventStatus' */
  Rte_Call_DTC_EPBUndrVoltRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBUnecpectedPwrDwnRL_SetEventStatus' */
  Rte_Call_DTC_EPBUnecpectedPwrDwnRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBUnecpectedPwrDwnRR_SetEventStatus' */
  Rte_Call_DTC_EPBUnecpectedPwrDwnRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBVCUMsgChkErr_SetEventStatus' */
  Rte_Call_DTC_EPBVCUMsgChkErr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBVCUMsgInVld_SetEventStatus' */
  Rte_Call_DTC_EPBVCUMsgInVld_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBVCUMsgTimeOut_SetEventStatus' */
  Rte_Call_DTC_EPBVCUMsgTimeOut_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBWrongPaprRL_SetEventStatus' */
  Rte_Call_DTC_EPBWrongPaprRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBWrongPaprRR_SetEventStatus' */
  Rte_Call_DTC_EPBWrongPaprRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBWrongVariantRL_SetEventStatus' */
  Rte_Call_DTC_EPBWrongVariantRL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBWrongVariantRR_SetEventStatus' */
  Rte_Call_DTC_EPBWrongVariantRR_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBZCUFMsgChkErr_SetEventStatus' */
  Rte_Call_DTC_EPBZCUFMsgChkErr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBZCUFMsgInVld_SetEventStatus' */
  Rte_Call_DTC_EPBZCUFMsgInVld_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBZCUFMsgTimeOut_SetEventStatus' */
  Rte_Call_DTC_EPBZCUFMsgTimeOut_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBZCUTMsgChkErr_SetEventStatus' */
  Rte_Call_DTC_EPBZCUTMsgChkErr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBZCUTMsgInVld_SetEventStatus' */
  Rte_Call_DTC_EPBZCUTMsgInVld_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S4>/DTC_EPBZCUTMsgTimeOut_SetEventStatus' */
  Rte_Call_DTC_EPBZCUTMsgTimeOut_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* Update for UnitDelay: '<S4>/Unit Delay1' */
  EPB_SysSrvAdpCust_DW.UnitDelay1_DSTATE = Merge;

  /* Update for UnitDelay: '<S4>/Unit Delay' */
  memcpy(&EPB_SysSrvAdpCust_DW.UnitDelay_DSTATE[0], &tmpIRead_0[0], sizeof(uint8)
         << 7U);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_10ms' */
}

/* Output function */
FUNC(void, EPB_SysSrvAdpCust_CODE) EPB_SysSrvAdpCust_Input_Runnable_Init(void)
{
  const uint8 *tmpIRead;
  const uint8 *tmpIRead_0;
  uint8 tmp;

  /* Inport: '<Root>/gCFG_u8SsmInVariantCoding_Val' */
  tmpIRead_0 =
    Rte_IRead_EPB_SysSrvAdpCust_Input_Runnable_Init_gCFG_u8SsmInVariantCoding_Val
    ();

  /* Inport: '<Root>/gNVM_u8SsminDataStorageRead_a_Val' */
  tmpIRead =
    Rte_IRead_EPB_SysSrvAdpCust_Input_Runnable_Init_gNVM_u8SsminDataStorageRead_a_Val
    ();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Input_Runnable_Init' incorporates:
   *  SubSystem: '<Root>/EPB_SysSrvAdpCust_Input_Runnable_Init_sys'
   */
  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant1'
   *  Inport: '<Root>/gNVM_bSsminDataStorageValid_Val'
   */
  if (Rte_IRead_EPB_SysSrvAdpCust_Input_Runnable_Init_gNVM_bSsminDataStorageValid_Val
      ()) {
    tmp = 5U;
  } else {
    tmp = 27U;
  }

  /* Outport: '<Root>/EPB_stSSMInDataStorageValid_Val' incorporates:
   *  Switch: '<S3>/Switch'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Input_Runnable_Init_EPB_stSSMInDataStorageValid_Val
    (tmp);

  /* Outport: '<Root>/EPB_bFunctionFailed_Val' incorporates:
   *  Constant: '<S3>/Constant2'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Input_Runnable_Init_EPB_bFunctionFailed_Val(false);

  /* Outport: '<Root>/EPB_SSMInDataStorageRead_Val' incorporates:
   *  SignalConversion: '<S3>/Signal Conversion'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Input_Runnable_Init_EPB_SSMInDataStorageRead_Val
    (tmpIRead);

  /* Outport: '<Root>/EPB_stButtonInFaultMonitorStatusReset_Val' incorporates:
   *  Constant: '<S3>/Constant3'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Input_Runnable_Init_EPB_stButtonInFaultMonitorStatusReset_Val
    (5U);

  /* Outport: '<Root>/EPB_stSsmInFunctionConfig_Val' incorporates:
   *  Inport: '<Root>/gCFG_u8SsmInFunctionConfig_val'
   *  SignalConversion: '<S3>/Signal Conversion1'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Input_Runnable_Init_EPB_stSsmInFunctionConfig_Val
    (Rte_IRead_EPB_SysSrvAdpCust_Input_Runnable_Init_gCFG_u8SsmInFunctionConfig_Val
     ());

  /* Outport: '<Root>/EPB_stSsmInVariantCode_Val' incorporates:
   *  SignalConversion: '<S3>/Signal Conversion2'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Input_Runnable_Init_EPB_stSsmInVariantCode_Val
    (tmpIRead_0);

  /* Outport: '<Root>/EPB_stSsmInVehicleTypeCfg_Val' incorporates:
   *  Constant: '<S3>/Constant6'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Input_Runnable_Init_EPB_stSsmInVehicleTypeCfg_Val
    (0U);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Input_Runnable_Init' */
}

/* Output function */
FUNC(void, EPB_SysSrvAdpCust_CODE) EPB_SysSrvAdpCust_Output_Runnable_Init(void)
{
  const uint8 *tmpIRead;
  const uint8 *tmpIRead_0;
  uint8 rtb_Switch4;

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_Init' incorporates:
   *  SubSystem: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_Init_sys'
   */
  /* Outport: '<Root>/gEPB_s16PbcOutCurrMotDrvrCurr_Val' incorporates:
   *  Constant: '<S5>/Constant14'
   *  DataTypeConversion: '<S5>/Data Type Conversion4'
   *  Merge: '<Root>/gEPB_s16PbcOutCurrMotDrvrCurr_Val_merge'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_s16PbcOutCurrMotDrvrCurr_Val
    (0);

  /* Outport: '<Root>/gEPB_s16PbcOutDiagBrakeTemperature_Val' incorporates:
   *  Constant: '<S5>/Constant18'
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  Merge: '<Root>/gEPB_s16PbcOutDiagBrakeTemperature_Val_merge'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_s16PbcOutDiagBrakeTemperature_Val
    (63);

  /* RelationalOperator: '<S5>/Relational Operator1' incorporates:
   *  Inport: '<Root>/EPB_stPbcOutDiagActuatorState_Val'
   *  RelationalOperator: '<S5>/Relational Operator2'
   *  RelationalOperator: '<S5>/Relational Operator3'
   *  RelationalOperator: '<S5>/Relational Operator4'
   *  RelationalOperator: '<S5>/Relational Operator5'
   *  Switch: '<S5>/Switch'
   *  Switch: '<S5>/Switch1'
   *  Switch: '<S5>/Switch2'
   *  Switch: '<S5>/Switch3'
   */
  rtb_Switch4 =
    Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_Init_EPB_stPbcOutDiagActuatorState_Val
    ();

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant10'
   *  Constant: '<S5>/Constant11'
   *  Constant: '<S5>/Constant21'
   *  Constant: '<S5>/Constant8'
   *  Constant: '<S5>/Constant9'
   *  Inport: '<Root>/EPB_stPbcOutDiagActuatorState_Val'
   *  RelationalOperator: '<S5>/Relational Operator1'
   *  RelationalOperator: '<S5>/Relational Operator2'
   *  RelationalOperator: '<S5>/Relational Operator3'
   *  RelationalOperator: '<S5>/Relational Operator4'
   *  RelationalOperator: '<S5>/Relational Operator5'
   *  RelationalOperator: '<S5>/Relational Operator6'
   *  Switch: '<S5>/Switch1'
   *  Switch: '<S5>/Switch2'
   *  Switch: '<S5>/Switch3'
   *  Switch: '<S5>/Switch4'
   *  Switch: '<S5>/Switch5'
   */
  if (rtb_Switch4 == 27) {
    /* Outport: '<Root>/gEPB_u8PbcOutDiagActuatorState_Val' incorporates:
     *  Constant: '<S5>/Constant2'
     */
    Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u8PbcOutDiagActuatorState_Val
      (0U);
  } else if (rtb_Switch4 == 40) {
    /* Outport: '<Root>/gEPB_u8PbcOutDiagActuatorState_Val' incorporates:
     *  Constant: '<S5>/Constant3'
     *  Switch: '<S5>/Switch1'
     */
    Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u8PbcOutDiagActuatorState_Val
      (5U);
  } else if (rtb_Switch4 == 54) {
    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S5>/Constant4'
     *  Outport: '<Root>/gEPB_u8PbcOutDiagActuatorState_Val'
     *  Switch: '<S5>/Switch2'
     */
    Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u8PbcOutDiagActuatorState_Val
      (1U);
  } else if (rtb_Switch4 == 113) {
    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S5>/Constant5'
     *  Outport: '<Root>/gEPB_u8PbcOutDiagActuatorState_Val'
     *  Switch: '<S5>/Switch2'
     *  Switch: '<S5>/Switch3'
     */
    Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u8PbcOutDiagActuatorState_Val
      (2U);
  } else {
    if (rtb_Switch4 == 142) {
      /* Switch: '<S5>/Switch4' incorporates:
       *  Constant: '<S5>/Constant6'
       *  Switch: '<S5>/Switch1'
       *  Switch: '<S5>/Switch2'
       *  Switch: '<S5>/Switch3'
       */
      rtb_Switch4 = 3U;
    } else if
        (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_Init_EPB_stPbcOutDiagActuatorState_Val
         () == 144) {
      /* Switch: '<S5>/Switch5' incorporates:
       *  Constant: '<S5>/Constant7'
       *  Switch: '<S5>/Switch1'
       *  Switch: '<S5>/Switch2'
       *  Switch: '<S5>/Switch3'
       *  Switch: '<S5>/Switch4'
       */
      rtb_Switch4 = 6U;
    } else {
      /* Switch: '<S5>/Switch4' incorporates:
       *  Constant: '<S5>/Constant13'
       *  Switch: '<S5>/Switch1'
       *  Switch: '<S5>/Switch2'
       *  Switch: '<S5>/Switch3'
       *  Switch: '<S5>/Switch5'
       */
      rtb_Switch4 = 4U;
    }

    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S5>/Constant21'
     *  Outport: '<Root>/gEPB_u8PbcOutDiagActuatorState_Val'
     *  RelationalOperator: '<S5>/Relational Operator6'
     *  Switch: '<S5>/Switch2'
     *  Switch: '<S5>/Switch3'
     *  Switch: '<S5>/Switch4'
     *  Switch: '<S5>/Switch5'
     */
    Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u8PbcOutDiagActuatorState_Val
      (rtb_Switch4);
  }

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_Init' */

  /* Inport: '<Root>/EPB_PbcOutPbcSoftwareVersion_Val' */
  tmpIRead_0 =
    Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_Init_EPB_PbcOutPbcSoftwareVersion_Val
    ();

  /* Inport: '<Root>/EPB_SSMOutDataStorageWrite_Val' */
  tmpIRead =
    Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_Init_EPB_SSMOutDataStorageWrite_Val
    ();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_Init' incorporates:
   *  SubSystem: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_Init_sys'
   */
  /* Outport: '<Root>/gEPB_u8SsmoutDataStorageWrite_a_Val' incorporates:
   *  SignalConversion: '<S5>/Signal Conversion'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u8SsmoutDataStorageWrite_a_Val
    (tmpIRead);

  /* Outport: '<Root>/gEPB_u8SsmoutDataStorageWrtCnt_Val' incorporates:
   *  Constant: '<S5>/Constant'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u8SsmoutDataStorageWrtCnt_Val
    (0U);

  /* Outport: '<Root>/gEPB_u16PbcOutDiagAchievedClampForce_Val' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion1'
   *  Inport: '<Root>/EPB_tqPbcOutDiagAchievedClampForce_Val'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u16PbcOutDiagAchievedClampForce_Val
    (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_Init_EPB_tqPbcOutDiagAchievedClampForce_Val
     ());

  /* Outport: '<Root>/gEPB_u32AllowSleep_Local_Val' incorporates:
   *  Constant: '<S5>/Constant17'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u32AllowSleep_Local_Val
    (0U);

  /* Outport: '<Root>/gEPB_u32AllowSleep_NW_Val' incorporates:
   *  Constant: '<S5>/Constant20'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u32AllowSleep_NW_Val(0U);

  /* Outport: '<Root>/gEPB_u32PbcOutDiagActuationCounter_Val' incorporates:
   *  Inport: '<Root>/EPB_cntPbcOutDiagActuationCounter_Val'
   *  SignalConversion: '<S5>/Signal Conversion1'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u32PbcOutDiagActuationCounter_Val
    (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_Init_EPB_cntPbcOutDiagActuationCounter_Val
     ());

  /* Outport: '<Root>/gEPB_u8PbcOutPbcSoftwareVersion_Val' incorporates:
   *  SignalConversion: '<S5>/Signal Conversion5'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u8PbcOutPbcSoftwareVersion_Val
    (tmpIRead_0);

  /* Outport: '<Root>/gEPB_u8SsmOutEpbSwtCycle_Val' incorporates:
   *  Inport: '<Root>/EPB_stSsmOutEpbSwtCycle_Val'
   *  SignalConversion: '<S5>/Signal Conversion3'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u8SsmOutEpbSwtCycle_Val
    (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_Init_EPB_stSsmOutEpbSwtCycle_Val
     ());

  /* Outport: '<Root>/gEPB_u8SsmOutPrkBrkAplSwt_Val' incorporates:
   *  Inport: '<Root>/EPB_stSsmOutPrkBrkAplSwt_Val'
   *  SignalConversion: '<S5>/Signal Conversion2'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u8SsmOutPrkBrkAplSwt_Val
    (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_Init_EPB_stSsmOutPrkBrkAplSwt_Val
     ());

  /* Outport: '<Root>/gEPB_u8SsmOutSysState_Val' incorporates:
   *  Inport: '<Root>/EPB_stSsmOutSysState_Val'
   *  SignalConversion: '<S5>/Signal Conversion4'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u8SsmOutSysState_Val
    (Rte_IRead_EPB_SysSrvAdpCust_Output_Runnable_Init_EPB_stSsmOutSysState_Val());

  /* Outport: '<Root>/gEPB_u8Wakeup_Val' incorporates:
   *  Constant: '<S5>/Constant15'
   */
  Rte_IWrite_EPB_SysSrvAdpCust_Output_Runnable_Init_gEPB_u8Wakeup_Val(0U);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpCust_Output_Runnable_Init' */
}

/* Model initialize function */
FUNC(void, EPB_SysSrvAdpCust_CODE) EPB_SysSrvAdpCust_Init(void)
{
 
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
