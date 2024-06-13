/*
 * File: EPB_SysSrvAdpVDA.c
 *
 * Code generated for Simulink model 'EPB_SysSrvAdpVDA'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Jul 29 13:50:04 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EPB_SysSrvAdpVDA.h"
#include "EPB_SysSrvAdpVDA_private.h"

/* Block states (default storage) */
VAR(DW_EPB_SysSrvAdpVDA_T, EPB_SysSrvAdpVDA_VAR) EPB_SysSrvAdpVDA_DW;

/* Model step function for TID1 */
FUNC(void, EPB_SysSrvAdpVDA_CODE) EPB_SysSrvAdpVDA_Input_Runnable_10ms(void)
                       /* Explicit Task: EPB_SysSrvAdpVDA_Input_Runnable_10ms */
{
  sint32 i;
  uint16 rtb_RelationalOperator_a_0;
  uint8 tmpIRead_2[256];
  uint8 tmp[40];
  const uint8 *tmpIRead;
  const uint8 *tmpIRead_0;
  const uint8 *tmpIRead_1;
  uint8 rtb_RelationalOperator_a;
  boolean rtb_RelationalOperator_d;

  /* Inport: '<Root>/gNVM_u8PbcinDataStorageReadArea3_a_Val' */
  tmpIRead_1 =
    Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_10ms_gNVM_u8PbcinDataStorageReadArea3_a_Val
    ();

  /* Inport: '<Root>/gNVM_u8PbcinDataStorageReadArea2_a_Val' */
  tmpIRead_0 =
    Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_10ms_gNVM_u8PbcinDataStorageReadArea2_a_Val
    ();

  /* Inport: '<Root>/gNVM_u8PbcinDataStorageReadArea1_a_Val' */
  tmpIRead =
    Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_10ms_gNVM_u8PbcinDataStorageReadArea1_a_Val
    ();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpVDA_Input_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPB_SysSrvAdpVDA_Input_Runnable_10ms_sys'
   */
  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/Constant1'
   *  Inport: '<Root>/gDiag_bDSMClear_Val'
   */
  rtb_RelationalOperator_d =
    Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_10ms_gDiag_bDSMClear_Val();
  for (i = 0; i < 40; i++) {
    if (rtb_RelationalOperator_d) {
      tmp[i] = 27U;
    } else {
      tmp[i] = 5U;
    }
  }

  /* Outport: '<Root>/EPB_stPbcInFaultRecoveryRequest_Val' incorporates:
   *  Switch: '<S2>/Switch'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_10ms_EPB_stPbcInFaultRecoveryRequest_Val
    (tmp);

  /* Switch: '<S2>/Switch3' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S2>/Constant5'
   *  Inport: '<Root>/gNVM_bPbcinDataStorageValid1_Val'
   */
  if (Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_10ms_gNVM_bPbcinDataStorageValid1_Val
      ()) {
    rtb_RelationalOperator_a = 5U;
  } else {
    rtb_RelationalOperator_a = 27U;
  }

  /* Outport: '<Root>/EPB_stPbcInDataStorageValid1_Val' incorporates:
   *  Switch: '<S2>/Switch3'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_10ms_EPB_stPbcInDataStorageValid1_Val
    (rtb_RelationalOperator_a);

  /* Switch: '<S2>/Switch4' incorporates:
   *  Constant: '<S2>/Constant7'
   *  Constant: '<S2>/Constant8'
   *  Inport: '<Root>/gNVM_bPbcinDataStorageValid2_Val'
   */
  if (Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_10ms_gNVM_bPbcinDataStorageValid2_Val
      ()) {
    rtb_RelationalOperator_a = 5U;
  } else {
    rtb_RelationalOperator_a = 27U;
  }

  /* Outport: '<Root>/EPB_stPbcInDataStorageValid2_Val' incorporates:
   *  Switch: '<S2>/Switch4'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_10ms_EPB_stPbcInDataStorageValid2_Val
    (rtb_RelationalOperator_a);

  /* Switch: '<S2>/Switch5' incorporates:
   *  Constant: '<S2>/Constant10'
   *  Constant: '<S2>/Constant11'
   *  Inport: '<Root>/gNVM_bPbcinDataStorageValid3_Val'
   */
  if (Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_10ms_gNVM_bPbcinDataStorageValid3_Val
      ()) {
    rtb_RelationalOperator_a = 5U;
  } else {
    rtb_RelationalOperator_a = 27U;
  }

  /* Outport: '<Root>/EPB_stPbcInDataStorageValid3_Val' incorporates:
   *  Switch: '<S2>/Switch5'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_10ms_EPB_stPbcInDataStorageValid3_Val
    (rtb_RelationalOperator_a);

  /* RelationalOperator: '<S2>/Relational Operator' incorporates:
   *  Constant: '<S2>/Constant6'
   *  Inport: '<Root>/gDiag_u8PbcinDiagOperationMode_Val'
   */
  rtb_RelationalOperator_d =
    (Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_10ms_gDiag_u8PbcinDiagOperationMode_Val
     () == 27);

  /* Switch: '<S2>/Switch2' incorporates:
   *  Constant: '<S2>/Constant2'
   *  Constant: '<S2>/Constant3'
   */
  if (rtb_RelationalOperator_d) {
    rtb_RelationalOperator_a = 27U;
  } else {
    rtb_RelationalOperator_a = 5U;
  }

  /* Outport: '<Root>/EPB_stPbcInDiagOperationMod_Val' incorporates:
   *  Switch: '<S2>/Switch2'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_10ms_EPB_stPbcInDiagOperationMod_Val
    (rtb_RelationalOperator_a);

  /* Switch: '<S2>/Switch1' incorporates:
   *  Constant: '<S2>/Constant4'
   *  Inport: '<Root>/gDiag_u16PbcinDiagRequest_Val'
   */
  if (rtb_RelationalOperator_d) {
    rtb_RelationalOperator_a_0 =
      Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_10ms_gDiag_u16PbcinDiagRequest_Val
      ();
  } else {
    rtb_RelationalOperator_a_0 = 5U;
  }

  /* Outport: '<Root>/EPB_stPbcInDiagRequest_Val' incorporates:
   *  Switch: '<S2>/Switch1'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_10ms_EPB_stPbcInDiagRequest_Val
    (rtb_RelationalOperator_a_0);

  /* SignalConversion: '<S2>/Signal Conversion' */
  for (i = 0; i < 8; i++) {
    tmpIRead_2[i] = tmpIRead[i];
    tmpIRead_2[i + 8] = tmpIRead_0[i];
  }

  memcpy(&tmpIRead_2[16], &tmpIRead_1[0], 240U * sizeof(uint8));

  /* Outport: '<Root>/EPB_PbcInDataStorageRead_Val' incorporates:
   *  SignalConversion: '<S2>/Signal Conversion'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_10ms_EPB_PbcInDataStorageRead_Val
    (tmpIRead_2);

  /* Outport: '<Root>/EPB_stPbcInUnexpectedPowerdown_Val' incorporates:
   *  Constant: '<S2>/Constant12'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_10ms_EPB_stPbcInUnexpectedPowerdown_Val
    (5U);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpVDA_Input_Runnable_10ms' */
}

