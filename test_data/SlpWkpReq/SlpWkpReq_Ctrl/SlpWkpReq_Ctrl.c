/*
 * File: SlpWkpReq_Ctrl.c
 *
 * Code generated for Simulink model 'SlpWkpReq_Ctrl'.
 *
 * Model version                  : 1.63
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Nov  1 16:36:23 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Renesas->V850
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SlpWkpReq_Ctrl.h"

/* Named constants for Chart: '<S5>/HWAllowSleepDelay_Local' */
#define SlpWkpReq_Ctrl_IN_Timing       ((uint8)1U)
#define SlpWkpReq_Ctrl_IN_Wait         ((uint8)2U)

/* Named constants for Chart: '<S5>/HWJudgeWakeup' */
#define SlpWkpReq_Ctrl_IN_ModeM        ((uint8)1U)
#define SlpWkpReq_Ctrl_IN_WakeUp       ((uint8)2U)

/* Named constants for Chart: '<S5>/HWWakeUpDelay_PNC' */
#define SlpWkpReq_Ctrl_IN_Timing_p     ((uint8)1U)
#define SlpWkpReq_Ctrl_IN_Wait_p       ((uint8)2U)

/* Constant parameters (default storage) */
const ConstP_SlpWkpReq_Ctrl_T SlpWkpReq_Ctrl_ConstP = {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S5>/u32Timer1BitValue_Local'
   *   '<S5>/u32Timer2BitValue_Local'
   *   '<S5>/u32Timer2BitValue_PNCCharging'
   */
  { 0U, 0U },

  /* Computed Parameter: u32Timer1BitValue_PNCGlobal_Val
   * Referenced by: '<S5>/u32Timer1BitValue_PNCGlobal'
   */
  { 6152181U, 0U },

  /* Computed Parameter: u32Timer2BitValue_PNCGlobal_Val
   * Referenced by: '<S5>/u32Timer2BitValue_PNCGlobal'
   */
  { 8202U, 0U },

  /* Computed Parameter: u32Timer1BitValue_PNCCharging_V
   * Referenced by: '<S5>/u32Timer1BitValue_PNCCharging'
   */
  { 7U, 0U }
};

/* Block signals (default storage) */
B_SlpWkpReq_Ctrl_T SlpWkpReq_Ctrl_B;

/* Block states (default storage) */
DW_SlpWkpReq_Ctrl_T SlpWkpReq_Ctrl_DW;
static void Sl_HWAllowSleepDelay_Local_Init(uint32 rty_u32HWAllowSleep_Out[2]);
static void SlpWkpR_HWAllowSleepDelay_Local(const uint32 rtu_u32HWAllowSleep[2],
  const uint32 rtu_u32Timer1BitValue[2], const uint32 rtu_u32Timer2BitValue[2],
  uint32 rty_u32HWAllowSleep_Out[2], DW_HWAllowSleepDelay_Local_Sl_T *localDW);

/* Forward declaration for local functions */
static void SlpWkpRe_HW_WakeupSource_Global(const boolean
  *FixPtRelationalOperator, const boolean *FixPtRelationalOperator_m, const
  boolean *FixPtRelationalOperator_e, boolean *FixPtRelationalOperator_d,
  boolean *FixPtRelationalOperator_a, boolean *FixPtRelationalOperator_o);
static void SlpWkp_HW_WakeupSource_Charging(const boolean
  *FixPtRelationalOperator_l2, const boolean *FixPtRelationalOperator_m5, const
  boolean *FixPtRelationalOperator_f, uint8 *u8HWWakeup_PNCCharging);
static void SlpW_HW_WakeupSourceInit_Global(const uint32 *u32DiWkSrcChn);
static void Sl_HW_WakeupSourceInit_Charging(const uint16 *u16AdcWkSrcChn, const
  uint32 *u32DiWkSrcChn, uint8 *u8HWWakeup_PNCCharging);
static void SlpWkpR_HWAllowSleepCycle_Local(void);
static void Slp_HWAllowSleepCycle_PNCGlobal(const boolean
  *FixPtRelationalOperator, const boolean *FixPtRelationalOperator_m, const
  boolean *FixPtRelationalOperator_e, boolean *FixPtRelationalOperator_d,
  boolean *FixPtRelationalOperator_a, boolean *FixPtRelationalOperator_o);
static void S_HWAllowSleepCycle_PNCCharging(const boolean
  *FixPtRelationalOperator_l2, const boolean *FixPtRelationalOperator_m5, const
  boolean *FixPtRelationalOperator_f);

/*
 * System initialize for atomic system:
 *    '<S5>/HWAllowSleepDelay_Local'
 *    '<S5>/HWAllowSleepDelay_PNCCharging'
 *    '<S5>/HWAllowSleepDelay_PNCGlobal'
 */
