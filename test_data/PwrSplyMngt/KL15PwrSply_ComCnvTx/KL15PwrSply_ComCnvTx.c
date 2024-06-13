/*
 * File: KL15PwrSply_ComCnvTx.c
 *
 * Code generated for Simulink model 'KL15PwrSply_ComCnvTx'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Oct 28 11:10:09 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "KL15PwrSply_ComCnvTx.h"
#include "KL15PwrSply_ComCnvTx_private.h"

/* Model step function for TID1 */

/* SwAddrMethod CODE for Runnable */
#define KL15PwrSply_ComCnvTx_START_SEC_CODE
#include "KL15PwrSply_ComCnvTx_MemMap.h"

FUNC(void, KL15PwrSply_ComCnvTx_CODE) KL15PwrSply_ComCnvTx_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  const boolean *tmpIRead;
  const uint16 *tmpIRead_0;
  const uint8 *tmpIRead_1;

  /* Inport: '<Root>/PwrSply_au8PwrFaultSt_Val' */
  tmpIRead_1 = Rte_IRead_KL15PwrSply_ComCnvTx_Runnable_10ms_PwrSply_au8PwrFaultSt_Val();

  /* Inport: '<Root>/PwrSply_au16PwrCurr_Val' */
  tmpIRead_0 = Rte_IRead_KL15PwrSply_ComCnvTx_Runnable_10ms_PwrSply_au16PwrCurr_Val();

  /* Inport: '<Root>/PwrSply_abPwrSt_Val' */
  tmpIRead = Rte_IRead_KL15PwrSply_ComCnvTx_Runnable_10ms_PwrSply_abPwrSt_Val();

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_KL15PwrSply_ComCnvTx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/KL15PwrSply_ComCnvTx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/ComTx_bIPDS_KL15T2PowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_KL15T2PowerSt_Val(tmpIRead[0]);

  /* Outport: '<Root>/ComTx_bIPDS_KL15T1PowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion1'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_KL15T1PowerSt_Val(tmpIRead[1]);

  /* Outport: '<Root>/ComTx_bIPDS_PCUPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion10'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_PCUPowerSt_Val(tmpIRead[10]);

  /* Outport: '<Root>/ComTx_bIPDS_PASPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion11'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_PASPowerSt_Val(tmpIRead[11]);

  /* Outport: '<Root>/ComTx_bIPDS_RearMotorPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion12'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_RearMotorPowerSt_Val(tmpIRead[24]);

  /* Outport: '<Root>/ComTx_bIPDS_RLALampCtlUnitPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion13'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_RLALampCtlUnitPowerSt_Val(tmpIRead[25]);

  /* Outport: '<Root>/ComTx_bIPDS_RRALampCtlUnitPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion14'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_RRALampCtlUnitPowerSt_Val(tmpIRead[26]);

  /* Outport: '<Root>/ComTx_bIPDS_RLBLampCtlUnitPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion15'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_RLBLampCtlUnitPowerSt_Val(tmpIRead[27]);

  /* Outport: '<Root>/ComTx_bIPDS_RRBLampCtlUnitPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion16'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_RRBLampCtlUnitPowerSt_Val(tmpIRead[28]);

  /* Outport: '<Root>/ComTx_bIPDS_RearCtrlPanelPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion2'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_RearCtrlPanelPowerSt_Val(tmpIRead[2]);

  /* Outport: '<Root>/ComTx_bIPDS_RMPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion3'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_RMPowerSt_Val(tmpIRead[3]);

  /* Outport: '<Root>/ComTx_bIPDS_RearEOPPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion4'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_RearEOPPowerSt_Val(tmpIRead[4]);

  /* Outport: '<Root>/ComTx_bIPDS_RearRadarPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion5'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_RearRadarPowerSt_Val(tmpIRead[5]);

  /* Outport: '<Root>/ComTx_bIPDS_RearBlowerPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion6'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_RearBlowerPowerSt_Val(tmpIRead[6]);

  /* Outport: '<Root>/ComTx_bIPDS_AMPPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion7'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_AMPPowerSt_Val(tmpIRead[7]);

  /* Outport: '<Root>/ComTx_bIPDS_Rear12VPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion8'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_Rear12VPowerSt_Val(tmpIRead[8]);

  /* Outport: '<Root>/ComTx_bIPDS_InverterPowerSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion9'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_bIPDS_InverterPowerSt_Val(tmpIRead[9]);

  /* Outport: '<Root>/ComTx_u16IPDS_KL15T2PowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion34'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_KL15T2PowerCurrent_Val(tmpIRead_0[0]);

  /* Outport: '<Root>/ComTx_u16IPDS_KL15T1PowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion35'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_KL15T1PowerCurrent_Val(tmpIRead_0[1]);

  /* Outport: '<Root>/ComTx_u16IPDS_RearCtrlPanelPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion36'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_RearCtrlPanelPowerCurrent_Val(tmpIRead_0[2]);

  /* Outport: '<Root>/ComTx_u16IPDS_RMPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion37'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_RMPowerCurrent_Val(tmpIRead_0[3]);

  /* Outport: '<Root>/ComTx_u16IPDS_RearEOPPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion38'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_RearEOPPowerCurrent_Val(tmpIRead_0[4]);

  /* Outport: '<Root>/ComTx_u16IPDS_RearRadarPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion39'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_RearRadarPowerCurrent_Val(tmpIRead_0[5]);

  /* Outport: '<Root>/ComTx_u16IPDS_RearBlowerPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion40'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_RearBlowerPowerCurrent_Val(tmpIRead_0[6]);

  /* Outport: '<Root>/ComTx_u16IPDS_AMPPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion41'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_AMPPowerCurrent_Val(tmpIRead_0[7]);

  /* Outport: '<Root>/ComTx_u16IPDS_Rear12VPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion42'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_Rear12VPowerCurrent_Val(tmpIRead_0[8]);

  /* Outport: '<Root>/ComTx_u16IPDS_InverterPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion43'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_InverterPowerCurrent_Val(tmpIRead_0[9]);

  /* Outport: '<Root>/ComTx_u16IPDS_PCUPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion44'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_PCUPowerCurrent_Val(tmpIRead_0[10]);

  /* Outport: '<Root>/ComTx_u16IPDS_PASPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion45'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_PASPowerCurrent_Val(tmpIRead_0[11]);

  /* Outport: '<Root>/ComTx_u16IPDS_RearMotorPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion46'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_RearMotorPowerCurrent_Val(tmpIRead_0[24]);

  /* Outport: '<Root>/ComTx_u16IPDS_RLALampCtlUnitPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion47'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_RLALampCtlUnitPowerCurrent_Val(tmpIRead_0[25]);

  /* Outport: '<Root>/ComTx_u16IPDS_RRALampCtlUnitPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion48'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_RRALampCtlUnitPowerCurrent_Val(tmpIRead_0[26]);

  /* Outport: '<Root>/ComTx_u16IPDS_RLBLampCtlUnitPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion49'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_RLBLampCtlUnitPowerCurrent_Val(tmpIRead_0[27]);

  /* Outport: '<Root>/ComTx_u16IPDS_RRBLampCtlUnitPowerCurrent_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion50'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_RRBLampCtlUnitPowerCurrent_Val(tmpIRead_0[28]);

  /* Outport: '<Root>/ComTx_u8IPDS_KL15T2PowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion17'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_KL15T2PowerFaultSt_Val(tmpIRead_1[0]);

  /* Outport: '<Root>/ComTx_u8IPDS_KL15T1PowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion18'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_KL15T1PowerFaultSt_Val(tmpIRead_1[1]);

  /* Outport: '<Root>/ComTx_u8IPDS_RearCtrlPanelPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion19'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_RearCtrlPanelPowerFaultSt_Val(tmpIRead_1[2]);

  /* Outport: '<Root>/ComTx_u8IPDS_RMPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion20'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_RMPowerFaultSt_Val(tmpIRead_1[3]);

  /* Outport: '<Root>/ComTx_u8IPDS_RearEOPPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion21'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_RearEOPPowerFaultSt_Val(tmpIRead_1[4]);

  /* Outport: '<Root>/ComTx_u8IPDS_RearRadarPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion22'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_RearRadarPowerFaultSt_Val(tmpIRead_1[5]);

  /* Outport: '<Root>/ComTx_u8IPDS_RearBlowerPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion23'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_RearBlowerPowerFaultSt_Val(tmpIRead_1[6]);

  /* Outport: '<Root>/ComTx_u8IPDS_AMPPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion24'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_AMPPowerFaultSt_Val(tmpIRead_1[7]);

  /* Outport: '<Root>/ComTx_u8IPDS_Rear12VPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion25'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_Rear12VPowerFaultSt_Val(tmpIRead_1[8]);

  /* Outport: '<Root>/ComTx_u8IPDS_InverterPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion26'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_InverterPowerFaultSt_Val(tmpIRead_1[9]);

  /* Outport: '<Root>/ComTx_u8IPDS_PCUPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion27'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_PCUPowerFaultSt_Val(tmpIRead_1[10]);

  /* Outport: '<Root>/ComTx_u8IPDS_PASPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion28'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_PASPowerFaultSt_Val(tmpIRead_1[11]);

  /* Outport: '<Root>/ComTx_u8IPDS_RearMotorPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion29'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_RearMotorPowerFaultSt_Val(tmpIRead_1[24]);

  /* Outport: '<Root>/ComTx_u8IPDS_RLALampCtlUnitPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion30'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_RLALampCtlUnitPowerFaultSt_Val(tmpIRead_1[25]);

  /* Outport: '<Root>/ComTx_u8IPDS_RRALampCtlUnitPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion31'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_RRALampCtlUnitPowerFaultSt_Val(tmpIRead_1[26]);

  /* Outport: '<Root>/ComTx_u8IPDS_RLBLampCtlUnitPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion32'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_RLBLampCtlUnitPowerFaultSt_Val(tmpIRead_1[27]);

  /* Outport: '<Root>/ComTx_u8IPDS_RRBLampCtlUnitPowerFaultSt_Val' incorporates:
   *  SignalConversion: '<S1>/SignalConversion33'
   */
  Rte_IWrite_KL15PwrSply_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_RRBLampCtlUnitPowerFaultSt_Val(tmpIRead_1[28]);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_KL15PwrSply_ComCnvTx_Runnable_10ms_at_outport_1' */
}

#define KL15PwrSply_ComCnvTx_STOP_SEC_CODE
#include "KL15PwrSply_ComCnvTx_MemMap.h"

/* Model initialize function */

/* SwAddrMethod CODE for Runnable */
#define KL15PwrSply_ComCnvTx_START_SEC_CODE
#include "KL15PwrSply_ComCnvTx_MemMap.h"

FUNC(void, KL15PwrSply_ComCnvTx_CODE) KL15PwrSply_ComCnvTx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

#define KL15PwrSply_ComCnvTx_STOP_SEC_CODE
#include "KL15PwrSply_ComCnvTx_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
