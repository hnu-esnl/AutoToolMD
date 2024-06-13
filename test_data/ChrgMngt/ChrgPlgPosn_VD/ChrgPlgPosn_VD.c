/*
 * File: ChrgPlgPosn_VD.c
 *
 * Code generated for Simulink model 'ChrgPlgPosn_VD'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Sep 27 21:10:39 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ChrgPlgPosn_VD.h"
#include "ChrgPlgPosn_VD_private.h"

/* Block signals (default storage) */
VAR(B_ChrgPlgPosn_VD_T, ChrgPlgPosn_VD_VAR) ChrgPlgPosn_VD_B;

/* Model step function for TID1 */
FUNC(void, ChrgPlgPosn_VD_CODE) ChrgPlgPosn_VD_Runnable_1ms(void) /* Sample time: [0.001s, 0.0s] */
{
  boolean rtb_DTC_ChgrPlugLockSnsrErr_G_f;
  boolean rtb_DTC_ChgrPlugLockSnsrErr__jv;
  uint8 Switch3;
  Dem_EventStatusType Switch3_0;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgPlgPosn_VD_Runnable_1ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgPlgPosn_VD_Runnable_1ms_sys'
   */
  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_ChrgPlgPosn, &ChrgPlgPosn_VD_B.IoHwAb_IoSigDio_Di_Get_o1);

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get1' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_ChrgPlgPosn2, &ChrgPlgPosn_VD_B.IoHwAb_IoSigDio_Di_Get1_o1);

  /* Switch: '<S1>/Switch3' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S1>/Constant4'
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S1>/Constant7'
   *  Constant: '<S1>/Constant8'
   *  Logic: '<S1>/LogicalOperator'
   *  Logic: '<S1>/LogicalOperator1'
   *  Logic: '<S1>/LogicalOperator2'
   *  RelationalOperator: '<S1>/RelationalOperator'
   *  RelationalOperator: '<S1>/RelationalOperator1'
   *  RelationalOperator: '<S1>/RelationalOperator2'
   *  RelationalOperator: '<S1>/RelationalOperator3'
   *  RelationalOperator: '<S1>/RelationalOperator4'
   *  RelationalOperator: '<S1>/RelationalOperator5'
   *  Switch: '<S1>/Switch1'
   *  Switch: '<S1>/Switch2'
   */
  if ((ChrgPlgPosn_VD_B.IoHwAb_IoSigDio_Di_Get_o1 == 1) && (ChrgPlgPosn_VD_B.IoHwAb_IoSigDio_Di_Get1_o1 == 1)) {
    Switch3 = 2U;
  } else if ((ChrgPlgPosn_VD_B.IoHwAb_IoSigDio_Di_Get_o1 == 0) && (ChrgPlgPosn_VD_B.IoHwAb_IoSigDio_Di_Get1_o1 == 1)) {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S1>/Constant6'
     */
    Switch3 = 0U;
  } else if ((ChrgPlgPosn_VD_B.IoHwAb_IoSigDio_Di_Get_o1 == 1) && (ChrgPlgPosn_VD_B.IoHwAb_IoSigDio_Di_Get1_o1 == 0)) {
    /* Switch: '<S1>/Switch2' incorporates:
     *  Constant: '<S1>/Constant9'
     *  Switch: '<S1>/Switch1'
     */
    Switch3 = 1U;
  } else {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S1>/Constant12'
     *  Switch: '<S1>/Switch2'
     */
    Switch3 = 3U;
  }

  /* End of Switch: '<S1>/Switch3' */

  /* If: '<S1>/If' incorporates:
   *  Constant: '<S1>/Constant13'
   *  Inport: '<Root>/BattU_bVoltEnbPinDiag_Val'
   *  Inport: '<Root>/VehCoorn_stPwrMod_Val'
   *  Logic: '<S1>/LogicalOperator3'
   *  RelationalOperator: '<S1>/RelationalOperator6'
   */
  if (Rte_IRead_ChrgPlgPosn_VD_Runnable_1ms_BattU_bVoltEnbPinDiag_Val() && (Rte_IRead_ChrgPlgPosn_VD_Runnable_1ms_VehCoorn_stPwrMod_Val() != 0)) {
    /* Outputs for IfAction SubSystem: '<S1>/ChrgPlgPosnFailDiagSet' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S4>/Constant1'
     *  Constant: '<S4>/Constant14'
     *  Constant: '<S4>/Constant2'
     *  RelationalOperator: '<S4>/RelationalOperator7'
     */
    if (Switch3 == 2) {
      Switch3_0 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      Switch3_0 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S4>/Switch' */

    /* FunctionCaller: '<S4>/DTC_ChgrPlugLockSnsrErr_SetEventStatus' */
    Rte_Call_DTC_ChgrPlugLockSnsrErr_SetEventStatus(Switch3_0);

    /* End of Outputs for SubSystem: '<S1>/ChrgPlgPosnFailDiagSet' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/ChrgPlgPosnFailDiagDebounceReSet' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* FunctionCaller: '<S3>/DTC_ChgrPlugLockSnsrErr_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S3>/Constant'
     */
    Rte_Call_DTC_ChgrPlugLockSnsrErr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S1>/ChrgPlgPosnFailDiagDebounceReSet' */
  }

  /* End of If: '<S1>/If' */

  /* FunctionCaller: '<S1>/DTC_ChgrPlugLockSnsrErr_GetEventFailed' */
  Rte_Call_DTC_ChgrPlugLockSnsrErr_GetEventFailed(&rtb_DTC_ChgrPlugLockSnsrErr_G_f);

  /* FunctionCaller: '<S1>/DTC_ChgrPlugLockSnsrErr_GetEventTested' */
  Rte_Call_DTC_ChgrPlugLockSnsrErr_GetEventTested(&rtb_DTC_ChgrPlugLockSnsrErr__jv);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgPlgPosn_VD_Runnable_1ms_at_outport_1' */

  /* Outport: '<Root>/ChrgPlgPosn_st_Val' */
  Rte_IWrite_ChrgPlgPosn_VD_Runnable_1ms_ChrgPlgPosn_st_Val(Switch3);

  /* Outport: '<Root>/ChrgPlgPosn_stRaw_Val' */
  Rte_IWrite_ChrgPlgPosn_VD_Runnable_1ms_ChrgPlgPosn_stRaw_Val(ChrgPlgPosn_VD_B.IoHwAb_IoSigDio_Di_Get_o1);

  /* Outport: '<Root>/ChrgPlgPosn_stRaw2_Val' */
  Rte_IWrite_ChrgPlgPosn_VD_Runnable_1ms_ChrgPlgPosn_stRaw2_Val(ChrgPlgPosn_VD_B.IoHwAb_IoSigDio_Di_Get1_o1);
}

/* Model initialize function */
FUNC(void, ChrgPlgPosn_VD_CODE) ChrgPlgPosn_VD_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