static void Sl_HWAllowSleepDelay_Local_Init(uint32 rty_u32HWAllowSleep_Out[2])
{
  rty_u32HWAllowSleep_Out[0] = 0U;
  rty_u32HWAllowSleep_Out[1] = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S5>/HWAllowSleepDelay_Local'
 *    '<S5>/HWAllowSleepDelay_PNCCharging'
 *    '<S5>/HWAllowSleepDelay_PNCGlobal'
 */
static void SlpWkpR_HWAllowSleepDelay_Local(const uint32 rtu_u32HWAllowSleep[2],
  const uint32 rtu_u32Timer1BitValue[2], const uint32 rtu_u32Timer2BitValue[2],
  uint32 rty_u32HWAllowSleep_Out[2], DW_HWAllowSleepDelay_Local_Sl_T *localDW)
{
  uint32 u32HWAllowSleep_Timer1_idx_0;
  uint32 u32HWAllowSleep_Timer1_idx_1;
  uint32 u32HWAllowSleep_Timer2_idx_0;
  uint32 u32HWAllowSleep_Timer2_idx_1;

  /* Chart: '<S5>/HWAllowSleepDelay_Local' */
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->temporalCounter_i2 < MAX_uint32_T) {
    localDW->temporalCounter_i2++;
  }

  if (localDW->is_active_c10_SlpWkpReq_Ctrl == 0U) {
    localDW->is_active_c10_SlpWkpReq_Ctrl = 1U;
    localDW->u32HWAllowSleep_Temp1[0] = 0U;
    localDW->u32HWAllowSleep_Temp2[0] = 0U;
    localDW->u32HWAllowSleep_Temp1[1] = 0U;
    localDW->u32HWAllowSleep_Temp2[1] = 0U;
    u32HWAllowSleep_Timer1_idx_0 = rtu_u32HWAllowSleep[0] &
      rtu_u32Timer1BitValue[0];
    u32HWAllowSleep_Timer1_idx_1 = rtu_u32HWAllowSleep[1] &
      rtu_u32Timer1BitValue[1];
    u32HWAllowSleep_Timer2_idx_0 = rtu_u32HWAllowSleep[0] &
      rtu_u32Timer2BitValue[0];
    u32HWAllowSleep_Timer2_idx_1 = rtu_u32HWAllowSleep[1] &
      rtu_u32Timer2BitValue[1];
    if (((u32HWAllowSleep_Timer1_idx_0 != (uint32)0x0) ||
         (u32HWAllowSleep_Timer1_idx_1 != (uint32)0x0)) &&
        ((u32HWAllowSleep_Timer1_idx_0 != localDW->u32HWAllowSleep_Temp1[0]) ||
         (u32HWAllowSleep_Timer1_idx_1 != localDW->u32HWAllowSleep_Temp1[1]))) {
      localDW->u32HWAllowSleep_Temp1[0] = u32HWAllowSleep_Timer1_idx_0;
      localDW->u32HWAllowSleep_Temp1[1] = u32HWAllowSleep_Timer1_idx_1;
    }

    if (((u32HWAllowSleep_Timer2_idx_0 != (uint32)0x0) ||
         (u32HWAllowSleep_Timer2_idx_1 != (uint32)0x0)) &&
        ((u32HWAllowSleep_Timer2_idx_0 != localDW->u32HWAllowSleep_Temp2[0]) ||
         (u32HWAllowSleep_Timer2_idx_1 != localDW->u32HWAllowSleep_Temp2[1]))) {
      localDW->u32HWAllowSleep_Temp2[0] = u32HWAllowSleep_Timer2_idx_0;
      localDW->u32HWAllowSleep_Temp2[1] = u32HWAllowSleep_Timer2_idx_1;
    }

    localDW->is_Timing1 = SlpWkpReq_Ctrl_IN_Wait;
    localDW->bTimingFlag1 = false;
    if ((u32HWAllowSleep_Timer1_idx_0 != (uint32)0x0) ||
        (u32HWAllowSleep_Timer1_idx_1 != (uint32)0x0)) {
      localDW->bNoZeroFlag1 = true;
    }

    localDW->is_Timing2 = SlpWkpReq_Ctrl_IN_Wait;
    localDW->bTimingFlag2 = false;
    if ((u32HWAllowSleep_Timer2_idx_0 != (uint32)0x0) ||
        (u32HWAllowSleep_Timer2_idx_1 != (uint32)0x0)) {
      localDW->bNoZeroFlag2 = true;
    }

    if ((u32HWAllowSleep_Timer1_idx_0 == (uint32)0x0) &&
        (u32HWAllowSleep_Timer1_idx_1 == (uint32)0x0) && (!localDW->bTimingFlag1))
    {
      localDW->u32HWAllowSleep_Temp1[0] = 0U;
      localDW->u32HWAllowSleep_Temp1[1] = 0U;
    }

    if ((u32HWAllowSleep_Timer2_idx_0 == (uint32)0x0) &&
        (u32HWAllowSleep_Timer2_idx_1 == (uint32)0x0) && (!localDW->bTimingFlag2))
    {
      localDW->u32HWAllowSleep_Temp2[0] = 0U;
      localDW->u32HWAllowSleep_Temp2[1] = 0U;
    }

    rty_u32HWAllowSleep_Out[0] = localDW->u32HWAllowSleep_Temp1[0] |
      localDW->u32HWAllowSleep_Temp2[0];
    rty_u32HWAllowSleep_Out[1] = localDW->u32HWAllowSleep_Temp1[1] |
      localDW->u32HWAllowSleep_Temp2[1];
  } else {
    u32HWAllowSleep_Timer1_idx_0 = rtu_u32HWAllowSleep[0] &
      rtu_u32Timer1BitValue[0];
    u32HWAllowSleep_Timer1_idx_1 = rtu_u32HWAllowSleep[1] &
      rtu_u32Timer1BitValue[1];
    u32HWAllowSleep_Timer2_idx_0 = rtu_u32HWAllowSleep[0] &
      rtu_u32Timer2BitValue[0];
    u32HWAllowSleep_Timer2_idx_1 = rtu_u32HWAllowSleep[1] &
      rtu_u32Timer2BitValue[1];
    if (((u32HWAllowSleep_Timer1_idx_0 != (uint32)0x0) ||
         (u32HWAllowSleep_Timer1_idx_1 != (uint32)0x0)) &&
        ((u32HWAllowSleep_Timer1_idx_0 != localDW->u32HWAllowSleep_Temp1[0]) ||
         (u32HWAllowSleep_Timer1_idx_1 != localDW->u32HWAllowSleep_Temp1[1]))) {
      localDW->u32HWAllowSleep_Temp1[0] = u32HWAllowSleep_Timer1_idx_0;
      localDW->u32HWAllowSleep_Temp1[1] = u32HWAllowSleep_Timer1_idx_1;
    }

    if (((u32HWAllowSleep_Timer2_idx_0 != (uint32)0x0) ||
         (u32HWAllowSleep_Timer2_idx_1 != (uint32)0x0)) &&
        ((u32HWAllowSleep_Timer2_idx_0 != localDW->u32HWAllowSleep_Temp2[0]) ||
         (u32HWAllowSleep_Timer2_idx_1 != localDW->u32HWAllowSleep_Temp2[1]))) {
      localDW->u32HWAllowSleep_Temp2[0] = u32HWAllowSleep_Timer2_idx_0;
      localDW->u32HWAllowSleep_Temp2[1] = u32HWAllowSleep_Timer2_idx_1;
    }

    if (localDW->is_Timing1 == SlpWkpReq_Ctrl_IN_Timing) {
      if ((u32HWAllowSleep_Timer1_idx_0 == (uint32)0x0) &&
          (u32HWAllowSleep_Timer1_idx_1 == (uint32)0x0) && localDW->bNoZeroFlag1)
      {
        localDW->is_Timing1 = SlpWkpReq_Ctrl_IN_Timing;
        localDW->temporalCounter_i1 = 0U;
        localDW->bTimingFlag1 = true;
        localDW->bNoZeroFlag1 = false;
      } else if (localDW->temporalCounter_i1 >= (uint32)
                 (SACMNGT_ALLOWSLEEP_HOLDTIMER1 / SACMNGT_TASK_BASETIME)) {
        localDW->is_Timing1 = SlpWkpReq_Ctrl_IN_Wait;
        localDW->bTimingFlag1 = false;
        if ((u32HWAllowSleep_Timer1_idx_0 != (uint32)0x0) ||
            (u32HWAllowSleep_Timer1_idx_1 != (uint32)0x0)) {
          localDW->bNoZeroFlag1 = true;
        }
      } else {
        if ((u32HWAllowSleep_Timer1_idx_0 != (uint32)0x0) ||
            (u32HWAllowSleep_Timer1_idx_1 != (uint32)0x0)) {
          localDW->bNoZeroFlag1 = true;
        }
      }
    } else if ((u32HWAllowSleep_Timer1_idx_0 == (uint32)0x0) &&
               (u32HWAllowSleep_Timer1_idx_1 == (uint32)0x0) &&
               localDW->bNoZeroFlag1) {
      localDW->is_Timing1 = SlpWkpReq_Ctrl_IN_Timing;
      localDW->temporalCounter_i1 = 0U;
      localDW->bTimingFlag1 = true;
      localDW->bNoZeroFlag1 = false;
    } else {
      if ((u32HWAllowSleep_Timer1_idx_0 != (uint32)0x0) ||
          (u32HWAllowSleep_Timer1_idx_1 != (uint32)0x0)) {
        localDW->bNoZeroFlag1 = true;
      }
    }

    if (localDW->is_Timing2 == SlpWkpReq_Ctrl_IN_Timing) {
      if ((u32HWAllowSleep_Timer2_idx_0 == (uint32)0x0) &&
          (u32HWAllowSleep_Timer2_idx_1 == (uint32)0x0) && localDW->bNoZeroFlag2)
      {
        localDW->is_Timing2 = SlpWkpReq_Ctrl_IN_Timing;
        localDW->temporalCounter_i2 = 0U;
        localDW->bTimingFlag2 = true;
        localDW->bNoZeroFlag2 = false;
      } else if (localDW->temporalCounter_i2 >= (uint32)
                 (SACMNGT_ALLOWSLEEP_HOLDTIMER2 / SACMNGT_TASK_BASETIME)) {
        localDW->is_Timing2 = SlpWkpReq_Ctrl_IN_Wait;
        localDW->bTimingFlag2 = false;
        if ((u32HWAllowSleep_Timer2_idx_0 != (uint32)0x0) ||
            (u32HWAllowSleep_Timer2_idx_1 != (uint32)0x0)) {
          localDW->bNoZeroFlag2 = true;
        }
      } else {
        if ((u32HWAllowSleep_Timer2_idx_0 != (uint32)0x0) ||
            (u32HWAllowSleep_Timer2_idx_1 != (uint32)0x0)) {
          localDW->bNoZeroFlag2 = true;
        }
      }
    } else if ((u32HWAllowSleep_Timer2_idx_0 == (uint32)0x0) &&
               (u32HWAllowSleep_Timer2_idx_1 == (uint32)0x0) &&
               localDW->bNoZeroFlag2) {
      localDW->is_Timing2 = SlpWkpReq_Ctrl_IN_Timing;
      localDW->temporalCounter_i2 = 0U;
      localDW->bTimingFlag2 = true;
      localDW->bNoZeroFlag2 = false;
    } else {
      if ((u32HWAllowSleep_Timer2_idx_0 != (uint32)0x0) ||
          (u32HWAllowSleep_Timer2_idx_1 != (uint32)0x0)) {
        localDW->bNoZeroFlag2 = true;
      }
    }

    if ((u32HWAllowSleep_Timer1_idx_0 == (uint32)0x0) &&
        (u32HWAllowSleep_Timer1_idx_1 == (uint32)0x0) && (!localDW->bTimingFlag1))
    {
      localDW->u32HWAllowSleep_Temp1[0] = 0U;
      localDW->u32HWAllowSleep_Temp1[1] = 0U;
    }

    if ((u32HWAllowSleep_Timer2_idx_0 == (uint32)0x0) &&
        (u32HWAllowSleep_Timer2_idx_1 == (uint32)0x0) && (!localDW->bTimingFlag2))
    {
      localDW->u32HWAllowSleep_Temp2[0] = 0U;
      localDW->u32HWAllowSleep_Temp2[1] = 0U;
    }

    rty_u32HWAllowSleep_Out[0] = localDW->u32HWAllowSleep_Temp1[0] |
      localDW->u32HWAllowSleep_Temp2[0];
    rty_u32HWAllowSleep_Out[1] = localDW->u32HWAllowSleep_Temp1[1] |
      localDW->u32HWAllowSleep_Temp2[1];
  }

  /* End of Chart: '<S5>/HWAllowSleepDelay_Local' */
}

