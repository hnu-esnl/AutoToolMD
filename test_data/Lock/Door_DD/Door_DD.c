/*
 * File: Door_DD.c
 *
 * Code generated for Simulink model 'Door_DD'.
 *
 * Model version                  : 1.32
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Sep 28 19:57:47 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Door_DD.h"
#include "Door_DD_private.h"

/* Exported block states */
VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_ChrgCapAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_ChrgCapAjarSwDeb_I'
                                                                     * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                     */
VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_FLDoorAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_FLDoorAjarSwDeb_I'
                                                                    * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                    */
VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_FRDoorAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_FRDoorAjarSwDeb_I'
                                                                    * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                    */
VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_FuelFlapSwDeb_I;/* Simulink.Signal object 'DOOR_DD_FuelFlapSwDeb_I'
                                                                  * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                  */
VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_HoodAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_HoodAjarSwDeb_I'
                                                                  * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                  */
VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_RLDoorAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_RLDoorAjarSwDeb_I'
                                                                    * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                    */
VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_RRDoorAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_RRDoorAjarSwDeb_I'
                                                                    * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                    */
VAR(Efx_DebounceState_Type, Door_DD_VAR) DOOR_DD_TrunkAjarSwDeb_I;/* Simulink.Signal object 'DOOR_DD_TrunkAjarSwDeb_I'
                                                                   * #RBDGSLibOwnedElement #BlkType:EfxDebounce
                                                                   */

/* Model step function for TID1 */
FUNC(void, Door_DD_CODE) Door_DD_Runnable_IN_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  boolean rtb_DataTypeConversion6;
  boolean tmpWrite;
  boolean tmpWrite_0;
  boolean tmpWrite_1;
  boolean tmpWrite_2;
  boolean tmpWrite_3;
  boolean tmpWrite_4;
  boolean tmpWrite_5;
  boolean tmpWrite_6;
  uint8 rtb_IoHwAb_IoSigDio_Di_Get8_o1;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Door_DD_Runnable_IN_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/Door_DD_Runnable_IN_10ms_sys'
   */
  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get6' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FLDoorAjarSt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion3' */
  rtb_DataTypeConversion6 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S8>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant20'
   *  Constant: '<S1>/Constant21'
   *  Constant: '<S1>/Constant22'
   *  Constant: '<S8>/Reset'
   *  Constant: '<S8>/X_Init'
   *  Outport: '<Root>/gDoor_bFLDoorAjarSt_Val'
   *  S-Function (Upcast_sf): '<S8>/Upcast'
   *  S-Function (Upcast_sf): '<S8>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite = Efx_Debounce_u8_u8(rtb_DataTypeConversion6, &DOOR_DD_FLDoorAjarSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get7' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FRDoorAjarSt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion5' */
  rtb_DataTypeConversion6 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S9>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant24'
   *  Constant: '<S1>/Constant25'
   *  Constant: '<S1>/Constant26'
   *  Constant: '<S9>/Reset'
   *  Constant: '<S9>/X_Init'
   *  Outport: '<Root>/gDoor_bFRDoorAjarSt_Val'
   *  S-Function (Upcast_sf): '<S9>/Upcast'
   *  S-Function (Upcast_sf): '<S9>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_0 = Efx_Debounce_u8_u8(rtb_DataTypeConversion6, &DOOR_DD_FRDoorAjarSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get4' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_FuelFlapSwt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion2' */
  rtb_DataTypeConversion6 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S6>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant7'
   *  Constant: '<S1>/Constant8'
   *  Constant: '<S1>/Constant9'
   *  Constant: '<S6>/Reset'
   *  Constant: '<S6>/X_Init'
   *  Outport: '<Root>/gDoor_bFuelFlapAjarSt_Val'
   *  S-Function (Upcast_sf): '<S6>/Upcast'
   *  S-Function (Upcast_sf): '<S6>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_1 = Efx_Debounce_u8_u8(rtb_DataTypeConversion6, &DOOR_DD_FuelFlapSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get1' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RLDoorAjarSt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion' */
  rtb_DataTypeConversion6 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S3>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant12'
   *  Constant: '<S1>/Constant13'
   *  Constant: '<S1>/Constant14'
   *  Constant: '<S3>/Reset'
   *  Constant: '<S3>/X_Init'
   *  Outport: '<Root>/gDoor_bRLDoorAjarSt_Val'
   *  S-Function (Upcast_sf): '<S3>/Upcast'
   *  S-Function (Upcast_sf): '<S3>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_2 = Efx_Debounce_u8_u8(rtb_DataTypeConversion6, &DOOR_DD_RLDoorAjarSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get2' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RRDoorAjarSt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion4' */
  rtb_DataTypeConversion6 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S4>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant15'
   *  Constant: '<S1>/Constant16'
   *  Constant: '<S1>/Constant17'
   *  Constant: '<S4>/Reset'
   *  Constant: '<S4>/X_Init'
   *  Outport: '<Root>/gDoor_bRRDoorAjarSt_Val'
   *  S-Function (Upcast_sf): '<S4>/Upcast'
   *  S-Function (Upcast_sf): '<S4>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_3 = Efx_Debounce_u8_u8(rtb_DataTypeConversion6, &DOOR_DD_RRDoorAjarSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get5' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_TrAjarSwt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion35' */
  rtb_DataTypeConversion6 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S7>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant10'
   *  Constant: '<S1>/Constant11'
   *  Constant: '<S1>/Constant18'
   *  Constant: '<S7>/Reset'
   *  Constant: '<S7>/X_Init'
   *  Outport: '<Root>/gDoor_bTrunkAjarSt_Val'
   *  S-Function (Upcast_sf): '<S7>/Upcast'
   *  S-Function (Upcast_sf): '<S7>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_4 = Efx_Debounce_u8_u8(rtb_DataTypeConversion6, &DOOR_DD_TrunkAjarSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get3' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_HoodSwt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion1' */
  rtb_DataTypeConversion6 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S5>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S5>/Reset'
   *  Constant: '<S5>/X_Init'
   *  Outport: '<Root>/gDoor_bHoodAjarSt_Val'
   *  S-Function (Upcast_sf): '<S5>/Upcast'
   *  S-Function (Upcast_sf): '<S5>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_5 = Efx_Debounce_u8_u8(rtb_DataTypeConversion6, &DOOR_DD_HoodAjarSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get8' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_ChrgCapAjarSt, &rtb_IoHwAb_IoSigDio_Di_Get8_o1);

  /* DataTypeConversion: '<S1>/DataTypeConversion6' */
  rtb_DataTypeConversion6 = (rtb_IoHwAb_IoSigDio_Di_Get8_o1 != 0);

  /* S-Function (Efx_Debounce_sf): '<S10>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S10>/Reset'
   *  Constant: '<S10>/X_Init'
   *  Constant: '<S1>/Constant27'
   *  Constant: '<S1>/Constant28'
   *  Constant: '<S1>/Constant29'
   *  Outport: '<Root>/gDoor_bChrgCapAjarSt_Val'
   *  S-Function (Upcast_sf): '<S10>/Upcast'
   *  S-Function (Upcast_sf): '<S10>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 5, 5);
    tmpWrite_6 = Efx_Debounce_u8_u8(rtb_DataTypeConversion6, &DOOR_DD_ChrgCapAjarSwDeb_I, &paramdebounce_loc, 10000 );
  }

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_Door_DD_Runnable_IN_10ms_at_outport_1' */

  /* Outport: '<Root>/gDoor_bFLDoorAjarSt_Val' */
  (void) Rte_Write_gDoor_bFLDoorAjarSt_Val(tmpWrite);

  /* Outport: '<Root>/gDoor_bFRDoorAjarSt_Val' */
  (void) Rte_Write_gDoor_bFRDoorAjarSt_Val(tmpWrite_0);

  /* Outport: '<Root>/gDoor_bFuelFlapAjarSt_Val' */
  (void) Rte_Write_gDoor_bFuelFlapAjarSt_Val(tmpWrite_1);

  /* Outport: '<Root>/gDoor_bRLDoorAjarSt_Val' */
  (void) Rte_Write_gDoor_bRLDoorAjarSt_Val(tmpWrite_2);

  /* Outport: '<Root>/gDoor_bRRDoorAjarSt_Val' */
  (void) Rte_Write_gDoor_bRRDoorAjarSt_Val(tmpWrite_3);

  /* Outport: '<Root>/gDoor_bTrunkAjarSt_Val' */
  (void) Rte_Write_gDoor_bTrunkAjarSt_Val(tmpWrite_4);

  /* Outport: '<Root>/gDoor_bHoodAjarSt_Val' */
  (void) Rte_Write_gDoor_bHoodAjarSt_Val(tmpWrite_5);

  /* Outport: '<Root>/gDoor_bChrgCapAjarSt_Val' */
  (void) Rte_Write_gDoor_bChrgCapAjarSt_Val(tmpWrite_6);
}

