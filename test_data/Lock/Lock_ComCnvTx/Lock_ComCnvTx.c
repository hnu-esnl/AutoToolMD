/*
 * File: Lock_ComCnvTx.c
 *
 * Code generated for Simulink model 'Lock_ComCnvTx'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Sep 28 20:04:04 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Lock_ComCnvTx.h"
#include "Lock_ComCnvTx_private.h"

/* Model step function for TID1 */
FUNC(void, Lock_ComCnvTx_CODE) Lock_ComCnvTx_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  boolean tmpRead;
  boolean tmpRead_0;
  boolean tmpRead_1;
  boolean tmpRead_2;
  boolean tmpRead_3;
  boolean tmpRead_4;
  boolean tmpRead_5;
  boolean tmpRead_6;
  boolean tmpRead_7;
  boolean tmpRead_8;
  boolean tmpRead_9;
  boolean tmpRead_a;
  uint8 tmpRead_b;
  uint8 tmpRead_c;
  uint8 tmpRead_d;
  uint8 tmpRead_e;
  uint8 tmpRead_f;
  uint8 tmpRead_g;
  uint8 tmpRead_h;
  uint8 tmpRead_i;
  uint8 tmpRead_j;
  uint8 tmpRead_k;
  uint8 tmpRead_l;
  boolean tmpRead_m;
  boolean tmpRead_n;
  boolean tmpRead_o;
  boolean tmpRead_p;
  boolean tmpRead_q;
  boolean tmpRead_r;

  /* Inport: '<Root>/gLock_bUINM_RearRightPowerReleaseFaultSt_Val' */
  Rte_Read_gLock_bUINM_RearRightPowerReleaseFaultSt_Val(&tmpRead_r);

  /* Inport: '<Root>/gLock_bUINM_RearLeftPowerReleaseFaultSt_Val' */
  Rte_Read_gLock_bUINM_RearLeftPowerReleaseFaultSt_Val(&tmpRead_q);

  /* Inport: '<Root>/gLock_bLCK_RearRightPowerReleaseFailedRemind_Val' */
  Rte_Read_gLock_bLCK_RearRightPowerReleaseFailedRemind_Val(&tmpRead_p);

  /* Inport: '<Root>/gLock_bLCK_RearLeftPowerReleaseFailedRemind_Val' */
  Rte_Read_gLock_bLCK_RearLeftPowerReleaseFailedRemind_Val(&tmpRead_o);

  /* Inport: '<Root>/gLock_bLCK_FillerCapBSt_Val' */
  Rte_Read_gLock_bLCK_FillerCapBSt_Val(&tmpRead_n);

  /* Inport: '<Root>/gLock_bLCK_FillerCapASt_Val' */
  Rte_Read_gLock_bLCK_FillerCapASt_Val(&tmpRead_m);

  /* Inport: '<Root>/gLOC_u8LCK_TrunkLockAction_Val' */
  Rte_Read_gLOC_u8LCK_TrunkLockAction_Val(&tmpRead_l);

  /* Inport: '<Root>/gLOC_u8LCK_RearRightPowerDoorAction_Val' */
  Rte_Read_gLOC_u8LCK_RearRightPowerDoorAction_Val(&tmpRead_k);

  /* Inport: '<Root>/gLOC_u8LCK_RearRightDoorLockAction_Val' */
  Rte_Read_gLOC_u8LCK_RearRightDoorLockAction_Val(&tmpRead_j);

  /* Inport: '<Root>/gLOC_u8LCK_RearRightChildSaftyLockAction_Val' */
  Rte_Read_gLOC_u8LCK_RearRightChildSaftyLockAction_Val(&tmpRead_i);

  /* Inport: '<Root>/gLOC_u8LCK_RearLeftPowerDoorAction_Val' */
  Rte_Read_gLOC_u8LCK_RearLeftPowerDoorAction_Val(&tmpRead_h);

  /* Inport: '<Root>/gLOC_u8LCK_RearLeftDoorLockAction_Val' */
  Rte_Read_gLOC_u8LCK_RearLeftDoorLockAction_Val(&tmpRead_g);

  /* Inport: '<Root>/gLOC_u8LCK_RearLeftChildSaftyLockAction_Val' */
  Rte_Read_gLOC_u8LCK_RearLeftChildSaftyLockAction_Val(&tmpRead_f);

  /* Inport: '<Root>/gLOC_u8LCK_FillerCapLock_BAction_Val' */
  Rte_Read_gLOC_u8LCK_FillerCapLock_BAction_Val(&tmpRead_e);

  /* Inport: '<Root>/gLOC_u8LCK_FillerCapLock_AAction_Val' */
  Rte_Read_gLOC_u8LCK_FillerCapLock_AAction_Val(&tmpRead_d);

  /* Inport: '<Root>/gLOC_u8LCK_FillerCapAngle_Val' */
  Rte_Read_gLOC_u8LCK_FillerCapAngle_Val(&tmpRead_c);

  /* Inport: '<Root>/gLOC_u8LCK_FillerCapAction_Val' */
  Rte_Read_gLOC_u8LCK_FillerCapAction_Val(&tmpRead_b);

  /* Inport: '<Root>/gLOC_bUINM_RearRightPowerReleaseReq_Val' */
  Rte_Read_gLOC_bUINM_RearRightPowerReleaseReq_Val(&tmpRead_a);

  /* Inport: '<Root>/gLOC_bUINM_RearLeftPowerReleaseReq_Val' */
  Rte_Read_gLOC_bUINM_RearLeftPowerReleaseReq_Val(&tmpRead_9);

  /* Inport: '<Root>/gLOC_bLCK_TrunkAjarSt_Val' */
  Rte_Read_gLOC_bLCK_TrunkAjarSt_Val(&tmpRead_8);

  /* Inport: '<Root>/gLOC_bLCK_RearRightDoorOpenSt_Val' */
  Rte_Read_gLOC_bLCK_RearRightDoorOpenSt_Val(&tmpRead_7);

  /* Inport: '<Root>/gLOC_bLCK_RearRightDoorLockSt_Val' */
  Rte_Read_gLOC_bLCK_RearRightDoorLockSt_Val(&tmpRead_6);

  /* Inport: '<Root>/gLOC_bLCK_RearRightDoorAjarSt_Val' */
  Rte_Read_gLOC_bLCK_RearRightDoorAjarSt_Val(&tmpRead_5);

  /* Inport: '<Root>/gLOC_bLCK_RearRightChildSaftyLockSt_Val' */
  Rte_Read_gLOC_bLCK_RearRightChildSaftyLockSt_Val(&tmpRead_4);

  /* Inport: '<Root>/gLOC_bLCK_RearLeftDoorOpenSt_Val' */
  Rte_Read_gLOC_bLCK_RearLeftDoorOpenSt_Val(&tmpRead_3);

  /* Inport: '<Root>/gLOC_bLCK_RearLeftDoorLockSt_Val' */
  Rte_Read_gLOC_bLCK_RearLeftDoorLockSt_Val(&tmpRead_2);

  /* Inport: '<Root>/gLOC_bLCK_RearLeftDoorAjarSt_Val' */
  Rte_Read_gLOC_bLCK_RearLeftDoorAjarSt_Val(&tmpRead_1);

  /* Inport: '<Root>/gLOC_bLCK_RearLeftChildSaftyLockSt_Val' */
  Rte_Read_gLOC_bLCK_RearLeftChildSaftyLockSt_Val(&tmpRead_0);

  /* Inport: '<Root>/gLOC_bLCK_ExterSwOpenFillerCapReq_Val' */
  Rte_Read_gLOC_bLCK_ExterSwOpenFillerCapReq_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/Lock_ComCnvTx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/ComTx_bLCK_ExterSwOpenFillerCapReq_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal CopyInport1'
   */
  (void) Rte_Write_ComTx_bLCK_ExterSwOpenFillerCapReq_Val(tmpRead);

  /* Outport: '<Root>/ComTx_bLCK_FillerCapASt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy23Inport1'
   */
  (void) Rte_Write_ComTx_bLCK_FillerCapASt_Val(tmpRead_m);

  /* Outport: '<Root>/ComTx_bLCK_FillerCapBSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy24Inport1'
   */
  (void) Rte_Write_ComTx_bLCK_FillerCapBSt_Val(tmpRead_n);

  /* Outport: '<Root>/ComTx_bLCK_RearLeftChildSaftyLockSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy1Inport1'
   */
  (void) Rte_Write_ComTx_bLCK_RearLeftChildSaftyLockSt_Val(tmpRead_0);

  /* Outport: '<Root>/ComTx_bLCK_RearLeftDoorAjarSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy2Inport1'
   */
  (void) Rte_Write_ComTx_bLCK_RearLeftDoorAjarSt_Val(tmpRead_1);

  /* Outport: '<Root>/ComTx_bLCK_RearLeftDoorLockSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy3Inport1'
   */
  (void) Rte_Write_ComTx_bLCK_RearLeftDoorLockSt_Val(tmpRead_2);

  /* Outport: '<Root>/ComTx_bLCK_RearLeftDoorOpenSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy4Inport1'
   */
  (void) Rte_Write_ComTx_bLCK_RearLeftDoorOpenSt_Val(tmpRead_3);

  /* Outport: '<Root>/ComTx_bLCK_RearLeftPowerReleaseFailedRemind_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy25Inport1'
   */
  (void) Rte_Write_ComTx_bLCK_RearLeftPowerReleaseFailedRemind_Val(tmpRead_o);

  /* Outport: '<Root>/ComTx_bLCK_RearRightChildSaftyLockSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy5Inport1'
   */
  (void) Rte_Write_ComTx_bLCK_RearRightChildSaftyLockSt_Val(tmpRead_4);

  /* Outport: '<Root>/ComTx_bLCK_RearRightDoorAjarSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy6Inport1'
   */
  (void) Rte_Write_ComTx_bLCK_RearRightDoorAjarSt_Val(tmpRead_5);

  /* Outport: '<Root>/ComTx_bLCK_RearRightDoorLockSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy7Inport1'
   */
  (void) Rte_Write_ComTx_bLCK_RearRightDoorLockSt_Val(tmpRead_6);

  /* Outport: '<Root>/ComTx_bLCK_RearRightDoorOpenSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy8Inport1'
   */
  (void) Rte_Write_ComTx_bLCK_RearRightDoorOpenSt_Val(tmpRead_7);

  /* Outport: '<Root>/ComTx_bLCK_RearRightPowerReleaseFailedRemind_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy26Inport1'
   */
  (void) Rte_Write_ComTx_bLCK_RearRightPowerReleaseFailedRemind_Val(tmpRead_p);

  /* Outport: '<Root>/ComTx_bLCK_TrunkAjarSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy9Inport1'
   */
  (void) Rte_Write_ComTx_bLCK_TrunkAjarSt_Val(tmpRead_8);

  /* Outport: '<Root>/ComTx_bUINM_RearLeftPowerReleaseFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy27Inport1'
   */
  (void) Rte_Write_ComTx_bUINM_RearLeftPowerReleaseFaultSt_Val(tmpRead_q);

  /* Outport: '<Root>/ComTx_bUINM_RearLeftPowerReleaseReq_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy10Inport1'
   */
  (void) Rte_Write_ComTx_bUINM_RearLeftPowerReleaseReq_Val(tmpRead_9);

  /* Outport: '<Root>/ComTx_bUINM_RearRightPowerReleaseFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy28Inport1'
   */
  (void) Rte_Write_ComTx_bUINM_RearRightPowerReleaseFaultSt_Val(tmpRead_r);

  /* Outport: '<Root>/ComTx_bUINM_RearRightPowerReleaseReq_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy11Inport1'
   */
  (void) Rte_Write_ComTx_bUINM_RearRightPowerReleaseReq_Val(tmpRead_a);

  /* Outport: '<Root>/ComTx_u8LCK_FillerCapAction_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy12Inport1'
   */
  (void) Rte_Write_ComTx_u8LCK_FillerCapAction_Val(tmpRead_b);

  /* Outport: '<Root>/ComTx_u8LCK_PowerFillerCapAngle_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy13Inport1'
   */
  (void) Rte_Write_ComTx_u8LCK_PowerFillerCapAngle_Val(tmpRead_c);

  /* Outport: '<Root>/ComTx_u8LCK_FillerCapLock_AAction_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy14Inport1'
   */
  (void) Rte_Write_ComTx_u8LCK_FillerCapLock_AAction_Val(tmpRead_d);

  /* Outport: '<Root>/ComTx_u8LCK_FillerCapLock_BAction_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy15Inport1'
   */
  (void) Rte_Write_ComTx_u8LCK_FillerCapLock_BAction_Val(tmpRead_e);

  /* Outport: '<Root>/ComTx_u8LCK_RearLeftChildSaftyLockAction_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy16Inport1'
   */
  (void) Rte_Write_ComTx_u8LCK_RearLeftChildSaftyLockAction_Val(tmpRead_f);

  /* Outport: '<Root>/ComTx_u8LCK_RearLeftDoorLockAction_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy17Inport1'
   */
  (void) Rte_Write_ComTx_u8LCK_RearLeftDoorLockAction_Val(tmpRead_g);

  /* Outport: '<Root>/ComTx_u8LCK_RearLeftPowerDoorAction_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy18Inport1'
   */
  (void) Rte_Write_ComTx_u8LCK_RearLeftPowerDoorAction_Val(tmpRead_h);

  /* Outport: '<Root>/ComTx_u8LCK_RearRightChildSaftyLockAction_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy19Inport1'
   */
  (void) Rte_Write_ComTx_u8LCK_RearRightChildSaftyLockAction_Val(tmpRead_i);

  /* Outport: '<Root>/ComTx_u8LCK_RearRightDoorLockAction_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy20Inport1'
   */
  (void) Rte_Write_ComTx_u8LCK_RearRightDoorLockAction_Val(tmpRead_j);

  /* Outport: '<Root>/ComTx_u8LCK_RearRightPowerDoorAction_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy21Inport1'
   */
  (void) Rte_Write_ComTx_u8LCK_RearRightPowerDoorAction_Val(tmpRead_k);

  /* Outport: '<Root>/ComTx_u8LCK_TrunkLockAction_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy22Inport1'
   */
  (void) Rte_Write_ComTx_u8LCK_TrunkLockAction_Val(tmpRead_l);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_ComCnvTx_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, Lock_ComCnvTx_CODE) Lock_ComCnvTx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
