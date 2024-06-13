/*
 * File: PwrModMngt_DD.c
 *
 * Code generated for Simulink model 'PwrModMngt_DD'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Oct 21 09:56:15 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PwrModMngt_DD.h"

/* Named constants for Chart: '<S3>/MultSwFilter' */
#define PwrModMngt_DD_IN_SwicthChange  ((uint8)1U)
#define PwrModMngt_DD_IN_SwitchInit    ((uint8)3U)
#define PwrModMngt_D_IN_SwitchConfirmed ((uint8)2U)
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Invariant block signals (default storage) */
const ConstB_PwrModMngt_DD_T PwrModMngt_DD_ConstB = {
  3.0,                                 /* '<S3>/Divide1' */
  3.0,                                 /* '<S4>/Divide1' */
  3.0                                  /* '<S5>/Divide1' */
};

/* Block signals (default storage) */
B_PwrModMngt_DD_T PwrModMngt_DD_B;

/* Block states (default storage) */
DW_PwrModMngt_DD_T PwrModMngt_DD_DW;
static void PwrModMngt_DD_MultSwFilter_Init(uint8 *rty_Out_u8SignalSw);
static void PwrModMngt_DD_MultSwFilter(uint8 rtu_In_u8SignalSw, float64
  rtu_DelayTime, uint8 *rty_Out_u8SignalSw, DW_MultSwFilter_PwrModMngt_DD_T
  *localDW);

/*
 * System initialize for atomic system:
 *    '<S3>/MultSwFilter'
 *    '<S4>/MultSwFilter'
 *    '<S5>/MultSwFilter'
 */