/* Function for Chart: '<S5>/HWJudgeWakeup' */
static void SlpWkpRe_HW_WakeupSource_Global(const boolean
  *FixPtRelationalOperator, const boolean *FixPtRelationalOperator_m, const
  boolean *FixPtRelationalOperator_e, boolean *FixPtRelationalOperator_d,
  boolean *FixPtRelationalOperator_a, boolean *FixPtRelationalOperator_o)
{
  SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 0U;
  if (*FixPtRelationalOperator) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 2U;
  } else if (*FixPtRelationalOperator_m) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 3U;
  } else if (*FixPtRelationalOperator_e) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 3U;
  } else if (*FixPtRelationalOperator_d) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 4U;
  } else if (*FixPtRelationalOperator_a) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 4U;
  } else if (*FixPtRelationalOperator_o) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 5U;
  } else if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_l) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 6U;
  } else if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_ad) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 7U;
  } else if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_b) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 8U;
  } else if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_k) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 9U;
  } else if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_eb) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 10U;
  } else if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_od) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 11U;
  } else if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_c) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 12U;
  } else if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_kk) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 13U;
  } else if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_h) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 13U;
  } else if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_i) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 14U;
  } else if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_dp) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 15U;
  } else if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_g) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 21U;
  } else if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_iy) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 27U;
  } else {
    if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_ab) {
      SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 28U;
    }
  }
}

/* Function for Chart: '<S5>/HWJudgeWakeup' */
static void SlpWkp_HW_WakeupSource_Charging(const boolean
  *FixPtRelationalOperator_l2, const boolean *FixPtRelationalOperator_m5, const
  boolean *FixPtRelationalOperator_f, uint8 *u8HWWakeup_PNCCharging)
{
  *u8HWWakeup_PNCCharging = 0U;
  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_p) {
    *u8HWWakeup_PNCCharging = 17U;
  } else if (*FixPtRelationalOperator_l2) {
    *u8HWWakeup_PNCCharging = 18U;
  } else if (*FixPtRelationalOperator_m5) {
    *u8HWWakeup_PNCCharging = 19U;
  } else {
    if (*FixPtRelationalOperator_f) {
      *u8HWWakeup_PNCCharging = 20U;
    }
  }
}

/* Function for Chart: '<S5>/HWJudgeWakeup' */
static void SlpW_HW_WakeupSourceInit_Global(const uint32 *u32DiWkSrcChn)
{
  SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 0U;
  if (*u32DiWkSrcChn == DI_WAKEUP_IDL09) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 2U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL14) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 3U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL16) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 4U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL15) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 5U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL17) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 6U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL18) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 7U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL20) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 8U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL21) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 9U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL22) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 10U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL24) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 11U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL25) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 12U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL08) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 13U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL03) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 14U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL04) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 15U;
  } else if (*u32DiWkSrcChn == DI_WAKEUP_IDL01) {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 21U;
  } else {
    if (*u32DiWkSrcChn == DI_WAKEUP_IDL02) {
      SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 27U;
    }
  }
}

/* Function for Chart: '<S5>/HWJudgeWakeup' */
static void Sl_HW_WakeupSourceInit_Charging(const uint16 *u16AdcWkSrcChn, const
  uint32 *u32DiWkSrcChn, uint8 *u8HWWakeup_PNCCharging)
{
  *u8HWWakeup_PNCCharging = 0U;
  if (*u32DiWkSrcChn == DI_WAKEUP_IDL07) {
    *u8HWWakeup_PNCCharging = 17U;
  } else if (*u16AdcWkSrcChn == AI_WAKEUP_IAN21) {
    *u8HWWakeup_PNCCharging = 18U;
  } else if (*u16AdcWkSrcChn == AI_WAKEUP_IAN20) {
    *u8HWWakeup_PNCCharging = 19U;
  } else {
    if (*u16AdcWkSrcChn == AI_WAKEUP_IAN22) {
      *u8HWWakeup_PNCCharging = 20U;
    }
  }
}

/* Function for Chart: '<S5>/HWJudgeAllowSleep' */
static void SlpWkpR_HWAllowSleepCycle_Local(void)
{
  SlpWkpReq_Ctrl_B.u32HWAllowSleep_Local[0] = (uint32)0x0;
  SlpWkpReq_Ctrl_B.u32HWAllowSleep_Local[1] = (uint32)0x0;
}

/* Function for Chart: '<S5>/HWJudgeAllowSleep' */
static void Slp_HWAllowSleepCycle_PNCGlobal(const boolean
  *FixPtRelationalOperator, const boolean *FixPtRelationalOperator_m, const
  boolean *FixPtRelationalOperator_e, boolean *FixPtRelationalOperator_d,
  boolean *FixPtRelationalOperator_a, boolean *FixPtRelationalOperator_o)
{
  SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x0;
  SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[1] = (uint32)0x0;
  if (*FixPtRelationalOperator) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00000001;
  }

  if (*FixPtRelationalOperator_m) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00000002;
  }

  if (*FixPtRelationalOperator_e) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00000004;
  }

  if (*FixPtRelationalOperator_d) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00000008;
  }

  if (*FixPtRelationalOperator_a) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00000010;
  }

  if (*FixPtRelationalOperator_o) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00000020;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_l) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00000040;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_ad) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00000080;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_b) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00000100;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_k) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00000200;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_eb) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00000400;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_od) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00000800;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_c) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00001000;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_kk) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00002000;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_h) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00004000;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_i) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00008000;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_dp) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00010000;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_p) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00040000;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_g) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00080000;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_ab) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00100000;
  }

  if (SlpWkpReq_Ctrl_B.FixPtRelationalOperator_iy) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal[0] = (uint32)0x00400000;
  }
}

/* Function for Chart: '<S5>/HWJudgeAllowSleep' */
static void S_HWAllowSleepCycle_PNCCharging(const boolean
  *FixPtRelationalOperator_l2, const boolean *FixPtRelationalOperator_m5, const
  boolean *FixPtRelationalOperator_f)
{
  SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCCharging[0] = (uint32)0x0;
  SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCCharging[1] = (uint32)0x0;
  if (*FixPtRelationalOperator_l2) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCCharging[0] = (uint32)0x00000001;
  }

  if (*FixPtRelationalOperator_m5) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCCharging[0] = (uint32)0x00000002;
  }

  if (*FixPtRelationalOperator_f) {
    SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCCharging[0] = (uint32)0x00000004;
  }
}

