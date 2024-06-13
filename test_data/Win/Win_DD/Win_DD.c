/*
 * File: Win_DD.c
 *
 * Code generated for Simulink model 'Win_DD'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Oct  9 10:06:34 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Win_DD.h"

/* Named constants for Chart: '<S8>/MultSwFilter' */
#define Win_DD_IN_SwicthChange         ((uint8)1U)
#define Win_DD_IN_SwitchConfirmed      ((uint8)2U)
#define Win_DD_IN_SwitchInit           ((uint8)3U)
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
const ConstB_Win_DD_T Win_DD_ConstB = {
  5.0,                                 /* '<S8>/Divide1' */
  5.0,                                 /* '<S10>/Divide1' */
  5.0,                                 /* '<S12>/Divide1' */
  5.0,                                 /* '<S14>/Divide1' */
  2866U,                               /* '<S5>/Product1' */
  1201U,                               /* '<S5>/Product2' */
  4471U,                               /* '<S5>/Product3' */
  2867U,                               /* '<S5>/Product4' */
  6359U,                               /* '<S5>/Product5' */
  4472U,                               /* '<S5>/Product6' */
  10000U,                              /* '<S5>/Product7' */
  6360U,                               /* '<S5>/Product8' */
  10000U,                              /* '<S5>/Product' */
  2866U,                               /* '<S6>/Product1' */
  1201U,                               /* '<S6>/Product2' */
  4471U,                               /* '<S6>/Product3' */
  2867U,                               /* '<S6>/Product4' */
  6359U,                               /* '<S6>/Product5' */
  4472U,                               /* '<S6>/Product6' */
  10000U,                              /* '<S6>/Product7' */
  6360U,                               /* '<S6>/Product8' */
  10000U,                              /* '<S6>/Product' */
  2866U,                               /* '<S7>/Product1' */
  1201U,                               /* '<S7>/Product2' */
  4471U,                               /* '<S7>/Product3' */
  2867U,                               /* '<S7>/Product4' */
  6359U,                               /* '<S7>/Product5' */
  4472U,                               /* '<S7>/Product6' */
  10000U,                              /* '<S7>/Product7' */
  6360U,                               /* '<S7>/Product8' */
  10000U                               /* '<S7>/Product' */
};

/* Block signals (default storage) */
B_Win_DD_T Win_DD_B;

/* Block states (default storage) */
DW_Win_DD_T Win_DD_DW;
static void Win_DD_MultSwFilter_Init(uint8 *rty_Out_u8SignalSw);
static void Win_DD_MultSwFilter(uint8 rtu_In_u8SignalSw, float64 rtu_DelayTime,
  uint8 *rty_Out_u8SignalSw, DW_MultSwFilter_Win_DD_T *localDW);

/*
 * System initialize for atomic system:
 *    '<S8>/MultSwFilter'
 *    '<S10>/MultSwFilter'
 *    '<S12>/MultSwFilter'
 *    '<S14>/MultSwFilter'
 */
