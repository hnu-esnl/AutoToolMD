/*
 * File: EFuse_Ctrl.c
 *
 * Code generated for Simulink model 'EFuse_Ctrl'.
 *
 * Model version                  : 1.124
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed Sep 28 11:50:42 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EFuse_Ctrl.h"
#include "EFuse_Ctrl_private.h"

/* Named constants for Chart: '<S19>/Chart' */
#define EFuse_Ctrl_IN_ECUSleep         ((uint8)1U)
#define EFuse_Ctrl_IN_ECUWork          ((uint8)2U)
#define EFuse_Ctrl_IN_FailCounter      ((uint8)1U)
#define EFuse_Ctrl_IN_NO_ACTIVE_CHILD  ((uint8)0U)
#define EFuse_Ctrl_IN_NormSleep        ((uint8)1U)
#define EFuse_Ctrl_IN_NormWork         ((uint8)1U)
#define EFuse_Ctrl_IN_PreCharge        ((uint8)2U)
#define EFuse_Ctrl_IN_Retry            ((uint8)2U)
#define EFuse_Ctrl_IN_SWProtect        ((uint8)3U)
#define EFuse_Ctrl_IN_SleepFail        ((uint8)2U)
#define EFuse_Ctrl_IN_SleepRetry       ((uint8)3U)
#define EFuse_Ctrl_IN_StandBy          ((uint8)3U)

/* Block signals (default storage) */
VAR(B_EFuse_Ctrl_T, EFuse_Ctrl_VAR) EFuse_Ctrl_B;

/* Block states (default storage) */
VAR(DW_EFuse_Ctrl_T, EFuse_Ctrl_VAR) EFuse_Ctrl_DW;

/* Static Memory for Internal Data */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctrl_stFuse09;

/* '<S235>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctr_Fuse09SleepRetryCount;

/* '<S235>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctrl_stFuse08;

/* '<S208>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctr_Fuse08SleepRetryCount;

/* '<S208>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctrl_stFuse07;

/* '<S181>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctr_Fuse07SleepRetryCount;

/* '<S181>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctrl_stFuse06;

/* '<S154>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctr_Fuse06SleepRetryCount;

/* '<S154>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctrl_stFuse05;

/* '<S127>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctr_Fuse05SleepRetryCount;

/* '<S127>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctrl_stFuse04;

/* '<S100>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctr_Fuse04SleepRetryCount;

/* '<S100>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctrl_stFuse03;

/* '<S73>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctr_Fuse03SleepRetryCount;

/* '<S73>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctrl_stFuse02;

/* '<S46>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctr_Fuse02SleepRetryCount;

/* '<S46>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctrl_stFuse01;

/* '<S19>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_Ctr_Fuse01SleepRetryCount;

/* '<S19>/Chart' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_C_Fuse09SleepRetryCount_i;

/* '<S235>/Data Store Memory' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_C_Fuse08SleepRetryCount_l;

/* '<S208>/Data Store Memory' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_C_Fuse07SleepRetryCount_p;

/* '<S181>/Data Store Memory' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_C_Fuse06SleepRetryCount_n;

/* '<S154>/Data Store Memory' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_C_Fuse05SleepRetryCount_c;

/* '<S127>/Data Store Memory' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_C_Fuse04SleepRetryCount_c;

/* '<S100>/Data Store Memory' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_C_Fuse03SleepRetryCount_k;

/* '<S73>/Data Store Memory' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_C_Fuse02SleepRetryCount_i;

/* '<S46>/Data Store Memory' */
VAR(uint8, EFuse_Ctrl_VAR) EFuse_C_Fuse01SleepRetryCount_f;

/* '<S19>/Data Store Memory' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_EnFuse01;

/* '<S6>/Switch' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_EnFuse02;

/* '<S6>/Switch1' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_EnFuse03;

/* '<S6>/Switch2' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_EnFuse04;

/* '<S6>/Switch3' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_EnFuse05;

/* '<S6>/Switch4' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_EnFuse06;

/* '<S6>/Switch5' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_EnFuse07;

/* '<S6>/Switch6' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_EnFuse08;

/* '<S6>/Switch7' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_EnFuse09;

/* '<S6>/Switch8' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_flgAllwSleep09;

/* '<S235>/Chart' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_flgAllwSleep08;

/* '<S208>/Chart' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_flgAllwSleep07;

/* '<S181>/Chart' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_flgAllwSleep06;

/* '<S154>/Chart' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_flgAllwSleep05;

/* '<S127>/Chart' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_flgAllwSleep04;

/* '<S100>/Chart' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_flgAllwSleep03;

/* '<S73>/Chart' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_flgAllwSleep02;

/* '<S46>/Chart' */
VAR(boolean, EFuse_Ctrl_VAR) EFuse_Ctrl_flgAllwSleep01;

/* '<S19>/Chart' */

/*
 * Output and update for function-call system:
 *    '<S43>/waitTime'
 *    '<S70>/waitTime'
 *    '<S97>/waitTime'
 *    '<S124>/waitTime'
 *    '<S151>/waitTime'
 *    '<S178>/waitTime'
 *    '<S205>/waitTime'
 *    '<S232>/waitTime'
 *    '<S259>/waitTime'
 */
FUNC(void, EFuse_Ctrl_CODE_LOCAL) EFuse_Ctrl_waitTime(VAR(boolean, AUTOMATIC)
  rtu_En, P2VAR(uint32, AUTOMATIC, EFuse_Ctrl_VAR) rty_Ti, P2VAR
  (DW_waitTime_EFuse_Ctrl_T, AUTOMATIC, EFuse_Ctrl_VAR) localDW)
{
  /* Switch: '<S44>/Switch' incorporates:
   *  Constant: '<S44>/Constant'
   *  Constant: '<S44>/Constant1'
   *  Sum: '<S44>/Add'
   *  UnitDelay: '<S44>/Unit Delay'
   */
  if (rtu_En) {
    *rty_Ti = localDW->UnitDelay_DSTATE + 10U;
  } else {
    *rty_Ti = 0U;
  }

  /* End of Switch: '<S44>/Switch' */

  /* Update for UnitDelay: '<S44>/Unit Delay' */
  localDW->UnitDelay_DSTATE = *rty_Ti;
}

/* Model step function for TID1 */

/* SwAddrMethod CODE for Runnable */
#define EFuse_Ctrl_START_SEC_CODE
#include "EFuse_Ctrl_MemMap.h"

