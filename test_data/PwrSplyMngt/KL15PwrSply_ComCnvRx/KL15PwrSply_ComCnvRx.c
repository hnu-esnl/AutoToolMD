/*
 * File: KL15PwrSply_ComCnvRx.c
 *
 * Code generated for Simulink model 'KL15PwrSply_ComCnvRx'.
 *
 * Model version                  : 1.70
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Oct 16 14:22:19 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "KL15PwrSply_ComCnvRx.h"
#include "KL15PwrSply_ComCnvRx_private.h"

/* Static Memory for Internal Data */
VAR(float32, KL15PwrSply_ComCnvRx_VAR) KL15PwrSply_PwrSply_BCS_VehSpd;

/* Block signals (default storage) */
VAR(B_KL15PwrSply_ComCnvRx_T, KL15PwrSply_ComCnvRx_VAR) KL15PwrSply_ComCnvRx_B;

/*
 * Output and update for enable system:
 *    '<S3>/PwrSupTra01'
 *    '<S3>/PwrSupTra02'
 *    '<S3>/PwrSupTra03'
 *    '<S3>/PwrSupTra04'
 *    '<S3>/PwrSupTra05'
 *    '<S3>/PwrSupTra06'
 *    '<S3>/PwrSupTra07'
 *    '<S3>/PwrSupTra08'
 *    '<S3>/PwrSupTra09'
 *    '<S3>/PwrSupTra10'
 *    ...
 */
FUNC(void, KL15PwrSply_ComCnvRx_CODE_LOCAL) KL15PwrSply_ComCnvR_PwrSupTra01(VAR(boolean, AUTOMATIC) rtu_Enable, VAR(uint8, AUTOMATIC) rtu_ComRx_u8IPDS_PowerSup, P2VAR(uint8, AUTOMATIC, KL15PwrSply_ComCnvRx_VAR) rty_PwrSply_u8PwrSup)
{
  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra01' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  if (rtu_Enable) {
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S4>/Constant'
     *  Constant: '<S4>/Constant1'
     *  Logic: '<S4>/Logical Operator'
     *  RelationalOperator: '<S4>/Relational Operator'
     *  RelationalOperator: '<S4>/Relational Operator1'
     */
    *rty_PwrSply_u8PwrSup = (uint8)((rtu_ComRx_u8IPDS_PowerSup == 1) || (rtu_ComRx_u8IPDS_PowerSup == 2));
  }

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra01' */
}

/* Model step function for TID1 */

/* SwAddrMethod CODE for Runnable */
#define KL15PwrSply_ComCnvRx_START_SEC_CODE
#include "KL15PwrSply_ComCnvRx_MemMap.h"

