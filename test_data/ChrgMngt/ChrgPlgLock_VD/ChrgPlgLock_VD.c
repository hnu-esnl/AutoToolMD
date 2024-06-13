/*
 * File: ChrgPlgLock_VD.c
 *
 * Code generated for Simulink model 'ChrgPlgLock_VD'.
 *
 * Model version                  : 1.70
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Sep 28 18:01:23 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ChrgPlgLock_VD.h"
#include "ChrgPlgLock_VD_private.h"

/* Named constants for Chart: '<S1>/Chart2' */
#define C_IN_State_Error_Healed_WaitCmd ((uint8)2U)
#define C_IN_State_Error_Sensor_Locking ((uint8)1U)
#define C_IN_State_Error_Sensor_WaitCmd ((uint8)4U)
#define C_IN_State_Unlocking_ReverseRun ((uint8)5U)
#define Chr_IN_State_Error_Sensor_Start ((uint8)2U)
#define ChrgP_IN_State_Unlocked_WaitCmd ((uint8)2U)
#define ChrgPlgL_IN_State_Locking_Start ((uint8)3U)
#define ChrgPlgLo_IN_State_Error_DesAct ((uint8)1U)
#define ChrgPlgLo_IN_State_Error_Healed ((uint8)2U)
#define ChrgPlgLo_IN_State_Error_Sensor ((uint8)3U)
#define ChrgPlgLo_IN_State_Locking_Wait ((uint8)4U)
#define ChrgPlgLock_VD_IN_State_ERROR  ((uint8)1U)
#define ChrgPlgLock_VD_IN_State_LOCK   ((uint8)2U)
#define ChrgPlgLock_VD_IN_State_Locked ((uint8)1U)
#define ChrgPlgLock_VD_IN_State_POWERON ((uint8)3U)
#define ChrgPlgLock_VD_IN_State_UNLOCK ((uint8)4U)
#define ChrgPlgLock_V_IN_State_Unlocked ((uint8)1U)
#define ChrgPlgLock__IN_NO_ACTIVE_CHILD ((uint8)0U)
#define ChrgPlgLock__IN_State_Unlocking ((uint8)3U)
#define ChrgPlg_IN_State_Error_Actuator ((uint8)1U)
#define ChrgPlg_IN_State_Error_Healed_p ((uint8)1U)
#define ChrgPlg_IN_State_Unlocking_Wait ((uint8)6U)
#define Chrg_IN_State_Locking_Continued ((uint8)2U)
#define Chrg_IN_State_No_Actuator_Error ((uint8)2U)
#define IN_State_Error_Sensor_Unlocking ((uint8)3U)
#define IN_State_Unlocking_ReverseRun_W ((uint8)6U)
#define IN_State_Unlocking_ReverseRun_l ((uint8)4U)
#define IN_State_Unlocking_ReverseRun_p ((uint8)5U)

/* Block signals (default storage) */
VAR(B_ChrgPlgLock_VD_T, ChrgPlgLock_VD_VAR) ChrgPlgLock_VD_B;

/* Block states (default storage) */
VAR(DW_ChrgPlgLock_VD_T, ChrgPlgLock_VD_VAR) ChrgPlgLock_VD_DW;

