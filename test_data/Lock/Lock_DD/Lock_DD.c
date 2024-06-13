/*
 * File: Lock_DD.c
 *
 * Code generated for Simulink model 'Lock_DD'.
 *
 * Model version                  : 1.315
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Oct 19 10:36:27 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Lock_DD.h"
#include "Lock_DD_private.h"

/* Exported block states */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) LOCDev_ChrgCapSwtDeb_I;/* Simulink.Signal object 'LOCDev_ChrgCapSwtDeb_I'
                                                                 * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                 */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) LOCDev_RLChildLockFeedbackSwDeb_I;/* Simulink.Signal object 'LOCDev_RLChildLockFeedbackSwDeb_I'
                                                                            * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                            */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) LOCDev_RLDoorLockFeedbackSwDeb_I;/* Simulink.Signal object 'LOCDev_RLDoorLockFeedbackSwDeb_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                           */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) LOCDev_RRChildLockFeedbackSwDeb_I;/* Simulink.Signal object 'LOCDev_RRChildLockFeedbackSwDeb_I'
                                                                            * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                            */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) LOCDev_RRDoorLockFeedbackSwDeb_I;/* Simulink.Signal object 'LOCDev_RRDoorLockFeedbackSwDeb_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                           */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_DrvChrgCapUnlockSwDeb_I;/* Simulink.Signal object 'Lock_DD_DrvChrgCapUnlockSwDeb_I'
                                                                          * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                          */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_ExtTrunkUnlockSwDeb_I;/* Simulink.Signal object 'Lock_DD_ExtTrunkUnlockSwDeb_I'
                                                                        * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                        */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_FLDoorLockFeedbackSwDeb_I;/* Simulink.Signal object 'Lock_DD_FLDoorLockFeedbackSwDeb_I'
                                                                            * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                            */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_FRDoorLockFeedbackSwDeb_I;/* Simulink.Signal object 'Lock_DD_FRDoorLockFeedbackSwDeb_I'
                                                                            * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                            */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_HoodUnlockSwDeb_I;/* Simulink.Signal object 'Lock_DD_HoodUnlockSwDeb_I'
                                                                    * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                    */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_IntTrunkUnlockSwDeb_I;/* Simulink.Signal object 'Lock_DD_IntTrunkUnlockSwDeb_I'
                                                                        * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                        */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_MasterDrvLockSwDeb_I;/* Simulink.Signal object 'Lock_DD_MasterDrvLockSwDeb_I'
                                                                       * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                       */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_MasterLockSwDeb_I;/* Simulink.Signal object 'Lock_DD_MasterLockSwDeb_I'
                                                                    * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                    */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_MasterPsgLockSwDeb_I;/* Simulink.Signal object 'Lock_DD_MasterPsgLockSwDeb_I'
                                                                       * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                       */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_MasterUnlockSwDeb_I;/* Simulink.Signal object 'Lock_DD_MasterUnlockSwDeb_I'
                                                                      * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                      */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_MechKeyLockSwDeb_I;/* Simulink.Signal object 'Lock_DD_MechKeyLockSwDeb_I'
                                                                     * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                     */
VAR(Efx_DebounceState_Type, Lock_DD_VAR) Lock_DD_MechKeyUnlockSwDeb_I;/* Simulink.Signal object 'Lock_DD_MechKeyUnlockSwDeb_I'
                                                                       * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                       */

/* Block signals (default storage) */
VAR(B_Lock_DD_T, Lock_DD_VAR) Lock_DD_B;

/* Block states (default storage) */
VAR(DW_Lock_DD_T, Lock_DD_VAR) Lock_DD_DW;

/*
 * Output and update for action system:
 *    '<S25>/M2Active'
 *    '<S27>/M2Active'
 */
FUNC(void, Lock_DD_CODE_LOCAL) Lock_DD_M2Active(VAR(uint8, AUTOMATIC) rtu_ElecRelMotorMode, VAR(uint16, AUTOMATIC) rtu_ElecRelMotorPWM, P2VAR(uint8, AUTOMATIC, Lock_DD_VAR) rty_M1Mode, P2VAR(uint8, AUTOMATIC, Lock_DD_VAR) rty_M2Mode, P2VAR(uint16, AUTOMATIC, Lock_DD_VAR) rty_M2Pwm)
{
  /* SwitchCase: '<S47>/SwitchCase1' incorporates:
   *  Inport: '<S51>/ElecRelMotorPWM'
   *  Inport: '<S52>/ElecRelMotorPWM'
   *  Inport: '<S53>/ElecRelMotorPWM'
   *  Inport: '<S54>/ElecRelMotorPWM'
   */
  switch (rtu_ElecRelMotorMode) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S47>/CLOCKWISE' incorporates:
     *  ActionPort: '<S54>/Action Port'
     */
    /* SignalConversion: '<S54>/OutportBuffer_InsertedFor_M1Mode_at_inport_0' incorporates:
     *  Constant: '<S54>/Constant'
     */
    *rty_M1Mode = 7U;

    /* SignalConversion: '<S54>/OutportBuffer_InsertedFor_M2Mode_at_inport_0' incorporates:
     *  Constant: '<S54>/Constant3'
     */
    *rty_M2Mode = 2U;
    *rty_M2Pwm = rtu_ElecRelMotorPWM;

    /* End of Outputs for SubSystem: '<S47>/CLOCKWISE' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S47>/ANCLOCKWISE' incorporates:
     *  ActionPort: '<S51>/Action Port'
     */
    /* SignalConversion: '<S51>/OutportBuffer_InsertedFor_M1Mode_at_inport_0' incorporates:
     *  Constant: '<S51>/Constant'
     */
    *rty_M1Mode = 8U;

    /* SignalConversion: '<S51>/OutportBuffer_InsertedFor_M2Mode_at_inport_0' incorporates:
     *  Constant: '<S51>/Constant2'
     */
    *rty_M2Mode = 1U;
    *rty_M2Pwm = rtu_ElecRelMotorPWM;

    /* End of Outputs for SubSystem: '<S47>/ANCLOCKWISE' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S47>/BREAK_LOW' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */
    /* SignalConversion: '<S53>/OutportBuffer_InsertedFor_M1Mode_at_inport_0' incorporates:
     *  Constant: '<S53>/Constant'
     */
    *rty_M1Mode = 7U;

    /* SignalConversion: '<S53>/OutportBuffer_InsertedFor_M2Mode_at_inport_0' incorporates:
     *  Constant: '<S53>/Constant2'
     */
    *rty_M2Mode = 3U;
    *rty_M2Pwm = rtu_ElecRelMotorPWM;

    /* End of Outputs for SubSystem: '<S47>/BREAK_LOW' */
    break;

   case 4:
    /* Outputs for IfAction SubSystem: '<S47>/BREAK_HIGH' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */
    /* SignalConversion: '<S52>/OutportBuffer_InsertedFor_M1Mode_at_inport_0' incorporates:
     *  Constant: '<S52>/Constant'
     */
    *rty_M1Mode = 8U;

    /* SignalConversion: '<S52>/OutportBuffer_InsertedFor_M2Mode_at_inport_0' incorporates:
     *  Constant: '<S52>/Constant2'
     */
    *rty_M2Mode = 4U;
    *rty_M2Pwm = rtu_ElecRelMotorPWM;

    /* End of Outputs for SubSystem: '<S47>/BREAK_HIGH' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S47>/Default' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */
    /* SignalConversion: '<S55>/OutportBuffer_InsertedFor_M1Mode_at_inport_0' incorporates:
     *  Constant: '<S55>/Constant'
     */
    *rty_M1Mode = 0U;

    /* SignalConversion: '<S55>/OutportBuffer_InsertedFor_M2Mode_at_inport_0' incorporates:
     *  Constant: '<S55>/Constant2'
     */
    *rty_M2Mode = 0U;

    /* SignalConversion: '<S55>/OutportBuffer_InsertedFor_M2Pwm_at_inport_0' incorporates:
     *  Constant: '<S55>/Constant3'
     */
    *rty_M2Pwm = 0U;

    /* End of Outputs for SubSystem: '<S47>/Default' */
    break;
  }

  /* End of SwitchCase: '<S47>/SwitchCase1' */
}

/*
 * Output and update for action system:
 *    '<S25>/Cinch'
 *    '<S27>/PwrRels'
 */
FUNC(void, Lock_DD_CODE_LOCAL) Lock_DD_Cinch(P2VAR(uint8, AUTOMATIC, Lock_DD_VAR) rty_PwrRelsMotorPs)
{
  /* SignalConversion: '<S42>/OutportBuffer_InsertedFor_PwrRelsMotorPs_at_inport_0' incorporates:
   *  Constant: '<S42>/Constant'
   */
  *rty_PwrRelsMotorPs = 2U;
}

/*
 * Output and update for action system:
 *    '<S25>/Cinch1'
 *    '<S27>/PwrRels2'
 */
FUNC(void, Lock_DD_CODE_LOCAL) Lock_DD_Cinch1(P2VAR(uint8, AUTOMATIC, Lock_DD_VAR) rty_PwrRelsMotorPs)
{
  /* SignalConversion: '<S43>/OutportBuffer_InsertedFor_PwrRelsMotorPs_at_inport_0' incorporates:
   *  Constant: '<S43>/Constant'
   */
  *rty_PwrRelsMotorPs = 1U;
}

/*
 * Output and update for action system:
 *    '<S25>/Cinch2'
 *    '<S27>/PwrRels3'
 */
FUNC(void, Lock_DD_CODE_LOCAL) Lock_DD_Cinch2(P2VAR(uint8, AUTOMATIC, Lock_DD_VAR) rty_PwrRelsMotorPs)
{
  /* SignalConversion: '<S44>/OutportBuffer_InsertedFor_PwrRelsMotorPs_at_inport_0' incorporates:
   *  Constant: '<S44>/Constant'
   */
  *rty_PwrRelsMotorPs = 3U;
}

/*
 * Output and update for action system:
 *    '<S25>/Cinch3'
 *    '<S27>/PwrRels4'
 */
FUNC(void, Lock_DD_CODE_LOCAL) Lock_DD_Cinch3(P2VAR(uint8, AUTOMATIC, Lock_DD_VAR) rty_PwrRelsMotorPs)
{
  /* SignalConversion: '<S45>/OutportBuffer_InsertedFor_PwrRelsMotorPs_at_inport_0' incorporates:
   *  Constant: '<S45>/Constant'
   */
  *rty_PwrRelsMotorPs = 0U;
}

