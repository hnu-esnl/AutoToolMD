/*
 * File: Lock_ComCnvRx.c
 *
 * Code generated for Simulink model 'Lock_ComCnvRx'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Sep 28 20:00:11 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Lock_ComCnvRx.h"
#include "Lock_ComCnvRx_private.h"

/* Model step function for TID1 */
FUNC(void, Lock_ComCnvRx_CODE) Lock_ComCnvRx_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
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
  uint16 tmpRead_a;
  uint8 tmpRead_b;
  uint8 tmpRead_c;
  uint8 tmpRead_d;
  uint8 tmpRead_e;
  uint8 tmpRead_f;
  uint8 tmpRead_g;

  /* Inport: '<Root>/ComRx_u8VCU_CrntGearLvl_A09_Val' */
  Rte_Read_ComRx_u8VCU_CrntGearLvl_A09_Val(&tmpRead_g);

  /* Inport: '<Root>/ComRx_u8VCU_CrntGearLvl_A02_Val' */
  Rte_Read_ComRx_u8VCU_CrntGearLvl_A02_Val(&tmpRead_f);

  /* Inport: '<Root>/ComRx_u8SRS_CrashOutputSt_Val' */
  Rte_Read_ComRx_u8SRS_CrashOutputSt_Val(&tmpRead_e);

  /* Inport: '<Root>/ComRx_u8LCK_PowerDoorCommandActionType_Val' */
  Rte_Read_ComRx_u8LCK_PowerDoorCommandActionType_Val(&tmpRead_d);

  /* Inport: '<Root>/ComRx_u8LCK_LockCommandActionType_Val' */
  Rte_Read_ComRx_u8LCK_LockCommandActionType_Val(&tmpRead_c);

  /* Inport: '<Root>/ComRx_u8LCK_FillerCapCommandActionType_Val' */
  Rte_Read_ComRx_u8LCK_FillerCapCommandActionType_Val(&tmpRead_b);

  /* Inport: '<Root>/ComRx_u16BCS_VehSpd_Val' */
  Rte_Read_ComRx_u16BCS_VehSpd_Val(&tmpRead_a);

  /* Inport: '<Root>/ComRx_bLCK_TrunkLock_Val' */
  Rte_Read_ComRx_bLCK_TrunkLock_Val(&tmpRead_9);

  /* Inport: '<Root>/ComRx_bLCK_RearRightPowerDoor_Val' */
  Rte_Read_ComRx_bLCK_RearRightPowerDoor_Val(&tmpRead_8);

  /* Inport: '<Root>/ComRx_bLCK_RearRightDoorLock_Val' */
  Rte_Read_ComRx_bLCK_RearRightDoorLock_Val(&tmpRead_7);

  /* Inport: '<Root>/ComRx_bLCK_RearRightChildSaftyLock_Val' */
  Rte_Read_ComRx_bLCK_RearRightChildSaftyLock_Val(&tmpRead_6);

  /* Inport: '<Root>/ComRx_bLCK_RearLeftPowerDoor_Val' */
  Rte_Read_ComRx_bLCK_RearLeftPowerDoor_Val(&tmpRead_5);

  /* Inport: '<Root>/ComRx_bLCK_RearLeftDoorLock_Val' */
  Rte_Read_ComRx_bLCK_RearLeftDoorLock_Val(&tmpRead_4);

  /* Inport: '<Root>/ComRx_bLCK_RearLeftChildSaftyLock_Val' */
  Rte_Read_ComRx_bLCK_RearLeftChildSaftyLock_Val(&tmpRead_3);

  /* Inport: '<Root>/ComRx_bLCK_PowerFillerCap_Val' */
  Rte_Read_ComRx_bLCK_PowerFillerCap_Val(&tmpRead_2);

  /* Inport: '<Root>/ComRx_bLCK_FillerCapLock_Block_Val' */
  Rte_Read_ComRx_bLCK_FillerCapLock_Block_Val(&tmpRead_1);

  /* Inport: '<Root>/ComRx_bLCK_FillerCapLock_Alock_Val' */
  Rte_Read_ComRx_bLCK_FillerCapLock_Alock_Val(&tmpRead_0);

  /* Inport: '<Root>/ComRx_bBCS_VehSpdVD_Val' */
  Rte_Read_ComRx_bBCS_VehSpdVD_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_ComCnvRx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/Lock_ComCnvRx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/gCAN_bBCS_VehSpdVD_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal CopyInport1'
   */
  (void) Rte_Write_gCAN_bBCS_VehSpdVD_Val(tmpRead);

  /* Outport: '<Root>/gCAN_bLCK_FillerCapLock_Alock_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy1Inport1'
   */
  (void) Rte_Write_gCAN_bLCK_FillerCapLock_Alock_Val(tmpRead_0);

  /* Outport: '<Root>/gCAN_bLCK_FillerCapLock_Block_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy2Inport1'
   */
  (void) Rte_Write_gCAN_bLCK_FillerCapLock_Block_Val(tmpRead_1);

  /* Outport: '<Root>/gCAN_bLCK_PowerFillerCap_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy3Inport1'
   */
  (void) Rte_Write_gCAN_bLCK_PowerFillerCap_Val(tmpRead_2);

  /* Outport: '<Root>/gCAN_bLCK_RearLeftChildSaftyLock_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy4Inport1'
   */
  (void) Rte_Write_gCAN_bLCK_RearLeftChildSaftyLock_Val(tmpRead_3);

  /* Outport: '<Root>/gCAN_bLCK_RearLeftDoorLock_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy5Inport1'
   */
  (void) Rte_Write_gCAN_bLCK_RearLeftDoorLock_Val(tmpRead_4);

  /* Outport: '<Root>/gCAN_bLCK_RearLeftPowerDoor_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy6Inport1'
   */
  (void) Rte_Write_gCAN_bLCK_RearLeftPowerDoor_Val(tmpRead_5);

  /* Outport: '<Root>/gCAN_bLCK_RearRightChildSaftyLock_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy7Inport1'
   */
  (void) Rte_Write_gCAN_bLCK_RearRightChildSaftyLock_Val(tmpRead_6);

  /* Outport: '<Root>/gCAN_bLCK_RearRightDoorLock_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy8Inport1'
   */
  (void) Rte_Write_gCAN_bLCK_RearRightDoorLock_Val(tmpRead_7);

  /* Outport: '<Root>/gCAN_bLCK_RearRightPowerDoor_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy9Inport1'
   */
  (void) Rte_Write_gCAN_bLCK_RearRightPowerDoor_Val(tmpRead_8);

  /* Outport: '<Root>/gCAN_bLCK_TrunkLock_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy10Inport1'
   */
  (void) Rte_Write_gCAN_bLCK_TrunkLock_Val(tmpRead_9);

  /* Outport: '<Root>/gCAN_u16BCS_VehSpd_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy11Inport1'
   */
  (void) Rte_Write_gCAN_u16BCS_VehSpd_Val(tmpRead_a);

  /* Outport: '<Root>/gCAN_u8LCK_FillerCapCommandActionType_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy12Inport1'
   */
  (void) Rte_Write_gCAN_u8LCK_FillerCapCommandActionType_Val(tmpRead_b);

  /* Outport: '<Root>/gCAN_u8LCK_LockCommandActionType_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy13Inport1'
   */
  (void) Rte_Write_gCAN_u8LCK_LockCommandActionType_Val(tmpRead_c);

  /* Outport: '<Root>/gCAN_u8LCK_PowerDoorCommandActionType_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy14Inport1'
   */
  (void) Rte_Write_gCAN_u8LCK_PowerDoorCommandActionType_Val(tmpRead_d);

  /* Outport: '<Root>/gCAN_u8SRS_CrashOutputSt_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy15Inport1'
   */
  (void) Rte_Write_gCAN_u8SRS_CrashOutputSt_Val(tmpRead_e);

  /* Outport: '<Root>/gCAN_u8VCU_CrntGearLvl_A02_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy16Inport1'
   */
  (void) Rte_Write_gCAN_u8VCU_CrntGearLvl_A02_Val(tmpRead_f);

  /* Outport: '<Root>/gCAN_u8VCU_CrntGearLvl_A09_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtSignal Copy17Inport1'
   */
  (void) Rte_Write_gCAN_u8VCU_CrntGearLvl_A09_Val(tmpRead_g);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_ComCnvRx_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, Lock_ComCnvRx_CODE) Lock_ComCnvRx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