/* Model step function for TID2 */
FUNC(void, EPB_SysSrvAdpVDA_CODE) EPB_SysSrvAdpVDA_Output_Runnable_10ms(void)
                      /* Explicit Task: EPB_SysSrvAdpVDA_Output_Runnable_10ms */
{
  /* local block i/o variables */
  uint8 EPB_u8PbcoutDataStorageArea1WrtCnt_Old;
  uint8 gEPB_u8PbcoutDataStorageWriteArea1_a_Old[8];
  uint8 EPB_u8PbcoutDataStorageArea2WrtCnt_Old;
  uint8 gEPB_u8PbcoutDataStorageWriteArea2_a_Old[8];
  uint8 EPB_u8PbcoutDataStorageArea3WrtCnt_Old;
  sint32 i;
  const uint8 *tmpIRead;
  const uint8 *tmpIRead_0;
  const uint8 *tmpIRead_1;
  uint8 Merge;
  uint8 Merge_a;
  uint8 Merge_b;
  boolean rtb_Compare;

  /* Inport: '<Root>/EPB_PbcOutDataStorageWrite_Val' */
  tmpIRead_1 =
    Rte_IRead_EPB_SysSrvAdpVDA_Output_Runnable_10ms_EPB_PbcOutDataStorageWrite_Val
    ();

  /* Inport: '<Root>/gNVM_u8PbcinDataStorageReadArea1_a_Val' */
  tmpIRead =
    Rte_IRead_EPB_SysSrvAdpVDA_Output_Runnable_10ms_gNVM_u8PbcinDataStorageReadArea1_a_Val
    ();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpVDA_Output_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/gEPB_u16PbcoutDiagRequestAcknowledge_Val' incorporates:
   *  Inport: '<Root>/EPB_stPbcOutDiagRequestAcknowledge_Val'
   *  SignalConversion: '<S4>/Signal Conversion'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_10ms_gEPB_u16PbcoutDiagRequestAcknowledge_Val
    (Rte_IRead_EPB_SysSrvAdpVDA_Output_Runnable_10ms_EPB_stPbcOutDiagRequestAcknowledge_Val
     ());

  /* Outport: '<Root>/gEPB_u8Pbcout_DiagRequestStatus_Val' incorporates:
   *  Inport: '<Root>/EPB_stPbcOutDiagRequestStatus_Val'
   *  SignalConversion: '<S4>/Signal Conversion1'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_10ms_gEPB_u8Pbcout_DiagRequestStatus_Val
    (Rte_IRead_EPB_SysSrvAdpVDA_Output_Runnable_10ms_EPB_stPbcOutDiagRequestStatus_Val
     ());

  /* Outport: '<Root>/gEPB_u8PbcoutDataStorageWriteArea1_a_Val' incorporates:
   *  SignalConversion: '<S4>/Signal Conversion2'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_10ms_gEPB_u8PbcoutDataStorageWriteArea1_a_Val
    (*(uint8 (*)[8])&tmpIRead_1[0]);

  /* Outport: '<Root>/gEPB_u8PbcoutDataStorageWriteArea2_a_Val' incorporates:
   *  SignalConversion: '<S4>/Signal Conversion3'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_10ms_gEPB_u8PbcoutDataStorageWriteArea2_a_Val
    (*(uint8 (*)[8])&tmpIRead_1[8]);

  /* Outport: '<Root>/gEPB_u8PbcoutDataStorageWriteArea3_a_Val' incorporates:
   *  SignalConversion: '<S4>/Signal Conversion4'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_10ms_gEPB_u8PbcoutDataStorageWriteArea3_a_Val
    (*(uint8 (*)[240])&tmpIRead_1[16]);

  /* UnitDelay: '<S6>/Unit Delay' */
  EPB_u8PbcoutDataStorageArea1WrtCnt_Old = EPB_SysSrvAdpVDA_DW.UnitDelay_DSTATE;

  /* Gain: '<S6>/Gain' */
  Merge_b = 0U;
  for (i = 0; i < 8; i++) {
    /* UnitDelay: '<S4>/Unit Delay' */
    gEPB_u8PbcoutDataStorageWriteArea1_a_Old[i] =
      EPB_SysSrvAdpVDA_DW.UnitDelay_DSTATE_e[i];

    /* Gain: '<S6>/Gain' incorporates:
     *  RelationalOperator: '<S6>/Relational Operator'
     */
    Merge_b = (uint8)((uint32)(tmpIRead_1[i] != tmpIRead[i]) + Merge_b);
  }

  /* If: '<S6>/If' incorporates:
   *  Gain: '<S6>/Gain'
   */
  if (Merge_b > 0) {
    /* Outputs for IfAction SubSystem: '<S6>/If_Action_Subsystem' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Gain: '<S9>/Gain' incorporates:
     *  RelationalOperator: '<S9>/Relational Operator'
     */
    Merge_b = 0U;
    for (i = 0; i < 8; i++) {
      Merge_b = (uint8)((uint32)(tmpIRead_1[i] !=
        gEPB_u8PbcoutDataStorageWriteArea1_a_Old[i]) + Merge_b);
    }

    /* If: '<S9>/If' incorporates:
     *  Gain: '<S9>/Gain'
     */
    if (Merge_b > 0) {
      /* Outputs for IfAction SubSystem: '<S9>/If_Action_Subsystem' incorporates:
       *  ActionPort: '<S11>/Action Port'
       */
      /* Merge: '<S6>/Merge' incorporates:
       *  Constant: '<S11>/Constant'
       *  Sum: '<S11>/Add'
       */
      Merge = (uint8)(EPB_u8PbcoutDataStorageArea1WrtCnt_Old + 1U);

      /* End of Outputs for SubSystem: '<S9>/If_Action_Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S9>/If_Action_Subsystem1' incorporates:
       *  ActionPort: '<S12>/Action Port'
       */
      /* Merge: '<S6>/Merge' incorporates:
       *  Inport: '<S12>/EPB_u8PbcoutDataStorageArea1WrtCnt_Old'
       */
      Merge = EPB_u8PbcoutDataStorageArea1WrtCnt_Old;

      /* End of Outputs for SubSystem: '<S9>/If_Action_Subsystem1' */
    }

    /* End of If: '<S9>/If' */
    /* End of Outputs for SubSystem: '<S6>/If_Action_Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S6>/If_Action_Subsystem1' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Merge: '<S6>/Merge' incorporates:
     *  SignalConversion: '<S10>/Signal Conversion1'
     */
    Merge = EPB_u8PbcoutDataStorageArea1WrtCnt_Old;

    /* End of Outputs for SubSystem: '<S6>/If_Action_Subsystem1' */
  }

  /* End of If: '<S6>/If' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpVDA_Output_Runnable_10ms' */

  /* Inport: '<Root>/gNVM_u8PbcinDataStorageReadArea2_a_Val' */
  tmpIRead_0 =
    Rte_IRead_EPB_SysSrvAdpVDA_Output_Runnable_10ms_gNVM_u8PbcinDataStorageReadArea2_a_Val
    ();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpVDA_Output_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPB_SysSrvAdpVDA_Output_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/gEPB_u8PbcoutDataStorageArea1WrtCnt_Val' incorporates:
   *  SignalConversion: '<S6>/Signal Conversion1'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_10ms_gEPB_u8PbcoutDataStorageArea1WrtCnt_Val
    (Merge);

  /* UnitDelay: '<S8>/Unit Delay' */
  EPB_u8PbcoutDataStorageArea2WrtCnt_Old =
    EPB_SysSrvAdpVDA_DW.UnitDelay_DSTATE_k;

  /* Gain: '<S8>/Gain' */
  Merge_b = 0U;
  for (i = 0; i < 8; i++) {
    /* UnitDelay: '<S4>/Unit Delay1' */
    gEPB_u8PbcoutDataStorageWriteArea2_a_Old[i] =
      EPB_SysSrvAdpVDA_DW.UnitDelay1_DSTATE[i];

    /* Gain: '<S8>/Gain' incorporates:
     *  RelationalOperator: '<S8>/Relational Operator'
     */
    Merge_b = (uint8)((uint32)(tmpIRead_1[i + 8] != tmpIRead_0[i]) + Merge_b);
  }

  /* If: '<S8>/If' incorporates:
   *  Gain: '<S8>/Gain'
   */
  if (Merge_b > 0) {
    /* Outputs for IfAction SubSystem: '<S8>/If_Action_Subsystem' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    /* Gain: '<S17>/Gain' incorporates:
     *  RelationalOperator: '<S17>/Relational Operator'
     */
    Merge_b = 0U;
    for (i = 0; i < 8; i++) {
      Merge_b = (uint8)((uint32)(tmpIRead_1[i + 8] !=
        gEPB_u8PbcoutDataStorageWriteArea2_a_Old[i]) + Merge_b);
    }

    /* If: '<S17>/If' incorporates:
     *  Gain: '<S17>/Gain'
     */
    if (Merge_b > 0) {
      /* Outputs for IfAction SubSystem: '<S17>/If_Action_Subsystem' incorporates:
       *  ActionPort: '<S19>/Action Port'
       */
      /* Merge: '<S8>/Merge' incorporates:
       *  Constant: '<S19>/Constant'
       *  Sum: '<S19>/Add'
       */
      Merge_b = (uint8)(EPB_u8PbcoutDataStorageArea2WrtCnt_Old + 1U);

      /* End of Outputs for SubSystem: '<S17>/If_Action_Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S17>/If_Action_Subsystem1' incorporates:
       *  ActionPort: '<S20>/Action Port'
       */
      /* Merge: '<S8>/Merge' incorporates:
       *  Inport: '<S20>/EPB_u8PbcoutDataStorageArea2WrtCnt_Old'
       */
      Merge_b = EPB_u8PbcoutDataStorageArea2WrtCnt_Old;

      /* End of Outputs for SubSystem: '<S17>/If_Action_Subsystem1' */
    }

    /* End of If: '<S17>/If' */
    /* End of Outputs for SubSystem: '<S8>/If_Action_Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S8>/If_Action_Subsystem1' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    /* Merge: '<S8>/Merge' incorporates:
     *  SignalConversion: '<S18>/Signal Conversion1'
     */
    Merge_b = EPB_u8PbcoutDataStorageArea2WrtCnt_Old;

    /* End of Outputs for SubSystem: '<S8>/If_Action_Subsystem1' */
  }

  /* End of If: '<S8>/If' */

  /* Outport: '<Root>/gEPB_u8PbcoutDataStorageArea2WrtCnt_Val' incorporates:
   *  SignalConversion: '<S8>/Signal Conversion1'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_10ms_gEPB_u8PbcoutDataStorageArea2WrtCnt_Val
    (Merge_b);

  /* RelationalOperator: '<S16>/Compare' incorporates:
   *  Constant: '<S7>/Constant6'
   *  Inport: '<Root>/EPB_stPbcOutDataStorageRequest_Val'
   *  RelationalOperator: '<S7>/Relational Operator'
   */
  rtb_Compare =
    (Rte_IRead_EPB_SysSrvAdpVDA_Output_Runnable_10ms_EPB_stPbcOutDataStorageRequest_Val
     () == 27);

  /* UnitDelay: '<S7>/Unit Delay' */
  EPB_u8PbcoutDataStorageArea3WrtCnt_Old =
    EPB_SysSrvAdpVDA_DW.UnitDelay_DSTATE_a;

  /* If: '<S7>/If' incorporates:
   *  RelationalOperator: '<S13>/FixPt Relational Operator'
   *  UnitDelay: '<S13>/Delay Input1'
   *
   * Block description for '<S13>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if ((sint32)rtb_Compare > (sint32)EPB_SysSrvAdpVDA_DW.DelayInput1_DSTATE) {
    /* Outputs for IfAction SubSystem: '<S7>/If_Action_Subsystem' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    /* Merge: '<S7>/Merge' incorporates:
     *  Constant: '<S14>/Constant'
     *  Sum: '<S14>/Add'
     */
    Merge_a = (uint8)(EPB_u8PbcoutDataStorageArea3WrtCnt_Old + 1U);

    /* End of Outputs for SubSystem: '<S7>/If_Action_Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S7>/If_Action_Subsystem1' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    /* Merge: '<S7>/Merge' incorporates:
     *  SignalConversion: '<S15>/Signal Conversion4'
     */
    Merge_a = EPB_u8PbcoutDataStorageArea3WrtCnt_Old;

    /* End of Outputs for SubSystem: '<S7>/If_Action_Subsystem1' */
  }

  /* End of If: '<S7>/If' */

  /* Outport: '<Root>/gEPB_u8PbcoutDataStorageArea3WrtCnt_Val' incorporates:
   *  SignalConversion: '<S7>/Signal Conversion4'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_10ms_gEPB_u8PbcoutDataStorageArea3WrtCnt_Val
    (Merge_a);

  /* Update for UnitDelay: '<S6>/Unit Delay' */
  EPB_SysSrvAdpVDA_DW.UnitDelay_DSTATE = Merge;

  /* Update for UnitDelay: '<S8>/Unit Delay' */
  EPB_SysSrvAdpVDA_DW.UnitDelay_DSTATE_k = Merge_b;
  for (i = 0; i < 8; i++) {
    /* Update for UnitDelay: '<S4>/Unit Delay' */
    EPB_SysSrvAdpVDA_DW.UnitDelay_DSTATE_e[i] = tmpIRead_1[i];

    /* Update for UnitDelay: '<S4>/Unit Delay1' */
    EPB_SysSrvAdpVDA_DW.UnitDelay1_DSTATE[i] = tmpIRead_1[i + 8];
  }

  /* Update for UnitDelay: '<S13>/Delay Input1'
   *
   * Block description for '<S13>/Delay Input1':
   *
   *  Store in Global RAM
   */
  EPB_SysSrvAdpVDA_DW.DelayInput1_DSTATE = rtb_Compare;

  /* Update for UnitDelay: '<S7>/Unit Delay' */
  EPB_SysSrvAdpVDA_DW.UnitDelay_DSTATE_a = Merge_a;

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpVDA_Output_Runnable_10ms' */
}