static void Win_DD_MultSwFilter_Init(uint8 *rty_Out_u8SignalSw)
{
  *rty_Out_u8SignalSw = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S8>/MultSwFilter'
 *    '<S10>/MultSwFilter'
 *    '<S12>/MultSwFilter'
 *    '<S14>/MultSwFilter'
 */
static void Win_DD_MultSwFilter(uint8 rtu_In_u8SignalSw, float64 rtu_DelayTime,
  uint8 *rty_Out_u8SignalSw, DW_MultSwFilter_Win_DD_T *localDW)
{
  /* Chart: '<S8>/MultSwFilter' */
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  localDW->In_u8SignalSw_prev = localDW->In_u8SignalSw_start;
  localDW->In_u8SignalSw_start = rtu_In_u8SignalSw;

  /* Chart: '<S8>/MultSwFilter' */
  if (localDW->is_active_c8_ESF_lib == 0U) {
    localDW->In_u8SignalSw_prev = rtu_In_u8SignalSw;
    localDW->is_active_c8_ESF_lib = 1U;
    localDW->is_c8_ESF_lib = Win_DD_IN_SwitchInit;
    *rty_Out_u8SignalSw = rtu_In_u8SignalSw;
  } else {
    switch (localDW->is_c8_ESF_lib) {
     case Win_DD_IN_SwicthChange:
      if (localDW->In_u8SignalSw_prev != localDW->In_u8SignalSw_start) {
        localDW->is_c8_ESF_lib = Win_DD_IN_SwicthChange;
        localDW->temporalCounter_i1 = 0U;
      } else {
        if (localDW->temporalCounter_i1 >= (uint32)rtu_DelayTime) {
          localDW->is_c8_ESF_lib = Win_DD_IN_SwitchConfirmed;
          *rty_Out_u8SignalSw = rtu_In_u8SignalSw;
        }
      }
      break;

     case Win_DD_IN_SwitchConfirmed:
      if (localDW->In_u8SignalSw_prev != localDW->In_u8SignalSw_start) {
        localDW->is_c8_ESF_lib = Win_DD_IN_SwicthChange;
        localDW->temporalCounter_i1 = 0U;
      }
      break;

     default:
      if (localDW->In_u8SignalSw_prev != localDW->In_u8SignalSw_start) {
        localDW->is_c8_ESF_lib = Win_DD_IN_SwicthChange;
        localDW->temporalCounter_i1 = 0U;
      }
      break;
    }
  }
}

/* Model step function for TID1 */
void WND_DD_Runnable_IN_10ms(void)     /* Sample time: [0.01s, 0.0s] */
{
  sint16 rtb_IoHwAb_AdcFac_Get_AdcFac_Ge;
  sint16 rtb_IoHwAb_AdcFac_Get_AdcFac_dy;
  sint16 rtb_IoHwAb_AdcFac_Get_AdcFac__b;
  sint16 rtb_IoHwAb_AdcFac_Get_AdcFac_cl;
  uint8 rtb_IoHwAb_IoSigDio_Di_Get2_o1;

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WND_DD_Runnable_IN_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/WND_DD_Runnable_IN_10ms_sys'
   */
  /* FunctionCaller: '<S1>/IoHwAb_AdcFac_Get_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_RLBossWndSw,
    &rtb_IoHwAb_AdcFac_Get_AdcFac_Ge);

  /* Switch: '<S4>/Switch6' incorporates:
   *  Constant: '<S4>/Constant18'
   *  Logic: '<S4>/LogicalOperator1'
   *  Logic: '<S4>/LogicalOperator3'
   *  Logic: '<S4>/LogicalOperator4'
   *  RelationalOperator: '<S4>/RelationalOperator1'
   *  RelationalOperator: '<S4>/RelationalOperator12'
   *  RelationalOperator: '<S4>/RelationalOperator2'
   *  RelationalOperator: '<S4>/RelationalOperator5'
   *  RelationalOperator: '<S4>/RelationalOperator6'
   *  RelationalOperator: '<S4>/RelationalOperator7'
   *  RelationalOperator: '<S4>/RelationalOperator8'
   *  RelationalOperator: '<S4>/RelationalOperator9'
   *  Switch: '<S4>/Switch1'
   *  Switch: '<S4>/Switch3'
   *  Switch: '<S4>/Switch4'
   *  Switch: '<S4>/Switch5'
   *  UnitDelay: '<S4>/UnitDelay3'
   */
  if (rtb_IoHwAb_AdcFac_Get_AdcFac_Ge > 10000) {
    Win_DD_DW.UnitDelay3_DSTATE = 0U;
  } else if ((rtb_IoHwAb_AdcFac_Get_AdcFac_Ge <= 2866) &&
             (rtb_IoHwAb_AdcFac_Get_AdcFac_Ge >= 1201)) {
    /* Switch: '<S4>/Switch1' incorporates:
     *  Constant: '<S4>/Constant3'
     *  UnitDelay: '<S4>/UnitDelay3'
     */
    Win_DD_DW.UnitDelay3_DSTATE = 2U;
  } else if ((rtb_IoHwAb_AdcFac_Get_AdcFac_Ge <= 4471) &&
             (rtb_IoHwAb_AdcFac_Get_AdcFac_Ge >= 2867)) {
    /* Switch: '<S4>/Switch3' incorporates:
     *  Constant: '<S4>/Constant6'
     *  Switch: '<S4>/Switch1'
     *  UnitDelay: '<S4>/UnitDelay3'
     */
    Win_DD_DW.UnitDelay3_DSTATE = 1U;
  } else if ((rtb_IoHwAb_AdcFac_Get_AdcFac_Ge <= 6359) &&
             (rtb_IoHwAb_AdcFac_Get_AdcFac_Ge >= 4472)) {
    /* Switch: '<S4>/Switch4' incorporates:
     *  Constant: '<S4>/Constant9'
     *  Switch: '<S4>/Switch1'
     *  Switch: '<S4>/Switch3'
     *  UnitDelay: '<S4>/UnitDelay3'
     */
    Win_DD_DW.UnitDelay3_DSTATE = 4U;
  } else {
    if (rtb_IoHwAb_AdcFac_Get_AdcFac_Ge >= 6360) {
      /* Switch: '<S4>/Switch5' incorporates:
       *  Constant: '<S4>/Constant14'
       *  Switch: '<S4>/Switch1'
       *  Switch: '<S4>/Switch3'
       *  Switch: '<S4>/Switch4'
       *  UnitDelay: '<S4>/UnitDelay3'
       */
      Win_DD_DW.UnitDelay3_DSTATE = 3U;
    }
  }

  /* End of Switch: '<S4>/Switch6' */

  /* Chart: '<S8>/MultSwFilter' incorporates:
   *  UnitDelay: '<S4>/UnitDelay3'
   */
  Win_DD_MultSwFilter(Win_DD_DW.UnitDelay3_DSTATE, Win_DD_ConstB.Divide1,
                      &Win_DD_B.Out_u8SignalSw_h, &Win_DD_DW.sf_MultSwFilter);

  /* FunctionCaller: '<S1>/IoHwAb_AdcFac_Get_AdcFac_Get1' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_RLlocalWndSw,
    &rtb_IoHwAb_AdcFac_Get_AdcFac_dy);

  /* Switch: '<S5>/Switch6' incorporates:
   *  Constant: '<S5>/Constant18'
   *  Logic: '<S5>/LogicalOperator1'
   *  Logic: '<S5>/LogicalOperator3'
   *  Logic: '<S5>/LogicalOperator4'
   *  Logic: '<S5>/LogicalOperator5'
   *  RelationalOperator: '<S5>/RelationalOperator1'
   *  RelationalOperator: '<S5>/RelationalOperator10'
   *  RelationalOperator: '<S5>/RelationalOperator12'
   *  RelationalOperator: '<S5>/RelationalOperator2'
   *  RelationalOperator: '<S5>/RelationalOperator5'
   *  RelationalOperator: '<S5>/RelationalOperator6'
   *  RelationalOperator: '<S5>/RelationalOperator7'
   *  RelationalOperator: '<S5>/RelationalOperator8'
   *  RelationalOperator: '<S5>/RelationalOperator9'
   *  Switch: '<S5>/Switch1'
   *  Switch: '<S5>/Switch3'
   *  Switch: '<S5>/Switch4'
   *  Switch: '<S5>/Switch5'
   *  UnitDelay: '<S5>/UnitDelay3'
   */
  if (rtb_IoHwAb_AdcFac_Get_AdcFac_dy > Win_DD_ConstB.Product) {
    Win_DD_DW.UnitDelay3_DSTATE_g = 0U;
  } else if ((rtb_IoHwAb_AdcFac_Get_AdcFac_dy <= Win_DD_ConstB.Product1) &&
             (rtb_IoHwAb_AdcFac_Get_AdcFac_dy >= Win_DD_ConstB.Product2)) {
    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S5>/Constant3'
     *  UnitDelay: '<S5>/UnitDelay3'
     */
    Win_DD_DW.UnitDelay3_DSTATE_g = 2U;
  } else if ((rtb_IoHwAb_AdcFac_Get_AdcFac_dy <= Win_DD_ConstB.Product3) &&
             (rtb_IoHwAb_AdcFac_Get_AdcFac_dy >= Win_DD_ConstB.Product4)) {
    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S5>/Constant6'
     *  Switch: '<S5>/Switch1'
     *  UnitDelay: '<S5>/UnitDelay3'
     */
    Win_DD_DW.UnitDelay3_DSTATE_g = 1U;
  } else if ((rtb_IoHwAb_AdcFac_Get_AdcFac_dy <= Win_DD_ConstB.Product5) &&
             (rtb_IoHwAb_AdcFac_Get_AdcFac_dy >= Win_DD_ConstB.Product6)) {
    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S5>/Constant9'
     *  Switch: '<S5>/Switch1'
     *  Switch: '<S5>/Switch3'
     *  UnitDelay: '<S5>/UnitDelay3'
     */
    Win_DD_DW.UnitDelay3_DSTATE_g = 4U;
  } else {
    if ((rtb_IoHwAb_AdcFac_Get_AdcFac_dy <= Win_DD_ConstB.Product7) &&
        (rtb_IoHwAb_AdcFac_Get_AdcFac_dy >= Win_DD_ConstB.Product8)) {
      /* Switch: '<S5>/Switch5' incorporates:
       *  Constant: '<S5>/Constant14'
       *  Switch: '<S5>/Switch1'
       *  Switch: '<S5>/Switch3'
       *  Switch: '<S5>/Switch4'
       *  UnitDelay: '<S5>/UnitDelay3'
       */
      Win_DD_DW.UnitDelay3_DSTATE_g = 3U;
    }
  }

  /* End of Switch: '<S5>/Switch6' */

  /* Chart: '<S10>/MultSwFilter' incorporates:
   *  UnitDelay: '<S5>/UnitDelay3'
   */
  Win_DD_MultSwFilter(Win_DD_DW.UnitDelay3_DSTATE_g, Win_DD_ConstB.Divide1_i,
                      &Win_DD_B.Out_u8SignalSw_o, &Win_DD_DW.sf_MultSwFilter_g);

  /* FunctionCaller: '<S1>/IoHwAb_AdcFac_Get_AdcFac_Get2' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_RRBossWndSw,
    &rtb_IoHwAb_AdcFac_Get_AdcFac__b);

  /* Switch: '<S6>/Switch6' incorporates:
   *  Constant: '<S6>/Constant18'
   *  Logic: '<S6>/LogicalOperator1'
   *  Logic: '<S6>/LogicalOperator3'
   *  Logic: '<S6>/LogicalOperator4'
   *  Logic: '<S6>/LogicalOperator5'
   *  RelationalOperator: '<S6>/RelationalOperator1'
   *  RelationalOperator: '<S6>/RelationalOperator10'
   *  RelationalOperator: '<S6>/RelationalOperator12'
   *  RelationalOperator: '<S6>/RelationalOperator2'
   *  RelationalOperator: '<S6>/RelationalOperator5'
   *  RelationalOperator: '<S6>/RelationalOperator6'
   *  RelationalOperator: '<S6>/RelationalOperator7'
   *  RelationalOperator: '<S6>/RelationalOperator8'
   *  RelationalOperator: '<S6>/RelationalOperator9'
   *  Switch: '<S6>/Switch1'
   *  Switch: '<S6>/Switch3'
   *  Switch: '<S6>/Switch4'
   *  Switch: '<S6>/Switch5'
   *  UnitDelay: '<S6>/UnitDelay3'
   */
  if (rtb_IoHwAb_AdcFac_Get_AdcFac__b > Win_DD_ConstB.Product_l) {
    Win_DD_DW.UnitDelay3_DSTATE_b = 0U;
  } else if ((rtb_IoHwAb_AdcFac_Get_AdcFac__b <= Win_DD_ConstB.Product1_p) &&
             (rtb_IoHwAb_AdcFac_Get_AdcFac__b >= Win_DD_ConstB.Product2_a)) {
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant3'
     *  UnitDelay: '<S6>/UnitDelay3'
     */
    Win_DD_DW.UnitDelay3_DSTATE_b = 2U;
  } else if ((rtb_IoHwAb_AdcFac_Get_AdcFac__b <= Win_DD_ConstB.Product3_o) &&
             (rtb_IoHwAb_AdcFac_Get_AdcFac__b >= Win_DD_ConstB.Product4_a)) {
    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S6>/Constant6'
     *  Switch: '<S6>/Switch1'
     *  UnitDelay: '<S6>/UnitDelay3'
     */
    Win_DD_DW.UnitDelay3_DSTATE_b = 1U;
  } else if ((rtb_IoHwAb_AdcFac_Get_AdcFac__b <= Win_DD_ConstB.Product5_p) &&
             (rtb_IoHwAb_AdcFac_Get_AdcFac__b >= Win_DD_ConstB.Product6_g)) {
    /* Switch: '<S6>/Switch4' incorporates:
     *  Constant: '<S6>/Constant9'
     *  Switch: '<S6>/Switch1'
     *  Switch: '<S6>/Switch3'
     *  UnitDelay: '<S6>/UnitDelay3'
     */
    Win_DD_DW.UnitDelay3_DSTATE_b = 4U;
  } else {
    if ((rtb_IoHwAb_AdcFac_Get_AdcFac__b <= Win_DD_ConstB.Product7_j) &&
        (rtb_IoHwAb_AdcFac_Get_AdcFac__b >= Win_DD_ConstB.Product8_n)) {
      /* Switch: '<S6>/Switch5' incorporates:
       *  Constant: '<S6>/Constant14'
       *  Switch: '<S6>/Switch1'
       *  Switch: '<S6>/Switch3'
       *  Switch: '<S6>/Switch4'
       *  UnitDelay: '<S6>/UnitDelay3'
       */
      Win_DD_DW.UnitDelay3_DSTATE_b = 3U;
    }
  }

  /* End of Switch: '<S6>/Switch6' */

  /* Chart: '<S12>/MultSwFilter' incorporates:
   *  UnitDelay: '<S6>/UnitDelay3'
   */
  Win_DD_MultSwFilter(Win_DD_DW.UnitDelay3_DSTATE_b, Win_DD_ConstB.Divide1_e,
                      &Win_DD_B.Out_u8SignalSw_b, &Win_DD_DW.sf_MultSwFilter_c);

  /* FunctionCaller: '<S1>/IoHwAb_AdcFac_Get_AdcFac_Get3' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_RRlocalWndSw,
    &rtb_IoHwAb_AdcFac_Get_AdcFac_cl);

  /* Switch: '<S7>/Switch6' incorporates:
   *  Constant: '<S7>/Constant18'
   *  Logic: '<S7>/LogicalOperator1'
   *  Logic: '<S7>/LogicalOperator3'
   *  Logic: '<S7>/LogicalOperator4'
   *  Logic: '<S7>/LogicalOperator5'
   *  RelationalOperator: '<S7>/RelationalOperator1'
   *  RelationalOperator: '<S7>/RelationalOperator10'
   *  RelationalOperator: '<S7>/RelationalOperator12'
   *  RelationalOperator: '<S7>/RelationalOperator2'
   *  RelationalOperator: '<S7>/RelationalOperator5'
   *  RelationalOperator: '<S7>/RelationalOperator6'
   *  RelationalOperator: '<S7>/RelationalOperator7'
   *  RelationalOperator: '<S7>/RelationalOperator8'
   *  RelationalOperator: '<S7>/RelationalOperator9'
   *  Switch: '<S7>/Switch1'
   *  Switch: '<S7>/Switch3'
   *  Switch: '<S7>/Switch4'
   *  Switch: '<S7>/Switch5'
   *  UnitDelay: '<S7>/UnitDelay3'
   */
  if (rtb_IoHwAb_AdcFac_Get_AdcFac_cl > Win_DD_ConstB.Product_i) {
    Win_DD_DW.UnitDelay3_DSTATE_n = 0U;
  } else if ((rtb_IoHwAb_AdcFac_Get_AdcFac_cl <= Win_DD_ConstB.Product1_pa) &&
             (rtb_IoHwAb_AdcFac_Get_AdcFac_cl >= Win_DD_ConstB.Product2_m)) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant3'
     *  UnitDelay: '<S7>/UnitDelay3'
     */
    Win_DD_DW.UnitDelay3_DSTATE_n = 2U;
  } else if ((rtb_IoHwAb_AdcFac_Get_AdcFac_cl <= Win_DD_ConstB.Product3_l) &&
             (rtb_IoHwAb_AdcFac_Get_AdcFac_cl >= Win_DD_ConstB.Product4_d)) {
    /* Switch: '<S7>/Switch3' incorporates:
     *  Constant: '<S7>/Constant6'
     *  Switch: '<S7>/Switch1'
     *  UnitDelay: '<S7>/UnitDelay3'
     */
    Win_DD_DW.UnitDelay3_DSTATE_n = 1U;
  } else if ((rtb_IoHwAb_AdcFac_Get_AdcFac_cl <= Win_DD_ConstB.Product5_i) &&
             (rtb_IoHwAb_AdcFac_Get_AdcFac_cl >= Win_DD_ConstB.Product6_j)) {
    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S7>/Constant9'
     *  Switch: '<S7>/Switch1'
     *  Switch: '<S7>/Switch3'
     *  UnitDelay: '<S7>/UnitDelay3'
     */
    Win_DD_DW.UnitDelay3_DSTATE_n = 4U;
  } else {
    if ((rtb_IoHwAb_AdcFac_Get_AdcFac_cl <= Win_DD_ConstB.Product7_c) &&
        (rtb_IoHwAb_AdcFac_Get_AdcFac_cl >= Win_DD_ConstB.Product8_l)) {
      /* Switch: '<S7>/Switch5' incorporates:
       *  Constant: '<S7>/Constant14'
       *  Switch: '<S7>/Switch1'
       *  Switch: '<S7>/Switch3'
       *  Switch: '<S7>/Switch4'
       *  UnitDelay: '<S7>/UnitDelay3'
       */
      Win_DD_DW.UnitDelay3_DSTATE_n = 3U;
    }
  }

  /* End of Switch: '<S7>/Switch6' */

  /* Chart: '<S14>/MultSwFilter' incorporates:
   *  UnitDelay: '<S7>/UnitDelay3'
   */
  Win_DD_MultSwFilter(Win_DD_DW.UnitDelay3_DSTATE_n, Win_DD_ConstB.Divide1_b,
                      &Win_DD_B.Out_u8SignalSw, &Win_DD_DW.sf_MultSwFilter_j);

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get1' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RLDoorHSUSwt,
    &rtb_IoHwAb_IoSigDio_Di_Get2_o1);

  /* Outport: '<Root>/gASI_bRLDoorHSUSw_Val' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   */
  (void) Rte_Write_gASI_bRLDoorHSUSw_Val(rtb_IoHwAb_IoSigDio_Di_Get2_o1 != 0);

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Di_Get2' */
  Rte_Call_IoHwAb_IoSigDio_Di_Get(I_S_RRDoorHSUSwt,
    &rtb_IoHwAb_IoSigDio_Di_Get2_o1);

  /* Outport: '<Root>/gASI_bRRDoorHSUSw_Val' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion1'
   */
  (void) Rte_Write_gASI_bRRDoorHSUSw_Val(rtb_IoHwAb_IoSigDio_Di_Get2_o1 != 0);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WND_DD_Runnable_IN_10ms_at_outport_1' */

  /* Outport: '<Root>/gASI_u8RLBossWindowSw_Val' */
  (void) Rte_Write_gASI_u8RLBossWindowSw_Val(Win_DD_B.Out_u8SignalSw_h);

  /* Outport: '<Root>/gASI_u8RLLocalWindowSw_Val' */
  (void) Rte_Write_gASI_u8RLLocalWindowSw_Val(Win_DD_B.Out_u8SignalSw_o);

  /* Outport: '<Root>/gASI_u8RRBossWindowSw_Val' */
  (void) Rte_Write_gASI_u8RRBossWindowSw_Val(Win_DD_B.Out_u8SignalSw_b);

  /* Outport: '<Root>/gASI_u8RRLocalWindowSw_Val' */
  (void) Rte_Write_gASI_u8RRLocalWindowSw_Val(Win_DD_B.Out_u8SignalSw);
}

