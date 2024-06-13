/*
 * File: HvacDampr_DD.c
 *
 * Code generated for Simulink model 'HvacDampr_DD'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Sep 26 17:11:09 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HvacDampr_DD.h"
#include "HvacDampr_DD_private.h"

/* Model step function for TID1 */
FUNC(void, HvacDampr_DD_CODE) HvacDampr_DD_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
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

  /* Inport: '<Root>/gPRM_u8VehicleTypeCfg_Val' */
  Rte_Read_gPRM_u8VehicleTypeCfg_Val(&tmpRead_7);

  /* Inport: '<Root>/HvacDampr_stRcrltnMotDir_Val' */
  Rte_Read_HvacDampr_stRcrltnMotDir_Val(&tmpRead_4);

  /* Inport: '<Root>/HvacDampr_stPassRcrltnMotDir_Val' */
  Rte_Read_HvacDampr_stPassRcrltnMotDir_Val(&tmpRead_3);

  /* Inport: '<Root>/HvacDampr_stDrvrMixMotDir_Val' */
  Rte_Read_HvacDampr_stDrvrMixMotDir_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacDampr_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HvacDampr_DD_Runnable_10ms_sys'
   */
  /* SwitchCase: '<S1>/SwitchCase1' */
  switch (tmpRead) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/LeftTempMotoOFF' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* FunctionCaller: '<S11>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S11>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_LeACAirMixModCtrl, 0);

    /* End of Outputs for SubSystem: '<S1>/LeftTempMotoOFF' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/LeftTempMotoClockWiseRun' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* FunctionCaller: '<S10>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S10>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_LeACAirMixModCtrl, 1);

    /* End of Outputs for SubSystem: '<S1>/LeftTempMotoClockWiseRun' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/LeftTempMotoAntiClockWiseRun' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* FunctionCaller: '<S9>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S9>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_LeACAirMixModCtrl, 2);

    /* End of Outputs for SubSystem: '<S1>/LeftTempMotoAntiClockWiseRun' */
    break;
  }

  /* End of SwitchCase: '<S1>/SwitchCase1' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacDampr_DD_Runnable_10ms_at_outport_1' */

  /* Inport: '<Root>/HvacDampr_stDrvrRcrltnMotDir_Val' */
  Rte_Read_HvacDampr_stDrvrRcrltnMotDir_Val(&tmpRead_0);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacDampr_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HvacDampr_DD_Runnable_10ms_sys'
   */
  /* SwitchCase: '<S1>/SwitchCase6' */
  switch (tmpRead_0) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/LeAirCircMotoOFF' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* FunctionCaller: '<S8>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S8>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_LeAirCircMotModCtrl, 0);

    /* End of Outputs for SubSystem: '<S1>/LeAirCircMotoOFF' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/LeAirCircMotoClockWiseRun' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* FunctionCaller: '<S7>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S7>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_LeAirCircMotModCtrl, 1);

    /* End of Outputs for SubSystem: '<S1>/LeAirCircMotoClockWiseRun' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/LeAirCircMotoAntiClockWiseRun' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* FunctionCaller: '<S6>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S6>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_LeAirCircMotModCtrl, 2);

    /* End of Outputs for SubSystem: '<S1>/LeAirCircMotoAntiClockWiseRun' */
    break;
  }

  /* End of SwitchCase: '<S1>/SwitchCase6' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacDampr_DD_Runnable_10ms_at_outport_1' */

  /* Inport: '<Root>/HvacDampr_stModMotDir_Val' */
  Rte_Read_HvacDampr_stModMotDir_Val(&tmpRead_1);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacDampr_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HvacDampr_DD_Runnable_10ms_sys'
   */
  /* SwitchCase: '<S1>/SwitchCase2' */
  switch (tmpRead_1) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/ModeMotoOFF' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    /* FunctionCaller: '<S14>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S14>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ModMotModCtrl, 0);

    /* End of Outputs for SubSystem: '<S1>/ModeMotoOFF' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/ModeMotoClockWiseRun' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    /* FunctionCaller: '<S13>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S13>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ModMotModCtrl, 1);

    /* End of Outputs for SubSystem: '<S1>/ModeMotoClockWiseRun' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/ModeMotoAntiClockWiseRun' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* FunctionCaller: '<S12>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S12>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ModMotModCtrl, 2);

    /* End of Outputs for SubSystem: '<S1>/ModeMotoAntiClockWiseRun' */
    break;
  }

  /* End of SwitchCase: '<S1>/SwitchCase2' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacDampr_DD_Runnable_10ms_at_outport_1' */

  /* Inport: '<Root>/HvacDampr_stPassMixMotDir_Val' */
  Rte_Read_HvacDampr_stPassMixMotDir_Val(&tmpRead_2);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacDampr_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HvacDampr_DD_Runnable_10ms_sys'
   */
  /* SwitchCase: '<S1>/SwitchCase3' */
  switch (tmpRead_2) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/RightTempMotoOFF' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    /* FunctionCaller: '<S23>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S23>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_RiACAirMixModCtrl, 0);

    /* End of Outputs for SubSystem: '<S1>/RightTempMotoOFF' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/RightTempMotoClockWiseRun' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    /* FunctionCaller: '<S22>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S22>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_RiACAirMixModCtrl, 1);

    /* End of Outputs for SubSystem: '<S1>/RightTempMotoClockWiseRun' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/RightTempMotoAntiClockWiseRun' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    /* FunctionCaller: '<S21>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S21>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_RiACAirMixModCtrl, 2);

    /* End of Outputs for SubSystem: '<S1>/RightTempMotoAntiClockWiseRun' */
    break;
  }

  /* End of SwitchCase: '<S1>/SwitchCase3' */

  /* Switch: '<S1>/Switch' */
  if (tmpRead_7 != 0) {
    tmpRead_3 = tmpRead_4;
  }

  /* End of Switch: '<S1>/Switch' */

  /* SwitchCase: '<S1>/SwitchCase' */
  switch (tmpRead_3) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/AirCircMotoOFF' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* FunctionCaller: '<S5>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S5>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_AirCircMotModCtrl, 0);

    /* End of Outputs for SubSystem: '<S1>/AirCircMotoOFF' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/AirCircMotoClockWiseRun' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* FunctionCaller: '<S4>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S4>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_AirCircMotModCtrl, 1);

    /* End of Outputs for SubSystem: '<S1>/AirCircMotoClockWiseRun' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/AirCircMotoAntiClockWiseRun' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* FunctionCaller: '<S3>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S3>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_AirCircMotModCtrl, 2);

    /* End of Outputs for SubSystem: '<S1>/AirCircMotoAntiClockWiseRun' */
    break;
  }

  /* End of SwitchCase: '<S1>/SwitchCase' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacDampr_DD_Runnable_10ms_at_outport_1' */

  /* Inport: '<Root>/HvacDampr_stReMixMotDir_Val' */
  Rte_Read_HvacDampr_stReMixMotDir_Val(&tmpRead_5);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacDampr_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HvacDampr_DD_Runnable_10ms_sys'
   */
  /* SwitchCase: '<S1>/SwitchCase5' */
  switch (tmpRead_5) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/ReTempMotoOFF' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    /* FunctionCaller: '<S20>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S20>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ReACAirMixModCtrl, 0);

    /* End of Outputs for SubSystem: '<S1>/ReTempMotoOFF' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/ReTempMotoClockWiseRun' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* FunctionCaller: '<S19>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S19>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ReACAirMixModCtrl, 1);

    /* End of Outputs for SubSystem: '<S1>/ReTempMotoClockWiseRun' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/ReTempMotoAntiClockWiseRun' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    /* FunctionCaller: '<S18>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S18>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ReACAirMixModCtrl, 2);

    /* End of Outputs for SubSystem: '<S1>/ReTempMotoAntiClockWiseRun' */
    break;
  }

  /* End of SwitchCase: '<S1>/SwitchCase5' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacDampr_DD_Runnable_10ms_at_outport_1' */

  /* Inport: '<Root>/HvacDampr_stReModMotDir_Val' */
  Rte_Read_HvacDampr_stReModMotDir_Val(&tmpRead_6);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacDampr_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HvacDampr_DD_Runnable_10ms_sys'
   */
  /* SwitchCase: '<S1>/SwitchCase4' */
  switch (tmpRead_6) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/ReModeMotoOFF' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    /* FunctionCaller: '<S17>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S17>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ReModMotModCtrl, 0);

    /* End of Outputs for SubSystem: '<S1>/ReModeMotoOFF' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/ReModeMotoClockWiseRun1' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    /* FunctionCaller: '<S16>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S16>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ReModMotModCtrl, 1);

    /* End of Outputs for SubSystem: '<S1>/ReModeMotoClockWiseRun1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/ReModeMotoAntiClockWiseRun' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    /* FunctionCaller: '<S15>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S15>/Constant'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ReModMotModCtrl, 2);

    /* End of Outputs for SubSystem: '<S1>/ReModeMotoAntiClockWiseRun' */
    break;
  }

  /* End of SwitchCase: '<S1>/SwitchCase4' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacDampr_DD_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, HvacDampr_DD_CODE) HvacDampr_DD_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