/* Output function */
FUNC(void, EPB_SysSrvAdpVDA_CODE) EPB_SysSrvAdpVDA_Input_Runnable_Init(void)
{
  sint32 i;
  uint8 tmpIRead_2[256];
  uint8 tmp[40];
  const uint8 *tmpIRead;
  const uint8 *tmpIRead_0;
  const uint8 *tmpIRead_1;
  uint8 tmp_0;

  /* Inport: '<Root>/gNVM_u8PbcinDataStorageReadArea3_a_Val' */
  tmpIRead_1 =
    Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_Init_gNVM_u8PbcinDataStorageReadArea3_a_Val
    ();

  /* Inport: '<Root>/gNVM_u8PbcinDataStorageReadArea2_a_Val' */
  tmpIRead_0 =
    Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_Init_gNVM_u8PbcinDataStorageReadArea2_a_Val
    ();

  /* Inport: '<Root>/gNVM_u8PbcinDataStorageReadArea1_a_Val' */
  tmpIRead =
    Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_Init_gNVM_u8PbcinDataStorageReadArea1_a_Val
    ();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpVDA_Input_Runnable_Init' incorporates:
   *  SubSystem: '<Root>/EPB_SysSrvAdpVDA_Input_Runnable_Init_sys'
   */
  /* Gain: '<S3>/Gain' incorporates:
   *  Constant: '<S3>/Constant9'
   */
  for (i = 0; i < 40; i++) {
    tmp[i] = 5U;
  }

  /* Outport: '<Root>/EPB_stPbcInFaultRecoveryRequest_Val' incorporates:
   *  Gain: '<S3>/Gain'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_Init_EPB_stPbcInFaultRecoveryRequest_Val
    (tmp);

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant1'
   *  Inport: '<Root>/gNVM_bPbcinDataStorageValid1_Val'
   */
  if (Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_Init_gNVM_bPbcinDataStorageValid1_Val
      ()) {
    tmp_0 = 5U;
  } else {
    tmp_0 = 27U;
  }

  /* Outport: '<Root>/EPB_stPbcInDataStorageValid1_Val' incorporates:
   *  Switch: '<S3>/Switch'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_Init_EPB_stPbcInDataStorageValid1_Val
    (tmp_0);

  /* Switch: '<S3>/Switch1' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Constant: '<S3>/Constant3'
   *  Inport: '<Root>/gNVM_bPbcinDataStorageValid2_Val'
   */
  if (Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_Init_gNVM_bPbcinDataStorageValid2_Val
      ()) {
    tmp_0 = 5U;
  } else {
    tmp_0 = 27U;
  }

  /* Outport: '<Root>/EPB_stPbcInDataStorageValid2_Val' incorporates:
   *  Switch: '<S3>/Switch1'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_Init_EPB_stPbcInDataStorageValid2_Val
    (tmp_0);

  /* Switch: '<S3>/Switch2' incorporates:
   *  Constant: '<S3>/Constant4'
   *  Constant: '<S3>/Constant5'
   *  Inport: '<Root>/gNVM_bPbcinDataStorageValid3_Val'
   */
  if (Rte_IRead_EPB_SysSrvAdpVDA_Input_Runnable_Init_gNVM_bPbcinDataStorageValid3_Val
      ()) {
    tmp_0 = 5U;
  } else {
    tmp_0 = 27U;
  }

  /* Outport: '<Root>/EPB_stPbcInDataStorageValid3_Val' incorporates:
   *  Switch: '<S3>/Switch2'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_Init_EPB_stPbcInDataStorageValid3_Val
    (tmp_0);

  /* SignalConversion: '<S3>/Signal Conversion' */
  for (i = 0; i < 8; i++) {
    tmpIRead_2[i] = tmpIRead[i];
    tmpIRead_2[i + 8] = tmpIRead_0[i];
  }

  memcpy(&tmpIRead_2[16], &tmpIRead_1[0], 240U * sizeof(uint8));

  /* Outport: '<Root>/EPB_PbcInDataStorageRead_Val' incorporates:
   *  SignalConversion: '<S3>/Signal Conversion'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_Init_EPB_PbcInDataStorageRead_Val
    (tmpIRead_2);

  /* Outport: '<Root>/EPB_stPbcInDiagOperationMod_Val' incorporates:
   *  Constant: '<S3>/Constant6'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_Init_EPB_stPbcInDiagOperationMod_Val
    (5U);

  /* Outport: '<Root>/EPB_stPbcInDiagRequest_Val' incorporates:
   *  Constant: '<S3>/Constant7'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_Init_EPB_stPbcInDiagRequest_Val(5U);

  /* Outport: '<Root>/EPB_stPbcInUnexpectedPowerdown_Val' incorporates:
   *  Constant: '<S3>/Constant8'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Input_Runnable_Init_EPB_stPbcInUnexpectedPowerdown_Val
    (5U);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpVDA_Input_Runnable_Init' */
}