/* Model initialize function */
FUNC(void, Door_DD_CODE) Door_DD_Runnable_Init(void)
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

    /* Outport: '<Root>/gDoor_bFLDoorAjarSt_Val' */
    (void) Rte_Write_gDoor_bFLDoorAjarSt_Val(tmpWrite);

    /* Outport: '<Root>/gDoor_bFRDoorAjarSt_Val' */
    (void) Rte_Write_gDoor_bFRDoorAjarSt_Val(tmpWrite_0);

    /* Outport: '<Root>/gDoor_bFuelFlapAjarSt_Val' */
    (void) Rte_Write_gDoor_bFuelFlapAjarSt_Val(tmpWrite_1);

    /* Outport: '<Root>/gDoor_bRLDoorAjarSt_Val' */
    (void) Rte_Write_gDoor_bRLDoorAjarSt_Val(tmpWrite_2);

    /* Outport: '<Root>/gDoor_bRRDoorAjarSt_Val' */
    (void) Rte_Write_gDoor_bRRDoorAjarSt_Val(tmpWrite_3);

    /* Outport: '<Root>/gDoor_bTrunkAjarSt_Val' */
    (void) Rte_Write_gDoor_bTrunkAjarSt_Val(tmpWrite_4);

    /* Outport: '<Root>/gDoor_bHoodAjarSt_Val' */
    (void) Rte_Write_gDoor_bHoodAjarSt_Val(tmpWrite_5);

    /* Outport: '<Root>/gDoor_bChrgCapAjarSt_Val' */
    (void) Rte_Write_gDoor_bChrgCapAjarSt_Val(tmpWrite_6);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