/* Model step function for TID2 */
void WND_DD_Runnable_OUT_10ms(void)    /* Sample time: [0.01s, 0.0s] */
{
  uint8 tmpRead;
  uint8 tmpRead_0;

  /* Inport: '<Root>/gWND_u8RLWinOutput_Val' */
  Rte_Read_gWND_u8RLWinOutput_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WND_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/WND_DD_Runnable_OUT_10ms_sys'
   */
  /* SwitchCase: '<S16>/SwitchCase' */
  switch (tmpRead) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S16>/RLWinUpOutput' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    /* FunctionCaller: '<S20>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S20>/Constant6'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_RLWndOutputModCtrl, 1);

    /* End of Outputs for SubSystem: '<S16>/RLWinUpOutput' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S16>/RLWinDownOutput' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* FunctionCaller: '<S19>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S19>/Constant6'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_RLWndOutputModCtrl, 2);

    /* End of Outputs for SubSystem: '<S16>/RLWinDownOutput' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S16>/NoRLWinOutput' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    /* FunctionCaller: '<S18>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S18>/Constant6'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_RLWndOutputModCtrl, 0);

    /* End of Outputs for SubSystem: '<S16>/NoRLWinOutput' */
    break;
  }

  /* End of SwitchCase: '<S16>/SwitchCase' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WND_DD_Runnable_OUT_10ms_at_outport_1' */

  /* Inport: '<Root>/gWND_u8RRWinOutput_Val' */
  Rte_Read_gWND_u8RRWinOutput_Val(&tmpRead_0);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WND_DD_Runnable_OUT_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/WND_DD_Runnable_OUT_10ms_sys'
   */
  /* SwitchCase: '<S17>/SwitchCase1' */
  switch (tmpRead_0) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S17>/RRWinUpOutput' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    /* FunctionCaller: '<S23>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S23>/Constant6'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_RRWndOutputModCtrl, 1);

    /* End of Outputs for SubSystem: '<S17>/RRWinUpOutput' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S17>/RRWinDownOutput' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    /* FunctionCaller: '<S22>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S22>/Constant6'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_RRWndOutputModCtrl, 2);

    /* End of Outputs for SubSystem: '<S17>/RRWinDownOutput' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S17>/NoRRWinOutput' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    /* FunctionCaller: '<S21>/IoHwAb_HbrModCtrl_Hbr_SetMod' incorporates:
     *  Constant: '<S21>/Constant6'
     */
    Rte_Call_IoHwAb_HbrModCtrl_Hbr_SetMod(O_H_RRWndOutputModCtrl, 0);

    /* End of Outputs for SubSystem: '<S17>/NoRRWinOutput' */
    break;
  }

  /* End of SwitchCase: '<S17>/SwitchCase1' */
  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WND_DD_Runnable_OUT_10ms_at_outport_1' */
}