/* Output function */
FUNC(void, EPB_SysSrvAdpVDA_CODE) EPB_SysSrvAdpVDA_Output_Runnable_Init(void)
{
  const uint8 *tmpIRead;

  /* Inport: '<Root>/EPB_PbcOutDataStorageWrite_Val' */
  tmpIRead =
    Rte_IRead_EPB_SysSrvAdpVDA_Output_Runnable_Init_EPB_PbcOutDataStorageWrite_Val
    ();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpVDA_Output_Runnable_Init' incorporates:
   *  SubSystem: '<Root>/EPB_SysSrvAdpVDA_Output_Runnable_Init_sys'
   */
  /* Outport: '<Root>/gEPB_u16PbcoutDiagRequestAcknowledge_Val' incorporates:
   *  Constant: '<S5>/Constant4'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_Init_gEPB_u16PbcoutDiagRequestAcknowledge_Val
    (5U);

  /* Outport: '<Root>/gEPB_u8Pbcout_DiagRequestStatus_Val' incorporates:
   *  Constant: '<S5>/Constant3'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_Init_gEPB_u8Pbcout_DiagRequestStatus_Val
    (5U);

  /* Outport: '<Root>/gEPB_u8PbcoutDataStorageArea1WrtCnt_Val' incorporates:
   *  Constant: '<S5>/Constant'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_Init_gEPB_u8PbcoutDataStorageArea1WrtCnt_Val
    (0U);

  /* Outport: '<Root>/gEPB_u8PbcoutDataStorageArea2WrtCnt_Val' incorporates:
   *  Constant: '<S5>/Constant1'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_Init_gEPB_u8PbcoutDataStorageArea2WrtCnt_Val
    (0U);

  /* Outport: '<Root>/gEPB_u8PbcoutDataStorageArea3WrtCnt_Val' incorporates:
   *  Constant: '<S5>/Constant2'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_Init_gEPB_u8PbcoutDataStorageArea3WrtCnt_Val
    (0U);

  /* Outport: '<Root>/gEPB_u8PbcoutDataStorageWriteArea1_a_Val' incorporates:
   *  SignalConversion: '<S5>/Signal Conversion1'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_Init_gEPB_u8PbcoutDataStorageWriteArea1_a_Val
    (*(uint8 (*)[8])&tmpIRead[0]);

  /* Outport: '<Root>/gEPB_u8PbcoutDataStorageWriteArea2_a_Val' incorporates:
   *  SignalConversion: '<S5>/Signal Conversion2'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_Init_gEPB_u8PbcoutDataStorageWriteArea2_a_Val
    (*(uint8 (*)[8])&tmpIRead[8]);

  /* Outport: '<Root>/gEPB_u8PbcoutDataStorageWriteArea3_a_Val' incorporates:
   *  SignalConversion: '<S5>/Signal Conversion3'
   */
  Rte_IWrite_EPB_SysSrvAdpVDA_Output_Runnable_Init_gEPB_u8PbcoutDataStorageWriteArea3_a_Val
    (*(uint8 (*)[240])&tmpIRead[16]);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPB_SysSrvAdpVDA_Output_Runnable_Init' */
}

/* Model initialize function */
FUNC(void, EPB_SysSrvAdpVDA_CODE) EPB_SysSrvAdpVDA_Init(void)
{
  
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
