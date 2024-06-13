/*
 * File: IntLamp_ComCnvTx.c
 *
 * Code generated for Simulink model 'IntLamp_ComCnvTx'.
 *
 * Model version                  : 1.30
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Sep 22 22:55:00 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "IntLamp_ComCnvTx.h"

/* Model step function */
void IntLamp_ComCnvTx_Runnable_10ms(void)
{
  boolean tmpRead;
  boolean tmpRead_0;
  boolean tmpRead_1;
  boolean tmpRead_2;
  boolean tmpRead_3;
  boolean tmpRead_4;
  boolean tmpRead_5;
  boolean tmpRead_6;

  /* Inport: '<Root>/gINL_bIL_BkgLightOutputFaultSt_T' */
  Rte_Read_gINL_bIL_BkgLightOutputFaultSt_T_Val(&tmpRead_6);

  /* Inport: '<Root>/gINL_bIL_BkgLightOutputSt_T' */
  Rte_Read_gINL_bIL_BkgLightOutputSt_T_Val(&tmpRead_5);

  /* Inport: '<Root>/gINL_bIL_RRCourtesyLightOutputFaultSt' */
  Rte_Read_gINL_bIL_RRCourtesyLightOutputFaultSt_Val(&tmpRead_4);

  /* Inport: '<Root>/gINL_bIL_RRCourtesyLightOutputSt' */
  Rte_Read_gINL_bIL_RRCourtesyLightOutputSt_Val(&tmpRead_3);

  /* Inport: '<Root>/gINL_bIL_RLCourtesyLightOutputFaultSt' */
  Rte_Read_gINL_bIL_RLCourtesyLightOutputFaultSt_Val(&tmpRead_2);

  /* Inport: '<Root>/gINL_bIL_RLCourtesyLightOutputSt' */
  Rte_Read_gINL_bIL_RLCourtesyLightOutputSt_Val(&tmpRead_1);

  /* Inport: '<Root>/gINL_bIL_TrunkLightOutputFaultSt' */
  Rte_Read_gINL_bIL_TrunkLightOutputFaultSt_Val(&tmpRead_0);

  /* Inport: '<Root>/gINL_bIL_TrunkLightOutputSt' */
  Rte_Read_gINL_bIL_TrunkLightOutputSt_Val(&tmpRead);

  /* Outport: '<Root>/ComTx_bIL_TrunkLightOutputSt' */
  (void) Rte_Write_ComTx_bIL_TrunkLightOutputSt_Val(tmpRead);

  /* Outport: '<Root>/ComTx_bIL_TrunkLightOutputFaultSt' */
  (void) Rte_Write_ComTx_bIL_TrunkLightOutputFaultSt_Val(tmpRead_0);

  /* Outport: '<Root>/ComTx_bIL_RLCourtesyLightOutputSt' */
  (void) Rte_Write_ComTx_bIL_RLCourtesyLightOutputSt_Val(tmpRead_1);

  /* Outport: '<Root>/ComTx_bIL_RLCourtesyLightOutputFaultSt' */
  (void) Rte_Write_ComTx_bIL_RLCourtesyLightOutputFaultSt_Val(tmpRead_2);

  /* Outport: '<Root>/ComTx_bIL_RRCourtesyLightOutputSt' */
  (void) Rte_Write_ComTx_bIL_RRCourtesyLightOutputSt_Val(tmpRead_3);

  /* Outport: '<Root>/ComTx_bIL_RRCourtesyLightOutputFaultSt' */
  (void) Rte_Write_ComTx_bIL_RRCourtesyLightOutputFaultSt_Val(tmpRead_4);

  /* Outport: '<Root>/ComTx_bIL_BkgLightOutputSt_T' */
  (void) Rte_Write_ComTx_bIL_BkgLightOutputSt_T_Val(tmpRead_5);

  /* Outport: '<Root>/ComTx_bIL_BkgLightOutputFaultSt_T' */
  (void) Rte_Write_ComTx_bIL_BkgLightOutputFaultSt_T_Val(tmpRead_6);
}

/* Model initialize function */
void IntLamp_ComCnvTx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
