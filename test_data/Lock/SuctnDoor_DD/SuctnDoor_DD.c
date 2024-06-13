/*
 * File: SuctnDoor_DD.c
 *
 * Code generated for Simulink model 'SuctnDoor_DD'.
 *
 * Model version                  : 1.183
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Sep 30 16:00:26 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SuctnDoor_DD.h"
#include "SuctnDoor_DD_private.h"

/* Named constants for Chart: '<S31>/Chart' */
#define SuctnDoor_DD_IN_NoCmd          ((uint8)1U)
#define SuctnDoor_DD_IN_ReCmd          ((uint8)2U)

/* Exported block states */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FLCinchResetSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FLCinchResetSwDeb_I'
                                                                             * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                             */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FLElecDoorSwtDeb_I;/* Simulink.Signal object 'SuctnDoor_FLElecDoorSwtDeb_I'
                                                                            * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                            */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FLInPowerReleaseSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FLInPowerReleaseSwDeb_I'
                                                                                 * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                 */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FLPAWLSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FLPAWLSwDeb_I'
                                                                       * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                       */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FLSecondLockFeedbackSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FLSecondLockFeedbackSwDeb_I'
                                                                                     * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                     */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FRCinchResetSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FRCinchResetSwDeb_I'
                                                                             * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                             */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FRElecDoorCloseSwt_I;/* Simulink.Signal object 'SuctnDoor_FRElecDoorCloseSwt_I'
                                                                              * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                              */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FRPAWLSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FRPAWLSwDeb_I'
                                                                       * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                       */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FRPowerOutReleaseSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FRPowerOutReleaseSwDeb_I'
                                                                                  * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                  */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_FRSecondLockFeedbackSwDeb_I;/* Simulink.Signal object 'SuctnDoor_FRSecondLockFeedbackSwDeb_I'
                                                                                     * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                     */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_RLCinchResetSwDeb_I;/* Simulink.Signal object 'SuctnDoor_RLCinchResetSwDeb_I'
                                                                             * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                             */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_RLPowerInReleaseSwDeb_I;/* Simulink.Signal object 'SuctnDoor_RLPowerInReleaseSwDeb_I'
                                                                                 * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                 */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_RLSecondLockFeedbackSwDeb_I;/* Simulink.Signal object 'SuctnDoor_RLSecondLockFeedbackSwDeb_I'
                                                                                     * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                     */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_RRCinchResetSwDeb_I;/* Simulink.Signal object 'SuctnDoor_RRCinchResetSwDeb_I'
                                                                             * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                             */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_RRPowerInReleaseSwDeb_I;/* Simulink.Signal object 'SuctnDoor_RRPowerInReleaseSwDeb_I'
                                                                                 * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                 */
VAR(Efx_DebounceState_Type, SuctnDoor_DD_VAR) SuctnDoor_RRSecondLockFeedbackSwDeb_I;/* Simulink.Signal object 'SuctnDoor_RRSecondLockFeedbackSwDeb_I'
                                                                                     * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                     */

/* Block states (default storage) */
VAR(DW_SuctnDoor_DD_T, SuctnDoor_DD_VAR) SuctnDoor_DD_DW;

/*
 * Output and update for action system:
 *    '<S20>/Cinch'
 *    '<S21>/Cinch'
 */
FUNC(void, SuctnDoor_DD_CODE_LOCAL) SuctnDoor_DD_Cinch(P2VAR(boolean, AUTOMATIC, SuctnDoor_DD_VAR) rty_CinchPlusSt, P2VAR(boolean, AUTOMATIC, SuctnDoor_DD_VAR) rty_CinchMinusSt)
{
  /* SignalConversion: '<S23>/OutportBuffer_InsertedFor_CinchPlusSt_at_inport_0' incorporates:
   *  Constant: '<S23>/Constant'
   */
  *rty_CinchPlusSt = true;

  /* SignalConversion: '<S23>/OutportBuffer_InsertedFor_CinchMinusSt_at_inport_0' incorporates:
   *  Constant: '<S23>/Constant1'
   */
  *rty_CinchMinusSt = false;
}

/*
 * Output and update for action system:
 *    '<S20>/CinchRst'
 *    '<S21>/CinchRst'
 */
FUNC(void, SuctnDoor_DD_CODE_LOCAL) SuctnDoor_DD_CinchRst(P2VAR(boolean, AUTOMATIC, SuctnDoor_DD_VAR) rty_CinchPlusSt, P2VAR(boolean, AUTOMATIC, SuctnDoor_DD_VAR) rty_CinchMinusSt)
{
  /* SignalConversion: '<S24>/OutportBuffer_InsertedFor_CinchPlusSt_at_inport_0' incorporates:
   *  Constant: '<S24>/Constant'
   */
  *rty_CinchPlusSt = false;

  /* SignalConversion: '<S24>/OutportBuffer_InsertedFor_CinchMinusSt_at_inport_0' incorporates:
   *  Constant: '<S24>/Constant1'
   */
  *rty_CinchMinusSt = true;
}

/*
 * Output and update for action system:
 *    '<S20>/Switch Case Action Subsystem2'
 *    '<S20>/Switch Case Action Subsystem3'
 *    '<S21>/Switch Case Action Subsystem2'
 *    '<S21>/Switch Case Action Subsystem3'
 */
FUNC(void, SuctnDoor_DD_CODE_LOCAL) Suct_SwitchCaseActionSubsystem2(P2VAR(boolean, AUTOMATIC, SuctnDoor_DD_VAR) rty_CinchPlusSt, P2VAR(boolean, AUTOMATIC, SuctnDoor_DD_VAR) rty_CinchMinusSt)
{
  /* SignalConversion: '<S25>/OutportBuffer_InsertedFor_CinchPlusSt_at_inport_0' incorporates:
   *  Constant: '<S25>/Constant'
   */
  *rty_CinchPlusSt = false;

  /* SignalConversion: '<S25>/OutportBuffer_InsertedFor_CinchMinusSt_at_inport_0' incorporates:
   *  Constant: '<S25>/Constant1'
   */
  *rty_CinchMinusSt = false;
}

/*
 * Output and update for atomic system:
 *    '<S31>/Chart'
 *    '<S32>/Chart'
 */
