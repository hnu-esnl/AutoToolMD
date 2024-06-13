/*
 * File: HVAC_10ms.c
 *
 * Code generated for Simulink model 'HVAC_10ms'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Jul 29 14:19:37 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HVAC_10ms.h"
#include "HVAC_10ms_private.h"

/* Block states (default storage) */
VAR(DW_HVAC_10ms_T, HVAC_10ms_VAR) HVAC_10ms_DW;

/* Model step function for TID1 */
FUNC(void, HVAC_10ms_CODE) HVAC_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  boolean tmpRead;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HVAC_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HVAC_Runnable_10ms_sys'
   */
  /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
   *  Inport: '<Root>/gCAN_u8UMM_UsageModeSt_Val'
   */
  Rte_Read_gCAN_u8UMM_UsageModeSt_Val(&HVAC_10ms_DW.gCAN_u8UMM_UsageModeSt);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HVAC_Runnable_10ms_at_outport_1' */

  /* Inport: '<Root>/gCAN_bHVAC_RearDefrostSt_Val' */
  Rte_Read_gCAN_bHVAC_RearDefrostSt_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HVAC_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HVAC_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/gHVAC_u8RearDefrostOutput_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtgCAN_bHVAC_RearDefrostSt_Val_readOutport1'
   */
  (void) Rte_Write_gHVAC_u8RearDefrostOutput_Val(tmpRead);

  /* Outport: '<Root>/gHVAC_bLeftOuterMirrorHeatOutput_Val' incorporates:
   *  SignalConversion: '<S1>/OutportBufferForgHVAC_bLeftOuterMirrorHeatOutput_Val_write'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtgCAN_bHVAC_RearDefrostSt_Val_readOutport1'
   */
  (void) Rte_Write_gHVAC_bLeftOuterMirrorHeatOutput_Val(tmpRead);

  /* Outport: '<Root>/gHVAC_bRearDefrostActSt_Val' incorporates:
   *  SignalConversion: '<S1>/OutportBufferForgHVAC_bRearDefrostActSt_Val_write'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtgCAN_bHVAC_RearDefrostSt_Val_readOutport1'
   */
  (void) Rte_Write_gHVAC_bRearDefrostActSt_Val(tmpRead);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HVAC_Runnable_10ms_at_outport_1' */

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HVAC_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HVAC_Runnable_10ms_sys'
   */

  /* Outport: '<Root>/gHVAC_bLeftExtMirrorHeatActSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtgCAN_bHVAC_RearDefrostSt_Val_readOutport1'
   */
  (void) Rte_Write_gHVAC_bLeftExtMirrorHeatActSt_Val(tmpRead);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HVAC_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, HVAC_10ms_CODE) HVAC_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
