/*
 * File: ElecDoorHndl_DD.c
 *
 * Code generated for Simulink model 'ElecDoorHndl_DD'.
 *
 * Model version                  : 1.96
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Oct 24 19:14:34 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ElecDoorHndl_DD.h"
#include "ElecDoorHndl_DD_private.h"

/* Named constants for Chart: '<S14>/Chart' */
#define ElecDoorHndl_DD_IN_NoCmd       ((uint8)1U)
#define ElecDoorHndl_DD_IN_ReCmd       ((uint8)2U)

/* Exported block states */
VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_FLDoorHSULockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_FLDoorHSULockSwDeb_I'
                                                                                       * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                       */
VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_FLDoorHSUUnlockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_FLDoorHSUUnlockSwDeb_I'
                                                                                         * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                         */
VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_FRDoorHSULockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_FRDoorHSULockSwDeb_I'
                                                                                       * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                       */
VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_FRDoorHSUSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_FRDoorHSUSwDeb_I'
                                                                                   * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                   */
VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_FRDoorHSUUnlockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_FRDoorHSUUnlockSwDeb_I'
                                                                                         * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                         */
VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_RLDoorHSULockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_RLDoorHSULockSwDeb_I'
                                                                                       * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                       */
VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_RLDoorHSUUnlockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_RLDoorHSUUnlockSwDeb_I'
                                                                                         * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                         */
VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_RRDoorHSULockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_RRDoorHSULockSwDeb_I'
                                                                                       * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                       */