/* Model initialize function */
void WND_DD_Runnable_Init(void)
{
  /* SystemInitialize for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WND_DD_Runnable_IN_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/WND_DD_Runnable_IN_10ms_sys'
   */

  /* SystemInitialize for Chart: '<S8>/MultSwFilter' */
  Win_DD_MultSwFilter_Init(&Win_DD_B.Out_u8SignalSw_h);

  /* SystemInitialize for Chart: '<S10>/MultSwFilter' */
  Win_DD_MultSwFilter_Init(&Win_DD_B.Out_u8SignalSw_o);

  /* SystemInitialize for Chart: '<S12>/MultSwFilter' */
  Win_DD_MultSwFilter_Init(&Win_DD_B.Out_u8SignalSw_b);

  /* SystemInitialize for Chart: '<S14>/MultSwFilter' */
  Win_DD_MultSwFilter_Init(&Win_DD_B.Out_u8SignalSw);

  /* End of SystemInitialize for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_WND_DD_Runnable_IN_10ms_at_outport_1' */

  /* SystemInitialize for Outport: '<Root>/gASI_u8RLBossWindowSw_Val' */
  (void) Rte_Write_gASI_u8RLBossWindowSw_Val(Win_DD_B.Out_u8SignalSw_h);

  /* SystemInitialize for Outport: '<Root>/gASI_u8RLLocalWindowSw_Val' */
  (void) Rte_Write_gASI_u8RLLocalWindowSw_Val(Win_DD_B.Out_u8SignalSw_o);

  /* SystemInitialize for Outport: '<Root>/gASI_u8RRBossWindowSw_Val' */
  (void) Rte_Write_gASI_u8RRBossWindowSw_Val(Win_DD_B.Out_u8SignalSw_b);

  /* SystemInitialize for Outport: '<Root>/gASI_u8RRLocalWindowSw_Val' */
  (void) Rte_Write_gASI_u8RRLocalWindowSw_Val(Win_DD_B.Out_u8SignalSw);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
