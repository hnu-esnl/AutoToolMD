/*
 * File: Lock_DiagEnbCnd.c
 *
 * Code generated for Simulink model 'Lock_DiagEnbCnd'.
 *
 * Model version                  : 1.19
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Sep 28 20:12:29 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Lock_DiagEnbCnd.h"
#include "Lock_DiagEnbCnd_private.h"

/* Named constants for Chart: '<S1>/Chart' */
#define Lock_DiagEnbCnd_IN_Disable     ((uint8)1U)
#define Lock_DiagEnbCnd_IN_Enable      ((uint8)2U)
#define Lock_DiagEnbCnd_IN_Hold        ((uint8)3U)

/* Block signals (default storage) */
VAR(B_Lock_DiagEnbCnd_T, Lock_DiagEnbCnd_VAR) Lock_DiagEnbCnd_B;

/* Block states (default storage) */
VAR(DW_Lock_DiagEnbCnd_T, Lock_DiagEnbCnd_VAR) Lock_DiagEnbCnd_DW;

/* Model step function for TID1 */
FUNC(void, Lock_DiagEnbCnd_CODE) Lock_DiagEnbCnd_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  uint8 rtb_DataStoreRead;
  uint8 rtb_Bfx_PutBit_sf;
  uint8 rtb_Bfx_PutBit_sf_j;
  boolean rtb_TmpSignalConversionAtBattU_;
  boolean rtb_LogicalOperator;
  uint8 tmpRead;

  /* Inport: '<Root>/gCAN_u8UMM_UsageModeSt_Val' */
  Rte_Read_gCAN_u8UMM_UsageModeSt_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DiagEnbCnd_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/Lock_DiagEnbCnd_Runnable_10ms_sys'
   */
  /* DataStoreRead: '<S1>/Data Store Read' */
  rtb_DataStoreRead = Lock_DiagEnbCnd_DW.u8DiagCndTmp;

  /* SignalConversion: '<S1>/TmpSignal ConversionAtBattU_flgVoltEnbPinDiag_Val_readOutport1' incorporates:
   *  Inport: '<Root>/BattU_bVoltEnbPinDiag_Val'
   */
  Rte_Read_BattU_bVoltEnbPinDiag_Val(&rtb_TmpSignalConversionAtBattU_);

  /* S-Function (Bfx_PutBit_sf): '<S4>/Bfx_PutBit_sf' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rtb_Bfx_PutBit_sf_j = rtb_DataStoreRead;
  Bfx_PutBit_u8u8u8(&rtb_Bfx_PutBit_sf_j, ((uint8)2U), rtb_TmpSignalConversionAtBattU_);

  /* S-Function (Bfx_PutBit_sf): '<S5>/Bfx_PutBit_sf' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  rtb_Bfx_PutBit_sf = rtb_Bfx_PutBit_sf_j;
  Bfx_PutBit_u8u8u8(&rtb_Bfx_PutBit_sf, ((uint8)3U), rtb_TmpSignalConversionAtBattU_);

  /* Chart: '<S1>/Chart' */
  /* Gateway: Lock_DiagEnbCnd_Runnable_10ms_sys/Chart */
  if (Lock_DiagEnbCnd_DW.temporalCounter_i1 < 7U) {
    Lock_DiagEnbCnd_DW.temporalCounter_i1++;
  }

  Lock_DiagEnbCnd_DW.u8UsageMode_prev = Lock_DiagEnbCnd_DW.u8UsageMode_start;
  Lock_DiagEnbCnd_DW.u8UsageMode_start = tmpRead;

  /* During: Lock_DiagEnbCnd_Runnable_10ms_sys/Chart */
  if (Lock_DiagEnbCnd_DW.is_active_c2_Lock_DiagEnbCnd == 0U) {
    Lock_DiagEnbCnd_DW.u8UsageMode_prev = tmpRead;

    /* Entry: Lock_DiagEnbCnd_Runnable_10ms_sys/Chart */
    Lock_DiagEnbCnd_DW.is_active_c2_Lock_DiagEnbCnd = 1U;

    /* Entry Internal: Lock_DiagEnbCnd_Runnable_10ms_sys/Chart */
    /* Transition: '<S3>:2' */
    Lock_DiagEnbCnd_DW.is_c2_Lock_DiagEnbCnd = Lock_DiagEnbCnd_IN_Disable;

    /* Entry 'Disable': '<S3>:1' */
    Lock_DiagEnbCnd_B.bDiagEnbCnd = false;
  } else {
    switch (Lock_DiagEnbCnd_DW.is_c2_Lock_DiagEnbCnd) {
     case Lock_DiagEnbCnd_IN_Disable:
      /* During 'Disable': '<S3>:1' */
      if (((Lock_DiagEnbCnd_DW.u8UsageMode_prev != Lock_DiagEnbCnd_DW.u8UsageMode_start) && (Lock_DiagEnbCnd_DW.u8UsageMode_start == 1)) || ((Lock_DiagEnbCnd_DW.u8UsageMode_prev != Lock_DiagEnbCnd_DW.u8UsageMode_start) && (Lock_DiagEnbCnd_DW.u8UsageMode_start == 3))) {
        /* Transition: '<S3>:5' */
        /* Transition: '<S3>:8' */
        Lock_DiagEnbCnd_DW.is_c2_Lock_DiagEnbCnd = Lock_DiagEnbCnd_IN_Hold;
        Lock_DiagEnbCnd_DW.temporalCounter_i1 = 0U;
      } else {
        Lock_DiagEnbCnd_B.bDiagEnbCnd = false;
      }
      break;

     case Lock_DiagEnbCnd_IN_Enable:
      /* During 'Enable': '<S3>:3' */
      if ((tmpRead != 1) && (tmpRead != 3)) {
        /* Transition: '<S3>:9' */
        Lock_DiagEnbCnd_DW.is_c2_Lock_DiagEnbCnd = Lock_DiagEnbCnd_IN_Disable;

        /* Entry 'Disable': '<S3>:1' */
        Lock_DiagEnbCnd_B.bDiagEnbCnd = false;
      } else {
        Lock_DiagEnbCnd_B.bDiagEnbCnd = true;
      }
      break;

     default:
      /* During 'Hold': '<S3>:4' */
      if (Lock_DiagEnbCnd_DW.temporalCounter_i1 >= 5) {
        /* Transition: '<S3>:6' */
        Lock_DiagEnbCnd_DW.is_c2_Lock_DiagEnbCnd = Lock_DiagEnbCnd_IN_Enable;

        /* Entry 'Enable': '<S3>:3' */
        Lock_DiagEnbCnd_B.bDiagEnbCnd = true;
      } else {
        if ((tmpRead != 1) && (tmpRead != 3)) {
          /* Transition: '<S3>:7' */
          Lock_DiagEnbCnd_DW.is_c2_Lock_DiagEnbCnd = Lock_DiagEnbCnd_IN_Disable;

          /* Entry 'Disable': '<S3>:1' */
          Lock_DiagEnbCnd_B.bDiagEnbCnd = false;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* Logic: '<S1>/Logical Operator' */
  rtb_LogicalOperator = (rtb_TmpSignalConversionAtBattU_ && Lock_DiagEnbCnd_B.bDiagEnbCnd);

  /* S-Function (Bfx_PutBit_sf): '<S6>/Bfx_PutBit_sf' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  rtb_Bfx_PutBit_sf_j = rtb_Bfx_PutBit_sf;
  Bfx_PutBit_u8u8u8(&rtb_Bfx_PutBit_sf_j, ((uint8)0U), rtb_LogicalOperator);

  /* S-Function (Bfx_PutBit_sf): '<S7>/Bfx_PutBit_sf' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  Lock_DiagEnbCnd_B.Bfx_PutBit_sf = rtb_Bfx_PutBit_sf_j;
  Bfx_PutBit_u8u8u8(&Lock_DiagEnbCnd_B.Bfx_PutBit_sf, ((uint8)1U), rtb_LogicalOperator);

  /* DataStoreWrite: '<S1>/Data Store Write' */
  Lock_DiagEnbCnd_DW.u8DiagCndTmp = Lock_DiagEnbCnd_B.Bfx_PutBit_sf;

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DiagEnbCnd_Runnable_10ms_at_outport_1' */

  /* Outport: '<Root>/gLock_u8DiagEnbCnd_Val' */
  (void) Rte_Write_gLock_u8DiagEnbCnd_Val(Lock_DiagEnbCnd_B.Bfx_PutBit_sf);
}

/* Model initialize function */
FUNC(void, Lock_DiagEnbCnd_CODE) Lock_DiagEnbCnd_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