VAR(Efx_DebounceState_Type, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_RRDoorHSUUnlockSwDeb_I;/* Simulink.Signal object 'ElecDoorHndl_DD_RRDoorHSUUnlockSwDeb_I'
                                                                                         * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                                         */

/* Block states (default storage) */
VAR(DW_ElecDoorHndl_DD_T, ElecDoorHndl_DD_VAR) ElecDoorHndl_DD_DW;

/* Model step function for TID1 */
FUNC(void, ElecDoorHndl_DD_CODE) ElecDoorHndl_DD_Runnable_IN_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  boolean rtb_DataTypeConversion21;
  boolean tmpWrite;
  boolean tmpWrite_0;
  boolean tmpWrite_1;
  boolean tmpWrite_2;
  boolean tmpWrite_3;
  boolean tmpWrite_4;
  boolean tmpWrite_5;
  boolean tmpWrite_6;
  boolean tmpWrite_7;
  uint8 rtb_IoHwAb_IoSigDio_Di_Get8_o1;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_IN_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ElecDoorHndl_DD_Runnable_IN_10ms_sys'
   */
  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FLDoorHSULockSwt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion4' */
  rtb_DataTypeConversion21 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S5>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant6'
   *  Constant: '<S1>/Constant7'
   *  Constant: '<S5>/Reset'
   *  Constant: '<S5>/X_Init'
   *  Outport: '<Root>/gASI_bFLDoorHSULockSw_Val'
   *  S-Function (Upcast_sf): '<S5>/Upcast'
   *  S-Function (Upcast_sf): '<S5>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite = Efx_Debounce_u8_u8(rtb_DataTypeConversion21, &ElecDoorHndl_DD_FLDoorHSULockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get1' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_P_FLDoorHSUUnLckSwt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion1' */
  rtb_DataTypeConversion21 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S4>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant12'
   *  Constant: '<S1>/Constant13'
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S4>/Reset'
   *  Constant: '<S4>/X_Init'
   *  Outport: '<Root>/gASI_bFLDoorHSUUnlockSw_Val'
   *  S-Function (Upcast_sf): '<S4>/Upcast'
   *  S-Function (Upcast_sf): '<S4>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_0 = Efx_Debounce_u8_u8(rtb_DataTypeConversion21, &ElecDoorHndl_DD_FLDoorHSUUnlockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get2' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FRDoorHSULockSwt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion2' */
  rtb_DataTypeConversion21 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S6>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant14'
   *  Constant: '<S1>/Constant15'
   *  Constant: '<S1>/Constant16'
   *  Constant: '<S6>/Reset'
   *  Constant: '<S6>/X_Init'
   *  Outport: '<Root>/gASI_bFRDoorHSULockSw_Val'
   *  S-Function (Upcast_sf): '<S6>/Upcast'
   *  S-Function (Upcast_sf): '<S6>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_1 = Efx_Debounce_u8_u8(rtb_DataTypeConversion21, &ElecDoorHndl_DD_FRDoorHSULockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get3' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FRDoorHSUSwt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion3' */
  rtb_DataTypeConversion21 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S7>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant18'
   *  Constant: '<S1>/Constant19'
   *  Constant: '<S1>/Constant20'
   *  Constant: '<S7>/Reset'
   *  Constant: '<S7>/X_Init'
   *  Outport: '<Root>/gASI_bFRDoorHSUSw_Val'
   *  S-Function (Upcast_sf): '<S7>/Upcast'
   *  S-Function (Upcast_sf): '<S7>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_2 = Efx_Debounce_u8_u8(rtb_DataTypeConversion21, &ElecDoorHndl_DD_FRDoorHSUSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get4' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_P_FRDoorHSUUnLckSwt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion5' */
  rtb_DataTypeConversion21 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S8>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant22'
   *  Constant: '<S1>/Constant23'
   *  Constant: '<S1>/Constant24'
   *  Constant: '<S8>/Reset'
   *  Constant: '<S8>/X_Init'
   *  Outport: '<Root>/gASI_bFRDoorHSUUnlockSw_Val'
   *  S-Function (Upcast_sf): '<S8>/Upcast'
   *  S-Function (Upcast_sf): '<S8>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_3 = Efx_Debounce_u8_u8(rtb_DataTypeConversion21, &ElecDoorHndl_DD_FRDoorHSUUnlockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get5' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RLDoorHSULockSwt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion6' */
  rtb_DataTypeConversion21 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S9>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant26'
   *  Constant: '<S1>/Constant27'
   *  Constant: '<S1>/Constant28'
   *  Constant: '<S9>/Reset'
   *  Constant: '<S9>/X_Init'
   *  Outport: '<Root>/gASI_bRLDoorHSULockSw_Val'
   *  S-Function (Upcast_sf): '<S9>/Upcast'
   *  S-Function (Upcast_sf): '<S9>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_4 = Efx_Debounce_u8_u8(rtb_DataTypeConversion21, &ElecDoorHndl_DD_RLDoorHSULockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get6' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RLDoorHSUUnLckSwt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion7' */
  rtb_DataTypeConversion21 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S10>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S10>/Reset'
   *  Constant: '<S10>/X_Init'
   *  Constant: '<S1>/Constant30'
   *  Constant: '<S1>/Constant31'
   *  Constant: '<S1>/Constant32'
   *  Outport: '<Root>/gASI_bRLDoorHSUUnlockSw_Val'
   *  S-Function (Upcast_sf): '<S10>/Upcast'
   *  S-Function (Upcast_sf): '<S10>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_5 = Efx_Debounce_u8_u8(rtb_DataTypeConversion21, &ElecDoorHndl_DD_RLDoorHSUUnlockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get7' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RRDoorHSULockSwt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion20' */
  rtb_DataTypeConversion21 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S11>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S11>/Reset'
   *  Constant: '<S11>/X_Init'
   *  Constant: '<S1>/Constant34'
   *  Constant: '<S1>/Constant35'
   *  Constant: '<S1>/Constant42'
   *  Outport: '<Root>/gASI_bRRDoorHSULockSw_Val'
   *  S-Function (Upcast_sf): '<S11>/Upcast'
   *  S-Function (Upcast_sf): '<S11>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_6 = Efx_Debounce_u8_u8(rtb_DataTypeConversion21, &ElecDoorHndl_DD_RRDoorHSULockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get8' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RRDoorHSUUnLckSwt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion21' */
  rtb_DataTypeConversion21 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S12>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S12>/Reset'
   *  Constant: '<S12>/X_Init'
   *  Constant: '<S1>/Constant45'
   *  Constant: '<S1>/Constant46'
   *  Constant: '<S1>/Constant47'
   *  Outport: '<Root>/gASI_bRRDoorHSUUnlockSw_Val'
   *  S-Function (Upcast_sf): '<S12>/Upcast'
   *  S-Function (Upcast_sf): '<S12>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_7 = Efx_Debounce_u8_u8(rtb_DataTypeConversion21, &ElecDoorHndl_DD_RRDoorHSUUnlockSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_IN_10ms_at_outport_1' */

  /* Outport: '<Root>/gASI_bFLDoorHSULockSw_Val' */
  (void) Rte_Write_gASI_bFLDoorHSULockSw_Val(tmpWrite);

  /* Outport: '<Root>/gASI_bFLDoorHSUUnlockSw_Val' */
  (void) Rte_Write_gASI_bFLDoorHSUUnlockSw_Val(tmpWrite_0);

  /* Outport: '<Root>/gASI_bFRDoorHSULockSw_Val' */
  (void) Rte_Write_gASI_bFRDoorHSULockSw_Val(tmpWrite_1);

  /* Outport: '<Root>/gASI_bFRDoorHSUSw_Val' */
  (void) Rte_Write_gASI_bFRDoorHSUSw_Val(tmpWrite_2);

  /* Outport: '<Root>/gASI_bFRDoorHSUUnlockSw_Val' */
  (void) Rte_Write_gASI_bFRDoorHSUUnlockSw_Val(tmpWrite_3);

  /* Outport: '<Root>/gASI_bRLDoorHSULockSw_Val' */
  (void) Rte_Write_gASI_bRLDoorHSULockSw_Val(tmpWrite_4);

  /* Outport: '<Root>/gASI_bRLDoorHSUUnlockSw_Val' */
  (void) Rte_Write_gASI_bRLDoorHSUUnlockSw_Val(tmpWrite_5);

  /* Outport: '<Root>/gASI_bRRDoorHSULockSw_Val' */
  (void) Rte_Write_gASI_bRRDoorHSULockSw_Val(tmpWrite_6);

  /* Outport: '<Root>/gASI_bRRDoorHSUUnlockSw_Val' */
  (void) Rte_Write_gASI_bRRDoorHSUUnlockSw_Val(tmpWrite_7);
}