FUNC(void, SuctnDoor_DD_CODE_LOCAL) SuctnDoor_DD_Chart(VAR(uint8, AUTOMATIC) rtu_u8CinchCmd, VAR(uint8, AUTOMATIC) rtu_TiOnForce, P2VAR(float64, AUTOMATIC, SuctnDoor_DD_VAR) rty_bCinchCmd, P2VAR(DW_Chart_SuctnDoor_DD_T, AUTOMATIC, SuctnDoor_DD_VAR) localDW)
{
  /* Chart: '<S31>/Chart' */
  /* Gateway: SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag/Chart */
  if (localDW->temporalCounter_i1 < 255U) {
    localDW->temporalCounter_i1++;
  }

  localDW->u8CinchCmd_prev = localDW->u8CinchCmd_start;
  localDW->u8CinchCmd_start = rtu_u8CinchCmd;

  /* Chart: '<S31>/Chart' */
  /* During: SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag/Chart */
  if (localDW->is_active_c3_SuctnDoor_DD == 0U) {
    localDW->u8CinchCmd_prev = rtu_u8CinchCmd;

    /* Entry: SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag/Chart */
    localDW->is_active_c3_SuctnDoor_DD = 1U;

    /* Entry Internal: SuctnDoor_DD_Runnable_OUT_10ms_sys/PowerStageDiag/FLCinchDiag/Chart */
    /* Transition: '<S33>:4' */
    localDW->is_c3_SuctnDoor_DD = SuctnDoor_DD_IN_NoCmd;

    /* Entry 'NoCmd': '<S33>:3' */
    /* '<S33>:3:1' bCinchCmd = 0; */
    *rty_bCinchCmd = 0.0;
  } else if (localDW->is_c3_SuctnDoor_DD == SuctnDoor_DD_IN_NoCmd) {
    *rty_bCinchCmd = 0.0;

    /* During 'NoCmd': '<S33>:3' */
    /* '<S33>:6:1' sf_internal_predicateOutput = hasChangedFrom(u8CinchCmd,uint8(0)); */
    if ((localDW->u8CinchCmd_prev != localDW->u8CinchCmd_start) && (localDW->u8CinchCmd_prev == 0)) {
      /* Transition: '<S33>:6' */
      localDW->is_c3_SuctnDoor_DD = SuctnDoor_DD_IN_ReCmd;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'ReCmd': '<S33>:5' */
      /* '<S33>:5:1' bCinchCmd = 1; */
      *rty_bCinchCmd = 1.0;
    }
  } else {
    *rty_bCinchCmd = 1.0;

    /* During 'ReCmd': '<S33>:5' */
    /* '<S33>:7:1' sf_internal_predicateOutput = after(TiOnForce,tick); */
    if (localDW->temporalCounter_i1 >= rtu_TiOnForce) {
      /* Transition: '<S33>:7' */
      localDW->is_c3_SuctnDoor_DD = SuctnDoor_DD_IN_NoCmd;

      /* Entry 'NoCmd': '<S33>:3' */
      /* '<S33>:3:1' bCinchCmd = 0; */
      *rty_bCinchCmd = 0.0;
    }
  }
}