FUNC(void, KL15PwrSply_ComCnvRx_CODE) KL15PwrSply_ComCnvRx_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  boolean rtb_LogicalOperator1;
  boolean rtb_NMW_tGetCurrentComModeRTE_c;
  uint8 tmp[29];
  sint32 tmp_0;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_KL15PwrSply_ComCnvRx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/KL15PwrSply_ComCnvRx_Runnable_10ms_sys'
   */
  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra01' */
  /* RelationalOperator: '<S3>/Relational Operator' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/ComRx_u8IPDS_KL15T2PowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_KL15T2PowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_KL15T2PowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_dl);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra01' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra02' */
  /* RelationalOperator: '<S3>/Relational Operator1' incorporates:
   *  Constant: '<S3>/Constant1'
   *  Inport: '<Root>/ComRx_u8IPDS_KL15T1PowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_KL15T1PowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_KL15T1PowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_d);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra02' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra05' */
  /* RelationalOperator: '<S3>/Relational Operator4' incorporates:
   *  Constant: '<S3>/Constant4'
   *  Inport: '<Root>/ComRx_u8IPDS_RearEOPPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearEOPPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearEOPPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_f);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra05' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra03' */
  /* RelationalOperator: '<S3>/Relational Operator2' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Inport: '<Root>/ComRx_u8IPDS_RearCtrlPanelPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearCtrlPanelPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearCtrlPanelPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_pa);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra03' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra07' */
  /* RelationalOperator: '<S3>/Relational Operator6' incorporates:
   *  Constant: '<S3>/Constant6'
   *  Inport: '<Root>/ComRx_u8IPDS_RearBlowerPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearBlowerPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearBlowerPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_ci);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra07' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra11' */
  /* RelationalOperator: '<S3>/Relational Operator10' incorporates:
   *  Constant: '<S3>/Constant10'
   *  Inport: '<Root>/ComRx_u8IPDS_PCUPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_PCUPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_PCUPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_e);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra11' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra04' */
  /* RelationalOperator: '<S3>/Relational Operator3' incorporates:
   *  Constant: '<S3>/Constant3'
   *  Inport: '<Root>/ComRx_u8IPDS_RMPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RMPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RMPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_g);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra04' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra06' */
  /* RelationalOperator: '<S3>/Relational Operator5' incorporates:
   *  Constant: '<S3>/Constant5'
   *  Inport: '<Root>/ComRx_u8IPDS_RearRadarPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearRadarPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearRadarPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_p);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra06' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra08' */
  /* RelationalOperator: '<S3>/Relational Operator7' incorporates:
   *  Constant: '<S3>/Constant7'
   *  Inport: '<Root>/ComRx_u8IPDS_AMPPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_AMPPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_AMPPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_e2);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra08' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra09' */
  /* RelationalOperator: '<S3>/Relational Operator8' incorporates:
   *  Constant: '<S3>/Constant8'
   *  Inport: '<Root>/ComRx_u8IPDS_Rear12VPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_Rear12VPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_Rear12VPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_c);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra09' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra10' */
  /* RelationalOperator: '<S3>/Relational Operator9' incorporates:
   *  Constant: '<S3>/Constant9'
   *  Inport: '<Root>/ComRx_u8IPDS_InverterPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_InverterPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_InverterPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_en);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra10' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra12' */
  /* RelationalOperator: '<S3>/Relational Operator11' incorporates:
   *  Constant: '<S3>/Constant11'
   *  Inport: '<Root>/ComRx_u8IPDS_PASPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_PASPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_PASPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_lr);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra12' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra25' */
  /* RelationalOperator: '<S3>/Relational Operator12' incorporates:
   *  Constant: '<S3>/Constant12'
   *  Inport: '<Root>/ComRx_u8IPDS_RearMotorPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearMotorPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearMotorPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_k);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra25' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra26' */
  /* RelationalOperator: '<S3>/Relational Operator13' incorporates:
   *  Constant: '<S3>/Constant13'
   *  Inport: '<Root>/ComRx_u8IPDS_RLALampCtlUnitPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RLALampCtlUnitPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RLALampCtlUnitPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_l);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra26' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra28' */
  /* RelationalOperator: '<S3>/Relational Operator15' incorporates:
   *  Constant: '<S3>/Constant15'
   *  Inport: '<Root>/ComRx_u8IPDS_RLBLampCtlUnitPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RLBLampCtlUnitPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RLBLampCtlUnitPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_i);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra28' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra27' */
  /* RelationalOperator: '<S3>/Relational Operator14' incorporates:
   *  Constant: '<S3>/Constant14'
   *  Inport: '<Root>/ComRx_u8IPDS_RRALampCtlUnitPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RRALampCtlUnitPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RRALampCtlUnitPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch_a);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra27' */

  /* Outputs for Enabled SubSystem: '<S3>/PwrSupTra29' */
  /* RelationalOperator: '<S3>/Relational Operator16' incorporates:
   *  Constant: '<S3>/Constant16'
   *  Inport: '<Root>/ComRx_u8IPDS_RRBLampCtlUnitPowerSup_Val'
   */
  KL15PwrSply_ComCnvR_PwrSupTra01(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RRBLampCtlUnitPowerSup_Val() != 3, Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RRBLampCtlUnitPowerSup_Val(), &KL15PwrSply_ComCnvRx_B.Switch);

  /* End of Outputs for SubSystem: '<S3>/PwrSupTra29' */

  /* SignalConversion: '<S1>/Signal Conversion4' */
  tmp[0] = KL15PwrSply_ComCnvRx_B.Switch_dl;
  tmp[1] = KL15PwrSply_ComCnvRx_B.Switch_d;

  /* DataTypeConversion: '<S3>/DataTypeConversion5' incorporates:
   *  DataTypeConversion: '<S3>/DataTypeConversion4'
   *  DataTypeConversion: '<S3>/DataTypeConversion6'
   *  DataTypeConversion: '<S3>/DataTypeConversion7'
   *  Inport: '<Root>/gPRM_u8VehicleTypeCfg_Val'
   *  RelationalOperator: '<S3>/Relational Operator23'
   *  RelationalOperator: '<S3>/Relational Operator24'
   *  RelationalOperator: '<S3>/Relational Operator25'
   *  RelationalOperator: '<S3>/Relational Operator26'
   *  RelationalOperator: '<S3>/Relational Operator27'
   *  RelationalOperator: '<S3>/Relational Operator28'
   *  RelationalOperator: '<S3>/Relational Operator29'
   *  RelationalOperator: '<S3>/Relational Operator30'
   *  RelationalOperator: '<S3>/Relational Operator31'
   *  RelationalOperator: '<S3>/Relational Operator32'
   */
  tmp_0 = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_gPRM_u8VehicleTypeCfg_Val();

  /* SignalConversion: '<S1>/Signal Conversion4' incorporates:
   *  Constant: '<S3>/Constant23'
   *  Constant: '<S3>/Constant24'
   *  Constant: '<S3>/Constant25'
   *  Constant: '<S3>/Constant26'
   *  Constant: '<S3>/Constant27'
   *  Constant: '<S3>/Constant28'
   *  Constant: '<S3>/Constant29'
   *  Constant: '<S3>/Constant30'
   *  Constant: '<S3>/Constant31'
   *  Constant: '<S3>/Constant32'
   *  DataTypeConversion: '<S3>/DataTypeConversion4'
   *  DataTypeConversion: '<S3>/DataTypeConversion5'
   *  DataTypeConversion: '<S3>/DataTypeConversion6'
   *  DataTypeConversion: '<S3>/DataTypeConversion7'
   *  Logic: '<S3>/Logical Operator10'
   *  Logic: '<S3>/Logical Operator11'
   *  Logic: '<S3>/Logical Operator12'
   *  Logic: '<S3>/Logical Operator6'
   *  Logic: '<S3>/Logical Operator7'
   *  Logic: '<S3>/Logical Operator8'
   *  Logic: '<S3>/Logical Operator9'
   *  RelationalOperator: '<S3>/Relational Operator23'
   *  RelationalOperator: '<S3>/Relational Operator24'
   *  RelationalOperator: '<S3>/Relational Operator25'
   *  RelationalOperator: '<S3>/Relational Operator26'
   *  RelationalOperator: '<S3>/Relational Operator27'
   *  RelationalOperator: '<S3>/Relational Operator28'
   *  RelationalOperator: '<S3>/Relational Operator29'
   *  RelationalOperator: '<S3>/Relational Operator30'
   *  RelationalOperator: '<S3>/Relational Operator31'
   *  RelationalOperator: '<S3>/Relational Operator32'
   */
  tmp[2] = (uint8)(((tmp_0 == 1) || (tmp_0 == 2) || (tmp_0 == 3)) && (KL15PwrSply_ComCnvRx_B.Switch_pa != 0));
  tmp[3] = KL15PwrSply_ComCnvRx_B.Switch_g;
  tmp[4] = (uint8)((tmp_0 == 0) && (KL15PwrSply_ComCnvRx_B.Switch_f != 0));
  tmp[5] = KL15PwrSply_ComCnvRx_B.Switch_p;
  tmp[6] = (uint8)(((tmp_0 == 1) || (tmp_0 == 2) || (tmp_0 == 3)) && (KL15PwrSply_ComCnvRx_B.Switch_ci != 0));
  tmp[7] = KL15PwrSply_ComCnvRx_B.Switch_e2;
  tmp[8] = KL15PwrSply_ComCnvRx_B.Switch_c;
  tmp[9] = KL15PwrSply_ComCnvRx_B.Switch_en;
  tmp[10] = (uint8)(((tmp_0 == 1) || (tmp_0 == 2) || (tmp_0 == 3)) && (KL15PwrSply_ComCnvRx_B.Switch_e != 0));
  tmp[11] = KL15PwrSply_ComCnvRx_B.Switch_lr;
  tmp[12] = ((uint8)0U);
  tmp[13] = ((uint8)0U);
  tmp[14] = ((uint8)0U);
  tmp[15] = ((uint8)0U);
  tmp[16] = ((uint8)0U);
  tmp[17] = ((uint8)0U);
  tmp[18] = ((uint8)0U);
  tmp[19] = ((uint8)0U);
  tmp[20] = ((uint8)0U);
  tmp[21] = ((uint8)0U);
  tmp[22] = ((uint8)0U);
  tmp[23] = ((uint8)0U);
  tmp[24] = KL15PwrSply_ComCnvRx_B.Switch_k;

  /* DataTypeConversion: '<S3>/DataTypeConversion' incorporates:
   *  DataTypeConversion: '<S3>/DataTypeConversion1'
   *  DataTypeConversion: '<S3>/DataTypeConversion2'
   *  DataTypeConversion: '<S3>/DataTypeConversion3'
   *  Inport: '<Root>/gPRM_u8VehRLCM_Val'
   *  RelationalOperator: '<S3>/Relational Operator17'
   *  RelationalOperator: '<S3>/Relational Operator18'
   *  RelationalOperator: '<S3>/Relational Operator19'
   *  RelationalOperator: '<S3>/Relational Operator20'
   *  RelationalOperator: '<S3>/Relational Operator21'
   *  RelationalOperator: '<S3>/Relational Operator22'
   */
  tmp_0 = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_gPRM_u8VehRLCM_Val();

  /* SignalConversion: '<S1>/Signal Conversion4' incorporates:
   *  Constant: '<S3>/Constant17'
   *  Constant: '<S3>/Constant18'
   *  Constant: '<S3>/Constant19'
   *  Constant: '<S3>/Constant20'
   *  Constant: '<S3>/Constant21'
   *  Constant: '<S3>/Constant22'
   *  DataTypeConversion: '<S3>/DataTypeConversion'
   *  DataTypeConversion: '<S3>/DataTypeConversion1'
   *  DataTypeConversion: '<S3>/DataTypeConversion2'
   *  DataTypeConversion: '<S3>/DataTypeConversion3'
   *  Logic: '<S3>/Logical Operator'
   *  Logic: '<S3>/Logical Operator1'
   *  Logic: '<S3>/Logical Operator2'
   *  Logic: '<S3>/Logical Operator3'
   *  Logic: '<S3>/Logical Operator4'
   *  Logic: '<S3>/Logical Operator5'
   *  RelationalOperator: '<S3>/Relational Operator17'
   *  RelationalOperator: '<S3>/Relational Operator18'
   *  RelationalOperator: '<S3>/Relational Operator19'
   *  RelationalOperator: '<S3>/Relational Operator20'
   *  RelationalOperator: '<S3>/Relational Operator21'
   *  RelationalOperator: '<S3>/Relational Operator22'
   */
  tmp[25] = (uint8)(((tmp_0 == 1) || (tmp_0 == 2)) && (KL15PwrSply_ComCnvRx_B.Switch_l != 0));
  tmp[26] = (uint8)(((tmp_0 == 1) || (tmp_0 == 2)) && (KL15PwrSply_ComCnvRx_B.Switch_a != 0));
  tmp[27] = (uint8)((tmp_0 == 2) && (KL15PwrSply_ComCnvRx_B.Switch_i != 0));
  tmp[28] = (uint8)((tmp_0 == 2) && (KL15PwrSply_ComCnvRx_B.Switch != 0));

  /* Outport: '<Root>/PwrSply_au8PwrSup_Val' incorporates:
   *  SignalConversion: '<S1>/Signal Conversion4'
   */
  Rte_IWrite_KL15PwrSply_ComCnvRx_Runnable_10ms_PwrSply_au8PwrSup_Val(tmp);

  /* Logic: '<S1>/Logical Operator' incorporates:
   *  Inport: '<Root>/ComRx_bIPDS_AMPPowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_InverterPowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_KL15T1PowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_KL15T2PowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_PCUPowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_RLALampCtlUnitPowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_RLBLampCtlUnitPowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_RMPowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_RRALampCtlUnitPowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_RRBLampCtlUnitPowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_Rear12VPowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_RearBlowerPowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_RearCtrlPanelPowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_RearEOPPowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_RearMotorPowerSup_TiOut_Val'
   *  Inport: '<Root>/ComRx_bIPDS_RearRadarPowerSup_TiOut_Val'
   */
  rtb_LogicalOperator1 = (Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_AMPPowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_InverterPowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_KL15T1PowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_KL15T2PowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_PCUPowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_Rear12VPowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_RearBlowerPowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_RearCtrlPanelPowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_RearEOPPowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_RearMotorPowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_RearRadarPowerSup_TiOut_Val() ||
    Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_RLALampCtlUnitPowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_RLBLampCtlUnitPowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_RMPowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_RRALampCtlUnitPowerSup_TiOut_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bIPDS_RRBLampCtlUnitPowerSup_TiOut_Val());

  /* Outport: '<Root>/PwrSply_bCCULostComm_Val' incorporates:
   *  SignalConversion: '<S1>/Signal Conversion'
   */
  Rte_IWrite_KL15PwrSply_ComCnvRx_Runnable_10ms_PwrSply_bCCULostComm_Val(rtb_LogicalOperator1);

  /* FunctionCaller: '<S1>/NMW_tGetAllCurrentComModeRTE_Operation' */
  Rte_Call_NMW_tGetAllCurrentComModeRTE_Operation(&rtb_LogicalOperator1);

  /* Outport: '<Root>/PwrSply_bNetSleepFlag_Val' incorporates:
   *  RelationalOperator: '<S1>/Relational Operator'
   */
  Rte_IWrite_KL15PwrSply_ComCnvRx_Runnable_10ms_PwrSply_bNetSleepFlag_Val(!rtb_LogicalOperator1);

  /* FunctionCaller: '<S1>/NMW_tGetCurrentComModeRTE_Operation' */
  Rte_Call_NMW_tGetCurrentComModeRTE_Operation(0, &rtb_NMW_tGetCurrentComModeRTE_c);

  /* Product: '<S1>/Product' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Inport: '<Root>/ComRx_u16BCS_VehSpd_Val'
   */
  KL15PwrSply_PwrSply_BCS_VehSpd = (float32)Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u16BCS_VehSpd_Val() * 0.05625F;

  /* Outport: '<Root>/PwrSply_bVehSpdTkOvr_Val' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Inport: '<Root>/ComRx_bBCS_VehSpdVD_TiOut_Val'
   *  Inport: '<Root>/ComRx_bBCS_VehSpdVD_Val'
   *  Inport: '<Root>/ComRx_bBCS_VehSpd_TiOut_Val'
   *  Logic: '<S1>/Logical Operator1'
   *  Logic: '<S1>/Logical Operator2'
   *  Logic: '<S1>/Logical Operator3'
   *  RelationalOperator: '<S1>/Relational Operator1'
   *  SignalConversion: '<S1>/Signal Conversion3'
   */
  Rte_IWrite_KL15PwrSply_ComCnvRx_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bBCS_VehSpdVD_Val() && (KL15PwrSply_PwrSply_BCS_VehSpd > 5.0F) && (!Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bBCS_VehSpd_TiOut_Val()) && (!Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bBCS_VehSpdVD_TiOut_Val()));

  /* Outport: '<Root>/PwrSply_u8VehicleTypeCfg_Val' incorporates:
   *  Inport: '<Root>/gPRM_u8VehicleTypeCfg_Val'
   *  SignalConversion: '<S1>/Signal Conversion7'
   */
  Rte_IWrite_KL15PwrSply_ComCnvRx_Runnable_10ms_PwrSply_u8VehicleTypeCfg_Val(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_gPRM_u8VehicleTypeCfg_Val());

  /* Outport: '<Root>/PwrSply_u8VehRLCM_Val' incorporates:
   *  Inport: '<Root>/gPRM_u8VehRLCM_Val'
   *  SignalConversion: '<S1>/Signal Conversion8'
   */
  Rte_IWrite_KL15PwrSply_ComCnvRx_Runnable_10ms_PwrSply_u8VehRLCM_Val(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_gPRM_u8VehRLCM_Val());

  /* SignalConversion: '<S1>/Signal Conversion9' incorporates:
   *  Inport: '<Root>/ComRx_u8IPDS_AMPPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_InverterPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_KL15T1PowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_KL15T2PowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_PASPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_PCUPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RLALampCtlUnitPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RLBLampCtlUnitPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RMPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RRALampCtlUnitPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RRBLampCtlUnitPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_Rear12VPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RearBlowerPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RearCtrlPanelPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RearEOPPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RearMotorPowerSupTime_RcvCnt_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RearRadarPowerSupTime_RcvCnt_Val'
   */
  tmp[0] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_KL15T2PowerSupTime_RcvCnt_Val();
  tmp[1] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_KL15T1PowerSupTime_RcvCnt_Val();
  tmp[2] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearCtrlPanelPowerSupTime_RcvCnt_Val();
  tmp[3] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RMPowerSupTime_RcvCnt_Val();
  tmp[4] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearEOPPowerSupTime_RcvCnt_Val();
  tmp[5] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearRadarPowerSupTime_RcvCnt_Val();
  tmp[6] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearBlowerPowerSupTime_RcvCnt_Val();
  tmp[7] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_AMPPowerSupTime_RcvCnt_Val();
  tmp[8] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_Rear12VPowerSupTime_RcvCnt_Val();
  tmp[9] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_InverterPowerSupTime_RcvCnt_Val();
  tmp[10] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_PCUPowerSupTime_RcvCnt_Val();
  tmp[11] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_PASPowerSupTime_RcvCnt_Val();
  tmp[12] = ((uint8)0U);
  tmp[13] = ((uint8)0U);
  tmp[14] = ((uint8)0U);
  tmp[15] = ((uint8)0U);
  tmp[16] = ((uint8)0U);
  tmp[17] = ((uint8)0U);
  tmp[18] = ((uint8)0U);
  tmp[19] = ((uint8)0U);
  tmp[20] = ((uint8)0U);
  tmp[21] = ((uint8)0U);
  tmp[22] = ((uint8)0U);
  tmp[23] = ((uint8)0U);
  tmp[24] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearMotorPowerSupTime_RcvCnt_Val();
  tmp[25] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RLALampCtlUnitPowerSupTime_RcvCnt_Val();
  tmp[26] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RRALampCtlUnitPowerSupTime_RcvCnt_Val();
  tmp[27] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RLBLampCtlUnitPowerSupTime_RcvCnt_Val();
  tmp[28] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RRBLampCtlUnitPowerSupTime_RcvCnt_Val();

  /* Outport: '<Root>/PwrSply_au8PwrSupTime_RcvCnt_Val' incorporates:
   *  SignalConversion: '<S1>/Signal Conversion9'
   */
  Rte_IWrite_KL15PwrSply_ComCnvRx_Runnable_10ms_PwrSply_au8PwrSupTime_RcvCnt_Val(tmp);

  /* SignalConversion: '<S1>/Signal Conversion10' incorporates:
   *  Inport: '<Root>/ComRx_u8IPDS_AMPPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_InverterPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_KL15T1PowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_KL15T2PowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_PASPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_PCUPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RLALampCtlUnitPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RLBLampCtlUnitPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RMPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RRALampCtlUnitPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RRBLampCtlUnitPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_Rear12VPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RearBlowerPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RearCtrlPanelPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RearEOPPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RearMotorPowerSupTime_Val'
   *  Inport: '<Root>/ComRx_u8IPDS_RearRadarPowerSupTime_Val'
   */
  tmp[0] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_KL15T2PowerSupTime_Val();
  tmp[1] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_KL15T1PowerSupTime_Val();
  tmp[2] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearCtrlPanelPowerSupTime_Val();
  tmp[3] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RMPowerSupTime_Val();
  tmp[4] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearEOPPowerSupTime_Val();
  tmp[5] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearRadarPowerSupTime_Val();
  tmp[6] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearBlowerPowerSupTime_Val();
  tmp[7] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_AMPPowerSupTime_Val();
  tmp[8] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_Rear12VPowerSupTime_Val();
  tmp[9] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_InverterPowerSupTime_Val();
  tmp[10] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_PCUPowerSupTime_Val();
  tmp[11] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_PASPowerSupTime_Val();
  tmp[12] = ((uint8)0U);
  tmp[13] = ((uint8)0U);
  tmp[14] = ((uint8)0U);
  tmp[15] = ((uint8)0U);
  tmp[16] = ((uint8)0U);
  tmp[17] = ((uint8)0U);
  tmp[18] = ((uint8)0U);
  tmp[19] = ((uint8)0U);
  tmp[20] = ((uint8)0U);
  tmp[21] = ((uint8)0U);
  tmp[22] = ((uint8)0U);
  tmp[23] = ((uint8)0U);
  tmp[24] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RearMotorPowerSupTime_Val();
  tmp[25] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RLALampCtlUnitPowerSupTime_Val();
  tmp[26] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RRALampCtlUnitPowerSupTime_Val();
  tmp[27] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RLBLampCtlUnitPowerSupTime_Val();
  tmp[28] = Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8IPDS_RRBLampCtlUnitPowerSupTime_Val();

  /* Outport: '<Root>/PwrSply_au8PwrSupTime_Val' incorporates:
   *  SignalConversion: '<S1>/Signal Conversion10'
   */
  Rte_IWrite_KL15PwrSply_ComCnvRx_Runnable_10ms_PwrSply_au8PwrSupTime_Val(tmp);

  /* Outport: '<Root>/PwrSply_bPositionLightCtrlCmd01_Val' incorporates:
   *  Inport: '<Root>/ComRx_bEL_RLPositionLightCtrlCmd_Val'
   *  SignalConversion: '<S1>/Signal Conversion5'
   */
  Rte_IWrite_KL15PwrSply_ComCnvRx_Runnable_10ms_PwrSply_bPositionLightCtrlCmd01_Val(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bEL_RLPositionLightCtrlCmd_Val());

  /* Outport: '<Root>/PwrSply_bPositionLightCtrlCmd02_Val' incorporates:
   *  Inport: '<Root>/ComRx_bEL_RRPositionLightCtrlCmd_Val'
   *  SignalConversion: '<S1>/Signal Conversion6'
   */
  Rte_IWrite_KL15PwrSply_ComCnvRx_Runnable_10ms_PwrSply_bPositionLightCtrlCmd02_Val(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bEL_RRPositionLightCtrlCmd_Val());

  /* Outport: '<Root>/PwrSply_bPositionLightTimingOFFEnableCfg_Val' incorporates:
   *  Inport: '<Root>/ComRx_bEL_PositionLightTimingOFFCfg_Val'
   *  Inport: '<Root>/gPRM_bPositionLightTimingOFFEnableCfg_Val'
   *  Logic: '<S1>/Logical Operator4'
   */
  Rte_IWrite_KL15PwrSply_ComCnvRx_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_gPRM_bPositionLightTimingOFFEnableCfg_Val() || Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_bEL_PositionLightTimingOFFCfg_Val());

  /* Outport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val' incorporates:
   *  Inport: '<Root>/ComRx_u8UMM_UsageModeSt_Val'
   *  SignalConversion: '<S1>/Signal Conversion1'
   */
  Rte_IWrite_KL15PwrSply_ComCnvRx_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8UMM_UsageModeSt_Val());

  /* Outport: '<Root>/PwrSply_u8VMM_OTAModeSt_Val' incorporates:
   *  Inport: '<Root>/ComRx_u8VMM_OTAModeSt_Val'
   *  SignalConversion: '<S1>/Signal Conversion2'
   */
  Rte_IWrite_KL15PwrSply_ComCnvRx_Runnable_10ms_PwrSply_u8VMM_OTAModeSt_Val(Rte_IRead_KL15PwrSply_ComCnvRx_Runnable_10ms_ComRx_u8VMM_OTAModeSt_Val());

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_KL15PwrSply_ComCnvRx_Runnable_10ms_at_outport_1' */
}

#define KL15PwrSply_ComCnvRx_STOP_SEC_CODE
#include "KL15PwrSply_ComCnvRx_MemMap.h"

/* Model initialize function */

/* SwAddrMethod CODE for Runnable */
#define KL15PwrSply_ComCnvRx_START_SEC_CODE
#include "KL15PwrSply_ComCnvRx_MemMap.h"

FUNC(void, KL15PwrSply_ComCnvRx_CODE) KL15PwrSply_ComCnvRx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

#define KL15PwrSply_ComCnvRx_STOP_SEC_CODE
#include "KL15PwrSply_ComCnvRx_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
