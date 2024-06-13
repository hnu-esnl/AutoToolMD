/*
 * File: HVAC_ComCnvRx.c
 *
 * Code generated for Simulink model 'HVAC_ComCnvRx'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Sep 28 15:04:16 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HVAC_ComCnvRx.h"
#include "HVAC_ComCnvRx_private.h"

/* Model step function for TID1 */
FUNC(void, HVAC_ComCnvRx_CODE) HVAC_ComCnvRx_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  boolean rtb_TmpSignalConversionAtComR_h;
  boolean tmpRead;
  boolean tmpRead_0;
  boolean tmpRead_1;
  boolean tmpRead_2;
  boolean tmpRead_3;
  boolean tmpRead_4;
  boolean tmpRead_5;
  boolean tmpRead_6;
  uint8 tmpRead_7;
  uint8 tmpRead_8;
  uint8 tmpRead_9;
  uint8 tmpRead_a;
  uint8 tmpRead_b;
  uint8 tmpRead_c;
  uint8 tmpRead_d;
  uint8 tmpRead_e;
  uint8 tmpRead_f;
  uint8 tmpRead_g;

  /* Inport: '<Root>/ComRx_u8HVAC_WindExitSpdLvl_Val' */
  Rte_Read_ComRx_u8HVAC_WindExitSpdLvl_Val(&tmpRead_g);

  /* Inport: '<Root>/ComRx_u8HVAC_WindExitModeReq_Val' */
  Rte_Read_ComRx_u8HVAC_WindExitModeReq_Val(&tmpRead_f);

  /* Inport: '<Root>/ComRx_u8HVAC_RearWindExitSpdLvl_Val' */
  Rte_Read_ComRx_u8HVAC_RearWindExitSpdLvl_Val(&tmpRead_e);

  /* Inport: '<Root>/ComRx_u8HVAC_RearWindExitModeReq_Val' */
  Rte_Read_ComRx_u8HVAC_RearWindExitModeReq_Val(&tmpRead_d);

  /* Inport: '<Root>/ComRx_u8HVAC_RearAMDoorPos_Val' */
  Rte_Read_ComRx_u8HVAC_RearAMDoorPos_Val(&tmpRead_c);

  /* Inport: '<Root>/ComRx_u8HVAC_PaAMDoorPostion_Val' */
  Rte_Read_ComRx_u8HVAC_PaAMDoorPostion_Val(&tmpRead_b);

  /* Inport: '<Root>/ComRx_u8HVAC_PaAirCirculationReq_Val' */
  Rte_Read_ComRx_u8HVAC_PaAirCirculationReq_Val(&tmpRead_a);

  /* Inport: '<Root>/ComRx_u8HVAC_DrAMDoorPostion_Val' */
  Rte_Read_ComRx_u8HVAC_DrAMDoorPostion_Val(&tmpRead_9);

  /* Inport: '<Root>/ComRx_u8HVAC_DrAirCirculationReq_Val' */
  Rte_Read_ComRx_u8HVAC_DrAirCirculationReq_Val(&tmpRead_8);

  /* Inport: '<Root>/ComRx_u8HVAC_AirCirculationReq_Val' */
  Rte_Read_ComRx_u8HVAC_AirCirculationReq_Val(&tmpRead_7);

  /* Inport: '<Root>/ComRx_bHVAC_WindExitModeReqVD_Val' */
  Rte_Read_ComRx_bHVAC_WindExitModeReqVD_Val(&tmpRead_6);

  /* Inport: '<Root>/ComRx_bHVAC_RearWindExitModeReqVD_Val' */
  Rte_Read_ComRx_bHVAC_RearWindExitModeReqVD_Val(&tmpRead_5);

  /* Inport: '<Root>/ComRx_bHVAC_RearAMDoorPosVD_Val' */
  Rte_Read_ComRx_bHVAC_RearAMDoorPosVD_Val(&tmpRead_4);

  /* Inport: '<Root>/ComRx_bHVAC_PaAMDoorPostionVD_Val' */
  Rte_Read_ComRx_bHVAC_PaAMDoorPostionVD_Val(&tmpRead_3);

  /* Inport: '<Root>/ComRx_bHVAC_PaAirCirculationReqVD_Val' */
  Rte_Read_ComRx_bHVAC_PaAirCirculationReqVD_Val(&tmpRead_2);

  /* Inport: '<Root>/ComRx_bHVAC_DrAMDoorPostionVD_Val' */
  Rte_Read_ComRx_bHVAC_DrAMDoorPostionVD_Val(&tmpRead_1);

  /* Inport: '<Root>/ComRx_bHVAC_DrAirCirculationReqVD_Val' */
  Rte_Read_ComRx_bHVAC_DrAirCirculationReqVD_Val(&tmpRead_0);

  /* Inport: '<Root>/ComRx_bHVAC_AirCirculationReqVD_Val' */
  Rte_Read_ComRx_bHVAC_AirCirculationReqVD_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HVAC_ComCnvRx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HVAC_ComCnvRx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/HvacDampr_bReqVldRcrltnMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_bHVAC_AirCirculationReqVD_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_bReqVldRcrltnMot_Val(tmpRead);

  /* Outport: '<Root>/HvacDampr_bReqVldDrvrMixMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_bHVAC_DrAMDoorPostionVD_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_bReqVldDrvrMixMot_Val(tmpRead_1);

  /* Outport: '<Root>/HvacDampr_bReqVldDrvrRcrltnMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_bHVAC_DrAirCirculationReqVD_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_bReqVldDrvrRcrltnMot_Val(tmpRead_0);

  /* Outport: '<Root>/HvacDampr_bReqVldPassMixMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_bHVAC_PaAMDoorPostionVD_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_bReqVldPassMixMot_Val(tmpRead_3);

  /* Outport: '<Root>/HvacDampr_bReqVldPassRcrltnMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_bHVAC_PaAirCirculationReqVD_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_bReqVldPassRcrltnMot_Val(tmpRead_2);

  /* Outport: '<Root>/HvacDampr_bReqVldReMixMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_bHVAC_RearAMDoorPosVD_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_bReqVldReMixMot_Val(tmpRead_4);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtComRx_bHVAC_RearDefrostSt_Val_readOutport1' incorporates:
   *  Inport: '<Root>/ComRx_bHVAC_RearDefrostSt_Val'
   */
  Rte_Read_ComRx_bHVAC_RearDefrostSt_Val(&rtb_TmpSignalConversionAtComR_h);

  /* Outport: '<Root>/ReMirrHeatg_stReqLe_Val' incorporates:
   *  DataTypeConversion: '<S3>/DataTypeConversion'
   */
  (void) Rte_Write_ReMirrHeatg_stReqLe_Val(rtb_TmpSignalConversionAtComR_h);

  /* Outport: '<Root>/ReMirrHeatg_stReqRi_Val' incorporates:
   *  DataTypeConversion: '<S4>/DataTypeConversion'
   */
  (void) Rte_Write_ReMirrHeatg_stReqRi_Val(rtb_TmpSignalConversionAtComR_h);

  /* Outport: '<Root>/WndshdHeatg_stReqRe_Val' incorporates:
   *  DataTypeConversion: '<S5>/DataTypeConversion'
   */
  (void) Rte_Write_WndshdHeatg_stReqRe_Val(rtb_TmpSignalConversionAtComR_h);

  /* Outport: '<Root>/HvacDampr_bReqVldReMotMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_bHVAC_RearWindExitModeReqVD_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_bReqVldReMotMot_Val(tmpRead_5);

  /* Outport: '<Root>/HvacDampr_bReqVldMotMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_bHVAC_WindExitModeReqVD_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_bReqVldMotMot_Val(tmpRead_6);

  /* Outport: '<Root>/HvacDampr_stReqRcrltnMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_u8HVAC_AirCirculationReq_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_stReqRcrltnMot_Val(tmpRead_7);

  /* Outport: '<Root>/HvacDampr_stReqDrvrMixMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_u8HVAC_DrAMDoorPostion_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_stReqDrvrMixMot_Val(tmpRead_9);

  /* Outport: '<Root>/HvacDampr_stReqDrvrRcrltnMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_u8HVAC_DrAirCirculationReq_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_stReqDrvrRcrltnMot_Val(tmpRead_8);

  /* Outport: '<Root>/HvacDampr_stReqPassMixMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_u8HVAC_PaAMDoorPostion_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_stReqPassMixMot_Val(tmpRead_b);

  /* Outport: '<Root>/HvacDampr_stReqPassRcrltnMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_u8HVAC_PaAirCirculationReq_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_stReqPassRcrltnMot_Val(tmpRead_a);

  /* Outport: '<Root>/HvacDampr_stReqReMixMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_u8HVAC_RearAMDoorPos_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_stReqReMixMot_Val(tmpRead_c);

  /* Outport: '<Root>/HvacDampr_stReqReMotMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_u8HVAC_RearWindExitModeReq_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_stReqReMotMot_Val(tmpRead_d);

  /* Outport: '<Root>/HvacBlowr_stReWindExitSpdLvl_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_u8HVAC_RearWindExitSpdLvl_Val_readOutport1'
   */
  (void) Rte_Write_HvacBlowr_stReWindExitSpdLvl_Val(tmpRead_e);

  /* Outport: '<Root>/HvacDampr_stReqMotMot_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_u8HVAC_WindExitModeReq_Val_readOutport1'
   */
  (void) Rte_Write_HvacDampr_stReqMotMot_Val(tmpRead_f);

  /* Outport: '<Root>/HvacBlowr_stWindExitSpdLvl_Val' incorporates:
   *  SignalConversion: '<S1>/TmpSignal ConversionAtComRx_u8HVAC_WindExitSpdLvl_Val_readOutport1'
   */
  (void) Rte_Write_HvacBlowr_stWindExitSpdLvl_Val(tmpRead_g);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HVAC_ComCnvRx_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, HVAC_ComCnvRx_CODE) HVAC_ComCnvRx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
