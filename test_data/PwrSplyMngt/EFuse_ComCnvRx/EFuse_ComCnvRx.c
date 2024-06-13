/*
 * File: EFuse_ComCnvRx.c
 *
 * Code generated for Simulink model 'EFuse_ComCnvRx'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed Sep 28 14:01:21 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EFuse_ComCnvRx.h"
#include "EFuse_ComCnvRx_private.h"

/* Block states (default storage) */
VAR(DW_EFuse_ComCnvRx_T, EFuse_ComCnvRx_VAR) EFuse_ComCnvRx_DW;

/* Model step function for TID1 */
FUNC(void, EFuse_ComCnvRx_CODE) EFuse_ComCnvRx_Runnable_10ms(void)
                               /* Explicit Task: EFuse_ComCnvRx_Runnable_10ms */
{
  boolean rtb_RelationalOperator1;
  boolean tmp;

  /* RootInportFunctionCallGenerator generated from: '<Root>/EFuse_ComCnvRx_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EFuse_ComCnvRx_Runnable_10ms_sys'
   */
  /* RelationalOperator: '<S1>/Relational Operator1' incorporates:
   *  Constant: '<S1>/Constant1'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  rtb_RelationalOperator1 = (EFuse_ComCnvRx_DW.UnitDelay_DSTATE == 0);

  /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
   *  Inport: '<Root>/ComRx_u8UMM_UsageModeSt_Val'
   */
  EFuse_ComCnvRx_DW.UnitDelay_DSTATE =
    Rte_IRead_EFuse_ComCnvRx_Runnable_10ms_ComRx_u8UMM_UsageModeSt_Val();

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EFuse_ComCnvRx_Runnable_10ms' */

  /* RootInportFunctionCallGenerator generated from: '<Root>/EFuse_ComCnvRx_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EFuse_ComCnvRx_Runnable_10ms_sys'
   */
  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S1>/Constant4'
   *  Constant: '<S1>/Constant5'
   *  Inport: '<Root>/ModeM_u8EfuseGetLocHoldFlag_Val'
   *  Inport: '<Root>/gAppEcuM_u8EfuseGetLocHoldFlag_Val'
   *  Logic: '<S1>/Logical Operator1'
   *  RelationalOperator: '<S1>/Relational Operator2'
   *  RelationalOperator: '<S1>/Relational Operator3'
   */
  if (EFuse_PreSleepSigSelt) {
    tmp =
      (Rte_IRead_EFuse_ComCnvRx_Runnable_10ms_gAppEcuM_u8EfuseGetLocHoldFlag_Val
       () == 0);
  } else {
    tmp =
      ((Rte_IRead_EFuse_ComCnvRx_Runnable_10ms_ModeM_u8EfuseGetLocHoldFlag_Val()
        == 0) && EFuse_EnPreSleepSig);
  }

  /* End of Switch: '<S1>/Switch' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EFuse_ComCnvRx_Runnable_10ms' */

  /* Outport: '<Root>/EFuse_flgPreSleep_Val' */
  Rte_IWrite_EFuse_ComCnvRx_Runnable_10ms_EFuse_flgPreSleep_Val(tmp);

  /* RootInportFunctionCallGenerator generated from: '<Root>/EFuse_ComCnvRx_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EFuse_ComCnvRx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/EFuse_flgPwrModChng_Val' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/ComRx_u8UMM_UsageModeSt_Val'
   *  Logic: '<S1>/Logical Operator'
   *  RelationalOperator: '<S1>/Relational Operator'
   */
  Rte_IWrite_EFuse_ComCnvRx_Runnable_10ms_EFuse_flgPwrModChng_Val
    ((Rte_IRead_EFuse_ComCnvRx_Runnable_10ms_ComRx_u8UMM_UsageModeSt_Val() == 1)
     && rtb_RelationalOperator1);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EFuse_ComCnvRx_Runnable_10ms' */
}

/* Model initialize function */
FUNC(void, EFuse_ComCnvRx_CODE) EFuse_ComCnvRx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
