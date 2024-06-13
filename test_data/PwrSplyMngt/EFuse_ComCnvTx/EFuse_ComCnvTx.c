/*
 * File: EFuse_ComCnvTx.c
 *
 * Code generated for Simulink model 'EFuse_ComCnvTx'.
 *
 * Model version                  : 1.50
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Sep 30 09:56:31 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EFuse_ComCnvTx.h"
#include "EFuse_ComCnvTx_private.h"

/* Model step function for TID1 */
FUNC(void, EFuse_ComCnvTx_CODE) EFuse_ComCnvTx_Runnable_10ms(void)
                               /* Explicit Task: EFuse_ComCnvTx_Runnable_10ms */
{
  sint32 tmp;
  const uint32 *tmpIRead;
  const uint32 *tmpIRead_0;
  uint8 Switch;
  uint8 Switch3;
  uint8 Switch6;

  /* Inport: '<Root>/EFuse_au32ErrInfo_Val' */
  tmpIRead_0 = Rte_IRead_EFuse_ComCnvTx_Runnable_10ms_EFuse_au32ErrInfo_Val();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EFuse_ComCnvTx_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EFuse_ComCnvTx_Runnable_10ms_sys'
   */
  /* Switch: '<S6>/Switch3' incorporates:
   *  DataTypeConversion: '<S14>/Extract Desired Bits'
   *  DataTypeConversion: '<S15>/Extract Desired Bits'
   *  DataTypeConversion: '<S16>/Extract Desired Bits'
   *  Switch: '<S6>/Switch4'
   *  Switch: '<S6>/Switch5'
   */
  if (((uint8)(tmpIRead_0[4] >> 2) & 1U) != 0U) {
    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S6>/Constant4'
     */
    Switch3 = 1U;
  } else if (((uint8)(tmpIRead_0[4] >> 15) & 1U) != 0U) {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant5'
     *  Switch: '<S6>/Switch3'
     */
    Switch3 = 3U;
  } else if (((uint8)(tmpIRead_0[4] >> 4) & 1U) != 0U) {
    /* Switch: '<S6>/Switch5' incorporates:
     *  Constant: '<S6>/Constant6'
     *  Switch: '<S6>/Switch3'
     *  Switch: '<S6>/Switch4'
     */
    Switch3 = 4U;
  } else {
    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S6>/Constant7'
     *  Switch: '<S6>/Switch4'
     *  Switch: '<S6>/Switch5'
     */
    Switch3 = 0U;
  }

  /* End of Switch: '<S6>/Switch3' */

  /* Switch: '<S6>/Switch' incorporates:
   *  DataTypeConversion: '<S10>/Extract Desired Bits'
   *  DataTypeConversion: '<S12>/Extract Desired Bits'
   *  DataTypeConversion: '<S13>/Extract Desired Bits'
   *  Switch: '<S6>/Switch1'
   *  Switch: '<S6>/Switch2'
   */
  if (((uint8)(tmpIRead_0[0] >> 2) & 1U) != 0U) {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant'
     */
    Switch = 1U;
  } else if (((uint8)(tmpIRead_0[0] >> 15) & 1U) != 0U) {
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Switch: '<S6>/Switch'
     */
    Switch = 3U;
  } else if ((tmpIRead_0[0] >> 24 & 1U) != 0U) {
    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/Constant2'
     *  Switch: '<S6>/Switch'
     *  Switch: '<S6>/Switch1'
     */
    Switch = 4U;
  } else {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant3'
     *  Switch: '<S6>/Switch1'
     *  Switch: '<S6>/Switch2'
     */
    Switch = 0U;
  }

  /* End of Switch: '<S6>/Switch' */

  /* Switch: '<S6>/Switch6' incorporates:
   *  DataTypeConversion: '<S18>/Extract Desired Bits'
   *  DataTypeConversion: '<S19>/Extract Desired Bits'
   *  DataTypeConversion: '<S20>/Extract Desired Bits'
   *  Switch: '<S6>/Switch7'
   *  Switch: '<S6>/Switch8'
   */
  if (((uint8)(tmpIRead_0[5] >> 2) & 1U) != 0U) {
    /* Switch: '<S6>/Switch6' incorporates:
     *  Constant: '<S6>/Constant10'
     */
    Switch6 = 1U;
  } else if (((uint8)(tmpIRead_0[5] >> 15) & 1U) != 0U) {
    /* Switch: '<S6>/Switch7' incorporates:
     *  Constant: '<S6>/Constant11'
     *  Switch: '<S6>/Switch6'
     */
    Switch6 = 3U;
  } else if (((uint8)(tmpIRead_0[5] >> 4) & 1U) != 0U) {
    /* Switch: '<S6>/Switch8' incorporates:
     *  Constant: '<S6>/Constant12'
     *  Switch: '<S6>/Switch6'
     *  Switch: '<S6>/Switch7'
     */
    Switch6 = 4U;
  } else {
    /* Switch: '<S6>/Switch6' incorporates:
     *  Constant: '<S6>/Constant13'
     *  Switch: '<S6>/Switch7'
     *  Switch: '<S6>/Switch8'
     */
    Switch6 = 0U;
  }

  /* End of Switch: '<S6>/Switch6' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EFuse_ComCnvTx_Runnable_10ms' */

  /* Inport: '<Root>/EFuse_au32CurrFild_Val' */
  tmpIRead = Rte_IRead_EFuse_ComCnvTx_Runnable_10ms_EFuse_au32CurrFild_Val();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EFuse_ComCnvTx_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EFuse_ComCnvTx_Runnable_10ms_sys'
   */
  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant7'
   *  Inport: '<Root>/EFuse_flgAllwSleep_Val'
   */
  if (EFuse_EnPreSleepSig) {
    tmp = Rte_IRead_EFuse_ComCnvTx_Runnable_10ms_EFuse_flgAllwSleep_Val();
  } else {
    tmp = 0;
  }

  /* End of Switch: '<S1>/Switch' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EFuse_ComCnvTx_Runnable_10ms' */

  /* Outport: '<Root>/gEFUSE_u32AllowSleep_Local_Val' */
  Rte_IWrite_EFuse_ComCnvTx_Runnable_10ms_gEFUSE_u32AllowSleep_Local_Val((uint32)
    tmp);

  /* RootInportFunctionCallGenerator generated from: '<Root>/EFuse_ComCnvTx_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EFuse_ComCnvTx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/ComTx_bIPDS_ADCBackup1PowerSt_Val' incorporates:
   *  Constant: '<S6>/Constant8'
   *  RelationalOperator: '<S6>/Relational Operator'
   */
  Rte_IWrite_EFuse_ComCnvTx_Runnable_10ms_ComTx_bIPDS_ADCBackup1PowerSt_Val
    (Switch3 == 0);

  /* Outport: '<Root>/ComTx_bIPDS_ADCBackup2PowerSt_Val' incorporates:
   *  Constant: '<S6>/Constant14'
   *  RelationalOperator: '<S6>/Relational Operator2'
   */
  Rte_IWrite_EFuse_ComCnvTx_Runnable_10ms_ComTx_bIPDS_ADCBackup2PowerSt_Val
    (Switch6 == 0);

  /* Outport: '<Root>/ComTx_bIPDS_RearDCDCPowerSt_Val' incorporates:
   *  Constant: '<S6>/Constant9'
   *  RelationalOperator: '<S6>/Relational Operator1'
   */
  Rte_IWrite_EFuse_ComCnvTx_Runnable_10ms_ComTx_bIPDS_RearDCDCPowerSt_Val(Switch
    == 0);

  /* Outport: '<Root>/ComTx_u16IPDS_ADCBackup1PowerCurrent_Val' incorporates:
   *  Constant: '<S5>/Constant1'
   *  DataTypeConversion: '<S5>/Data Type Conversion1'
   *  Product: '<S5>/Divide1'
   */
  Rte_IWrite_EFuse_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_ADCBackup1PowerCurrent_Val
    ((uint16)((float64)tmpIRead[4] / 100.0));

  /* Outport: '<Root>/ComTx_u16IPDS_ADCBackup2PowerCurrent_Val' incorporates:
   *  Constant: '<S5>/Constant2'
   *  DataTypeConversion: '<S5>/Data Type Conversion2'
   *  Product: '<S5>/Divide2'
   */
  Rte_IWrite_EFuse_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_ADCBackup2PowerCurrent_Val
    ((uint16)((float64)tmpIRead[5] / 100.0));

  /* Outport: '<Root>/ComTx_u16IPDS_RearDCDCPowerCurrent_Val' incorporates:
   *  Constant: '<S5>/Constant'
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  Product: '<S5>/Divide'
   */
  Rte_IWrite_EFuse_ComCnvTx_Runnable_10ms_ComTx_u16IPDS_RearDCDCPowerCurrent_Val
    ((uint16)((float64)tmpIRead[0] / 100.0));

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EFuse_ComCnvTx_Runnable_10ms' */

  /* Outport: '<Root>/ComTx_u8IPDS_ADCBackup1PowerFaultSt_Val' */
  Rte_IWrite_EFuse_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_ADCBackup1PowerFaultSt_Val
    (Switch3);

  /* Outport: '<Root>/ComTx_u8IPDS_ADCBackup2PowerFaultSt_Val' */
  Rte_IWrite_EFuse_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_ADCBackup2PowerFaultSt_Val
    (Switch6);

  /* Outport: '<Root>/ComTx_u8IPDS_RearDCDCPowerFaultSt_Val' */
  Rte_IWrite_EFuse_ComCnvTx_Runnable_10ms_ComTx_u8IPDS_RearDCDCPowerFaultSt_Val
    (Switch);
}

/* Model initialize function */
FUNC(void, EFuse_ComCnvTx_CODE) EFuse_ComCnvTx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
