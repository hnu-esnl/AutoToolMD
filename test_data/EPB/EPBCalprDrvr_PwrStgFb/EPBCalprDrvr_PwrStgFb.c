/*
 * File: EPBCalprDrvr_PwrStgFb.c
 *
 * Code generated for Simulink model 'EPBCalprDrvr_PwrStgFb'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Thu Jul 28 12:38:17 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EPBCalprDrvr_PwrStgFb.h"
#include "EPBCalprDrvr_PwrStgFb_private.h"

/* Exported block signals */
VAR(uint8, EPBCalprDrvr_PwrStgFb_VAR) EPBCalprDrvr_stFreerunJudg;/* '<S15>/Add' */

/* Block states (default storage) */
VAR(DW_EPBCalprDrvr_PwrStgFb_T, EPBCalprDrvr_PwrStgFb_VAR)
  EPBCalprDrvr_PwrStgFb_DW;

/* Model step function for TID1 */
FUNC(void, EPBCalprDrvr_PwrStgFb_CODE) EPBCalprDrvr_PwrStgFb_Runnable_10ms(void)
  /* Explicit Task: EPBCalprDrvr_PwrStgFb_Runnable_10ms */
{
  sint32 i;
  sint16 rtb_Switch1[10];
  uint16 rtb_Switch6[10];
  const uint16 *tmpIRead;
  uint16 tmpIRead_4;
  sint16 rtb_Switch2[10];
  const sint16 *tmpIRead_1;
  sint16 tmp_0;
  const uint16 *tmpIRead_0;
  const uint16 *tmpIRead_2;
  const uint16 *tmpIRead_3;
  sint8 s15_iter;
  uint8 Switch3;
  uint8 s15_iter_0;
  uint8 tmp;
  boolean LogicalOperator;

  /* Inport: '<Root>/EPBCalprDrvr_uSh2Volt_a_Val' */
  tmpIRead_3 =
    Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_uSh2Volt_a_Val();

  /* Inport: '<Root>/EPBCalprDrvr_uSh1Volt_a_Val' */
  tmpIRead_2 =
    Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_uSh1Volt_a_Val();

  /* Inport: '<Root>/EPBCalprDrvr_uMotDrvrVoltLocl_a_Val' */
  tmpIRead_1 =
    Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_uMotDrvrVoltLocl_a_Val
    ();

  /* Inport: '<Root>/EPBCalprDrvr_uHBrigVolt_a_Val' */
  tmpIRead_0 =
    Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_uHBrigVolt_a_Val();

  /* Inport: '<Root>/EPBCalprDrvr_CurrMotDrvrCurrLocl_a_Val' */
  tmpIRead =
    Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_CurrMotDrvrCurrLocl_a_Val
    ();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys'
   */
  /* FunctionCaller: '<S2>/IoHwAb_EPBHb_Get_AD_Valid' */
  Rte_Call_IoHwAb_EPBHb_Get_AD_Valid(Rte_Pim_EPBCalprD_EPBCalprDrvr_flgADVld());

  /* Logic: '<S16>/Logical Operator3' */
  *Rte_Pim_EPBCalprDrvr_flgADCUntrustedDeb() =
    !*Rte_Pim_EPBCalprD_EPBCalprDrvr_flgADVld();
  for (i = 0; i < 10; i++) {
    /* DataTypeConversion: '<S16>/Data Type Conversion1' incorporates:
     *  Inport: '<Root>/EPBCalprDrvr_CurrMotDrvrCurrLocl_a_Val'
     *  Switch: '<S16>/Switch1'
     */
    tmpIRead_4 = tmpIRead[i];

    /* Switch: '<S16>/Switch2' incorporates:
     *  Switch: '<S16>/Switch1'
     *  Switch: '<S16>/Switch6'
     */
    if (*Rte_Pim_EPBCalprDrvr_flgADCUntrustedDeb()) {
      /* Switch: '<S16>/Switch2' incorporates:
       *  Constant: '<S16>/Constant10'
       */
      rtb_Switch2[i] = 0;

      /* Switch: '<S16>/Switch1' */
      rtb_Switch1[i] = 0;

      /* Switch: '<S16>/Switch6' incorporates:
       *  Constant: '<S16>/Constant4'
       */
      rtb_Switch6[i] = 0U;
    } else {
      /* Switch: '<S16>/Switch2' incorporates:
       *  Inport: '<Root>/EPBCalprDrvr_uMotDrvrVoltLocl_a_Val'
       */
      rtb_Switch2[i] = tmpIRead_1[i];

      /* Switch: '<S16>/Switch1' incorporates:
       *  DataTypeConversion: '<S16>/Data Type Conversion1'
       */
      rtb_Switch1[i] = (sint16)tmpIRead_4;

      /* Switch: '<S16>/Switch6' */
      rtb_Switch6[i] = tmpIRead_4;
    }

    /* End of Switch: '<S16>/Switch2' */
  }

  /* FunctionCaller: '<S2>/IoHwAb_EPBHb_Get_Diag' */
  Rte_Call_IoHwAb_EPBHb_Get_Diag(Rte_Pim_EPBC_EPBCalprDrvr_stDiagInfor_a());

  /* Selector: '<S5>/Selector2' incorporates:
   *  Constant: '<S5>/Constant'
   */
  *Rte_Pim_EPBCalprDrvr_stDiagInforErrArry() =
    (Rte_Pim_EPBC_EPBCalprDrvr_stDiagInfor_a())[1];

  /* RelationalOperator: '<S12>/Compare' incorporates:
   *  Constant: '<S12>/Constant'
   *  S-Function (sfix_bitop): '<S5>/Bitwise AND5'
   */
  *Rte_Pim_EPBCalprDrvr_flgCurrAdcPlsChkEr() =
    ((*Rte_Pim_EPBCalprDrvr_stDiagInforErrArry() & 128U) > 0U);

  /* RelationalOperator: '<S8>/Compare' incorporates:
   *  Constant: '<S8>/Constant'
   *  S-Function (sfix_bitop): '<S5>/Bitwise AND2'
   */
  *Rte_Pim_EP_EPBCalprDrvr_flgVSCPUVErrDeb() =
    ((*Rte_Pim_EPBCalprDrvr_stDiagInforErrArry() & 2048U) > 0U);

  /* RelationalOperator: '<S10>/Compare' incorporates:
   *  Constant: '<S10>/Constant'
   *  S-Function (sfix_bitop): '<S5>/Bitwise AND3'
   */
  *Rte_Pim_E_EPBCalprDrvr_flgSyncChkErrDeb() =
    ((*Rte_Pim_EPBCalprDrvr_stDiagInforErrArry() & 512U) > 0U);

  /* RelationalOperator: '<S11>/Compare' incorporates:
   *  Constant: '<S11>/Constant'
   *  S-Function (sfix_bitop): '<S5>/Bitwise AND4'
   */
  *Rte_Pim_EP_EPBCalprDrvr_flgADSyncErrDeb() =
    ((*Rte_Pim_EPBCalprDrvr_stDiagInforErrArry() & 256U) > 0U);

  /* Logic: '<S5>/Logical Operator2' incorporates:
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S7>/Compare'
   *  S-Function (sfix_bitop): '<S5>/Bitwise AND'
   */
  *Rte_Pim_EPBCalprDrvr_flgSPIComSetUpInvl() =
    ((*Rte_Pim_EPBCalprDrvr_stDiagInforErrArry() & 524288U) <= 0U);

  /* Logic: '<S5>/Logical Operator1' incorporates:
   *  Constant: '<S9>/Constant'
   *  RelationalOperator: '<S9>/Compare'
   *  S-Function (sfix_bitop): '<S5>/Bitwise AND1'
   */
  *Rte_Pim_EPBCalprDrvr_flgADCDateInvldDeb() =
    ((*Rte_Pim_EPBCalprDrvr_stDiagInforErrArry() & 1024U) <= 0U);

  /* Selector: '<S6>/Selector2' incorporates:
   *  Constant: '<S6>/Constant'
   */
  *Rte_Pim_E_EPBCalprDrvr_stDiagInforErrAr() =
    (Rte_Pim_EPBC_EPBCalprDrvr_stDiagInfor_a())[0];

  /* S-Function (sfix_bitop): '<S6>/Bitwise AND' */
  *Rte_Pim_EPBCalprDrvr_stDiagInforClsdMos() =
    *Rte_Pim_E_EPBCalprDrvr_stDiagInforErrAr() & 521312U;

  /* RelationalOperator: '<S13>/Compare' incorporates:
   *  Constant: '<S13>/Constant'
   */
  *Rte_Pim_EP_EPBCalprDrvr_flgDiagInforErr() =
    (*Rte_Pim_EPBCalprDrvr_stDiagInforClsdMos() > 0U);

  /* Logic: '<S6>/Logical Operator' incorporates:
   *  Inport: '<Root>/EPBCalprDrvr_flgCalprLineErrDeb_Val'
   *  Inport: '<Root>/EPBCalprDrvr_flgCalprOLErrDeb_Val'
   *  Inport: '<Root>/EPBCalprDrvr_flgCalprSCBErrDeb_Val'
   *  Inport: '<Root>/EPBCalprDrvr_flgCalprSCGErrDeb_Val'
   *  Inport: '<Root>/EPBCalprDrvr_flgHbrigLineErrDeb_Val'
   *  Inport: '<Root>/EPBCalprDrvr_flgRvpgOLErrDeb_Val'
   *  Inport: '<Root>/EPBCalprDrvr_flgRvpgPlsErrDeb_Val'
   */
  LogicalOperator = ((*Rte_Pim_EP_EPBCalprDrvr_flgDiagInforErr()) ||
                     Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_flgCalprLineErrDeb_Val
                     () ||
                     Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_flgCalprOLErrDeb_Val
                     () ||
                     Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_flgCalprSCBErrDeb_Val
                     () ||
                     Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_flgCalprSCGErrDeb_Val
                     () ||
                     Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_flgHbrigLineErrDeb_Val
                     () ||
                     Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_flgRvpgOLErrDeb_Val
                     () ||
                     Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_flgRvpgPlsErrDeb_Val
                     ());

  /* Logic: '<S5>/Logical Operator' */
  *Rte_Pim_EPBCalprDrvr_flgAffctHostAvlDeb() =
    ((*Rte_Pim_EPBCalprDrvr_flgSPIComSetUpInvl()) ||
     (*Rte_Pim_EPBCalprDrvr_flgADCDateInvldDeb()) ||
     (*Rte_Pim_EP_EPBCalprDrvr_flgVSCPUVErrDeb()) ||
     (*Rte_Pim_EP_EPBCalprDrvr_flgADSyncErrDeb()) ||
     (*Rte_Pim_E_EPBCalprDrvr_flgSyncChkErrDeb()) ||
     (*Rte_Pim_EPBCalprDrvr_flgCurrAdcPlsChkEr()) || LogicalOperator);

  /* RelationalOperator: '<S14>/Relational Operator1' incorporates:
   *  Constant: '<S14>/Constant'
   *  Inport: '<Root>/EPBCalprDrvr_stMosOffJudg_Val'
   */
  *Rte_Pim_EPBCa_EPBCalprDrvr_flgMosAllOff() =
    (Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_stMosOffJudg_Val
     () >= Rte_CData_EPBCalprDrvr_stPwrStgIndexStrt_C());

  /* RelationalOperator: '<S14>/Relational Operator5' incorporates:
   *  Inport: '<Root>/EPBCalprDrvr_stHwDrvrCmd_Val'
   *  RelationalOperator: '<S14>/Relational Operator3'
   *  RelationalOperator: '<S14>/Relational Operator6'
   *  Switch: '<S14>/Switch3'
   */
  Switch3 =
    Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_stHwDrvrCmd_Val();

  /* RelationalOperator: '<S14>/Relational Operator5' incorporates:
   *  Constant: '<S14>/Constant9'
   *  Inport: '<Root>/EPBCalprDrvr_stHwDrvrCmd_Val'
   */
  *Rte_Pim_EPBCalprDrvr_flgHwDrvrSafetyCtr() = (Switch3 == 1);

  /* Outputs for Iterator SubSystem: '<S4>/For Iterator Subsystem1' incorporates:
   *  ForIterator: '<S15>/For Iterator'
   */
  /* Constant: '<S4>/Constant' */
  tmp = Rte_CData_EPBCalprDrvr_stPwrStgIndexStrt_C();
  if (Rte_CData_EPBCalprDrvr_stPwrStgIndexStrt_C() > 127) {
    tmp = 127U;
  }

  /* End of Constant: '<S4>/Constant' */
  for (s15_iter = 0; s15_iter < (sint8)tmp; s15_iter++) {
    /* Selector: '<S15>/Selector3' incorporates:
     *  Constant: '<S15>/Constant1'
     *  Constant: '<S15>/Constant2'
     *  Selector: '<S15>/Selector4'
     *  Selector: '<S15>/Selector9'
     *  Sum: '<S15>/Add3'
     *  Sum: '<S15>/Add4'
     */
    i = (sint8)((sint8)(10 - Rte_CData_EPBCalprDrvr_stPwrStgIndexStrt_C()) +
                s15_iter);

    /* Selector: '<S15>/Selector3' */
    *Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH2() = tmpIRead_3[i];

    /* Selector: '<S15>/Selector4' */
    *Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH1() = tmpIRead_2[i];

    /* Switch: '<S15>/Switch8' incorporates:
     *  Constant: '<S15>/Constant18'
     *  Delay: '<S15>/Delay3'
     */
    if (s15_iter > 0) {
      s15_iter_0 = EPBCalprDrvr_stFreerunJudg;
    } else {
      s15_iter_0 = 0U;
    }

    /* End of Switch: '<S15>/Switch8' */

    /* Sum: '<S15>/Add' incorporates:
     *  Logic: '<S15>/Logical Operator'
     *  Logic: '<S15>/Logical Operator1'
     *  Logic: '<S15>/Logical Operator3'
     *  RelationalOperator: '<S15>/Relational Operator1'
     *  RelationalOperator: '<S15>/Relational Operator2'
     *  RelationalOperator: '<S15>/Relational Operator3'
     *  RelationalOperator: '<S15>/Relational Operator4'
     *  Selector: '<S15>/Selector3'
     *  Selector: '<S15>/Selector4'
     */
    EPBCalprDrvr_stFreerunJudg = (uint8)((uint32)
      ((*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH1() <= 900) &&
       (*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH1() >= 200) &&
       ((*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH2() <= 900) &&
        (*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH2() >= 200))) + s15_iter_0);

    /* Logic: '<S15>/Logical Operator13' incorporates:
     *  Constant: '<S15>/Constant25'
     *  Constant: '<S15>/Constant26'
     *  Constant: '<S15>/Constant3'
     *  Constant: '<S15>/Constant4'
     *  Logic: '<S15>/Logical Operator12'
     *  Logic: '<S15>/Logical Operator14'
     *  RelationalOperator: '<S15>/Relational Operator14'
     *  RelationalOperator: '<S15>/Relational Operator15'
     *  RelationalOperator: '<S15>/Relational Operator16'
     *  RelationalOperator: '<S15>/Relational Operator17'
     *  Selector: '<S15>/Selector3'
     *  Selector: '<S15>/Selector4'
     */
    *Rte_Pim_EPBCalprDrvr_flgStopVoltChkSts() =
      ((*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH1() <=
        Rte_CData_EPBCalprDrvr_uStopSh1VoltMax_C()) &&
       (*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH1() >=
        Rte_CData_EPBCalprDrvr_uStopSh1VoltMin_C()) &&
       ((*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH2() <=
         Rte_CData_EPBCalprDrvr_uStopSh2VoltMax_C()) &&
        (*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH2() >=
         Rte_CData_EPBCalprDrvr_uStopSh2VoltMin_C())));

    /* Switch: '<S15>/Switch6' incorporates:
     *  Constant: '<S15>/Constant36'
     *  Delay: '<S15>/Delay2'
     */
    if (s15_iter > 0) {
      s15_iter_0 = *Rte_Pim_EPBCalp_EPBCalprDrvr_stStopJudg();
    } else {
      s15_iter_0 = 0U;
    }

    /* End of Switch: '<S15>/Switch6' */

    /* Sum: '<S15>/Add14' incorporates:
     *  Switch: '<S15>/Switch5'
     */
    *Rte_Pim_EPBCalp_EPBCalprDrvr_stStopJudg() = (uint8)((uint32)s15_iter_0 +
      *Rte_Pim_EPBCalprDrvr_flgStopVoltChkSts());

    /* Selector: '<S15>/Selector9' */
    *Rte_Pim_EPBCalprDrv_EPBCalprDrvr_uHBrig() = tmpIRead_0[i];

    /* Sum: '<S15>/Add12' incorporates:
     *  Constant: '<S15>/Constant15'
     *  Selector: '<S15>/Selector9'
     */
    *Rte_Pim_EPBC_EPBCalprDrvr_uHBrigVoltMax() = (uint16)((uint32)*
      Rte_Pim_EPBCalprDrv_EPBCalprDrvr_uHBrig() +
      Rte_CData_EPBCalprDrvr_uHBrigVoltOffSet_C());

    /* Sum: '<S15>/Add13' incorporates:
     *  Constant: '<S15>/Constant33'
     *  Selector: '<S15>/Selector9'
     */
    *Rte_Pim_EPBC_EPBCalprDrvr_uHBrigVoltMin() = (uint16)
      (*Rte_Pim_EPBCalprDrv_EPBCalprDrvr_uHBrig() -
       Rte_CData_EPBCalprDrvr_uHBrigVoltOffSet_C());

    /* Logic: '<S15>/Logical Operator11' incorporates:
     *  Constant: '<S15>/Constant23'
     *  Constant: '<S15>/Constant29'
     *  Logic: '<S15>/Logical Operator10'
     *  Logic: '<S15>/Logical Operator9'
     *  RelationalOperator: '<S15>/Relational Operator10'
     *  RelationalOperator: '<S15>/Relational Operator11'
     *  RelationalOperator: '<S15>/Relational Operator12'
     *  RelationalOperator: '<S15>/Relational Operator13'
     *  Selector: '<S15>/Selector3'
     *  Selector: '<S15>/Selector4'
     *  Sum: '<S15>/Add12'
     *  Sum: '<S15>/Add13'
     */
    *Rte_Pim_EPBCalprDrvr_flgRelsVoltChkSts() =
      ((*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH1() <=
        Rte_CData_EPBCalprDrvr_uRelsSh1VoltMax_C()) &&
       (*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH1() >=
        Rte_CData_EPBCalprDrvr_uRelsSh1VoltMin_C()) &&
       ((*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH2() <=
         *Rte_Pim_EPBC_EPBCalprDrvr_uHBrigVoltMax()) &&
        (*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH2() >=
         *Rte_Pim_EPBC_EPBCalprDrvr_uHBrigVoltMin())));

    /* Switch: '<S15>/Switch4' incorporates:
     *  Constant: '<S15>/Constant6'
     *  Delay: '<S15>/Delay1'
     */
    if (s15_iter > 0) {
      s15_iter_0 = *Rte_Pim_EPBCalp_EPBCalprDrvr_stRelsJudg();
    } else {
      s15_iter_0 = 0U;
    }

    /* End of Switch: '<S15>/Switch4' */

    /* Sum: '<S15>/Add2' incorporates:
     *  Switch: '<S15>/Switch1'
     */
    *Rte_Pim_EPBCalp_EPBCalprDrvr_stRelsJudg() = (uint8)((uint32)s15_iter_0 +
      *Rte_Pim_EPBCalprDrvr_flgRelsVoltChkSts());

    /* Logic: '<S15>/Logical Operator8' incorporates:
     *  Constant: '<S15>/Constant16'
     *  Constant: '<S15>/Constant17'
     *  Logic: '<S15>/Logical Operator6'
     *  Logic: '<S15>/Logical Operator7'
     *  RelationalOperator: '<S15>/Relational Operator6'
     *  RelationalOperator: '<S15>/Relational Operator7'
     *  RelationalOperator: '<S15>/Relational Operator8'
     *  RelationalOperator: '<S15>/Relational Operator9'
     *  Selector: '<S15>/Selector3'
     *  Selector: '<S15>/Selector4'
     *  Sum: '<S15>/Add12'
     *  Sum: '<S15>/Add13'
     */
    *Rte_Pim_EPBCalprDrvr_flgAplyVoltChkSts() =
      ((*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH1() <=
        *Rte_Pim_EPBC_EPBCalprDrvr_uHBrigVoltMax()) &&
       (*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH1() >=
        *Rte_Pim_EPBC_EPBCalprDrvr_uHBrigVoltMin()) &&
       ((*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH2() <=
         Rte_CData_EPBCalprDrvr_uAplySh2VoltMax_C()) &&
        (*Rte_Pim_EPBCalprDrvr_EPBCalprDrvr_uSH2() >=
         Rte_CData_EPBCalprDrvr_uAplySh2VoltMin_C())));

    /* Switch: '<S15>/Switch3' incorporates:
     *  Constant: '<S15>/Constant21'
     *  Delay: '<S15>/Delay7'
     */
    if (s15_iter > 0) {
      s15_iter_0 = *Rte_Pim_EPBCalp_EPBCalprDrvr_stAplyJudg();
    } else {
      s15_iter_0 = 0U;
    }

    /* End of Switch: '<S15>/Switch3' */

    /* Sum: '<S15>/Add15' incorporates:
     *  Switch: '<S15>/Switch2'
     */
    *Rte_Pim_EPBCalp_EPBCalprDrvr_stAplyJudg() = (uint8)((uint32)s15_iter_0 +
      *Rte_Pim_EPBCalprDrvr_flgAplyVoltChkSts());
  }

  /* End of Outputs for SubSystem: '<S4>/For Iterator Subsystem1' */

  /* Switch: '<S14>/Switch3' incorporates:
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant20'
   *  Constant: '<S14>/Constant3'
   *  Constant: '<S14>/Constant4'
   *  Logic: '<S14>/Logical Operator'
   *  Logic: '<S14>/Logical Operator1'
   *  RelationalOperator: '<S14>/Relational Operator2'
   *  RelationalOperator: '<S14>/Relational Operator3'
   *  RelationalOperator: '<S14>/Relational Operator4'
   *  RelationalOperator: '<S14>/Relational Operator6'
   *  RelationalOperator: '<S14>/Relational Operator7'
   *  Switch: '<S14>/Switch10'
   *  Switch: '<S14>/Switch11'
   *  Switch: '<S14>/Switch8'
   *  Switch: '<S14>/Switch9'
   */
  if ((*Rte_Pim_EPBCalprDrvr_flgHwDrvrSafetyCtr()) || ((Switch3 == 0) &&
       (*Rte_Pim_EPBCa_EPBCalprDrvr_flgMosAllOff()))) {
    /* Switch: '<S14>/Switch3' incorporates:
     *  Constant: '<S14>/Constant11'
     */
    Switch3 = 5U;
  } else if (Switch3 == 5) {
    /* Switch: '<S14>/Switch8' incorporates:
     *  Constant: '<S14>/Constant21'
     *  Switch: '<S14>/Switch3'
     */
    Switch3 = 66U;
  } else if (*Rte_Pim_EPBCalp_EPBCalprDrvr_stAplyJudg() >=
             Rte_CData_EPBCalprDrvr_stPwrStgIndexStrt_C()) {
    /* Switch: '<S14>/Switch9' incorporates:
     *  Constant: '<S14>/Constant22'
     *  Switch: '<S14>/Switch3'
     *  Switch: '<S14>/Switch8'
     */
    Switch3 = 27U;
  } else if (*Rte_Pim_EPBCalp_EPBCalprDrvr_stRelsJudg() >=
             Rte_CData_EPBCalprDrvr_stPwrStgIndexStrt_C()) {
    /* Switch: '<S14>/Switch11' incorporates:
     *  Constant: '<S14>/Constant23'
     *  Switch: '<S14>/Switch3'
     *  Switch: '<S14>/Switch8'
     *  Switch: '<S14>/Switch9'
     */
    Switch3 = 40U;
  } else if (*Rte_Pim_EPBCalp_EPBCalprDrvr_stStopJudg() >=
             Rte_CData_EPBCalprDrvr_stPwrStgIndexStrt_C()) {
    /* Switch: '<S14>/Switch10' incorporates:
     *  Constant: '<S14>/Constant27'
     *  Switch: '<S14>/Switch11'
     *  Switch: '<S14>/Switch3'
     *  Switch: '<S14>/Switch8'
     *  Switch: '<S14>/Switch9'
     */
    Switch3 = 54U;
  } else {
    /* Switch: '<S14>/Switch3' incorporates:
     *  Delay: '<S14>/EPB_stMotorDrvrOld'
     *  Switch: '<S14>/Switch11'
     *  Switch: '<S14>/Switch8'
     *  Switch: '<S14>/Switch9'
     */
    Switch3 = EPBCalprDrvr_PwrStgFb_DW.EPB_stMotorDrvrOld_DSTATE;
  }

  /* Update for Delay: '<S14>/EPB_stMotorDrvrOld' */
  EPBCalprDrvr_PwrStgFb_DW.EPB_stMotorDrvrOld_DSTATE = Switch3;

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms' */

  /* Outport: '<Root>/EPBCalprDrvr_CurrMotDrvrCurr_a_V3_Val' */
  Rte_IWrite_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_CurrMotDrvrCurr_a_V3_Val
    (rtb_Switch6);

  /* Outport: '<Root>/EPBCalprDrvr_CurrMotDrvrCurr_a_Val' */
  Rte_IWrite_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_CurrMotDrvrCurr_a_Val
    (rtb_Switch1);

  /* Outport: '<Root>/EPBCalprDrvr_flgClsdDrvrMos_Val' */
  Rte_IWrite_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_flgClsdDrvrMos_Val
    (LogicalOperator);

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/EPBCalprDrvr_flgHmiYelLmpOn_Val' incorporates:
   *  Logic: '<S5>/Logical Operator3'
   */
  Rte_IWrite_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_flgHmiYelLmpOn_Val
    ((*Rte_Pim_EP_EPBCalprDrvr_flgVSCPUVErrDeb()) ||
     (*Rte_Pim_EP_EPBCalprDrvr_flgADSyncErrDeb()) ||
     (*Rte_Pim_E_EPBCalprDrvr_flgSyncChkErrDeb()) ||
     (*Rte_Pim_EPBCalprDrvr_flgCurrAdcPlsChkEr()) || LogicalOperator);

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant2'
   */
  if (*Rte_Pim_EPBCalprDrvr_flgAffctHostAvlDeb()) {
    tmp = 5U;
  } else {
    tmp = 54U;
  }

  /* End of Switch: '<S5>/Switch1' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms' */

  /* Outport: '<Root>/EPBCalprDrvr_stHostAvl_Val' */
  Rte_IWrite_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_stHostAvl_Val(tmp);

  /* Outport: '<Root>/EPBCalprDrvr_stMotDrvrSt_Val' */
  Rte_IWrite_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_stMotDrvrSt_Val
    (Switch3);

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys'
   */
  /* Switch: '<S16>/Switch4' incorporates:
   *  Constant: '<S16>/Constant13'
   *  Inport: '<Root>/EPBCalprDrvr_uMotDrvrSplyAvrgVolt_Val'
   */
  if (*Rte_Pim_EPBCalprDrvr_flgADCUntrustedDeb()) {
    tmpIRead_4 = MAX_uint16_T;
  } else {
    tmpIRead_4 =
      Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_uMotDrvrSplyAvrgVolt_Val
      ();
  }

  /* End of Switch: '<S16>/Switch4' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms' */

  /* Outport: '<Root>/EPBCalprDrvr_uMotDrvrSuplyVolt_V3_Val' */
  Rte_IWrite_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_uMotDrvrSuplyVolt_V3_Val
    (tmpIRead_4);

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys'
   */
  /* Switch: '<S16>/Switch3' incorporates:
   *  Constant: '<S16>/Constant3'
   *  DataTypeConversion: '<S16>/Data Type Conversion'
   *  Inport: '<Root>/EPBCalprDrvr_uMotDrvrSplyAvrgVolt_Val'
   */
  if (*Rte_Pim_EPBCalprDrvr_flgADCUntrustedDeb()) {
    tmp_0 = MIN_int16_T;
  } else {
    tmp_0 = (sint16)
      Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_uMotDrvrSplyAvrgVolt_Val
      ();
  }

  /* End of Switch: '<S16>/Switch3' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms' */

  /* Outport: '<Root>/EPBCalprDrvr_uMotDrvrSuplyVolt_Val' */
  Rte_IWrite_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_uMotDrvrSuplyVolt_Val
    (tmp_0);

  /* Outport: '<Root>/EPBCalprDrvr_uMotDrvrVolt_a_Val' */
  Rte_IWrite_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_uMotDrvrVolt_a_Val
    (rtb_Switch2);

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys'
   */
  /* RelationalOperator: '<S17>/Lower Test' incorporates:
   *  Inport: '<Root>/EPBCalprDrvr_uMotDrvrSplyAvrgVolt_Val'
   *  RelationalOperator: '<S17>/Upper Test'
   */
  i =
    Rte_IRead_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_uMotDrvrSplyAvrgVolt_Val
    ();

  /* Switch: '<S16>/Switch5' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S16>/Constant1'
   *  Constant: '<S16>/Constant14'
   *  Constant: '<S16>/Constant2'
   *  Logic: '<S16>/Logical Operator1'
   *  Logic: '<S16>/Logical Operator2'
   *  Logic: '<S17>/FixPt Logical Operator'
   *  RelationalOperator: '<S17>/Lower Test'
   *  RelationalOperator: '<S17>/Upper Test'
   */
  if ((*Rte_Pim_EPBCalprDrvr_flgADCUntrustedDeb()) ||
      ((Rte_CData_EPBCalprDrvr_uPwrSuplyMin_C() > i) || (i >
        Rte_CData_EPBCalprDrvr_uPwrSuplyMax_C()))) {
    tmp = 27U;
  } else {
    tmp = 5U;
  }

  /* End of Switch: '<S16>/Switch5' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms' */

  /* Outport: '<Root>/EPBCalprDrvr_stPwrSplySt_Val' */
  Rte_IWrite_EPBCalprDrvr_PwrStgFb_Runnable_10ms_EPBCalprDrvr_stPwrSplySt_Val
    (tmp);
}

/* Model initialize function */
FUNC(void, EPBCalprDrvr_PwrStgFb_CODE) EPBCalprDrvr_PwrStgFb_Init(void)
{
  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms_sys'
   */
  /* InitializeConditions for Delay: '<S14>/EPB_stMotorDrvrOld' */
  EPBCalprDrvr_PwrStgFb_DW.EPB_stMotorDrvrOld_DSTATE = 5U;

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_PwrStgFb_Runnable_10ms' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