static void PwrModMngt_DD_MultSwFilter_Init(uint8 *rty_Out_u8SignalSw)
{
  *rty_Out_u8SignalSw = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S3>/MultSwFilter'
 *    '<S4>/MultSwFilter'
 *    '<S5>/MultSwFilter'
 */
static void PwrModMngt_DD_MultSwFilter(uint8 rtu_In_u8SignalSw, float64
  rtu_DelayTime, uint8 *rty_Out_u8SignalSw, DW_MultSwFilter_PwrModMngt_DD_T
  *localDW)
{
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  localDW->In_u8SignalSw_prev = localDW->In_u8SignalSw_start;
  localDW->In_u8SignalSw_start = rtu_In_u8SignalSw;

  /* Chart: '<S3>/MultSwFilter' */
  if (localDW->is_active_c8_ESF_lib == 0U) {
    localDW->In_u8SignalSw_prev = rtu_In_u8SignalSw;
    localDW->is_active_c8_ESF_lib = 1U;
    localDW->is_c8_ESF_lib = PwrModMngt_DD_IN_SwitchInit;
    *rty_Out_u8SignalSw = rtu_In_u8SignalSw;
  } else {
    switch (localDW->is_c8_ESF_lib) {
     case PwrModMngt_DD_IN_SwicthChange:
      if (localDW->In_u8SignalSw_prev != localDW->In_u8SignalSw_start) {
        localDW->is_c8_ESF_lib = PwrModMngt_DD_IN_SwicthChange;
        localDW->temporalCounter_i1 = 0U;
      } else {
        if (localDW->temporalCounter_i1 >= (uint32)rtu_DelayTime) {
          localDW->is_c8_ESF_lib = PwrModMngt_D_IN_SwitchConfirmed;
          *rty_Out_u8SignalSw = rtu_In_u8SignalSw;
        }
      }
      break;

     case PwrModMngt_D_IN_SwitchConfirmed:
      if (localDW->In_u8SignalSw_prev != localDW->In_u8SignalSw_start) {
        localDW->is_c8_ESF_lib = PwrModMngt_DD_IN_SwicthChange;
        localDW->temporalCounter_i1 = 0U;
      }
      break;

     default:
      /* case IN_SwitchInit: */
      if (localDW->In_u8SignalSw_prev != localDW->In_u8SignalSw_start) {
        localDW->is_c8_ESF_lib = PwrModMngt_DD_IN_SwicthChange;
        localDW->temporalCounter_i1 = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/MultSwFilter' */
}

/* Model step function for TID1 */
void PwrModMngt_DD_Runnable_IN_10ms(void)
                             /* Explicit Task: PwrModMngt_DD_Runnable_IN_10ms */
{
  uint32 tmp;
  uint16 rtb_MultiportSwitch1;
  uint16 rtb_TmpSignalConversionAtBattU_;
  uint16 rtb_TmpSignalConversionAtBatt_j;
  uint16 rtb_TmpSignalConversionAtBatt_n;
  sint16 rtb_IoHwAb_IoSigAdc_AdcFac_Get_;
  uint8 rtb_IoHwAb_IoSigAdc_AdcVRMBat_g;
  boolean rtb_TmpSignalConversionAtBatt_b;

  /* RootInportFunctionCallGenerator generated from: '<Root>/PwrModMngt_DD_Runnable_IN_10ms' incorporates:
   *  SubSystem: '<Root>/PwrModMngt_DD_Runnable_IN_10ms_sys'
   */
  /* FunctionCaller: '<S1>/IoHwAb_IoSigAdc_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_RLSeatOccpdSwt,
    &rtb_IoHwAb_IoSigAdc_AdcFac_Get_);

  /* FunctionCaller: '<S1>/IoHwAb_IoSigAdc_AdcVRMBatt_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcVRMBatt_Get(I_A_RLSeatOccpdSwt,
    &rtb_IoHwAb_IoSigAdc_AdcVRMBat_g);

  /* SignalConversion generated from: '<S1>/BattU_buExcdLrgRng_Val_read' incorporates:
   *  Inport: '<Root>/BattU_buExcdLrgRng_Val'
   */
  (void)Rte_Read_BattU_buExcdLrgRng_Val(&rtb_TmpSignalConversionAtBatt_b);

  /* Switch: '<S1>/Switch7' incorporates:
   *  UnitDelay: '<S1>/UnitDelay5'
   */
  if (!rtb_TmpSignalConversionAtBatt_b) {
    PwrModMngt_DD_DW.UnitDelay5_DSTATE = rtb_IoHwAb_IoSigAdc_AdcFac_Get_;
  }

  /* End of Switch: '<S1>/Switch7' */

  /* SignalConversion generated from: '<S1>/BattU_VrmFac1_Val_read' incorporates:
   *  Inport: '<Root>/BattU_VrmFac1_Val'
   */
  (void)Rte_Read_BattU_VrmFac1_Val(&rtb_TmpSignalConversionAtBattU_);

  /* SignalConversion generated from: '<S1>/BattU_VrmFac2_Val_read' incorporates:
   *  Inport: '<Root>/BattU_VrmFac2_Val'
   */
  (void)Rte_Read_BattU_VrmFac2_Val(&rtb_TmpSignalConversionAtBatt_n);

  /* SignalConversion generated from: '<S1>/BattU_VrmFac3_Val_read' incorporates:
   *  Inport: '<Root>/BattU_VrmFac3_Val'
   */
  (void)Rte_Read_BattU_VrmFac3_Val(&rtb_TmpSignalConversionAtBatt_j);

  /* MultiPortSwitch: '<S1>/MultiportSwitch1' */
  switch (rtb_IoHwAb_IoSigAdc_AdcVRMBat_g) {
   case 1:
    /* MultiPortSwitch: '<S1>/MultiportSwitch1' incorporates:
     *  SignalConversion generated from: '<S1>/BattU_VrmFac1_Val_read'
     */
    rtb_MultiportSwitch1 = rtb_TmpSignalConversionAtBattU_;
    break;

   case 2:
    /* MultiPortSwitch: '<S1>/MultiportSwitch1' incorporates:
     *  SignalConversion generated from: '<S1>/BattU_VrmFac2_Val_read'
     */
    rtb_MultiportSwitch1 = rtb_TmpSignalConversionAtBatt_n;
    break;

   case 3:
    /* MultiPortSwitch: '<S1>/MultiportSwitch1' incorporates:
     *  SignalConversion generated from: '<S1>/BattU_VrmFac3_Val_read'
     */
    rtb_MultiportSwitch1 = rtb_TmpSignalConversionAtBatt_j;
    break;

   default:
    /* MultiPortSwitch: '<S1>/MultiportSwitch1' incorporates:
     *  Constant: '<S1>/Constant29'
     */
    rtb_MultiportSwitch1 = 1000U;
    break;
  }

  /* End of MultiPortSwitch: '<S1>/MultiportSwitch1' */

  /* Product: '<S1>/Product2' incorporates:
   *  MultiPortSwitch: '<S1>/MultiportSwitch1'
   */
  tmp = (75U * rtb_MultiportSwitch1) >> 5;
  if (tmp > 65535U) {
    tmp = 65535U;
  }

  tmp = (tmp * 16777U) >> 14;
  if (tmp > 65535U) {
    tmp = 65535U;
  }

  /* Switch: '<S1>/Switch8' incorporates:
   *  Constant: '<S1>/Constant37'
   *  Product: '<S1>/Product2'
   *  RelationalOperator: '<S1>/RelationalOperator7'
   *  UnitDelay: '<S1>/UnitDelay3'
   *  UnitDelay: '<S1>/UnitDelay5'
   */
  if (PwrModMngt_DD_DW.UnitDelay5_DSTATE <= (sint32)tmp) {
    PwrModMngt_DD_DW.UnitDelay3_DSTATE = 2U;
  } else {
    /* Product: '<S1>/Product3' incorporates:
     *  MultiPortSwitch: '<S1>/MultiportSwitch1'
     */
    tmp = (1375U * rtb_MultiportSwitch1) >> 8;
    if (tmp > 65535U) {
      tmp = 65535U;
    }

    tmp = (tmp * 16777U) >> 14;
    if (tmp > 65535U) {
      tmp = 65535U;
    }

    /* Switch: '<S1>/Switch9' incorporates:
     *  Constant: '<S1>/Constant41'
     *  Product: '<S1>/Product3'
     *  RelationalOperator: '<S1>/RelationalOperator6'
     *  UnitDelay: '<S1>/UnitDelay3'
     */
    if (PwrModMngt_DD_DW.UnitDelay5_DSTATE >= (sint32)tmp) {
      PwrModMngt_DD_DW.UnitDelay3_DSTATE = 1U;
    }

    /* End of Switch: '<S1>/Switch9' */
  }

  /* End of Switch: '<S1>/Switch8' */

  /* Chart: '<S3>/MultSwFilter' incorporates:
   *  UnitDelay: '<S1>/UnitDelay3'
   */
  PwrModMngt_DD_MultSwFilter(PwrModMngt_DD_DW.UnitDelay3_DSTATE,
    PwrModMngt_DD_ConstB.Divide1, &PwrModMngt_DD_B.Out_u8SignalSw_i,
    &PwrModMngt_DD_DW.sf_MultSwFilter);

  /* FunctionCaller: '<S7>/IoHwAb_IoSigAdc_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_RMSeatOccpdSwt,
    &rtb_IoHwAb_IoSigAdc_AdcFac_Get_);

  /* Switch: '<S1>/Switch1' incorporates:
   *  UnitDelay: '<S1>/UnitDelay1'
   */
  if (!rtb_TmpSignalConversionAtBatt_b) {
    PwrModMngt_DD_DW.UnitDelay1_DSTATE = rtb_IoHwAb_IoSigAdc_AdcFac_Get_;
  }

  /* End of Switch: '<S1>/Switch1' */

  /* FunctionCaller: '<S6>/IoHwAb_IoSigAdc_AdcVRMBatt_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcVRMBatt_Get(I_A_RMSeatOccpdSwt,
    &rtb_IoHwAb_IoSigAdc_AdcVRMBat_g);

  /* MultiPortSwitch: '<S1>/MultiportSwitch2' */
  switch (rtb_IoHwAb_IoSigAdc_AdcVRMBat_g) {
   case 1:
    /* MultiPortSwitch: '<S1>/MultiportSwitch2' incorporates:
     *  SignalConversion generated from: '<S1>/BattU_VrmFac1_Val_read'
     */
    rtb_MultiportSwitch1 = rtb_TmpSignalConversionAtBattU_;
    break;

   case 2:
    /* MultiPortSwitch: '<S1>/MultiportSwitch2' incorporates:
     *  SignalConversion generated from: '<S1>/BattU_VrmFac2_Val_read'
     */
    rtb_MultiportSwitch1 = rtb_TmpSignalConversionAtBatt_n;
    break;

   case 3:
    /* MultiPortSwitch: '<S1>/MultiportSwitch2' incorporates:
     *  SignalConversion generated from: '<S1>/BattU_VrmFac3_Val_read'
     */
    rtb_MultiportSwitch1 = rtb_TmpSignalConversionAtBatt_j;
    break;

   default:
    /* MultiPortSwitch: '<S1>/MultiportSwitch2' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    rtb_MultiportSwitch1 = 1000U;
    break;
  }

  /* End of MultiPortSwitch: '<S1>/MultiportSwitch2' */

  /* Product: '<S1>/Product1' incorporates:
   *  MultiPortSwitch: '<S1>/MultiportSwitch2'
   */
  tmp = (75U * rtb_MultiportSwitch1) >> 5;
  if (tmp > 65535U) {
    tmp = 65535U;
  }

  tmp = (tmp * 16777U) >> 14;
  if (tmp > 65535U) {
    tmp = 65535U;
  }

  /* Switch: '<S1>/Switch2' incorporates:
   *  Constant: '<S1>/Constant5'
   *  Product: '<S1>/Product1'
   *  RelationalOperator: '<S1>/RelationalOperator2'
   *  UnitDelay: '<S1>/UnitDelay1'
   *  UnitDelay: '<S1>/UnitDelay4'
   */
  if (PwrModMngt_DD_DW.UnitDelay1_DSTATE <= (sint32)tmp) {
    PwrModMngt_DD_DW.UnitDelay4_DSTATE = 2U;
  } else {
    /* Product: '<S1>/Product4' incorporates:
     *  MultiPortSwitch: '<S1>/MultiportSwitch2'
     */
    tmp = (1375U * rtb_MultiportSwitch1) >> 8;
    if (tmp > 65535U) {
      tmp = 65535U;
    }

    tmp = (tmp * 16777U) >> 14;
    if (tmp > 65535U) {
      tmp = 65535U;
    }

    /* Switch: '<S1>/Switch3' incorporates:
     *  Constant: '<S1>/Constant9'
     *  Product: '<S1>/Product4'
     *  RelationalOperator: '<S1>/RelationalOperator1'
     *  UnitDelay: '<S1>/UnitDelay4'
     */
    if (PwrModMngt_DD_DW.UnitDelay1_DSTATE >= (sint32)tmp) {
      PwrModMngt_DD_DW.UnitDelay4_DSTATE = 1U;
    }

    /* End of Switch: '<S1>/Switch3' */
  }

  /* End of Switch: '<S1>/Switch2' */

  /* Chart: '<S4>/MultSwFilter' incorporates:
   *  UnitDelay: '<S1>/UnitDelay4'
   */
  PwrModMngt_DD_MultSwFilter(PwrModMngt_DD_DW.UnitDelay4_DSTATE,
    PwrModMngt_DD_ConstB.Divide1_g, &PwrModMngt_DD_B.Out_u8SignalSw_h,
    &PwrModMngt_DD_DW.sf_MultSwFilter_l);

  /* FunctionCaller: '<S9>/IoHwAb_IoSigAdc_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_RRSeatOccpdSwt,
    &rtb_IoHwAb_IoSigAdc_AdcFac_Get_);

  /* Switch: '<S1>/Switch4' incorporates:
   *  UnitDelay: '<S1>/UnitDelay2'
   */
  if (!rtb_TmpSignalConversionAtBatt_b) {
    PwrModMngt_DD_DW.UnitDelay2_DSTATE = rtb_IoHwAb_IoSigAdc_AdcFac_Get_;
  }

  /* End of Switch: '<S1>/Switch4' */

  /* FunctionCaller: '<S8>/IoHwAb_IoSigAdc_AdcVRMBatt_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcVRMBatt_Get(I_A_RRSeatOccpdSwt,
    &rtb_IoHwAb_IoSigAdc_AdcVRMBat_g);

  /* MultiPortSwitch: '<S1>/MultiportSwitch3' */
  switch (rtb_IoHwAb_IoSigAdc_AdcVRMBat_g) {
   case 1:
    break;

   case 2:
    /* MultiPortSwitch: '<S1>/MultiportSwitch3' incorporates:
     *  SignalConversion generated from: '<S1>/BattU_VrmFac2_Val_read'
     */
    rtb_TmpSignalConversionAtBattU_ = rtb_TmpSignalConversionAtBatt_n;
    break;

   case 3:
    /* MultiPortSwitch: '<S1>/MultiportSwitch3' incorporates:
     *  SignalConversion generated from: '<S1>/BattU_VrmFac3_Val_read'
     */
    rtb_TmpSignalConversionAtBattU_ = rtb_TmpSignalConversionAtBatt_j;
    break;

   default:
    /* MultiPortSwitch: '<S1>/MultiportSwitch3' incorporates:
     *  Constant: '<S1>/Constant11'
     */
    rtb_TmpSignalConversionAtBattU_ = 1000U;
    break;
  }

  /* End of MultiPortSwitch: '<S1>/MultiportSwitch3' */

  /* Product: '<S1>/Product5' incorporates:
   *  MultiPortSwitch: '<S1>/MultiportSwitch3'
   */
  tmp = (75U * rtb_TmpSignalConversionAtBattU_) >> 5;
  if (tmp > 65535U) {
    tmp = 65535U;
  }

  tmp = (tmp * 16777U) >> 14;
  if (tmp > 65535U) {
    tmp = 65535U;
  }

  /* Switch: '<S1>/Switch5' incorporates:
   *  Constant: '<S1>/Constant14'
   *  Product: '<S1>/Product5'
   *  RelationalOperator: '<S1>/RelationalOperator4'
   *  UnitDelay: '<S1>/UnitDelay2'
   *  UnitDelay: '<S1>/UnitDelay6'
   */
  if (PwrModMngt_DD_DW.UnitDelay2_DSTATE <= (sint32)tmp) {
    PwrModMngt_DD_DW.UnitDelay6_DSTATE = 2U;
  } else {
    /* Product: '<S1>/Product6' incorporates:
     *  MultiPortSwitch: '<S1>/MultiportSwitch3'
     */
    tmp = (1375U * rtb_TmpSignalConversionAtBattU_) >> 8;
    if (tmp > 65535U) {
      tmp = 65535U;
    }

    tmp = (tmp * 16777U) >> 14;
    if (tmp > 65535U) {
      tmp = 65535U;
    }

    /* Switch: '<S1>/Switch6' incorporates:
     *  Constant: '<S1>/Constant18'
     *  Product: '<S1>/Product6'
     *  RelationalOperator: '<S1>/RelationalOperator3'
     *  UnitDelay: '<S1>/UnitDelay6'
     */
    if (PwrModMngt_DD_DW.UnitDelay2_DSTATE >= (sint32)tmp) {
      PwrModMngt_DD_DW.UnitDelay6_DSTATE = 1U;
    }

    /* End of Switch: '<S1>/Switch6' */
  }

  /* End of Switch: '<S1>/Switch5' */

  /* Chart: '<S5>/MultSwFilter' incorporates:
   *  UnitDelay: '<S1>/UnitDelay6'
   */
  PwrModMngt_DD_MultSwFilter(PwrModMngt_DD_DW.UnitDelay6_DSTATE,
    PwrModMngt_DD_ConstB.Divide1_f, &PwrModMngt_DD_B.Out_u8SignalSw,
    &PwrModMngt_DD_DW.sf_MultSwFilter_c);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrModMngt_DD_Runnable_IN_10ms' */

  /* Outport: '<Root>/gPwrModMngt_u8RLSeatOccpdSwt_Val' */
  (void)Rte_Write_gPwrModMngt_u8RLSeatOccpdSwt_Val
    (PwrModMngt_DD_B.Out_u8SignalSw_i);

  /* Outport: '<Root>/gPwrModMngt_u8RMSeatOccpdSwt_Val' */
  (void)Rte_Write_gPwrModMngt_u8RMSeatOccpdSwt_Val
    (PwrModMngt_DD_B.Out_u8SignalSw_h);

  /* Outport: '<Root>/gPwrModMngt_u8RRSeatOccpdSwt_Val' */
  (void)Rte_Write_gPwrModMngt_u8RRSeatOccpdSwt_Val
    (PwrModMngt_DD_B.Out_u8SignalSw);
}

/* Model initialize function */
void PwrModMngt_DD_Runnable_Init(void)
{
  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrModMngt_DD_Runnable_IN_10ms' incorporates:
   *  SubSystem: '<Root>/PwrModMngt_DD_Runnable_IN_10ms_sys'
   */

  /* SystemInitialize for Chart: '<S3>/MultSwFilter' */
  PwrModMngt_DD_MultSwFilter_Init(&PwrModMngt_DD_B.Out_u8SignalSw_i);

  /* SystemInitialize for Chart: '<S4>/MultSwFilter' */
  PwrModMngt_DD_MultSwFilter_Init(&PwrModMngt_DD_B.Out_u8SignalSw_h);

  /* SystemInitialize for Chart: '<S5>/MultSwFilter' */
  PwrModMngt_DD_MultSwFilter_Init(&PwrModMngt_DD_B.Out_u8SignalSw);

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrModMngt_DD_Runnable_IN_10ms' */

  /* SystemInitialize for Outport: '<Root>/gPwrModMngt_u8RLSeatOccpdSwt_Val' */
  (void)Rte_Write_gPwrModMngt_u8RLSeatOccpdSwt_Val
    (PwrModMngt_DD_B.Out_u8SignalSw_i);

  /* SystemInitialize for Outport: '<Root>/gPwrModMngt_u8RMSeatOccpdSwt_Val' */
  (void)Rte_Write_gPwrModMngt_u8RMSeatOccpdSwt_Val
    (PwrModMngt_DD_B.Out_u8SignalSw_h);

  /* SystemInitialize for Outport: '<Root>/gPwrModMngt_u8RRSeatOccpdSwt_Val' */
  (void)Rte_Write_gPwrModMngt_u8RRSeatOccpdSwt_Val
    (PwrModMngt_DD_B.Out_u8SignalSw);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