/* Model step function for TID2 */
FUNC(void, ElecDoorHndl_DD_CODE) ElecDoorHndl_DD_Runnable_OUT_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  boolean tmpRead;
  boolean tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  uint16 rtb_Merge1_l;
  uint8 rtb_TmpSignalConversionAtgEDH_u;
  boolean rtb_AND_e;
  sint32 rtb_bCinchCmd;
  uint8 rtb_Merge_k;
  uint32 rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1;
  uint8 rtb_TmpSignalConversionAtgEDH_d;
  uint16 rtb_Merge1;
  uint8 rtb_TmpSignalConversionAtgEDH_o;
  uint8 rtb_Merge;
  uint16 rtb_Merge1_o;
  uint8 rtb_TmpSignalConversionAtgED_on;
  uint8 rtb_Merge_n;
  boolean rtb_DTC_FLDoorHndlMotorOL_Get_j;
  boolean rtb_DTC_FRDoorHndlMotorOL_Get_d;
  boolean rtb_DTC_FRDoorHndlMotorOverC_ml;
  boolean rtb_DTC_RLDoorHndlMotorOL_Get_f;
  boolean rtb_DTC_RLDoorHndlMotorOverCu_d;
  boolean rtb_DTC_RRDoorHndlMotorOL_Get_f;
  boolean rtb_DTC_RRDoorHndlMotorOverCu_b;
  uint32 rtb_IoHwAb_IoDiagHbr_Hbr_Get__m;
  uint8 Switch;
  Dem_EventStatusType tmp;

  /* Inport: '<Root>/gEDH_u8FLDoorHandlePWMOutput_Val' */
  Rte_Read_gEDH_u8FLDoorHandlePWMOutput_Val(&Switch);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ElecDoorHndl_DD_Runnable_OUT_10ms_sys'
   */
  /* SignalConversion: '<S3>/TmpSignal ConversionAtgEDH_u8FLDoorHandleMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gEDH_u8FLDoorHandleMotorOutput_Val'
   */
  Rte_Read_gEDH_u8FLDoorHandleMotorOutput_Val(&rtb_TmpSignalConversionAtgEDH_u);

  /* SwitchCase: '<S13>/SwitchCase' incorporates:
   *  Constant: '<S13>/Constant4'
   *  Inport: '<S18>/Pwm_input'
   *  Inport: '<S19>/Pwm_input'
   *  Product: '<S13>/Multiply'
   *  Saturate: '<S13>/Saturation1'
   */
  switch (rtb_TmpSignalConversionAtgEDH_u) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S13>/FLDoorHandleMotorCinchlOutput' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* SignalConversion: '<S19>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S19>/Constant'
     */
    rtb_Merge_k = 2U;
    rtb_Merge1_l = Mfx_Min_u16((uint16)((float32)Switch * 327.68F), 32768U);

    /* End of Outputs for SubSystem: '<S13>/FLDoorHandleMotorCinchlOutput' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S13>/FLDoorElecRelPWMMotorRelOutput' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    /* SignalConversion: '<S18>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S18>/Constant'
     */
    rtb_Merge_k = 1U;
    rtb_Merge1_l = Mfx_Min_u16((uint16)((float32)Switch * 327.68F), 32768U);

    /* End of Outputs for SubSystem: '<S13>/FLDoorElecRelPWMMotorRelOutput' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S13>/NoFLDoorHandleMotorOutput' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    /* SignalConversion: '<S20>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S20>/Constant'
     */
    rtb_Merge_k = 0U;

    /* SignalConversion: '<S20>/OutportBuffer_InsertedFor_Pwm_at_inport_0' incorporates:
     *  Constant: '<S20>/Constant1'
     */
    rtb_Merge1_l = 0U;

    /* End of Outputs for SubSystem: '<S13>/NoFLDoorHandleMotorOutput' */
    break;
  }

  /* End of SwitchCase: '<S13>/SwitchCase' */

  /* FunctionCaller: '<S14>/DTC_FLDoorHndlMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_FLDoorHndlMotorOverCurr_GetEventFailed(&rtb_AND_e);

  /* Chart: '<S14>/Chart' incorporates:
   *  Constant: '<S14>/Constant2'
   */
  /* Gateway: ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag/Chart */
  if (ElecDoorHndl_DD_DW.temporalCounter_i1 < 255U) {
    ElecDoorHndl_DD_DW.temporalCounter_i1++;
  }

  ElecDoorHndl_DD_DW.u8CinchCmd_prev = ElecDoorHndl_DD_DW.u8CinchCmd_start;
  ElecDoorHndl_DD_DW.u8CinchCmd_start = rtb_TmpSignalConversionAtgEDH_u;

  /* During: ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag/Chart */
  if (ElecDoorHndl_DD_DW.is_active_c3_ElecDoorHndl_DD == 0U) {
    ElecDoorHndl_DD_DW.u8CinchCmd_prev = rtb_TmpSignalConversionAtgEDH_u;

    /* Entry: ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag/Chart */
    ElecDoorHndl_DD_DW.is_active_c3_ElecDoorHndl_DD = 1U;

    /* Entry Internal: ElecDoorHndl_DD_Runnable_OUT_10ms_sys/FLEDHDiag/Chart */
    /* Transition: '<S21>:4' */
    ElecDoorHndl_DD_DW.is_c3_ElecDoorHndl_DD = ElecDoorHndl_DD_IN_NoCmd;

    /* Entry 'NoCmd': '<S21>:3' */
    /* '<S21>:3:1' bCinchCmd = 0; */
    rtb_bCinchCmd = 0;
  } else if (ElecDoorHndl_DD_DW.is_c3_ElecDoorHndl_DD == ElecDoorHndl_DD_IN_NoCmd) {
    rtb_bCinchCmd = 0;

    /* During 'NoCmd': '<S21>:3' */
    /* '<S21>:6:1' sf_internal_predicateOutput = hasChangedFrom(u8CinchCmd,uint8(0)); */
    if ((ElecDoorHndl_DD_DW.u8CinchCmd_prev != ElecDoorHndl_DD_DW.u8CinchCmd_start) && (ElecDoorHndl_DD_DW.u8CinchCmd_prev == 0)) {
      /* Transition: '<S21>:6' */
      ElecDoorHndl_DD_DW.is_c3_ElecDoorHndl_DD = ElecDoorHndl_DD_IN_ReCmd;
      ElecDoorHndl_DD_DW.temporalCounter_i1 = 0U;

      /* Entry 'ReCmd': '<S21>:5' */
      /* '<S21>:5:1' bCinchCmd = 1; */
      rtb_bCinchCmd = 1;
    }
  } else {
    rtb_bCinchCmd = 1;

    /* During 'ReCmd': '<S21>:5' */
    /* '<S21>:7:1' sf_internal_predicateOutput = after(TiOnForce,tick); */
    if (ElecDoorHndl_DD_DW.temporalCounter_i1 >= 22) {
      /* Transition: '<S21>:7' */
      ElecDoorHndl_DD_DW.is_c3_ElecDoorHndl_DD = ElecDoorHndl_DD_IN_NoCmd;

      /* Entry 'NoCmd': '<S21>:3' */
      /* '<S21>:3:1' bCinchCmd = 0; */
      rtb_bCinchCmd = 0;
    }
  }

  /* End of Chart: '<S14>/Chart' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Inport: '<Root>/gLock_u8DiagEnbCnd_Val' */
  Rte_Read_gLock_u8DiagEnbCnd_Val(&rtb_Merge);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ElecDoorHndl_DD_Runnable_OUT_10ms_sys'
   */
  /* Logic: '<S14>/AND' incorporates:
   *  Logic: '<S14>/NOT'
   */
  rtb_AND_e = (rtb_AND_e && (rtb_bCinchCmd == 0));

  /* Switch: '<S13>/Switch1' incorporates:
   *  Constant: '<S13>/Constant5'
   *  Constant: '<S13>/Constant7'
   *  Switch: '<S13>/Switch2'
   */
  if (rtb_AND_e) {
    rtb_Merge_k = 0U;
    rtb_Merge1_l = 0U;
  }

  /* End of Switch: '<S13>/Switch1' */

  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/Constant2'
   *  Constant: '<S13>/Constant3'
   *  Constant: '<S13>/Constant6'
   *  Logic: '<S13>/AND'
   *  RelationalOperator: '<S13>/GreaterThan'
   *  RelationalOperator: '<S13>/GreaterThan1'
   */
  if ((rtb_Merge_k > 0) && (rtb_Merge1_l > 0)) {
    Switch = rtb_TmpSignalConversionAtgEDH_u;
  } else {
    Switch = 0U;
  }

  /* End of Switch: '<S13>/Switch' */

  /* FunctionCaller: '<S13>/IoHwAb_HbrModCtrl_Hbr_SetMod1' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_FLDoorHndlMotModCtrl, rtb_Merge_k);

  /* FunctionCaller: '<S13>/IoHwAb_HbrPwm_Hbr_SetDuty1' */
  Rte_Call_IoHwAb_HbrPwm_Hbr_SetDuty(O_H_FLDoorHndlMotPwm, rtb_Merge1_l);

  /* FunctionCaller: '<S14>/IoHwAb_IoDiagHbr_Hbr_Get' */
  Rte_Call_IoHwAb_IoDiagHbr_Hbr_Get(O_H_FLDoorHndlMotModCtrl, &rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1);

  /* Switch: '<S14>/Switch' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/EnbCnd'
   *  Inport: '<Root>/gLock_u8DiagEnbCnd_Val'
   *  S-Function (Bfx_GetBit_sf): '<S22>/Bfx_GetBit_sf'
   */
  if (Bfx_GetBit_u8u8_u8(rtb_Merge, ((uint8)0U))) {
    rtb_bCinchCmd = Switch;
  } else {
    rtb_bCinchCmd = 3;
  }

  /* End of Switch: '<S14>/Switch' */

  /* SwitchCase: '<S14>/Switch Case' */
  switch (rtb_bCinchCmd) {
   case 0:
    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S24>/Constant'
     *  Constant: '<S24>/Constant1'
     *  Constant: '<S24>/Constant2'
     *  S-Function (Bfx_GetBit_sf): '<S29>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)0U))) {
      tmp = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S24>/Switch' */

    /* FunctionCaller: '<S24>/DTC_FLDoorHndlMotorOL_SetEventStatus' */
    Rte_Call_DTC_FLDoorHndlMotorOL_SetEventStatus(tmp);

    /* FunctionCaller: '<S24>/DTC_FLDoorHndlMotorOverCurr_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S24>/Constant12'
     */
    Rte_Call_DTC_FLDoorHndlMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S14>/SwitchCaseActionSubsystem1' */
    break;

   case 1:
   case 2:
    /* Switch: '<S23>/Switch2' incorporates:
     *  Constant: '<S23>/Constant'
     *  Constant: '<S23>/Constant2'
     *  Constant: '<S23>/Constant3'
     *  Constant: '<S23>/Constant5'
     *  Constant: '<S23>/Constant7'
     *  Constant: '<S23>/Constant8'
     *  Logic: '<S23>/OR'
     *  S-Function (Bfx_GetBit_sf): '<S25>/Bfx_GetBit_sf'
     *  S-Function (Bfx_GetBit_sf): '<S26>/Bfx_GetBit_sf'
     *  S-Function (Bfx_GetBit_sf): '<S27>/Bfx_GetBit_sf'
     *  S-Function (Bfx_GetBit_sf): '<S28>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)1U)) || Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)4U)) || Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)2U)) || Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)3U))) {
      tmp = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S23>/Switch2' */

    /* FunctionCaller: '<S23>/DTC_FLDoorHndlMotorOverCurr_SetEventStatus' */
    Rte_Call_DTC_FLDoorHndlMotorOverCurr_SetEventStatus(tmp);

    /* FunctionCaller: '<S23>/DTC_FLDoorHndlMotorOL_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S23>/Constant12'
     */
    Rte_Call_DTC_FLDoorHndlMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S14>/SwitchCaseActionSubsystem' */
    break;

   case 3:
    break;
  }

  /* End of SwitchCase: '<S14>/Switch Case' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Inport: '<Root>/gEDH_u8FRDoorHandlePWMOutput_Val' */
  Rte_Read_gEDH_u8FRDoorHandlePWMOutput_Val(&tmpRead_1);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ElecDoorHndl_DD_Runnable_OUT_10ms_sys'
   */
  /* SignalConversion: '<S3>/TmpSignal ConversionAtgEDH_u8FRDoorHandleMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gEDH_u8FRDoorHandleMotorOutput_Val'
   */
  Rte_Read_gEDH_u8FRDoorHandleMotorOutput_Val(&rtb_TmpSignalConversionAtgEDH_d);

  /* SwitchCase: '<S15>/SwitchCase' incorporates:
   *  Constant: '<S15>/Constant4'
   *  Inport: '<S30>/Pwm_input'
   *  Inport: '<S31>/Pwm_input'
   *  Product: '<S15>/Multiply'
   *  Saturate: '<S15>/Saturation1'
   */
  switch (rtb_TmpSignalConversionAtgEDH_d) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S15>/FRDoorHandleMotorCinchOutput' incorporates:
     *  ActionPort: '<S30>/Action Port'
     */
    /* SignalConversion: '<S30>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S30>/Constant'
     */
    rtb_Merge_k = 2U;
    rtb_Merge1_l = Mfx_Min_u16((uint16)((float32)tmpRead_1 * 327.68F), 32768U);

    /* End of Outputs for SubSystem: '<S15>/FRDoorHandleMotorCinchOutput' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S15>/FRDoorHandleMotorRelOutput' incorporates:
     *  ActionPort: '<S31>/Action Port'
     */
    /* SignalConversion: '<S31>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S31>/Constant'
     */
    rtb_Merge_k = 1U;
    rtb_Merge1_l = Mfx_Min_u16((uint16)((float32)tmpRead_1 * 327.68F), 32768U);

    /* End of Outputs for SubSystem: '<S15>/FRDoorHandleMotorRelOutput' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S15>/NoFRDoorHandleMotorOutput' incorporates:
     *  ActionPort: '<S32>/Action Port'
     */
    /* SignalConversion: '<S32>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S32>/Constant'
     */
    rtb_Merge_k = 0U;

    /* SignalConversion: '<S32>/OutportBuffer_InsertedFor_Pwm_at_inport_0' incorporates:
     *  Constant: '<S32>/Constant1'
     */
    rtb_Merge1_l = 0U;

    /* End of Outputs for SubSystem: '<S15>/NoFRDoorHandleMotorOutput' */
    break;
  }

  /* End of SwitchCase: '<S15>/SwitchCase' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Inport: '<Root>/gEDH_u8RLDoorHandlePWMOutput_Val' */
  Rte_Read_gEDH_u8RLDoorHandlePWMOutput_Val(&rtb_Merge_n);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ElecDoorHndl_DD_Runnable_OUT_10ms_sys'
   */
  /* FunctionCaller: '<S15>/IoHwAb_HbrModCtrl_Hbr_SetMod1' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_FRDoorHndlMotModCtrl, rtb_Merge_k);

  /* FunctionCaller: '<S15>/IoHwAb_HbrPwm_Hbr_SetDuty1' */
  Rte_Call_IoHwAb_HbrPwm_Hbr_SetDuty(O_H_FRDoorHndlMotPwm, rtb_Merge1_l);

  /* SignalConversion: '<S3>/TmpSignal ConversionAtgEDH_u8RLDoorHandleMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gEDH_u8RLDoorHandleMotorOutput_Val'
   */
  Rte_Read_gEDH_u8RLDoorHandleMotorOutput_Val(&rtb_TmpSignalConversionAtgEDH_o);

  /* SwitchCase: '<S16>/SwitchCase' incorporates:
   *  Constant: '<S16>/Constant4'
   *  Inport: '<S34>/Pwm_input'
   *  Inport: '<S35>/Pwm_input'
   *  Product: '<S16>/Multiply'
   *  Saturate: '<S16>/Saturation1'
   */
  switch (rtb_TmpSignalConversionAtgEDH_o) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S16>/RLDoorHandleMotorCinchOutput' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */
    /* SignalConversion: '<S34>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S34>/Constant'
     */
    rtb_Merge = 1U;
    rtb_Merge1 = Mfx_Min_u16((uint16)((float32)rtb_Merge_n * 327.68F), 32768U);

    /* End of Outputs for SubSystem: '<S16>/RLDoorHandleMotorCinchOutput' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S16>/RLDoorHandleMotorRelOutput' incorporates:
     *  ActionPort: '<S35>/Action Port'
     */
    /* SignalConversion: '<S35>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S35>/Constant'
     */
    rtb_Merge = 2U;
    rtb_Merge1 = Mfx_Min_u16((uint16)((float32)rtb_Merge_n * 327.68F), 32768U);

    /* End of Outputs for SubSystem: '<S16>/RLDoorHandleMotorRelOutput' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S16>/NoRLDoorHandleMotorOutput' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    /* SignalConversion: '<S33>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S33>/Constant'
     */
    rtb_Merge = 0U;

    /* SignalConversion: '<S33>/OutportBuffer_InsertedFor_Pwm_at_inport_0' incorporates:
     *  Constant: '<S33>/Constant1'
     */
    rtb_Merge1 = 0U;

    /* End of Outputs for SubSystem: '<S16>/NoRLDoorHandleMotorOutput' */
    break;
  }

  /* End of SwitchCase: '<S16>/SwitchCase' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Inport: '<Root>/gEDH_u8RRDoorHandlePWMOutput_Val' */
  Rte_Read_gEDH_u8RRDoorHandlePWMOutput_Val(&tmpRead_2);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ElecDoorHndl_DD_Runnable_OUT_10ms_sys'
   */
  /* FunctionCaller: '<S16>/IoHwAb_HbrModCtrl_Hbr_SetMod1' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_RLDoorHndlMotModCtrl, rtb_Merge);

  /* FunctionCaller: '<S16>/IoHwAb_HbrPwm_Hbr_SetDuty1' */
  Rte_Call_IoHwAb_HbrPwm_Hbr_SetDuty(O_H_RLDoorHndlMotPwm, rtb_Merge1);

  /* SignalConversion: '<S3>/TmpSignal ConversionAtgEDH_u8RRDoorHandleMotorOutput_Val_readOutport1' incorporates:
   *  Inport: '<Root>/gEDH_u8RRDoorHandleMotorOutput_Val'
   */
  Rte_Read_gEDH_u8RRDoorHandleMotorOutput_Val(&rtb_TmpSignalConversionAtgED_on);

  /* SwitchCase: '<S17>/SwitchCase' incorporates:
   *  Constant: '<S17>/Constant4'
   *  Inport: '<S37>/Pwm_input'
   *  Inport: '<S38>/Pwm_input'
   *  Product: '<S17>/Multiply'
   *  Saturate: '<S17>/Saturation1'
   */
  switch (rtb_TmpSignalConversionAtgED_on) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S17>/RRDoorHandleMotorCinchOutput' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    /* SignalConversion: '<S37>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S37>/Constant'
     */
    rtb_Merge_n = 2U;
    rtb_Merge1_o = Mfx_Min_u16((uint16)((float32)tmpRead_2 * 327.68F), 32768U);

    /* End of Outputs for SubSystem: '<S17>/RRDoorHandleMotorCinchOutput' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S17>/RRDoorHandleMotorRelOutput' incorporates:
     *  ActionPort: '<S38>/Action Port'
     */
    /* SignalConversion: '<S38>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S38>/Constant'
     */
    rtb_Merge_n = 1U;
    rtb_Merge1_o = Mfx_Min_u16((uint16)((float32)tmpRead_2 * 327.68F), 32768U);

    /* End of Outputs for SubSystem: '<S17>/RRDoorHandleMotorRelOutput' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S17>/NoRRDoorHandleMotorOutput' incorporates:
     *  ActionPort: '<S36>/Action Port'
     */
    /* SignalConversion: '<S36>/OutportBuffer_InsertedFor_Mode_at_inport_0' incorporates:
     *  Constant: '<S36>/Constant'
     */
    rtb_Merge_n = 0U;

    /* SignalConversion: '<S36>/OutportBuffer_InsertedFor_Pwm_at_inport_0' incorporates:
     *  Constant: '<S36>/Constant1'
     */
    rtb_Merge1_o = 0U;

    /* End of Outputs for SubSystem: '<S17>/NoRRDoorHandleMotorOutput' */
    break;
  }

  /* End of SwitchCase: '<S17>/SwitchCase' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Inport: '<Root>/gEDH_bFRHallSupplyOutput_Val' */
  Rte_Read_gEDH_bFRHallSupplyOutput_Val(&tmpRead_0);

  /* Inport: '<Root>/gEDH_bFLHallSupplyOutput_Val' */
  Rte_Read_gEDH_bFLHallSupplyOutput_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ElecDoorHndl_DD_Runnable_OUT_10ms_sys'
   */
  /* FunctionCaller: '<S17>/IoHwAb_HbrModCtrl_Hbr_SetMod1' */
  Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_RRDoorHndlMotModCtrl, rtb_Merge_n);

  /* FunctionCaller: '<S17>/IoHwAb_HbrPwm_Hbr_SetDuty1' */
  Rte_Call_IoHwAb_HbrPwm_Hbr_SetDuty(O_H_RRDoorHndlMotPwm, rtb_Merge1_o);

  /* FunctionCaller: '<S3>/IoHwAb_IoSigDio_Do_Set' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_FLHallSply, (uint8)tmpRead);

  /* FunctionCaller: '<S3>/IoHwAb_IoSigDio_Do_Set1' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_FRHallSply, (uint8)tmpRead_0);

  /* FunctionCaller: '<S3>/DTC_FLDoorHndlMotorOL_GetEventFailed' */
  Rte_Call_DTC_FLDoorHndlMotorOL_GetEventFailed(&rtb_DTC_FLDoorHndlMotorOL_Get_j);

  /* FunctionCaller: '<S3>/DTC_FRDoorHndlMotorOL_GetEventFailed' */
  Rte_Call_DTC_FRDoorHndlMotorOL_GetEventFailed(&rtb_DTC_FRDoorHndlMotorOL_Get_d);

  /* FunctionCaller: '<S3>/DTC_FRDoorHndlMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_FRDoorHndlMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FRDoorHndlMotorOL_SetEventStatus' */
  Rte_Call_DTC_FRDoorHndlMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_FRDoorHndlMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_FRDoorHndlMotorOverCurr_GetEventFailed(&rtb_DTC_FRDoorHndlMotorOverC_ml);

  /* FunctionCaller: '<S3>/DTC_FRDoorHndlMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_FRDoorHndlMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_FRDoorHndlMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_FRDoorHndlMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLDoorHndlMotorOL_GetEventFailed' */
  Rte_Call_DTC_RLDoorHndlMotorOL_GetEventFailed(&rtb_DTC_RLDoorHndlMotorOL_Get_f);

  /* FunctionCaller: '<S3>/DTC_RLDoorHndlMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLDoorHndlMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLDoorHndlMotorOL_SetEventStatus' */
  Rte_Call_DTC_RLDoorHndlMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RLDoorHndlMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_RLDoorHndlMotorOverCurr_GetEventFailed(&rtb_DTC_RLDoorHndlMotorOverCu_d);

  /* FunctionCaller: '<S3>/DTC_RLDoorHndlMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_RLDoorHndlMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RLDoorHndlMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_RLDoorHndlMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRDoorHndlMotorOL_GetEventFailed' */
  Rte_Call_DTC_RRDoorHndlMotorOL_GetEventFailed(&rtb_DTC_RRDoorHndlMotorOL_Get_f);

  /* FunctionCaller: '<S3>/DTC_RRDoorHndlMotorOL_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRDoorHndlMotorOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRDoorHndlMotorOL_SetEventStatus' */
  Rte_Call_DTC_RRDoorHndlMotorOL_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/DTC_RRDoorHndlMotorOverCurr_GetEventFailed' */
  Rte_Call_DTC_RRDoorHndlMotorOverCurr_GetEventFailed(&rtb_DTC_RRDoorHndlMotorOverCu_b);

  /* FunctionCaller: '<S3>/DTC_RRDoorHndlMotorOverCurr_ResetEventDebounceStatus' */
  Rte_Call_DTC_RRDoorHndlMotorOverCurr_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_FREEZE);

  /* FunctionCaller: '<S3>/DTC_RRDoorHndlMotorOverCurr_SetEventStatus' */
  Rte_Call_DTC_RRDoorHndlMotorOverCurr_SetEventStatus(DEM_EVENT_STATUS_PASSED);

  /* FunctionCaller: '<S3>/IoHwAb_IoDiagHbr_Hbr_Get' */
  Rte_Call_IoHwAb_IoDiagHbr_Hbr_Get(0, &rtb_IoHwAb_IoDiagHbr_Hbr_Get__m);

  /* Switch: '<S17>/Switch' incorporates:
   *  Constant: '<S17>/Constant2'
   *  Constant: '<S17>/Constant3'
   *  Constant: '<S17>/Constant6'
   *  Logic: '<S17>/AND'
   *  RelationalOperator: '<S17>/GreaterThan'
   *  RelationalOperator: '<S17>/GreaterThan1'
   */
  if ((rtb_Merge_n <= 0) || (rtb_Merge1_o <= 0)) {
    rtb_TmpSignalConversionAtgED_on = 0U;
  }

  /* Outport: '<Root>/gElecDoorHndl_u8RRDoorHndlMotorPs_Val' incorporates:
   *  Switch: '<S17>/Switch'
   */
  (void) Rte_Write_gElecDoorHndl_u8RRDoorHndlMotorPs_Val(rtb_TmpSignalConversionAtgED_on);

  /* Switch: '<S16>/Switch' incorporates:
   *  Constant: '<S16>/Constant2'
   *  Constant: '<S16>/Constant3'
   *  Constant: '<S16>/Constant6'
   *  Logic: '<S16>/AND'
   *  RelationalOperator: '<S16>/GreaterThan'
   *  RelationalOperator: '<S16>/GreaterThan1'
   */
  if ((rtb_Merge <= 0) || (rtb_Merge1 <= 0)) {
    rtb_TmpSignalConversionAtgEDH_o = 0U;
  }

  /* Outport: '<Root>/gElecDoorHndl_u8RLDoorHndlMotorPs_Val' incorporates:
   *  Switch: '<S16>/Switch'
   */
  (void) Rte_Write_gElecDoorHndl_u8RLDoorHndlMotorPs_Val(rtb_TmpSignalConversionAtgEDH_o);

  /* Switch: '<S15>/Switch' incorporates:
   *  Constant: '<S15>/Constant2'
   *  Constant: '<S15>/Constant3'
   *  Constant: '<S15>/Constant6'
   *  Logic: '<S15>/AND'
   *  RelationalOperator: '<S15>/GreaterThan'
   *  RelationalOperator: '<S15>/GreaterThan1'
   */
  if ((rtb_Merge_k <= 0) || (rtb_Merge1_l <= 0)) {
    rtb_TmpSignalConversionAtgEDH_d = 0U;
  }

  /* Outport: '<Root>/gElecDoorHndl_u8FRDoorHndlMotorPs_Val' incorporates:
   *  Switch: '<S15>/Switch'
   */
  (void) Rte_Write_gElecDoorHndl_u8FRDoorHndlMotorPs_Val(rtb_TmpSignalConversionAtgEDH_d);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndl_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Outport: '<Root>/gElecDoorHndl_u8FLDoorHndlMotorPs_Val' */
  (void) Rte_Write_gElecDoorHndl_u8FLDoorHndlMotorPs_Val(Switch);
}