/* Model step function for TID1 */
FUNC(void, Lock_DD_CODE) Lock_DD_Runnable_IN_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  sint16 rtb_DataTypeConversion20;
  sint16 rtb_MovingAverageS32;
  boolean rtb_DataTypeConversion17;
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
  boolean tmpWrite_e;
  boolean tmpWrite_f;
  uint8 rtb_UnitDelay;
  sint16 tmp;
  sint16 tmp_0;
  uint16 rtb_UnitDelay_0;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_IN_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/Lock_DD_Runnable_IN_10ms_sys'
   */
  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get5' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_DrvChrgCapUnLckSwt, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion5' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S16>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S16>/Reset'
   *  Constant: '<S16>/X_Init'
   *  Constant: '<S1>/Constant18'
   *  Constant: '<S1>/Constant19'
   *  Constant: '<S1>/Constant20'
   *  Outport: '<Root>/gLock_bDrvChrgCapUnlockSwt_Val'
   *  S-Function (Upcast_sf): '<S16>/Upcast'
   *  S-Function (Upcast_sf): '<S16>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &Lock_DD_DrvChrgCapUnlockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get6' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_ExtTrUnLckSwt, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion6' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S17>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S17>/Reset'
   *  Constant: '<S17>/X_Init'
   *  Constant: '<S1>/Constant22'
   *  Constant: '<S1>/Constant23'
   *  Constant: '<S1>/Constant24'
   *  Outport: '<Root>/gLock_bExtTrunkUnlockSwt_Val'
   *  S-Function (Upcast_sf): '<S17>/Upcast'
   *  S-Function (Upcast_sf): '<S17>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_0 = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &Lock_DD_ExtTrunkUnlockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get7' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FLDoorLockFbSwt, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion7' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S18>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S18>/Reset'
   *  Constant: '<S18>/X_Init'
   *  Constant: '<S1>/Constant27'
   *  Constant: '<S1>/Constant28'
   *  Constant: '<S1>/Constant29'
   *  Outport: '<Root>/gLock_bFLDoorLockFbSt_Val'
   *  S-Function (Upcast_sf): '<S18>/Upcast'
   *  S-Function (Upcast_sf): '<S18>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_1 = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &Lock_DD_FLDoorLockFeedbackSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get8' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FRDoorLckFbSt, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion8' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S19>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S19>/Reset'
   *  Constant: '<S19>/X_Init'
   *  Constant: '<S1>/Constant31'
   *  Constant: '<S1>/Constant32'
   *  Constant: '<S1>/Constant33'
   *  Outport: '<Root>/gLock_bFRDoorLockFbSt_Val'
   *  S-Function (Upcast_sf): '<S19>/Upcast'
   *  S-Function (Upcast_sf): '<S19>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_2 = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &Lock_DD_FRDoorLockFeedbackSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get9' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_HoodUnLckSwt, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion9' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S20>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant35'
   *  Constant: '<S1>/Constant36'
   *  Constant: '<S1>/Constant37'
   *  Constant: '<S20>/Reset'
   *  Constant: '<S20>/X_Init'
   *  Outport: '<Root>/gLock_bHoodUnlockSwt_Val'
   *  S-Function (Upcast_sf): '<S20>/Upcast'
   *  S-Function (Upcast_sf): '<S20>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_3 = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &Lock_DD_HoodUnlockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get10' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_IntTrUnlckSwt, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion10' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S5>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant39'
   *  Constant: '<S1>/Constant40'
   *  Constant: '<S1>/Constant41'
   *  Constant: '<S5>/Reset'
   *  Constant: '<S5>/X_Init'
   *  Outport: '<Root>/gLock_bIntTrunkUnlockSwt_Val'
   *  S-Function (Upcast_sf): '<S5>/Upcast'
   *  S-Function (Upcast_sf): '<S5>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_4 = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &Lock_DD_IntTrunkUnlockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get11' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_MstDrvLockSwt, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion11' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S6>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant44'
   *  Constant: '<S1>/Constant45'
   *  Constant: '<S1>/Constant46'
   *  Constant: '<S6>/Reset'
   *  Constant: '<S6>/X_Init'
   *  Outport: '<Root>/gLock_bMasterDrvLockSwt_Val'
   *  S-Function (Upcast_sf): '<S6>/Upcast'
   *  S-Function (Upcast_sf): '<S6>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_5 = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &Lock_DD_MasterDrvLockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get12' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_MstLockSwt, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion12' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S7>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant47'
   *  Constant: '<S1>/Constant48'
   *  Constant: '<S1>/Constant49'
   *  Constant: '<S7>/Reset'
   *  Constant: '<S7>/X_Init'
   *  Outport: '<Root>/gLock_bMasterLockSwt_Val'
   *  S-Function (Upcast_sf): '<S7>/Upcast'
   *  S-Function (Upcast_sf): '<S7>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_6 = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &Lock_DD_MasterLockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get13' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_MstPsgLockSwt, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion13' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S8>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant52'
   *  Constant: '<S1>/Constant53'
   *  Constant: '<S1>/Constant54'
   *  Constant: '<S8>/Reset'
   *  Constant: '<S8>/X_Init'
   *  Outport: '<Root>/gLock_bMasterPsgLockSwt_Val'
   *  S-Function (Upcast_sf): '<S8>/Upcast'
   *  S-Function (Upcast_sf): '<S8>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_7 = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &Lock_DD_MasterPsgLockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get14' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_MstUnLckSwt, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion14' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S9>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant56'
   *  Constant: '<S1>/Constant57'
   *  Constant: '<S1>/Constant58'
   *  Constant: '<S9>/Reset'
   *  Constant: '<S9>/X_Init'
   *  Outport: '<Root>/gLock_bMasterUnlockSwt_Val'
   *  S-Function (Upcast_sf): '<S9>/Upcast'
   *  S-Function (Upcast_sf): '<S9>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_8 = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &Lock_DD_MasterUnlockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get15' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_MecKeyLockSwt, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion15' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S10>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S10>/Reset'
   *  Constant: '<S10>/X_Init'
   *  Constant: '<S1>/Constant60'
   *  Constant: '<S1>/Constant61'
   *  Constant: '<S1>/Constant62'
   *  Outport: '<Root>/gLock_bMechKeyLockSwt_Val'
   *  S-Function (Upcast_sf): '<S10>/Upcast'
   *  S-Function (Upcast_sf): '<S10>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_9 = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &Lock_DD_MechKeyLockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get16' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_MecKeyUnLckSwt, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion16' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S11>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S11>/Reset'
   *  Constant: '<S11>/X_Init'
   *  Constant: '<S1>/Constant64'
   *  Constant: '<S1>/Constant65'
   *  Constant: '<S1>/Constant66'
   *  Outport: '<Root>/gLock_bMechKeyUnlockSwt_Val'
   *  S-Function (Upcast_sf): '<S11>/Upcast'
   *  S-Function (Upcast_sf): '<S11>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_a = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &Lock_DD_MechKeyUnlockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get1' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RLChdLockFb, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion4' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S13>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S13>/Reset'
   *  Constant: '<S13>/X_Init'
   *  Constant: '<S1>/Constant6'
   *  Constant: '<S1>/Constant7'
   *  Constant: '<S1>/Constant8'
   *  Outport: '<Root>/gLock_bRLChildLockFbSt_Val'
   *  S-Function (Upcast_sf): '<S13>/Upcast'
   *  S-Function (Upcast_sf): '<S13>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_b = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &LOCDev_RLChildLockFeedbackSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get2' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RLDoorLockFb, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion1' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S4>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant10'
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S1>/Constant9'
   *  Constant: '<S4>/Reset'
   *  Constant: '<S4>/X_Init'
   *  Outport: '<Root>/gLock_bRLDoorLockFbSt_Val'
   *  S-Function (Upcast_sf): '<S4>/Upcast'
   *  S-Function (Upcast_sf): '<S4>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_c = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &LOCDev_RLDoorLockFeedbackSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get3' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RRChdLockFb, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion2' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S14>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S14>/Reset'
   *  Constant: '<S14>/X_Init'
   *  Constant: '<S1>/Constant11'
   *  Constant: '<S1>/Constant12'
   *  Constant: '<S1>/Constant13'
   *  Outport: '<Root>/gLock_bRRChildLockFbSt_Val'
   *  S-Function (Upcast_sf): '<S14>/Upcast'
   *  S-Function (Upcast_sf): '<S14>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_d = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &LOCDev_RRChildLockFeedbackSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get4' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RRDoorLockFb, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion3' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S15>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S15>/Reset'
   *  Constant: '<S15>/X_Init'
   *  Constant: '<S1>/Constant14'
   *  Constant: '<S1>/Constant15'
   *  Constant: '<S1>/Constant16'
   *  Outport: '<Root>/gLock_bRRDoorLockFbSt_Val'
   *  S-Function (Upcast_sf): '<S15>/Upcast'
   *  S-Function (Upcast_sf): '<S15>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_e = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &LOCDev_RRDoorLockFeedbackSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get17' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_ChrgCapSwt, &rtb_UnitDelay);

  /* DataTypeConversion: '<S1>/DataTypeConversion17' */
  rtb_DataTypeConversion17 = (rtb_UnitDelay != 0);

  /* S-Function (Efx_Debounce_sf): '<S12>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S12>/Reset'
   *  Constant: '<S12>/X_Init'
   *  Constant: '<S1>/Constant26'
   *  Constant: '<S1>/Constant51'
   *  Constant: '<S1>/Constant67'
   *  Outport: '<Root>/gLock_bChrgCapSwt_Val'
   *  S-Function (Upcast_sf): '<S12>/Upcast'
   *  S-Function (Upcast_sf): '<S12>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_f = Efx_Debounce_u8_u8(rtb_DataTypeConversion17, &LOCDev_ChrgCapSwtDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigAdc_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_ChrgCapPosVolt, &rtb_MovingAverageS32);

  /* DataTypeConversion: '<S1>/DataTypeConversion19' */
  tmp_0 = rtb_MovingAverageS32;
  if (rtb_MovingAverageS32 < 0) {
    tmp_0 = 0;
  }

  /* DataTypeConversion: '<S1>/DataTypeConversion20' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion19'
   */
  rtb_DataTypeConversion20 = tmp_0;

  /* S-Function (Efx_Moving_Average_sf): '<S21>/MovingAverageS32' incorporates:
   *  S-Function (Upcast_sf): '<S21>/Upcast'
   */
  /* <S21>/MovingAverageS32 */
  rtb_MovingAverageS32 = Efx_Moving_Average_s16_s16((Efx_MovingAvrgS16_Type*)&Lock_DD_DW.MovingAverageS32_MvgAvgPlumbing, rtb_DataTypeConversion20 );

  /* DataTypeConversion: '<S1>/DataTypeConversion18' */
  tmp = rtb_MovingAverageS32;
  if (rtb_MovingAverageS32 < 0) {
    tmp = 0;
  }

  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S1>/Constant71'
   *  UnitDelay: '<S1>/UnitDelay'
   */
  rtb_UnitDelay = Mfx_Add_u8u8_u8(1U, Lock_DD_DW.UnitDelay_DSTATE);

  /* Switch: '<S1>/Switch3' incorporates:
   *  Constant: '<S1>/Constant72'
   *  DataTypeConversion: '<S1>/DataTypeConversion18'
   *  DataTypeConversion: '<S1>/DataTypeConversion19'
   *  RelationalOperator: '<S1>/RelationalOperator'
   */
  if (rtb_UnitDelay >= 5) {
    rtb_UnitDelay_0 = (uint16)tmp;
  } else {
    rtb_UnitDelay_0 = (uint16)tmp_0;
  }

  /* Outport: '<Root>/gLock_u16ChrgCapPosVolt_Val' incorporates:
   *  Switch: '<S1>/Switch3'
   */
  (void) Rte_Write_gLock_u16ChrgCapPosVolt_Val(rtb_UnitDelay_0);

  /* Update for UnitDelay: '<S1>/UnitDelay' */
  Lock_DD_DW.UnitDelay_DSTATE = rtb_UnitDelay;

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_IN_10ms_at_outport_1' */

  /* Outport: '<Root>/gLock_bDrvChrgCapUnlockSwt_Val' */
  (void) Rte_Write_gLock_bDrvChrgCapUnlockSwt_Val(tmpWrite);

  /* Outport: '<Root>/gLock_bExtTrunkUnlockSwt_Val' */
  (void) Rte_Write_gLock_bExtTrunkUnlockSwt_Val(tmpWrite_0);

  /* Outport: '<Root>/gLock_bFLDoorLockFbSt_Val' */
  (void) Rte_Write_gLock_bFLDoorLockFbSt_Val(tmpWrite_1);

  /* Outport: '<Root>/gLock_bFRDoorLockFbSt_Val' */
  (void) Rte_Write_gLock_bFRDoorLockFbSt_Val(tmpWrite_2);

  /* Outport: '<Root>/gLock_bHoodUnlockSwt_Val' */
  (void) Rte_Write_gLock_bHoodUnlockSwt_Val(tmpWrite_3);

  /* Outport: '<Root>/gLock_bIntTrunkUnlockSwt_Val' */
  (void) Rte_Write_gLock_bIntTrunkUnlockSwt_Val(tmpWrite_4);

  /* Outport: '<Root>/gLock_bMasterDrvLockSwt_Val' */
  (void) Rte_Write_gLock_bMasterDrvLockSwt_Val(tmpWrite_5);

  /* Outport: '<Root>/gLock_bMasterLockSwt_Val' */
  (void) Rte_Write_gLock_bMasterLockSwt_Val(tmpWrite_6);

  /* Outport: '<Root>/gLock_bMasterPsgLockSwt_Val' */
  (void) Rte_Write_gLock_bMasterPsgLockSwt_Val(tmpWrite_7);

  /* Outport: '<Root>/gLock_bMasterUnlockSwt_Val' */
  (void) Rte_Write_gLock_bMasterUnlockSwt_Val(tmpWrite_8);

  /* Outport: '<Root>/gLock_bMechKeyLockSwt_Val' */
  (void) Rte_Write_gLock_bMechKeyLockSwt_Val(tmpWrite_9);

  /* Outport: '<Root>/gLock_bMechKeyUnlockSwt_Val' */
  (void) Rte_Write_gLock_bMechKeyUnlockSwt_Val(tmpWrite_a);

  /* Outport: '<Root>/gLock_bRLChildLockFbSt_Val' */
  (void) Rte_Write_gLock_bRLChildLockFbSt_Val(tmpWrite_b);

  /* Outport: '<Root>/gLock_bRLDoorLockFbSt_Val' */
  (void) Rte_Write_gLock_bRLDoorLockFbSt_Val(tmpWrite_c);

  /* Outport: '<Root>/gLock_bRRChildLockFbSt_Val' */
  (void) Rte_Write_gLock_bRRChildLockFbSt_Val(tmpWrite_d);

  /* Outport: '<Root>/gLock_bRRDoorLockFbSt_Val' */
  (void) Rte_Write_gLock_bRRDoorLockFbSt_Val(tmpWrite_e);

  /* Outport: '<Root>/gLock_bChrgCapSwt_Val' */
  (void) Rte_Write_gLock_bChrgCapSwt_Val(tmpWrite_f);
}

