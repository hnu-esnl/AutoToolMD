/*
 * File: EFuse_Mon.c
 *
 * Code generated for Simulink model 'EFuse_Mon'.
 *
 * Model version                  : 1.373
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Wed Sep 28 16:44:54 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EFuse_Mon.h"
#include "EFuse_Mon_private.h"

/* Block states (default storage) */
VAR(DW_EFuse_Mon_T, EFuse_Mon_VAR) EFuse_Mon_DW;

/* Static Memory for Internal Data */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse03;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get2' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse01;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse01;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse01Fild;

/* '<S6>/Switch' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse06;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get5' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse05;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get4' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse02;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get1' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse04;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get3' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse07;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get6' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse08;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get7' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse09;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get8' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse02;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get1' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse02Fild;

/* '<S6>/Switch1' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse03;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get2' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse03Fild;

/* '<S6>/Switch2' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse04;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get3' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse04Fild;

/* '<S6>/Switch3' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse05;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get4' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse05Fild;

/* '<S6>/Switch4' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse06;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get5' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse06Fild;

/* '<S6>/Switch5' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse07;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get6' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse07Fild;

/* '<S6>/Switch6' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse08;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get7' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse08Fild;

/* '<S6>/Switch7' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse09;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get8' */
VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse09Fild;

/* '<S6>/Switch8' */
VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse01;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get' */
VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse02;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get1' */
VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse03;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get2' */
VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse04;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get3' */
VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse05;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get4' */
VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse06;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get5' */
VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse07;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get6' */
VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse08;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get7' */
VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse09;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get8' */
VAR(boolean, EFuse_Mon_VAR) EFuse_UltrasonicRadar1SCGFault;

/* '<S13>/Relational Operator' */
VAR(boolean, EFuse_Mon_VAR) EFuse_M_UltrasonicRadar1OCFault;

/* '<S14>/Relational Operator' */
VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse01SWProt;

/* '<S137>/Relational Operator1' */
VAR(boolean, EFuse_Mon_VAR) EFus_DTCRearDCDCPwrSplySCGFault;

/* '<S8>/Logical Operator' */
VAR(boolean, EFuse_Mon_VAR) EFuse_DTCRearDCDCPwrSplyOCFault;

/* '<S8>/Logical Operator2' */
VAR(boolean, EFuse_Mon_VAR) EF_DTCADCBackup1PwrSplySCGFault;

/* '<S8>/Logical Operator3' */
VAR(boolean, EFuse_Mon_VAR) EFu_DTCADCBackup1PwrSplyOLFault;

/* '<S8>/Logical Operator4' */
VAR(boolean, EFuse_Mon_VAR) EFu_DTCADCBackup1PwrSplyOCFault;

/* '<S8>/Logical Operator5' */
VAR(boolean, EFuse_Mon_VAR) EF_DTCADCBackup2PwrSplySCGFault;

/* '<S8>/Logical Operator6' */
VAR(boolean, EFuse_Mon_VAR) EFu_DTCADCBackup2PwrSplyOLFault;

/* '<S8>/Logical Operator7' */
VAR(boolean, EFuse_Mon_VAR) EFu_DTCADCBackup2PwrSplyOCFault;

/* '<S8>/Logical Operator8' */
VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse03SWProt;

/* '<S139>/Relational Operator1' */
VAR(boolean, EFuse_Mon_VAR) EFuse_DTCRearDCDCPwrSplyOLFault;

/* '<S8>/Logical Operator1' */
VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse02SWProt;

/* '<S138>/Relational Operator1' */
VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse04SWProt;

/* '<S140>/Relational Operator1' */
VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse05SWProt;

/* '<S141>/Relational Operator1' */
VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse06SWProt;

/* '<S142>/Relational Operator1' */
VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse07SWProt;

/* '<S143>/Relational Operator1' */
VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse08SWProt;

/* '<S144>/Relational Operator1' */
VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse09SWProt;

/* '<S145>/Relational Operator1' */

