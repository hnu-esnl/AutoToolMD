/*
 * File: KL15PwrSply_Ctrl.c
 *
 * Code generated for Simulink model 'KL15PwrSply_Ctrl'.
 *
 * Model version                  : 1.106
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Oct 12 23:48:19 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "KL15PwrSply_Ctrl.h"
#include "KL15PwrSply_Ctrl_private.h"

/* Named constants for Chart: '<S3>/LostComm' */
#define KL15PwrSply_Ctrl_IN_Normal     ((uint8)2U)
#define KL15PwrSply_Ctrl_IN_TimeingSt  ((uint8)3U)
#define KL15PwrSply_IN_LostCommDelayEnd ((uint8)1U)

/* Named constants for Chart: '<S3>/NetSleep' */
#define KL15PwrSply_Ctrl_IN_TimingSt   ((uint8)3U)
#define KL15PwrSply_IN_NetSleepDelayEnd ((uint8)1U)

/* Named constants for Chart: '<S3>/TimeMode' */
#define KL15PwrSply_Ctrl_IN_Normal_n   ((uint8)1U)
#define KL15PwrSply_Ctrl_IN_PwrSupOff  ((uint8)2U)

/* Exported block states */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming01;/* '<S1>/Data Store Memory' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming01;/* '<S1>/Data Store Memory1' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming04;/* '<S1>/Data Store Memory10' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming04;/* '<S1>/Data Store Memory11' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming05;/* '<S1>/Data Store Memory12' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming05;/* '<S1>/Data Store Memory13' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming05;/* '<S1>/Data Store Memory14' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming06;/* '<S1>/Data Store Memory15' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming06;/* '<S1>/Data Store Memory16' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming06;/* '<S1>/Data Store Memory17' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming07;/* '<S1>/Data Store Memory18' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming07;/* '<S1>/Data Store Memory19' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming01;/* '<S1>/Data Store Memory2' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming07;/* '<S1>/Data Store Memory20' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming10;/* '<S1>/Data Store Memory21' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming10;/* '<S1>/Data Store Memory22' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming10;/* '<S1>/Data Store Memory23' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming13;/* '<S1>/Data Store Memory24' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming13;/* '<S1>/Data Store Memory25' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming13;/* '<S1>/Data Store Memory26' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming16;/* '<S1>/Data Store Memory27' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming16;/* '<S1>/Data Store Memory28' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming16;/* '<S1>/Data Store Memory29' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming02;/* '<S1>/Data Store Memory3' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming19;/* '<S1>/Data Store Memory30' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming19;/* '<S1>/Data Store Memory31' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming19;/* '<S1>/Data Store Memory32' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming22;/* '<S1>/Data Store Memory33' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming22;/* '<S1>/Data Store Memory34' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming22;/* '<S1>/Data Store Memory35' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming25;/* '<S1>/Data Store Memory36' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming25;/* '<S1>/Data Store Memory37' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming25;/* '<S1>/Data Store Memory38' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming08;/* '<S1>/Data Store Memory39' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming02;/* '<S1>/Data Store Memory4' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming08;/* '<S1>/Data Store Memory40' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming08;/* '<S1>/Data Store Memory41' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming11;/* '<S1>/Data Store Memory42' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming11;/* '<S1>/Data Store Memory43' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming11;/* '<S1>/Data Store Memory44' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming14;/* '<S1>/Data Store Memory45' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming14;/* '<S1>/Data Store Memory46' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming14;/* '<S1>/Data Store Memory47' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming17;/* '<S1>/Data Store Memory48' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming17;/* '<S1>/Data Store Memory49' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming02;/* '<S1>/Data Store Memory5' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming17;/* '<S1>/Data Store Memory50' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming20;/* '<S1>/Data Store Memory51' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming20;/* '<S1>/Data Store Memory52' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming20;/* '<S1>/Data Store Memory53' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming23;/* '<S1>/Data Store Memory54' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming23;/* '<S1>/Data Store Memory55' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming23;/* '<S1>/Data Store Memory56' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming09;/* '<S1>/Data Store Memory57' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming09;/* '<S1>/Data Store Memory58' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming09;/* '<S1>/Data Store Memory59' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming03;/* '<S1>/Data Store Memory6' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming12;/* '<S1>/Data Store Memory60' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming12;/* '<S1>/Data Store Memory61' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming12;/* '<S1>/Data Store Memory62' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming15;/* '<S1>/Data Store Memory63' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming15;/* '<S1>/Data Store Memory64' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming15;/* '<S1>/Data Store Memory65' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming18;/* '<S1>/Data Store Memory66' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming18;/* '<S1>/Data Store Memory67' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming18;/* '<S1>/Data Store Memory68' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming21;/* '<S1>/Data Store Memory69' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming03;/* '<S1>/Data Store Memory7' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming21;/* '<S1>/Data Store Memory70' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming21;/* '<S1>/Data Store Memory71' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming24;/* '<S1>/Data Store Memory72' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming24;/* '<S1>/Data Store Memory73' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming24;/* '<S1>/Data Store Memory74' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming26;/* '<S1>/Data Store Memory75' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2601;/* '<S1>/Data Store Memory76' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming26;/* '<S1>/Data Store Memory77' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2602;/* '<S1>/Data Store Memory78' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming27;/* '<S1>/Data Store Memory79' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming03;/* '<S1>/Data Store Memory8' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2701;/* '<S1>/Data Store Memory80' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming27;/* '<S1>/Data Store Memory81' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2702;/* '<S1>/Data Store Memory82' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming28;/* '<S1>/Data Store Memory83' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2801;/* '<S1>/Data Store Memory84' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming28;/* '<S1>/Data Store Memory85' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2802;/* '<S1>/Data Store Memory86' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32LostCommTiming29;/* '<S1>/Data Store Memory87' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2901;/* '<S1>/Data Store Memory88' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming29;/* '<S1>/Data Store Memory89' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32TimeModeTiming04;/* '<S1>/Data Store Memory9' */
VAR(uint32, KL15PwrSply_Ctrl_VAR) PwrSply_u32NetSleepTiming2902;/* '<S1>/Data Store Memory90' */

/* Block signals (default storage) */
VAR(B_KL15PwrSply_Ctrl_T, KL15PwrSply_Ctrl_VAR) KL15PwrSply_Ctrl_B;

/* Block states (default storage) */
VAR(DW_KL15PwrSply_Ctrl_T, KL15PwrSply_Ctrl_VAR) KL15PwrSply_Ctrl_DW;

/* Model step function for TID1 */

/* SwAddrMethod CODE for Runnable */
#define KL15PwrSply_Ctrl_START_SEC_CODE
#include "KL15PwrSply_Ctrl_MemMap.h"