/* Model step function for TID2 */
FUNC(void, Lock_DD_CODE) Lock_DD_Runnable_OUT_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 rtb_Merge;
  uint8 rtb_TmpSignalConversionAtgLOC_u;
  uint8 rtb_Merge2;
  uint16 rtb_Merge4;
  uint8 rtb_TmpSignalConversionAtgLOC_e;
  uint8 rtb_Merge5;
  uint8 rtb_Merge4_h;
  boolean rtb_DTC_BootLockMotorOL_GetEv_b;
  boolean rtb_DTC_BootLockMotorOverCurr_h;
  boolean rtb_DTC_FLDoorLockMotorOL_Get_n;
  boolean rtb_DTC_FLDoorLockMotorOverCu_a;
  boolean rtb_DTC_FLPwrRelsMotorMinusSC_b;
  boolean rtb_DTC_FLPwrRelsMotorMinusS_eu;
  boolean rtb_DTC_FLPwrRelsMotorOL1_Get_h;
  boolean rtb_DTC_FLPwrRelsMotorOL2_Get_f;
  boolean rtb_DTC_FLPwrRelsMotorOL_GetE_a;
  boolean rtb_DTC_FLPwrRelsMotorOverCur_m;
  boolean rtb_DTC_FLPwrRelsMotorPlusSCB_o;
  boolean rtb_DTC_FLPwrRelsMotorPlusSCG_l;
  boolean rtb_DTC_FRDoorLockMotorOL_Get_d;
  boolean rtb_DTC_FRDoorLockMotorOverCu_j;
  boolean rtb_DTC_FRPwrRelsMotorMinusSC_m;
  boolean rtb_DTC_FRPwrRelsMotorMinusSC_i;
  boolean rtb_DTC_FRPwrRelsMotorOL1_Get_g;
  boolean rtb_DTC_FRPwrRelsMotorOL2_Get_o;
  boolean rtb_DTC_FRPwrRelsMotorOL_GetE_k;
  boolean rtb_DTC_FRPwrRelsMotorOverCur_f;
  boolean rtb_DTC_FRPwrRelsMotorPlusSCB_j;
  boolean rtb_DTC_FRPwrRelsMotorPlusSCG_d;
  boolean rtb_DTC_FillerCapALockMotorOL_o;
  boolean rtb_DTC_FillerCapALockMotorOv_m;
  boolean rtb_DTC_FillerCapBLockMotorOL_f;
  boolean rtb_DTC_FillerCapBLockMotorO_fh;
  boolean rtb_DTC_RLChildLockMotorOL_Ge_a;
  boolean rtb_DTC_RLChildLockMotorOverC_l;
  boolean rtb_DTC_RLDoorLockMotorOL_Get_n;
  boolean rtb_DTC_RLDoorLockMotorOverC_dn;
  boolean rtb_DTC_RLPwrRelsMotorMinusSC_i;
  boolean rtb_DTC_RLPwrRelsMotorMinusSC_g;
  boolean rtb_DTC_RLPwrRelsMotorOL1_Get_c;
  boolean rtb_DTC_RLPwrRelsMotorOL2_Get_d;
  boolean rtb_DTC_RLPwrRelsMotorOL_GetE_p;
  boolean rtb_DTC_RLPwrRelsMotorOverCur_n;
  boolean rtb_DTC_RLPwrRelsMotorPlusSCB_m;
  boolean rtb_DTC_RLPwrRelsMotorPlusSCG_i;
  boolean rtb_DTC_RRChildLockMotorOL_Ge_c;
  boolean rtb_DTC_RRChildLockMotorOverC_p;
  boolean rtb_DTC_RRDoorLockMotorOL_Get_m;
  boolean rtb_DTC_RRDoorLockMotorOverCu_l;
  boolean rtb_DTC_RRPwrRelsMotorMinusSC_m;
  boolean rtb_DTC_RRPwrRelsMotorMinusS_ki;
  boolean rtb_DTC_RRPwrRelsMotorOL1_Get_d;
  boolean rtb_DTC_RRPwrRelsMotorOL2_Get_l;
  boolean rtb_DTC_RRPwrRelsMotorOL_GetE_h;
  boolean rtb_DTC_RRPwrRelsMotorOverCur_d;
  boolean rtb_DTC_RRPwrRelsMotorPlusSCB_b;
  boolean rtb_DTC_RRPwrRelsMotorPlusSCG_b;
  uint32 rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1;
  float32 tmp;
  uint16 tmp_0;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/Lock_DD_Runnable_OUT_10ms_sys'
   */
  /* Outport: '<Root>/gLock_bFLPwrRelsMotorMinusSt_Val' incorporates:
   *  Constant: '<S3>/Constant6'
   */
  (void) Rte_Write_gLock_bFLPwrRelsMotorMinusSt_Val(false);

  /* Outport: '<Root>/gLock_bFLPwrRelsMotorPlusSt_Val' incorporates:
   *  Constant: '<S3>/Constant7'
   */
  (void) Rte_Write_gLock_bFLPwrRelsMotorPlusSt_Val(false);

  /* Outport: '<Root>/gLock_bFRPwrRelsMotorMinusSt_Val' incorporates:
   *  Constant: '<S3>/Constant8'
   */
  (void) Rte_Write_gLock_bFRPwrRelsMotorMinusSt_Val(false);

  /* Outport: '<Root>/gLock_bFRPwrRelsMotorPlusSt_Val' incorporates:
   *  Constant: '<S3>/Constant9'
   */
  (void) Rte_Write_gLock_bFRPwrRelsMotorPlusSt_Val(false);

  /* Outport: '<Root>/gLock_bRLPwrRelsMotorMinusSt_Val' incorporates:
   *  Constant: '<S3>/Constant10'
   */
  (void) Rte_Write_gLock_bRLPwrRelsMotorMinusSt_Val(false);

  /* Outport: '<Root>/gLock_bRLPwrRelsMotorPlusSt_Val' incorporates:
   *  Constant: '<S3>/Constant11'
   */
  (void) Rte_Write_gLock_bRLPwrRelsMotorPlusSt_Val(false);

  /* Outport: '<Root>/gLock_bRRPwrRelsMotorMinusSt_Val' incorporates:
   *  Constant: '<S3>/Constant12'
   */
  (void) Rte_Write_gLock_bRRPwrRelsMotorMinusSt_Val(false);

  /* Outport: '<Root>/gLock_bRRPwrRelsMotorPlusSt_Val' incorporates:
   *  Constant: '<S3>/Constant13'
   */
  (void) Rte_Write_gLock_bRRPwrRelsMotorPlusSt_Val(false);

  /* SignalConversion: '<S3>/TmpSignal ConversionAtgLOC_u8BootLockMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gLockCtrl_u8BootLockMotorOutput_Val'
   */
  Rte_Read_gLockCtrl_u8BootLockMotorOutput_Val(&Lock_DD_B.TmpSignalConversionAtgLOC_u8Boo);

  /* SwitchCase: '<S23>/SwitchCase1' */
  switch (Lock_DD_B.TmpSignalConversionAtgLOC_u8Boo) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S23>/BootLockOutput' incorporates:
     *  ActionPort: '<S36>/Action Port'
     */
    /* SignalConversion: '<S36>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S36>/Constant'
     */
    rtb_Merge = 2U;

    /* End of Outputs for SubSystem: '<S23>/BootLockOutput' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S23>/BootUnLockOutput' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    /* SignalConversion: '<S37>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S37>/Constant'
     */
    rtb_Merge = 1U;

    /* End of Outputs for SubSystem: '<S23>/BootUnLockOutput' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S23>/NoBootLockOutput' incorporates:
     *  ActionPort: '<S38>/Action Port'
     */
    /* SignalConversion: '<S38>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S38>/Constant'
     */
    rtb_Merge = 0U;

    /* End of Outputs for SubSystem: '<S23>/NoBootLockOutput' */
    break;
  }

  /* End of SwitchCase: '<S23>/SwitchCase1' */

  /* FunctionCaller: '<S23>/IoHwAb_HbrModCtrl_Hbr_SetMod' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_BootLockMotModCtrl, rtb_Merge);

  /* SignalConversion: '<S3>/TmpSignal ConversionAtgLOC_u8ChrgCapLockMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gLockCtrl_u8ChrgCapLockMotorOutput_Val'
   */
  Rte_Read_gLockCtrl_u8ChrgCapLockMotorOutput_Val(&Lock_DD_B.TmpSignalConversionAtgLOC_u8Chr);

  /* SwitchCase: '<S24>/SwitchCase' */
  switch (Lock_DD_B.TmpSignalConversionAtgLOC_u8Chr) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S24>/ChrgCapLockMotorOutput' incorporates:
     *  ActionPort: '<S39>/Action Port'
     */
    /* SignalConversion: '<S39>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S39>/Constant'
     */
    rtb_Merge = 1U;

    /* End of Outputs for SubSystem: '<S24>/ChrgCapLockMotorOutput' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S24>/ChrgCapUnLockMotorOutput' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    /* SignalConversion: '<S40>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S40>/Constant'
     */
    rtb_Merge = 2U;

    /* End of Outputs for SubSystem: '<S24>/ChrgCapUnLockMotorOutput' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S24>/NoChrgCapLockMotorOutput' incorporates:
     *  ActionPort: '<S41>/Action Port'
     */
    /* SignalConversion: '<S41>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S41>/Constant'
     */
    rtb_Merge = 0U;

    /* End of Outputs for SubSystem: '<S24>/NoChrgCapLockMotorOutput' */
    break;
  }

  /* End of SwitchCase: '<S24>/SwitchCase' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Inport: '<Root>/gLockCtrl_u8FLDoorElecRelResetMotorOutput_Val' */
  Rte_Read_gLockCtrl_u8FLDoorElecRelResetMotorOutput_Val(&rtb_Merge4_h);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/Lock_DD_Runnable_OUT_10ms_sys'
   */
  /* FunctionCaller: '<S24>/IoHwAb_HbrModCtrl_Hbr_SetMod' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ChrgCapLockMotModCtrl, rtb_Merge);

  /* SignalConversion: '<S3>/TmpSignal ConversionAtgLOC_u8FLDoorLockMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gLockCtrl_u8FLDoorLockMotorOutput_Val'
   */
  Rte_Read_gLockCtrl_u8FLDoorLockMotorOutput_Val(&rtb_TmpSignalConversionAtgLOC_u);

  /* If: '<S25>/If' incorporates:
   *  Constant: '<S25>/Constant8'
   *  Inport: '<Root>/gLockCtrl_u8FLDoorElecRelMotorOutput_Val'
   *  RelationalOperator: '<S25>/Relational Operator1'
   *  Saturate: '<S25>/Saturation6'
   */
  if (rtb_TmpSignalConversionAtgLOC_u != 255) {
    /* Outputs for IfAction SubSystem: '<S25>/M1Active' incorporates:
     *  ActionPort: '<S46>/Action Port'
     */
    /* SwitchCase: '<S46>/SwitchCase1' */
    switch (rtb_TmpSignalConversionAtgLOC_u) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S46>/RLDoorUnLockOutput' incorporates:
       *  ActionPort: '<S50>/Action Port'
       */
      /* SignalConversion: '<S50>/OutportBuffer_InsertedFor_M1Mode_at_inport_0' incorporates:
       *  Constant: '<S50>/Constant'
       */
      rtb_Merge2 = 2U;

      /* SignalConversion: '<S50>/OutportBuffer_InsertedFor_M2Mode_at_inport_0' incorporates:
       *  Constant: '<S50>/Constant3'
       */
      rtb_TmpSignalConversionAtgLOC_u = 6U;

      /* SignalConversion: '<S50>/OutportBuffer_InsertedFor_M2Pwm_at_inport_0' incorporates:
       *  Constant: '<S50>/Constant2'
       */
      rtb_Merge4 = 0U;

      /* End of Outputs for SubSystem: '<S46>/RLDoorUnLockOutput' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S46>/RLDoorLockOutput' incorporates:
       *  ActionPort: '<S49>/Action Port'
       */
      /* SignalConversion: '<S49>/OutportBuffer_InsertedFor_M1Mode_at_inport_0' incorporates:
       *  Constant: '<S49>/Constant'
       */
      rtb_Merge2 = 1U;

      /* SignalConversion: '<S49>/OutportBuffer_InsertedFor_M2Mode_at_inport_0' incorporates:
       *  Constant: '<S49>/Constant2'
       */
      rtb_TmpSignalConversionAtgLOC_u = 5U;

      /* SignalConversion: '<S49>/OutportBuffer_InsertedFor_M2Pwm_at_inport_0' incorporates:
       *  Constant: '<S49>/Constant3'
       */
      rtb_Merge4 = 0U;

      /* End of Outputs for SubSystem: '<S46>/RLDoorLockOutput' */
      break;

     default:
      /* Outputs for IfAction SubSystem: '<S46>/NoRLDoorLockOutput' incorporates:
       *  ActionPort: '<S48>/Action Port'
       */
      /* SignalConversion: '<S48>/OutportBuffer_InsertedFor_M1Mode_at_inport_0' incorporates:
       *  Constant: '<S48>/Constant'
       */
      rtb_Merge2 = 0U;

      /* SignalConversion: '<S48>/OutportBuffer_InsertedFor_M2Mode_at_inport_0' incorporates:
       *  Constant: '<S48>/Constant1'
       */
      rtb_TmpSignalConversionAtgLOC_u = 0U;

      /* SignalConversion: '<S48>/OutportBuffer_InsertedFor_M2Pwm_at_inport_0' incorporates:
       *  Constant: '<S48>/Constant2'
       */
      rtb_Merge4 = 0U;

      /* End of Outputs for SubSystem: '<S46>/NoRLDoorLockOutput' */
      break;
    }

    /* End of SwitchCase: '<S46>/SwitchCase1' */
    /* End of Outputs for SubSystem: '<S25>/M1Active' */
  } else {
    Rte_Read_gLockCtrl_u8FLDoorElecRelMotorOutput_Val(&rtb_Merge5);

    /* Product: '<S25>/Product' incorporates:
     *  Constant: '<S25>/Constant2'
     *  Inport: '<Root>/gLockCtrl_u8FLDoorElecRelMotorOutput_Val'
     */
    tmp = (float32)rtb_Merge4_h * 327.68F;
    if (tmp < 65536.0F) {
      tmp_0 = (uint16)tmp;
    } else {
      tmp_0 = MAX_uint16_T;
    }

    /* End of Product: '<S25>/Product' */

    /* Outputs for IfAction SubSystem: '<S25>/M2Active' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    Lock_DD_M2Active(rtb_Merge5, Mfx_Min_u16(tmp_0, 32768U), &rtb_Merge2, &rtb_TmpSignalConversionAtgLOC_u, &rtb_Merge4);

    /* End of Outputs for SubSystem: '<S25>/M2Active' */
  }

  /* End of If: '<S25>/If' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Inport: '<Root>/gLockCtrl_u8FRElecRelResetMotorOutput_Val' */
  Rte_Read_gLockCtrl_u8FRElecRelResetMotorOutput_Val(&tmpRead_0);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/Lock_DD_Runnable_OUT_10ms_sys'
   */
  /* FunctionCaller: '<S25>/IoHwAb_HbrModCtrl_Hbr_SetMod' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_DrvDoorElecRelMotModCtrl, rtb_TmpSignalConversionAtgLOC_u);

  /* FunctionCaller: '<S25>/IoHwAb_HbrModCtrl_Hbr_SetMod1' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_FLDoorLockMotModCtrl, rtb_Merge2);

  /* FunctionCaller: '<S25>/IoHwAb_HbrPwm_Hbr_SetDuty' */
  Rte_Call_IoHwAb_HbrPwm_Hbr_SetDuty(O_H_DrvDoorElecRelMotPwm, rtb_Merge4);

  /* SignalConversion: '<S3>/TmpSignal ConversionAtgLOC_u8FRDoorLockMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gLockCtrl_u8FRDoorLockMotorOutput_Val'
   */
  Rte_Read_gLockCtrl_u8FRDoorLockMotorOutput_Val(&rtb_TmpSignalConversionAtgLOC_e);

  /* If: '<S27>/If' incorporates:
   *  Constant: '<S27>/Constant8'
   *  Inport: '<Root>/gLockCtrl_u8FRElecRelMotorOutput_Val'
   *  RelationalOperator: '<S27>/Relational Operator1'
   *  Saturate: '<S27>/Saturation6'
   */
  if (rtb_TmpSignalConversionAtgLOC_e != 255) {
    /* Outputs for IfAction SubSystem: '<S27>/M1Active' incorporates:
     *  ActionPort: '<S59>/Action Port'
     */
    /* SwitchCase: '<S59>/SwitchCase1' */
    switch (rtb_TmpSignalConversionAtgLOC_e) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S59>/FRDoorUnLockOutput' incorporates:
       *  ActionPort: '<S66>/Action Port'
       */
      /* SignalConversion: '<S66>/OutportBuffer_InsertedFor_M1Mode_at_inport_0' incorporates:
       *  Constant: '<S66>/Constant'
       */
      rtb_Merge4_h = 2U;

      /* SignalConversion: '<S66>/OutportBuffer_InsertedFor_M2Mode_at_inport_0' incorporates:
       *  Constant: '<S66>/Constant3'
       */
      rtb_Merge5 = 6U;

      /* SignalConversion: '<S66>/OutportBuffer_InsertedFor_M2Pwm_at_inport_0' incorporates:
       *  Constant: '<S66>/Constant2'
       */
      rtb_Merge4 = 0U;

      /* End of Outputs for SubSystem: '<S59>/FRDoorUnLockOutput' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S59>/FRDoorLockOutput' incorporates:
       *  ActionPort: '<S65>/Action Port'
       */
      /* SignalConversion: '<S65>/OutportBuffer_InsertedFor_M1Mode_at_inport_0' incorporates:
       *  Constant: '<S65>/Constant'
       */
      rtb_Merge4_h = 1U;

      /* SignalConversion: '<S65>/OutportBuffer_InsertedFor_M2Mode_at_inport_0' incorporates:
       *  Constant: '<S65>/Constant2'
       */
      rtb_Merge5 = 5U;

      /* SignalConversion: '<S65>/OutportBuffer_InsertedFor_M2Pwm_at_inport_0' incorporates:
       *  Constant: '<S65>/Constant3'
       */
      rtb_Merge4 = 0U;

      /* End of Outputs for SubSystem: '<S59>/FRDoorLockOutput' */
      break;

     default:
      /* Outputs for IfAction SubSystem: '<S59>/NoFRDoorLockOutput' incorporates:
       *  ActionPort: '<S67>/Action Port'
       */
      /* SignalConversion: '<S67>/OutportBuffer_InsertedFor_M1Mode_at_inport_0' incorporates:
       *  Constant: '<S67>/Constant'
       */
      rtb_Merge4_h = 0U;

      /* SignalConversion: '<S67>/OutportBuffer_InsertedFor_M2Mode_at_inport_0' incorporates:
       *  Constant: '<S67>/Constant1'
       */
      rtb_Merge5 = 0U;

      /* SignalConversion: '<S67>/OutportBuffer_InsertedFor_M2Pwm_at_inport_0' incorporates:
       *  Constant: '<S67>/Constant2'
       */
      rtb_Merge4 = 0U;

      /* End of Outputs for SubSystem: '<S59>/NoFRDoorLockOutput' */
      break;
    }

    /* End of SwitchCase: '<S59>/SwitchCase1' */
    /* End of Outputs for SubSystem: '<S27>/M1Active' */
  } else {
    Rte_Read_gLockCtrl_u8FRElecRelMotorOutput_Val(&tmpRead);

    /* Product: '<S27>/Product' incorporates:
     *  Constant: '<S27>/Constant2'
     *  Inport: '<Root>/gLockCtrl_u8FRElecRelMotorOutput_Val'
     */
    tmp = (float32)tmpRead_0 * 327.68F;
    if (tmp < 65536.0F) {
      tmp_0 = (uint16)tmp;
    } else {
      tmp_0 = MAX_uint16_T;
    }

    /* End of Product: '<S27>/Product' */

    /* Outputs for IfAction SubSystem: '<S27>/M2Active' incorporates:
     *  ActionPort: '<S60>/Action Port'
     */
    Lock_DD_M2Active(tmpRead, Mfx_Min_u16(tmp_0, 32768U), &rtb_Merge4_h, &rtb_Merge5, &rtb_Merge4);

    /* End of Outputs for SubSystem: '<S27>/M2Active' */
  }

  /* End of If: '<S27>/If' */

  /* FunctionCaller: '<S27>/IoHwAb_HbrModCtrl_Hbr_SetMod' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_FRElecRelMotModCtrl, rtb_Merge5);

  /* FunctionCaller: '<S27>/IoHwAb_HbrModCtrl_Hbr_SetMod1' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_FRDoorLockMotModCtrl, rtb_Merge4_h);

  /* FunctionCaller: '<S27>/IoHwAb_HbrPwm_Hbr_SetDuty' */
  Rte_Call_IoHwAb_HbrPwm_Hbr_SetDuty(O_H_FRElecRelMotPwm, rtb_Merge4);

  /* SignalConversion: '<S3>/TmpSignal ConversionAtgLOC_u8ElectcGlvBoxLockMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gLockCtrl_u8ElectcGlvBoxLockMotorOutput_Val'
   */
  Rte_Read_gLockCtrl_u8ElectcGlvBoxLockMotorOutput_Val(&Lock_DD_B.TmpSignalConversionAtgLOC_u8Ele);

  /* SwitchCase: '<S26>/SwitchCase' */
  switch (Lock_DD_B.TmpSignalConversionAtgLOC_u8Ele) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S26>/ElectcGlvBoxLockMotorOutput' incorporates:
     *  ActionPort: '<S56>/Action Port'
     */
    /* SignalConversion: '<S56>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S56>/Constant'
     */
    rtb_Merge = 1U;

    /* End of Outputs for SubSystem: '<S26>/ElectcGlvBoxLockMotorOutput' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S26>/ElectcGlvBoxUnLockMotorOutput' incorporates:
     *  ActionPort: '<S57>/Action Port'
     */
    /* SignalConversion: '<S57>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S57>/Constant'
     */
    rtb_Merge = 2U;

    /* End of Outputs for SubSystem: '<S26>/ElectcGlvBoxUnLockMotorOutput' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S26>/NoElectcGlvBoxLockMotorOutput' incorporates:
     *  ActionPort: '<S58>/Action Port'
     */
    /* SignalConversion: '<S58>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S58>/Constant'
     */
    rtb_Merge = 0U;

    /* End of Outputs for SubSystem: '<S26>/NoElectcGlvBoxLockMotorOutput' */
    break;
  }

  /* End of SwitchCase: '<S26>/SwitchCase' */

  /* FunctionCaller: '<S26>/IoHwAb_HbrModCtrl_Hbr_SetMod' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ElectcGlvBoxLockMotModCtrl, rtb_Merge);

  /* SignalConversion: '<S3>/TmpSignal ConversionAtgLOC_u8OilTankLockMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gLockCtrl_u8OilTankLockMotorOutput_Val'
   */
  Rte_Read_gLockCtrl_u8OilTankLockMotorOutput_Val(&Lock_DD_B.TmpSignalConversionAtgLOC_u8Oil);

  /* SwitchCase: '<S29>/SwitchCase' */
  switch (Lock_DD_B.TmpSignalConversionAtgLOC_u8Oil) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S29>/OilTankLockOutput' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    /* SignalConversion: '<S78>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S78>/Constant'
     */
    rtb_Merge = 1U;

    /* End of Outputs for SubSystem: '<S29>/OilTankLockOutput' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S29>/OilTankUnlockOutput' incorporates:
     *  ActionPort: '<S79>/Action Port'
     */
    /* SignalConversion: '<S79>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S79>/Constant'
     */
    rtb_Merge = 2U;

    /* End of Outputs for SubSystem: '<S29>/OilTankUnlockOutput' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S29>/NoOilTankLockOutput' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    /* SignalConversion: '<S77>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S77>/Constant'
     */
    rtb_Merge = 0U;

    /* End of Outputs for SubSystem: '<S29>/NoOilTankLockOutput' */
    break;
  }

  /* End of SwitchCase: '<S29>/SwitchCase' */

  /* FunctionCaller: '<S29>/IoHwAb_HbrModCtrl_Hbr_SetMod' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_OilTankLockMotModCtrl, rtb_Merge);

  /* SignalConversion: '<S3>/TmpSignal ConversionAtgLOC_u8RLDoorLockMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gLockCtrl_u8RLDoorLockMotorOutput_Val'
   */
  Rte_Read_gLockCtrl_u8RLDoorLockMotorOutput_Val(&Lock_DD_B.TmpSignalConversionAtgLOC_u8RLD);

  /* SwitchCase: '<S30>/SwitchCase' */
  switch (Lock_DD_B.TmpSignalConversionAtgLOC_u8RLD) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S30>/Lock' incorporates:
     *  ActionPort: '<S80>/Action Port'
     */
    /* SignalConversion: '<S80>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S80>/Constant'
     */
    rtb_Merge = 2U;

    /* End of Outputs for SubSystem: '<S30>/Lock' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S30>/UnLock' incorporates:
     *  ActionPort: '<S82>/Action Port'
     */
    /* SignalConversion: '<S82>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S82>/Constant'
     */
    rtb_Merge = 1U;

    /* End of Outputs for SubSystem: '<S30>/UnLock' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S30>/Stop' incorporates:
     *  ActionPort: '<S81>/Action Port'
     */
    /* SignalConversion: '<S81>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S81>/Constant'
     */
    rtb_Merge = 0U;

    /* End of Outputs for SubSystem: '<S30>/Stop' */
    break;
  }

  /* End of SwitchCase: '<S30>/SwitchCase' */

  /* FunctionCaller: '<S30>/IoHwAb_HbrModCtrl_Hbr_SetMod2' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_RLDoorLockMotModCtrl, rtb_Merge);

  /* SignalConversion: '<S3>/TmpSignal ConversionAtgLOC_u8RRDoorLockMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gLockCtrl_u8RRDoorLockMotorOutput_Val'
   */
  Rte_Read_gLockCtrl_u8RRDoorLockMotorOutput_Val(&Lock_DD_B.TmpSignalConversionAtgLOC_u8RRD);

  /* SwitchCase: '<S35>/SwitchCase' */
  switch (Lock_DD_B.TmpSignalConversionAtgLOC_u8RRD) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S35>/Lock' incorporates:
     *  ActionPort: '<S104>/Action Port'
     */
    /* SignalConversion: '<S104>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S104>/Constant'
     */
    rtb_Merge = 1U;

    /* End of Outputs for SubSystem: '<S35>/Lock' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S35>/UnLock' incorporates:
     *  ActionPort: '<S106>/Action Port'
     */
    /* SignalConversion: '<S106>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S106>/Constant'
     */
    rtb_Merge = 2U;

    /* End of Outputs for SubSystem: '<S35>/UnLock' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S35>/Stop' incorporates:
     *  ActionPort: '<S105>/Action Port'
     */
    /* SignalConversion: '<S105>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S105>/Constant'
     */
    rtb_Merge = 0U;

    /* End of Outputs for SubSystem: '<S35>/Stop' */
    break;
  }

  /* End of SwitchCase: '<S35>/SwitchCase' */

  /* FunctionCaller: '<S35>/IoHwAb_HbrModCtrl_Hbr_SetMod2' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_RRDoorLockMotModCtrl, rtb_Merge);

  /* FunctionCaller: '<S3>/DTC_BootLockMotorOL_GetEventFailed' */
  Rte_Call_DTC_BootLockMotorOL_GetEventFailed(&rtb_DTC_BootLockMotorOL_GetEv_b);

  /* FunctionCaller: '<S3>/DTC_BootLockMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_BootLockMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_BootLockMotorOL_SetEventStatus' */
  Rte_Call_DTC_BootLockMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_BootLockMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_BootLockMotorOverCurr_GetEventFailed(&rtb_DTC_BootLockMotorOverCurr_h);

  /* FunctionCaller: '<S3>/DTC_BootLockMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_BootLockMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_BootLockMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_BootLockMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FLDoorLockMotorOL_GetEventFailed' */
  Rte_Call_DTC_FLDoorLockMotorOL_GetEventFailed(&rtb_DTC_FLDoorLockMotorOL_Get_n);

  /* FunctionCaller: '<S3>/DTC_FLDoorLockMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_FLDoorLockMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FLDoorLockMotorOL_SetEventStatus' */
  Rte_Call_DTC_FLDoorLockMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FLDoorLockMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_FLDoorLockMotorOverCurr_GetEventFailed(&rtb_DTC_FLDoorLockMotorOverCu_a);

  /* FunctionCaller: '<S3>/DTC_FLDoorLockMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_FLDoorLockMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FLDoorLockMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_FLDoorLockMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorMinusSCB_GetEventFailed' */
  Rte_Call_DTC_FLPwrRelsMotorMinusSCB_GetEventFailed(&rtb_DTC_FLPwrRelsMotorMinusSC_b);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorMinusSCB_ResetEventDebounceStatus' */
  Rte_Call_DTC_FLPwrRelsMotorMinusSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorMinusSCB_SetEventStatus' */
  Rte_Call_DTC_FLPwrRelsMotorMinusSCB_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorMinusSCG_GetEventFailed' */
  Rte_Call_DTC_FLPwrRelsMotorMinusSCG_GetEventFailed(&rtb_DTC_FLPwrRelsMotorMinusS_eu);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorMinusSCG_ResetEventDebounceStatus' */
  Rte_Call_DTC_FLPwrRelsMotorMinusSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorMinusSCG_SetEventStatus' */
  Rte_Call_DTC_FLPwrRelsMotorMinusSCG_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorOL1_GetEventFailed' */
  Rte_Call_DTC_FLPwrRelsMotorOL1_GetEventFailed(&rtb_DTC_FLPwrRelsMotorOL1_Get_h);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorOL1_ResetEventDebounceStatus' */
  Rte_Call_DTC_FLPwrRelsMotorOL1_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorOL1_SetEventStatus' */
  Rte_Call_DTC_FLPwrRelsMotorOL1_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorOL2_GetEventFailed' */
  Rte_Call_DTC_FLPwrRelsMotorOL2_GetEventFailed(&rtb_DTC_FLPwrRelsMotorOL2_Get_f);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorOL2_ResetEventDebounceStatus' */
  Rte_Call_DTC_FLPwrRelsMotorOL2_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorOL2_SetEventStatus' */
  Rte_Call_DTC_FLPwrRelsMotorOL2_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorOL_GetEventFailed' */
  Rte_Call_DTC_FLPwrRelsMotorOL_GetEventFailed(&rtb_DTC_FLPwrRelsMotorOL_GetE_a);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_FLPwrRelsMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorOL_SetEventStatus' */
  Rte_Call_DTC_FLPwrRelsMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_FLPwrRelsMotorOverCurr_GetEventFailed(&rtb_DTC_FLPwrRelsMotorOverCur_m);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_FLPwrRelsMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_FLPwrRelsMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorPlusSCB_GetEventFailed' */
  Rte_Call_DTC_FLPwrRelsMotorPlusSCB_GetEventFailed(&rtb_DTC_FLPwrRelsMotorPlusSCB_o);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorPlusSCB_ResetEventDebounceStatus' */
  Rte_Call_DTC_FLPwrRelsMotorPlusSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorPlusSCB_SetEventStatus' */
  Rte_Call_DTC_FLPwrRelsMotorPlusSCB_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorPlusSCG_GetEventFailed' */
  Rte_Call_DTC_FLPwrRelsMotorPlusSCG_GetEventFailed(&rtb_DTC_FLPwrRelsMotorPlusSCG_l);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorPlusSCG_ResetEventDebounceStatus' */
  Rte_Call_DTC_FLPwrRelsMotorPlusSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FLPwrRelsMotorPlusSCG_SetEventStatus' */
  Rte_Call_DTC_FLPwrRelsMotorPlusSCG_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FRDoorLockMotorOL_GetEventFailed' */
  Rte_Call_DTC_FRDoorLockMotorOL_GetEventFailed(&rtb_DTC_FRDoorLockMotorOL_Get_d);

  /* FunctionCaller: '<S3>/DTC_FRDoorLockMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_FRDoorLockMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FRDoorLockMotorOL_SetEventStatus' */
  Rte_Call_DTC_FRDoorLockMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FRDoorLockMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_FRDoorLockMotorOverCurr_GetEventFailed(&rtb_DTC_FRDoorLockMotorOverCu_j);

  /* FunctionCaller: '<S3>/DTC_FRDoorLockMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_FRDoorLockMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FRDoorLockMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_FRDoorLockMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorMinusSCB_GetEventFailed' */
  Rte_Call_DTC_FRPwrRelsMotorMinusSCB_GetEventFailed(&rtb_DTC_FRPwrRelsMotorMinusSC_m);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorMinusSCB_ResetEventDebounceStatus' */
  Rte_Call_DTC_FRPwrRelsMotorMinusSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorMinusSCB_SetEventStatus' */
  Rte_Call_DTC_FRPwrRelsMotorMinusSCB_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorMinusSCG_GetEventFailed' */
  Rte_Call_DTC_FRPwrRelsMotorMinusSCG_GetEventFailed(&rtb_DTC_FRPwrRelsMotorMinusSC_i);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorMinusSCG_ResetEventDebounceStatus' */
  Rte_Call_DTC_FRPwrRelsMotorMinusSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorMinusSCG_SetEventStatus' */
  Rte_Call_DTC_FRPwrRelsMotorMinusSCG_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorOL1_GetEventFailed' */
  Rte_Call_DTC_FRPwrRelsMotorOL1_GetEventFailed(&rtb_DTC_FRPwrRelsMotorOL1_Get_g);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorOL1_ResetEventDebounceStatus' */
  Rte_Call_DTC_FRPwrRelsMotorOL1_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorOL1_SetEventStatus' */
  Rte_Call_DTC_FRPwrRelsMotorOL1_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorOL2_GetEventFailed' */
  Rte_Call_DTC_FRPwrRelsMotorOL2_GetEventFailed(&rtb_DTC_FRPwrRelsMotorOL2_Get_o);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorOL2_ResetEventDebounceStatus' */
  Rte_Call_DTC_FRPwrRelsMotorOL2_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorOL2_SetEventStatus' */
  Rte_Call_DTC_FRPwrRelsMotorOL2_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorOL_GetEventFailed' */
  Rte_Call_DTC_FRPwrRelsMotorOL_GetEventFailed(&rtb_DTC_FRPwrRelsMotorOL_GetE_k);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_FRPwrRelsMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorOL_SetEventStatus' */
  Rte_Call_DTC_FRPwrRelsMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_FRPwrRelsMotorOverCurr_GetEventFailed(&rtb_DTC_FRPwrRelsMotorOverCur_f);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_FRPwrRelsMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_FRPwrRelsMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorPlusSCB_GetEventFailed' */
  Rte_Call_DTC_FRPwrRelsMotorPlusSCB_GetEventFailed(&rtb_DTC_FRPwrRelsMotorPlusSCB_j);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorPlusSCB_ResetEventDebounceStatus' */
  Rte_Call_DTC_FRPwrRelsMotorPlusSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorPlusSCB_SetEventStatus' */
  Rte_Call_DTC_FRPwrRelsMotorPlusSCB_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorPlusSCG_GetEventFailed' */
  Rte_Call_DTC_FRPwrRelsMotorPlusSCG_GetEventFailed(&rtb_DTC_FRPwrRelsMotorPlusSCG_d);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorPlusSCG_ResetEventDebounceStatus' */
  Rte_Call_DTC_FRPwrRelsMotorPlusSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FRPwrRelsMotorPlusSCG_SetEventStatus' */
  Rte_Call_DTC_FRPwrRelsMotorPlusSCG_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FillerCapALockMotorOL_GetEventFailed' */
  Rte_Call_DTC_FillerCapALockMotorOL_GetEventFailed(&rtb_DTC_FillerCapALockMotorOL_o);

  /* FunctionCaller: '<S3>/DTC_FillerCapALockMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_FillerCapALockMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FillerCapALockMotorOL_SetEventStatus' */
  Rte_Call_DTC_FillerCapALockMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FillerCapALockMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_FillerCapALockMotorOverCurr_GetEventFailed(&rtb_DTC_FillerCapALockMotorOv_m);

  /* FunctionCaller: '<S3>/DTC_FillerCapALockMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_FillerCapALockMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FillerCapALockMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_FillerCapALockMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FillerCapBLockMotorOL_GetEventFailed' */
  Rte_Call_DTC_FillerCapBLockMotorOL_GetEventFailed(&rtb_DTC_FillerCapBLockMotorOL_f);

  /* FunctionCaller: '<S3>/DTC_FillerCapBLockMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_FillerCapBLockMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FillerCapBLockMotorOL_SetEventStatus' */
  Rte_Call_DTC_FillerCapBLockMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FillerCapBLockMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_FillerCapBLockMotorOverCurr_GetEventFailed(&rtb_DTC_FillerCapBLockMotorO_fh);

  /* FunctionCaller: '<S3>/DTC_FillerCapBLockMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_FillerCapBLockMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FillerCapBLockMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_FillerCapBLockMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLChildLockMotorOL_GetEventFailed' */
  Rte_Call_DTC_RLChildLockMotorOL_GetEventFailed(&rtb_DTC_RLChildLockMotorOL_Ge_a);

  /* FunctionCaller: '<S3>/DTC_RLChildLockMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLChildLockMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLChildLockMotorOL_SetEventStatus' */
  Rte_Call_DTC_RLChildLockMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLChildLockMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_RLChildLockMotorOverCurr_GetEventFailed(&rtb_DTC_RLChildLockMotorOverC_l);

  /* FunctionCaller: '<S3>/DTC_RLChildLockMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLChildLockMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLChildLockMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_RLChildLockMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLDoorLockMotorOL_GetEventFailed' */
  Rte_Call_DTC_RLDoorLockMotorOL_GetEventFailed(&rtb_DTC_RLDoorLockMotorOL_Get_n);

  /* FunctionCaller: '<S3>/DTC_RLDoorLockMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLDoorLockMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLDoorLockMotorOL_SetEventStatus' */
  Rte_Call_DTC_RLDoorLockMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLDoorLockMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_RLDoorLockMotorOverCurr_GetEventFailed(&rtb_DTC_RLDoorLockMotorOverC_dn);

  /* FunctionCaller: '<S3>/DTC_RLDoorLockMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLDoorLockMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLDoorLockMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_RLDoorLockMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorMinusSCB_GetEventFailed' */
  Rte_Call_DTC_RLPwrRelsMotorMinusSCB_GetEventFailed(&rtb_DTC_RLPwrRelsMotorMinusSC_i);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorMinusSCB_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLPwrRelsMotorMinusSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorMinusSCB_SetEventStatus' */
  Rte_Call_DTC_RLPwrRelsMotorMinusSCB_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorMinusSCG_GetEventFailed' */
  Rte_Call_DTC_RLPwrRelsMotorMinusSCG_GetEventFailed(&rtb_DTC_RLPwrRelsMotorMinusSC_g);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorMinusSCG_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLPwrRelsMotorMinusSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorMinusSCG_SetEventStatus' */
  Rte_Call_DTC_RLPwrRelsMotorMinusSCG_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorOL1_GetEventFailed' */
  Rte_Call_DTC_RLPwrRelsMotorOL1_GetEventFailed(&rtb_DTC_RLPwrRelsMotorOL1_Get_c);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorOL1_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLPwrRelsMotorOL1_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorOL1_SetEventStatus' */
  Rte_Call_DTC_RLPwrRelsMotorOL1_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorOL2_GetEventFailed' */
  Rte_Call_DTC_RLPwrRelsMotorOL2_GetEventFailed(&rtb_DTC_RLPwrRelsMotorOL2_Get_d);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorOL2_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLPwrRelsMotorOL2_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorOL2_SetEventStatus' */
  Rte_Call_DTC_RLPwrRelsMotorOL2_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorOL_GetEventFailed' */
  Rte_Call_DTC_RLPwrRelsMotorOL_GetEventFailed(&rtb_DTC_RLPwrRelsMotorOL_GetE_p);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLPwrRelsMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorOL_SetEventStatus' */
  Rte_Call_DTC_RLPwrRelsMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_RLPwrRelsMotorOverCurr_GetEventFailed(&rtb_DTC_RLPwrRelsMotorOverCur_n);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLPwrRelsMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_RLPwrRelsMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorPlusSCB_GetEventFailed' */
  Rte_Call_DTC_RLPwrRelsMotorPlusSCB_GetEventFailed(&rtb_DTC_RLPwrRelsMotorPlusSCB_m);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorPlusSCB_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLPwrRelsMotorPlusSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorPlusSCB_SetEventStatus' */
  Rte_Call_DTC_RLPwrRelsMotorPlusSCB_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorPlusSCG_GetEventFailed' */
  Rte_Call_DTC_RLPwrRelsMotorPlusSCG_GetEventFailed(&rtb_DTC_RLPwrRelsMotorPlusSCG_i);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorPlusSCG_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLPwrRelsMotorPlusSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLPwrRelsMotorPlusSCG_SetEventStatus' */
  Rte_Call_DTC_RLPwrRelsMotorPlusSCG_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRChildLockMotorOL_GetEventFailed' */
  Rte_Call_DTC_RRChildLockMotorOL_GetEventFailed(&rtb_DTC_RRChildLockMotorOL_Ge_c);

  /* FunctionCaller: '<S3>/DTC_RRChildLockMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRChildLockMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRChildLockMotorOL_SetEventStatus' */
  Rte_Call_DTC_RRChildLockMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRChildLockMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_RRChildLockMotorOverCurr_GetEventFailed(&rtb_DTC_RRChildLockMotorOverC_p);

  /* FunctionCaller: '<S3>/DTC_RRChildLockMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRChildLockMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRChildLockMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_RRChildLockMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRDoorLockMotorOL_GetEventFailed' */
  Rte_Call_DTC_RRDoorLockMotorOL_GetEventFailed(&rtb_DTC_RRDoorLockMotorOL_Get_m);

  /* FunctionCaller: '<S3>/DTC_RRDoorLockMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRDoorLockMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRDoorLockMotorOL_SetEventStatus' */
  Rte_Call_DTC_RRDoorLockMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRDoorLockMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_RRDoorLockMotorOverCurr_GetEventFailed(&rtb_DTC_RRDoorLockMotorOverCu_l);

  /* FunctionCaller: '<S3>/DTC_RRDoorLockMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRDoorLockMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRDoorLockMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_RRDoorLockMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorMinusSCB_GetEventFailed' */
  Rte_Call_DTC_RRPwrRelsMotorMinusSCB_GetEventFailed(&rtb_DTC_RRPwrRelsMotorMinusSC_m);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorMinusSCB_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRPwrRelsMotorMinusSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorMinusSCB_SetEventStatus' */
  Rte_Call_DTC_RRPwrRelsMotorMinusSCB_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorMinusSCG_GetEventFailed' */
  Rte_Call_DTC_RRPwrRelsMotorMinusSCG_GetEventFailed(&rtb_DTC_RRPwrRelsMotorMinusS_ki);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorMinusSCG_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRPwrRelsMotorMinusSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorMinusSCG_SetEventStatus' */
  Rte_Call_DTC_RRPwrRelsMotorMinusSCG_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorOL1_GetEventFailed' */
  Rte_Call_DTC_RRPwrRelsMotorOL1_GetEventFailed(&rtb_DTC_RRPwrRelsMotorOL1_Get_d);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorOL1_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRPwrRelsMotorOL1_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorOL1_SetEventStatus' */
  Rte_Call_DTC_RRPwrRelsMotorOL1_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorOL2_GetEventFailed' */
  Rte_Call_DTC_RRPwrRelsMotorOL2_GetEventFailed(&rtb_DTC_RRPwrRelsMotorOL2_Get_l);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorOL2_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRPwrRelsMotorOL2_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorOL2_SetEventStatus' */
  Rte_Call_DTC_RRPwrRelsMotorOL2_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorOL_GetEventFailed' */
  Rte_Call_DTC_RRPwrRelsMotorOL_GetEventFailed(&rtb_DTC_RRPwrRelsMotorOL_GetE_h);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRPwrRelsMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorOL_SetEventStatus' */
  Rte_Call_DTC_RRPwrRelsMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_RRPwrRelsMotorOverCurr_GetEventFailed(&rtb_DTC_RRPwrRelsMotorOverCur_d);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRPwrRelsMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_RRPwrRelsMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorPlusSCB_GetEventFailed' */
  Rte_Call_DTC_RRPwrRelsMotorPlusSCB_GetEventFailed(&rtb_DTC_RRPwrRelsMotorPlusSCB_b);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorPlusSCB_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRPwrRelsMotorPlusSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorPlusSCB_SetEventStatus' */
  Rte_Call_DTC_RRPwrRelsMotorPlusSCB_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorPlusSCG_GetEventFailed' */
  Rte_Call_DTC_RRPwrRelsMotorPlusSCG_GetEventFailed(&rtb_DTC_RRPwrRelsMotorPlusSCG_b);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorPlusSCG_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRPwrRelsMotorPlusSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRPwrRelsMotorPlusSCG_SetEventStatus' */
  Rte_Call_DTC_RRPwrRelsMotorPlusSCG_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/IoHwAb_IoDiagHbr_Hbr_Get' */
  Rte_Call_IoHwAb_IoDiagHbr_Hbr_Get(0, &rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1);

  /* Switch: '<S27>/Switch1' incorporates:
   *  Constant: '<S27>/Constant4'
   */
  if (rtb_Merge4_h >= 3) {
    rtb_Merge4_h = 0U;
  }

  /* Outport: '<Root>/gLock_u8FRDoorLockMotorPs_Val' incorporates:
   *  Switch: '<S27>/Switch1'
   */
  (void) Rte_Write_gLock_u8FRDoorLockMotorPs_Val(rtb_Merge4_h);

  /* Switch: '<S25>/Switch1' incorporates:
   *  Constant: '<S25>/Constant4'
   */
  if (rtb_Merge2 >= 3) {
    rtb_Merge2 = 0U;
  }

  /* Outport: '<Root>/gLock_u8FLDoorLockMotorPs_Val' incorporates:
   *  Switch: '<S25>/Switch1'
   */
  (void) Rte_Write_gLock_u8FLDoorLockMotorPs_Val(rtb_Merge2);

  /* SwitchCase: '<S27>/Switch Case' incorporates:
   *  Outport: '<Root>/gLock_u8FRPwrRelsMotorPs_Val'
   */
  switch (rtb_Merge5) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S27>/PwrRels' incorporates:
     *  ActionPort: '<S61>/Action Port'
     */
    Lock_DD_Cinch(&rtb_Merge);

    /* End of Outputs for SubSystem: '<S27>/PwrRels' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S27>/PwrRels2' incorporates:
     *  ActionPort: '<S62>/Action Port'
     */
    Lock_DD_Cinch1(&rtb_Merge);

    /* End of Outputs for SubSystem: '<S27>/PwrRels2' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S27>/PwrRels3' incorporates:
     *  ActionPort: '<S63>/Action Port'
     */
    Lock_DD_Cinch2(&rtb_Merge);

    /* End of Outputs for SubSystem: '<S27>/PwrRels3' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S27>/PwrRels4' incorporates:
     *  ActionPort: '<S64>/Action Port'
     */
    Lock_DD_Cinch3(&rtb_Merge);

    /* End of Outputs for SubSystem: '<S27>/PwrRels4' */
    break;
  }

  /* End of SwitchCase: '<S27>/Switch Case' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Outport: '<Root>/gLock_u8FRPwrRelsMotorPs_Val' */
  (void) Rte_Write_gLock_u8FRPwrRelsMotorPs_Val(rtb_Merge);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/Lock_DD_Runnable_OUT_10ms_sys'
   */
  /* SwitchCase: '<S25>/Switch Case' incorporates:
   *  Outport: '<Root>/gLock_u8FLPwrRelsMotorPs_Val'
   */
  switch (rtb_TmpSignalConversionAtgLOC_u) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S25>/Cinch' incorporates:
     *  ActionPort: '<S42>/Action Port'
     */
    Lock_DD_Cinch(&rtb_Merge);

    /* End of Outputs for SubSystem: '<S25>/Cinch' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S25>/Cinch1' incorporates:
     *  ActionPort: '<S43>/Action Port'
     */
    Lock_DD_Cinch1(&rtb_Merge);

    /* End of Outputs for SubSystem: '<S25>/Cinch1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S25>/Cinch2' incorporates:
     *  ActionPort: '<S44>/Action Port'
     */
    Lock_DD_Cinch2(&rtb_Merge);

    /* End of Outputs for SubSystem: '<S25>/Cinch2' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S25>/Cinch3' incorporates:
     *  ActionPort: '<S45>/Action Port'
     */
    Lock_DD_Cinch3(&rtb_Merge);

    /* End of Outputs for SubSystem: '<S25>/Cinch3' */
    break;
  }

  /* End of SwitchCase: '<S25>/Switch Case' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Outport: '<Root>/gLock_u8FLPwrRelsMotorPs_Val' */
  (void) Rte_Write_gLock_u8FLPwrRelsMotorPs_Val(rtb_Merge);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/Lock_DD_Runnable_OUT_10ms_sys'
   */
  /* Outport: '<Root>/gLock_u8RLChildLockMotorPs_Val' incorporates:
   *  Constant: '<S3>/Constant'
   */
  (void) Rte_Write_gLock_u8RLChildLockMotorPs_Val(1U);

  /* Outport: '<Root>/gLock_u8RLPwrRelsMotorPs_Val' incorporates:
   *  Constant: '<S3>/Constant2'
   */
  (void) Rte_Write_gLock_u8RLPwrRelsMotorPs_Val(1U);

  /* Outport: '<Root>/gLock_u8RRChildLockMotorPs_Val' incorporates:
   *  Constant: '<S3>/Constant3'
   */
  (void) Rte_Write_gLock_u8RRChildLockMotorPs_Val(1U);

  /* Outport: '<Root>/gLock_u8RRPwrRelsMotorPs_Val' incorporates:
   *  Constant: '<S3>/Constant5'
   */
  (void) Rte_Write_gLock_u8RRPwrRelsMotorPs_Val(1U);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Outport: '<Root>/gLock_u8BootLockMotorPs_Val' */
  (void) Rte_Write_gLock_u8BootLockMotorPs_Val(Lock_DD_B.TmpSignalConversionAtgLOC_u8Boo);

  /* Outport: '<Root>/gLock_u8ChrgCapLockMotorPs_Val' */
  (void) Rte_Write_gLock_u8ChrgCapLockMotorPs_Val(Lock_DD_B.TmpSignalConversionAtgLOC_u8Chr);

  /* Outport: '<Root>/gLock_u8GlcBoxLockMotorPs_Val' */
  (void) Rte_Write_gLock_u8GlcBoxLockMotorPs_Val(Lock_DD_B.TmpSignalConversionAtgLOC_u8Ele);

  /* Outport: '<Root>/gLock_u8OilTankLockMotorPs_Val' */
  (void) Rte_Write_gLock_u8OilTankLockMotorPs_Val(Lock_DD_B.TmpSignalConversionAtgLOC_u8Oil);

  /* Outport: '<Root>/gLock_u8RLDoorLockMotorPs_Val' */
  (void) Rte_Write_gLock_u8RLDoorLockMotorPs_Val(Lock_DD_B.TmpSignalConversionAtgLOC_u8RLD);

  /* Outport: '<Root>/gLock_u8RRDoorLockMotorPs_Val' */
  (void) Rte_Write_gLock_u8RRDoorLockMotorPs_Val(Lock_DD_B.TmpSignalConversionAtgLOC_u8RRD);
}