/* Model initialize function */
FUNC(void, ElecDoorHndl_DD_CODE) ElecDoorHndl_DD_Runnable_Init(void)
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

    /* Outport: '<Root>/gASI_bFLDoorHSULockSw_Val' */
    (void) Rte_Write_gASI_bFLDoorHSULockSw_Val(tmpWrite);

    /* Outport: '<Root>/gASI_bFLDoorHSUUnlockSw_Val' */
    (void) Rte_Write_gASI_bFLDoorHSUUnlockSw_Val(tmpWrite_0);

    /* Outport: '<Root>/gASI_bFRDoorHSULockSw_Val' */
    (void) Rte_Write_gASI_bFRDoorHSULockSw_Val(tmpWrite_1);

    /* Outport: '<Root>/gASI_bFRDoorHSUSw_Val' */
    (void) Rte_Write_gASI_bFRDoorHSUSw_Val(tmpWrite_2);

    /* Outport: '<Root>/gASI_bFRDoorHSUUnlockSw_Val' */
    (void) Rte_Write_gASI_bFRDoorHSUUnlockSw_Val(tmpWrite_3);

    /* Outport: '<Root>/gASI_bRLDoorHSULockSw_Val' */
    (void) Rte_Write_gASI_bRLDoorHSULockSw_Val(tmpWrite_4);

    /* Outport: '<Root>/gASI_bRLDoorHSUUnlockSw_Val' */
    (void) Rte_Write_gASI_bRLDoorHSUUnlockSw_Val(tmpWrite_5);

    /* Outport: '<Root>/gASI_bRRDoorHSULockSw_Val' */
    (void) Rte_Write_gASI_bRRDoorHSULockSw_Val(tmpWrite_6);

    /* Outport: '<Root>/gASI_bRRDoorHSUUnlockSw_Val' */
    (void) Rte_Write_gASI_bRRDoorHSUUnlockSw_Val(tmpWrite_7);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