/* Model step function for TID1 */
FUNC(void, SuctnDoor_DD_CODE) SuctnDoor_DD_Runnable_IN_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  boolean rtb_RelationalOperator13;
  boolean rtb_UnitDelay5;
  boolean rtb_Efx_Debounce_sf_p2;
  boolean rtb_DataTypeConversion15;
  boolean rtb_RelationalOperator9;
  boolean tmpRead;
  boolean tmpWrite;
  boolean tmpWrite_0;
  boolean tmpWrite_1;
  boolean tmpWrite_2;
  boolean tmpWrite_3;
  boolean tmpWrite_4;
  boolean tmpWrite_5;
  boolean tmpWrite_6;
  boolean tmpWrite_7;
  boolean tmpWrite_8;
  boolean tmpWrite_9;
  boolean tmpWrite_a;
  boolean tmpWrite_b;
  boolean tmpWrite_c;
  boolean tmpWrite_d;
  uint8 rtb_IoHwAb_IoSigDio_Di_Get14_o1;
  sint16 rtb_IoHwAb_IoSigAdc_AdcFac_Get_;
  uint8 rtb_Switch6;
  uint16 rtb_MultiportSwitch;

  /* Inport: '<Root>/BattU_buExcdSmallRng_Val' */
  Rte_Read_BattU_buExcdSmallRng_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_SuctnDoor_DD_Runnable_IN_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/SuctnDoor_DD_Runnable_IN_10ms_sys'
   */
  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FLCinchRst, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion4' */
  rtb_RelationalOperator9 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S12>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S12>/Reset'
   *  Constant: '<S12>/X_Init'
   *  Constant: '<S1>/Constant6'
   *  Constant: '<S1>/Constant7'
   *  Constant: '<S1>/Constant8'
   *  Outport: '<Root>/gSuctnDoor_bFLCinchReset_Val'
   *  S-Function (Upcast_sf): '<S12>/Upcast'
   *  S-Function (Upcast_sf): '<S12>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite = Efx_Debounce_u8_u8(rtb_RelationalOperator9, &SuctnDoor_FLCinchResetSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get1' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FLInPwrRelsSwt, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion1' */
  rtb_RelationalOperator9 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S5>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S1>/Constant4'
   *  Constant: '<S5>/Reset'
   *  Constant: '<S5>/X_Init'
   *  Outport: '<Root>/gSuctnDoor_bFLInPwrRelsSwt_Val'
   *  S-Function (Upcast_sf): '<S5>/Upcast'
   *  S-Function (Upcast_sf): '<S5>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_0 = Efx_Debounce_u8_u8(rtb_RelationalOperator9, &SuctnDoor_FLInPowerReleaseSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get2' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FLPAWLSwt, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion2' */
  rtb_RelationalOperator9 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S13>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S13>/Reset'
   *  Constant: '<S13>/X_Init'
   *  Constant: '<S1>/Constant10'
   *  Constant: '<S1>/Constant11'
   *  Constant: '<S1>/Constant12'
   *  Outport: '<Root>/gSuctnDoor_bFLPAWL_Val'
   *  S-Function (Upcast_sf): '<S13>/Upcast'
   *  S-Function (Upcast_sf): '<S13>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_1 = Efx_Debounce_u8_u8(rtb_RelationalOperator9, &SuctnDoor_FLPAWLSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get3' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FLSecLockFb, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion3' */
  rtb_RelationalOperator9 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S14>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S14>/Reset'
   *  Constant: '<S14>/X_Init'
   *  Constant: '<S1>/Constant13'
   *  Constant: '<S1>/Constant14'
   *  Constant: '<S1>/Constant15'
   *  Outport: '<Root>/gSuctnDoor_bFLSecLockFbSt_Val'
   *  S-Function (Upcast_sf): '<S14>/Upcast'
   *  S-Function (Upcast_sf): '<S14>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_2 = Efx_Debounce_u8_u8(rtb_RelationalOperator9, &SuctnDoor_FLSecondLockFeedbackSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get4' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FRCinchRst, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion5' */
  rtb_RelationalOperator9 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S15>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S15>/Reset'
   *  Constant: '<S15>/X_Init'
   *  Constant: '<S1>/Constant17'
   *  Constant: '<S1>/Constant18'
   *  Constant: '<S1>/Constant19'
   *  Outport: '<Root>/gSuctnDoor_bFRCinchReset_Val'
   *  S-Function (Upcast_sf): '<S15>/Upcast'
   *  S-Function (Upcast_sf): '<S15>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_3 = Efx_Debounce_u8_u8(rtb_RelationalOperator9, &SuctnDoor_FRCinchResetSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get5' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FRPAWLSwt, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion6' */
  rtb_RelationalOperator9 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S16>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S16>/Reset'
   *  Constant: '<S16>/X_Init'
   *  Constant: '<S1>/Constant21'
   *  Constant: '<S1>/Constant22'
   *  Constant: '<S1>/Constant23'
   *  Outport: '<Root>/gSuctnDoor_bFRPAWL_Val'
   *  S-Function (Upcast_sf): '<S16>/Upcast'
   *  S-Function (Upcast_sf): '<S16>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_4 = Efx_Debounce_u8_u8(rtb_RelationalOperator9, &SuctnDoor_FRPAWLSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get6' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FROutPwrRelsSwt, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion7' */
  rtb_RelationalOperator9 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S17>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S17>/Reset'
   *  Constant: '<S17>/X_Init'
   *  Constant: '<S1>/Constant25'
   *  Constant: '<S1>/Constant26'
   *  Constant: '<S1>/Constant27'
   *  Outport: '<Root>/gSuctnDoor_bFROutPwrRelsSwt_Val'
   *  S-Function (Upcast_sf): '<S17>/Upcast'
   *  S-Function (Upcast_sf): '<S17>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_5 = Efx_Debounce_u8_u8(rtb_RelationalOperator9, &SuctnDoor_FRPowerOutReleaseSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get7' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FRSecLockFb, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion8' */
  rtb_RelationalOperator9 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S18>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S18>/Reset'
   *  Constant: '<S18>/X_Init'
   *  Constant: '<S1>/Constant29'
   *  Constant: '<S1>/Constant30'
   *  Constant: '<S1>/Constant31'
   *  Outport: '<Root>/gSuctnDoor_bFRSecLockFbSt_Val'
   *  S-Function (Upcast_sf): '<S18>/Upcast'
   *  S-Function (Upcast_sf): '<S18>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_6 = Efx_Debounce_u8_u8(rtb_RelationalOperator9, &SuctnDoor_FRSecondLockFeedbackSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get8' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RLInPwrRelsSwt, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion9' */
  rtb_RelationalOperator9 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S19>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S19>/Reset'
   *  Constant: '<S19>/X_Init'
   *  Constant: '<S1>/Constant33'
   *  Constant: '<S1>/Constant34'
   *  Constant: '<S1>/Constant35'
   *  Outport: '<Root>/gSuctnDoor_bRLInPwrRelsSwt_Val'
   *  S-Function (Upcast_sf): '<S19>/Upcast'
   *  S-Function (Upcast_sf): '<S19>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_7 = Efx_Debounce_u8_u8(rtb_RelationalOperator9, &SuctnDoor_RLPowerInReleaseSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get10' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RLSecLockFb, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion11' */
  rtb_RelationalOperator9 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S7>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant41'
   *  Constant: '<S1>/Constant42'
   *  Constant: '<S1>/Constant43'
   *  Constant: '<S7>/Reset'
   *  Constant: '<S7>/X_Init'
   *  Outport: '<Root>/gSuctnDoor_bRLSecLockFbSt_Val'
   *  S-Function (Upcast_sf): '<S7>/Upcast'
   *  S-Function (Upcast_sf): '<S7>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_8 = Efx_Debounce_u8_u8(rtb_RelationalOperator9, &SuctnDoor_RLSecondLockFeedbackSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get11' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RRINPwrRelsSwt, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion12' */
  rtb_RelationalOperator9 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S8>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant46'
   *  Constant: '<S1>/Constant47'
   *  Constant: '<S1>/Constant48'
   *  Constant: '<S8>/Reset'
   *  Constant: '<S8>/X_Init'
   *  Outport: '<Root>/gSuctnDoor_bRRInPwrRlesSwt_Val'
   *  S-Function (Upcast_sf): '<S8>/Upcast'
   *  S-Function (Upcast_sf): '<S8>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_9 = Efx_Debounce_u8_u8(rtb_RelationalOperator9, &SuctnDoor_RRPowerInReleaseSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get13' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RRSecLockFb, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion14' */
  rtb_RelationalOperator9 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S10>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S10>/Reset'
   *  Constant: '<S10>/X_Init'
   *  Constant: '<S1>/Constant53'
   *  Constant: '<S1>/Constant54'
   *  Constant: '<S1>/Constant55'
   *  Outport: '<Root>/gSuctnDoor_bRRSecLockFbSt_Val'
   *  S-Function (Upcast_sf): '<S10>/Upcast'
   *  S-Function (Upcast_sf): '<S10>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_a = Efx_Debounce_u8_u8(rtb_RelationalOperator9, &SuctnDoor_RRSecondLockFeedbackSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigAdc_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_FLElecDoorSwt, &rtb_IoHwAb_IoSigAdc_AdcFac_Get_);

  /* Switch: '<S1>/Switch4' incorporates:
   *  UnitDelay: '<S1>/UnitDelay2'
   */
  if (tmpRead) {
    rtb_IoHwAb_IoSigAdc_AdcFac_Get_ = SuctnDoor_DD_DW.UnitDelay2_DSTATE;
  }

  /* End of Switch: '<S1>/Switch4' */

  /* FunctionCaller: '<S1>/IoHwAb_IoSigAdc_AdcVRMBatt_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcVRMBatt_Get(I_A_FLElecDoorSwt, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_SuctnDoor_DD_Runnable_IN_10ms_at_outport_1' */

  /* Outport: '<Root>/gSuctnDoor_bFLCinchReset_Val' */
  (void) Rte_Write_gSuctnDoor_bFLCinchReset_Val(tmpWrite);

  /* Outport: '<Root>/gSuctnDoor_bFLInPwrRelsSwt_Val' */
  (void) Rte_Write_gSuctnDoor_bFLInPwrRelsSwt_Val(tmpWrite_0);

  /* Outport: '<Root>/gSuctnDoor_bFLPAWL_Val' */
  (void) Rte_Write_gSuctnDoor_bFLPAWL_Val(tmpWrite_1);

  /* Outport: '<Root>/gSuctnDoor_bFLSecLockFbSt_Val' */
  (void) Rte_Write_gSuctnDoor_bFLSecLockFbSt_Val(tmpWrite_2);

  /* Outport: '<Root>/gSuctnDoor_bFRCinchReset_Val' */
  (void) Rte_Write_gSuctnDoor_bFRCinchReset_Val(tmpWrite_3);

  /* Outport: '<Root>/gSuctnDoor_bFRPAWL_Val' */
  (void) Rte_Write_gSuctnDoor_bFRPAWL_Val(tmpWrite_4);

  /* Outport: '<Root>/gSuctnDoor_bFROutPwrRelsSwt_Val' */
  (void) Rte_Write_gSuctnDoor_bFROutPwrRelsSwt_Val(tmpWrite_5);

  /* Outport: '<Root>/gSuctnDoor_bFRSecLockFbSt_Val' */
  (void) Rte_Write_gSuctnDoor_bFRSecLockFbSt_Val(tmpWrite_6);

  /* Outport: '<Root>/gSuctnDoor_bRLInPwrRelsSwt_Val' */
  (void) Rte_Write_gSuctnDoor_bRLInPwrRelsSwt_Val(tmpWrite_7);

  /* Outport: '<Root>/gSuctnDoor_bRLSecLockFbSt_Val' */
  (void) Rte_Write_gSuctnDoor_bRLSecLockFbSt_Val(tmpWrite_8);

  /* Outport: '<Root>/gSuctnDoor_bRRInPwrRlesSwt_Val' */
  (void) Rte_Write_gSuctnDoor_bRRInPwrRlesSwt_Val(tmpWrite_9);

  /* Outport: '<Root>/gSuctnDoor_bRRSecLockFbSt_Val' */
  (void) Rte_Write_gSuctnDoor_bRRSecLockFbSt_Val(tmpWrite_a);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_SuctnDoor_DD_Runnable_IN_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/SuctnDoor_DD_Runnable_IN_10ms_sys'
   */
  /* MultiPortSwitch: '<S1>/MultiportSwitch' incorporates:
   *  Constant: '<S1>/Constant56'
   *  Inport: '<Root>/BattU_VrmFac1_Val'
   *  Inport: '<Root>/BattU_VrmFac2_Val'
   *  Inport: '<Root>/BattU_VrmFac3_Val'
   */
  switch (rtb_IoHwAb_IoSigDio_Di_Get14_o1) {
   case 1:
    Rte_Read_BattU_VrmFac1_Val(&rtb_MultiportSwitch);
    break;

   case 2:
    Rte_Read_BattU_VrmFac2_Val(&rtb_MultiportSwitch);
    break;

   case 3:
    Rte_Read_BattU_VrmFac3_Val(&rtb_MultiportSwitch);
    break;

   default:
    rtb_MultiportSwitch = 1000U;
    break;
  }

  /* End of MultiPortSwitch: '<S1>/MultiportSwitch' */

  /* RelationalOperator: '<S1>/RelationalOperator9' incorporates:
   *  Constant: '<S1>/Constant66'
   *  Product: '<S1>/Product1'
   */
  rtb_RelationalOperator9 = (rtb_IoHwAb_IoSigAdc_AdcFac_Get_ <= Mfx_MulShRight_u32u32u8_u16(Mfx_MulShRight_u32u32u8_u16(2480U, rtb_MultiportSwitch, 10U), 16777U, 14U));

  /* RelationalOperator: '<S1>/RelationalOperator8' incorporates:
   *  Constant: '<S1>/Constant65'
   *  Product: '<S1>/Product2'
   */
  rtb_DataTypeConversion15 = (rtb_IoHwAb_IoSigAdc_AdcFac_Get_ >= Mfx_MulShRight_u32u32u8_u16(Mfx_MulShRight_u32u32u8_u16(1720U, rtb_MultiportSwitch, 10U), 16777U, 14U));

  /* Switch: '<S1>/Switch6' incorporates:
   *  Constant: '<S1>/Constant64'
   *  Constant: '<S1>/Constant67'
   *  Constant: '<S1>/Constant69'
   *  Logic: '<S1>/LogicalOperator1'
   *  Logic: '<S1>/LogicalOperator2'
   *  Logic: '<S1>/LogicalOperator3'
   *  Product: '<S1>/Product3'
   *  Product: '<S1>/Product4'
   *  RelationalOperator: '<S1>/RelationalOperator1'
   *  RelationalOperator: '<S1>/RelationalOperator10'
   *  RelationalOperator: '<S1>/RelationalOperator11'
   *  RelationalOperator: '<S1>/RelationalOperator2'
   *  Switch: '<S1>/Switch1'
   *  Switch: '<S1>/Switch7'
   */
  if (rtb_RelationalOperator9 && rtb_DataTypeConversion15) {
    rtb_Switch6 = 1U;
  } else if ((rtb_IoHwAb_IoSigAdc_AdcFac_Get_ <= Mfx_MulShRight_u32u32u8_u16(Mfx_MulShRight_u32u32u8_u16(3910U, rtb_MultiportSwitch, 10U), 16777U, 14U)) && (rtb_IoHwAb_IoSigAdc_AdcFac_Get_ >= 2820)) {
    /* Switch: '<S1>/Switch7' incorporates:
     *  Constant: '<S1>/Constant57'
     */
    rtb_Switch6 = 2U;
  } else if ((rtb_IoHwAb_IoSigAdc_AdcFac_Get_ <= Mfx_MulShRight_u32u32u8_u16(Mfx_MulShRight_u32u32u8_u16(12000U, rtb_MultiportSwitch, 10U), 16777U, 14U)) && (rtb_IoHwAb_IoSigAdc_AdcFac_Get_ >= 3920)) {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S1>/Constant63'
     *  Switch: '<S1>/Switch7'
     */
    rtb_Switch6 = 0U;
  } else {
    /* Switch: '<S1>/Switch7' incorporates:
     *  UnitDelay: '<S1>/UnitDelay3'
     */
    rtb_Switch6 = SuctnDoor_DD_DW.UnitDelay3_DSTATE;
  }

  /* End of Switch: '<S1>/Switch6' */

  /* RelationalOperator: '<S1>/RelationalOperator13' incorporates:
   *  UnitDelay: '<S1>/UnitDelay3'
   */
  rtb_RelationalOperator13 = (rtb_Switch6 == SuctnDoor_DD_DW.UnitDelay3_DSTATE);

  /* UnitDelay: '<S1>/UnitDelay5' */
  rtb_UnitDelay5 = SuctnDoor_DD_DW.UnitDelay5_DSTATE;

  /* S-Function (Efx_Debounce_sf): '<S11>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant59'
   *  Constant: '<S1>/Constant60'
   *  Constant: '<S1>/Constant61'
   *  Constant: '<S1>/Constant62'
   *  S-Function (Upcast_sf): '<S11>/Upcast'
   *  S-Function (Upcast_sf): '<S11>/Upcast1'
   */
  if (rtb_UnitDelay5) {
    Efx_DebounceInit( &SuctnDoor_FLElecDoorSwtDeb_I, false);
  }

  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    rtb_Efx_Debounce_sf_p2 = Efx_Debounce_u8_u8(rtb_RelationalOperator13, &SuctnDoor_FLElecDoorSwtDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get9' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RLCinchRst, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion10' */
  rtb_DataTypeConversion15 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S4>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant36'
   *  Constant: '<S1>/Constant37'
   *  Constant: '<S1>/Constant38'
   *  Constant: '<S4>/Reset'
   *  Constant: '<S4>/X_Init'
   *  Outport: '<Root>/gSuctnDoor_bRLCinchReset_Val'
   *  S-Function (Upcast_sf): '<S4>/Upcast'
   *  S-Function (Upcast_sf): '<S4>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_b = Efx_Debounce_u8_u8(rtb_DataTypeConversion15, &SuctnDoor_RLCinchResetSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get12' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RRCinchRst, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion13' */
  rtb_DataTypeConversion15 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S6>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant45'
   *  Constant: '<S1>/Constant50'
   *  Constant: '<S1>/Constant51'
   *  Constant: '<S6>/Reset'
   *  Constant: '<S6>/X_Init'
   *  Outport: '<Root>/gSuctnDoor_bRRCinchReset_Val'
   *  S-Function (Upcast_sf): '<S6>/Upcast'
   *  S-Function (Upcast_sf): '<S6>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_c = Efx_Debounce_u8_u8(rtb_DataTypeConversion15, &SuctnDoor_RRCinchResetSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get14' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FRElecDoorCloseSwt, &rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion15' */
  rtb_DataTypeConversion15 = (rtb_IoHwAb_IoSigDio_Di_Get14_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S9>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant72'
   *  Constant: '<S1>/Constant73'
   *  Constant: '<S1>/Constant74'
   *  Constant: '<S9>/Reset'
   *  Constant: '<S9>/X_Init'
   *  Outport: '<Root>/gSuctnDoor_bFRElecDoorCloseSwt_Val'
   *  S-Function (Upcast_sf): '<S9>/Upcast'
   *  S-Function (Upcast_sf): '<S9>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_d = Efx_Debounce_u8_u8(rtb_DataTypeConversion15, &SuctnDoor_FRElecDoorCloseSwt_I, &paramdebounce_loc, 10000 );
  }

  /* Switch: '<S1>/Switch9' incorporates:
   *  UnitDelay: '<S1>/UnitDelay4'
   */
  if (rtb_Efx_Debounce_sf_p2) {
    rtb_IoHwAb_IoSigDio_Di_Get14_o1 = rtb_Switch6;
  } else {
    rtb_IoHwAb_IoSigDio_Di_Get14_o1 = SuctnDoor_DD_DW.UnitDelay4_DSTATE;
  }

  /* End of Switch: '<S1>/Switch9' */

  /* Update for UnitDelay: '<S1>/UnitDelay2' */
  SuctnDoor_DD_DW.UnitDelay2_DSTATE = rtb_IoHwAb_IoSigAdc_AdcFac_Get_;

  /* Update for UnitDelay: '<S1>/UnitDelay3' */
  SuctnDoor_DD_DW.UnitDelay3_DSTATE = rtb_Switch6;

  /* Update for UnitDelay: '<S1>/UnitDelay5' */
  SuctnDoor_DD_DW.UnitDelay5_DSTATE = rtb_Efx_Debounce_sf_p2;

  /* Update for UnitDelay: '<S1>/UnitDelay4' */
  SuctnDoor_DD_DW.UnitDelay4_DSTATE = rtb_IoHwAb_IoSigDio_Di_Get14_o1;

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_SuctnDoor_DD_Runnable_IN_10ms_at_outport_1' */

  /* Outport: '<Root>/gSuctnDoor_u8FLElecDoorSwt_Val' */
  (void) Rte_Write_gSuctnDoor_u8FLElecDoorSwt_Val(rtb_IoHwAb_IoSigDio_Di_Get14_o1);

  /* Outport: '<Root>/gSuctnDoor_bRLCinchReset_Val' */
  (void) Rte_Write_gSuctnDoor_bRLCinchReset_Val(tmpWrite_b);

  /* Outport: '<Root>/gSuctnDoor_bRRCinchReset_Val' */
  (void) Rte_Write_gSuctnDoor_bRRCinchReset_Val(tmpWrite_c);

  /* Outport: '<Root>/gSuctnDoor_bFRElecDoorCloseSwt_Val' */
  (void) Rte_Write_gSuctnDoor_bFRElecDoorCloseSwt_Val(tmpWrite_d);
}