/* Model initialize function */
FUNC(void, Lock_DD_CODE) Lock_DD_Runnable_Init(void)
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
    boolean tmpWrite_e;
    boolean tmpWrite_f;

    /* Start for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_IN_10ms_at_outport_1' incorporates:
     *  SubSystem: '<Root>/Lock_DD_Runnable_IN_10ms_sys'
     */

    /* Start for S-Function (Efx_Moving_Average_sf): '<S21>/MovingAverageS32' incorporates:
     *  S-Function (Upcast_sf): '<S21>/Upcast'
     */
    Lock_DD_DW.MovingAverageS32_MvgAvgPlumbing.n = 5;
    Lock_DD_DW.MovingAverageS32_MvgAvgPlumbing.p_beg = &Lock_DD_DW.MovingAverageS32_Array[0];
    Lock_DD_DW.MovingAverageS32_MvgAvgPlumbing.p_end = &Lock_DD_DW.MovingAverageS32_Array[4];
    Lock_DD_DW.MovingAverageS32_MvgAvgPlumbing.p_act = &Lock_DD_DW.MovingAverageS32_Array[4];

    /* End of Start for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_IN_10ms_at_outport_1' */

    /* Start for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
     *  SubSystem: '<Root>/Lock_DD_Runnable_OUT_10ms_sys'
     */
    /* Start for Outport: '<Root>/gLock_u8RLChildLockMotorPs_Val' incorporates:
     *  Constant: '<S3>/Constant'
     */
    (void) Rte_Write_gLock_u8RLChildLockMotorPs_Val(1U);

    /* Start for Outport: '<Root>/gLock_u8RLPwrRelsMotorPs_Val' incorporates:
     *  Constant: '<S3>/Constant2'
     */
    (void) Rte_Write_gLock_u8RLPwrRelsMotorPs_Val(1U);

    /* Start for Outport: '<Root>/gLock_u8RRChildLockMotorPs_Val' incorporates:
     *  Constant: '<S3>/Constant3'
     */
    (void) Rte_Write_gLock_u8RRChildLockMotorPs_Val(1U);

    /* Start for Outport: '<Root>/gLock_u8RRPwrRelsMotorPs_Val' incorporates:
     *  Constant: '<S3>/Constant5'
     */
    (void) Rte_Write_gLock_u8RRPwrRelsMotorPs_Val(1U);

    /* End of Start for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Lock_DD_Runnable_OUT_10ms_at_outport_1' */

    /* Outport: '<Root>/gLock_bDrvChrgCapUnlockSwt_Val' */
    (void) Rte_Write_gLock_bDrvChrgCapUnlockSwt_Val(tmpWrite);

    /* Outport: '<Root>/gLock_bExtTrunkUnlockSwt_Val' */
    (void) Rte_Write_gLock_bExtTrunkUnlockSwt_Val(tmpWrite_0);

    /* Outport: '<Root>/gLock_bFLDoorLockFbSt_Val' */
    (void) Rte_Write_gLock_bFLDoorLockFbSt_Val(tmpWrite_1);

    /* Outport: '<Root>/gLock_bFRDoorLockFbSt_Val' */
    (void) Rte_Write_gLock_bFRDoorLockFbSt_Val(tmpWrite_2);

    /* Outport: '<Root>/gLock_bHoodUnlockSwt_Val' */
    (void) Rte_Write_gLock_bHoodUnlockSwt_Val(tmpWrite_3);

    /* Outport: '<Root>/gLock_bIntTrunkUnlockSwt_Val' */
    (void) Rte_Write_gLock_bIntTrunkUnlockSwt_Val(tmpWrite_4);

    /* Outport: '<Root>/gLock_bMasterDrvLockSwt_Val' */
    (void) Rte_Write_gLock_bMasterDrvLockSwt_Val(tmpWrite_5);

    /* Outport: '<Root>/gLock_bMasterLockSwt_Val' */
    (void) Rte_Write_gLock_bMasterLockSwt_Val(tmpWrite_6);

    /* Outport: '<Root>/gLock_bMasterPsgLockSwt_Val' */
    (void) Rte_Write_gLock_bMasterPsgLockSwt_Val(tmpWrite_7);

    /* Outport: '<Root>/gLock_bMasterUnlockSwt_Val' */
    (void) Rte_Write_gLock_bMasterUnlockSwt_Val(tmpWrite_8);

    /* Outport: '<Root>/gLock_bMechKeyLockSwt_Val' */
    (void) Rte_Write_gLock_bMechKeyLockSwt_Val(tmpWrite_9);

    /* Outport: '<Root>/gLock_bMechKeyUnlockSwt_Val' */
    (void) Rte_Write_gLock_bMechKeyUnlockSwt_Val(tmpWrite_a);

    /* Outport: '<Root>/gLock_bRLChildLockFbSt_Val' */
    (void) Rte_Write_gLock_bRLChildLockFbSt_Val(tmpWrite_b);

    /* Outport: '<Root>/gLock_bRLDoorLockFbSt_Val' */
    (void) Rte_Write_gLock_bRLDoorLockFbSt_Val(tmpWrite_c);

    /* Outport: '<Root>/gLock_bRRChildLockFbSt_Val' */
    (void) Rte_Write_gLock_bRRChildLockFbSt_Val(tmpWrite_d);

    /* Outport: '<Root>/gLock_bRRDoorLockFbSt_Val' */
    (void) Rte_Write_gLock_bRRDoorLockFbSt_Val(tmpWrite_e);

    /* Outport: '<Root>/gLock_bChrgCapSwt_Val' */
    (void) Rte_Write_gLock_bChrgCapSwt_Val(tmpWrite_f);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
