/*
 * File: BattU_DD.c
 *
 * Code generated for Simulink model 'BattU_DD'.
 *
 * Model version                  : 1.22
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Oct  9 10:13:18 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BattU_DD.h"
#include "BattU_DD_private.h"

/* Named constants for Chart: '<S1>/Battu_DiagEna' */
#define BattU_DD_IN_Delay              ((uint8)1U)
#define BattU_DD_IN_DiagEna            ((uint8)2U)

/* Block signals (default storage) */
VAR(B_BattU_DD_T, BattU_DD_VAR) BattU_DD_B;

/* Block states (default storage) */
VAR(DW_BattU_DD_T, BattU_DD_VAR) BattU_DD_DW;

/*
 * Output and update for action system:
 *    '<S6>/Switch Case Action Subsystem1'
 *    '<S7>/Switch Case Action Subsystem1'
 */
FUNC(void, BattU_DD_CODE_LOCAL) Batt_SwitchCaseActionSubsystem1(VAR(uint16, AUTOMATIC) rtu_OldVal, P2VAR(uint16, AUTOMATIC, BattU_DD_VAR) rty_Avrg)
{
  /* Inport: '<S9>/OldVal' */
  *rty_Avrg = rtu_OldVal;
}

/* Model step function for TID1 */
FUNC(void, BattU_DD_CODE) BattU_DD_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  sint16 rtb_Efx_MedianSort_sf_o2;
  sint16 rtb_Efx_MedianSort_sf_o2_g;
  sint16 rtb_DataStoreRead1[5];
  sint16 rtb_Efx_MedianSort_sf_o1[5];
  sint16 rtb_DataStoreRead1_g[5];
  sint16 rtb_Efx_MedianSort_sf_o1_h[5];
  sint16 rtb_IoHwAb_AdcFac_Get_AdcFac_Ge;
  uint8 rtb_Add1_k;
  uint8 rtb_UnitDelay2;
  uint8 rtb_Switch1;
  sint16 rtb_IoHwAb_AdcFac_Get_AdcFac__a;
  uint8 rtb_Add2_f;
  uint16 rtb_Switch;
  uint16 rtb_Add;
  sint16 rtb_IoHwAb_AdcFac_Get_AdcFac__f;
  uint16 rtb_Merge;
  uint16 rtb_Merge_b;
  sint32 i;
  float32 tmp;
  Dem_EventStatusType rtb_IoHwAb_AdcFac_Get_AdcFac__2;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_BattU_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/BattU_DD_Runnable_10ms_sys'
   */
  /* FunctionCaller: '<S1>/IoHwAb_AdcFac_Get_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_KL30Batt, &rtb_IoHwAb_AdcFac_Get_AdcFac_Ge);

  /* Sum: '<S6>/Add1' incorporates:
   *  Constant: '<S6>/Constant4'
   *  UnitDelay: '<S6>/UnitDelay1'
   */
  rtb_UnitDelay2 = Mfx_Add_u8u8_u8(1U, BattU_DD_DW.UnitDelay1_DSTATE);

  /* Switch: '<S6>/Switch1' incorporates:
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant7'
   *  RelationalOperator: '<S6>/RelationalOperator3'
   */
  if (rtb_UnitDelay2 >= 5) {
    rtb_Switch1 = 0U;
  } else {
    rtb_Switch1 = rtb_UnitDelay2;
  }

  /* End of Switch: '<S6>/Switch1' */

  /* Assignment: '<S6>/Assignment' incorporates:
   *  DataStoreWrite: '<S6>/Data Store Write'
   */
  BattU_DD_DW.uRawBuf1[rtb_Switch1] = rtb_IoHwAb_AdcFac_Get_AdcFac_Ge;

  /* SwitchCase: '<S6>/Switch Case' incorporates:
   *  Constant: '<S6>/Constant2'
   *  RelationalOperator: '<S6>/RelationalOperator1'
   *  UnitDelay: '<S6>/UnitDelay'
   */
  if (rtb_UnitDelay2 == 1) {
    /* Outputs for IfAction SubSystem: '<S6>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* DataStoreRead: '<S8>/Data Store Read1' */
    for (i = 0; i < 5; i++) {
      rtb_DataStoreRead1_g[i] = BattU_DD_DW.uRawBuf1[i];
    }

    /* End of DataStoreRead: '<S8>/Data Store Read1' */

    /* S-Function (Efx_MedianSort_sf): '<S10>/Efx_MedianSort_sf' incorporates:
     *  Constant: '<S10>/Size'
     */

    /* Version without roll directive */
    {
      {
        sint32 tmpIdx;
        for (tmpIdx = 0; tmpIdx < 5; ++tmpIdx) {
          rtb_Efx_MedianSort_sf_o1_h[tmpIdx] = rtb_DataStoreRead1_g[tmpIdx];
        }
      }

      rtb_Efx_MedianSort_sf_o2_g = Efx_MedianSort_s16_s16(&rtb_Efx_MedianSort_sf_o1_h[0], 5);
    }

    /* Product: '<S8>/Divide' incorporates:
     *  Constant: '<S8>/Constant3'
     *  Sum: '<S8>/Add1'
     */
    tmp = Mfl_Cvrt_s32_f32((rtb_Efx_MedianSort_sf_o1_h[1] + rtb_Efx_MedianSort_sf_o1_h[2]) + rtb_Efx_MedianSort_sf_o1_h[3], 0) / 3.0F;
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        rtb_Merge = (uint16)tmp;
      } else {
        rtb_Merge = 0U;
      }
    } else {
      rtb_Merge = MAX_uint16_T;
    }

    /* End of Product: '<S8>/Divide' */
    /* End of Outputs for SubSystem: '<S6>/Switch Case Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S6>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    Batt_SwitchCaseActionSubsystem1(BattU_DD_DW.UnitDelay_DSTATE, &rtb_Merge);

    /* End of Outputs for SubSystem: '<S6>/Switch Case Action Subsystem1' */
  }

  /* End of SwitchCase: '<S6>/Switch Case' */

  /* FunctionCaller: '<S1>/IoHwAb_AdcFac_Get_AdcFac_Get1' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_KL30DC, &rtb_IoHwAb_AdcFac_Get_AdcFac__a);

  /* Sum: '<S7>/Add1' incorporates:
   *  Constant: '<S7>/Constant4'
   *  UnitDelay: '<S7>/UnitDelay1'
   */
  rtb_Add1_k = Mfx_Add_u8u8_u8(1U, BattU_DD_DW.UnitDelay1_DSTATE_e);

  /* Switch: '<S7>/Switch1' incorporates:
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/Constant7'
   *  RelationalOperator: '<S7>/RelationalOperator3'
   */
  if (rtb_Add1_k >= 5) {
    rtb_UnitDelay2 = 0U;
  } else {
    rtb_UnitDelay2 = rtb_Add1_k;
  }

  /* End of Switch: '<S7>/Switch1' */

  /* Assignment: '<S7>/Assignment' incorporates:
   *  DataStoreWrite: '<S7>/Data Store Write'
   */
  BattU_DD_DW.uRawBuf2[rtb_UnitDelay2] = rtb_IoHwAb_AdcFac_Get_AdcFac__a;

  /* SwitchCase: '<S7>/Switch Case' incorporates:
   *  Constant: '<S7>/Constant2'
   *  RelationalOperator: '<S7>/RelationalOperator1'
   *  UnitDelay: '<S7>/UnitDelay'
   */
  if (rtb_Add1_k == 1) {
    /* Outputs for IfAction SubSystem: '<S7>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* DataStoreRead: '<S12>/Data Store Read1' */
    for (i = 0; i < 5; i++) {
      rtb_DataStoreRead1[i] = BattU_DD_DW.uRawBuf2[i];
    }

    /* End of DataStoreRead: '<S12>/Data Store Read1' */

    /* S-Function (Efx_MedianSort_sf): '<S14>/Efx_MedianSort_sf' incorporates:
     *  Constant: '<S14>/Size'
     */

    /* Version without roll directive */
    {
      {
        sint32 tmpIdx;
        for (tmpIdx = 0; tmpIdx < 5; ++tmpIdx) {
          rtb_Efx_MedianSort_sf_o1[tmpIdx] = rtb_DataStoreRead1[tmpIdx];
        }
      }

      rtb_Efx_MedianSort_sf_o2 = Efx_MedianSort_s16_s16(&rtb_Efx_MedianSort_sf_o1[0], 5);
    }

    /* Product: '<S12>/Divide' incorporates:
     *  Constant: '<S12>/Constant3'
     *  Sum: '<S12>/Add1'
     */
    tmp = Mfl_Cvrt_s32_f32((rtb_Efx_MedianSort_sf_o1[1] + rtb_Efx_MedianSort_sf_o1[2]) + rtb_Efx_MedianSort_sf_o1[3], 0) / 3.0F;
    if (tmp < 65536.0F) {
      if (tmp >= 0.0F) {
        rtb_Merge_b = (uint16)tmp;
      } else {
        rtb_Merge_b = 0U;
      }
    } else {
      rtb_Merge_b = MAX_uint16_T;
    }

    /* End of Product: '<S12>/Divide' */
    /* End of Outputs for SubSystem: '<S7>/Switch Case Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S7>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    Batt_SwitchCaseActionSubsystem1(BattU_DD_DW.UnitDelay_DSTATE_h, &rtb_Merge_b);

    /* End of Outputs for SubSystem: '<S7>/Switch Case Action Subsystem1' */
  }

  /* End of SwitchCase: '<S7>/Switch Case' */

  /* Chart: '<S1>/Battu_DiagEna' */
  /* Gateway: BattU_DD_Runnable_10ms_sys/Battu_DiagEna */
  /* During: BattU_DD_Runnable_10ms_sys/Battu_DiagEna */
  if (BattU_DD_DW.is_active_c1_BattU_DD == 0U) {
    /* Entry: BattU_DD_Runnable_10ms_sys/Battu_DiagEna */
    BattU_DD_DW.is_active_c1_BattU_DD = 1U;

    /* Entry Internal: BattU_DD_Runnable_10ms_sys/Battu_DiagEna */
    /* Transition: '<S3>:2' */
    BattU_DD_DW.s_Cntr = 0U;
    BattU_DD_B.Out_bDiagEna = false;
    BattU_DD_DW.is_c1_BattU_DD = BattU_DD_IN_Delay;
  } else if (BattU_DD_DW.is_c1_BattU_DD == BattU_DD_IN_Delay) {
    /* During 'Delay': '<S3>:1' */
    if (BattU_DD_DW.s_Cntr >= 500) {
      /* Transition: '<S3>:4' */
      BattU_DD_DW.is_c1_BattU_DD = BattU_DD_IN_DiagEna;

      /* Entry 'DiagEna': '<S3>:3' */
      BattU_DD_B.Out_bDiagEna = true;
    } else {
      BattU_DD_DW.s_Cntr = Mfx_Add_u32s32_u16(BattU_DD_DW.s_Cntr, 1);
    }
  } else {
    /* During 'DiagEna': '<S3>:3' */
  }

  /* End of Chart: '<S1>/Battu_DiagEna' */

  /* If: '<S1>/If' */
  if (BattU_DD_B.Out_bDiagEna) {
    /* Outputs for IfAction SubSystem: '<S1>/Error_Set' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S5>/Constant4'
     *  Constant: '<S5>/Constant7'
     *  Constant: '<S5>/Constant8'
     *  RelationalOperator: '<S5>/RelationalOperator2'
     */
    if (rtb_IoHwAb_AdcFac_Get_AdcFac_Ge > 16500) {
      rtb_IoHwAb_AdcFac_Get_AdcFac__2 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_IoHwAb_AdcFac_Get_AdcFac__2 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S5>/Switch2' */

    /* FunctionCaller: '<S5>/DTC_KL30BattOverVolt_SetEventStatus' */
    Rte_Call_DTC_KL30BattOverVolt_SetEventStatus(rtb_IoHwAb_AdcFac_Get_AdcFac__2);

    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S5>/Constant1'
     *  Constant: '<S5>/Constant2'
     *  Constant: '<S5>/Constant3'
     *  RelationalOperator: '<S5>/RelationalOperator1'
     */
    if (rtb_IoHwAb_AdcFac_Get_AdcFac_Ge < 9000) {
      rtb_IoHwAb_AdcFac_Get_AdcFac__2 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_IoHwAb_AdcFac_Get_AdcFac__2 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* FunctionCaller: '<S5>/DTC_KL30BattUnderVolt_SetEventStatus' */
    Rte_Call_DTC_KL30BattUnderVolt_SetEventStatus(rtb_IoHwAb_AdcFac_Get_AdcFac__2);

    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S5>/Constant10'
     *  Constant: '<S5>/Constant20'
     *  Constant: '<S5>/Constant9'
     *  RelationalOperator: '<S5>/RelationalOperator11'
     */
    if (rtb_IoHwAb_AdcFac_Get_AdcFac__a > 16500) {
      rtb_IoHwAb_AdcFac_Get_AdcFac__2 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_IoHwAb_AdcFac_Get_AdcFac__2 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S5>/Switch4' */

    /* FunctionCaller: '<S5>/DTC_KL30DCOverVolt_SetEventStatus' */
    Rte_Call_DTC_KL30DCOverVolt_SetEventStatus(rtb_IoHwAb_AdcFac_Get_AdcFac__2);

    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S5>/Constant19'
     *  Constant: '<S5>/Constant5'
     *  Constant: '<S5>/Constant6'
     *  RelationalOperator: '<S5>/RelationalOperator10'
     */
    if (rtb_IoHwAb_AdcFac_Get_AdcFac__a < 9000) {
      rtb_IoHwAb_AdcFac_Get_AdcFac__2 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_IoHwAb_AdcFac_Get_AdcFac__2 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S5>/Switch3' */

    /* FunctionCaller: '<S5>/DTC_KL30DCUnderVolt_SetEventStatus' */
    Rte_Call_DTC_KL30DCUnderVolt_SetEventStatus(rtb_IoHwAb_AdcFac_Get_AdcFac__2);

    /* End of Outputs for SubSystem: '<S1>/Error_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/Error_DebounceReset' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* FunctionCaller: '<S4>/DTC_KL30BattOverVolt_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S4>/Constant'
     */
    Rte_Call_DTC_KL30BattOverVolt_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S4>/DTC_KL30BattUnderVolt_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S4>/Constant1'
     */
    Rte_Call_DTC_KL30BattUnderVolt_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S4>/DTC_KL30DCOverVolt_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S4>/Constant2'
     */
    Rte_Call_DTC_KL30DCOverVolt_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S4>/DTC_KL30DCUnderVolt_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S4>/Constant3'
     */
    Rte_Call_DTC_KL30DCUnderVolt_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S1>/Error_DebounceReset' */
  }

  /* End of If: '<S1>/If' */

  /* Sum: '<S6>/Add2' incorporates:
   *  Constant: '<S6>/Constant3'
   *  UnitDelay: '<S6>/UnitDelay2'
   */
  rtb_Add1_k = Mfx_Add_u8u8_u8(1U, BattU_DD_DW.UnitDelay2_DSTATE);

  /* Switch: '<S6>/Switch2' incorporates:
   *  Constant: '<S6>/Constant5'
   *  RelationalOperator: '<S6>/RelationalOperator2'
   */
  if (rtb_Add1_k <= 5) {
    if (rtb_IoHwAb_AdcFac_Get_AdcFac_Ge < 0) {
      rtb_IoHwAb_AdcFac_Get_AdcFac_Ge = 0;
    }

    rtb_Switch = (uint16)rtb_IoHwAb_AdcFac_Get_AdcFac_Ge;
  } else {
    rtb_Switch = rtb_Merge;
  }

  /* End of Switch: '<S6>/Switch2' */

  /* Sum: '<S7>/Add2' incorporates:
   *  Constant: '<S7>/Constant3'
   *  UnitDelay: '<S7>/UnitDelay2'
   */
  rtb_Add2_f = Mfx_Add_u8u8_u8(1U, BattU_DD_DW.UnitDelay2_DSTATE_m);

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant5'
   *  RelationalOperator: '<S7>/RelationalOperator2'
   */
  if (rtb_Add2_f <= 5) {
    if (rtb_IoHwAb_AdcFac_Get_AdcFac__a < 0) {
      rtb_IoHwAb_AdcFac_Get_AdcFac__a = 0;
    }

    rtb_Add = (uint16)rtb_IoHwAb_AdcFac_Get_AdcFac__a;
  } else {
    rtb_Add = rtb_Merge_b;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S1>/Constant6'
   *  Logic: '<S1>/LogicalOperator'
   *  Logic: '<S1>/LogicalOperator1'
   *  Logic: '<S1>/LogicalOperator2'
   *  RelationalOperator: '<S1>/RelationalOperator'
   *  RelationalOperator: '<S1>/RelationalOperator1'
   */
  if ((rtb_Switch < 1000) && (rtb_Add >= 1000)) {
    rtb_Switch = rtb_Add;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S1>/Constant7'
   */
  rtb_Add = Mfx_Add_u16u16_u16(rtb_Switch, 100U);

  /* FunctionCaller: '<S1>/VoltEnbBusOff_SetEnableCondition' incorporates:
   *  Constant: '<S1>/Constant19'
   *  Constant: '<S1>/Constant20'
   *  Logic: '<S1>/LogicalOperator9'
   *  RelationalOperator: '<S1>/RelationalOperator10'
   *  RelationalOperator: '<S1>/RelationalOperator11'
   */
  Rte_Call_VoltEnbBusOff_SetEnableCondition((rtb_Add > 9000) && (rtb_Add < 16000));

  /* FunctionCaller: '<S1>/IoHwAb_AdcFac_Get_AdcFac_Get2' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_PUP1Fb, &rtb_IoHwAb_AdcFac_Get_AdcFac__f);

  /* DataTypeConversion: '<S1>/DataTypeConversion1' incorporates:
   *  Constant: '<S1>/Constant12'
   *  Product: '<S1>/Divide'
   */
  tmp = Mfl_Cvrt_s16_f32(rtb_IoHwAb_AdcFac_Get_AdcFac__f, 0) / 12000.0F / 0.001F;
  if (tmp < 65536.0F) {
    if (tmp >= 0.0F) {
      rtb_Switch = (uint16)tmp;
    } else {
      rtb_Switch = 0U;
    }
  } else {
    rtb_Switch = MAX_uint16_T;
  }

  /* Outport: '<Root>/BattU_VrmFac1_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  (void) Rte_Write_BattU_VrmFac1_Val(rtb_Switch);

  /* FunctionCaller: '<S1>/IoHwAb_AdcFac_Get_AdcFac_Get3' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_PUP2Fb, &rtb_IoHwAb_AdcFac_Get_AdcFac__f);

  /* DataTypeConversion: '<S1>/DataTypeConversion2' incorporates:
   *  Constant: '<S1>/Constant14'
   *  Product: '<S1>/Divide1'
   */
  tmp = Mfl_Cvrt_s16_f32(rtb_IoHwAb_AdcFac_Get_AdcFac__f, 0) / 12000.0F / 0.001F;
  if (tmp < 65536.0F) {
    if (tmp >= 0.0F) {
      rtb_Switch = (uint16)tmp;
    } else {
      rtb_Switch = 0U;
    }
  } else {
    rtb_Switch = MAX_uint16_T;
  }

  /* Outport: '<Root>/BattU_VrmFac2_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion2'
   */
  (void) Rte_Write_BattU_VrmFac2_Val(rtb_Switch);

  /* Outport: '<Root>/BattU_buExcdSmallRng_Val' incorporates:
   *  Constant: '<S1>/Constant8'
   *  Constant: '<S1>/Constant9'
   *  Logic: '<S1>/LogicalOperator3'
   *  Logic: '<S1>/LogicalOperator4'
   *  RelationalOperator: '<S1>/RelationalOperator2'
   *  RelationalOperator: '<S1>/RelationalOperator3'
   */
  (void) Rte_Write_BattU_buExcdSmallRng_Val((rtb_Add <= 8000) || (rtb_Add >= 17000));

  /* Outport: '<Root>/BattU_buExcdLrgRng_Val' incorporates:
   *  Constant: '<S1>/Constant10'
   *  Constant: '<S1>/Constant11'
   *  Logic: '<S1>/LogicalOperator5'
   *  Logic: '<S1>/LogicalOperator6'
   *  RelationalOperator: '<S1>/RelationalOperator4'
   *  RelationalOperator: '<S1>/RelationalOperator5'
   */
  (void) Rte_Write_BattU_buExcdLrgRng_Val((rtb_Add <= 6000) || (rtb_Add >= 28000));

  /* Outport: '<Root>/BattU_bVoltEnbNMDiag_Val' incorporates:
   *  Constant: '<S1>/Constant15'
   *  Constant: '<S1>/Constant16'
   *  Logic: '<S1>/LogicalOperator7'
   *  RelationalOperator: '<S1>/RelationalOperator6'
   *  RelationalOperator: '<S1>/RelationalOperator7'
   */
  (void) Rte_Write_BattU_bVoltEnbNMDiag_Val((rtb_Add > 9000) && (rtb_Add < 16000));

  /* Outport: '<Root>/BattU_bVoltEnbPinDiag_Val' incorporates:
   *  Constant: '<S1>/Constant17'
   *  Constant: '<S1>/Constant18'
   *  Logic: '<S1>/LogicalOperator8'
   *  RelationalOperator: '<S1>/RelationalOperator8'
   *  RelationalOperator: '<S1>/RelationalOperator9'
   */
  (void) Rte_Write_BattU_bVoltEnbPinDiag_Val((rtb_Add > 9000) && (rtb_Add < 16000));

  /* Outport: '<Root>/gVRM_u16BatteryVolt_mv_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion'
   */
  (void) Rte_Write_gVRM_u16BatteryVolt_mv_Val(rtb_Add);

  /* Outport: '<Root>/gDiag_u16BatteryVolt_mv_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion1'
   */
  (void) Rte_Write_gDiag_u16BatteryVolt_mv_Val(rtb_Add);

  /* Outport: '<Root>/BattU_VrmFac3_Val' incorporates:
   *  Constant: '<S1>/Constant13'
   */
  (void) Rte_Write_BattU_VrmFac3_Val(1000U);

  /* Update for UnitDelay: '<S6>/UnitDelay1' */
  BattU_DD_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S6>/UnitDelay' */
  BattU_DD_DW.UnitDelay_DSTATE = rtb_Merge;

  /* Update for UnitDelay: '<S7>/UnitDelay1' */
  BattU_DD_DW.UnitDelay1_DSTATE_e = rtb_UnitDelay2;

  /* Update for UnitDelay: '<S7>/UnitDelay' */
  BattU_DD_DW.UnitDelay_DSTATE_h = rtb_Merge_b;

  /* Update for UnitDelay: '<S6>/UnitDelay2' */
  BattU_DD_DW.UnitDelay2_DSTATE = rtb_Add1_k;

  /* Update for UnitDelay: '<S7>/UnitDelay2' */
  BattU_DD_DW.UnitDelay2_DSTATE_m = rtb_Add2_f;

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_BattU_DD_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, BattU_DD_CODE) BattU_DD_Runnable_Init(void)
{
  /* Start for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_BattU_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/BattU_DD_Runnable_10ms_sys'
   */
  /* Start for Outport: '<Root>/BattU_VrmFac3_Val' incorporates:
   *  Constant: '<S1>/Constant13'
   */
  (void) Rte_Write_BattU_VrmFac3_Val(1000U);

  /* End of Start for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_BattU_DD_Runnable_10ms_at_outport_1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