/* Model step function for TID2 */
FUNC(void, SuctnDoor_DD_CODE) SuctnDoor_DD_Runnable_OUT_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  uint8 rtb_TmpSignalConversionAtgLOC_u;
  uint8 rtb_TmpSignalConversionAtgLOC_h;
  uint8 rtb_TmpSignalConversionAtgLock_;
  uint8 tmpRead;
  boolean tmpWrite;
  boolean tmpWrite_0;
  boolean rtb_DTC_FRCinchMotorPlusSCG_G_h;
  boolean rtb_DTC_FRCinchMotorPlusSCB_G_n;
  boolean rtb_DTC_FRCinchMotorMinusSCG__i;
  boolean rtb_LogicalOperator1_a;
  float64 rtb_bCinchCmd_d;
  uint32 rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1;
  uint32 rtb_IoHwAb_IoDiagHbr_Hbr_Get__n;
  boolean rtb_DTC_FLCinchMotorOL1_GetEv_c;
  boolean rtb_DTC_FLCinchMotorOL2_GetEv_i;
  boolean rtb_DTC_FRCinchMotorOL1_GetEv_i;
  boolean rtb_DTC_FRCinchMotorOL2_GetEv_h;
  Dem_EventStatusType rtb_Switch_nx;
  uint8 Switch;
  uint8 Switch_n;
  float32 tmp;
  uint16 tmp_0;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_SuctnDoor_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/SuctnDoor_DD_Runnable_OUT_10ms_sys'
   */
  /* SignalConversion: '<S3>/TmpSignal ConversionAtgLOC_u8FLDoorElecCinchMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gLockCtrl_u8FLDoorElecCinchMotorOutput_Val'
   */
  Rte_Read_gLockCtrl_u8FLDoorElecCinchMotorOutput_Val(&rtb_TmpSignalConversionAtgLOC_u);

  /* FunctionCaller: '<S31>/DTC_FLCinchMotorMinusSCB_GetEventFailed' */
  Rte_Call_DTC_FLCinchMotorMinusSCB_GetEventFailed(&rtb_DTC_FRCinchMotorPlusSCG_G_h);

  /* FunctionCaller: '<S31>/DTC_FLCinchMotorMinusSCG_GetEventFailed' */
  Rte_Call_DTC_FLCinchMotorMinusSCG_GetEventFailed(&rtb_DTC_FRCinchMotorPlusSCB_G_n);

  /* FunctionCaller: '<S31>/DTC_FLCinchMotorPlusSCB_GetEventFailed' */
  Rte_Call_DTC_FLCinchMotorPlusSCB_GetEventFailed(&rtb_DTC_FRCinchMotorMinusSCG__i);

  /* FunctionCaller: '<S31>/DTC_FLCinchMotorPlusSCG_GetEventFailed' */
  Rte_Call_DTC_FLCinchMotorPlusSCG_GetEventFailed(&rtb_LogicalOperator1_a);

  /* Chart: '<S31>/Chart' incorporates:
   *  Constant: '<S31>/Constant1'
   */
  SuctnDoor_DD_Chart(rtb_TmpSignalConversionAtgLOC_u, 22, &rtb_bCinchCmd_d, &SuctnDoor_DD_DW.sf_Chart);

  /* Logic: '<S31>/Logical Operator1' incorporates:
   *  Logic: '<S31>/Logical Operator'
   *  Logic: '<S31>/Logical Operator2'
   */
  rtb_LogicalOperator1_a = ((rtb_DTC_FRCinchMotorPlusSCG_G_h || rtb_DTC_FRCinchMotorPlusSCB_G_n || rtb_DTC_FRCinchMotorMinusSCG__i || rtb_LogicalOperator1_a) && (rtb_bCinchCmd_d == 0.0));

  /* Switch: '<S20>/Switch' incorporates:
   *  Constant: '<S20>/Constant2'
   */
  if (rtb_LogicalOperator1_a) {
    Switch = 0U;
  } else {
    Switch = rtb_TmpSignalConversionAtgLOC_u;
  }

  /* End of Switch: '<S20>/Switch' */

  /* SwitchCase: '<S20>/Switch Case' incorporates:
   *  Outport: '<Root>/gSuctnDoor_bFLCinchMotorMinusSt_Val'
   *  Outport: '<Root>/gSuctnDoor_bFLCinchMotorPlusSt_Val'
   */
  switch (Switch) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S20>/Cinch' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    SuctnDoor_DD_Cinch(&tmpWrite_0, &tmpWrite);

    /* End of Outputs for SubSystem: '<S20>/Cinch' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S20>/CinchRst' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    SuctnDoor_DD_CinchRst(&tmpWrite_0, &tmpWrite);

    /* End of Outputs for SubSystem: '<S20>/CinchRst' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S20>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S25>/Action Port'
     */
    Suct_SwitchCaseActionSubsystem2(&tmpWrite_0, &tmpWrite);

    /* End of Outputs for SubSystem: '<S20>/Switch Case Action Subsystem2' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S20>/Switch Case Action Subsystem3' incorporates:
     *  ActionPort: '<S26>/Action Port'
     */
    Suct_SwitchCaseActionSubsystem2(&tmpWrite_0, &tmpWrite);

    /* End of Outputs for SubSystem: '<S20>/Switch Case Action Subsystem3' */
    break;
  }

  /* End of SwitchCase: '<S20>/Switch Case' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_SuctnDoor_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Outport: '<Root>/gSuctnDoor_bFLCinchMotorPlusSt_Val' */
  (void) Rte_Write_gSuctnDoor_bFLCinchMotorPlusSt_Val(tmpWrite_0);

  /* Outport: '<Root>/gSuctnDoor_bFLCinchMotorMinusSt_Val' */
  (void) Rte_Write_gSuctnDoor_bFLCinchMotorMinusSt_Val(tmpWrite);

  /* Inport: '<Root>/gLockCtrl_u8FLDoorElecCinchPWMOutput_Val' */
  Rte_Read_gLockCtrl_u8FLDoorElecCinchPWMOutput_Val(&Switch_n);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_SuctnDoor_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/SuctnDoor_DD_Runnable_OUT_10ms_sys'
   */
  /* FunctionCaller: '<S20>/IoHwAb_HbrModCtrl_Hbr_SetMod1' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_DrvDoorElecCinchMotModCtrl, Switch);

  /* Switch: '<S20>/Switch1' incorporates:
   *  Constant: '<S20>/Constant3'
   */
  if (rtb_LogicalOperator1_a) {
    Switch_n = 0U;
  }

  /* End of Switch: '<S20>/Switch1' */

  /* Product: '<S20>/Product' incorporates:
   *  Constant: '<S20>/Constant4'
   */
  tmp = (float32)Switch_n * 327.68F;
  if (tmp < 65536.0F) {
    tmp_0 = (uint16)tmp;
  } else {
    tmp_0 = MAX_uint16_T;
  }

  /* End of Product: '<S20>/Product' */

  /* FunctionCaller: '<S20>/IoHwAb_HbrPwm_Hbr_SetDuty1' incorporates:
   *  Saturate: '<S20>/Saturation1'
   */
  Rte_Call_IoHwAb_HbrPwm_Hbr_SetDuty(O_H_DrvDoorElecCinchMotPwm, Mfx_Min_u16(tmp_0, 32768U));

  /* FunctionCaller: '<S32>/DTC_FRCinchMotorMinusSCB_GetEventFailed' */
  Rte_Call_DTC_FRCinchMotorMinusSCB_GetEventFailed(&rtb_LogicalOperator1_a);

  /* FunctionCaller: '<S32>/DTC_FRCinchMotorMinusSCG_GetEventFailed' */
  Rte_Call_DTC_FRCinchMotorMinusSCG_GetEventFailed(&rtb_DTC_FRCinchMotorMinusSCG__i);

  /* FunctionCaller: '<S32>/DTC_FRCinchMotorPlusSCB_GetEventFailed' */
  Rte_Call_DTC_FRCinchMotorPlusSCB_GetEventFailed(&rtb_DTC_FRCinchMotorPlusSCB_G_n);

  /* FunctionCaller: '<S32>/DTC_FRCinchMotorPlusSCG_GetEventFailed' */
  Rte_Call_DTC_FRCinchMotorPlusSCG_GetEventFailed(&rtb_DTC_FRCinchMotorPlusSCG_G_h);

  /* SignalConversion: '<S3>/TmpSignal ConversionAtgLOC_u8FRDoorElecCinchMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gLockCtrl_u8FRDoorElecCinchMotorOutput_Val'
   */
  Rte_Read_gLockCtrl_u8FRDoorElecCinchMotorOutput_Val(&rtb_TmpSignalConversionAtgLOC_h);

  /* Chart: '<S32>/Chart' incorporates:
   *  Constant: '<S32>/Constant1'
   */
  SuctnDoor_DD_Chart(rtb_TmpSignalConversionAtgLOC_h, 22, &rtb_bCinchCmd_d, &SuctnDoor_DD_DW.sf_Chart_m);

  /* Logic: '<S32>/Logical Operator1' incorporates:
   *  Logic: '<S32>/Logical Operator'
   *  Logic: '<S32>/Logical Operator2'
   */
  rtb_LogicalOperator1_a = ((rtb_LogicalOperator1_a || rtb_DTC_FRCinchMotorMinusSCG__i || rtb_DTC_FRCinchMotorPlusSCB_G_n || rtb_DTC_FRCinchMotorPlusSCG_G_h) && (rtb_bCinchCmd_d == 0.0));

  /* Switch: '<S21>/Switch' incorporates:
   *  Constant: '<S21>/Constant2'
   */
  if (rtb_LogicalOperator1_a) {
    Switch_n = 0U;
  } else {
    Switch_n = rtb_TmpSignalConversionAtgLOC_h;
  }

  /* End of Switch: '<S21>/Switch' */

  /* SwitchCase: '<S21>/Switch Case' incorporates:
   *  Outport: '<Root>/gSuctnDoor_bFRCinchMotorMinusSt_Val'
   *  Outport: '<Root>/gSuctnDoor_bFRCinchMotorPlusSt_Val'
   */
  switch (Switch_n) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S21>/Cinch' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    SuctnDoor_DD_Cinch(&tmpWrite_0, &tmpWrite);

    /* End of Outputs for SubSystem: '<S21>/Cinch' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S21>/CinchRst' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    SuctnDoor_DD_CinchRst(&tmpWrite_0, &tmpWrite);

    /* End of Outputs for SubSystem: '<S21>/CinchRst' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S21>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    Suct_SwitchCaseActionSubsystem2(&tmpWrite_0, &tmpWrite);

    /* End of Outputs for SubSystem: '<S21>/Switch Case Action Subsystem2' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S21>/Switch Case Action Subsystem3' incorporates:
     *  ActionPort: '<S30>/Action Port'
     */
    Suct_SwitchCaseActionSubsystem2(&tmpWrite_0, &tmpWrite);

    /* End of Outputs for SubSystem: '<S21>/Switch Case Action Subsystem3' */
    break;
  }

  /* End of SwitchCase: '<S21>/Switch Case' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_SuctnDoor_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Outport: '<Root>/gSuctnDoor_bFRCinchMotorPlusSt_Val' */
  (void) Rte_Write_gSuctnDoor_bFRCinchMotorPlusSt_Val(tmpWrite);

  /* Outport: '<Root>/gSuctnDoor_bFRCinchMotorMinusSt_Val' */
  (void) Rte_Write_gSuctnDoor_bFRCinchMotorMinusSt_Val(tmpWrite_0);

  /* Inport: '<Root>/gLockCtrl_u8FRDoorElecCinchPWMOutput_Val' */
  Rte_Read_gLockCtrl_u8FRDoorElecCinchPWMOutput_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_SuctnDoor_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/SuctnDoor_DD_Runnable_OUT_10ms_sys'
   */
  /* FunctionCaller: '<S21>/IoHwAb_HbrModCtrl_Hbr_SetMod1' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_FRDoorElecCinchMotModCtrl, Switch_n);

  /* Switch: '<S21>/Switch1' incorporates:
   *  Constant: '<S21>/Constant3'
   */
  if (rtb_LogicalOperator1_a) {
    tmpRead = 0U;
  }

  /* End of Switch: '<S21>/Switch1' */

  /* Product: '<S21>/Product' incorporates:
   *  Constant: '<S21>/Constant4'
   */
  tmp = (float32)tmpRead * 327.68F;
  if (tmp < 65536.0F) {
    tmp_0 = (uint16)tmp;
  } else {
    tmp_0 = MAX_uint16_T;
  }

  /* End of Product: '<S21>/Product' */

  /* FunctionCaller: '<S21>/IoHwAb_HbrPwm_Hbr_SetDuty1' incorporates:
   *  Saturate: '<S21>/Saturation1'
   */
  Rte_Call_IoHwAb_HbrPwm_Hbr_SetDuty(O_H_FRDoorElecCinchMotPwm, Mfx_Min_u16(tmp_0, 32768U));

  /* SignalConversion: '<S3>/TmpSignal ConversionAtgLock_u8DiagEnbCnd_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gLock_u8DiagEnbCnd_Val'
   */
  Rte_Read_gLock_u8DiagEnbCnd_Val(&rtb_TmpSignalConversionAtgLock_);

  /* FunctionCaller: '<S31>/IoHwAb_IoDiagHbr_Hbr_Get' */
  Rte_Call_IoHwAb_IoDiagHbr_Hbr_Get(O_H_DrvDoorElecCinchMotModCtrl, &rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1);

  /* Switch: '<S31>/Switch' incorporates:
   *  Constant: '<S31>/CinchPsDefault'
   *  Constant: '<S31>/EnbCnd'
   *  S-Function (Bfx_GetBit_sf): '<S35>/Bfx_GetBit_sf'
   */
  if (Bfx_GetBit_u8u8_u8(rtb_TmpSignalConversionAtgLock_, ((uint8)1U))) {
    tmpRead = Switch;
  } else {
    tmpRead = 7U;
  }

  /* End of Switch: '<S31>/Switch' */

  /* SwitchCase: '<S31>/Switch Case' */
  switch (tmpRead) {
   case 0:
    /* Switch: '<S36>/Switch' incorporates:
     *  Constant: '<S36>/Constant'
     *  Constant: '<S36>/Constant1'
     *  Constant: '<S36>/Constant2'
     *  S-Function (Bfx_GetBit_sf): '<S41>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)0U))) {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S36>/Switch' */

    /* FunctionCaller: '<S36>/DTC_FLCinchMotorOL1_SetEventStatus' */
    Rte_Call_DTC_FLCinchMotorOL1_SetEventStatus(rtb_Switch_nx);

    /* FunctionCaller: '<S36>/DTC_FLCinchMotorOL2_SetEventStatus' */
    Rte_Call_DTC_FLCinchMotorOL2_SetEventStatus(rtb_Switch_nx);

    /* FunctionCaller: '<S36>/DTC_FLCinchMotorMinusSCB_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S36>/Constant12'
     */
    Rte_Call_DTC_FLCinchMotorMinusSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S36>/DTC_FLCinchMotorMinusSCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S36>/Constant13'
     */
    Rte_Call_DTC_FLCinchMotorMinusSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S36>/DTC_FLCinchMotorPlusSCB_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S36>/Constant3'
     */
    Rte_Call_DTC_FLCinchMotorPlusSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S36>/DTC_FLCinchMotorPlusSCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S36>/Constant4'
     */
    Rte_Call_DTC_FLCinchMotorPlusSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S31>/OFFDiag' */
    break;

   case 1:
   case 2:
    /* Switch: '<S34>/Switch1' incorporates:
     *  Constant: '<S34>/Constant3'
     *  Constant: '<S34>/Constant4'
     *  Constant: '<S34>/Constant5'
     *  S-Function (Bfx_GetBit_sf): '<S38>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)4U))) {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S34>/Switch1' */

    /* FunctionCaller: '<S34>/DTC_FLCinchMotorMinusSCB_SetEventStatus' */
    Rte_Call_DTC_FLCinchMotorMinusSCB_SetEventStatus(rtb_Switch_nx);

    /* Switch: '<S34>/Switch3' incorporates:
     *  Constant: '<S34>/Constant10'
     *  Constant: '<S34>/Constant11'
     *  Constant: '<S34>/Constant9'
     *  S-Function (Bfx_GetBit_sf): '<S40>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)3U))) {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S34>/Switch3' */

    /* FunctionCaller: '<S34>/DTC_FLCinchMotorMinusSCG_SetEventStatus' */
    Rte_Call_DTC_FLCinchMotorMinusSCG_SetEventStatus(rtb_Switch_nx);

    /* Switch: '<S34>/Switch2' incorporates:
     *  Constant: '<S34>/Constant6'
     *  Constant: '<S34>/Constant7'
     *  Constant: '<S34>/Constant8'
     *  S-Function (Bfx_GetBit_sf): '<S39>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)2U))) {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S34>/Switch2' */

    /* FunctionCaller: '<S34>/DTC_FLCinchMotorPlusSCB_SetEventStatus' */
    Rte_Call_DTC_FLCinchMotorPlusSCB_SetEventStatus(rtb_Switch_nx);

    /* Switch: '<S34>/Switch' incorporates:
     *  Constant: '<S34>/Constant'
     *  Constant: '<S34>/Constant1'
     *  Constant: '<S34>/Constant2'
     *  S-Function (Bfx_GetBit_sf): '<S37>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)1U))) {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S34>/Switch' */

    /* FunctionCaller: '<S34>/DTC_FLCinchMotorPlusSCG_SetEventStatus' */
    Rte_Call_DTC_FLCinchMotorPlusSCG_SetEventStatus(rtb_Switch_nx);

    /* FunctionCaller: '<S34>/DTC_FLCinchMotorOL1_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S34>/Constant12'
     */
    Rte_Call_DTC_FLCinchMotorOL1_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S34>/DTC_FLCinchMotorOL2_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S34>/Constant13'
     */
    Rte_Call_DTC_FLCinchMotorOL2_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S31>/CinchDiag' */
    break;

   case 3:
    break;
  }

  /* End of SwitchCase: '<S31>/Switch Case' */
  /* FunctionCaller: '<S32>/IoHwAb_IoDiagHbr_Hbr_Get' */
  Rte_Call_IoHwAb_IoDiagHbr_Hbr_Get(O_H_FRDoorElecCinchMotModCtrl, &rtb_IoHwAb_IoDiagHbr_Hbr_Get__n);

  /* Switch: '<S32>/Switch' incorporates:
   *  Constant: '<S32>/CinchPsDefault'
   *  Constant: '<S32>/EnbCnd'
   *  S-Function (Bfx_GetBit_sf): '<S44>/Bfx_GetBit_sf'
   */
  if (Bfx_GetBit_u8u8_u8(rtb_TmpSignalConversionAtgLock_, ((uint8)1U))) {
    tmpRead = Switch_n;
  } else {
    tmpRead = 7U;
  }

  /* End of Switch: '<S32>/Switch' */

  /* SwitchCase: '<S32>/Switch Case' */
  switch (tmpRead) {
   case 0:
    /* Switch: '<S45>/Switch' incorporates:
     *  Constant: '<S45>/Constant'
     *  Constant: '<S45>/Constant1'
     *  Constant: '<S45>/Constant2'
     *  S-Function (Bfx_GetBit_sf): '<S50>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get__n, ((uint8)0U))) {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S45>/Switch' */

    /* FunctionCaller: '<S45>/DTC_FRCinchMotorOL1_SetEventStatus' */
    Rte_Call_DTC_FRCinchMotorOL1_SetEventStatus(rtb_Switch_nx);

    /* FunctionCaller: '<S45>/DTC_FRCinchMotorOL2_SetEventStatus' */
    Rte_Call_DTC_FRCinchMotorOL2_SetEventStatus(rtb_Switch_nx);

    /* FunctionCaller: '<S45>/DTC_FRCinchMotorMinusSCB_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S45>/Constant12'
     */
    Rte_Call_DTC_FRCinchMotorMinusSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S45>/DTC_FRCinchMotorMinusSCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S45>/Constant13'
     */
    Rte_Call_DTC_FRCinchMotorMinusSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S45>/DTC_FRCinchMotorPlusSCB_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S45>/Constant3'
     */
    Rte_Call_DTC_FRCinchMotorPlusSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S45>/DTC_FRCinchMotorPlusSCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S45>/Constant4'
     */
    Rte_Call_DTC_FRCinchMotorPlusSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S32>/OFFDiag' */
    break;

   case 1:
   case 2:
    /* Switch: '<S43>/Switch1' incorporates:
     *  Constant: '<S43>/Constant3'
     *  Constant: '<S43>/Constant4'
     *  Constant: '<S43>/Constant5'
     *  S-Function (Bfx_GetBit_sf): '<S47>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get__n, ((uint8)4U))) {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S43>/Switch1' */

    /* FunctionCaller: '<S43>/DTC_FRCinchMotorMinusSCB_SetEventStatus' */
    Rte_Call_DTC_FRCinchMotorMinusSCB_SetEventStatus(rtb_Switch_nx);

    /* Switch: '<S43>/Switch3' incorporates:
     *  Constant: '<S43>/Constant10'
     *  Constant: '<S43>/Constant11'
     *  Constant: '<S43>/Constant9'
     *  S-Function (Bfx_GetBit_sf): '<S49>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get__n, ((uint8)3U))) {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S43>/Switch3' */

    /* FunctionCaller: '<S43>/DTC_FRCinchMotorMinusSCG_SetEventStatus' */
    Rte_Call_DTC_FRCinchMotorMinusSCG_SetEventStatus(rtb_Switch_nx);

    /* Switch: '<S43>/Switch2' incorporates:
     *  Constant: '<S43>/Constant6'
     *  Constant: '<S43>/Constant7'
     *  Constant: '<S43>/Constant8'
     *  S-Function (Bfx_GetBit_sf): '<S48>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get__n, ((uint8)2U))) {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S43>/Switch2' */

    /* FunctionCaller: '<S43>/DTC_FRCinchMotorPlusSCB_SetEventStatus' */
    Rte_Call_DTC_FRCinchMotorPlusSCB_SetEventStatus(rtb_Switch_nx);

    /* Switch: '<S43>/Switch' incorporates:
     *  Constant: '<S43>/Constant'
     *  Constant: '<S43>/Constant1'
     *  Constant: '<S43>/Constant2'
     *  S-Function (Bfx_GetBit_sf): '<S46>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get__n, ((uint8)1U))) {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch_nx = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S43>/Switch' */

    /* FunctionCaller: '<S43>/DTC_FRCinchMotorPlusSCG_SetEventStatus' */
    Rte_Call_DTC_FRCinchMotorPlusSCG_SetEventStatus(rtb_Switch_nx);

    /* FunctionCaller: '<S43>/DTC_FRCinchMotorOL1_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S43>/Constant12'
     */
    Rte_Call_DTC_FRCinchMotorOL1_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S43>/DTC_FRCinchMotorOL2_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S43>/Constant13'
     */
    Rte_Call_DTC_FRCinchMotorOL2_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S32>/CinchDiag1' */
    break;

   case 3:
    break;
  }

  /* End of SwitchCase: '<S32>/Switch Case' */

  /* FunctionCaller: '<S3>/DTC_FLCinchMotorOL1_GetEventFailed' */
  Rte_Call_DTC_FLCinchMotorOL1_GetEventFailed(&rtb_DTC_FLCinchMotorOL1_GetEv_c);

  /* FunctionCaller: '<S3>/DTC_FLCinchMotorOL2_GetEventFailed' */
  Rte_Call_DTC_FLCinchMotorOL2_GetEventFailed(&rtb_DTC_FLCinchMotorOL2_GetEv_i);

  /* FunctionCaller: '<S3>/DTC_FRCinchMotorOL1_GetEventTested' */
  Rte_Call_DTC_FRCinchMotorOL1_GetEventTested(&rtb_DTC_FRCinchMotorOL1_GetEv_i);

  /* FunctionCaller: '<S3>/DTC_FRCinchMotorOL2_GetEventFailed' */
  Rte_Call_DTC_FRCinchMotorOL2_GetEventFailed(&rtb_DTC_FRCinchMotorOL2_GetEv_h);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_SuctnDoor_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Outport: '<Root>/gSuctnDoor_u8FLCinchMotorPs_Val' */
  (void) Rte_Write_gSuctnDoor_u8FLCinchMotorPs_Val(Switch);

  /* Outport: '<Root>/gSuctnDoor_u8FRCinchMotorPs_Val' */
  (void) Rte_Write_gSuctnDoor_u8FRCinchMotorPs_Val(Switch_n);
}

/* Model initialize function */
FUNC(void, SuctnDoor_DD_CODE) SuctnDoor_DD_Runnable_Init(void)
{
  {
    boolean tmpWrite;
    boolean tmpWrite_0;
    boolean tmpWrite_1;
    boolean tmpWrite_2;
    boolean tmpWrite_3;
    boolean tmpWrite_4;
    boolean tmpWrite_5;
    boolean tmpWrite_6;
    boolean tmpWrite_7;
    boolean tmpWrite_8;
    boolean tmpWrite_9;
    boolean tmpWrite_a;
    boolean tmpWrite_b;
    boolean tmpWrite_c;
    boolean tmpWrite_d;

    /* Outport: '<Root>/gSuctnDoor_bFLCinchReset_Val' */
    (void) Rte_Write_gSuctnDoor_bFLCinchReset_Val(tmpWrite);

    /* Outport: '<Root>/gSuctnDoor_bFLInPwrRelsSwt_Val' */
    (void) Rte_Write_gSuctnDoor_bFLInPwrRelsSwt_Val(tmpWrite_0);

    /* Outport: '<Root>/gSuctnDoor_bFLPAWL_Val' */
    (void) Rte_Write_gSuctnDoor_bFLPAWL_Val(tmpWrite_1);

    /* Outport: '<Root>/gSuctnDoor_bFLSecLockFbSt_Val' */
    (void) Rte_Write_gSuctnDoor_bFLSecLockFbSt_Val(tmpWrite_2);

    /* Outport: '<Root>/gSuctnDoor_bFRCinchReset_Val' */
    (void) Rte_Write_gSuctnDoor_bFRCinchReset_Val(tmpWrite_3);

    /* Outport: '<Root>/gSuctnDoor_bFRPAWL_Val' */
    (void) Rte_Write_gSuctnDoor_bFRPAWL_Val(tmpWrite_4);

    /* Outport: '<Root>/gSuctnDoor_bFROutPwrRelsSwt_Val' */
    (void) Rte_Write_gSuctnDoor_bFROutPwrRelsSwt_Val(tmpWrite_5);

    /* Outport: '<Root>/gSuctnDoor_bFRSecLockFbSt_Val' */
    (void) Rte_Write_gSuctnDoor_bFRSecLockFbSt_Val(tmpWrite_6);

    /* Outport: '<Root>/gSuctnDoor_bRLInPwrRelsSwt_Val' */
    (void) Rte_Write_gSuctnDoor_bRLInPwrRelsSwt_Val(tmpWrite_7);

    /* Outport: '<Root>/gSuctnDoor_bRLSecLockFbSt_Val' */
    (void) Rte_Write_gSuctnDoor_bRLSecLockFbSt_Val(tmpWrite_8);

    /* Outport: '<Root>/gSuctnDoor_bRRInPwrRlesSwt_Val' */
    (void) Rte_Write_gSuctnDoor_bRRInPwrRlesSwt_Val(tmpWrite_9);

    /* Outport: '<Root>/gSuctnDoor_bRRSecLockFbSt_Val' */
    (void) Rte_Write_gSuctnDoor_bRRSecLockFbSt_Val(tmpWrite_a);

    /* Outport: '<Root>/gSuctnDoor_bRLCinchReset_Val' */
    (void) Rte_Write_gSuctnDoor_bRLCinchReset_Val(tmpWrite_b);

    /* Outport: '<Root>/gSuctnDoor_bRRCinchReset_Val' */
    (void) Rte_Write_gSuctnDoor_bRRCinchReset_Val(tmpWrite_c);

    /* Outport: '<Root>/gSuctnDoor_bFRElecDoorCloseSwt_Val' */
    (void) Rte_Write_gSuctnDoor_bFRElecDoorCloseSwt_Val(tmpWrite_d);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
