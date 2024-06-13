/*
 * File: DcChrgrIntkT_DD.c
 *
 * Code generated for Simulink model 'DcChrgrIntkT_DD'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Sep 27 21:17:28 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DcChrgrIntkT_DD.h"
#include "DcChrgrIntkT_DD_private.h"

/* Block signals (default storage) */
VAR(B_DcChrgrIntkT_DD_T, DcChrgrIntkT_DD_VAR) DcChrgrIntkT_DD_B;

/* Block states (default storage) */
VAR(DW_DcChrgrIntkT_DD_T, DcChrgrIntkT_DD_VAR) DcChrgrIntkT_DD_DW;

/* Model step function for TID1 */
FUNC(void, DcChrgrIntkT_DD_CODE) DcChrgrIntkT_DD_Runnable_100ms(void) /* Sample time: [0.1s, 0.0s] */
{
  sint16 rtb_IoHwAb_AdcFac_Get_AdcFac_Ge;
  float32 rtb_Switch;
  uint8 rtb_Saturation;
  float64 rtb_Add1;
  boolean rtb_RelationalOperator1;
  sint32 s6_iter;
  boolean rtb_DTC_DcChrgrIntkTSRCMax_Ge_c;
  boolean rtb_DTC_DcChrgrIntkTSRCMax_Ge_h;
  boolean rtb_DTC_DcChrgrIntkTSRCMin_Ge_p;
  boolean rtb_DTC_DcChrgrIntkTSRCMin_Ge_j;
  boolean SignalConversion1;
  float32 UnitDelay_DSTATE_p;
  Dem_EventStatusType SignalConversion1_0;
  uint16 rtb_Switch_0;
  DcChrgrIntkT_tTrfSnsr_CUR_Type *tmp_DcChrgrIntkT_tTrfSnsr_CUR;
  tmp_DcChrgrIntkT_tTrfSnsr_CUR = Rte_CData_DcChrgrIntkT_tTrfSnsr_CUR();

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrIntkT_DD_Runnable_100ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/DcChrgrIntkT_DD_Runnable_100ms_sys'
   */
  /* FunctionCaller: '<S1>/IoHwAb_AdcFac_Get_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_DcChrgrIntkT, &rtb_IoHwAb_AdcFac_Get_AdcFac_Ge);

  /* DataTypeConversion: '<S1>/DataTypeConversion1' */
  if (rtb_IoHwAb_AdcFac_Get_AdcFac_Ge < 0) {
    rtb_IoHwAb_AdcFac_Get_AdcFac_Ge = 0;
  }

  /* DataTypeConversion: '<S5>/DataTypeConversion3' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  rtb_Switch = (uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge;

  /* Sum: '<S5>/Add1' incorporates:
   *  Constant: '<S5>/Constant4'
   *  UnitDelay: '<S5>/UnitDelay1'
   */
  rtb_Add1 = 1.0 + DcChrgrIntkT_DD_DW.UnitDelay1_DSTATE;

  /* Saturate: '<S5>/Saturation' */
  rtb_Saturation = Mfx_Limit_u8(Rte_CData_DcChrgrIntkT_numRawVoltFildPoint_C(), 1U, 20U);

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S5>/Constant4'
   *  Constant: '<S5>/Constant7'
   *  RelationalOperator: '<S5>/RelationalOperator3'
   *  Sum: '<S5>/Add1'
   *  UnitDelay: '<S5>/UnitDelay1'
   */
  if (1.0 + DcChrgrIntkT_DD_DW.UnitDelay1_DSTATE >= rtb_Saturation) {
    rtb_Add1 = 0.0;
  }

  /* End of Switch: '<S5>/Switch1' */

  /* Assignment: '<S5>/Assignment1' incorporates:
   *  DataStoreWrite: '<S5>/Data Store Write'
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   *  DataTypeConversion: '<S5>/DataTypeConversion3'
   */
  DcChrgrIntkT_DD_DW.uRawBuf[(sint32)rtb_Add1] = (uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge;

  /* Outputs for Iterator SubSystem: '<S5>/ForIteratorSubsystem' incorporates:
   *  ForIterator: '<S6>/For Iterator'
   */
  /* InitializeConditions for UnitDelay: '<S6>/UnitDelay' */
  UnitDelay_DSTATE_p = 0.0F;
  for (s6_iter = 0; s6_iter < rtb_Saturation; s6_iter++) {
    /* Sum: '<S6>/Add' incorporates:
     *  DataStoreRead: '<S5>/Data Store Read1'
     *  Selector: '<S6>/Selector'
     *  UnitDelay: '<S6>/UnitDelay'
     */
    DcChrgrIntkT_DD_B.Add = DcChrgrIntkT_DD_DW.uRawBuf[s6_iter] + UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S6>/UnitDelay' */
    UnitDelay_DSTATE_p = DcChrgrIntkT_DD_B.Add;
  }

  /* End of Outputs for SubSystem: '<S5>/ForIteratorSubsystem' */

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S5>/Constant2'
   *  Product: '<S5>/Divide'
   *  RelationalOperator: '<S5>/RelationalOperator2'
   *  Sum: '<S5>/Add'
   *  UnitDelay: '<S5>/UnitDelay'
   */
  if (1.0 + DcChrgrIntkT_DD_DW.UnitDelay_DSTATE >= rtb_Saturation) {
    rtb_Switch = DcChrgrIntkT_DD_B.Add / (float32)rtb_Saturation;
  }

  /* End of Switch: '<S5>/Switch' */

  /* SignalConversion: '<S1>/SignalConversion1' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   *  RelationalOperator: '<S1>/RelationalOperator'
   */
  SignalConversion1 = ((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge <= Rte_CData_DcChrgrIntkT_uRawMinSRC_C());

  /* RelationalOperator: '<S1>/RelationalOperator1' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  rtb_RelationalOperator1 = ((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge >= Rte_CData_DcChrgrIntkT_uRawMaxSRC_C());

  /* If: '<S1>/If' incorporates:
   *  Constant: '<S1>/Constant3'
   *  Inport: '<Root>/BattU_bVoltEnbPinDiag_Val'
   *  Inport: '<Root>/VehCoorn_stPwrMod_Val'
   *  Logic: '<S1>/LogicalOperator'
   *  RelationalOperator: '<S1>/Relational Operator'
   */
  if (Rte_IRead_DcChrgrIntkT_DD_Runnable_100ms_BattU_bVoltEnbPinDiag_Val() && (Rte_IRead_DcChrgrIntkT_DD_Runnable_100ms_VehCoorn_stPwrMod_Val() != 0)) {
    /* Outputs for IfAction SubSystem: '<S1>/DcChrgrIntkTFailDiagSet' incorporates:
     *  ActionPort: '<S4>/held'
     */
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S4>/Constant1'
     *  Constant: '<S4>/Constant2'
     */
    if (SignalConversion1) {
      SignalConversion1_0 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      SignalConversion1_0 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S4>/Switch' */

    /* FunctionCaller: '<S4>/DTC_DcChrgrIntkTSRCMin_SetEventStatus' */
    Rte_Call_DTC_DcChrgrIntkTSRCMin_SetEventStatus(SignalConversion1_0);

    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant3'
     *  Constant: '<S4>/Constant4'
     *  SignalConversion: '<S1>/SignalConversion2'
     */
    if (rtb_RelationalOperator1) {
      SignalConversion1_0 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      SignalConversion1_0 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S4>/Switch1' */

    /* FunctionCaller: '<S4>/DTC_DcChrgrIntkTSRCMax_SetEventStatus' */
    Rte_Call_DTC_DcChrgrIntkTSRCMax_SetEventStatus(SignalConversion1_0);

    /* End of Outputs for SubSystem: '<S1>/DcChrgrIntkTFailDiagSet' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/DcChrgrIntkTFailDiagDebounceReset' incorporates:
     *  ActionPort: '<S3>/held'
     */
    /* FunctionCaller: '<S3>/DTC_DcChrgrIntkTSRCMax_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S3>/Constant'
     */
    Rte_Call_DTC_DcChrgrIntkTSRCMax_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S3>/DTC_DcChrgrIntkTSRCMin_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    Rte_Call_DTC_DcChrgrIntkTSRCMin_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S1>/DcChrgrIntkTFailDiagDebounceReset' */
  }

  /* End of If: '<S1>/If' */

  /* FunctionCaller: '<S1>/DTC_DcChrgrIntkTSRCMax_GetEventFailed' */
  Rte_Call_DTC_DcChrgrIntkTSRCMax_GetEventFailed(&rtb_DTC_DcChrgrIntkTSRCMax_Ge_c);

  /* FunctionCaller: '<S1>/DTC_DcChrgrIntkTSRCMax_GetEventTested' */
  Rte_Call_DTC_DcChrgrIntkTSRCMax_GetEventTested(&rtb_DTC_DcChrgrIntkTSRCMax_Ge_h);

  /* FunctionCaller: '<S1>/DTC_DcChrgrIntkTSRCMin_GetEventFailed' */
  Rte_Call_DTC_DcChrgrIntkTSRCMin_GetEventFailed(&rtb_DTC_DcChrgrIntkTSRCMin_Ge_p);

  /* FunctionCaller: '<S1>/DTC_DcChrgrIntkTSRCMin_GetEventTested' */
  Rte_Call_DTC_DcChrgrIntkTSRCMin_GetEventTested(&rtb_DTC_DcChrgrIntkTSRCMin_Ge_j);

  /* Update for UnitDelay: '<S5>/UnitDelay1' */
  DcChrgrIntkT_DD_DW.UnitDelay1_DSTATE = rtb_Add1;

  /* Update for UnitDelay: '<S5>/UnitDelay' incorporates:
   *  Constant: '<S5>/Constant2'
   *  Sum: '<S5>/Add'
   */
  DcChrgrIntkT_DD_DW.UnitDelay_DSTATE++;

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrIntkT_DD_Runnable_100ms_at_outport_1' */

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrIntkT_DD_Runnable_100ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/DcChrgrIntkT_DD_Runnable_100ms_sys'
   */
  /* Outport: '<Root>/DcChrgrIntkT_flgSRCMaxErr_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion2'
   */
  Rte_IWrite_DcChrgrIntkT_DD_Runnable_100ms_DcChrgrIntkT_flgSRCMaxErr_Val(rtb_RelationalOperator1);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrIntkT_DD_Runnable_100ms_at_outport_1' */

  /* Outport: '<Root>/DcChrgrIntkT_flgSRCMinErr_Val' */
  Rte_IWrite_DcChrgrIntkT_DD_Runnable_100ms_DcChrgrIntkT_flgSRCMinErr_Val(SignalConversion1);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrIntkT_DD_Runnable_100ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/DcChrgrIntkT_DD_Runnable_100ms_sys'
   */
  /* DataTypeConversion: '<S5>/DataTypeConversion1' */
  if (rtb_Switch < 65536.0F) {
    if (rtb_Switch >= 0.0F) {
      rtb_Switch_0 = (uint16)rtb_Switch;
    } else {
      rtb_Switch_0 = 0U;
    }
  } else {
    rtb_Switch_0 = MAX_uint16_T;
  }

  /* End of DataTypeConversion: '<S5>/DataTypeConversion1' */

  /* Outport: '<Root>/DcChrgrIntkT_t_Val' incorporates:
   *  Lookup_n-D: '<S1>/DcChrgrIntkT_tTrfSnsr_CUR'
   */
  Rte_IWrite_DcChrgrIntkT_DD_Runnable_100ms_DcChrgrIntkT_t_Val(Ifx_IntIpoCur_u16_s16(rtb_Switch_0, tmp_DcChrgrIntkT_tTrfSnsr_CUR->N1, tmp_DcChrgrIntkT_tTrfSnsr_CUR->BP1, tmp_DcChrgrIntkT_tTrfSnsr_CUR->Table));

  /* Outport: '<Root>/DcChrgrIntkT_uRaw_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  Rte_IWrite_DcChrgrIntkT_DD_Runnable_100ms_DcChrgrIntkT_uRaw_Val((uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_DcChrgrIntkT_DD_Runnable_100ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, DcChrgrIntkT_DD_CODE) DcChrgrIntkT_DD_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */