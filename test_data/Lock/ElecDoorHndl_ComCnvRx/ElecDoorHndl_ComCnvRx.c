/*
 * File: ElecDoorHndl_ComCnvRx.c
 *
 * Code generated for Simulink model 'ElecDoorHndl_ComCnvRx'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Sep 24 10:13:24 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ElecDoorHndl_ComCnvRx.h"
#include "ElecDoorHndl_ComCnvRx_private.h"

/* Model step function for TID1 */
FUNC(void, ElecDoorHndl_ComCnvRx_CODE) ElecDoorHndl_ComCnvRx_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  boolean tmpRead;
  boolean tmpRead_0;
  uint8 tmpRead_1;

  /* Inport: '<Root>/ComRx_u8LCK_DoorHandleCommandActionType_Val' */
  Rte_Read_ComRx_u8LCK_DoorHandleCommandActionType_Val(&tmpRead_1);

  /* Inport: '<Root>/ComRx_bLCK_RearRightDoorHandle_Val' */
  Rte_Read_ComRx_bLCK_RearRightDoorHandle_Val(&tmpRead_0);

  /* Inport: '<Root>/ComRx_bLCK_RearLeftDoorHandle_Val' */
  Rte_Read_ComRx_bLCK_RearLeftDoorHandle_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_ComCnvRx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ElecDoorHndl_ComCnvRx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/gCAN_bLCK_RearLeftDoorHandle_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_bLCK_RearLeftDoorHandle_Val_readOutport1'
   */
  (void) Rte_Write_gCAN_bLCK_RearLeftDoorHandle_Val(tmpRead);

  /* Outport: '<Root>/gCAN_bLCK_RearRightDoorHandle_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_bLCK_RearRightDoorHandle_Val_readOutport1'
   */
  (void) Rte_Write_gCAN_bLCK_RearRightDoorHandle_Val(tmpRead_0);

  /* Outport: '<Root>/gCAN_u8LCK_DoorHandleCommandActionType_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_u8LCK_DoorHandleCommandActionType_Val_readOutport1'
   */
  (void) Rte_Write_gCAN_u8LCK_DoorHandleCommandActionType_Val(tmpRead_1);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_ComCnvRx_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, ElecDoorHndl_ComCnvRx_CODE) ElecDoorHndl_ComCnvRx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
