/*
 * File: EvaprT_DD.c
 *
 * Code generated for Simulink model 'EvaprT_DD'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Sep 29 11:06:44 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EvaprT_DD.h"
#include "EvaprT_DD_private.h"

/* Block signals (default storage) */
VAR(B_EvaprT_DD_T, EvaprT_DD_VAR) EvaprT_DD_B;

/* Block states (default storage) */
VAR(DW_EvaprT_DD_T, EvaprT_DD_VAR) EvaprT_DD_DW;

/* Model step function for TID1 */
FUNC(void, EvaprT_DD_CODE) EvaprT_DD_Runnable_100ms(void) /* Sample time: [0.1s, 0.0s] */
{
  uint8 tmpRead;
  sint16 rtb_IoHwAb_IoSigAdc_AdcFac_Get_;
  uint8 rtb_Saturation;
  sint32 rtb_Switch1;
  uint8 rtb_TmpSignalConversionAtVehCoo;
  boolean rtb_TmpSignalConversionAtBattU_;
  boolean rtb_DTC_EvaprTSRCMax_GetEvent_n;
  boolean rtb_DTC_EvaprTSRCMax_GetEvent_k;
  boolean rtb_DTC_EvaprTSRCMin_GetEvent_h;
  boolean rtb_DTC_EvaprTSRCMin_GetEvent_n;
  uint8 rtb_Saturation_d;
  sint32 rtb_Switch1_f;
  sint32 s12_iter;
  boolean rtb_DTC_ReEvaprTSRCMin_GetEve_d;
  boolean rtb_DTC_ReEvaprTSRCMin_GetEve_b;
  float32 UnitDelay_DSTATE;
  uint8 rtb_UnitDelay_n_0;
  sint16 tmp;
  Dem_EventStatusType tmp_0;
  uint16 UnitDelay_DSTATE_0;
  EvaprT_tTrfReSnsr_CUR_Type *tmp_EvaprT_tTrfReSnsr_CUR;
  EvaprT_tTrfSnsr_CUR4_Type *tmp_EvaprT_tTrfSnsr_CUR4;
  EvaprT_tTrfSnsr_CUR3_Type *tmp_EvaprT_tTrfSnsr_CUR3;
  tmp_EvaprT_tTrfSnsr_CUR3 = Rte_CData_EvaprT_tTrfSnsr_CUR3();
  tmp_EvaprT_tTrfSnsr_CUR4 = Rte_CData_EvaprT_tTrfSnsr_CUR4();
  tmp_EvaprT_tTrfReSnsr_CUR = Rte_CData_EvaprT_tTrfReSnsr_CUR();

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_EvaprT_DD_Runnable_100ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/EvaprT_DD_Runnable_100ms_sys'
   */
  /* FunctionCaller: '<S3>/IoHwAb_IoSigAdc_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_EvaprT, &rtb_IoHwAb_IoSigAdc_AdcFac_Get_);

  /* DataTypeConversion: '<S3>/DataTypeConversion2' */
  tmp = rtb_IoHwAb_IoSigAdc_AdcFac_Get_;
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Get_ < 0) {
    tmp = 0;
  }

  /* Sum: '<S7>/Add1' incorporates:
   *  Constant: '<S7>/Constant4'
   *  UnitDelay: '<S7>/UnitDelay1'
   */
  if (1.0 + EvaprT_DD_DW.UnitDelay1_DSTATE < 256.0) {
    if (1.0 + EvaprT_DD_DW.UnitDelay1_DSTATE >= 0.0) {
      rtb_UnitDelay_n_0 = (uint8)(1.0 + EvaprT_DD_DW.UnitDelay1_DSTATE);
    } else {
      rtb_UnitDelay_n_0 = 0U;
    }
  } else {
    rtb_UnitDelay_n_0 = MAX_uint8_T;
  }

  /* Saturate: '<S7>/Saturation' */
  rtb_Saturation = Mfx_Limit_u8(Rte_CData_EvaprT_numRawVoltFildPoint_C(), 1U, 20U);

  /* Switch: '<S7>/Switch1' incorporates:
   *  Constant: '<S7>/Constant7'
   *  RelationalOperator: '<S7>/RelationalOperator3'
   *  Sum: '<S7>/Add1'
   */
  if (rtb_UnitDelay_n_0 >= rtb_Saturation) {
    rtb_Switch1 = 0;
  } else {
    rtb_Switch1 = rtb_UnitDelay_n_0;
  }

  /* End of Switch: '<S7>/Switch1' */

  /* Assignment: '<S7>/Assignment1' incorporates:
   *  DataStoreWrite: '<S7>/Data Store Write'
   *  DataTypeConversion: '<S3>/DataTypeConversion2'
   *  DataTypeConversion: '<S7>/DataTypeConversion3'
   */
  EvaprT_DD_DW.uRawBuf[rtb_Switch1] = (uint16)tmp;

  /* SignalConversion: '<S1>/TmpSignal ConversionAtVehCoorn_stPwrMod_Val_readOutport1' incorporates:
   *  Inport: '<Root>/VehCoorn_stPwrMod_Val'
   */
  Rte_Read_VehCoorn_stPwrMod_Val(&rtb_TmpSignalConversionAtVehCoo);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtBattU_bVoltEnbPinDiag_Val_readOutport1' incorporates:
   *  Inport: '<Root>/BattU_bVoltEnbPinDiag_Val'
   */
  Rte_Read_BattU_bVoltEnbPinDiag_Val(&rtb_TmpSignalConversionAtBattU_);

  /* If: '<S3>/If' incorporates:
   *  Constant: '<S3>/Constant14'
   *  Logic: '<S3>/AND'
   *  RelationalOperator: '<S3>/RelationalOperator3'
   */
  if ((rtb_TmpSignalConversionAtVehCoo != 0) && rtb_TmpSignalConversionAtBattU_) {
    /* Outputs for IfAction SubSystem: '<S3>/DiagEna' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Constant: '<S6>/Constant6'
     *  DataTypeConversion: '<S3>/DataTypeConversion2'
     *  RelationalOperator: '<S3>/RelationalOperator'
     */
    if ((uint16)tmp <= Rte_CData_EvaprT_uRawMinSRC_C()) {
      tmp_0 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_0 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* FunctionCaller: '<S6>/DTC_EvaprTSRCMin_SetEventStatus' */
    Rte_Call_DTC_EvaprTSRCMin_SetEventStatus(tmp_0);

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/Constant10'
     *  Constant: '<S6>/Constant11'
     *  DataTypeConversion: '<S3>/DataTypeConversion2'
     *  RelationalOperator: '<S3>/RelationalOperator1'
     */
    if ((uint16)tmp >= Rte_CData_EvaprT_uRawMaxSRC_C()) {
      tmp_0 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_0 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S6>/Switch2' */

    /* FunctionCaller: '<S6>/DTC_EvaprTSRCMax_SetEventStatus' */
    Rte_Call_DTC_EvaprTSRCMax_SetEventStatus(tmp_0);

    /* End of Outputs for SubSystem: '<S3>/DiagEna' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/DiagDisbable' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* FunctionCaller: '<S5>/DTC_EvaprTSRCMin_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S5>/Constant'
     */
    Rte_Call_DTC_EvaprTSRCMin_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S5>/DTC_EvaprTSRCMax_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S5>/Constant10'
     */
    Rte_Call_DTC_EvaprTSRCMax_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S3>/DiagDisbable' */
  }

  /* End of If: '<S3>/If' */

  /* FunctionCaller: '<S3>/DTC_EvaprTSRCMax_GetEventFailed' */
  Rte_Call_DTC_EvaprTSRCMax_GetEventFailed(&rtb_DTC_EvaprTSRCMax_GetEvent_n);

  /* FunctionCaller: '<S3>/DTC_EvaprTSRCMax_GetEventTested' */
  Rte_Call_DTC_EvaprTSRCMax_GetEventTested(&rtb_DTC_EvaprTSRCMax_GetEvent_k);

  /* FunctionCaller: '<S3>/DTC_EvaprTSRCMin_GetEventFailed' */
  Rte_Call_DTC_EvaprTSRCMin_GetEventFailed(&rtb_DTC_EvaprTSRCMin_GetEvent_h);

  /* FunctionCaller: '<S3>/DTC_EvaprTSRCMin_GetEventTested' */
  Rte_Call_DTC_EvaprTSRCMin_GetEventTested(&rtb_DTC_EvaprTSRCMin_GetEvent_n);

  /* FunctionCaller: '<S4>/IoHwAb_IoSigAdc_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_ReEvaprT, &rtb_IoHwAb_IoSigAdc_AdcFac_Get_);

  /* DataTypeConversion: '<S4>/DataTypeConversion2' */
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Get_ < 0) {
    rtb_IoHwAb_IoSigAdc_AdcFac_Get_ = 0;
  }

  /* Sum: '<S11>/Add1' incorporates:
   *  Constant: '<S11>/Constant4'
   *  UnitDelay: '<S11>/UnitDelay1'
   */
  if (1.0 + EvaprT_DD_DW.UnitDelay1_DSTATE_d < 256.0) {
    if (1.0 + EvaprT_DD_DW.UnitDelay1_DSTATE_d >= 0.0) {
      rtb_UnitDelay_n_0 = (uint8)(1.0 + EvaprT_DD_DW.UnitDelay1_DSTATE_d);
    } else {
      rtb_UnitDelay_n_0 = 0U;
    }
  } else {
    rtb_UnitDelay_n_0 = MAX_uint8_T;
  }

  /* Saturate: '<S11>/Saturation' */
  rtb_Saturation_d = Mfx_Limit_u8(Rte_CData_EvaprT_numReRawVoltFildPoint_C(), 1U, 20U);

  /* Switch: '<S11>/Switch1' incorporates:
   *  Constant: '<S11>/Constant7'
   *  RelationalOperator: '<S11>/RelationalOperator3'
   *  Sum: '<S11>/Add1'
   */
  if (rtb_UnitDelay_n_0 >= rtb_Saturation_d) {
    rtb_Switch1_f = 0;
  } else {
    rtb_Switch1_f = rtb_UnitDelay_n_0;
  }

  /* End of Switch: '<S11>/Switch1' */

  /* Assignment: '<S11>/Assignment1' incorporates:
   *  DataStoreWrite: '<S11>/Data Store Write'
   *  DataTypeConversion: '<S11>/DataTypeConversion3'
   *  DataTypeConversion: '<S4>/DataTypeConversion2'
   */
  EvaprT_DD_DW.uRawBuf_f[rtb_Switch1_f] = (uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Get_;

  /* Outputs for Iterator SubSystem: '<S11>/ForIteratorSubsystem' incorporates:
   *  ForIterator: '<S12>/For Iterator'
   */
  /* InitializeConditions for UnitDelay: '<S12>/UnitDelay' */
  UnitDelay_DSTATE = 0.0F;
  for (s12_iter = 0; s12_iter < rtb_Saturation_d; s12_iter++) {
    /* Sum: '<S12>/Add' incorporates:
     *  DataStoreRead: '<S11>/Data Store Read1'
     *  Selector: '<S12>/Selector'
     *  UnitDelay: '<S12>/UnitDelay'
     */
    EvaprT_DD_B.Add = EvaprT_DD_DW.uRawBuf_f[s12_iter] + UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S12>/UnitDelay' */
    UnitDelay_DSTATE = EvaprT_DD_B.Add;
  }

  /* End of Outputs for SubSystem: '<S11>/ForIteratorSubsystem' */

  /* Sum: '<S11>/Add' incorporates:
   *  Constant: '<S11>/Constant2'
   *  UnitDelay: '<S11>/UnitDelay'
   */
  rtb_UnitDelay_n_0 = Mfx_Add_u8u8_u8(1U, EvaprT_DD_DW.UnitDelay_DSTATE_j);

  /* If: '<S4>/If' incorporates:
   *  Constant: '<S4>/Constant14'
   *  Logic: '<S4>/AND'
   *  RelationalOperator: '<S4>/RelationalOperator3'
   */
  if ((rtb_TmpSignalConversionAtVehCoo != 0) && rtb_TmpSignalConversionAtBattU_) {
    /* Outputs for IfAction SubSystem: '<S4>/DiagEna' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/Constant1'
     *  Constant: '<S10>/Constant6'
     *  DataTypeConversion: '<S4>/DataTypeConversion2'
     *  RelationalOperator: '<S4>/RelationalOperator'
     */
    if ((uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Get_ <= Rte_CData_EvaprT_uRawReMinSRC_C()) {
      tmp_0 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_0 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S10>/Switch1' */

    /* FunctionCaller: '<S10>/DTC_ReEvaprTSRCMin_SetEventStatus' */
    Rte_Call_DTC_ReEvaprTSRCMin_SetEventStatus(tmp_0);

    /* Switch: '<S10>/Switch2' incorporates:
     *  Constant: '<S10>/Constant10'
     *  Constant: '<S10>/Constant11'
     *  DataTypeConversion: '<S4>/DataTypeConversion2'
     *  RelationalOperator: '<S4>/RelationalOperator1'
     */
    if ((uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Get_ >= Rte_CData_EvaprT_uRawReMaxSRC_C()) {
      tmp_0 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_0 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S10>/Switch2' */

    /* FunctionCaller: '<S10>/DTC_ReEvaprTSRCMax_SetEventStatus' */
    Rte_Call_DTC_ReEvaprTSRCMax_SetEventStatus(tmp_0);

    /* End of Outputs for SubSystem: '<S4>/DiagEna' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/DiagDisbable' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* FunctionCaller: '<S9>/DTC_ReEvaprTSRCMin_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S9>/Constant'
     */
    Rte_Call_DTC_ReEvaprTSRCMin_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S9>/DTC_ReEvaprTSRCMax_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S9>/Constant10'
     */
    Rte_Call_DTC_ReEvaprTSRCMax_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S4>/DiagDisbable' */
  }

  /* End of If: '<S4>/If' */

  /* FunctionCaller: '<S4>/DTC_ReEvaprTSRCMax_GetEventFailed' */
  Rte_Call_DTC_ReEvaprTSRCMax_GetEventFailed(&rtb_DTC_ReEvaprTSRCMin_GetEve_d);

  /* FunctionCaller: '<S4>/DTC_ReEvaprTSRCMax_GetEventTested' */
  Rte_Call_DTC_ReEvaprTSRCMax_GetEventTested(&rtb_DTC_ReEvaprTSRCMin_GetEve_b);

  /* Logic: '<S4>/AND3' */
  rtb_TmpSignalConversionAtBattU_ = (rtb_DTC_ReEvaprTSRCMin_GetEve_d && rtb_DTC_ReEvaprTSRCMin_GetEve_b);

  /* FunctionCaller: '<S4>/DTC_ReEvaprTSRCMin_GetEventFailed' */
  Rte_Call_DTC_ReEvaprTSRCMin_GetEventFailed(&rtb_DTC_ReEvaprTSRCMin_GetEve_b);

  /* FunctionCaller: '<S4>/DTC_ReEvaprTSRCMin_GetEventTested' */
  Rte_Call_DTC_ReEvaprTSRCMin_GetEventTested(&rtb_DTC_ReEvaprTSRCMin_GetEve_d);

  /* Switch: '<S4>/Switch3' incorporates:
   *  Logic: '<S4>/AND4'
   *  Logic: '<S4>/OR2'
   *  Logic: '<S4>/OR3'
   */
  if ((!rtb_TmpSignalConversionAtBattU_) && ((!rtb_DTC_ReEvaprTSRCMin_GetEve_b) || (!rtb_DTC_ReEvaprTSRCMin_GetEve_d))) {
    /* Switch: '<S11>/Switch' incorporates:
     *  Product: '<S11>/Divide'
     *  Product: '<S11>/Divide1'
     *  RelationalOperator: '<S11>/RelationalOperator2'
     */
    if (rtb_UnitDelay_n_0 >= rtb_Saturation_d) {
      UnitDelay_DSTATE = EvaprT_DD_B.Add / (float32)rtb_Saturation_d;
    } else {
      UnitDelay_DSTATE = EvaprT_DD_B.Add / (float32)rtb_UnitDelay_n_0;
    }

    /* End of Switch: '<S11>/Switch' */

    /* DataTypeConversion: '<S4>/DataTypeConversion1' */
    if (UnitDelay_DSTATE < 65536.0F) {
      if (UnitDelay_DSTATE >= 0.0F) {
        UnitDelay_DSTATE_0 = (uint16)UnitDelay_DSTATE;
      } else {
        UnitDelay_DSTATE_0 = 0U;
      }
    } else {
      UnitDelay_DSTATE_0 = MAX_uint16_T;
    }

    /* End of DataTypeConversion: '<S4>/DataTypeConversion1' */

    /* Outport: '<Root>/EvaprT_tRe_Val' incorporates:
     *  Lookup_n-D: '<S4>/PA_EvaprT_tTrfReSnsr_CUR'
     */
    (void) Rte_Write_EvaprT_tRe_Val(Ifx_IntIpoCur_u16_s16(UnitDelay_DSTATE_0, tmp_EvaprT_tTrfReSnsr_CUR->N1, tmp_EvaprT_tTrfReSnsr_CUR->BP1, tmp_EvaprT_tTrfReSnsr_CUR->Table));
  } else {
    /* Outport: '<Root>/EvaprT_tRe_Val' */
    (void) Rte_Write_EvaprT_tRe_Val(Rte_CData_EvaprT_tReDfl_C());
  }

  /* End of Switch: '<S4>/Switch3' */

  /* Outport: '<Root>/EvaprT_uRawRe_Val' incorporates:
   *  DataTypeConversion: '<S4>/DataTypeConversion2'
   *  SignalConversion: '<S4>/Signal Conversion1'
   */
  (void) Rte_Write_EvaprT_uRawRe_Val((uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Get_);

  /* Outputs for Iterator SubSystem: '<S7>/ForIteratorSubsystem' incorporates:
   *  ForIterator: '<S8>/For Iterator'
   */
  /* InitializeConditions for UnitDelay: '<S8>/UnitDelay' */
  UnitDelay_DSTATE = 0.0F;
  for (s12_iter = 0; s12_iter < rtb_Saturation; s12_iter++) {
    /* Sum: '<S8>/Add' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read1'
     *  Selector: '<S8>/Selector'
     *  UnitDelay: '<S8>/UnitDelay'
     */
    EvaprT_DD_B.Add_j = EvaprT_DD_DW.uRawBuf[s12_iter] + UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S8>/UnitDelay' */
    UnitDelay_DSTATE = EvaprT_DD_B.Add_j;
  }

  /* End of Outputs for SubSystem: '<S7>/ForIteratorSubsystem' */

  /* Sum: '<S7>/Add' incorporates:
   *  Constant: '<S7>/Constant2'
   *  UnitDelay: '<S7>/UnitDelay'
   */
  rtb_TmpSignalConversionAtVehCoo = Mfx_Add_u8u8_u8(1U, EvaprT_DD_DW.UnitDelay_DSTATE_f);

  /* Switch: '<S7>/Switch' incorporates:
   *  Product: '<S7>/Divide'
   *  Product: '<S7>/Divide1'
   *  RelationalOperator: '<S7>/RelationalOperator2'
   */
  if (rtb_TmpSignalConversionAtVehCoo >= rtb_Saturation) {
    UnitDelay_DSTATE = EvaprT_DD_B.Add_j / (float32)rtb_Saturation;
  } else {
    UnitDelay_DSTATE = EvaprT_DD_B.Add_j / (float32)rtb_TmpSignalConversionAtVehCoo;
  }

  /* End of Switch: '<S7>/Switch' */

  /* DataTypeConversion: '<S3>/DataTypeConversion1' */
  if (UnitDelay_DSTATE < 65536.0F) {
    if (UnitDelay_DSTATE >= 0.0F) {
      UnitDelay_DSTATE_0 = (uint16)UnitDelay_DSTATE;
    } else {
      UnitDelay_DSTATE_0 = 0U;
    }
  } else {
    UnitDelay_DSTATE_0 = MAX_uint16_T;
  }

  /* Switch: '<S3>/Switch3' incorporates:
   *  Inport: '<Root>/gPRM_u8VehicleTypeCfg_Val'
   *  Logic: '<S3>/AND1'
   *  Logic: '<S3>/AND2'
   *  Logic: '<S3>/OR'
   *  Logic: '<S3>/OR3'
   */
  if (((!rtb_DTC_EvaprTSRCMax_GetEvent_n) || (!rtb_DTC_EvaprTSRCMax_GetEvent_k)) && ((!rtb_DTC_EvaprTSRCMin_GetEvent_h) || (!rtb_DTC_EvaprTSRCMin_GetEvent_n))) {
    Rte_Read_gPRM_u8VehicleTypeCfg_Val(&tmpRead);

    /* MultiPortSwitch: '<S3>/MultiportSwitch' incorporates:
     *  DataTypeConversion: '<S3>/DataTypeConversion1'
     *  Inport: '<Root>/gPRM_u8VehicleTypeCfg_Val'
     *  Lookup_n-D: '<S3>/PA_EvaprT_tTrfSnsr_CUR3'
     *  Lookup_n-D: '<S3>/PA_EvaprT_tTrfSnsr_CUR4'
     */
    switch (tmpRead) {
     case 1:
     case 2:
     case 3:
      rtb_IoHwAb_IoSigAdc_AdcFac_Get_ = Ifx_IntIpoCur_u16_s16(UnitDelay_DSTATE_0, tmp_EvaprT_tTrfSnsr_CUR3->N1, tmp_EvaprT_tTrfSnsr_CUR3->BP1, tmp_EvaprT_tTrfSnsr_CUR3->Table);
      break;

     default:
      rtb_IoHwAb_IoSigAdc_AdcFac_Get_ = Ifx_IntIpoCur_u16_s16(UnitDelay_DSTATE_0, tmp_EvaprT_tTrfSnsr_CUR4->N1, tmp_EvaprT_tTrfSnsr_CUR4->BP1, tmp_EvaprT_tTrfSnsr_CUR4->Table);
      break;
    }

    /* End of MultiPortSwitch: '<S3>/MultiportSwitch' */

    /* Outport: '<Root>/EvaprT_t_Val' */
    (void) Rte_Write_EvaprT_t_Val(rtb_IoHwAb_IoSigAdc_AdcFac_Get_);
  } else {
    /* Outport: '<Root>/EvaprT_t_Val' */
    (void) Rte_Write_EvaprT_t_Val(Rte_CData_EvaprT_tDfl_C());
  }

  /* End of Switch: '<S3>/Switch3' */

  /* Outport: '<Root>/EvaprT_uRaw_Val' incorporates:
   *  DataTypeConversion: '<S3>/DataTypeConversion2'
   *  SignalConversion: '<S3>/Signal Conversion'
   */
  (void) Rte_Write_EvaprT_uRaw_Val((uint16)tmp);

  /* DataStoreWrite: '<S3>/Data Store Write' incorporates:
   *  Constant: '<S3>/Constant10'
   */
  EvaprT_DD_DW.PRM_A02_CFG_SPEC_VAL = 0U;

  /* DataStoreWrite: '<S4>/Data Store Write' incorporates:
   *  Constant: '<S4>/Constant10'
   */
  EvaprT_DD_DW.PRM_A02_CFG_SPEC_VAL_g = 0U;

  /* Update for UnitDelay: '<S7>/UnitDelay1' */
  EvaprT_DD_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S11>/UnitDelay1' */
  EvaprT_DD_DW.UnitDelay1_DSTATE_d = rtb_Switch1_f;

  /* Update for UnitDelay: '<S11>/UnitDelay' */
  EvaprT_DD_DW.UnitDelay_DSTATE_j = rtb_UnitDelay_n_0;

  /* Update for UnitDelay: '<S7>/UnitDelay' */
  EvaprT_DD_DW.UnitDelay_DSTATE_f = rtb_TmpSignalConversionAtVehCoo;

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_EvaprT_DD_Runnable_100ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, EvaprT_DD_CODE) EvaprT_DD_Runnable_Init(void)
{
  {
    uint8 tmpRead;
    sint16 rtb_PA_EvaprT_tTrfSnsr_CUR3_l;
    sint16 tmp;
    EvaprT_tTrfSnsr_CUR4_Type *tmp_EvaprT_tTrfSnsr_CUR4;
    EvaprT_tTrfReSnsr_CUR_Type *tmp_EvaprT_tTrfReSnsr_CUR;
    EvaprT_tTrfSnsr_CUR3_Type *tmp_EvaprT_tTrfSnsr_CUR3;
    tmp_EvaprT_tTrfSnsr_CUR3 = Rte_CData_EvaprT_tTrfSnsr_CUR3();
    tmp_EvaprT_tTrfReSnsr_CUR = Rte_CData_EvaprT_tTrfReSnsr_CUR();
    tmp_EvaprT_tTrfSnsr_CUR4 = Rte_CData_EvaprT_tTrfSnsr_CUR4();

    /* SystemInitialize for Atomic SubSystem: '<Root>/EvaprT_DD_Runnable_Init' */
    /* FunctionCaller: '<S2>/IoHwAb_IoSigAdc_AdcFac_Get' */
    Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_EvaprT, &rtb_PA_EvaprT_tTrfSnsr_CUR3_l);

    /* DataTypeConversion: '<S2>/DataTypeConversion2' */
    tmp = rtb_PA_EvaprT_tTrfSnsr_CUR3_l;
    if (rtb_PA_EvaprT_tTrfSnsr_CUR3_l < 0) {
      tmp = 0;
    }

    /* Lookup_n-D: '<S2>/PA_EvaprT_tTrfSnsr_CUR4' incorporates:
     *  DataTypeConversion: '<S2>/DataTypeConversion2'
     */
    rtb_PA_EvaprT_tTrfSnsr_CUR3_l = Ifx_IntIpoCur_u16_s16((uint16)tmp, tmp_EvaprT_tTrfSnsr_CUR4->N1, tmp_EvaprT_tTrfSnsr_CUR4->BP1, tmp_EvaprT_tTrfSnsr_CUR4->Table);

    /* End of SystemInitialize for SubSystem: '<Root>/EvaprT_DD_Runnable_Init' */

    /* Inport: '<Root>/gPRM_u8VehicleTypeCfg_Val' */
    Rte_Read_gPRM_u8VehicleTypeCfg_Val(&tmpRead);

    /* SystemInitialize for Atomic SubSystem: '<Root>/EvaprT_DD_Runnable_Init' */
    /* MultiPortSwitch: '<S2>/MultiportSwitch' */
    switch (tmpRead) {
     case 1:
     case 2:
     case 3:
      /* Outport: '<Root>/EvaprT_t_Val' incorporates:
       *  DataTypeConversion: '<S2>/DataTypeConversion2'
       *  Lookup_n-D: '<S2>/PA_EvaprT_tTrfSnsr_CUR3'
       */
      (void) Rte_Write_EvaprT_t_Val(Ifx_IntIpoCur_u16_s16((uint16)tmp, tmp_EvaprT_tTrfSnsr_CUR3->N1, tmp_EvaprT_tTrfSnsr_CUR3->BP1, tmp_EvaprT_tTrfSnsr_CUR3->Table));
      break;

     default:
      /* Outport: '<Root>/EvaprT_t_Val' */
      (void) Rte_Write_EvaprT_t_Val(rtb_PA_EvaprT_tTrfSnsr_CUR3_l);
      break;
    }

    /* End of MultiPortSwitch: '<S2>/MultiportSwitch' */

    /* Outport: '<Root>/EvaprT_uRaw_Val' incorporates:
     *  DataTypeConversion: '<S2>/DataTypeConversion2'
     *  SignalConversion: '<S2>/Signal Conversion1'
     */
    (void) Rte_Write_EvaprT_uRaw_Val((uint16)tmp);

    /* FunctionCaller: '<S2>/IoHwAb_IoSigAdc_AdcFac_Get1' */
    Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_ReEvaprT, &rtb_PA_EvaprT_tTrfSnsr_CUR3_l);

    /* DataTypeConversion: '<S2>/DataTypeConversion3' */
    if (rtb_PA_EvaprT_tTrfSnsr_CUR3_l < 0) {
      rtb_PA_EvaprT_tTrfSnsr_CUR3_l = 0;
    }

    /* Outport: '<Root>/EvaprT_tRe_Val' incorporates:
     *  DataTypeConversion: '<S2>/DataTypeConversion3'
     *  Lookup_n-D: '<S2>/PA_EvaprT_tTrfReSnsr_CUR'
     */
    (void) Rte_Write_EvaprT_tRe_Val(Ifx_IntIpoCur_u16_s16((uint16)rtb_PA_EvaprT_tTrfSnsr_CUR3_l, tmp_EvaprT_tTrfReSnsr_CUR->N1, tmp_EvaprT_tTrfReSnsr_CUR->BP1, tmp_EvaprT_tTrfReSnsr_CUR->Table));

    /* Outport: '<Root>/EvaprT_uRawRe_Val' incorporates:
     *  DataTypeConversion: '<S2>/DataTypeConversion3'
     *  SignalConversion: '<S2>/Signal Conversion2'
     */
    (void) Rte_Write_EvaprT_uRawRe_Val((uint16)rtb_PA_EvaprT_tTrfSnsr_CUR3_l);

    /* End of SystemInitialize for SubSystem: '<Root>/EvaprT_DD_Runnable_Init' */
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
