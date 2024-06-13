/*
 * File: ElecDoorHndl_ComCnvTx.c
 *
 * Code generated for Simulink model 'ElecDoorHndl_ComCnvTx'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Sep 24 10:15:17 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ElecDoorHndl_ComCnvTx.h"
#include "ElecDoorHndl_ComCnvTx_private.h"

/* Model step function for TID1 */
FUNC(void, ElecDoorHndl_ComCnvTx_CODE) ElecDoorHndl_ComCnvTx_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;

  /* Inport: '<Root>/gEDH_u8LCK_RearRightDoorHandlePosition_Val' */
  Rte_Read_gEDH_u8LCK_RearRightDoorHandlePosition_Val(&tmpRead_2);

  /* Inport: '<Root>/gEDH_u8LCK_RearRightDoorHandleAction_Val' */
  Rte_Read_gEDH_u8LCK_RearRightDoorHandleAction_Val(&tmpRead_1);

  /* Inport: '<Root>/gEDH_u8LCK_RearLeftDoorHandlePosition_Val' */
  Rte_Read_gEDH_u8LCK_RearLeftDoorHandlePosition_Val(&tmpRead_0);

  /* Inport: '<Root>/gEDH_u8LCK_RearLeftDoorHandleAction_Val' */
  Rte_Read_gEDH_u8LCK_RearLeftDoorHandleAction_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ElecDoorHndl_ComCnvTx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/ComTx_u8LCK_RearLeftDoorHandleAction_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtgEDH_u8LCK_RearLeftDoorHandleAction_Val_readOutport1'
   */
  (void) Rte_Write_ComTx_u8LCK_RearLeftDoorHandleAction_Val(tmpRead);

  /* Outport: '<Root>/ComTx_u8LCK_RearLeftDoorHandlePosition_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtgEDH_u8LCK_RearLeftDoorHandlePosition_Val_readOutport1'
   */
  (void) Rte_Write_ComTx_u8LCK_RearLeftDoorHandlePosition_Val(tmpRead_0);

  /* Outport: '<Root>/ComTx_u8LCK_RearRightDoorHandleAction_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtgEDH_u8LCK_RearRightDoorHandleAction_Val_readOutport1'
   */
  (void) Rte_Write_ComTx_u8LCK_RearRightDoorHandleAction_Val(tmpRead_1);

  /* Outport: '<Root>/ComTx_u8LCK_RearRightDoorHandlePosition_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtgEDH_u8LCK_RearRightDoorHandlePosition_Val_readOutport1'
   */
  (void) Rte_Write_ComTx_u8LCK_RearRightDoorHandlePosition_Val(tmpRead_2);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_ComCnvTx_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, ElecDoorHndl_ComCnvTx_CODE) ElecDoorHndl_ComCnvTx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
