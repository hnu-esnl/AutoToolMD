/*
 * File: WndshdHeatg_DD.c
 *
 * Code generated for Simulink model 'WndshdHeatg_DD'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Sep 30 14:16:34 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "WndshdHeatg_DD.h"
#include "WndshdHeatg_DD_private.h"

/* Model step function for TID1 */
FUNC(void, WndshdHeatg_DD_CODE) WndshdHeatg_DD_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  uint8 tmpRead;
  boolean tmpRead_0;
  boolean rtb_TmpSignalConversionAtBattU_;
  uint32 rtb_IoHwAb_IoDiagDo_Do_Get_o1;
  uint8 rtb_Switch;
  boolean rtb_DTC_ReWndshdHeatgMax_GetE_g;
  boolean rtb_DTC_ReWndshdHeatgMax_GetE_i;
  boolean rtb_DTC_ReWndshdHeatgMin_GetE_i;
  boolean rtb_DTC_ReWndshdHeatgMin_GetE_b;
  Dem_EventStatusType tmp;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WndshdHeatg_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/WndshdHeatg_DD_Runnable_10ms_sys'
   */
  /* SignalConversion: '<S1>/TmpSignal ConversionAtBattU_bVoltEnbPinDiag_Val_readOutport1' incorporates:
   *  Inport: '<Root>/BattU_bVoltEnbPinDiag_Val'
   */
  Rte_Read_BattU_bVoltEnbPinDiag_Val(&rtb_TmpSignalConversionAtBattU_);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WndshdHeatg_DD_Runnable_10ms_at_outport_1' */

  /* Inport: '<Root>/WndshdHeatg_bUdsTrigRe_val' */
  Rte_Read_WndshdHeatg_bUdsTrigRe_Val(&tmpRead_0);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WndshdHeatg_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/WndshdHeatg_DD_Runnable_10ms_sys'
   */
  /* Switch: '<S1>/Switch' incorporates:
   *  Inport: '<Root>/WndshdHeatg_stReqRe_Val'
   *  Inport: '<Root>/WndshdHeatg_stReqUdsRe_val'
   */
  if (tmpRead_0) {
    Rte_Read_WndshdHeatg_stReqUdsRe_Val(&rtb_Switch);
  } else {
    Rte_Read_WndshdHeatg_stReqRe_Val(&rtb_Switch);

    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S1>/Constant5'
     *  Inport: '<Root>/WndshdHeatg_stReqRe_Val'
     */
    if (!rtb_TmpSignalConversionAtBattU_) {
      rtb_Switch = 0U;
    }

    /* End of Switch: '<S1>/Switch1' */
  }

  /* End of Switch: '<S1>/Switch' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WndshdHeatg_DD_Runnable_10ms_at_outport_1' */

  /* Inport: '<Root>/VehCoorn_stPwrMod_Val' */
  Rte_Read_VehCoorn_stPwrMod_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WndshdHeatg_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/WndshdHeatg_DD_Runnable_10ms_sys'
   */
  /* FunctionCaller: '<S1>/IoHwAb_IoDiagDo_Do_Get' */
  Rte_Call_IoHwAb_IoDiagDo_Do_Get(O_S_ReWndshdHeatg, &rtb_IoHwAb_IoDiagDo_Do_Get_o1);

  /* If: '<S1>/If' incorporates:
   *  Constant: '<S1>/Constant4'
   *  Logic: '<S1>/LogicalOperator1'
   *  RelationalOperator: '<S1>/RelationalOperator1'
   */
  if (rtb_TmpSignalConversionAtBattU_ && (tmpRead != 0)) {
    /* Outputs for IfAction SubSystem: '<S1>/DiagEna' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* If: '<S4>/If' */
    if (rtb_Switch != 0) {
      /* Switch: '<S6>/Switch' incorporates:
       *  Constant: '<S6>/Constant2'
       *  Constant: '<S6>/Constant3'
       *  Constant: '<S6>/Constant5'
       *  S-Function (Bfx_GetBit_sf): '<S9>/Bfx_GetBit_sf'
       */
      if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagDo_Do_Get_o1, ((uint8)0U))) {
        tmp = DEM_EVENT_STATUS_PREFAILED;
      } else {
        tmp = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S6>/Switch' */

      /* FunctionCaller: '<S6>/DTC_ReWndshdHeatgMax_SetEventStatus' */
      Rte_Call_DTC_ReWndshdHeatgMax_SetEventStatus(tmp);

      /* FunctionCaller: '<S6>/DTC_ReWndshdHeatgMin_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S6>/Constant1'
       */
      Rte_Call_DTC_ReWndshdHeatgMin_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S4>/OnDiagErr' */
    } else {
      /* Switch: '<S5>/Switch1' incorporates:
       *  Constant: '<S5>/Constant1'
       *  Constant: '<S5>/Constant2'
       *  Constant: '<S5>/Constant3'
       *  Constant: '<S5>/Constant5'
       *  Logic: '<S5>/LogicalOperator'
       *  S-Function (Bfx_GetBit_sf): '<S7>/Bfx_GetBit_sf'
       *  S-Function (Bfx_GetBit_sf): '<S8>/Bfx_GetBit_sf'
       */
      if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagDo_Do_Get_o1, ((uint8)1U)) || Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagDo_Do_Get_o1, ((uint8)3U))) {
        tmp = DEM_EVENT_STATUS_PREFAILED;
      } else {
        tmp = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S5>/Switch1' */

      /* FunctionCaller: '<S5>/DTC_ReWndshdHeatgMin_SetEventStatus' */
      Rte_Call_DTC_ReWndshdHeatgMin_SetEventStatus(tmp);

      /* FunctionCaller: '<S5>/DTC_ReWndshdHeatgMax_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S5>/Constant'
       */
      Rte_Call_DTC_ReWndshdHeatgMax_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S4>/OffDiagErr' */
    }

    /* End of If: '<S4>/If' */
    /* End of Outputs for SubSystem: '<S1>/DiagEna' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/DiagDisEna' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* FunctionCaller: '<S3>/DTC_ReWndshdHeatgMax_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S3>/Constant'
     */
    Rte_Call_DTC_ReWndshdHeatgMax_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S3>/DTC_ReWndshdHeatgMin_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    Rte_Call_DTC_ReWndshdHeatgMin_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S1>/DiagDisEna' */
  }

  /* End of If: '<S1>/If' */

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Do_Set' */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_ReWndshdHeatg, rtb_Switch);

  /* FunctionCaller: '<S1>/DTC_ReWndshdHeatgMax_GetEventFailed' */
  Rte_Call_DTC_ReWndshdHeatgMax_GetEventFailed(&rtb_DTC_ReWndshdHeatgMax_GetE_g);

  /* FunctionCaller: '<S1>/DTC_ReWndshdHeatgMax_GetEventTested' */
  Rte_Call_DTC_ReWndshdHeatgMax_GetEventTested(&rtb_DTC_ReWndshdHeatgMax_GetE_i);

  /* FunctionCaller: '<S1>/DTC_ReWndshdHeatgMin_GetEventFailed' */
  Rte_Call_DTC_ReWndshdHeatgMin_GetEventFailed(&rtb_DTC_ReWndshdHeatgMin_GetE_i);

  /* FunctionCaller: '<S1>/DTC_ReWndshdHeatgMin_GetEventTested' */
  Rte_Call_DTC_ReWndshdHeatgMin_GetEventTested(&rtb_DTC_ReWndshdHeatgMin_GetE_b);

  /* Outport: '<Root>/WndshdHeatg_stPsRe_val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion'
   */
  (void) Rte_Write_WndshdHeatg_stPsRe_Val(rtb_Switch);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WndshdHeatg_DD_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, WndshdHeatg_DD_CODE) WndshdHeatg_DD_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
