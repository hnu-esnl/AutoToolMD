/*
 * File: CabinT_DD.c
 *
 * Code generated for Simulink model 'CabinT_DD'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Sep 29 11:04:31 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CabinT_DD.h"
#include "CabinT_DD_private.h"

/* Block signals (default storage) */
VAR(B_CabinT_DD_T, CabinT_DD_VAR) CabinT_DD_B;

/* Block states (default storage) */
VAR(DW_CabinT_DD_T, CabinT_DD_VAR) CabinT_DD_DW;

/* Model step function for TID1 */
FUNC(void, CabinT_DD_CODE) CabinT_DD_Runnable_100ms(void) /* Sample time: [0.1s, 0.0s] */
{
  boolean tmpRead;
  uint8 rtb_Saturation_d;
  sint32 rtb_Switch1_l;
  sint32 s10_iter;
  uint8 rtb_TmpSignalConversionAtVehCoo;
  boolean rtb_TmpSignalConversionAtBattU_;
  boolean rtb_DTC_CabinTSRCMin_GetEvent_l;
  boolean rtb_DTC_CabinTSRCMin_GetEvent_j;
  boolean rtb_AND1;
  sint16 rtb_IoHwAb_IoSigAdc_AdcFac_Ge_m;
  uint8 rtb_Add;
  boolean rtb_DTC_ReCabinTSRCMax_GetEve_k;
  boolean rtb_DTC_ReCabinTSRCMin_GetEve_l;
  sint16 rtb_IoHwAb_IoSigAdc_AdcFac_Get_;
  float32 UnitDelay_DSTATE_n;
  uint8 rtb_UnitDelay_m_0;
  Dem_EventStatusType tmp;
  uint16 UnitDelay_DSTATE_n_0;
  sint16 tmp_CabinT_tDfl_C;
  sint16 tmp_CabinT_tReDfl_C;
  CabinT_tTrfSnsr_CUR_Type *tmp_CabinT_tTrfSnsr_CUR;
  CabinT_tTrfReSnsr_CUR_Type *tmp_CabinT_tTrfReSnsr_CUR;
  tmp_CabinT_tTrfReSnsr_CUR = Rte_CData_CabinT_tTrfReSnsr_CUR();
  tmp_CabinT_tTrfSnsr_CUR = Rte_CData_CabinT_tTrfSnsr_CUR();
  tmp_CabinT_tReDfl_C = Rte_CData_CabinT_tReDfl_C();
  tmp_CabinT_tDfl_C = Rte_CData_CabinT_tDfl_C();

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_CabinT_DD_Runnable_100ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/CabinT_DD_Runnable_100ms_sys'
   */
  /* SignalConversion: '<S1>/TmpSignal ConversionAtBattU_bVoltEnbPinDiag_Val_readOutport1' incorporates:
   *  Inport: '<Root>/BattU_bVoltEnbPinDiag_Val'
   */
  Rte_Read_BattU_bVoltEnbPinDiag_Val(&rtb_TmpSignalConversionAtBattU_);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtVehCoorn_stPwrMod_Val_readOutport1' incorporates:
   *  Inport: '<Root>/VehCoorn_stPwrMod_Val'
   */
  Rte_Read_VehCoorn_stPwrMod_Val(&rtb_TmpSignalConversionAtVehCoo);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_CabinT_DD_Runnable_100ms_at_outport_1' */

  /* Inport: '<Root>/gCFG_bCabinTSnsrAvl_Val' */
  Rte_Read_gCFG_bCabinTSnsrAvl_Val(&rtb_AND1);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_CabinT_DD_Runnable_100ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/CabinT_DD_Runnable_100ms_sys'
   */
  /* If: '<S1>/If' */
  if (!rtb_AND1) {
    /* Outputs for IfAction SubSystem: '<S1>/CabinTSnsrAvl' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* FunctionCaller: '<S3>/IoHwAb_IoSigAdc_AdcFac_Get' */
    Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_CabinT, &rtb_IoHwAb_IoSigAdc_AdcFac_Ge_m);

    /* DataTypeConversion: '<S3>/DataTypeConversion1' */
    if (rtb_IoHwAb_IoSigAdc_AdcFac_Ge_m < 0) {
      rtb_IoHwAb_IoSigAdc_AdcFac_Ge_m = 0;
    }

    /* Sum: '<S9>/Add1' incorporates:
     *  Constant: '<S9>/Constant4'
     *  UnitDelay: '<S9>/UnitDelay1'
     */
    if (1.0 + CabinT_DD_DW.UnitDelay1_DSTATE_a < 256.0) {
      if (1.0 + CabinT_DD_DW.UnitDelay1_DSTATE_a >= 0.0) {
        rtb_UnitDelay_m_0 = (uint8)(1.0 + CabinT_DD_DW.UnitDelay1_DSTATE_a);
      } else {
        rtb_UnitDelay_m_0 = 0U;
      }
    } else {
      rtb_UnitDelay_m_0 = MAX_uint8_T;
    }

    /* Saturate: '<S9>/Saturation' */
    rtb_Saturation_d = Mfx_Limit_u8(Rte_CData_CabinT_numRawVoltFildPoint_C(), 1U, 20U);

    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/Constant7'
     *  RelationalOperator: '<S9>/RelationalOperator3'
     *  Sum: '<S9>/Add1'
     */
    if (rtb_UnitDelay_m_0 >= rtb_Saturation_d) {
      rtb_Switch1_l = 0;
    } else {
      rtb_Switch1_l = rtb_UnitDelay_m_0;
    }

    /* End of Switch: '<S9>/Switch1' */

    /* Assignment: '<S9>/Assignment1' incorporates:
     *  DataStoreWrite: '<S9>/Data Store Write'
     *  DataTypeConversion: '<S3>/DataTypeConversion1'
     *  DataTypeConversion: '<S9>/DataTypeConversion3'
     */
    CabinT_DD_DW.uRawBuf_j[rtb_Switch1_l] = (uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Ge_m;

    /* Outputs for Iterator SubSystem: '<S9>/ForIteratorSubsystem' incorporates:
     *  ForIterator: '<S10>/For Iterator'
     */
    /* InitializeConditions for UnitDelay: '<S10>/UnitDelay' */
    UnitDelay_DSTATE_n = 0.0F;
    for (s10_iter = 0; s10_iter < rtb_Saturation_d; s10_iter++) {
      /* Sum: '<S10>/Add' incorporates:
       *  DataStoreRead: '<S9>/Data Store Read1'
       *  Selector: '<S10>/Selector'
       *  UnitDelay: '<S10>/UnitDelay'
       */
      CabinT_DD_B.Add_a = CabinT_DD_DW.uRawBuf_j[s10_iter] + UnitDelay_DSTATE_n;

      /* Update for UnitDelay: '<S10>/UnitDelay' */
      UnitDelay_DSTATE_n = CabinT_DD_B.Add_a;
    }

    /* End of Outputs for SubSystem: '<S9>/ForIteratorSubsystem' */

    /* Sum: '<S9>/Add' incorporates:
     *  Constant: '<S9>/Constant2'
     *  UnitDelay: '<S9>/UnitDelay'
     */
    rtb_UnitDelay_m_0 = Mfx_Add_u8u8_u8(1U, CabinT_DD_DW.UnitDelay_DSTATE_i);

    /* If: '<S3>/If' incorporates:
     *  Constant: '<S3>/Constant3'
     *  Logic: '<S3>/AND'
     *  RelationalOperator: '<S3>/RelationalOperator3'
     */
    if ((rtb_TmpSignalConversionAtVehCoo != 0) && rtb_TmpSignalConversionAtBattU_) {
      /* Outputs for IfAction SubSystem: '<S3>/DiagEna' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      /* Switch: '<S8>/Switch1' incorporates:
       *  Constant: '<S8>/Constant1'
       *  Constant: '<S8>/Constant6'
       *  DataTypeConversion: '<S3>/DataTypeConversion1'
       *  RelationalOperator: '<S3>/RelationalOperator'
       */
      if ((uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Ge_m <= Rte_CData_CabinT_uRawMinSRC_C()) {
        tmp = DEM_EVENT_STATUS_PREFAILED;
      } else {
        tmp = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S8>/Switch1' */

      /* FunctionCaller: '<S8>/DTC_CabinTSRCMin_SetEventStatus' */
      Rte_Call_DTC_CabinTSRCMin_SetEventStatus(tmp);

      /* Switch: '<S8>/Switch2' incorporates:
       *  Constant: '<S8>/Constant10'
       *  Constant: '<S8>/Constant11'
       *  DataTypeConversion: '<S3>/DataTypeConversion1'
       *  RelationalOperator: '<S3>/RelationalOperator1'
       */
      if ((uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Ge_m >= Rte_CData_CabinT_uRawMaxSRC_C()) {
        tmp = DEM_EVENT_STATUS_PREFAILED;
      } else {
        tmp = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S8>/Switch2' */

      /* FunctionCaller: '<S8>/DTC_CabinTSRCMax_SetEventStatus' */
      Rte_Call_DTC_CabinTSRCMax_SetEventStatus(tmp);

      /* End of Outputs for SubSystem: '<S3>/DiagEna' */
    } else {
      /* Outputs for IfAction SubSystem: '<S3>/DiagDisbable' incorporates:
       *  ActionPort: '<S7>/Action Port'
       */
      /* FunctionCaller: '<S7>/DTC_CabinTSRCMax_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S7>/Constant'
       */
      Rte_Call_DTC_CabinTSRCMax_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* FunctionCaller: '<S7>/DTC_CabinTSRCMin_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S7>/Constant10'
       */
      Rte_Call_DTC_CabinTSRCMin_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S3>/DiagDisbable' */
    }

    /* End of If: '<S3>/If' */

    /* FunctionCaller: '<S3>/DTC_CabinTSRCMax_GetEventFailed' */
    Rte_Call_DTC_CabinTSRCMax_GetEventFailed(&rtb_DTC_CabinTSRCMin_GetEvent_l);

    /* FunctionCaller: '<S3>/DTC_CabinTSRCMax_GetEventTested' */
    Rte_Call_DTC_CabinTSRCMax_GetEventTested(&rtb_DTC_CabinTSRCMin_GetEvent_j);

    /* Logic: '<S3>/AND1' */
    rtb_AND1 = (rtb_DTC_CabinTSRCMin_GetEvent_l && rtb_DTC_CabinTSRCMin_GetEvent_j);

    /* FunctionCaller: '<S3>/DTC_CabinTSRCMin_GetEventFailed' */
    Rte_Call_DTC_CabinTSRCMin_GetEventFailed(&rtb_DTC_CabinTSRCMin_GetEvent_j);

    /* FunctionCaller: '<S3>/DTC_CabinTSRCMin_GetEventTested' */
    Rte_Call_DTC_CabinTSRCMin_GetEventTested(&rtb_DTC_CabinTSRCMin_GetEvent_l);

    /* Switch: '<S3>/Switch3' incorporates:
     *  Logic: '<S3>/AND2'
     *  Logic: '<S3>/OR'
     *  Logic: '<S3>/OR1'
     */
    if ((!rtb_AND1) && ((!rtb_DTC_CabinTSRCMin_GetEvent_j) || (!rtb_DTC_CabinTSRCMin_GetEvent_l))) {
      /* Switch: '<S9>/Switch' incorporates:
       *  Product: '<S9>/Divide'
       *  Product: '<S9>/Divide1'
       *  RelationalOperator: '<S9>/RelationalOperator2'
       */
      if (rtb_UnitDelay_m_0 >= rtb_Saturation_d) {
        UnitDelay_DSTATE_n = CabinT_DD_B.Add_a / (float32)rtb_Saturation_d;
      } else {
        UnitDelay_DSTATE_n = CabinT_DD_B.Add_a / (float32)rtb_UnitDelay_m_0;
      }

      /* End of Switch: '<S9>/Switch' */

      /* DataTypeConversion: '<S3>/DataTypeConversion2' */
      if (UnitDelay_DSTATE_n < 65536.0F) {
        if (UnitDelay_DSTATE_n >= 0.0F) {
          UnitDelay_DSTATE_n_0 = (uint16)UnitDelay_DSTATE_n;
        } else {
          UnitDelay_DSTATE_n_0 = 0U;
        }
      } else {
        UnitDelay_DSTATE_n_0 = MAX_uint16_T;
      }

      /* End of DataTypeConversion: '<S3>/DataTypeConversion2' */

      /* Outport: '<Root>/CabinT_t_Val' incorporates:
       *  Lookup_n-D: '<S3>/PA_CabinT_tTrfSnsr_CUR'
       */
      (void) Rte_Write_CabinT_t_Val(Ifx_IntIpoCur_u16_s16(UnitDelay_DSTATE_n_0, tmp_CabinT_tTrfSnsr_CUR->N1, tmp_CabinT_tTrfSnsr_CUR->BP1, tmp_CabinT_tTrfSnsr_CUR->Table));
    } else {
      /* Outport: '<Root>/CabinT_t_Val' incorporates:
       *  Constant: '<S3>/PA_CabinT_tDfl_C'
       */
      (void) Rte_Write_CabinT_t_Val(tmp_CabinT_tDfl_C);
    }

    /* End of Switch: '<S3>/Switch3' */

    /* Outport: '<Root>/CabinT_uRaw_Val' incorporates:
     *  DataTypeConversion: '<S3>/DataTypeConversion1'
     *  SignalConversion: '<S3>/Signal Conversion2'
     */
    (void) Rte_Write_CabinT_uRaw_Val((uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Ge_m);

    /* Update for UnitDelay: '<S9>/UnitDelay1' */
    CabinT_DD_DW.UnitDelay1_DSTATE_a = rtb_Switch1_l;

    /* Update for UnitDelay: '<S9>/UnitDelay' */
    CabinT_DD_DW.UnitDelay_DSTATE_i = rtb_UnitDelay_m_0;

    /* End of Outputs for SubSystem: '<S1>/CabinTSnsrAvl' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/CabinTSnsrNotAvl' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* FunctionCaller: '<S4>/IoHwAb_IoSigAdc_AdcFac_Get' */
    Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_CabinT, &rtb_IoHwAb_IoSigAdc_AdcFac_Ge_m);

    /* DataTypeConversion: '<S4>/DataTypeConversion1' */
    if (rtb_IoHwAb_IoSigAdc_AdcFac_Ge_m < 0) {
      rtb_IoHwAb_IoSigAdc_AdcFac_Ge_m = 0;
    }

    /* Outport: '<Root>/CabinT_uRaw_Val' incorporates:
     *  DataTypeConversion: '<S4>/DataTypeConversion1'
     *  SignalConversion: '<S4>/SignalConversion'
     */
    (void) Rte_Write_CabinT_uRaw_Val((uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Ge_m);

    /* Outport: '<Root>/CabinT_t_Val' incorporates:
     *  Constant: '<S4>/PA_CabinT_tDfl_C1'
     */
    (void) Rte_Write_CabinT_t_Val(tmp_CabinT_tDfl_C);

    /* End of Outputs for SubSystem: '<S1>/CabinTSnsrNotAvl' */
  }

  /* End of If: '<S1>/If' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_CabinT_DD_Runnable_100ms_at_outport_1' */

  /* Inport: '<Root>/gCFG_bReCabinTSnsrAvl_Val' */
  Rte_Read_gCFG_bReCabinTSnsrAvl_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_CabinT_DD_Runnable_100ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/CabinT_DD_Runnable_100ms_sys'
   */
  /* If: '<S1>/If1' */
  if (!tmpRead) {
    /* Outputs for IfAction SubSystem: '<S1>/ReCabinTSnsrAvl' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* FunctionCaller: '<S5>/IoHwAb_IoSigAdc_AdcFac_Get' */
    Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_ReCabinT, &rtb_IoHwAb_IoSigAdc_AdcFac_Get_);

    /* DataTypeConversion: '<S5>/DataTypeConversion1' */
    if (rtb_IoHwAb_IoSigAdc_AdcFac_Get_ < 0) {
      rtb_IoHwAb_IoSigAdc_AdcFac_Get_ = 0;
    }

    /* Sum: '<S13>/Add1' incorporates:
     *  Constant: '<S13>/Constant4'
     *  UnitDelay: '<S13>/UnitDelay1'
     */
    if (1.0 + CabinT_DD_DW.UnitDelay1_DSTATE < 256.0) {
      if (1.0 + CabinT_DD_DW.UnitDelay1_DSTATE >= 0.0) {
        rtb_Saturation_d = (uint8)(1.0 + CabinT_DD_DW.UnitDelay1_DSTATE);
      } else {
        rtb_Saturation_d = 0U;
      }
    } else {
      rtb_Saturation_d = MAX_uint8_T;
    }

    /* Saturate: '<S13>/Saturation' */
    rtb_UnitDelay_m_0 = Mfx_Limit_u8(Rte_CData_CabinT_numReRawVoltFildPoint_C(), 1U, 20U);

    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S13>/Constant7'
     *  RelationalOperator: '<S13>/RelationalOperator3'
     *  Sum: '<S13>/Add1'
     */
    if (rtb_Saturation_d >= rtb_UnitDelay_m_0) {
      rtb_Switch1_l = 0;
    } else {
      rtb_Switch1_l = rtb_Saturation_d;
    }

    /* End of Switch: '<S13>/Switch1' */

    /* Assignment: '<S13>/Assignment1' incorporates:
     *  DataStoreWrite: '<S13>/Data Store Write'
     *  DataTypeConversion: '<S13>/DataTypeConversion3'
     *  DataTypeConversion: '<S5>/DataTypeConversion1'
     */
    CabinT_DD_DW.uRawBuf[rtb_Switch1_l] = (uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Get_;

    /* Outputs for Iterator SubSystem: '<S13>/ForIteratorSubsystem' incorporates:
     *  ForIterator: '<S14>/For Iterator'
     */
    /* InitializeConditions for UnitDelay: '<S14>/UnitDelay' */
    UnitDelay_DSTATE_n = 0.0F;
    for (s10_iter = 0; s10_iter < rtb_UnitDelay_m_0; s10_iter++) {
      /* Sum: '<S14>/Add' incorporates:
       *  DataStoreRead: '<S13>/Data Store Read1'
       *  Selector: '<S14>/Selector'
       *  UnitDelay: '<S14>/UnitDelay'
       */
      CabinT_DD_B.Add = CabinT_DD_DW.uRawBuf[s10_iter] + UnitDelay_DSTATE_n;

      /* Update for UnitDelay: '<S14>/UnitDelay' */
      UnitDelay_DSTATE_n = CabinT_DD_B.Add;
    }

    /* End of Outputs for SubSystem: '<S13>/ForIteratorSubsystem' */

    /* UnitDelay: '<S13>/UnitDelay' */
    rtb_Saturation_d = CabinT_DD_DW.UnitDelay_DSTATE_a;

    /* Sum: '<S13>/Add' incorporates:
     *  Constant: '<S13>/Constant2'
     *  UnitDelay: '<S13>/UnitDelay'
     */
    rtb_Add = Mfx_Add_u8u8_u8(1U, CabinT_DD_DW.UnitDelay_DSTATE_a);

    /* If: '<S5>/If' incorporates:
     *  Constant: '<S5>/Constant3'
     *  Logic: '<S5>/AND'
     *  RelationalOperator: '<S5>/RelationalOperator3'
     */
    if ((rtb_TmpSignalConversionAtVehCoo != 0) && rtb_TmpSignalConversionAtBattU_) {
      /* Outputs for IfAction SubSystem: '<S5>/DiagEna' incorporates:
       *  ActionPort: '<S12>/Action Port'
       */
      /* Switch: '<S12>/Switch1' incorporates:
       *  Constant: '<S12>/Constant1'
       *  Constant: '<S12>/Constant6'
       *  DataTypeConversion: '<S5>/DataTypeConversion1'
       *  RelationalOperator: '<S5>/RelationalOperator'
       */
      if ((uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Get_ <= Rte_CData_CabinT_uRawReMinSRC_C()) {
        tmp = DEM_EVENT_STATUS_PREFAILED;
      } else {
        tmp = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S12>/Switch1' */

      /* FunctionCaller: '<S12>/DTC_ReCabinTSRCMin_SetEventStatus' */
      Rte_Call_DTC_ReCabinTSRCMin_SetEventStatus(tmp);

      /* Switch: '<S12>/Switch2' incorporates:
       *  Constant: '<S12>/Constant10'
       *  Constant: '<S12>/Constant11'
       *  DataTypeConversion: '<S5>/DataTypeConversion1'
       *  RelationalOperator: '<S5>/RelationalOperator1'
       */
      if ((uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Get_ >= Rte_CData_CabinT_uRawReMaxSRC_C()) {
        tmp = DEM_EVENT_STATUS_PREFAILED;
      } else {
        tmp = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S12>/Switch2' */

      /* FunctionCaller: '<S12>/DTC_ReCabinTSRCMax_SetEventStatus' */
      Rte_Call_DTC_ReCabinTSRCMax_SetEventStatus(tmp);

      /* End of Outputs for SubSystem: '<S5>/DiagEna' */
    } else {
      /* Outputs for IfAction SubSystem: '<S5>/DiagDisbable' incorporates:
       *  ActionPort: '<S11>/Action Port'
       */
      /* FunctionCaller: '<S11>/DTC_ReCabinTSRCMax_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S11>/Constant'
       */
      Rte_Call_DTC_ReCabinTSRCMax_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* FunctionCaller: '<S11>/DTC_ReCabinTSRCMin_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S11>/Constant10'
       */
      Rte_Call_DTC_ReCabinTSRCMin_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S5>/DiagDisbable' */
    }

    /* End of If: '<S5>/If' */

    /* FunctionCaller: '<S5>/DTC_ReCabinTSRCMax_GetEventFailed' */
    Rte_Call_DTC_ReCabinTSRCMax_GetEventFailed(&rtb_DTC_ReCabinTSRCMax_GetEve_k);

    /* FunctionCaller: '<S5>/DTC_ReCabinTSRCMax_GetEventTested' */
    Rte_Call_DTC_ReCabinTSRCMax_GetEventTested(&rtb_DTC_ReCabinTSRCMin_GetEve_l);

    /* Logic: '<S5>/AND2' */
    rtb_TmpSignalConversionAtBattU_ = (rtb_DTC_ReCabinTSRCMax_GetEve_k && rtb_DTC_ReCabinTSRCMin_GetEve_l);

    /* FunctionCaller: '<S5>/DTC_ReCabinTSRCMin_GetEventFailed' */
    Rte_Call_DTC_ReCabinTSRCMin_GetEventFailed(&rtb_DTC_ReCabinTSRCMin_GetEve_l);

    /* FunctionCaller: '<S5>/DTC_ReCabinTSRCMin_GetEventStatus' */
    Rte_Call_DTC_ReCabinTSRCMin_GetEventStatus(&rtb_Saturation_d);

    /* Switch: '<S5>/Switch3' incorporates:
     *  Logic: '<S5>/AND3'
     *  Logic: '<S5>/OR2'
     *  Logic: '<S5>/OR3'
     */
    if ((!rtb_TmpSignalConversionAtBattU_) && ((!rtb_DTC_ReCabinTSRCMin_GetEve_l) || (rtb_Saturation_d == 0))) {
      /* Switch: '<S13>/Switch' incorporates:
       *  Product: '<S13>/Divide'
       *  Product: '<S13>/Divide1'
       *  RelationalOperator: '<S13>/RelationalOperator2'
       */
      if (rtb_Add >= rtb_UnitDelay_m_0) {
        UnitDelay_DSTATE_n = CabinT_DD_B.Add / (float32)rtb_UnitDelay_m_0;
      } else {
        UnitDelay_DSTATE_n = CabinT_DD_B.Add / (float32)rtb_Add;
      }

      /* End of Switch: '<S13>/Switch' */

      /* DataTypeConversion: '<S5>/DataTypeConversion2' */
      if (UnitDelay_DSTATE_n < 65536.0F) {
        if (UnitDelay_DSTATE_n >= 0.0F) {
          UnitDelay_DSTATE_n_0 = (uint16)UnitDelay_DSTATE_n;
        } else {
          UnitDelay_DSTATE_n_0 = 0U;
        }
      } else {
        UnitDelay_DSTATE_n_0 = MAX_uint16_T;
      }

      /* End of DataTypeConversion: '<S5>/DataTypeConversion2' */

      /* Outport: '<Root>/CabinT_tRe_Val' incorporates:
       *  Lookup_n-D: '<S5>/PA_CabinT_tTrfReSnsr_CUR'
       */
      (void) Rte_Write_CabinT_tRe_Val(Ifx_IntIpoCur_u16_s16(UnitDelay_DSTATE_n_0, tmp_CabinT_tTrfReSnsr_CUR->N1, tmp_CabinT_tTrfReSnsr_CUR->BP1, tmp_CabinT_tTrfReSnsr_CUR->Table));
    } else {
      /* Outport: '<Root>/CabinT_tRe_Val' incorporates:
       *  Constant: '<S5>/PA_CabinT_tReDfl_C'
       */
      (void) Rte_Write_CabinT_tRe_Val(tmp_CabinT_tReDfl_C);
    }

    /* End of Switch: '<S5>/Switch3' */

    /* Outport: '<Root>/CabinT_uRawRe_Val' incorporates:
     *  DataTypeConversion: '<S5>/DataTypeConversion1'
     *  SignalConversion: '<S5>/Signal Conversion'
     */
    (void) Rte_Write_CabinT_uRawRe_Val((uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Get_);

    /* Update for UnitDelay: '<S13>/UnitDelay1' */
    CabinT_DD_DW.UnitDelay1_DSTATE = rtb_Switch1_l;

    /* Update for UnitDelay: '<S13>/UnitDelay' */
    CabinT_DD_DW.UnitDelay_DSTATE_a = rtb_Add;

    /* End of Outputs for SubSystem: '<S1>/ReCabinTSnsrAvl' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/ReCabinTSnsrNotAvl' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* FunctionCaller: '<S6>/IoHwAb_IoSigAdc_AdcFac_Get' */
    Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_ReCabinT, &rtb_IoHwAb_IoSigAdc_AdcFac_Get_);

    /* DataTypeConversion: '<S6>/DataTypeConversion1' */
    if (rtb_IoHwAb_IoSigAdc_AdcFac_Get_ < 0) {
      rtb_IoHwAb_IoSigAdc_AdcFac_Get_ = 0;
    }

    /* Outport: '<Root>/CabinT_uRawRe_Val' incorporates:
     *  DataTypeConversion: '<S6>/DataTypeConversion1'
     *  SignalConversion: '<S6>/SignalConversion'
     */
    (void) Rte_Write_CabinT_uRawRe_Val((uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Get_);

    /* Outport: '<Root>/CabinT_tRe_Val' incorporates:
     *  Constant: '<S6>/PA_CabinT_tReDfl_C'
     */
    (void) Rte_Write_CabinT_tRe_Val(tmp_CabinT_tReDfl_C);

    /* End of Outputs for SubSystem: '<S1>/ReCabinTSnsrNotAvl' */
  }

  /* End of If: '<S1>/If1' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_CabinT_DD_Runnable_100ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, CabinT_DD_CODE) CabinT_DD_Runnable_Init(void)
{
  {
    sint16 rtb_IoHwAb_IoSigAdc_AdcFac_Get1;
    sint16 tmp;
    CabinT_tTrfSnsr_CUR_Type *tmp_CabinT_tTrfSnsr_CUR;
    CabinT_tTrfReSnsr_CUR_Type *tmp_CabinT_tTrfReSnsr_CUR;
    tmp_CabinT_tTrfReSnsr_CUR = Rte_CData_CabinT_tTrfReSnsr_CUR();
    tmp_CabinT_tTrfSnsr_CUR = Rte_CData_CabinT_tTrfSnsr_CUR();

    /* SystemInitialize for Atomic SubSystem: '<Root>/CabinT_DD_Runnable_Init' */
    /* FunctionCaller: '<S2>/IoHwAb_IoSigAdc_AdcFac_Get' */
    Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_CabinT, &rtb_IoHwAb_IoSigAdc_AdcFac_Get1);

    /* DataTypeConversion: '<S2>/DataTypeConversion1' */
    tmp = rtb_IoHwAb_IoSigAdc_AdcFac_Get1;
    if (rtb_IoHwAb_IoSigAdc_AdcFac_Get1 < 0) {
      tmp = 0;
    }

    /* Outport: '<Root>/CabinT_t_Val' incorporates:
     *  DataTypeConversion: '<S2>/DataTypeConversion1'
     *  Lookup_n-D: '<S2>/PA_CabinT_tTrfSnsr_CUR'
     */
    (void) Rte_Write_CabinT_t_Val(Ifx_IntIpoCur_u16_s16((uint16)tmp, tmp_CabinT_tTrfSnsr_CUR->N1, tmp_CabinT_tTrfSnsr_CUR->BP1, tmp_CabinT_tTrfSnsr_CUR->Table));

    /* Outport: '<Root>/CabinT_uRaw_Val' incorporates:
     *  DataTypeConversion: '<S2>/DataTypeConversion1'
     *  SignalConversion: '<S2>/Signal Conversion1'
     */
    (void) Rte_Write_CabinT_uRaw_Val((uint16)tmp);

    /* FunctionCaller: '<S2>/IoHwAb_IoSigAdc_AdcFac_Get1' */
    Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_ReCabinT, &rtb_IoHwAb_IoSigAdc_AdcFac_Get1);

    /* DataTypeConversion: '<S2>/DataTypeConversion2' */
    if (rtb_IoHwAb_IoSigAdc_AdcFac_Get1 < 0) {
      rtb_IoHwAb_IoSigAdc_AdcFac_Get1 = 0;
    }

    /* Outport: '<Root>/CabinT_tRe_Val' incorporates:
     *  DataTypeConversion: '<S2>/DataTypeConversion2'
     *  Lookup_n-D: '<S2>/PA_CabinT_tTrfReSnsr_CUR'
     */
    (void) Rte_Write_CabinT_tRe_Val(Ifx_IntIpoCur_u16_s16((uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Get1, tmp_CabinT_tTrfReSnsr_CUR->N1, tmp_CabinT_tTrfReSnsr_CUR->BP1, tmp_CabinT_tTrfReSnsr_CUR->Table));

    /* Outport: '<Root>/CabinT_uRawRe_Val' incorporates:
     *  DataTypeConversion: '<S2>/DataTypeConversion2'
     *  SignalConversion: '<S2>/Signal Conversion2'
     */
    (void) Rte_Write_CabinT_uRawRe_Val((uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Get1);

    /* End of SystemInitialize for SubSystem: '<Root>/CabinT_DD_Runnable_Init' */
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