FUNC(void, EFuse_Ctrl_CODE) EFuse_Ctrl_Runnable_10ms(void)
                                   /* Explicit Task: EFuse_Ctrl_Runnable_10ms */
{
  const uint32 *tmpIRead;
  uint8 tmp[9];
  const uint8 *tmpIRead_0;
  boolean rtb_Switch4_ez;
  boolean rtb_Switch_hs;
  boolean rtb_Switch_je;
  boolean rtb_Switch_kj;
  boolean tmp_0;

  /* Inport: '<Root>/EFuse_au8stSleep_Val' */
  tmpIRead_0 = Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_au8stSleep_Val();

  /* Inport: '<Root>/EFuse_au32ErrInfo_Val' */
  tmpIRead = Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_au32ErrInfo_Val();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EFuse_Ctrl_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EFuse_Ctrl_Runnable_10ms_sys'
   */
  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S6>/PA_EFuse_ActUseFuseChInfo_C1'
   *  DataTypeConversion: '<S261>/Extract Desired Bits'
   */
  EFuse_Ctrl_EnFuse01 = (((uint8)(Rte_CData_EFuse_ActUseFuseChInfo_C() >> 1) &
    1U) != 0U);

  /* Outputs for Enabled SubSystem: '<S4>/FUSE01' incorporates:
   *  EnablePort: '<S9>/Enable'
   */
  if (EFuse_Ctrl_EnFuse01) {
    /* Switch: '<S33>/Switch' incorporates:
     *  DataTypeConversion: '<S39>/Extract Desired Bits'
     */
    rtb_Switch_hs = (((uint8)(tmpIRead[0] >> 4) & 1U) != 0U);

    /* Switch: '<S34>/Switch' incorporates:
     *  DataTypeConversion: '<S40>/Extract Desired Bits'
     */
    rtb_Switch_kj = (((uint8)(tmpIRead[0] >> 2) & 1U) != 0U);

    /* Switch: '<S23>/Switch4' incorporates:
     *  Constant: '<S23>/Constant9'
     *  Constant: '<S23>/PA_EFuse_SWPrtSel_C4'
     *  DataTypeConversion: '<S28>/Extract Desired Bits'
     *  DataTypeConversion: '<S41>/Extract Desired Bits'
     *  Switch: '<S35>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 2 & 1U) != 0U) {
      tmp_0 = ((tmpIRead[0] >> 24 & 1U) != 0U);
    } else {
      tmp_0 = false;
    }

    /* End of Switch: '<S23>/Switch4' */

    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S23>/Constant1'
     *  Constant: '<S23>/PA_EFuse_SWPrtSel_C1'
     *  DataTypeConversion: '<S29>/Extract Desired Bits'
     *  DataTypeConversion: '<S37>/Extract Desired Bits'
     *  Switch: '<S31>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 3 & 1U) != 0U) {
      rtb_Switch4_ez = (((uint8)(tmpIRead[0] >> 17) & 1U) != 0U);
    } else {
      rtb_Switch4_ez = false;
    }

    /* End of Switch: '<S23>/Switch1' */

    /* Logic: '<S23>/Logical Operator' incorporates:
     *  Constant: '<S23>/PA_EFuse_SWPrtSel_C2'
     *  Constant: '<S23>/PA_EFuse_SWPrtSel_C3'
     *  DataTypeConversion: '<S26>/Extract Desired Bits'
     *  DataTypeConversion: '<S27>/Extract Desired Bits'
     *  Switch: '<S23>/Switch2'
     *  Switch: '<S23>/Switch3'
     */
    rtb_Switch4_ez = ((((Rte_CData_EFuse_SWPrtSel_C() & 1U) != 0U) &&
                       rtb_Switch_hs) || ((((uint32)Rte_CData_EFuse_SWPrtSel_C()
      >> 1 & 1U) != 0U) && rtb_Switch_kj) || tmp_0 || rtb_Switch4_ez);

    /* Switch: '<S36>/Switch' incorporates:
     *  Constant: '<S36>/Constant'
     *  RelationalOperator: '<S36>/Relational Operator'
     */
    rtb_Switch_je = (tmpIRead_0[0] == 3);

    /* Logic: '<S20>/Logical Operator1' incorporates:
     *  Logic: '<S20>/Logical Operator'
     */
    rtb_Switch_hs = ((!rtb_Switch_hs) && (!rtb_Switch_kj));

    /* Chart: '<S19>/Chart' incorporates:
     *  Constant: '<S19>/Constant'
     *  Constant: '<S42>/PA_EFuse_EnaSleepFailRetry_C'
     *  Constant: '<S42>/PA_EFuse_nSleepFailMax_C'
     *  Constant: '<S42>/PA_EFuse_tiSleepFailRetry_C'
     *  Constant: '<S42>/PA_EFuse_tiSleepFailToNrm_C'
     *  Inport: '<Root>/EFuse_flgPreSleep_Val'
     *  Inport: '<Root>/EFuse_flgPwrModChng_Val'
     */
    /* Gateway: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE01/CtrlChart/Chart */
    /* During: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE01/CtrlChart/Chart */
    if (EFuse_Ctrl_DW.is_active_c23_EFuse_Ctrl == 0U) {
      /* Entry: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE01/CtrlChart/Chart */
      EFuse_Ctrl_DW.is_active_c23_EFuse_Ctrl = 1U;

      /* Entry Internal: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE01/CtrlChart/Chart */
      /* Transition: '<S43>:2' */
      EFuse_Ctrl_DW.is_c23_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
      EFuse_Ctrl_DW.is_ECUWork_d = EFuse_Ctrl_IN_StandBy;

      /* Entry 'StandBy': '<S43>:1' */
      /* '<S43>:1:3' stFuse = uint8(0); */
      EFuse_Ctrl_stFuse01 = 0U;

      /* '<S43>:1:4' bAllwSleep = false; */
      EFuse_Ctrl_flgAllwSleep01 = false;

      /* '<S43>:1:5' bSleepFail = false; */
      /* '<S43>:1:6' bSWPrt = false; */
    } else {
      switch (EFuse_Ctrl_DW.is_c23_EFuse_Ctrl) {
       case EFuse_Ctrl_IN_ECUSleep:
        /* Switch: '<S24>/Switch' incorporates:
         *  Constant: '<S24>/Constant1'
         *  Constant: '<S24>/PA_EFuse_ReWrkSel_C'
         *  DataTypeConversion: '<S30>/Extract Desired Bits'
         *  Inport: '<Root>/EFuse_flgPreSleep_Val'
         *  Logic: '<S24>/Logical Operator1'
         */
        /* During 'ECUSleep': '<S43>:64' */
        /* '<S43>:35:1' sf_internal_predicateOutput = flgReWrk; */
        if ((Rte_CData_EFuse_ReWrkSel_C() & 1U) != 0U) {
          tmp_0 = !Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val();
        } else {
          tmp_0 = false;
        }

        /* End of Switch: '<S24>/Switch' */
        if (tmp_0) {
          /* Transition: '<S43>:35' */
          /* Exit Internal 'ECUSleep': '<S43>:64' */
          /* Exit Internal 'SleepRetry': '<S43>:14' */
          EFuse_Ctrl_DW.is_SleepRetry_o4 = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_ECUSleep_d = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_c23_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_d = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S43>:3' */
          /* '<S43>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse01 = 1U;

          /* '<S43>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep01 = false;

          /* '<S43>:3:5' bSleepFail = false; */
          /* '<S43>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse01SleepRetryCount = 0U;

          /* '<S43>:3:7' bSWPrt = false; */
        } else {
          /* '<S43>:80:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S43>:80' */
            /* Exit Internal 'ECUSleep': '<S43>:64' */
            /* Exit Internal 'SleepRetry': '<S43>:14' */
            EFuse_Ctrl_DW.is_SleepRetry_o4 = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_ECUSleep_d = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c23_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S43>:7' */
            /* '<S43>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse01 = 2U;

            /* '<S43>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep01 = true;

            /* '<S43>:7:5' bSWPrt = true; */
          } else {
            switch (EFuse_Ctrl_DW.is_ECUSleep_d) {
             case EFuse_Ctrl_IN_NormSleep:
              EFuse_Ctrl_stFuse01 = 4U;
              EFuse_Ctrl_flgAllwSleep01 = true;

              /* During 'NormSleep': '<S43>:13' */
              /* '<S43>:21:1' sf_internal_predicateOutput = flgSleepFail; */
              if (rtb_Switch_je) {
                /* Transition: '<S43>:21' */
                EFuse_Ctrl_DW.is_ECUSleep_d = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S43>:18' */
                /* '<S43>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse01 = 5U;

                /* '<S43>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep01 = true;

                /* '<S43>:18:5' bSleepFail = true; */
              }
              break;

             case EFuse_Ctrl_IN_SleepFail:
              EFuse_Ctrl_stFuse01 = 5U;
              EFuse_Ctrl_flgAllwSleep01 = true;

              /* During 'SleepFail': '<S43>:18' */
              /* '<S43>:22:1' sf_internal_predicateOutput = EnSleepFailRetry && ... */
              /* '<S43>:22:2' count < nSleepFailMax_C; */
              if (Rte_CData_EFuse_EnSleepFailRetry_C() &&
                  (EFuse_Ctr_Fuse01SleepRetryCount <
                   Rte_CData_EFuse_nSleepFailMax_C())) {
                /* Transition: '<S43>:22' */
                EFuse_Ctrl_DW.is_ECUSleep_d = EFuse_Ctrl_IN_SleepRetry;

                /* Entry Internal 'SleepRetry': '<S43>:14' */
                /* Transition: '<S43>:23' */
                EFuse_Ctrl_DW.is_SleepRetry_o4 = EFuse_Ctrl_IN_FailCounter;

                /* Entry 'FailCounter': '<S43>:10' */
                /* '<S43>:10:3' stFuse = uint8(6); */
                EFuse_Ctrl_stFuse01 = 6U;

                /* '<S43>:10:4' bAllwSleep = false; */
                EFuse_Ctrl_flgAllwSleep01 = false;

                /* '<S43>:10:5' count = count + uint8(1); */
                EFuse_Ctr_Fuse01SleepRetryCount = Mfx_Add_u8u8_u8
                  (EFuse_Ctr_Fuse01SleepRetryCount, 1U);

                /* '<S43>:10:6' waitTime(false); */
                /* Simulink Function 'waitTime': '<S43>:72' */
                EFuse_Ctrl_B.En_pd = false;

                /* Outputs for Function Call SubSystem: '<S43>/waitTime' */
                EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_pd, &EFuse_Ctrl_B.Switch_mg,
                                    &EFuse_Ctrl_DW.waitTime);

                /* End of Outputs for SubSystem: '<S43>/waitTime' */
              }
              break;

             default:
              /* During 'SleepRetry': '<S43>:14' */
              /* '<S43>:27:1' sf_internal_predicateOutput = count >= nSleepFailMax_C; */
              if (EFuse_Ctr_Fuse01SleepRetryCount >=
                  Rte_CData_EFuse_nSleepFailMax_C()) {
                /* Transition: '<S43>:27' */
                /* Exit Internal 'SleepRetry': '<S43>:14' */
                EFuse_Ctrl_DW.is_SleepRetry_o4 = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                EFuse_Ctrl_DW.is_ECUSleep_d = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S43>:18' */
                /* '<S43>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse01 = 5U;

                /* '<S43>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep01 = true;

                /* '<S43>:18:5' bSleepFail = true; */
              } else if (EFuse_Ctrl_DW.is_SleepRetry_o4 ==
                         EFuse_Ctrl_IN_FailCounter) {
                EFuse_Ctrl_stFuse01 = 6U;
                EFuse_Ctrl_flgAllwSleep01 = false;

                /* During 'FailCounter': '<S43>:10' */
                /* '<S43>:24:1' sf_internal_predicateOutput = count < nSleepFailMax_C && ... */
                /* '<S43>:24:2' waitTime(true) > TiReSleep_C; */
                if (EFuse_Ctr_Fuse01SleepRetryCount <
                    Rte_CData_EFuse_nSleepFailMax_C()) {
                  /* Simulink Function 'waitTime': '<S43>:72' */
                  EFuse_Ctrl_B.En_pd = true;

                  /* Outputs for Function Call SubSystem: '<S43>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_pd,
                                      &EFuse_Ctrl_B.Switch_mg,
                                      &EFuse_Ctrl_DW.waitTime);

                  /* End of Outputs for SubSystem: '<S43>/waitTime' */
                  rtb_Switch_hs = (EFuse_Ctrl_B.Switch_mg >
                                   Rte_CData_EFuse_tiSleepFailRetry_C());
                } else {
                  rtb_Switch_hs = false;
                }

                if (rtb_Switch_hs) {
                  /* Transition: '<S43>:24' */
                  EFuse_Ctrl_DW.is_SleepRetry_o4 = EFuse_Ctrl_IN_Retry;

                  /* Entry 'Retry': '<S43>:15' */
                  /* '<S43>:15:3' stFuse = uint8(7); */
                  EFuse_Ctrl_stFuse01 = 7U;

                  /* '<S43>:15:4' bAllwSleep = true; */
                  EFuse_Ctrl_flgAllwSleep01 = true;

                  /* '<S43>:15:5' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S43>:72' */
                  EFuse_Ctrl_B.En_pd = false;

                  /* Outputs for Function Call SubSystem: '<S43>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_pd,
                                      &EFuse_Ctrl_B.Switch_mg,
                                      &EFuse_Ctrl_DW.waitTime);

                  /* End of Outputs for SubSystem: '<S43>/waitTime' */
                }
              } else {
                EFuse_Ctrl_stFuse01 = 7U;
                EFuse_Ctrl_flgAllwSleep01 = true;

                /* During 'Retry': '<S43>:15' */
                /* '<S43>:26:1' sf_internal_predicateOutput = flgSleepFail; */
                if (rtb_Switch_je) {
                  /* Transition: '<S43>:26' */
                  EFuse_Ctrl_DW.is_SleepRetry_o4 = EFuse_Ctrl_IN_FailCounter;

                  /* Entry 'FailCounter': '<S43>:10' */
                  /* '<S43>:10:3' stFuse = uint8(6); */
                  EFuse_Ctrl_stFuse01 = 6U;

                  /* '<S43>:10:4' bAllwSleep = false; */
                  EFuse_Ctrl_flgAllwSleep01 = false;

                  /* '<S43>:10:5' count = count + uint8(1); */
                  EFuse_Ctr_Fuse01SleepRetryCount = Mfx_Add_u8u8_u8
                    (EFuse_Ctr_Fuse01SleepRetryCount, 1U);

                  /* '<S43>:10:6' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S43>:72' */
                  EFuse_Ctrl_B.En_pd = false;

                  /* Outputs for Function Call SubSystem: '<S43>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_pd,
                                      &EFuse_Ctrl_B.Switch_mg,
                                      &EFuse_Ctrl_DW.waitTime);

                  /* End of Outputs for SubSystem: '<S43>/waitTime' */
                } else {
                  /* '<S43>:28:1' sf_internal_predicateOutput = waitTime(true) > TiReSleepDiag_C; */
                  /* Simulink Function 'waitTime': '<S43>:72' */
                  EFuse_Ctrl_B.En_pd = true;

                  /* Outputs for Function Call SubSystem: '<S43>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_pd,
                                      &EFuse_Ctrl_B.Switch_mg,
                                      &EFuse_Ctrl_DW.waitTime);

                  /* End of Outputs for SubSystem: '<S43>/waitTime' */
                  if (EFuse_Ctrl_B.Switch_mg >
                      Rte_CData_EFuse_tiSleepFailToNrm_C()) {
                    /* Transition: '<S43>:28' */
                    EFuse_Ctrl_DW.is_SleepRetry_o4 =
                      EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                    EFuse_Ctrl_DW.is_ECUSleep_d = EFuse_Ctrl_IN_NormSleep;

                    /* Entry 'NormSleep': '<S43>:13' */
                    /* '<S43>:13:3' stFuse = uint8(4); */
                    EFuse_Ctrl_stFuse01 = 4U;

                    /* '<S43>:13:4' bAllwSleep = true; */
                    EFuse_Ctrl_flgAllwSleep01 = true;

                    /* '<S43>:13:5' bSleepFail = false; */
                    /* '<S43>:13:6' waitTime(false); */
                    /* Simulink Function 'waitTime': '<S43>:72' */
                    EFuse_Ctrl_B.En_pd = false;

                    /* Outputs for Function Call SubSystem: '<S43>/waitTime' */
                    EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_pd,
                                        &EFuse_Ctrl_B.Switch_mg,
                                        &EFuse_Ctrl_DW.waitTime);

                    /* End of Outputs for SubSystem: '<S43>/waitTime' */
                  }
                }
              }
              break;
            }
          }
        }
        break;

       case EFuse_Ctrl_IN_ECUWork:
        /* During 'ECUWork': '<S43>:63' */
        switch (EFuse_Ctrl_DW.is_ECUWork_d) {
         case EFuse_Ctrl_IN_NormWork:
          EFuse_Ctrl_stFuse01 = 1U;
          EFuse_Ctrl_flgAllwSleep01 = false;

          /* During 'NormWork': '<S43>:3' */
          /* '<S43>:38:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S43>:38' */
            EFuse_Ctrl_DW.is_ECUWork_d = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c23_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S43>:7' */
            /* '<S43>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse01 = 2U;

            /* '<S43>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep01 = true;

            /* '<S43>:7:5' bSWPrt = true; */
          } else {
            /* '<S43>:20:1' sf_internal_predicateOutput = flgPreSleep; */
            if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val()) {
              /* Transition: '<S43>:20' */
              EFuse_Ctrl_DW.is_ECUWork_d = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
              EFuse_Ctrl_DW.is_c23_EFuse_Ctrl = EFuse_Ctrl_IN_ECUSleep;
              EFuse_Ctrl_DW.is_ECUSleep_d = EFuse_Ctrl_IN_NormSleep;

              /* Entry 'NormSleep': '<S43>:13' */
              /* '<S43>:13:3' stFuse = uint8(4); */
              EFuse_Ctrl_stFuse01 = 4U;

              /* '<S43>:13:4' bAllwSleep = true; */
              EFuse_Ctrl_flgAllwSleep01 = true;

              /* '<S43>:13:5' bSleepFail = false; */
              /* '<S43>:13:6' waitTime(false); */
              /* Simulink Function 'waitTime': '<S43>:72' */
              EFuse_Ctrl_B.En_pd = false;

              /* Outputs for Function Call SubSystem: '<S43>/waitTime' */
              EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_pd, &EFuse_Ctrl_B.Switch_mg,
                                  &EFuse_Ctrl_DW.waitTime);

              /* End of Outputs for SubSystem: '<S43>/waitTime' */
            }
          }
          break;

         case EFuse_Ctrl_IN_PreCharge:
          EFuse_Ctrl_stFuse01 = 3U;
          EFuse_Ctrl_flgAllwSleep01 = false;

          /* During 'PreCharge': '<S43>:100' */
          /* '<S43>:103:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
          /* '<S43>:103:2'  && ~flgPreChrgSucc; */
          /* Simulink Function 'waitTime': '<S43>:72' */
          EFuse_Ctrl_B.En_pd = true;

          /* Outputs for Function Call SubSystem: '<S43>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_pd, &EFuse_Ctrl_B.Switch_mg,
                              &EFuse_Ctrl_DW.waitTime);

          /* End of Outputs for SubSystem: '<S43>/waitTime' */
          if ((EFuse_Ctrl_B.Switch_mg > 2000U) && (!rtb_Switch_hs)) {
            /* Transition: '<S43>:103' */
            EFuse_Ctrl_DW.is_ECUWork_d = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c23_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S43>:7' */
            /* '<S43>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse01 = 2U;

            /* '<S43>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep01 = true;

            /* '<S43>:7:5' bSWPrt = true; */
          } else {
            /* '<S43>:101:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
            /* '<S43>:101:2'  && flgPreChrgSucc; */
            /* Simulink Function 'waitTime': '<S43>:72' */
            EFuse_Ctrl_B.En_pd = true;

            /* Outputs for Function Call SubSystem: '<S43>/waitTime' */
            EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_pd, &EFuse_Ctrl_B.Switch_mg,
                                &EFuse_Ctrl_DW.waitTime);

            /* End of Outputs for SubSystem: '<S43>/waitTime' */
            if ((EFuse_Ctrl_B.Switch_mg > 2000U) && rtb_Switch_hs) {
              /* Transition: '<S43>:101' */
              EFuse_Ctrl_DW.is_ECUWork_d = EFuse_Ctrl_IN_NormWork;

              /* Entry 'NormWork': '<S43>:3' */
              /* '<S43>:3:3' stFuse = uint8(1); */
              EFuse_Ctrl_stFuse01 = 1U;

              /* '<S43>:3:4' bAllwSleep = false; */
              EFuse_Ctrl_flgAllwSleep01 = false;

              /* '<S43>:3:5' bSleepFail = false; */
              /* '<S43>:3:6' count = uint8(0); */
              EFuse_Ctr_Fuse01SleepRetryCount = 0U;

              /* '<S43>:3:7' bSWPrt = false; */
            }
          }
          break;

         default:
          /* During 'StandBy': '<S43>:1' */
          /* Transition: '<S43>:4' */
          EFuse_Ctrl_DW.is_ECUWork_d = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S43>:3' */
          /* '<S43>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse01 = 1U;

          /* '<S43>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep01 = false;

          /* '<S43>:3:5' bSleepFail = false; */
          /* '<S43>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse01SleepRetryCount = 0U;

          /* '<S43>:3:7' bSWPrt = false; */
          break;
        }
        break;

       default:
        EFuse_Ctrl_stFuse01 = 2U;
        EFuse_Ctrl_flgAllwSleep01 = true;

        /* During 'SWProtect': '<S43>:7' */
        /* '<S43>:34:1' sf_internal_predicateOutput = flgReset; */
        if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPwrModChng_Val()) {
          /* Transition: '<S43>:34' */
          EFuse_Ctrl_DW.is_c23_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_d = EFuse_Ctrl_IN_PreCharge;

          /* Entry 'PreCharge': '<S43>:100' */
          /* '<S43>:100:3' stFuse = uint8(3); */
          EFuse_Ctrl_stFuse01 = 3U;

          /* '<S43>:100:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep01 = false;

          /* '<S43>:100:5' bSleepFail = false; */
          /* '<S43>:100:6' waitTime(false); */
          /* Simulink Function 'waitTime': '<S43>:72' */
          EFuse_Ctrl_B.En_pd = false;

          /* Outputs for Function Call SubSystem: '<S43>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_pd, &EFuse_Ctrl_B.Switch_mg,
                              &EFuse_Ctrl_DW.waitTime);

          /* End of Outputs for SubSystem: '<S43>/waitTime' */
        }
        break;
      }
    }

    /* End of Chart: '<S19>/Chart' */

    /* DataStoreWrite: '<S19>/Data Store Write' */
    EFuse_C_Fuse01SleepRetryCount_f = EFuse_Ctr_Fuse01SleepRetryCount;
  }

  /* End of Outputs for SubSystem: '<S4>/FUSE01' */

  /* Switch: '<S6>/Switch1' incorporates:
   *  Constant: '<S6>/PA_EFuse_ActUseFuseChInfo_C1'
   *  DataTypeConversion: '<S262>/Extract Desired Bits'
   */
  EFuse_Ctrl_EnFuse02 = (((uint8)(Rte_CData_EFuse_ActUseFuseChInfo_C() >> 2) &
    1U) != 0U);

  /* Outputs for Enabled SubSystem: '<S4>/FUSE02' incorporates:
   *  EnablePort: '<S10>/Enable'
   */
  if (EFuse_Ctrl_EnFuse02) {
    /* Switch: '<S60>/Switch' incorporates:
     *  DataTypeConversion: '<S66>/Extract Desired Bits'
     */
    rtb_Switch_hs = (((uint8)(tmpIRead[1] >> 4) & 1U) != 0U);

    /* Switch: '<S61>/Switch' incorporates:
     *  DataTypeConversion: '<S67>/Extract Desired Bits'
     */
    rtb_Switch_kj = (((uint8)(tmpIRead[1] >> 2) & 1U) != 0U);

    /* Switch: '<S50>/Switch4' incorporates:
     *  Constant: '<S50>/Constant9'
     *  Constant: '<S50>/PA_EFuse_SWPrtSel_C4'
     *  DataTypeConversion: '<S55>/Extract Desired Bits'
     *  DataTypeConversion: '<S68>/Extract Desired Bits'
     *  Switch: '<S62>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 2 & 1U) != 0U) {
      tmp_0 = ((tmpIRead[1] >> 24 & 1U) != 0U);
    } else {
      tmp_0 = false;
    }

    /* End of Switch: '<S50>/Switch4' */

    /* Switch: '<S50>/Switch1' incorporates:
     *  Constant: '<S50>/Constant1'
     *  Constant: '<S50>/PA_EFuse_SWPrtSel_C1'
     *  DataTypeConversion: '<S56>/Extract Desired Bits'
     *  DataTypeConversion: '<S64>/Extract Desired Bits'
     *  Switch: '<S58>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 3 & 1U) != 0U) {
      rtb_Switch4_ez = (((uint8)(tmpIRead[1] >> 17) & 1U) != 0U);
    } else {
      rtb_Switch4_ez = false;
    }

    /* End of Switch: '<S50>/Switch1' */

    /* Logic: '<S50>/Logical Operator' incorporates:
     *  Constant: '<S50>/PA_EFuse_SWPrtSel_C2'
     *  Constant: '<S50>/PA_EFuse_SWPrtSel_C3'
     *  DataTypeConversion: '<S53>/Extract Desired Bits'
     *  DataTypeConversion: '<S54>/Extract Desired Bits'
     *  Switch: '<S50>/Switch2'
     *  Switch: '<S50>/Switch3'
     */
    rtb_Switch4_ez = ((((Rte_CData_EFuse_SWPrtSel_C() & 1U) != 0U) &&
                       rtb_Switch_hs) || ((((uint32)Rte_CData_EFuse_SWPrtSel_C()
      >> 1 & 1U) != 0U) && rtb_Switch_kj) || tmp_0 || rtb_Switch4_ez);

    /* Switch: '<S63>/Switch' incorporates:
     *  Constant: '<S63>/Constant'
     *  RelationalOperator: '<S63>/Relational Operator'
     */
    rtb_Switch_je = (tmpIRead_0[1] == 3);

    /* Logic: '<S47>/Logical Operator1' incorporates:
     *  Logic: '<S47>/Logical Operator'
     */
    rtb_Switch_hs = ((!rtb_Switch_hs) && (!rtb_Switch_kj));

    /* Chart: '<S46>/Chart' incorporates:
     *  Constant: '<S46>/Constant'
     *  Constant: '<S69>/PA_EFuse_EnaSleepFailRetry_C'
     *  Constant: '<S69>/PA_EFuse_nSleepFailMax_C'
     *  Constant: '<S69>/PA_EFuse_tiSleepFailRetry_C'
     *  Constant: '<S69>/PA_EFuse_tiSleepFailToNrm_C'
     *  Inport: '<Root>/EFuse_flgPreSleep_Val'
     *  Inport: '<Root>/EFuse_flgPwrModChng_Val'
     */
    /* Gateway: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE02/CtrlChart/Chart */
    /* During: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE02/CtrlChart/Chart */
    if (EFuse_Ctrl_DW.is_active_c1_EFuse_Ctrl == 0U) {
      /* Entry: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE02/CtrlChart/Chart */
      EFuse_Ctrl_DW.is_active_c1_EFuse_Ctrl = 1U;

      /* Entry Internal: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE02/CtrlChart/Chart */
      /* Transition: '<S70>:2' */
      EFuse_Ctrl_DW.is_c1_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
      EFuse_Ctrl_DW.is_ECUWork_b = EFuse_Ctrl_IN_StandBy;

      /* Entry 'StandBy': '<S70>:1' */
      /* '<S70>:1:3' stFuse = uint8(0); */
      EFuse_Ctrl_stFuse02 = 0U;

      /* '<S70>:1:4' bAllwSleep = false; */
      EFuse_Ctrl_flgAllwSleep02 = false;

      /* '<S70>:1:5' bSleepFail = false; */
      /* '<S70>:1:6' bSWPrt = false; */
    } else {
      switch (EFuse_Ctrl_DW.is_c1_EFuse_Ctrl) {
       case EFuse_Ctrl_IN_ECUSleep:
        /* Switch: '<S51>/Switch' incorporates:
         *  Constant: '<S51>/Constant1'
         *  Constant: '<S51>/PA_EFuse_ReWrkSel_C'
         *  DataTypeConversion: '<S57>/Extract Desired Bits'
         *  Inport: '<Root>/EFuse_flgPreSleep_Val'
         *  Logic: '<S51>/Logical Operator1'
         */
        /* During 'ECUSleep': '<S70>:64' */
        /* '<S70>:35:1' sf_internal_predicateOutput = flgReWrk; */
        if ((Rte_CData_EFuse_ReWrkSel_C() & 1U) != 0U) {
          tmp_0 = !Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val();
        } else {
          tmp_0 = false;
        }

        /* End of Switch: '<S51>/Switch' */
        if (tmp_0) {
          /* Transition: '<S70>:35' */
          /* Exit Internal 'ECUSleep': '<S70>:64' */
          /* Exit Internal 'SleepRetry': '<S70>:14' */
          EFuse_Ctrl_DW.is_SleepRetry_o = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_ECUSleep_i = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_c1_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_b = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S70>:3' */
          /* '<S70>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse02 = 1U;

          /* '<S70>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep02 = false;

          /* '<S70>:3:5' bSleepFail = false; */
          /* '<S70>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse02SleepRetryCount = 0U;

          /* '<S70>:3:7' bSWPrt = false; */
        } else {
          /* '<S70>:80:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S70>:80' */
            /* Exit Internal 'ECUSleep': '<S70>:64' */
            /* Exit Internal 'SleepRetry': '<S70>:14' */
            EFuse_Ctrl_DW.is_SleepRetry_o = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_ECUSleep_i = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c1_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S70>:7' */
            /* '<S70>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse02 = 2U;

            /* '<S70>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep02 = true;

            /* '<S70>:7:5' bSWPrt = true; */
          } else {
            switch (EFuse_Ctrl_DW.is_ECUSleep_i) {
             case EFuse_Ctrl_IN_NormSleep:
              EFuse_Ctrl_stFuse02 = 4U;
              EFuse_Ctrl_flgAllwSleep02 = true;

              /* During 'NormSleep': '<S70>:13' */
              /* '<S70>:21:1' sf_internal_predicateOutput = flgSleepFail; */
              if (rtb_Switch_je) {
                /* Transition: '<S70>:21' */
                EFuse_Ctrl_DW.is_ECUSleep_i = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S70>:18' */
                /* '<S70>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse02 = 5U;

                /* '<S70>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep02 = true;

                /* '<S70>:18:5' bSleepFail = true; */
              }
              break;

             case EFuse_Ctrl_IN_SleepFail:
              EFuse_Ctrl_stFuse02 = 5U;
              EFuse_Ctrl_flgAllwSleep02 = true;

              /* During 'SleepFail': '<S70>:18' */
              /* '<S70>:22:1' sf_internal_predicateOutput = EnSleepFailRetry && ... */
              /* '<S70>:22:2' count < nSleepFailMax_C; */
              if (Rte_CData_EFuse_EnSleepFailRetry_C() &&
                  (EFuse_Ctr_Fuse02SleepRetryCount <
                   Rte_CData_EFuse_nSleepFailMax_C())) {
                /* Transition: '<S70>:22' */
                EFuse_Ctrl_DW.is_ECUSleep_i = EFuse_Ctrl_IN_SleepRetry;

                /* Entry Internal 'SleepRetry': '<S70>:14' */
                /* Transition: '<S70>:23' */
                EFuse_Ctrl_DW.is_SleepRetry_o = EFuse_Ctrl_IN_FailCounter;

                /* Entry 'FailCounter': '<S70>:10' */
                /* '<S70>:10:3' stFuse = uint8(6); */
                EFuse_Ctrl_stFuse02 = 6U;

                /* '<S70>:10:4' bAllwSleep = false; */
                EFuse_Ctrl_flgAllwSleep02 = false;

                /* '<S70>:10:5' count = count + uint8(1); */
                EFuse_Ctr_Fuse02SleepRetryCount = Mfx_Add_u8u8_u8
                  (EFuse_Ctr_Fuse02SleepRetryCount, 1U);

                /* '<S70>:10:6' waitTime(false); */
                /* Simulink Function 'waitTime': '<S70>:72' */
                EFuse_Ctrl_B.En_j = false;

                /* Outputs for Function Call SubSystem: '<S70>/waitTime' */
                EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_j, &EFuse_Ctrl_B.Switch_a,
                                    &EFuse_Ctrl_DW.waitTime_m);

                /* End of Outputs for SubSystem: '<S70>/waitTime' */
              }
              break;

             default:
              /* During 'SleepRetry': '<S70>:14' */
              /* '<S70>:27:1' sf_internal_predicateOutput = count >= nSleepFailMax_C; */
              if (EFuse_Ctr_Fuse02SleepRetryCount >=
                  Rte_CData_EFuse_nSleepFailMax_C()) {
                /* Transition: '<S70>:27' */
                /* Exit Internal 'SleepRetry': '<S70>:14' */
                EFuse_Ctrl_DW.is_SleepRetry_o = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                EFuse_Ctrl_DW.is_ECUSleep_i = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S70>:18' */
                /* '<S70>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse02 = 5U;

                /* '<S70>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep02 = true;

                /* '<S70>:18:5' bSleepFail = true; */
              } else if (EFuse_Ctrl_DW.is_SleepRetry_o ==
                         EFuse_Ctrl_IN_FailCounter) {
                EFuse_Ctrl_stFuse02 = 6U;
                EFuse_Ctrl_flgAllwSleep02 = false;

                /* During 'FailCounter': '<S70>:10' */
                /* '<S70>:24:1' sf_internal_predicateOutput = count < nSleepFailMax_C && ... */
                /* '<S70>:24:2' waitTime(true) > TiReSleep_C; */
                if (EFuse_Ctr_Fuse02SleepRetryCount <
                    Rte_CData_EFuse_nSleepFailMax_C()) {
                  /* Simulink Function 'waitTime': '<S70>:72' */
                  EFuse_Ctrl_B.En_j = true;

                  /* Outputs for Function Call SubSystem: '<S70>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_j, &EFuse_Ctrl_B.Switch_a,
                                      &EFuse_Ctrl_DW.waitTime_m);

                  /* End of Outputs for SubSystem: '<S70>/waitTime' */
                  rtb_Switch_hs = (EFuse_Ctrl_B.Switch_a >
                                   Rte_CData_EFuse_tiSleepFailRetry_C());
                } else {
                  rtb_Switch_hs = false;
                }

                if (rtb_Switch_hs) {
                  /* Transition: '<S70>:24' */
                  EFuse_Ctrl_DW.is_SleepRetry_o = EFuse_Ctrl_IN_Retry;

                  /* Entry 'Retry': '<S70>:15' */
                  /* '<S70>:15:3' stFuse = uint8(7); */
                  EFuse_Ctrl_stFuse02 = 7U;

                  /* '<S70>:15:4' bAllwSleep = true; */
                  EFuse_Ctrl_flgAllwSleep02 = true;

                  /* '<S70>:15:5' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S70>:72' */
                  EFuse_Ctrl_B.En_j = false;

                  /* Outputs for Function Call SubSystem: '<S70>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_j, &EFuse_Ctrl_B.Switch_a,
                                      &EFuse_Ctrl_DW.waitTime_m);

                  /* End of Outputs for SubSystem: '<S70>/waitTime' */
                }
              } else {
                EFuse_Ctrl_stFuse02 = 7U;
                EFuse_Ctrl_flgAllwSleep02 = true;

                /* During 'Retry': '<S70>:15' */
                /* '<S70>:26:1' sf_internal_predicateOutput = flgSleepFail; */
                if (rtb_Switch_je) {
                  /* Transition: '<S70>:26' */
                  EFuse_Ctrl_DW.is_SleepRetry_o = EFuse_Ctrl_IN_FailCounter;

                  /* Entry 'FailCounter': '<S70>:10' */
                  /* '<S70>:10:3' stFuse = uint8(6); */
                  EFuse_Ctrl_stFuse02 = 6U;

                  /* '<S70>:10:4' bAllwSleep = false; */
                  EFuse_Ctrl_flgAllwSleep02 = false;

                  /* '<S70>:10:5' count = count + uint8(1); */
                  EFuse_Ctr_Fuse02SleepRetryCount = Mfx_Add_u8u8_u8
                    (EFuse_Ctr_Fuse02SleepRetryCount, 1U);

                  /* '<S70>:10:6' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S70>:72' */
                  EFuse_Ctrl_B.En_j = false;

                  /* Outputs for Function Call SubSystem: '<S70>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_j, &EFuse_Ctrl_B.Switch_a,
                                      &EFuse_Ctrl_DW.waitTime_m);

                  /* End of Outputs for SubSystem: '<S70>/waitTime' */
                } else {
                  /* '<S70>:28:1' sf_internal_predicateOutput = waitTime(true) > TiReSleepDiag_C; */
                  /* Simulink Function 'waitTime': '<S70>:72' */
                  EFuse_Ctrl_B.En_j = true;

                  /* Outputs for Function Call SubSystem: '<S70>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_j, &EFuse_Ctrl_B.Switch_a,
                                      &EFuse_Ctrl_DW.waitTime_m);

                  /* End of Outputs for SubSystem: '<S70>/waitTime' */
                  if (EFuse_Ctrl_B.Switch_a > Rte_CData_EFuse_tiSleepFailToNrm_C
                      ()) {
                    /* Transition: '<S70>:28' */
                    EFuse_Ctrl_DW.is_SleepRetry_o =
                      EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                    EFuse_Ctrl_DW.is_ECUSleep_i = EFuse_Ctrl_IN_NormSleep;

                    /* Entry 'NormSleep': '<S70>:13' */
                    /* '<S70>:13:3' stFuse = uint8(4); */
                    EFuse_Ctrl_stFuse02 = 4U;

                    /* '<S70>:13:4' bAllwSleep = true; */
                    EFuse_Ctrl_flgAllwSleep02 = true;

                    /* '<S70>:13:5' bSleepFail = false; */
                    /* '<S70>:13:6' waitTime(false); */
                    /* Simulink Function 'waitTime': '<S70>:72' */
                    EFuse_Ctrl_B.En_j = false;

                    /* Outputs for Function Call SubSystem: '<S70>/waitTime' */
                    EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_j,
                                        &EFuse_Ctrl_B.Switch_a,
                                        &EFuse_Ctrl_DW.waitTime_m);

                    /* End of Outputs for SubSystem: '<S70>/waitTime' */
                  }
                }
              }
              break;
            }
          }
        }
        break;

       case EFuse_Ctrl_IN_ECUWork:
        /* During 'ECUWork': '<S70>:63' */
        switch (EFuse_Ctrl_DW.is_ECUWork_b) {
         case EFuse_Ctrl_IN_NormWork:
          EFuse_Ctrl_stFuse02 = 1U;
          EFuse_Ctrl_flgAllwSleep02 = false;

          /* During 'NormWork': '<S70>:3' */
          /* '<S70>:38:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S70>:38' */
            EFuse_Ctrl_DW.is_ECUWork_b = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c1_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S70>:7' */
            /* '<S70>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse02 = 2U;

            /* '<S70>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep02 = true;

            /* '<S70>:7:5' bSWPrt = true; */
          } else {
            /* '<S70>:20:1' sf_internal_predicateOutput = flgPreSleep; */
            if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val()) {
              /* Transition: '<S70>:20' */
              EFuse_Ctrl_DW.is_ECUWork_b = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
              EFuse_Ctrl_DW.is_c1_EFuse_Ctrl = EFuse_Ctrl_IN_ECUSleep;
              EFuse_Ctrl_DW.is_ECUSleep_i = EFuse_Ctrl_IN_NormSleep;

              /* Entry 'NormSleep': '<S70>:13' */
              /* '<S70>:13:3' stFuse = uint8(4); */
              EFuse_Ctrl_stFuse02 = 4U;

              /* '<S70>:13:4' bAllwSleep = true; */
              EFuse_Ctrl_flgAllwSleep02 = true;

              /* '<S70>:13:5' bSleepFail = false; */
              /* '<S70>:13:6' waitTime(false); */
              /* Simulink Function 'waitTime': '<S70>:72' */
              EFuse_Ctrl_B.En_j = false;

              /* Outputs for Function Call SubSystem: '<S70>/waitTime' */
              EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_j, &EFuse_Ctrl_B.Switch_a,
                                  &EFuse_Ctrl_DW.waitTime_m);

              /* End of Outputs for SubSystem: '<S70>/waitTime' */
            }
          }
          break;

         case EFuse_Ctrl_IN_PreCharge:
          EFuse_Ctrl_stFuse02 = 3U;
          EFuse_Ctrl_flgAllwSleep02 = false;

          /* During 'PreCharge': '<S70>:100' */
          /* '<S70>:103:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
          /* '<S70>:103:2'  && ~flgPreChrgSucc; */
          /* Simulink Function 'waitTime': '<S70>:72' */
          EFuse_Ctrl_B.En_j = true;

          /* Outputs for Function Call SubSystem: '<S70>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_j, &EFuse_Ctrl_B.Switch_a,
                              &EFuse_Ctrl_DW.waitTime_m);

          /* End of Outputs for SubSystem: '<S70>/waitTime' */
          if ((EFuse_Ctrl_B.Switch_a > 2000U) && (!rtb_Switch_hs)) {
            /* Transition: '<S70>:103' */
            EFuse_Ctrl_DW.is_ECUWork_b = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c1_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S70>:7' */
            /* '<S70>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse02 = 2U;

            /* '<S70>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep02 = true;

            /* '<S70>:7:5' bSWPrt = true; */
          } else {
            /* '<S70>:101:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
            /* '<S70>:101:2'  && flgPreChrgSucc; */
            /* Simulink Function 'waitTime': '<S70>:72' */
            EFuse_Ctrl_B.En_j = true;

            /* Outputs for Function Call SubSystem: '<S70>/waitTime' */
            EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_j, &EFuse_Ctrl_B.Switch_a,
                                &EFuse_Ctrl_DW.waitTime_m);

            /* End of Outputs for SubSystem: '<S70>/waitTime' */
            if ((EFuse_Ctrl_B.Switch_a > 2000U) && rtb_Switch_hs) {
              /* Transition: '<S70>:101' */
              EFuse_Ctrl_DW.is_ECUWork_b = EFuse_Ctrl_IN_NormWork;

              /* Entry 'NormWork': '<S70>:3' */
              /* '<S70>:3:3' stFuse = uint8(1); */
              EFuse_Ctrl_stFuse02 = 1U;

              /* '<S70>:3:4' bAllwSleep = false; */
              EFuse_Ctrl_flgAllwSleep02 = false;

              /* '<S70>:3:5' bSleepFail = false; */
              /* '<S70>:3:6' count = uint8(0); */
              EFuse_Ctr_Fuse02SleepRetryCount = 0U;

              /* '<S70>:3:7' bSWPrt = false; */
            }
          }
          break;

         default:
          /* During 'StandBy': '<S70>:1' */
          /* Transition: '<S70>:4' */
          EFuse_Ctrl_DW.is_ECUWork_b = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S70>:3' */
          /* '<S70>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse02 = 1U;

          /* '<S70>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep02 = false;

          /* '<S70>:3:5' bSleepFail = false; */
          /* '<S70>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse02SleepRetryCount = 0U;

          /* '<S70>:3:7' bSWPrt = false; */
          break;
        }
        break;

       default:
        EFuse_Ctrl_stFuse02 = 2U;
        EFuse_Ctrl_flgAllwSleep02 = true;

        /* During 'SWProtect': '<S70>:7' */
        /* '<S70>:34:1' sf_internal_predicateOutput = flgReset; */
        if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPwrModChng_Val()) {
          /* Transition: '<S70>:34' */
          EFuse_Ctrl_DW.is_c1_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_b = EFuse_Ctrl_IN_PreCharge;

          /* Entry 'PreCharge': '<S70>:100' */
          /* '<S70>:100:3' stFuse = uint8(3); */
          EFuse_Ctrl_stFuse02 = 3U;

          /* '<S70>:100:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep02 = false;

          /* '<S70>:100:5' bSleepFail = false; */
          /* '<S70>:100:6' waitTime(false); */
          /* Simulink Function 'waitTime': '<S70>:72' */
          EFuse_Ctrl_B.En_j = false;

          /* Outputs for Function Call SubSystem: '<S70>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_j, &EFuse_Ctrl_B.Switch_a,
                              &EFuse_Ctrl_DW.waitTime_m);

          /* End of Outputs for SubSystem: '<S70>/waitTime' */
        }
        break;
      }
    }

    /* End of Chart: '<S46>/Chart' */

    /* DataStoreWrite: '<S46>/Data Store Write' */
    EFuse_C_Fuse02SleepRetryCount_i = EFuse_Ctr_Fuse02SleepRetryCount;
  }

  /* End of Outputs for SubSystem: '<S4>/FUSE02' */

  /* Switch: '<S6>/Switch2' incorporates:
   *  Constant: '<S6>/PA_EFuse_ActUseFuseChInfo_C1'
   *  DataTypeConversion: '<S263>/Extract Desired Bits'
   */
  EFuse_Ctrl_EnFuse03 = (((uint8)(Rte_CData_EFuse_ActUseFuseChInfo_C() >> 3) &
    1U) != 0U);

  /* Outputs for Enabled SubSystem: '<S4>/FUSE03' incorporates:
   *  EnablePort: '<S11>/Enable'
   */
  if (EFuse_Ctrl_EnFuse03) {
    /* Switch: '<S87>/Switch' incorporates:
     *  DataTypeConversion: '<S93>/Extract Desired Bits'
     */
    rtb_Switch_hs = (((uint8)(tmpIRead[2] >> 4) & 1U) != 0U);

    /* Switch: '<S88>/Switch' incorporates:
     *  DataTypeConversion: '<S94>/Extract Desired Bits'
     */
    rtb_Switch_kj = (((uint8)(tmpIRead[2] >> 2) & 1U) != 0U);

    /* Switch: '<S77>/Switch4' incorporates:
     *  Constant: '<S77>/Constant9'
     *  Constant: '<S77>/PA_EFuse_SWPrtSel_C4'
     *  DataTypeConversion: '<S82>/Extract Desired Bits'
     *  DataTypeConversion: '<S95>/Extract Desired Bits'
     *  Switch: '<S89>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 2 & 1U) != 0U) {
      tmp_0 = ((tmpIRead[2] >> 24 & 1U) != 0U);
    } else {
      tmp_0 = false;
    }

    /* End of Switch: '<S77>/Switch4' */

    /* Switch: '<S77>/Switch1' incorporates:
     *  Constant: '<S77>/Constant1'
     *  Constant: '<S77>/PA_EFuse_SWPrtSel_C1'
     *  DataTypeConversion: '<S83>/Extract Desired Bits'
     *  DataTypeConversion: '<S91>/Extract Desired Bits'
     *  Switch: '<S85>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 3 & 1U) != 0U) {
      rtb_Switch4_ez = (((uint8)(tmpIRead[2] >> 17) & 1U) != 0U);
    } else {
      rtb_Switch4_ez = false;
    }

    /* End of Switch: '<S77>/Switch1' */

    /* Logic: '<S77>/Logical Operator' incorporates:
     *  Constant: '<S77>/PA_EFuse_SWPrtSel_C2'
     *  Constant: '<S77>/PA_EFuse_SWPrtSel_C3'
     *  DataTypeConversion: '<S80>/Extract Desired Bits'
     *  DataTypeConversion: '<S81>/Extract Desired Bits'
     *  Switch: '<S77>/Switch2'
     *  Switch: '<S77>/Switch3'
     */
    rtb_Switch4_ez = ((((Rte_CData_EFuse_SWPrtSel_C() & 1U) != 0U) &&
                       rtb_Switch_hs) || ((((uint32)Rte_CData_EFuse_SWPrtSel_C()
      >> 1 & 1U) != 0U) && rtb_Switch_kj) || tmp_0 || rtb_Switch4_ez);

    /* Switch: '<S90>/Switch' incorporates:
     *  Constant: '<S90>/Constant'
     *  RelationalOperator: '<S90>/Relational Operator'
     */
    rtb_Switch_je = (tmpIRead_0[2] == 3);

    /* Logic: '<S74>/Logical Operator1' incorporates:
     *  Logic: '<S74>/Logical Operator'
     */
    rtb_Switch_hs = ((!rtb_Switch_hs) && (!rtb_Switch_kj));

    /* Chart: '<S73>/Chart' incorporates:
     *  Constant: '<S73>/Constant'
     *  Constant: '<S96>/PA_EFuse_EnaSleepFailRetry_C'
     *  Constant: '<S96>/PA_EFuse_nSleepFailMax_C'
     *  Constant: '<S96>/PA_EFuse_tiSleepFailRetry_C'
     *  Constant: '<S96>/PA_EFuse_tiSleepFailToNrm_C'
     *  Inport: '<Root>/EFuse_flgPreSleep_Val'
     *  Inport: '<Root>/EFuse_flgPwrModChng_Val'
     */
    /* Gateway: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE03/CtrlChart/Chart */
    /* During: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE03/CtrlChart/Chart */
    if (EFuse_Ctrl_DW.is_active_c2_EFuse_Ctrl == 0U) {
      /* Entry: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE03/CtrlChart/Chart */
      EFuse_Ctrl_DW.is_active_c2_EFuse_Ctrl = 1U;

      /* Entry Internal: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE03/CtrlChart/Chart */
      /* Transition: '<S97>:2' */
      EFuse_Ctrl_DW.is_c2_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
      EFuse_Ctrl_DW.is_ECUWork_ki = EFuse_Ctrl_IN_StandBy;

      /* Entry 'StandBy': '<S97>:1' */
      /* '<S97>:1:3' stFuse = uint8(0); */
      EFuse_Ctrl_stFuse03 = 0U;

      /* '<S97>:1:4' bAllwSleep = false; */
      EFuse_Ctrl_flgAllwSleep03 = false;

      /* '<S97>:1:5' bSleepFail = false; */
      /* '<S97>:1:6' bSWPrt = false; */
    } else {
      switch (EFuse_Ctrl_DW.is_c2_EFuse_Ctrl) {
       case EFuse_Ctrl_IN_ECUSleep:
        /* Switch: '<S78>/Switch' incorporates:
         *  Constant: '<S78>/Constant1'
         *  Constant: '<S78>/PA_EFuse_ReWrkSel_C'
         *  DataTypeConversion: '<S84>/Extract Desired Bits'
         *  Inport: '<Root>/EFuse_flgPreSleep_Val'
         *  Logic: '<S78>/Logical Operator1'
         */
        /* During 'ECUSleep': '<S97>:64' */
        /* '<S97>:35:1' sf_internal_predicateOutput = flgReWrk; */
        if ((Rte_CData_EFuse_ReWrkSel_C() & 1U) != 0U) {
          tmp_0 = !Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val();
        } else {
          tmp_0 = false;
        }

        /* End of Switch: '<S78>/Switch' */
        if (tmp_0) {
          /* Transition: '<S97>:35' */
          /* Exit Internal 'ECUSleep': '<S97>:64' */
          /* Exit Internal 'SleepRetry': '<S97>:14' */
          EFuse_Ctrl_DW.is_SleepRetry_i = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_ECUSleep_nt = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_c2_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_ki = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S97>:3' */
          /* '<S97>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse03 = 1U;

          /* '<S97>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep03 = false;

          /* '<S97>:3:5' bSleepFail = false; */
          /* '<S97>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse03SleepRetryCount = 0U;

          /* '<S97>:3:7' bSWPrt = false; */
        } else {
          /* '<S97>:80:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S97>:80' */
            /* Exit Internal 'ECUSleep': '<S97>:64' */
            /* Exit Internal 'SleepRetry': '<S97>:14' */
            EFuse_Ctrl_DW.is_SleepRetry_i = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_ECUSleep_nt = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c2_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S97>:7' */
            /* '<S97>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse03 = 2U;

            /* '<S97>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep03 = true;

            /* '<S97>:7:5' bSWPrt = true; */
          } else {
            switch (EFuse_Ctrl_DW.is_ECUSleep_nt) {
             case EFuse_Ctrl_IN_NormSleep:
              EFuse_Ctrl_stFuse03 = 4U;
              EFuse_Ctrl_flgAllwSleep03 = true;

              /* During 'NormSleep': '<S97>:13' */
              /* '<S97>:21:1' sf_internal_predicateOutput = flgSleepFail; */
              if (rtb_Switch_je) {
                /* Transition: '<S97>:21' */
                EFuse_Ctrl_DW.is_ECUSleep_nt = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S97>:18' */
                /* '<S97>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse03 = 5U;

                /* '<S97>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep03 = true;

                /* '<S97>:18:5' bSleepFail = true; */
              }
              break;

             case EFuse_Ctrl_IN_SleepFail:
              EFuse_Ctrl_stFuse03 = 5U;
              EFuse_Ctrl_flgAllwSleep03 = true;

              /* During 'SleepFail': '<S97>:18' */
              /* '<S97>:22:1' sf_internal_predicateOutput = EnSleepFailRetry && ... */
              /* '<S97>:22:2' count < nSleepFailMax_C; */
              if (Rte_CData_EFuse_EnSleepFailRetry_C() &&
                  (EFuse_Ctr_Fuse03SleepRetryCount <
                   Rte_CData_EFuse_nSleepFailMax_C())) {
                /* Transition: '<S97>:22' */
                EFuse_Ctrl_DW.is_ECUSleep_nt = EFuse_Ctrl_IN_SleepRetry;

                /* Entry Internal 'SleepRetry': '<S97>:14' */
                /* Transition: '<S97>:23' */
                EFuse_Ctrl_DW.is_SleepRetry_i = EFuse_Ctrl_IN_FailCounter;

                /* Entry 'FailCounter': '<S97>:10' */
                /* '<S97>:10:3' stFuse = uint8(6); */
                EFuse_Ctrl_stFuse03 = 6U;

                /* '<S97>:10:4' bAllwSleep = false; */
                EFuse_Ctrl_flgAllwSleep03 = false;

                /* '<S97>:10:5' count = count + uint8(1); */
                EFuse_Ctr_Fuse03SleepRetryCount = Mfx_Add_u8u8_u8
                  (EFuse_Ctr_Fuse03SleepRetryCount, 1U);

                /* '<S97>:10:6' waitTime(false); */
                /* Simulink Function 'waitTime': '<S97>:72' */
                EFuse_Ctrl_B.En_i = false;

                /* Outputs for Function Call SubSystem: '<S97>/waitTime' */
                EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_i, &EFuse_Ctrl_B.Switch_ez,
                                    &EFuse_Ctrl_DW.waitTime_p);

                /* End of Outputs for SubSystem: '<S97>/waitTime' */
              }
              break;

             default:
              /* During 'SleepRetry': '<S97>:14' */
              /* '<S97>:27:1' sf_internal_predicateOutput = count >= nSleepFailMax_C; */
              if (EFuse_Ctr_Fuse03SleepRetryCount >=
                  Rte_CData_EFuse_nSleepFailMax_C()) {
                /* Transition: '<S97>:27' */
                /* Exit Internal 'SleepRetry': '<S97>:14' */
                EFuse_Ctrl_DW.is_SleepRetry_i = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                EFuse_Ctrl_DW.is_ECUSleep_nt = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S97>:18' */
                /* '<S97>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse03 = 5U;

                /* '<S97>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep03 = true;

                /* '<S97>:18:5' bSleepFail = true; */
              } else if (EFuse_Ctrl_DW.is_SleepRetry_i ==
                         EFuse_Ctrl_IN_FailCounter) {
                EFuse_Ctrl_stFuse03 = 6U;
                EFuse_Ctrl_flgAllwSleep03 = false;

                /* During 'FailCounter': '<S97>:10' */
                /* '<S97>:24:1' sf_internal_predicateOutput = count < nSleepFailMax_C && ... */
                /* '<S97>:24:2' waitTime(true) > TiReSleep_C; */
                if (EFuse_Ctr_Fuse03SleepRetryCount <
                    Rte_CData_EFuse_nSleepFailMax_C()) {
                  /* Simulink Function 'waitTime': '<S97>:72' */
                  EFuse_Ctrl_B.En_i = true;

                  /* Outputs for Function Call SubSystem: '<S97>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_i, &EFuse_Ctrl_B.Switch_ez,
                                      &EFuse_Ctrl_DW.waitTime_p);

                  /* End of Outputs for SubSystem: '<S97>/waitTime' */
                  rtb_Switch_hs = (EFuse_Ctrl_B.Switch_ez >
                                   Rte_CData_EFuse_tiSleepFailRetry_C());
                } else {
                  rtb_Switch_hs = false;
                }

                if (rtb_Switch_hs) {
                  /* Transition: '<S97>:24' */
                  EFuse_Ctrl_DW.is_SleepRetry_i = EFuse_Ctrl_IN_Retry;

                  /* Entry 'Retry': '<S97>:15' */
                  /* '<S97>:15:3' stFuse = uint8(7); */
                  EFuse_Ctrl_stFuse03 = 7U;

                  /* '<S97>:15:4' bAllwSleep = true; */
                  EFuse_Ctrl_flgAllwSleep03 = true;

                  /* '<S97>:15:5' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S97>:72' */
                  EFuse_Ctrl_B.En_i = false;

                  /* Outputs for Function Call SubSystem: '<S97>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_i, &EFuse_Ctrl_B.Switch_ez,
                                      &EFuse_Ctrl_DW.waitTime_p);

                  /* End of Outputs for SubSystem: '<S97>/waitTime' */
                }
              } else {
                EFuse_Ctrl_stFuse03 = 7U;
                EFuse_Ctrl_flgAllwSleep03 = true;

                /* During 'Retry': '<S97>:15' */
                /* '<S97>:26:1' sf_internal_predicateOutput = flgSleepFail; */
                if (rtb_Switch_je) {
                  /* Transition: '<S97>:26' */
                  EFuse_Ctrl_DW.is_SleepRetry_i = EFuse_Ctrl_IN_FailCounter;

                  /* Entry 'FailCounter': '<S97>:10' */
                  /* '<S97>:10:3' stFuse = uint8(6); */
                  EFuse_Ctrl_stFuse03 = 6U;

                  /* '<S97>:10:4' bAllwSleep = false; */
                  EFuse_Ctrl_flgAllwSleep03 = false;

                  /* '<S97>:10:5' count = count + uint8(1); */
                  EFuse_Ctr_Fuse03SleepRetryCount = Mfx_Add_u8u8_u8
                    (EFuse_Ctr_Fuse03SleepRetryCount, 1U);

                  /* '<S97>:10:6' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S97>:72' */
                  EFuse_Ctrl_B.En_i = false;

                  /* Outputs for Function Call SubSystem: '<S97>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_i, &EFuse_Ctrl_B.Switch_ez,
                                      &EFuse_Ctrl_DW.waitTime_p);

                  /* End of Outputs for SubSystem: '<S97>/waitTime' */
                } else {
                  /* '<S97>:28:1' sf_internal_predicateOutput = waitTime(true) > TiReSleepDiag_C; */
                  /* Simulink Function 'waitTime': '<S97>:72' */
                  EFuse_Ctrl_B.En_i = true;

                  /* Outputs for Function Call SubSystem: '<S97>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_i, &EFuse_Ctrl_B.Switch_ez,
                                      &EFuse_Ctrl_DW.waitTime_p);

                  /* End of Outputs for SubSystem: '<S97>/waitTime' */
                  if (EFuse_Ctrl_B.Switch_ez >
                      Rte_CData_EFuse_tiSleepFailToNrm_C()) {
                    /* Transition: '<S97>:28' */
                    EFuse_Ctrl_DW.is_SleepRetry_i =
                      EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                    EFuse_Ctrl_DW.is_ECUSleep_nt = EFuse_Ctrl_IN_NormSleep;

                    /* Entry 'NormSleep': '<S97>:13' */
                    /* '<S97>:13:3' stFuse = uint8(4); */
                    EFuse_Ctrl_stFuse03 = 4U;

                    /* '<S97>:13:4' bAllwSleep = true; */
                    EFuse_Ctrl_flgAllwSleep03 = true;

                    /* '<S97>:13:5' bSleepFail = false; */
                    /* '<S97>:13:6' waitTime(false); */
                    /* Simulink Function 'waitTime': '<S97>:72' */
                    EFuse_Ctrl_B.En_i = false;

                    /* Outputs for Function Call SubSystem: '<S97>/waitTime' */
                    EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_i,
                                        &EFuse_Ctrl_B.Switch_ez,
                                        &EFuse_Ctrl_DW.waitTime_p);

                    /* End of Outputs for SubSystem: '<S97>/waitTime' */
                  }
                }
              }
              break;
            }
          }
        }
        break;

       case EFuse_Ctrl_IN_ECUWork:
        /* During 'ECUWork': '<S97>:63' */
        switch (EFuse_Ctrl_DW.is_ECUWork_ki) {
         case EFuse_Ctrl_IN_NormWork:
          EFuse_Ctrl_stFuse03 = 1U;
          EFuse_Ctrl_flgAllwSleep03 = false;

          /* During 'NormWork': '<S97>:3' */
          /* '<S97>:38:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S97>:38' */
            EFuse_Ctrl_DW.is_ECUWork_ki = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c2_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S97>:7' */
            /* '<S97>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse03 = 2U;

            /* '<S97>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep03 = true;

            /* '<S97>:7:5' bSWPrt = true; */
          } else {
            /* '<S97>:20:1' sf_internal_predicateOutput = flgPreSleep; */
            if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val()) {
              /* Transition: '<S97>:20' */
              EFuse_Ctrl_DW.is_ECUWork_ki = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
              EFuse_Ctrl_DW.is_c2_EFuse_Ctrl = EFuse_Ctrl_IN_ECUSleep;
              EFuse_Ctrl_DW.is_ECUSleep_nt = EFuse_Ctrl_IN_NormSleep;

              /* Entry 'NormSleep': '<S97>:13' */
              /* '<S97>:13:3' stFuse = uint8(4); */
              EFuse_Ctrl_stFuse03 = 4U;

              /* '<S97>:13:4' bAllwSleep = true; */
              EFuse_Ctrl_flgAllwSleep03 = true;

              /* '<S97>:13:5' bSleepFail = false; */
              /* '<S97>:13:6' waitTime(false); */
              /* Simulink Function 'waitTime': '<S97>:72' */
              EFuse_Ctrl_B.En_i = false;

              /* Outputs for Function Call SubSystem: '<S97>/waitTime' */
              EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_i, &EFuse_Ctrl_B.Switch_ez,
                                  &EFuse_Ctrl_DW.waitTime_p);

              /* End of Outputs for SubSystem: '<S97>/waitTime' */
            }
          }
          break;

         case EFuse_Ctrl_IN_PreCharge:
          EFuse_Ctrl_stFuse03 = 3U;
          EFuse_Ctrl_flgAllwSleep03 = false;

          /* During 'PreCharge': '<S97>:100' */
          /* '<S97>:103:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
          /* '<S97>:103:2'  && ~flgPreChrgSucc; */
          /* Simulink Function 'waitTime': '<S97>:72' */
          EFuse_Ctrl_B.En_i = true;

          /* Outputs for Function Call SubSystem: '<S97>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_i, &EFuse_Ctrl_B.Switch_ez,
                              &EFuse_Ctrl_DW.waitTime_p);

          /* End of Outputs for SubSystem: '<S97>/waitTime' */
          if ((EFuse_Ctrl_B.Switch_ez > 2000U) && (!rtb_Switch_hs)) {
            /* Transition: '<S97>:103' */
            EFuse_Ctrl_DW.is_ECUWork_ki = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c2_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S97>:7' */
            /* '<S97>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse03 = 2U;

            /* '<S97>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep03 = true;

            /* '<S97>:7:5' bSWPrt = true; */
          } else {
            /* '<S97>:101:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
            /* '<S97>:101:2'  && flgPreChrgSucc; */
            /* Simulink Function 'waitTime': '<S97>:72' */
            EFuse_Ctrl_B.En_i = true;

            /* Outputs for Function Call SubSystem: '<S97>/waitTime' */
            EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_i, &EFuse_Ctrl_B.Switch_ez,
                                &EFuse_Ctrl_DW.waitTime_p);

            /* End of Outputs for SubSystem: '<S97>/waitTime' */
            if ((EFuse_Ctrl_B.Switch_ez > 2000U) && rtb_Switch_hs) {
              /* Transition: '<S97>:101' */
              EFuse_Ctrl_DW.is_ECUWork_ki = EFuse_Ctrl_IN_NormWork;

              /* Entry 'NormWork': '<S97>:3' */
              /* '<S97>:3:3' stFuse = uint8(1); */
              EFuse_Ctrl_stFuse03 = 1U;

              /* '<S97>:3:4' bAllwSleep = false; */
              EFuse_Ctrl_flgAllwSleep03 = false;

              /* '<S97>:3:5' bSleepFail = false; */
              /* '<S97>:3:6' count = uint8(0); */
              EFuse_Ctr_Fuse03SleepRetryCount = 0U;

              /* '<S97>:3:7' bSWPrt = false; */
            }
          }
          break;

         default:
          /* During 'StandBy': '<S97>:1' */
          /* Transition: '<S97>:4' */
          EFuse_Ctrl_DW.is_ECUWork_ki = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S97>:3' */
          /* '<S97>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse03 = 1U;

          /* '<S97>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep03 = false;

          /* '<S97>:3:5' bSleepFail = false; */
          /* '<S97>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse03SleepRetryCount = 0U;

          /* '<S97>:3:7' bSWPrt = false; */
          break;
        }
        break;

       default:
        EFuse_Ctrl_stFuse03 = 2U;
        EFuse_Ctrl_flgAllwSleep03 = true;

        /* During 'SWProtect': '<S97>:7' */
        /* '<S97>:34:1' sf_internal_predicateOutput = flgReset; */
        if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPwrModChng_Val()) {
          /* Transition: '<S97>:34' */
          EFuse_Ctrl_DW.is_c2_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_ki = EFuse_Ctrl_IN_PreCharge;

          /* Entry 'PreCharge': '<S97>:100' */
          /* '<S97>:100:3' stFuse = uint8(3); */
          EFuse_Ctrl_stFuse03 = 3U;

          /* '<S97>:100:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep03 = false;

          /* '<S97>:100:5' bSleepFail = false; */
          /* '<S97>:100:6' waitTime(false); */
          /* Simulink Function 'waitTime': '<S97>:72' */
          EFuse_Ctrl_B.En_i = false;

          /* Outputs for Function Call SubSystem: '<S97>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_i, &EFuse_Ctrl_B.Switch_ez,
                              &EFuse_Ctrl_DW.waitTime_p);

          /* End of Outputs for SubSystem: '<S97>/waitTime' */
        }
        break;
      }
    }

    /* End of Chart: '<S73>/Chart' */

    /* DataStoreWrite: '<S73>/Data Store Write' */
    EFuse_C_Fuse03SleepRetryCount_k = EFuse_Ctr_Fuse03SleepRetryCount;
  }

  /* End of Outputs for SubSystem: '<S4>/FUSE03' */

  /* Switch: '<S6>/Switch3' incorporates:
   *  Constant: '<S6>/PA_EFuse_ActUseFuseChInfo_C1'
   *  DataTypeConversion: '<S264>/Extract Desired Bits'
   */
  EFuse_Ctrl_EnFuse04 = (((uint8)(Rte_CData_EFuse_ActUseFuseChInfo_C() >> 4) &
    1U) != 0U);

  /* Outputs for Enabled SubSystem: '<S4>/FUSE04' incorporates:
   *  EnablePort: '<S12>/Enable'
   */
  if (EFuse_Ctrl_EnFuse04) {
    /* Switch: '<S114>/Switch' incorporates:
     *  DataTypeConversion: '<S120>/Extract Desired Bits'
     */
    rtb_Switch_hs = (((uint8)(tmpIRead[3] >> 4) & 1U) != 0U);

    /* Switch: '<S115>/Switch' incorporates:
     *  DataTypeConversion: '<S121>/Extract Desired Bits'
     */
    rtb_Switch_kj = (((uint8)(tmpIRead[3] >> 2) & 1U) != 0U);

    /* Switch: '<S104>/Switch4' incorporates:
     *  Constant: '<S104>/Constant9'
     *  Constant: '<S104>/PA_EFuse_SWPrtSel_C4'
     *  DataTypeConversion: '<S109>/Extract Desired Bits'
     *  DataTypeConversion: '<S122>/Extract Desired Bits'
     *  Switch: '<S116>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 2 & 1U) != 0U) {
      tmp_0 = ((tmpIRead[3] >> 24 & 1U) != 0U);
    } else {
      tmp_0 = false;
    }

    /* End of Switch: '<S104>/Switch4' */

    /* Switch: '<S104>/Switch1' incorporates:
     *  Constant: '<S104>/Constant1'
     *  Constant: '<S104>/PA_EFuse_SWPrtSel_C1'
     *  DataTypeConversion: '<S110>/Extract Desired Bits'
     *  DataTypeConversion: '<S118>/Extract Desired Bits'
     *  Switch: '<S112>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 3 & 1U) != 0U) {
      rtb_Switch4_ez = (((uint8)(tmpIRead[3] >> 17) & 1U) != 0U);
    } else {
      rtb_Switch4_ez = false;
    }

    /* End of Switch: '<S104>/Switch1' */

    /* Logic: '<S104>/Logical Operator' incorporates:
     *  Constant: '<S104>/PA_EFuse_SWPrtSel_C2'
     *  Constant: '<S104>/PA_EFuse_SWPrtSel_C3'
     *  DataTypeConversion: '<S107>/Extract Desired Bits'
     *  DataTypeConversion: '<S108>/Extract Desired Bits'
     *  Switch: '<S104>/Switch2'
     *  Switch: '<S104>/Switch3'
     */
    rtb_Switch4_ez = ((((Rte_CData_EFuse_SWPrtSel_C() & 1U) != 0U) &&
                       rtb_Switch_hs) || ((((uint32)Rte_CData_EFuse_SWPrtSel_C()
      >> 1 & 1U) != 0U) && rtb_Switch_kj) || tmp_0 || rtb_Switch4_ez);

    /* Switch: '<S117>/Switch' incorporates:
     *  Constant: '<S117>/Constant'
     *  RelationalOperator: '<S117>/Relational Operator'
     */
    rtb_Switch_je = (tmpIRead_0[3] == 3);

    /* Logic: '<S101>/Logical Operator1' incorporates:
     *  Logic: '<S101>/Logical Operator'
     */
    rtb_Switch_hs = ((!rtb_Switch_hs) && (!rtb_Switch_kj));

    /* Chart: '<S100>/Chart' incorporates:
     *  Constant: '<S100>/Constant'
     *  Constant: '<S123>/PA_EFuse_EnaSleepFailRetry_C'
     *  Constant: '<S123>/PA_EFuse_nSleepFailMax_C'
     *  Constant: '<S123>/PA_EFuse_tiSleepFailRetry_C'
     *  Constant: '<S123>/PA_EFuse_tiSleepFailToNrm_C'
     *  Inport: '<Root>/EFuse_flgPreSleep_Val'
     *  Inport: '<Root>/EFuse_flgPwrModChng_Val'
     */
    /* Gateway: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE04/CtrlChart/Chart */
    /* During: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE04/CtrlChart/Chart */
    if (EFuse_Ctrl_DW.is_active_c3_EFuse_Ctrl == 0U) {
      /* Entry: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE04/CtrlChart/Chart */
      EFuse_Ctrl_DW.is_active_c3_EFuse_Ctrl = 1U;

      /* Entry Internal: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE04/CtrlChart/Chart */
      /* Transition: '<S124>:2' */
      EFuse_Ctrl_DW.is_c3_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
      EFuse_Ctrl_DW.is_ECUWork_k = EFuse_Ctrl_IN_StandBy;

      /* Entry 'StandBy': '<S124>:1' */
      /* '<S124>:1:3' stFuse = uint8(0); */
      EFuse_Ctrl_stFuse04 = 0U;

      /* '<S124>:1:4' bAllwSleep = false; */
      EFuse_Ctrl_flgAllwSleep04 = false;

      /* '<S124>:1:5' bSleepFail = false; */
      /* '<S124>:1:6' bSWPrt = false; */
    } else {
      switch (EFuse_Ctrl_DW.is_c3_EFuse_Ctrl) {
       case EFuse_Ctrl_IN_ECUSleep:
        /* Switch: '<S105>/Switch' incorporates:
         *  Constant: '<S105>/Constant1'
         *  Constant: '<S105>/PA_EFuse_ReWrkSel_C'
         *  DataTypeConversion: '<S111>/Extract Desired Bits'
         *  Inport: '<Root>/EFuse_flgPreSleep_Val'
         *  Logic: '<S105>/Logical Operator1'
         */
        /* During 'ECUSleep': '<S124>:64' */
        /* '<S124>:35:1' sf_internal_predicateOutput = flgReWrk; */
        if ((Rte_CData_EFuse_ReWrkSel_C() & 1U) != 0U) {
          tmp_0 = !Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val();
        } else {
          tmp_0 = false;
        }

        /* End of Switch: '<S105>/Switch' */
        if (tmp_0) {
          /* Transition: '<S124>:35' */
          /* Exit Internal 'ECUSleep': '<S124>:64' */
          /* Exit Internal 'SleepRetry': '<S124>:14' */
          EFuse_Ctrl_DW.is_SleepRetry_ff = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_ECUSleep_a = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_c3_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_k = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S124>:3' */
          /* '<S124>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse04 = 1U;

          /* '<S124>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep04 = false;

          /* '<S124>:3:5' bSleepFail = false; */
          /* '<S124>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse04SleepRetryCount = 0U;

          /* '<S124>:3:7' bSWPrt = false; */
        } else {
          /* '<S124>:80:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S124>:80' */
            /* Exit Internal 'ECUSleep': '<S124>:64' */
            /* Exit Internal 'SleepRetry': '<S124>:14' */
            EFuse_Ctrl_DW.is_SleepRetry_ff = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_ECUSleep_a = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c3_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S124>:7' */
            /* '<S124>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse04 = 2U;

            /* '<S124>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep04 = true;

            /* '<S124>:7:5' bSWPrt = true; */
          } else {
            switch (EFuse_Ctrl_DW.is_ECUSleep_a) {
             case EFuse_Ctrl_IN_NormSleep:
              EFuse_Ctrl_stFuse04 = 4U;
              EFuse_Ctrl_flgAllwSleep04 = true;

              /* During 'NormSleep': '<S124>:13' */
              /* '<S124>:21:1' sf_internal_predicateOutput = flgSleepFail; */
              if (rtb_Switch_je) {
                /* Transition: '<S124>:21' */
                EFuse_Ctrl_DW.is_ECUSleep_a = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S124>:18' */
                /* '<S124>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse04 = 5U;

                /* '<S124>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep04 = true;

                /* '<S124>:18:5' bSleepFail = true; */
              }
              break;

             case EFuse_Ctrl_IN_SleepFail:
              EFuse_Ctrl_stFuse04 = 5U;
              EFuse_Ctrl_flgAllwSleep04 = true;

              /* During 'SleepFail': '<S124>:18' */
              /* '<S124>:22:1' sf_internal_predicateOutput = EnSleepFailRetry && ... */
              /* '<S124>:22:2' count < nSleepFailMax_C; */
              if (Rte_CData_EFuse_EnSleepFailRetry_C() &&
                  (EFuse_Ctr_Fuse04SleepRetryCount <
                   Rte_CData_EFuse_nSleepFailMax_C())) {
                /* Transition: '<S124>:22' */
                EFuse_Ctrl_DW.is_ECUSleep_a = EFuse_Ctrl_IN_SleepRetry;

                /* Entry Internal 'SleepRetry': '<S124>:14' */
                /* Transition: '<S124>:23' */
                EFuse_Ctrl_DW.is_SleepRetry_ff = EFuse_Ctrl_IN_FailCounter;

                /* Entry 'FailCounter': '<S124>:10' */
                /* '<S124>:10:3' stFuse = uint8(6); */
                EFuse_Ctrl_stFuse04 = 6U;

                /* '<S124>:10:4' bAllwSleep = false; */
                EFuse_Ctrl_flgAllwSleep04 = false;

                /* '<S124>:10:5' count = count + uint8(1); */
                EFuse_Ctr_Fuse04SleepRetryCount = Mfx_Add_u8u8_u8
                  (EFuse_Ctr_Fuse04SleepRetryCount, 1U);

                /* '<S124>:10:6' waitTime(false); */
                /* Simulink Function 'waitTime': '<S124>:72' */
                EFuse_Ctrl_B.En_hz = false;

                /* Outputs for Function Call SubSystem: '<S124>/waitTime' */
                EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_hz, &EFuse_Ctrl_B.Switch_e,
                                    &EFuse_Ctrl_DW.waitTime_n);

                /* End of Outputs for SubSystem: '<S124>/waitTime' */
              }
              break;

             default:
              /* During 'SleepRetry': '<S124>:14' */
              /* '<S124>:27:1' sf_internal_predicateOutput = count >= nSleepFailMax_C; */
              if (EFuse_Ctr_Fuse04SleepRetryCount >=
                  Rte_CData_EFuse_nSleepFailMax_C()) {
                /* Transition: '<S124>:27' */
                /* Exit Internal 'SleepRetry': '<S124>:14' */
                EFuse_Ctrl_DW.is_SleepRetry_ff = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                EFuse_Ctrl_DW.is_ECUSleep_a = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S124>:18' */
                /* '<S124>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse04 = 5U;

                /* '<S124>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep04 = true;

                /* '<S124>:18:5' bSleepFail = true; */
              } else if (EFuse_Ctrl_DW.is_SleepRetry_ff ==
                         EFuse_Ctrl_IN_FailCounter) {
                EFuse_Ctrl_stFuse04 = 6U;
                EFuse_Ctrl_flgAllwSleep04 = false;

                /* During 'FailCounter': '<S124>:10' */
                /* '<S124>:24:1' sf_internal_predicateOutput = count < nSleepFailMax_C && ... */
                /* '<S124>:24:2' waitTime(true) > TiReSleep_C; */
                if (EFuse_Ctr_Fuse04SleepRetryCount <
                    Rte_CData_EFuse_nSleepFailMax_C()) {
                  /* Simulink Function 'waitTime': '<S124>:72' */
                  EFuse_Ctrl_B.En_hz = true;

                  /* Outputs for Function Call SubSystem: '<S124>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_hz, &EFuse_Ctrl_B.Switch_e,
                                      &EFuse_Ctrl_DW.waitTime_n);

                  /* End of Outputs for SubSystem: '<S124>/waitTime' */
                  rtb_Switch_hs = (EFuse_Ctrl_B.Switch_e >
                                   Rte_CData_EFuse_tiSleepFailRetry_C());
                } else {
                  rtb_Switch_hs = false;
                }

                if (rtb_Switch_hs) {
                  /* Transition: '<S124>:24' */
                  EFuse_Ctrl_DW.is_SleepRetry_ff = EFuse_Ctrl_IN_Retry;

                  /* Entry 'Retry': '<S124>:15' */
                  /* '<S124>:15:3' stFuse = uint8(7); */
                  EFuse_Ctrl_stFuse04 = 7U;

                  /* '<S124>:15:4' bAllwSleep = true; */
                  EFuse_Ctrl_flgAllwSleep04 = true;

                  /* '<S124>:15:5' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S124>:72' */
                  EFuse_Ctrl_B.En_hz = false;

                  /* Outputs for Function Call SubSystem: '<S124>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_hz, &EFuse_Ctrl_B.Switch_e,
                                      &EFuse_Ctrl_DW.waitTime_n);

                  /* End of Outputs for SubSystem: '<S124>/waitTime' */
                }
              } else {
                EFuse_Ctrl_stFuse04 = 7U;
                EFuse_Ctrl_flgAllwSleep04 = true;

                /* During 'Retry': '<S124>:15' */
                /* '<S124>:26:1' sf_internal_predicateOutput = flgSleepFail; */
                if (rtb_Switch_je) {
                  /* Transition: '<S124>:26' */
                  EFuse_Ctrl_DW.is_SleepRetry_ff = EFuse_Ctrl_IN_FailCounter;

                  /* Entry 'FailCounter': '<S124>:10' */
                  /* '<S124>:10:3' stFuse = uint8(6); */
                  EFuse_Ctrl_stFuse04 = 6U;

                  /* '<S124>:10:4' bAllwSleep = false; */
                  EFuse_Ctrl_flgAllwSleep04 = false;

                  /* '<S124>:10:5' count = count + uint8(1); */
                  EFuse_Ctr_Fuse04SleepRetryCount = Mfx_Add_u8u8_u8
                    (EFuse_Ctr_Fuse04SleepRetryCount, 1U);

                  /* '<S124>:10:6' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S124>:72' */
                  EFuse_Ctrl_B.En_hz = false;

                  /* Outputs for Function Call SubSystem: '<S124>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_hz, &EFuse_Ctrl_B.Switch_e,
                                      &EFuse_Ctrl_DW.waitTime_n);

                  /* End of Outputs for SubSystem: '<S124>/waitTime' */
                } else {
                  /* '<S124>:28:1' sf_internal_predicateOutput = waitTime(true) > TiReSleepDiag_C; */
                  /* Simulink Function 'waitTime': '<S124>:72' */
                  EFuse_Ctrl_B.En_hz = true;

                  /* Outputs for Function Call SubSystem: '<S124>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_hz, &EFuse_Ctrl_B.Switch_e,
                                      &EFuse_Ctrl_DW.waitTime_n);

                  /* End of Outputs for SubSystem: '<S124>/waitTime' */
                  if (EFuse_Ctrl_B.Switch_e > Rte_CData_EFuse_tiSleepFailToNrm_C
                      ()) {
                    /* Transition: '<S124>:28' */
                    EFuse_Ctrl_DW.is_SleepRetry_ff =
                      EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                    EFuse_Ctrl_DW.is_ECUSleep_a = EFuse_Ctrl_IN_NormSleep;

                    /* Entry 'NormSleep': '<S124>:13' */
                    /* '<S124>:13:3' stFuse = uint8(4); */
                    EFuse_Ctrl_stFuse04 = 4U;

                    /* '<S124>:13:4' bAllwSleep = true; */
                    EFuse_Ctrl_flgAllwSleep04 = true;

                    /* '<S124>:13:5' bSleepFail = false; */
                    /* '<S124>:13:6' waitTime(false); */
                    /* Simulink Function 'waitTime': '<S124>:72' */
                    EFuse_Ctrl_B.En_hz = false;

                    /* Outputs for Function Call SubSystem: '<S124>/waitTime' */
                    EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_hz,
                                        &EFuse_Ctrl_B.Switch_e,
                                        &EFuse_Ctrl_DW.waitTime_n);

                    /* End of Outputs for SubSystem: '<S124>/waitTime' */
                  }
                }
              }
              break;
            }
          }
        }
        break;

       case EFuse_Ctrl_IN_ECUWork:
        /* During 'ECUWork': '<S124>:63' */
        switch (EFuse_Ctrl_DW.is_ECUWork_k) {
         case EFuse_Ctrl_IN_NormWork:
          EFuse_Ctrl_stFuse04 = 1U;
          EFuse_Ctrl_flgAllwSleep04 = false;

          /* During 'NormWork': '<S124>:3' */
          /* '<S124>:38:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S124>:38' */
            EFuse_Ctrl_DW.is_ECUWork_k = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c3_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S124>:7' */
            /* '<S124>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse04 = 2U;

            /* '<S124>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep04 = true;

            /* '<S124>:7:5' bSWPrt = true; */
          } else {
            /* '<S124>:20:1' sf_internal_predicateOutput = flgPreSleep; */
            if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val()) {
              /* Transition: '<S124>:20' */
              EFuse_Ctrl_DW.is_ECUWork_k = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
              EFuse_Ctrl_DW.is_c3_EFuse_Ctrl = EFuse_Ctrl_IN_ECUSleep;
              EFuse_Ctrl_DW.is_ECUSleep_a = EFuse_Ctrl_IN_NormSleep;

              /* Entry 'NormSleep': '<S124>:13' */
              /* '<S124>:13:3' stFuse = uint8(4); */
              EFuse_Ctrl_stFuse04 = 4U;

              /* '<S124>:13:4' bAllwSleep = true; */
              EFuse_Ctrl_flgAllwSleep04 = true;

              /* '<S124>:13:5' bSleepFail = false; */
              /* '<S124>:13:6' waitTime(false); */
              /* Simulink Function 'waitTime': '<S124>:72' */
              EFuse_Ctrl_B.En_hz = false;

              /* Outputs for Function Call SubSystem: '<S124>/waitTime' */
              EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_hz, &EFuse_Ctrl_B.Switch_e,
                                  &EFuse_Ctrl_DW.waitTime_n);

              /* End of Outputs for SubSystem: '<S124>/waitTime' */
            }
          }
          break;

         case EFuse_Ctrl_IN_PreCharge:
          EFuse_Ctrl_stFuse04 = 3U;
          EFuse_Ctrl_flgAllwSleep04 = false;

          /* During 'PreCharge': '<S124>:100' */
          /* '<S124>:103:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
          /* '<S124>:103:2'  && ~flgPreChrgSucc; */
          /* Simulink Function 'waitTime': '<S124>:72' */
          EFuse_Ctrl_B.En_hz = true;

          /* Outputs for Function Call SubSystem: '<S124>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_hz, &EFuse_Ctrl_B.Switch_e,
                              &EFuse_Ctrl_DW.waitTime_n);

          /* End of Outputs for SubSystem: '<S124>/waitTime' */
          if ((EFuse_Ctrl_B.Switch_e > 2000U) && (!rtb_Switch_hs)) {
            /* Transition: '<S124>:103' */
            EFuse_Ctrl_DW.is_ECUWork_k = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c3_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S124>:7' */
            /* '<S124>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse04 = 2U;

            /* '<S124>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep04 = true;

            /* '<S124>:7:5' bSWPrt = true; */
          } else {
            /* '<S124>:101:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
            /* '<S124>:101:2'  && flgPreChrgSucc; */
            /* Simulink Function 'waitTime': '<S124>:72' */
            EFuse_Ctrl_B.En_hz = true;

            /* Outputs for Function Call SubSystem: '<S124>/waitTime' */
            EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_hz, &EFuse_Ctrl_B.Switch_e,
                                &EFuse_Ctrl_DW.waitTime_n);

            /* End of Outputs for SubSystem: '<S124>/waitTime' */
            if ((EFuse_Ctrl_B.Switch_e > 2000U) && rtb_Switch_hs) {
              /* Transition: '<S124>:101' */
              EFuse_Ctrl_DW.is_ECUWork_k = EFuse_Ctrl_IN_NormWork;

              /* Entry 'NormWork': '<S124>:3' */
              /* '<S124>:3:3' stFuse = uint8(1); */
              EFuse_Ctrl_stFuse04 = 1U;

              /* '<S124>:3:4' bAllwSleep = false; */
              EFuse_Ctrl_flgAllwSleep04 = false;

              /* '<S124>:3:5' bSleepFail = false; */
              /* '<S124>:3:6' count = uint8(0); */
              EFuse_Ctr_Fuse04SleepRetryCount = 0U;

              /* '<S124>:3:7' bSWPrt = false; */
            }
          }
          break;

         default:
          /* During 'StandBy': '<S124>:1' */
          /* Transition: '<S124>:4' */
          EFuse_Ctrl_DW.is_ECUWork_k = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S124>:3' */
          /* '<S124>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse04 = 1U;

          /* '<S124>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep04 = false;

          /* '<S124>:3:5' bSleepFail = false; */
          /* '<S124>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse04SleepRetryCount = 0U;

          /* '<S124>:3:7' bSWPrt = false; */
          break;
        }
        break;

       default:
        EFuse_Ctrl_stFuse04 = 2U;
        EFuse_Ctrl_flgAllwSleep04 = true;

        /* During 'SWProtect': '<S124>:7' */
        /* '<S124>:34:1' sf_internal_predicateOutput = flgReset; */
        if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPwrModChng_Val()) {
          /* Transition: '<S124>:34' */
          EFuse_Ctrl_DW.is_c3_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_k = EFuse_Ctrl_IN_PreCharge;

          /* Entry 'PreCharge': '<S124>:100' */
          /* '<S124>:100:3' stFuse = uint8(3); */
          EFuse_Ctrl_stFuse04 = 3U;

          /* '<S124>:100:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep04 = false;

          /* '<S124>:100:5' bSleepFail = false; */
          /* '<S124>:100:6' waitTime(false); */
          /* Simulink Function 'waitTime': '<S124>:72' */
          EFuse_Ctrl_B.En_hz = false;

          /* Outputs for Function Call SubSystem: '<S124>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_hz, &EFuse_Ctrl_B.Switch_e,
                              &EFuse_Ctrl_DW.waitTime_n);

          /* End of Outputs for SubSystem: '<S124>/waitTime' */
        }
        break;
      }
    }

    /* End of Chart: '<S100>/Chart' */

    /* DataStoreWrite: '<S100>/Data Store Write' */
    EFuse_C_Fuse04SleepRetryCount_c = EFuse_Ctr_Fuse04SleepRetryCount;
  }

  /* End of Outputs for SubSystem: '<S4>/FUSE04' */

  /* Switch: '<S6>/Switch4' incorporates:
   *  Constant: '<S6>/PA_EFuse_ActUseFuseChInfo_C1'
   *  DataTypeConversion: '<S265>/Extract Desired Bits'
   */
  EFuse_Ctrl_EnFuse05 = (((uint8)(Rte_CData_EFuse_ActUseFuseChInfo_C() >> 5) &
    1U) != 0U);

  /* Outputs for Enabled SubSystem: '<S4>/FUSE05' incorporates:
   *  EnablePort: '<S13>/Enable'
   */
  if (EFuse_Ctrl_EnFuse05) {
    /* Switch: '<S141>/Switch' incorporates:
     *  DataTypeConversion: '<S147>/Extract Desired Bits'
     */
    rtb_Switch_hs = (((uint8)(tmpIRead[4] >> 4) & 1U) != 0U);

    /* Switch: '<S142>/Switch' incorporates:
     *  DataTypeConversion: '<S148>/Extract Desired Bits'
     */
    rtb_Switch_kj = (((uint8)(tmpIRead[4] >> 2) & 1U) != 0U);

    /* Switch: '<S131>/Switch4' incorporates:
     *  Constant: '<S131>/Constant9'
     *  Constant: '<S131>/PA_EFuse_SWPrtSel_C4'
     *  DataTypeConversion: '<S136>/Extract Desired Bits'
     *  DataTypeConversion: '<S149>/Extract Desired Bits'
     *  Switch: '<S143>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 2 & 1U) != 0U) {
      tmp_0 = ((tmpIRead[4] >> 24 & 1U) != 0U);
    } else {
      tmp_0 = false;
    }

    /* End of Switch: '<S131>/Switch4' */

    /* Switch: '<S131>/Switch1' incorporates:
     *  Constant: '<S131>/Constant1'
     *  Constant: '<S131>/PA_EFuse_SWPrtSel_C1'
     *  DataTypeConversion: '<S137>/Extract Desired Bits'
     *  DataTypeConversion: '<S145>/Extract Desired Bits'
     *  Switch: '<S139>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 3 & 1U) != 0U) {
      rtb_Switch4_ez = (((uint8)(tmpIRead[4] >> 17) & 1U) != 0U);
    } else {
      rtb_Switch4_ez = false;
    }

    /* End of Switch: '<S131>/Switch1' */

    /* Logic: '<S131>/Logical Operator' incorporates:
     *  Constant: '<S131>/PA_EFuse_SWPrtSel_C2'
     *  Constant: '<S131>/PA_EFuse_SWPrtSel_C3'
     *  DataTypeConversion: '<S134>/Extract Desired Bits'
     *  DataTypeConversion: '<S135>/Extract Desired Bits'
     *  Switch: '<S131>/Switch2'
     *  Switch: '<S131>/Switch3'
     */
    rtb_Switch4_ez = ((((Rte_CData_EFuse_SWPrtSel_C() & 1U) != 0U) &&
                       rtb_Switch_hs) || ((((uint32)Rte_CData_EFuse_SWPrtSel_C()
      >> 1 & 1U) != 0U) && rtb_Switch_kj) || tmp_0 || rtb_Switch4_ez);

    /* Switch: '<S144>/Switch' incorporates:
     *  Constant: '<S144>/Constant'
     *  RelationalOperator: '<S144>/Relational Operator'
     */
    rtb_Switch_je = (tmpIRead_0[4] == 3);

    /* Logic: '<S128>/Logical Operator1' incorporates:
     *  Logic: '<S128>/Logical Operator'
     */
    rtb_Switch_hs = ((!rtb_Switch_hs) && (!rtb_Switch_kj));

    /* Chart: '<S127>/Chart' incorporates:
     *  Constant: '<S127>/Constant'
     *  Constant: '<S150>/PA_EFuse_EnaSleepFailRetry_C'
     *  Constant: '<S150>/PA_EFuse_nSleepFailMax_C'
     *  Constant: '<S150>/PA_EFuse_tiSleepFailRetry_C'
     *  Constant: '<S150>/PA_EFuse_tiSleepFailToNrm_C'
     *  Inport: '<Root>/EFuse_flgPreSleep_Val'
     *  Inport: '<Root>/EFuse_flgPwrModChng_Val'
     */
    /* Gateway: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE05/CtrlChart/Chart */
    /* During: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE05/CtrlChart/Chart */
    if (EFuse_Ctrl_DW.is_active_c4_EFuse_Ctrl == 0U) {
      /* Entry: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE05/CtrlChart/Chart */
      EFuse_Ctrl_DW.is_active_c4_EFuse_Ctrl = 1U;

      /* Entry Internal: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE05/CtrlChart/Chart */
      /* Transition: '<S151>:2' */
      EFuse_Ctrl_DW.is_c4_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
      EFuse_Ctrl_DW.is_ECUWork_o = EFuse_Ctrl_IN_StandBy;

      /* Entry 'StandBy': '<S151>:1' */
      /* '<S151>:1:3' stFuse = uint8(0); */
      EFuse_Ctrl_stFuse05 = 0U;

      /* '<S151>:1:4' bAllwSleep = false; */
      EFuse_Ctrl_flgAllwSleep05 = false;

      /* '<S151>:1:5' bSleepFail = false; */
      /* '<S151>:1:6' bSWPrt = false; */
    } else {
      switch (EFuse_Ctrl_DW.is_c4_EFuse_Ctrl) {
       case EFuse_Ctrl_IN_ECUSleep:
        /* Switch: '<S132>/Switch' incorporates:
         *  Constant: '<S132>/Constant1'
         *  Constant: '<S132>/PA_EFuse_ReWrkSel_C'
         *  DataTypeConversion: '<S138>/Extract Desired Bits'
         *  Inport: '<Root>/EFuse_flgPreSleep_Val'
         *  Logic: '<S132>/Logical Operator1'
         */
        /* During 'ECUSleep': '<S151>:64' */
        /* '<S151>:35:1' sf_internal_predicateOutput = flgReWrk; */
        if ((Rte_CData_EFuse_ReWrkSel_C() & 1U) != 0U) {
          tmp_0 = !Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val();
        } else {
          tmp_0 = false;
        }

        /* End of Switch: '<S132>/Switch' */
        if (tmp_0) {
          /* Transition: '<S151>:35' */
          /* Exit Internal 'ECUSleep': '<S151>:64' */
          /* Exit Internal 'SleepRetry': '<S151>:14' */
          EFuse_Ctrl_DW.is_SleepRetry_f = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_ECUSleep_o = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_c4_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_o = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S151>:3' */
          /* '<S151>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse05 = 1U;

          /* '<S151>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep05 = false;

          /* '<S151>:3:5' bSleepFail = false; */
          /* '<S151>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse05SleepRetryCount = 0U;

          /* '<S151>:3:7' bSWPrt = false; */
        } else {
          /* '<S151>:80:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S151>:80' */
            /* Exit Internal 'ECUSleep': '<S151>:64' */
            /* Exit Internal 'SleepRetry': '<S151>:14' */
            EFuse_Ctrl_DW.is_SleepRetry_f = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_ECUSleep_o = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c4_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S151>:7' */
            /* '<S151>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse05 = 2U;

            /* '<S151>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep05 = true;

            /* '<S151>:7:5' bSWPrt = true; */
          } else {
            switch (EFuse_Ctrl_DW.is_ECUSleep_o) {
             case EFuse_Ctrl_IN_NormSleep:
              EFuse_Ctrl_stFuse05 = 4U;
              EFuse_Ctrl_flgAllwSleep05 = true;

              /* During 'NormSleep': '<S151>:13' */
              /* '<S151>:21:1' sf_internal_predicateOutput = flgSleepFail; */
              if (rtb_Switch_je) {
                /* Transition: '<S151>:21' */
                EFuse_Ctrl_DW.is_ECUSleep_o = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S151>:18' */
                /* '<S151>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse05 = 5U;

                /* '<S151>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep05 = true;

                /* '<S151>:18:5' bSleepFail = true; */
              }
              break;

             case EFuse_Ctrl_IN_SleepFail:
              EFuse_Ctrl_stFuse05 = 5U;
              EFuse_Ctrl_flgAllwSleep05 = true;

              /* During 'SleepFail': '<S151>:18' */
              /* '<S151>:22:1' sf_internal_predicateOutput = EnSleepFailRetry && ... */
              /* '<S151>:22:2' count < nSleepFailMax_C; */
              if (Rte_CData_EFuse_EnSleepFailRetry_C() &&
                  (EFuse_Ctr_Fuse05SleepRetryCount <
                   Rte_CData_EFuse_nSleepFailMax_C())) {
                /* Transition: '<S151>:22' */
                EFuse_Ctrl_DW.is_ECUSleep_o = EFuse_Ctrl_IN_SleepRetry;

                /* Entry Internal 'SleepRetry': '<S151>:14' */
                /* Transition: '<S151>:23' */
                EFuse_Ctrl_DW.is_SleepRetry_f = EFuse_Ctrl_IN_FailCounter;

                /* Entry 'FailCounter': '<S151>:10' */
                /* '<S151>:10:3' stFuse = uint8(6); */
                EFuse_Ctrl_stFuse05 = 6U;

                /* '<S151>:10:4' bAllwSleep = false; */
                EFuse_Ctrl_flgAllwSleep05 = false;

                /* '<S151>:10:5' count = count + uint8(1); */
                EFuse_Ctr_Fuse05SleepRetryCount = Mfx_Add_u8u8_u8
                  (EFuse_Ctr_Fuse05SleepRetryCount, 1U);

                /* '<S151>:10:6' waitTime(false); */
                /* Simulink Function 'waitTime': '<S151>:72' */
                EFuse_Ctrl_B.En_h = false;

                /* Outputs for Function Call SubSystem: '<S151>/waitTime' */
                EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_h, &EFuse_Ctrl_B.Switch_m,
                                    &EFuse_Ctrl_DW.waitTime_n1);

                /* End of Outputs for SubSystem: '<S151>/waitTime' */
              }
              break;

             default:
              /* During 'SleepRetry': '<S151>:14' */
              /* '<S151>:27:1' sf_internal_predicateOutput = count >= nSleepFailMax_C; */
              if (EFuse_Ctr_Fuse05SleepRetryCount >=
                  Rte_CData_EFuse_nSleepFailMax_C()) {
                /* Transition: '<S151>:27' */
                /* Exit Internal 'SleepRetry': '<S151>:14' */
                EFuse_Ctrl_DW.is_SleepRetry_f = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                EFuse_Ctrl_DW.is_ECUSleep_o = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S151>:18' */
                /* '<S151>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse05 = 5U;

                /* '<S151>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep05 = true;

                /* '<S151>:18:5' bSleepFail = true; */
              } else if (EFuse_Ctrl_DW.is_SleepRetry_f ==
                         EFuse_Ctrl_IN_FailCounter) {
                EFuse_Ctrl_stFuse05 = 6U;
                EFuse_Ctrl_flgAllwSleep05 = false;

                /* During 'FailCounter': '<S151>:10' */
                /* '<S151>:24:1' sf_internal_predicateOutput = count < nSleepFailMax_C && ... */
                /* '<S151>:24:2' waitTime(true) > TiReSleep_C; */
                if (EFuse_Ctr_Fuse05SleepRetryCount <
                    Rte_CData_EFuse_nSleepFailMax_C()) {
                  /* Simulink Function 'waitTime': '<S151>:72' */
                  EFuse_Ctrl_B.En_h = true;

                  /* Outputs for Function Call SubSystem: '<S151>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_h, &EFuse_Ctrl_B.Switch_m,
                                      &EFuse_Ctrl_DW.waitTime_n1);

                  /* End of Outputs for SubSystem: '<S151>/waitTime' */
                  rtb_Switch_hs = (EFuse_Ctrl_B.Switch_m >
                                   Rte_CData_EFuse_tiSleepFailRetry_C());
                } else {
                  rtb_Switch_hs = false;
                }

                if (rtb_Switch_hs) {
                  /* Transition: '<S151>:24' */
                  EFuse_Ctrl_DW.is_SleepRetry_f = EFuse_Ctrl_IN_Retry;

                  /* Entry 'Retry': '<S151>:15' */
                  /* '<S151>:15:3' stFuse = uint8(7); */
                  EFuse_Ctrl_stFuse05 = 7U;

                  /* '<S151>:15:4' bAllwSleep = true; */
                  EFuse_Ctrl_flgAllwSleep05 = true;

                  /* '<S151>:15:5' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S151>:72' */
                  EFuse_Ctrl_B.En_h = false;

                  /* Outputs for Function Call SubSystem: '<S151>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_h, &EFuse_Ctrl_B.Switch_m,
                                      &EFuse_Ctrl_DW.waitTime_n1);

                  /* End of Outputs for SubSystem: '<S151>/waitTime' */
                }
              } else {
                EFuse_Ctrl_stFuse05 = 7U;
                EFuse_Ctrl_flgAllwSleep05 = true;

                /* During 'Retry': '<S151>:15' */
                /* '<S151>:26:1' sf_internal_predicateOutput = flgSleepFail; */
                if (rtb_Switch_je) {
                  /* Transition: '<S151>:26' */
                  EFuse_Ctrl_DW.is_SleepRetry_f = EFuse_Ctrl_IN_FailCounter;

                  /* Entry 'FailCounter': '<S151>:10' */
                  /* '<S151>:10:3' stFuse = uint8(6); */
                  EFuse_Ctrl_stFuse05 = 6U;

                  /* '<S151>:10:4' bAllwSleep = false; */
                  EFuse_Ctrl_flgAllwSleep05 = false;

                  /* '<S151>:10:5' count = count + uint8(1); */
                  EFuse_Ctr_Fuse05SleepRetryCount = Mfx_Add_u8u8_u8
                    (EFuse_Ctr_Fuse05SleepRetryCount, 1U);

                  /* '<S151>:10:6' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S151>:72' */
                  EFuse_Ctrl_B.En_h = false;

                  /* Outputs for Function Call SubSystem: '<S151>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_h, &EFuse_Ctrl_B.Switch_m,
                                      &EFuse_Ctrl_DW.waitTime_n1);

                  /* End of Outputs for SubSystem: '<S151>/waitTime' */
                } else {
                  /* '<S151>:28:1' sf_internal_predicateOutput = waitTime(true) > TiReSleepDiag_C; */
                  /* Simulink Function 'waitTime': '<S151>:72' */
                  EFuse_Ctrl_B.En_h = true;

                  /* Outputs for Function Call SubSystem: '<S151>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_h, &EFuse_Ctrl_B.Switch_m,
                                      &EFuse_Ctrl_DW.waitTime_n1);

                  /* End of Outputs for SubSystem: '<S151>/waitTime' */
                  if (EFuse_Ctrl_B.Switch_m > Rte_CData_EFuse_tiSleepFailToNrm_C
                      ()) {
                    /* Transition: '<S151>:28' */
                    EFuse_Ctrl_DW.is_SleepRetry_f =
                      EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                    EFuse_Ctrl_DW.is_ECUSleep_o = EFuse_Ctrl_IN_NormSleep;

                    /* Entry 'NormSleep': '<S151>:13' */
                    /* '<S151>:13:3' stFuse = uint8(4); */
                    EFuse_Ctrl_stFuse05 = 4U;

                    /* '<S151>:13:4' bAllwSleep = true; */
                    EFuse_Ctrl_flgAllwSleep05 = true;

                    /* '<S151>:13:5' bSleepFail = false; */
                    /* '<S151>:13:6' waitTime(false); */
                    /* Simulink Function 'waitTime': '<S151>:72' */
                    EFuse_Ctrl_B.En_h = false;

                    /* Outputs for Function Call SubSystem: '<S151>/waitTime' */
                    EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_h,
                                        &EFuse_Ctrl_B.Switch_m,
                                        &EFuse_Ctrl_DW.waitTime_n1);

                    /* End of Outputs for SubSystem: '<S151>/waitTime' */
                  }
                }
              }
              break;
            }
          }
        }
        break;

       case EFuse_Ctrl_IN_ECUWork:
        /* During 'ECUWork': '<S151>:63' */
        switch (EFuse_Ctrl_DW.is_ECUWork_o) {
         case EFuse_Ctrl_IN_NormWork:
          EFuse_Ctrl_stFuse05 = 1U;
          EFuse_Ctrl_flgAllwSleep05 = false;

          /* During 'NormWork': '<S151>:3' */
          /* '<S151>:38:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S151>:38' */
            EFuse_Ctrl_DW.is_ECUWork_o = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c4_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S151>:7' */
            /* '<S151>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse05 = 2U;

            /* '<S151>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep05 = true;

            /* '<S151>:7:5' bSWPrt = true; */
          } else {
            /* '<S151>:20:1' sf_internal_predicateOutput = flgPreSleep; */
            if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val()) {
              /* Transition: '<S151>:20' */
              EFuse_Ctrl_DW.is_ECUWork_o = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
              EFuse_Ctrl_DW.is_c4_EFuse_Ctrl = EFuse_Ctrl_IN_ECUSleep;
              EFuse_Ctrl_DW.is_ECUSleep_o = EFuse_Ctrl_IN_NormSleep;

              /* Entry 'NormSleep': '<S151>:13' */
              /* '<S151>:13:3' stFuse = uint8(4); */
              EFuse_Ctrl_stFuse05 = 4U;

              /* '<S151>:13:4' bAllwSleep = true; */
              EFuse_Ctrl_flgAllwSleep05 = true;

              /* '<S151>:13:5' bSleepFail = false; */
              /* '<S151>:13:6' waitTime(false); */
              /* Simulink Function 'waitTime': '<S151>:72' */
              EFuse_Ctrl_B.En_h = false;

              /* Outputs for Function Call SubSystem: '<S151>/waitTime' */
              EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_h, &EFuse_Ctrl_B.Switch_m,
                                  &EFuse_Ctrl_DW.waitTime_n1);

              /* End of Outputs for SubSystem: '<S151>/waitTime' */
            }
          }
          break;

         case EFuse_Ctrl_IN_PreCharge:
          EFuse_Ctrl_stFuse05 = 3U;
          EFuse_Ctrl_flgAllwSleep05 = false;

          /* During 'PreCharge': '<S151>:100' */
          /* '<S151>:103:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
          /* '<S151>:103:2'  && ~flgPreChrgSucc; */
          /* Simulink Function 'waitTime': '<S151>:72' */
          EFuse_Ctrl_B.En_h = true;

          /* Outputs for Function Call SubSystem: '<S151>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_h, &EFuse_Ctrl_B.Switch_m,
                              &EFuse_Ctrl_DW.waitTime_n1);

          /* End of Outputs for SubSystem: '<S151>/waitTime' */
          if ((EFuse_Ctrl_B.Switch_m > 2000U) && (!rtb_Switch_hs)) {
            /* Transition: '<S151>:103' */
            EFuse_Ctrl_DW.is_ECUWork_o = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c4_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S151>:7' */
            /* '<S151>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse05 = 2U;

            /* '<S151>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep05 = true;

            /* '<S151>:7:5' bSWPrt = true; */
          } else {
            /* '<S151>:101:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
            /* '<S151>:101:2'  && flgPreChrgSucc; */
            /* Simulink Function 'waitTime': '<S151>:72' */
            EFuse_Ctrl_B.En_h = true;

            /* Outputs for Function Call SubSystem: '<S151>/waitTime' */
            EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_h, &EFuse_Ctrl_B.Switch_m,
                                &EFuse_Ctrl_DW.waitTime_n1);

            /* End of Outputs for SubSystem: '<S151>/waitTime' */
            if ((EFuse_Ctrl_B.Switch_m > 2000U) && rtb_Switch_hs) {
              /* Transition: '<S151>:101' */
              EFuse_Ctrl_DW.is_ECUWork_o = EFuse_Ctrl_IN_NormWork;

              /* Entry 'NormWork': '<S151>:3' */
              /* '<S151>:3:3' stFuse = uint8(1); */
              EFuse_Ctrl_stFuse05 = 1U;

              /* '<S151>:3:4' bAllwSleep = false; */
              EFuse_Ctrl_flgAllwSleep05 = false;

              /* '<S151>:3:5' bSleepFail = false; */
              /* '<S151>:3:6' count = uint8(0); */
              EFuse_Ctr_Fuse05SleepRetryCount = 0U;

              /* '<S151>:3:7' bSWPrt = false; */
            }
          }
          break;

         default:
          /* During 'StandBy': '<S151>:1' */
          /* Transition: '<S151>:4' */
          EFuse_Ctrl_DW.is_ECUWork_o = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S151>:3' */
          /* '<S151>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse05 = 1U;

          /* '<S151>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep05 = false;

          /* '<S151>:3:5' bSleepFail = false; */
          /* '<S151>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse05SleepRetryCount = 0U;

          /* '<S151>:3:7' bSWPrt = false; */
          break;
        }
        break;

       default:
        EFuse_Ctrl_stFuse05 = 2U;
        EFuse_Ctrl_flgAllwSleep05 = true;

        /* During 'SWProtect': '<S151>:7' */
        /* '<S151>:34:1' sf_internal_predicateOutput = flgReset; */
        if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPwrModChng_Val()) {
          /* Transition: '<S151>:34' */
          EFuse_Ctrl_DW.is_c4_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_o = EFuse_Ctrl_IN_PreCharge;

          /* Entry 'PreCharge': '<S151>:100' */
          /* '<S151>:100:3' stFuse = uint8(3); */
          EFuse_Ctrl_stFuse05 = 3U;

          /* '<S151>:100:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep05 = false;

          /* '<S151>:100:5' bSleepFail = false; */
          /* '<S151>:100:6' waitTime(false); */
          /* Simulink Function 'waitTime': '<S151>:72' */
          EFuse_Ctrl_B.En_h = false;

          /* Outputs for Function Call SubSystem: '<S151>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_h, &EFuse_Ctrl_B.Switch_m,
                              &EFuse_Ctrl_DW.waitTime_n1);

          /* End of Outputs for SubSystem: '<S151>/waitTime' */
        }
        break;
      }
    }

    /* End of Chart: '<S127>/Chart' */

    /* DataStoreWrite: '<S127>/Data Store Write' */
    EFuse_C_Fuse05SleepRetryCount_c = EFuse_Ctr_Fuse05SleepRetryCount;
  }

  /* End of Outputs for SubSystem: '<S4>/FUSE05' */

  /* Switch: '<S6>/Switch5' incorporates:
   *  Constant: '<S6>/PA_EFuse_ActUseFuseChInfo_C1'
   *  DataTypeConversion: '<S266>/Extract Desired Bits'
   */
  EFuse_Ctrl_EnFuse06 = (((uint8)(Rte_CData_EFuse_ActUseFuseChInfo_C() >> 6) &
    1U) != 0U);

  /* Outputs for Enabled SubSystem: '<S4>/FUSE06' incorporates:
   *  EnablePort: '<S14>/Enable'
   */
  if (EFuse_Ctrl_EnFuse06) {
    /* Switch: '<S168>/Switch' incorporates:
     *  DataTypeConversion: '<S174>/Extract Desired Bits'
     */
    rtb_Switch_hs = (((uint8)(tmpIRead[5] >> 4) & 1U) != 0U);

    /* Switch: '<S169>/Switch' incorporates:
     *  DataTypeConversion: '<S175>/Extract Desired Bits'
     */
    rtb_Switch_kj = (((uint8)(tmpIRead[5] >> 2) & 1U) != 0U);

    /* Switch: '<S158>/Switch4' incorporates:
     *  Constant: '<S158>/Constant9'
     *  Constant: '<S158>/PA_EFuse_SWPrtSel_C4'
     *  DataTypeConversion: '<S163>/Extract Desired Bits'
     *  DataTypeConversion: '<S176>/Extract Desired Bits'
     *  Switch: '<S170>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 2 & 1U) != 0U) {
      tmp_0 = ((tmpIRead[5] >> 24 & 1U) != 0U);
    } else {
      tmp_0 = false;
    }

    /* End of Switch: '<S158>/Switch4' */

    /* Switch: '<S158>/Switch1' incorporates:
     *  Constant: '<S158>/Constant1'
     *  Constant: '<S158>/PA_EFuse_SWPrtSel_C1'
     *  DataTypeConversion: '<S164>/Extract Desired Bits'
     *  DataTypeConversion: '<S172>/Extract Desired Bits'
     *  Switch: '<S166>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 3 & 1U) != 0U) {
      rtb_Switch4_ez = (((uint8)(tmpIRead[5] >> 17) & 1U) != 0U);
    } else {
      rtb_Switch4_ez = false;
    }

    /* End of Switch: '<S158>/Switch1' */

    /* Logic: '<S158>/Logical Operator' incorporates:
     *  Constant: '<S158>/PA_EFuse_SWPrtSel_C2'
     *  Constant: '<S158>/PA_EFuse_SWPrtSel_C3'
     *  DataTypeConversion: '<S161>/Extract Desired Bits'
     *  DataTypeConversion: '<S162>/Extract Desired Bits'
     *  Switch: '<S158>/Switch2'
     *  Switch: '<S158>/Switch3'
     */
    rtb_Switch4_ez = ((((Rte_CData_EFuse_SWPrtSel_C() & 1U) != 0U) &&
                       rtb_Switch_hs) || ((((uint32)Rte_CData_EFuse_SWPrtSel_C()
      >> 1 & 1U) != 0U) && rtb_Switch_kj) || tmp_0 || rtb_Switch4_ez);

    /* Switch: '<S171>/Switch' incorporates:
     *  Constant: '<S171>/Constant'
     *  RelationalOperator: '<S171>/Relational Operator'
     */
    rtb_Switch_je = (tmpIRead_0[5] == 3);

    /* Logic: '<S155>/Logical Operator1' incorporates:
     *  Logic: '<S155>/Logical Operator'
     */
    rtb_Switch_hs = ((!rtb_Switch_hs) && (!rtb_Switch_kj));

    /* Chart: '<S154>/Chart' incorporates:
     *  Constant: '<S154>/Constant'
     *  Constant: '<S177>/PA_EFuse_EnaSleepFailRetry_C'
     *  Constant: '<S177>/PA_EFuse_nSleepFailMax_C'
     *  Constant: '<S177>/PA_EFuse_tiSleepFailRetry_C'
     *  Constant: '<S177>/PA_EFuse_tiSleepFailToNrm_C'
     *  Inport: '<Root>/EFuse_flgPreSleep_Val'
     *  Inport: '<Root>/EFuse_flgPwrModChng_Val'
     */
    /* Gateway: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE06/CtrlChart/Chart */
    /* During: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE06/CtrlChart/Chart */
    if (EFuse_Ctrl_DW.is_active_c5_EFuse_Ctrl == 0U) {
      /* Entry: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE06/CtrlChart/Chart */
      EFuse_Ctrl_DW.is_active_c5_EFuse_Ctrl = 1U;

      /* Entry Internal: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE06/CtrlChart/Chart */
      /* Transition: '<S178>:2' */
      EFuse_Ctrl_DW.is_c5_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
      EFuse_Ctrl_DW.is_ECUWork_f = EFuse_Ctrl_IN_StandBy;

      /* Entry 'StandBy': '<S178>:1' */
      /* '<S178>:1:3' stFuse = uint8(0); */
      EFuse_Ctrl_stFuse06 = 0U;

      /* '<S178>:1:4' bAllwSleep = false; */
      EFuse_Ctrl_flgAllwSleep06 = false;

      /* '<S178>:1:5' bSleepFail = false; */
      /* '<S178>:1:6' bSWPrt = false; */
    } else {
      switch (EFuse_Ctrl_DW.is_c5_EFuse_Ctrl) {
       case EFuse_Ctrl_IN_ECUSleep:
        /* Switch: '<S159>/Switch' incorporates:
         *  Constant: '<S159>/Constant1'
         *  Constant: '<S159>/PA_EFuse_ReWrkSel_C'
         *  DataTypeConversion: '<S165>/Extract Desired Bits'
         *  Inport: '<Root>/EFuse_flgPreSleep_Val'
         *  Logic: '<S159>/Logical Operator1'
         */
        /* During 'ECUSleep': '<S178>:64' */
        /* '<S178>:35:1' sf_internal_predicateOutput = flgReWrk; */
        if ((Rte_CData_EFuse_ReWrkSel_C() & 1U) != 0U) {
          tmp_0 = !Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val();
        } else {
          tmp_0 = false;
        }

        /* End of Switch: '<S159>/Switch' */
        if (tmp_0) {
          /* Transition: '<S178>:35' */
          /* Exit Internal 'ECUSleep': '<S178>:64' */
          /* Exit Internal 'SleepRetry': '<S178>:14' */
          EFuse_Ctrl_DW.is_SleepRetry_l = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_ECUSleep_m = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_c5_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_f = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S178>:3' */
          /* '<S178>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse06 = 1U;

          /* '<S178>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep06 = false;

          /* '<S178>:3:5' bSleepFail = false; */
          /* '<S178>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse06SleepRetryCount = 0U;

          /* '<S178>:3:7' bSWPrt = false; */
        } else {
          /* '<S178>:80:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S178>:80' */
            /* Exit Internal 'ECUSleep': '<S178>:64' */
            /* Exit Internal 'SleepRetry': '<S178>:14' */
            EFuse_Ctrl_DW.is_SleepRetry_l = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_ECUSleep_m = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c5_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S178>:7' */
            /* '<S178>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse06 = 2U;

            /* '<S178>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep06 = true;

            /* '<S178>:7:5' bSWPrt = true; */
          } else {
            switch (EFuse_Ctrl_DW.is_ECUSleep_m) {
             case EFuse_Ctrl_IN_NormSleep:
              EFuse_Ctrl_stFuse06 = 4U;
              EFuse_Ctrl_flgAllwSleep06 = true;

              /* During 'NormSleep': '<S178>:13' */
              /* '<S178>:21:1' sf_internal_predicateOutput = flgSleepFail; */
              if (rtb_Switch_je) {
                /* Transition: '<S178>:21' */
                EFuse_Ctrl_DW.is_ECUSleep_m = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S178>:18' */
                /* '<S178>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse06 = 5U;

                /* '<S178>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep06 = true;

                /* '<S178>:18:5' bSleepFail = true; */
              }
              break;

             case EFuse_Ctrl_IN_SleepFail:
              EFuse_Ctrl_stFuse06 = 5U;
              EFuse_Ctrl_flgAllwSleep06 = true;

              /* During 'SleepFail': '<S178>:18' */
              /* '<S178>:22:1' sf_internal_predicateOutput = EnSleepFailRetry && ... */
              /* '<S178>:22:2' count < nSleepFailMax_C; */
              if (Rte_CData_EFuse_EnSleepFailRetry_C() &&
                  (EFuse_Ctr_Fuse06SleepRetryCount <
                   Rte_CData_EFuse_nSleepFailMax_C())) {
                /* Transition: '<S178>:22' */
                EFuse_Ctrl_DW.is_ECUSleep_m = EFuse_Ctrl_IN_SleepRetry;

                /* Entry Internal 'SleepRetry': '<S178>:14' */
                /* Transition: '<S178>:23' */
                EFuse_Ctrl_DW.is_SleepRetry_l = EFuse_Ctrl_IN_FailCounter;

                /* Entry 'FailCounter': '<S178>:10' */
                /* '<S178>:10:3' stFuse = uint8(6); */
                EFuse_Ctrl_stFuse06 = 6U;

                /* '<S178>:10:4' bAllwSleep = false; */
                EFuse_Ctrl_flgAllwSleep06 = false;

                /* '<S178>:10:5' count = count + uint8(1); */
                EFuse_Ctr_Fuse06SleepRetryCount = Mfx_Add_u8u8_u8
                  (EFuse_Ctr_Fuse06SleepRetryCount, 1U);

                /* '<S178>:10:6' waitTime(false); */
                /* Simulink Function 'waitTime': '<S178>:72' */
                EFuse_Ctrl_B.En_m = false;

                /* Outputs for Function Call SubSystem: '<S178>/waitTime' */
                EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_m, &EFuse_Ctrl_B.Switch_i,
                                    &EFuse_Ctrl_DW.waitTime_a);

                /* End of Outputs for SubSystem: '<S178>/waitTime' */
              }
              break;

             default:
              /* During 'SleepRetry': '<S178>:14' */
              /* '<S178>:27:1' sf_internal_predicateOutput = count >= nSleepFailMax_C; */
              if (EFuse_Ctr_Fuse06SleepRetryCount >=
                  Rte_CData_EFuse_nSleepFailMax_C()) {
                /* Transition: '<S178>:27' */
                /* Exit Internal 'SleepRetry': '<S178>:14' */
                EFuse_Ctrl_DW.is_SleepRetry_l = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                EFuse_Ctrl_DW.is_ECUSleep_m = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S178>:18' */
                /* '<S178>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse06 = 5U;

                /* '<S178>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep06 = true;

                /* '<S178>:18:5' bSleepFail = true; */
              } else if (EFuse_Ctrl_DW.is_SleepRetry_l ==
                         EFuse_Ctrl_IN_FailCounter) {
                EFuse_Ctrl_stFuse06 = 6U;
                EFuse_Ctrl_flgAllwSleep06 = false;

                /* During 'FailCounter': '<S178>:10' */
                /* '<S178>:24:1' sf_internal_predicateOutput = count < nSleepFailMax_C && ... */
                /* '<S178>:24:2' waitTime(true) > TiReSleep_C; */
                if (EFuse_Ctr_Fuse06SleepRetryCount <
                    Rte_CData_EFuse_nSleepFailMax_C()) {
                  /* Simulink Function 'waitTime': '<S178>:72' */
                  EFuse_Ctrl_B.En_m = true;

                  /* Outputs for Function Call SubSystem: '<S178>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_m, &EFuse_Ctrl_B.Switch_i,
                                      &EFuse_Ctrl_DW.waitTime_a);

                  /* End of Outputs for SubSystem: '<S178>/waitTime' */
                  rtb_Switch_hs = (EFuse_Ctrl_B.Switch_i >
                                   Rte_CData_EFuse_tiSleepFailRetry_C());
                } else {
                  rtb_Switch_hs = false;
                }

                if (rtb_Switch_hs) {
                  /* Transition: '<S178>:24' */
                  EFuse_Ctrl_DW.is_SleepRetry_l = EFuse_Ctrl_IN_Retry;

                  /* Entry 'Retry': '<S178>:15' */
                  /* '<S178>:15:3' stFuse = uint8(7); */
                  EFuse_Ctrl_stFuse06 = 7U;

                  /* '<S178>:15:4' bAllwSleep = true; */
                  EFuse_Ctrl_flgAllwSleep06 = true;

                  /* '<S178>:15:5' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S178>:72' */
                  EFuse_Ctrl_B.En_m = false;

                  /* Outputs for Function Call SubSystem: '<S178>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_m, &EFuse_Ctrl_B.Switch_i,
                                      &EFuse_Ctrl_DW.waitTime_a);

                  /* End of Outputs for SubSystem: '<S178>/waitTime' */
                }
              } else {
                EFuse_Ctrl_stFuse06 = 7U;
                EFuse_Ctrl_flgAllwSleep06 = true;

                /* During 'Retry': '<S178>:15' */
                /* '<S178>:26:1' sf_internal_predicateOutput = flgSleepFail; */
                if (rtb_Switch_je) {
                  /* Transition: '<S178>:26' */
                  EFuse_Ctrl_DW.is_SleepRetry_l = EFuse_Ctrl_IN_FailCounter;

                  /* Entry 'FailCounter': '<S178>:10' */
                  /* '<S178>:10:3' stFuse = uint8(6); */
                  EFuse_Ctrl_stFuse06 = 6U;

                  /* '<S178>:10:4' bAllwSleep = false; */
                  EFuse_Ctrl_flgAllwSleep06 = false;

                  /* '<S178>:10:5' count = count + uint8(1); */
                  EFuse_Ctr_Fuse06SleepRetryCount = Mfx_Add_u8u8_u8
                    (EFuse_Ctr_Fuse06SleepRetryCount, 1U);

                  /* '<S178>:10:6' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S178>:72' */
                  EFuse_Ctrl_B.En_m = false;

                  /* Outputs for Function Call SubSystem: '<S178>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_m, &EFuse_Ctrl_B.Switch_i,
                                      &EFuse_Ctrl_DW.waitTime_a);

                  /* End of Outputs for SubSystem: '<S178>/waitTime' */
                } else {
                  /* '<S178>:28:1' sf_internal_predicateOutput = waitTime(true) > TiReSleepDiag_C; */
                  /* Simulink Function 'waitTime': '<S178>:72' */
                  EFuse_Ctrl_B.En_m = true;

                  /* Outputs for Function Call SubSystem: '<S178>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_m, &EFuse_Ctrl_B.Switch_i,
                                      &EFuse_Ctrl_DW.waitTime_a);

                  /* End of Outputs for SubSystem: '<S178>/waitTime' */
                  if (EFuse_Ctrl_B.Switch_i > Rte_CData_EFuse_tiSleepFailToNrm_C
                      ()) {
                    /* Transition: '<S178>:28' */
                    EFuse_Ctrl_DW.is_SleepRetry_l =
                      EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                    EFuse_Ctrl_DW.is_ECUSleep_m = EFuse_Ctrl_IN_NormSleep;

                    /* Entry 'NormSleep': '<S178>:13' */
                    /* '<S178>:13:3' stFuse = uint8(4); */
                    EFuse_Ctrl_stFuse06 = 4U;

                    /* '<S178>:13:4' bAllwSleep = true; */
                    EFuse_Ctrl_flgAllwSleep06 = true;

                    /* '<S178>:13:5' bSleepFail = false; */
                    /* '<S178>:13:6' waitTime(false); */
                    /* Simulink Function 'waitTime': '<S178>:72' */
                    EFuse_Ctrl_B.En_m = false;

                    /* Outputs for Function Call SubSystem: '<S178>/waitTime' */
                    EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_m,
                                        &EFuse_Ctrl_B.Switch_i,
                                        &EFuse_Ctrl_DW.waitTime_a);

                    /* End of Outputs for SubSystem: '<S178>/waitTime' */
                  }
                }
              }
              break;
            }
          }
        }
        break;

       case EFuse_Ctrl_IN_ECUWork:
        /* During 'ECUWork': '<S178>:63' */
        switch (EFuse_Ctrl_DW.is_ECUWork_f) {
         case EFuse_Ctrl_IN_NormWork:
          EFuse_Ctrl_stFuse06 = 1U;
          EFuse_Ctrl_flgAllwSleep06 = false;

          /* During 'NormWork': '<S178>:3' */
          /* '<S178>:38:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S178>:38' */
            EFuse_Ctrl_DW.is_ECUWork_f = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c5_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S178>:7' */
            /* '<S178>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse06 = 2U;

            /* '<S178>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep06 = true;

            /* '<S178>:7:5' bSWPrt = true; */
          } else {
            /* '<S178>:20:1' sf_internal_predicateOutput = flgPreSleep; */
            if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val()) {
              /* Transition: '<S178>:20' */
              EFuse_Ctrl_DW.is_ECUWork_f = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
              EFuse_Ctrl_DW.is_c5_EFuse_Ctrl = EFuse_Ctrl_IN_ECUSleep;
              EFuse_Ctrl_DW.is_ECUSleep_m = EFuse_Ctrl_IN_NormSleep;

              /* Entry 'NormSleep': '<S178>:13' */
              /* '<S178>:13:3' stFuse = uint8(4); */
              EFuse_Ctrl_stFuse06 = 4U;

              /* '<S178>:13:4' bAllwSleep = true; */
              EFuse_Ctrl_flgAllwSleep06 = true;

              /* '<S178>:13:5' bSleepFail = false; */
              /* '<S178>:13:6' waitTime(false); */
              /* Simulink Function 'waitTime': '<S178>:72' */
              EFuse_Ctrl_B.En_m = false;

              /* Outputs for Function Call SubSystem: '<S178>/waitTime' */
              EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_m, &EFuse_Ctrl_B.Switch_i,
                                  &EFuse_Ctrl_DW.waitTime_a);

              /* End of Outputs for SubSystem: '<S178>/waitTime' */
            }
          }
          break;

         case EFuse_Ctrl_IN_PreCharge:
          EFuse_Ctrl_stFuse06 = 3U;
          EFuse_Ctrl_flgAllwSleep06 = false;

          /* During 'PreCharge': '<S178>:100' */
          /* '<S178>:103:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
          /* '<S178>:103:2'  && ~flgPreChrgSucc; */
          /* Simulink Function 'waitTime': '<S178>:72' */
          EFuse_Ctrl_B.En_m = true;

          /* Outputs for Function Call SubSystem: '<S178>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_m, &EFuse_Ctrl_B.Switch_i,
                              &EFuse_Ctrl_DW.waitTime_a);

          /* End of Outputs for SubSystem: '<S178>/waitTime' */
          if ((EFuse_Ctrl_B.Switch_i > 2000U) && (!rtb_Switch_hs)) {
            /* Transition: '<S178>:103' */
            EFuse_Ctrl_DW.is_ECUWork_f = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c5_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S178>:7' */
            /* '<S178>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse06 = 2U;

            /* '<S178>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep06 = true;

            /* '<S178>:7:5' bSWPrt = true; */
          } else {
            /* '<S178>:101:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
            /* '<S178>:101:2'  && flgPreChrgSucc; */
            /* Simulink Function 'waitTime': '<S178>:72' */
            EFuse_Ctrl_B.En_m = true;

            /* Outputs for Function Call SubSystem: '<S178>/waitTime' */
            EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_m, &EFuse_Ctrl_B.Switch_i,
                                &EFuse_Ctrl_DW.waitTime_a);

            /* End of Outputs for SubSystem: '<S178>/waitTime' */
            if ((EFuse_Ctrl_B.Switch_i > 2000U) && rtb_Switch_hs) {
              /* Transition: '<S178>:101' */
              EFuse_Ctrl_DW.is_ECUWork_f = EFuse_Ctrl_IN_NormWork;

              /* Entry 'NormWork': '<S178>:3' */
              /* '<S178>:3:3' stFuse = uint8(1); */
              EFuse_Ctrl_stFuse06 = 1U;

              /* '<S178>:3:4' bAllwSleep = false; */
              EFuse_Ctrl_flgAllwSleep06 = false;

              /* '<S178>:3:5' bSleepFail = false; */
              /* '<S178>:3:6' count = uint8(0); */
              EFuse_Ctr_Fuse06SleepRetryCount = 0U;

              /* '<S178>:3:7' bSWPrt = false; */
            }
          }
          break;

         default:
          /* During 'StandBy': '<S178>:1' */
          /* Transition: '<S178>:4' */
          EFuse_Ctrl_DW.is_ECUWork_f = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S178>:3' */
          /* '<S178>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse06 = 1U;

          /* '<S178>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep06 = false;

          /* '<S178>:3:5' bSleepFail = false; */
          /* '<S178>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse06SleepRetryCount = 0U;

          /* '<S178>:3:7' bSWPrt = false; */
          break;
        }
        break;

       default:
        EFuse_Ctrl_stFuse06 = 2U;
        EFuse_Ctrl_flgAllwSleep06 = true;

        /* During 'SWProtect': '<S178>:7' */
        /* '<S178>:34:1' sf_internal_predicateOutput = flgReset; */
        if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPwrModChng_Val()) {
          /* Transition: '<S178>:34' */
          EFuse_Ctrl_DW.is_c5_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_f = EFuse_Ctrl_IN_PreCharge;

          /* Entry 'PreCharge': '<S178>:100' */
          /* '<S178>:100:3' stFuse = uint8(3); */
          EFuse_Ctrl_stFuse06 = 3U;

          /* '<S178>:100:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep06 = false;

          /* '<S178>:100:5' bSleepFail = false; */
          /* '<S178>:100:6' waitTime(false); */
          /* Simulink Function 'waitTime': '<S178>:72' */
          EFuse_Ctrl_B.En_m = false;

          /* Outputs for Function Call SubSystem: '<S178>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_m, &EFuse_Ctrl_B.Switch_i,
                              &EFuse_Ctrl_DW.waitTime_a);

          /* End of Outputs for SubSystem: '<S178>/waitTime' */
        }
        break;
      }
    }

    /* End of Chart: '<S154>/Chart' */

    /* DataStoreWrite: '<S154>/Data Store Write' */
    EFuse_C_Fuse06SleepRetryCount_n = EFuse_Ctr_Fuse06SleepRetryCount;
  }

  /* End of Outputs for SubSystem: '<S4>/FUSE06' */

  /* Switch: '<S6>/Switch6' incorporates:
   *  Constant: '<S6>/PA_EFuse_ActUseFuseChInfo_C1'
   *  DataTypeConversion: '<S267>/Extract Desired Bits'
   */
  EFuse_Ctrl_EnFuse07 = (((uint8)(Rte_CData_EFuse_ActUseFuseChInfo_C() >> 7) &
    1U) != 0U);

  /* Outputs for Enabled SubSystem: '<S4>/FUSE07' incorporates:
   *  EnablePort: '<S15>/Enable'
   */
  if (EFuse_Ctrl_EnFuse07) {
    /* Switch: '<S195>/Switch' incorporates:
     *  DataTypeConversion: '<S201>/Extract Desired Bits'
     */
    rtb_Switch_hs = (((uint8)(tmpIRead[6] >> 4) & 1U) != 0U);

    /* Switch: '<S196>/Switch' incorporates:
     *  DataTypeConversion: '<S202>/Extract Desired Bits'
     */
    rtb_Switch_kj = (((uint8)(tmpIRead[6] >> 2) & 1U) != 0U);

    /* Switch: '<S185>/Switch4' incorporates:
     *  Constant: '<S185>/Constant9'
     *  Constant: '<S185>/PA_EFuse_SWPrtSel_C4'
     *  DataTypeConversion: '<S190>/Extract Desired Bits'
     *  DataTypeConversion: '<S203>/Extract Desired Bits'
     *  Switch: '<S197>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 2 & 1U) != 0U) {
      tmp_0 = ((tmpIRead[6] >> 24 & 1U) != 0U);
    } else {
      tmp_0 = false;
    }

    /* End of Switch: '<S185>/Switch4' */

    /* Switch: '<S185>/Switch1' incorporates:
     *  Constant: '<S185>/Constant1'
     *  Constant: '<S185>/PA_EFuse_SWPrtSel_C1'
     *  DataTypeConversion: '<S191>/Extract Desired Bits'
     *  DataTypeConversion: '<S199>/Extract Desired Bits'
     *  Switch: '<S193>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 3 & 1U) != 0U) {
      rtb_Switch4_ez = (((uint8)(tmpIRead[6] >> 17) & 1U) != 0U);
    } else {
      rtb_Switch4_ez = false;
    }

    /* End of Switch: '<S185>/Switch1' */

    /* Logic: '<S185>/Logical Operator' incorporates:
     *  Constant: '<S185>/PA_EFuse_SWPrtSel_C2'
     *  Constant: '<S185>/PA_EFuse_SWPrtSel_C3'
     *  DataTypeConversion: '<S188>/Extract Desired Bits'
     *  DataTypeConversion: '<S189>/Extract Desired Bits'
     *  Switch: '<S185>/Switch2'
     *  Switch: '<S185>/Switch3'
     */
    rtb_Switch4_ez = ((((Rte_CData_EFuse_SWPrtSel_C() & 1U) != 0U) &&
                       rtb_Switch_hs) || ((((uint32)Rte_CData_EFuse_SWPrtSel_C()
      >> 1 & 1U) != 0U) && rtb_Switch_kj) || tmp_0 || rtb_Switch4_ez);

    /* Switch: '<S198>/Switch' incorporates:
     *  Constant: '<S198>/Constant'
     *  RelationalOperator: '<S198>/Relational Operator'
     */
    rtb_Switch_je = (tmpIRead_0[6] == 3);

    /* Logic: '<S182>/Logical Operator1' incorporates:
     *  Logic: '<S182>/Logical Operator'
     */
    rtb_Switch_hs = ((!rtb_Switch_hs) && (!rtb_Switch_kj));

    /* Chart: '<S181>/Chart' incorporates:
     *  Constant: '<S181>/Constant'
     *  Constant: '<S204>/PA_EFuse_EnaSleepFailRetry_C'
     *  Constant: '<S204>/PA_EFuse_nSleepFailMax_C'
     *  Constant: '<S204>/PA_EFuse_tiSleepFailRetry_C'
     *  Constant: '<S204>/PA_EFuse_tiSleepFailToNrm_C'
     *  Inport: '<Root>/EFuse_flgPreSleep_Val'
     *  Inport: '<Root>/EFuse_flgPwrModChng_Val'
     */
    /* Gateway: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE07/CtrlChart/Chart */
    /* During: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE07/CtrlChart/Chart */
    if (EFuse_Ctrl_DW.is_active_c6_EFuse_Ctrl == 0U) {
      /* Entry: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE07/CtrlChart/Chart */
      EFuse_Ctrl_DW.is_active_c6_EFuse_Ctrl = 1U;

      /* Entry Internal: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE07/CtrlChart/Chart */
      /* Transition: '<S205>:2' */
      EFuse_Ctrl_DW.is_c6_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
      EFuse_Ctrl_DW.is_ECUWork_g = EFuse_Ctrl_IN_StandBy;

      /* Entry 'StandBy': '<S205>:1' */
      /* '<S205>:1:3' stFuse = uint8(0); */
      EFuse_Ctrl_stFuse07 = 0U;

      /* '<S205>:1:4' bAllwSleep = false; */
      EFuse_Ctrl_flgAllwSleep07 = false;

      /* '<S205>:1:5' bSleepFail = false; */
      /* '<S205>:1:6' bSWPrt = false; */
    } else {
      switch (EFuse_Ctrl_DW.is_c6_EFuse_Ctrl) {
       case EFuse_Ctrl_IN_ECUSleep:
        /* Switch: '<S186>/Switch' incorporates:
         *  Constant: '<S186>/Constant1'
         *  Constant: '<S186>/PA_EFuse_ReWrkSel_C'
         *  DataTypeConversion: '<S192>/Extract Desired Bits'
         *  Inport: '<Root>/EFuse_flgPreSleep_Val'
         *  Logic: '<S186>/Logical Operator1'
         */
        /* During 'ECUSleep': '<S205>:64' */
        /* '<S205>:35:1' sf_internal_predicateOutput = flgReWrk; */
        if ((Rte_CData_EFuse_ReWrkSel_C() & 1U) != 0U) {
          tmp_0 = !Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val();
        } else {
          tmp_0 = false;
        }

        /* End of Switch: '<S186>/Switch' */
        if (tmp_0) {
          /* Transition: '<S205>:35' */
          /* Exit Internal 'ECUSleep': '<S205>:64' */
          /* Exit Internal 'SleepRetry': '<S205>:14' */
          EFuse_Ctrl_DW.is_SleepRetry_h = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_ECUSleep_n = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_c6_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_g = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S205>:3' */
          /* '<S205>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse07 = 1U;

          /* '<S205>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep07 = false;

          /* '<S205>:3:5' bSleepFail = false; */
          /* '<S205>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse07SleepRetryCount = 0U;

          /* '<S205>:3:7' bSWPrt = false; */
        } else {
          /* '<S205>:80:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S205>:80' */
            /* Exit Internal 'ECUSleep': '<S205>:64' */
            /* Exit Internal 'SleepRetry': '<S205>:14' */
            EFuse_Ctrl_DW.is_SleepRetry_h = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_ECUSleep_n = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c6_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S205>:7' */
            /* '<S205>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse07 = 2U;

            /* '<S205>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep07 = true;

            /* '<S205>:7:5' bSWPrt = true; */
          } else {
            switch (EFuse_Ctrl_DW.is_ECUSleep_n) {
             case EFuse_Ctrl_IN_NormSleep:
              EFuse_Ctrl_stFuse07 = 4U;
              EFuse_Ctrl_flgAllwSleep07 = true;

              /* During 'NormSleep': '<S205>:13' */
              /* '<S205>:21:1' sf_internal_predicateOutput = flgSleepFail; */
              if (rtb_Switch_je) {
                /* Transition: '<S205>:21' */
                EFuse_Ctrl_DW.is_ECUSleep_n = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S205>:18' */
                /* '<S205>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse07 = 5U;

                /* '<S205>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep07 = true;

                /* '<S205>:18:5' bSleepFail = true; */
              }
              break;

             case EFuse_Ctrl_IN_SleepFail:
              EFuse_Ctrl_stFuse07 = 5U;
              EFuse_Ctrl_flgAllwSleep07 = true;

              /* During 'SleepFail': '<S205>:18' */
              /* '<S205>:22:1' sf_internal_predicateOutput = EnSleepFailRetry && ... */
              /* '<S205>:22:2' count < nSleepFailMax_C; */
              if (Rte_CData_EFuse_EnSleepFailRetry_C() &&
                  (EFuse_Ctr_Fuse07SleepRetryCount <
                   Rte_CData_EFuse_nSleepFailMax_C())) {
                /* Transition: '<S205>:22' */
                EFuse_Ctrl_DW.is_ECUSleep_n = EFuse_Ctrl_IN_SleepRetry;

                /* Entry Internal 'SleepRetry': '<S205>:14' */
                /* Transition: '<S205>:23' */
                EFuse_Ctrl_DW.is_SleepRetry_h = EFuse_Ctrl_IN_FailCounter;

                /* Entry 'FailCounter': '<S205>:10' */
                /* '<S205>:10:3' stFuse = uint8(6); */
                EFuse_Ctrl_stFuse07 = 6U;

                /* '<S205>:10:4' bAllwSleep = false; */
                EFuse_Ctrl_flgAllwSleep07 = false;

                /* '<S205>:10:5' count = count + uint8(1); */
                EFuse_Ctr_Fuse07SleepRetryCount = Mfx_Add_u8u8_u8
                  (EFuse_Ctr_Fuse07SleepRetryCount, 1U);

                /* '<S205>:10:6' waitTime(false); */
                /* Simulink Function 'waitTime': '<S205>:72' */
                EFuse_Ctrl_B.En_o = false;

                /* Outputs for Function Call SubSystem: '<S205>/waitTime' */
                EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_o, &EFuse_Ctrl_B.Switch_d,
                                    &EFuse_Ctrl_DW.waitTime_e);

                /* End of Outputs for SubSystem: '<S205>/waitTime' */
              }
              break;

             default:
              /* During 'SleepRetry': '<S205>:14' */
              /* '<S205>:27:1' sf_internal_predicateOutput = count >= nSleepFailMax_C; */
              if (EFuse_Ctr_Fuse07SleepRetryCount >=
                  Rte_CData_EFuse_nSleepFailMax_C()) {
                /* Transition: '<S205>:27' */
                /* Exit Internal 'SleepRetry': '<S205>:14' */
                EFuse_Ctrl_DW.is_SleepRetry_h = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                EFuse_Ctrl_DW.is_ECUSleep_n = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S205>:18' */
                /* '<S205>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse07 = 5U;

                /* '<S205>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep07 = true;

                /* '<S205>:18:5' bSleepFail = true; */
              } else if (EFuse_Ctrl_DW.is_SleepRetry_h ==
                         EFuse_Ctrl_IN_FailCounter) {
                EFuse_Ctrl_stFuse07 = 6U;
                EFuse_Ctrl_flgAllwSleep07 = false;

                /* During 'FailCounter': '<S205>:10' */
                /* '<S205>:24:1' sf_internal_predicateOutput = count < nSleepFailMax_C && ... */
                /* '<S205>:24:2' waitTime(true) > TiReSleep_C; */
                if (EFuse_Ctr_Fuse07SleepRetryCount <
                    Rte_CData_EFuse_nSleepFailMax_C()) {
                  /* Simulink Function 'waitTime': '<S205>:72' */
                  EFuse_Ctrl_B.En_o = true;

                  /* Outputs for Function Call SubSystem: '<S205>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_o, &EFuse_Ctrl_B.Switch_d,
                                      &EFuse_Ctrl_DW.waitTime_e);

                  /* End of Outputs for SubSystem: '<S205>/waitTime' */
                  rtb_Switch_hs = (EFuse_Ctrl_B.Switch_d >
                                   Rte_CData_EFuse_tiSleepFailRetry_C());
                } else {
                  rtb_Switch_hs = false;
                }

                if (rtb_Switch_hs) {
                  /* Transition: '<S205>:24' */
                  EFuse_Ctrl_DW.is_SleepRetry_h = EFuse_Ctrl_IN_Retry;

                  /* Entry 'Retry': '<S205>:15' */
                  /* '<S205>:15:3' stFuse = uint8(7); */
                  EFuse_Ctrl_stFuse07 = 7U;

                  /* '<S205>:15:4' bAllwSleep = true; */
                  EFuse_Ctrl_flgAllwSleep07 = true;

                  /* '<S205>:15:5' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S205>:72' */
                  EFuse_Ctrl_B.En_o = false;

                  /* Outputs for Function Call SubSystem: '<S205>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_o, &EFuse_Ctrl_B.Switch_d,
                                      &EFuse_Ctrl_DW.waitTime_e);

                  /* End of Outputs for SubSystem: '<S205>/waitTime' */
                }
              } else {
                EFuse_Ctrl_stFuse07 = 7U;
                EFuse_Ctrl_flgAllwSleep07 = true;

                /* During 'Retry': '<S205>:15' */
                /* '<S205>:26:1' sf_internal_predicateOutput = flgSleepFail; */
                if (rtb_Switch_je) {
                  /* Transition: '<S205>:26' */
                  EFuse_Ctrl_DW.is_SleepRetry_h = EFuse_Ctrl_IN_FailCounter;

                  /* Entry 'FailCounter': '<S205>:10' */
                  /* '<S205>:10:3' stFuse = uint8(6); */
                  EFuse_Ctrl_stFuse07 = 6U;

                  /* '<S205>:10:4' bAllwSleep = false; */
                  EFuse_Ctrl_flgAllwSleep07 = false;

                  /* '<S205>:10:5' count = count + uint8(1); */
                  EFuse_Ctr_Fuse07SleepRetryCount = Mfx_Add_u8u8_u8
                    (EFuse_Ctr_Fuse07SleepRetryCount, 1U);

                  /* '<S205>:10:6' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S205>:72' */
                  EFuse_Ctrl_B.En_o = false;

                  /* Outputs for Function Call SubSystem: '<S205>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_o, &EFuse_Ctrl_B.Switch_d,
                                      &EFuse_Ctrl_DW.waitTime_e);

                  /* End of Outputs for SubSystem: '<S205>/waitTime' */
                } else {
                  /* '<S205>:28:1' sf_internal_predicateOutput = waitTime(true) > TiReSleepDiag_C; */
                  /* Simulink Function 'waitTime': '<S205>:72' */
                  EFuse_Ctrl_B.En_o = true;

                  /* Outputs for Function Call SubSystem: '<S205>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_o, &EFuse_Ctrl_B.Switch_d,
                                      &EFuse_Ctrl_DW.waitTime_e);

                  /* End of Outputs for SubSystem: '<S205>/waitTime' */
                  if (EFuse_Ctrl_B.Switch_d > Rte_CData_EFuse_tiSleepFailToNrm_C
                      ()) {
                    /* Transition: '<S205>:28' */
                    EFuse_Ctrl_DW.is_SleepRetry_h =
                      EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                    EFuse_Ctrl_DW.is_ECUSleep_n = EFuse_Ctrl_IN_NormSleep;

                    /* Entry 'NormSleep': '<S205>:13' */
                    /* '<S205>:13:3' stFuse = uint8(4); */
                    EFuse_Ctrl_stFuse07 = 4U;

                    /* '<S205>:13:4' bAllwSleep = true; */
                    EFuse_Ctrl_flgAllwSleep07 = true;

                    /* '<S205>:13:5' bSleepFail = false; */
                    /* '<S205>:13:6' waitTime(false); */
                    /* Simulink Function 'waitTime': '<S205>:72' */
                    EFuse_Ctrl_B.En_o = false;

                    /* Outputs for Function Call SubSystem: '<S205>/waitTime' */
                    EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_o,
                                        &EFuse_Ctrl_B.Switch_d,
                                        &EFuse_Ctrl_DW.waitTime_e);

                    /* End of Outputs for SubSystem: '<S205>/waitTime' */
                  }
                }
              }
              break;
            }
          }
        }
        break;

       case EFuse_Ctrl_IN_ECUWork:
        /* During 'ECUWork': '<S205>:63' */
        switch (EFuse_Ctrl_DW.is_ECUWork_g) {
         case EFuse_Ctrl_IN_NormWork:
          EFuse_Ctrl_stFuse07 = 1U;
          EFuse_Ctrl_flgAllwSleep07 = false;

          /* During 'NormWork': '<S205>:3' */
          /* '<S205>:38:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S205>:38' */
            EFuse_Ctrl_DW.is_ECUWork_g = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c6_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S205>:7' */
            /* '<S205>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse07 = 2U;

            /* '<S205>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep07 = true;

            /* '<S205>:7:5' bSWPrt = true; */
          } else {
            /* '<S205>:20:1' sf_internal_predicateOutput = flgPreSleep; */
            if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val()) {
              /* Transition: '<S205>:20' */
              EFuse_Ctrl_DW.is_ECUWork_g = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
              EFuse_Ctrl_DW.is_c6_EFuse_Ctrl = EFuse_Ctrl_IN_ECUSleep;
              EFuse_Ctrl_DW.is_ECUSleep_n = EFuse_Ctrl_IN_NormSleep;

              /* Entry 'NormSleep': '<S205>:13' */
              /* '<S205>:13:3' stFuse = uint8(4); */
              EFuse_Ctrl_stFuse07 = 4U;

              /* '<S205>:13:4' bAllwSleep = true; */
              EFuse_Ctrl_flgAllwSleep07 = true;

              /* '<S205>:13:5' bSleepFail = false; */
              /* '<S205>:13:6' waitTime(false); */
              /* Simulink Function 'waitTime': '<S205>:72' */
              EFuse_Ctrl_B.En_o = false;

              /* Outputs for Function Call SubSystem: '<S205>/waitTime' */
              EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_o, &EFuse_Ctrl_B.Switch_d,
                                  &EFuse_Ctrl_DW.waitTime_e);

              /* End of Outputs for SubSystem: '<S205>/waitTime' */
            }
          }
          break;

         case EFuse_Ctrl_IN_PreCharge:
          EFuse_Ctrl_stFuse07 = 3U;
          EFuse_Ctrl_flgAllwSleep07 = false;

          /* During 'PreCharge': '<S205>:100' */
          /* '<S205>:103:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
          /* '<S205>:103:2'  && ~flgPreChrgSucc; */
          /* Simulink Function 'waitTime': '<S205>:72' */
          EFuse_Ctrl_B.En_o = true;

          /* Outputs for Function Call SubSystem: '<S205>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_o, &EFuse_Ctrl_B.Switch_d,
                              &EFuse_Ctrl_DW.waitTime_e);

          /* End of Outputs for SubSystem: '<S205>/waitTime' */
          if ((EFuse_Ctrl_B.Switch_d > 2000U) && (!rtb_Switch_hs)) {
            /* Transition: '<S205>:103' */
            EFuse_Ctrl_DW.is_ECUWork_g = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c6_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S205>:7' */
            /* '<S205>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse07 = 2U;

            /* '<S205>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep07 = true;

            /* '<S205>:7:5' bSWPrt = true; */
          } else {
            /* '<S205>:101:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
            /* '<S205>:101:2'  && flgPreChrgSucc; */
            /* Simulink Function 'waitTime': '<S205>:72' */
            EFuse_Ctrl_B.En_o = true;

            /* Outputs for Function Call SubSystem: '<S205>/waitTime' */
            EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_o, &EFuse_Ctrl_B.Switch_d,
                                &EFuse_Ctrl_DW.waitTime_e);

            /* End of Outputs for SubSystem: '<S205>/waitTime' */
            if ((EFuse_Ctrl_B.Switch_d > 2000U) && rtb_Switch_hs) {
              /* Transition: '<S205>:101' */
              EFuse_Ctrl_DW.is_ECUWork_g = EFuse_Ctrl_IN_NormWork;

              /* Entry 'NormWork': '<S205>:3' */
              /* '<S205>:3:3' stFuse = uint8(1); */
              EFuse_Ctrl_stFuse07 = 1U;

              /* '<S205>:3:4' bAllwSleep = false; */
              EFuse_Ctrl_flgAllwSleep07 = false;

              /* '<S205>:3:5' bSleepFail = false; */
              /* '<S205>:3:6' count = uint8(0); */
              EFuse_Ctr_Fuse07SleepRetryCount = 0U;

              /* '<S205>:3:7' bSWPrt = false; */
            }
          }
          break;

         default:
          /* During 'StandBy': '<S205>:1' */
          /* Transition: '<S205>:4' */
          EFuse_Ctrl_DW.is_ECUWork_g = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S205>:3' */
          /* '<S205>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse07 = 1U;

          /* '<S205>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep07 = false;

          /* '<S205>:3:5' bSleepFail = false; */
          /* '<S205>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse07SleepRetryCount = 0U;

          /* '<S205>:3:7' bSWPrt = false; */
          break;
        }
        break;

       default:
        EFuse_Ctrl_stFuse07 = 2U;
        EFuse_Ctrl_flgAllwSleep07 = true;

        /* During 'SWProtect': '<S205>:7' */
        /* '<S205>:34:1' sf_internal_predicateOutput = flgReset; */
        if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPwrModChng_Val()) {
          /* Transition: '<S205>:34' */
          EFuse_Ctrl_DW.is_c6_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_g = EFuse_Ctrl_IN_PreCharge;

          /* Entry 'PreCharge': '<S205>:100' */
          /* '<S205>:100:3' stFuse = uint8(3); */
          EFuse_Ctrl_stFuse07 = 3U;

          /* '<S205>:100:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep07 = false;

          /* '<S205>:100:5' bSleepFail = false; */
          /* '<S205>:100:6' waitTime(false); */
          /* Simulink Function 'waitTime': '<S205>:72' */
          EFuse_Ctrl_B.En_o = false;

          /* Outputs for Function Call SubSystem: '<S205>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_o, &EFuse_Ctrl_B.Switch_d,
                              &EFuse_Ctrl_DW.waitTime_e);

          /* End of Outputs for SubSystem: '<S205>/waitTime' */
        }
        break;
      }
    }

    /* End of Chart: '<S181>/Chart' */

    /* DataStoreWrite: '<S181>/Data Store Write' */
    EFuse_C_Fuse07SleepRetryCount_p = EFuse_Ctr_Fuse07SleepRetryCount;
  }

  /* End of Outputs for SubSystem: '<S4>/FUSE07' */

  /* Switch: '<S6>/Switch7' incorporates:
   *  Constant: '<S6>/PA_EFuse_ActUseFuseChInfo_C1'
   *  DataTypeConversion: '<S268>/Extract Desired Bits'
   */
  EFuse_Ctrl_EnFuse08 = (((uint8)(Rte_CData_EFuse_ActUseFuseChInfo_C() >> 8) &
    1U) != 0U);

  /* Outputs for Enabled SubSystem: '<S4>/FUSE08' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (EFuse_Ctrl_EnFuse08) {
    /* Switch: '<S222>/Switch' incorporates:
     *  DataTypeConversion: '<S228>/Extract Desired Bits'
     */
    rtb_Switch_hs = (((uint8)(tmpIRead[7] >> 4) & 1U) != 0U);

    /* Switch: '<S223>/Switch' incorporates:
     *  DataTypeConversion: '<S229>/Extract Desired Bits'
     */
    rtb_Switch_kj = (((uint8)(tmpIRead[7] >> 2) & 1U) != 0U);

    /* Switch: '<S212>/Switch4' incorporates:
     *  Constant: '<S212>/Constant9'
     *  Constant: '<S212>/PA_EFuse_SWPrtSel_C4'
     *  DataTypeConversion: '<S217>/Extract Desired Bits'
     *  DataTypeConversion: '<S230>/Extract Desired Bits'
     *  Switch: '<S224>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 2 & 1U) != 0U) {
      tmp_0 = ((tmpIRead[7] >> 24 & 1U) != 0U);
    } else {
      tmp_0 = false;
    }

    /* End of Switch: '<S212>/Switch4' */

    /* Switch: '<S212>/Switch1' incorporates:
     *  Constant: '<S212>/Constant1'
     *  Constant: '<S212>/PA_EFuse_SWPrtSel_C1'
     *  DataTypeConversion: '<S218>/Extract Desired Bits'
     *  DataTypeConversion: '<S226>/Extract Desired Bits'
     *  Switch: '<S220>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 3 & 1U) != 0U) {
      rtb_Switch4_ez = (((uint8)(tmpIRead[7] >> 17) & 1U) != 0U);
    } else {
      rtb_Switch4_ez = false;
    }

    /* End of Switch: '<S212>/Switch1' */

    /* Logic: '<S212>/Logical Operator' incorporates:
     *  Constant: '<S212>/PA_EFuse_SWPrtSel_C2'
     *  Constant: '<S212>/PA_EFuse_SWPrtSel_C3'
     *  DataTypeConversion: '<S215>/Extract Desired Bits'
     *  DataTypeConversion: '<S216>/Extract Desired Bits'
     *  Switch: '<S212>/Switch2'
     *  Switch: '<S212>/Switch3'
     */
    rtb_Switch4_ez = ((((Rte_CData_EFuse_SWPrtSel_C() & 1U) != 0U) &&
                       rtb_Switch_hs) || ((((uint32)Rte_CData_EFuse_SWPrtSel_C()
      >> 1 & 1U) != 0U) && rtb_Switch_kj) || tmp_0 || rtb_Switch4_ez);

    /* Switch: '<S225>/Switch' incorporates:
     *  Constant: '<S225>/Constant'
     *  RelationalOperator: '<S225>/Relational Operator'
     */
    rtb_Switch_je = (tmpIRead_0[7] == 3);

    /* Logic: '<S209>/Logical Operator1' incorporates:
     *  Logic: '<S209>/Logical Operator'
     */
    rtb_Switch_hs = ((!rtb_Switch_hs) && (!rtb_Switch_kj));

    /* Chart: '<S208>/Chart' incorporates:
     *  Constant: '<S208>/Constant'
     *  Constant: '<S231>/PA_EFuse_EnaSleepFailRetry_C'
     *  Constant: '<S231>/PA_EFuse_nSleepFailMax_C'
     *  Constant: '<S231>/PA_EFuse_tiSleepFailRetry_C'
     *  Constant: '<S231>/PA_EFuse_tiSleepFailToNrm_C'
     *  Inport: '<Root>/EFuse_flgPreSleep_Val'
     *  Inport: '<Root>/EFuse_flgPwrModChng_Val'
     */
    /* Gateway: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE08/CtrlChart/Chart */
    /* During: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE08/CtrlChart/Chart */
    if (EFuse_Ctrl_DW.is_active_c7_EFuse_Ctrl == 0U) {
      /* Entry: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE08/CtrlChart/Chart */
      EFuse_Ctrl_DW.is_active_c7_EFuse_Ctrl = 1U;

      /* Entry Internal: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE08/CtrlChart/Chart */
      /* Transition: '<S232>:2' */
      EFuse_Ctrl_DW.is_c7_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
      EFuse_Ctrl_DW.is_ECUWork_i = EFuse_Ctrl_IN_StandBy;

      /* Entry 'StandBy': '<S232>:1' */
      /* '<S232>:1:3' stFuse = uint8(0); */
      EFuse_Ctrl_stFuse08 = 0U;

      /* '<S232>:1:4' bAllwSleep = false; */
      EFuse_Ctrl_flgAllwSleep08 = false;

      /* '<S232>:1:5' bSleepFail = false; */
      /* '<S232>:1:6' bSWPrt = false; */
    } else {
      switch (EFuse_Ctrl_DW.is_c7_EFuse_Ctrl) {
       case EFuse_Ctrl_IN_ECUSleep:
        /* Switch: '<S213>/Switch' incorporates:
         *  Constant: '<S213>/Constant1'
         *  Constant: '<S213>/PA_EFuse_ReWrkSel_C'
         *  DataTypeConversion: '<S219>/Extract Desired Bits'
         *  Inport: '<Root>/EFuse_flgPreSleep_Val'
         *  Logic: '<S213>/Logical Operator1'
         */
        /* During 'ECUSleep': '<S232>:64' */
        /* '<S232>:35:1' sf_internal_predicateOutput = flgReWrk; */
        if ((Rte_CData_EFuse_ReWrkSel_C() & 1U) != 0U) {
          tmp_0 = !Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val();
        } else {
          tmp_0 = false;
        }

        /* End of Switch: '<S213>/Switch' */
        if (tmp_0) {
          /* Transition: '<S232>:35' */
          /* Exit Internal 'ECUSleep': '<S232>:64' */
          /* Exit Internal 'SleepRetry': '<S232>:14' */
          EFuse_Ctrl_DW.is_SleepRetry_p = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_ECUSleep_f = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_c7_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_i = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S232>:3' */
          /* '<S232>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse08 = 1U;

          /* '<S232>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep08 = false;

          /* '<S232>:3:5' bSleepFail = false; */
          /* '<S232>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse08SleepRetryCount = 0U;

          /* '<S232>:3:7' bSWPrt = false; */
        } else {
          /* '<S232>:80:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S232>:80' */
            /* Exit Internal 'ECUSleep': '<S232>:64' */
            /* Exit Internal 'SleepRetry': '<S232>:14' */
            EFuse_Ctrl_DW.is_SleepRetry_p = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_ECUSleep_f = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c7_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S232>:7' */
            /* '<S232>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse08 = 2U;

            /* '<S232>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep08 = true;

            /* '<S232>:7:5' bSWPrt = true; */
          } else {
            switch (EFuse_Ctrl_DW.is_ECUSleep_f) {
             case EFuse_Ctrl_IN_NormSleep:
              EFuse_Ctrl_stFuse08 = 4U;
              EFuse_Ctrl_flgAllwSleep08 = true;

              /* During 'NormSleep': '<S232>:13' */
              /* '<S232>:21:1' sf_internal_predicateOutput = flgSleepFail; */
              if (rtb_Switch_je) {
                /* Transition: '<S232>:21' */
                EFuse_Ctrl_DW.is_ECUSleep_f = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S232>:18' */
                /* '<S232>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse08 = 5U;

                /* '<S232>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep08 = true;

                /* '<S232>:18:5' bSleepFail = true; */
              }
              break;

             case EFuse_Ctrl_IN_SleepFail:
              EFuse_Ctrl_stFuse08 = 5U;
              EFuse_Ctrl_flgAllwSleep08 = true;

              /* During 'SleepFail': '<S232>:18' */
              /* '<S232>:22:1' sf_internal_predicateOutput = EnSleepFailRetry && ... */
              /* '<S232>:22:2' count < nSleepFailMax_C; */
              if (Rte_CData_EFuse_EnSleepFailRetry_C() &&
                  (EFuse_Ctr_Fuse08SleepRetryCount <
                   Rte_CData_EFuse_nSleepFailMax_C())) {
                /* Transition: '<S232>:22' */
                EFuse_Ctrl_DW.is_ECUSleep_f = EFuse_Ctrl_IN_SleepRetry;

                /* Entry Internal 'SleepRetry': '<S232>:14' */
                /* Transition: '<S232>:23' */
                EFuse_Ctrl_DW.is_SleepRetry_p = EFuse_Ctrl_IN_FailCounter;

                /* Entry 'FailCounter': '<S232>:10' */
                /* '<S232>:10:3' stFuse = uint8(6); */
                EFuse_Ctrl_stFuse08 = 6U;

                /* '<S232>:10:4' bAllwSleep = false; */
                EFuse_Ctrl_flgAllwSleep08 = false;

                /* '<S232>:10:5' count = count + uint8(1); */
                EFuse_Ctr_Fuse08SleepRetryCount = Mfx_Add_u8u8_u8
                  (EFuse_Ctr_Fuse08SleepRetryCount, 1U);

                /* '<S232>:10:6' waitTime(false); */
                /* Simulink Function 'waitTime': '<S232>:72' */
                EFuse_Ctrl_B.En_p = false;

                /* Outputs for Function Call SubSystem: '<S232>/waitTime' */
                EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_p, &EFuse_Ctrl_B.Switch_k,
                                    &EFuse_Ctrl_DW.waitTime_ne);

                /* End of Outputs for SubSystem: '<S232>/waitTime' */
              }
              break;

             default:
              /* During 'SleepRetry': '<S232>:14' */
              /* '<S232>:27:1' sf_internal_predicateOutput = count >= nSleepFailMax_C; */
              if (EFuse_Ctr_Fuse08SleepRetryCount >=
                  Rte_CData_EFuse_nSleepFailMax_C()) {
                /* Transition: '<S232>:27' */
                /* Exit Internal 'SleepRetry': '<S232>:14' */
                EFuse_Ctrl_DW.is_SleepRetry_p = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                EFuse_Ctrl_DW.is_ECUSleep_f = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S232>:18' */
                /* '<S232>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse08 = 5U;

                /* '<S232>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep08 = true;

                /* '<S232>:18:5' bSleepFail = true; */
              } else if (EFuse_Ctrl_DW.is_SleepRetry_p ==
                         EFuse_Ctrl_IN_FailCounter) {
                EFuse_Ctrl_stFuse08 = 6U;
                EFuse_Ctrl_flgAllwSleep08 = false;

                /* During 'FailCounter': '<S232>:10' */
                /* '<S232>:24:1' sf_internal_predicateOutput = count < nSleepFailMax_C && ... */
                /* '<S232>:24:2' waitTime(true) > TiReSleep_C; */
                if (EFuse_Ctr_Fuse08SleepRetryCount <
                    Rte_CData_EFuse_nSleepFailMax_C()) {
                  /* Simulink Function 'waitTime': '<S232>:72' */
                  EFuse_Ctrl_B.En_p = true;

                  /* Outputs for Function Call SubSystem: '<S232>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_p, &EFuse_Ctrl_B.Switch_k,
                                      &EFuse_Ctrl_DW.waitTime_ne);

                  /* End of Outputs for SubSystem: '<S232>/waitTime' */
                  rtb_Switch_hs = (EFuse_Ctrl_B.Switch_k >
                                   Rte_CData_EFuse_tiSleepFailRetry_C());
                } else {
                  rtb_Switch_hs = false;
                }

                if (rtb_Switch_hs) {
                  /* Transition: '<S232>:24' */
                  EFuse_Ctrl_DW.is_SleepRetry_p = EFuse_Ctrl_IN_Retry;

                  /* Entry 'Retry': '<S232>:15' */
                  /* '<S232>:15:3' stFuse = uint8(7); */
                  EFuse_Ctrl_stFuse08 = 7U;

                  /* '<S232>:15:4' bAllwSleep = true; */
                  EFuse_Ctrl_flgAllwSleep08 = true;

                  /* '<S232>:15:5' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S232>:72' */
                  EFuse_Ctrl_B.En_p = false;

                  /* Outputs for Function Call SubSystem: '<S232>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_p, &EFuse_Ctrl_B.Switch_k,
                                      &EFuse_Ctrl_DW.waitTime_ne);

                  /* End of Outputs for SubSystem: '<S232>/waitTime' */
                }
              } else {
                EFuse_Ctrl_stFuse08 = 7U;
                EFuse_Ctrl_flgAllwSleep08 = true;

                /* During 'Retry': '<S232>:15' */
                /* '<S232>:26:1' sf_internal_predicateOutput = flgSleepFail; */
                if (rtb_Switch_je) {
                  /* Transition: '<S232>:26' */
                  EFuse_Ctrl_DW.is_SleepRetry_p = EFuse_Ctrl_IN_FailCounter;

                  /* Entry 'FailCounter': '<S232>:10' */
                  /* '<S232>:10:3' stFuse = uint8(6); */
                  EFuse_Ctrl_stFuse08 = 6U;

                  /* '<S232>:10:4' bAllwSleep = false; */
                  EFuse_Ctrl_flgAllwSleep08 = false;

                  /* '<S232>:10:5' count = count + uint8(1); */
                  EFuse_Ctr_Fuse08SleepRetryCount = Mfx_Add_u8u8_u8
                    (EFuse_Ctr_Fuse08SleepRetryCount, 1U);

                  /* '<S232>:10:6' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S232>:72' */
                  EFuse_Ctrl_B.En_p = false;

                  /* Outputs for Function Call SubSystem: '<S232>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_p, &EFuse_Ctrl_B.Switch_k,
                                      &EFuse_Ctrl_DW.waitTime_ne);

                  /* End of Outputs for SubSystem: '<S232>/waitTime' */
                } else {
                  /* '<S232>:28:1' sf_internal_predicateOutput = waitTime(true) > TiReSleepDiag_C; */
                  /* Simulink Function 'waitTime': '<S232>:72' */
                  EFuse_Ctrl_B.En_p = true;

                  /* Outputs for Function Call SubSystem: '<S232>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_p, &EFuse_Ctrl_B.Switch_k,
                                      &EFuse_Ctrl_DW.waitTime_ne);

                  /* End of Outputs for SubSystem: '<S232>/waitTime' */
                  if (EFuse_Ctrl_B.Switch_k > Rte_CData_EFuse_tiSleepFailToNrm_C
                      ()) {
                    /* Transition: '<S232>:28' */
                    EFuse_Ctrl_DW.is_SleepRetry_p =
                      EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                    EFuse_Ctrl_DW.is_ECUSleep_f = EFuse_Ctrl_IN_NormSleep;

                    /* Entry 'NormSleep': '<S232>:13' */
                    /* '<S232>:13:3' stFuse = uint8(4); */
                    EFuse_Ctrl_stFuse08 = 4U;

                    /* '<S232>:13:4' bAllwSleep = true; */
                    EFuse_Ctrl_flgAllwSleep08 = true;

                    /* '<S232>:13:5' bSleepFail = false; */
                    /* '<S232>:13:6' waitTime(false); */
                    /* Simulink Function 'waitTime': '<S232>:72' */
                    EFuse_Ctrl_B.En_p = false;

                    /* Outputs for Function Call SubSystem: '<S232>/waitTime' */
                    EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_p,
                                        &EFuse_Ctrl_B.Switch_k,
                                        &EFuse_Ctrl_DW.waitTime_ne);

                    /* End of Outputs for SubSystem: '<S232>/waitTime' */
                  }
                }
              }
              break;
            }
          }
        }
        break;

       case EFuse_Ctrl_IN_ECUWork:
        /* During 'ECUWork': '<S232>:63' */
        switch (EFuse_Ctrl_DW.is_ECUWork_i) {
         case EFuse_Ctrl_IN_NormWork:
          EFuse_Ctrl_stFuse08 = 1U;
          EFuse_Ctrl_flgAllwSleep08 = false;

          /* During 'NormWork': '<S232>:3' */
          /* '<S232>:38:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S232>:38' */
            EFuse_Ctrl_DW.is_ECUWork_i = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c7_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S232>:7' */
            /* '<S232>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse08 = 2U;

            /* '<S232>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep08 = true;

            /* '<S232>:7:5' bSWPrt = true; */
          } else {
            /* '<S232>:20:1' sf_internal_predicateOutput = flgPreSleep; */
            if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val()) {
              /* Transition: '<S232>:20' */
              EFuse_Ctrl_DW.is_ECUWork_i = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
              EFuse_Ctrl_DW.is_c7_EFuse_Ctrl = EFuse_Ctrl_IN_ECUSleep;
              EFuse_Ctrl_DW.is_ECUSleep_f = EFuse_Ctrl_IN_NormSleep;

              /* Entry 'NormSleep': '<S232>:13' */
              /* '<S232>:13:3' stFuse = uint8(4); */
              EFuse_Ctrl_stFuse08 = 4U;

              /* '<S232>:13:4' bAllwSleep = true; */
              EFuse_Ctrl_flgAllwSleep08 = true;

              /* '<S232>:13:5' bSleepFail = false; */
              /* '<S232>:13:6' waitTime(false); */
              /* Simulink Function 'waitTime': '<S232>:72' */
              EFuse_Ctrl_B.En_p = false;

              /* Outputs for Function Call SubSystem: '<S232>/waitTime' */
              EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_p, &EFuse_Ctrl_B.Switch_k,
                                  &EFuse_Ctrl_DW.waitTime_ne);

              /* End of Outputs for SubSystem: '<S232>/waitTime' */
            }
          }
          break;

         case EFuse_Ctrl_IN_PreCharge:
          EFuse_Ctrl_stFuse08 = 3U;
          EFuse_Ctrl_flgAllwSleep08 = false;

          /* During 'PreCharge': '<S232>:100' */
          /* '<S232>:103:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
          /* '<S232>:103:2'  && ~flgPreChrgSucc; */
          /* Simulink Function 'waitTime': '<S232>:72' */
          EFuse_Ctrl_B.En_p = true;

          /* Outputs for Function Call SubSystem: '<S232>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_p, &EFuse_Ctrl_B.Switch_k,
                              &EFuse_Ctrl_DW.waitTime_ne);

          /* End of Outputs for SubSystem: '<S232>/waitTime' */
          if ((EFuse_Ctrl_B.Switch_k > 2000U) && (!rtb_Switch_hs)) {
            /* Transition: '<S232>:103' */
            EFuse_Ctrl_DW.is_ECUWork_i = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c7_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S232>:7' */
            /* '<S232>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse08 = 2U;

            /* '<S232>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep08 = true;

            /* '<S232>:7:5' bSWPrt = true; */
          } else {
            /* '<S232>:101:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
            /* '<S232>:101:2'  && flgPreChrgSucc; */
            /* Simulink Function 'waitTime': '<S232>:72' */
            EFuse_Ctrl_B.En_p = true;

            /* Outputs for Function Call SubSystem: '<S232>/waitTime' */
            EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_p, &EFuse_Ctrl_B.Switch_k,
                                &EFuse_Ctrl_DW.waitTime_ne);

            /* End of Outputs for SubSystem: '<S232>/waitTime' */
            if ((EFuse_Ctrl_B.Switch_k > 2000U) && rtb_Switch_hs) {
              /* Transition: '<S232>:101' */
              EFuse_Ctrl_DW.is_ECUWork_i = EFuse_Ctrl_IN_NormWork;

              /* Entry 'NormWork': '<S232>:3' */
              /* '<S232>:3:3' stFuse = uint8(1); */
              EFuse_Ctrl_stFuse08 = 1U;

              /* '<S232>:3:4' bAllwSleep = false; */
              EFuse_Ctrl_flgAllwSleep08 = false;

              /* '<S232>:3:5' bSleepFail = false; */
              /* '<S232>:3:6' count = uint8(0); */
              EFuse_Ctr_Fuse08SleepRetryCount = 0U;

              /* '<S232>:3:7' bSWPrt = false; */
            }
          }
          break;

         default:
          /* During 'StandBy': '<S232>:1' */
          /* Transition: '<S232>:4' */
          EFuse_Ctrl_DW.is_ECUWork_i = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S232>:3' */
          /* '<S232>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse08 = 1U;

          /* '<S232>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep08 = false;

          /* '<S232>:3:5' bSleepFail = false; */
          /* '<S232>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse08SleepRetryCount = 0U;

          /* '<S232>:3:7' bSWPrt = false; */
          break;
        }
        break;

       default:
        EFuse_Ctrl_stFuse08 = 2U;
        EFuse_Ctrl_flgAllwSleep08 = true;

        /* During 'SWProtect': '<S232>:7' */
        /* '<S232>:34:1' sf_internal_predicateOutput = flgReset; */
        if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPwrModChng_Val()) {
          /* Transition: '<S232>:34' */
          EFuse_Ctrl_DW.is_c7_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork_i = EFuse_Ctrl_IN_PreCharge;

          /* Entry 'PreCharge': '<S232>:100' */
          /* '<S232>:100:3' stFuse = uint8(3); */
          EFuse_Ctrl_stFuse08 = 3U;

          /* '<S232>:100:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep08 = false;

          /* '<S232>:100:5' bSleepFail = false; */
          /* '<S232>:100:6' waitTime(false); */
          /* Simulink Function 'waitTime': '<S232>:72' */
          EFuse_Ctrl_B.En_p = false;

          /* Outputs for Function Call SubSystem: '<S232>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En_p, &EFuse_Ctrl_B.Switch_k,
                              &EFuse_Ctrl_DW.waitTime_ne);

          /* End of Outputs for SubSystem: '<S232>/waitTime' */
        }
        break;
      }
    }

    /* End of Chart: '<S208>/Chart' */

    /* DataStoreWrite: '<S208>/Data Store Write' */
    EFuse_C_Fuse08SleepRetryCount_l = EFuse_Ctr_Fuse08SleepRetryCount;
  }

  /* End of Outputs for SubSystem: '<S4>/FUSE08' */

  /* Switch: '<S6>/Switch8' incorporates:
   *  Constant: '<S6>/PA_EFuse_ActUseFuseChInfo_C1'
   *  DataTypeConversion: '<S269>/Extract Desired Bits'
   */
  EFuse_Ctrl_EnFuse09 = (((uint8)(Rte_CData_EFuse_ActUseFuseChInfo_C() >> 9) &
    1U) != 0U);

  /* Outputs for Enabled SubSystem: '<S4>/FUSE09' incorporates:
   *  EnablePort: '<S17>/Enable'
   */
  if (EFuse_Ctrl_EnFuse09) {
    /* Switch: '<S249>/Switch' incorporates:
     *  DataTypeConversion: '<S255>/Extract Desired Bits'
     */
    rtb_Switch_hs = (((uint8)(tmpIRead[8] >> 4) & 1U) != 0U);

    /* Switch: '<S250>/Switch' incorporates:
     *  DataTypeConversion: '<S256>/Extract Desired Bits'
     */
    rtb_Switch_kj = (((uint8)(tmpIRead[8] >> 2) & 1U) != 0U);

    /* Switch: '<S239>/Switch4' incorporates:
     *  Constant: '<S239>/Constant9'
     *  Constant: '<S239>/PA_EFuse_SWPrtSel_C4'
     *  DataTypeConversion: '<S244>/Extract Desired Bits'
     *  DataTypeConversion: '<S257>/Extract Desired Bits'
     *  Switch: '<S251>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 2 & 1U) != 0U) {
      tmp_0 = ((tmpIRead[8] >> 24 & 1U) != 0U);
    } else {
      tmp_0 = false;
    }

    /* End of Switch: '<S239>/Switch4' */

    /* Switch: '<S239>/Switch1' incorporates:
     *  Constant: '<S239>/Constant1'
     *  Constant: '<S239>/PA_EFuse_SWPrtSel_C1'
     *  DataTypeConversion: '<S245>/Extract Desired Bits'
     *  DataTypeConversion: '<S253>/Extract Desired Bits'
     *  Switch: '<S247>/Switch'
     */
    if (((uint32)Rte_CData_EFuse_SWPrtSel_C() >> 3 & 1U) != 0U) {
      rtb_Switch4_ez = (((uint8)(tmpIRead[8] >> 17) & 1U) != 0U);
    } else {
      rtb_Switch4_ez = false;
    }

    /* End of Switch: '<S239>/Switch1' */

    /* Logic: '<S239>/Logical Operator' incorporates:
     *  Constant: '<S239>/PA_EFuse_SWPrtSel_C2'
     *  Constant: '<S239>/PA_EFuse_SWPrtSel_C3'
     *  DataTypeConversion: '<S242>/Extract Desired Bits'
     *  DataTypeConversion: '<S243>/Extract Desired Bits'
     *  Switch: '<S239>/Switch2'
     *  Switch: '<S239>/Switch3'
     */
    rtb_Switch4_ez = ((((Rte_CData_EFuse_SWPrtSel_C() & 1U) != 0U) &&
                       rtb_Switch_hs) || ((((uint32)Rte_CData_EFuse_SWPrtSel_C()
      >> 1 & 1U) != 0U) && rtb_Switch_kj) || tmp_0 || rtb_Switch4_ez);

    /* Switch: '<S252>/Switch' incorporates:
     *  Constant: '<S252>/Constant'
     *  RelationalOperator: '<S252>/Relational Operator'
     */
    rtb_Switch_je = (tmpIRead_0[8] == 3);

    /* Logic: '<S236>/Logical Operator1' incorporates:
     *  Logic: '<S236>/Logical Operator'
     */
    rtb_Switch_hs = ((!rtb_Switch_hs) && (!rtb_Switch_kj));

    /* Chart: '<S235>/Chart' incorporates:
     *  Constant: '<S235>/Constant'
     *  Constant: '<S258>/PA_EFuse_EnaSleepFailRetry_C'
     *  Constant: '<S258>/PA_EFuse_nSleepFailMax_C'
     *  Constant: '<S258>/PA_EFuse_tiSleepFailRetry_C'
     *  Constant: '<S258>/PA_EFuse_tiSleepFailToNrm_C'
     *  Inport: '<Root>/EFuse_flgPreSleep_Val'
     *  Inport: '<Root>/EFuse_flgPwrModChng_Val'
     */
    /* Gateway: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE09/CtrlChart/Chart */
    /* During: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE09/CtrlChart/Chart */
    if (EFuse_Ctrl_DW.is_active_c8_EFuse_Ctrl == 0U) {
      /* Entry: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE09/CtrlChart/Chart */
      EFuse_Ctrl_DW.is_active_c8_EFuse_Ctrl = 1U;

      /* Entry Internal: EFuse_Ctrl_Runnable_10ms_sys/CtrlStateFlow/FUSE09/CtrlChart/Chart */
      /* Transition: '<S259>:2' */
      EFuse_Ctrl_DW.is_c8_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
      EFuse_Ctrl_DW.is_ECUWork = EFuse_Ctrl_IN_StandBy;

      /* Entry 'StandBy': '<S259>:1' */
      /* '<S259>:1:3' stFuse = uint8(0); */
      EFuse_Ctrl_stFuse09 = 0U;

      /* '<S259>:1:4' bAllwSleep = false; */
      EFuse_Ctrl_flgAllwSleep09 = false;

      /* '<S259>:1:5' bSleepFail = false; */
      /* '<S259>:1:6' bSWPrt = false; */
    } else {
      switch (EFuse_Ctrl_DW.is_c8_EFuse_Ctrl) {
       case EFuse_Ctrl_IN_ECUSleep:
        /* Switch: '<S240>/Switch' incorporates:
         *  Constant: '<S240>/Constant1'
         *  Constant: '<S240>/PA_EFuse_ReWrkSel_C'
         *  DataTypeConversion: '<S246>/Extract Desired Bits'
         *  Inport: '<Root>/EFuse_flgPreSleep_Val'
         *  Logic: '<S240>/Logical Operator1'
         */
        /* During 'ECUSleep': '<S259>:64' */
        /* '<S259>:35:1' sf_internal_predicateOutput = flgReWrk; */
        if ((Rte_CData_EFuse_ReWrkSel_C() & 1U) != 0U) {
          tmp_0 = !Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val();
        } else {
          tmp_0 = false;
        }

        /* End of Switch: '<S240>/Switch' */
        if (tmp_0) {
          /* Transition: '<S259>:35' */
          /* Exit Internal 'ECUSleep': '<S259>:64' */
          /* Exit Internal 'SleepRetry': '<S259>:14' */
          EFuse_Ctrl_DW.is_SleepRetry = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_ECUSleep = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
          EFuse_Ctrl_DW.is_c8_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S259>:3' */
          /* '<S259>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse09 = 1U;

          /* '<S259>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep09 = false;

          /* '<S259>:3:5' bSleepFail = false; */
          /* '<S259>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse09SleepRetryCount = 0U;

          /* '<S259>:3:7' bSWPrt = false; */
        } else {
          /* '<S259>:80:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S259>:80' */
            /* Exit Internal 'ECUSleep': '<S259>:64' */
            /* Exit Internal 'SleepRetry': '<S259>:14' */
            EFuse_Ctrl_DW.is_SleepRetry = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_ECUSleep = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c8_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S259>:7' */
            /* '<S259>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse09 = 2U;

            /* '<S259>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep09 = true;

            /* '<S259>:7:5' bSWPrt = true; */
          } else {
            switch (EFuse_Ctrl_DW.is_ECUSleep) {
             case EFuse_Ctrl_IN_NormSleep:
              EFuse_Ctrl_stFuse09 = 4U;
              EFuse_Ctrl_flgAllwSleep09 = true;

              /* During 'NormSleep': '<S259>:13' */
              /* '<S259>:21:1' sf_internal_predicateOutput = flgSleepFail; */
              if (rtb_Switch_je) {
                /* Transition: '<S259>:21' */
                EFuse_Ctrl_DW.is_ECUSleep = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S259>:18' */
                /* '<S259>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse09 = 5U;

                /* '<S259>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep09 = true;

                /* '<S259>:18:5' bSleepFail = true; */
              }
              break;

             case EFuse_Ctrl_IN_SleepFail:
              EFuse_Ctrl_stFuse09 = 5U;
              EFuse_Ctrl_flgAllwSleep09 = true;

              /* During 'SleepFail': '<S259>:18' */
              /* '<S259>:22:1' sf_internal_predicateOutput = EnSleepFailRetry && ... */
              /* '<S259>:22:2' count < nSleepFailMax_C; */
              if (Rte_CData_EFuse_EnSleepFailRetry_C() &&
                  (EFuse_Ctr_Fuse09SleepRetryCount <
                   Rte_CData_EFuse_nSleepFailMax_C())) {
                /* Transition: '<S259>:22' */
                EFuse_Ctrl_DW.is_ECUSleep = EFuse_Ctrl_IN_SleepRetry;

                /* Entry Internal 'SleepRetry': '<S259>:14' */
                /* Transition: '<S259>:23' */
                EFuse_Ctrl_DW.is_SleepRetry = EFuse_Ctrl_IN_FailCounter;

                /* Entry 'FailCounter': '<S259>:10' */
                /* '<S259>:10:3' stFuse = uint8(6); */
                EFuse_Ctrl_stFuse09 = 6U;

                /* '<S259>:10:4' bAllwSleep = false; */
                EFuse_Ctrl_flgAllwSleep09 = false;

                /* '<S259>:10:5' count = count + uint8(1); */
                EFuse_Ctr_Fuse09SleepRetryCount = Mfx_Add_u8u8_u8
                  (EFuse_Ctr_Fuse09SleepRetryCount, 1U);

                /* '<S259>:10:6' waitTime(false); */
                /* Simulink Function 'waitTime': '<S259>:72' */
                EFuse_Ctrl_B.En = false;

                /* Outputs for Function Call SubSystem: '<S259>/waitTime' */
                EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En, &EFuse_Ctrl_B.Switch,
                                    &EFuse_Ctrl_DW.waitTime_j);

                /* End of Outputs for SubSystem: '<S259>/waitTime' */
              }
              break;

             default:
              /* During 'SleepRetry': '<S259>:14' */
              /* '<S259>:27:1' sf_internal_predicateOutput = count >= nSleepFailMax_C; */
              if (EFuse_Ctr_Fuse09SleepRetryCount >=
                  Rte_CData_EFuse_nSleepFailMax_C()) {
                /* Transition: '<S259>:27' */
                /* Exit Internal 'SleepRetry': '<S259>:14' */
                EFuse_Ctrl_DW.is_SleepRetry = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                EFuse_Ctrl_DW.is_ECUSleep = EFuse_Ctrl_IN_SleepFail;

                /* Entry 'SleepFail': '<S259>:18' */
                /* '<S259>:18:3' stFuse = uint8(5); */
                EFuse_Ctrl_stFuse09 = 5U;

                /* '<S259>:18:4' bAllwSleep = true; */
                EFuse_Ctrl_flgAllwSleep09 = true;

                /* '<S259>:18:5' bSleepFail = true; */
              } else if (EFuse_Ctrl_DW.is_SleepRetry ==
                         EFuse_Ctrl_IN_FailCounter) {
                EFuse_Ctrl_stFuse09 = 6U;
                EFuse_Ctrl_flgAllwSleep09 = false;

                /* During 'FailCounter': '<S259>:10' */
                /* '<S259>:24:1' sf_internal_predicateOutput = count < nSleepFailMax_C && ... */
                /* '<S259>:24:2' waitTime(true) > TiReSleep_C; */
                if (EFuse_Ctr_Fuse09SleepRetryCount <
                    Rte_CData_EFuse_nSleepFailMax_C()) {
                  /* Simulink Function 'waitTime': '<S259>:72' */
                  EFuse_Ctrl_B.En = true;

                  /* Outputs for Function Call SubSystem: '<S259>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En, &EFuse_Ctrl_B.Switch,
                                      &EFuse_Ctrl_DW.waitTime_j);

                  /* End of Outputs for SubSystem: '<S259>/waitTime' */
                  rtb_Switch_hs = (EFuse_Ctrl_B.Switch >
                                   Rte_CData_EFuse_tiSleepFailRetry_C());
                } else {
                  rtb_Switch_hs = false;
                }

                if (rtb_Switch_hs) {
                  /* Transition: '<S259>:24' */
                  EFuse_Ctrl_DW.is_SleepRetry = EFuse_Ctrl_IN_Retry;

                  /* Entry 'Retry': '<S259>:15' */
                  /* '<S259>:15:3' stFuse = uint8(7); */
                  EFuse_Ctrl_stFuse09 = 7U;

                  /* '<S259>:15:4' bAllwSleep = true; */
                  EFuse_Ctrl_flgAllwSleep09 = true;

                  /* '<S259>:15:5' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S259>:72' */
                  EFuse_Ctrl_B.En = false;

                  /* Outputs for Function Call SubSystem: '<S259>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En, &EFuse_Ctrl_B.Switch,
                                      &EFuse_Ctrl_DW.waitTime_j);

                  /* End of Outputs for SubSystem: '<S259>/waitTime' */
                }
              } else {
                EFuse_Ctrl_stFuse09 = 7U;
                EFuse_Ctrl_flgAllwSleep09 = true;

                /* During 'Retry': '<S259>:15' */
                /* '<S259>:26:1' sf_internal_predicateOutput = flgSleepFail; */
                if (rtb_Switch_je) {
                  /* Transition: '<S259>:26' */
                  EFuse_Ctrl_DW.is_SleepRetry = EFuse_Ctrl_IN_FailCounter;

                  /* Entry 'FailCounter': '<S259>:10' */
                  /* '<S259>:10:3' stFuse = uint8(6); */
                  EFuse_Ctrl_stFuse09 = 6U;

                  /* '<S259>:10:4' bAllwSleep = false; */
                  EFuse_Ctrl_flgAllwSleep09 = false;

                  /* '<S259>:10:5' count = count + uint8(1); */
                  EFuse_Ctr_Fuse09SleepRetryCount = Mfx_Add_u8u8_u8
                    (EFuse_Ctr_Fuse09SleepRetryCount, 1U);

                  /* '<S259>:10:6' waitTime(false); */
                  /* Simulink Function 'waitTime': '<S259>:72' */
                  EFuse_Ctrl_B.En = false;

                  /* Outputs for Function Call SubSystem: '<S259>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En, &EFuse_Ctrl_B.Switch,
                                      &EFuse_Ctrl_DW.waitTime_j);

                  /* End of Outputs for SubSystem: '<S259>/waitTime' */
                } else {
                  /* '<S259>:28:1' sf_internal_predicateOutput = waitTime(true) > TiReSleepDiag_C; */
                  /* Simulink Function 'waitTime': '<S259>:72' */
                  EFuse_Ctrl_B.En = true;

                  /* Outputs for Function Call SubSystem: '<S259>/waitTime' */
                  EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En, &EFuse_Ctrl_B.Switch,
                                      &EFuse_Ctrl_DW.waitTime_j);

                  /* End of Outputs for SubSystem: '<S259>/waitTime' */
                  if (EFuse_Ctrl_B.Switch > Rte_CData_EFuse_tiSleepFailToNrm_C())
                  {
                    /* Transition: '<S259>:28' */
                    EFuse_Ctrl_DW.is_SleepRetry = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
                    EFuse_Ctrl_DW.is_ECUSleep = EFuse_Ctrl_IN_NormSleep;

                    /* Entry 'NormSleep': '<S259>:13' */
                    /* '<S259>:13:3' stFuse = uint8(4); */
                    EFuse_Ctrl_stFuse09 = 4U;

                    /* '<S259>:13:4' bAllwSleep = true; */
                    EFuse_Ctrl_flgAllwSleep09 = true;

                    /* '<S259>:13:5' bSleepFail = false; */
                    /* '<S259>:13:6' waitTime(false); */
                    /* Simulink Function 'waitTime': '<S259>:72' */
                    EFuse_Ctrl_B.En = false;

                    /* Outputs for Function Call SubSystem: '<S259>/waitTime' */
                    EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En, &EFuse_Ctrl_B.Switch,
                                        &EFuse_Ctrl_DW.waitTime_j);

                    /* End of Outputs for SubSystem: '<S259>/waitTime' */
                  }
                }
              }
              break;
            }
          }
        }
        break;

       case EFuse_Ctrl_IN_ECUWork:
        /* During 'ECUWork': '<S259>:63' */
        switch (EFuse_Ctrl_DW.is_ECUWork) {
         case EFuse_Ctrl_IN_NormWork:
          EFuse_Ctrl_stFuse09 = 1U;
          EFuse_Ctrl_flgAllwSleep09 = false;

          /* During 'NormWork': '<S259>:3' */
          /* '<S259>:38:1' sf_internal_predicateOutput = flgSWPrt; */
          if (rtb_Switch4_ez) {
            /* Transition: '<S259>:38' */
            EFuse_Ctrl_DW.is_ECUWork = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c8_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S259>:7' */
            /* '<S259>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse09 = 2U;

            /* '<S259>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep09 = true;

            /* '<S259>:7:5' bSWPrt = true; */
          } else {
            /* '<S259>:20:1' sf_internal_predicateOutput = flgPreSleep; */
            if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPreSleep_Val()) {
              /* Transition: '<S259>:20' */
              EFuse_Ctrl_DW.is_ECUWork = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
              EFuse_Ctrl_DW.is_c8_EFuse_Ctrl = EFuse_Ctrl_IN_ECUSleep;
              EFuse_Ctrl_DW.is_ECUSleep = EFuse_Ctrl_IN_NormSleep;

              /* Entry 'NormSleep': '<S259>:13' */
              /* '<S259>:13:3' stFuse = uint8(4); */
              EFuse_Ctrl_stFuse09 = 4U;

              /* '<S259>:13:4' bAllwSleep = true; */
              EFuse_Ctrl_flgAllwSleep09 = true;

              /* '<S259>:13:5' bSleepFail = false; */
              /* '<S259>:13:6' waitTime(false); */
              /* Simulink Function 'waitTime': '<S259>:72' */
              EFuse_Ctrl_B.En = false;

              /* Outputs for Function Call SubSystem: '<S259>/waitTime' */
              EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En, &EFuse_Ctrl_B.Switch,
                                  &EFuse_Ctrl_DW.waitTime_j);

              /* End of Outputs for SubSystem: '<S259>/waitTime' */
            }
          }
          break;

         case EFuse_Ctrl_IN_PreCharge:
          EFuse_Ctrl_stFuse09 = 3U;
          EFuse_Ctrl_flgAllwSleep09 = false;

          /* During 'PreCharge': '<S259>:100' */
          /* '<S259>:103:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
          /* '<S259>:103:2'  && ~flgPreChrgSucc; */
          /* Simulink Function 'waitTime': '<S259>:72' */
          EFuse_Ctrl_B.En = true;

          /* Outputs for Function Call SubSystem: '<S259>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En, &EFuse_Ctrl_B.Switch,
                              &EFuse_Ctrl_DW.waitTime_j);

          /* End of Outputs for SubSystem: '<S259>/waitTime' */
          if ((EFuse_Ctrl_B.Switch > 2000U) && (!rtb_Switch_hs)) {
            /* Transition: '<S259>:103' */
            EFuse_Ctrl_DW.is_ECUWork = EFuse_Ctrl_IN_NO_ACTIVE_CHILD;
            EFuse_Ctrl_DW.is_c8_EFuse_Ctrl = EFuse_Ctrl_IN_SWProtect;

            /* Entry 'SWProtect': '<S259>:7' */
            /* '<S259>:7:3' stFuse = uint8(2); */
            EFuse_Ctrl_stFuse09 = 2U;

            /* '<S259>:7:4' bAllwSleep = true; */
            EFuse_Ctrl_flgAllwSleep09 = true;

            /* '<S259>:7:5' bSWPrt = true; */
          } else {
            /* '<S259>:101:1' sf_internal_predicateOutput = waitTime(true) > tiPreChrgDiag... */
            /* '<S259>:101:2'  && flgPreChrgSucc; */
            /* Simulink Function 'waitTime': '<S259>:72' */
            EFuse_Ctrl_B.En = true;

            /* Outputs for Function Call SubSystem: '<S259>/waitTime' */
            EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En, &EFuse_Ctrl_B.Switch,
                                &EFuse_Ctrl_DW.waitTime_j);

            /* End of Outputs for SubSystem: '<S259>/waitTime' */
            if ((EFuse_Ctrl_B.Switch > 2000U) && rtb_Switch_hs) {
              /* Transition: '<S259>:101' */
              EFuse_Ctrl_DW.is_ECUWork = EFuse_Ctrl_IN_NormWork;

              /* Entry 'NormWork': '<S259>:3' */
              /* '<S259>:3:3' stFuse = uint8(1); */
              EFuse_Ctrl_stFuse09 = 1U;

              /* '<S259>:3:4' bAllwSleep = false; */
              EFuse_Ctrl_flgAllwSleep09 = false;

              /* '<S259>:3:5' bSleepFail = false; */
              /* '<S259>:3:6' count = uint8(0); */
              EFuse_Ctr_Fuse09SleepRetryCount = 0U;

              /* '<S259>:3:7' bSWPrt = false; */
            }
          }
          break;

         default:
          /* During 'StandBy': '<S259>:1' */
          /* Transition: '<S259>:4' */
          EFuse_Ctrl_DW.is_ECUWork = EFuse_Ctrl_IN_NormWork;

          /* Entry 'NormWork': '<S259>:3' */
          /* '<S259>:3:3' stFuse = uint8(1); */
          EFuse_Ctrl_stFuse09 = 1U;

          /* '<S259>:3:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep09 = false;

          /* '<S259>:3:5' bSleepFail = false; */
          /* '<S259>:3:6' count = uint8(0); */
          EFuse_Ctr_Fuse09SleepRetryCount = 0U;

          /* '<S259>:3:7' bSWPrt = false; */
          break;
        }
        break;

       default:
        EFuse_Ctrl_stFuse09 = 2U;
        EFuse_Ctrl_flgAllwSleep09 = true;

        /* During 'SWProtect': '<S259>:7' */
        /* '<S259>:34:1' sf_internal_predicateOutput = flgReset; */
        if (Rte_IRead_EFuse_Ctrl_Runnable_10ms_EFuse_flgPwrModChng_Val()) {
          /* Transition: '<S259>:34' */
          EFuse_Ctrl_DW.is_c8_EFuse_Ctrl = EFuse_Ctrl_IN_ECUWork;
          EFuse_Ctrl_DW.is_ECUWork = EFuse_Ctrl_IN_PreCharge;

          /* Entry 'PreCharge': '<S259>:100' */
          /* '<S259>:100:3' stFuse = uint8(3); */
          EFuse_Ctrl_stFuse09 = 3U;

          /* '<S259>:100:4' bAllwSleep = false; */
          EFuse_Ctrl_flgAllwSleep09 = false;

          /* '<S259>:100:5' bSleepFail = false; */
          /* '<S259>:100:6' waitTime(false); */
          /* Simulink Function 'waitTime': '<S259>:72' */
          EFuse_Ctrl_B.En = false;

          /* Outputs for Function Call SubSystem: '<S259>/waitTime' */
          EFuse_Ctrl_waitTime(EFuse_Ctrl_B.En, &EFuse_Ctrl_B.Switch,
                              &EFuse_Ctrl_DW.waitTime_j);

          /* End of Outputs for SubSystem: '<S259>/waitTime' */
        }
        break;
      }
    }

    /* End of Chart: '<S235>/Chart' */

    /* DataStoreWrite: '<S235>/Data Store Write' */
    EFuse_C_Fuse09SleepRetryCount_i = EFuse_Ctr_Fuse09SleepRetryCount;
  }

  /* End of Outputs for SubSystem: '<S4>/FUSE09' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EFuse_Ctrl_Runnable_10ms' */

  /* Outport: '<Root>/EFuse_au8stFuse_Val' */
  tmp[0] = EFuse_Ctrl_stFuse01;
  tmp[1] = EFuse_Ctrl_stFuse02;
  tmp[2] = EFuse_Ctrl_stFuse03;
  tmp[3] = EFuse_Ctrl_stFuse04;
  tmp[4] = EFuse_Ctrl_stFuse05;
  tmp[5] = EFuse_Ctrl_stFuse06;
  tmp[6] = EFuse_Ctrl_stFuse07;
  tmp[7] = EFuse_Ctrl_stFuse08;
  tmp[8] = EFuse_Ctrl_stFuse09;
  Rte_IWrite_EFuse_Ctrl_Runnable_10ms_EFuse_au8stFuse_Val(tmp);

  /* RootInportFunctionCallGenerator generated from: '<Root>/EFuse_Ctrl_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EFuse_Ctrl_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/EFuse_flgAllwSleep_Val' incorporates:
   *  Logic: '<S3>/Logical Operator'
   *  Logic: '<S3>/Logical Operator1'
   *  Logic: '<S3>/Logical Operator10'
   *  Logic: '<S3>/Logical Operator11'
   *  Logic: '<S3>/Logical Operator12'
   *  Logic: '<S3>/Logical Operator13'
   *  Logic: '<S3>/Logical Operator14'
   *  Logic: '<S3>/Logical Operator15'
   *  Logic: '<S3>/Logical Operator16'
   *  Logic: '<S3>/Logical Operator17'
   *  Logic: '<S3>/Logical Operator18'
   *  Logic: '<S3>/Logical Operator2'
   *  Logic: '<S3>/Logical Operator3'
   *  Logic: '<S3>/Logical Operator4'
   *  Logic: '<S3>/Logical Operator5'
   *  Logic: '<S3>/Logical Operator6'
   *  Logic: '<S3>/Logical Operator7'
   *  Logic: '<S3>/Logical Operator8'
   *  Logic: '<S3>/Logical Operator9'
   */
  Rte_IWrite_EFuse_Ctrl_Runnable_10ms_EFuse_flgAllwSleep_Val
    ((EFuse_Ctrl_flgAllwSleep01 || (!EFuse_Ctrl_EnFuse01)) &&
     (EFuse_Ctrl_flgAllwSleep02 || (!EFuse_Ctrl_EnFuse02)) &&
     (EFuse_Ctrl_flgAllwSleep03 || (!EFuse_Ctrl_EnFuse03)) &&
     (EFuse_Ctrl_flgAllwSleep04 || (!EFuse_Ctrl_EnFuse04)) &&
     (EFuse_Ctrl_flgAllwSleep05 || (!EFuse_Ctrl_EnFuse05)) &&
     (EFuse_Ctrl_flgAllwSleep06 || (!EFuse_Ctrl_EnFuse06)) &&
     (EFuse_Ctrl_flgAllwSleep07 || (!EFuse_Ctrl_EnFuse07)) &&
     (EFuse_Ctrl_flgAllwSleep08 || (!EFuse_Ctrl_EnFuse08)) &&
     (EFuse_Ctrl_flgAllwSleep09 || (!EFuse_Ctrl_EnFuse09)));

  /* Outport: '<Root>/EFuse_ActUseFuseChInfo_Val' incorporates:
   *  Constant: '<S6>/PA_EFuse_ActUseFuseChInfo_C'
   */
  Rte_IWrite_EFuse_Ctrl_Runnable_10ms_EFuse_ActUseFuseChInfo_Val
    (Rte_CData_EFuse_ActUseFuseChInfo_C());

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EFuse_Ctrl_Runnable_10ms' */
}

#define EFuse_Ctrl_STOP_SEC_CODE
#include "EFuse_Ctrl_MemMap.h"

/* Model initialize function */

/* SwAddrMethod CODE for Runnable */
#define EFuse_Ctrl_START_SEC_CODE
#include "EFuse_Ctrl_MemMap.h"

FUNC(void, EFuse_Ctrl_CODE) EFuse_Ctrl_Runnable_Init(void)
{
  
}

#define EFuse_Ctrl_STOP_SEC_CODE
#include "EFuse_Ctrl_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
