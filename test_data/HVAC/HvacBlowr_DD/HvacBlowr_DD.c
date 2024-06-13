/*
 * File: HvacBlowr_DD.c
 *
 * Code generated for Simulink model 'HvacBlowr_DD'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Sep 29 14:46:33 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HvacBlowr_DD.h"
#include "HvacBlowr_DD_private.h"

/* Model step function for TID1 */
FUNC(void, HvacBlowr_DD_CODE) HvacBlowr_DD_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacBlowr_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/HvacBlowr_DD_Runnable_10ms_sys'
   */
  /* If: '<S3>/If' incorporates:
   *  Inport: '<Root>/gCFG_u8BlowrCtrlTyp_Val'
   */
  if (Rte_IRead_HvacBlowr_DD_Runnable_10ms_gCFG_u8BlowrCtrlTyp_Val() == 0) {
    /* Outputs for IfAction SubSystem: '<S3>/PWM_Blower' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* FunctionCaller: '<S6>/IoHwAb_IoSigPwm_Pwm_SetDuty' incorporates:
     *  Constant: '<S6>/Constant5'
     *  DataTypeConversion: '<S6>/DataTypeConversion3'
     *  Inport: '<Root>/HvacBlowr_ratPWMBlowr_Val'
     *  Product: '<S6>/Product'
     *  Saturate: '<S6>/Saturation'
     */
    Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_FrntPWMBlowr, (uint16)Mfl_Limit_f32((float32)Rte_IRead_HvacBlowr_DD_Runnable_10ms_HvacBlowr_ratPWMBlowr_Val() * 327.68F, 0.0F, 32768.0F));

    /* FunctionCaller: '<S6>/IoHwAb_IoSigPwm_Pwm_SetPerd' incorporates:
     *  Constant: '<S6>/Constant'
     *  Constant: '<S6>/Constant1'
     *  Inport: '<Root>/HvacBlowr_freqPWMBlowr_Val'
     *  MinMax: '<S6>/MinMax'
     *  Product: '<S6>/Divide'
     */
    Rte_Call_IoHwAb_IoSigPwm_Pwm_SetPerd(O_P_FrntPWMBlowr, (uint32)(1.0E+6F / (float32)Mfx_Max_u16(35U, Rte_IRead_HvacBlowr_DD_Runnable_10ms_HvacBlowr_freqPWMBlowr_Val())));

    /* End of Outputs for SubSystem: '<S3>/PWM_Blower' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/Linear_Blower' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* FunctionCaller: '<S5>/IoHwAb_IoSigDio_Do_Set3' incorporates:
     *  DataTypeConversion: '<S5>/DataTypeConversion5'
     *  Inport: '<Root>/HvacBlowr_bLPMBlowrEna_Val'
     */
    Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_EN_FrntLPMBlowr, (uint8)Rte_IRead_HvacBlowr_DD_Runnable_10ms_HvacBlowr_bLPMBlowrEna_Val());

    /* FunctionCaller: '<S5>/IoHwAb_IoSigPwm_Pwm_SetDuty2' incorporates:
     *  Constant: '<S5>/Constant13'
     *  DataTypeConversion: '<S5>/DataTypeConversion6'
     *  Inport: '<Root>/HvacBlowr_ratLPMBlowr_Val'
     *  Product: '<S5>/Product1'
     *  Saturate: '<S5>/Saturation1'
     */
    Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_FrntLPMBlowr, (uint16)Mfl_Limit_f32((float32)Rte_IRead_HvacBlowr_DD_Runnable_10ms_HvacBlowr_ratLPMBlowr_Val() * 32.768F, 0.0F, 32768.0F));

    /* End of Outputs for SubSystem: '<S3>/Linear_Blower' */
  }

  /* End of If: '<S3>/If' */

  /* If: '<S4>/If' incorporates:
   *  Inport: '<Root>/gCFG_u8ReBlowrCtrlTyp_Val'
   */
  if (Rte_IRead_HvacBlowr_DD_Runnable_10ms_gCFG_u8ReBlowrCtrlTyp_Val() == 0) {
    /* Outputs for IfAction SubSystem: '<S4>/PWM_Blower' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* FunctionCaller: '<S8>/IoHwAb_IoSigPwm_Pwm_SetDuty' incorporates:
     *  Constant: '<S8>/Constant5'
     *  DataTypeConversion: '<S8>/DataTypeConversion3'
     *  Inport: '<Root>/HvacBlowr_ratRePWMBlowr_Val'
     *  Product: '<S8>/Product'
     *  Saturate: '<S8>/Saturation'
     */
    Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_RePWMBlowr, (uint16)Mfl_Limit_f32((float32)Rte_IRead_HvacBlowr_DD_Runnable_10ms_HvacBlowr_ratRePWMBlowr_Val() * 327.68F, 0.0F, 32768.0F));

    /* FunctionCaller: '<S8>/IoHwAb_IoSigPwm_Pwm_SetPerd' incorporates:
     *  Constant: '<S8>/Constant'
     *  Constant: '<S8>/Constant1'
     *  Inport: '<Root>/HvacBlowr_freqRePWMBlowr_Val'
     *  MinMax: '<S8>/MinMax'
     *  Product: '<S8>/Divide'
     */
    Rte_Call_IoHwAb_IoSigPwm_Pwm_SetPerd(O_P_RePWMBlowr, (uint32)(1.0E+6F / (float32)Mfx_Max_u16(35U, Rte_IRead_HvacBlowr_DD_Runnable_10ms_HvacBlowr_freqRePWMBlowr_Val())));

    /* End of Outputs for SubSystem: '<S4>/PWM_Blower' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/Linear_Blower' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* FunctionCaller: '<S7>/IoHwAb_IoSigDio_Do_Set3' incorporates:
     *  DataTypeConversion: '<S7>/DataTypeConversion5'
     *  Inport: '<Root>/HvacBlowr_bReLPMBlowrEna_Val'
     */
    Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_EN_ReLPMBlowr, (uint8)Rte_IRead_HvacBlowr_DD_Runnable_10ms_HvacBlowr_bReLPMBlowrEna_Val());

    /* FunctionCaller: '<S7>/IoHwAb_IoSigPwm_Pwm_SetDuty2' incorporates:
     *  Constant: '<S7>/Constant13'
     *  DataTypeConversion: '<S7>/DataTypeConversion6'
     *  Inport: '<Root>/HvacBlowr_ratReLPMBlowr_Val'
     *  Product: '<S7>/Product1'
     *  Saturate: '<S7>/Saturation1'
     */
    Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_ReLPMBlowr, (uint16)Mfl_Limit_f32((float32)Rte_IRead_HvacBlowr_DD_Runnable_10ms_HvacBlowr_ratReLPMBlowr_Val() * 32.768F, 0.0F, 32768.0F));

    /* End of Outputs for SubSystem: '<S4>/Linear_Blower' */
  }

  /* End of If: '<S4>/If' */

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Do_Set3' incorporates:
   *  Constant: '<S1>/Constant'
   */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_RiHVAC5VSply, 1);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_HvacBlowr_DD_Runnable_10ms_at_outport_1' */
}

/* Model initialize function */
FUNC(void, HvacBlowr_DD_CODE) HvacBlowr_DD_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