/* Model step function for TID1 */
FUNC(void, ChrgPlgLock_VD_CODE) ChrgPlgLock_VD_Runnable_1ms(void) /* Sample time: [0.001s, 0.0s] */
{
  /* local block i/o variables */
  boolean rtb_Bfx_GetBit_sf_f;
  sint32 rtb_DataTypeConversion;
  boolean rtb_DTC_IntlckChrgPlgHBrgOL1__l;
  boolean rtb_DTC_IntlckChrgPlgHBrgOL1__o;
  boolean rtb_LogicalOperator4;
  boolean rtb_DTC_IntlckChrgPlgHBrgOL2__o;
  boolean rtb_DTC_IntlckChrgPlgHBrgOL2_ii;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCB_eo;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCB1_m;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCB2_d;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCB2_b;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCG1_i;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCG1_e;
  boolean rtb_DTC_IntlckChrgPlgHBrgSCG2_f;
  boolean rtb_LogicalOperator;
  uint32 rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1;
  sint32 rtb_ChgrPlug_stPlgLockStMac;
  uint8 tmp;
  Dem_EventStatusType tmp_0;
  sint32 flgLockPinByndClsd_tmp;
  sint16 tmp_ChgrPlug_ratPlgLockOpng_C;
  sint16 tmp_ChgrPlug_ratPlgLockClsng_C;
  sint16 tmp_ChgrPlug_ratPlgLockOff_C;
  uint16 tmp_ChgrPlug_tiPlgLockOff_C;
  uint16 tmp_ChgrPlug_tiPlgLockOpng_C;
  uint16 tmp_ChgrPlug_tiPlgLockClsng_C;
  boolean guard1 = false;
  tmp_ChgrPlug_tiPlgLockClsng_C = Rte_CData_ChgrPlug_tiPlgLockClsng_C();
  tmp_ChgrPlug_tiPlgLockOpng_C = Rte_CData_ChgrPlug_tiPlgLockOpng_C();
  tmp_ChgrPlug_tiPlgLockOff_C = Rte_CData_ChgrPlug_tiPlgLockOff_C();
  tmp_ChgrPlug_ratPlgLockOff_C = Rte_CData_ChgrPlug_ratPlgLockOff_C();
  tmp_ChgrPlug_ratPlgLockClsng_C = Rte_CData_ChgrPlug_ratPlgLockClsng_C();
  tmp_ChgrPlug_ratPlgLockOpng_C = Rte_CData_ChgrPlug_ratPlgLockOpng_C();

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgPlgLock_VD_Runnable_1ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgPlgLock_VD_Runnable_1ms_sys'
   */
  /* DataTypeConversion: '<S1>/DataTypeConversion' incorporates:
   *  Inport: '<Root>/ChrgPlg_stPlgLockCmd_Val'
   */
  rtb_DataTypeConversion = Rte_IRead_ChrgPlgLock_VD_Runnable_1ms_ChrgPlg_stPlgLockCmd_Val();

  /* FunctionCaller: '<S1>/DTC_ChgrPlugLockSnsrErr_GetEventFailed' */
  Rte_Call_DTC_ChgrPlugLockSnsrErr_GetEventFailed(&rtb_DTC_IntlckChrgPlgHBrgOL1__l);

  /* FunctionCaller: '<S1>/DTC_ChgrPlugLockSnsrErr_GetEventTested' */
  Rte_Call_DTC_ChgrPlugLockSnsrErr_GetEventTested(&rtb_DTC_IntlckChrgPlgHBrgOL1__o);

  /* Logic: '<S1>/LogicalOperator4' */
  rtb_LogicalOperator4 = (rtb_DTC_IntlckChrgPlgHBrgOL1__l && rtb_DTC_IntlckChrgPlgHBrgOL1__o);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgOL1_GetEventFailed' */
  Rte_Call_DTC_IntlckChrgPlgHBrgOL1_GetEventFailed(&rtb_DTC_IntlckChrgPlgHBrgOL1__o);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgOL1_GetEventTested' */
  Rte_Call_DTC_IntlckChrgPlgHBrgOL1_GetEventTested(&rtb_DTC_IntlckChrgPlgHBrgOL1__l);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgOL2_GetEventFailed' */
  Rte_Call_DTC_IntlckChrgPlgHBrgOL2_GetEventFailed(&rtb_DTC_IntlckChrgPlgHBrgOL2__o);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgOL2_GetEventTested' */
  Rte_Call_DTC_IntlckChrgPlgHBrgOL2_GetEventTested(&rtb_DTC_IntlckChrgPlgHBrgOL2_ii);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCB1_GetEventFailed' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCB1_GetEventFailed(&rtb_DTC_IntlckChrgPlgHBrgSCB_eo);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCB1_GetEventTested' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCB1_GetEventTested(&rtb_DTC_IntlckChrgPlgHBrgSCB1_m);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCB2_GetEventFailed' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCB2_GetEventFailed(&rtb_DTC_IntlckChrgPlgHBrgSCB2_d);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCB2_GetEventTested' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCB2_GetEventTested(&rtb_DTC_IntlckChrgPlgHBrgSCB2_b);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCG1_GetEventFailed' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCG1_GetEventFailed(&rtb_DTC_IntlckChrgPlgHBrgSCG1_i);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCG1_GetEventTested' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCG1_GetEventTested(&rtb_DTC_IntlckChrgPlgHBrgSCG1_e);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCG2_GetEventFailed' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCG2_GetEventFailed(&rtb_DTC_IntlckChrgPlgHBrgSCG2_f);

  /* FunctionCaller: '<S1>/DTC_IntlckChrgPlgHBrgSCG2_GetEventTested' */
  Rte_Call_DTC_IntlckChrgPlgHBrgSCG2_GetEventTested(&rtb_LogicalOperator);

  /* Logic: '<S1>/LogicalOperator11' incorporates:
   *  Logic: '<S1>/LogicalOperator10'
   *  Logic: '<S1>/LogicalOperator5'
   *  Logic: '<S1>/LogicalOperator6'
   *  Logic: '<S1>/LogicalOperator7'
   *  Logic: '<S1>/LogicalOperator8'
   *  Logic: '<S1>/LogicalOperator9'
   */
  rtb_DTC_IntlckChrgPlgHBrgOL1__l = ((rtb_DTC_IntlckChrgPlgHBrgOL1__o && rtb_DTC_IntlckChrgPlgHBrgOL1__l) || (rtb_DTC_IntlckChrgPlgHBrgOL2__o && rtb_DTC_IntlckChrgPlgHBrgOL2_ii) || (rtb_DTC_IntlckChrgPlgHBrgSCB_eo && rtb_DTC_IntlckChrgPlgHBrgSCB1_m) || (rtb_DTC_IntlckChrgPlgHBrgSCB2_d && rtb_DTC_IntlckChrgPlgHBrgSCB2_b) || (rtb_DTC_IntlckChrgPlgHBrgSCG1_i && rtb_DTC_IntlckChrgPlgHBrgSCG1_e) || (rtb_DTC_IntlckChrgPlgHBrgSCG2_f && rtb_LogicalOperator));

  /* Chart: '<S1>/Chart2' incorporates:
   *  Constant: '<S1>/Constant10'
   *  Constant: '<S1>/Constant11'
   *  Constant: '<S1>/Constant12'
   *  Constant: '<S1>/Constant13'
   *  Constant: '<S1>/Constant14'
   *  Constant: '<S1>/Constant15'
   *  Constant: '<S1>/Constant16'
   *  Constant: '<S1>/Constant9'
   *  Inport: '<Root>/ChrgPlgPosn_st_Val'
   */
  /* Gateway: ChrgPlgLock_VD_Runnable_1ms_sys/Chart2 */
  /* During: ChrgPlgLock_VD_Runnable_1ms_sys/Chart2 */
  if (ChrgPlgLock_VD_DW.is_active_c1_ChrgPlgLock_VD == 0U) {
    /* Entry: ChrgPlgLock_VD_Runnable_1ms_sys/Chart2 */
    ChrgPlgLock_VD_DW.is_active_c1_ChrgPlgLock_VD = 1U;

    /* Entry Internal: ChrgPlgLock_VD_Runnable_1ms_sys/Chart2 */
    /* Transition: '<S3>:4' */
    ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_POWERON;

    /* Entry Internal 'State_POWERON': '<S3>:136' */
    /* Transition: '<S3>:137' */
    /* Entry 'State_PowerOn': '<S3>:138' */
    rtb_ChgrPlug_stPlgLockStMac = 0;
    ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
    ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 1;
    ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
  } else {
    guard1 = false;
    switch (ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD) {
     case ChrgPlgLock_VD_IN_State_ERROR:
      /* During 'State_ERROR': '<S3>:47' */
      ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = Mfx_Add_u16u16_u16(ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock, 1U);
      if (ChrgPlgLock_VD_DW.is_State_ERROR == ChrgPlg_IN_State_Error_Actuator) {
        ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
        rtb_ChgrPlug_stPlgLockStMac = 9;

        /* During 'State_Error_Actuator': '<S3>:60' */
        if (!rtb_DTC_IntlckChrgPlgHBrgOL1__l) {
          /* Transition: '<S3>:54' */
          if (!rtb_LogicalOperator4) {
            /* Transition: '<S3>:56' */
            ChrgPlgLock_VD_DW.is_State_ERROR = Chrg_IN_State_No_Actuator_Error;
            ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_Healed;
            ChrgPlgLock_VD_DW.is_State_Error_Healed = ChrgPlg_IN_State_Error_Healed_p;

            /* Entry 'State_Error_Healed': '<S3>:91' */
            rtb_ChgrPlug_stPlgLockStMac = 15;
          } else {
            /* Transition: '<S3>:55' */
            ChrgPlgLock_VD_DW.is_State_ERROR = Chrg_IN_State_No_Actuator_Error;
            ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_Sensor;

            /* Entry Internal 'State_Error_Sensor': '<S3>:67' */
            /* Transition: '<S3>:74' */
            ChrgPlgLock_VD_DW.is_State_Error_Sensor = Chr_IN_State_Error_Sensor_Start;

            /* Entry 'State_Error_Sensor_Start': '<S3>:84' */
            ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
            rtb_ChgrPlug_stPlgLockStMac = 10;
          }
        }
      } else {
        /* During 'State_No_Actuator_Error': '<S3>:61' */
        if (rtb_DTC_IntlckChrgPlgHBrgOL1__l) {
          /* Transition: '<S3>:52' */
          /* Exit Internal 'State_No_Actuator_Error': '<S3>:61' */
          /* Exit Internal 'State_Error_Healed': '<S3>:86' */
          ChrgPlgLock_VD_DW.is_State_Error_Healed = ChrgPlgLock__IN_NO_ACTIVE_CHILD;

          /* Exit Internal 'State_Error_Sensor': '<S3>:67' */
          ChrgPlgLock_VD_DW.is_State_Error_Sensor = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
          ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
          ChrgPlgLock_VD_DW.is_State_ERROR = ChrgPlg_IN_State_Error_Actuator;

          /* Entry 'State_Error_Actuator': '<S3>:60' */
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
          rtb_ChgrPlug_stPlgLockStMac = 9;
        } else {
          switch (ChrgPlgLock_VD_DW.is_State_No_Actuator_Error) {
           case ChrgPlgLo_IN_State_Error_DesAct:
            ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
            rtb_ChgrPlug_stPlgLockStMac = 14;

            /* During 'State_Error_DesAct': '<S3>:92' */
            if (rtb_LogicalOperator4) {
              /* Transition: '<S3>:64' */
              ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_Sensor;

              /* Entry Internal 'State_Error_Sensor': '<S3>:67' */
              /* Transition: '<S3>:74' */
              ChrgPlgLock_VD_DW.is_State_Error_Sensor = Chr_IN_State_Error_Sensor_Start;

              /* Entry 'State_Error_Sensor_Start': '<S3>:84' */
              ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
              rtb_ChgrPlug_stPlgLockStMac = 10;
            } else {
              /* Transition: '<S3>:62' */
              if (rtb_DataTypeConversion == 2) {
                /* Transition: '<S3>:89' */
                ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_Healed;
                ChrgPlgLock_VD_DW.is_State_Error_Healed = C_IN_State_Error_Healed_WaitCmd;

                /* Entry 'State_Error_Healed_WaitCmd': '<S3>:90' */
                rtb_ChgrPlug_stPlgLockStMac = 16;
              }
            }
            break;

           case ChrgPlgLo_IN_State_Error_Healed:
            /* During 'State_Error_Healed': '<S3>:86' */
            if (rtb_LogicalOperator4) {
              /* Transition: '<S3>:65' */
              /* Exit Internal 'State_Error_Healed': '<S3>:86' */
              ChrgPlgLock_VD_DW.is_State_Error_Healed = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
              ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_Sensor;

              /* Entry Internal 'State_Error_Sensor': '<S3>:67' */
              /* Transition: '<S3>:74' */
              ChrgPlgLock_VD_DW.is_State_Error_Sensor = Chr_IN_State_Error_Sensor_Start;

              /* Entry 'State_Error_Sensor_Start': '<S3>:84' */
              ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
              ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
              rtb_ChgrPlug_stPlgLockStMac = 10;
            } else if (ChrgPlgLock_VD_DW.is_State_Error_Healed == ChrgPlg_IN_State_Error_Healed_p) {
              rtb_ChgrPlug_stPlgLockStMac = 15;

              /* During 'State_Error_Healed': '<S3>:91' */
              /* Transition: '<S3>:88' */
              if (rtb_DataTypeConversion == 2) {
                /* Transition: '<S3>:89' */
                ChrgPlgLock_VD_DW.is_State_Error_Healed = C_IN_State_Error_Healed_WaitCmd;

                /* Entry 'State_Error_Healed_WaitCmd': '<S3>:90' */
                rtb_ChgrPlug_stPlgLockStMac = 16;
              }
            } else {
              rtb_ChgrPlug_stPlgLockStMac = 16;

              /* During 'State_Error_Healed_WaitCmd': '<S3>:90' */
              if (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockOff_C) {
                /* Transition: '<S3>:51' */
                if (rtb_DataTypeConversion == 1) {
                  /* Transition: '<S3>:135' */
                  ChrgPlgLock_VD_DW.is_State_Error_Healed = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
                  ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
                  ChrgPlgLock_VD_DW.is_State_ERROR = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
                  ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_UNLOCK;

                  /* Entry Internal 'State_UNLOCK': '<S3>:10' */
                  /* Transition: '<S3>:18' */
                  /* Transition: '<S3>:19' */
                  ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = 0U;
                  ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgPlgLock__IN_State_Unlocking;

                  /* Entry 'State_Unlocking': '<S3>:35' */
                  ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
                  ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = Mfx_Add_u32s32_u8(ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn, 1);
                  ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOpng_C;
                  ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 1;
                  rtb_ChgrPlug_stPlgLockStMac = 1;
                } else {
                  if (rtb_DataTypeConversion == 0) {
                    /* Transition: '<S3>:134' */
                    ChrgPlgLock_VD_DW.is_State_Error_Healed = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
                    ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
                    ChrgPlgLock_VD_DW.is_State_ERROR = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
                    ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_LOCK;

                    /* Entry Internal 'State_LOCK': '<S3>:95' */
                    /* Transition: '<S3>:100' */
                    ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = 0U;
                    ChrgPlgLock_VD_DW.is_State_LOCK = ChrgPlgL_IN_State_Locking_Start;

                    /* Entry 'State_Locking_Start': '<S3>:116' */
                    ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
                    ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = Mfx_Add_u32s32_u8(ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn, 1);
                    ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockClsng_C;
                    ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 1;
                    rtb_ChgrPlug_stPlgLockStMac = 5;
                  }
                }
              }
            }
            break;

           default:
            /* During 'State_Error_Sensor': '<S3>:67' */
            switch (ChrgPlgLock_VD_DW.is_State_Error_Sensor) {
             case C_IN_State_Error_Sensor_Locking:
              ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockClsng_C;
              rtb_ChgrPlug_stPlgLockStMac = 13;

              /* During 'State_Error_Sensor_Locking': '<S3>:82' */
              if (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockClsng_C) {
                /* Transition: '<S3>:73' */
                /* Transition: '<S3>:71' */
                ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
                ChrgPlgLock_VD_DW.is_State_Error_Sensor = Chr_IN_State_Error_Sensor_Start;

                /* Entry 'State_Error_Sensor_Start': '<S3>:84' */
                ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
                ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
                rtb_ChgrPlug_stPlgLockStMac = 10;
              }
              break;

             case Chr_IN_State_Error_Sensor_Start:
              ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
              rtb_ChgrPlug_stPlgLockStMac = 10;

              /* During 'State_Error_Sensor_Start': '<S3>:84' */
              if (rtb_DataTypeConversion == 2) {
                /* Transition: '<S3>:75' */
                ChrgPlgLock_VD_DW.is_State_Error_Sensor = C_IN_State_Error_Sensor_WaitCmd;

                /* Entry 'State_Error_Sensor_WaitCmd': '<S3>:83' */
                rtb_ChgrPlug_stPlgLockStMac = 11;
              } else {
                /* Transition: '<S3>:80' */
                if (!rtb_LogicalOperator4) {
                  /* Transition: '<S3>:81' */
                  ChrgPlgLock_VD_DW.is_State_Error_Sensor = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
                  ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_Healed;
                  ChrgPlgLock_VD_DW.is_State_Error_Healed = ChrgPlg_IN_State_Error_Healed_p;

                  /* Entry 'State_Error_Healed': '<S3>:91' */
                  rtb_ChgrPlug_stPlgLockStMac = 15;
                }
              }
              break;

             case IN_State_Error_Sensor_Unlocking:
              ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOpng_C;
              rtb_ChgrPlug_stPlgLockStMac = 12;

              /* During 'State_Error_Sensor_Unlocking': '<S3>:85' */
              if (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockOpng_C) {
                /* Transition: '<S3>:76' */
                /* Transition: '<S3>:71' */
                ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
                ChrgPlgLock_VD_DW.is_State_Error_Sensor = Chr_IN_State_Error_Sensor_Start;

                /* Entry 'State_Error_Sensor_Start': '<S3>:84' */
                ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
                ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
                rtb_ChgrPlug_stPlgLockStMac = 10;
              }
              break;

             default:
              rtb_ChgrPlug_stPlgLockStMac = 11;

              /* During 'State_Error_Sensor_WaitCmd': '<S3>:83' */
              /* Transition: '<S3>:77' */
              if ((rtb_DataTypeConversion == 0) && (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockOff_C)) {
                /* Transition: '<S3>:72' */
                ChrgPlgLock_VD_DW.is_State_Error_Sensor = C_IN_State_Error_Sensor_Locking;

                /* Entry 'State_Error_Sensor_Locking': '<S3>:82' */
                ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
                ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockClsng_C;
                ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 1;
                rtb_ChgrPlug_stPlgLockStMac = 13;
              } else if ((rtb_DataTypeConversion == 1) && (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockOff_C)) {
                /* Transition: '<S3>:78' */
                ChrgPlgLock_VD_DW.is_State_Error_Sensor = IN_State_Error_Sensor_Unlocking;

                /* Entry 'State_Error_Sensor_Unlocking': '<S3>:85' */
                ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
                ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOpng_C;
                ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 1;
                rtb_ChgrPlug_stPlgLockStMac = 12;
              } else {
                /* Transition: '<S3>:79' */
                if (!rtb_LogicalOperator4) {
                  /* Transition: '<S3>:81' */
                  ChrgPlgLock_VD_DW.is_State_Error_Sensor = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
                  ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_Healed;
                  ChrgPlgLock_VD_DW.is_State_Error_Healed = ChrgPlg_IN_State_Error_Healed_p;

                  /* Entry 'State_Error_Healed': '<S3>:91' */
                  rtb_ChgrPlug_stPlgLockStMac = 15;
                }
              }
              break;
            }
            break;
          }
        }
      }
      break;

     case ChrgPlgLock_VD_IN_State_LOCK:
      /* During 'State_LOCK': '<S3>:95' */
      if (rtb_LogicalOperator4 || rtb_DTC_IntlckChrgPlgHBrgOL1__l) {
        /* Transition: '<S3>:7' */
        /* Exit Internal 'State_LOCK': '<S3>:95' */
        ChrgPlgLock_VD_DW.is_State_LOCK = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
        ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_ERROR;

        /* Entry Internal 'State_ERROR': '<S3>:47' */
        /* Transition: '<S3>:57' */
        ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
        if (rtb_DTC_IntlckChrgPlgHBrgOL1__l) {
          /* Transition: '<S3>:53' */
          ChrgPlgLock_VD_DW.is_State_ERROR = ChrgPlg_IN_State_Error_Actuator;

          /* Entry 'State_Error_Actuator': '<S3>:60' */
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
          rtb_ChgrPlug_stPlgLockStMac = 9;
        } else {
          /* Transition: '<S3>:58' */
          ChrgPlgLock_VD_DW.is_State_ERROR = Chrg_IN_State_No_Actuator_Error;
          ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_Sensor;

          /* Entry Internal 'State_Error_Sensor': '<S3>:67' */
          /* Transition: '<S3>:74' */
          ChrgPlgLock_VD_DW.is_State_Error_Sensor = Chr_IN_State_Error_Sensor_Start;

          /* Entry 'State_Error_Sensor_Start': '<S3>:84' */
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
          rtb_ChgrPlug_stPlgLockStMac = 10;
        }
      } else if (rtb_DataTypeConversion == 1) {
        /* Transition: '<S3>:5' */
        /* Exit Internal 'State_LOCK': '<S3>:95' */
        ChrgPlgLock_VD_DW.is_State_LOCK = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
        ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_UNLOCK;

        /* Entry Internal 'State_UNLOCK': '<S3>:10' */
        /* Transition: '<S3>:18' */
        /* Transition: '<S3>:19' */
        ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = 0U;
        ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgPlgLock__IN_State_Unlocking;

        /* Entry 'State_Unlocking': '<S3>:35' */
        ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
        ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = Mfx_Add_u32s32_u8(ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn, 1);
        ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOpng_C;
        ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 1;
        rtb_ChgrPlug_stPlgLockStMac = 1;
      } else {
        ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = Mfx_Add_u16u16_u16(ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock, 1U);
        switch (ChrgPlgLock_VD_DW.is_State_LOCK) {
         case ChrgPlgLock_VD_IN_State_Locked:
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          rtb_ChgrPlug_stPlgLockStMac = 7;

          /* During 'State_Locked': '<S3>:124' */
          if (Rte_IRead_ChrgPlgLock_VD_Runnable_1ms_ChrgPlgPosn_st_Val() == 0) {
            /* Transition: '<S3>:111' */
            /* Transition: '<S3>:110' */
            /* Transition: '<S3>:130' */
            ChrgPlgLock_VD_DW.is_State_LOCK = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
            ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_ERROR;
            ChrgPlgLock_VD_DW.is_State_ERROR = Chrg_IN_State_No_Actuator_Error;
            ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_DesAct;

            /* Entry 'State_Error_DesAct': '<S3>:92' */
            ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
            rtb_ChgrPlug_stPlgLockStMac = 14;
          }
          break;

         case Chrg_IN_State_Locking_Continued:
          rtb_ChgrPlug_stPlgLockStMac = 6;

          /* During 'State_Locking_Continued': '<S3>:120' */
          if (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockClsng_C) {
            /* Transition: '<S3>:107' */
            ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
            if (Rte_IRead_ChrgPlgLock_VD_Runnable_1ms_ChrgPlgPosn_st_Val() == 1) {
              /* Transition: '<S3>:112' */
              ChrgPlgLock_VD_DW.is_State_LOCK = ChrgPlgLock_VD_IN_State_Locked;

              /* Entry 'State_Locked': '<S3>:124' */
              ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
              ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 2;
              rtb_ChgrPlug_stPlgLockStMac = 7;
            } else {
              /* Transition: '<S3>:108' */
              ChrgPlgLock_VD_B.flgLockPinByndClsd = true;

              /* Transition: '<S3>:110' */
              /* Transition: '<S3>:130' */
              ChrgPlgLock_VD_DW.is_State_LOCK = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
              ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_ERROR;
              ChrgPlgLock_VD_DW.is_State_ERROR = Chrg_IN_State_No_Actuator_Error;
              ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_DesAct;

              /* Entry 'State_Error_DesAct': '<S3>:92' */
              ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
              ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
              rtb_ChgrPlug_stPlgLockStMac = 14;
            }
          } else {
            ChrgPlgLock_VD_B.flgLockPinByndClsd = false;
          }
          break;

         case ChrgPlgL_IN_State_Locking_Start:
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockClsng_C;
          rtb_ChgrPlug_stPlgLockStMac = 5;

          /* During 'State_Locking_Start': '<S3>:116' */
          if (Rte_IRead_ChrgPlgLock_VD_Runnable_1ms_ChrgPlgPosn_st_Val() == 1) {
            /* Transition: '<S3>:105' */
            ChrgPlgLock_VD_DW.is_State_LOCK = Chrg_IN_State_Locking_Continued;

            /* Entry 'State_Locking_Continued': '<S3>:120' */
            rtb_ChgrPlug_stPlgLockStMac = 6;
          } else {
            if (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockClsng_C) {
              /* Transition: '<S3>:101' */
              if (ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn >= Rte_CData_ChgrPlug_cntrTryClsng_C()) {
                /* Transition: '<S3>:104' */
                /* Transition: '<S3>:103' */
                /* Transition: '<S3>:110' */
                /* Transition: '<S3>:130' */
                ChrgPlgLock_VD_DW.is_State_LOCK = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
                ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_ERROR;
                ChrgPlgLock_VD_DW.is_State_ERROR = Chrg_IN_State_No_Actuator_Error;
                ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_DesAct;

                /* Entry 'State_Error_DesAct': '<S3>:92' */
                ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
                ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
                rtb_ChgrPlug_stPlgLockStMac = 14;
              } else {
                /* Transition: '<S3>:102' */
                ChrgPlgLock_VD_DW.is_State_LOCK = IN_State_Unlocking_ReverseRun_W;

                /* Entry 'State_Unlocking_ReverseRun_Wait': '<S3>:222' */
                ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
                ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
                rtb_ChgrPlug_stPlgLockStMac = 8;
              }
            }
          }
          break;

         case ChrgPlgLo_IN_State_Locking_Wait:
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          rtb_ChgrPlug_stPlgLockStMac = 8;

          /* During 'State_Locking_Wait': '<S3>:117' */
          if (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockOff_C) {
            /* Transition: '<S3>:99' */
            ChrgPlgLock_VD_DW.is_State_LOCK = ChrgPlgL_IN_State_Locking_Start;

            /* Entry 'State_Locking_Start': '<S3>:116' */
            ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
            ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = Mfx_Add_u32s32_u8(ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn, 1);
            ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockClsng_C;
            ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 1;
            rtb_ChgrPlug_stPlgLockStMac = 5;
          }
          break;

         case C_IN_State_Unlocking_ReverseRun:
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOpng_C;
          rtb_ChgrPlug_stPlgLockStMac = 5;

          /* During 'State_Unlocking_ReverseRun': '<S3>:223' */
          if (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockOpng_C) {
            /* Transition: '<S3>:225' */
            ChrgPlgLock_VD_DW.is_State_LOCK = ChrgPlgLo_IN_State_Locking_Wait;

            /* Entry 'State_Locking_Wait': '<S3>:117' */
            ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
            ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
            rtb_ChgrPlug_stPlgLockStMac = 8;
          }
          break;

         default:
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          rtb_ChgrPlug_stPlgLockStMac = 8;

          /* During 'State_Unlocking_ReverseRun_Wait': '<S3>:222' */
          if (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockOff_C) {
            /* Transition: '<S3>:224' */
            ChrgPlgLock_VD_DW.is_State_LOCK = C_IN_State_Unlocking_ReverseRun;

            /* Entry 'State_Unlocking_ReverseRun': '<S3>:223' */
            ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOpng_C;
            ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
            rtb_ChgrPlug_stPlgLockStMac = 5;
          }
          break;
        }
      }
      break;

     case ChrgPlgLock_VD_IN_State_POWERON:
      /* During 'State_POWERON': '<S3>:136' */
      if (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > Rte_CData_ChgrPlug_tiPlgLockPwrOn_C()) {
        /* Transition: '<S3>:142' */
        ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = tmp_ChgrPlug_tiPlgLockOff_C;
        if (rtb_DataTypeConversion == 0) {
          /* Transition: '<S3>:46' */
          /* Exit Internal 'State_POWERON': '<S3>:136' */
          ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_LOCK;

          /* Entry Internal 'State_LOCK': '<S3>:95' */
          /* Transition: '<S3>:100' */
          ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = 0U;
          ChrgPlgLock_VD_DW.is_State_LOCK = ChrgPlgL_IN_State_Locking_Start;

          /* Entry 'State_Locking_Start': '<S3>:116' */
          ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
          ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = Mfx_Add_u32s32_u8(ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn, 1);
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockClsng_C;
          ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 1;
          rtb_ChgrPlug_stPlgLockStMac = 5;
        } else if (rtb_DataTypeConversion == 1) {
          /* Transition: '<S3>:133' */
          /* Exit Internal 'State_POWERON': '<S3>:136' */
          ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_UNLOCK;

          /* Entry Internal 'State_UNLOCK': '<S3>:10' */
          /* Transition: '<S3>:18' */
          /* Transition: '<S3>:19' */
          ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = 0U;
          ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgPlgLock__IN_State_Unlocking;

          /* Entry 'State_Unlocking': '<S3>:35' */
          ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
          ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = Mfx_Add_u32s32_u8(ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn, 1);
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOpng_C;
          ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 1;
          rtb_ChgrPlug_stPlgLockStMac = 1;
        } else if (Rte_IRead_ChrgPlgLock_VD_Runnable_1ms_ChrgPlgPosn_st_Val() == 1) {
          /* Transition: '<S3>:140' */
          /* Exit Internal 'State_POWERON': '<S3>:136' */
          ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_LOCK;
          ChrgPlgLock_VD_DW.is_State_LOCK = ChrgPlgLock_VD_IN_State_Locked;

          /* Entry 'State_Locked': '<S3>:124' */
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 2;
          rtb_ChgrPlug_stPlgLockStMac = 7;
        } else if (Rte_IRead_ChrgPlgLock_VD_Runnable_1ms_ChrgPlgPosn_st_Val() == 0) {
          /* Transition: '<S3>:3' */
          /* Exit Internal 'State_POWERON': '<S3>:136' */
          ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_UNLOCK;
          ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgP_IN_State_Unlocked_WaitCmd;

          /* Entry 'State_Unlocked_WaitCmd': '<S3>:43' */
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 0;
          rtb_ChgrPlug_stPlgLockStMac = 3;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      break;

     default:
      /* During 'State_UNLOCK': '<S3>:10' */
      if (rtb_LogicalOperator4 || rtb_DTC_IntlckChrgPlgHBrgOL1__l) {
        /* Transition: '<S3>:132' */
        /* Exit Internal 'State_UNLOCK': '<S3>:10' */
        ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
        ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_ERROR;

        /* Entry Internal 'State_ERROR': '<S3>:47' */
        /* Transition: '<S3>:57' */
        ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
        if (rtb_DTC_IntlckChrgPlgHBrgOL1__l) {
          /* Transition: '<S3>:53' */
          ChrgPlgLock_VD_DW.is_State_ERROR = ChrgPlg_IN_State_Error_Actuator;

          /* Entry 'State_Error_Actuator': '<S3>:60' */
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
          rtb_ChgrPlug_stPlgLockStMac = 9;
        } else {
          /* Transition: '<S3>:58' */
          ChrgPlgLock_VD_DW.is_State_ERROR = Chrg_IN_State_No_Actuator_Error;
          ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_Sensor;

          /* Entry Internal 'State_Error_Sensor': '<S3>:67' */
          /* Transition: '<S3>:74' */
          ChrgPlgLock_VD_DW.is_State_Error_Sensor = Chr_IN_State_Error_Sensor_Start;

          /* Entry 'State_Error_Sensor_Start': '<S3>:84' */
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
          rtb_ChgrPlug_stPlgLockStMac = 10;
        }
      } else if (rtb_DataTypeConversion == 0) {
        /* Transition: '<S3>:131' */
        /* Exit Internal 'State_UNLOCK': '<S3>:10' */
        ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
        ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_LOCK;

        /* Entry Internal 'State_LOCK': '<S3>:95' */
        /* Transition: '<S3>:100' */
        ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = 0U;
        ChrgPlgLock_VD_DW.is_State_LOCK = ChrgPlgL_IN_State_Locking_Start;

        /* Entry 'State_Locking_Start': '<S3>:116' */
        ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
        ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = Mfx_Add_u32s32_u8(ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn, 1);
        ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockClsng_C;
        ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 1;
        rtb_ChgrPlug_stPlgLockStMac = 5;
      } else {
        flgLockPinByndClsd_tmp = Rte_IRead_ChrgPlgLock_VD_Runnable_1ms_ChrgPlgPosn_st_Val();
        ChrgPlgLock_VD_B.flgLockPinByndClsd = (ChrgPlgLock_VD_B.flgLockPinByndClsd && (flgLockPinByndClsd_tmp == 0));
        ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = Mfx_Add_u16u16_u16(ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock, 1U);
        switch (ChrgPlgLock_VD_DW.is_State_UNLOCK) {
         case ChrgPlgLock_V_IN_State_Unlocked:
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          rtb_ChgrPlug_stPlgLockStMac = 2;

          /* During 'State_Unlocked': '<S3>:40' */
          if (flgLockPinByndClsd_tmp == 1) {
            /* Transition: '<S3>:29' */
            /* Transition: '<S3>:31' */
            /* Transition: '<S3>:130' */
            ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
            ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_ERROR;
            ChrgPlgLock_VD_DW.is_State_ERROR = Chrg_IN_State_No_Actuator_Error;
            ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_DesAct;

            /* Entry 'State_Error_DesAct': '<S3>:92' */
            ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
            rtb_ChgrPlug_stPlgLockStMac = 14;
          } else {
            if (rtb_DataTypeConversion == 2) {
              /* Transition: '<S3>:33' */
              ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgP_IN_State_Unlocked_WaitCmd;

              /* Entry 'State_Unlocked_WaitCmd': '<S3>:43' */
              ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 0;
              rtb_ChgrPlug_stPlgLockStMac = 3;
            }
          }
          break;

         case ChrgP_IN_State_Unlocked_WaitCmd:
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          rtb_ChgrPlug_stPlgLockStMac = 3;

          /* During 'State_Unlocked_WaitCmd': '<S3>:43' */
          if (flgLockPinByndClsd_tmp == 1) {
            /* Transition: '<S3>:32' */
            /* Transition: '<S3>:31' */
            /* Transition: '<S3>:130' */
            ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
            ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_ERROR;
            ChrgPlgLock_VD_DW.is_State_ERROR = Chrg_IN_State_No_Actuator_Error;
            ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_DesAct;

            /* Entry 'State_Error_DesAct': '<S3>:92' */
            ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
            rtb_ChgrPlug_stPlgLockStMac = 14;
          } else {
            if ((rtb_DataTypeConversion == 1) && (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockOff_C)) {
              /* Transition: '<S3>:20' */
              /* Transition: '<S3>:19' */
              ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = 0U;
              ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgPlgLock__IN_State_Unlocking;

              /* Entry 'State_Unlocking': '<S3>:35' */
              ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
              ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = Mfx_Add_u32s32_u8(ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn, 1);
              ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOpng_C;
              ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 1;
              rtb_ChgrPlug_stPlgLockStMac = 1;
            }
          }
          break;

         case ChrgPlgLock__IN_State_Unlocking:
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOpng_C;
          rtb_ChgrPlug_stPlgLockStMac = 1;

          /* During 'State_Unlocking': '<S3>:35' */
          if (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockOpng_C) {
            /* Transition: '<S3>:21' */
            ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
            if (flgLockPinByndClsd_tmp == 0) {
              /* Transition: '<S3>:24' */
              ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgPlgLock_V_IN_State_Unlocked;

              /* Entry 'State_Unlocked': '<S3>:40' */
              ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
              ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 0;
              rtb_ChgrPlug_stPlgLockStMac = 2;
            } else {
              /* Transition: '<S3>:22' */
              if (ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn >= Rte_CData_ChgrPlug_cntrTryOpng_C()) {
                /* Transition: '<S3>:23' */
                /* Transition: '<S3>:31' */
                /* Transition: '<S3>:130' */
                ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgPlgLock__IN_NO_ACTIVE_CHILD;
                ChrgPlgLock_VD_DW.is_c1_ChrgPlgLock_VD = ChrgPlgLock_VD_IN_State_ERROR;
                ChrgPlgLock_VD_DW.is_State_ERROR = Chrg_IN_State_No_Actuator_Error;
                ChrgPlgLock_VD_DW.is_State_No_Actuator_Error = ChrgPlgLo_IN_State_Error_DesAct;

                /* Entry 'State_Error_DesAct': '<S3>:92' */
                ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
                ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 9;
                rtb_ChgrPlug_stPlgLockStMac = 14;
              } else {
                /* Transition: '<S3>:17' */
                ChrgPlgLock_VD_DW.is_State_UNLOCK = IN_State_Unlocking_ReverseRun_p;

                /* Entry 'State_Unlocking_ReverseRun_Wait': '<S3>:36' */
                ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
                ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
                rtb_ChgrPlug_stPlgLockStMac = 4;
              }
            }
          }
          break;

         case IN_State_Unlocking_ReverseRun_l:
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockClsng_C;
          rtb_ChgrPlug_stPlgLockStMac = 1;

          /* During 'State_Unlocking_ReverseRun': '<S3>:212' */
          if (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockClsng_C) {
            /* Transition: '<S3>:217' */
            ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgPlg_IN_State_Unlocking_Wait;

            /* Entry 'State_Unlocking_Wait': '<S3>:216' */
            ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
            ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
            rtb_ChgrPlug_stPlgLockStMac = 4;
          }
          break;

         case IN_State_Unlocking_ReverseRun_p:
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          rtb_ChgrPlug_stPlgLockStMac = 4;

          /* During 'State_Unlocking_ReverseRun_Wait': '<S3>:36' */
          if (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockOff_C) {
            /* Transition: '<S3>:213' */
            ChrgPlgLock_VD_DW.is_State_UNLOCK = IN_State_Unlocking_ReverseRun_l;

            /* Entry 'State_Unlocking_ReverseRun': '<S3>:212' */
            ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockClsng_C;
            ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
            rtb_ChgrPlug_stPlgLockStMac = 1;
          }
          break;

         default:
          ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;
          rtb_ChgrPlug_stPlgLockStMac = 4;

          /* During 'State_Unlocking_Wait': '<S3>:216' */
          if (ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock > tmp_ChgrPlug_tiPlgLockOff_C) {
            /* Transition: '<S3>:16' */
            ChrgPlgLock_VD_DW.is_State_UNLOCK = ChrgPlgLock__IN_State_Unlocking;

            /* Entry 'State_Unlocking': '<S3>:35' */
            ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = 0U;
            ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn = Mfx_Add_u32s32_u8(ChrgPlgLock_VD_DW.ChgrPlug_cntrPlgLockActrActvn, 1);
            ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOpng_C;
            ChrgPlgLock_VD_B.ChgrPlug_stPlgLock = 1;
            rtb_ChgrPlug_stPlgLockStMac = 1;
          }
          break;
        }
      }
      break;
    }

    if (guard1) {
      rtb_ChgrPlug_stPlgLockStMac = 0;
      ChrgPlgLock_VD_B.IntlckChrgPlg_rActr = tmp_ChgrPlug_ratPlgLockOff_C;

      /* During 'State_PowerOn': '<S3>:138' */
      /* ******************************************************************** */
      ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock = Mfx_Add_u16u16_u16(ChrgPlgLock_VD_DW.ChgrPlug_tiPlgLock, 1U);
    }
  }

  /* End of Chart: '<S1>/Chart2' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant25'
   *  Constant: '<S1>/Constant27'
   *  RelationalOperator: '<S1>/RelationalOperator1'
   *  RelationalOperator: '<S1>/RelationalOperator2'
   *  Switch: '<S1>/Switch1'
   */
  if (ChrgPlgLock_VD_B.IntlckChrgPlg_rActr > 0) {
    tmp = 1U;
  } else if (ChrgPlgLock_VD_B.IntlckChrgPlg_rActr < 0) {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S1>/Constant26'
     */
    tmp = 2U;
  } else {
    tmp = 0U;
  }

  /* End of Switch: '<S1>/Switch' */

  /* SwitchCase: '<S1>/SwitchCase' */
  switch (tmp) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/Lock' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* FunctionCaller: '<S4>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S4>/Constant3'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ChrgPlgLockModCtrl, 1);

    /* End of Outputs for SubSystem: '<S1>/Lock' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Unlock' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* FunctionCaller: '<S10>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S10>/Constant3'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ChrgPlgLockModCtrl, 2);

    /* End of Outputs for SubSystem: '<S1>/Unlock' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S1>/Standby' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* FunctionCaller: '<S9>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S9>/Constant3'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_ChrgPlgLockModCtrl, 0);

    /* End of Outputs for SubSystem: '<S1>/Standby' */
    break;
  }

  /* End of SwitchCase: '<S1>/SwitchCase' */

  /* FunctionCaller: '<S1>/IoHwAb_IoDiagHbr_Hbr_Get' */
  Rte_Call_IoHwAb_IoDiagHbr_Hbr_Get(O_H_ChrgPlgLockModCtrl, &rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1);

  /* Logic: '<S1>/LogicalOperator' incorporates:
   *  Constant: '<S1>/Constant21'
   *  Inport: '<Root>/BattU_bVoltEnbPinDiag_Val'
   *  Inport: '<Root>/VehCoorn_stPwrMod_Val'
   *  RelationalOperator: '<S1>/Relational Operator'
   */
  rtb_LogicalOperator = (Rte_IRead_ChrgPlgLock_VD_Runnable_1ms_BattU_bVoltEnbPinDiag_Val() && (Rte_IRead_ChrgPlgLock_VD_Runnable_1ms_VehCoorn_stPwrMod_Val() != 0));

  /* If: '<S1>/If1' incorporates:
   *  Logic: '<S1>/LogicalOperator2'
   *  RelationalOperator: '<S1>/Relational Operator3'
   */
  if (rtb_LogicalOperator && (ChrgPlgLock_VD_B.IntlckChrgPlg_rActr == 0)) {
    /* Outputs for IfAction SubSystem: '<S1>/PlgLockOffDiagErr_Set' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* S-Function (Bfx_GetBit_sf): '<S11>/Bfx_GetBit_sf' incorporates:
     *  Constant: '<S6>/Constant'
     */
    rtb_Bfx_GetBit_sf_f = Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)0U));

    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Constant: '<S6>/Constant2'
     */
    if (rtb_Bfx_GetBit_sf_f) {
      tmp_0 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_0 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S6>/Switch' */

    /* FunctionCaller: '<S6>/DTC_IntlckChrgPlgHBrgOL1_SetEventStatus' */
    Rte_Call_DTC_IntlckChrgPlgHBrgOL1_SetEventStatus(tmp_0);

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant4'
     *  Constant: '<S6>/Constant5'
     */
    if (rtb_Bfx_GetBit_sf_f) {
      tmp_0 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_0 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* FunctionCaller: '<S6>/DTC_IntlckChrgPlgHBrgOL2_SetEventStatus' */
    Rte_Call_DTC_IntlckChrgPlgHBrgOL2_SetEventStatus(tmp_0);

    /* End of Outputs for SubSystem: '<S1>/PlgLockOffDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/PlgLockOffDiagErr_DeBounceReset' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* FunctionCaller: '<S5>/DTC_IntlckChrgPlgHBrgOL1_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S5>/Constant'
     */
    Rte_Call_DTC_IntlckChrgPlgHBrgOL1_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S5>/DTC_IntlckChrgPlgHBrgOL2_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S5>/Constant1'
     */
    Rte_Call_DTC_IntlckChrgPlgHBrgOL2_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S1>/PlgLockOffDiagErr_DeBounceReset' */
  }

  /* End of If: '<S1>/If1' */

  /* If: '<S1>/If' incorporates:
   *  Logic: '<S1>/LogicalOperator1'
   *  RelationalOperator: '<S1>/Relational Operator1'
   */
  if (rtb_LogicalOperator && (ChrgPlgLock_VD_B.IntlckChrgPlg_rActr != 0)) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/Constant'
     *  Constant: '<S8>/Constant1'
     *  Constant: '<S8>/Constant2'
     *  S-Function (Bfx_GetBit_sf): '<S12>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)2U))) {
      tmp_0 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_0 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S8>/Switch' */

    /* FunctionCaller: '<S8>/DTC_IntlckChrgPlgHBrgSCB1_SetEventStatus' */
    Rte_Call_DTC_IntlckChrgPlgHBrgSCB1_SetEventStatus(tmp_0);

    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/Constant3'
     *  Constant: '<S8>/Constant4'
     *  Constant: '<S8>/Constant5'
     *  S-Function (Bfx_GetBit_sf): '<S13>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)4U))) {
      tmp_0 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_0 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S8>/Switch1' */

    /* FunctionCaller: '<S8>/DTC_IntlckChrgPlgHBrgSCB2_SetEventStatus' */
    Rte_Call_DTC_IntlckChrgPlgHBrgSCB2_SetEventStatus(tmp_0);

    /* Switch: '<S8>/Switch2' incorporates:
     *  Constant: '<S8>/Constant6'
     *  Constant: '<S8>/Constant7'
     *  Constant: '<S8>/Constant8'
     *  S-Function (Bfx_GetBit_sf): '<S14>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)1U))) {
      tmp_0 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_0 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S8>/Switch2' */

    /* FunctionCaller: '<S8>/DTC_IntlckChrgPlgHBrgSCG1_SetEventStatus' */
    Rte_Call_DTC_IntlckChrgPlgHBrgSCG1_SetEventStatus(tmp_0);

    /* Switch: '<S8>/Switch3' incorporates:
     *  Constant: '<S8>/Constant10'
     *  Constant: '<S8>/Constant11'
     *  Constant: '<S8>/Constant9'
     *  S-Function (Bfx_GetBit_sf): '<S15>/Bfx_GetBit_sf'
     */
    if (Bfx_GetBit_u32u8_u8(rtb_IoHwAb_IoDiagHbr_Hbr_Get_o1, ((uint8)3U))) {
      tmp_0 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_0 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S8>/Switch3' */

    /* FunctionCaller: '<S8>/DTC_IntlckChrgPlgHBrgSCG2_SetEventStatus' */
    Rte_Call_DTC_IntlckChrgPlgHBrgSCG2_SetEventStatus(tmp_0);

    /* End of Outputs for SubSystem: '<S1>/PlgLockOnDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/PlgLockOnDiagErr_DeBounceReset' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* FunctionCaller: '<S7>/DTC_IntlckChrgPlgHBrgSCB1_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S7>/Constant'
     */
    Rte_Call_DTC_IntlckChrgPlgHBrgSCB1_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S7>/DTC_IntlckChrgPlgHBrgSCB2_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S7>/Constant1'
     */
    Rte_Call_DTC_IntlckChrgPlgHBrgSCB2_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S7>/DTC_IntlckChrgPlgHBrgSCG1_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S7>/Constant2'
     */
    Rte_Call_DTC_IntlckChrgPlgHBrgSCG1_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S7>/DTC_IntlckChrgPlgHBrgSCG2_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S7>/Constant3'
     */
    Rte_Call_DTC_IntlckChrgPlgHBrgSCG2_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S1>/PlgLockOnDiagErr_DeBounceReset' */
  }

  /* End of If: '<S1>/If' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgPlgLock_VD_Runnable_1ms_at_outport_1' */

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgPlgLock_VD_Runnable_1ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ChrgPlgLock_VD_Runnable_1ms_sys'
   */
  /* DataTypeConversion: '<S1>/DataTypeConversion1' */
  rtb_DataTypeConversion = ChrgPlgLock_VD_B.ChgrPlug_stPlgLock;
  if (ChrgPlgLock_VD_B.ChgrPlug_stPlgLock < 0) {
    rtb_DataTypeConversion = 0;
  } else {
    if (ChrgPlgLock_VD_B.ChgrPlug_stPlgLock > 255) {
      rtb_DataTypeConversion = 255;
    }
  }

  /* Outport: '<Root>/ChgrPlug_stPlgLock_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion1'
   */
  Rte_IWrite_ChrgPlgLock_VD_Runnable_1ms_ChgrPlug_stPlgLock_Val((uint8)rtb_DataTypeConversion);

  /* Outport: '<Root>/ChgrPlug_stPlgLockStMac_Val' incorporates:
   *  DataTypeConversion: '<S1>/DataTypeConversion2'
   */
  Rte_IWrite_ChrgPlgLock_VD_Runnable_1ms_ChgrPlug_stPlgLockStMac_Val((uint8)rtb_ChgrPlug_stPlgLockStMac);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ChrgPlgLock_VD_Runnable_1ms_at_outport_1' */

  /* Outport: '<Root>/IntlckChrgPlg_rActr_Val' */
  Rte_IWrite_ChrgPlgLock_VD_Runnable_1ms_IntlckChrgPlg_rActr_Val(ChrgPlgLock_VD_B.IntlckChrgPlg_rActr);

  /* Outport: '<Root>/IntlckChrgPlg_tiActr_Val' */
  Rte_IWrite_ChrgPlgLock_VD_Runnable_1ms_IntlckChrgPlg_tiActr_Val(Rte_CData_IntlckChrgPlg_tiActrPerd_C());
}

/* Model initialize function */
FUNC(void, ChrgPlgLock_VD_CODE) ChrgPlgLock_VD_Runnable_Init(void)
{
  {
    uint32 Constant19;
    Constant19 = Rte_CData_IntlckChrgPlg_tiActrPerd_C();

    /* SystemInitialize for Outport: '<Root>/IntlckChrgPlg_rActr_Val' */
    Rte_IWrite_ChrgPlgLock_VD_Runnable_Init_IntlckChrgPlg_rActr_Val(ChrgPlgLock_VD_B.IntlckChrgPlg_rActr);

    /* SystemInitialize for Outport: '<Root>/IntlckChrgPlg_tiActr_Val' */
    Rte_IWrite_ChrgPlgLock_VD_Runnable_Init_IntlckChrgPlg_tiActr_Val(Constant19);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