/* Model step function */
void SlpWkpReq_Ctrl_Runnable_10ms(void)
{
  /* local block i/o variables */
  uint32 rtb_u32HWAllowSleep_Out[2];
  uint32 rtb_u32HWAllowSleep_Out_f[2];
  uint32 rtb_u32HWAllowSleep_Out_c[2];
  uint32 tmpRead;
  uint32 tmpRead_0;
  uint32 tmpRead_1;
  uint32 tmpRead_2;
  uint32 tmpRead_3;
  uint8 tmpRead_4;
  uint32 tmpRead_5;
  uint32 tmpRead_6;
  uint32 tmpRead_7;
  boolean rtb_gDoor_bFuelFlapAjarSt;
  boolean rtb_gDoor_bRLDoorAjarSt;
  boolean rtb_gDoor_bRRDoorAjarSt;
  boolean rtb_gLock_bRLDoorLockFbSt;
  boolean rtb_gLock_bRRDoorLockFbSt;
  boolean rtb_gSuctnDoor_bRLSecLockFbSt;
  boolean rtb_gSuctnDoor_bRLInPwrRelsSwt;
  boolean rtb_gWin_bRLOutSideDoorSwFlg;
  boolean rtb_gSuctnDoor_bRRSecLockFbSt;
  boolean rtb_gSuctnDoor_bRRInPwrRlesSwt;
  boolean rtb_gWin_bRROutSideDoorSwFlg;
  boolean rtb_gPLG_bLatchAjarSwSt;
  boolean rtb_gPLG_bLatchHALFSwSt;
  boolean rtb_gPLG_bLatchNTLSwSt;
  boolean rtb_gLock_bChrgCapSwt;
  boolean rtb_gDoor_bChrgCapAjarSt;
  boolean rtb_LvElecEgyMngt_bSOCTWakeUp;
  boolean rtb_gPLG_bIntUnlockSwt;
  boolean rtb_DcChrgrPileU3_bVoltLvl;
  boolean rtb_DcChrgrPileU2_bVoltLvl;
  boolean rtb_DcChrgrPileU1_bVoltLvl;
  sint32 rtb_u32AllowSleep_PNC2;
  uint32 rtb_u32AllowSleep_PNC1;
  uint32 rtb_u32ASWAllowSleep_PNCGlobal;
  uint32 rtb_u32AllowSleep_Local;
  uint32 rtb_u32ASWAllowSleep_Local;
  uint8 rtb_u8Wakeup_PNC2;
  uint8 rtb_u8Wakeup_PNC1;
  boolean FixPtRelationalOperator;
  boolean FixPtRelationalOperator_m;
  boolean FixPtRelationalOperator_e;
  boolean FixPtRelationalOperator_l2;
  boolean FixPtRelationalOperator_m5;
  boolean FixPtRelationalOperator_f;
  boolean FixPtRelationalOperator_d;
  boolean FixPtRelationalOperator_a;
  boolean FixPtRelationalOperator_o;
  uint8 u8HWWakeup_PNCCharging;

  /* Inport: '<Root>/gPLG_u32AllowSleep_NW' */
  Rte_Read_gPLG_u32AllowSleep_NW_Val(&rtb_u32AllowSleep_PNC1);

  /* Inport: '<Root>/gKL15PwrSply_u32AllowSleep_NW' */
  Rte_Read_gKL15PwrSply_u32AllowSleep_NW_Val(&tmpRead_7);

  /* Inport: '<Root>/gEXL_u32AllowSleep_NW' */
  Rte_Read_gEXL_u32AllowSleep_NW_Val(&tmpRead_6);

  /* Chart: '<S6>/ModeMInputs' incorporates:
   *  SubSystem: '<S43>/WakeupSource'
   */
  /* FunctionCaller: '<S44>/WakeupSource' */
  Rte_Call_WakeupSource_Operation(&SlpWkpReq_Ctrl_B.WakeupSource_o1,
    &SlpWkpReq_Ctrl_B.WakeupSource_o2, &SlpWkpReq_Ctrl_B.WakeupSource_o3);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDoor_bFuelFlapAjarStOutport1' incorporates:
   *  Inport: '<Root>/gDoor_bFuelFlapAjarSt'
   */
  Rte_Read_gDoor_bFuelFlapAjarSt_Val(&rtb_gDoor_bFuelFlapAjarSt);

  /* RelationalOperator: '<S18>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S18>/Delay Input1'
   *
   * Block description for '<S18>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator = (rtb_gDoor_bFuelFlapAjarSt !=
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDoor_bRLDoorAjarStOutport1' incorporates:
   *  Inport: '<Root>/gDoor_bRLDoorAjarSt'
   */
  Rte_Read_gDoor_bRLDoorAjarSt_Val(&rtb_gDoor_bRLDoorAjarSt);

  /* RelationalOperator: '<S20>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S20>/Delay Input1'
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_m = ((sint32)rtb_gDoor_bRLDoorAjarSt > (sint32)
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_j);

  /* RelationalOperator: '<S19>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_e = ((sint32)rtb_gDoor_bRLDoorAjarSt < (sint32)
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_h);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDoor_bRRDoorAjarStOutport1' incorporates:
   *  Inport: '<Root>/gDoor_bRRDoorAjarSt'
   */
  Rte_Read_gDoor_bRRDoorAjarSt_Val(&rtb_gDoor_bRRDoorAjarSt);

  /* RelationalOperator: '<S22>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S22>/Delay Input1'
   *
   * Block description for '<S22>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_d = ((sint32)rtb_gDoor_bRRDoorAjarSt > (sint32)
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_g);

  /* RelationalOperator: '<S21>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S21>/Delay Input1'
   *
   * Block description for '<S21>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_a = ((sint32)rtb_gDoor_bRRDoorAjarSt < (sint32)
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_a);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_bRLDoorLockFbStOutport1' incorporates:
   *  Inport: '<Root>/gLock_bRLDoorLockFbSt'
   */
  Rte_Read_gLock_bRLDoorLockFbSt_Val(&rtb_gLock_bRLDoorLockFbSt);

  /* RelationalOperator: '<S24>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S24>/Delay Input1'
   *
   * Block description for '<S24>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_o = (rtb_gLock_bRLDoorLockFbSt !=
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_k);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_bRRDoorLockFbStOutport1' incorporates:
   *  Inport: '<Root>/gLock_bRRDoorLockFbSt'
   */
  Rte_Read_gLock_bRRDoorLockFbSt_Val(&rtb_gLock_bRRDoorLockFbSt);

  /* RelationalOperator: '<S25>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S25>/Delay Input1'
   *
   * Block description for '<S25>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_l = (rtb_gLock_bRRDoorLockFbSt !=
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_n);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSuctnDoor_bRLSecLockFbStOutport1' incorporates:
   *  Inport: '<Root>/gSuctnDoor_bRLSecLockFbSt'
   */
  Rte_Read_gSuctnDoor_bRLSecLockFbSt_Val(&rtb_gSuctnDoor_bRLSecLockFbSt);

  /* RelationalOperator: '<S32>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_ad = (rtb_gSuctnDoor_bRLSecLockFbSt
    != SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_l);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSuctnDoor_bRLInPwrRelsSwtOutport1' incorporates:
   *  Inport: '<Root>/gSuctnDoor_bRLInPwrRelsSwt'
   */
  Rte_Read_gSuctnDoor_bRLInPwrRelsSwt_Val(&rtb_gSuctnDoor_bRLInPwrRelsSwt);

  /* RelationalOperator: '<S31>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S31>/Delay Input1'
   *
   * Block description for '<S31>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_b = (rtb_gSuctnDoor_bRLInPwrRelsSwt
    != SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_p);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgWin_bRLOutSideDoorSwFlgOutport1' incorporates:
   *  Inport: '<Root>/gWin_bRLOutSideDoorSwFlg'
   */
  Rte_Read_gWin_bRLOutSideDoorSwFlg_Val(&rtb_gWin_bRLOutSideDoorSwFlg);

  /* RelationalOperator: '<S35>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S35>/Delay Input1'
   *
   * Block description for '<S35>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_k = (rtb_gWin_bRLOutSideDoorSwFlg !=
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_lt);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSuctnDoor_bRRSecLockFbStOutport1' incorporates:
   *  Inport: '<Root>/gSuctnDoor_bRRSecLockFbSt'
   */
  Rte_Read_gSuctnDoor_bRRSecLockFbSt_Val(&rtb_gSuctnDoor_bRRSecLockFbSt);

  /* RelationalOperator: '<S34>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S34>/Delay Input1'
   *
   * Block description for '<S34>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_eb = (rtb_gSuctnDoor_bRRSecLockFbSt
    != SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_jr);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgSuctnDoor_bRRInPwrRlesSwtOutport1' incorporates:
   *  Inport: '<Root>/gSuctnDoor_bRRInPwrRlesSwt'
   */
  Rte_Read_gSuctnDoor_bRRInPwrRlesSwt_Val(&rtb_gSuctnDoor_bRRInPwrRlesSwt);

  /* RelationalOperator: '<S33>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S33>/Delay Input1'
   *
   * Block description for '<S33>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_od = (rtb_gSuctnDoor_bRRInPwrRlesSwt
    != SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_d);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgWin_bRROutSideDoorSwFlgOutport1' incorporates:
   *  Inport: '<Root>/gWin_bRROutSideDoorSwFlg'
   */
  Rte_Read_gWin_bRROutSideDoorSwFlg_Val(&rtb_gWin_bRROutSideDoorSwFlg);

  /* RelationalOperator: '<S36>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S36>/Delay Input1'
   *
   * Block description for '<S36>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_c = (rtb_gWin_bRROutSideDoorSwFlg !=
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_c);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPLG_bLatchAjarSwStOutport1' incorporates:
   *  Inport: '<Root>/gPLG_bLatchAjarSwSt'
   */
  Rte_Read_gPLG_bLatchAjarSwSt_Val(&rtb_gPLG_bLatchAjarSwSt);

  /* RelationalOperator: '<S28>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S28>/Delay Input1'
   *
   * Block description for '<S28>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_kk = ((sint32)rtb_gPLG_bLatchAjarSwSt
    > (sint32)SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_dn);

  /* RelationalOperator: '<S27>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S27>/Delay Input1'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_h = ((sint32)rtb_gPLG_bLatchAjarSwSt <
    (sint32)SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_di);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPLG_bLatchHALFSwStOutport1' incorporates:
   *  Inport: '<Root>/gPLG_bLatchHALFSwSt'
   */
  Rte_Read_gPLG_bLatchHALFSwSt_Val(&rtb_gPLG_bLatchHALFSwSt);

  /* RelationalOperator: '<S29>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S29>/Delay Input1'
   *
   * Block description for '<S29>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_i = (rtb_gPLG_bLatchHALFSwSt !=
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_d4);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPLG_bLatchNTLSwStOutport1' incorporates:
   *  Inport: '<Root>/gPLG_bLatchNTLSwSt'
   */
  Rte_Read_gPLG_bLatchNTLSwSt_Val(&rtb_gPLG_bLatchNTLSwSt);

  /* RelationalOperator: '<S30>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S30>/Delay Input1'
   *
   * Block description for '<S30>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_dp = (rtb_gPLG_bLatchNTLSwSt !=
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_e);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgLock_bChrgCapSwtOutport1' incorporates:
   *  Inport: '<Root>/gLock_bChrgCapSwt'
   */
  Rte_Read_gLock_bChrgCapSwt_Val(&rtb_gLock_bChrgCapSwt);

  /* RelationalOperator: '<S23>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S23>/Delay Input1'
   *
   * Block description for '<S23>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_g = (rtb_gLock_bChrgCapSwt !=
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_i);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgDoor_bChrgCapAjarStOutport1' incorporates:
   *  Inport: '<Root>/gDoor_bChrgCapAjarSt'
   */
  Rte_Read_gDoor_bChrgCapAjarSt_Val(&rtb_gDoor_bChrgCapAjarSt);

  /* RelationalOperator: '<S17>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S17>/Delay Input1'
   *
   * Block description for '<S17>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_iy = (rtb_gDoor_bChrgCapAjarSt !=
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_lg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtLvElecEgyMngt_bSOCTWakeUpOutport1' incorporates:
   *  Inport: '<Root>/LvElecEgyMngt_bSOCTWakeUp'
   */
  Rte_Read_LvElecEgyMngt_bSOCTWakeUp_Val(&rtb_LvElecEgyMngt_bSOCTWakeUp);

  /* RelationalOperator: '<S16>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S16>/Delay Input1'
   *
   * Block description for '<S16>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_ab = ((sint32)
    rtb_LvElecEgyMngt_bSOCTWakeUp > (sint32)
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_m);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPLG_bIntUnlockSwtOutport1' incorporates:
   *  Inport: '<Root>/gPLG_bIntUnlockSwt'
   */
  Rte_Read_gPLG_bIntUnlockSwt_Val(&rtb_gPLG_bIntUnlockSwt);

  /* RelationalOperator: '<S26>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S26>/Delay Input1'
   *
   * Block description for '<S26>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_B.FixPtRelationalOperator_p = (rtb_gPLG_bIntUnlockSwt !=
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_e5);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDcChrgrPileU3_bVoltLvlOutport1' incorporates:
   *  Inport: '<Root>/DcChrgrPileU3_bVoltLvl'
   */
  Rte_Read_DcChrgrPileU3_bVoltLvl_Val(&rtb_DcChrgrPileU3_bVoltLvl);

  /* RelationalOperator: '<S15>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S15>/Delay Input1'
   *
   * Block description for '<S15>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_l2 = ((sint32)rtb_DcChrgrPileU3_bVoltLvl > (sint32)
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_do);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDcChrgrPileU2_bVoltLvlOutport1' incorporates:
   *  Inport: '<Root>/DcChrgrPileU2_bVoltLvl'
   */
  Rte_Read_DcChrgrPileU2_bVoltLvl_Val(&rtb_DcChrgrPileU2_bVoltLvl);

  /* RelationalOperator: '<S14>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S14>/Delay Input1'
   *
   * Block description for '<S14>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_m5 = ((sint32)rtb_DcChrgrPileU2_bVoltLvl > (sint32)
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_ny);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtDcChrgrPileU1_bVoltLvlOutport1' incorporates:
   *  Inport: '<Root>/DcChrgrPileU1_bVoltLvl'
   */
  Rte_Read_DcChrgrPileU1_bVoltLvl_Val(&rtb_DcChrgrPileU1_bVoltLvl);

  /* RelationalOperator: '<S13>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S13>/Delay Input1'
   *
   * Block description for '<S13>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FixPtRelationalOperator_f = ((sint32)rtb_DcChrgrPileU1_bVoltLvl > (sint32)
    SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_j4);

  /* Chart: '<S5>/HWJudgeWakeup' */
  if (SlpWkpReq_Ctrl_DW.is_active_c13_SlpWkpReq_Ctrl == 0U) {
    SlpWkpReq_Ctrl_DW.is_active_c13_SlpWkpReq_Ctrl = 1U;
    if ((SlpWkpReq_Ctrl_B.WakeupSource_o1 == SCR_CW_AI) ||
        (SlpWkpReq_Ctrl_B.WakeupSource_o1 == SCR_CW_DI)) {
      SlpWkpReq_Ctrl_DW.is_c13_SlpWkpReq_Ctrl = SlpWkpReq_Ctrl_IN_ModeM;
      SlpW_HW_WakeupSourceInit_Global(&SlpWkpReq_Ctrl_B.WakeupSource_o3);
      Sl_HW_WakeupSourceInit_Charging(&SlpWkpReq_Ctrl_B.WakeupSource_o2,
        &SlpWkpReq_Ctrl_B.WakeupSource_o3, &u8HWWakeup_PNCCharging);
    } else {
      SlpWkpReq_Ctrl_DW.is_c13_SlpWkpReq_Ctrl = SlpWkpReq_Ctrl_IN_WakeUp;
      SlpWkpRe_HW_WakeupSource_Global(&FixPtRelationalOperator,
        &FixPtRelationalOperator_m, &FixPtRelationalOperator_e,
        &FixPtRelationalOperator_d, &FixPtRelationalOperator_a,
        &FixPtRelationalOperator_o);
      SlpWkp_HW_WakeupSource_Charging(&FixPtRelationalOperator_l2,
        &FixPtRelationalOperator_m5, &FixPtRelationalOperator_f,
        &u8HWWakeup_PNCCharging);
    }
  } else if (SlpWkpReq_Ctrl_DW.is_c13_SlpWkpReq_Ctrl == SlpWkpReq_Ctrl_IN_ModeM)
  {
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal = 0U;
    u8HWWakeup_PNCCharging = 0U;
    SlpWkpReq_Ctrl_DW.is_c13_SlpWkpReq_Ctrl = SlpWkpReq_Ctrl_IN_WakeUp;
    SlpWkpRe_HW_WakeupSource_Global(&FixPtRelationalOperator,
      &FixPtRelationalOperator_m, &FixPtRelationalOperator_e,
      &FixPtRelationalOperator_d, &FixPtRelationalOperator_a,
      &FixPtRelationalOperator_o);
    SlpWkp_HW_WakeupSource_Charging(&FixPtRelationalOperator_l2,
      &FixPtRelationalOperator_m5, &FixPtRelationalOperator_f,
      &u8HWWakeup_PNCCharging);
  } else {
    SlpWkpRe_HW_WakeupSource_Global(&FixPtRelationalOperator,
      &FixPtRelationalOperator_m, &FixPtRelationalOperator_e,
      &FixPtRelationalOperator_d, &FixPtRelationalOperator_a,
      &FixPtRelationalOperator_o);
    SlpWkp_HW_WakeupSource_Charging(&FixPtRelationalOperator_l2,
      &FixPtRelationalOperator_m5, &FixPtRelationalOperator_f,
      &u8HWWakeup_PNCCharging);
  }

  /* End of Chart: '<S5>/HWJudgeWakeup' */

  /* Chart: '<S5>/HWWakeUpDelay_PNC' */
  if (SlpWkpReq_Ctrl_DW.temporalCounter_i1 < MAX_uint32_T) {
    SlpWkpReq_Ctrl_DW.temporalCounter_i1++;
  }

  if (SlpWkpReq_Ctrl_DW.temporalCounter_i2 < MAX_uint32_T) {
    SlpWkpReq_Ctrl_DW.temporalCounter_i2++;
  }

  SlpWkpReq_Ctrl_DW.u8HWWakeup_PNCGlobal_prev =
    SlpWkpReq_Ctrl_DW.u8HWWakeup_PNCGlobal_start;
  SlpWkpReq_Ctrl_DW.u8HWWakeup_PNCGlobal_start =
    SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal;
  SlpWkpReq_Ctrl_DW.u8HWWakeup_PNCCharging_prev =
    SlpWkpReq_Ctrl_DW.u8HWWakeup_PNCCharging_start;
  SlpWkpReq_Ctrl_DW.u8HWWakeup_PNCCharging_start = u8HWWakeup_PNCCharging;
  if (SlpWkpReq_Ctrl_DW.is_active_c17_SlpWkpReq_Ctrl == 0U) {
    SlpWkpReq_Ctrl_DW.u8HWWakeup_PNCGlobal_prev =
      SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal;
    SlpWkpReq_Ctrl_DW.u8HWWakeup_PNCCharging_prev = u8HWWakeup_PNCCharging;
    SlpWkpReq_Ctrl_DW.is_active_c17_SlpWkpReq_Ctrl = 1U;
    if (SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal != 0x0) {
      SlpWkpReq_Ctrl_DW.is_PNC_Global = SlpWkpReq_Ctrl_IN_Timing_p;
      SlpWkpReq_Ctrl_DW.temporalCounter_i1 = 0U;
      SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal_Out =
        SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal;
    } else {
      SlpWkpReq_Ctrl_DW.is_PNC_Global = SlpWkpReq_Ctrl_IN_Wait_p;
      SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal_Out = (uint8)0x0;
    }

    if (u8HWWakeup_PNCCharging != 0x0) {
      SlpWkpReq_Ctrl_DW.is_PNC_Charging = SlpWkpReq_Ctrl_IN_Timing_p;
      SlpWkpReq_Ctrl_DW.temporalCounter_i2 = 0U;
      SlpWkpReq_Ctrl_B.u8HWWakeup_PNCCharging_Out = u8HWWakeup_PNCCharging;
    } else {
      SlpWkpReq_Ctrl_DW.is_PNC_Charging = SlpWkpReq_Ctrl_IN_Wait_p;
      SlpWkpReq_Ctrl_B.u8HWWakeup_PNCCharging_Out = (uint8)0x0;
    }
  } else {
    if (SlpWkpReq_Ctrl_DW.is_PNC_Global == SlpWkpReq_Ctrl_IN_Timing_p) {
      if (SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal != 0x0) {
        SlpWkpReq_Ctrl_DW.is_PNC_Global = SlpWkpReq_Ctrl_IN_Timing_p;
        SlpWkpReq_Ctrl_DW.temporalCounter_i1 = 0U;
        SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal_Out =
          SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal;
      } else {
        if ((SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal == 0x0) &&
            (SlpWkpReq_Ctrl_DW.temporalCounter_i1 >= (uint32)
             (SACMNGT_WAKEUP_HOLDTIME / SACMNGT_TASK_BASETIME))) {
          SlpWkpReq_Ctrl_DW.is_PNC_Global = SlpWkpReq_Ctrl_IN_Wait_p;
          SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal_Out = (uint8)0x0;
        }
      }
    } else {
      if (SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal != 0x0) {
        SlpWkpReq_Ctrl_DW.is_PNC_Global = SlpWkpReq_Ctrl_IN_Timing_p;
        SlpWkpReq_Ctrl_DW.temporalCounter_i1 = 0U;
        SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal_Out =
          SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal;
      }
    }

    if (SlpWkpReq_Ctrl_DW.is_PNC_Charging == SlpWkpReq_Ctrl_IN_Timing_p) {
      if (u8HWWakeup_PNCCharging != 0x0) {
        SlpWkpReq_Ctrl_DW.is_PNC_Charging = SlpWkpReq_Ctrl_IN_Timing_p;
        SlpWkpReq_Ctrl_DW.temporalCounter_i2 = 0U;
        SlpWkpReq_Ctrl_B.u8HWWakeup_PNCCharging_Out = u8HWWakeup_PNCCharging;
      } else {
        if (SlpWkpReq_Ctrl_DW.temporalCounter_i2 >= (uint32)
            (SACMNGT_WAKEUP_HOLDTIME / SACMNGT_TASK_BASETIME)) {
          SlpWkpReq_Ctrl_DW.is_PNC_Charging = SlpWkpReq_Ctrl_IN_Wait_p;
          SlpWkpReq_Ctrl_B.u8HWWakeup_PNCCharging_Out = (uint8)0x0;
        }
      }
    } else {
      if (u8HWWakeup_PNCCharging != 0x0) {
        SlpWkpReq_Ctrl_DW.is_PNC_Charging = SlpWkpReq_Ctrl_IN_Timing_p;
        SlpWkpReq_Ctrl_DW.temporalCounter_i2 = 0U;
        SlpWkpReq_Ctrl_B.u8HWWakeup_PNCCharging_Out = u8HWWakeup_PNCCharging;
      }
    }
  }

  /* End of Chart: '<S5>/HWWakeUpDelay_PNC' */

  /* Chart: '<S3>/ASWWakeUp_Global' */
  u8HWWakeup_PNCCharging = 0U;

  /* Inport: '<Root>/gEPB_u8Wakeup' */
  Rte_Read_gEPB_u8Wakeup_Val(&rtb_u8Wakeup_PNC1);

  /* Chart: '<S3>/ASWWakeUp_Global' incorporates:
   *  Inport: '<Root>/gKL15PwrSply_u8Wakeup'
   *  Inport: '<Root>/gPLG_u8Wakeup'
   */
  if (rtb_u8Wakeup_PNC1 == 0x1) {
    u8HWWakeup_PNCCharging = 22U;
  } else {
    Rte_Read_gPLG_u8Wakeup_Val(&rtb_u8Wakeup_PNC2);
    switch (rtb_u8Wakeup_PNC2) {
     case 0x1:
      u8HWWakeup_PNCCharging = 29U;
      break;

     case 0x2:
      u8HWWakeup_PNCCharging = 30U;
      break;

     default:
      Rte_Read_gKL15PwrSply_u8Wakeup_Val(&tmpRead_4);
      switch (tmpRead_4) {
       case 0x1:
        u8HWWakeup_PNCCharging = 31U;
        break;

       case 0x2:
        u8HWWakeup_PNCCharging = 32U;
        break;

       case 0x4:
        u8HWWakeup_PNCCharging = 33U;
        break;

       case 0x8:
        u8HWWakeup_PNCCharging = 34U;
        break;

       case 0x10:
        u8HWWakeup_PNCCharging = 35U;
        break;
      }
      break;
    }
  }

  /* Chart: '<S7>/WakeupArb_Global' */
  if (SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal_Out != 0) {
    rtb_u8Wakeup_PNC1 = SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal_Out;
  } else if (u8HWWakeup_PNCCharging != 0) {
    rtb_u8Wakeup_PNC1 = u8HWWakeup_PNCCharging;
  } else {
    rtb_u8Wakeup_PNC1 = (uint8)0x0;

    /*  Null */
  }

  /* End of Chart: '<S7>/WakeupArb_Global' */

  /* Chart: '<S7>/WakeupArb_Charging' */
  if (SlpWkpReq_Ctrl_B.u8HWWakeup_PNCCharging_Out != 0) {
    rtb_u8Wakeup_PNC2 = SlpWkpReq_Ctrl_B.u8HWWakeup_PNCCharging_Out;
  } else {
    rtb_u8Wakeup_PNC2 = (uint8)0x0;

    /*  Null */
  }

  /* End of Chart: '<S7>/WakeupArb_Charging' */

  /* Chart: '<S5>/HWJudgeAllowSleep' */
  if (SlpWkpReq_Ctrl_DW.is_active_c4_SlpWkpReq_Ctrl == 0U) {
    SlpWkpReq_Ctrl_DW.is_active_c4_SlpWkpReq_Ctrl = 1U;
    SlpWkpR_HWAllowSleepCycle_Local();
    Slp_HWAllowSleepCycle_PNCGlobal(&FixPtRelationalOperator,
      &FixPtRelationalOperator_m, &FixPtRelationalOperator_e,
      &FixPtRelationalOperator_d, &FixPtRelationalOperator_a,
      &FixPtRelationalOperator_o);
    S_HWAllowSleepCycle_PNCCharging(&FixPtRelationalOperator_l2,
      &FixPtRelationalOperator_m5, &FixPtRelationalOperator_f);
  } else {
    SlpWkpR_HWAllowSleepCycle_Local();
    Slp_HWAllowSleepCycle_PNCGlobal(&FixPtRelationalOperator,
      &FixPtRelationalOperator_m, &FixPtRelationalOperator_e,
      &FixPtRelationalOperator_d, &FixPtRelationalOperator_a,
      &FixPtRelationalOperator_o);
    S_HWAllowSleepCycle_PNCCharging(&FixPtRelationalOperator_l2,
      &FixPtRelationalOperator_m5, &FixPtRelationalOperator_f);
  }

  /* End of Chart: '<S5>/HWJudgeAllowSleep' */

  /* Chart: '<S5>/HWAllowSleepDelay_Local' incorporates:
   *  Constant: '<S5>/u32Timer1BitValue_Local'
   *  Constant: '<S5>/u32Timer2BitValue_Local'
   */
  SlpWkpR_HWAllowSleepDelay_Local(SlpWkpReq_Ctrl_B.u32HWAllowSleep_Local,
    SlpWkpReq_Ctrl_ConstP.pooled1, SlpWkpReq_Ctrl_ConstP.pooled1,
    rtb_u32HWAllowSleep_Out_c, &SlpWkpReq_Ctrl_DW.sf_HWAllowSleepDelay_Local);

  /* Outport: '<Root>/gSlpWkpReq_u32HWAllowSleep_Local' */
  (void) Rte_Write_gSlpWkpReq_u32HWAllowSleep_Local_Val
    (rtb_u32HWAllowSleep_Out_c);

  /* Chart: '<S3>/ASWAllowSleep_Local' */
  rtb_u32ASWAllowSleep_Local = (uint32)0x0;

  /* Inport: '<Root>/gEXL_u32AllowSleep_Local' */
  Rte_Read_gEXL_u32AllowSleep_Local_Val(&rtb_u32AllowSleep_Local);

  /* Chart: '<S3>/ASWAllowSleep_Local' */
  if (rtb_u32AllowSleep_Local != (uint32)0x0) {
    rtb_u32ASWAllowSleep_Local = (uint32)0x00000200;
  }

  /* Inport: '<Root>/gINL_u32AllowSleep_Local' */
  Rte_Read_gINL_u32AllowSleep_Local_Val(&rtb_u32ASWAllowSleep_PNCGlobal);

  /* Chart: '<S3>/ASWAllowSleep_Local' */
  if (rtb_u32ASWAllowSleep_PNCGlobal != (uint32)0x0) {
    rtb_u32ASWAllowSleep_Local = (uint32)0x00000400;
  }

  /* Inport: '<Root>/gEDH_u32AllowSleep_Local' */
  Rte_Read_gEDH_u32AllowSleep_Local_Val(&tmpRead);

  /* Chart: '<S3>/ASWAllowSleep_Local' */
  if (tmpRead != (uint32)0x0) {
    rtb_u32ASWAllowSleep_Local = (uint32)0x00000800;
  }

  /* Inport: '<Root>/gLOC_u32AllowSleep_Local' */
  Rte_Read_gLOC_u32AllowSleep_Local_Val(&tmpRead_2);

  /* Chart: '<S3>/ASWAllowSleep_Local' */
  if (tmpRead_2 != (uint32)0x0) {
    rtb_u32ASWAllowSleep_Local = (uint32)0x00000800;
  }

  /* Inport: '<Root>/gWND_u32AllowSleep_Local' */
  Rte_Read_gWND_u32AllowSleep_Local_Val(&tmpRead_3);

  /* Chart: '<S3>/ASWAllowSleep_Local' */
  if (tmpRead_3 != (uint32)0x0) {
    rtb_u32ASWAllowSleep_Local = (uint32)0x00010000;
  }

  /* Inport: '<Root>/gEPB_u32AllowSleep_Local' */
  Rte_Read_gEPB_u32AllowSleep_Local_Val(&tmpRead_0);

  /* Chart: '<S3>/ASWAllowSleep_Local' */
  if (tmpRead_0 != (uint32)0x0) {
    rtb_u32ASWAllowSleep_Local = (uint32)0x00020000;
  }

  /* Inport: '<Root>/gKL15PwrSply_u32AllowSleep_Local' */
  Rte_Read_gKL15PwrSply_u32AllowSleep_Local_Val(&tmpRead_1);

  /* Chart: '<S3>/ASWAllowSleep_Local' */
  if (tmpRead_1 != (uint32)0x0) {
    rtb_u32ASWAllowSleep_Local = (uint32)0x04000000;
  }

  /* Chart: '<S7>/AllowSleepArb_Local' */
  rtb_u32AllowSleep_Local = 0U;

  /*  Null */
  if ((rtb_u32HWAllowSleep_Out_c[0] != 0U) || (rtb_u32HWAllowSleep_Out_c[1] !=
       0U)) {
    rtb_u32AllowSleep_Local = 2U;
  }

  rtb_u32AllowSleep_Local |= rtb_u32ASWAllowSleep_Local;

  /* End of Chart: '<S7>/AllowSleepArb_Local' */

  /* Chart: '<S5>/HWAllowSleepDelay_PNCGlobal' incorporates:
   *  Constant: '<S5>/u32Timer1BitValue_PNCGlobal'
   *  Constant: '<S5>/u32Timer2BitValue_PNCGlobal'
   */
  SlpWkpR_HWAllowSleepDelay_Local(SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCGlobal,
    SlpWkpReq_Ctrl_ConstP.u32Timer1BitValue_PNCGlobal_Val,
    SlpWkpReq_Ctrl_ConstP.u32Timer2BitValue_PNCGlobal_Val,
    rtb_u32HWAllowSleep_Out, &SlpWkpReq_Ctrl_DW.sf_HWAllowSleepDelay_PNCGlobal);

  /* Outport: '<Root>/gSlpWkpReq_u32HWAllowSleep_PNCGlobal' */
  (void) Rte_Write_gSlpWkpReq_u32HWAllowSleep_PNCGlobal_Val
    (rtb_u32HWAllowSleep_Out);

  /* Chart: '<S3>/ASWAllowSleep_PNCGlobal' */
  rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x0;
  if ((tmpRead_6 & 0x00000001) != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x00000200;
  }

  tmpRead_6 &= 1U;
  if (tmpRead_6 != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x00000200;
  }

  if (tmpRead_6 != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x00000200;
  }

  if (tmpRead_6 != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x00000200;
  }

  if (tmpRead_6 != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x00000200;
  }

  if (tmpRead_6 != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x00000200;
  }

  /* Inport: '<Root>/gEPB_u32AllowSleep_NW' */
  Rte_Read_gEPB_u32AllowSleep_NW_Val(&tmpRead_5);

  /* Chart: '<S3>/ASWAllowSleep_PNCGlobal' */
  if ((tmpRead_5 & 0x00000001) != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x00020000;
  }

  if ((rtb_u32AllowSleep_PNC1 & 0x00000001) != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x00080000;
  }

  tmpRead_6 = rtb_u32AllowSleep_PNC1 & 1U;
  if (tmpRead_6 != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x00080000;
  }

  if (tmpRead_6 != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x00080000;
  }

  if (tmpRead_6 != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x00080000;
  }

  if ((tmpRead_7 & 0x00000001) != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x04000000;
  }

  tmpRead_6 = tmpRead_7 & 1U;
  if (tmpRead_6 != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x04000000;
  }

  if (tmpRead_6 != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x04000000;
  }

  if (tmpRead_6 != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x04000000;
  }

  if (tmpRead_6 != 0U) {
    rtb_u32ASWAllowSleep_PNCGlobal = (uint32)0x04000000;
  }

  /* Chart: '<S7>/AllowSleepArb_Global' */
  rtb_u32AllowSleep_PNC1 = 0U;

  /*  Null */
  if ((rtb_u32HWAllowSleep_Out[0] != 0U) || (rtb_u32HWAllowSleep_Out[1] != 0U))
  {
    rtb_u32AllowSleep_PNC1 = 2U;
  }

  rtb_u32AllowSleep_PNC1 |= rtb_u32ASWAllowSleep_PNCGlobal;

  /* End of Chart: '<S7>/AllowSleepArb_Global' */

  /* Chart: '<S5>/HWAllowSleepDelay_PNCCharging' incorporates:
   *  Constant: '<S5>/u32Timer1BitValue_PNCCharging'
   *  Constant: '<S5>/u32Timer2BitValue_PNCCharging'
   */
  SlpWkpR_HWAllowSleepDelay_Local(SlpWkpReq_Ctrl_B.u32HWAllowSleep_PNCCharging,
    SlpWkpReq_Ctrl_ConstP.u32Timer1BitValue_PNCCharging_V,
    SlpWkpReq_Ctrl_ConstP.pooled1, rtb_u32HWAllowSleep_Out_f,
    &SlpWkpReq_Ctrl_DW.sf_HWAllowSleepDelay_PNCChargin);

  /* Outport: '<Root>/gSlpWkpReq_u32HWAllowSleep_PNCCharging' */
  (void) Rte_Write_gSlpWkpReq_u32HWAllowSleep_PNCCharging_Val
    (rtb_u32HWAllowSleep_Out_f);

  /* Chart: '<S7>/AllowSleepArb_Charging' incorporates:
   *  Chart: '<S3>/ASWAllowSleep_PNCCharging'
   */
  rtb_u32AllowSleep_PNC2 = 0;

  /*  Null */
  if ((rtb_u32HWAllowSleep_Out_f[0] != 0U) || (rtb_u32HWAllowSleep_Out_f[1] !=
       0U)) {
    rtb_u32AllowSleep_PNC2 = 2;
  }

  rtb_u32AllowSleep_PNC2 = (sint32)((uint32)rtb_u32AllowSleep_PNC2 | 0x0);

  /* End of Chart: '<S7>/AllowSleepArb_Charging' */

  /* Outport: '<Root>/gSlpWkpReq_u32AllowSleep_PNC2' */
  (void) Rte_Write_gSlpWkpReq_u32AllowSleep_PNC2_Val((uint32)
    rtb_u32AllowSleep_PNC2);

  /* Outport: '<Root>/gSlpWkpReq_u32ASWAllowSleep_PNCCharging' incorporates:
   *  Chart: '<S3>/ASWAllowSleep_PNCCharging'
   */
  (void) Rte_Write_gSlpWkpReq_u32ASWAllowSleep_PNCCharging_Val((uint32)0x0);

  /* Outport: '<Root>/gSlpWkpReq_u32AllowSleep_PNC1' */
  (void) Rte_Write_gSlpWkpReq_u32AllowSleep_PNC1_Val(rtb_u32AllowSleep_PNC1);

  /* Outport: '<Root>/gSlpWkpReq_u32ASWAllowSleep_PNCGlobal' */
  (void) Rte_Write_gSlpWkpReq_u32ASWAllowSleep_PNCGlobal_Val
    (rtb_u32ASWAllowSleep_PNCGlobal);

  /* Outport: '<Root>/gSlpWkpReq_u32AllowSleep_Local' */
  (void) Rte_Write_gSlpWkpReq_u32AllowSleep_Local_Val(rtb_u32AllowSleep_Local);

  /* Outport: '<Root>/gSlpWkpReq_u32ASWAllowSleep_Local' */
  (void) Rte_Write_gSlpWkpReq_u32ASWAllowSleep_Local_Val
    (rtb_u32ASWAllowSleep_Local);

  /* Outport: '<Root>/gSlpWkpReq_u8Wakeup_PNC2' */
  (void) Rte_Write_gSlpWkpReq_u8Wakeup_PNC2_Val(rtb_u8Wakeup_PNC2);

  /* Outport: '<Root>/gSlpWkpReq_u8ASWWakeup_PNCCharging' incorporates:
   *  Chart: '<S3>/ASWWakeUp_Charging'
   */
  (void) Rte_Write_gSlpWkpReq_u8ASWWakeup_PNCCharging_Val((uint8)0x0);

  /* Outport: '<Root>/gSlpWkpReq_u8Wakeup_PNC1' */
  (void) Rte_Write_gSlpWkpReq_u8Wakeup_PNC1_Val(rtb_u8Wakeup_PNC1);

  /* Outport: '<Root>/gSlpWkpReq_u8ASWWakeup_PNCGlobal' */
  (void) Rte_Write_gSlpWkpReq_u8ASWWakeup_PNCGlobal_Val(u8HWWakeup_PNCCharging);

  /* Outport: '<Root>/gSlpWkpReq_u8HWWakeup_PNCGlobal' */
  (void) Rte_Write_gSlpWkpReq_u8HWWakeup_PNCGlobal_Val
    (SlpWkpReq_Ctrl_B.u8HWWakeup_PNCGlobal_Out);

  /* Outport: '<Root>/gSlpWkpReq_u8HWWakeup_PNCCharging' */
  (void) Rte_Write_gSlpWkpReq_u8HWWakeup_PNCCharging_Val
    (SlpWkpReq_Ctrl_B.u8HWWakeup_PNCCharging_Out);

  /* Update for UnitDelay: '<S18>/Delay Input1'
   *
   * Block description for '<S18>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE = rtb_gDoor_bFuelFlapAjarSt;

  /* Update for UnitDelay: '<S20>/Delay Input1'
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_j = rtb_gDoor_bRLDoorAjarSt;

  /* Update for UnitDelay: '<S19>/Delay Input1'
   *
   * Block description for '<S19>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_h = rtb_gDoor_bRLDoorAjarSt;

  /* Update for UnitDelay: '<S22>/Delay Input1'
   *
   * Block description for '<S22>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_g = rtb_gDoor_bRRDoorAjarSt;

  /* Update for UnitDelay: '<S21>/Delay Input1'
   *
   * Block description for '<S21>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_a = rtb_gDoor_bRRDoorAjarSt;

  /* Update for UnitDelay: '<S24>/Delay Input1'
   *
   * Block description for '<S24>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_k = rtb_gLock_bRLDoorLockFbSt;

  /* Update for UnitDelay: '<S25>/Delay Input1'
   *
   * Block description for '<S25>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_n = rtb_gLock_bRRDoorLockFbSt;

  /* Update for UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_l = rtb_gSuctnDoor_bRLSecLockFbSt;

  /* Update for UnitDelay: '<S31>/Delay Input1'
   *
   * Block description for '<S31>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_p = rtb_gSuctnDoor_bRLInPwrRelsSwt;

  /* Update for UnitDelay: '<S35>/Delay Input1'
   *
   * Block description for '<S35>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_lt = rtb_gWin_bRLOutSideDoorSwFlg;

  /* Update for UnitDelay: '<S34>/Delay Input1'
   *
   * Block description for '<S34>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_jr = rtb_gSuctnDoor_bRRSecLockFbSt;

  /* Update for UnitDelay: '<S33>/Delay Input1'
   *
   * Block description for '<S33>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_d = rtb_gSuctnDoor_bRRInPwrRlesSwt;

  /* Update for UnitDelay: '<S36>/Delay Input1'
   *
   * Block description for '<S36>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_c = rtb_gWin_bRROutSideDoorSwFlg;

  /* Update for UnitDelay: '<S28>/Delay Input1'
   *
   * Block description for '<S28>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_dn = rtb_gPLG_bLatchAjarSwSt;

  /* Update for UnitDelay: '<S27>/Delay Input1'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_di = rtb_gPLG_bLatchAjarSwSt;

  /* Update for UnitDelay: '<S29>/Delay Input1'
   *
   * Block description for '<S29>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_d4 = rtb_gPLG_bLatchHALFSwSt;

  /* Update for UnitDelay: '<S30>/Delay Input1'
   *
   * Block description for '<S30>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_e = rtb_gPLG_bLatchNTLSwSt;

  /* Update for UnitDelay: '<S23>/Delay Input1'
   *
   * Block description for '<S23>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_i = rtb_gLock_bChrgCapSwt;

  /* Update for UnitDelay: '<S17>/Delay Input1'
   *
   * Block description for '<S17>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_lg = rtb_gDoor_bChrgCapAjarSt;

  /* Update for UnitDelay: '<S16>/Delay Input1'
   *
   * Block description for '<S16>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_m = rtb_LvElecEgyMngt_bSOCTWakeUp;

  /* Update for UnitDelay: '<S26>/Delay Input1'
   *
   * Block description for '<S26>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_e5 = rtb_gPLG_bIntUnlockSwt;

  /* Update for UnitDelay: '<S15>/Delay Input1'
   *
   * Block description for '<S15>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_do = rtb_DcChrgrPileU3_bVoltLvl;

  /* Update for UnitDelay: '<S14>/Delay Input1'
   *
   * Block description for '<S14>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_ny = rtb_DcChrgrPileU2_bVoltLvl;

  /* Update for UnitDelay: '<S13>/Delay Input1'
   *
   * Block description for '<S13>/Delay Input1':
   *
   *  Store in Global RAM
   */
  SlpWkpReq_Ctrl_DW.DelayInput1_DSTATE_j4 = rtb_DcChrgrPileU1_bVoltLvl;
}

/* Model initialize function */
void SlpWkpReq_Ctrl_Runnable_Init(void)
{
  {
    /* local block i/o variables */
    uint32 rtb_u32HWAllowSleep_Out[2];
    uint32 rtb_u32HWAllowSleep_Out_f[2];
    uint32 rtb_u32HWAllowSleep_Out_c[2];

    /* SystemInitialize for Chart: '<S5>/HWAllowSleepDelay_Local' */
    Sl_HWAllowSleepDelay_Local_Init(rtb_u32HWAllowSleep_Out_c);

    /* SystemInitialize for Chart: '<S5>/HWAllowSleepDelay_PNCGlobal' */
    Sl_HWAllowSleepDelay_Local_Init(rtb_u32HWAllowSleep_Out);

    /* SystemInitialize for Chart: '<S5>/HWAllowSleepDelay_PNCCharging' */
    Sl_HWAllowSleepDelay_Local_Init(rtb_u32HWAllowSleep_Out_f);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
