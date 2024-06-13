/*
 * File: IntLamp_DD.c
 *
 * Code generated for Simulink model 'IntLamp_DD'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Oct 19 14:56:15 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "IntLamp_DD.h"

/* Model step function for TID1 */
void IntLamp_DD_Runnable_IN_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  /* (no output/update code required) */
}

/* Model step function for TID2 */
void IntLamp_DD_Runnable_OUT_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  boolean tmpRead;
  boolean tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  float32 tmp;
  uint16 tmpRead_3;

  /* Inport: '<Root>/gINL_u8TrunkLampOutput_Val' */
  Rte_Read_gINL_u8TrunkLampOutput_Val(&tmpRead_2);

  /* Inport: '<Root>/gINL_u8RearBackGroudLightOutput_Val' */
  Rte_Read_gINL_u8RearBackGroudLightOutput_Val(&tmpRead_1);

  /* Inport: '<Root>/gINL_bRRCourtesyLightOutput_Val' */
  Rte_Read_gINL_bRRCourtesyLightOutput_Val(&tmpRead_0);

  /* Inport: '<Root>/gINL_bRLCourtesyLightOutput_Val' */
  Rte_Read_gINL_bRLCourtesyLightOutput_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_IntLamp_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/IntLamp_DD_Runnable_OUT_10ms_sys'
   */
  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant9'
   */
  if (tmpRead) {
    tmpRead_3 = 32768U;
  } else {
    tmpRead_3 = 0U;
  }

  /* End of Switch: '<S5>/Switch' */

  /* FunctionCaller: '<S5>/IoHwAb_IoSigPwm_Pwm_SetDuty' */
  Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_RLCourtesyLi, tmpRead_3);

  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/Constant2'
   *  Constant: '<S4>/Constant3'
   */
  if (tmpRead_0) {
    tmpRead_3 = 32768U;
  } else {
    tmpRead_3 = 0U;
  }

  /* End of Switch: '<S4>/Switch1' */

  /* FunctionCaller: '<S4>/IoHwAb_IoSigPwm_Pwm_SetDuty' */
  Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_RRCourtesyLi, tmpRead_3);

  /* Product: '<S6>/Product2' incorporates:
   *  Constant: '<S6>/Constant5'
   */
  tmp = (float32)tmpRead_1 * 327.68F;
  if (tmp < 65536.0F) {
    tmpRead_3 = (uint16)tmp;
  } else {
    tmpRead_3 = MAX_uint16_T;
  }

  /* Saturate: '<S6>/Saturation2' incorporates:
   *  Product: '<S6>/Product2'
   */
  if (tmpRead_3 >= 32768) {
    tmpRead_3 = 32768U;
  }

  /* End of Saturate: '<S6>/Saturation2' */

  /* FunctionCaller: '<S6>/IoHwAb_IoSigPwm_Pwm_SetDuty' */
  Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_RearBkgLi, tmpRead_3);

  /* Product: '<S7>/Product1' incorporates:
   *  Constant: '<S7>/Constant4'
   */
  tmp = (float32)tmpRead_2 * 327.68F;
  if (tmp < 65536.0F) {
    tmpRead_3 = (uint16)tmp;
  } else {
    tmpRead_3 = MAX_uint16_T;
  }

  /* Saturate: '<S7>/Saturation1' incorporates:
   *  Product: '<S7>/Product1'
   */
  if (tmpRead_3 >= 32768) {
    tmpRead_3 = 32768U;
  }

  /* End of Saturate: '<S7>/Saturation1' */

  /* FunctionCaller: '<S7>/IoHwAb_IoSigPwm_Pwm_SetDuty' */
  Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_TrunkLi, tmpRead_3);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_IntLamp_DD_Runnable_OUT_10ms_at_outport_1' */
}

/* Model initialize function */
void IntLamp_DD_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