FUNC(void, KL15PwrSply_Ctrl_CODE) KL15PwrSply_Ctrl_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  const uint8 *tmpIRead;
  const uint8 *tmpIRead_0;
  const uint8 *tmpIRead_1;
  uint8 tmpIWrite[29];
  uint32 rtb_Product2;
  boolean rtb_RelationalOperator1;
  uint32 rtb_Product2_lt;
  uint32 rtb_Product2_bb;
  uint32 rtb_Product2_fo;
  uint32 rtb_Product2_m0;
  uint32 rtb_Product2_k;
  uint32 rtb_Product2_l;
  uint32 rtb_Product2_cr;
  uint32 rtb_Product2_g;
  uint32 rtb_Product2_o;
  uint32 rtb_Product2_pu;
  uint32 rtb_Product2_hl;
  uint32 rtb_Product2_ff;
  uint32 rtb_Product2_dg;
  uint32 rtb_Product2_h;
  uint32 rtb_Product2_lb;
  uint32 rtb_Product2_d;
  uint32 rtb_Product2_jv;
  uint32 rtb_Product2_f;
  uint32 rtb_Product2_c;
  uint32 rtb_Product2_a;
  uint32 rtb_Product2_hb;
  uint32 rtb_Product2_mt;
  uint32 rtb_Product2_j0;
  uint32 rtb_Product2_pp;
  uint32 rtb_Product2_pn;
  uint32 rtb_Product2_ku;
  uint32 rtb_Product2_ce;
  uint32 rtb_Product2_p;

  /* Inport: '<Root>/PwrSply_au8PwrSupTime_Val' */
  tmpIRead_1 = Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_au8PwrSupTime_Val();

  /* Inport: '<Root>/PwrSply_au8PwrSupTime_RcvCnt_Val' */
  tmpIRead_0 = Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_au8PwrSupTime_RcvCnt_Val();

  /* Inport: '<Root>/PwrSply_au8PwrSup_Val' */
  tmpIRead = Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_au8PwrSup_Val();

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_KL15PwrSply_Ctrl_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/KL15PwrSply_Ctrl_Runnable_10ms_sys'
   */
  /* Product: '<S26>/Product2' incorporates:
   *  Constant: '<S26>/Constant'
   *  Constant: '<S26>/Constant1'
   *  Constant: '<S26>/Constant2'
   *  Product: '<S26>/Product'
   *  Product: '<S26>/Product1'
   */
  rtb_Product2 = tmpIRead_1[0] * 5U * 60U * 100U;

  /* RelationalOperator: '<S26>/Relational Operator1' incorporates:
   *  UnitDelay: '<S26>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE != tmpIRead_0[0]);

  /* Chart: '<S26>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayKL15/TimeMode */
  /* During: PwrSplyDelayKL15/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c10_Ctrl_Library_f == 0U) {
    /* Entry: PwrSplyDelayKL15/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c10_Ctrl_Library_f = 1U;

    /* Entry Internal: PwrSplyDelayKL15/TimeMode */
    /* Transition: '<S103>:2' */
    KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S103>:1' */
    /* '<S103>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_o = tmpIRead[0];

    /* '<S103>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_p = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library_c) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S103>:1' */
      /* '<S103>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S103>:5:1' PwrSupReq==1&&... */
      /* '<S103>:5:1' ~CCULostComm; */
      if ((rtb_Product2 > 0U) && (tmpIRead[0] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S103>:5' */
        KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S103>:4' */
        /* '<S103>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_o = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S103>:11' */
      /* '<S103>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[0] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S103>:18' */
        KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S103>:4' */
        /* '<S103>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_o = 1U;
      } else {
        /* '<S103>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S103>:19:1' CCULostComm; */
        if ((rtb_Product2 == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S103>:19' */
          KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S103>:1' */
          /* '<S103>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_o = tmpIRead[0];

          /* '<S103>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_p = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S103>:4' */
      /* '<S103>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S103>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S103>:9' */
        KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S103>:1' */
        /* '<S103>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_o = tmpIRead[0];

        /* '<S103>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_p = 0U;
      } else {
        /* '<S103>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S103>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_p > rtb_Product2) || (tmpIRead[0] == 0)) {
          /* Transition: '<S103>:16' */
          KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S103>:11' */
          /* '<S103>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_o = 0U;

          /* '<S103>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_p = 0U;
        } else {
          /* '<S103>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_p = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_p, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S26>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write' */
  PwrSply_u32TimeModeTiming01 = KL15PwrSply_Ctrl_B.TimeModeTiming_p;

  /* Chart: '<S26>/LostComm' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayKL15/LostComm */
  /* During: PwrSplyDelayKL15/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c8_Ctrl_Library_c == 0U) {
    /* Entry: PwrSplyDelayKL15/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c8_Ctrl_Library_c = 1U;

    /* Entry Internal: PwrSplyDelayKL15/LostComm */
    /* Transition: '<S101>:5' */
    KL15PwrSply_Ctrl_DW.is_c8_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S101>:4' */
    /* '<S101>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_p = tmpIRead[0];

    /* '<S101>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_pw = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c8_Ctrl_Library_c) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S101>:12' */
      /* '<S101>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S101>:14' */
        KL15PwrSply_Ctrl_DW.is_c8_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S101>:4' */
        /* '<S101>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_p = tmpIRead[0];

        /* '<S101>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_pw = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S101>:4' */
      /* '<S101>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S101>:10:1' PwrSupReq==1; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[0] == 1)) {
        /* Transition: '<S101>:10' */
        KL15PwrSply_Ctrl_DW.is_c8_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S101>:7' */
        /* '<S101>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_p = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S101>:7' */
      /* '<S101>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S101>:11:1' PwrSupReq==0; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[0] == 0)) {
        /* Transition: '<S101>:11' */
        KL15PwrSply_Ctrl_DW.is_c8_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S101>:4' */
        /* '<S101>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_p = tmpIRead[0];

        /* '<S101>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_pw = 0U;
      } else {
        /* '<S101>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_pw > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S101>:13' */
          KL15PwrSply_Ctrl_DW.is_c8_Ctrl_Library_c = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S101>:12' */
          /* '<S101>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_p = 0U;

          /* '<S101>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_pw = 0U;
        } else {
          /* '<S101>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_pw = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_pw, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S26>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write1' */
  PwrSply_u32LostCommTiming01 = KL15PwrSply_Ctrl_B.LostCommTiming_pw;

  /* Chart: '<S4>/LostComm' incorporates:
   *  Constant: '<S1>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_ey == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_ey = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S35>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_lt = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S35>:4' */
    /* '<S35>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_mp = tmpIRead[3];

    /* '<S35>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_bn = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_lt) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S35>:12' */
      /* '<S35>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S35>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_lt = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S35>:4' */
        /* '<S35>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_mp = tmpIRead[3];

        /* '<S35>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_bn = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S35>:4' */
      /* '<S35>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S35>:10:1' PwrSupReq==1&&... */
      /* '<S35>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[3] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S35>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_lt = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S35>:7' */
        /* '<S35>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_mp = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S35>:7' */
      /* '<S35>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S35>:11:1' PwrSupReq==0||... */
      /* '<S35>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[3] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S35>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_lt = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S35>:4' */
        /* '<S35>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_mp = tmpIRead[3];

        /* '<S35>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_bn = 0U;
      } else {
        /* '<S35>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_bn > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S35>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_lt = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S35>:12' */
          /* '<S35>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_mp = 0U;

          /* '<S35>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_bn = 0U;
        } else {
          /* '<S35>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_bn = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_bn, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S4>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write10' */
  PwrSply_u32LostCommTiming04 = KL15PwrSply_Ctrl_B.LostCommTiming_bn;

  /* Chart: '<S4>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant5'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_ae == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_ae = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S36>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ma = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S36>:4' */
    /* '<S36>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_a5 = tmpIRead[3];

    /* '<S36>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_mk = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ma) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S36>:12' */
      /* '<S36>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S36>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ma = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S36>:4' */
        /* '<S36>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_a5 = tmpIRead[3];

        /* '<S36>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_mk = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S36>:4' */
      /* '<S36>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S36>:10:1' UsageModeSt==0&&... */
      /* '<S36>:10:1' PwrSupReq==1&&... */
      /* '<S36>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[3] == 1) && (KL15PwrSply_TiNetSleepDelay04 > 0U)) {
        /* Transition: '<S36>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ma = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S36>:8' */
        /* '<S36>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_a5 = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S36>:8' */
      /* '<S36>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_mk > KL15PwrSply_TiNetSleepDelay04) {
        /* Transition: '<S36>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ma = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S36>:12' */
        /* '<S36>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_a5 = 0U;

        /* '<S36>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_mk = 0U;
      } else {
        /* '<S36>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S36>:14:1' UsageModeSt~=0&&... */
        /* '<S36>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[3] == 0)) {
          /* Transition: '<S36>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ma = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S36>:4' */
          /* '<S36>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_a5 = tmpIRead[3];

          /* '<S36>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_mk = 0U;
        } else {
          /* '<S36>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_mk = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_mk, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S4>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write11' */
  PwrSply_u32NetSleepTiming04 = KL15PwrSply_Ctrl_B.NetSleepTiming_mk;

  /* Product: '<S7>/Product2' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/Constant2'
   *  Product: '<S7>/Product'
   *  Product: '<S7>/Product1'
   */
  rtb_Product2_lt = tmpIRead_1[6] * 5U * 60U * 100U;

  /* RelationalOperator: '<S7>/Relational Operator1' incorporates:
   *  UnitDelay: '<S7>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_j != tmpIRead_0[6]);

  /* Chart: '<S7>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_foo == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_foo = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S46>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_e = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S46>:1' */
    /* '<S46>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_mc = tmpIRead[6];

    /* '<S46>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_hi = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_e) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S46>:1' */
      /* '<S46>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S46>:5:1' PwrSupReq==1&&... */
      /* '<S46>:5:1' ~CCULostComm; */
      if ((rtb_Product2_lt > 0U) && (tmpIRead[6] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S46>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_e = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S46>:4' */
        /* '<S46>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_mc = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S46>:11' */
      /* '<S46>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[6] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S46>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_e = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S46>:4' */
        /* '<S46>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_mc = 1U;
      } else {
        /* '<S46>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S46>:19:1' CCULostComm; */
        if ((rtb_Product2_lt == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S46>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_e = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S46>:1' */
          /* '<S46>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_mc = tmpIRead[6];

          /* '<S46>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_hi = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S46>:4' */
      /* '<S46>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S46>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S46>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_e = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S46>:1' */
        /* '<S46>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_mc = tmpIRead[6];

        /* '<S46>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_hi = 0U;
      } else {
        /* '<S46>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S46>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_hi > rtb_Product2_lt) || (tmpIRead[6] == 0)) {
          /* Transition: '<S46>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_e = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S46>:11' */
          /* '<S46>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_mc = 0U;

          /* '<S46>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_hi = 0U;
        } else {
          /* '<S46>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_hi = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_hi, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S7>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write12' */
  PwrSply_u32TimeModeTiming07 = KL15PwrSply_Ctrl_B.TimeModeTiming_hi;

  /* Chart: '<S7>/LostComm' incorporates:
   *  Constant: '<S1>/Constant12'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_bn == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_bn = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S44>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S44>:4' */
    /* '<S44>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_nk = tmpIRead[6];

    /* '<S44>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_e3 = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_b) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S44>:12' */
      /* '<S44>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S44>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S44>:4' */
        /* '<S44>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_nk = tmpIRead[6];

        /* '<S44>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_e3 = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S44>:4' */
      /* '<S44>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S44>:10:1' PwrSupReq==1&&... */
      /* '<S44>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[6] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S44>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S44>:7' */
        /* '<S44>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_nk = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S44>:7' */
      /* '<S44>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S44>:11:1' PwrSupReq==0||... */
      /* '<S44>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[6] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S44>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S44>:4' */
        /* '<S44>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_nk = tmpIRead[6];

        /* '<S44>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_e3 = 0U;
      } else {
        /* '<S44>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_e3 > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S44>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_b = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S44>:12' */
          /* '<S44>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_nk = 0U;

          /* '<S44>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_e3 = 0U;
        } else {
          /* '<S44>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_e3 = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_e3, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S7>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write13' */
  PwrSply_u32LostCommTiming07 = KL15PwrSply_Ctrl_B.LostCommTiming_e3;

  /* Chart: '<S7>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant11'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_ec == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_ec = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S45>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_p = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S45>:4' */
    /* '<S45>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_d = tmpIRead[6];

    /* '<S45>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_k = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_p) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S45>:12' */
      /* '<S45>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S45>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_p = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S45>:4' */
        /* '<S45>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_d = tmpIRead[6];

        /* '<S45>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_k = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S45>:4' */
      /* '<S45>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S45>:10:1' UsageModeSt==0&&... */
      /* '<S45>:10:1' PwrSupReq==1&&... */
      /* '<S45>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[6] == 1) && (KL15PwrSply_TiNetSleepDelay07 > 0U)) {
        /* Transition: '<S45>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_p = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S45>:8' */
        /* '<S45>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_d = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S45>:8' */
      /* '<S45>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_k > KL15PwrSply_TiNetSleepDelay07) {
        /* Transition: '<S45>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_p = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S45>:12' */
        /* '<S45>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_d = 0U;

        /* '<S45>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_k = 0U;
      } else {
        /* '<S45>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S45>:14:1' UsageModeSt~=0&&... */
        /* '<S45>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[6] == 0)) {
          /* Transition: '<S45>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_p = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S45>:4' */
          /* '<S45>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_d = tmpIRead[6];

          /* '<S45>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_k = 0U;
        } else {
          /* '<S45>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_k = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_k, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S7>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write14' */
  PwrSply_u32NetSleepTiming07 = KL15PwrSply_Ctrl_B.NetSleepTiming_k;

  /* Product: '<S8>/Product2' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Constant: '<S8>/Constant2'
   *  Product: '<S8>/Product'
   *  Product: '<S8>/Product1'
   */
  rtb_Product2_bb = tmpIRead_1[7] * 5U * 60U * 100U;

  /* RelationalOperator: '<S8>/Relational Operator1' incorporates:
   *  UnitDelay: '<S8>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_n != tmpIRead_0[7]);

  /* Chart: '<S8>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_o5 == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_o5 = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S49>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S49>:1' */
    /* '<S49>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_hd = tmpIRead[7];

    /* '<S49>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_ab = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_l) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S49>:1' */
      /* '<S49>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S49>:5:1' PwrSupReq==1&&... */
      /* '<S49>:5:1' ~CCULostComm; */
      if ((rtb_Product2_bb > 0U) && (tmpIRead[7] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S49>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S49>:4' */
        /* '<S49>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_hd = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S49>:11' */
      /* '<S49>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[7] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S49>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S49>:4' */
        /* '<S49>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_hd = 1U;
      } else {
        /* '<S49>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S49>:19:1' CCULostComm; */
        if ((rtb_Product2_bb == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S49>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S49>:1' */
          /* '<S49>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_hd = tmpIRead[7];

          /* '<S49>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_ab = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S49>:4' */
      /* '<S49>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S49>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S49>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S49>:1' */
        /* '<S49>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_hd = tmpIRead[7];

        /* '<S49>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_ab = 0U;
      } else {
        /* '<S49>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S49>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_ab > rtb_Product2_bb) || (tmpIRead[7] == 0)) {
          /* Transition: '<S49>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S49>:11' */
          /* '<S49>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_hd = 0U;

          /* '<S49>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_ab = 0U;
        } else {
          /* '<S49>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_ab = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_ab, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S8>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write15' */
  PwrSply_u32TimeModeTiming08 = KL15PwrSply_Ctrl_B.TimeModeTiming_ab;

  /* Chart: '<S8>/LostComm' incorporates:
   *  Constant: '<S1>/Constant14'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_n == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_n = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S47>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S47>:4' */
    /* '<S47>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_c = tmpIRead[7];

    /* '<S47>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_io = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_j) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S47>:12' */
      /* '<S47>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S47>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S47>:4' */
        /* '<S47>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_c = tmpIRead[7];

        /* '<S47>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_io = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S47>:4' */
      /* '<S47>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S47>:10:1' PwrSupReq==1&&... */
      /* '<S47>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[7] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S47>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S47>:7' */
        /* '<S47>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_c = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S47>:7' */
      /* '<S47>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S47>:11:1' PwrSupReq==0||... */
      /* '<S47>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[7] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S47>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S47>:4' */
        /* '<S47>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_c = tmpIRead[7];

        /* '<S47>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_io = 0U;
      } else {
        /* '<S47>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_io > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S47>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_j = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S47>:12' */
          /* '<S47>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_c = 0U;

          /* '<S47>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_io = 0U;
        } else {
          /* '<S47>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_io = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_io, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S8>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write16' */
  PwrSply_u32LostCommTiming08 = KL15PwrSply_Ctrl_B.LostCommTiming_io;

  /* Chart: '<S8>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant13'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_fb == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_fb = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S48>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_hw = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S48>:4' */
    /* '<S48>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_nn = tmpIRead[7];

    /* '<S48>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_jo = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_hw) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S48>:12' */
      /* '<S48>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S48>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_hw = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S48>:4' */
        /* '<S48>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_nn = tmpIRead[7];

        /* '<S48>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_jo = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S48>:4' */
      /* '<S48>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S48>:10:1' UsageModeSt==0&&... */
      /* '<S48>:10:1' PwrSupReq==1&&... */
      /* '<S48>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[7] == 1) && (KL15PwrSply_TiNetSleepDelay08 > 0U)) {
        /* Transition: '<S48>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_hw = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S48>:8' */
        /* '<S48>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_nn = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S48>:8' */
      /* '<S48>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_jo > KL15PwrSply_TiNetSleepDelay08) {
        /* Transition: '<S48>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_hw = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S48>:12' */
        /* '<S48>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_nn = 0U;

        /* '<S48>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_jo = 0U;
      } else {
        /* '<S48>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S48>:14:1' UsageModeSt~=0&&... */
        /* '<S48>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[7] == 0)) {
          /* Transition: '<S48>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_hw = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S48>:4' */
          /* '<S48>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_nn = tmpIRead[7];

          /* '<S48>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_jo = 0U;
        } else {
          /* '<S48>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_jo = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_jo, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S8>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write17' */
  PwrSply_u32NetSleepTiming08 = KL15PwrSply_Ctrl_B.NetSleepTiming_jo;

  /* Product: '<S5>/Product2' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant2'
   *  Product: '<S5>/Product'
   *  Product: '<S5>/Product1'
   */
  rtb_Product2_fo = tmpIRead_1[4] * 5U * 60U * 100U;

  /* RelationalOperator: '<S5>/Relational Operator1' incorporates:
   *  UnitDelay: '<S5>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_c != tmpIRead_0[4]);

  /* Chart: '<S5>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_bs == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_bs = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S40>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c3 = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S40>:1' */
    /* '<S40>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_av = tmpIRead[4];

    /* '<S40>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_nx = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c3) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S40>:1' */
      /* '<S40>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S40>:5:1' PwrSupReq==1&&... */
      /* '<S40>:5:1' ~CCULostComm; */
      if ((rtb_Product2_fo > 0U) && (tmpIRead[4] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S40>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c3 = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S40>:4' */
        /* '<S40>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_av = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S40>:11' */
      /* '<S40>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[4] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S40>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c3 = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S40>:4' */
        /* '<S40>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_av = 1U;
      } else {
        /* '<S40>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S40>:19:1' CCULostComm; */
        if ((rtb_Product2_fo == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S40>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c3 = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S40>:1' */
          /* '<S40>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_av = tmpIRead[4];

          /* '<S40>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_nx = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S40>:4' */
      /* '<S40>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S40>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S40>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c3 = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S40>:1' */
        /* '<S40>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_av = tmpIRead[4];

        /* '<S40>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_nx = 0U;
      } else {
        /* '<S40>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S40>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_nx > rtb_Product2_fo) || (tmpIRead[4] == 0)) {
          /* Transition: '<S40>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c3 = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S40>:11' */
          /* '<S40>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_av = 0U;

          /* '<S40>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_nx = 0U;
        } else {
          /* '<S40>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_nx = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_nx, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S5>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write18' */
  PwrSply_u32TimeModeTiming05 = KL15PwrSply_Ctrl_B.TimeModeTiming_nx;

  /* Chart: '<S5>/LostComm' incorporates:
   *  Constant: '<S1>/Constant8'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_of == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_of = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S38>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ex = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S38>:4' */
    /* '<S38>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_m = tmpIRead[4];

    /* '<S38>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_oa = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ex) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S38>:12' */
      /* '<S38>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S38>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ex = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S38>:4' */
        /* '<S38>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_m = tmpIRead[4];

        /* '<S38>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_oa = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S38>:4' */
      /* '<S38>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S38>:10:1' PwrSupReq==1&&... */
      /* '<S38>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[4] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S38>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ex = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S38>:7' */
        /* '<S38>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_m = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S38>:7' */
      /* '<S38>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S38>:11:1' PwrSupReq==0||... */
      /* '<S38>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[4] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S38>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ex = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S38>:4' */
        /* '<S38>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_m = tmpIRead[4];

        /* '<S38>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_oa = 0U;
      } else {
        /* '<S38>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_oa > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S38>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ex = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S38>:12' */
          /* '<S38>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_m = 0U;

          /* '<S38>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_oa = 0U;
        } else {
          /* '<S38>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_oa = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_oa, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S5>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write19' */
  PwrSply_u32LostCommTiming05 = KL15PwrSply_Ctrl_B.LostCommTiming_oa;

  /* Chart: '<S26>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant62'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayKL15/NetSleep */
  /* During: PwrSplyDelayKL15/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c9_Ctrl_Library_i == 0U) {
    /* Entry: PwrSplyDelayKL15/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c9_Ctrl_Library_i = 1U;

    /* Entry Internal: PwrSplyDelayKL15/NetSleep */
    /* Transition: '<S102>:5' */
    KL15PwrSply_Ctrl_DW.is_c9_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S102>:4' */
    /* '<S102>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_j = tmpIRead[0];

    /* '<S102>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_a1 = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c9_Ctrl_Library_m) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S102>:12' */
      /* '<S102>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S102>:15' */
        KL15PwrSply_Ctrl_DW.is_c9_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S102>:4' */
        /* '<S102>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_j = tmpIRead[0];

        /* '<S102>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_a1 = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S102>:4' */
      /* '<S102>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S102>:10:1' UsageModeSt==0&&... */
      /* '<S102>:10:1' PwrSupReq==1&&... */
      /* '<S102>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[0] == 1) && (KL15PwrSply_TiNetSleepDelay01 > 0U)) {
        /* Transition: '<S102>:10' */
        KL15PwrSply_Ctrl_DW.is_c9_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S102>:8' */
        /* '<S102>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_j = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S102>:8' */
      /* '<S102>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_a1 > KL15PwrSply_TiNetSleepDelay01) {
        /* Transition: '<S102>:13' */
        KL15PwrSply_Ctrl_DW.is_c9_Ctrl_Library_m = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S102>:12' */
        /* '<S102>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_j = 0U;

        /* '<S102>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_a1 = 0U;
      } else {
        /* '<S102>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S102>:14:1' UsageModeSt~=0&&... */
        /* '<S102>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[0] == 0)) {
          /* Transition: '<S102>:14' */
          KL15PwrSply_Ctrl_DW.is_c9_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S102>:4' */
          /* '<S102>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_j = tmpIRead[0];

          /* '<S102>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_a1 = 0U;
        } else {
          /* '<S102>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_a1 = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_a1, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S26>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write2' */
  PwrSply_u32NetSleepTiming01 = KL15PwrSply_Ctrl_B.NetSleepTiming_a1;

  /* Chart: '<S5>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant7'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_oz == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_oz = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S39>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_jk = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S39>:4' */
    /* '<S39>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_h3 = tmpIRead[4];

    /* '<S39>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_h2 = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_jk) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S39>:12' */
      /* '<S39>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S39>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_jk = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S39>:4' */
        /* '<S39>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_h3 = tmpIRead[4];

        /* '<S39>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_h2 = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S39>:4' */
      /* '<S39>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S39>:10:1' UsageModeSt==0&&... */
      /* '<S39>:10:1' PwrSupReq==1&&... */
      /* '<S39>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[4] == 1) && (KL15PwrSply_TiNetSleepDelay05 > 0U)) {
        /* Transition: '<S39>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_jk = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S39>:8' */
        /* '<S39>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_h3 = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S39>:8' */
      /* '<S39>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_h2 > KL15PwrSply_TiNetSleepDelay05) {
        /* Transition: '<S39>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_jk = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S39>:12' */
        /* '<S39>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_h3 = 0U;

        /* '<S39>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_h2 = 0U;
      } else {
        /* '<S39>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S39>:14:1' UsageModeSt~=0&&... */
        /* '<S39>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[4] == 0)) {
          /* Transition: '<S39>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_jk = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S39>:4' */
          /* '<S39>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_h3 = tmpIRead[4];

          /* '<S39>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_h2 = 0U;
        } else {
          /* '<S39>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_h2 = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_h2, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S5>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write20' */
  PwrSply_u32NetSleepTiming05 = KL15PwrSply_Ctrl_B.NetSleepTiming_h2;

  /* Product: '<S6>/Product2' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant2'
   *  Product: '<S6>/Product'
   *  Product: '<S6>/Product1'
   */
  rtb_Product2_m0 = tmpIRead_1[5] * 5U * 60U * 100U;

  /* RelationalOperator: '<S6>/Relational Operator1' incorporates:
   *  UnitDelay: '<S6>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_g != tmpIRead_0[5]);

  /* Chart: '<S6>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_mn == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_mn = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S43>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kx = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S43>:1' */
    /* '<S43>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_f = tmpIRead[5];

    /* '<S43>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_il = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kx) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S43>:1' */
      /* '<S43>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S43>:5:1' PwrSupReq==1&&... */
      /* '<S43>:5:1' ~CCULostComm; */
      if ((rtb_Product2_m0 > 0U) && (tmpIRead[5] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S43>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kx = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S43>:4' */
        /* '<S43>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_f = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S43>:11' */
      /* '<S43>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[5] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S43>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kx = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S43>:4' */
        /* '<S43>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_f = 1U;
      } else {
        /* '<S43>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S43>:19:1' CCULostComm; */
        if ((rtb_Product2_m0 == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S43>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kx = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S43>:1' */
          /* '<S43>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_f = tmpIRead[5];

          /* '<S43>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_il = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S43>:4' */
      /* '<S43>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S43>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S43>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kx = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S43>:1' */
        /* '<S43>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_f = tmpIRead[5];

        /* '<S43>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_il = 0U;
      } else {
        /* '<S43>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S43>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_il > rtb_Product2_m0) || (tmpIRead[5] == 0)) {
          /* Transition: '<S43>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kx = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S43>:11' */
          /* '<S43>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_f = 0U;

          /* '<S43>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_il = 0U;
        } else {
          /* '<S43>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_il = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_il, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S6>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write21' */
  PwrSply_u32TimeModeTiming06 = KL15PwrSply_Ctrl_B.TimeModeTiming_il;

  /* Chart: '<S6>/LostComm' incorporates:
   *  Constant: '<S1>/Constant10'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_o == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_o = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S41>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_e5 = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S41>:4' */
    /* '<S41>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_hr = tmpIRead[5];

    /* '<S41>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_h = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_e5) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S41>:12' */
      /* '<S41>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S41>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_e5 = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S41>:4' */
        /* '<S41>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_hr = tmpIRead[5];

        /* '<S41>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_h = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S41>:4' */
      /* '<S41>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S41>:10:1' PwrSupReq==1&&... */
      /* '<S41>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[5] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S41>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_e5 = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S41>:7' */
        /* '<S41>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_hr = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S41>:7' */
      /* '<S41>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S41>:11:1' PwrSupReq==0||... */
      /* '<S41>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[5] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S41>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_e5 = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S41>:4' */
        /* '<S41>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_hr = tmpIRead[5];

        /* '<S41>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_h = 0U;
      } else {
        /* '<S41>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_h > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S41>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_e5 = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S41>:12' */
          /* '<S41>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_hr = 0U;

          /* '<S41>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_h = 0U;
        } else {
          /* '<S41>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_h = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_h, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S6>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write22' */
  PwrSply_u32LostCommTiming06 = KL15PwrSply_Ctrl_B.LostCommTiming_h;

  /* Chart: '<S6>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant9'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_d == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_d = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S42>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_jl = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S42>:4' */
    /* '<S42>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_md = tmpIRead[5];

    /* '<S42>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_ez = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_jl) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S42>:12' */
      /* '<S42>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S42>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_jl = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S42>:4' */
        /* '<S42>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_md = tmpIRead[5];

        /* '<S42>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_ez = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S42>:4' */
      /* '<S42>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S42>:10:1' UsageModeSt==0&&... */
      /* '<S42>:10:1' PwrSupReq==1&&... */
      /* '<S42>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[5] == 1) && (KL15PwrSply_TiNetSleepDelay06 > 0U)) {
        /* Transition: '<S42>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_jl = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S42>:8' */
        /* '<S42>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_md = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S42>:8' */
      /* '<S42>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_ez > KL15PwrSply_TiNetSleepDelay06) {
        /* Transition: '<S42>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_jl = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S42>:12' */
        /* '<S42>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_md = 0U;

        /* '<S42>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_ez = 0U;
      } else {
        /* '<S42>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S42>:14:1' UsageModeSt~=0&&... */
        /* '<S42>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[5] == 0)) {
          /* Transition: '<S42>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_jl = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S42>:4' */
          /* '<S42>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_md = tmpIRead[5];

          /* '<S42>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_ez = 0U;
        } else {
          /* '<S42>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_ez = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_ez, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S6>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write23' */
  PwrSply_u32NetSleepTiming06 = KL15PwrSply_Ctrl_B.NetSleepTiming_ez;

  /* Product: '<S9>/Product2' incorporates:
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant1'
   *  Constant: '<S9>/Constant2'
   *  Product: '<S9>/Product'
   *  Product: '<S9>/Product1'
   */
  rtb_Product2_k = tmpIRead_1[8] * 5U * 60U * 100U;

  /* RelationalOperator: '<S9>/Relational Operator1' incorporates:
   *  UnitDelay: '<S9>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_p != tmpIRead_0[8]);

  /* Chart: '<S9>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_l == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_l = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S52>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S52>:1' */
    /* '<S52>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_cj = tmpIRead[8];

    /* '<S52>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_pl = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_b) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S52>:1' */
      /* '<S52>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S52>:5:1' PwrSupReq==1&&... */
      /* '<S52>:5:1' ~CCULostComm; */
      if ((rtb_Product2_k > 0U) && (tmpIRead[8] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S52>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S52>:4' */
        /* '<S52>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_cj = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S52>:11' */
      /* '<S52>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[8] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S52>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S52>:4' */
        /* '<S52>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_cj = 1U;
      } else {
        /* '<S52>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S52>:19:1' CCULostComm; */
        if ((rtb_Product2_k == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S52>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S52>:1' */
          /* '<S52>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_cj = tmpIRead[8];

          /* '<S52>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_pl = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S52>:4' */
      /* '<S52>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S52>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S52>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S52>:1' */
        /* '<S52>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_cj = tmpIRead[8];

        /* '<S52>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_pl = 0U;
      } else {
        /* '<S52>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S52>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_pl > rtb_Product2_k) || (tmpIRead[8] == 0)) {
          /* Transition: '<S52>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S52>:11' */
          /* '<S52>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_cj = 0U;

          /* '<S52>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_pl = 0U;
        } else {
          /* '<S52>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_pl = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_pl, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S9>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write24' */
  PwrSply_u32TimeModeTiming09 = KL15PwrSply_Ctrl_B.TimeModeTiming_pl;

  /* Chart: '<S9>/LostComm' incorporates:
   *  Constant: '<S1>/Constant16'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_bq == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_bq = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S50>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ho = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S50>:4' */
    /* '<S50>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_d = tmpIRead[8];

    /* '<S50>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_fr = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ho) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S50>:12' */
      /* '<S50>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S50>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ho = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S50>:4' */
        /* '<S50>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_d = tmpIRead[8];

        /* '<S50>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_fr = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S50>:4' */
      /* '<S50>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S50>:10:1' PwrSupReq==1&&... */
      /* '<S50>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[8] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S50>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ho = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S50>:7' */
        /* '<S50>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_d = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S50>:7' */
      /* '<S50>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S50>:11:1' PwrSupReq==0||... */
      /* '<S50>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[8] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S50>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ho = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S50>:4' */
        /* '<S50>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_d = tmpIRead[8];

        /* '<S50>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_fr = 0U;
      } else {
        /* '<S50>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_fr > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S50>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ho = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S50>:12' */
          /* '<S50>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_d = 0U;

          /* '<S50>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_fr = 0U;
        } else {
          /* '<S50>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_fr = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_fr, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S9>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write25' */
  PwrSply_u32LostCommTiming09 = KL15PwrSply_Ctrl_B.LostCommTiming_fr;

  /* Chart: '<S9>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant15'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_i == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_i = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S51>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_cu = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S51>:4' */
    /* '<S51>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_p = tmpIRead[8];

    /* '<S51>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_o = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_cu) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S51>:12' */
      /* '<S51>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S51>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_cu = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S51>:4' */
        /* '<S51>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_p = tmpIRead[8];

        /* '<S51>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_o = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S51>:4' */
      /* '<S51>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S51>:10:1' UsageModeSt==0&&... */
      /* '<S51>:10:1' PwrSupReq==1&&... */
      /* '<S51>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[8] == 1) && (KL15PwrSply_TiNetSleepDelay09 > 0U)) {
        /* Transition: '<S51>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_cu = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S51>:8' */
        /* '<S51>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_p = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S51>:8' */
      /* '<S51>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_o > KL15PwrSply_TiNetSleepDelay09) {
        /* Transition: '<S51>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_cu = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S51>:12' */
        /* '<S51>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_p = 0U;

        /* '<S51>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_o = 0U;
      } else {
        /* '<S51>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S51>:14:1' UsageModeSt~=0&&... */
        /* '<S51>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[8] == 0)) {
          /* Transition: '<S51>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_cu = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S51>:4' */
          /* '<S51>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_p = tmpIRead[8];

          /* '<S51>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_o = 0U;
        } else {
          /* '<S51>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_o = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_o, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S9>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write26' */
  PwrSply_u32NetSleepTiming09 = KL15PwrSply_Ctrl_B.NetSleepTiming_o;

  /* Product: '<S10>/Product2' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S10>/Constant1'
   *  Constant: '<S10>/Constant2'
   *  Product: '<S10>/Product'
   *  Product: '<S10>/Product1'
   */
  rtb_Product2_l = tmpIRead_1[9] * 5U * 60U * 100U;

  /* RelationalOperator: '<S10>/Relational Operator1' incorporates:
   *  UnitDelay: '<S10>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_d != tmpIRead_0[9]);

  /* Chart: '<S10>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_ny == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_ny = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S55>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_dk = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S55>:1' */
    /* '<S55>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_cy = tmpIRead[9];

    /* '<S55>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_h = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_dk) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S55>:1' */
      /* '<S55>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S55>:5:1' PwrSupReq==1&&... */
      /* '<S55>:5:1' ~CCULostComm; */
      if ((rtb_Product2_l > 0U) && (tmpIRead[9] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S55>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_dk = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S55>:4' */
        /* '<S55>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_cy = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S55>:11' */
      /* '<S55>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[9] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S55>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_dk = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S55>:4' */
        /* '<S55>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_cy = 1U;
      } else {
        /* '<S55>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S55>:19:1' CCULostComm; */
        if ((rtb_Product2_l == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S55>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_dk = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S55>:1' */
          /* '<S55>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_cy = tmpIRead[9];

          /* '<S55>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_h = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S55>:4' */
      /* '<S55>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S55>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S55>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_dk = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S55>:1' */
        /* '<S55>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_cy = tmpIRead[9];

        /* '<S55>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_h = 0U;
      } else {
        /* '<S55>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S55>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_h > rtb_Product2_l) || (tmpIRead[9] == 0)) {
          /* Transition: '<S55>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_dk = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S55>:11' */
          /* '<S55>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_cy = 0U;

          /* '<S55>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_h = 0U;
        } else {
          /* '<S55>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_h = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_h, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S10>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write27' */
  PwrSply_u32TimeModeTiming10 = KL15PwrSply_Ctrl_B.TimeModeTiming_h;

  /* Chart: '<S10>/LostComm' incorporates:
   *  Constant: '<S1>/Constant18'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_c == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_c = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S53>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S53>:4' */
    /* '<S53>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_k = tmpIRead[9];

    /* '<S53>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_i = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_i) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S53>:12' */
      /* '<S53>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S53>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S53>:4' */
        /* '<S53>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_k = tmpIRead[9];

        /* '<S53>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_i = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S53>:4' */
      /* '<S53>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S53>:10:1' PwrSupReq==1&&... */
      /* '<S53>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[9] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S53>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S53>:7' */
        /* '<S53>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_k = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S53>:7' */
      /* '<S53>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S53>:11:1' PwrSupReq==0||... */
      /* '<S53>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[9] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S53>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S53>:4' */
        /* '<S53>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_k = tmpIRead[9];

        /* '<S53>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_i = 0U;
      } else {
        /* '<S53>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_i > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S53>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_i = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S53>:12' */
          /* '<S53>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_k = 0U;

          /* '<S53>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_i = 0U;
        } else {
          /* '<S53>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_i = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_i, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S10>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write28' */
  PwrSply_u32LostCommTiming10 = KL15PwrSply_Ctrl_B.LostCommTiming_i;

  /* Chart: '<S10>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant17'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_ef == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_ef = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S54>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S54>:4' */
    /* '<S54>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_km = tmpIRead[9];

    /* '<S54>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_iu = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_k) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S54>:12' */
      /* '<S54>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S54>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S54>:4' */
        /* '<S54>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_km = tmpIRead[9];

        /* '<S54>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_iu = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S54>:4' */
      /* '<S54>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S54>:10:1' UsageModeSt==0&&... */
      /* '<S54>:10:1' PwrSupReq==1&&... */
      /* '<S54>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[9] == 1) && (KL15PwrSply_TiNetSleepDelay10 > 0U)) {
        /* Transition: '<S54>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S54>:8' */
        /* '<S54>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_km = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S54>:8' */
      /* '<S54>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_iu > KL15PwrSply_TiNetSleepDelay10) {
        /* Transition: '<S54>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_k = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S54>:12' */
        /* '<S54>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_km = 0U;

        /* '<S54>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_iu = 0U;
      } else {
        /* '<S54>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S54>:14:1' UsageModeSt~=0&&... */
        /* '<S54>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[9] == 0)) {
          /* Transition: '<S54>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S54>:4' */
          /* '<S54>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_km = tmpIRead[9];

          /* '<S54>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_iu = 0U;
        } else {
          /* '<S54>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_iu = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_iu, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S10>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write29' */
  PwrSply_u32NetSleepTiming10 = KL15PwrSply_Ctrl_B.NetSleepTiming_iu;

  /* Product: '<S27>/Product2' incorporates:
   *  Constant: '<S27>/Constant'
   *  Constant: '<S27>/Constant1'
   *  Constant: '<S27>/Constant2'
   *  Product: '<S27>/Product'
   *  Product: '<S27>/Product1'
   */
  rtb_Product2_cr = tmpIRead_1[1] * 5U * 60U * 100U;

  /* RelationalOperator: '<S27>/Relational Operator1' incorporates:
   *  UnitDelay: '<S27>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_f != tmpIRead_0[1]);

  /* Chart: '<S27>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayKL15/TimeMode */
  /* During: PwrSplyDelayKL15/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c10_Ctrl_Library == 0U) {
    /* Entry: PwrSplyDelayKL15/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c10_Ctrl_Library = 1U;

    /* Entry Internal: PwrSplyDelayKL15/TimeMode */
    /* Transition: '<S106>:2' */
    KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S106>:1' */
    /* '<S106>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_c = tmpIRead[1];

    /* '<S106>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_k = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S106>:1' */
      /* '<S106>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S106>:5:1' PwrSupReq==1&&... */
      /* '<S106>:5:1' ~CCULostComm; */
      if ((rtb_Product2_cr > 0U) && (tmpIRead[1] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S106>:5' */
        KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S106>:4' */
        /* '<S106>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_c = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S106>:11' */
      /* '<S106>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[1] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S106>:18' */
        KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S106>:4' */
        /* '<S106>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_c = 1U;
      } else {
        /* '<S106>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S106>:19:1' CCULostComm; */
        if ((rtb_Product2_cr == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S106>:19' */
          KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S106>:1' */
          /* '<S106>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_c = tmpIRead[1];

          /* '<S106>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_k = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S106>:4' */
      /* '<S106>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S106>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S106>:9' */
        KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S106>:1' */
        /* '<S106>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_c = tmpIRead[1];

        /* '<S106>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_k = 0U;
      } else {
        /* '<S106>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S106>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_k > rtb_Product2_cr) || (tmpIRead[1] == 0)) {
          /* Transition: '<S106>:16' */
          KL15PwrSply_Ctrl_DW.is_c10_Ctrl_Library = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S106>:11' */
          /* '<S106>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_c = 0U;

          /* '<S106>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_k = 0U;
        } else {
          /* '<S106>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_k = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_k, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S27>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write3' */
  PwrSply_u32TimeModeTiming02 = KL15PwrSply_Ctrl_B.TimeModeTiming_k;

  /* Product: '<S11>/Product2' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   *  Constant: '<S11>/Constant2'
   *  Product: '<S11>/Product'
   *  Product: '<S11>/Product1'
   */
  rtb_Product2_g = tmpIRead_1[10] * 5U * 60U * 100U;

  /* RelationalOperator: '<S11>/Relational Operator1' incorporates:
   *  UnitDelay: '<S11>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_d2 != tmpIRead_0[10]);

  /* Chart: '<S11>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_n == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_n = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S58>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fr = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S58>:1' */
    /* '<S58>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_cc = tmpIRead[10];

    /* '<S58>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_d = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fr) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S58>:1' */
      /* '<S58>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S58>:5:1' PwrSupReq==1&&... */
      /* '<S58>:5:1' ~CCULostComm; */
      if ((rtb_Product2_g > 0U) && (tmpIRead[10] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S58>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fr = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S58>:4' */
        /* '<S58>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_cc = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S58>:11' */
      /* '<S58>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[10] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S58>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fr = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S58>:4' */
        /* '<S58>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_cc = 1U;
      } else {
        /* '<S58>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S58>:19:1' CCULostComm; */
        if ((rtb_Product2_g == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S58>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fr = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S58>:1' */
          /* '<S58>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_cc = tmpIRead[10];

          /* '<S58>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_d = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S58>:4' */
      /* '<S58>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S58>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S58>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fr = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S58>:1' */
        /* '<S58>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_cc = tmpIRead[10];

        /* '<S58>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_d = 0U;
      } else {
        /* '<S58>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S58>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_d > rtb_Product2_g) || (tmpIRead[10] == 0)) {
          /* Transition: '<S58>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fr = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S58>:11' */
          /* '<S58>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_cc = 0U;

          /* '<S58>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_d = 0U;
        } else {
          /* '<S58>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_d = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_d, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S11>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write30' */
  PwrSply_u32TimeModeTiming11 = KL15PwrSply_Ctrl_B.TimeModeTiming_d;

  /* Chart: '<S11>/LostComm' incorporates:
   *  Constant: '<S1>/Constant20'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_a == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_a = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S56>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_nh = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S56>:4' */
    /* '<S56>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_o = tmpIRead[10];

    /* '<S56>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_n = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_nh) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S56>:12' */
      /* '<S56>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S56>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_nh = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S56>:4' */
        /* '<S56>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_o = tmpIRead[10];

        /* '<S56>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_n = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S56>:4' */
      /* '<S56>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S56>:10:1' PwrSupReq==1&&... */
      /* '<S56>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[10] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S56>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_nh = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S56>:7' */
        /* '<S56>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_o = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S56>:7' */
      /* '<S56>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S56>:11:1' PwrSupReq==0||... */
      /* '<S56>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[10] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S56>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_nh = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S56>:4' */
        /* '<S56>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_o = tmpIRead[10];

        /* '<S56>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_n = 0U;
      } else {
        /* '<S56>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_n > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S56>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_nh = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S56>:12' */
          /* '<S56>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_o = 0U;

          /* '<S56>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_n = 0U;
        } else {
          /* '<S56>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_n = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_n, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S11>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write31' */
  PwrSply_u32LostCommTiming11 = KL15PwrSply_Ctrl_B.LostCommTiming_n;

  /* Chart: '<S11>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant19'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_jh == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_jh = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S57>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S57>:4' */
    /* '<S57>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_g = tmpIRead[10];

    /* '<S57>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_bh = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_l) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S57>:12' */
      /* '<S57>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S57>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S57>:4' */
        /* '<S57>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_g = tmpIRead[10];

        /* '<S57>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_bh = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S57>:4' */
      /* '<S57>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S57>:10:1' UsageModeSt==0&&... */
      /* '<S57>:10:1' PwrSupReq==1&&... */
      /* '<S57>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[10] == 1) && (KL15PwrSply_TiNetSleepDelay11 > 0U)) {
        /* Transition: '<S57>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S57>:8' */
        /* '<S57>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_g = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S57>:8' */
      /* '<S57>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_bh > KL15PwrSply_TiNetSleepDelay11) {
        /* Transition: '<S57>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_l = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S57>:12' */
        /* '<S57>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_g = 0U;

        /* '<S57>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_bh = 0U;
      } else {
        /* '<S57>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S57>:14:1' UsageModeSt~=0&&... */
        /* '<S57>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[10] == 0)) {
          /* Transition: '<S57>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S57>:4' */
          /* '<S57>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_g = tmpIRead[10];

          /* '<S57>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_bh = 0U;
        } else {
          /* '<S57>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_bh = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_bh, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S11>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write32' */
  PwrSply_u32NetSleepTiming11 = KL15PwrSply_Ctrl_B.NetSleepTiming_bh;

  /* Product: '<S12>/Product2' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S12>/Constant1'
   *  Constant: '<S12>/Constant2'
   *  Product: '<S12>/Product'
   *  Product: '<S12>/Product1'
   */
  rtb_Product2_o = tmpIRead_1[11] * 5U * 60U * 100U;

  /* RelationalOperator: '<S12>/Relational Operator1' incorporates:
   *  UnitDelay: '<S12>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_l != tmpIRead_0[11]);

  /* Chart: '<S12>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_d2 == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_d2 = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S61>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fy = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S61>:1' */
    /* '<S61>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_i3 = tmpIRead[11];

    /* '<S61>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_am = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fy) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S61>:1' */
      /* '<S61>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S61>:5:1' PwrSupReq==1&&... */
      /* '<S61>:5:1' ~CCULostComm; */
      if ((rtb_Product2_o > 0U) && (tmpIRead[11] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S61>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fy = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S61>:4' */
        /* '<S61>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_i3 = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S61>:11' */
      /* '<S61>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[11] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S61>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fy = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S61>:4' */
        /* '<S61>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_i3 = 1U;
      } else {
        /* '<S61>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S61>:19:1' CCULostComm; */
        if ((rtb_Product2_o == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S61>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fy = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S61>:1' */
          /* '<S61>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_i3 = tmpIRead[11];

          /* '<S61>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_am = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S61>:4' */
      /* '<S61>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S61>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S61>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fy = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S61>:1' */
        /* '<S61>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_i3 = tmpIRead[11];

        /* '<S61>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_am = 0U;
      } else {
        /* '<S61>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S61>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_am > rtb_Product2_o) || (tmpIRead[11] == 0)) {
          /* Transition: '<S61>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_fy = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S61>:11' */
          /* '<S61>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_i3 = 0U;

          /* '<S61>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_am = 0U;
        } else {
          /* '<S61>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_am = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_am, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S12>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write33' */
  PwrSply_u32TimeModeTiming12 = KL15PwrSply_Ctrl_B.TimeModeTiming_am;

  /* Chart: '<S12>/LostComm' incorporates:
   *  Constant: '<S1>/Constant22'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_jc == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_jc = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S59>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_kh = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S59>:4' */
    /* '<S59>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_jb = tmpIRead[11];

    /* '<S59>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_e = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_kh) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S59>:12' */
      /* '<S59>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S59>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_kh = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S59>:4' */
        /* '<S59>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_jb = tmpIRead[11];

        /* '<S59>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_e = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S59>:4' */
      /* '<S59>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S59>:10:1' PwrSupReq==1&&... */
      /* '<S59>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[11] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S59>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_kh = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S59>:7' */
        /* '<S59>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_jb = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S59>:7' */
      /* '<S59>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S59>:11:1' PwrSupReq==0||... */
      /* '<S59>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[11] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S59>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_kh = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S59>:4' */
        /* '<S59>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_jb = tmpIRead[11];

        /* '<S59>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_e = 0U;
      } else {
        /* '<S59>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_e > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S59>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_kh = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S59>:12' */
          /* '<S59>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_jb = 0U;

          /* '<S59>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_e = 0U;
        } else {
          /* '<S59>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_e = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_e, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S12>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write34' */
  PwrSply_u32LostCommTiming12 = KL15PwrSply_Ctrl_B.LostCommTiming_e;

  /* Chart: '<S12>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant21'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_o == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_o = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S60>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_n = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S60>:4' */
    /* '<S60>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_a = tmpIRead[11];

    /* '<S60>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_ji = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_n) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S60>:12' */
      /* '<S60>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S60>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_n = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S60>:4' */
        /* '<S60>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_a = tmpIRead[11];

        /* '<S60>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_ji = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S60>:4' */
      /* '<S60>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S60>:10:1' UsageModeSt==0&&... */
      /* '<S60>:10:1' PwrSupReq==1&&... */
      /* '<S60>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[11] == 1) && (KL15PwrSply_TiNetSleepDelay12 > 0U)) {
        /* Transition: '<S60>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_n = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S60>:8' */
        /* '<S60>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_a = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S60>:8' */
      /* '<S60>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_ji > KL15PwrSply_TiNetSleepDelay12) {
        /* Transition: '<S60>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_n = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S60>:12' */
        /* '<S60>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_a = 0U;

        /* '<S60>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_ji = 0U;
      } else {
        /* '<S60>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S60>:14:1' UsageModeSt~=0&&... */
        /* '<S60>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[11] == 0)) {
          /* Transition: '<S60>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_n = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S60>:4' */
          /* '<S60>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_a = tmpIRead[11];

          /* '<S60>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_ji = 0U;
        } else {
          /* '<S60>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_ji = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_ji, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S12>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write35' */
  PwrSply_u32NetSleepTiming12 = KL15PwrSply_Ctrl_B.NetSleepTiming_ji;

  /* Product: '<S13>/Product2' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S13>/Constant1'
   *  Constant: '<S13>/Constant2'
   *  Product: '<S13>/Product'
   *  Product: '<S13>/Product1'
   */
  rtb_Product2_pu = tmpIRead_1[12] * 5U * 60U * 100U;

  /* RelationalOperator: '<S13>/Relational Operator1' incorporates:
   *  UnitDelay: '<S13>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_e != tmpIRead_0[12]);

  /* Chart: '<S13>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_jh == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_jh = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S64>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_iu = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S64>:1' */
    /* '<S64>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_k = tmpIRead[12];

    /* '<S64>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_c = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_iu) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S64>:1' */
      /* '<S64>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S64>:5:1' PwrSupReq==1&&... */
      /* '<S64>:5:1' ~CCULostComm; */
      if ((rtb_Product2_pu > 0U) && (tmpIRead[12] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S64>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_iu = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S64>:4' */
        /* '<S64>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_k = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S64>:11' */
      /* '<S64>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[12] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S64>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_iu = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S64>:4' */
        /* '<S64>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_k = 1U;
      } else {
        /* '<S64>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S64>:19:1' CCULostComm; */
        if ((rtb_Product2_pu == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S64>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_iu = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S64>:1' */
          /* '<S64>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_k = tmpIRead[12];

          /* '<S64>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_c = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S64>:4' */
      /* '<S64>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S64>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S64>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_iu = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S64>:1' */
        /* '<S64>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_k = tmpIRead[12];

        /* '<S64>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_c = 0U;
      } else {
        /* '<S64>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S64>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_c > rtb_Product2_pu) || (tmpIRead[12] == 0)) {
          /* Transition: '<S64>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_iu = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S64>:11' */
          /* '<S64>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_k = 0U;

          /* '<S64>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_c = 0U;
        } else {
          /* '<S64>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_c = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_c, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S13>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write36' */
  PwrSply_u32TimeModeTiming13 = KL15PwrSply_Ctrl_B.TimeModeTiming_c;

  /* Chart: '<S13>/LostComm' incorporates:
   *  Constant: '<S1>/Constant24'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_m == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_m = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S62>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ey = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S62>:4' */
    /* '<S62>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_ie = tmpIRead[12];

    /* '<S62>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_bk = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ey) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S62>:12' */
      /* '<S62>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S62>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ey = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S62>:4' */
        /* '<S62>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_ie = tmpIRead[12];

        /* '<S62>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_bk = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S62>:4' */
      /* '<S62>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S62>:10:1' PwrSupReq==1&&... */
      /* '<S62>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[12] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S62>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ey = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S62>:7' */
        /* '<S62>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_ie = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S62>:7' */
      /* '<S62>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S62>:11:1' PwrSupReq==0||... */
      /* '<S62>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[12] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S62>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ey = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S62>:4' */
        /* '<S62>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_ie = tmpIRead[12];

        /* '<S62>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_bk = 0U;
      } else {
        /* '<S62>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_bk > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S62>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ey = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S62>:12' */
          /* '<S62>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_ie = 0U;

          /* '<S62>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_bk = 0U;
        } else {
          /* '<S62>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_bk = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_bk, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S13>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write37' */
  PwrSply_u32LostCommTiming13 = KL15PwrSply_Ctrl_B.LostCommTiming_bk;

  /* Chart: '<S13>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant23'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_k == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_k = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S63>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ch = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S63>:4' */
    /* '<S63>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_ke = tmpIRead[12];

    /* '<S63>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_m5 = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ch) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S63>:12' */
      /* '<S63>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S63>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ch = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S63>:4' */
        /* '<S63>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ke = tmpIRead[12];

        /* '<S63>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_m5 = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S63>:4' */
      /* '<S63>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S63>:10:1' UsageModeSt==0&&... */
      /* '<S63>:10:1' PwrSupReq==1&&... */
      /* '<S63>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[12] == 1) && (KL15PwrSply_TiNetSleepDelay13 > 0U)) {
        /* Transition: '<S63>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ch = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S63>:8' */
        /* '<S63>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ke = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S63>:8' */
      /* '<S63>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_m5 > KL15PwrSply_TiNetSleepDelay13) {
        /* Transition: '<S63>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ch = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S63>:12' */
        /* '<S63>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ke = 0U;

        /* '<S63>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_m5 = 0U;
      } else {
        /* '<S63>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S63>:14:1' UsageModeSt~=0&&... */
        /* '<S63>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[12] == 0)) {
          /* Transition: '<S63>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ch = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S63>:4' */
          /* '<S63>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_ke = tmpIRead[12];

          /* '<S63>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_m5 = 0U;
        } else {
          /* '<S63>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_m5 = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_m5, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S13>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write38' */
  PwrSply_u32NetSleepTiming13 = KL15PwrSply_Ctrl_B.NetSleepTiming_m5;

  /* Product: '<S14>/Product2' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant2'
   *  Product: '<S14>/Product'
   *  Product: '<S14>/Product1'
   */
  rtb_Product2_hl = tmpIRead_1[13] * 5U * 60U * 100U;

  /* RelationalOperator: '<S14>/Relational Operator1' incorporates:
   *  UnitDelay: '<S14>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_cr != tmpIRead_0[13]);

  /* Chart: '<S14>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_fo == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_fo = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S67>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S67>:1' */
    /* '<S67>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3 = tmpIRead[13];

    /* '<S67>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_mc = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_a) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S67>:1' */
      /* '<S67>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S67>:5:1' PwrSupReq==1&&... */
      /* '<S67>:5:1' ~CCULostComm; */
      if ((rtb_Product2_hl > 0U) && (tmpIRead[13] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S67>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S67>:4' */
        /* '<S67>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3 = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S67>:11' */
      /* '<S67>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[13] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S67>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S67>:4' */
        /* '<S67>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3 = 1U;
      } else {
        /* '<S67>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S67>:19:1' CCULostComm; */
        if ((rtb_Product2_hl == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S67>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S67>:1' */
          /* '<S67>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3 = tmpIRead[13];

          /* '<S67>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_mc = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S67>:4' */
      /* '<S67>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S67>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S67>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S67>:1' */
        /* '<S67>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3 = tmpIRead[13];

        /* '<S67>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_mc = 0U;
      } else {
        /* '<S67>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S67>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_mc > rtb_Product2_hl) || (tmpIRead[13] == 0)) {
          /* Transition: '<S67>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S67>:11' */
          /* '<S67>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3 = 0U;

          /* '<S67>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_mc = 0U;
        } else {
          /* '<S67>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_mc = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_mc, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S14>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write39' */
  PwrSply_u32TimeModeTiming14 = KL15PwrSply_Ctrl_B.TimeModeTiming_mc;

  /* Chart: '<S27>/LostComm' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayKL15/LostComm */
  /* During: PwrSplyDelayKL15/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c8_Ctrl_Library == 0U) {
    /* Entry: PwrSplyDelayKL15/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c8_Ctrl_Library = 1U;

    /* Entry Internal: PwrSplyDelayKL15/LostComm */
    /* Transition: '<S104>:5' */
    KL15PwrSply_Ctrl_DW.is_c8_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S104>:4' */
    /* '<S104>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_n = tmpIRead[1];

    /* '<S104>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_f = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c8_Ctrl_Library) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S104>:12' */
      /* '<S104>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S104>:14' */
        KL15PwrSply_Ctrl_DW.is_c8_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S104>:4' */
        /* '<S104>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_n = tmpIRead[1];

        /* '<S104>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_f = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S104>:4' */
      /* '<S104>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S104>:10:1' PwrSupReq==1; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[1] == 1)) {
        /* Transition: '<S104>:10' */
        KL15PwrSply_Ctrl_DW.is_c8_Ctrl_Library = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S104>:7' */
        /* '<S104>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_n = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S104>:7' */
      /* '<S104>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S104>:11:1' PwrSupReq==0; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[1] == 0)) {
        /* Transition: '<S104>:11' */
        KL15PwrSply_Ctrl_DW.is_c8_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S104>:4' */
        /* '<S104>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_n = tmpIRead[1];

        /* '<S104>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_f = 0U;
      } else {
        /* '<S104>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_f > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S104>:13' */
          KL15PwrSply_Ctrl_DW.is_c8_Ctrl_Library = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S104>:12' */
          /* '<S104>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_n = 0U;

          /* '<S104>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_f = 0U;
        } else {
          /* '<S104>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_f = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_f, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S27>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write4' */
  PwrSply_u32LostCommTiming02 = KL15PwrSply_Ctrl_B.LostCommTiming_f;

  /* Chart: '<S14>/LostComm' incorporates:
   *  Constant: '<S1>/Constant36'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_k == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_k = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S65>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S65>:4' */
    /* '<S65>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_ly = tmpIRead[13];

    /* '<S65>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_c = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_a) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S65>:12' */
      /* '<S65>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S65>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S65>:4' */
        /* '<S65>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_ly = tmpIRead[13];

        /* '<S65>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_c = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S65>:4' */
      /* '<S65>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S65>:10:1' PwrSupReq==1&&... */
      /* '<S65>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[13] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S65>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S65>:7' */
        /* '<S65>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_ly = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S65>:7' */
      /* '<S65>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S65>:11:1' PwrSupReq==0||... */
      /* '<S65>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[13] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S65>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S65>:4' */
        /* '<S65>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_ly = tmpIRead[13];

        /* '<S65>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_c = 0U;
      } else {
        /* '<S65>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_c > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S65>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_a = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S65>:12' */
          /* '<S65>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_ly = 0U;

          /* '<S65>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_c = 0U;
        } else {
          /* '<S65>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_c = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_c, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S14>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write40' */
  PwrSply_u32LostCommTiming14 = KL15PwrSply_Ctrl_B.LostCommTiming_c;

  /* Chart: '<S14>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant25'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_ff == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_ff = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S66>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S66>:4' */
    /* '<S66>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_ec = tmpIRead[13];

    /* '<S66>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_pt = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_i) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S66>:12' */
      /* '<S66>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S66>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S66>:4' */
        /* '<S66>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ec = tmpIRead[13];

        /* '<S66>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_pt = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S66>:4' */
      /* '<S66>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S66>:10:1' UsageModeSt==0&&... */
      /* '<S66>:10:1' PwrSupReq==1&&... */
      /* '<S66>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[13] == 1) && (KL15PwrSply_TiNetSleepDelay14 > 0U)) {
        /* Transition: '<S66>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S66>:8' */
        /* '<S66>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ec = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S66>:8' */
      /* '<S66>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_pt > KL15PwrSply_TiNetSleepDelay14) {
        /* Transition: '<S66>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_i = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S66>:12' */
        /* '<S66>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ec = 0U;

        /* '<S66>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_pt = 0U;
      } else {
        /* '<S66>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S66>:14:1' UsageModeSt~=0&&... */
        /* '<S66>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[13] == 0)) {
          /* Transition: '<S66>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S66>:4' */
          /* '<S66>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_ec = tmpIRead[13];

          /* '<S66>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_pt = 0U;
        } else {
          /* '<S66>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_pt = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_pt, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S14>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write41' */
  PwrSply_u32NetSleepTiming14 = KL15PwrSply_Ctrl_B.NetSleepTiming_pt;

  /* Product: '<S15>/Product2' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant1'
   *  Constant: '<S15>/Constant2'
   *  Product: '<S15>/Product'
   *  Product: '<S15>/Product1'
   */
  rtb_Product2_ff = tmpIRead_1[14] * 5U * 60U * 100U;

  /* RelationalOperator: '<S15>/Relational Operator1' incorporates:
   *  UnitDelay: '<S15>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_m != tmpIRead_0[14]);

  /* Chart: '<S15>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_bv == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_bv = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S70>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_ie = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S70>:1' */
    /* '<S70>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_n = tmpIRead[14];

    /* '<S70>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_af = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_ie) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S70>:1' */
      /* '<S70>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S70>:5:1' PwrSupReq==1&&... */
      /* '<S70>:5:1' ~CCULostComm; */
      if ((rtb_Product2_ff > 0U) && (tmpIRead[14] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S70>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_ie = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S70>:4' */
        /* '<S70>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_n = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S70>:11' */
      /* '<S70>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[14] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S70>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_ie = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S70>:4' */
        /* '<S70>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_n = 1U;
      } else {
        /* '<S70>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S70>:19:1' CCULostComm; */
        if ((rtb_Product2_ff == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S70>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_ie = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S70>:1' */
          /* '<S70>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_n = tmpIRead[14];

          /* '<S70>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_af = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S70>:4' */
      /* '<S70>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S70>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S70>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_ie = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S70>:1' */
        /* '<S70>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_n = tmpIRead[14];

        /* '<S70>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_af = 0U;
      } else {
        /* '<S70>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S70>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_af > rtb_Product2_ff) || (tmpIRead[14] == 0)) {
          /* Transition: '<S70>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_ie = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S70>:11' */
          /* '<S70>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_n = 0U;

          /* '<S70>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_af = 0U;
        } else {
          /* '<S70>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_af = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_af, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S15>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write42' */
  PwrSply_u32TimeModeTiming15 = KL15PwrSply_Ctrl_B.TimeModeTiming_af;

  /* Chart: '<S15>/LostComm' incorporates:
   *  Constant: '<S1>/Constant38'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_f == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_f = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S68>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S68>:4' */
    /* '<S68>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_h = tmpIRead[14];

    /* '<S68>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_g = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_f) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S68>:12' */
      /* '<S68>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S68>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S68>:4' */
        /* '<S68>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_h = tmpIRead[14];

        /* '<S68>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_g = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S68>:4' */
      /* '<S68>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S68>:10:1' PwrSupReq==1&&... */
      /* '<S68>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[14] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S68>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S68>:7' */
        /* '<S68>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_h = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S68>:7' */
      /* '<S68>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S68>:11:1' PwrSupReq==0||... */
      /* '<S68>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[14] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S68>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S68>:4' */
        /* '<S68>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_h = tmpIRead[14];

        /* '<S68>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_g = 0U;
      } else {
        /* '<S68>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_g > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S68>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_f = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S68>:12' */
          /* '<S68>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_h = 0U;

          /* '<S68>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_g = 0U;
        } else {
          /* '<S68>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_g = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_g, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S15>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write43' */
  PwrSply_u32LostCommTiming15 = KL15PwrSply_Ctrl_B.LostCommTiming_g;

  /* Chart: '<S15>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant37'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_j == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_j = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S69>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S69>:4' */
    /* '<S69>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_ej = tmpIRead[14];

    /* '<S69>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_j3 = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_d) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S69>:12' */
      /* '<S69>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S69>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S69>:4' */
        /* '<S69>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ej = tmpIRead[14];

        /* '<S69>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_j3 = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S69>:4' */
      /* '<S69>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S69>:10:1' UsageModeSt==0&&... */
      /* '<S69>:10:1' PwrSupReq==1&&... */
      /* '<S69>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[14] == 1) && (KL15PwrSply_TiNetSleepDelay15 > 0U)) {
        /* Transition: '<S69>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S69>:8' */
        /* '<S69>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ej = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S69>:8' */
      /* '<S69>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_j3 > KL15PwrSply_TiNetSleepDelay15) {
        /* Transition: '<S69>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_d = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S69>:12' */
        /* '<S69>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ej = 0U;

        /* '<S69>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_j3 = 0U;
      } else {
        /* '<S69>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S69>:14:1' UsageModeSt~=0&&... */
        /* '<S69>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[14] == 0)) {
          /* Transition: '<S69>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S69>:4' */
          /* '<S69>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_ej = tmpIRead[14];

          /* '<S69>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_j3 = 0U;
        } else {
          /* '<S69>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_j3 = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_j3, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S15>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write44' */
  PwrSply_u32NetSleepTiming15 = KL15PwrSply_Ctrl_B.NetSleepTiming_j3;

  /* Product: '<S16>/Product2' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S16>/Constant1'
   *  Constant: '<S16>/Constant2'
   *  Product: '<S16>/Product'
   *  Product: '<S16>/Product1'
   */
  rtb_Product2_dg = tmpIRead_1[15] * 5U * 60U * 100U;

  /* RelationalOperator: '<S16>/Relational Operator1' incorporates:
   *  UnitDelay: '<S16>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_h != tmpIRead_0[15]);

  /* Chart: '<S16>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_m == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_m = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S73>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S73>:1' */
    /* '<S73>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_j0 = tmpIRead[15];

    /* '<S73>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_n = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_i) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S73>:1' */
      /* '<S73>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S73>:5:1' PwrSupReq==1&&... */
      /* '<S73>:5:1' ~CCULostComm; */
      if ((rtb_Product2_dg > 0U) && (tmpIRead[15] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S73>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S73>:4' */
        /* '<S73>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_j0 = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S73>:11' */
      /* '<S73>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[15] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S73>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S73>:4' */
        /* '<S73>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_j0 = 1U;
      } else {
        /* '<S73>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S73>:19:1' CCULostComm; */
        if ((rtb_Product2_dg == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S73>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S73>:1' */
          /* '<S73>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_j0 = tmpIRead[15];

          /* '<S73>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_n = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S73>:4' */
      /* '<S73>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S73>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S73>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S73>:1' */
        /* '<S73>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_j0 = tmpIRead[15];

        /* '<S73>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_n = 0U;
      } else {
        /* '<S73>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S73>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_n > rtb_Product2_dg) || (tmpIRead[15] == 0)) {
          /* Transition: '<S73>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_i = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S73>:11' */
          /* '<S73>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_j0 = 0U;

          /* '<S73>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_n = 0U;
        } else {
          /* '<S73>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_n = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_n, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S16>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write45' */
  PwrSply_u32TimeModeTiming16 = KL15PwrSply_Ctrl_B.TimeModeTiming_n;

  /* Chart: '<S16>/LostComm' incorporates:
   *  Constant: '<S1>/Constant40'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_j == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_j = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S71>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_hm = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S71>:4' */
    /* '<S71>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_e = tmpIRead[15];

    /* '<S71>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_ov = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_hm) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S71>:12' */
      /* '<S71>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S71>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_hm = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S71>:4' */
        /* '<S71>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_e = tmpIRead[15];

        /* '<S71>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_ov = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S71>:4' */
      /* '<S71>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S71>:10:1' PwrSupReq==1&&... */
      /* '<S71>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[15] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S71>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_hm = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S71>:7' */
        /* '<S71>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_e = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S71>:7' */
      /* '<S71>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S71>:11:1' PwrSupReq==0||... */
      /* '<S71>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[15] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S71>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_hm = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S71>:4' */
        /* '<S71>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_e = tmpIRead[15];

        /* '<S71>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_ov = 0U;
      } else {
        /* '<S71>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_ov > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S71>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_hm = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S71>:12' */
          /* '<S71>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_e = 0U;

          /* '<S71>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_ov = 0U;
        } else {
          /* '<S71>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_ov = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_ov, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S16>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write46' */
  PwrSply_u32LostCommTiming16 = KL15PwrSply_Ctrl_B.LostCommTiming_ov;

  /* Chart: '<S16>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant39'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_pk == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_pk = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S72>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S72>:4' */
    /* '<S72>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_my = tmpIRead[15];

    /* '<S72>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_lf = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_c) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S72>:12' */
      /* '<S72>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S72>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S72>:4' */
        /* '<S72>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_my = tmpIRead[15];

        /* '<S72>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_lf = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S72>:4' */
      /* '<S72>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S72>:10:1' UsageModeSt==0&&... */
      /* '<S72>:10:1' PwrSupReq==1&&... */
      /* '<S72>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[15] == 1) && (KL15PwrSply_TiNetSleepDelay16 > 0U)) {
        /* Transition: '<S72>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S72>:8' */
        /* '<S72>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_my = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S72>:8' */
      /* '<S72>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_lf > KL15PwrSply_TiNetSleepDelay16) {
        /* Transition: '<S72>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_c = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S72>:12' */
        /* '<S72>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_my = 0U;

        /* '<S72>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_lf = 0U;
      } else {
        /* '<S72>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S72>:14:1' UsageModeSt~=0&&... */
        /* '<S72>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[15] == 0)) {
          /* Transition: '<S72>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S72>:4' */
          /* '<S72>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_my = tmpIRead[15];

          /* '<S72>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_lf = 0U;
        } else {
          /* '<S72>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_lf = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_lf, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S16>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write47' */
  PwrSply_u32NetSleepTiming16 = KL15PwrSply_Ctrl_B.NetSleepTiming_lf;

  /* Product: '<S17>/Product2' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S17>/Constant1'
   *  Constant: '<S17>/Constant2'
   *  Product: '<S17>/Product'
   *  Product: '<S17>/Product1'
   */
  rtb_Product2_h = tmpIRead_1[16] * 5U * 60U * 100U;

  /* RelationalOperator: '<S17>/Relational Operator1' incorporates:
   *  UnitDelay: '<S17>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_m4 != tmpIRead_0[16]);

  /* Chart: '<S17>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_o == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_o = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S76>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_p = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S76>:1' */
    /* '<S76>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_dw = tmpIRead[16];

    /* '<S76>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_at = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_p) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S76>:1' */
      /* '<S76>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S76>:5:1' PwrSupReq==1&&... */
      /* '<S76>:5:1' ~CCULostComm; */
      if ((rtb_Product2_h > 0U) && (tmpIRead[16] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S76>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_p = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S76>:4' */
        /* '<S76>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_dw = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S76>:11' */
      /* '<S76>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[16] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S76>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_p = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S76>:4' */
        /* '<S76>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_dw = 1U;
      } else {
        /* '<S76>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S76>:19:1' CCULostComm; */
        if ((rtb_Product2_h == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S76>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_p = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S76>:1' */
          /* '<S76>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_dw = tmpIRead[16];

          /* '<S76>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_at = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S76>:4' */
      /* '<S76>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S76>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S76>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_p = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S76>:1' */
        /* '<S76>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_dw = tmpIRead[16];

        /* '<S76>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_at = 0U;
      } else {
        /* '<S76>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S76>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_at > rtb_Product2_h) || (tmpIRead[16] == 0)) {
          /* Transition: '<S76>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_p = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S76>:11' */
          /* '<S76>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_dw = 0U;

          /* '<S76>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_at = 0U;
        } else {
          /* '<S76>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_at = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_at, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S17>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write48' */
  PwrSply_u32TimeModeTiming17 = KL15PwrSply_Ctrl_B.TimeModeTiming_at;

  /* Chart: '<S17>/LostComm' incorporates:
   *  Constant: '<S1>/Constant42'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_h == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_h = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S74>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S74>:4' */
    /* '<S74>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_fs = tmpIRead[16];

    /* '<S74>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_am = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_g) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S74>:12' */
      /* '<S74>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S74>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S74>:4' */
        /* '<S74>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_fs = tmpIRead[16];

        /* '<S74>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_am = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S74>:4' */
      /* '<S74>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S74>:10:1' PwrSupReq==1&&... */
      /* '<S74>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[16] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S74>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S74>:7' */
        /* '<S74>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_fs = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S74>:7' */
      /* '<S74>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S74>:11:1' PwrSupReq==0||... */
      /* '<S74>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[16] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S74>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S74>:4' */
        /* '<S74>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_fs = tmpIRead[16];

        /* '<S74>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_am = 0U;
      } else {
        /* '<S74>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_am > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S74>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_g = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S74>:12' */
          /* '<S74>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_fs = 0U;

          /* '<S74>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_am = 0U;
        } else {
          /* '<S74>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_am = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_am, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S17>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write49' */
  PwrSply_u32LostCommTiming17 = KL15PwrSply_Ctrl_B.LostCommTiming_am;

  /* Chart: '<S27>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayKL15/NetSleep */
  /* During: PwrSplyDelayKL15/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c9_Ctrl_Library == 0U) {
    /* Entry: PwrSplyDelayKL15/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c9_Ctrl_Library = 1U;

    /* Entry Internal: PwrSplyDelayKL15/NetSleep */
    /* Transition: '<S105>:5' */
    KL15PwrSply_Ctrl_DW.is_c9_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S105>:4' */
    /* '<S105>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_n = tmpIRead[1];

    /* '<S105>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_p = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c9_Ctrl_Library) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S105>:12' */
      /* '<S105>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S105>:15' */
        KL15PwrSply_Ctrl_DW.is_c9_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S105>:4' */
        /* '<S105>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_n = tmpIRead[1];

        /* '<S105>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_p = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S105>:4' */
      /* '<S105>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S105>:10:1' UsageModeSt==0&&... */
      /* '<S105>:10:1' PwrSupReq==1&&... */
      /* '<S105>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[1] == 1) && (KL15PwrSply_TiNetSleepDelay02 > 0U)) {
        /* Transition: '<S105>:10' */
        KL15PwrSply_Ctrl_DW.is_c9_Ctrl_Library = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S105>:8' */
        /* '<S105>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_n = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S105>:8' */
      /* '<S105>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_p > KL15PwrSply_TiNetSleepDelay02) {
        /* Transition: '<S105>:13' */
        KL15PwrSply_Ctrl_DW.is_c9_Ctrl_Library = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S105>:12' */
        /* '<S105>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_n = 0U;

        /* '<S105>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_p = 0U;
      } else {
        /* '<S105>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S105>:14:1' UsageModeSt~=0&&... */
        /* '<S105>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[1] == 0)) {
          /* Transition: '<S105>:14' */
          KL15PwrSply_Ctrl_DW.is_c9_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S105>:4' */
          /* '<S105>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_n = tmpIRead[1];

          /* '<S105>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_p = 0U;
        } else {
          /* '<S105>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_p = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_p, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S27>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write5' */
  PwrSply_u32NetSleepTiming02 = KL15PwrSply_Ctrl_B.NetSleepTiming_p;

  /* Chart: '<S17>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant41'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_fx == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_fx = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S75>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_h = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S75>:4' */
    /* '<S75>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_ib = tmpIRead[16];

    /* '<S75>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_h = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_h) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S75>:12' */
      /* '<S75>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S75>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_h = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S75>:4' */
        /* '<S75>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ib = tmpIRead[16];

        /* '<S75>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_h = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S75>:4' */
      /* '<S75>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S75>:10:1' UsageModeSt==0&&... */
      /* '<S75>:10:1' PwrSupReq==1&&... */
      /* '<S75>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[16] == 1) && (KL15PwrSply_TiNetSleepDelay17 > 0U)) {
        /* Transition: '<S75>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_h = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S75>:8' */
        /* '<S75>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ib = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S75>:8' */
      /* '<S75>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_h > KL15PwrSply_TiNetSleepDelay17) {
        /* Transition: '<S75>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_h = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S75>:12' */
        /* '<S75>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ib = 0U;

        /* '<S75>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_h = 0U;
      } else {
        /* '<S75>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S75>:14:1' UsageModeSt~=0&&... */
        /* '<S75>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[16] == 0)) {
          /* Transition: '<S75>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_h = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S75>:4' */
          /* '<S75>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_ib = tmpIRead[16];

          /* '<S75>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_h = 0U;
        } else {
          /* '<S75>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_h = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_h, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S17>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write50' */
  PwrSply_u32NetSleepTiming17 = KL15PwrSply_Ctrl_B.NetSleepTiming_h;

  /* Product: '<S18>/Product2' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S18>/Constant1'
   *  Constant: '<S18>/Constant2'
   *  Product: '<S18>/Product'
   *  Product: '<S18>/Product1'
   */
  rtb_Product2_lb = tmpIRead_1[17] * 5U * 60U * 100U;

  /* RelationalOperator: '<S18>/Relational Operator1' incorporates:
   *  UnitDelay: '<S18>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_b != tmpIRead_0[17]);

  /* Chart: '<S18>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_d == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_d = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S79>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S79>:1' */
    /* '<S79>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_hj = tmpIRead[17];

    /* '<S79>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_b = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_f) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S79>:1' */
      /* '<S79>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S79>:5:1' PwrSupReq==1&&... */
      /* '<S79>:5:1' ~CCULostComm; */
      if ((rtb_Product2_lb > 0U) && (tmpIRead[17] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S79>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S79>:4' */
        /* '<S79>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_hj = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S79>:11' */
      /* '<S79>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[17] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S79>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S79>:4' */
        /* '<S79>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_hj = 1U;
      } else {
        /* '<S79>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S79>:19:1' CCULostComm; */
        if ((rtb_Product2_lb == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S79>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S79>:1' */
          /* '<S79>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_hj = tmpIRead[17];

          /* '<S79>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_b = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S79>:4' */
      /* '<S79>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S79>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S79>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S79>:1' */
        /* '<S79>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_hj = tmpIRead[17];

        /* '<S79>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_b = 0U;
      } else {
        /* '<S79>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S79>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_b > rtb_Product2_lb) || (tmpIRead[17] == 0)) {
          /* Transition: '<S79>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S79>:11' */
          /* '<S79>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_hj = 0U;

          /* '<S79>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_b = 0U;
        } else {
          /* '<S79>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_b = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_b, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S18>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write51' */
  PwrSply_u32TimeModeTiming18 = KL15PwrSply_Ctrl_B.TimeModeTiming_b;

  /* Chart: '<S18>/LostComm' incorporates:
   *  Constant: '<S1>/Constant26'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_dk == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_dk = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S77>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_e = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S77>:4' */
    /* '<S77>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_a = tmpIRead[17];

    /* '<S77>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_pv = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_e) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S77>:12' */
      /* '<S77>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S77>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_e = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S77>:4' */
        /* '<S77>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_a = tmpIRead[17];

        /* '<S77>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_pv = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S77>:4' */
      /* '<S77>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S77>:10:1' PwrSupReq==1&&... */
      /* '<S77>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[17] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S77>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_e = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S77>:7' */
        /* '<S77>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_a = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S77>:7' */
      /* '<S77>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S77>:11:1' PwrSupReq==0||... */
      /* '<S77>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[17] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S77>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_e = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S77>:4' */
        /* '<S77>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_a = tmpIRead[17];

        /* '<S77>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_pv = 0U;
      } else {
        /* '<S77>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_pv > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S77>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_e = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S77>:12' */
          /* '<S77>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_a = 0U;

          /* '<S77>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_pv = 0U;
        } else {
          /* '<S77>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_pv = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_pv, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S18>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write52' */
  PwrSply_u32LostCommTiming18 = KL15PwrSply_Ctrl_B.LostCommTiming_pv;

  /* Chart: '<S18>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant43'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_a == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_a = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S78>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S78>:4' */
    /* '<S78>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_ok = tmpIRead[17];

    /* '<S78>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_ib = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_f) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S78>:12' */
      /* '<S78>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S78>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S78>:4' */
        /* '<S78>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ok = tmpIRead[17];

        /* '<S78>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_ib = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S78>:4' */
      /* '<S78>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S78>:10:1' UsageModeSt==0&&... */
      /* '<S78>:10:1' PwrSupReq==1&&... */
      /* '<S78>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[17] == 1) && (KL15PwrSply_TiNetSleepDelay18 > 0U)) {
        /* Transition: '<S78>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S78>:8' */
        /* '<S78>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ok = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S78>:8' */
      /* '<S78>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_ib > KL15PwrSply_TiNetSleepDelay18) {
        /* Transition: '<S78>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_f = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S78>:12' */
        /* '<S78>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ok = 0U;

        /* '<S78>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_ib = 0U;
      } else {
        /* '<S78>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S78>:14:1' UsageModeSt~=0&&... */
        /* '<S78>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[17] == 0)) {
          /* Transition: '<S78>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_f = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S78>:4' */
          /* '<S78>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_ok = tmpIRead[17];

          /* '<S78>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_ib = 0U;
        } else {
          /* '<S78>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_ib = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_ib, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S18>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write53' */
  PwrSply_u32NetSleepTiming18 = KL15PwrSply_Ctrl_B.NetSleepTiming_ib;

  /* Product: '<S19>/Product2' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S19>/Constant1'
   *  Constant: '<S19>/Constant2'
   *  Product: '<S19>/Product'
   *  Product: '<S19>/Product1'
   */
  rtb_Product2_d = tmpIRead_1[18] * 5U * 60U * 100U;

  /* RelationalOperator: '<S19>/Relational Operator1' incorporates:
   *  UnitDelay: '<S19>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_a != tmpIRead_0[18]);

  /* Chart: '<S19>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_b == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_b = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S82>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S82>:1' */
    /* '<S82>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_ib = tmpIRead[18];

    /* '<S82>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_i = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S82>:1' */
      /* '<S82>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S82>:5:1' PwrSupReq==1&&... */
      /* '<S82>:5:1' ~CCULostComm; */
      if ((rtb_Product2_d > 0U) && (tmpIRead[18] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S82>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S82>:4' */
        /* '<S82>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_ib = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S82>:11' */
      /* '<S82>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[18] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S82>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S82>:4' */
        /* '<S82>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_ib = 1U;
      } else {
        /* '<S82>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S82>:19:1' CCULostComm; */
        if ((rtb_Product2_d == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S82>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S82>:1' */
          /* '<S82>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_ib = tmpIRead[18];

          /* '<S82>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_i = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S82>:4' */
      /* '<S82>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S82>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S82>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S82>:1' */
        /* '<S82>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_ib = tmpIRead[18];

        /* '<S82>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_i = 0U;
      } else {
        /* '<S82>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S82>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_i > rtb_Product2_d) || (tmpIRead[18] == 0)) {
          /* Transition: '<S82>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_c = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S82>:11' */
          /* '<S82>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_ib = 0U;

          /* '<S82>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_i = 0U;
        } else {
          /* '<S82>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_i = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_i, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S19>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write54' */
  PwrSply_u32TimeModeTiming19 = KL15PwrSply_Ctrl_B.TimeModeTiming_i;

  /* Chart: '<S19>/LostComm' incorporates:
   *  Constant: '<S1>/Constant28'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_e == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_e = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S80>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_h = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S80>:4' */
    /* '<S80>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_p3 = tmpIRead[18];

    /* '<S80>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_j = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_h) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S80>:12' */
      /* '<S80>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S80>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_h = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S80>:4' */
        /* '<S80>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_p3 = tmpIRead[18];

        /* '<S80>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_j = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S80>:4' */
      /* '<S80>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S80>:10:1' PwrSupReq==1&&... */
      /* '<S80>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[18] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S80>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_h = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S80>:7' */
        /* '<S80>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_p3 = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S80>:7' */
      /* '<S80>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S80>:11:1' PwrSupReq==0||... */
      /* '<S80>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[18] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S80>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_h = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S80>:4' */
        /* '<S80>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_p3 = tmpIRead[18];

        /* '<S80>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_j = 0U;
      } else {
        /* '<S80>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_j > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S80>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_h = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S80>:12' */
          /* '<S80>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_p3 = 0U;

          /* '<S80>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_j = 0U;
        } else {
          /* '<S80>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_j = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_j, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S19>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write55' */
  PwrSply_u32LostCommTiming19 = KL15PwrSply_Ctrl_B.LostCommTiming_j;

  /* Chart: '<S19>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant27'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_p == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_p = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S81>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ao = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S81>:4' */
    /* '<S81>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_f = tmpIRead[18];

    /* '<S81>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_bm = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ao) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S81>:12' */
      /* '<S81>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S81>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ao = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S81>:4' */
        /* '<S81>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_f = tmpIRead[18];

        /* '<S81>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_bm = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S81>:4' */
      /* '<S81>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S81>:10:1' UsageModeSt==0&&... */
      /* '<S81>:10:1' PwrSupReq==1&&... */
      /* '<S81>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[18] == 1) && (KL15PwrSply_TiNetSleepDelay19 > 0U)) {
        /* Transition: '<S81>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ao = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S81>:8' */
        /* '<S81>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_f = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S81>:8' */
      /* '<S81>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_bm > KL15PwrSply_TiNetSleepDelay19) {
        /* Transition: '<S81>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ao = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S81>:12' */
        /* '<S81>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_f = 0U;

        /* '<S81>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_bm = 0U;
      } else {
        /* '<S81>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S81>:14:1' UsageModeSt~=0&&... */
        /* '<S81>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[18] == 0)) {
          /* Transition: '<S81>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ao = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S81>:4' */
          /* '<S81>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_f = tmpIRead[18];

          /* '<S81>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_bm = 0U;
        } else {
          /* '<S81>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_bm = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_bm, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S19>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write56' */
  PwrSply_u32NetSleepTiming19 = KL15PwrSply_Ctrl_B.NetSleepTiming_bm;

  /* Product: '<S20>/Product2' incorporates:
   *  Constant: '<S20>/Constant'
   *  Constant: '<S20>/Constant1'
   *  Constant: '<S20>/Constant2'
   *  Product: '<S20>/Product'
   *  Product: '<S20>/Product1'
   */
  rtb_Product2_jv = tmpIRead_1[19] * 5U * 60U * 100U;

  /* RelationalOperator: '<S20>/Relational Operator1' incorporates:
   *  UnitDelay: '<S20>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_gm != tmpIRead_0[19]);

  /* Chart: '<S20>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_i == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_i = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S85>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kl = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S85>:1' */
    /* '<S85>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_a = tmpIRead[19];

    /* '<S85>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_g = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kl) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S85>:1' */
      /* '<S85>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S85>:5:1' PwrSupReq==1&&... */
      /* '<S85>:5:1' ~CCULostComm; */
      if ((rtb_Product2_jv > 0U) && (tmpIRead[19] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S85>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kl = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S85>:4' */
        /* '<S85>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_a = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S85>:11' */
      /* '<S85>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[19] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S85>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kl = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S85>:4' */
        /* '<S85>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_a = 1U;
      } else {
        /* '<S85>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S85>:19:1' CCULostComm; */
        if ((rtb_Product2_jv == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S85>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kl = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S85>:1' */
          /* '<S85>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_a = tmpIRead[19];

          /* '<S85>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_g = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S85>:4' */
      /* '<S85>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S85>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S85>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kl = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S85>:1' */
        /* '<S85>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_a = tmpIRead[19];

        /* '<S85>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_g = 0U;
      } else {
        /* '<S85>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S85>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_g > rtb_Product2_jv) || (tmpIRead[19] == 0)) {
          /* Transition: '<S85>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_kl = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S85>:11' */
          /* '<S85>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_a = 0U;

          /* '<S85>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_g = 0U;
        } else {
          /* '<S85>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_g = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_g, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S20>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write57' */
  PwrSply_u32TimeModeTiming20 = KL15PwrSply_Ctrl_B.TimeModeTiming_g;

  /* Chart: '<S20>/LostComm' incorporates:
   *  Constant: '<S1>/Constant30'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_p == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_p = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S83>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S83>:4' */
    /* '<S83>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_j = tmpIRead[19];

    /* '<S83>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_pb = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_k) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S83>:12' */
      /* '<S83>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S83>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S83>:4' */
        /* '<S83>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_j = tmpIRead[19];

        /* '<S83>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_pb = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S83>:4' */
      /* '<S83>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S83>:10:1' PwrSupReq==1&&... */
      /* '<S83>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[19] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S83>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S83>:7' */
        /* '<S83>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_j = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S83>:7' */
      /* '<S83>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S83>:11:1' PwrSupReq==0||... */
      /* '<S83>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[19] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S83>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S83>:4' */
        /* '<S83>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_j = tmpIRead[19];

        /* '<S83>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_pb = 0U;
      } else {
        /* '<S83>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_pb > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S83>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_k = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S83>:12' */
          /* '<S83>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_j = 0U;

          /* '<S83>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_pb = 0U;
        } else {
          /* '<S83>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_pb = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_pb, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S20>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write58' */
  PwrSply_u32LostCommTiming20 = KL15PwrSply_Ctrl_B.LostCommTiming_pb;

  /* Chart: '<S20>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant29'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_f == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_f = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S84>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S84>:4' */
    /* '<S84>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_i = tmpIRead[19];

    /* '<S84>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_iq = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_j) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S84>:12' */
      /* '<S84>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S84>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S84>:4' */
        /* '<S84>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_i = tmpIRead[19];

        /* '<S84>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_iq = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S84>:4' */
      /* '<S84>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S84>:10:1' UsageModeSt==0&&... */
      /* '<S84>:10:1' PwrSupReq==1&&... */
      /* '<S84>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[19] == 1) && (KL15PwrSply_TiNetSleepDelay20 > 0U)) {
        /* Transition: '<S84>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S84>:8' */
        /* '<S84>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_i = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S84>:8' */
      /* '<S84>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_iq > KL15PwrSply_TiNetSleepDelay20) {
        /* Transition: '<S84>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_j = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S84>:12' */
        /* '<S84>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_i = 0U;

        /* '<S84>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_iq = 0U;
      } else {
        /* '<S84>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S84>:14:1' UsageModeSt~=0&&... */
        /* '<S84>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[19] == 0)) {
          /* Transition: '<S84>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S84>:4' */
          /* '<S84>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_i = tmpIRead[19];

          /* '<S84>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_iq = 0U;
        } else {
          /* '<S84>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_iq = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_iq, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S20>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write59' */
  PwrSply_u32NetSleepTiming20 = KL15PwrSply_Ctrl_B.NetSleepTiming_iq;

  /* Chart: '<S3>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant3'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_pr == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_pr = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S33>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_js = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S33>:4' */
    /* '<S33>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_nj = tmpIRead[2];

    /* '<S33>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_cn = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_js) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S33>:12' */
      /* '<S33>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S33>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_js = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S33>:4' */
        /* '<S33>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_nj = tmpIRead[2];

        /* '<S33>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_cn = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S33>:4' */
      /* '<S33>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S33>:10:1' UsageModeSt==0&&... */
      /* '<S33>:10:1' PwrSupReq==1&&... */
      /* '<S33>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[2] == 1) && (KL15PwrSply_TiNetSleepDelay03 > 0U)) {
        /* Transition: '<S33>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_js = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S33>:8' */
        /* '<S33>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_nj = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S33>:8' */
      /* '<S33>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_cn > KL15PwrSply_TiNetSleepDelay03) {
        /* Transition: '<S33>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_js = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S33>:12' */
        /* '<S33>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_nj = 0U;

        /* '<S33>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_cn = 0U;
      } else {
        /* '<S33>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S33>:14:1' UsageModeSt~=0&&... */
        /* '<S33>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[2] == 0)) {
          /* Transition: '<S33>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_js = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S33>:4' */
          /* '<S33>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_nj = tmpIRead[2];

          /* '<S33>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_cn = 0U;
        } else {
          /* '<S33>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_cn = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_cn, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S3>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write6' */
  PwrSply_u32NetSleepTiming03 = KL15PwrSply_Ctrl_B.NetSleepTiming_cn;

  /* Product: '<S21>/Product2' incorporates:
   *  Constant: '<S21>/Constant'
   *  Constant: '<S21>/Constant1'
   *  Constant: '<S21>/Constant2'
   *  Product: '<S21>/Product'
   *  Product: '<S21>/Product1'
   */
  rtb_Product2_f = tmpIRead_1[20] * 5U * 60U * 100U;

  /* RelationalOperator: '<S21>/Relational Operator1' incorporates:
   *  UnitDelay: '<S21>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_ab != tmpIRead_0[20]);

  /* Chart: '<S21>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_k == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_k = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S88>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S88>:1' */
    /* '<S88>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_j = tmpIRead[20];

    /* '<S88>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_o = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_m) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S88>:1' */
      /* '<S88>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S88>:5:1' PwrSupReq==1&&... */
      /* '<S88>:5:1' ~CCULostComm; */
      if ((rtb_Product2_f > 0U) && (tmpIRead[20] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S88>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S88>:4' */
        /* '<S88>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_j = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S88>:11' */
      /* '<S88>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[20] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S88>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S88>:4' */
        /* '<S88>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_j = 1U;
      } else {
        /* '<S88>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S88>:19:1' CCULostComm; */
        if ((rtb_Product2_f == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S88>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S88>:1' */
          /* '<S88>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_j = tmpIRead[20];

          /* '<S88>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_o = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S88>:4' */
      /* '<S88>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S88>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S88>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S88>:1' */
        /* '<S88>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_j = tmpIRead[20];

        /* '<S88>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_o = 0U;
      } else {
        /* '<S88>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S88>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_o > rtb_Product2_f) || (tmpIRead[20] == 0)) {
          /* Transition: '<S88>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S88>:11' */
          /* '<S88>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_j = 0U;

          /* '<S88>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_o = 0U;
        } else {
          /* '<S88>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_o = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_o, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S21>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write60' */
  PwrSply_u32TimeModeTiming21 = KL15PwrSply_Ctrl_B.TimeModeTiming_o;

  /* Chart: '<S21>/LostComm' incorporates:
   *  Constant: '<S1>/Constant32'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_ik == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_ik = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S86>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_o = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S86>:4' */
    /* '<S86>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_g = tmpIRead[20];

    /* '<S86>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_ps = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_o) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S86>:12' */
      /* '<S86>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S86>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_o = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S86>:4' */
        /* '<S86>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_g = tmpIRead[20];

        /* '<S86>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_ps = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S86>:4' */
      /* '<S86>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S86>:10:1' PwrSupReq==1&&... */
      /* '<S86>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[20] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S86>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_o = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S86>:7' */
        /* '<S86>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_g = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S86>:7' */
      /* '<S86>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S86>:11:1' PwrSupReq==0||... */
      /* '<S86>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[20] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S86>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_o = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S86>:4' */
        /* '<S86>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_g = tmpIRead[20];

        /* '<S86>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_ps = 0U;
      } else {
        /* '<S86>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_ps > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S86>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_o = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S86>:12' */
          /* '<S86>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_g = 0U;

          /* '<S86>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_ps = 0U;
        } else {
          /* '<S86>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_ps = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_ps, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S21>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write61' */
  PwrSply_u32LostCommTiming21 = KL15PwrSply_Ctrl_B.LostCommTiming_ps;

  /* Chart: '<S21>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant31'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_c == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_c = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S87>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S87>:4' */
    /* '<S87>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_e = tmpIRead[20];

    /* '<S87>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_j = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_a) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S87>:12' */
      /* '<S87>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S87>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S87>:4' */
        /* '<S87>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_e = tmpIRead[20];

        /* '<S87>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_j = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S87>:4' */
      /* '<S87>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S87>:10:1' UsageModeSt==0&&... */
      /* '<S87>:10:1' PwrSupReq==1&&... */
      /* '<S87>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[20] == 1) && (KL15PwrSply_TiNetSleepDelay21 > 0U)) {
        /* Transition: '<S87>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S87>:8' */
        /* '<S87>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_e = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S87>:8' */
      /* '<S87>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_j > KL15PwrSply_TiNetSleepDelay21) {
        /* Transition: '<S87>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_a = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S87>:12' */
        /* '<S87>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_e = 0U;

        /* '<S87>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_j = 0U;
      } else {
        /* '<S87>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S87>:14:1' UsageModeSt~=0&&... */
        /* '<S87>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[20] == 0)) {
          /* Transition: '<S87>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S87>:4' */
          /* '<S87>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_e = tmpIRead[20];

          /* '<S87>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_j = 0U;
        } else {
          /* '<S87>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_j = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_j, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S21>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write62' */
  PwrSply_u32NetSleepTiming21 = KL15PwrSply_Ctrl_B.NetSleepTiming_j;

  /* Product: '<S22>/Product2' incorporates:
   *  Constant: '<S22>/Constant'
   *  Constant: '<S22>/Constant1'
   *  Constant: '<S22>/Constant2'
   *  Product: '<S22>/Product'
   *  Product: '<S22>/Product1'
   */
  rtb_Product2_c = tmpIRead_1[21] * 5U * 60U * 100U;

  /* RelationalOperator: '<S22>/Relational Operator1' incorporates:
   *  UnitDelay: '<S22>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_n0 != tmpIRead_0[21]);

  /* Chart: '<S22>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_c == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_c = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S91>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S91>:1' */
    /* '<S91>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_d = tmpIRead[21];

    /* '<S91>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_pr = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_d) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S91>:1' */
      /* '<S91>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S91>:5:1' PwrSupReq==1&&... */
      /* '<S91>:5:1' ~CCULostComm; */
      if ((rtb_Product2_c > 0U) && (tmpIRead[21] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S91>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S91>:4' */
        /* '<S91>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_d = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S91>:11' */
      /* '<S91>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[21] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S91>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S91>:4' */
        /* '<S91>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_d = 1U;
      } else {
        /* '<S91>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S91>:19:1' CCULostComm; */
        if ((rtb_Product2_c == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S91>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S91>:1' */
          /* '<S91>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_d = tmpIRead[21];

          /* '<S91>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_pr = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S91>:4' */
      /* '<S91>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S91>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S91>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S91>:1' */
        /* '<S91>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_d = tmpIRead[21];

        /* '<S91>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_pr = 0U;
      } else {
        /* '<S91>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S91>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_pr > rtb_Product2_c) || (tmpIRead[21] == 0)) {
          /* Transition: '<S91>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S91>:11' */
          /* '<S91>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_d = 0U;

          /* '<S91>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_pr = 0U;
        } else {
          /* '<S91>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_pr = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_pr, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S22>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write63' */
  PwrSply_u32TimeModeTiming22 = KL15PwrSply_Ctrl_B.TimeModeTiming_pr;

  /* Chart: '<S22>/LostComm' incorporates:
   *  Constant: '<S1>/Constant34'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_i == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_i = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S89>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_n = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S89>:4' */
    /* '<S89>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_f = tmpIRead[21];

    /* '<S89>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_b = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_n) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S89>:12' */
      /* '<S89>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S89>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_n = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S89>:4' */
        /* '<S89>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_f = tmpIRead[21];

        /* '<S89>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_b = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S89>:4' */
      /* '<S89>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S89>:10:1' PwrSupReq==1&&... */
      /* '<S89>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[21] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S89>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_n = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S89>:7' */
        /* '<S89>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_f = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S89>:7' */
      /* '<S89>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S89>:11:1' PwrSupReq==0||... */
      /* '<S89>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[21] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S89>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_n = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S89>:4' */
        /* '<S89>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_f = tmpIRead[21];

        /* '<S89>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_b = 0U;
      } else {
        /* '<S89>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_b > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S89>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_n = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S89>:12' */
          /* '<S89>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_f = 0U;

          /* '<S89>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_b = 0U;
        } else {
          /* '<S89>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_b = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_b, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S22>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write64' */
  PwrSply_u32LostCommTiming22 = KL15PwrSply_Ctrl_B.LostCommTiming_b;

  /* Chart: '<S22>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant33'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_h == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_h = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S90>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S90>:4' */
    /* '<S90>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_b0 = tmpIRead[21];

    /* '<S90>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_ce = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_b) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S90>:12' */
      /* '<S90>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S90>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S90>:4' */
        /* '<S90>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_b0 = tmpIRead[21];

        /* '<S90>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_ce = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S90>:4' */
      /* '<S90>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S90>:10:1' UsageModeSt==0&&... */
      /* '<S90>:10:1' PwrSupReq==1&&... */
      /* '<S90>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[21] == 1) && (KL15PwrSply_TiNetSleepDelay22 > 0U)) {
        /* Transition: '<S90>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S90>:8' */
        /* '<S90>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_b0 = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S90>:8' */
      /* '<S90>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_ce > KL15PwrSply_TiNetSleepDelay22) {
        /* Transition: '<S90>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_b = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S90>:12' */
        /* '<S90>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_b0 = 0U;

        /* '<S90>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_ce = 0U;
      } else {
        /* '<S90>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S90>:14:1' UsageModeSt~=0&&... */
        /* '<S90>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[21] == 0)) {
          /* Transition: '<S90>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_b = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S90>:4' */
          /* '<S90>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_b0 = tmpIRead[21];

          /* '<S90>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_ce = 0U;
        } else {
          /* '<S90>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_ce = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_ce, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S22>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write65' */
  PwrSply_u32NetSleepTiming22 = KL15PwrSply_Ctrl_B.NetSleepTiming_ce;

  /* Product: '<S23>/Product2' incorporates:
   *  Constant: '<S23>/Constant'
   *  Constant: '<S23>/Constant1'
   *  Constant: '<S23>/Constant2'
   *  Product: '<S23>/Product'
   *  Product: '<S23>/Product1'
   */
  rtb_Product2_a = tmpIRead_1[22] * 5U * 60U * 100U;

  /* RelationalOperator: '<S23>/Relational Operator1' incorporates:
   *  UnitDelay: '<S23>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_bo != tmpIRead_0[22]);

  /* Chart: '<S23>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_f == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_f = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S94>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_o = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S94>:1' */
    /* '<S94>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_ca = tmpIRead[22];

    /* '<S94>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_fc = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_o) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S94>:1' */
      /* '<S94>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S94>:5:1' PwrSupReq==1&&... */
      /* '<S94>:5:1' ~CCULostComm; */
      if ((rtb_Product2_a > 0U) && (tmpIRead[22] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S94>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_o = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S94>:4' */
        /* '<S94>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_ca = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S94>:11' */
      /* '<S94>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[22] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S94>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_o = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S94>:4' */
        /* '<S94>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_ca = 1U;
      } else {
        /* '<S94>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S94>:19:1' CCULostComm; */
        if ((rtb_Product2_a == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S94>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_o = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S94>:1' */
          /* '<S94>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_ca = tmpIRead[22];

          /* '<S94>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_fc = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S94>:4' */
      /* '<S94>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S94>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S94>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_o = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S94>:1' */
        /* '<S94>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_ca = tmpIRead[22];

        /* '<S94>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_fc = 0U;
      } else {
        /* '<S94>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S94>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_fc > rtb_Product2_a) || (tmpIRead[22] == 0)) {
          /* Transition: '<S94>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_o = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S94>:11' */
          /* '<S94>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_ca = 0U;

          /* '<S94>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_fc = 0U;
        } else {
          /* '<S94>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_fc = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_fc, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S23>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write66' */
  PwrSply_u32TimeModeTiming23 = KL15PwrSply_Ctrl_B.TimeModeTiming_fc;

  /* Chart: '<S23>/LostComm' incorporates:
   *  Constant: '<S1>/Constant44'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_d == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_d = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S92>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S92>:4' */
    /* '<S92>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_bi = tmpIRead[22];

    /* '<S92>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_k = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_l) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S92>:12' */
      /* '<S92>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S92>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S92>:4' */
        /* '<S92>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_bi = tmpIRead[22];

        /* '<S92>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_k = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S92>:4' */
      /* '<S92>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S92>:10:1' PwrSupReq==1&&... */
      /* '<S92>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[22] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S92>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S92>:7' */
        /* '<S92>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_bi = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S92>:7' */
      /* '<S92>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S92>:11:1' PwrSupReq==0||... */
      /* '<S92>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[22] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S92>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S92>:4' */
        /* '<S92>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_bi = tmpIRead[22];

        /* '<S92>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_k = 0U;
      } else {
        /* '<S92>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_k > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S92>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_l = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S92>:12' */
          /* '<S92>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_bi = 0U;

          /* '<S92>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_k = 0U;
        } else {
          /* '<S92>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_k = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_k, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S23>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write67' */
  PwrSply_u32LostCommTiming23 = KL15PwrSply_Ctrl_B.LostCommTiming_k;

  /* Chart: '<S23>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant35'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_n == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_n = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S93>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ms = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S93>:4' */
    /* '<S93>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_oy = tmpIRead[22];

    /* '<S93>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_ll = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ms) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S93>:12' */
      /* '<S93>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S93>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ms = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S93>:4' */
        /* '<S93>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_oy = tmpIRead[22];

        /* '<S93>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_ll = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S93>:4' */
      /* '<S93>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S93>:10:1' UsageModeSt==0&&... */
      /* '<S93>:10:1' PwrSupReq==1&&... */
      /* '<S93>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[22] == 1) && (KL15PwrSply_TiNetSleepDelay23 > 0U)) {
        /* Transition: '<S93>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ms = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S93>:8' */
        /* '<S93>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_oy = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S93>:8' */
      /* '<S93>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_ll > KL15PwrSply_TiNetSleepDelay23) {
        /* Transition: '<S93>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ms = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S93>:12' */
        /* '<S93>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_oy = 0U;

        /* '<S93>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_ll = 0U;
      } else {
        /* '<S93>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S93>:14:1' UsageModeSt~=0&&... */
        /* '<S93>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[22] == 0)) {
          /* Transition: '<S93>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_ms = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S93>:4' */
          /* '<S93>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_oy = tmpIRead[22];

          /* '<S93>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_ll = 0U;
        } else {
          /* '<S93>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_ll = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_ll, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S23>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write68' */
  PwrSply_u32NetSleepTiming23 = KL15PwrSply_Ctrl_B.NetSleepTiming_ll;

  /* Product: '<S24>/Product2' incorporates:
   *  Constant: '<S24>/Constant'
   *  Constant: '<S24>/Constant1'
   *  Constant: '<S24>/Constant2'
   *  Product: '<S24>/Product'
   *  Product: '<S24>/Product1'
   */
  rtb_Product2_hb = tmpIRead_1[23] * 5U * 60U * 100U;

  /* RelationalOperator: '<S24>/Relational Operator1' incorporates:
   *  UnitDelay: '<S24>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_ce != tmpIRead_0[23]);

  /* Chart: '<S24>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_j == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_j = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S97>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S97>:1' */
    /* '<S97>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_ir = tmpIRead[23];

    /* '<S97>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_mt = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_k) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S97>:1' */
      /* '<S97>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S97>:5:1' PwrSupReq==1&&... */
      /* '<S97>:5:1' ~CCULostComm; */
      if ((rtb_Product2_hb > 0U) && (tmpIRead[23] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S97>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S97>:4' */
        /* '<S97>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_ir = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S97>:11' */
      /* '<S97>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[23] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S97>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S97>:4' */
        /* '<S97>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_ir = 1U;
      } else {
        /* '<S97>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S97>:19:1' CCULostComm; */
        if ((rtb_Product2_hb == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S97>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S97>:1' */
          /* '<S97>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_ir = tmpIRead[23];

          /* '<S97>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_mt = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S97>:4' */
      /* '<S97>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S97>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S97>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S97>:1' */
        /* '<S97>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_ir = tmpIRead[23];

        /* '<S97>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_mt = 0U;
      } else {
        /* '<S97>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S97>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_mt > rtb_Product2_hb) || (tmpIRead[23] == 0)) {
          /* Transition: '<S97>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S97>:11' */
          /* '<S97>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_ir = 0U;

          /* '<S97>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_mt = 0U;
        } else {
          /* '<S97>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_mt = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_mt, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S24>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write69' */
  PwrSply_u32TimeModeTiming24 = KL15PwrSply_Ctrl_B.TimeModeTiming_mt;

  /* Chart: '<S3>/LostComm' incorporates:
   *  Constant: '<S1>/Constant4'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_ij == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_ij = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S32>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ot = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S32>:4' */
    /* '<S32>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_e0 = tmpIRead[2];

    /* '<S32>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_id = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ot) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S32>:12' */
      /* '<S32>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S32>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ot = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S32>:4' */
        /* '<S32>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_e0 = tmpIRead[2];

        /* '<S32>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_id = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S32>:4' */
      /* '<S32>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S32>:10:1' PwrSupReq==1&&... */
      /* '<S32>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[2] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S32>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ot = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S32>:7' */
        /* '<S32>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_e0 = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S32>:7' */
      /* '<S32>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S32>:11:1' PwrSupReq==0||... */
      /* '<S32>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[2] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S32>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ot = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S32>:4' */
        /* '<S32>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_e0 = tmpIRead[2];

        /* '<S32>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_id = 0U;
      } else {
        /* '<S32>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_id > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S32>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_ot = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S32>:12' */
          /* '<S32>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_e0 = 0U;

          /* '<S32>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_id = 0U;
        } else {
          /* '<S32>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_id = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_id, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S3>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write7' */
  PwrSply_u32LostCommTiming03 = KL15PwrSply_Ctrl_B.LostCommTiming_id;

  /* Chart: '<S24>/LostComm' incorporates:
   *  Constant: '<S1>/Constant46'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_b == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library_b = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S95>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S95>:4' */
    /* '<S95>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_lf = tmpIRead[23];

    /* '<S95>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_a = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_d) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S95>:12' */
      /* '<S95>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S95>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S95>:4' */
        /* '<S95>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_lf = tmpIRead[23];

        /* '<S95>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_a = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S95>:4' */
      /* '<S95>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S95>:10:1' PwrSupReq==1&&... */
      /* '<S95>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[23] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S95>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S95>:7' */
        /* '<S95>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_lf = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S95>:7' */
      /* '<S95>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S95>:11:1' PwrSupReq==0||... */
      /* '<S95>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[23] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S95>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S95>:4' */
        /* '<S95>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_lf = tmpIRead[23];

        /* '<S95>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_a = 0U;
      } else {
        /* '<S95>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_a > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S95>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library_d = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S95>:12' */
          /* '<S95>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_lf = 0U;

          /* '<S95>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_a = 0U;
        } else {
          /* '<S95>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_a = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_a, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S24>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write70' */
  PwrSply_u32LostCommTiming24 = KL15PwrSply_Ctrl_B.LostCommTiming_a;

  /* Chart: '<S24>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant45'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_e == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library_e = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S96>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S96>:4' */
    /* '<S96>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_o = tmpIRead[23];

    /* '<S96>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_i = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_m) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S96>:12' */
      /* '<S96>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S96>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S96>:4' */
        /* '<S96>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_o = tmpIRead[23];

        /* '<S96>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_i = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S96>:4' */
      /* '<S96>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S96>:10:1' UsageModeSt==0&&... */
      /* '<S96>:10:1' PwrSupReq==1&&... */
      /* '<S96>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[23] == 1) && (KL15PwrSply_TiNetSleepDelay24 > 0U)) {
        /* Transition: '<S96>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S96>:8' */
        /* '<S96>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_o = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S96>:8' */
      /* '<S96>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_i > KL15PwrSply_TiNetSleepDelay24) {
        /* Transition: '<S96>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_m = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S96>:12' */
        /* '<S96>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_o = 0U;

        /* '<S96>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_i = 0U;
      } else {
        /* '<S96>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S96>:14:1' UsageModeSt~=0&&... */
        /* '<S96>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[23] == 0)) {
          /* Transition: '<S96>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S96>:4' */
          /* '<S96>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_o = tmpIRead[23];

          /* '<S96>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_i = 0U;
        } else {
          /* '<S96>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_i = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_i, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S24>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write71' */
  PwrSply_u32NetSleepTiming24 = KL15PwrSply_Ctrl_B.NetSleepTiming_i;

  /* Product: '<S25>/Product2' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S25>/Constant1'
   *  Constant: '<S25>/Constant2'
   *  Product: '<S25>/Product'
   *  Product: '<S25>/Product1'
   */
  rtb_Product2_mt = tmpIRead_1[24] * 5U * 60U * 100U;

  /* RelationalOperator: '<S25>/Relational Operator1' incorporates:
   *  UnitDelay: '<S25>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_gd != tmpIRead_0[24]);

  /* Chart: '<S25>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S100>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S100>:1' */
    /* '<S100>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_i = tmpIRead[24];

    /* '<S100>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_m = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S100>:1' */
      /* '<S100>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S100>:5:1' PwrSupReq==1&&... */
      /* '<S100>:5:1' ~CCULostComm; */
      if ((rtb_Product2_mt > 0U) && (tmpIRead[24] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S100>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S100>:4' */
        /* '<S100>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_i = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S100>:11' */
      /* '<S100>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[24] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S100>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S100>:4' */
        /* '<S100>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_i = 1U;
      } else {
        /* '<S100>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S100>:19:1' CCULostComm; */
        if ((rtb_Product2_mt == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S100>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S100>:1' */
          /* '<S100>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_i = tmpIRead[24];

          /* '<S100>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_m = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S100>:4' */
      /* '<S100>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S100>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S100>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S100>:1' */
        /* '<S100>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_i = tmpIRead[24];

        /* '<S100>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_m = 0U;
      } else {
        /* '<S100>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S100>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_m > rtb_Product2_mt) || (tmpIRead[24] == 0)) {
          /* Transition: '<S100>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S100>:11' */
          /* '<S100>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_i = 0U;

          /* '<S100>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_m = 0U;
        } else {
          /* '<S100>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_m = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_m, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S25>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write72' */
  PwrSply_u32TimeModeTiming25 = KL15PwrSply_Ctrl_B.TimeModeTiming_m;

  /* Chart: '<S25>/LostComm' incorporates:
   *  Constant: '<S1>/Constant48'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayCommon/LostComm */
  /* During: PwrSplyDelayCommon/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library == 0U) {
    /* Entry: PwrSplyDelayCommon/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c2_Ctrl_Library = 1U;

    /* Entry Internal: PwrSplyDelayCommon/LostComm */
    /* Transition: '<S98>:5' */
    KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S98>:4' */
    /* '<S98>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_pr = tmpIRead[24];

    /* '<S98>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_pj = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S98>:12' */
      /* '<S98>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S98>:14' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S98>:4' */
        /* '<S98>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_pr = tmpIRead[24];

        /* '<S98>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_pj = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S98>:4' */
      /* '<S98>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S98>:10:1' PwrSupReq==1&&... */
      /* '<S98>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[24] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S98>:10' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S98>:7' */
        /* '<S98>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_pr = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S98>:7' */
      /* '<S98>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S98>:11:1' PwrSupReq==0||... */
      /* '<S98>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[24] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S98>:11' */
        KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S98>:4' */
        /* '<S98>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_pr = tmpIRead[24];

        /* '<S98>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_pj = 0U;
      } else {
        /* '<S98>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_pj > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S98>:13' */
          KL15PwrSply_Ctrl_DW.is_c2_Ctrl_Library = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S98>:12' */
          /* '<S98>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_pr = 0U;

          /* '<S98>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_pj = 0U;
        } else {
          /* '<S98>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_pj = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_pj, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S25>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write73' */
  PwrSply_u32LostCommTiming25 = KL15PwrSply_Ctrl_B.LostCommTiming_pj;

  /* Chart: '<S25>/NetSleep' incorporates:
   *  Constant: '<S1>/Constant49'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayCommon/NetSleep */
  /* During: PwrSplyDelayCommon/NetSleep */
  if (KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library == 0U) {
    /* Entry: PwrSplyDelayCommon/NetSleep */
    KL15PwrSply_Ctrl_DW.is_active_c3_Ctrl_Library = 1U;

    /* Entry Internal: PwrSplyDelayCommon/NetSleep */
    /* Transition: '<S99>:5' */
    KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S99>:4' */
    /* '<S99>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_he = tmpIRead[24];

    /* '<S99>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_db = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S99>:12' */
      /* '<S99>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S99>:15' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S99>:4' */
        /* '<S99>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_he = tmpIRead[24];

        /* '<S99>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_db = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S99>:4' */
      /* '<S99>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S99>:10:1' UsageModeSt==0&&... */
      /* '<S99>:10:1' PwrSupReq==1&&... */
      /* '<S99>:10:1' NetSleepDelayTime>0; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[24] == 1) && (KL15PwrSply_TiNetSleepDelay25 > 0U)) {
        /* Transition: '<S99>:10' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S99>:8' */
        /* '<S99>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_he = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S99>:8' */
      /* '<S99>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_db > KL15PwrSply_TiNetSleepDelay25) {
        /* Transition: '<S99>:13' */
        KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S99>:12' */
        /* '<S99>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_he = 0U;

        /* '<S99>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_db = 0U;
      } else {
        /* '<S99>:14:1' sf_internal_predicateOutput = ~NetSleepFlag&&... */
        /* '<S99>:14:1' UsageModeSt~=0&&... */
        /* '<S99>:14:1' PwrSupReq==0; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) && (tmpIRead[24] == 0)) {
          /* Transition: '<S99>:14' */
          KL15PwrSply_Ctrl_DW.is_c3_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S99>:4' */
          /* '<S99>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_he = tmpIRead[24];

          /* '<S99>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_db = 0U;
        } else {
          /* '<S99>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_db = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_db, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S25>/NetSleep' */

  /* DataStoreWrite: '<S1>/Data Store Write74' */
  PwrSply_u32NetSleepTiming25 = KL15PwrSply_Ctrl_B.NetSleepTiming_db;

  /* Product: '<S28>/Product2' incorporates:
   *  Constant: '<S28>/Constant'
   *  Constant: '<S28>/Constant1'
   *  Constant: '<S28>/Constant2'
   *  Product: '<S28>/Product'
   *  Product: '<S28>/Product1'
   */
  rtb_Product2_j0 = tmpIRead_1[25] * 5U * 60U * 100U;

  /* RelationalOperator: '<S28>/Relational Operator1' incorporates:
   *  UnitDelay: '<S28>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_o != tmpIRead_0[25]);

  /* Chart: '<S28>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayLamp/TimeMode */
  /* During: PwrSplyDelayLamp/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c6_Ctrl_Library_gx == 0U) {
    /* Entry: PwrSplyDelayLamp/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c6_Ctrl_Library_gx = 1U;

    /* Entry Internal: PwrSplyDelayLamp/TimeMode */
    /* Transition: '<S110>:2' */
    KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S110>:1' */
    /* '<S110>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_h = tmpIRead[25];

    /* '<S110>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_a = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_m) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S110>:1' */
      /* '<S110>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S110>:5:1' PwrSupReq==1&&... */
      /* '<S110>:5:1' ~CCULostComm; */
      if ((rtb_Product2_j0 > 0U) && (tmpIRead[25] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S110>:5' */
        KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S110>:4' */
        /* '<S110>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_h = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S110>:11' */
      /* '<S110>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[25] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S110>:18' */
        KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S110>:4' */
        /* '<S110>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_h = 1U;
      } else {
        /* '<S110>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S110>:19:1' CCULostComm; */
        if ((rtb_Product2_j0 == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S110>:19' */
          KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S110>:1' */
          /* '<S110>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_h = tmpIRead[25];

          /* '<S110>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_a = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S110>:4' */
      /* '<S110>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S110>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S110>:9' */
        KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S110>:1' */
        /* '<S110>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_h = tmpIRead[25];

        /* '<S110>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_a = 0U;
      } else {
        /* '<S110>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S110>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_a > rtb_Product2_j0) || (tmpIRead[25] == 0)) {
          /* Transition: '<S110>:16' */
          KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_m = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S110>:11' */
          /* '<S110>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_h = 0U;

          /* '<S110>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_a = 0U;
        } else {
          /* '<S110>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_a = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_a, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S28>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write75' */
  PwrSply_u32TimeModeTiming26 = KL15PwrSply_Ctrl_B.TimeModeTiming_a;

  /* Chart: '<S28>/LostComm' incorporates:
   *  Constant: '<S1>/Constant50'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayLamp/LostComm */
  /* During: PwrSplyDelayLamp/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c4_Ctrl_Library_mv == 0U) {
    /* Entry: PwrSplyDelayLamp/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c4_Ctrl_Library_mv = 1U;

    /* Entry Internal: PwrSplyDelayLamp/LostComm */
    /* Transition: '<S107>:5' */
    KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S107>:4' */
    /* '<S107>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_l = tmpIRead[25];

    /* '<S107>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_d = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_g) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S107>:12' */
      /* '<S107>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S107>:14' */
        KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S107>:4' */
        /* '<S107>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_l = tmpIRead[25];

        /* '<S107>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_d = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S107>:4' */
      /* '<S107>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S107>:10:1' PwrSupReq==1&&... */
      /* '<S107>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[25] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S107>:10' */
        KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S107>:7' */
        /* '<S107>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_l = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S107>:7' */
      /* '<S107>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S107>:11:1' PwrSupReq==0||... */
      /* '<S107>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[25] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S107>:11' */
        KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S107>:4' */
        /* '<S107>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_l = tmpIRead[25];

        /* '<S107>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_d = 0U;
      } else {
        /* '<S107>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_d > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S107>:13' */
          KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_g = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S107>:12' */
          /* '<S107>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_l = 0U;

          /* '<S107>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_d = 0U;
        } else {
          /* '<S107>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_d = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_d, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S28>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write76' */
  PwrSply_u32LostCommTiming26 = KL15PwrSply_Ctrl_B.LostCommTiming_d;

  /* Chart: '<S28>/NetSleep_2sDelay' incorporates:
   *  Constant: '<S1>/Constant51'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd01_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayLamp/NetSleep_2sDelay */
  /* During: PwrSplyDelayLamp/NetSleep_2sDelay */
  if (KL15PwrSply_Ctrl_DW.is_active_c5_Ctrl_Library_i1 == 0U) {
    /* Entry: PwrSplyDelayLamp/NetSleep_2sDelay */
    KL15PwrSply_Ctrl_DW.is_active_c5_Ctrl_Library_i1 = 1U;

    /* Entry Internal: PwrSplyDelayLamp/NetSleep_2sDelay */
    /* Transition: '<S109>:5' */
    KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S109>:4' */
    /* '<S109>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_h = tmpIRead[25];

    /* '<S109>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_e = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_d) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S109>:12' */
      /* '<S109>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S109>:15' */
        KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S109>:4' */
        /* '<S109>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_h = tmpIRead[25];

        /* '<S109>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_e = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S109>:4' */
      /* '<S109>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S109>:10:1' UsageModeSt==0&&... */
      /* '<S109>:10:1' PwrSupReq==1&&... */
      /* '<S109>:10:1' ~PositionLightCtrlCmd; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[25] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd01_Val())) {
        /* Transition: '<S109>:10' */
        KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S109>:8' */
        /* '<S109>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_h = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S109>:8' */
      /* '<S109>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_e > KL15PwrSply_TiLampNetSleepDelay01) {
        /* Transition: '<S109>:13' */
        KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_d = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S109>:12' */
        /* '<S109>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_h = 0U;

        /* '<S109>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_e = 0U;
      } else {
        /* '<S109>:14:1' sf_internal_predicateOutput = ~NetSleepFlag||... */
        /* '<S109>:14:1' UsageModeSt~=0||... */
        /* '<S109>:14:1' PwrSupReq==0||... */
        /* '<S109>:14:1' PositionLightCtrlCmd; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) || (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) || (tmpIRead[25] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd01_Val()) {
          /* Transition: '<S109>:14' */
          KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S109>:4' */
          /* '<S109>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_h = tmpIRead[25];

          /* '<S109>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_e = 0U;
        } else {
          /* '<S109>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_e = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_e, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S28>/NetSleep_2sDelay' */

  /* DataStoreWrite: '<S1>/Data Store Write77' */
  PwrSply_u32NetSleepTiming2601 = KL15PwrSply_Ctrl_B.NetSleepTiming_e;

  /* Chart: '<S28>/NetSleep_16minDelay' incorporates:
   *  Constant: '<S1>/Constant52'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd01_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightTimingOFFEnableCfg_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayLamp/NetSleep_16minDelay */
  /* During: PwrSplyDelayLamp/NetSleep_16minDelay */
  if (KL15PwrSply_Ctrl_DW.is_active_c7_Ctrl_Library_e == 0U) {
    /* Entry: PwrSplyDelayLamp/NetSleep_16minDelay */
    KL15PwrSply_Ctrl_DW.is_active_c7_Ctrl_Library_e = 1U;

    /* Entry Internal: PwrSplyDelayLamp/NetSleep_16minDelay */
    /* Transition: '<S108>:5' */
    KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S108>:4' */
    /* '<S108>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_b = tmpIRead[25];

    /* '<S108>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_a = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_j) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S108>:12' */
      /* '<S108>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S108>:15' */
        KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S108>:4' */
        /* '<S108>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_b = tmpIRead[25];

        /* '<S108>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_a = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S108>:4' */
      /* '<S108>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S108>:10:1' UsageModeSt==0&&... */
      /* '<S108>:10:1' PwrSupReq==1&&... */
      /* '<S108>:10:1' PositionLightCtrlCmd&&... */
      /* '<S108>:10:2' PositionLightTimingOFF; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[25] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd01_Val() && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val()) {
        /* Transition: '<S108>:10' */
        KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S108>:8' */
        /* '<S108>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_b = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S108>:8' */
      /* '<S108>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_a > KL15PwrSply_TiLampNetSleepDelay02) {
        /* Transition: '<S108>:13' */
        KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_j = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S108>:12' */
        /* '<S108>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_b = 0U;

        /* '<S108>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_a = 0U;
      } else {
        /* '<S108>:14:1' sf_internal_predicateOutput = ~NetSleepFlag||... */
        /* '<S108>:14:1' UsageModeSt~=0||... */
        /* '<S108>:14:1' PwrSupReq==0||... */
        /* '<S108>:14:1' ~PositionLightCtrlCmd||... */
        /* '<S108>:14:2' ~PositionLightTimingOFF; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) || (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) || (tmpIRead[25] == 0) || (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd01_Val()) || (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val())) {
          /* Transition: '<S108>:14' */
          KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S108>:4' */
          /* '<S108>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_b = tmpIRead[25];

          /* '<S108>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_a = 0U;
        } else {
          /* '<S108>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_a = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_a, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S28>/NetSleep_16minDelay' */

  /* DataStoreWrite: '<S1>/Data Store Write78' */
  PwrSply_u32NetSleepTiming2602 = KL15PwrSply_Ctrl_B.NetSleepTiming_a;

  /* Product: '<S29>/Product2' incorporates:
   *  Constant: '<S29>/Constant'
   *  Constant: '<S29>/Constant1'
   *  Constant: '<S29>/Constant2'
   *  Product: '<S29>/Product'
   *  Product: '<S29>/Product1'
   */
  rtb_Product2_pp = tmpIRead_1[26] * 5U * 60U * 100U;

  /* RelationalOperator: '<S29>/Relational Operator1' incorporates:
   *  UnitDelay: '<S29>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_ll != tmpIRead_0[26]);

  /* Chart: '<S29>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayLamp/TimeMode */
  /* During: PwrSplyDelayLamp/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c6_Ctrl_Library_g == 0U) {
    /* Entry: PwrSplyDelayLamp/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c6_Ctrl_Library_g = 1U;

    /* Entry Internal: PwrSplyDelayLamp/TimeMode */
    /* Transition: '<S114>:2' */
    KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S114>:1' */
    /* '<S114>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_mt = tmpIRead[26];

    /* '<S114>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_f = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_l) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S114>:1' */
      /* '<S114>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S114>:5:1' PwrSupReq==1&&... */
      /* '<S114>:5:1' ~CCULostComm; */
      if ((rtb_Product2_pp > 0U) && (tmpIRead[26] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S114>:5' */
        KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S114>:4' */
        /* '<S114>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_mt = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S114>:11' */
      /* '<S114>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[26] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S114>:18' */
        KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S114>:4' */
        /* '<S114>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_mt = 1U;
      } else {
        /* '<S114>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S114>:19:1' CCULostComm; */
        if ((rtb_Product2_pp == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S114>:19' */
          KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S114>:1' */
          /* '<S114>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_mt = tmpIRead[26];

          /* '<S114>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_f = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S114>:4' */
      /* '<S114>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S114>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S114>:9' */
        KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S114>:1' */
        /* '<S114>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_mt = tmpIRead[26];

        /* '<S114>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_f = 0U;
      } else {
        /* '<S114>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S114>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_f > rtb_Product2_pp) || (tmpIRead[26] == 0)) {
          /* Transition: '<S114>:16' */
          KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S114>:11' */
          /* '<S114>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_mt = 0U;

          /* '<S114>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_f = 0U;
        } else {
          /* '<S114>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_f = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_f, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S29>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write79' */
  PwrSply_u32TimeModeTiming27 = KL15PwrSply_Ctrl_B.TimeModeTiming_f;

  /* Product: '<S3>/Product2' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant1'
   *  Constant: '<S3>/Constant2'
   *  Product: '<S3>/Product'
   *  Product: '<S3>/Product1'
   */
  rtb_Product2_pn = tmpIRead_1[2] * 5U * 60U * 100U;

  /* RelationalOperator: '<S3>/Relational Operator1' incorporates:
   *  UnitDelay: '<S3>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_hp != tmpIRead_0[2]);

  /* Chart: '<S3>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_o53 == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_o53 = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S34>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_bu = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S34>:1' */
    /* '<S34>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_jw = tmpIRead[2];

    /* '<S34>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_dt = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_bu) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S34>:1' */
      /* '<S34>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S34>:5:1' PwrSupReq==1&&... */
      /* '<S34>:5:1' ~CCULostComm; */
      if ((rtb_Product2_pn > 0U) && (tmpIRead[2] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S34>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_bu = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S34>:4' */
        /* '<S34>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_jw = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S34>:11' */
      /* '<S34>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[2] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S34>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_bu = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S34>:4' */
        /* '<S34>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_jw = 1U;
      } else {
        /* '<S34>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S34>:19:1' CCULostComm; */
        if ((rtb_Product2_pn == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S34>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_bu = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S34>:1' */
          /* '<S34>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_jw = tmpIRead[2];

          /* '<S34>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_dt = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S34>:4' */
      /* '<S34>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S34>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S34>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_bu = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S34>:1' */
        /* '<S34>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_jw = tmpIRead[2];

        /* '<S34>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_dt = 0U;
      } else {
        /* '<S34>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S34>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_dt > rtb_Product2_pn) || (tmpIRead[2] == 0)) {
          /* Transition: '<S34>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_bu = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S34>:11' */
          /* '<S34>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_jw = 0U;

          /* '<S34>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_dt = 0U;
        } else {
          /* '<S34>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_dt = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_dt, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S3>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write8' */
  PwrSply_u32TimeModeTiming03 = KL15PwrSply_Ctrl_B.TimeModeTiming_dt;

  /* Chart: '<S29>/LostComm' incorporates:
   *  Constant: '<S1>/Constant53'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayLamp/LostComm */
  /* During: PwrSplyDelayLamp/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c4_Ctrl_Library_l == 0U) {
    /* Entry: PwrSplyDelayLamp/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c4_Ctrl_Library_l = 1U;

    /* Entry Internal: PwrSplyDelayLamp/LostComm */
    /* Transition: '<S111>:5' */
    KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S111>:4' */
    /* '<S111>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_i = tmpIRead[26];

    /* '<S111>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_p = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_d) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S111>:12' */
      /* '<S111>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S111>:14' */
        KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S111>:4' */
        /* '<S111>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_i = tmpIRead[26];

        /* '<S111>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_p = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S111>:4' */
      /* '<S111>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S111>:10:1' PwrSupReq==1&&... */
      /* '<S111>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[26] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S111>:10' */
        KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S111>:7' */
        /* '<S111>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_i = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S111>:7' */
      /* '<S111>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S111>:11:1' PwrSupReq==0||... */
      /* '<S111>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[26] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S111>:11' */
        KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_d = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S111>:4' */
        /* '<S111>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_i = tmpIRead[26];

        /* '<S111>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_p = 0U;
      } else {
        /* '<S111>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_p > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S111>:13' */
          KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_d = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S111>:12' */
          /* '<S111>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_i = 0U;

          /* '<S111>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_p = 0U;
        } else {
          /* '<S111>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_p = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_p, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S29>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write80' */
  PwrSply_u32LostCommTiming27 = KL15PwrSply_Ctrl_B.LostCommTiming_p;

  /* Chart: '<S29>/NetSleep_2sDelay' incorporates:
   *  Constant: '<S1>/Constant54'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd02_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayLamp/NetSleep_2sDelay */
  /* During: PwrSplyDelayLamp/NetSleep_2sDelay */
  if (KL15PwrSply_Ctrl_DW.is_active_c5_Ctrl_Library_c == 0U) {
    /* Entry: PwrSplyDelayLamp/NetSleep_2sDelay */
    KL15PwrSply_Ctrl_DW.is_active_c5_Ctrl_Library_c = 1U;

    /* Entry Internal: PwrSplyDelayLamp/NetSleep_2sDelay */
    /* Transition: '<S113>:5' */
    KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S113>:4' */
    /* '<S113>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_m = tmpIRead[26];

    /* '<S113>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_d = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_a) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S113>:12' */
      /* '<S113>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S113>:15' */
        KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S113>:4' */
        /* '<S113>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_m = tmpIRead[26];

        /* '<S113>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_d = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S113>:4' */
      /* '<S113>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S113>:10:1' UsageModeSt==0&&... */
      /* '<S113>:10:1' PwrSupReq==1&&... */
      /* '<S113>:10:1' ~PositionLightCtrlCmd; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[26] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd02_Val())) {
        /* Transition: '<S113>:10' */
        KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S113>:8' */
        /* '<S113>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_m = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S113>:8' */
      /* '<S113>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_d > KL15PwrSply_TiLampNetSleepDelay01) {
        /* Transition: '<S113>:13' */
        KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_a = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S113>:12' */
        /* '<S113>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_m = 0U;

        /* '<S113>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_d = 0U;
      } else {
        /* '<S113>:14:1' sf_internal_predicateOutput = ~NetSleepFlag||... */
        /* '<S113>:14:1' UsageModeSt~=0||... */
        /* '<S113>:14:1' PwrSupReq==0||... */
        /* '<S113>:14:1' PositionLightCtrlCmd; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) || (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) || (tmpIRead[26] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd02_Val()) {
          /* Transition: '<S113>:14' */
          KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_a = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S113>:4' */
          /* '<S113>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_m = tmpIRead[26];

          /* '<S113>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_d = 0U;
        } else {
          /* '<S113>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_d = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_d, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S29>/NetSleep_2sDelay' */

  /* DataStoreWrite: '<S1>/Data Store Write81' */
  PwrSply_u32NetSleepTiming2701 = KL15PwrSply_Ctrl_B.NetSleepTiming_d;

  /* Chart: '<S29>/NetSleep_16minDelay' incorporates:
   *  Constant: '<S1>/Constant55'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd02_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightTimingOFFEnableCfg_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayLamp/NetSleep_16minDelay */
  /* During: PwrSplyDelayLamp/NetSleep_16minDelay */
  if (KL15PwrSply_Ctrl_DW.is_active_c7_Ctrl_Library_lx == 0U) {
    /* Entry: PwrSplyDelayLamp/NetSleep_16minDelay */
    KL15PwrSply_Ctrl_DW.is_active_c7_Ctrl_Library_lx = 1U;

    /* Entry Internal: PwrSplyDelayLamp/NetSleep_16minDelay */
    /* Transition: '<S112>:5' */
    KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S112>:4' */
    /* '<S112>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_ki = tmpIRead[26];

    /* '<S112>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_m = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_k) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S112>:12' */
      /* '<S112>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S112>:15' */
        KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S112>:4' */
        /* '<S112>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ki = tmpIRead[26];

        /* '<S112>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_m = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S112>:4' */
      /* '<S112>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S112>:10:1' UsageModeSt==0&&... */
      /* '<S112>:10:1' PwrSupReq==1&&... */
      /* '<S112>:10:1' PositionLightCtrlCmd&&... */
      /* '<S112>:10:2' PositionLightTimingOFF; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[26] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd02_Val() && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val()) {
        /* Transition: '<S112>:10' */
        KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S112>:8' */
        /* '<S112>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ki = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S112>:8' */
      /* '<S112>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_m > KL15PwrSply_TiLampNetSleepDelay02) {
        /* Transition: '<S112>:13' */
        KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_k = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S112>:12' */
        /* '<S112>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_ki = 0U;

        /* '<S112>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_m = 0U;
      } else {
        /* '<S112>:14:1' sf_internal_predicateOutput = ~NetSleepFlag||... */
        /* '<S112>:14:1' UsageModeSt~=0||... */
        /* '<S112>:14:1' PwrSupReq==0||... */
        /* '<S112>:14:1' ~PositionLightCtrlCmd||... */
        /* '<S112>:14:2' ~PositionLightTimingOFF; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) || (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) || (tmpIRead[26] == 0) || (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd02_Val()) || (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val())) {
          /* Transition: '<S112>:14' */
          KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_k = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S112>:4' */
          /* '<S112>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_ki = tmpIRead[26];

          /* '<S112>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_m = 0U;
        } else {
          /* '<S112>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_m = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_m, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S29>/NetSleep_16minDelay' */

  /* DataStoreWrite: '<S1>/Data Store Write82' */
  PwrSply_u32NetSleepTiming2702 = KL15PwrSply_Ctrl_B.NetSleepTiming_m;

  /* Product: '<S30>/Product2' incorporates:
   *  Constant: '<S30>/Constant'
   *  Constant: '<S30>/Constant1'
   *  Constant: '<S30>/Constant2'
   *  Product: '<S30>/Product'
   *  Product: '<S30>/Product1'
   */
  rtb_Product2_ku = tmpIRead_1[27] * 5U * 60U * 100U;

  /* RelationalOperator: '<S30>/Relational Operator1' incorporates:
   *  UnitDelay: '<S30>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_i != tmpIRead_0[27]);

  /* Chart: '<S30>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayLamp/TimeMode */
  /* During: PwrSplyDelayLamp/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c6_Ctrl_Library_m == 0U) {
    /* Entry: PwrSplyDelayLamp/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c6_Ctrl_Library_m = 1U;

    /* Entry Internal: PwrSplyDelayLamp/TimeMode */
    /* Transition: '<S118>:2' */
    KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S118>:1' */
    /* '<S118>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_m = tmpIRead[27];

    /* '<S118>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_l = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_g) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S118>:1' */
      /* '<S118>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S118>:5:1' PwrSupReq==1&&... */
      /* '<S118>:5:1' ~CCULostComm; */
      if ((rtb_Product2_ku > 0U) && (tmpIRead[27] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S118>:5' */
        KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S118>:4' */
        /* '<S118>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_m = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S118>:11' */
      /* '<S118>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[27] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S118>:18' */
        KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S118>:4' */
        /* '<S118>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_m = 1U;
      } else {
        /* '<S118>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S118>:19:1' CCULostComm; */
        if ((rtb_Product2_ku == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S118>:19' */
          KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S118>:1' */
          /* '<S118>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_m = tmpIRead[27];

          /* '<S118>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_l = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S118>:4' */
      /* '<S118>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S118>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S118>:9' */
        KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S118>:1' */
        /* '<S118>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_m = tmpIRead[27];

        /* '<S118>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_l = 0U;
      } else {
        /* '<S118>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S118>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_l > rtb_Product2_ku) || (tmpIRead[27] == 0)) {
          /* Transition: '<S118>:16' */
          KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S118>:11' */
          /* '<S118>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_m = 0U;

          /* '<S118>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_l = 0U;
        } else {
          /* '<S118>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_l = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_l, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S30>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write83' */
  PwrSply_u32TimeModeTiming28 = KL15PwrSply_Ctrl_B.TimeModeTiming_l;

  /* Chart: '<S30>/LostComm' incorporates:
   *  Constant: '<S1>/Constant56'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayLamp/LostComm */
  /* During: PwrSplyDelayLamp/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c4_Ctrl_Library_m == 0U) {
    /* Entry: PwrSplyDelayLamp/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c4_Ctrl_Library_m = 1U;

    /* Entry Internal: PwrSplyDelayLamp/LostComm */
    /* Transition: '<S115>:5' */
    KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S115>:4' */
    /* '<S115>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq_b = tmpIRead[27];

    /* '<S115>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming_o = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_l) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S115>:12' */
      /* '<S115>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S115>:14' */
        KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S115>:4' */
        /* '<S115>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_b = tmpIRead[27];

        /* '<S115>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_o = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S115>:4' */
      /* '<S115>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S115>:10:1' PwrSupReq==1&&... */
      /* '<S115>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[27] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S115>:10' */
        KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S115>:7' */
        /* '<S115>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_b = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S115>:7' */
      /* '<S115>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S115>:11:1' PwrSupReq==0||... */
      /* '<S115>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[27] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S115>:11' */
        KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S115>:4' */
        /* '<S115>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq_b = tmpIRead[27];

        /* '<S115>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming_o = 0U;
      } else {
        /* '<S115>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming_o > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S115>:13' */
          KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library_l = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S115>:12' */
          /* '<S115>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq_b = 0U;

          /* '<S115>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming_o = 0U;
        } else {
          /* '<S115>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming_o = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming_o, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S30>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write84' */
  PwrSply_u32LostCommTiming28 = KL15PwrSply_Ctrl_B.LostCommTiming_o;

  /* Chart: '<S30>/NetSleep_2sDelay' incorporates:
   *  Constant: '<S1>/Constant57'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd01_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayLamp/NetSleep_2sDelay */
  /* During: PwrSplyDelayLamp/NetSleep_2sDelay */
  if (KL15PwrSply_Ctrl_DW.is_active_c5_Ctrl_Library_i == 0U) {
    /* Entry: PwrSplyDelayLamp/NetSleep_2sDelay */
    KL15PwrSply_Ctrl_DW.is_active_c5_Ctrl_Library_i = 1U;

    /* Entry Internal: PwrSplyDelayLamp/NetSleep_2sDelay */
    /* Transition: '<S117>:5' */
    KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S117>:4' */
    /* '<S117>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_k = tmpIRead[27];

    /* '<S117>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_b = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_j) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S117>:12' */
      /* '<S117>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S117>:15' */
        KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S117>:4' */
        /* '<S117>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_k = tmpIRead[27];

        /* '<S117>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_b = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S117>:4' */
      /* '<S117>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S117>:10:1' UsageModeSt==0&&... */
      /* '<S117>:10:1' PwrSupReq==1&&... */
      /* '<S117>:10:1' ~PositionLightCtrlCmd; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[27] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd01_Val())) {
        /* Transition: '<S117>:10' */
        KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S117>:8' */
        /* '<S117>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_k = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S117>:8' */
      /* '<S117>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_b > KL15PwrSply_TiLampNetSleepDelay01) {
        /* Transition: '<S117>:13' */
        KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_j = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S117>:12' */
        /* '<S117>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_k = 0U;

        /* '<S117>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_b = 0U;
      } else {
        /* '<S117>:14:1' sf_internal_predicateOutput = ~NetSleepFlag||... */
        /* '<S117>:14:1' UsageModeSt~=0||... */
        /* '<S117>:14:1' PwrSupReq==0||... */
        /* '<S117>:14:1' PositionLightCtrlCmd; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) || (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) || (tmpIRead[27] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd01_Val()) {
          /* Transition: '<S117>:14' */
          KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library_j = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S117>:4' */
          /* '<S117>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_k = tmpIRead[27];

          /* '<S117>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_b = 0U;
        } else {
          /* '<S117>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_b = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_b, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S30>/NetSleep_2sDelay' */

  /* DataStoreWrite: '<S1>/Data Store Write85' */
  PwrSply_u32NetSleepTiming2801 = KL15PwrSply_Ctrl_B.NetSleepTiming_b;

  /* Chart: '<S30>/NetSleep_16minDelay' incorporates:
   *  Constant: '<S1>/Constant58'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd01_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightTimingOFFEnableCfg_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayLamp/NetSleep_16minDelay */
  /* During: PwrSplyDelayLamp/NetSleep_16minDelay */
  if (KL15PwrSply_Ctrl_DW.is_active_c7_Ctrl_Library_l == 0U) {
    /* Entry: PwrSplyDelayLamp/NetSleep_16minDelay */
    KL15PwrSply_Ctrl_DW.is_active_c7_Ctrl_Library_l = 1U;

    /* Entry Internal: PwrSplyDelayLamp/NetSleep_16minDelay */
    /* Transition: '<S116>:5' */
    KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S116>:4' */
    /* '<S116>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_l = tmpIRead[27];

    /* '<S116>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_l = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_l) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S116>:12' */
      /* '<S116>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S116>:15' */
        KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S116>:4' */
        /* '<S116>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_l = tmpIRead[27];

        /* '<S116>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_l = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S116>:4' */
      /* '<S116>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S116>:10:1' UsageModeSt==0&&... */
      /* '<S116>:10:1' PwrSupReq==1&&... */
      /* '<S116>:10:1' PositionLightCtrlCmd&&... */
      /* '<S116>:10:2' PositionLightTimingOFF; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[27] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd01_Val() && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val()) {
        /* Transition: '<S116>:10' */
        KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S116>:8' */
        /* '<S116>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_l = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S116>:8' */
      /* '<S116>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_l > KL15PwrSply_TiLampNetSleepDelay02) {
        /* Transition: '<S116>:13' */
        KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_l = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S116>:12' */
        /* '<S116>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_l = 0U;

        /* '<S116>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_l = 0U;
      } else {
        /* '<S116>:14:1' sf_internal_predicateOutput = ~NetSleepFlag||... */
        /* '<S116>:14:1' UsageModeSt~=0||... */
        /* '<S116>:14:1' PwrSupReq==0||... */
        /* '<S116>:14:1' ~PositionLightCtrlCmd||... */
        /* '<S116>:14:2' ~PositionLightTimingOFF; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) || (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) || (tmpIRead[27] == 0) || (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd01_Val()) || (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val())) {
          /* Transition: '<S116>:14' */
          KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library_l = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S116>:4' */
          /* '<S116>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_l = tmpIRead[27];

          /* '<S116>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_l = 0U;
        } else {
          /* '<S116>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_l = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_l, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S30>/NetSleep_16minDelay' */

  /* DataStoreWrite: '<S1>/Data Store Write86' */
  PwrSply_u32NetSleepTiming2802 = KL15PwrSply_Ctrl_B.NetSleepTiming_l;

  /* Product: '<S31>/Product2' incorporates:
   *  Constant: '<S31>/Constant'
   *  Constant: '<S31>/Constant1'
   *  Constant: '<S31>/Constant2'
   *  Product: '<S31>/Product'
   *  Product: '<S31>/Product1'
   */
  rtb_Product2_ce = tmpIRead_1[28] * 5U * 60U * 100U;

  /* RelationalOperator: '<S31>/Relational Operator1' incorporates:
   *  UnitDelay: '<S31>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_lb != tmpIRead_0[28]);

  /* Chart: '<S31>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayLamp/TimeMode */
  /* During: PwrSplyDelayLamp/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c6_Ctrl_Library == 0U) {
    /* Entry: PwrSplyDelayLamp/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c6_Ctrl_Library = 1U;

    /* Entry Internal: PwrSplyDelayLamp/TimeMode */
    /* Transition: '<S122>:2' */
    KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S122>:1' */
    /* '<S122>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq = tmpIRead[28];

    /* '<S122>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S122>:1' */
      /* '<S122>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S122>:5:1' PwrSupReq==1&&... */
      /* '<S122>:5:1' ~CCULostComm; */
      if ((rtb_Product2_ce > 0U) && (tmpIRead[28] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S122>:5' */
        KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S122>:4' */
        /* '<S122>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S122>:11' */
      /* '<S122>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[28] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S122>:18' */
        KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S122>:4' */
        /* '<S122>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq = 1U;
      } else {
        /* '<S122>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S122>:19:1' CCULostComm; */
        if ((rtb_Product2_ce == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S122>:19' */
          KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S122>:1' */
          /* '<S122>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq = tmpIRead[28];

          /* '<S122>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S122>:4' */
      /* '<S122>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S122>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S122>:9' */
        KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S122>:1' */
        /* '<S122>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq = tmpIRead[28];

        /* '<S122>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming = 0U;
      } else {
        /* '<S122>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S122>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming > rtb_Product2_ce) || (tmpIRead[28] == 0)) {
          /* Transition: '<S122>:16' */
          KL15PwrSply_Ctrl_DW.is_c6_Ctrl_Library = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S122>:11' */
          /* '<S122>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq = 0U;

          /* '<S122>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming = 0U;
        } else {
          /* '<S122>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S31>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write87' */
  PwrSply_u32TimeModeTiming29 = KL15PwrSply_Ctrl_B.TimeModeTiming;

  /* Chart: '<S31>/LostComm' incorporates:
   *  Constant: '<S1>/Constant59'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   */
  /* Gateway: PwrSplyDelayLamp/LostComm */
  /* During: PwrSplyDelayLamp/LostComm */
  if (KL15PwrSply_Ctrl_DW.is_active_c4_Ctrl_Library == 0U) {
    /* Entry: PwrSplyDelayLamp/LostComm */
    KL15PwrSply_Ctrl_DW.is_active_c4_Ctrl_Library = 1U;

    /* Entry Internal: PwrSplyDelayLamp/LostComm */
    /* Transition: '<S119>:5' */
    KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S119>:4' */
    /* '<S119>:4:1' LostCommCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.LostCommCoornReq = tmpIRead[28];

    /* '<S119>:4:1' LostCommTiming=0; */
    KL15PwrSply_Ctrl_B.LostCommTiming = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library) {
     case KL15PwrSply_IN_LostCommDelayEnd:
      /* During 'LostCommDelayEnd': '<S119>:12' */
      /* '<S119>:14:1' sf_internal_predicateOutput = ~CCULostComm; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S119>:14' */
        KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S119>:4' */
        /* '<S119>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq = tmpIRead[28];

        /* '<S119>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S119>:4' */
      /* '<S119>:10:1' sf_internal_predicateOutput = CCULostComm&&... */
      /* '<S119>:10:1' PwrSupReq==1&&... */
      /* '<S119>:10:1' ~VehSpdTkOvr; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val() && (tmpIRead[28] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val())) {
        /* Transition: '<S119>:10' */
        KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library = KL15PwrSply_Ctrl_IN_TimeingSt;

        /* Entry 'TimeingSt': '<S119>:7' */
        /* '<S119>:7:1' LostCommCoornReq=1; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq = 1U;
      }
      break;

     default:
      /* During 'TimeingSt': '<S119>:7' */
      /* '<S119>:11:1' sf_internal_predicateOutput = ~CCULostComm||... */
      /* '<S119>:11:1' PwrSupReq==0||... */
      /* '<S119>:11:1' VehSpdTkOvr; */
      if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) || (tmpIRead[28] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
        /* Transition: '<S119>:11' */
        KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S119>:4' */
        /* '<S119>:4:1' LostCommCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.LostCommCoornReq = tmpIRead[28];

        /* '<S119>:4:1' LostCommTiming=0; */
        KL15PwrSply_Ctrl_B.LostCommTiming = 0U;
      } else {
        /* '<S119>:13:1' sf_internal_predicateOutput = LostCommTiming>LostCommDelayTime; */
        if (KL15PwrSply_Ctrl_B.LostCommTiming > KL15PwrSply_TiLostCommDelay) {
          /* Transition: '<S119>:13' */
          KL15PwrSply_Ctrl_DW.is_c4_Ctrl_Library = KL15PwrSply_IN_LostCommDelayEnd;

          /* Entry 'LostCommDelayEnd': '<S119>:12' */
          /* '<S119>:12:1' LostCommCoornReq=0; */
          KL15PwrSply_Ctrl_B.LostCommCoornReq = 0U;

          /* '<S119>:12:1' LostCommTiming=0; */
          KL15PwrSply_Ctrl_B.LostCommTiming = 0U;
        } else {
          /* '<S119>:7:1' LostCommTiming = LostCommTiming + 1; */
          KL15PwrSply_Ctrl_B.LostCommTiming = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.LostCommTiming, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S31>/LostComm' */

  /* DataStoreWrite: '<S1>/Data Store Write88' */
  PwrSply_u32LostCommTiming29 = KL15PwrSply_Ctrl_B.LostCommTiming;

  /* Chart: '<S31>/NetSleep_2sDelay' incorporates:
   *  Constant: '<S1>/Constant60'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd02_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayLamp/NetSleep_2sDelay */
  /* During: PwrSplyDelayLamp/NetSleep_2sDelay */
  if (KL15PwrSply_Ctrl_DW.is_active_c5_Ctrl_Library == 0U) {
    /* Entry: PwrSplyDelayLamp/NetSleep_2sDelay */
    KL15PwrSply_Ctrl_DW.is_active_c5_Ctrl_Library = 1U;

    /* Entry Internal: PwrSplyDelayLamp/NetSleep_2sDelay */
    /* Transition: '<S121>:5' */
    KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S121>:4' */
    /* '<S121>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq = tmpIRead[28];

    /* '<S121>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S121>:12' */
      /* '<S121>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S121>:15' */
        KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S121>:4' */
        /* '<S121>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq = tmpIRead[28];

        /* '<S121>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S121>:4' */
      /* '<S121>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S121>:10:1' UsageModeSt==0&&... */
      /* '<S121>:10:1' PwrSupReq==1&&... */
      /* '<S121>:10:1' ~PositionLightCtrlCmd; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[28] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd02_Val())) {
        /* Transition: '<S121>:10' */
        KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S121>:8' */
        /* '<S121>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S121>:8' */
      /* '<S121>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming > KL15PwrSply_TiLampNetSleepDelay01) {
        /* Transition: '<S121>:13' */
        KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S121>:12' */
        /* '<S121>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq = 0U;

        /* '<S121>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming = 0U;
      } else {
        /* '<S121>:14:1' sf_internal_predicateOutput = ~NetSleepFlag||... */
        /* '<S121>:14:1' UsageModeSt~=0||... */
        /* '<S121>:14:1' PwrSupReq==0||... */
        /* '<S121>:14:1' PositionLightCtrlCmd; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) || (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) || (tmpIRead[28] == 0) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd02_Val()) {
          /* Transition: '<S121>:14' */
          KL15PwrSply_Ctrl_DW.is_c5_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S121>:4' */
          /* '<S121>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq = tmpIRead[28];

          /* '<S121>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming = 0U;
        } else {
          /* '<S121>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S31>/NetSleep_2sDelay' */

  /* DataStoreWrite: '<S1>/Data Store Write89' */
  PwrSply_u32NetSleepTiming2901 = KL15PwrSply_Ctrl_B.NetSleepTiming;

  /* Product: '<S4>/Product2' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S4>/Constant1'
   *  Constant: '<S4>/Constant2'
   *  Product: '<S4>/Product'
   *  Product: '<S4>/Product1'
   */
  rtb_Product2_p = tmpIRead_1[3] * 5U * 60U * 100U;

  /* RelationalOperator: '<S4>/Relational Operator1' incorporates:
   *  UnitDelay: '<S4>/Unit Delay'
   */
  rtb_RelationalOperator1 = (KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_do != tmpIRead_0[3]);

  /* Chart: '<S4>/TimeMode' incorporates:
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   */
  /* Gateway: PwrSplyDelayCommon/TimeMode */
  /* During: PwrSplyDelayCommon/TimeMode */
  if (KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_g == 0U) {
    /* Entry: PwrSplyDelayCommon/TimeMode */
    KL15PwrSply_Ctrl_DW.is_active_c1_Ctrl_Library_g = 1U;

    /* Entry Internal: PwrSplyDelayCommon/TimeMode */
    /* Transition: '<S37>:2' */
    KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_Normal_n;

    /* Entry 'Normal': '<S37>:1' */
    /* '<S37>:1:1' TimeModeCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3u = tmpIRead[3];

    /* '<S37>:1:1' TimeModeTiming=0; */
    KL15PwrSply_Ctrl_B.TimeModeTiming_aw = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_g) {
     case KL15PwrSply_Ctrl_IN_Normal_n:
      /* During 'Normal': '<S37>:1' */
      /* '<S37>:5:1' sf_internal_predicateOutput = PwrSupTime>0&&... */
      /* '<S37>:5:1' PwrSupReq==1&&... */
      /* '<S37>:5:1' ~CCULostComm; */
      if ((rtb_Product2_p > 0U) && (tmpIRead[3] == 1) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
        /* Transition: '<S37>:5' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S37>:4' */
        /* '<S37>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3u = 1U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_PwrSupOff:
      /* During 'PwrSupOff': '<S37>:11' */
      /* '<S37>:18:1' sf_internal_predicateOutput = PwrSupReq==1&&flgRcvCnt; */
      if ((tmpIRead[3] == 1) && rtb_RelationalOperator1) {
        /* Transition: '<S37>:18' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S37>:4' */
        /* '<S37>:4:1' TimeModeCoornReq=1; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3u = 1U;
      } else {
        /* '<S37>:19:1' sf_internal_predicateOutput = PwrSupTime==0||... */
        /* '<S37>:19:1' CCULostComm; */
        if ((rtb_Product2_p == 0U) || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
          /* Transition: '<S37>:19' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_Normal_n;

          /* Entry 'Normal': '<S37>:1' */
          /* '<S37>:1:1' TimeModeCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3u = tmpIRead[3];

          /* '<S37>:1:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_aw = 0U;
        }
      }
      break;

     default:
      /* During 'TimingSt': '<S37>:4' */
      /* '<S37>:9:1' sf_internal_predicateOutput = flgRcvCnt||... */
      /* '<S37>:9:1' CCULostComm; */
      if (rtb_RelationalOperator1 || Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
        /* Transition: '<S37>:9' */
        KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_Normal_n;

        /* Entry 'Normal': '<S37>:1' */
        /* '<S37>:1:1' TimeModeCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3u = tmpIRead[3];

        /* '<S37>:1:1' TimeModeTiming=0; */
        KL15PwrSply_Ctrl_B.TimeModeTiming_aw = 0U;
      } else {
        /* '<S37>:16:1' sf_internal_predicateOutput = TimeModeTiming>PwrSupTime||... */
        /* '<S37>:16:1' PwrSupReq==0; */
        if ((KL15PwrSply_Ctrl_B.TimeModeTiming_aw > rtb_Product2_p) || (tmpIRead[3] == 0)) {
          /* Transition: '<S37>:16' */
          KL15PwrSply_Ctrl_DW.is_c1_Ctrl_Library_g = KL15PwrSply_Ctrl_IN_PwrSupOff;

          /* Entry 'PwrSupOff': '<S37>:11' */
          /* '<S37>:11:1' TimeModeCoornReq=0; */
          KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3u = 0U;

          /* '<S37>:11:1' TimeModeTiming=0; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_aw = 0U;
        } else {
          /* '<S37>:4:1' TimeModeTiming =TimeModeTiming + 1; */
          KL15PwrSply_Ctrl_B.TimeModeTiming_aw = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.TimeModeTiming_aw, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S4>/TimeMode' */

  /* DataStoreWrite: '<S1>/Data Store Write9' */
  PwrSply_u32TimeModeTiming04 = KL15PwrSply_Ctrl_B.TimeModeTiming_aw;

  /* Chart: '<S31>/NetSleep_16minDelay' incorporates:
   *  Constant: '<S1>/Constant61'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd02_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightTimingOFFEnableCfg_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   */
  /* Gateway: PwrSplyDelayLamp/NetSleep_16minDelay */
  /* During: PwrSplyDelayLamp/NetSleep_16minDelay */
  if (KL15PwrSply_Ctrl_DW.is_active_c7_Ctrl_Library == 0U) {
    /* Entry: PwrSplyDelayLamp/NetSleep_16minDelay */
    KL15PwrSply_Ctrl_DW.is_active_c7_Ctrl_Library = 1U;

    /* Entry Internal: PwrSplyDelayLamp/NetSleep_16minDelay */
    /* Transition: '<S120>:5' */
    KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

    /* Entry 'Normal': '<S120>:4' */
    /* '<S120>:4:1' NetSleepCoornReq=PwrSupReq; */
    KL15PwrSply_Ctrl_B.NetSleepCoornReq_c = tmpIRead[28];

    /* '<S120>:4:1' NetSleepTiming=0; */
    KL15PwrSply_Ctrl_B.NetSleepTiming_c = 0U;
  } else {
    switch (KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library) {
     case KL15PwrSply_IN_NetSleepDelayEnd:
      /* During 'NetSleepDelayEnd': '<S120>:12' */
      /* '<S120>:15:1' sf_internal_predicateOutput = ~NetSleepFlag; */
      if (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) {
        /* Transition: '<S120>:15' */
        KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

        /* Entry 'Normal': '<S120>:4' */
        /* '<S120>:4:1' NetSleepCoornReq=PwrSupReq; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_c = tmpIRead[28];

        /* '<S120>:4:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_c = 0U;
      }
      break;

     case KL15PwrSply_Ctrl_IN_Normal:
      /* During 'Normal': '<S120>:4' */
      /* '<S120>:10:1' sf_internal_predicateOutput = NetSleepFlag&&... */
      /* '<S120>:10:1' UsageModeSt==0&&... */
      /* '<S120>:10:1' PwrSupReq==1&&... */
      /* '<S120>:10:1' PositionLightCtrlCmd&&... */
      /* '<S120>:10:2' PositionLightTimingOFF; */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0) && (tmpIRead[28] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd02_Val() && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val()) {
        /* Transition: '<S120>:10' */
        KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library = KL15PwrSply_Ctrl_IN_TimingSt;

        /* Entry 'TimingSt': '<S120>:8' */
        /* '<S120>:8:1' NetSleepCoornReq=1; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_c = 1U;
      }
      break;

     default:
      /* During 'TimingSt': '<S120>:8' */
      /* '<S120>:13:1' sf_internal_predicateOutput = NetSleepTiming>NetSleepDelayTime; */
      if (KL15PwrSply_Ctrl_B.NetSleepTiming_c > KL15PwrSply_TiLampNetSleepDelay02) {
        /* Transition: '<S120>:13' */
        KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library = KL15PwrSply_IN_NetSleepDelayEnd;

        /* Entry 'NetSleepDelayEnd': '<S120>:12' */
        /* '<S120>:12:1' NetSleepCoornReq=0; */
        KL15PwrSply_Ctrl_B.NetSleepCoornReq_c = 0U;

        /* '<S120>:12:1' NetSleepTiming=0; */
        KL15PwrSply_Ctrl_B.NetSleepTiming_c = 0U;
      } else {
        /* '<S120>:14:1' sf_internal_predicateOutput = ~NetSleepFlag||... */
        /* '<S120>:14:1' UsageModeSt~=0||... */
        /* '<S120>:14:1' PwrSupReq==0||... */
        /* '<S120>:14:1' ~PositionLightCtrlCmd||... */
        /* '<S120>:14:2' ~PositionLightTimingOFF; */
        if ((!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val()) || (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() != 0) || (tmpIRead[28] == 0) || (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd02_Val()) || (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val())) {
          /* Transition: '<S120>:14' */
          KL15PwrSply_Ctrl_DW.is_c7_Ctrl_Library = KL15PwrSply_Ctrl_IN_Normal;

          /* Entry 'Normal': '<S120>:4' */
          /* '<S120>:4:1' NetSleepCoornReq=PwrSupReq; */
          KL15PwrSply_Ctrl_B.NetSleepCoornReq_c = tmpIRead[28];

          /* '<S120>:4:1' NetSleepTiming=0; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_c = 0U;
        } else {
          /* '<S120>:8:1' NetSleepTiming=NetSleepTiming+1; */
          KL15PwrSply_Ctrl_B.NetSleepTiming_c = Mfx_Add_u32u32_u32(KL15PwrSply_Ctrl_B.NetSleepTiming_c, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S31>/NetSleep_16minDelay' */

  /* DataStoreWrite: '<S1>/Data Store Write90' */
  PwrSply_u32NetSleepTiming2902 = KL15PwrSply_Ctrl_B.NetSleepTiming_c;

  /* MultiPortSwitch: '<S31>/Multiport Switch' incorporates:
   *  Constant: '<S31>/Constant3'
   *  Constant: '<S31>/Constant4'
   *  Constant: '<S31>/Constant5'
   *  Constant: '<S31>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   *  Logic: '<S31>/Logical Operator1'
   *  Logic: '<S31>/Logical Operator2'
   *  Logic: '<S31>/Logical Operator3'
   *  MultiPortSwitch: '<S31>/Multiport Switch1'
   *  MultiPortSwitch: '<S31>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S31>/Relational Operator'
   *  RelationalOperator: '<S31>/Relational Operator2'
   *  RelationalOperator: '<S31>/Relational Operator3'
   *  RelationalOperator: '<S31>/Relational Operator4'
   *  RelationalOperator: '<S31>/Relational Operator5'
   */
  if ((tmpIRead[28] == 1) && (rtb_Product2_ce > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[28] = KL15PwrSply_Ctrl_B.TimeModeCoornReq;
  } else if ((tmpIRead[28] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S31>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[28] = KL15PwrSply_Ctrl_B.LostCommCoornReq;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0)) {
    /* Switch: '<S31>/Switch' incorporates:
     *  MultiPortSwitch: '<S31>/Multiport Switch1'
     *  MultiPortSwitch: '<S31>/Multiport Switch2'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    if (tmpIRead[28] != 0) {
      /* MultiPortSwitch: '<S31>/Multiport Switch3' incorporates:
       *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd02_Val'
       *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
       */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd02_Val()) {
        /* MultiPortSwitch: '<S31>/Multiport Switch4' incorporates:
         *  Constant: '<S31>/Constant7'
         *  Inport: '<Root>/PwrSply_bPositionLightTimingOFFEnableCfg_Val'
         *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
         */
        if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val()) {
          tmpIWrite[28] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_c;
        } else {
          tmpIWrite[28] = 1U;
        }

        /* End of MultiPortSwitch: '<S31>/Multiport Switch4' */
      } else {
        tmpIWrite[28] = KL15PwrSply_Ctrl_B.NetSleepCoornReq;
      }

      /* End of MultiPortSwitch: '<S31>/Multiport Switch3' */
    } else {
      tmpIWrite[28] = tmpIRead[28];
    }

    /* End of Switch: '<S31>/Switch' */
  } else {
    /* MultiPortSwitch: '<S31>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S31>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[28] = tmpIRead[28];
  }

  /* End of MultiPortSwitch: '<S31>/Multiport Switch' */

  /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S4>/Constant3'
   *  Constant: '<S4>/Constant4'
   *  Constant: '<S4>/Constant5'
   *  Constant: '<S4>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S4>/Logical Operator1'
   *  Logic: '<S4>/Logical Operator2'
   *  Logic: '<S4>/Logical Operator3'
   *  MultiPortSwitch: '<S4>/Multiport Switch1'
   *  MultiPortSwitch: '<S4>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S4>/Relational Operator'
   *  RelationalOperator: '<S4>/Relational Operator2'
   *  RelationalOperator: '<S4>/Relational Operator3'
   *  RelationalOperator: '<S4>/Relational Operator4'
   *  RelationalOperator: '<S4>/Relational Operator5'
   */
  if ((tmpIRead[3] == 1) && (rtb_Product2_p > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[3] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3u;
  } else if ((tmpIRead[3] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S4>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[3] = KL15PwrSply_Ctrl_B.LostCommCoornReq_mp;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay04 > 0U)) {
    /* MultiPortSwitch: '<S4>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S4>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[3] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_a5;
  } else {
    /* MultiPortSwitch: '<S4>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S4>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[3] = tmpIRead[3];
  }

  /* End of MultiPortSwitch: '<S4>/Multiport Switch' */

  /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
   *  Constant: '<S30>/Constant3'
   *  Constant: '<S30>/Constant4'
   *  Constant: '<S30>/Constant5'
   *  Constant: '<S30>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   *  Logic: '<S30>/Logical Operator1'
   *  Logic: '<S30>/Logical Operator2'
   *  Logic: '<S30>/Logical Operator3'
   *  MultiPortSwitch: '<S30>/Multiport Switch1'
   *  MultiPortSwitch: '<S30>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S30>/Relational Operator'
   *  RelationalOperator: '<S30>/Relational Operator2'
   *  RelationalOperator: '<S30>/Relational Operator3'
   *  RelationalOperator: '<S30>/Relational Operator4'
   *  RelationalOperator: '<S30>/Relational Operator5'
   */
  if ((tmpIRead[27] == 1) && (rtb_Product2_ku > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[27] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_m;
  } else if ((tmpIRead[27] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[27] = KL15PwrSply_Ctrl_B.LostCommCoornReq_b;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0)) {
    /* Switch: '<S30>/Switch' incorporates:
     *  MultiPortSwitch: '<S30>/Multiport Switch1'
     *  MultiPortSwitch: '<S30>/Multiport Switch2'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    if (tmpIRead[27] != 0) {
      /* MultiPortSwitch: '<S30>/Multiport Switch3' incorporates:
       *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd01_Val'
       *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
       */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd01_Val()) {
        /* MultiPortSwitch: '<S30>/Multiport Switch4' incorporates:
         *  Constant: '<S30>/Constant7'
         *  Inport: '<Root>/PwrSply_bPositionLightTimingOFFEnableCfg_Val'
         *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
         */
        if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val()) {
          tmpIWrite[27] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_l;
        } else {
          tmpIWrite[27] = 1U;
        }

        /* End of MultiPortSwitch: '<S30>/Multiport Switch4' */
      } else {
        tmpIWrite[27] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_k;
      }

      /* End of MultiPortSwitch: '<S30>/Multiport Switch3' */
    } else {
      tmpIWrite[27] = tmpIRead[27];
    }

    /* End of Switch: '<S30>/Switch' */
  } else {
    /* MultiPortSwitch: '<S30>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S30>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[27] = tmpIRead[27];
  }

  /* End of MultiPortSwitch: '<S30>/Multiport Switch' */

  /* MultiPortSwitch: '<S29>/Multiport Switch' incorporates:
   *  Constant: '<S29>/Constant3'
   *  Constant: '<S29>/Constant4'
   *  Constant: '<S29>/Constant5'
   *  Constant: '<S29>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   *  Logic: '<S29>/Logical Operator1'
   *  Logic: '<S29>/Logical Operator2'
   *  Logic: '<S29>/Logical Operator3'
   *  MultiPortSwitch: '<S29>/Multiport Switch1'
   *  MultiPortSwitch: '<S29>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S29>/Relational Operator'
   *  RelationalOperator: '<S29>/Relational Operator2'
   *  RelationalOperator: '<S29>/Relational Operator3'
   *  RelationalOperator: '<S29>/Relational Operator4'
   *  RelationalOperator: '<S29>/Relational Operator5'
   */
  if ((tmpIRead[26] == 1) && (rtb_Product2_pp > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[26] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_mt;
  } else if ((tmpIRead[26] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S29>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[26] = KL15PwrSply_Ctrl_B.LostCommCoornReq_i;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0)) {
    /* Switch: '<S29>/Switch' incorporates:
     *  MultiPortSwitch: '<S29>/Multiport Switch1'
     *  MultiPortSwitch: '<S29>/Multiport Switch2'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    if (tmpIRead[26] != 0) {
      /* MultiPortSwitch: '<S29>/Multiport Switch3' incorporates:
       *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd02_Val'
       *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
       */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd02_Val()) {
        /* MultiPortSwitch: '<S29>/Multiport Switch4' incorporates:
         *  Constant: '<S29>/Constant7'
         *  Inport: '<Root>/PwrSply_bPositionLightTimingOFFEnableCfg_Val'
         *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
         */
        if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val()) {
          tmpIWrite[26] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_ki;
        } else {
          tmpIWrite[26] = 1U;
        }

        /* End of MultiPortSwitch: '<S29>/Multiport Switch4' */
      } else {
        tmpIWrite[26] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_m;
      }

      /* End of MultiPortSwitch: '<S29>/Multiport Switch3' */
    } else {
      tmpIWrite[26] = tmpIRead[26];
    }

    /* End of Switch: '<S29>/Switch' */
  } else {
    /* MultiPortSwitch: '<S29>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S29>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[26] = tmpIRead[26];
  }

  /* End of MultiPortSwitch: '<S29>/Multiport Switch' */

  /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S3>/Constant3'
   *  Constant: '<S3>/Constant4'
   *  Constant: '<S3>/Constant5'
   *  Constant: '<S3>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S3>/Logical Operator1'
   *  Logic: '<S3>/Logical Operator2'
   *  Logic: '<S3>/Logical Operator3'
   *  MultiPortSwitch: '<S3>/Multiport Switch1'
   *  MultiPortSwitch: '<S3>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S3>/Relational Operator'
   *  RelationalOperator: '<S3>/Relational Operator2'
   *  RelationalOperator: '<S3>/Relational Operator3'
   *  RelationalOperator: '<S3>/Relational Operator4'
   *  RelationalOperator: '<S3>/Relational Operator5'
   */
  if ((tmpIRead[2] == 1) && (rtb_Product2_pn > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[2] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_jw;
  } else if ((tmpIRead[2] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S3>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[2] = KL15PwrSply_Ctrl_B.LostCommCoornReq_e0;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay03 > 0U)) {
    /* MultiPortSwitch: '<S3>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S3>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[2] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_nj;
  } else {
    /* MultiPortSwitch: '<S3>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S3>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[2] = tmpIRead[2];
  }

  /* End of MultiPortSwitch: '<S3>/Multiport Switch' */

  /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
   *  Constant: '<S28>/Constant3'
   *  Constant: '<S28>/Constant4'
   *  Constant: '<S28>/Constant5'
   *  Constant: '<S28>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   *  Logic: '<S28>/Logical Operator1'
   *  Logic: '<S28>/Logical Operator2'
   *  Logic: '<S28>/Logical Operator3'
   *  MultiPortSwitch: '<S28>/Multiport Switch1'
   *  MultiPortSwitch: '<S28>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S28>/Relational Operator'
   *  RelationalOperator: '<S28>/Relational Operator2'
   *  RelationalOperator: '<S28>/Relational Operator3'
   *  RelationalOperator: '<S28>/Relational Operator4'
   *  RelationalOperator: '<S28>/Relational Operator5'
   */
  if ((tmpIRead[25] == 1) && (rtb_Product2_j0 > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[25] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_h;
  } else if ((tmpIRead[25] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[25] = KL15PwrSply_Ctrl_B.LostCommCoornReq_l;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val() == 0)) {
    /* Switch: '<S28>/Switch' incorporates:
     *  MultiPortSwitch: '<S28>/Multiport Switch1'
     *  MultiPortSwitch: '<S28>/Multiport Switch2'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    if (tmpIRead[25] != 0) {
      /* MultiPortSwitch: '<S28>/Multiport Switch3' incorporates:
       *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd01_Val'
       *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
       */
      if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightCtrlCmd01_Val()) {
        /* MultiPortSwitch: '<S28>/Multiport Switch4' incorporates:
         *  Constant: '<S28>/Constant7'
         *  Inport: '<Root>/PwrSply_bPositionLightTimingOFFEnableCfg_Val'
         *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
         */
        if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val()) {
          tmpIWrite[25] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_b;
        } else {
          tmpIWrite[25] = 1U;
        }

        /* End of MultiPortSwitch: '<S28>/Multiport Switch4' */
      } else {
        tmpIWrite[25] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_h;
      }

      /* End of MultiPortSwitch: '<S28>/Multiport Switch3' */
    } else {
      tmpIWrite[25] = tmpIRead[25];
    }

    /* End of Switch: '<S28>/Switch' */
  } else {
    /* MultiPortSwitch: '<S28>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S28>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[25] = tmpIRead[25];
  }

  /* End of MultiPortSwitch: '<S28>/Multiport Switch' */

  /* MultiPortSwitch: '<S25>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant49'
   *  Constant: '<S25>/Constant3'
   *  Constant: '<S25>/Constant4'
   *  Constant: '<S25>/Constant5'
   *  Constant: '<S25>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S25>/Logical Operator1'
   *  Logic: '<S25>/Logical Operator2'
   *  Logic: '<S25>/Logical Operator3'
   *  MultiPortSwitch: '<S25>/Multiport Switch1'
   *  MultiPortSwitch: '<S25>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S25>/Relational Operator'
   *  RelationalOperator: '<S25>/Relational Operator2'
   *  RelationalOperator: '<S25>/Relational Operator3'
   *  RelationalOperator: '<S25>/Relational Operator4'
   *  RelationalOperator: '<S25>/Relational Operator5'
   */
  if ((tmpIRead[24] == 1) && (rtb_Product2_mt > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[24] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_i;
  } else if ((tmpIRead[24] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S25>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[24] = KL15PwrSply_Ctrl_B.LostCommCoornReq_pr;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay25 > 0U)) {
    /* MultiPortSwitch: '<S25>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S25>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[24] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_he;
  } else {
    /* MultiPortSwitch: '<S25>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S25>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[24] = tmpIRead[24];
  }

  /* End of MultiPortSwitch: '<S25>/Multiport Switch' */

  /* MultiPortSwitch: '<S24>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant45'
   *  Constant: '<S24>/Constant3'
   *  Constant: '<S24>/Constant4'
   *  Constant: '<S24>/Constant5'
   *  Constant: '<S24>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S24>/Logical Operator1'
   *  Logic: '<S24>/Logical Operator2'
   *  Logic: '<S24>/Logical Operator3'
   *  MultiPortSwitch: '<S24>/Multiport Switch1'
   *  MultiPortSwitch: '<S24>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S24>/Relational Operator'
   *  RelationalOperator: '<S24>/Relational Operator2'
   *  RelationalOperator: '<S24>/Relational Operator3'
   *  RelationalOperator: '<S24>/Relational Operator4'
   *  RelationalOperator: '<S24>/Relational Operator5'
   */
  if ((tmpIRead[23] == 1) && (rtb_Product2_hb > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[23] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_ir;
  } else if ((tmpIRead[23] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S24>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[23] = KL15PwrSply_Ctrl_B.LostCommCoornReq_lf;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay24 > 0U)) {
    /* MultiPortSwitch: '<S24>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S24>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[23] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_o;
  } else {
    /* MultiPortSwitch: '<S24>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S24>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[23] = tmpIRead[23];
  }

  /* End of MultiPortSwitch: '<S24>/Multiport Switch' */

  /* MultiPortSwitch: '<S23>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant35'
   *  Constant: '<S23>/Constant3'
   *  Constant: '<S23>/Constant4'
   *  Constant: '<S23>/Constant5'
   *  Constant: '<S23>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S23>/Logical Operator1'
   *  Logic: '<S23>/Logical Operator2'
   *  Logic: '<S23>/Logical Operator3'
   *  MultiPortSwitch: '<S23>/Multiport Switch1'
   *  MultiPortSwitch: '<S23>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S23>/Relational Operator'
   *  RelationalOperator: '<S23>/Relational Operator2'
   *  RelationalOperator: '<S23>/Relational Operator3'
   *  RelationalOperator: '<S23>/Relational Operator4'
   *  RelationalOperator: '<S23>/Relational Operator5'
   */
  if ((tmpIRead[22] == 1) && (rtb_Product2_a > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[22] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_ca;
  } else if ((tmpIRead[22] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S23>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[22] = KL15PwrSply_Ctrl_B.LostCommCoornReq_bi;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay23 > 0U)) {
    /* MultiPortSwitch: '<S23>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S23>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[22] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_oy;
  } else {
    /* MultiPortSwitch: '<S23>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S23>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[22] = tmpIRead[22];
  }

  /* End of MultiPortSwitch: '<S23>/Multiport Switch' */

  /* MultiPortSwitch: '<S22>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant33'
   *  Constant: '<S22>/Constant3'
   *  Constant: '<S22>/Constant4'
   *  Constant: '<S22>/Constant5'
   *  Constant: '<S22>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S22>/Logical Operator1'
   *  Logic: '<S22>/Logical Operator2'
   *  Logic: '<S22>/Logical Operator3'
   *  MultiPortSwitch: '<S22>/Multiport Switch1'
   *  MultiPortSwitch: '<S22>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S22>/Relational Operator'
   *  RelationalOperator: '<S22>/Relational Operator2'
   *  RelationalOperator: '<S22>/Relational Operator3'
   *  RelationalOperator: '<S22>/Relational Operator4'
   *  RelationalOperator: '<S22>/Relational Operator5'
   */
  if ((tmpIRead[21] == 1) && (rtb_Product2_c > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[21] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_d;
  } else if ((tmpIRead[21] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S22>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[21] = KL15PwrSply_Ctrl_B.LostCommCoornReq_f;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay22 > 0U)) {
    /* MultiPortSwitch: '<S22>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S22>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[21] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_b0;
  } else {
    /* MultiPortSwitch: '<S22>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S22>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[21] = tmpIRead[21];
  }

  /* End of MultiPortSwitch: '<S22>/Multiport Switch' */

  /* MultiPortSwitch: '<S21>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant31'
   *  Constant: '<S21>/Constant3'
   *  Constant: '<S21>/Constant4'
   *  Constant: '<S21>/Constant5'
   *  Constant: '<S21>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S21>/Logical Operator1'
   *  Logic: '<S21>/Logical Operator2'
   *  Logic: '<S21>/Logical Operator3'
   *  MultiPortSwitch: '<S21>/Multiport Switch1'
   *  MultiPortSwitch: '<S21>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S21>/Relational Operator'
   *  RelationalOperator: '<S21>/Relational Operator2'
   *  RelationalOperator: '<S21>/Relational Operator3'
   *  RelationalOperator: '<S21>/Relational Operator4'
   *  RelationalOperator: '<S21>/Relational Operator5'
   */
  if ((tmpIRead[20] == 1) && (rtb_Product2_f > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[20] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_j;
  } else if ((tmpIRead[20] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S21>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[20] = KL15PwrSply_Ctrl_B.LostCommCoornReq_g;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay21 > 0U)) {
    /* MultiPortSwitch: '<S21>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S21>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[20] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_e;
  } else {
    /* MultiPortSwitch: '<S21>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S21>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[20] = tmpIRead[20];
  }

  /* End of MultiPortSwitch: '<S21>/Multiport Switch' */

  /* MultiPortSwitch: '<S20>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant29'
   *  Constant: '<S20>/Constant3'
   *  Constant: '<S20>/Constant4'
   *  Constant: '<S20>/Constant5'
   *  Constant: '<S20>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S20>/Logical Operator1'
   *  Logic: '<S20>/Logical Operator2'
   *  Logic: '<S20>/Logical Operator3'
   *  MultiPortSwitch: '<S20>/Multiport Switch1'
   *  MultiPortSwitch: '<S20>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S20>/Relational Operator'
   *  RelationalOperator: '<S20>/Relational Operator2'
   *  RelationalOperator: '<S20>/Relational Operator3'
   *  RelationalOperator: '<S20>/Relational Operator4'
   *  RelationalOperator: '<S20>/Relational Operator5'
   */
  if ((tmpIRead[19] == 1) && (rtb_Product2_jv > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[19] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_a;
  } else if ((tmpIRead[19] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S20>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[19] = KL15PwrSply_Ctrl_B.LostCommCoornReq_j;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay20 > 0U)) {
    /* MultiPortSwitch: '<S20>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S20>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[19] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_i;
  } else {
    /* MultiPortSwitch: '<S20>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S20>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[19] = tmpIRead[19];
  }

  /* End of MultiPortSwitch: '<S20>/Multiport Switch' */

  /* MultiPortSwitch: '<S19>/Multiport Switch' incorporates:
   *  Constant: '<S19>/Constant3'
   *  Constant: '<S19>/Constant4'
   *  Constant: '<S19>/Constant5'
   *  Constant: '<S19>/Constant6'
   *  Constant: '<S1>/Constant27'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S19>/Logical Operator1'
   *  Logic: '<S19>/Logical Operator2'
   *  Logic: '<S19>/Logical Operator3'
   *  MultiPortSwitch: '<S19>/Multiport Switch1'
   *  MultiPortSwitch: '<S19>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S19>/Relational Operator'
   *  RelationalOperator: '<S19>/Relational Operator2'
   *  RelationalOperator: '<S19>/Relational Operator3'
   *  RelationalOperator: '<S19>/Relational Operator4'
   *  RelationalOperator: '<S19>/Relational Operator5'
   */
  if ((tmpIRead[18] == 1) && (rtb_Product2_d > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[18] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_ib;
  } else if ((tmpIRead[18] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S19>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[18] = KL15PwrSply_Ctrl_B.LostCommCoornReq_p3;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay19 > 0U)) {
    /* MultiPortSwitch: '<S19>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S19>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[18] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_f;
  } else {
    /* MultiPortSwitch: '<S19>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S19>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[18] = tmpIRead[18];
  }

  /* End of MultiPortSwitch: '<S19>/Multiport Switch' */

  /* MultiPortSwitch: '<S18>/Multiport Switch' incorporates:
   *  Constant: '<S18>/Constant3'
   *  Constant: '<S18>/Constant4'
   *  Constant: '<S18>/Constant5'
   *  Constant: '<S18>/Constant6'
   *  Constant: '<S1>/Constant43'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S18>/Logical Operator1'
   *  Logic: '<S18>/Logical Operator2'
   *  Logic: '<S18>/Logical Operator3'
   *  MultiPortSwitch: '<S18>/Multiport Switch1'
   *  MultiPortSwitch: '<S18>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S18>/Relational Operator'
   *  RelationalOperator: '<S18>/Relational Operator2'
   *  RelationalOperator: '<S18>/Relational Operator3'
   *  RelationalOperator: '<S18>/Relational Operator4'
   *  RelationalOperator: '<S18>/Relational Operator5'
   */
  if ((tmpIRead[17] == 1) && (rtb_Product2_lb > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[17] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_hj;
  } else if ((tmpIRead[17] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S18>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[17] = KL15PwrSply_Ctrl_B.LostCommCoornReq_a;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay18 > 0U)) {
    /* MultiPortSwitch: '<S18>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S18>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[17] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_ok;
  } else {
    /* MultiPortSwitch: '<S18>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S18>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[17] = tmpIRead[17];
  }

  /* End of MultiPortSwitch: '<S18>/Multiport Switch' */

  /* MultiPortSwitch: '<S17>/Multiport Switch' incorporates:
   *  Constant: '<S17>/Constant3'
   *  Constant: '<S17>/Constant4'
   *  Constant: '<S17>/Constant5'
   *  Constant: '<S17>/Constant6'
   *  Constant: '<S1>/Constant41'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S17>/Logical Operator1'
   *  Logic: '<S17>/Logical Operator2'
   *  Logic: '<S17>/Logical Operator3'
   *  MultiPortSwitch: '<S17>/Multiport Switch1'
   *  MultiPortSwitch: '<S17>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S17>/Relational Operator'
   *  RelationalOperator: '<S17>/Relational Operator2'
   *  RelationalOperator: '<S17>/Relational Operator3'
   *  RelationalOperator: '<S17>/Relational Operator4'
   *  RelationalOperator: '<S17>/Relational Operator5'
   */
  if ((tmpIRead[16] == 1) && (rtb_Product2_h > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[16] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_dw;
  } else if ((tmpIRead[16] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S17>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[16] = KL15PwrSply_Ctrl_B.LostCommCoornReq_fs;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay17 > 0U)) {
    /* MultiPortSwitch: '<S17>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S17>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[16] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_ib;
  } else {
    /* MultiPortSwitch: '<S17>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S17>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[16] = tmpIRead[16];
  }

  /* End of MultiPortSwitch: '<S17>/Multiport Switch' */

  /* MultiPortSwitch: '<S27>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S27>/Constant3'
   *  Constant: '<S27>/Constant4'
   *  Constant: '<S27>/Constant5'
   *  Constant: '<S27>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S27>/Logical Operator1'
   *  Logic: '<S27>/Logical Operator2'
   *  Logic: '<S27>/Logical Operator3'
   *  MultiPortSwitch: '<S27>/Multiport Switch1'
   *  MultiPortSwitch: '<S27>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S27>/Relational Operator'
   *  RelationalOperator: '<S27>/Relational Operator2'
   *  RelationalOperator: '<S27>/Relational Operator3'
   *  RelationalOperator: '<S27>/Relational Operator4'
   *  RelationalOperator: '<S27>/Relational Operator5'
   */
  if ((tmpIRead[1] == 1) && (rtb_Product2_cr > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[1] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_c;
  } else if ((tmpIRead[1] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S27>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[1] = KL15PwrSply_Ctrl_B.LostCommCoornReq_n;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay02 > 0U)) {
    /* MultiPortSwitch: '<S27>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S27>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[1] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_n;
  } else {
    /* MultiPortSwitch: '<S27>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S27>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[1] = tmpIRead[1];
  }

  /* End of MultiPortSwitch: '<S27>/Multiport Switch' */

  /* MultiPortSwitch: '<S16>/Multiport Switch' incorporates:
   *  Constant: '<S16>/Constant3'
   *  Constant: '<S16>/Constant4'
   *  Constant: '<S16>/Constant5'
   *  Constant: '<S16>/Constant6'
   *  Constant: '<S1>/Constant39'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S16>/Logical Operator1'
   *  Logic: '<S16>/Logical Operator2'
   *  Logic: '<S16>/Logical Operator3'
   *  MultiPortSwitch: '<S16>/Multiport Switch1'
   *  MultiPortSwitch: '<S16>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S16>/Relational Operator'
   *  RelationalOperator: '<S16>/Relational Operator2'
   *  RelationalOperator: '<S16>/Relational Operator3'
   *  RelationalOperator: '<S16>/Relational Operator4'
   *  RelationalOperator: '<S16>/Relational Operator5'
   */
  if ((tmpIRead[15] == 1) && (rtb_Product2_dg > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[15] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_j0;
  } else if ((tmpIRead[15] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S16>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[15] = KL15PwrSply_Ctrl_B.LostCommCoornReq_e;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay16 > 0U)) {
    /* MultiPortSwitch: '<S16>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S16>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[15] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_my;
  } else {
    /* MultiPortSwitch: '<S16>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S16>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[15] = tmpIRead[15];
  }

  /* End of MultiPortSwitch: '<S16>/Multiport Switch' */

  /* MultiPortSwitch: '<S15>/Multiport Switch' incorporates:
   *  Constant: '<S15>/Constant3'
   *  Constant: '<S15>/Constant4'
   *  Constant: '<S15>/Constant5'
   *  Constant: '<S15>/Constant6'
   *  Constant: '<S1>/Constant37'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S15>/Logical Operator1'
   *  Logic: '<S15>/Logical Operator2'
   *  Logic: '<S15>/Logical Operator3'
   *  MultiPortSwitch: '<S15>/Multiport Switch1'
   *  MultiPortSwitch: '<S15>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S15>/Relational Operator'
   *  RelationalOperator: '<S15>/Relational Operator2'
   *  RelationalOperator: '<S15>/Relational Operator3'
   *  RelationalOperator: '<S15>/Relational Operator4'
   *  RelationalOperator: '<S15>/Relational Operator5'
   */
  if ((tmpIRead[14] == 1) && (rtb_Product2_ff > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[14] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_n;
  } else if ((tmpIRead[14] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S15>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[14] = KL15PwrSply_Ctrl_B.LostCommCoornReq_h;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay15 > 0U)) {
    /* MultiPortSwitch: '<S15>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S15>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[14] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_ej;
  } else {
    /* MultiPortSwitch: '<S15>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S15>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[14] = tmpIRead[14];
  }

  /* End of MultiPortSwitch: '<S15>/Multiport Switch' */

  /* MultiPortSwitch: '<S14>/Multiport Switch' incorporates:
   *  Constant: '<S14>/Constant3'
   *  Constant: '<S14>/Constant4'
   *  Constant: '<S14>/Constant5'
   *  Constant: '<S14>/Constant6'
   *  Constant: '<S1>/Constant25'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S14>/Logical Operator1'
   *  Logic: '<S14>/Logical Operator2'
   *  Logic: '<S14>/Logical Operator3'
   *  MultiPortSwitch: '<S14>/Multiport Switch1'
   *  MultiPortSwitch: '<S14>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S14>/Relational Operator'
   *  RelationalOperator: '<S14>/Relational Operator2'
   *  RelationalOperator: '<S14>/Relational Operator3'
   *  RelationalOperator: '<S14>/Relational Operator4'
   *  RelationalOperator: '<S14>/Relational Operator5'
   */
  if ((tmpIRead[13] == 1) && (rtb_Product2_hl > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[13] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_d3;
  } else if ((tmpIRead[13] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S14>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[13] = KL15PwrSply_Ctrl_B.LostCommCoornReq_ly;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay14 > 0U)) {
    /* MultiPortSwitch: '<S14>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S14>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[13] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_ec;
  } else {
    /* MultiPortSwitch: '<S14>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S14>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[13] = tmpIRead[13];
  }

  /* End of MultiPortSwitch: '<S14>/Multiport Switch' */

  /* MultiPortSwitch: '<S13>/Multiport Switch' incorporates:
   *  Constant: '<S13>/Constant3'
   *  Constant: '<S13>/Constant4'
   *  Constant: '<S13>/Constant5'
   *  Constant: '<S13>/Constant6'
   *  Constant: '<S1>/Constant23'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S13>/Logical Operator1'
   *  Logic: '<S13>/Logical Operator2'
   *  Logic: '<S13>/Logical Operator3'
   *  MultiPortSwitch: '<S13>/Multiport Switch1'
   *  MultiPortSwitch: '<S13>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S13>/Relational Operator'
   *  RelationalOperator: '<S13>/Relational Operator2'
   *  RelationalOperator: '<S13>/Relational Operator3'
   *  RelationalOperator: '<S13>/Relational Operator4'
   *  RelationalOperator: '<S13>/Relational Operator5'
   */
  if ((tmpIRead[12] == 1) && (rtb_Product2_pu > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[12] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_k;
  } else if ((tmpIRead[12] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S13>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[12] = KL15PwrSply_Ctrl_B.LostCommCoornReq_ie;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay13 > 0U)) {
    /* MultiPortSwitch: '<S13>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S13>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[12] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_ke;
  } else {
    /* MultiPortSwitch: '<S13>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S13>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[12] = tmpIRead[12];
  }

  /* End of MultiPortSwitch: '<S13>/Multiport Switch' */

  /* MultiPortSwitch: '<S12>/Multiport Switch' incorporates:
   *  Constant: '<S12>/Constant3'
   *  Constant: '<S12>/Constant4'
   *  Constant: '<S12>/Constant5'
   *  Constant: '<S12>/Constant6'
   *  Constant: '<S1>/Constant21'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S12>/Logical Operator1'
   *  Logic: '<S12>/Logical Operator2'
   *  Logic: '<S12>/Logical Operator3'
   *  MultiPortSwitch: '<S12>/Multiport Switch1'
   *  MultiPortSwitch: '<S12>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S12>/Relational Operator'
   *  RelationalOperator: '<S12>/Relational Operator2'
   *  RelationalOperator: '<S12>/Relational Operator3'
   *  RelationalOperator: '<S12>/Relational Operator4'
   *  RelationalOperator: '<S12>/Relational Operator5'
   */
  if ((tmpIRead[11] == 1) && (rtb_Product2_o > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[11] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_i3;
  } else if ((tmpIRead[11] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S12>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[11] = KL15PwrSply_Ctrl_B.LostCommCoornReq_jb;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay12 > 0U)) {
    /* MultiPortSwitch: '<S12>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S12>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[11] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_a;
  } else {
    /* MultiPortSwitch: '<S12>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S12>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[11] = tmpIRead[11];
  }

  /* End of MultiPortSwitch: '<S12>/Multiport Switch' */

  /* MultiPortSwitch: '<S11>/Multiport Switch' incorporates:
   *  Constant: '<S11>/Constant3'
   *  Constant: '<S11>/Constant4'
   *  Constant: '<S11>/Constant5'
   *  Constant: '<S11>/Constant6'
   *  Constant: '<S1>/Constant19'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S11>/Logical Operator1'
   *  Logic: '<S11>/Logical Operator2'
   *  Logic: '<S11>/Logical Operator3'
   *  MultiPortSwitch: '<S11>/Multiport Switch1'
   *  MultiPortSwitch: '<S11>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S11>/Relational Operator'
   *  RelationalOperator: '<S11>/Relational Operator2'
   *  RelationalOperator: '<S11>/Relational Operator3'
   *  RelationalOperator: '<S11>/Relational Operator4'
   *  RelationalOperator: '<S11>/Relational Operator5'
   */
  if ((tmpIRead[10] == 1) && (rtb_Product2_g > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[10] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_cc;
  } else if ((tmpIRead[10] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S11>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[10] = KL15PwrSply_Ctrl_B.LostCommCoornReq_o;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay11 > 0U)) {
    /* MultiPortSwitch: '<S11>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S11>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[10] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_g;
  } else {
    /* MultiPortSwitch: '<S11>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S11>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[10] = tmpIRead[10];
  }

  /* End of MultiPortSwitch: '<S11>/Multiport Switch' */

  /* MultiPortSwitch: '<S10>/Multiport Switch' incorporates:
   *  Constant: '<S10>/Constant3'
   *  Constant: '<S10>/Constant4'
   *  Constant: '<S10>/Constant5'
   *  Constant: '<S10>/Constant6'
   *  Constant: '<S1>/Constant17'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S10>/Logical Operator1'
   *  Logic: '<S10>/Logical Operator2'
   *  Logic: '<S10>/Logical Operator3'
   *  MultiPortSwitch: '<S10>/Multiport Switch1'
   *  MultiPortSwitch: '<S10>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S10>/Relational Operator'
   *  RelationalOperator: '<S10>/Relational Operator2'
   *  RelationalOperator: '<S10>/Relational Operator3'
   *  RelationalOperator: '<S10>/Relational Operator4'
   *  RelationalOperator: '<S10>/Relational Operator5'
   */
  if ((tmpIRead[9] == 1) && (rtb_Product2_l > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[9] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_cy;
  } else if ((tmpIRead[9] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S10>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[9] = KL15PwrSply_Ctrl_B.LostCommCoornReq_k;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay10 > 0U)) {
    /* MultiPortSwitch: '<S10>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S10>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[9] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_km;
  } else {
    /* MultiPortSwitch: '<S10>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S10>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[9] = tmpIRead[9];
  }

  /* End of MultiPortSwitch: '<S10>/Multiport Switch' */

  /* MultiPortSwitch: '<S9>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant15'
   *  Constant: '<S9>/Constant3'
   *  Constant: '<S9>/Constant4'
   *  Constant: '<S9>/Constant5'
   *  Constant: '<S9>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S9>/Logical Operator1'
   *  Logic: '<S9>/Logical Operator2'
   *  Logic: '<S9>/Logical Operator3'
   *  MultiPortSwitch: '<S9>/Multiport Switch1'
   *  MultiPortSwitch: '<S9>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S9>/Relational Operator'
   *  RelationalOperator: '<S9>/Relational Operator2'
   *  RelationalOperator: '<S9>/Relational Operator3'
   *  RelationalOperator: '<S9>/Relational Operator4'
   *  RelationalOperator: '<S9>/Relational Operator5'
   */
  if ((tmpIRead[8] == 1) && (rtb_Product2_k > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[8] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_cj;
  } else if ((tmpIRead[8] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S9>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[8] = KL15PwrSply_Ctrl_B.LostCommCoornReq_d;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay09 > 0U)) {
    /* MultiPortSwitch: '<S9>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S9>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[8] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_p;
  } else {
    /* MultiPortSwitch: '<S9>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S9>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[8] = tmpIRead[8];
  }

  /* End of MultiPortSwitch: '<S9>/Multiport Switch' */

  /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant9'
   *  Constant: '<S6>/Constant3'
   *  Constant: '<S6>/Constant4'
   *  Constant: '<S6>/Constant5'
   *  Constant: '<S6>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S6>/Logical Operator1'
   *  Logic: '<S6>/Logical Operator2'
   *  Logic: '<S6>/Logical Operator3'
   *  MultiPortSwitch: '<S6>/Multiport Switch1'
   *  MultiPortSwitch: '<S6>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  RelationalOperator: '<S6>/Relational Operator2'
   *  RelationalOperator: '<S6>/Relational Operator3'
   *  RelationalOperator: '<S6>/Relational Operator4'
   *  RelationalOperator: '<S6>/Relational Operator5'
   */
  if ((tmpIRead[5] == 1) && (rtb_Product2_m0 > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[5] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_f;
  } else if ((tmpIRead[5] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S6>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[5] = KL15PwrSply_Ctrl_B.LostCommCoornReq_hr;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay06 > 0U)) {
    /* MultiPortSwitch: '<S6>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S6>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[5] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_md;
  } else {
    /* MultiPortSwitch: '<S6>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S6>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[5] = tmpIRead[5];
  }

  /* End of MultiPortSwitch: '<S6>/Multiport Switch' */

  /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant7'
   *  Constant: '<S5>/Constant3'
   *  Constant: '<S5>/Constant4'
   *  Constant: '<S5>/Constant5'
   *  Constant: '<S5>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S5>/Logical Operator1'
   *  Logic: '<S5>/Logical Operator2'
   *  Logic: '<S5>/Logical Operator3'
   *  MultiPortSwitch: '<S5>/Multiport Switch1'
   *  MultiPortSwitch: '<S5>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S5>/Relational Operator'
   *  RelationalOperator: '<S5>/Relational Operator2'
   *  RelationalOperator: '<S5>/Relational Operator3'
   *  RelationalOperator: '<S5>/Relational Operator4'
   *  RelationalOperator: '<S5>/Relational Operator5'
   */
  if ((tmpIRead[4] == 1) && (rtb_Product2_fo > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[4] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_av;
  } else if ((tmpIRead[4] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S5>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[4] = KL15PwrSply_Ctrl_B.LostCommCoornReq_m;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay05 > 0U)) {
    /* MultiPortSwitch: '<S5>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S5>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[4] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_h3;
  } else {
    /* MultiPortSwitch: '<S5>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S5>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[4] = tmpIRead[4];
  }

  /* End of MultiPortSwitch: '<S5>/Multiport Switch' */

  /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant62'
   *  Constant: '<S26>/Constant3'
   *  Constant: '<S26>/Constant4'
   *  Constant: '<S26>/Constant5'
   *  Constant: '<S26>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S26>/Logical Operator1'
   *  Logic: '<S26>/Logical Operator2'
   *  Logic: '<S26>/Logical Operator3'
   *  MultiPortSwitch: '<S26>/Multiport Switch1'
   *  MultiPortSwitch: '<S26>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S26>/Relational Operator'
   *  RelationalOperator: '<S26>/Relational Operator2'
   *  RelationalOperator: '<S26>/Relational Operator3'
   *  RelationalOperator: '<S26>/Relational Operator4'
   *  RelationalOperator: '<S26>/Relational Operator5'
   */
  if ((tmpIRead[0] == 1) && (rtb_Product2 > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[0] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_o;
  } else if ((tmpIRead[0] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S26>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[0] = KL15PwrSply_Ctrl_B.LostCommCoornReq_p;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay01 > 0U)) {
    /* MultiPortSwitch: '<S26>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S26>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[0] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_j;
  } else {
    /* MultiPortSwitch: '<S26>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S26>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[0] = tmpIRead[0];
  }

  /* End of MultiPortSwitch: '<S26>/Multiport Switch' */

  /* MultiPortSwitch: '<S8>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant13'
   *  Constant: '<S8>/Constant3'
   *  Constant: '<S8>/Constant4'
   *  Constant: '<S8>/Constant5'
   *  Constant: '<S8>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S8>/Logical Operator1'
   *  Logic: '<S8>/Logical Operator2'
   *  Logic: '<S8>/Logical Operator3'
   *  MultiPortSwitch: '<S8>/Multiport Switch1'
   *  MultiPortSwitch: '<S8>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S8>/Relational Operator'
   *  RelationalOperator: '<S8>/Relational Operator2'
   *  RelationalOperator: '<S8>/Relational Operator3'
   *  RelationalOperator: '<S8>/Relational Operator4'
   *  RelationalOperator: '<S8>/Relational Operator5'
   */
  if ((tmpIRead[7] == 1) && (rtb_Product2_bb > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[7] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_hd;
  } else if ((tmpIRead[7] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S8>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[7] = KL15PwrSply_Ctrl_B.LostCommCoornReq_c;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay08 > 0U)) {
    /* MultiPortSwitch: '<S8>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S8>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[7] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_nn;
  } else {
    /* MultiPortSwitch: '<S8>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S8>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[7] = tmpIRead[7];
  }

  /* End of MultiPortSwitch: '<S8>/Multiport Switch' */

  /* MultiPortSwitch: '<S7>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant11'
   *  Constant: '<S7>/Constant3'
   *  Constant: '<S7>/Constant4'
   *  Constant: '<S7>/Constant5'
   *  Constant: '<S7>/Constant6'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Logic: '<S7>/Logical Operator1'
   *  Logic: '<S7>/Logical Operator2'
   *  Logic: '<S7>/Logical Operator3'
   *  MultiPortSwitch: '<S7>/Multiport Switch1'
   *  MultiPortSwitch: '<S7>/Multiport Switch2'
   *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
   *  RelationalOperator: '<S7>/Relational Operator'
   *  RelationalOperator: '<S7>/Relational Operator2'
   *  RelationalOperator: '<S7>/Relational Operator3'
   *  RelationalOperator: '<S7>/Relational Operator4'
   *  RelationalOperator: '<S7>/Relational Operator5'
   */
  if ((tmpIRead[6] == 1) && (rtb_Product2_lt > 0U) && (!Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val())) {
    tmpIWrite[6] = KL15PwrSply_Ctrl_B.TimeModeCoornReq_mc;
  } else if ((tmpIRead[6] == 1) && Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S7>/Multiport Switch1' incorporates:
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[6] = KL15PwrSply_Ctrl_B.LostCommCoornReq_nk;
  } else if (Rte_IRead_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_bNetSleepFlag_Val() && (KL15PwrSply_TiNetSleepDelay07 > 0U)) {
    /* MultiPortSwitch: '<S7>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S7>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[6] = KL15PwrSply_Ctrl_B.NetSleepCoornReq_d;
  } else {
    /* MultiPortSwitch: '<S7>/Multiport Switch2' incorporates:
     *  MultiPortSwitch: '<S7>/Multiport Switch1'
     *  Outport: '<Root>/PwrSply_au8CoornReq_Val'
     */
    tmpIWrite[6] = tmpIRead[6];
  }

  /* End of MultiPortSwitch: '<S7>/Multiport Switch' */

  /* Update for UnitDelay: '<S26>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE = tmpIRead_0[0];

  /* Update for UnitDelay: '<S7>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_j = tmpIRead_0[6];

  /* Update for UnitDelay: '<S8>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_n = tmpIRead_0[7];

  /* Update for UnitDelay: '<S5>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_c = tmpIRead_0[4];

  /* Update for UnitDelay: '<S6>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_g = tmpIRead_0[5];

  /* Update for UnitDelay: '<S9>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_p = tmpIRead_0[8];

  /* Update for UnitDelay: '<S10>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_d = tmpIRead_0[9];

  /* Update for UnitDelay: '<S27>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_f = tmpIRead_0[1];

  /* Update for UnitDelay: '<S11>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_d2 = tmpIRead_0[10];

  /* Update for UnitDelay: '<S12>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_l = tmpIRead_0[11];

  /* Update for UnitDelay: '<S13>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_e = tmpIRead_0[12];

  /* Update for UnitDelay: '<S14>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_cr = tmpIRead_0[13];

  /* Update for UnitDelay: '<S15>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_m = tmpIRead_0[14];

  /* Update for UnitDelay: '<S16>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_h = tmpIRead_0[15];

  /* Update for UnitDelay: '<S17>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_m4 = tmpIRead_0[16];

  /* Update for UnitDelay: '<S18>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_b = tmpIRead_0[17];

  /* Update for UnitDelay: '<S19>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_a = tmpIRead_0[18];

  /* Update for UnitDelay: '<S20>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_gm = tmpIRead_0[19];

  /* Update for UnitDelay: '<S21>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_ab = tmpIRead_0[20];

  /* Update for UnitDelay: '<S22>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_n0 = tmpIRead_0[21];

  /* Update for UnitDelay: '<S23>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_bo = tmpIRead_0[22];

  /* Update for UnitDelay: '<S24>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_ce = tmpIRead_0[23];

  /* Update for UnitDelay: '<S25>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_gd = tmpIRead_0[24];

  /* Update for UnitDelay: '<S28>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_o = tmpIRead_0[25];

  /* Update for UnitDelay: '<S29>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_ll = tmpIRead_0[26];

  /* Update for UnitDelay: '<S3>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_hp = tmpIRead_0[2];

  /* Update for UnitDelay: '<S30>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_i = tmpIRead_0[27];

  /* Update for UnitDelay: '<S31>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_lb = tmpIRead_0[28];

  /* Update for UnitDelay: '<S4>/Unit Delay' */
  KL15PwrSply_Ctrl_DW.UnitDelay_DSTATE_do = tmpIRead_0[3];

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_KL15PwrSply_Ctrl_Runnable_10ms_at_outport_1' */

  /* Outport: '<Root>/PwrSply_au8CoornReq_Val' */
  Rte_IWrite_KL15PwrSply_Ctrl_Runnable_10ms_PwrSply_au8CoornReq_Val(tmpIWrite);
}

#define KL15PwrSply_Ctrl_STOP_SEC_CODE
#include "KL15PwrSply_Ctrl_MemMap.h"

/* Model initialize function */

/* SwAddrMethod CODE for Runnable */
#define KL15PwrSply_Ctrl_START_SEC_CODE
#include "KL15PwrSply_Ctrl_MemMap.h"

FUNC(void, KL15PwrSply_Ctrl_CODE) KL15PwrSply_Ctrl_Runnable_Init(void)
{
  /* (no initialization code required) */
}

#define KL15PwrSply_Ctrl_STOP_SEC_CODE
#include "KL15PwrSply_Ctrl_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
