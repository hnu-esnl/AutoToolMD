/*
 * File: Win_ComCnvRx.c
 *
 * Code generated for Simulink model 'Win_ComCnvRx'.
 *
 * Model version                  : 1.216
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Oct  6 15:53:23 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Win_ComCnvRx.h"

/* Model step function */
void Win_ComCnvRx_Runnable_10ms(void)
{
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  uint8 tmpRead_3;
  uint8 tmpRead_4;
  uint8 tmpRead_5;
  uint8 tmpRead_6;
  uint8 tmpRead_7;
  uint8 tmpRead_8;
  uint8 tmpRead_9;
  uint8 tmpRead_a;
  uint8 tmpRead_b;
  boolean tmpRead_c;
  boolean tmpRead_d;
  boolean tmpRead_e;
  boolean tmpRead_f;

  /* Inport: '<Root>/ComRx_bPWL_RRWinRelearnReq' */
  Rte_Read_ComRx_bPWL_RRWinRelearnReq_Val(&tmpRead_f);

  /* Inport: '<Root>/ComRx_bPWL_RLWinRelearnReq' */
  Rte_Read_ComRx_bPWL_RLWinRelearnReq_Val(&tmpRead_e);

  /* Inport: '<Root>/ComRx_bPWL_FRWinRelearnReq' */
  Rte_Read_ComRx_bPWL_FRWinRelearnReq_Val(&tmpRead_d);

  /* Inport: '<Root>/ComRx_bPWL_FLWinRelearnReq' */
  Rte_Read_ComRx_bPWL_FLWinRelearnReq_Val(&tmpRead_c);

  /* Inport: '<Root>/ComRx_u8POD_RRWinShortDropCmd' */
  Rte_Read_ComRx_u8POD_RRWinShortDropCmd_Val(&tmpRead_b);

  /* Inport: '<Root>/ComRx_u8POD_RLWinShortDropCmd' */
  Rte_Read_ComRx_u8POD_RLWinShortDropCmd_Val(&tmpRead_a);

  /* Inport: '<Root>/ComRx_u8POD_FRWinShortDropCmd' */
  Rte_Read_ComRx_u8POD_FRWinShortDropCmd_Val(&tmpRead_9);

  /* Inport: '<Root>/ComRx_u8POD_FLWinShortDropCmd' */
  Rte_Read_ComRx_u8POD_FLWinShortDropCmd_Val(&tmpRead_8);

  /* Inport: '<Root>/ComRx_u8UMM_UsageModeSt' */
  Rte_Read_ComRx_u8UMM_UsageModeSt_Val(&tmpRead_7);

  /* Inport: '<Root>/ComRx_u8PWL_RRWinMotorOpeCtr' */
  Rte_Read_ComRx_u8PWL_RRWinMotorOpeCtr_Val(&tmpRead_6);

  /* Inport: '<Root>/ComRx_u8PWL_RLWinMotorOpeCtr' */
  Rte_Read_ComRx_u8PWL_RLWinMotorOpeCtr_Val(&tmpRead_5);

  /* Inport: '<Root>/ComRx_u8PWL_FRWinMotorOpeCtr' */
  Rte_Read_ComRx_u8PWL_FRWinMotorOpeCtr_Val(&tmpRead_4);

  /* Inport: '<Root>/ComRx_u8PWL_FLWinMotorOpeCtr' */
  Rte_Read_ComRx_u8PWL_FLWinMotorOpeCtr_Val(&tmpRead_3);

  /* Inport: '<Root>/ComRx_u8PWL_RRWinMotorTargetPstCtr' */
  Rte_Read_ComRx_u8PWL_RRWinMotorTargetPstCtr_Val(&tmpRead_2);

  /* Inport: '<Root>/ComRx_u8PWL_RLWinMotorTargetPstCtr' */
  Rte_Read_ComRx_u8PWL_RLWinMotorTargetPstCtr_Val(&tmpRead_1);

  /* Inport: '<Root>/ComRx_u8PWL_FRWinMotorTargetPstCtr' */
  Rte_Read_ComRx_u8PWL_FRWinMotorTargetPstCtr_Val(&tmpRead_0);

  /* Inport: '<Root>/ComRx_u8PWL_FLWinMotorTargetPstCtr' */
  Rte_Read_ComRx_u8PWL_FLWinMotorTargetPstCtr_Val(&tmpRead);

  /* Outport: '<Root>/gCAN_u8PWL_FLWinMotorTargetPstCtr' */
  (void) Rte_Write_gCAN_u8PWL_FLWinMotorTargetPstCtr_Val(tmpRead);

  /* Outport: '<Root>/gCAN_u8PWL_FRWinMotorTargetPstCtr' */
  (void) Rte_Write_gCAN_u8PWL_FRWinMotorTargetPstCtr_Val(tmpRead_0);

  /* Outport: '<Root>/gCAN_u8PWL_RLWinMotorTargetPstCtr' */
  (void) Rte_Write_gCAN_u8PWL_RLWinMotorTargetPstCtr_Val(tmpRead_1);

  /* Outport: '<Root>/gCAN_u8PWL_RRWinMotorTargetPstCtr' */
  (void) Rte_Write_gCAN_u8PWL_RRWinMotorTargetPstCtr_Val(tmpRead_2);

  /* Outport: '<Root>/gCAN_u8PWL_FLWinMotorOpeCtr' */
  (void) Rte_Write_gCAN_u8PWL_FLWinMotorOpeCtr_Val(tmpRead_3);

  /* Outport: '<Root>/gCAN_u8PWL_FRWinMotorOpeCtr' */
  (void) Rte_Write_gCAN_u8PWL_FRWinMotorOpeCtr_Val(tmpRead_4);

  /* Outport: '<Root>/gCAN_u8PWL_RLWinMotorOpeCtr' */
  (void) Rte_Write_gCAN_u8PWL_RLWinMotorOpeCtr_Val(tmpRead_5);

  /* Outport: '<Root>/gCAN_u8PWL_RRWinMotorOpeCtr' */
  (void) Rte_Write_gCAN_u8PWL_RRWinMotorOpeCtr_Val(tmpRead_6);

  /* Outport: '<Root>/gCAN_u8UMM_UsageModeSt' */
  (void) Rte_Write_gCAN_u8UMM_UsageModeSt_Val(tmpRead_7);

  /* Outport: '<Root>/gCAN_u8POD_FLWinShortDropCmd' */
  (void) Rte_Write_gCAN_u8POD_FLWinShortDropCmd_Val(tmpRead_8);

  /* Outport: '<Root>/gCAN_u8POD_FRWinShortDropCmd' */
  (void) Rte_Write_gCAN_u8POD_FRWinShortDropCmd_Val(tmpRead_9);

  /* Outport: '<Root>/gCAN_u8POD_RLWinShortDropCmd' */
  (void) Rte_Write_gCAN_u8POD_RLWinShortDropCmd_Val(tmpRead_a);

  /* Outport: '<Root>/gCAN_u8POD_RRWinShortDropCmd' */
  (void) Rte_Write_gCAN_u8POD_RRWinShortDropCmd_Val(tmpRead_b);

  /* Outport: '<Root>/gCAN_bPWL_FLWinRelearnReq' */
  (void) Rte_Write_gCAN_bPWL_FLWinRelearnReq_Val(tmpRead_c);

  /* Outport: '<Root>/gCAN_bPWL_FRWinRelearnReq' */
  (void) Rte_Write_gCAN_bPWL_FRWinRelearnReq_Val(tmpRead_d);

  /* Outport: '<Root>/gCAN_bPWL_RLWinRelearnReq' */
  (void) Rte_Write_gCAN_bPWL_RLWinRelearnReq_Val(tmpRead_e);

  /* Outport: '<Root>/gCAN_bPWL_RRWinRelearnReq' */
  (void) Rte_Write_gCAN_bPWL_RRWinRelearnReq_Val(tmpRead_f);
}

/* Model initialize function */
void Win_ComCnvRx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
