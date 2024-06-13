/*
 * File: ChrgMngt_ComCnvRx.c
 *
 * Code generated for Simulink model 'ChrgMngt_ComCnvRx'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Sep 30 12:14:14 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ChrgMngt_ComCnvRx.h"
#include "ChrgMngt_ComCnvRx_private.h"

/* Exported block states */
VAR(Efx_DebounceState_Type, ChrgMngt_ComCnvRx_VAR) ChrgMngt_ComCnvRx_PlgLockTON_I;/* Simulink.Signal object 'ChrgMngt_ComCnvRx_PlgLockTON_I'
                                                                                   * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                                   */
VAR(Efx_DebounceState_Type, ChrgMngt_ComCnvRx_VAR) ChrgMngt_ComCnvRx_PlgUnLockTON_I;/* Simulink.Signal object 'ChrgMngt_ComCnvRx_PlgUnLockTON_I'
                                                                                     * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                                     */

/* Block states (default storage) */
VAR(DW_ChrgMngt_ComCnvRx_T, ChrgMngt_ComCnvRx_VAR) ChrgMngt_ComCnvRx_DW;

/* Model step function for TID1 */
FUNC(void, ChrgMngt_ComCnvRx_CODE) ChrgMngt_ComCnvRx_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  boolean rtb_RelationalOperator1;
  boolean rtb_Efx_Debounce_sf;
  boolean rtb_RelationalOperator2;
  boolean rtb_Efx_Debounce_sf_f;
  uint8 rtb_MultiportSwitch;
  uint8 rtb_Switch25;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvRx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgMngt_ComCnvRx_Runnable_10ms_sys'
   */
  /* Switch: '<S1>/Switch25' incorporates:
   *  Inport: '<Root>/ComRx_u8VCU_ElecUnlockDrvReq_A02_Val'
   *  Inport: '<Root>/ComRx_u8VCU_ElecUnlockDrvReq_A09_Val'
   *  Inport: '<Root>/gPRM_u8VehicleTypeCfg_Val'
   */
  if (Rte_IRead_ChrgMngt_ComCnvRx_Runnable_10ms_gPRM_u8VehicleTypeCfg_Val() != 0) {
    rtb_Switch25 = Rte_IRead_ChrgMngt_ComCnvRx_Runnable_10ms_ComRx_u8VCU_ElecUnlockDrvReq_A09_Val();
  } else {
    rtb_Switch25 = Rte_IRead_ChrgMngt_ComCnvRx_Runnable_10ms_ComRx_u8VCU_ElecUnlockDrvReq_A02_Val();
  }

  /* End of Switch: '<S1>/Switch25' */

  /* RelationalOperator: '<S1>/RelationalOperator1' incorporates:
   *  Constant: '<S1>/Constant4'
   */
  rtb_RelationalOperator1 = (rtb_Switch25 == 1);

  /* S-Function (Efx_Debounce_sf): '<S3>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S3>/Reset'
   *  Constant: '<S3>/THighLow'
   *  Constant: '<S3>/X_Init'
   *  S-Function (Upcast_sf): '<S3>/Upcast'
   *  S-Function (Upcast_sf): '<S3>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 6);
    rtb_Efx_Debounce_sf = Efx_Debounce_u8_u8(rtb_RelationalOperator1, &ChrgMngt_ComCnvRx_PlgLockTON_I, &paramdebounce_loc, 10000 );
  }

  /* RelationalOperator: '<S1>/RelationalOperator2' incorporates:
   *  Constant: '<S1>/Constant8'
   */
  rtb_RelationalOperator2 = (rtb_Switch25 == 2);

  /* S-Function (Efx_Debounce_sf): '<S4>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant7'
   *  Constant: '<S1>/Constant9'
   *  Constant: '<S4>/Reset'
   *  Constant: '<S4>/THighLow'
   *  Constant: '<S4>/X_Init'
   *  S-Function (Upcast_sf): '<S4>/Upcast'
   *  S-Function (Upcast_sf): '<S4>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 6);
    rtb_Efx_Debounce_sf_f = Efx_Debounce_u8_u8(rtb_RelationalOperator2, &ChrgMngt_ComCnvRx_PlgUnLockTON_I, &paramdebounce_loc, 10000 );
  }

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant2'
   *  RelationalOperator: '<S1>/RelationalOperator'
   */
  if (rtb_Switch25 != 0) {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S1>/Constant6'
     *  Switch: '<S1>/Switch2'
     *  UnitDelay: '<S1>/UnitDelay'
     */
    if (rtb_Efx_Debounce_sf) {
      rtb_Switch25 = 1U;
    } else if (rtb_Efx_Debounce_sf_f) {
      /* Switch: '<S1>/Switch2' incorporates:
       *  Constant: '<S1>/Constant10'
       */
      rtb_Switch25 = 2U;
    } else {
      rtb_Switch25 = ChrgMngt_ComCnvRx_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S1>/Switch1' */
  }

  /* End of Switch: '<S1>/Switch' */

  /* MultiPortSwitch: '<S1>/MultiportSwitch' incorporates:
   *  Constant: '<S1>/Constant41'
   *  Constant: '<S1>/Constant42'
   *  Constant: '<S1>/Constant43'
   */
  switch (rtb_Switch25) {
   case 1:
    rtb_MultiportSwitch = 0U;
    break;

   case 2:
    rtb_MultiportSwitch = 1U;
    break;

   default:
    rtb_MultiportSwitch = 2U;
    break;
  }

  /* End of MultiPortSwitch: '<S1>/MultiportSwitch' */

  /* Update for UnitDelay: '<S1>/UnitDelay' */
  ChrgMngt_ComCnvRx_DW.UnitDelay_DSTATE = rtb_Switch25;

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvRx_Runnable_10ms_at_outport_1' */

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvRx_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgMngt_ComCnvRx_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/ChrgIndcr_stCtrlTyp_Val' incorporates:
   *  Inport: '<Root>/ComRx_u8VCU_Chglampflashreq_Val'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtDataTypeConversion16Inport1'
   */
  Rte_IWrite_ChrgMngt_ComCnvRx_Runnable_10ms_ChrgIndcr_stCtrlTyp_Val(Rte_IRead_ChrgMngt_ComCnvRx_Runnable_10ms_ComRx_u8VCU_Chglampflashreq_Val());

  /* Outport: '<Root>/ChrgIndcr_stReq_Val' incorporates:
   *  Inport: '<Root>/ComRx_u8VCU_Chglamplightreq_Val'
   *  SignalConversion: '<S1>/TmpSignal ConversionAtDataTypeConversion18Inport1'
   */
  Rte_IWrite_ChrgMngt_ComCnvRx_Runnable_10ms_ChrgIndcr_stReq_Val(Rte_IRead_ChrgMngt_ComCnvRx_Runnable_10ms_ComRx_u8VCU_Chglamplightreq_Val());

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgMngt_ComCnvRx_Runnable_10ms_at_outport_1' */

  /* Outport: '<Root>/ChrgPlg_stPlgLockCmd_Val' */
  Rte_IWrite_ChrgMngt_ComCnvRx_Runnable_10ms_ChrgPlg_stPlgLockCmd_Val(rtb_MultiportSwitch);
}

/* Model initialize function */
FUNC(void, ChrgMngt_ComCnvRx_CODE) ChrgMngt_ComCnvRx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
