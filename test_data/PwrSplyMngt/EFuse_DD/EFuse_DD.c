/*
 * File: EFuse_DD.c
 *
 * Code generated for Simulink model 'EFuse_DD'.
 *
 * Model version                  : 1.30
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed Sep 28 11:53:03 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EFuse_DD.h"
#include "EFuse_DD_private.h"

/* Static Memory for Internal Data */
VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse09;

/* '<S11>/Multiport Switch' */
VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse08;

/* '<S10>/Multiport Switch' */
VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse07;

/* '<S9>/Multiport Switch' */
VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse06;

/* '<S8>/Multiport Switch' */
VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse05;

/* '<S7>/Multiport Switch' */
VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse04;

/* '<S6>/Multiport Switch' */
VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse03;

/* '<S5>/Multiport Switch' */
VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse02;

/* '<S4>/Multiport Switch' */
VAR(uint8, EFuse_DD_VAR) EFuse_DD_EFuse_stDrvModeFuse01;

/* '<S3>/Multiport Switch' */

/* Model step function for TID1 */
FUNC(void, EFuse_DD_CODE) EFuse_DD_Runnable_10ms(void)
                                     /* Explicit Task: EFuse_DD_Runnable_10ms */
{
  const uint8 *tmpIRead;

  /* Inport: '<Root>/EFuse_au8stFuse_Val' */
  tmpIRead = Rte_IRead_EFuse_DD_Runnable_10ms_EFuse_au8stFuse_Val();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EFuse_DD_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EFuse_DD_Runnable_10ms_sys'
   */
  /* Outputs for Enabled SubSystem: '<S1>/Fuse01Drive' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  /* Switch: '<S12>/Switch' incorporates:
   *  DataTypeConversion: '<S14>/Extract Desired Bits'
   *  Inport: '<Root>/EFuse_ActUseFuseChInfo_Val'
   */
  if (((uint8)(Rte_IRead_EFuse_DD_Runnable_10ms_EFuse_ActUseFuseChInfo_Val() >>
               1) & 1U) != 0U) {
    /* MultiPortSwitch: '<S3>/Multiport Switch' */
    switch (tmpIRead[0]) {
     case 0:
      /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
       *  Constant: '<S3>/Constant'
       */
      EFuse_DD_EFuse_stDrvModeFuse01 = 1U;
      break;

     case 1:
      /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
       *  Constant: '<S3>/Constant4'
       */
      EFuse_DD_EFuse_stDrvModeFuse01 = 1U;
      break;

     case 2:
      /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
       *  Constant: '<S3>/Constant1'
       */
      EFuse_DD_EFuse_stDrvModeFuse01 = 2U;
      break;

     case 3:
      /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
       *  Constant: '<S3>/Constant5'
       */
      EFuse_DD_EFuse_stDrvModeFuse01 = 4U;
      break;

     case 4:
      /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
       *  Constant: '<S3>/Constant2'
       */
      EFuse_DD_EFuse_stDrvModeFuse01 = 3U;
      break;

     case 5:
      /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
       *  Constant: '<S3>/Constant3'
       */
      EFuse_DD_EFuse_stDrvModeFuse01 = 2U;
      break;

     case 6:
      /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
       *  Constant: '<S3>/Constant6'
       */
      EFuse_DD_EFuse_stDrvModeFuse01 = 2U;
      break;

     default:
      /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
       *  Constant: '<S3>/Constant7'
       */
      EFuse_DD_EFuse_stDrvModeFuse01 = 1U;
      break;
    }

    /* End of MultiPortSwitch: '<S3>/Multiport Switch' */

    /* FunctionCaller: '<S3>/EFuse_DrvMode_Set_EFuse_DrvMode_Set' incorporates:
     *  Constant: '<S3>/Constant8'
     */
    Rte_Call_EFuse_DrvMode_Set_EFuse_DrvMode_Set(1,
      EFuse_DD_EFuse_stDrvModeFuse01);
  }

  /* End of Switch: '<S12>/Switch' */
  /* End of Outputs for SubSystem: '<S1>/Fuse01Drive' */

  /* Outputs for Enabled SubSystem: '<S1>/Fuse02Drive' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  /* Switch: '<S12>/Switch1' incorporates:
   *  DataTypeConversion: '<S15>/Extract Desired Bits'
   *  Inport: '<Root>/EFuse_ActUseFuseChInfo_Val'
   */
  if (((uint8)(Rte_IRead_EFuse_DD_Runnable_10ms_EFuse_ActUseFuseChInfo_Val() >>
               2) & 1U) != 0U) {
    /* MultiPortSwitch: '<S4>/Multiport Switch' */
    switch (tmpIRead[1]) {
     case 0:
      /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
       *  Constant: '<S4>/Constant'
       */
      EFuse_DD_EFuse_stDrvModeFuse02 = 1U;
      break;

     case 1:
      /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
       *  Constant: '<S4>/Constant4'
       */
      EFuse_DD_EFuse_stDrvModeFuse02 = 1U;
      break;

     case 2:
      /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
       *  Constant: '<S4>/Constant1'
       */
      EFuse_DD_EFuse_stDrvModeFuse02 = 2U;
      break;

     case 3:
      /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
       *  Constant: '<S4>/Constant5'
       */
      EFuse_DD_EFuse_stDrvModeFuse02 = 4U;
      break;

     case 4:
      /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
       *  Constant: '<S4>/Constant2'
       */
      EFuse_DD_EFuse_stDrvModeFuse02 = 3U;
      break;

     case 5:
      /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
       *  Constant: '<S4>/Constant3'
       */
      EFuse_DD_EFuse_stDrvModeFuse02 = 2U;
      break;

     case 6:
      /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
       *  Constant: '<S4>/Constant6'
       */
      EFuse_DD_EFuse_stDrvModeFuse02 = 2U;
      break;

     default:
      /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
       *  Constant: '<S4>/Constant7'
       */
      EFuse_DD_EFuse_stDrvModeFuse02 = 1U;
      break;
    }

    /* End of MultiPortSwitch: '<S4>/Multiport Switch' */

    /* FunctionCaller: '<S4>/EFuse_DrvMode_Set_EFuse_DrvMode_Set' incorporates:
     *  Constant: '<S4>/Constant8'
     */
    Rte_Call_EFuse_DrvMode_Set_EFuse_DrvMode_Set(2,
      EFuse_DD_EFuse_stDrvModeFuse02);
  }

  /* End of Switch: '<S12>/Switch1' */
  /* End of Outputs for SubSystem: '<S1>/Fuse02Drive' */

  /* Outputs for Enabled SubSystem: '<S1>/Fuse03Drive' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  /* Switch: '<S12>/Switch2' incorporates:
   *  DataTypeConversion: '<S16>/Extract Desired Bits'
   *  Inport: '<Root>/EFuse_ActUseFuseChInfo_Val'
   */
  if (((uint8)(Rte_IRead_EFuse_DD_Runnable_10ms_EFuse_ActUseFuseChInfo_Val() >>
               3) & 1U) != 0U) {
    /* MultiPortSwitch: '<S5>/Multiport Switch' */
    switch (tmpIRead[2]) {
     case 0:
      /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
       *  Constant: '<S5>/Constant'
       */
      EFuse_DD_EFuse_stDrvModeFuse03 = 1U;
      break;

     case 1:
      /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
       *  Constant: '<S5>/Constant4'
       */
      EFuse_DD_EFuse_stDrvModeFuse03 = 1U;
      break;

     case 2:
      /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
       *  Constant: '<S5>/Constant1'
       */
      EFuse_DD_EFuse_stDrvModeFuse03 = 2U;
      break;

     case 3:
      /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
       *  Constant: '<S5>/Constant5'
       */
      EFuse_DD_EFuse_stDrvModeFuse03 = 4U;
      break;

     case 4:
      /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
       *  Constant: '<S5>/Constant2'
       */
      EFuse_DD_EFuse_stDrvModeFuse03 = 3U;
      break;

     case 5:
      /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
       *  Constant: '<S5>/Constant3'
       */
      EFuse_DD_EFuse_stDrvModeFuse03 = 2U;
      break;

     case 6:
      /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
       *  Constant: '<S5>/Constant6'
       */
      EFuse_DD_EFuse_stDrvModeFuse03 = 2U;
      break;

     default:
      /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
       *  Constant: '<S5>/Constant7'
       */
      EFuse_DD_EFuse_stDrvModeFuse03 = 1U;
      break;
    }

    /* End of MultiPortSwitch: '<S5>/Multiport Switch' */

    /* FunctionCaller: '<S5>/EFuse_DrvMode_Set_EFuse_DrvMode_Set' incorporates:
     *  Constant: '<S5>/Constant8'
     */
    Rte_Call_EFuse_DrvMode_Set_EFuse_DrvMode_Set(3,
      EFuse_DD_EFuse_stDrvModeFuse03);
  }

  /* End of Switch: '<S12>/Switch2' */
  /* End of Outputs for SubSystem: '<S1>/Fuse03Drive' */

  /* Outputs for Enabled SubSystem: '<S1>/Fuse04Drive' incorporates:
   *  EnablePort: '<S6>/Enable'
   */
  /* Switch: '<S12>/Switch3' incorporates:
   *  DataTypeConversion: '<S17>/Extract Desired Bits'
   *  Inport: '<Root>/EFuse_ActUseFuseChInfo_Val'
   */
  if (((uint8)(Rte_IRead_EFuse_DD_Runnable_10ms_EFuse_ActUseFuseChInfo_Val() >>
               4) & 1U) != 0U) {
    /* MultiPortSwitch: '<S6>/Multiport Switch' */
    switch (tmpIRead[3]) {
     case 0:
      /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
       *  Constant: '<S6>/Constant'
       */
      EFuse_DD_EFuse_stDrvModeFuse04 = 1U;
      break;

     case 1:
      /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
       *  Constant: '<S6>/Constant4'
       */
      EFuse_DD_EFuse_stDrvModeFuse04 = 1U;
      break;

     case 2:
      /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
       *  Constant: '<S6>/Constant1'
       */
      EFuse_DD_EFuse_stDrvModeFuse04 = 2U;
      break;

     case 3:
      /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
       *  Constant: '<S6>/Constant5'
       */
      EFuse_DD_EFuse_stDrvModeFuse04 = 4U;
      break;

     case 4:
      /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
       *  Constant: '<S6>/Constant2'
       */
      EFuse_DD_EFuse_stDrvModeFuse04 = 3U;
      break;

     case 5:
      /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
       *  Constant: '<S6>/Constant3'
       */
      EFuse_DD_EFuse_stDrvModeFuse04 = 2U;
      break;

     case 6:
      /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
       *  Constant: '<S6>/Constant6'
       */
      EFuse_DD_EFuse_stDrvModeFuse04 = 2U;
      break;

     default:
      /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
       *  Constant: '<S6>/Constant7'
       */
      EFuse_DD_EFuse_stDrvModeFuse04 = 1U;
      break;
    }

    /* End of MultiPortSwitch: '<S6>/Multiport Switch' */

    /* FunctionCaller: '<S6>/EFuse_DrvMode_Set_EFuse_DrvMode_Set' incorporates:
     *  Constant: '<S6>/Constant8'
     */
    Rte_Call_EFuse_DrvMode_Set_EFuse_DrvMode_Set(4,
      EFuse_DD_EFuse_stDrvModeFuse04);
  }

  /* End of Switch: '<S12>/Switch3' */
  /* End of Outputs for SubSystem: '<S1>/Fuse04Drive' */

  /* Outputs for Enabled SubSystem: '<S1>/Fuse05Drive' incorporates:
   *  EnablePort: '<S7>/Enable'
   */
  /* Switch: '<S12>/Switch4' incorporates:
   *  DataTypeConversion: '<S18>/Extract Desired Bits'
   *  Inport: '<Root>/EFuse_ActUseFuseChInfo_Val'
   */
  if (((uint8)(Rte_IRead_EFuse_DD_Runnable_10ms_EFuse_ActUseFuseChInfo_Val() >>
               5) & 1U) != 0U) {
    /* MultiPortSwitch: '<S7>/Multiport Switch' */
    switch (tmpIRead[4]) {
     case 0:
      /* MultiPortSwitch: '<S7>/Multiport Switch' incorporates:
       *  Constant: '<S7>/Constant'
       */
      EFuse_DD_EFuse_stDrvModeFuse05 = 1U;
      break;

     case 1:
      /* MultiPortSwitch: '<S7>/Multiport Switch' incorporates:
       *  Constant: '<S7>/Constant4'
       */
      EFuse_DD_EFuse_stDrvModeFuse05 = 1U;
      break;

     case 2:
      /* MultiPortSwitch: '<S7>/Multiport Switch' incorporates:
       *  Constant: '<S7>/Constant1'
       */
      EFuse_DD_EFuse_stDrvModeFuse05 = 2U;
      break;

     case 3:
      /* MultiPortSwitch: '<S7>/Multiport Switch' incorporates:
       *  Constant: '<S7>/Constant5'
       */
      EFuse_DD_EFuse_stDrvModeFuse05 = 4U;
      break;

     case 4:
      /* MultiPortSwitch: '<S7>/Multiport Switch' incorporates:
       *  Constant: '<S7>/Constant2'
       */
      EFuse_DD_EFuse_stDrvModeFuse05 = 3U;
      break;

     case 5:
      /* MultiPortSwitch: '<S7>/Multiport Switch' incorporates:
       *  Constant: '<S7>/Constant3'
       */
      EFuse_DD_EFuse_stDrvModeFuse05 = 2U;
      break;

     case 6:
      /* MultiPortSwitch: '<S7>/Multiport Switch' incorporates:
       *  Constant: '<S7>/Constant6'
       */
      EFuse_DD_EFuse_stDrvModeFuse05 = 2U;
      break;

     default:
      /* MultiPortSwitch: '<S7>/Multiport Switch' incorporates:
       *  Constant: '<S7>/Constant7'
       */
      EFuse_DD_EFuse_stDrvModeFuse05 = 1U;
      break;
    }

    /* End of MultiPortSwitch: '<S7>/Multiport Switch' */

    /* FunctionCaller: '<S7>/EFuse_DrvMode_Set_EFuse_DrvMode_Set' incorporates:
     *  Constant: '<S7>/Constant8'
     */
    Rte_Call_EFuse_DrvMode_Set_EFuse_DrvMode_Set(5,
      EFuse_DD_EFuse_stDrvModeFuse05);
  }

  /* End of Switch: '<S12>/Switch4' */
  /* End of Outputs for SubSystem: '<S1>/Fuse05Drive' */

  /* Outputs for Enabled SubSystem: '<S1>/Fuse06Drive' incorporates:
   *  EnablePort: '<S8>/Enable'
   */
  /* Switch: '<S12>/Switch5' incorporates:
   *  DataTypeConversion: '<S19>/Extract Desired Bits'
   *  Inport: '<Root>/EFuse_ActUseFuseChInfo_Val'
   */
  if (((uint8)(Rte_IRead_EFuse_DD_Runnable_10ms_EFuse_ActUseFuseChInfo_Val() >>
               6) & 1U) != 0U) {
    /* MultiPortSwitch: '<S8>/Multiport Switch' */
    switch (tmpIRead[5]) {
     case 0:
      /* MultiPortSwitch: '<S8>/Multiport Switch' incorporates:
       *  Constant: '<S8>/Constant'
       */
      EFuse_DD_EFuse_stDrvModeFuse06 = 1U;
      break;

     case 1:
      /* MultiPortSwitch: '<S8>/Multiport Switch' incorporates:
       *  Constant: '<S8>/Constant4'
       */
      EFuse_DD_EFuse_stDrvModeFuse06 = 1U;
      break;

     case 2:
      /* MultiPortSwitch: '<S8>/Multiport Switch' incorporates:
       *  Constant: '<S8>/Constant1'
       */
      EFuse_DD_EFuse_stDrvModeFuse06 = 2U;
      break;

     case 3:
      /* MultiPortSwitch: '<S8>/Multiport Switch' incorporates:
       *  Constant: '<S8>/Constant5'
       */
      EFuse_DD_EFuse_stDrvModeFuse06 = 4U;
      break;

     case 4:
      /* MultiPortSwitch: '<S8>/Multiport Switch' incorporates:
       *  Constant: '<S8>/Constant2'
       */
      EFuse_DD_EFuse_stDrvModeFuse06 = 3U;
      break;

     case 5:
      /* MultiPortSwitch: '<S8>/Multiport Switch' incorporates:
       *  Constant: '<S8>/Constant3'
       */
      EFuse_DD_EFuse_stDrvModeFuse06 = 2U;
      break;

     case 6:
      /* MultiPortSwitch: '<S8>/Multiport Switch' incorporates:
       *  Constant: '<S8>/Constant6'
       */
      EFuse_DD_EFuse_stDrvModeFuse06 = 2U;
      break;

     default:
      /* MultiPortSwitch: '<S8>/Multiport Switch' incorporates:
       *  Constant: '<S8>/Constant7'
       */
      EFuse_DD_EFuse_stDrvModeFuse06 = 1U;
      break;
    }

    /* End of MultiPortSwitch: '<S8>/Multiport Switch' */

    /* FunctionCaller: '<S8>/EFuse_DrvMode_Set_EFuse_DrvMode_Set' incorporates:
     *  Constant: '<S8>/Constant8'
     */
    Rte_Call_EFuse_DrvMode_Set_EFuse_DrvMode_Set(6,
      EFuse_DD_EFuse_stDrvModeFuse06);
  }

  /* End of Switch: '<S12>/Switch5' */
  /* End of Outputs for SubSystem: '<S1>/Fuse06Drive' */

  /* Outputs for Enabled SubSystem: '<S1>/Fuse07Drive' incorporates:
   *  EnablePort: '<S9>/Enable'
   */
  /* Switch: '<S12>/Switch6' incorporates:
   *  DataTypeConversion: '<S20>/Extract Desired Bits'
   *  Inport: '<Root>/EFuse_ActUseFuseChInfo_Val'
   */
  if (((uint8)(Rte_IRead_EFuse_DD_Runnable_10ms_EFuse_ActUseFuseChInfo_Val() >>
               7) & 1U) != 0U) {
    /* MultiPortSwitch: '<S9>/Multiport Switch' */
    switch (tmpIRead[6]) {
     case 0:
      /* MultiPortSwitch: '<S9>/Multiport Switch' incorporates:
       *  Constant: '<S9>/Constant'
       */
      EFuse_DD_EFuse_stDrvModeFuse07 = 1U;
      break;

     case 1:
      /* MultiPortSwitch: '<S9>/Multiport Switch' incorporates:
       *  Constant: '<S9>/Constant4'
       */
      EFuse_DD_EFuse_stDrvModeFuse07 = 1U;
      break;

     case 2:
      /* MultiPortSwitch: '<S9>/Multiport Switch' incorporates:
       *  Constant: '<S9>/Constant1'
       */
      EFuse_DD_EFuse_stDrvModeFuse07 = 2U;
      break;

     case 3:
      /* MultiPortSwitch: '<S9>/Multiport Switch' incorporates:
       *  Constant: '<S9>/Constant5'
       */
      EFuse_DD_EFuse_stDrvModeFuse07 = 4U;
      break;

     case 4:
      /* MultiPortSwitch: '<S9>/Multiport Switch' incorporates:
       *  Constant: '<S9>/Constant2'
       */
      EFuse_DD_EFuse_stDrvModeFuse07 = 3U;
      break;

     case 5:
      /* MultiPortSwitch: '<S9>/Multiport Switch' incorporates:
       *  Constant: '<S9>/Constant3'
       */
      EFuse_DD_EFuse_stDrvModeFuse07 = 2U;
      break;

     case 6:
      /* MultiPortSwitch: '<S9>/Multiport Switch' incorporates:
       *  Constant: '<S9>/Constant6'
       */
      EFuse_DD_EFuse_stDrvModeFuse07 = 2U;
      break;

     default:
      /* MultiPortSwitch: '<S9>/Multiport Switch' incorporates:
       *  Constant: '<S9>/Constant7'
       */
      EFuse_DD_EFuse_stDrvModeFuse07 = 1U;
      break;
    }

    /* End of MultiPortSwitch: '<S9>/Multiport Switch' */

    /* FunctionCaller: '<S9>/EFuse_DrvMode_Set_EFuse_DrvMode_Set' incorporates:
     *  Constant: '<S9>/Constant8'
     */
    Rte_Call_EFuse_DrvMode_Set_EFuse_DrvMode_Set(7,
      EFuse_DD_EFuse_stDrvModeFuse07);
  }

  /* End of Switch: '<S12>/Switch6' */
  /* End of Outputs for SubSystem: '<S1>/Fuse07Drive' */

  /* Outputs for Enabled SubSystem: '<S1>/Fuse08Drive' incorporates:
   *  EnablePort: '<S10>/Enable'
   */
  /* Switch: '<S12>/Switch7' incorporates:
   *  DataTypeConversion: '<S21>/Extract Desired Bits'
   *  Inport: '<Root>/EFuse_ActUseFuseChInfo_Val'
   */
  if (((uint8)(Rte_IRead_EFuse_DD_Runnable_10ms_EFuse_ActUseFuseChInfo_Val() >>
               8) & 1U) != 0U) {
    /* MultiPortSwitch: '<S10>/Multiport Switch' */
    switch (tmpIRead[7]) {
     case 0:
      /* MultiPortSwitch: '<S10>/Multiport Switch' incorporates:
       *  Constant: '<S10>/Constant'
       */
      EFuse_DD_EFuse_stDrvModeFuse08 = 1U;
      break;

     case 1:
      /* MultiPortSwitch: '<S10>/Multiport Switch' incorporates:
       *  Constant: '<S10>/Constant4'
       */
      EFuse_DD_EFuse_stDrvModeFuse08 = 1U;
      break;

     case 2:
      /* MultiPortSwitch: '<S10>/Multiport Switch' incorporates:
       *  Constant: '<S10>/Constant1'
       */
      EFuse_DD_EFuse_stDrvModeFuse08 = 2U;
      break;

     case 3:
      /* MultiPortSwitch: '<S10>/Multiport Switch' incorporates:
       *  Constant: '<S10>/Constant5'
       */
      EFuse_DD_EFuse_stDrvModeFuse08 = 4U;
      break;

     case 4:
      /* MultiPortSwitch: '<S10>/Multiport Switch' incorporates:
       *  Constant: '<S10>/Constant2'
       */
      EFuse_DD_EFuse_stDrvModeFuse08 = 3U;
      break;

     case 5:
      /* MultiPortSwitch: '<S10>/Multiport Switch' incorporates:
       *  Constant: '<S10>/Constant3'
       */
      EFuse_DD_EFuse_stDrvModeFuse08 = 2U;
      break;

     case 6:
      /* MultiPortSwitch: '<S10>/Multiport Switch' incorporates:
       *  Constant: '<S10>/Constant6'
       */
      EFuse_DD_EFuse_stDrvModeFuse08 = 2U;
      break;

     default:
      /* MultiPortSwitch: '<S10>/Multiport Switch' incorporates:
       *  Constant: '<S10>/Constant7'
       */
      EFuse_DD_EFuse_stDrvModeFuse08 = 1U;
      break;
    }

    /* End of MultiPortSwitch: '<S10>/Multiport Switch' */

    /* FunctionCaller: '<S10>/EFuse_DrvMode_Set_EFuse_DrvMode_Set' incorporates:
     *  Constant: '<S10>/Constant8'
     */
    Rte_Call_EFuse_DrvMode_Set_EFuse_DrvMode_Set(8,
      EFuse_DD_EFuse_stDrvModeFuse08);
  }

  /* End of Switch: '<S12>/Switch7' */
  /* End of Outputs for SubSystem: '<S1>/Fuse08Drive' */

  /* Outputs for Enabled SubSystem: '<S1>/Fuse09Drive' incorporates:
   *  EnablePort: '<S11>/Enable'
   */
  /* Switch: '<S12>/Switch8' incorporates:
   *  DataTypeConversion: '<S22>/Extract Desired Bits'
   *  Inport: '<Root>/EFuse_ActUseFuseChInfo_Val'
   */
  if (((uint8)(Rte_IRead_EFuse_DD_Runnable_10ms_EFuse_ActUseFuseChInfo_Val() >>
               9) & 1U) != 0U) {
    /* MultiPortSwitch: '<S11>/Multiport Switch' */
    switch (tmpIRead[8]) {
     case 0:
      /* MultiPortSwitch: '<S11>/Multiport Switch' incorporates:
       *  Constant: '<S11>/Constant'
       */
      EFuse_DD_EFuse_stDrvModeFuse09 = 1U;
      break;

     case 1:
      /* MultiPortSwitch: '<S11>/Multiport Switch' incorporates:
       *  Constant: '<S11>/Constant4'
       */
      EFuse_DD_EFuse_stDrvModeFuse09 = 1U;
      break;

     case 2:
      /* MultiPortSwitch: '<S11>/Multiport Switch' incorporates:
       *  Constant: '<S11>/Constant1'
       */
      EFuse_DD_EFuse_stDrvModeFuse09 = 2U;
      break;

     case 3:
      /* MultiPortSwitch: '<S11>/Multiport Switch' incorporates:
       *  Constant: '<S11>/Constant5'
       */
      EFuse_DD_EFuse_stDrvModeFuse09 = 4U;
      break;

     case 4:
      /* MultiPortSwitch: '<S11>/Multiport Switch' incorporates:
       *  Constant: '<S11>/Constant2'
       */
      EFuse_DD_EFuse_stDrvModeFuse09 = 3U;
      break;

     case 5:
      /* MultiPortSwitch: '<S11>/Multiport Switch' incorporates:
       *  Constant: '<S11>/Constant3'
       */
      EFuse_DD_EFuse_stDrvModeFuse09 = 2U;
      break;

     case 6:
      /* MultiPortSwitch: '<S11>/Multiport Switch' incorporates:
       *  Constant: '<S11>/Constant6'
       */
      EFuse_DD_EFuse_stDrvModeFuse09 = 2U;
      break;

     default:
      /* MultiPortSwitch: '<S11>/Multiport Switch' incorporates:
       *  Constant: '<S11>/Constant7'
       */
      EFuse_DD_EFuse_stDrvModeFuse09 = 1U;
      break;
    }

    /* End of MultiPortSwitch: '<S11>/Multiport Switch' */

    /* FunctionCaller: '<S11>/EFuse_DrvMode_Set_EFuse_DrvMode_Set' incorporates:
     *  Constant: '<S11>/Constant8'
     */
    Rte_Call_EFuse_DrvMode_Set_EFuse_DrvMode_Set(9,
      EFuse_DD_EFuse_stDrvModeFuse09);
  }

  /* End of Switch: '<S12>/Switch8' */
  /* End of Outputs for SubSystem: '<S1>/Fuse09Drive' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EFuse_DD_Runnable_10ms' */
}

/* Model initialize function */
FUNC(void, EFuse_DD_CODE) EFuse_DD_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