/* Model step function for TID1 */
FUNC(void, EFuse_Mon_CODE) EFuse_Mon_Runnable_10ms(void)
                                    /* Explicit Task: EFuse_Mon_Runnable_10ms */
{
  float64 u0;
  float64 u0_0;
  float64 u0_1;
  float64 u0_2;
  float64 u0_3;
  float64 u0_4;
  uint32 rtb_Switch7_0[9];
  uint32 tmp[9];
  uint32 rtb_Switch;
  uint32 rtb_Switch1;
  uint32 rtb_Switch7;
  uint32 rtb_Switch8_lx;
  uint32 rtb_Switch_p;
  const uint16 *tmpIRead_0;
  const uint16 *tmpIRead_1;
  uint16 rtb_Switch17;
  uint16 tmp_1;
  Dem_EventStatusType tmp_2;
  uint8 tmp_0[9];
  const uint8 *tmpIRead;
  boolean rtb_DTC_ADCBackup1PwrSplyOC_G_d;
  boolean rtb_DTC_ADCBackup1PwrSplyOC_G_i;
  boolean rtb_DTC_ADCBackup1PwrSplyOL_G_a;
  boolean rtb_DTC_ADCBackup1PwrSplyOL_G_l;
  boolean rtb_DTC_ADCBackup1PwrSplySCG__g;
  boolean rtb_DTC_ADCBackup1PwrSplySCG_n5;
  boolean rtb_DTC_ADCBackup2PwrSplyOC_G_g;
  boolean rtb_DTC_ADCBackup2PwrSplyOC_G_i;
  boolean rtb_DTC_ADCBackup2PwrSplyOL_G_m;
  boolean rtb_DTC_ADCBackup2PwrSplyOL_G_p;
  boolean rtb_DTC_ADCBackup2PwrSplySCG__e;
  boolean rtb_DTC_ADCBackup2PwrSplySCG__k;
  boolean rtb_DTC_RearDCDCPwrSplyOC_Get_e;
  boolean rtb_DTC_RearDCDCPwrSplyOC_Get_p;
  boolean rtb_DTC_RearDCDCPwrSplyOL_Get_e;
  boolean rtb_DTC_RearDCDCPwrSplyOL_Get_g;

  /* Inport: '<Root>/gPRM_au16OvrCurrThres_Val' */
  tmpIRead_1 = Rte_IRead_EFuse_Mon_Runnable_10ms_gPRM_au16OvrCurrThres_Val();

  /* Inport: '<Root>/gPRM_au16OvrCurrDebTime_Val' */
  tmpIRead_0 = Rte_IRead_EFuse_Mon_Runnable_10ms_gPRM_au16OvrCurrDebTime_Val();

  /* Inport: '<Root>/EFuse_au8stFuse_Val' */
  tmpIRead = Rte_IRead_EFuse_Mon_Runnable_10ms_EFuse_au8stFuse_Val();

  /* RootInportFunctionCallGenerator generated from: '<Root>/EFuse_Mon_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EFuse_Mon_Runnable_10ms_sys'
   */
  /* FunctionCaller: '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get2' incorporates:
   *  Constant: '<S5>/Constant2'
   */
  Rte_Call_EFuse_DiagInfo_Get_EFuse_DiagInfo_Get(3, &EFuse_Mon_DiagInfoFuse03);

  /* Switch: '<S13>/Switch' incorporates:
   *  DataTypeConversion: '<S35>/Extract Desired Bits'
   *  Switch: '<S15>/Switch'
   */
  if (((uint8)(EFuse_Mon_DiagInfoFuse03 >> 2) & 1U) != 0U) {
    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S13>/Constant'
     *  Sum: '<S13>/Add'
     *  UnitDelay: '<S13>/Unit Delay'
     */
    rtb_Switch = EFuse_Mon_DW.UnitDelay_DSTATE + 10U;
  } else {
    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S13>/Constant1'
     */
    rtb_Switch = 0U;
  }

  /* End of Switch: '<S13>/Switch' */

  /* RelationalOperator: '<S13>/Relational Operator' incorporates:
   *  Constant: '<S13>/Constant2'
   */
  EFuse_UltrasonicRadar1SCGFault = (rtb_Switch >= 100U);

  /* Switch: '<S14>/Switch' incorporates:
   *  DataTypeConversion: '<S37>/Extract Desired Bits'
   *  Switch: '<S15>/Switch2'
   */
  if (((uint8)(EFuse_Mon_DiagInfoFuse03 >> 15) & 1U) != 0U) {
    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S14>/Constant'
     *  Sum: '<S14>/Add'
     *  UnitDelay: '<S14>/Unit Delay'
     */
    rtb_Switch_p = EFuse_Mon_DW.UnitDelay_DSTATE_j + 10U;
  } else {
    /* Switch: '<S14>/Switch' incorporates:
     *  Constant: '<S14>/Constant1'
     */
    rtb_Switch_p = 0U;
  }

  /* End of Switch: '<S14>/Switch' */

  /* RelationalOperator: '<S14>/Relational Operator' incorporates:
   *  Constant: '<S14>/Constant2'
   */
  EFuse_M_UltrasonicRadar1OCFault = (rtb_Switch_p >= 100U);

  /* RelationalOperator: '<S20>/Relational Operator37' incorporates:
   *  Inport: '<Root>/gVRM_u16BatteryVolt_mv_Val'
   *  RelationalOperator: '<S20>/Relational Operator36'
   */
  rtb_Switch17 = Rte_IRead_EFuse_Mon_Runnable_10ms_gVRM_u16BatteryVolt_mv_Val();

  /* FunctionCaller: '<S8>/DTC_ADCBackup1PwrSplyOC_GetEventTested' incorporates:
   *  Inport: '<Root>/gVRM_u16BatteryVolt_mv_Val'
   *  Logic: '<S20>/Logical Operator9'
   *  RelationalOperator: '<S20>/Relational Operator36'
   *  RelationalOperator: '<S20>/Relational Operator37'
   */
  rtb_DTC_ADCBackup1PwrSplyOC_G_d = ((16000 >= rtb_Switch17) && (rtb_Switch17 >=
    9000));

  /* FunctionCaller: '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get' incorporates:
   *  Constant: '<S5>/Constant'
   */
  Rte_Call_EFuse_DiagInfo_Get_EFuse_DiagInfo_Get(1, &EFuse_Mon_DiagInfoFuse01);

  /* FunctionCaller: '<S7>/EFuse_Current_Get_EFuse_Current_Get' incorporates:
   *  Constant: '<S7>/Constant'
   */
  Rte_Call_EFuse_Current_Get_EFuse_Current_Get(1, &EFuse_Mon_EFuse_iRawFuse01);

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S6>/PA_EFuse_EnFuse01TestMod_C'
   */
  if (Rte_CData_EFuse_EnFuse01TestMod_C()) {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/PA_EFuse_iFuse01TestMod_C'
     */
    EFuse_Mon_iFuse01Fild = Rte_CData_EFuse_iFuse01TestMod_C();
  } else {
    /* Switch: '<S6>/Switch' */
    EFuse_Mon_iFuse01Fild = EFuse_Mon_EFuse_iRawFuse01;
  }

  /* End of Switch: '<S6>/Switch' */

  /* Switch: '<S146>/Switch' incorporates:
   *  Constant: '<S146>/PA_EFuse_EnProtThdCal_C'
   *  Constant: '<S146>/PA_EFuse_tiFuse01ProtEquivThd_C'
   *  Switch: '<S146>/Switch7'
   */
  if (Rte_CData_EFuse_EnProtThdCal_C()) {
    /* Switch: '<S146>/Switch1' incorporates:
     *  Constant: '<S146>/PA_EFuse_iFuse01ProtThd_C'
     */
    rtb_Switch1 = Rte_CData_EFuse_iFuse01ProtThd_C();
    tmp_1 = Rte_CData_EFuse_tiFuse01ProtEquivThd_C();
  } else {
    /* Switch: '<S146>/Switch1' */
    rtb_Switch1 = tmpIRead_1[15];
    tmp_1 = tmpIRead_0[15];
  }

  /* End of Switch: '<S146>/Switch' */

  /* DiscreteIntegrator: '<S137>/Discrete-Time Integrator' incorporates:
   *  RelationalOperator: '<S137>/Relational Operator'
   */
  if (EFuse_Mon_iFuse01Fild <= rtb_Switch1) {
    EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE = 0.0;
  }

  /* RelationalOperator: '<S137>/Relational Operator1' incorporates:
   *  DiscreteIntegrator: '<S137>/Discrete-Time Integrator'
   */
  EFuse_Mon_flgFuse01SWProt = (EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE >=
    tmp_1);

  /* SwitchCase: '<S4>/Switch Case' incorporates:
   *  Logic: '<S20>/Logical Operator'
   *  Logic: '<S20>/Logical Operator10'
   *  RelationalOperator: '<S20>/Relational Operator'
   *  RelationalOperator: '<S20>/Relational Operator1'
   *  RelationalOperator: '<S20>/Relational Operator2'
   *  RelationalOperator: '<S20>/Relational Operator3'
   */
  if (((tmpIRead[0] == 1) || (tmpIRead[0] == 3) || (tmpIRead[0] == 4) ||
       (tmpIRead[0] == 7)) && rtb_DTC_ADCBackup1PwrSplyOC_G_d) {
    /* Outputs for IfAction SubSystem: '<S4>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    /* Switch: '<S23>/Switch' incorporates:
     *  Constant: '<S23>/Constant'
     *  Constant: '<S23>/Constant1'
     *  DataTypeConversion: '<S29>/Extract Desired Bits'
     *  Switch: '<S11>/Switch'
     */
    if (((uint8)(EFuse_Mon_DiagInfoFuse01 >> 2) & 1U) != 0U) {
      tmp_2 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_2 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S23>/Switch' */

    /* FunctionCaller: '<S23>/DTC_RearDCDCPwrSplySCG_SetEventStatus' */
    Rte_Call_DTC_RearDCDCPwrSplySCG_SetEventStatus(tmp_2);

    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S23>/Constant6'
     *  Constant: '<S23>/Constant7'
     */
    if (EFuse_Mon_flgFuse01SWProt) {
      tmp_2 = DEM_EVENT_STATUS_FAILED;
    } else {
      tmp_2 = DEM_EVENT_STATUS_PASSED;
    }

    /* End of Switch: '<S23>/Switch1' */

    /* FunctionCaller: '<S23>/DTC_RearDCDCPwrSplyOL_SetEventStatus' */
    Rte_Call_DTC_RearDCDCPwrSplyOL_SetEventStatus(tmp_2);

    /* Switch: '<S23>/Switch2' incorporates:
     *  Constant: '<S23>/Constant4'
     *  Constant: '<S23>/Constant5'
     *  DataTypeConversion: '<S31>/Extract Desired Bits'
     *  Switch: '<S11>/Switch2'
     */
    if (((uint8)(EFuse_Mon_DiagInfoFuse01 >> 15) & 1U) != 0U) {
      tmp_2 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_2 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S23>/Switch2' */

    /* FunctionCaller: '<S23>/DTC_RearDCDCPwrSplyOC_SetEventStatus' */
    Rte_Call_DTC_RearDCDCPwrSplyOC_SetEventStatus(tmp_2);

    /* End of Outputs for SubSystem: '<S4>/Switch Case Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    /* FunctionCaller: '<S24>/DTC_RearDCDCPwrSplySCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S24>/Constant'
     */
    Rte_Call_DTC_RearDCDCPwrSplySCG_ResetEventDebounceStatus
      (DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S24>/DTC_RearDCDCPwrSplyOL_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S24>/Constant1'
     */
    Rte_Call_DTC_RearDCDCPwrSplyOL_ResetEventDebounceStatus
      (DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S24>/DTC_RearDCDCPwrSplyOC_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S24>/Constant2'
     */
    Rte_Call_DTC_RearDCDCPwrSplyOC_ResetEventDebounceStatus
      (DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S4>/Switch Case Action Subsystem1' */
  }

  /* End of SwitchCase: '<S4>/Switch Case' */

  /* FunctionCaller: '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get5' incorporates:
   *  Constant: '<S5>/Constant5'
   */
  Rte_Call_EFuse_DiagInfo_Get_EFuse_DiagInfo_Get(6, &EFuse_Mon_DiagInfoFuse06);

  /* SwitchCase: '<S4>/Switch Case1' incorporates:
   *  Logic: '<S20>/Logical Operator15'
   *  Logic: '<S20>/Logical Operator5'
   *  RelationalOperator: '<S20>/Relational Operator20'
   *  RelationalOperator: '<S20>/Relational Operator21'
   *  RelationalOperator: '<S20>/Relational Operator22'
   *  RelationalOperator: '<S20>/Relational Operator23'
   */
  if (((tmpIRead[5] == 1) || (tmpIRead[5] == 3) || (tmpIRead[5] == 4) ||
       (tmpIRead[5] == 7)) && rtb_DTC_ADCBackup1PwrSplyOC_G_d) {
    /* Outputs for IfAction SubSystem: '<S4>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S25>/Action Port'
     */
    /* Switch: '<S25>/Switch' incorporates:
     *  Constant: '<S25>/Constant'
     *  Constant: '<S25>/Constant1'
     *  DataTypeConversion: '<S44>/Extract Desired Bits'
     *  Switch: '<S18>/Switch'
     */
    if (((uint8)(EFuse_Mon_DiagInfoFuse06 >> 2) & 1U) != 0U) {
      tmp_2 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_2 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S25>/Switch' */

    /* FunctionCaller: '<S25>/DTC_ADCBackup2PwrSplySCG_SetEventStatus' */
    Rte_Call_DTC_ADCBackup2PwrSplySCG_SetEventStatus(tmp_2);

    /* Switch: '<S25>/Switch1' incorporates:
     *  Constant: '<S25>/Constant2'
     *  Constant: '<S25>/Constant3'
     *  DataTypeConversion: '<S45>/Extract Desired Bits'
     *  Switch: '<S18>/Switch1'
     */
    if (((uint8)(EFuse_Mon_DiagInfoFuse06 >> 4) & 1U) != 0U) {
      tmp_2 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_2 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S25>/Switch1' */

    /* FunctionCaller: '<S25>/DTC_ADCBackup2PwrSplyOL_SetEventStatus' */
    Rte_Call_DTC_ADCBackup2PwrSplyOL_SetEventStatus(tmp_2);

    /* Switch: '<S25>/Switch2' incorporates:
     *  Constant: '<S25>/Constant4'
     *  Constant: '<S25>/Constant5'
     *  DataTypeConversion: '<S46>/Extract Desired Bits'
     *  Switch: '<S18>/Switch2'
     */
    if (((uint8)(EFuse_Mon_DiagInfoFuse06 >> 15) & 1U) != 0U) {
      tmp_2 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_2 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S25>/Switch2' */

    /* FunctionCaller: '<S25>/DTC_ADCBackup2PwrSplyOC_SetEventStatus' */
    Rte_Call_DTC_ADCBackup2PwrSplyOC_SetEventStatus(tmp_2);

    /* End of Outputs for SubSystem: '<S4>/Switch Case Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/Switch Case Action Subsystem3' incorporates:
     *  ActionPort: '<S26>/Action Port'
     */
    /* FunctionCaller: '<S26>/DTC_ADCBackup2PwrSplySCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S26>/Constant'
     */
    Rte_Call_DTC_ADCBackup2PwrSplySCG_ResetEventDebounceStatus
      (DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S26>/DTC_ADCBackup2PwrSplyOL_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S26>/Constant1'
     */
    Rte_Call_DTC_ADCBackup2PwrSplyOL_ResetEventDebounceStatus
      (DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S26>/DTC_ADCBackup2PwrSplyOC_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S26>/Constant2'
     */
    Rte_Call_DTC_ADCBackup2PwrSplyOC_ResetEventDebounceStatus
      (DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S4>/Switch Case Action Subsystem3' */
  }

  /* End of SwitchCase: '<S4>/Switch Case1' */

  /* FunctionCaller: '<S8>/DTC_ADCBackup1PwrSplyOC_GetEventFailed' incorporates:
   *  RelationalOperator: '<S20>/Relational Operator16'
   */
  rtb_DTC_ADCBackup1PwrSplyOC_G_i = (tmpIRead[4] == 1);

  /* FunctionCaller: '<S8>/DTC_ADCBackup1PwrSplyOL_GetEventFailed' incorporates:
   *  RelationalOperator: '<S20>/Relational Operator17'
   */
  rtb_DTC_ADCBackup1PwrSplyOL_G_l = (tmpIRead[4] == 3);

  /* FunctionCaller: '<S8>/DTC_ADCBackup1PwrSplyOL_GetEventTested' incorporates:
   *  RelationalOperator: '<S20>/Relational Operator18'
   */
  rtb_DTC_ADCBackup1PwrSplyOL_G_a = (tmpIRead[4] == 4);

  /* FunctionCaller: '<S8>/DTC_ADCBackup1PwrSplySCG_GetEventFailed' incorporates:
   *  RelationalOperator: '<S20>/Relational Operator19'
   */
  rtb_DTC_ADCBackup1PwrSplySCG_n5 = (tmpIRead[4] == 7);

  /* FunctionCaller: '<S8>/DTC_ADCBackup1PwrSplyOC_GetEventTested' incorporates:
   *  Logic: '<S20>/Logical Operator14'
   *  Logic: '<S20>/Logical Operator4'
   */
  rtb_DTC_ADCBackup1PwrSplyOC_G_d = ((rtb_DTC_ADCBackup1PwrSplyOC_G_i ||
    rtb_DTC_ADCBackup1PwrSplyOL_G_l || rtb_DTC_ADCBackup1PwrSplyOL_G_a ||
    rtb_DTC_ADCBackup1PwrSplySCG_n5) && rtb_DTC_ADCBackup1PwrSplyOC_G_d);

  /* FunctionCaller: '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get4' incorporates:
   *  Constant: '<S5>/Constant4'
   */
  Rte_Call_EFuse_DiagInfo_Get_EFuse_DiagInfo_Get(5, &EFuse_Mon_DiagInfoFuse05);

  /* SwitchCase: '<S4>/Switch Case2' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion2'
   */
  if (rtb_DTC_ADCBackup1PwrSplyOC_G_d) {
    /* Outputs for IfAction SubSystem: '<S4>/Switch Case Action Subsystem4' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    /* Switch: '<S27>/Switch' incorporates:
     *  Constant: '<S27>/Constant'
     *  Constant: '<S27>/Constant1'
     *  DataTypeConversion: '<S41>/Extract Desired Bits'
     *  Switch: '<S17>/Switch'
     */
    if (((uint8)(EFuse_Mon_DiagInfoFuse05 >> 2) & 1U) != 0U) {
      tmp_2 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_2 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S27>/Switch' */

    /* FunctionCaller: '<S27>/DTC_ADCBackup1PwrSplySCG_SetEventStatus' */
    Rte_Call_DTC_ADCBackup1PwrSplySCG_SetEventStatus(tmp_2);

    /* Switch: '<S27>/Switch1' incorporates:
     *  Constant: '<S27>/Constant2'
     *  Constant: '<S27>/Constant3'
     *  DataTypeConversion: '<S42>/Extract Desired Bits'
     *  Switch: '<S17>/Switch1'
     */
    if (((uint8)(EFuse_Mon_DiagInfoFuse05 >> 4) & 1U) != 0U) {
      tmp_2 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_2 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S27>/Switch1' */

    /* FunctionCaller: '<S27>/DTC_ADCBackup1PwrSplyOL_SetEventStatus' */
    Rte_Call_DTC_ADCBackup1PwrSplyOL_SetEventStatus(tmp_2);

    /* Switch: '<S27>/Switch2' incorporates:
     *  Constant: '<S27>/Constant4'
     *  Constant: '<S27>/Constant5'
     *  DataTypeConversion: '<S43>/Extract Desired Bits'
     *  Switch: '<S17>/Switch2'
     */
    if (((uint8)(EFuse_Mon_DiagInfoFuse05 >> 15) & 1U) != 0U) {
      tmp_2 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      tmp_2 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S27>/Switch2' */

    /* FunctionCaller: '<S27>/DTC_ADCBackup1PwrSplyOC_SetEventStatus' */
    Rte_Call_DTC_ADCBackup1PwrSplyOC_SetEventStatus(tmp_2);

    /* End of Outputs for SubSystem: '<S4>/Switch Case Action Subsystem4' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/Switch Case Action Subsystem5' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    /* FunctionCaller: '<S28>/DTC_ADCBackup1PwrSplySCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S28>/Constant'
     */
    Rte_Call_DTC_ADCBackup1PwrSplySCG_ResetEventDebounceStatus
      (DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S28>/DTC_ADCBackup1PwrSplyOL_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S28>/Constant1'
     */
    Rte_Call_DTC_ADCBackup1PwrSplyOL_ResetEventDebounceStatus
      (DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S28>/DTC_ADCBackup1PwrSplyOC_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S28>/Constant2'
     */
    Rte_Call_DTC_ADCBackup1PwrSplyOC_ResetEventDebounceStatus
      (DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S4>/Switch Case Action Subsystem5' */
  }

  /* End of SwitchCase: '<S4>/Switch Case2' */

  /* FunctionCaller: '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get1' incorporates:
   *  Constant: '<S5>/Constant1'
   */
  Rte_Call_EFuse_DiagInfo_Get_EFuse_DiagInfo_Get(2, &EFuse_Mon_DiagInfoFuse02);

  /* FunctionCaller: '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get3' incorporates:
   *  Constant: '<S5>/Constant3'
   */
  Rte_Call_EFuse_DiagInfo_Get_EFuse_DiagInfo_Get(4, &EFuse_Mon_DiagInfoFuse04);

  /* FunctionCaller: '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get6' incorporates:
   *  Constant: '<S5>/Constant6'
   */
  Rte_Call_EFuse_DiagInfo_Get_EFuse_DiagInfo_Get(7, &EFuse_Mon_DiagInfoFuse07);

  /* FunctionCaller: '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get7' incorporates:
   *  Constant: '<S5>/Constant7'
   */
  Rte_Call_EFuse_DiagInfo_Get_EFuse_DiagInfo_Get(8, &EFuse_Mon_DiagInfoFuse08);

  /* FunctionCaller: '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get8' incorporates:
   *  Constant: '<S5>/Constant8'
   */
  Rte_Call_EFuse_DiagInfo_Get_EFuse_DiagInfo_Get(9, &EFuse_Mon_DiagInfoFuse09);

  /* FunctionCaller: '<S7>/EFuse_Current_Get_EFuse_Current_Get1' incorporates:
   *  Constant: '<S7>/Constant1'
   */
  Rte_Call_EFuse_Current_Get_EFuse_Current_Get(2, &EFuse_Mon_EFuse_iRawFuse02);

  /* Switch: '<S6>/Switch1' incorporates:
   *  Constant: '<S6>/PA_EFuse_EnFuse02TestMod_C'
   */
  if (Rte_CData_EFuse_EnFuse02TestMod_C()) {
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/PA_EFuse_iFuse02TestMod_C'
     */
    EFuse_Mon_iFuse02Fild = Rte_CData_EFuse_iFuse02TestMod_C();
  } else {
    /* Switch: '<S6>/Switch1' */
    EFuse_Mon_iFuse02Fild = EFuse_Mon_EFuse_iRawFuse02;
  }

  /* End of Switch: '<S6>/Switch1' */

  /* FunctionCaller: '<S7>/EFuse_Current_Get_EFuse_Current_Get2' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  Rte_Call_EFuse_Current_Get_EFuse_Current_Get(3, &EFuse_Mon_EFuse_iRawFuse03);

  /* Switch: '<S6>/Switch2' incorporates:
   *  Constant: '<S6>/PA_EFuse_EnFuse03TestMod_C'
   */
  if (Rte_CData_EFuse_EnFuse03TestMod_C()) {
    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/PA_EFuse_iFuse03TestMod_C'
     */
    EFuse_Mon_iFuse03Fild = Rte_CData_EFuse_iFuse03TestMod_C();
  } else {
    /* Switch: '<S6>/Switch2' */
    EFuse_Mon_iFuse03Fild = EFuse_Mon_EFuse_iRawFuse03;
  }

  /* End of Switch: '<S6>/Switch2' */

  /* FunctionCaller: '<S7>/EFuse_Current_Get_EFuse_Current_Get3' incorporates:
   *  Constant: '<S7>/Constant3'
   */
  Rte_Call_EFuse_Current_Get_EFuse_Current_Get(4, &EFuse_Mon_EFuse_iRawFuse04);

  /* Switch: '<S6>/Switch3' incorporates:
   *  Constant: '<S6>/PA_EFuse_EnFuse04TestMod_C'
   */
  if (Rte_CData_EFuse_EnFuse04TestMod_C()) {
    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S6>/PA_EFuse_iFuse04TestMod_C'
     */
    EFuse_Mon_iFuse04Fild = Rte_CData_EFuse_iFuse04TestMod_C();
  } else {
    /* Switch: '<S6>/Switch3' */
    EFuse_Mon_iFuse04Fild = EFuse_Mon_EFuse_iRawFuse04;
  }

  /* End of Switch: '<S6>/Switch3' */

  /* FunctionCaller: '<S7>/EFuse_Current_Get_EFuse_Current_Get4' incorporates:
   *  Constant: '<S7>/Constant4'
   */
  Rte_Call_EFuse_Current_Get_EFuse_Current_Get(5, &EFuse_Mon_EFuse_iRawFuse05);

  /* Switch: '<S6>/Switch4' incorporates:
   *  Constant: '<S6>/PA_EFuse_EnFuse05TestMod_C'
   */
  if (Rte_CData_EFuse_EnFuse05TestMod_C()) {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/PA_EFuse_iFuse05TestMod_C'
     */
    EFuse_Mon_iFuse05Fild = Rte_CData_EFuse_iFuse05TestMod_C();
  } else {
    /* Switch: '<S6>/Switch4' */
    EFuse_Mon_iFuse05Fild = EFuse_Mon_EFuse_iRawFuse05;
  }

  /* End of Switch: '<S6>/Switch4' */

  /* FunctionCaller: '<S7>/EFuse_Current_Get_EFuse_Current_Get5' incorporates:
   *  Constant: '<S7>/Constant5'
   */
  Rte_Call_EFuse_Current_Get_EFuse_Current_Get(6, &EFuse_Mon_EFuse_iRawFuse06);

  /* Switch: '<S6>/Switch5' incorporates:
   *  Constant: '<S6>/PA_EFuse_EnFuse06TestMod_C'
   */
  if (Rte_CData_EFuse_EnFuse06TestMod_C()) {
    /* Switch: '<S6>/Switch5' incorporates:
     *  Constant: '<S6>/PA_EFuse_iFuse06TestMod_C'
     */
    EFuse_Mon_iFuse06Fild = Rte_CData_EFuse_iFuse06TestMod_C();
  } else {
    /* Switch: '<S6>/Switch5' */
    EFuse_Mon_iFuse06Fild = EFuse_Mon_EFuse_iRawFuse06;
  }

  /* End of Switch: '<S6>/Switch5' */

  /* FunctionCaller: '<S7>/EFuse_Current_Get_EFuse_Current_Get6' incorporates:
   *  Constant: '<S7>/Constant6'
   */
  Rte_Call_EFuse_Current_Get_EFuse_Current_Get(7, &EFuse_Mon_EFuse_iRawFuse07);

  /* Switch: '<S6>/Switch6' incorporates:
   *  Constant: '<S6>/PA_EFuse_EnFuse07TestMod_C'
   */
  if (Rte_CData_EFuse_EnFuse07TestMod_C()) {
    /* Switch: '<S6>/Switch6' incorporates:
     *  Constant: '<S6>/PA_EFuse_iFuse07TestMod_C'
     */
    EFuse_Mon_iFuse07Fild = Rte_CData_EFuse_iFuse07TestMod_C();
  } else {
    /* Switch: '<S6>/Switch6' */
    EFuse_Mon_iFuse07Fild = EFuse_Mon_EFuse_iRawFuse07;
  }

  /* End of Switch: '<S6>/Switch6' */

  /* FunctionCaller: '<S7>/EFuse_Current_Get_EFuse_Current_Get7' incorporates:
   *  Constant: '<S7>/Constant7'
   */
  Rte_Call_EFuse_Current_Get_EFuse_Current_Get(8, &EFuse_Mon_EFuse_iRawFuse08);

  /* Switch: '<S6>/Switch7' incorporates:
   *  Constant: '<S6>/PA_EFuse_EnFuse08TestMod_C'
   */
  if (Rte_CData_EFuse_EnFuse08TestMod_C()) {
    /* Switch: '<S6>/Switch7' incorporates:
     *  Constant: '<S6>/PA_EFuse_iFuse08TestMod_C'
     */
    EFuse_Mon_iFuse08Fild = Rte_CData_EFuse_iFuse08TestMod_C();
  } else {
    /* Switch: '<S6>/Switch7' */
    EFuse_Mon_iFuse08Fild = EFuse_Mon_EFuse_iRawFuse08;
  }

  /* End of Switch: '<S6>/Switch7' */

  /* FunctionCaller: '<S7>/EFuse_Current_Get_EFuse_Current_Get8' incorporates:
   *  Constant: '<S7>/Constant8'
   */
  Rte_Call_EFuse_Current_Get_EFuse_Current_Get(9, &EFuse_Mon_EFuse_iRawFuse09);

  /* Switch: '<S6>/Switch8' incorporates:
   *  Constant: '<S6>/PA_EFuse_EnFuse09TestMod_C'
   */
  if (Rte_CData_EFuse_EnFuse09TestMod_C()) {
    /* Switch: '<S6>/Switch8' incorporates:
     *  Constant: '<S6>/PA_EFuse_iFuse09TestMod_C'
     */
    EFuse_Mon_iFuse09Fild = Rte_CData_EFuse_iFuse09TestMod_C();
  } else {
    /* Switch: '<S6>/Switch8' */
    EFuse_Mon_iFuse09Fild = EFuse_Mon_EFuse_iRawFuse09;
  }

  /* End of Switch: '<S6>/Switch8' */

  /* FunctionCaller: '<S8>/DTC_ADCBackup1PwrSplyOC_GetEventFailed' */
  Rte_Call_DTC_ADCBackup1PwrSplyOC_GetEventFailed
    (&rtb_DTC_ADCBackup1PwrSplyOC_G_i);

  /* FunctionCaller: '<S8>/DTC_ADCBackup1PwrSplyOC_GetEventTested' */
  Rte_Call_DTC_ADCBackup1PwrSplyOC_GetEventTested
    (&rtb_DTC_ADCBackup1PwrSplyOC_G_d);

  /* FunctionCaller: '<S8>/DTC_ADCBackup1PwrSplyOL_GetEventFailed' */
  Rte_Call_DTC_ADCBackup1PwrSplyOL_GetEventFailed
    (&rtb_DTC_ADCBackup1PwrSplyOL_G_l);

  /* FunctionCaller: '<S8>/DTC_ADCBackup1PwrSplyOL_GetEventTested' */
  Rte_Call_DTC_ADCBackup1PwrSplyOL_GetEventTested
    (&rtb_DTC_ADCBackup1PwrSplyOL_G_a);

  /* FunctionCaller: '<S8>/DTC_ADCBackup1PwrSplySCG_GetEventFailed' */
  Rte_Call_DTC_ADCBackup1PwrSplySCG_GetEventFailed
    (&rtb_DTC_ADCBackup1PwrSplySCG_n5);

  /* FunctionCaller: '<S8>/DTC_ADCBackup1PwrSplySCG_GetEventTested' */
  Rte_Call_DTC_ADCBackup1PwrSplySCG_GetEventTested
    (&rtb_DTC_ADCBackup1PwrSplySCG__g);

  /* FunctionCaller: '<S8>/DTC_ADCBackup2PwrSplyOC_GetEventFailed' */
  Rte_Call_DTC_ADCBackup2PwrSplyOC_GetEventFailed
    (&rtb_DTC_ADCBackup2PwrSplyOC_G_g);

  /* FunctionCaller: '<S8>/DTC_ADCBackup2PwrSplyOC_GetEventTested' */
  Rte_Call_DTC_ADCBackup2PwrSplyOC_GetEventTested
    (&rtb_DTC_ADCBackup2PwrSplyOC_G_i);

  /* FunctionCaller: '<S8>/DTC_ADCBackup2PwrSplyOL_GetEventFailed' */
  Rte_Call_DTC_ADCBackup2PwrSplyOL_GetEventFailed
    (&rtb_DTC_ADCBackup2PwrSplyOL_G_m);

  /* FunctionCaller: '<S8>/DTC_ADCBackup2PwrSplyOL_GetEventTested' */
  Rte_Call_DTC_ADCBackup2PwrSplyOL_GetEventTested
    (&rtb_DTC_ADCBackup2PwrSplyOL_G_p);

  /* FunctionCaller: '<S8>/DTC_ADCBackup2PwrSplySCG_GetEventFailed' */
  Rte_Call_DTC_ADCBackup2PwrSplySCG_GetEventFailed
    (&rtb_DTC_ADCBackup2PwrSplySCG__k);

  /* FunctionCaller: '<S8>/DTC_ADCBackup2PwrSplySCG_GetEventTested' */
  Rte_Call_DTC_ADCBackup2PwrSplySCG_GetEventTested
    (&rtb_DTC_ADCBackup2PwrSplySCG__e);

  /* FunctionCaller: '<S8>/DTC_RearDCDCPwrSplyOC_GetEventFailed' */
  Rte_Call_DTC_RearDCDCPwrSplyOC_GetEventFailed(&rtb_DTC_RearDCDCPwrSplyOC_Get_p);

  /* FunctionCaller: '<S8>/DTC_RearDCDCPwrSplyOC_GetEventTested' */
  Rte_Call_DTC_RearDCDCPwrSplyOC_GetEventTested(&rtb_DTC_RearDCDCPwrSplyOC_Get_e);

  /* FunctionCaller: '<S8>/DTC_RearDCDCPwrSplySCG_GetEventFailed' */
  Rte_Call_DTC_RearDCDCPwrSplySCG_GetEventFailed
    (&rtb_DTC_RearDCDCPwrSplyOL_Get_e);

  /* FunctionCaller: '<S8>/DTC_RearDCDCPwrSplySCG_GetEventTested' */
  Rte_Call_DTC_RearDCDCPwrSplySCG_GetEventTested
    (&rtb_DTC_RearDCDCPwrSplyOL_Get_g);

  /* Logic: '<S8>/Logical Operator' */
  EFus_DTCRearDCDCPwrSplySCGFault = (rtb_DTC_RearDCDCPwrSplyOL_Get_g &&
    rtb_DTC_RearDCDCPwrSplyOL_Get_e);

  /* Logic: '<S8>/Logical Operator2' */
  EFuse_DTCRearDCDCPwrSplyOCFault = (rtb_DTC_RearDCDCPwrSplyOC_Get_e &&
    rtb_DTC_RearDCDCPwrSplyOC_Get_p);

  /* Logic: '<S8>/Logical Operator3' */
  EF_DTCADCBackup1PwrSplySCGFault = (rtb_DTC_ADCBackup1PwrSplySCG__g &&
    rtb_DTC_ADCBackup1PwrSplySCG_n5);

  /* Logic: '<S8>/Logical Operator4' */
  EFu_DTCADCBackup1PwrSplyOLFault = (rtb_DTC_ADCBackup1PwrSplyOL_G_a &&
    rtb_DTC_ADCBackup1PwrSplyOL_G_l);

  /* Logic: '<S8>/Logical Operator5' */
  EFu_DTCADCBackup1PwrSplyOCFault = (rtb_DTC_ADCBackup1PwrSplyOC_G_d &&
    rtb_DTC_ADCBackup1PwrSplyOC_G_i);

  /* Logic: '<S8>/Logical Operator6' */
  EF_DTCADCBackup2PwrSplySCGFault = (rtb_DTC_ADCBackup2PwrSplySCG__e &&
    rtb_DTC_ADCBackup2PwrSplySCG__k);

  /* Logic: '<S8>/Logical Operator7' */
  EFu_DTCADCBackup2PwrSplyOLFault = (rtb_DTC_ADCBackup2PwrSplyOL_G_p &&
    rtb_DTC_ADCBackup2PwrSplyOL_G_m);

  /* Logic: '<S8>/Logical Operator8' */
  EFu_DTCADCBackup2PwrSplyOCFault = (rtb_DTC_ADCBackup2PwrSplyOC_G_i &&
    rtb_DTC_ADCBackup2PwrSplyOC_G_g);

  /* Switch: '<S56>/Switch' */
  if (EFus_DTCRearDCDCPwrSplySCGFault) {
    rtb_Switch8_lx = EFuse_Mon_ConstB.FixPtBitwiseOperator1;
  } else {
    rtb_Switch8_lx = EFuse_Mon_ConstB.FixPtBitwiseOperator5;
  }

  /* End of Switch: '<S56>/Switch' */

  /* Switch: '<S56>/Switch8' */
  if (EFuse_DTCRearDCDCPwrSplyOCFault) {
    /* Switch: '<S56>/Switch8' incorporates:
     *  S-Function (sfix_bitop): '<S66>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S66>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S66>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S71>/FixPt Bitwise Operator1'
     *  Switch: '<S56>/Switch7'
     */
    rtb_Switch7 = ~(~rtb_Switch8_lx | 16U) | 32768U;
  } else {
    /* Switch: '<S56>/Switch8' incorporates:
     *  S-Function (sfix_bitop): '<S66>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S66>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S66>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S67>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S67>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S67>/FixPt Bitwise Operator5'
     *  Switch: '<S56>/Switch7'
     */
    rtb_Switch7 = ~(~~(~rtb_Switch8_lx | 16U) | 32768U);
  }

  /* End of Switch: '<S56>/Switch8' */

  /* Switch: '<S56>/Switch9' */
  if (EFuse_Mon_flgFuse01SWProt) {
    /* Outport: '<Root>/EFuse_au32ErrInfo_Val' incorporates:
     *  S-Function (sfix_bitop): '<S72>/FixPt Bitwise Operator1'
     *  Switch: '<S56>/Switch9'
     */
    rtb_Switch7_0[0] = rtb_Switch7 | 16777216U;
  } else {
    /* Outport: '<Root>/EFuse_au32ErrInfo_Val' incorporates:
     *  S-Function (sfix_bitop): '<S68>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S68>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S68>/FixPt Bitwise Operator5'
     *  Switch: '<S56>/Switch9'
     */
    rtb_Switch7_0[0] = ~(~rtb_Switch7 | 16777216U);
  }

  /* End of Switch: '<S56>/Switch9' */

  /* Switch: '<S58>/Switch' */
  if (EFuse_UltrasonicRadar1SCGFault) {
    rtb_Switch8_lx = EFuse_Mon_ConstB.FixPtBitwiseOperator1_n;
  } else {
    rtb_Switch8_lx = EFuse_Mon_ConstB.FixPtBitwiseOperator5_l;
  }

  /* End of Switch: '<S58>/Switch' */

  /* Switch: '<S58>/Switch8' */
  if (EFuse_M_UltrasonicRadar1OCFault) {
    /* Switch: '<S58>/Switch8' incorporates:
     *  S-Function (sfix_bitop): '<S82>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S82>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S82>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S87>/FixPt Bitwise Operator1'
     *  Switch: '<S58>/Switch7'
     */
    rtb_Switch8_lx = ~(~rtb_Switch8_lx | 16U) | 32768U;
  } else {
    /* Switch: '<S58>/Switch8' incorporates:
     *  S-Function (sfix_bitop): '<S82>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S82>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S82>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S83>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S83>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S83>/FixPt Bitwise Operator5'
     *  Switch: '<S58>/Switch7'
     */
    rtb_Switch8_lx = ~(~~(~rtb_Switch8_lx | 16U) | 32768U);
  }

  /* End of Switch: '<S58>/Switch8' */

  /* Switch: '<S146>/Switch2' incorporates:
   *  Constant: '<S146>/PA_EFuse_EnProtThdCal_C2'
   *  Constant: '<S146>/PA_EFuse_tiFuse03ProtEquivThd_C'
   *  Switch: '<S146>/Switch9'
   */
  if (Rte_CData_EFuse_EnProtThdCal_C()) {
    /* Switch: '<S146>/Switch15' incorporates:
     *  Constant: '<S146>/PA_EFuse_iFuse03ProtThd_C'
     */
    rtb_Switch7 = Rte_CData_EFuse_iFuse03ProtThd_C();
    tmp_1 = Rte_CData_EFuse_tiFuse03ProtEquivThd_C();
  } else {
    /* Switch: '<S146>/Switch15' */
    rtb_Switch7 = tmpIRead_1[17];
    tmp_1 = tmpIRead_0[17];
  }

  /* End of Switch: '<S146>/Switch2' */

  /* DiscreteIntegrator: '<S139>/Discrete-Time Integrator' incorporates:
   *  RelationalOperator: '<S139>/Relational Operator'
   */
  if (EFuse_Mon_iFuse03Fild <= rtb_Switch7) {
    EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_j = 0.0;
  }

  /* RelationalOperator: '<S139>/Relational Operator1' incorporates:
   *  DiscreteIntegrator: '<S139>/Discrete-Time Integrator'
   */
  EFuse_Mon_flgFuse03SWProt = (EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_j >=
    tmp_1);

  /* Switch: '<S58>/Switch9' */
  if (EFuse_Mon_flgFuse03SWProt) {
    /* Outport: '<Root>/EFuse_au32ErrInfo_Val' incorporates:
     *  S-Function (sfix_bitop): '<S88>/FixPt Bitwise Operator1'
     *  Switch: '<S58>/Switch9'
     */
    rtb_Switch7_0[2] = rtb_Switch8_lx | 16777216U;
  } else {
    /* Outport: '<Root>/EFuse_au32ErrInfo_Val' incorporates:
     *  S-Function (sfix_bitop): '<S84>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S84>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S84>/FixPt Bitwise Operator5'
     *  Switch: '<S58>/Switch9'
     */
    rtb_Switch7_0[2] = ~(~rtb_Switch8_lx | 16777216U);
  }

  /* End of Switch: '<S58>/Switch9' */

  /* Switch: '<S60>/Switch7' incorporates:
   *  Switch: '<S60>/Switch'
   */
  if (EFu_DTCADCBackup1PwrSplyOLFault) {
    /* Switch: '<S60>/Switch' */
    if (EF_DTCADCBackup1PwrSplySCGFault) {
      rtb_Switch8_lx = EFuse_Mon_ConstB.FixPtBitwiseOperator1_f4;
    } else {
      rtb_Switch8_lx = EFuse_Mon_ConstB.FixPtBitwiseOperator5_b;
    }

    /* Switch: '<S60>/Switch7' incorporates:
     *  S-Function (sfix_bitop): '<S102>/FixPt Bitwise Operator1'
     */
    rtb_Switch8_lx |= 16U;
  } else {
    if (EF_DTCADCBackup1PwrSplySCGFault) {
      /* Switch: '<S60>/Switch' */
      rtb_Switch8_lx = EFuse_Mon_ConstB.FixPtBitwiseOperator1_f4;
    } else {
      /* Switch: '<S60>/Switch' */
      rtb_Switch8_lx = EFuse_Mon_ConstB.FixPtBitwiseOperator5_b;
    }

    /* Switch: '<S60>/Switch7' incorporates:
     *  S-Function (sfix_bitop): '<S98>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S98>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S98>/FixPt Bitwise Operator5'
     */
    rtb_Switch8_lx = ~(~rtb_Switch8_lx | 16U);
  }

  /* End of Switch: '<S60>/Switch7' */

  /* Switch: '<S60>/Switch8' */
  if (EFu_DTCADCBackup1PwrSplyOCFault) {
    /* Switch: '<S60>/Switch8' incorporates:
     *  S-Function (sfix_bitop): '<S103>/FixPt Bitwise Operator1'
     */
    rtb_Switch8_lx |= 32768U;
  } else {
    /* Switch: '<S60>/Switch8' incorporates:
     *  S-Function (sfix_bitop): '<S99>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S99>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S99>/FixPt Bitwise Operator5'
     */
    rtb_Switch8_lx = ~(~rtb_Switch8_lx | 32768U);
  }

  /* End of Switch: '<S60>/Switch8' */

  /* Outport: '<Root>/EFuse_au32ErrInfo_Val' incorporates:
   *  S-Function (sfix_bitop): '<S100>/FixPt Bitwise Operator3'
   *  S-Function (sfix_bitop): '<S100>/FixPt Bitwise Operator4'
   *  S-Function (sfix_bitop): '<S100>/FixPt Bitwise Operator5'
   *  Switch: '<S60>/Switch9'
   */
  rtb_Switch7_0[4] = ~(~rtb_Switch8_lx | 16777216U);

  /* Switch: '<S61>/Switch7' incorporates:
   *  Switch: '<S61>/Switch'
   */
  if (EFu_DTCADCBackup2PwrSplyOLFault) {
    /* Switch: '<S61>/Switch' */
    if (EF_DTCADCBackup2PwrSplySCGFault) {
      rtb_Switch8_lx = EFuse_Mon_ConstB.FixPtBitwiseOperator1_es;
    } else {
      rtb_Switch8_lx = EFuse_Mon_ConstB.FixPtBitwiseOperator5_i3;
    }

    /* Switch: '<S61>/Switch7' incorporates:
     *  S-Function (sfix_bitop): '<S110>/FixPt Bitwise Operator1'
     */
    rtb_Switch8_lx |= 16U;
  } else {
    if (EF_DTCADCBackup2PwrSplySCGFault) {
      /* Switch: '<S61>/Switch' */
      rtb_Switch8_lx = EFuse_Mon_ConstB.FixPtBitwiseOperator1_es;
    } else {
      /* Switch: '<S61>/Switch' */
      rtb_Switch8_lx = EFuse_Mon_ConstB.FixPtBitwiseOperator5_i3;
    }

    /* Switch: '<S61>/Switch7' incorporates:
     *  S-Function (sfix_bitop): '<S106>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S106>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S106>/FixPt Bitwise Operator5'
     */
    rtb_Switch8_lx = ~(~rtb_Switch8_lx | 16U);
  }

  /* End of Switch: '<S61>/Switch7' */

  /* Switch: '<S61>/Switch8' */
  if (EFu_DTCADCBackup2PwrSplyOCFault) {
    /* Switch: '<S61>/Switch8' incorporates:
     *  S-Function (sfix_bitop): '<S111>/FixPt Bitwise Operator1'
     */
    rtb_Switch8_lx |= 32768U;
  } else {
    /* Switch: '<S61>/Switch8' incorporates:
     *  S-Function (sfix_bitop): '<S107>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S107>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S107>/FixPt Bitwise Operator5'
     */
    rtb_Switch8_lx = ~(~rtb_Switch8_lx | 32768U);
  }

  /* End of Switch: '<S61>/Switch8' */

  /* Outport: '<Root>/EFuse_au32ErrInfo_Val' incorporates:
   *  S-Function (sfix_bitop): '<S108>/FixPt Bitwise Operator3'
   *  S-Function (sfix_bitop): '<S108>/FixPt Bitwise Operator4'
   *  S-Function (sfix_bitop): '<S108>/FixPt Bitwise Operator5'
   *  Switch: '<S61>/Switch9'
   */
  rtb_Switch7_0[5] = ~(~rtb_Switch8_lx | 16777216U);

  /* FunctionCaller: '<S8>/DTC_RearDCDCPwrSplyOL_GetEventFailed' */
  Rte_Call_DTC_RearDCDCPwrSplyOL_GetEventFailed(&rtb_DTC_RearDCDCPwrSplyOL_Get_g);

  /* FunctionCaller: '<S8>/DTC_RearDCDCPwrSplyOL_GetEventTested' */
  Rte_Call_DTC_RearDCDCPwrSplyOL_GetEventTested(&rtb_DTC_RearDCDCPwrSplyOL_Get_e);

  /* Logic: '<S8>/Logical Operator1' */
  EFuse_DTCRearDCDCPwrSplyOLFault = (rtb_DTC_RearDCDCPwrSplyOL_Get_e &&
    rtb_DTC_RearDCDCPwrSplyOL_Get_g);

  /* Product: '<S137>/Divide' */
  u0 = (float64)EFuse_Mon_iFuse01Fild / (float64)rtb_Switch1;

  /* Switch: '<S146>/Switch1' incorporates:
   *  Constant: '<S146>/PA_EFuse_EnProtThdCal_C1'
   *  Constant: '<S146>/PA_EFuse_tiFuse02ProtEquivThd_C'
   *  Constant: '<S9>/Constant4'
   *  Switch: '<S146>/Switch8'
   */
  if (Rte_CData_EFuse_EnProtThdCal_C()) {
    /* Switch: '<S146>/Switch1' incorporates:
     *  Constant: '<S146>/PA_EFuse_iFuse02ProtThd_C'
     */
    rtb_Switch1 = Rte_CData_EFuse_iFuse02ProtThd_C();
    tmp_1 = Rte_CData_EFuse_tiFuse02ProtEquivThd_C();
  } else {
    /* Switch: '<S146>/Switch1' incorporates:
     *  Constant: '<S9>/Constant5'
     */
    rtb_Switch1 = 65535U;
    tmp_1 = 500U;
  }

  /* End of Switch: '<S146>/Switch1' */

  /* DiscreteIntegrator: '<S138>/Discrete-Time Integrator' incorporates:
   *  RelationalOperator: '<S138>/Relational Operator'
   */
  if (EFuse_Mon_iFuse02Fild <= rtb_Switch1) {
    EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_o = 0.0;
  }

  /* RelationalOperator: '<S138>/Relational Operator1' incorporates:
   *  DiscreteIntegrator: '<S138>/Discrete-Time Integrator'
   */
  EFuse_Mon_flgFuse02SWProt = (EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_o >=
    tmp_1);

  /* Product: '<S139>/Divide' */
  u0_0 = (float64)EFuse_Mon_iFuse03Fild / (float64)rtb_Switch7;

  /* Switch: '<S146>/Switch3' incorporates:
   *  Constant: '<S146>/PA_EFuse_EnProtThdCal_C3'
   */
  if (Rte_CData_EFuse_EnProtThdCal_C()) {
    /* Switch: '<S146>/Switch15' incorporates:
     *  Constant: '<S146>/PA_EFuse_iFuse04ProtThd_C'
     */
    rtb_Switch7 = Rte_CData_EFuse_iFuse04ProtThd_C();
  } else {
    /* Switch: '<S146>/Switch15' incorporates:
     *  Constant: '<S9>/Constant13'
     */
    rtb_Switch7 = 65535U;
  }

  /* End of Switch: '<S146>/Switch3' */

  /* DiscreteIntegrator: '<S140>/Discrete-Time Integrator' incorporates:
   *  RelationalOperator: '<S140>/Relational Operator'
   */
  if (EFuse_Mon_iFuse04Fild <= rtb_Switch7) {
    EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_h = 0.0;
  }

  /* Product: '<S140>/Divide' */
  u0_1 = (float64)EFuse_Mon_iFuse04Fild / (float64)rtb_Switch7;

  /* Switch: '<S146>/Switch10' incorporates:
   *  Constant: '<S146>/PA_EFuse_EnProtThdCal_C10'
   *  Constant: '<S146>/PA_EFuse_tiFuse04ProtEquivThd_C'
   *  Constant: '<S9>/Constant10'
   *  Switch: '<S146>/Switch4'
   */
  if (Rte_CData_EFuse_EnProtThdCal_C()) {
    tmp_1 = Rte_CData_EFuse_tiFuse04ProtEquivThd_C();

    /* Switch: '<S146>/Switch15' incorporates:
     *  Constant: '<S146>/PA_EFuse_iFuse05ProtThd_C'
     *  Constant: '<S146>/PA_EFuse_tiFuse04ProtEquivThd_C'
     */
    rtb_Switch7 = Rte_CData_EFuse_iFuse05ProtThd_C();
  } else {
    tmp_1 = 500U;

    /* Switch: '<S146>/Switch15' incorporates:
     *  Constant: '<S9>/Constant10'
     */
    rtb_Switch7 = tmpIRead_1[13];
  }

  /* End of Switch: '<S146>/Switch10' */

  /* RelationalOperator: '<S140>/Relational Operator1' incorporates:
   *  DiscreteIntegrator: '<S140>/Discrete-Time Integrator'
   */
  EFuse_Mon_flgFuse04SWProt = (EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_h >=
    tmp_1);

  /* DiscreteIntegrator: '<S141>/Discrete-Time Integrator' incorporates:
   *  RelationalOperator: '<S141>/Relational Operator'
   */
  if (EFuse_Mon_iFuse05Fild <= rtb_Switch7) {
    EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_g = 0.0;
  }

  /* Product: '<S141>/Divide' */
  u0_2 = (float64)EFuse_Mon_iFuse05Fild / (float64)rtb_Switch7;

  /* Switch: '<S146>/Switch11' incorporates:
   *  Constant: '<S146>/PA_EFuse_EnProtThdCal_C11'
   *  Constant: '<S146>/PA_EFuse_tiFuse05ProtEquivThd_C'
   *  Switch: '<S146>/Switch5'
   */
  if (Rte_CData_EFuse_EnProtThdCal_C()) {
    tmp_1 = Rte_CData_EFuse_tiFuse05ProtEquivThd_C();

    /* Switch: '<S146>/Switch15' incorporates:
     *  Constant: '<S146>/PA_EFuse_iFuse06ProtThd_C'
     *  Constant: '<S146>/PA_EFuse_tiFuse05ProtEquivThd_C'
     */
    rtb_Switch7 = Rte_CData_EFuse_iFuse06ProtThd_C();
  } else {
    tmp_1 = tmpIRead_0[13];

    /* Switch: '<S146>/Switch15' */
    rtb_Switch7 = tmpIRead_1[14];
  }

  /* End of Switch: '<S146>/Switch11' */

  /* RelationalOperator: '<S141>/Relational Operator1' incorporates:
   *  DiscreteIntegrator: '<S141>/Discrete-Time Integrator'
   */
  EFuse_Mon_flgFuse05SWProt = (EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_g >=
    tmp_1);

  /* DiscreteIntegrator: '<S142>/Discrete-Time Integrator' incorporates:
   *  RelationalOperator: '<S142>/Relational Operator'
   */
  if (EFuse_Mon_iFuse06Fild <= rtb_Switch7) {
    EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_b = 0.0;
  }

  /* Product: '<S142>/Divide' */
  u0_3 = (float64)EFuse_Mon_iFuse06Fild / (float64)rtb_Switch7;

  /* Switch: '<S146>/Switch12' incorporates:
   *  Constant: '<S146>/PA_EFuse_EnProtThdCal_C12'
   *  Constant: '<S146>/PA_EFuse_tiFuse06ProtEquivThd_C'
   *  Switch: '<S146>/Switch6'
   */
  if (Rte_CData_EFuse_EnProtThdCal_C()) {
    tmp_1 = Rte_CData_EFuse_tiFuse06ProtEquivThd_C();

    /* Switch: '<S146>/Switch15' incorporates:
     *  Constant: '<S146>/PA_EFuse_iFuse07ProtThd_C'
     *  Constant: '<S146>/PA_EFuse_tiFuse06ProtEquivThd_C'
     */
    rtb_Switch7 = Rte_CData_EFuse_iFuse07ProtThd_C();
  } else {
    tmp_1 = tmpIRead_0[14];

    /* Switch: '<S146>/Switch15' incorporates:
     *  Constant: '<S9>/Constant3'
     */
    rtb_Switch7 = 65535U;
  }

  /* End of Switch: '<S146>/Switch12' */

  /* RelationalOperator: '<S142>/Relational Operator1' incorporates:
   *  DiscreteIntegrator: '<S142>/Discrete-Time Integrator'
   */
  EFuse_Mon_flgFuse06SWProt = (EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_b >=
    tmp_1);

  /* DiscreteIntegrator: '<S143>/Discrete-Time Integrator' incorporates:
   *  RelationalOperator: '<S143>/Relational Operator'
   */
  if (EFuse_Mon_iFuse07Fild <= rtb_Switch7) {
    EFuse_Mon_DW.DiscreteTimeIntegrator_DSTAT_bj = 0.0;
  }

  /* Product: '<S143>/Divide' */
  u0_4 = (float64)EFuse_Mon_iFuse07Fild / (float64)rtb_Switch7;

  /* Switch: '<S146>/Switch13' incorporates:
   *  Constant: '<S146>/PA_EFuse_EnProtThdCal_C13'
   *  Constant: '<S146>/PA_EFuse_tiFuse07ProtEquivThd_C'
   *  Constant: '<S9>/Constant7'
   *  Switch: '<S146>/Switch14'
   */
  if (Rte_CData_EFuse_EnProtThdCal_C()) {
    tmp_1 = Rte_CData_EFuse_tiFuse07ProtEquivThd_C();

    /* Switch: '<S146>/Switch15' incorporates:
     *  Constant: '<S146>/PA_EFuse_iFuse08ProtThd_C'
     *  Constant: '<S146>/PA_EFuse_tiFuse07ProtEquivThd_C'
     */
    rtb_Switch7 = Rte_CData_EFuse_iFuse08ProtThd_C();
  } else {
    tmp_1 = 500U;

    /* Switch: '<S146>/Switch15' incorporates:
     *  Constant: '<S9>/Constant1'
     *  Constant: '<S9>/Constant7'
     */
    rtb_Switch7 = 65535U;
  }

  /* End of Switch: '<S146>/Switch13' */

  /* RelationalOperator: '<S143>/Relational Operator1' incorporates:
   *  DiscreteIntegrator: '<S143>/Discrete-Time Integrator'
   */
  EFuse_Mon_flgFuse07SWProt = (EFuse_Mon_DW.DiscreteTimeIntegrator_DSTAT_bj >=
    tmp_1);

  /* DiscreteIntegrator: '<S144>/Discrete-Time Integrator' incorporates:
   *  RelationalOperator: '<S144>/Relational Operator'
   */
  if (EFuse_Mon_iFuse08Fild <= rtb_Switch7) {
    EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_a = 0.0;
  }

  /* Switch: '<S146>/Switch15' incorporates:
   *  Constant: '<S146>/PA_EFuse_EnProtThdCal_C15'
   *  Constant: '<S146>/PA_EFuse_iFuse09ProtThd_C'
   *  Constant: '<S9>/Constant8'
   *  Switch: '<S146>/Switch16'
   */
  if (Rte_CData_EFuse_EnProtThdCal_C()) {
    rtb_Switch8_lx = Rte_CData_EFuse_iFuse09ProtThd_C();

    /* Switch: '<S146>/Switch17' incorporates:
     *  Constant: '<S146>/PA_EFuse_iFuse09ProtThd_C'
     *  Constant: '<S146>/PA_EFuse_tiFuse08ProtEquivThd_C'
     */
    rtb_Switch17 = Rte_CData_EFuse_tiFuse08ProtEquivThd_C();
  } else {
    rtb_Switch8_lx = 65535U;

    /* Switch: '<S146>/Switch17' incorporates:
     *  Constant: '<S9>/Constant2'
     *  Constant: '<S9>/Constant8'
     */
    rtb_Switch17 = 500U;
  }

  /* End of Switch: '<S146>/Switch15' */

  /* RelationalOperator: '<S144>/Relational Operator1' incorporates:
   *  DiscreteIntegrator: '<S144>/Discrete-Time Integrator'
   */
  EFuse_Mon_flgFuse08SWProt = (EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_a >=
    rtb_Switch8_lx);

  /* DiscreteIntegrator: '<S145>/Discrete-Time Integrator' incorporates:
   *  RelationalOperator: '<S145>/Relational Operator'
   */
  if (EFuse_Mon_iFuse09Fild <= rtb_Switch17) {
    EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_m = 0.0;
  }

  /* Switch: '<S146>/Switch17' incorporates:
   *  Constant: '<S146>/PA_EFuse_EnProtThdCal_C17'
   *  Constant: '<S146>/PA_EFuse_tiFuse09ProtEquivThd_C'
   *  Constant: '<S9>/Constant12'
   */
  if (Rte_CData_EFuse_EnProtThdCal_C()) {
    tmp_1 = Rte_CData_EFuse_tiFuse09ProtEquivThd_C();
  } else {
    tmp_1 = 500U;
  }

  /* End of Switch: '<S146>/Switch17' */

  /* RelationalOperator: '<S145>/Relational Operator1' incorporates:
   *  DiscreteIntegrator: '<S145>/Discrete-Time Integrator'
   */
  EFuse_Mon_flgFuse09SWProt = (EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_m >=
    tmp_1);

  /* FunctionCaller: '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get' incorporates:
   *  Constant: '<S10>/Constant'
   */
  Rte_Call_EFuse_ActMode_Get_EFuse_SleepState_Get(1, &EFuse_Mon_stSleepFuse01);

  /* FunctionCaller: '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get1' incorporates:
   *  Constant: '<S10>/Constant1'
   */
  Rte_Call_EFuse_ActMode_Get_EFuse_SleepState_Get(2, &EFuse_Mon_stSleepFuse02);

  /* FunctionCaller: '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get2' incorporates:
   *  Constant: '<S10>/Constant2'
   */
  Rte_Call_EFuse_ActMode_Get_EFuse_SleepState_Get(3, &EFuse_Mon_stSleepFuse03);

  /* FunctionCaller: '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get3' incorporates:
   *  Constant: '<S10>/Constant3'
   */
  Rte_Call_EFuse_ActMode_Get_EFuse_SleepState_Get(4, &EFuse_Mon_stSleepFuse04);

  /* FunctionCaller: '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get4' incorporates:
   *  Constant: '<S10>/Constant4'
   */
  Rte_Call_EFuse_ActMode_Get_EFuse_SleepState_Get(5, &EFuse_Mon_stSleepFuse05);

  /* FunctionCaller: '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get5' incorporates:
   *  Constant: '<S10>/Constant5'
   */
  Rte_Call_EFuse_ActMode_Get_EFuse_SleepState_Get(6, &EFuse_Mon_stSleepFuse06);

  /* FunctionCaller: '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get6' incorporates:
   *  Constant: '<S10>/Constant6'
   */
  Rte_Call_EFuse_ActMode_Get_EFuse_SleepState_Get(7, &EFuse_Mon_stSleepFuse07);

  /* FunctionCaller: '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get7' incorporates:
   *  Constant: '<S10>/Constant7'
   */
  Rte_Call_EFuse_ActMode_Get_EFuse_SleepState_Get(8, &EFuse_Mon_stSleepFuse08);

  /* FunctionCaller: '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get8' incorporates:
   *  Constant: '<S10>/Constant8'
   */
  Rte_Call_EFuse_ActMode_Get_EFuse_SleepState_Get(9, &EFuse_Mon_stSleepFuse09);

  /* Update for UnitDelay: '<S13>/Unit Delay' */
  EFuse_Mon_DW.UnitDelay_DSTATE = rtb_Switch;

  /* Update for UnitDelay: '<S14>/Unit Delay' */
  EFuse_Mon_DW.UnitDelay_DSTATE_j = rtb_Switch_p;

  /* Update for DiscreteIntegrator: '<S137>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S137>/Constant1'
   *  Math: '<S137>/Math Function'
   *  Sum: '<S137>/Subtract'
   */
  EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE += (pow(u0, 2.0) - 1.0) * 0.01;

  /* Update for DiscreteIntegrator: '<S139>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S139>/Constant1'
   *  Math: '<S139>/Math Function'
   *  Sum: '<S139>/Subtract'
   */
  EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_j += (pow(u0_0, 2.0) - 1.0) * 0.01;

  /* Update for DiscreteIntegrator: '<S138>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S138>/Constant1'
   *  Math: '<S138>/Math Function'
   *  Product: '<S138>/Divide'
   *  Sum: '<S138>/Subtract'
   */
  EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_o += (pow((float64)
    EFuse_Mon_iFuse02Fild / (float64)rtb_Switch1, 2.0) - 1.0) * 0.01;

  /* Update for DiscreteIntegrator: '<S140>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S140>/Constant1'
   *  Math: '<S140>/Math Function'
   *  Sum: '<S140>/Subtract'
   */
  EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_h += (pow(u0_1, 2.0) - 1.0) * 0.01;

  /* Update for DiscreteIntegrator: '<S141>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S141>/Constant1'
   *  Math: '<S141>/Math Function'
   *  Sum: '<S141>/Subtract'
   */
  EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_g += (pow(u0_2, 2.0) - 1.0) * 0.01;

  /* Update for DiscreteIntegrator: '<S142>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S142>/Constant1'
   *  Math: '<S142>/Math Function'
   *  Sum: '<S142>/Subtract'
   */
  EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_b += (pow(u0_3, 2.0) - 1.0) * 0.01;

  /* Update for DiscreteIntegrator: '<S143>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S143>/Constant1'
   *  Math: '<S143>/Math Function'
   *  Sum: '<S143>/Subtract'
   */
  EFuse_Mon_DW.DiscreteTimeIntegrator_DSTAT_bj += (pow(u0_4, 2.0) - 1.0) * 0.01;

  /* Update for DiscreteIntegrator: '<S144>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S144>/Constant1'
   *  Math: '<S144>/Math Function'
   *  Product: '<S144>/Divide'
   *  Sum: '<S144>/Subtract'
   */
  EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_a += (pow((float64)
    EFuse_Mon_iFuse08Fild / (float64)rtb_Switch7, 2.0) - 1.0) * 0.01;

  /* Update for DiscreteIntegrator: '<S145>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S145>/Constant1'
   *  Math: '<S145>/Math Function'
   *  Product: '<S145>/Divide'
   *  Sum: '<S145>/Subtract'
   */
  EFuse_Mon_DW.DiscreteTimeIntegrator_DSTATE_m += (pow((float64)
    EFuse_Mon_iFuse09Fild / (float64)rtb_Switch17, 2.0) - 1.0) * 0.01;

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EFuse_Mon_Runnable_10ms' */

  /* Outport: '<Root>/EFuse_au32CurrFild_Val' */
  tmp[0] = EFuse_Mon_iFuse01Fild;
  tmp[1] = EFuse_Mon_iFuse02Fild;
  tmp[2] = EFuse_Mon_iFuse03Fild;
  tmp[3] = EFuse_Mon_iFuse04Fild;
  tmp[4] = EFuse_Mon_iFuse05Fild;
  tmp[5] = EFuse_Mon_iFuse06Fild;
  tmp[6] = EFuse_Mon_iFuse07Fild;
  tmp[7] = EFuse_Mon_iFuse08Fild;
  tmp[8] = EFuse_Mon_iFuse09Fild;
  Rte_IWrite_EFuse_Mon_Runnable_10ms_EFuse_au32CurrFild_Val(tmp);

  /* RootInportFunctionCallGenerator generated from: '<Root>/EFuse_Mon_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EFuse_Mon_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/EFuse_au32ErrInfo_Val' incorporates:
   *  Switch: '<S57>/Switch9'
   *  Switch: '<S59>/Switch9'
   *  Switch: '<S62>/Switch9'
   *  Switch: '<S63>/Switch9'
   *  Switch: '<S64>/Switch9'
   */
  rtb_Switch7_0[1] = EFuse_Mon_ConstB.FixPtBitwiseOperator5_h;
  rtb_Switch7_0[3] = EFuse_Mon_ConstB.FixPtBitwiseOperator5_k;
  rtb_Switch7_0[6] = EFuse_Mon_ConstB.FixPtBitwiseOperator5_j;
  rtb_Switch7_0[7] = EFuse_Mon_ConstB.FixPtBitwiseOperator5_m;
  rtb_Switch7_0[8] = EFuse_Mon_ConstB.FixPtBitwiseOperator5_ka;

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EFuse_Mon_Runnable_10ms' */
  Rte_IWrite_EFuse_Mon_Runnable_10ms_EFuse_au32ErrInfo_Val(rtb_Switch7_0);

  /* Outport: '<Root>/EFuse_au8stSleep_Val' */
  tmp_0[0] = EFuse_Mon_stSleepFuse01;
  tmp_0[1] = EFuse_Mon_stSleepFuse02;
  tmp_0[2] = EFuse_Mon_stSleepFuse03;
  tmp_0[3] = EFuse_Mon_stSleepFuse04;
  tmp_0[4] = EFuse_Mon_stSleepFuse05;
  tmp_0[5] = EFuse_Mon_stSleepFuse06;
  tmp_0[6] = EFuse_Mon_stSleepFuse07;
  tmp_0[7] = EFuse_Mon_stSleepFuse08;
  tmp_0[8] = EFuse_Mon_stSleepFuse09;
  Rte_IWrite_EFuse_Mon_Runnable_10ms_EFuse_au8stSleep_Val(tmp_0);
}

/* Model initialize function */
FUNC(void, EFuse_Mon_CODE) EFuse_Mon_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
