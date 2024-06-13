/*
 * File: HvacBlowr_Ctrl.c
 *
 * Code generated for Simulink model 'HvacBlowr_Ctrl'.
 *
 * Model version                  : 1.15
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Oct 26 19:58:52 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HvacBlowr_Ctrl.h"
#include "HvacBlowr_Ctrl_private.h"

/* Block states (default storage) */
VAR(DW_HvacBlowr_Ctrl_T, HvacBlowr_Ctrl_VAR) HvacBlowr_Ctrl_DW;

/* Model step function for TID1 */
FUNC(void, HvacBlowr_Ctrl_CODE) HvacBlowr_Ctrl_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  boolean tmpRead_3;
  uint8 rtb_TmpSignalConversionAtHvacBl;
  sint16 rtb_IoHwAb_IoSigAdc_AdcFac_Get1;
  sint16 rtb_IoHwAb_IoSigAdc_AdcFac_G_l2;
  sint16 rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a;
  uint8 rtb_TmpSignalConversionAtHvac_h;
  uint8 rtb_Switch;
  sint16 tmp;
  sint16 tmp_0;
  uint16 tmp_HvacBlowr_freqPWMBlowr2_C;
  uint16 tmp_HvacBlowr_freqPWMBlowr1_C;
  uint16 tmp_HvacBlowr_freqPWMBlowr3_C;
  HvacBlowr_ratRePWMBlowrCnv_CUR_Type *tmp_HvacBlowr_ratRePWMBlowrCnv_;
  HvacBlowr_ratPWMBlowrCnv_CUR_Type *tmp_HvacBlowr_ratPWMBlowrCnv_CU;
  HvacBlowr_ratReLPMBlowrCnv_CUR_Type *tmp_HvacBlowr_ratReLPMBlowrCnv_;
  HvacBlowr_stLvlReLPMBlowrCnv_CUR_Type *tmp_HvacBlowr_stLvlReLPMBlowrCn;
  HvacBlowr_ratLPMBlowrCnv_CUR_Type *tmp_HvacBlowr_ratLPMBlowrCnv_CU;
  HvacBlowr_stLvlLPMBlowrCnv_CUR_Type *tmp_HvacBlowr_stLvlLPMBlowrCnv_;
  tmp_HvacBlowr_stLvlLPMBlowrCnv_ = Rte_CData_HvacBlowr_stLvlLPMBlowrCnv_CUR();
  tmp_HvacBlowr_ratLPMBlowrCnv_CU = Rte_CData_HvacBlowr_ratLPMBlowrCnv_CUR();
  tmp_HvacBlowr_stLvlReLPMBlowrCn = Rte_CData_HvacBlowr_stLvlReLPMBlowrCnv_CUR();
  tmp_HvacBlowr_ratReLPMBlowrCnv_ = Rte_CData_HvacBlowr_ratReLPMBlowrCnv_CUR();
  tmp_HvacBlowr_ratPWMBlowrCnv_CU = Rte_CData_HvacBlowr_ratPWMBlowrCnv_CUR();
  tmp_HvacBlowr_ratRePWMBlowrCnv_ = Rte_CData_HvacBlowr_ratRePWMBlowrCnv_CUR();
  tmp_HvacBlowr_freqPWMBlowr3_C = Rte_CData_HvacBlowr_freqPWMBlowr3_C();
  tmp_HvacBlowr_freqPWMBlowr1_C = Rte_CData_HvacBlowr_freqPWMBlowr1_C();
  tmp_HvacBlowr_freqPWMBlowr2_C = Rte_CData_HvacBlowr_freqPWMBlowr2_C();

  /* Inport: '<Root>/HvacBlowr_stSpdLvlUdsFrnt_Val' */
  Rte_Read_HvacBlowr_stSpdLvlUdsFrnt_Val(&rtb_Switch);

  /* Inport: '<Root>/HvacBlowr_bUdsTrigFrnt_Val' */
  Rte_Read_HvacBlowr_bUdsTrigFrnt_Val(&tmpRead_3);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacBlowr_Ctrl_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HvacBlowr_Ctrl_Runnable_10ms_sys'
   */
  /* SignalConversion: '<S1>/TmpSignal ConversionAtHvacBlowr_stWindExitSpdLvl_Val_readOutport1' incorporates:
   *  Inport: '<Root>/HvacBlowr_stWindExitSpdLvl_Val'
   */
  Rte_Read_HvacBlowr_stWindExitSpdLvl_Val(&rtb_TmpSignalConversionAtHvacBl);

  /* DataStoreWrite: '<S3>/Data Store Write19' */
  HvacBlowr_Ctrl_DW.HvacBlowr_stWindExitSpdLvl = rtb_TmpSignalConversionAtHvacBl;

  /* Switch: '<S3>/Switch' */
  if (!tmpRead_3) {
    rtb_Switch = rtb_TmpSignalConversionAtHvacBl;
  }

  /* End of Switch: '<S3>/Switch' */

  /* FunctionCaller: '<S3>/IoHwAb_IoSigAdc_AdcFac_Get12' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_FrntLPMBlowrFb1, &rtb_IoHwAb_IoSigAdc_AdcFac_Get1);

  /* FunctionCaller: '<S3>/IoHwAb_IoSigAdc_AdcFac_Get13' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_FrntLPMBlowrFb2, &rtb_IoHwAb_IoSigAdc_AdcFac_G_l2);

  /* FunctionCaller: '<S3>/IoHwAb_IoSigAdc_AdcFac_Get15' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_FrntLPMBlowrCtlFb, &rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a);

  /* DataTypeConversion: '<S3>/DataTypeConversion15' */
  tmp_0 = rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a;
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a < 0) {
    tmp_0 = 0;
  }

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacBlowr_Ctrl_Runnable_10ms_at_outport_1' */

  /* Inport: '<Root>/gCFG_u8BlowrCtrlTyp_Val' */
  Rte_Read_gCFG_u8BlowrCtrlTyp_Val(&tmpRead_0);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacBlowr_Ctrl_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HvacBlowr_Ctrl_Runnable_10ms_sys'
   */
  /* If: '<S3>/If' incorporates:
   *  Inport: '<Root>/gCFG_u8BlowrCtrlFreqTyp_Val'
   */
  if (tmpRead_0 == 0) {
    Rte_Read_gCFG_u8BlowrCtrlFreqTyp_Val(&tmpRead);

    /* Outputs for IfAction SubSystem: '<S3>/PWM_Blower' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* MultiPortSwitch: '<S6>/MultiportSwitch' incorporates:
     *  Inport: '<Root>/gCFG_u8BlowrCtrlFreqTyp_Val'
     */
    switch (tmpRead) {
     case 1:
      /* Outport: '<Root>/HvacBlowr_freqPWMBlowr_Val' incorporates:
       *  Constant: '<S6>/PA_HvacBlowr_freqPWMBlowr1_C'
       */
      (void) Rte_Write_HvacBlowr_freqPWMBlowr_Val(tmp_HvacBlowr_freqPWMBlowr1_C);
      break;

     case 2:
      /* Outport: '<Root>/HvacBlowr_freqPWMBlowr_Val' incorporates:
       *  Constant: '<S6>/PA_HvacBlowr_freqPWMBlowr2_C'
       */
      (void) Rte_Write_HvacBlowr_freqPWMBlowr_Val(tmp_HvacBlowr_freqPWMBlowr2_C);
      break;

     default:
      /* Outport: '<Root>/HvacBlowr_freqPWMBlowr_Val' incorporates:
       *  Constant: '<S6>/PA_HvacBlowr_freqPWMBlowr3_C'
       */
      (void) Rte_Write_HvacBlowr_freqPWMBlowr_Val(tmp_HvacBlowr_freqPWMBlowr3_C);
      break;
    }

    /* End of MultiPortSwitch: '<S6>/MultiportSwitch' */

    /* Outport: '<Root>/HvacBlowr_stWindExitSpdLvlAct_Val' incorporates:
     *  Inport: '<S6>/HvacBlowr_stWindExitSpdLvl'
     *  SignalConversion: '<S6>/OutportBufferForHvacBlowr_stWindExitSpdLvlAct_Val_write'
     */
    (void) Rte_Write_HvacBlowr_stWindExitSpdLvlAct_Val(rtb_Switch);

    /* Outport: '<Root>/HvacBlowr_ratPWMBlowr_Val' incorporates:
     *  DataTypeConversion: '<S6>/DataTypeConversion'
     *  Inport: '<S6>/HvacBlowr_stWindExitSpdLvl'
     *  Lookup_n-D: '<S6>/HvacBlowr_ratPWMBlowrCnv_CUR'
     */
    (void) Rte_Write_HvacBlowr_ratPWMBlowr_Val(Ifx_IntIpoCur_u8_u8(rtb_Switch, tmp_HvacBlowr_ratPWMBlowrCnv_CU->N1, tmp_HvacBlowr_ratPWMBlowrCnv_CU->BP1, tmp_HvacBlowr_ratPWMBlowrCnv_CU->Table));

    /* End of Outputs for SubSystem: '<S3>/PWM_Blower' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/Linear_Blower' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* Outport: '<Root>/HvacBlowr_stWindExitSpdLvlAct_Val' incorporates:
     *  Constant: '<S5>/Constant1'
     *  Constant: '<S5>/Constant2'
     *  DataTypeConversion: '<S3>/DataTypeConversion15'
     *  Lookup_n-D: '<S5>/HvacBlowr_stLvlLPMBlowrCnv_CUR'
     *  Product: '<S5>/Divide1'
     *  Saturate: '<S5>/Saturation'
     *  Sum: '<S5>/Subtract'
     */
    (void) Rte_Write_HvacBlowr_stWindExitSpdLvlAct_Val(Ifx_IntIpoCur_u16_u8(Mfx_Min_u16(Mfx_Sub_u16u16_u16(1350U, (uint16)((float32)(uint16)tmp_0 / 10.0F)), 1350U), tmp_HvacBlowr_stLvlLPMBlowrCnv_->N1, tmp_HvacBlowr_stLvlLPMBlowrCnv_->BP1, tmp_HvacBlowr_stLvlLPMBlowrCnv_->Table));

    /* Outport: '<Root>/HvacBlowr_bLPMBlowrEna_Val' incorporates:
     *  Switch: '<S5>/Switch'
     */
    (void) Rte_Write_HvacBlowr_bLPMBlowrEna_Val(rtb_TmpSignalConversionAtHvacBl > 0);

    /* Outport: '<Root>/HvacBlowr_ratLPMBlowr_Val' incorporates:
     *  Lookup_n-D: '<S5>/HvacBlowr_ratLPMBlowrCnv_CUR'
     */
    (void) Rte_Write_HvacBlowr_ratLPMBlowr_Val(Ifx_IntIpoCur_u8_u16(rtb_TmpSignalConversionAtHvacBl, tmp_HvacBlowr_ratLPMBlowrCnv_CU->N1, tmp_HvacBlowr_ratLPMBlowrCnv_CU->BP1, tmp_HvacBlowr_ratLPMBlowrCnv_CU->Table));

    /* End of Outputs for SubSystem: '<S3>/Linear_Blower' */
  }

  /* End of If: '<S3>/If' */

  /* FunctionCaller: '<S4>/IoHwAb_IoSigAdc_AdcFac_Get15' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_ReLPMBlowrCtlFb, &rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a);

  /* DataTypeConversion: '<S4>/DataTypeConversion15' incorporates:
   *  DataStoreWrite: '<S4>/Data Store Write1'
   */
  tmp = rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a;
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a < 0) {
    tmp = 0;
  }

  HvacBlowr_Ctrl_DW.HvacBlowr_uReLPMBlowrFb = (uint16)tmp;

  /* End of DataTypeConversion: '<S4>/DataTypeConversion15' */

  /* SignalConversion: '<S1>/TmpSignal ConversionAtHvacBlowr_stReWindExitSpdLvl_Val_readOutport1' incorporates:
   *  Inport: '<Root>/HvacBlowr_stReWindExitSpdLvl_Val'
   */
  Rte_Read_HvacBlowr_stReWindExitSpdLvl_Val(&rtb_TmpSignalConversionAtHvac_h);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacBlowr_Ctrl_Runnable_10ms_at_outport_1' */

  /* Inport: '<Root>/gCFG_u8ReBlowrCtrlTyp_Val' */
  Rte_Read_gCFG_u8ReBlowrCtrlTyp_Val(&tmpRead_2);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacBlowr_Ctrl_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HvacBlowr_Ctrl_Runnable_10ms_sys'
   */
  /* If: '<S4>/If' incorporates:
   *  Inport: '<Root>/gCFG_u8ReBlowrCtrlFreqTyp_Val'
   */
  if (tmpRead_2 == 0) {
    Rte_Read_gCFG_u8ReBlowrCtrlFreqTyp_Val(&tmpRead_1);

    /* Outputs for IfAction SubSystem: '<S4>/PWM_Blower' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* MultiPortSwitch: '<S8>/MultiportSwitch' incorporates:
     *  Inport: '<Root>/gCFG_u8ReBlowrCtrlFreqTyp_Val'
     */
    switch (tmpRead_1) {
     case 1:
      /* Outport: '<Root>/HvacBlowr_freqRePWMBlowr_Val' incorporates:
       *  Constant: '<S8>/PA_HvacBlowr_freqPWMBlowr1_C'
       */
      (void) Rte_Write_HvacBlowr_freqRePWMBlowr_Val(tmp_HvacBlowr_freqPWMBlowr1_C);
      break;

     case 2:
      /* Outport: '<Root>/HvacBlowr_freqRePWMBlowr_Val' incorporates:
       *  Constant: '<S8>/PA_HvacBlowr_freqPWMBlowr2_C'
       */
      (void) Rte_Write_HvacBlowr_freqRePWMBlowr_Val(tmp_HvacBlowr_freqPWMBlowr2_C);
      break;

     default:
      /* Outport: '<Root>/HvacBlowr_freqRePWMBlowr_Val' incorporates:
       *  Constant: '<S8>/PA_HvacBlowr_freqPWMBlowr3_C'
       */
      (void) Rte_Write_HvacBlowr_freqRePWMBlowr_Val(tmp_HvacBlowr_freqPWMBlowr3_C);
      break;
    }

    /* End of MultiPortSwitch: '<S8>/MultiportSwitch' */

    /* Outport: '<Root>/HvacBlowr_stReWindExitSpdLvlAct_Val' incorporates:
     *  Inport: '<S8>/HvacBlowr_stReWindExitSpdLvl'
     *  SignalConversion: '<S8>/OutportBufferForHvacBlowr_stReWindExitSpdLvlAct_Val_write'
     */
    (void) Rte_Write_HvacBlowr_stReWindExitSpdLvlAct_Val(rtb_TmpSignalConversionAtHvac_h);

    /* Outport: '<Root>/HvacBlowr_ratRePWMBlowr_Val' incorporates:
     *  DataTypeConversion: '<S8>/DataTypeConversion'
     *  Inport: '<S8>/HvacBlowr_stReWindExitSpdLvl'
     *  Lookup_n-D: '<S8>/HvacBlowr_ratRePWMBlowrCnv_CUR'
     */
    (void) Rte_Write_HvacBlowr_ratRePWMBlowr_Val(Ifx_IntIpoCur_u8_u8(rtb_TmpSignalConversionAtHvac_h, tmp_HvacBlowr_ratRePWMBlowrCnv_->N1, tmp_HvacBlowr_ratRePWMBlowrCnv_->BP1, tmp_HvacBlowr_ratRePWMBlowrCnv_->Table));

    /* End of Outputs for SubSystem: '<S4>/PWM_Blower' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/Linear_Blower' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* Outport: '<Root>/HvacBlowr_stReWindExitSpdLvlAct_Val' incorporates:
     *  Constant: '<S7>/Constant'
     *  Constant: '<S7>/Constant1'
     *  DataStoreWrite: '<S4>/Data Store Write1'
     *  Lookup_n-D: '<S7>/HvacBlowr_stLvlReLPMBlowrCnv_CUR'
     *  Product: '<S7>/Divide'
     *  Saturate: '<S7>/Saturation'
     *  Sum: '<S7>/Subtract'
     */
    (void) Rte_Write_HvacBlowr_stReWindExitSpdLvlAct_Val(Ifx_IntIpoCur_u16_u8(Mfx_Min_u16(Mfx_Sub_u16u16_u16(1350U, (uint16)((float32)HvacBlowr_Ctrl_DW.HvacBlowr_uReLPMBlowrFb / 10.0F)), 1350U), tmp_HvacBlowr_stLvlReLPMBlowrCn->N1, tmp_HvacBlowr_stLvlReLPMBlowrCn->BP1, tmp_HvacBlowr_stLvlReLPMBlowrCn->Table));

    /* Outport: '<Root>/HvacBlowr_bReLPMBlowrEna_Val' incorporates:
     *  Switch: '<S7>/Switch'
     */
    (void) Rte_Write_HvacBlowr_bReLPMBlowrEna_Val(rtb_TmpSignalConversionAtHvac_h > 0);

    /* Outport: '<Root>/HvacBlowr_ratReLPMBlowr_Val' incorporates:
     *  Lookup_n-D: '<S7>/HvacBlowr_ratReLPMBlowrCnv_CUR'
     */
    (void) Rte_Write_HvacBlowr_ratReLPMBlowr_Val(Ifx_IntIpoCur_u8_u16(rtb_TmpSignalConversionAtHvac_h, tmp_HvacBlowr_ratReLPMBlowrCnv_->N1, tmp_HvacBlowr_ratReLPMBlowrCnv_->BP1, tmp_HvacBlowr_ratReLPMBlowrCnv_->Table));

    /* End of Outputs for SubSystem: '<S4>/Linear_Blower' */
  }

  /* End of If: '<S4>/If' */

  /* DataStoreWrite: '<S4>/Data Store Write19' */
  HvacBlowr_Ctrl_DW.HvacBlowr_stReWindExitSpdLvl = rtb_TmpSignalConversionAtHvac_h;

  /* FunctionCaller: '<S4>/IoHwAb_IoSigAdc_AdcFac_Get12' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_ReLPMBlowrFb1, &rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a);

  /* DataTypeConversion: '<S4>/DataTypeConversion12' incorporates:
   *  DataStoreWrite: '<S4>/Data Store Write16'
   */
  tmp = rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a;
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a < 0) {
    tmp = 0;
  }

  HvacBlowr_Ctrl_DW.HvacBlowr_uReLPMBlowrNegVolt = (uint16)tmp;

  /* End of DataTypeConversion: '<S4>/DataTypeConversion12' */

  /* FunctionCaller: '<S4>/IoHwAb_IoSigAdc_AdcFac_Get13' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_ReLPMBlowrFb2, &rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a);

  /* DataTypeConversion: '<S4>/DataTypeConversion13' incorporates:
   *  DataStoreWrite: '<S4>/Data Store Write17'
   */
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a < 0) {
    rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a = 0;
  }

  HvacBlowr_Ctrl_DW.HvacBlowr_uReLPMBlowrPosVolt = (uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Ge_a;

  /* End of DataTypeConversion: '<S4>/DataTypeConversion13' */

  /* DataTypeConversion: '<S3>/DataTypeConversion13' incorporates:
   *  DataStoreWrite: '<S3>/Data Store Write17'
   */
  if (rtb_IoHwAb_IoSigAdc_AdcFac_G_l2 < 0) {
    rtb_IoHwAb_IoSigAdc_AdcFac_G_l2 = 0;
  }

  HvacBlowr_Ctrl_DW.HvacBlowr_uLPMBlowrPosVolt = (uint16)rtb_IoHwAb_IoSigAdc_AdcFac_G_l2;

  /* End of DataTypeConversion: '<S3>/DataTypeConversion13' */

  /* DataTypeConversion: '<S3>/DataTypeConversion12' incorporates:
   *  DataStoreWrite: '<S3>/Data Store Write16'
   */
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Get1 < 0) {
    rtb_IoHwAb_IoSigAdc_AdcFac_Get1 = 0;
  }

  HvacBlowr_Ctrl_DW.HvacBlowr_uLPMBlowrNegVolt = (uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Get1;

  /* End of DataTypeConversion: '<S3>/DataTypeConversion12' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacBlowr_Ctrl_Runnable_10ms_at_outport_1' */

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacBlowr_Ctrl_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HvacBlowr_Ctrl_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/HvacBlowr_uRawLPMFb_Val' incorporates:
   *  DataTypeConversion: '<S3>/DataTypeConversion15'
   */
  (void) Rte_Write_HvacBlowr_uRawLPMFb_Val((uint16)tmp_0);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacBlowr_Ctrl_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, HvacBlowr_Ctrl_CODE) HvacBlowr_Ctrl_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
