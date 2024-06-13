/*
 * File: EPBCalprDrvr_DD.c
 *
 * Code generated for Simulink model 'EPBCalprDrvr_DD'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Mon Jul 18 17:18:51 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EPBCalprDrvr_DD.h"
#include "EPBCalprDrvr_DD_private.h"

/* Model step function for TID1 */
FUNC(void, EPBCalprDrvr_DD_CODE) EPBCalprDrvr_DD_Runnable_10ms(void)
                              /* Explicit Task: EPBCalprDrvr_DD_Runnable_10ms */
{
  uint8 EPBCalprDrvr_stHwDrvrCmdLocal;
  boolean EPBCal_EPBCalprDrvr_flgSafeCl_0;
  boolean EPBCal_EPBCalprDrvr_flgSafeCl_1;
  boolean guard1 = false;


  //dummy_start
    if (0x01 == bEPBTestEnableFlag)
	{
        EPBCal_EPBCalprDrvr_flgSafeCl_0 = bEPBTestApplyEnableLineRequest;
        EPBCal_EPBCalprDrvr_flgSafeCl_1 = bEPBTestReleaseEnableLineRequest;
        EPBCalprDrvr_stHwDrvrCmdLocal = u8EPBTestMotorCommand;
    }
	else
	{

  /* RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_DD_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/EPBCalprDrvr_DD_Runnable_10ms_sys'
   */
  /* RelationalOperator: '<S2>/Relational Operator9' incorporates:
   *  Inport: '<Root>/EPBCalprDrvr_stMotCmd_Val'
   *  RelationalOperator: '<S2>/Relational Operator11'
   *  RelationalOperator: '<S2>/Relational Operator12'
   *  RelationalOperator: '<S2>/Relational Operator4'
   *  RelationalOperator: '<S2>/Relational Operator6'
   *  Switch: '<S2>/Switch1'
   *  Switch: '<S2>/Switch2'
   *  Switch: '<S2>/Switch3'
   */
  EPBCalprDrvr_stHwDrvrCmdLocal =
    Rte_IRead_EPBCalprDrvr_DD_Runnable_10ms_EPBCalprDrvr_stMotCmd_Val();

  /* Logic: '<S2>/Logical Operator6' incorporates:
   *  Inport: '<Root>/EPBCalprDrvr_flgSsmEnaLockLine_Val'
   *  Logic: '<S2>/Logical Operator1'
   *  Switch: '<S2>/Switch3'
   */
  EPBCal_EPBCalprDrvr_flgSafeCl_0 =
    Rte_IRead_EPBCalprDrvr_DD_Runnable_10ms_EPBCalprDrvr_flgSsmEnaLockLine_Val();

  /* Logic: '<S2>/Logical Operator7' incorporates:
   *  Inport: '<Root>/EPBCalprDrvr_flgSsmEnaRlesLine_Val'
   *  Logic: '<S2>/Logical Operator2'
   *  Switch: '<S2>/Switch1'
   *  Switch: '<S2>/Switch3'
   */
  EPBCal_EPBCalprDrvr_flgSafeCl_1 =
    Rte_IRead_EPBCalprDrvr_DD_Runnable_10ms_EPBCalprDrvr_flgSsmEnaRlesLine_Val();
	}
  /* Logic: '<S2>/Logical Operator5' incorporates:
   *  Constant: '<S2>/Constant18'
   *  Constant: '<S2>/Constant20'
   *  Inport: '<Root>/EPBCalprDrvr_flgClsdDrvrMos_Val'
   *  Inport: '<Root>/EPBCalprDrvr_flgSsmEnaLockLine_Val'
   *  Inport: '<Root>/EPBCalprDrvr_flgSsmEnaRlesLine_Val'
   *  Inport: '<Root>/EPBCalprDrvr_stMotCmd_Val'
   *  Logic: '<S2>/Logical Operator'
   *  Logic: '<S2>/Logical Operator3'
   *  Logic: '<S2>/Logical Operator4'
   *  Logic: '<S2>/Logical Operator6'
   *  Logic: '<S2>/Logical Operator7'
   *  Logic: '<S2>/Logical Operator8'
   *  Logic: '<S2>/Logical Operator9'
   *  RelationalOperator: '<S2>/Relational Operator11'
   *  RelationalOperator: '<S2>/Relational Operator9'
   */
if (0x01 == bEPBTestEnableFlag)
		{
	  *Rte_Pim_EPBCal_EPBCalprDrvr_flgSafeClsd() =
    (Rte_IRead_EPBCalprDrvr_DD_Runnable_10ms_EPBCalprDrvr_flgClsdDrvrMos_Val() ||
     ((!EPBCal_EPBCalprDrvr_flgSafeCl_0) && (!EPBCal_EPBCalprDrvr_flgSafeCl_1)) ||
     ((!EPBCal_EPBCalprDrvr_flgSafeCl_0) && (EPBCalprDrvr_stHwDrvrCmdLocal == 27)) ||
     ((!EPBCal_EPBCalprDrvr_flgSafeCl_1) && (EPBCalprDrvr_stHwDrvrCmdLocal == 40)));
		}
	else
	{






  *Rte_Pim_EPBCal_EPBCalprDrvr_flgSafeClsd() =
    (Rte_IRead_EPBCalprDrvr_DD_Runnable_10ms_EPBCalprDrvr_flgClsdDrvrMos_Val() ||
     ((!EPBCal_EPBCalprDrvr_flgSafeCl_0) && (!EPBCal_EPBCalprDrvr_flgSafeCl_1)) ||
     ((!Rte_IRead_EPBCalprDrvr_DD_Runnable_10ms_EPBCalprDrvr_flgSsmEnaLockLine_Val
       ()) && (EPBCalprDrvr_stHwDrvrCmdLocal == 27)) ||
     ((!Rte_IRead_EPBCalprDrvr_DD_Runnable_10ms_EPBCalprDrvr_flgSsmEnaRlesLine_Val
       ()) && (EPBCalprDrvr_stHwDrvrCmdLocal == 40)));
      }
  /* Switch: '<S2>/Switch3' */
  guard1 = false;
  if (*Rte_Pim_EPBCal_EPBCalprDrvr_flgSafeClsd()) {
    /* Switch: '<S2>/Switch3' incorporates:
     *  Constant: '<S2>/Constant11'
     */
    EPBCalprDrvr_stHwDrvrCmdLocal = 1U;
    guard1 = true;
  } else if ((EPBCalprDrvr_stHwDrvrCmdLocal == 27) &&
             EPBCal_EPBCalprDrvr_flgSafeCl_0) {
    /* Switch: '<S2>/Switch3' incorporates:
     *  Constant: '<S2>/Constant14'
     *  Switch: '<S2>/Switch1'
     */
    EPBCalprDrvr_stHwDrvrCmdLocal = 2U;

    /* Switch: '<S2>/Switch6' incorporates:
     *  Constant: '<S2>/Constant6'
     */
    *Rte_Pim_EPBCal_EPBCalprDrvr_stMotSpiCmd() = 1U;
  } else {
    if ((EPBCalprDrvr_stHwDrvrCmdLocal == 40) && EPBCal_EPBCalprDrvr_flgSafeCl_1)
    {
      /* Switch: '<S2>/Switch3' incorporates:
       *  Constant: '<S2>/Constant17'
       *  Switch: '<S2>/Switch1'
       *  Switch: '<S2>/Switch2'
       */
      EPBCalprDrvr_stHwDrvrCmdLocal = 3U;
    } else if (EPBCalprDrvr_stHwDrvrCmdLocal == 54) {
      /* Switch: '<S2>/Switch3' incorporates:
       *  Constant: '<S2>/Constant23'
       *  Switch: '<S2>/Switch1'
       *  Switch: '<S2>/Switch2'
       *  Switch: '<S2>/Switch4'
       */
      EPBCalprDrvr_stHwDrvrCmdLocal = 4U;
    } else if (EPBCalprDrvr_stHwDrvrCmdLocal == 66) {
      /* Switch: '<S2>/Switch5' incorporates:
       *  Constant: '<S2>/Constant4'
       *  Switch: '<S2>/Switch1'
       *  Switch: '<S2>/Switch2'
       *  Switch: '<S2>/Switch3'
       *  Switch: '<S2>/Switch4'
       */
      EPBCalprDrvr_stHwDrvrCmdLocal = 5U;
    } else {
      /* Switch: '<S2>/Switch3' incorporates:
       *  Constant: '<S2>/Constant5'
       *  Switch: '<S2>/Switch1'
       *  Switch: '<S2>/Switch2'
       *  Switch: '<S2>/Switch4'
       *  Switch: '<S2>/Switch5'
       */
      EPBCalprDrvr_stHwDrvrCmdLocal = 0U;
    }

    guard1 = true;
  }

  if (guard1) {
    /* Switch: '<S2>/Switch7' incorporates:
     *  Constant: '<S2>/Constant7'
     *  Constant: '<S2>/Constant9'
     *  RelationalOperator: '<S2>/Relational Operator3'
     *  RelationalOperator: '<S2>/Relational Operator5'
     *  Switch: '<S2>/Switch6'
     *  Switch: '<S2>/Switch8'
     */
    if (EPBCalprDrvr_stHwDrvrCmdLocal == 3) {
      /* Switch: '<S2>/Switch6' incorporates:
       *  Constant: '<S2>/Constant8'
       *  Switch: '<S2>/Switch7'
       */
      *Rte_Pim_EPBCal_EPBCalprDrvr_stMotSpiCmd() = 2U;
    } else if (EPBCalprDrvr_stHwDrvrCmdLocal == 4) {
      /* Switch: '<S2>/Switch8' incorporates:
       *  Constant: '<S2>/Constant10'
       *  Switch: '<S2>/Switch6'
       *  Switch: '<S2>/Switch7'
       */
      *Rte_Pim_EPBCal_EPBCalprDrvr_stMotSpiCmd() = 3U;
    } else {
      /* Switch: '<S2>/Switch6' incorporates:
       *  Constant: '<S2>/Constant13'
       *  Switch: '<S2>/Switch7'
       *  Switch: '<S2>/Switch8'
       */
      *Rte_Pim_EPBCal_EPBCalprDrvr_stMotSpiCmd() = 0U;
    }

    /* End of Switch: '<S2>/Switch7' */
  }

  /* FunctionCaller: '<S2>/IoHwAb_EPBHb_Set_Mod' */
  Rte_Call_IoHwAb_EPBHb_Set_Mod(*Rte_Pim_EPBCal_EPBCalprDrvr_stMotSpiCmd());

  /* RelationalOperator: '<S2>/Relational Operator1' incorporates:
   *  Constant: '<S2>/Constant1'
   */
  *Rte_Pim_EPBCal_EPBCalprDrvr_flgMotIoCmd() = (EPBCalprDrvr_stHwDrvrCmdLocal ==
    1);

  /* FunctionCaller: '<S2>/IoHwAb_EPBHb_Set_Safemod' */
  Rte_Call_IoHwAb_EPBHb_Set_Safemod(*Rte_Pim_EPBCal_EPBCalprDrvr_flgMotIoCmd());

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EPBCalprDrvr_DD_Runnable_10ms' */

  /* Outport: '<Root>/EPBCalprDrvr_stHwDrvrCmd_Val' */
  Rte_IWrite_EPBCalprDrvr_DD_Runnable_10ms_EPBCalprDrvr_stHwDrvrCmd_Val
    (EPBCalprDrvr_stHwDrvrCmdLocal);
}

/* Model initialize function */
FUNC(void, EPBCalprDrvr_DD_CODE) EPBCalprDrvr_DD_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
