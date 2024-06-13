/*
 * File: HvacDampr_Ctrl.c
 *
 * Code generated for Simulink model 'HvacDampr_Ctrl'.
 *
 * Model version                  : 1.51
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Fri Sep 30 02:08:43 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HvacDampr_Ctrl.h"
#include "HvacDampr_Ctrl_private.h"

/* Named constants for Chart: '<S37>/DC Motor State' */
#define HvacDampr_Ctrl_IN_Delay        ((uint8)1U)
#define HvacDampr_Ctrl_IN_Sts0         ((uint8)2U)
#define HvacDampr_Ctrl_IN_Sts1         ((uint8)3U)
#define HvacDampr_Ctrl_IN_Sts2         ((uint8)4U)
#define HvacDampr_Ctrl_IN_Sts3         ((uint8)5U)
#define HvacDampr_Ctrl_IN_Sts5         ((uint8)6U)
#define HvacDampr_Ctrl_IN_Sts6         ((uint8)7U)

/* Named constants for Chart: '<S49>/DC Motor State' */
#define HvacDampr_Ctrl_IN_Delay_i      ((uint8)1U)
#define HvacDampr_Ctrl_IN_Sts0_o       ((uint8)2U)
#define HvacDampr_Ctrl_IN_Sts1_i       ((uint8)3U)
#define HvacDampr_Ctrl_IN_Sts2_f       ((uint8)4U)
#define HvacDampr_Ctrl_IN_Sts3_k       ((uint8)5U)
#define HvacDampr_Ctrl_IN_Sts5_c       ((uint8)6U)
#define HvacDampr_Ctrl_IN_Sts6_k       ((uint8)7U)

/* Named constants for Chart: '<S13>/DC Motor State' */
#define HvacDampr_Ctrl_IN_Delay_h      ((uint8)1U)
#define HvacDampr_Ctrl_IN_Sts0_o5      ((uint8)2U)
#define HvacDampr_Ctrl_IN_Sts1_j       ((uint8)3U)
#define HvacDampr_Ctrl_IN_Sts2_b       ((uint8)4U)
#define HvacDampr_Ctrl_IN_Sts3_e       ((uint8)5U)
#define HvacDampr_Ctrl_IN_Sts5_j       ((uint8)6U)
#define HvacDampr_Ctrl_IN_Sts6_l       ((uint8)7U)

/* Named constants for Chart: '<S47>/Mode_Act_Fb1' */
#define HvacDampr_Ctrl_IN_MODE_ST1     ((uint8)2U)
#define HvacDampr_Ctrl_IN_MODE_ST2     ((uint8)3U)
#define HvacDampr_Ctrl_IN_MODE_ST3     ((uint8)4U)
#define HvacDampr_Ctrl_IN_MODE_ST4     ((uint8)5U)
#define HvacDampr_Ctrl_IN_MODE_ST5     ((uint8)6U)

/* Block signals (default storage) */
VAR(B_HvacDampr_Ctrl_T, HvacDampr_Ctrl_VAR) HvacDampr_Ctrl_B;

/* Block states (default storage) */
VAR(DW_HvacDampr_Ctrl_T, HvacDampr_Ctrl_VAR) HvacDampr_Ctrl_DW;

/*
 * Output and update for action system:
 *    '<S10>/CRC_Pos_Action_Else '
 *    '<S22>/CRC_Pos_Action_Else '
 */
FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_C_CRC_Pos_Action_Else(VAR(uint8, AUTOMATIC) rtu_u8Circulation_Hmix_Percent_, VAR(uint16, AUTOMATIC) rtu_u16Circulation_FB_Pos, VAR(uint8, AUTOMATIC) rtu_u8Circulation_R_TURN_In, VAR(uint8, AUTOMATIC) rtu_u8Circulation_P_TURN_In, VAR(uint16, AUTOMATIC) rtu_u16Circulation_2LAYER_FLOW_, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u16Circulation_Taget_PosOut, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_Hmix_PercentO, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_R_TURN_Out, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_P_TURN_Out, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u16Circulation_2LAYER_FLOW_)
{
  /* Switch: '<S16>/Switch4' incorporates:
   *  Constant: '<S16>/Constant2'
   *  Constant: '<S16>/Constant32'
   *  Lookup_n-D: '<S16>/HVAC_CRCHmixToPosCnv_CUR'
   *  Sum: '<S16>/Add5'
   */
  if ((uint16)(rtu_u8Circulation_Hmix_Percent_ - Rte_CData_CAN_CRC_2LAYER_FLOW_VAL()) != 0) {
    *rty_u16Circulation_Taget_PosOut = Ifx_IntIpoCur_u8_u16(rtu_u8Circulation_Hmix_Percent_, (Rte_CData_HVAC_CRCHmixToPosCnv_CUR())->N1, (Rte_CData_HVAC_CRCHmixToPosCnv_CUR())->BP1, (Rte_CData_HVAC_CRCHmixToPosCnv_CUR())->Table);
  } else {
    *rty_u16Circulation_Taget_PosOut = Rte_CData_MDD_CRC_2LAYER_FLOW_SPEC_1();
  }

  /* End of Switch: '<S16>/Switch4' */

  /* Saturate: '<S16>/CRC_HMIX_RANGE' incorporates:
   *  Lookup_n-D: '<S16>/HVAC_CRCPosToHmixCnv_CUR'
   */
  *rty_u8Circulation_Hmix_PercentO = Mfx_Min_u8(Ifx_IntIpoCur_u16_u8(rtu_u16Circulation_FB_Pos, (Rte_CData_HVAC_CRCPosToHmixCnv_CUR())->N1, (Rte_CData_HVAC_CRCPosToHmixCnv_CUR())->BP1, (Rte_CData_HVAC_CRCPosToHmixCnv_CUR())->Table), 100U);

  /* Inport: '<S16>/u8Circulation_R_TURN_In' */
  *rty_u8Circulation_R_TURN_Out = rtu_u8Circulation_R_TURN_In;

  /* Inport: '<S16>/u8Circulation_P_TURN_In' */
  *rty_u8Circulation_P_TURN_Out = rtu_u8Circulation_P_TURN_In;

  /* Inport: '<S16>/u16Circulation_2LAYER_FLOW_Pos_In' */
  *rty_u16Circulation_2LAYER_FLOW_ = rtu_u16Circulation_2LAYER_FLOW_;
}

/*
 * Output and update for action system:
 *    '<S10>/A29_CRC_Pos_Action'
 *    '<S22>/A29_CRC_Pos_Action'
 */
FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ct_A29_CRC_Pos_Action(VAR(uint8, AUTOMATIC) rtu_u8Circulation_Hmix_Percent_, VAR(uint16, AUTOMATIC) rtu_u16Circulation_FB_Pos, VAR(uint8, AUTOMATIC) rtu_u8Circulation_R_TURN_In, VAR(uint8, AUTOMATIC) rtu_u8Circulation_P_TURN_In, VAR(uint16, AUTOMATIC) rtu_u16Circulation_2LAYER_FLOW_, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u16Circulation_Taget_PosOut, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_Hmix_PercentO, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_R_TURN_Out, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_P_TURN_Out, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u16Circulation_2LAYER_FLOW_)
{
  /* Switch: '<S15>/Switch' incorporates:
   *  Constant: '<S15>/Constant2'
   *  Constant: '<S15>/Constant32'
   *  Lookup_n-D: '<S15>/HVAC_CRCHmixToPosCnv_CUR2'
   *  Sum: '<S15>/Add5'
   */
  if ((uint16)(rtu_u8Circulation_Hmix_Percent_ - Rte_CData_CAN_CRC_2LAYER_FLOW_VAL()) > 0) {
    *rty_u16Circulation_Taget_PosOut = Ifx_IntIpoCur_u8_u16(rtu_u8Circulation_Hmix_Percent_, (Rte_CData_HVAC_CRCHmixToPosCnv_CUR2())->N1, (Rte_CData_HVAC_CRCHmixToPosCnv_CUR2())->BP1, (Rte_CData_HVAC_CRCHmixToPosCnv_CUR2())->Table);
  } else {
    *rty_u16Circulation_Taget_PosOut = Rte_CData_MDD_CRC_2LAYER_FLOW_SPEC_2();
  }

  /* End of Switch: '<S15>/Switch' */

  /* Saturate: '<S15>/CRC_HMIX_RANGE' incorporates:
   *  Lookup_n-D: '<S15>/HVAC_CRCPosToHmixCnv_CUR2'
   */
  *rty_u8Circulation_Hmix_PercentO = Mfx_Min_u8(Ifx_IntIpoCur_u16_u8(rtu_u16Circulation_FB_Pos, (Rte_CData_HVAC_CRCPosToHmixCnv_CUR2())->N1, (Rte_CData_HVAC_CRCPosToHmixCnv_CUR2())->BP1, (Rte_CData_HVAC_CRCPosToHmixCnv_CUR2())->Table), 100U);

  /* Inport: '<S15>/u8Circulation_R_TURN_In' */
  *rty_u8Circulation_R_TURN_Out = rtu_u8Circulation_R_TURN_In;

  /* Inport: '<S15>/u8Circulation_P_TURN_In' */
  *rty_u8Circulation_P_TURN_Out = rtu_u8Circulation_P_TURN_In;

  /* Inport: '<S15>/u16Circulation_2LAYER_FLOW_Pos_In' */
  *rty_u16Circulation_2LAYER_FLOW_ = rtu_u16Circulation_2LAYER_FLOW_;
}

/*
 * Output and update for action system:
 *    '<S10>/A02_CRC_Pos_Action'
 *    '<S22>/A02_CRC_Pos_Action'
 */
FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ct_A02_CRC_Pos_Action(VAR(uint8, AUTOMATIC) rtu_u8Circulation_Hmix_Percent_, VAR(uint16, AUTOMATIC) rtu_u16Circulation_FB_Pos, VAR(uint8, AUTOMATIC) rtu_u8Circulation_R_TURN_In, VAR(uint8, AUTOMATIC) rtu_u8Circulation_P_TURN_In, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u16Circulation_Taget_PosOut, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_Hmix_PercentO, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_R_TURN_Out, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_P_TURN_Out)
{
  /* Switch: '<S14>/Switch' incorporates:
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant32'
   *  Lookup_n-D: '<S14>/HVAC_CRCHmixToPosCnv_CUR3'
   *  Sum: '<S14>/Add5'
   */
  if ((uint16)(rtu_u8Circulation_Hmix_Percent_ - Rte_CData_CAN_CRC_2LAYER_FLOW_VAL()) > 0) {
    *rty_u16Circulation_Taget_PosOut = Ifx_IntIpoCur_u8_u16(rtu_u8Circulation_Hmix_Percent_, (Rte_CData_HVAC_CRCHmixToPosCnv_CUR3())->N1, (Rte_CData_HVAC_CRCHmixToPosCnv_CUR3())->BP1, (Rte_CData_HVAC_CRCHmixToPosCnv_CUR3())->Table);
  } else {
    *rty_u16Circulation_Taget_PosOut = Rte_CData_MDD_CRC_2LAYER_FLOW_SPEC_2();
  }

  /* End of Switch: '<S14>/Switch' */

  /* Saturate: '<S14>/CRC_HMIX_RANGE' incorporates:
   *  Lookup_n-D: '<S14>/HVAC_CRCPosToHmixCnv_CUR3'
   */
  *rty_u8Circulation_Hmix_PercentO = Mfx_Min_u8(Ifx_IntIpoCur_u16_u8(rtu_u16Circulation_FB_Pos, (Rte_CData_HVAC_CRCPosToHmixCnv_CUR3())->N1, (Rte_CData_HVAC_CRCPosToHmixCnv_CUR3())->BP1, (Rte_CData_HVAC_CRCPosToHmixCnv_CUR3())->Table), 100U);

  /* Inport: '<S14>/u8Circulation_R_TURN_In' */
  *rty_u8Circulation_R_TURN_Out = rtu_u8Circulation_R_TURN_In;

  /* Inport: '<S14>/u8Circulation_P_TURN_In' */
  *rty_u8Circulation_P_TURN_Out = rtu_u8Circulation_P_TURN_In;
}

/*
 * Output and update for action system:
 *    '<S17>/If Action Subsystem'
 *    '<S12>/If Action Subsystem'
 *    '<S29>/If Action Subsystem'
 *    '<S24>/If Action Subsystem'
 *    '<S42>/If Action Subsystem'
 *    '<S36>/If Action Subsystem'
 *    '<S52>/If Action Subsystem'
 *    '<S48>/If Action Subsystem'
 *    '<S65>/If Action Subsystem'
 *    '<S59>/If Action Subsystem'
 *    ...
 */
FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ctr_IfActionSubsystem(VAR(uint8, AUTOMATIC) rtu_In1, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out1)
{
  /* Inport: '<S20>/In1' */
  *rty_Out1 = rtu_In1;
}

/*
 * Output and update for enable system:
 *    '<S12>/Enabled Subsystem'
 *    '<S24>/Enabled Subsystem'
 *    '<S36>/Enabled Subsystem'
 *    '<S48>/Enabled Subsystem'
 *    '<S59>/Enabled Subsystem'
 *    '<S71>/Enabled Subsystem'
 *    '<S82>/Enabled Subsystem'
 */
FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ctrl_EnabledSubsystem(VAR(boolean, AUTOMATIC) rtu_Enable, VAR(uint8, AUTOMATIC) rtu_Circuit_Fault_In, VAR(uint8, AUTOMATIC) rtu_Time_trigger_St, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Circuit_Fault_Out, P2VAR(DW_EnabledSubsystem_HvacDampr_T, AUTOMATIC, HvacDampr_Ctrl_VAR) localDW)
{
  uint16 rtb_Add3_hv;

  /* Outputs for Enabled SubSystem: '<S12>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S17>/Enable'
   */
  if (rtu_Enable) {
    /* Sum: '<S17>/Add3' incorporates:
     *  Constant: '<S17>/Constant'
     *  Delay: '<S17>/Delay'
     */
    rtb_Add3_hv = (uint16)(localDW->Delay_DSTATE + 1U);

    /* If: '<S17>/If' incorporates:
     *  Constant: '<S17>/Constant1'
     *  Sum: '<S17>/Add1'
     */
    if (Mfx_Sub_u16u16_u16(rtb_Add3_hv, Rte_CData_CIRCUIT_FAULT_JUDEG_TIME()) > 0) {
      /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem' incorporates:
       *  ActionPort: '<S20>/Action Port'
       */
      HvacDampr_Ctr_IfActionSubsystem(rtu_Circuit_Fault_In, rty_Circuit_Fault_Out);

      /* End of Outputs for SubSystem: '<S17>/If Action Subsystem' */
    }

    /* End of If: '<S17>/If' */

    /* Switch: '<S17>/Switch' */
    if (rtu_Time_trigger_St > 0) {
      /* Update for Delay: '<S17>/Delay' incorporates:
       *  Constant: '<S17>/Constant2'
       */
      localDW->Delay_DSTATE = 0U;
    } else {
      /* Update for Delay: '<S17>/Delay' */
      localDW->Delay_DSTATE = rtb_Add3_hv;
    }

    /* End of Switch: '<S17>/Switch' */
  }

  /* End of Outputs for SubSystem: '<S12>/Enabled Subsystem' */
}

/*
 * Output and update for enable system:
 *    '<S12>/Enabled CompLP Fault cauculate'
 *    '<S24>/Enabled CompLP Fault cauculate'
 *    '<S36>/Enabled CompLP Fault cauculate'
 *    '<S48>/Enabled CompLP Fault cauculate'
 *    '<S59>/Enabled CompLP Fault cauculate'
 *    '<S71>/Enabled CompLP Fault cauculate'
 *    '<S82>/Enabled CompLP Fault cauculate'
 */
FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) Hva_EnabledCompLPFaultcauculate(VAR(uint8, AUTOMATIC) rtu_Enable, VAR(boolean, AUTOMATIC) rtu_In1, P2VAR(boolean, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out1)
{
  /* Outputs for Enabled SubSystem: '<S12>/Enabled CompLP Fault cauculate' incorporates:
   *  EnablePort: '<S18>/Enable'
   */
  if (rtu_Enable > 0) {
    /* Inport: '<S18>/In1' */
    *rty_Out1 = rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S12>/Enabled CompLP Fault cauculate' */
}

/*
 * System initialize for atomic system:
 *    '<S37>/DC Motor State'
 *    '<S60>/DC Motor State'
 */
FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ctr_DCMotorState_Init(P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_LastTargetPos, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_RunSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_MotorSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Moto_JAM_St)
{
  *rty_LastTargetPos = 0U;
  *rty_Out_RunSts = 0U;
  *rty_Out_MotorSts = 0U;
  *rty_Moto_JAM_St = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S37>/DC Motor State'
 *    '<S60>/DC Motor State'
 */
FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ctrl_DCMotorState(VAR(uint16, AUTOMATIC) rtu_In_FeedbackPos, VAR(uint16, AUTOMATIC) rtu_In_NewTargetPos, VAR(uint16, AUTOMATIC) rtu_RunMaxPos, VAR(uint16, AUTOMATIC) rtu_RunMinPos, VAR(uint16, AUTOMATIC) rtu_In_StallTime, VAR(uint16, AUTOMATIC) rtu_In_BackTime, VAR(uint16, AUTOMATIC) rtu_In_StopTime, VAR(uint8, AUTOMATIC) rtu_In_StartTime, VAR(uint8, AUTOMATIC) rtu_u8Moto_R_Turn, VAR(uint8, AUTOMATIC) rtu_u8Moto_P_Turn, VAR(uint8, AUTOMATIC) rtu_u8Moto_Stop, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_LastTargetPos, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_RunSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_MotorSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Moto_JAM_St, P2VAR(DW_DCMotorState_HvacDampr_Ctr_T, AUTOMATIC, HvacDampr_Ctrl_VAR) localDW)
{
  boolean guard1 = false;
  boolean guard2 = false;
  boolean guard3 = false;
  boolean guard4 = false;
  boolean guard5 = false;
  boolean guard6 = false;
  boolean guard7 = false;
  boolean guard8 = false;

  /* Gateway: HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Subsystem2/DC Motor State */
  if (localDW->temporalCounter_i1 < 65535U) {
    localDW->temporalCounter_i1++;
  }

  /* Chart: '<S37>/DC Motor State' */
  /* During: HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Subsystem2/DC Motor State */
  if (localDW->is_active_c4_HvacDampr_Ctrl == 0U) {
    /* Entry: HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Subsystem2/DC Motor State */
    localDW->is_active_c4_HvacDampr_Ctrl = 1U;

    /* Entry Internal: HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Subsystem2/DC Motor State */
    /* Transition: '<S46>:199' */
    localDW->is_c4_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Delay;
    localDW->temporalCounter_i1 = 0U;
  } else {
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    guard5 = false;
    guard6 = false;
    guard7 = false;
    guard8 = false;
    switch (localDW->is_c4_HvacDampr_Ctrl) {
     case HvacDampr_Ctrl_IN_Delay:
      /* During 'Delay': '<S46>:197' */
      if (localDW->temporalCounter_i1 >= rtu_In_StartTime) {
        /* Transition: '<S46>:200' */
        localDW->is_c4_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0;
      } else {
        /* Transition: '<S46>:190' */
        *rty_LastTargetPos = rtu_In_FeedbackPos;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts0:
      /* During 'Sts0': '<S46>:1' */
      switch (*rty_Out_RunSts) {
       case 1:
        /* Transition: '<S46>:19' */
        localDW->is_c4_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts1;
        localDW->temporalCounter_i1 = 0U;
        break;

       case 5:
        /* Transition: '<S46>:66' */
        localDW->is_c4_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts5;
        localDW->temporalCounter_i1 = 0U;
        break;

       default:
        /* Transition: '<S46>:25' */
        if ((rtu_In_NewTargetPos > rtu_In_FeedbackPos + Rte_CData_DCMOTOR_MODE_POS_DIFF()) || (rtu_In_NewTargetPos + Rte_CData_DCMOTOR_MODE_POS_DIFF() < rtu_In_FeedbackPos)) {
          /* Transition: '<S46>:28' */
          /* Transition: '<S46>:32' */
          localDW->RefreshTargetPos = rtu_In_NewTargetPos;

          /* Transition: '<S46>:35' */
        } else {
          /* Transition: '<S46>:34' */
        }

        /* Transition: '<S46>:46' */
        if (localDW->RefreshTargetPos > *rty_LastTargetPos) {
          /* Transition: '<S46>:48' */
          /* Transition: '<S46>:50' */
          *rty_Out_RunSts = 1U;
          *rty_LastTargetPos = localDW->RefreshTargetPos;
          *rty_Out_MotorSts = rtu_u8Moto_P_Turn;
          *rty_Moto_JAM_St = 0U;

          /* Transition: '<S46>:62' */
          /* Transition: '<S46>:63' */
        } else {
          /* Transition: '<S46>:53' */
          if (localDW->RefreshTargetPos < *rty_LastTargetPos) {
            /* Transition: '<S46>:54' */
            /* Transition: '<S46>:56' */
            *rty_Out_RunSts = 5U;
            *rty_LastTargetPos = localDW->RefreshTargetPos;

            /* RefreshTargetPos = LastTargetPos ; */
            *rty_Out_MotorSts = rtu_u8Moto_R_Turn;
            *rty_Moto_JAM_St = 0U;

            /* Transition: '<S46>:63' */
          } else {
            /* Transition: '<S46>:58' */
          }
        }
        break;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts1:
      /* During 'Sts1': '<S46>:2' */
      if (localDW->temporalCounter_i1 >= rtu_In_StopTime) {
        /* Transition: '<S46>:116' */
        if (*rty_Out_RunSts == 2) {
          /* Transition: '<S46>:158' */
          guard2 = true;
        } else if (*rty_Out_RunSts == 4) {
          /* Transition: '<S46>:159' */
          guard3 = true;
        } else {
          guard7 = true;
        }
      } else {
        guard7 = true;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts2:
      /* During 'Sts2': '<S46>:4' */
      if (localDW->temporalCounter_i1 >= rtu_In_BackTime) {
        /* Transition: '<S46>:121' */
        localDW->is_c4_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts3;

        /* Entry 'Sts3': '<S46>:119' */
        *rty_Out_RunSts = 0U;
        *rty_Out_MotorSts = rtu_u8Moto_Stop;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts3:
      /* During 'Sts3': '<S46>:119' */
      /* Transition: '<S46>:189' */
      *rty_Out_RunSts = 0U;
      *rty_Out_MotorSts = 0U;
      *rty_LastTargetPos = localDW->RefreshTargetPos;
      localDW->is_c4_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0;
      break;

     case HvacDampr_Ctrl_IN_Sts5:
      /* During 'Sts5': '<S46>:3' */
      if (localDW->temporalCounter_i1 >= rtu_In_StopTime) {
        /* Transition: '<S46>:161' */
        if (*rty_Out_RunSts == 6) {
          /* Transition: '<S46>:162' */
          guard5 = true;
        } else if (*rty_Out_RunSts == 7) {
          /* Transition: '<S46>:163' */
          guard6 = true;
        } else {
          guard8 = true;
        }
      } else {
        guard8 = true;
      }
      break;

     default:
      /* During 'Sts6': '<S46>:6' */
      if (localDW->temporalCounter_i1 >= rtu_In_BackTime) {
        /* Transition: '<S46>:165' */
        localDW->is_c4_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts3;

        /* Entry 'Sts3': '<S46>:119' */
        *rty_Out_RunSts = 0U;
        *rty_Out_MotorSts = rtu_u8Moto_Stop;
      }
      break;
    }

    if (guard8) {
      if (localDW->temporalCounter_i1 >= rtu_In_StallTime) {
        /* Transition: '<S46>:192' */
        /* Transition: '<S46>:193' */
        *rty_Out_RunSts = 6U;
        *rty_Moto_JAM_St = 1U;
        if (*rty_Out_RunSts == 6) {
          /* Transition: '<S46>:162' */
          guard5 = true;
        } else if (*rty_Out_RunSts == 7) {
          /* Transition: '<S46>:163' */
          guard6 = true;
        } else {
          guard4 = true;
        }
      } else {
        guard4 = true;
      }
    }

    if (guard7) {
      if (localDW->temporalCounter_i1 >= rtu_In_StallTime) {
        /* Transition: '<S46>:187' */
        /* Transition: '<S46>:188' */
        *rty_Out_RunSts = 2U;
        *rty_Moto_JAM_St = 1U;
        if (*rty_Out_RunSts == 2) {
          /* Transition: '<S46>:158' */
          guard2 = true;
        } else if (*rty_Out_RunSts == 4) {
          /* Transition: '<S46>:159' */
          guard3 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    }

    if (guard6) {
      /* Transition: '<S46>:175' */
      *rty_Out_RunSts = 0U;
      *rty_LastTargetPos = rtu_In_FeedbackPos;

      /* Transition: '<S46>:167' */
      localDW->is_c4_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0;
    }

    if (guard5) {
      localDW->is_c4_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts6;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'Sts6': '<S46>:6' */
      *rty_Out_RunSts = 3U;
      *rty_Out_MotorSts = rtu_u8Moto_P_Turn;
    }

    if (guard4) {
      /* Transition: '<S46>:143' */
      if (rtu_In_FeedbackPos < rtu_RunMinPos) {
        /* Transition: '<S46>:144' */
        /* Transition: '<S46>:124' */
        *rty_Out_RunSts = 0U;
        *rty_LastTargetPos = rtu_In_FeedbackPos;
        *rty_Out_MotorSts = rtu_u8Moto_Stop;

        /* Transition: '<S46>:151' */
        /* Transition: '<S46>:152' */
        /* Transition: '<S46>:153' */
        /* Transition: '<S46>:154' */
      } else {
        /* Transition: '<S46>:126' */
        if (rtu_In_NewTargetPos < localDW->RefreshTargetPos) {
          /* Transition: '<S46>:131' */
          /* Transition: '<S46>:136' */
          *rty_Out_RunSts = 0U;

          /* Transition: '<S46>:152' */
          /* Transition: '<S46>:153' */
          /* Transition: '<S46>:154' */
        } else {
          /* Transition: '<S46>:129' */
          if (rtu_In_NewTargetPos > localDW->RefreshTargetPos) {
            /* Transition: '<S46>:130' */
            /* Transition: '<S46>:134' */
            *rty_Out_RunSts = 7U;
            *rty_Out_MotorSts = rtu_u8Moto_Stop;

            /* Transition: '<S46>:153' */
            /* Transition: '<S46>:154' */
          } else {
            /* Transition: '<S46>:138' */
            if ((rtu_In_FeedbackPos >= localDW->RefreshTargetPos - 20) && (rtu_In_FeedbackPos <= localDW->RefreshTargetPos + 20)) {
              /* Transition: '<S46>:135' */
              /* Transition: '<S46>:148' */
              *rty_Out_RunSts = 6U;
              *rty_Out_MotorSts = rtu_u8Moto_Stop;

              /* Transition: '<S46>:154' */
            } else {
              /* Transition: '<S46>:150' */
            }
          }
        }
      }
    }

    if (guard3) {
      /* Transition: '<S46>:173' */
      *rty_Out_RunSts = 0U;
      *rty_LastTargetPos = rtu_In_FeedbackPos;

      /* Transition: '<S46>:178' */
      localDW->is_c4_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0;
    }

    if (guard2) {
      localDW->is_c4_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts2;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'Sts2': '<S46>:4' */
      *rty_Out_RunSts = 3U;
      *rty_Out_MotorSts = rtu_u8Moto_R_Turn;
    }

    if (guard1) {
      /* Transition: '<S46>:69' */
      if (rtu_In_FeedbackPos > rtu_RunMaxPos) {
        /* Transition: '<S46>:71' */
        /* Transition: '<S46>:72' */
        *rty_Out_RunSts = 0U;
        *rty_LastTargetPos = rtu_In_FeedbackPos;
        *rty_Out_MotorSts = rtu_u8Moto_Stop;

        /* Transition: '<S46>:112' */
        /* Transition: '<S46>:113' */
        /* Transition: '<S46>:114' */
        /* Transition: '<S46>:115' */
      } else {
        /* Transition: '<S46>:76' */
        if (rtu_In_NewTargetPos > localDW->RefreshTargetPos) {
          /* Transition: '<S46>:78' */
          /* Transition: '<S46>:80' */
          *rty_Out_RunSts = 0U;

          /* Transition: '<S46>:113' */
          /* Transition: '<S46>:114' */
          /* Transition: '<S46>:115' */
        } else {
          /* Transition: '<S46>:82' */
          if (rtu_In_NewTargetPos < localDW->RefreshTargetPos) {
            /* Transition: '<S46>:84' */
            /* Transition: '<S46>:86' */
            *rty_Out_RunSts = 4U;
            *rty_Out_MotorSts = rtu_u8Moto_Stop;

            /* Transition: '<S46>:114' */
            /* Transition: '<S46>:115' */
          } else {
            /* Transition: '<S46>:88' */
            if ((rtu_In_FeedbackPos >= localDW->RefreshTargetPos - 20) && (rtu_In_FeedbackPos <= localDW->RefreshTargetPos + 20)) {
              /* Transition: '<S46>:90' */
              /* Transition: '<S46>:92' */
              *rty_Out_RunSts = 2U;
              *rty_Out_MotorSts = rtu_u8Moto_Stop;

              /* Transition: '<S46>:115' */
            } else {
              /* Transition: '<S46>:185' */
            }
          }
        }
      }
    }
  }

  /* End of Chart: '<S37>/DC Motor State' */
}

/*
 * System initialize for atomic system:
 *    '<S49>/DC Motor State'
 *    '<S83>/DC Motor State'
 */
FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_C_DCMotorState_f_Init(P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_LastTargetPos, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_RunSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_MotorSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Moto_JAM_St)
{
  *rty_LastTargetPos = 0U;
  *rty_Out_RunSts = 0U;
  *rty_Out_MotorSts = 0U;
  *rty_Moto_JAM_St = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S49>/DC Motor State'
 *    '<S83>/DC Motor State'
 */
FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ctrl_DCMotorState_a(VAR(uint16, AUTOMATIC) rtu_In_FeedbackPos, VAR(uint16, AUTOMATIC) rtu_In_NewTargetPos, VAR(uint16, AUTOMATIC) rtu_RunMaxPos, VAR(uint16, AUTOMATIC) rtu_RunMinPos, VAR(uint16, AUTOMATIC) rtu_In_StallTime, VAR(uint16, AUTOMATIC) rtu_In_BackTime, VAR(uint16, AUTOMATIC) rtu_In_StopTime, VAR(uint8, AUTOMATIC) rtu_In_StartTime, VAR(uint8, AUTOMATIC) rtu_u8Moto_R_Turn, VAR(uint8, AUTOMATIC) rtu_u8Moto_P_Turn, VAR(uint8, AUTOMATIC) rtu_u8Moto_Stop, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_LastTargetPos, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_RunSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_MotorSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Moto_JAM_St, P2VAR(DW_DCMotorState_HvacDampr_C_m_T, AUTOMATIC, HvacDampr_Ctrl_VAR) localDW)
{
  boolean guard1 = false;
  boolean guard2 = false;
  boolean guard3 = false;
  boolean guard4 = false;
  boolean guard5 = false;
  boolean guard6 = false;
  boolean guard7 = false;
  boolean guard8 = false;

  /* Gateway: HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem2/DC Motor State */
  if (localDW->temporalCounter_i1 < 65535U) {
    localDW->temporalCounter_i1++;
  }

  /* Chart: '<S49>/DC Motor State' */
  /* During: HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem2/DC Motor State */
  if (localDW->is_active_c7_HvacDampr_Ctrl == 0U) {
    /* Entry: HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem2/DC Motor State */
    localDW->is_active_c7_HvacDampr_Ctrl = 1U;

    /* Entry Internal: HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem2/DC Motor State */
    /* Transition: '<S56>:199' */
    localDW->is_c7_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Delay_i;
    localDW->temporalCounter_i1 = 0U;
  } else {
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    guard5 = false;
    guard6 = false;
    guard7 = false;
    guard8 = false;
    switch (localDW->is_c7_HvacDampr_Ctrl) {
     case HvacDampr_Ctrl_IN_Delay_i:
      /* During 'Delay': '<S56>:197' */
      if (localDW->temporalCounter_i1 >= rtu_In_StartTime) {
        /* Transition: '<S56>:200' */
        localDW->is_c7_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o;
      } else {
        /* Transition: '<S56>:190' */
        *rty_LastTargetPos = rtu_In_FeedbackPos;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts0_o:
      /* During 'Sts0': '<S56>:1' */
      switch (*rty_Out_RunSts) {
       case 1:
        /* Transition: '<S56>:19' */
        localDW->is_c7_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts1_i;
        localDW->temporalCounter_i1 = 0U;
        break;

       case 5:
        /* Transition: '<S56>:66' */
        localDW->is_c7_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts5_c;
        localDW->temporalCounter_i1 = 0U;
        break;

       default:
        /* Transition: '<S56>:25' */
        if ((rtu_In_NewTargetPos > rtu_In_FeedbackPos + Rte_CData_DCMOTOR_MODE_POS_DIFF()) || (rtu_In_NewTargetPos + Rte_CData_DCMOTOR_MODE_POS_DIFF() < rtu_In_FeedbackPos)) {
          /* Transition: '<S56>:28' */
          /* Transition: '<S56>:32' */
          localDW->RefreshTargetPos = rtu_In_NewTargetPos;

          /* Transition: '<S56>:35' */
        } else {
          /* Transition: '<S56>:34' */
        }

        /* Transition: '<S56>:46' */
        if (localDW->RefreshTargetPos > *rty_LastTargetPos) {
          /* Transition: '<S56>:48' */
          /* Transition: '<S56>:50' */
          *rty_Out_RunSts = 1U;
          *rty_LastTargetPos = localDW->RefreshTargetPos;
          *rty_Out_MotorSts = rtu_u8Moto_P_Turn;
          *rty_Moto_JAM_St = 0U;

          /* Transition: '<S56>:62' */
          /* Transition: '<S56>:63' */
        } else {
          /* Transition: '<S56>:53' */
          if (localDW->RefreshTargetPos < *rty_LastTargetPos) {
            /* Transition: '<S56>:54' */
            /* Transition: '<S56>:56' */
            *rty_Out_RunSts = 5U;
            *rty_LastTargetPos = localDW->RefreshTargetPos;

            /* RefreshTargetPos = LastTargetPos ; */
            *rty_Out_MotorSts = rtu_u8Moto_R_Turn;
            *rty_Moto_JAM_St = 0U;

            /* Transition: '<S56>:63' */
          } else {
            /* Transition: '<S56>:58' */
          }
        }
        break;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts1_i:
      /* During 'Sts1': '<S56>:2' */
      if (localDW->temporalCounter_i1 >= rtu_In_StopTime) {
        /* Transition: '<S56>:116' */
        if (*rty_Out_RunSts == 2) {
          /* Transition: '<S56>:158' */
          guard2 = true;
        } else if (*rty_Out_RunSts == 4) {
          /* Transition: '<S56>:159' */
          guard3 = true;
        } else {
          guard7 = true;
        }
      } else {
        guard7 = true;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts2_f:
      /* During 'Sts2': '<S56>:4' */
      if (localDW->temporalCounter_i1 >= rtu_In_BackTime) {
        /* Transition: '<S56>:121' */
        localDW->is_c7_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts3_k;

        /* Entry 'Sts3': '<S56>:119' */
        *rty_Out_RunSts = 0U;
        *rty_Out_MotorSts = rtu_u8Moto_Stop;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts3_k:
      /* During 'Sts3': '<S56>:119' */
      /* Transition: '<S56>:189' */
      *rty_Out_RunSts = 0U;
      *rty_Out_MotorSts = 0U;
      *rty_LastTargetPos = localDW->RefreshTargetPos;
      localDW->is_c7_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o;
      break;

     case HvacDampr_Ctrl_IN_Sts5_c:
      /* During 'Sts5': '<S56>:3' */
      if (localDW->temporalCounter_i1 >= rtu_In_StopTime) {
        /* Transition: '<S56>:161' */
        if (*rty_Out_RunSts == 6) {
          /* Transition: '<S56>:162' */
          guard5 = true;
        } else if (*rty_Out_RunSts == 7) {
          /* Transition: '<S56>:163' */
          guard6 = true;
        } else {
          guard8 = true;
        }
      } else {
        guard8 = true;
      }
      break;

     default:
      /* During 'Sts6': '<S56>:6' */
      if (localDW->temporalCounter_i1 >= rtu_In_BackTime) {
        /* Transition: '<S56>:165' */
        localDW->is_c7_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts3_k;

        /* Entry 'Sts3': '<S56>:119' */
        *rty_Out_RunSts = 0U;
        *rty_Out_MotorSts = rtu_u8Moto_Stop;
      }
      break;
    }

    if (guard8) {
      if (localDW->temporalCounter_i1 >= rtu_In_StallTime) {
        /* Transition: '<S56>:192' */
        /* Transition: '<S56>:193' */
        *rty_Out_RunSts = 6U;
        *rty_Moto_JAM_St = 1U;
        if (*rty_Out_RunSts == 6) {
          /* Transition: '<S56>:162' */
          guard5 = true;
        } else if (*rty_Out_RunSts == 7) {
          /* Transition: '<S56>:163' */
          guard6 = true;
        } else {
          guard4 = true;
        }
      } else {
        guard4 = true;
      }
    }

    if (guard7) {
      if (localDW->temporalCounter_i1 >= rtu_In_StallTime) {
        /* Transition: '<S56>:187' */
        /* Transition: '<S56>:188' */
        *rty_Out_RunSts = 2U;
        *rty_Moto_JAM_St = 1U;
        if (*rty_Out_RunSts == 2) {
          /* Transition: '<S56>:158' */
          guard2 = true;
        } else if (*rty_Out_RunSts == 4) {
          /* Transition: '<S56>:159' */
          guard3 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    }

    if (guard6) {
      /* Transition: '<S56>:175' */
      *rty_Out_RunSts = 0U;
      *rty_LastTargetPos = rtu_In_FeedbackPos;

      /* Transition: '<S56>:167' */
      localDW->is_c7_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o;
    }

    if (guard5) {
      localDW->is_c7_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts6_k;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'Sts6': '<S56>:6' */
      *rty_Out_RunSts = 3U;
      *rty_Out_MotorSts = rtu_u8Moto_P_Turn;
    }

    if (guard4) {
      /* Transition: '<S56>:143' */
      if (rtu_In_FeedbackPos < rtu_RunMinPos) {
        /* Transition: '<S56>:144' */
        /* Transition: '<S56>:124' */
        *rty_Out_RunSts = 0U;
        *rty_LastTargetPos = rtu_In_FeedbackPos;
        *rty_Out_MotorSts = rtu_u8Moto_Stop;

        /* Transition: '<S56>:151' */
        /* Transition: '<S56>:152' */
        /* Transition: '<S56>:153' */
        /* Transition: '<S56>:154' */
      } else {
        /* Transition: '<S56>:126' */
        if (rtu_In_NewTargetPos < localDW->RefreshTargetPos) {
          /* Transition: '<S56>:131' */
          /* Transition: '<S56>:136' */
          *rty_Out_RunSts = 0U;

          /* Transition: '<S56>:152' */
          /* Transition: '<S56>:153' */
          /* Transition: '<S56>:154' */
        } else {
          /* Transition: '<S56>:129' */
          if (rtu_In_NewTargetPos > localDW->RefreshTargetPos) {
            /* Transition: '<S56>:130' */
            /* Transition: '<S56>:134' */
            *rty_Out_RunSts = 7U;
            *rty_Out_MotorSts = rtu_u8Moto_Stop;

            /* Transition: '<S56>:153' */
            /* Transition: '<S56>:154' */
          } else {
            /* Transition: '<S56>:138' */
            if ((rtu_In_FeedbackPos >= localDW->RefreshTargetPos - 20) && (rtu_In_FeedbackPos <= localDW->RefreshTargetPos + 20)) {
              /* Transition: '<S56>:135' */
              /* Transition: '<S56>:148' */
              *rty_Out_RunSts = 6U;
              *rty_Out_MotorSts = rtu_u8Moto_Stop;

              /* Transition: '<S56>:154' */
            } else {
              /* Transition: '<S56>:150' */
            }
          }
        }
      }
    }

    if (guard3) {
      /* Transition: '<S56>:173' */
      *rty_Out_RunSts = 0U;
      *rty_LastTargetPos = rtu_In_FeedbackPos;

      /* Transition: '<S56>:178' */
      localDW->is_c7_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o;
    }

    if (guard2) {
      localDW->is_c7_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts2_f;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'Sts2': '<S56>:4' */
      *rty_Out_RunSts = 3U;
      *rty_Out_MotorSts = rtu_u8Moto_R_Turn;
    }

    if (guard1) {
      /* Transition: '<S56>:69' */
      if (rtu_In_FeedbackPos > rtu_RunMaxPos) {
        /* Transition: '<S56>:71' */
        /* Transition: '<S56>:72' */
        *rty_Out_RunSts = 0U;
        *rty_LastTargetPos = rtu_In_FeedbackPos;
        *rty_Out_MotorSts = rtu_u8Moto_Stop;

        /* Transition: '<S56>:112' */
        /* Transition: '<S56>:113' */
        /* Transition: '<S56>:114' */
        /* Transition: '<S56>:115' */
      } else {
        /* Transition: '<S56>:76' */
        if (rtu_In_NewTargetPos > localDW->RefreshTargetPos) {
          /* Transition: '<S56>:78' */
          /* Transition: '<S56>:80' */
          *rty_Out_RunSts = 0U;

          /* Transition: '<S56>:113' */
          /* Transition: '<S56>:114' */
          /* Transition: '<S56>:115' */
        } else {
          /* Transition: '<S56>:82' */
          if (rtu_In_NewTargetPos < localDW->RefreshTargetPos) {
            /* Transition: '<S56>:84' */
            /* Transition: '<S56>:86' */
            *rty_Out_RunSts = 4U;
            *rty_Out_MotorSts = rtu_u8Moto_Stop;

            /* Transition: '<S56>:114' */
            /* Transition: '<S56>:115' */
          } else {
            /* Transition: '<S56>:88' */
            if ((rtu_In_FeedbackPos >= localDW->RefreshTargetPos - 20) && (rtu_In_FeedbackPos <= localDW->RefreshTargetPos + 20)) {
              /* Transition: '<S56>:90' */
              /* Transition: '<S56>:92' */
              *rty_Out_RunSts = 2U;
              *rty_Out_MotorSts = rtu_u8Moto_Stop;

              /* Transition: '<S56>:115' */
            } else {
              /* Transition: '<S56>:185' */
            }
          }
        }
      }
    }
  }

  /* End of Chart: '<S49>/DC Motor State' */
}

/* Model step function for TID1 */
FUNC(void, HvacDampr_Ctrl_CODE) HvacDampr_Ctrl_Runnable_10ms(void) /* Explicit Task: HvacDampr_Ctrl_Runnable_10ms */
{
  /* local block i/o variables */
  uint8 rtb_TmpSignalConversionAtHvac_e;
  boolean rtb_TmpSignalConversionAtHva_ca;
  boolean tmpRead;
  boolean tmpRead_0;
  boolean tmpRead_1;
  boolean tmpRead_2;
  boolean tmpRead_3;
  boolean tmpRead_4;
  boolean tmpRead_5;
  uint8 rtb_Switch2_p;
  uint16 rtb_Divide;
  uint16 rtb_Divide1;
  uint16 rtb_Divide2;
  uint16 rtb_Divide4;
  uint16 rtb_Divide5;
  uint16 rtb_Divide6;
  uint16 rtb_Divide7;
  uint16 rtb_Divide8;
  uint16 rtb_Divide9;
  uint16 rtb_Divide10;
  uint16 rtb_Divide11;
  sint16 rtb_IoHwAb_IoSigAdc_AdcFac_Get1;
  boolean rtb_TmpSignalConversionAtHvac_p;
  uint8 rtb_TmpSignalConversionAtgPRM_u;
  uint8 rtb_TmpSignalConversionAtgPRM_b;
  boolean rtb_LogicalOperator2;
  uint8 rtb_Switch_a;
  uint8 rtb_TmpSignalConversionAtHvacDa;
  boolean rtb_TmpSignalConversionAtHvac_c;
  boolean rtb_LogicalOperator_a;
  uint8 rtb_Switch1_d;
  uint8 rtb_TmpSignalConversionAtHva_gj;
  boolean rtb_TmpSignalConversionAtHvac_l;
  uint8 rtb_Switch12_k;
  uint8 rtb_TmpSignalConversionAtgPRM_d;
  boolean rtb_DTC_DrvrMixDamprMotMaxEr_ar;
  boolean rtb_DTC_DrvrMixDamprMotMaxErr_e;
  boolean rtb_DTC_DrvrMixDamprMotMinErr_g;
  boolean rtb_DTC_DrvrMixDamprMotMinErr_h;
  boolean rtb_DTC_DrvrMixDamprMotStuck__m;
  boolean rtb_DTC_DrvrMixDamprMotStuck__b;
  boolean rtb_DTC_ModDamprMotMaxErr_Get_l;
  boolean rtb_DTC_ModDamprMotMaxErr_Get_m;
  boolean rtb_DTC_ModDamprMotMinErr_Get_n;
  boolean rtb_DTC_ModDamprMotMinErr_Get_e;
  boolean rtb_DTC_ModDamprMotStuck_GetE_b;
  boolean rtb_DTC_ModDamprMotStuck_GetE_h;
  boolean rtb_DTC_PassMixDamprMotMaxErr_n;
  boolean rtb_DTC_PassMixDamprMotMaxErr_l;
  boolean rtb_DTC_PassMixDamprMotMinErr_j;
  boolean rtb_DTC_PassMixDamprMotMinErr_a;
  boolean rtb_DTC_PassMixDamprMotStuck__b;
  boolean rtb_DTC_PassMixDamprMotStuck__h;
  boolean rtb_DTC_RcrltnDamprMotMaxErr__f;
  boolean rtb_DTC_RcrltnDamprMotMaxErr_jj;
  boolean rtb_DTC_RcrltnDamprMotMinErr__j;
  boolean rtb_DTC_RcrltnDamprMotMinErr__o;
  boolean rtb_DTC_RcrltnDamprMotStuck_G_i;
  boolean rtb_DTC_RcrltnDamprMotStuck_G_c;
  uint8 rtb_Switch1_g2;
  uint8 rtb_Switch13;
  uint16 rtb_Switch;
  uint16 rtb_Switch1;
  uint8 rtb_Switch6;
  uint8 rtb_Switch1_l4;
  uint8 rtb_Switch13_b;
  uint8 Switch2;
  uint8 MultiportSwitch5;
  sint16 tmp;
  sint32 tmp_0;
  sint16 tmp_1;
  Dem_EventStatusType tmp_2;
  boolean guard1 = false;
  boolean guard2 = false;
  boolean guard3 = false;
  boolean guard4 = false;
  boolean guard5 = false;
  boolean guard6 = false;
  boolean guard7 = false;
  boolean guard8 = false;

  /* RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/HvacDampr_Ctrl_Runnable_10ms_sys'
   */
  /* DataStoreWrite: '<S3>/Data Store Write26' incorporates:
   *  Inport: '<Root>/HvacDampr_stReqDrvrRcrltnMot_Val'
   */
  Rte_Read_HvacDampr_stReqDrvrRcrltnMot_Val(&HvacDampr_Ctrl_DW.HvacDampr_stReqDrvrRcrltnMot);

  /* FunctionCaller: '<S3>/IoHwAb_IoSigAdc_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_DrvrAirCircMotorPosnFb, &rtb_IoHwAb_IoSigAdc_AdcFac_Get1);

  /* DataTypeConversion: '<S3>/DataTypeConversion' incorporates:
   *  DataStoreWrite: '<S3>/Data Store Write13'
   */
  tmp_1 = rtb_IoHwAb_IoSigAdc_AdcFac_Get1;
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Get1 < 0) {
    tmp_1 = 0;
  }

  HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb = (uint16)tmp_1;

  /* End of DataTypeConversion: '<S3>/DataTypeConversion' */

  /* SignalConversion generated from: '<S1>/HvacDampr_bReqVldDrvrRcrltnMot_Val_read' incorporates:
   *  Inport: '<Root>/HvacDampr_bReqVldDrvrRcrltnMot_Val'
   */
  Rte_Read_HvacDampr_bReqVldDrvrRcrltnMot_Val(&rtb_TmpSignalConversionAtHvac_p);

  /* DataStoreWrite: '<S3>/Data Store Write33' */
  HvacDampr_Ctrl_DW.HvacDampr_bReqVldDrvrRcrltnMot = rtb_TmpSignalConversionAtHvac_p;

  /* SignalConversion generated from: '<S1>/gPRM_u8VehicleTypeCfg_Val_read' incorporates:
   *  Inport: '<Root>/gPRM_u8VehicleTypeCfg_Val'
   */
  Rte_Read_gPRM_u8VehicleTypeCfg_Val(&rtb_TmpSignalConversionAtgPRM_u);

  /* SignalConversion generated from: '<S1>/gPRM_u8AirConditionBoxSpecCfg_Val_read' incorporates:
   *  Inport: '<Root>/gPRM_u8AirConditionBoxSpecCfg_Val'
   */
  Rte_Read_gPRM_u8AirConditionBoxSpecCfg_Val(&rtb_TmpSignalConversionAtgPRM_b);

  /* Logic: '<S3>/Logical Operator2' incorporates:
   *  Constant: '<S3>/A02_AirBoxCfgVal'
   *  Constant: '<S3>/Constant5'
   *  RelationalOperator: '<S3>/Relational Operator5'
   *  RelationalOperator: '<S3>/Relational Operator6'
   */
  rtb_LogicalOperator2 = ((rtb_TmpSignalConversionAtgPRM_u == 0) || (rtb_TmpSignalConversionAtgPRM_b == Rte_CData_PRM_A02_CFG_SPEC_VAL()));

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant1'
   *  Constant: '<S3>/Constant12'
   *  Constant: '<S3>/Constant2'
   *  Constant: '<S3>/Constant3'
   *  Constant: '<S3>/XH2_AirBoxCfgVal'
   *  Logic: '<S3>/Logical Operator'
   *  Logic: '<S3>/Logical Operator1'
   *  RelationalOperator: '<S3>/Relational Operator1'
   *  RelationalOperator: '<S3>/Relational Operator2'
   *  RelationalOperator: '<S3>/Relational Operator3'
   *  RelationalOperator: '<S3>/Relational Operator4'
   *  Switch: '<S3>/Switch3'
   */
  if ((rtb_TmpSignalConversionAtgPRM_u == 1) || (rtb_TmpSignalConversionAtgPRM_u == 2) || (rtb_TmpSignalConversionAtgPRM_u == 3) || (rtb_TmpSignalConversionAtgPRM_b == Rte_CData_PRM_A08_CFG_SPEC_VAL())) {
    rtb_Switch_a = 1U;
  } else if (rtb_LogicalOperator2) {
    /* Switch: '<S3>/Switch3' incorporates:
     *  Constant: '<S3>/Constant7'
     */
    rtb_Switch_a = 2U;
  } else {
    rtb_Switch_a = rtb_TmpSignalConversionAtgPRM_u;
  }

  /* End of Switch: '<S3>/Switch' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' */

  /* Inport: '<Root>/HvacDampr_bUdsTrigDrvrRcrltnMot_Val' */
  Rte_Read_HvacDampr_bUdsTrigDrvrRcrltnMot_Val(&tmpRead_1);

  /* RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/HvacDampr_Ctrl_Runnable_10ms_sys'
   */
  /* Switch: '<S3>/Switch1' incorporates:
   *  DataStoreRead: '<S3>/Data Store Read'
   *  Inport: '<Root>/HvacDampr_stReqUdsDrvrRcrltnMot_Val'
   */
  if (tmpRead_1) {
    Rte_Read_HvacDampr_stReqUdsDrvrRcrltnMot_Val(&rtb_Switch1_g2);
  } else {
    rtb_Switch1_g2 = HvacDampr_Ctrl_DW.HvacDampr_stReqDrvrRcrltnMot;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* SwitchCase: '<S10>/Switch Case' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S10>/Constant1'
   *  Constant: '<S10>/Constant11'
   *  Constant: '<S10>/Constant28'
   *  Constant: '<S10>/Constant29'
   *  Constant: '<S10>/Constant30'
   *  Constant: '<S10>/Constant4'
   *  Constant: '<S10>/Constant7'
   *  DataStoreWrite: '<S3>/Data Store Write13'
   */
  switch (rtb_Switch_a) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S10>/CRC_Pos_Action_Else ' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    HvacDampr_C_CRC_Pos_Action_Else(rtb_Switch1_g2, HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb, Rte_CData_MOTO_CRC_SPECT1_R_TURN(), Rte_CData_MOTO_CRC_SPECT1_P_TURN(), Rte_CData_MDD_CRC_2LAYER_FLOW_SPEC_1(), &HvacDampr_Ctrl_B.Merge2, &HvacDampr_Ctrl_B.Merge3, &HvacDampr_Ctrl_B.Merge_c, &HvacDampr_Ctrl_B.Merge1_l, &HvacDampr_Ctrl_B.Merge4);

    /* End of Outputs for SubSystem: '<S10>/CRC_Pos_Action_Else ' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S10>/A29_CRC_Pos_Action' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    HvacDampr_Ct_A29_CRC_Pos_Action(rtb_Switch1_g2, HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb, Rte_CData_MOTO_CRC_SPECT2_R_TURN(), Rte_CData_MOTO_CRC_SPECT2_P_TURN(), Rte_CData_MDD_CRC_2LAYER_FLOW_SPEC_2(), &HvacDampr_Ctrl_B.Merge2, &HvacDampr_Ctrl_B.Merge3, &HvacDampr_Ctrl_B.Merge_c, &HvacDampr_Ctrl_B.Merge1_l, &HvacDampr_Ctrl_B.Merge4);

    /* End of Outputs for SubSystem: '<S10>/A29_CRC_Pos_Action' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S10>/A02_CRC_Pos_Action' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    HvacDampr_Ct_A02_CRC_Pos_Action(rtb_Switch1_g2, HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb, Rte_CData_MOTO_CRC_SPECT3_R_TURN(), Rte_CData_MOTO_CRC_SPECT3_P_TURN(), &HvacDampr_Ctrl_B.Merge2, &HvacDampr_Ctrl_B.Merge3, &HvacDampr_Ctrl_B.Merge_c, &HvacDampr_Ctrl_B.Merge1_l);

    /* End of Outputs for SubSystem: '<S10>/A02_CRC_Pos_Action' */
    break;
  }

  /* End of SwitchCase: '<S10>/Switch Case' */

  /* Switch: '<S12>/Switch12' incorporates:
   *  Constant: '<S12>/Constant15'
   *  Constant: '<S12>/Constant8'
   *  DataStoreWrite: '<S3>/Data Store Write13'
   *  Sum: '<S12>/Add12'
   */
  if (Mfx_Sub_u16u16_u16(Rte_CData_CIRCUIT_SHORT_POWER_VAL(), HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb) > 0) {
    /* Switch: '<S12>/Switch14' incorporates:
     *  Constant: '<S12>/Constant14'
     *  Constant: '<S12>/Constant16'
     *  Constant: '<S12>/Constant25'
     *  Sum: '<S12>/Add14'
     */
    if (Mfx_Sub_u16u16_u16(HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb, Rte_CData_CIRCUIT_SHORT_GND_VAL()) > 0) {
      rtb_Switch1_g2 = Rte_CData_CIRCUIT_NORMAL();
    } else {
      rtb_Switch1_g2 = Rte_CData_CIRCUIT_SHORT_GND();
    }

    /* End of Switch: '<S12>/Switch14' */
  } else {
    rtb_Switch1_g2 = Rte_CData_CIRCUIT_SHORT_POWER();
  }

  /* End of Switch: '<S12>/Switch12' */

  /* Switch: '<S12>/Switch13' incorporates:
   *  Delay: '<S12>/Delay3'
   *  Sum: '<S12>/Add13'
   */
  rtb_Switch13 = (uint8)((uint8)(rtb_Switch1_g2 - HvacDampr_Ctrl_DW.Delay3_DSTATE) != 0);

  /* Outputs for Enabled SubSystem: '<S12>/Enabled CompLP Fault cauculate' */
  /* Constant: '<S12>/Constant13' */
  Hva_EnabledCompLPFaultcauculate(rtb_Switch13, true, &HvacDampr_Ctrl_B.In1_b);

  /* End of Outputs for SubSystem: '<S12>/Enabled CompLP Fault cauculate' */

  /* Outputs for Enabled SubSystem: '<S12>/Enabled Subsystem' */
  /* Delay: '<S12>/Delay3' */
  HvacDampr_Ctrl_EnabledSubsystem(HvacDampr_Ctrl_B.In1_b, HvacDampr_Ctrl_DW.Delay3_DSTATE, rtb_Switch13, &HvacDampr_Ctrl_B.In1_j, &HvacDampr_Ctrl_DW.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S12>/Enabled Subsystem' */

  /* Chart: '<S13>/DC Motor State' incorporates:
   *  Constant: '<S13>/Constant3'
   *  Constant: '<S13>/Constant58'
   *  Constant: '<S3>/Constant31'
   *  DataStoreWrite: '<S3>/Data Store Write13'
   */
  /* Gateway: HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/Subsystem2/DC Motor State */
  if (HvacDampr_Ctrl_DW.temporalCounter_i1_i < 65535U) {
    HvacDampr_Ctrl_DW.temporalCounter_i1_i++;
  }

  /* During: HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/Subsystem2/DC Motor State */
  if (HvacDampr_Ctrl_DW.is_active_c1_HvacDampr_Ctrl == 0U) {
    /* Entry: HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/Subsystem2/DC Motor State */
    HvacDampr_Ctrl_DW.is_active_c1_HvacDampr_Ctrl = 1U;

    /* Entry Internal: HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/Subsystem2/DC Motor State */
    /* Transition: '<S21>:199' */
    HvacDampr_Ctrl_DW.is_c1_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Delay_h;
    HvacDampr_Ctrl_DW.temporalCounter_i1_i = 0U;
  } else {
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    guard5 = false;
    guard6 = false;
    guard7 = false;
    guard8 = false;
    switch (HvacDampr_Ctrl_DW.is_c1_HvacDampr_Ctrl) {
     case HvacDampr_Ctrl_IN_Delay_h:
      /* During 'Delay': '<S21>:197' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_i >= Rte_CData_MOTO_INIT_DEAL_TIME()) {
        /* Transition: '<S21>:200' */
        HvacDampr_Ctrl_DW.is_c1_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o5;
      } else {
        /* Transition: '<S21>:190' */
        HvacDampr_Ctrl_B.LastTargetPos_d = HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts0_o5:
      /* During 'Sts0': '<S21>:1' */
      switch (HvacDampr_Ctrl_B.Out_RunSts_c) {
       case 1:
        /* Transition: '<S21>:19' */
        HvacDampr_Ctrl_DW.is_c1_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts1_j;
        HvacDampr_Ctrl_DW.temporalCounter_i1_i = 0U;
        break;

       case 5:
        /* Transition: '<S21>:66' */
        HvacDampr_Ctrl_DW.is_c1_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts5_j;
        HvacDampr_Ctrl_DW.temporalCounter_i1_i = 0U;
        break;

       default:
        /* Transition: '<S21>:25' */
        if ((HvacDampr_Ctrl_B.Merge2 > HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb + Rte_CData_DCMOTOR_MODE_POS_DIFF()) || (HvacDampr_Ctrl_B.Merge2 + Rte_CData_DCMOTOR_MODE_POS_DIFF() < HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb)) {
          /* Transition: '<S21>:28' */
          /* Transition: '<S21>:32' */
          HvacDampr_Ctrl_DW.RefreshTargetPos_l2 = HvacDampr_Ctrl_B.Merge2;

          /* Transition: '<S21>:35' */
        } else {
          /* Transition: '<S21>:34' */
        }

        /* Transition: '<S21>:46' */
        if (HvacDampr_Ctrl_DW.RefreshTargetPos_l2 > HvacDampr_Ctrl_B.LastTargetPos_d) {
          /* Transition: '<S21>:48' */
          /* Transition: '<S21>:50' */
          HvacDampr_Ctrl_B.Out_RunSts_c = 1U;
          HvacDampr_Ctrl_B.LastTargetPos_d = HvacDampr_Ctrl_DW.RefreshTargetPos_l2;
          HvacDampr_Ctrl_B.Out_MotorSts_e1 = HvacDampr_Ctrl_B.Merge1_l;
          HvacDampr_Ctrl_B.Moto_JAM_St_h = 0U;

          /* Transition: '<S21>:62' */
          /* Transition: '<S21>:63' */
        } else {
          /* Transition: '<S21>:53' */
          if (HvacDampr_Ctrl_DW.RefreshTargetPos_l2 < HvacDampr_Ctrl_B.LastTargetPos_d) {
            /* Transition: '<S21>:54' */
            /* Transition: '<S21>:56' */
            HvacDampr_Ctrl_B.Out_RunSts_c = 5U;
            HvacDampr_Ctrl_B.LastTargetPos_d = HvacDampr_Ctrl_DW.RefreshTargetPos_l2;

            /* RefreshTargetPos = LastTargetPos ; */
            HvacDampr_Ctrl_B.Out_MotorSts_e1 = HvacDampr_Ctrl_B.Merge_c;
            HvacDampr_Ctrl_B.Moto_JAM_St_h = 0U;

            /* Transition: '<S21>:63' */
          } else {
            /* Transition: '<S21>:58' */
          }
        }
        break;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts1_j:
      /* During 'Sts1': '<S21>:2' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_i >= Rte_CData_DCMOTOR_MODE_STOP_TICKS()) {
        /* Transition: '<S21>:116' */
        if (HvacDampr_Ctrl_B.Out_RunSts_c == 2) {
          /* Transition: '<S21>:158' */
          guard2 = true;
        } else if (HvacDampr_Ctrl_B.Out_RunSts_c == 4) {
          /* Transition: '<S21>:159' */
          guard3 = true;
        } else {
          guard7 = true;
        }
      } else {
        guard7 = true;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts2_b:
      /* During 'Sts2': '<S21>:4' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_i >= Rte_CData_DCMOTOR_MODE_BACK_TICKS()) {
        /* Transition: '<S21>:121' */
        HvacDampr_Ctrl_DW.is_c1_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts3_e;

        /* Entry 'Sts3': '<S21>:119' */
        HvacDampr_Ctrl_B.Out_RunSts_c = 0U;
        HvacDampr_Ctrl_B.Out_MotorSts_e1 = Rte_CData_MOTO_STOP();
      }
      break;

     case HvacDampr_Ctrl_IN_Sts3_e:
      /* During 'Sts3': '<S21>:119' */
      /* Transition: '<S21>:189' */
      HvacDampr_Ctrl_B.Out_RunSts_c = 0U;
      HvacDampr_Ctrl_B.Out_MotorSts_e1 = 0U;
      HvacDampr_Ctrl_B.LastTargetPos_d = HvacDampr_Ctrl_DW.RefreshTargetPos_l2;
      HvacDampr_Ctrl_DW.is_c1_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o5;
      break;

     case HvacDampr_Ctrl_IN_Sts5_j:
      /* During 'Sts5': '<S21>:3' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_i >= Rte_CData_DCMOTOR_MODE_STOP_TICKS()) {
        /* Transition: '<S21>:161' */
        if (HvacDampr_Ctrl_B.Out_RunSts_c == 6) {
          /* Transition: '<S21>:162' */
          guard5 = true;
        } else if (HvacDampr_Ctrl_B.Out_RunSts_c == 7) {
          /* Transition: '<S21>:163' */
          guard6 = true;
        } else {
          guard8 = true;
        }
      } else {
        guard8 = true;
      }
      break;

     default:
      /* During 'Sts6': '<S21>:6' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_i >= Rte_CData_DCMOTOR_MODE_BACK_TICKS()) {
        /* Transition: '<S21>:165' */
        HvacDampr_Ctrl_DW.is_c1_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts3_e;

        /* Entry 'Sts3': '<S21>:119' */
        HvacDampr_Ctrl_B.Out_RunSts_c = 0U;
        HvacDampr_Ctrl_B.Out_MotorSts_e1 = Rte_CData_MOTO_STOP();
      }
      break;
    }

    if (guard8) {
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_i >= Rte_CData_DCMOTOR_MODE_STALL_TICKS()) {
        /* Transition: '<S21>:192' */
        /* Transition: '<S21>:193' */
        HvacDampr_Ctrl_B.Out_RunSts_c = 6U;
        HvacDampr_Ctrl_B.Moto_JAM_St_h = 1U;
        if (HvacDampr_Ctrl_B.Out_RunSts_c == 6) {
          /* Transition: '<S21>:162' */
          guard5 = true;
        } else if (HvacDampr_Ctrl_B.Out_RunSts_c == 7) {
          /* Transition: '<S21>:163' */
          guard6 = true;
        } else {
          guard4 = true;
        }
      } else {
        guard4 = true;
      }
    }

    if (guard7) {
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_i >= Rte_CData_DCMOTOR_MODE_STALL_TICKS()) {
        /* Transition: '<S21>:187' */
        /* Transition: '<S21>:188' */
        HvacDampr_Ctrl_B.Out_RunSts_c = 2U;
        HvacDampr_Ctrl_B.Moto_JAM_St_h = 1U;
        if (HvacDampr_Ctrl_B.Out_RunSts_c == 2) {
          /* Transition: '<S21>:158' */
          guard2 = true;
        } else if (HvacDampr_Ctrl_B.Out_RunSts_c == 4) {
          /* Transition: '<S21>:159' */
          guard3 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    }

    if (guard6) {
      /* Transition: '<S21>:175' */
      HvacDampr_Ctrl_B.Out_RunSts_c = 0U;
      HvacDampr_Ctrl_B.LastTargetPos_d = HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb;

      /* Transition: '<S21>:167' */
      HvacDampr_Ctrl_DW.is_c1_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o5;
    }

    if (guard5) {
      HvacDampr_Ctrl_DW.is_c1_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts6_l;
      HvacDampr_Ctrl_DW.temporalCounter_i1_i = 0U;

      /* Entry 'Sts6': '<S21>:6' */
      HvacDampr_Ctrl_B.Out_RunSts_c = 3U;
      HvacDampr_Ctrl_B.Out_MotorSts_e1 = HvacDampr_Ctrl_B.Merge1_l;
    }

    if (guard4) {
      /* Switch: '<S13>/Switch1' incorporates:
       *  Constant: '<S13>/Constant54'
       *  Constant: '<S13>/Constant55'
       *  Constant: '<S13>/Constant6'
       *  RelationalOperator: '<S13>/Relational Operator1'
       *  Sum: '<S13>/Add2'
       *  Sum: '<S13>/Add3'
       */
      /* Transition: '<S21>:143' */
      if (HvacDampr_Ctrl_B.Merge2 >= (uint16)((uint32)Rte_CData_DCMOTOR_MODE_POS_LIMIT() + Rte_CData_DCMOTOR_MODE_FACEMIX_POS())) {
        rtb_Divide = (uint16)(HvacDampr_Ctrl_B.Merge2 - Rte_CData_DCMOTOR_MODE_FACEMIX_POS());
      } else {
        rtb_Divide = Rte_CData_DCMOTOR_MODE_FACEMIX_POS();
      }

      /* End of Switch: '<S13>/Switch1' */
      if (HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb < rtb_Divide) {
        /* Transition: '<S21>:144' */
        /* Transition: '<S21>:124' */
        HvacDampr_Ctrl_B.Out_RunSts_c = 0U;
        HvacDampr_Ctrl_B.LastTargetPos_d = HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb;
        HvacDampr_Ctrl_B.Out_MotorSts_e1 = Rte_CData_MOTO_STOP();

        /* Transition: '<S21>:151' */
        /* Transition: '<S21>:152' */
        /* Transition: '<S21>:153' */
        /* Transition: '<S21>:154' */
      } else {
        /* Transition: '<S21>:126' */
        if (HvacDampr_Ctrl_B.Merge2 < HvacDampr_Ctrl_DW.RefreshTargetPos_l2) {
          /* Transition: '<S21>:131' */
          /* Transition: '<S21>:136' */
          HvacDampr_Ctrl_B.Out_RunSts_c = 0U;

          /* Transition: '<S21>:152' */
          /* Transition: '<S21>:153' */
          /* Transition: '<S21>:154' */
        } else {
          /* Transition: '<S21>:129' */
          if (HvacDampr_Ctrl_B.Merge2 > HvacDampr_Ctrl_DW.RefreshTargetPos_l2) {
            /* Transition: '<S21>:130' */
            /* Transition: '<S21>:134' */
            HvacDampr_Ctrl_B.Out_RunSts_c = 7U;
            HvacDampr_Ctrl_B.Out_MotorSts_e1 = Rte_CData_MOTO_STOP();

            /* Transition: '<S21>:153' */
            /* Transition: '<S21>:154' */
          } else {
            /* Transition: '<S21>:138' */
            if ((HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb >= HvacDampr_Ctrl_DW.RefreshTargetPos_l2 - 20) && (HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb <= HvacDampr_Ctrl_DW.RefreshTargetPos_l2 + 20)) {
              /* Transition: '<S21>:135' */
              /* Transition: '<S21>:148' */
              HvacDampr_Ctrl_B.Out_RunSts_c = 6U;
              HvacDampr_Ctrl_B.Out_MotorSts_e1 = Rte_CData_MOTO_STOP();

              /* Transition: '<S21>:154' */
            } else {
              /* Transition: '<S21>:150' */
            }
          }
        }
      }
    }

    if (guard3) {
      /* Transition: '<S21>:173' */
      HvacDampr_Ctrl_B.Out_RunSts_c = 0U;
      HvacDampr_Ctrl_B.LastTargetPos_d = HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb;

      /* Transition: '<S21>:178' */
      HvacDampr_Ctrl_DW.is_c1_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o5;
    }

    if (guard2) {
      HvacDampr_Ctrl_DW.is_c1_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts2_b;
      HvacDampr_Ctrl_DW.temporalCounter_i1_i = 0U;

      /* Entry 'Sts2': '<S21>:4' */
      HvacDampr_Ctrl_B.Out_RunSts_c = 3U;
      HvacDampr_Ctrl_B.Out_MotorSts_e1 = HvacDampr_Ctrl_B.Merge_c;
    }

    if (guard1) {
      /* Switch: '<S13>/Switch' incorporates:
       *  Constant: '<S13>/Constant49'
       *  Constant: '<S13>/Constant5'
       *  Constant: '<S13>/Constant54'
       *  RelationalOperator: '<S13>/Relational Operator2'
       *  Sum: '<S13>/Add'
       *  Sum: '<S13>/Add1'
       */
      /* Transition: '<S21>:69' */
      if (HvacDampr_Ctrl_B.Merge2 < (uint16)(Rte_CData_DCMOTOR_MODE_DEFMAX_POS() - Rte_CData_DCMOTOR_MODE_POS_LIMIT())) {
        rtb_Divide = (uint16)((uint32)HvacDampr_Ctrl_B.Merge2 + Rte_CData_DCMOTOR_MODE_POS_LIMIT());
      } else {
        rtb_Divide = Rte_CData_DCMOTOR_MODE_DEFMAX_POS();
      }

      /* End of Switch: '<S13>/Switch' */
      if (HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb > rtb_Divide) {
        /* Transition: '<S21>:71' */
        /* Transition: '<S21>:72' */
        HvacDampr_Ctrl_B.Out_RunSts_c = 0U;
        HvacDampr_Ctrl_B.LastTargetPos_d = HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb;
        HvacDampr_Ctrl_B.Out_MotorSts_e1 = Rte_CData_MOTO_STOP();

        /* Transition: '<S21>:112' */
        /* Transition: '<S21>:113' */
        /* Transition: '<S21>:114' */
        /* Transition: '<S21>:115' */
      } else {
        /* Transition: '<S21>:76' */
        if (HvacDampr_Ctrl_B.Merge2 > HvacDampr_Ctrl_DW.RefreshTargetPos_l2) {
          /* Transition: '<S21>:78' */
          /* Transition: '<S21>:80' */
          HvacDampr_Ctrl_B.Out_RunSts_c = 0U;

          /* Transition: '<S21>:113' */
          /* Transition: '<S21>:114' */
          /* Transition: '<S21>:115' */
        } else {
          /* Transition: '<S21>:82' */
          if (HvacDampr_Ctrl_B.Merge2 < HvacDampr_Ctrl_DW.RefreshTargetPos_l2) {
            /* Transition: '<S21>:84' */
            /* Transition: '<S21>:86' */
            HvacDampr_Ctrl_B.Out_RunSts_c = 4U;
            HvacDampr_Ctrl_B.Out_MotorSts_e1 = Rte_CData_MOTO_STOP();

            /* Transition: '<S21>:114' */
            /* Transition: '<S21>:115' */
          } else {
            /* Transition: '<S21>:88' */
            if ((HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb >= HvacDampr_Ctrl_DW.RefreshTargetPos_l2 - 20) && (HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb <= HvacDampr_Ctrl_DW.RefreshTargetPos_l2 + 20)) {
              /* Transition: '<S21>:90' */
              /* Transition: '<S21>:92' */
              HvacDampr_Ctrl_B.Out_RunSts_c = 2U;
              HvacDampr_Ctrl_B.Out_MotorSts_e1 = Rte_CData_MOTO_STOP();

              /* Transition: '<S21>:115' */
            } else {
              /* Transition: '<S21>:185' */
            }
          }
        }
      }
    }
  }

  /* End of Chart: '<S13>/DC Motor State' */

  /* Switch: '<S13>/Switch2' incorporates:
   *  Constant: '<S3>/Constant31'
   */
  if (rtb_TmpSignalConversionAtHvac_p) {
    rtb_Switch13 = HvacDampr_Ctrl_B.Out_MotorSts_e1;
  } else {
    rtb_Switch13 = Rte_CData_MOTO_STOP();
  }

  /* End of Switch: '<S13>/Switch2' */

  /* If: '<S12>/If1' */
  if (rtb_Switch13 == 0) {
    /* Switch: '<S12>/Switch6' incorporates:
     *  Constant: '<S12>/Constant23'
     *  Constant: '<S12>/Constant24'
     *  RelationalOperator: '<S12>/RelationalOperator'
     *  Switch: '<S12>/Switch10'
     */
    if (HvacDampr_Ctrl_B.In1_j > 0) {
      rtb_Switch6 = HvacDampr_Ctrl_B.In1_j;
    } else if (HvacDampr_Ctrl_B.Moto_JAM_St_h != 1) {
      /* Switch: '<S12>/Switch9' incorporates:
       *  Constant: '<S12>/Constant10'
       *  Constant: '<S12>/Constant17'
       *  Constant: '<S12>/Constant22'
       *  Constant: '<S12>/Constant9'
       *  DataStoreWrite: '<S3>/Data Store Write13'
       *  Logic: '<S12>/Logical Operator1'
       *  Sum: '<S12>/Add7'
       *  Sum: '<S12>/Add8'
       *  Switch: '<S12>/Switch10'
       *  Switch: '<S12>/Switch7'
       *  Switch: '<S12>/Switch8'
       */
      if ((Mfx_Sub_s32u32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL() + HvacDampr_Ctrl_B.Merge2, HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb) > 0) && (Mfx_Add_u32s32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL(), HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb - HvacDampr_Ctrl_B.Merge2) > 0)) {
        rtb_Switch6 = Rte_CData_DCMOTOR_NORMAL();
      } else {
        rtb_Switch6 = Rte_CData_DCMOTOR_POS_UNREACHED();
      }

      /* End of Switch: '<S12>/Switch9' */
    } else {
      rtb_Switch6 = Rte_CData_DCMOTOR_JAM();
    }

    /* End of Switch: '<S12>/Switch6' */

    /* Outputs for IfAction SubSystem: '<S12>/If Action Subsystem' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    HvacDampr_Ctr_IfActionSubsystem(rtb_Switch6, &HvacDampr_Ctrl_B.In1_lm);

    /* End of Outputs for SubSystem: '<S12>/If Action Subsystem' */
  }

  /* End of If: '<S12>/If1' */

  /* Switch: '<S3>/Switch10' incorporates:
   *  Constant: '<S3>/Constant9'
   */
  if (!rtb_LogicalOperator2) {
    rtb_Switch13 = 0U;
  }

  /* Outport: '<Root>/HvacDampr_stDrvrRcrltnMotDir_Val' incorporates:
   *  Switch: '<S3>/Switch10'
   */
  (void) Rte_Write_HvacDampr_stDrvrRcrltnMotDir_Val(rtb_Switch13);

  /* Switch: '<S3>/Switch11' incorporates:
   *  Constant: '<S3>/Constant11'
   *  DataStoreWrite: '<S3>/Data Store Write13'
   *  Switch: '<S3>/Switch12'
   */
  if (rtb_LogicalOperator2) {
    /* Switch: '<S13>/Switch5' incorporates:
     *  Constant: '<S3>/Constant31'
     *  Sum: '<S13>/Add5'
     */
    if ((uint8)(HvacDampr_Ctrl_B.Out_MotorSts_e1 - Rte_CData_MOTO_STOP()) > 0) {
      /* Outport: '<Root>/HvacDampr_stDrvrRcrltnMotRunng_Val' incorporates:
       *  Constant: '<S13>/Constant8'
       */
      (void) Rte_Write_HvacDampr_stDrvrRcrltnMotRunng_Val(Rte_CData_MOTO_RUNNING());
    } else {
      /* Outport: '<Root>/HvacDampr_stDrvrRcrltnMotRunng_Val' incorporates:
       *  Constant: '<S13>/Constant9'
       */
      (void) Rte_Write_HvacDampr_stDrvrRcrltnMotRunng_Val(Rte_CData_MOTO_STOP_RUNNING());
    }

    /* End of Switch: '<S13>/Switch5' */
    rtb_Switch1 = HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb;
  } else {
    /* Outport: '<Root>/HvacDampr_stDrvrRcrltnMotRunng_Val' incorporates:
     *  Constant: '<S3>/Constant10'
     */
    (void) Rte_Write_HvacDampr_stDrvrRcrltnMotRunng_Val(0U);
    rtb_Switch1 = 0U;
  }

  /* End of Switch: '<S3>/Switch11' */

  /* Outport: '<Root>/HvacDampr_uDrvrRcrltnMotFb_Val' incorporates:
   *  Switch: '<S3>/Switch12'
   */
  (void) Rte_Write_HvacDampr_uDrvrRcrltnMotFb_Val(rtb_Switch1);

  /* Switch: '<S3>/Switch8' incorporates:
   *  Constant: '<S3>/Constant8'
   *  Switch: '<S3>/Switch9'
   */
  if (rtb_LogicalOperator2) {
    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S11>/XH2_AirBoxCfgVal1'
     *  Constant: '<S11>/XH2_AirBoxCfgVal2'
     *  Logic: '<S11>/LogicalOperator'
     *  RelationalOperator: '<S11>/RelationalOperator1'
     *  RelationalOperator: '<S11>/RelationalOperator2'
     */
    if ((rtb_Switch_a != Rte_CData_PRM_A02_CFG_SPEC_VAL()) && (rtb_Switch_a != Rte_CData_PRM_A08_CFG_SPEC_VAL())) {
      /* Switch: '<S11>/Switch3' incorporates:
       *  Constant: '<S11>/Constant1'
       *  DataStoreWrite: '<S3>/Data Store Write13'
       *  Sum: '<S11>/Add11'
       *  Sum: '<S11>/Add4'
       */
      if (Mfx_Add_u16u16_u16(Mfx_Sub_u16u16_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL(), HvacDampr_Ctrl_B.Merge4), HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb) > 0) {
        /* Switch: '<S11>/Switch5' incorporates:
         *  Constant: '<S11>/Constant'
         *  Constant: '<S11>/Constant12'
         *  Sum: '<S11>/Add10'
         *  Sum: '<S11>/Add6'
         */
        if (Mfx_Sub_u16u16_u16(HvacDampr_Ctrl_DW.HvacDampr_uDrvrRcrltnMotFb, Mfx_Add_u16u16_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL(), HvacDampr_Ctrl_B.Merge4)) > 0) {
          rtb_Switch6 = HvacDampr_Ctrl_B.Merge3;
        } else {
          rtb_Switch6 = 250U;
        }

        /* End of Switch: '<S11>/Switch5' */
      } else {
        rtb_Switch6 = HvacDampr_Ctrl_B.Merge3;
      }

      /* End of Switch: '<S11>/Switch3' */

      /* Outport: '<Root>/HvacDampr_stDrvrRcrltnMotAct_Val' */
      (void) Rte_Write_HvacDampr_stDrvrRcrltnMotAct_Val(rtb_Switch6);
    } else {
      /* Outport: '<Root>/HvacDampr_stDrvrRcrltnMotAct_Val' */
      (void) Rte_Write_HvacDampr_stDrvrRcrltnMotAct_Val(HvacDampr_Ctrl_B.Merge3);
    }

    /* End of Switch: '<S11>/Switch1' */
    rtb_Switch13 = HvacDampr_Ctrl_B.In1_lm;
  } else {
    /* Outport: '<Root>/HvacDampr_stDrvrRcrltnMotAct_Val' incorporates:
     *  Constant: '<S3>/Constant4'
     */
    (void) Rte_Write_HvacDampr_stDrvrRcrltnMotAct_Val(0U);
    rtb_Switch13 = 0U;
  }

  /* End of Switch: '<S3>/Switch8' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' */

  /* Inport: '<Root>/HvacDampr_stReqRcrltnMot_Val' */
  Rte_Read_HvacDampr_stReqRcrltnMot_Val(&rtb_Switch1_l4);

  /* Inport: '<Root>/HvacDampr_stReqPassRcrltnMot_Val' */
  Rte_Read_HvacDampr_stReqPassRcrltnMot_Val(&rtb_Switch2_p);

  /* Inport: '<Root>/HvacDampr_bUdsTrigPassRcrltnMot_Val' */
  Rte_Read_HvacDampr_bUdsTrigPassRcrltnMot_Val(&rtb_LogicalOperator_a);

  /* Inport: '<Root>/HvacDampr_bReqVldRcrltnMot_Val' */
  Rte_Read_HvacDampr_bReqVldRcrltnMot_Val(&tmpRead_0);

  /* RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/HvacDampr_Ctrl_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/HvacDampr_stDrvrRcrltnMotFlt_Val' incorporates:
   *  Switch: '<S3>/Switch9'
   */
  (void) Rte_Write_HvacDampr_stDrvrRcrltnMotFlt_Val(rtb_Switch13);

  /* FunctionCaller: '<S4>/IoHwAb_IoSigAdc_AdcFac_Get' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_AirCircMotorPosnFb, &rtb_IoHwAb_IoSigAdc_AdcFac_Get1);

  /* DataTypeConversion: '<S4>/DataTypeConversion' incorporates:
   *  DataStoreWrite: '<S4>/Data Store Write13'
   */
  tmp_1 = rtb_IoHwAb_IoSigAdc_AdcFac_Get1;
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Get1 < 0) {
    tmp_1 = 0;
  }

  HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb = (uint16)tmp_1;

  /* End of DataTypeConversion: '<S4>/DataTypeConversion' */

  /* Logic: '<S4>/Logical Operator' incorporates:
   *  Constant: '<S4>/Constant1'
   *  Constant: '<S4>/Constant2'
   *  Constant: '<S4>/Constant3'
   *  Constant: '<S4>/XH2_AirBoxCfgVal'
   *  Logic: '<S4>/Logical Operator1'
   *  RelationalOperator: '<S4>/Relational Operator1'
   *  RelationalOperator: '<S4>/Relational Operator2'
   *  RelationalOperator: '<S4>/Relational Operator3'
   *  RelationalOperator: '<S4>/Relational Operator4'
   */
  rtb_TmpSignalConversionAtHvac_p = ((rtb_TmpSignalConversionAtgPRM_u == 1) || (rtb_TmpSignalConversionAtgPRM_u == 2) || (rtb_TmpSignalConversionAtgPRM_u == 3) || (rtb_TmpSignalConversionAtgPRM_b == Rte_CData_PRM_A08_CFG_SPEC_VAL()));

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' */

  /* Inport: '<Root>/HvacDampr_bUdsTrigRcrltnMot_Val' */
  Rte_Read_HvacDampr_bUdsTrigRcrltnMot_Val(&tmpRead_5);

  /* Inport: '<Root>/HvacDampr_bReqVldPassRcrltnMot_Val' */
  Rte_Read_HvacDampr_bReqVldPassRcrltnMot_Val(&tmpRead);

  /* RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/HvacDampr_Ctrl_Runnable_10ms_sys'
   */
  /* Switch: '<S4>/Switch4' incorporates:
   *  Constant: '<S4>/Constant17'
   *  DataStoreWrite: '<S4>/Data Store Write26'
   *  DataStoreWrite: '<S4>/Data Store Write33'
   *  Switch: '<S4>/Switch'
   *  Switch: '<S4>/Switch5'
   *  Switch: '<S4>/Switch6'
   */
  if (rtb_TmpSignalConversionAtHvac_p) {
    HvacDampr_Ctrl_DW.HvacDampr_stReqRcrltnMot = rtb_Switch1_l4;
    HvacDampr_Ctrl_DW.HvacDampr_bReqVldRcrltnMot = tmpRead_0;
    rtb_Switch13 = 1U;
    tmpRead = tmpRead_5;
  } else {
    HvacDampr_Ctrl_DW.HvacDampr_stReqRcrltnMot = rtb_Switch2_p;
    HvacDampr_Ctrl_DW.HvacDampr_bReqVldRcrltnMot = rtb_LogicalOperator_a;

    /* Switch: '<S4>/Switch3' incorporates:
     *  Constant: '<S4>/A02_AirBoxCfgVal'
     *  Constant: '<S4>/Constant5'
     *  Constant: '<S4>/Constant7'
     *  DataStoreWrite: '<S4>/Data Store Write26'
     *  DataStoreWrite: '<S4>/Data Store Write33'
     *  Logic: '<S4>/Logical Operator2'
     *  RelationalOperator: '<S4>/Relational Operator5'
     *  RelationalOperator: '<S4>/Relational Operator6'
     */
    if ((rtb_TmpSignalConversionAtgPRM_u == 0) || (rtb_TmpSignalConversionAtgPRM_b == Rte_CData_PRM_A02_CFG_SPEC_VAL())) {
      rtb_Switch13 = 2U;
    } else {
      rtb_Switch13 = rtb_TmpSignalConversionAtgPRM_u;
    }

    /* End of Switch: '<S4>/Switch3' */
  }

  /* End of Switch: '<S4>/Switch4' */

  /* Switch: '<S4>/Switch1' incorporates:
   *  DataStoreRead: '<S4>/Data Store Read'
   *  Inport: '<Root>/HvacDampr_stReqUdsPassRcrltnMot_Val'
   *  Inport: '<Root>/HvacDampr_stReqUdsRcrltnMot_Val'
   */
  if (tmpRead) {
    Rte_Read_HvacDampr_stReqUdsRcrltnMot_Val(&rtb_Switch13_b);
    Rte_Read_HvacDampr_stReqUdsPassRcrltnMot_Val(&MultiportSwitch5);

    /* Switch: '<S4>/Switch7' incorporates:
     *  Inport: '<Root>/HvacDampr_stReqUdsPassRcrltnMot_Val'
     *  Inport: '<Root>/HvacDampr_stReqUdsRcrltnMot_Val'
     */
    if (rtb_TmpSignalConversionAtHvac_p) {
      rtb_Switch1_l4 = rtb_Switch13_b;
    } else {
      rtb_Switch1_l4 = MultiportSwitch5;
    }

    /* End of Switch: '<S4>/Switch7' */
  } else {
    rtb_Switch1_l4 = HvacDampr_Ctrl_DW.HvacDampr_stReqRcrltnMot;
  }

  /* End of Switch: '<S4>/Switch1' */

  /* SwitchCase: '<S22>/Switch Case' incorporates:
   *  Constant: '<S22>/Constant1'
   *  Constant: '<S22>/Constant11'
   *  Constant: '<S22>/Constant28'
   *  Constant: '<S22>/Constant4'
   *  Constant: '<S22>/Constant7'
   *  DataStoreWrite: '<S4>/Data Store Write13'
   */
  switch (rtb_Switch13) {
   case 1:
    /* Outputs for IfAction SubSystem: '<S22>/A29_CRC_Pos_Action' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    HvacDampr_Ct_A29_CRC_Pos_Action(rtb_Switch1_l4, HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb, Rte_CData_MOTO_CRC_SPECT2_R_TURN(), Rte_CData_MOTO_CRC_SPECT2_P_TURN(), Rte_CData_MDD_CRC_2LAYER_FLOW_SPEC_2(), &HvacDampr_Ctrl_B.Merge2_j, &HvacDampr_Ctrl_B.Merge3_g, &HvacDampr_Ctrl_B.Merge_o, &HvacDampr_Ctrl_B.Merge1_o, &HvacDampr_Ctrl_B.Merge4_b);

    /* End of Outputs for SubSystem: '<S22>/A29_CRC_Pos_Action' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S22>/A02_CRC_Pos_Action' incorporates:
     *  ActionPort: '<S26>/Action Port'
     */
    HvacDampr_Ct_A02_CRC_Pos_Action(rtb_Switch1_l4, HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb, Rte_CData_MOTO_CRC_SPECT3_R_TURN(), Rte_CData_MOTO_CRC_SPECT3_P_TURN(), &HvacDampr_Ctrl_B.Merge2_j, &HvacDampr_Ctrl_B.Merge3_g, &HvacDampr_Ctrl_B.Merge_o, &HvacDampr_Ctrl_B.Merge1_o);

    /* End of Outputs for SubSystem: '<S22>/A02_CRC_Pos_Action' */
    break;
  }

  /* End of SwitchCase: '<S22>/Switch Case' */

  /* Switch: '<S23>/Switch1' incorporates:
   *  Constant: '<S23>/XH2_AirBoxCfgVal'
   *  Constant: '<S23>/XH2_AirBoxCfgVal1'
   *  Logic: '<S23>/LogicalOperator'
   *  RelationalOperator: '<S23>/RelationalOperator'
   *  RelationalOperator: '<S23>/RelationalOperator1'
   */
  if ((rtb_Switch13 != Rte_CData_PRM_A02_CFG_SPEC_VAL()) && (rtb_Switch13 != Rte_CData_PRM_A08_CFG_SPEC_VAL())) {
    /* Switch: '<S23>/Switch3' incorporates:
     *  Constant: '<S23>/Constant1'
     *  DataStoreWrite: '<S4>/Data Store Write13'
     *  Sum: '<S23>/Add11'
     *  Sum: '<S23>/Add4'
     */
    if (Mfx_Add_u16u16_u16(Mfx_Sub_u16u16_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL(), HvacDampr_Ctrl_B.Merge4_b), HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb) > 0) {
      /* Switch: '<S23>/Switch5' incorporates:
       *  Constant: '<S23>/Constant'
       *  Constant: '<S23>/Constant12'
       *  Sum: '<S23>/Add10'
       *  Sum: '<S23>/Add6'
       */
      if (Mfx_Sub_u16u16_u16(HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb, Mfx_Add_u16u16_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL(), HvacDampr_Ctrl_B.Merge4_b)) > 0) {
        rtb_Switch13 = HvacDampr_Ctrl_B.Merge3_g;
      } else {
        rtb_Switch13 = 250U;
      }

      /* End of Switch: '<S23>/Switch5' */
    } else {
      rtb_Switch13 = HvacDampr_Ctrl_B.Merge3_g;
    }

    /* End of Switch: '<S23>/Switch3' */
  } else {
    rtb_Switch13 = HvacDampr_Ctrl_B.Merge3_g;
  }

  /* End of Switch: '<S23>/Switch1' */

  /* Chart: '<S25>/DC Motor State' incorporates:
   *  Constant: '<S25>/Constant3'
   *  Constant: '<S25>/Constant58'
   *  Constant: '<S4>/Constant31'
   *  DataStoreWrite: '<S4>/Data Store Write13'
   */
  /* Gateway: HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/Subsystem2/DC Motor State */
  if (HvacDampr_Ctrl_DW.temporalCounter_i1_n < 65535U) {
    HvacDampr_Ctrl_DW.temporalCounter_i1_n++;
  }

  /* During: HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/Subsystem2/DC Motor State */
  if (HvacDampr_Ctrl_DW.is_active_c6_HvacDampr_Ctrl == 0U) {
    /* Entry: HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/Subsystem2/DC Motor State */
    HvacDampr_Ctrl_DW.is_active_c6_HvacDampr_Ctrl = 1U;

    /* Entry Internal: HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/Subsystem2/DC Motor State */
    /* Transition: '<S33>:199' */
    HvacDampr_Ctrl_DW.is_c6_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Delay_h;
    HvacDampr_Ctrl_DW.temporalCounter_i1_n = 0U;
  } else {
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    guard5 = false;
    guard6 = false;
    guard7 = false;
    guard8 = false;
    switch (HvacDampr_Ctrl_DW.is_c6_HvacDampr_Ctrl) {
     case HvacDampr_Ctrl_IN_Delay_h:
      /* During 'Delay': '<S33>:197' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_n >= Rte_CData_MOTO_INIT_DEAL_TIME()) {
        /* Transition: '<S33>:200' */
        HvacDampr_Ctrl_DW.is_c6_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o5;
      } else {
        /* Transition: '<S33>:190' */
        HvacDampr_Ctrl_B.LastTargetPos_h2 = HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts0_o5:
      /* During 'Sts0': '<S33>:1' */
      switch (HvacDampr_Ctrl_B.Out_RunSts_o) {
       case 1:
        /* Transition: '<S33>:19' */
        HvacDampr_Ctrl_DW.is_c6_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts1_j;
        HvacDampr_Ctrl_DW.temporalCounter_i1_n = 0U;
        break;

       case 5:
        /* Transition: '<S33>:66' */
        HvacDampr_Ctrl_DW.is_c6_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts5_j;
        HvacDampr_Ctrl_DW.temporalCounter_i1_n = 0U;
        break;

       default:
        /* Transition: '<S33>:25' */
        if ((HvacDampr_Ctrl_B.Merge2_j > HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb + Rte_CData_DCMOTOR_MODE_POS_DIFF()) || (HvacDampr_Ctrl_B.Merge2_j + Rte_CData_DCMOTOR_MODE_POS_DIFF() < HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb)) {
          /* Transition: '<S33>:28' */
          /* Transition: '<S33>:32' */
          HvacDampr_Ctrl_DW.RefreshTargetPos_l = HvacDampr_Ctrl_B.Merge2_j;

          /* Transition: '<S33>:35' */
        } else {
          /* Transition: '<S33>:34' */
        }

        /* Transition: '<S33>:46' */
        if (HvacDampr_Ctrl_DW.RefreshTargetPos_l > HvacDampr_Ctrl_B.LastTargetPos_h2) {
          /* Transition: '<S33>:48' */
          /* Transition: '<S33>:50' */
          HvacDampr_Ctrl_B.Out_RunSts_o = 1U;
          HvacDampr_Ctrl_B.LastTargetPos_h2 = HvacDampr_Ctrl_DW.RefreshTargetPos_l;
          HvacDampr_Ctrl_B.Out_MotorSts_h = HvacDampr_Ctrl_B.Merge1_o;
          HvacDampr_Ctrl_B.Moto_JAM_St_fz = 0U;

          /* Transition: '<S33>:62' */
          /* Transition: '<S33>:63' */
        } else {
          /* Transition: '<S33>:53' */
          if (HvacDampr_Ctrl_DW.RefreshTargetPos_l < HvacDampr_Ctrl_B.LastTargetPos_h2) {
            /* Transition: '<S33>:54' */
            /* Transition: '<S33>:56' */
            HvacDampr_Ctrl_B.Out_RunSts_o = 5U;
            HvacDampr_Ctrl_B.LastTargetPos_h2 = HvacDampr_Ctrl_DW.RefreshTargetPos_l;

            /* RefreshTargetPos = LastTargetPos ; */
            HvacDampr_Ctrl_B.Out_MotorSts_h = HvacDampr_Ctrl_B.Merge_o;
            HvacDampr_Ctrl_B.Moto_JAM_St_fz = 0U;

            /* Transition: '<S33>:63' */
          } else {
            /* Transition: '<S33>:58' */
          }
        }
        break;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts1_j:
      /* During 'Sts1': '<S33>:2' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_n >= Rte_CData_DCMOTOR_MODE_STOP_TICKS()) {
        /* Transition: '<S33>:116' */
        if (HvacDampr_Ctrl_B.Out_RunSts_o == 2) {
          /* Transition: '<S33>:158' */
          guard2 = true;
        } else if (HvacDampr_Ctrl_B.Out_RunSts_o == 4) {
          /* Transition: '<S33>:159' */
          guard3 = true;
        } else {
          guard7 = true;
        }
      } else {
        guard7 = true;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts2_b:
      /* During 'Sts2': '<S33>:4' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_n >= Rte_CData_DCMOTOR_MODE_BACK_TICKS()) {
        /* Transition: '<S33>:121' */
        HvacDampr_Ctrl_DW.is_c6_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts3_e;

        /* Entry 'Sts3': '<S33>:119' */
        HvacDampr_Ctrl_B.Out_RunSts_o = 0U;
        HvacDampr_Ctrl_B.Out_MotorSts_h = Rte_CData_MOTO_STOP();
      }
      break;

     case HvacDampr_Ctrl_IN_Sts3_e:
      /* During 'Sts3': '<S33>:119' */
      /* Transition: '<S33>:189' */
      HvacDampr_Ctrl_B.Out_RunSts_o = 0U;
      HvacDampr_Ctrl_B.Out_MotorSts_h = 0U;
      HvacDampr_Ctrl_B.LastTargetPos_h2 = HvacDampr_Ctrl_DW.RefreshTargetPos_l;
      HvacDampr_Ctrl_DW.is_c6_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o5;
      break;

     case HvacDampr_Ctrl_IN_Sts5_j:
      /* During 'Sts5': '<S33>:3' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_n >= Rte_CData_DCMOTOR_MODE_STOP_TICKS()) {
        /* Transition: '<S33>:161' */
        if (HvacDampr_Ctrl_B.Out_RunSts_o == 6) {
          /* Transition: '<S33>:162' */
          guard5 = true;
        } else if (HvacDampr_Ctrl_B.Out_RunSts_o == 7) {
          /* Transition: '<S33>:163' */
          guard6 = true;
        } else {
          guard8 = true;
        }
      } else {
        guard8 = true;
      }
      break;

     default:
      /* During 'Sts6': '<S33>:6' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_n >= Rte_CData_DCMOTOR_MODE_BACK_TICKS()) {
        /* Transition: '<S33>:165' */
        HvacDampr_Ctrl_DW.is_c6_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts3_e;

        /* Entry 'Sts3': '<S33>:119' */
        HvacDampr_Ctrl_B.Out_RunSts_o = 0U;
        HvacDampr_Ctrl_B.Out_MotorSts_h = Rte_CData_MOTO_STOP();
      }
      break;
    }

    if (guard8) {
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_n >= Rte_CData_DCMOTOR_MODE_STALL_TICKS()) {
        /* Transition: '<S33>:192' */
        /* Transition: '<S33>:193' */
        HvacDampr_Ctrl_B.Out_RunSts_o = 6U;
        HvacDampr_Ctrl_B.Moto_JAM_St_fz = 1U;
        if (HvacDampr_Ctrl_B.Out_RunSts_o == 6) {
          /* Transition: '<S33>:162' */
          guard5 = true;
        } else if (HvacDampr_Ctrl_B.Out_RunSts_o == 7) {
          /* Transition: '<S33>:163' */
          guard6 = true;
        } else {
          guard4 = true;
        }
      } else {
        guard4 = true;
      }
    }

    if (guard7) {
      if (HvacDampr_Ctrl_DW.temporalCounter_i1_n >= Rte_CData_DCMOTOR_MODE_STALL_TICKS()) {
        /* Transition: '<S33>:187' */
        /* Transition: '<S33>:188' */
        HvacDampr_Ctrl_B.Out_RunSts_o = 2U;
        HvacDampr_Ctrl_B.Moto_JAM_St_fz = 1U;
        if (HvacDampr_Ctrl_B.Out_RunSts_o == 2) {
          /* Transition: '<S33>:158' */
          guard2 = true;
        } else if (HvacDampr_Ctrl_B.Out_RunSts_o == 4) {
          /* Transition: '<S33>:159' */
          guard3 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    }

    if (guard6) {
      /* Transition: '<S33>:175' */
      HvacDampr_Ctrl_B.Out_RunSts_o = 0U;
      HvacDampr_Ctrl_B.LastTargetPos_h2 = HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb;

      /* Transition: '<S33>:167' */
      HvacDampr_Ctrl_DW.is_c6_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o5;
    }

    if (guard5) {
      HvacDampr_Ctrl_DW.is_c6_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts6_l;
      HvacDampr_Ctrl_DW.temporalCounter_i1_n = 0U;

      /* Entry 'Sts6': '<S33>:6' */
      HvacDampr_Ctrl_B.Out_RunSts_o = 3U;
      HvacDampr_Ctrl_B.Out_MotorSts_h = HvacDampr_Ctrl_B.Merge1_o;
    }

    if (guard4) {
      /* Switch: '<S25>/Switch1' incorporates:
       *  Constant: '<S25>/Constant54'
       *  Constant: '<S25>/Constant55'
       *  Constant: '<S25>/Constant6'
       *  RelationalOperator: '<S25>/Relational Operator1'
       *  Sum: '<S25>/Add2'
       *  Sum: '<S25>/Add3'
       */
      /* Transition: '<S33>:143' */
      if (HvacDampr_Ctrl_B.Merge2_j >= (uint16)((uint32)Rte_CData_DCMOTOR_MODE_POS_LIMIT() + Rte_CData_DCMOTOR_MODE_FACEMIX_POS())) {
        rtb_Divide = (uint16)(HvacDampr_Ctrl_B.Merge2_j - Rte_CData_DCMOTOR_MODE_FACEMIX_POS());
      } else {
        rtb_Divide = Rte_CData_DCMOTOR_MODE_FACEMIX_POS();
      }

      /* End of Switch: '<S25>/Switch1' */
      if (HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb < rtb_Divide) {
        /* Transition: '<S33>:144' */
        /* Transition: '<S33>:124' */
        HvacDampr_Ctrl_B.Out_RunSts_o = 0U;
        HvacDampr_Ctrl_B.LastTargetPos_h2 = HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb;
        HvacDampr_Ctrl_B.Out_MotorSts_h = Rte_CData_MOTO_STOP();

        /* Transition: '<S33>:151' */
        /* Transition: '<S33>:152' */
        /* Transition: '<S33>:153' */
        /* Transition: '<S33>:154' */
      } else {
        /* Transition: '<S33>:126' */
        if (HvacDampr_Ctrl_B.Merge2_j < HvacDampr_Ctrl_DW.RefreshTargetPos_l) {
          /* Transition: '<S33>:131' */
          /* Transition: '<S33>:136' */
          HvacDampr_Ctrl_B.Out_RunSts_o = 0U;

          /* Transition: '<S33>:152' */
          /* Transition: '<S33>:153' */
          /* Transition: '<S33>:154' */
        } else {
          /* Transition: '<S33>:129' */
          if (HvacDampr_Ctrl_B.Merge2_j > HvacDampr_Ctrl_DW.RefreshTargetPos_l) {
            /* Transition: '<S33>:130' */
            /* Transition: '<S33>:134' */
            HvacDampr_Ctrl_B.Out_RunSts_o = 7U;
            HvacDampr_Ctrl_B.Out_MotorSts_h = Rte_CData_MOTO_STOP();

            /* Transition: '<S33>:153' */
            /* Transition: '<S33>:154' */
          } else {
            /* Transition: '<S33>:138' */
            if ((HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb >= HvacDampr_Ctrl_DW.RefreshTargetPos_l - 20) && (HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb <= HvacDampr_Ctrl_DW.RefreshTargetPos_l + 20)) {
              /* Transition: '<S33>:135' */
              /* Transition: '<S33>:148' */
              HvacDampr_Ctrl_B.Out_RunSts_o = 6U;
              HvacDampr_Ctrl_B.Out_MotorSts_h = Rte_CData_MOTO_STOP();

              /* Transition: '<S33>:154' */
            } else {
              /* Transition: '<S33>:150' */
            }
          }
        }
      }
    }

    if (guard3) {
      /* Transition: '<S33>:173' */
      HvacDampr_Ctrl_B.Out_RunSts_o = 0U;
      HvacDampr_Ctrl_B.LastTargetPos_h2 = HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb;

      /* Transition: '<S33>:178' */
      HvacDampr_Ctrl_DW.is_c6_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o5;
    }

    if (guard2) {
      HvacDampr_Ctrl_DW.is_c6_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts2_b;
      HvacDampr_Ctrl_DW.temporalCounter_i1_n = 0U;

      /* Entry 'Sts2': '<S33>:4' */
      HvacDampr_Ctrl_B.Out_RunSts_o = 3U;
      HvacDampr_Ctrl_B.Out_MotorSts_h = HvacDampr_Ctrl_B.Merge_o;
    }

    if (guard1) {
      /* Switch: '<S25>/Switch' incorporates:
       *  Constant: '<S25>/Constant49'
       *  Constant: '<S25>/Constant5'
       *  Constant: '<S25>/Constant54'
       *  RelationalOperator: '<S25>/Relational Operator2'
       *  Sum: '<S25>/Add'
       *  Sum: '<S25>/Add1'
       */
      /* Transition: '<S33>:69' */
      if (HvacDampr_Ctrl_B.Merge2_j < (uint16)(Rte_CData_DCMOTOR_MODE_DEFMAX_POS() - Rte_CData_DCMOTOR_MODE_POS_LIMIT())) {
        rtb_Divide = (uint16)((uint32)HvacDampr_Ctrl_B.Merge2_j + Rte_CData_DCMOTOR_MODE_POS_LIMIT());
      } else {
        rtb_Divide = Rte_CData_DCMOTOR_MODE_DEFMAX_POS();
      }

      /* End of Switch: '<S25>/Switch' */
      if (HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb > rtb_Divide) {
        /* Transition: '<S33>:71' */
        /* Transition: '<S33>:72' */
        HvacDampr_Ctrl_B.Out_RunSts_o = 0U;
        HvacDampr_Ctrl_B.LastTargetPos_h2 = HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb;
        HvacDampr_Ctrl_B.Out_MotorSts_h = Rte_CData_MOTO_STOP();

        /* Transition: '<S33>:112' */
        /* Transition: '<S33>:113' */
        /* Transition: '<S33>:114' */
        /* Transition: '<S33>:115' */
      } else {
        /* Transition: '<S33>:76' */
        if (HvacDampr_Ctrl_B.Merge2_j > HvacDampr_Ctrl_DW.RefreshTargetPos_l) {
          /* Transition: '<S33>:78' */
          /* Transition: '<S33>:80' */
          HvacDampr_Ctrl_B.Out_RunSts_o = 0U;

          /* Transition: '<S33>:113' */
          /* Transition: '<S33>:114' */
          /* Transition: '<S33>:115' */
        } else {
          /* Transition: '<S33>:82' */
          if (HvacDampr_Ctrl_B.Merge2_j < HvacDampr_Ctrl_DW.RefreshTargetPos_l) {
            /* Transition: '<S33>:84' */
            /* Transition: '<S33>:86' */
            HvacDampr_Ctrl_B.Out_RunSts_o = 4U;
            HvacDampr_Ctrl_B.Out_MotorSts_h = Rte_CData_MOTO_STOP();

            /* Transition: '<S33>:114' */
            /* Transition: '<S33>:115' */
          } else {
            /* Transition: '<S33>:88' */
            if ((HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb >= HvacDampr_Ctrl_DW.RefreshTargetPos_l - 20) && (HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb <= HvacDampr_Ctrl_DW.RefreshTargetPos_l + 20)) {
              /* Transition: '<S33>:90' */
              /* Transition: '<S33>:92' */
              HvacDampr_Ctrl_B.Out_RunSts_o = 2U;
              HvacDampr_Ctrl_B.Out_MotorSts_h = Rte_CData_MOTO_STOP();

              /* Transition: '<S33>:115' */
            } else {
              /* Transition: '<S33>:185' */
            }
          }
        }
      }
    }
  }

  /* End of Chart: '<S25>/DC Motor State' */

  /* Switch: '<S25>/Switch2' incorporates:
   *  Constant: '<S4>/Constant31'
   *  DataStoreWrite: '<S4>/Data Store Write33'
   */
  if (HvacDampr_Ctrl_DW.HvacDampr_bReqVldRcrltnMot) {
    rtb_Switch2_p = HvacDampr_Ctrl_B.Out_MotorSts_h;
  } else {
    rtb_Switch2_p = Rte_CData_MOTO_STOP();
  }

  /* End of Switch: '<S25>/Switch2' */

  /* Switch: '<S24>/Switch12' incorporates:
   *  Constant: '<S24>/Constant15'
   *  Constant: '<S24>/Constant8'
   *  DataStoreWrite: '<S4>/Data Store Write13'
   *  Sum: '<S24>/Add12'
   */
  if (Mfx_Sub_u16u16_u16(Rte_CData_CIRCUIT_SHORT_POWER_VAL(), HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb) > 0) {
    /* Switch: '<S24>/Switch14' incorporates:
     *  Constant: '<S24>/Constant14'
     *  Constant: '<S24>/Constant16'
     *  Constant: '<S24>/Constant25'
     *  Sum: '<S24>/Add14'
     */
    if (Mfx_Sub_u16u16_u16(HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb, Rte_CData_CIRCUIT_SHORT_GND_VAL()) > 0) {
      rtb_Switch1_l4 = Rte_CData_CIRCUIT_NORMAL();
    } else {
      rtb_Switch1_l4 = Rte_CData_CIRCUIT_SHORT_GND();
    }

    /* End of Switch: '<S24>/Switch14' */
  } else {
    rtb_Switch1_l4 = Rte_CData_CIRCUIT_SHORT_POWER();
  }

  /* End of Switch: '<S24>/Switch12' */

  /* Switch: '<S24>/Switch13' incorporates:
   *  Delay: '<S24>/Delay3'
   *  Sum: '<S24>/Add13'
   */
  rtb_Switch13_b = (uint8)((uint8)(rtb_Switch1_l4 - HvacDampr_Ctrl_DW.Delay3_DSTATE_m) != 0);

  /* Outputs for Enabled SubSystem: '<S24>/Enabled CompLP Fault cauculate' */
  /* Constant: '<S24>/Constant13' */
  Hva_EnabledCompLPFaultcauculate(rtb_Switch13_b, true, &HvacDampr_Ctrl_B.In1_e4);

  /* End of Outputs for SubSystem: '<S24>/Enabled CompLP Fault cauculate' */

  /* Outputs for Enabled SubSystem: '<S24>/Enabled Subsystem' */
  /* Delay: '<S24>/Delay3' */
  HvacDampr_Ctrl_EnabledSubsystem(HvacDampr_Ctrl_B.In1_e4, HvacDampr_Ctrl_DW.Delay3_DSTATE_m, rtb_Switch13_b, &HvacDampr_Ctrl_B.In1_hh, &HvacDampr_Ctrl_DW.EnabledSubsystem_k);

  /* End of Outputs for SubSystem: '<S24>/Enabled Subsystem' */

  /* If: '<S24>/If1' */
  if (rtb_Switch2_p == 0) {
    /* Switch: '<S24>/Switch6' incorporates:
     *  Constant: '<S24>/Constant23'
     *  Constant: '<S24>/Constant24'
     *  RelationalOperator: '<S24>/RelationalOperator'
     *  Switch: '<S24>/Switch10'
     */
    if (HvacDampr_Ctrl_B.In1_hh > 0) {
      rtb_Switch6 = HvacDampr_Ctrl_B.In1_hh;
    } else if (HvacDampr_Ctrl_B.Moto_JAM_St_fz != 1) {
      /* Switch: '<S24>/Switch9' incorporates:
       *  Constant: '<S24>/Constant10'
       *  Constant: '<S24>/Constant17'
       *  Constant: '<S24>/Constant22'
       *  Constant: '<S24>/Constant9'
       *  DataStoreWrite: '<S4>/Data Store Write13'
       *  Logic: '<S24>/Logical Operator1'
       *  Sum: '<S24>/Add7'
       *  Sum: '<S24>/Add8'
       *  Switch: '<S24>/Switch10'
       *  Switch: '<S24>/Switch7'
       *  Switch: '<S24>/Switch8'
       */
      if ((Mfx_Sub_s32u32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL() + HvacDampr_Ctrl_B.Merge2_j, HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb) > 0) && (Mfx_Add_u32s32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL(), HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb - HvacDampr_Ctrl_B.Merge2_j) > 0)) {
        rtb_Switch6 = Rte_CData_DCMOTOR_NORMAL();
      } else {
        rtb_Switch6 = Rte_CData_DCMOTOR_POS_UNREACHED();
      }

      /* End of Switch: '<S24>/Switch9' */
    } else {
      rtb_Switch6 = Rte_CData_DCMOTOR_JAM();
    }

    /* End of Switch: '<S24>/Switch6' */

    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem' incorporates:
     *  ActionPort: '<S31>/Action Port'
     */
    HvacDampr_Ctr_IfActionSubsystem(rtb_Switch6, &HvacDampr_Ctrl_B.In1_hu);

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem' */
  }

  /* End of If: '<S24>/If1' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' */

  /* Inport: '<Root>/HvacDampr_stReqUdsPsgrMixMot_Val' */
  Rte_Read_HvacDampr_stReqUdsPsgrMixMot_Val(&Switch2);

  /* Inport: '<Root>/HvacDampr_bUdsTrigPsgrMixMot_Val' */
  Rte_Read_HvacDampr_bUdsTrigPsgrMixMot_Val(&tmpRead_4);

  /* RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/HvacDampr_Ctrl_Runnable_10ms_sys'
   */
  /* Switch: '<S4>/Switch2' incorporates:
   *  Constant: '<S4>/Constant18'
   *  Constant: '<S4>/Constant20'
   *  Constant: '<S4>/Constant6'
   *  RelationalOperator: '<S4>/RelationalOperator'
   */
  if (HvacDampr_Ctrl_B.In1_hu == 2) {
    tmp_2 = DEM_EVENT_STATUS_FAILED;
  } else {
    tmp_2 = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S4>/Switch2' */

  /* FunctionCaller: '<S4>/DTC_RcrltnDamprMotMaxErr_SetEventStatus' */
  Rte_Call_DTC_RcrltnDamprMotMaxErr_SetEventStatus(tmp_2);

  /* Switch: '<S4>/Switch18' incorporates:
   *  Constant: '<S4>/Constant22'
   *  Constant: '<S4>/Constant23'
   *  Constant: '<S4>/Constant26'
   *  RelationalOperator: '<S4>/RelationalOperator1'
   */
  if (HvacDampr_Ctrl_B.In1_hu == 1) {
    tmp_2 = DEM_EVENT_STATUS_FAILED;
  } else {
    tmp_2 = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S4>/Switch18' */

  /* FunctionCaller: '<S4>/DTC_RcrltnDamprMotMinErr_SetEventStatus' */
  Rte_Call_DTC_RcrltnDamprMotMinErr_SetEventStatus(tmp_2);

  /* Switch: '<S4>/Switch19' incorporates:
   *  Constant: '<S4>/Constant21'
   *  Constant: '<S4>/Constant24'
   *  Constant: '<S4>/Constant25'
   *  RelationalOperator: '<S4>/RelationalOperator2'
   */
  if (HvacDampr_Ctrl_B.In1_hu == 3) {
    tmp_2 = DEM_EVENT_STATUS_FAILED;
  } else {
    tmp_2 = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S4>/Switch19' */

  /* FunctionCaller: '<S4>/DTC_RcrltnDamprMotStuck_SetEventStatus' */
  Rte_Call_DTC_RcrltnDamprMotStuck_SetEventStatus(tmp_2);

  /* Switch: '<S25>/Switch5' incorporates:
   *  Constant: '<S25>/Constant8'
   *  Constant: '<S25>/Constant9'
   *  Constant: '<S4>/Constant31'
   *  Sum: '<S25>/Add5'
   */
  if ((uint8)(HvacDampr_Ctrl_B.Out_MotorSts_h - Rte_CData_MOTO_STOP()) > 0) {
    rtb_LogicalOperator_a = Rte_CData_MOTO_RUNNING();
  } else {
    rtb_LogicalOperator_a = Rte_CData_MOTO_STOP_RUNNING();
  }

  /* End of Switch: '<S25>/Switch5' */

  /* Switch: '<S4>/Switch10' incorporates:
   *  Constant: '<S4>/Constant9'
   */
  if (rtb_TmpSignalConversionAtHvac_p) {
    rtb_Switch13_b = rtb_Switch2_p;
  } else {
    rtb_Switch13_b = 0U;
  }

  /* Outport: '<Root>/HvacDampr_stRcrltnMotDir_Val' incorporates:
   *  Switch: '<S4>/Switch10'
   */
  (void) Rte_Write_HvacDampr_stRcrltnMotDir_Val(rtb_Switch13_b);

  /* Switch: '<S4>/Switch11' incorporates:
   *  Constant: '<S4>/Constant10'
   */
  if (rtb_TmpSignalConversionAtHvac_p) {
    rtb_Switch13_b = rtb_LogicalOperator_a;
  } else {
    rtb_Switch13_b = 0U;
  }

  /* Outport: '<Root>/HvacDampr_stRcrltnMotRunng_Val' incorporates:
   *  Switch: '<S4>/Switch11'
   */
  (void) Rte_Write_HvacDampr_stRcrltnMotRunng_Val(rtb_Switch13_b);

  /* Switch: '<S4>/Switch12' incorporates:
   *  Constant: '<S4>/Constant11'
   *  DataStoreWrite: '<S4>/Data Store Write13'
   */
  if (rtb_TmpSignalConversionAtHvac_p) {
    rtb_Switch1 = HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb;
  } else {
    rtb_Switch1 = 0U;
  }

  /* Outport: '<Root>/HvacDampr_uRcrltnMotFb_Val' incorporates:
   *  Switch: '<S4>/Switch12'
   */
  (void) Rte_Write_HvacDampr_uRcrltnMotFb_Val(rtb_Switch1);

  /* Switch: '<S4>/Switch13' incorporates:
   *  Constant: '<S4>/Constant12'
   */
  if (rtb_TmpSignalConversionAtHvac_p) {
    rtb_Switch13_b = 0U;
  } else {
    rtb_Switch13_b = rtb_Switch13;
  }

  /* Outport: '<Root>/HvacDampr_stPassRcrltnMotAct_Val' incorporates:
   *  Switch: '<S4>/Switch13'
   */
  (void) Rte_Write_HvacDampr_stPassRcrltnMotAct_Val(rtb_Switch13_b);

  /* Switch: '<S4>/Switch14' incorporates:
   *  Constant: '<S4>/Constant13'
   */
  if (rtb_TmpSignalConversionAtHvac_p) {
    rtb_Switch13_b = 0U;
  } else {
    rtb_Switch13_b = HvacDampr_Ctrl_B.In1_hu;
  }

  /* Outport: '<Root>/HvacDampr_stPassRcrltnMotFlt_Val' incorporates:
   *  Switch: '<S4>/Switch14'
   */
  (void) Rte_Write_HvacDampr_stPassRcrltnMotFlt_Val(rtb_Switch13_b);

  /* Switch: '<S4>/Switch15' incorporates:
   *  Constant: '<S4>/Constant14'
   */
  if (rtb_TmpSignalConversionAtHvac_p) {
    rtb_Switch2_p = 0U;
  }

  /* Outport: '<Root>/HvacDampr_stPassRcrltnMotDir_Val' incorporates:
   *  Switch: '<S4>/Switch15'
   */
  (void) Rte_Write_HvacDampr_stPassRcrltnMotDir_Val(rtb_Switch2_p);

  /* Switch: '<S4>/Switch16' incorporates:
   *  Constant: '<S4>/Constant15'
   */
  if (rtb_TmpSignalConversionAtHvac_p) {
    rtb_Switch13_b = 0U;
  } else {
    rtb_Switch13_b = rtb_LogicalOperator_a;
  }

  /* Outport: '<Root>/HvacDampr_stPassRcrltnMotRunng_Val' incorporates:
   *  Switch: '<S4>/Switch16'
   */
  (void) Rte_Write_HvacDampr_stPassRcrltnMotRunng_Val(rtb_Switch13_b);

  /* Switch: '<S4>/Switch17' incorporates:
   *  Constant: '<S4>/Constant16'
   *  DataStoreWrite: '<S4>/Data Store Write13'
   */
  if (rtb_TmpSignalConversionAtHvac_p) {
    rtb_Switch1 = 0U;
  } else {
    rtb_Switch1 = HvacDampr_Ctrl_DW.HvacDampr_uRcrltnMotFb;
  }

  /* Outport: '<Root>/HvacDampr_uPassRcrltnMotFb_Val' incorporates:
   *  Switch: '<S4>/Switch17'
   */
  (void) Rte_Write_HvacDampr_uPassRcrltnMotFb_Val(rtb_Switch1);

  /* Switch: '<S4>/Switch8' incorporates:
   *  Constant: '<S4>/Constant4'
   */
  if (!rtb_TmpSignalConversionAtHvac_p) {
    rtb_Switch13 = 0U;
  }

  /* Outport: '<Root>/HvacDampr_stRcrltnMotAct_Val' incorporates:
   *  Switch: '<S4>/Switch8'
   */
  (void) Rte_Write_HvacDampr_stRcrltnMotAct_Val(rtb_Switch13);

  /* Switch: '<S4>/Switch9' incorporates:
   *  Constant: '<S4>/Constant8'
   */
  if (rtb_TmpSignalConversionAtHvac_p) {
    rtb_Switch13_b = HvacDampr_Ctrl_B.In1_hu;
  } else {
    rtb_Switch13_b = 0U;
  }

  /* Outport: '<Root>/HvacDampr_stRcrltnMotFlt_Val' incorporates:
   *  Switch: '<S4>/Switch9'
   */
  (void) Rte_Write_HvacDampr_stRcrltnMotFlt_Val(rtb_Switch13_b);

  /* SignalConversion generated from: '<S1>/HvacDampr_stReqDrvrMixMot_Val_read' incorporates:
   *  Inport: '<Root>/HvacDampr_stReqDrvrMixMot_Val'
   */
  Rte_Read_HvacDampr_stReqDrvrMixMot_Val(&rtb_TmpSignalConversionAtHvacDa);

  /* FunctionCaller: '<S5>/IoHwAb_IoSigAdc_AdcFac_Get11' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_DrvrTempMotorPosnFb, &rtb_IoHwAb_IoSigAdc_AdcFac_Get1);

  /* DataTypeConversion: '<S5>/DataTypeConversion11' */
  tmp_1 = rtb_IoHwAb_IoSigAdc_AdcFac_Get1;
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Get1 < 0) {
    tmp_1 = 0;
  }

  HvacDampr_Ctrl_B.DataTypeConversion11 = (uint16)tmp_1;

  /* End of DataTypeConversion: '<S5>/DataTypeConversion11' */

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant2'
   *  Constant: '<S5>/Constant3'
   *  Constant: '<S5>/XH2_AirBoxCfgVal1'
   *  Logic: '<S5>/Logical Operator'
   *  Logic: '<S5>/Logical Operator1'
   *  RelationalOperator: '<S5>/Relational Operator1'
   *  RelationalOperator: '<S5>/Relational Operator2'
   *  RelationalOperator: '<S5>/Relational Operator3'
   *  RelationalOperator: '<S5>/Relational Operator4'
   */
  if ((rtb_TmpSignalConversionAtgPRM_u == 1) || (rtb_TmpSignalConversionAtgPRM_u == 2) || (rtb_TmpSignalConversionAtgPRM_u == 3) || (rtb_TmpSignalConversionAtgPRM_b == Rte_CData_PRM_A08_CFG_SPEC_VAL())) {
    rtb_Switch2_p = 1U;
  } else {
    rtb_Switch2_p = rtb_TmpSignalConversionAtgPRM_b;
  }

  /* End of Switch: '<S5>/Switch' */

  /* SwitchCase: '<S35>/Switch Case' incorporates:
   *  Constant: '<S35>/Constant1'
   *  Constant: '<S35>/Constant2'
   *  Constant: '<S35>/Constant3'
   *  Constant: '<S35>/Constant4'
   *  Constant: '<S35>/Constant5'
   *  Constant: '<S35>/Constant6'
   *  Inport: '<S39>/u8Temp_P_TURN_In'
   *  Inport: '<S39>/u8Temp_R_TURN_In'
   *  Inport: '<S40>/u8Temp_P_TURN_In'
   *  Inport: '<S40>/u8Temp_R_TURN_In'
   *  Inport: '<S41>/u8Temp_P_TURN_In'
   *  Inport: '<S41>/u8Temp_R_TURN_In'
   */
  switch (rtb_Switch2_p) {
   case 0:
    /* Switch: '<S34>/Switch' */
    if (!tmpRead_4) {
      Switch2 = rtb_TmpSignalConversionAtHvacDa;
    }

    /* Sum: '<S34>/Add5' incorporates:
     *  Constant: '<S34>/Constant'
     *  Gain: '<S34>/Gain1'
     */
    tmp_0 = ((sint32)(209U * Switch2) - 10240) >> 5;
    if (tmp_0 < 0) {
      tmp_0 = 0;
    }

    /* Outputs for IfAction SubSystem: '<S35>/A02_TEMP_Pos_Action ' incorporates:
     *  ActionPort: '<S39>/Action Port'
     */
    /* DataTypeConversion: '<S39>/Data Type Conversion' incorporates:
     *  Lookup_n-D: '<S39>/HVAC_DrTempHmixToPosCnv_CUR'
     *  Saturate: '<S34>/Saturation2'
     *  Sum: '<S34>/Add5'
     */
    HvacDampr_Ctrl_B.Merge = Ifx_IntIpoCur_u16_u16(Mfx_Min_u16((uint16)tmp_0, 1000U), (Rte_CData_HVAC_DrTempHmixToPosCnv_CUR())->N1, (Rte_CData_HVAC_DrTempHmixToPosCnv_CUR())->BP1, (Rte_CData_HVAC_DrTempHmixToPosCnv_CUR())->Table);

    /* DataTypeConversion: '<S39>/Data Type Conversion1' incorporates:
     *  Lookup_n-D: '<S39>/HVAC_DrTempPosToHmixCnv_CUR'
     */
    HvacDampr_Ctrl_B.Merge1 = Ifx_IntIpoCur_u16_u16(HvacDampr_Ctrl_B.DataTypeConversion11, (Rte_CData_HVAC_DrTempPosToHmixCnv_CUR())->N1, (Rte_CData_HVAC_DrTempPosToHmixCnv_CUR())->BP1, (Rte_CData_HVAC_DrTempPosToHmixCnv_CUR())->Table);
    HvacDampr_Ctrl_B.Merge2_g = Rte_CData_MOTO_DR_TEMP_SPECT1_R_TURN();
    HvacDampr_Ctrl_B.Merge3_i = Rte_CData_MOTO_DR_TEMP_SPECT1_P_TURN();

    /* End of Outputs for SubSystem: '<S35>/A02_TEMP_Pos_Action ' */
    break;

   case 1:
    /* Switch: '<S34>/Switch' */
    if (!tmpRead_4) {
      Switch2 = rtb_TmpSignalConversionAtHvacDa;
    }

    /* Sum: '<S34>/Add5' incorporates:
     *  Constant: '<S34>/Constant'
     *  Gain: '<S34>/Gain1'
     */
    tmp_0 = ((sint32)(209U * Switch2) - 10240) >> 5;
    if (tmp_0 < 0) {
      tmp_0 = 0;
    }

    /* Outputs for IfAction SubSystem: '<S35>/A29_TEMP_Pos_Action' incorporates:
     *  ActionPort: '<S41>/Action Port'
     */
    /* Lookup_n-D: '<S41>/HVAC_DrTempHmixToPosCnv_CUR2' incorporates:
     *  Saturate: '<S34>/Saturation2'
     *  Sum: '<S34>/Add5'
     */
    HvacDampr_Ctrl_B.Merge = Ifx_IntIpoCur_u16_u16(Mfx_Min_u16((uint16)tmp_0, 1000U), (Rte_CData_HVAC_DrTempHmixToPosCnv_CUR2())->N1, (Rte_CData_HVAC_DrTempHmixToPosCnv_CUR2())->BP1, (Rte_CData_HVAC_DrTempHmixToPosCnv_CUR2())->Table);

    /* Lookup_n-D: '<S41>/HVAC_DrTempPosToHmixCnv_CUR2' */
    HvacDampr_Ctrl_B.Merge1 = Ifx_IntIpoCur_u16_u16(HvacDampr_Ctrl_B.DataTypeConversion11, (Rte_CData_HVAC_DrTempPosToHmixCnv_CUR2())->N1, (Rte_CData_HVAC_DrTempPosToHmixCnv_CUR2())->BP1, (Rte_CData_HVAC_DrTempPosToHmixCnv_CUR2())->Table);
    HvacDampr_Ctrl_B.Merge2_g = Rte_CData_MOTO_DR_TEMP_SPECT2_R_TURN();
    HvacDampr_Ctrl_B.Merge3_i = Rte_CData_MOTO_DR_TEMP_SPECT2_P_TURN();

    /* End of Outputs for SubSystem: '<S35>/A29_TEMP_Pos_Action' */
    break;

   case 2:
    /* Switch: '<S34>/Switch' */
    if (!tmpRead_4) {
      Switch2 = rtb_TmpSignalConversionAtHvacDa;
    }

    /* Sum: '<S34>/Add5' incorporates:
     *  Constant: '<S34>/Constant'
     *  Gain: '<S34>/Gain1'
     */
    tmp_0 = ((sint32)(209U * Switch2) - 10240) >> 5;
    if (tmp_0 < 0) {
      tmp_0 = 0;
    }

    /* Outputs for IfAction SubSystem: '<S35>/A08_TEMP_Pos_Action' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    /* Lookup_n-D: '<S40>/HVAC_DrTempHmixToPosCnv_CUR3' incorporates:
     *  Saturate: '<S34>/Saturation2'
     *  Sum: '<S34>/Add5'
     */
    HvacDampr_Ctrl_B.Merge = Ifx_IntIpoCur_u16_u16(Mfx_Min_u16((uint16)tmp_0, 1000U), (Rte_CData_HVAC_DrTempHmixToPosCnv_CUR3())->N1, (Rte_CData_HVAC_DrTempHmixToPosCnv_CUR3())->BP1, (Rte_CData_HVAC_DrTempHmixToPosCnv_CUR3())->Table);

    /* Lookup_n-D: '<S40>/HVAC_DrTempPosToHmixCnv_CUR3' */
    HvacDampr_Ctrl_B.Merge1 = Ifx_IntIpoCur_u16_u16(HvacDampr_Ctrl_B.DataTypeConversion11, (Rte_CData_HVAC_DrTempPosToHmixCnv_CUR3())->N1, (Rte_CData_HVAC_DrTempPosToHmixCnv_CUR3())->BP1, (Rte_CData_HVAC_DrTempPosToHmixCnv_CUR3())->Table);
    HvacDampr_Ctrl_B.Merge2_g = Rte_CData_MOTO_DR_TEMP_SPECT3_R_TURN();
    HvacDampr_Ctrl_B.Merge3_i = Rte_CData_MOTO_DR_TEMP_SPECT3_P_TURN();

    /* End of Outputs for SubSystem: '<S35>/A08_TEMP_Pos_Action' */
    break;
  }

  /* End of SwitchCase: '<S35>/Switch Case' */

  /* DataStoreWrite: '<S5>/Data Store Write1' */
  HvacDampr_Ctrl_DW.u16DrTEMPHmixTargetPos = HvacDampr_Ctrl_B.Merge;

  /* DataStoreWrite: '<S5>/Data Store Write10' */
  HvacDampr_Ctrl_DW.HvacDampr_uDrvrMixMotFb = HvacDampr_Ctrl_B.DataTypeConversion11;

  /* DataStoreWrite: '<S5>/Data Store Write20' */
  HvacDampr_Ctrl_DW.HvacDampr_stReqDrvrMixMot = rtb_TmpSignalConversionAtHvacDa;

  /* SignalConversion generated from: '<S1>/HvacDampr_bReqVldDrvrMixMot_Val_read' incorporates:
   *  Inport: '<Root>/HvacDampr_bReqVldDrvrMixMot_Val'
   */
  Rte_Read_HvacDampr_bReqVldDrvrMixMot_Val(&rtb_TmpSignalConversionAtHvac_c);

  /* DataStoreWrite: '<S5>/Data Store Write31' */
  HvacDampr_Ctrl_DW.HvacDampr_bReqVldDrvrMixMot = rtb_TmpSignalConversionAtHvac_c;

  /* Switch: '<S37>/Switch' incorporates:
   *  Constant: '<S37>/Constant49'
   *  Constant: '<S37>/Constant5'
   *  Constant: '<S37>/Constant54'
   *  RelationalOperator: '<S37>/Relational Operator2'
   *  Sum: '<S37>/Add'
   *  Sum: '<S37>/Add1'
   */
  if (HvacDampr_Ctrl_B.Merge < (uint16)(Rte_CData_DCMOTOR_MODE_DEFMAX_POS() - Rte_CData_DCMOTOR_MODE_POS_LIMIT())) {
    rtb_Divide = (uint16)((uint32)HvacDampr_Ctrl_B.Merge + Rte_CData_DCMOTOR_MODE_POS_LIMIT());
  } else {
    rtb_Divide = Rte_CData_DCMOTOR_MODE_DEFMAX_POS();
  }

  /* End of Switch: '<S37>/Switch' */

  /* Switch: '<S37>/Switch1' incorporates:
   *  Constant: '<S37>/Constant54'
   *  Constant: '<S37>/Constant55'
   *  Constant: '<S37>/Constant6'
   *  RelationalOperator: '<S37>/Relational Operator1'
   *  Sum: '<S37>/Add2'
   *  Sum: '<S37>/Add3'
   */
  if (HvacDampr_Ctrl_B.Merge >= (uint16)((uint32)Rte_CData_DCMOTOR_MODE_POS_LIMIT() + Rte_CData_DCMOTOR_MODE_FACEMIX_POS())) {
    rtb_Divide1 = (uint16)(HvacDampr_Ctrl_B.Merge - Rte_CData_DCMOTOR_MODE_FACEMIX_POS());
  } else {
    rtb_Divide1 = Rte_CData_DCMOTOR_MODE_FACEMIX_POS();
  }

  /* End of Switch: '<S37>/Switch1' */

  /* Chart: '<S37>/DC Motor State' incorporates:
   *  Constant: '<S37>/Constant3'
   *  Constant: '<S37>/Constant57'
   *  Constant: '<S37>/Constant58'
   *  Constant: '<S37>/Constant60'
   *  Constant: '<S5>/Constant51'
   */
  HvacDampr_Ctrl_DCMotorState(HvacDampr_Ctrl_B.DataTypeConversion11, HvacDampr_Ctrl_B.Merge, rtb_Divide, rtb_Divide1, Rte_CData_DCMOTOR_MODE_STALL_TICKS(), Rte_CData_DCMOTOR_MODE_BACK_TICKS(), Rte_CData_DCMOTOR_MODE_STOP_TICKS(), Rte_CData_MOTO_INIT_DEAL_TIME(), HvacDampr_Ctrl_B.Merge2_g, HvacDampr_Ctrl_B.Merge3_i, Rte_CData_MOTO_STOP(), &HvacDampr_Ctrl_B.LastTargetPos_h, &HvacDampr_Ctrl_B.Out_RunSts_n, &HvacDampr_Ctrl_B.Out_MotorSts_f, &HvacDampr_Ctrl_B.Moto_JAM_St_n, &HvacDampr_Ctrl_DW.sf_DCMotorState_h);

  /* Switch: '<S37>/Switch2' incorporates:
   *  Constant: '<S5>/Constant51'
   */
  if (rtb_TmpSignalConversionAtHvac_c) {
    Switch2 = HvacDampr_Ctrl_B.Out_MotorSts_f;
  } else {
    Switch2 = Rte_CData_MOTO_STOP();
  }

  /* End of Switch: '<S37>/Switch2' */

  /* Switch: '<S36>/Switch12' incorporates:
   *  Constant: '<S36>/Constant15'
   *  Constant: '<S36>/Constant8'
   *  Sum: '<S36>/Add12'
   */
  if (Mfx_Sub_u16u16_u16(Rte_CData_CIRCUIT_SHORT_POWER_VAL(), HvacDampr_Ctrl_B.DataTypeConversion11) > 0) {
    /* Switch: '<S36>/Switch14' incorporates:
     *  Constant: '<S36>/Constant14'
     *  Constant: '<S36>/Constant16'
     *  Constant: '<S36>/Constant25'
     *  Sum: '<S36>/Add14'
     */
    if (Mfx_Sub_u16u16_u16(HvacDampr_Ctrl_B.DataTypeConversion11, Rte_CData_CIRCUIT_SHORT_GND_VAL()) > 0) {
      rtb_TmpSignalConversionAtHvacDa = Rte_CData_CIRCUIT_NORMAL();
    } else {
      rtb_TmpSignalConversionAtHvacDa = Rte_CData_CIRCUIT_SHORT_GND();
    }

    /* End of Switch: '<S36>/Switch14' */
  } else {
    rtb_TmpSignalConversionAtHvacDa = Rte_CData_CIRCUIT_SHORT_POWER();
  }

  /* End of Switch: '<S36>/Switch12' */

  /* Switch: '<S36>/Switch13' incorporates:
   *  Delay: '<S36>/Delay3'
   *  Sum: '<S36>/Add13'
   */
  rtb_Switch2_p = (uint8)((uint8)(rtb_TmpSignalConversionAtHvacDa - HvacDampr_Ctrl_DW.Delay3_DSTATE_l) != 0);

  /* Outputs for Enabled SubSystem: '<S36>/Enabled CompLP Fault cauculate' */
  /* Constant: '<S36>/Constant13' */
  Hva_EnabledCompLPFaultcauculate(rtb_Switch2_p, true, &HvacDampr_Ctrl_B.In1_f);

  /* End of Outputs for SubSystem: '<S36>/Enabled CompLP Fault cauculate' */

  /* Outputs for Enabled SubSystem: '<S36>/Enabled Subsystem' */
  /* Delay: '<S36>/Delay3' */
  HvacDampr_Ctrl_EnabledSubsystem(HvacDampr_Ctrl_B.In1_f, HvacDampr_Ctrl_DW.Delay3_DSTATE_l, rtb_Switch2_p, &HvacDampr_Ctrl_B.In1_ni, &HvacDampr_Ctrl_DW.EnabledSubsystem_h);

  /* End of Outputs for SubSystem: '<S36>/Enabled Subsystem' */

  /* If: '<S36>/If1' */
  if (Switch2 == 0) {
    /* Switch: '<S36>/Switch6' incorporates:
     *  Constant: '<S36>/Constant23'
     *  Constant: '<S36>/Constant24'
     *  RelationalOperator: '<S36>/RelationalOperator'
     *  Switch: '<S36>/Switch10'
     */
    if (HvacDampr_Ctrl_B.In1_ni > 0) {
      rtb_Switch6 = HvacDampr_Ctrl_B.In1_ni;
    } else if (HvacDampr_Ctrl_B.Moto_JAM_St_n != 1) {
      /* Switch: '<S36>/Switch9' incorporates:
       *  Constant: '<S36>/Constant10'
       *  Constant: '<S36>/Constant17'
       *  Constant: '<S36>/Constant22'
       *  Constant: '<S36>/Constant9'
       *  Logic: '<S36>/Logical Operator1'
       *  Sum: '<S36>/Add7'
       *  Sum: '<S36>/Add8'
       *  Switch: '<S36>/Switch10'
       *  Switch: '<S36>/Switch7'
       *  Switch: '<S36>/Switch8'
       */
      if ((Mfx_Sub_s32u32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL() + HvacDampr_Ctrl_B.Merge, HvacDampr_Ctrl_B.DataTypeConversion11) > 0) && (Mfx_Add_u32s32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL(), HvacDampr_Ctrl_B.DataTypeConversion11 - HvacDampr_Ctrl_B.Merge) > 0)) {
        rtb_Switch6 = Rte_CData_DCMOTOR_NORMAL();
      } else {
        rtb_Switch6 = Rte_CData_DCMOTOR_POS_UNREACHED();
      }

      /* End of Switch: '<S36>/Switch9' */
    } else {
      rtb_Switch6 = Rte_CData_DCMOTOR_JAM();
    }

    /* End of Switch: '<S36>/Switch6' */

    /* Outputs for IfAction SubSystem: '<S36>/If Action Subsystem' incorporates:
     *  ActionPort: '<S44>/Action Port'
     */
    HvacDampr_Ctr_IfActionSubsystem(rtb_Switch6, &HvacDampr_Ctrl_B.In1_hi);

    /* End of Outputs for SubSystem: '<S36>/If Action Subsystem' */
  }

  /* End of If: '<S36>/If1' */

  /* Switch: '<S5>/Switch2' incorporates:
   *  Constant: '<S5>/Constant18'
   *  Constant: '<S5>/Constant20'
   *  Constant: '<S5>/Constant6'
   *  RelationalOperator: '<S5>/RelationalOperator'
   */
  if (HvacDampr_Ctrl_B.In1_hi == 2) {
    tmp_2 = DEM_EVENT_STATUS_FAILED;
  } else {
    tmp_2 = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S5>/Switch2' */

  /* FunctionCaller: '<S5>/DTC_DrvrMixDamprMotMaxErr_SetEventStatus' */
  Rte_Call_DTC_DrvrMixDamprMotMaxErr_SetEventStatus(tmp_2);

  /* Switch: '<S5>/Switch18' incorporates:
   *  Constant: '<S5>/Constant22'
   *  Constant: '<S5>/Constant23'
   *  Constant: '<S5>/Constant4'
   *  RelationalOperator: '<S5>/RelationalOperator1'
   */
  if (HvacDampr_Ctrl_B.In1_hi == 1) {
    tmp_2 = DEM_EVENT_STATUS_FAILED;
  } else {
    tmp_2 = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S5>/Switch18' */

  /* FunctionCaller: '<S5>/DTC_DrvrMixDamprMotMinErr_SetEventStatus' */
  Rte_Call_DTC_DrvrMixDamprMotMinErr_SetEventStatus(tmp_2);

  /* Switch: '<S5>/Switch19' incorporates:
   *  Constant: '<S5>/Constant21'
   *  Constant: '<S5>/Constant24'
   *  Constant: '<S5>/Constant25'
   *  RelationalOperator: '<S5>/RelationalOperator2'
   */
  if (HvacDampr_Ctrl_B.In1_hi == 3) {
    tmp_2 = DEM_EVENT_STATUS_FAILED;
  } else {
    tmp_2 = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S5>/Switch19' */

  /* FunctionCaller: '<S5>/DTC_DrvrMixDamprMotStuck_SetEventStatus' */
  Rte_Call_DTC_DrvrMixDamprMotStuck_SetEventStatus(tmp_2);

  /* Switch: '<S37>/Switch5' incorporates:
   *  Constant: '<S5>/Constant51'
   *  Sum: '<S37>/Add5'
   */
  if ((uint8)(HvacDampr_Ctrl_B.Out_MotorSts_f - Rte_CData_MOTO_STOP()) > 0) {
    /* Outport: '<Root>/HvacDampr_stDrvrMixMotRunng_Val' incorporates:
     *  Constant: '<S37>/Constant8'
     *  DataTypeConversion: '<S5>/DataTypeConversion'
     */
    (void) Rte_Write_HvacDampr_stDrvrMixMotRunng_Val(Rte_CData_MOTO_RUNNING());
  } else {
    /* Outport: '<Root>/HvacDampr_stDrvrMixMotRunng_Val' incorporates:
     *  Constant: '<S37>/Constant9'
     *  DataTypeConversion: '<S5>/DataTypeConversion'
     */
    (void) Rte_Write_HvacDampr_stDrvrMixMotRunng_Val(Rte_CData_MOTO_STOP_RUNNING());
  }

  /* End of Switch: '<S37>/Switch5' */

  /* Outport: '<Root>/HvacDampr_stDrvrMixMotAct_Val' incorporates:
   *  Constant: '<S38>/Constant1'
   *  Gain: '<S38>/Gain2'
   *  Product: '<S38>/Divide'
   *  Saturate: '<S5>/Saturation3'
   *  Sum: '<S38>/Add4'
   */
  (void) Rte_Write_HvacDampr_stDrvrMixMotAct_Val(Mfx_Limit_u8((uint8)((51200U * HvacDampr_Ctrl_B.Merge1 + 16384000U) / 334848U), 49U, 201U));

  /* DataStoreWrite: '<S47>/Data Store Write' incorporates:
   *  Constant: '<S47>/Constant'
   */
  HvacDampr_Ctrl_DW.MDD_PNL_VAL_m = Rte_CData_MDD_PNL_VAL();

  /* Product: '<S47>/Divide' incorporates:
   *  Constant: '<S47>/Constant110'
   *  Constant: '<S47>/Constant98'
   *  Sum: '<S47>/Subtract'
   */
  rtb_Divide = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_ST2_POSITION_SPEC_3(), Rte_CData_MDD_ST1_POSITION_SPEC_3()) >> 1);

  /* Product: '<S47>/Divide1' incorporates:
   *  Constant: '<S47>/Constant113'
   *  Constant: '<S47>/Constant115'
   *  Sum: '<S47>/Subtract1'
   */
  rtb_Divide1 = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_ST3_POSITION_SPEC_3(), Rte_CData_MDD_ST2_POSITION_SPEC_3()) >> 1);

  /* Product: '<S47>/Divide2' incorporates:
   *  Constant: '<S47>/Constant117'
   *  Constant: '<S47>/Constant119'
   *  Sum: '<S47>/Subtract2'
   */
  rtb_Divide2 = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_ST4_POSITION_SPEC_3(), Rte_CData_MDD_ST3_POSITION_SPEC_3()) >> 1);

  /* Product: '<S47>/Divide3' incorporates:
   *  Constant: '<S47>/Constant121'
   *  Constant: '<S47>/Constant123'
   *  Sum: '<S47>/Subtract3'
   */
  rtb_Switch1 = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_ST5_POSITION_SPEC_3(), Rte_CData_MDD_ST4_POSITION_SPEC_3()) >> 1);

  /* Product: '<S47>/Divide4' incorporates:
   *  Constant: '<S47>/Constant125'
   *  Constant: '<S47>/Constant139'
   *  Sum: '<S47>/Subtract4'
   */
  rtb_Divide4 = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_ST2_POSITION_SPEC_2(), Rte_CData_MDD_ST1_POSITION_SPEC_2()) >> 1);

  /* Product: '<S47>/Divide5' incorporates:
   *  Constant: '<S47>/Constant128'
   *  Constant: '<S47>/Constant130'
   *  Sum: '<S47>/Subtract5'
   */
  rtb_Divide5 = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_ST3_POSITION_SPEC_2(), Rte_CData_MDD_ST2_POSITION_SPEC_2()) >> 1);

  /* Product: '<S47>/Divide6' incorporates:
   *  Constant: '<S47>/Constant132'
   *  Constant: '<S47>/Constant134'
   *  Sum: '<S47>/Subtract6'
   */
  rtb_Divide6 = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_ST4_POSITION_SPEC_2(), Rte_CData_MDD_ST3_POSITION_SPEC_2()) >> 1);

  /* Product: '<S47>/Divide7' incorporates:
   *  Constant: '<S47>/Constant136'
   *  Constant: '<S47>/Constant138'
   *  Sum: '<S47>/Subtract7'
   */
  rtb_Divide7 = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_ST5_POSITION_SPEC_2(), Rte_CData_MDD_ST4_POSITION_SPEC_2()) >> 1);

  /* Product: '<S47>/Divide8' incorporates:
   *  Constant: '<S47>/Constant141'
   *  Constant: '<S47>/Constant155'
   *  Sum: '<S47>/Subtract8'
   */
  rtb_Divide8 = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_ST2_POSITION_SPEC_1(), Rte_CData_MDD_ST1_POSITION_SPEC_1()) >> 1);

  /* Product: '<S47>/Divide9' incorporates:
   *  Constant: '<S47>/Constant144'
   *  Constant: '<S47>/Constant146'
   *  Sum: '<S47>/Subtract9'
   */
  rtb_Divide9 = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_ST3_POSITION_SPEC_1(), Rte_CData_MDD_ST2_POSITION_SPEC_1()) >> 1);

  /* Product: '<S47>/Divide10' incorporates:
   *  Constant: '<S47>/Constant148'
   *  Constant: '<S47>/Constant150'
   *  Sum: '<S47>/Subtract10'
   */
  rtb_Divide10 = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_ST4_POSITION_SPEC_1(), Rte_CData_MDD_ST3_POSITION_SPEC_1()) >> 1);

  /* Product: '<S47>/Divide11' incorporates:
   *  Constant: '<S47>/Constant152'
   *  Constant: '<S47>/Constant154'
   *  Sum: '<S47>/Subtract11'
   */
  rtb_Divide11 = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_ST5_POSITION_SPEC_1(), Rte_CData_MDD_ST4_POSITION_SPEC_1()) >> 1);

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant2'
   *  Constant: '<S6>/Constant3'
   *  Constant: '<S6>/XH2_AirBoxCfgVal1'
   *  Logic: '<S6>/Logical Operator'
   *  Logic: '<S6>/Logical Operator1'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  RelationalOperator: '<S6>/Relational Operator1'
   *  RelationalOperator: '<S6>/Relational Operator2'
   *  RelationalOperator: '<S6>/Relational Operator3'
   */
  if ((rtb_TmpSignalConversionAtgPRM_u == 1) || (rtb_TmpSignalConversionAtgPRM_u == 2) || (rtb_TmpSignalConversionAtgPRM_u == 3) || (rtb_TmpSignalConversionAtgPRM_b == Rte_CData_PRM_A08_CFG_SPEC_VAL())) {
    rtb_Switch2_p = 1U;
  } else {
    rtb_Switch2_p = rtb_TmpSignalConversionAtgPRM_b;
  }

  /* End of Switch: '<S6>/Switch' */

  /* MultiPortSwitch: '<S47>/MultiportSwitch3' incorporates:
   *  Constant: '<S47>/Constant75'
   *  Constant: '<S47>/Constant84'
   *  Constant: '<S47>/Constant88'
   */
  switch (rtb_Switch2_p) {
   case 1:
    rtb_Switch13 = Rte_CData_MDD_ST1_VAL_SPEC2();

    /* MultiPortSwitch: '<S47>/MultiportSwitch4' incorporates:
     *  Constant: '<S47>/Constant75'
     *  Constant: '<S47>/Constant76'
     */
    rtb_Switch13_b = Rte_CData_MDD_ST2_VAL_SPEC2();

    /* MultiPortSwitch: '<S47>/MultiportSwitch5' incorporates:
     *  Constant: '<S47>/Constant77'
     */
    MultiportSwitch5 = Rte_CData_MDD_ST3_VAL_SPEC2();

    /* MultiPortSwitch: '<S47>/MultiportSwitch6' incorporates:
     *  Constant: '<S47>/Constant78'
     */
    rtb_Switch_a = Rte_CData_MDD_ST4_VAL_SPEC2();

    /* MultiPortSwitch: '<S47>/MultiportSwitch7' incorporates:
     *  Constant: '<S47>/Constant79'
     */
    rtb_Switch6 = Rte_CData_MDD_ST5_VAL_SPEC2();

    /* MultiPortSwitch: '<S47>/MultiportSwitch12' incorporates:
     *  Constant: '<S47>/Constant124'
     *  Constant: '<S47>/Constant139'
     *  Sum: '<S47>/Add18'
     */
    rtb_Switch = Mfx_Sub_s32u32_u16(Rte_CData_MDD_ST1_POSITION_SPEC_2() + rtb_Divide4, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch13' incorporates:
     *  Constant: '<S47>/Constant124'
     *  Constant: '<S47>/Constant139'
     *  Sum: '<S47>/Add19'
     */
    rtb_Divide = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_ST1_POSITION_SPEC_2() + rtb_Divide4, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch14' incorporates:
     *  Constant: '<S47>/Constant127'
     *  Constant: '<S47>/Constant130'
     *  Sum: '<S47>/Add20'
     */
    rtb_Divide4 = Mfx_Sub_s32u32_u16(Rte_CData_MDD_ST2_POSITION_SPEC_2() + rtb_Divide5, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch15' incorporates:
     *  Constant: '<S47>/Constant127'
     *  Constant: '<S47>/Constant130'
     *  Sum: '<S47>/Add21'
     */
    rtb_Divide1 = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_ST2_POSITION_SPEC_2() + rtb_Divide5, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch16' incorporates:
     *  Constant: '<S47>/Constant131'
     *  Constant: '<S47>/Constant134'
     *  Sum: '<S47>/Add22'
     */
    rtb_Divide5 = Mfx_Sub_s32u32_u16(Rte_CData_MDD_ST3_POSITION_SPEC_2() + rtb_Divide6, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch17' incorporates:
     *  Constant: '<S47>/Constant131'
     *  Constant: '<S47>/Constant134'
     *  Sum: '<S47>/Add23'
     */
    rtb_Divide2 = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_ST3_POSITION_SPEC_2() + rtb_Divide6, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch18' incorporates:
     *  Constant: '<S47>/Constant135'
     *  Constant: '<S47>/Constant138'
     *  Sum: '<S47>/Add24'
     */
    rtb_Divide6 = Mfx_Sub_s32u32_u16(Rte_CData_MDD_ST4_POSITION_SPEC_2() + rtb_Divide7, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch19' incorporates:
     *  Constant: '<S47>/Constant135'
     *  Constant: '<S47>/Constant138'
     *  Sum: '<S47>/Add25'
     */
    rtb_Switch1 = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_ST4_POSITION_SPEC_2() + rtb_Divide7, Rte_CData_MDD_ST_RE_DIFF_POSITION());
    break;

   case 2:
    rtb_Switch13 = Rte_CData_MDD_ST1_VAL_SPEC3();

    /* MultiPortSwitch: '<S47>/MultiportSwitch4' incorporates:
     *  Constant: '<S47>/Constant83'
     *  Constant: '<S47>/Constant84'
     */
    rtb_Switch13_b = Rte_CData_MDD_ST2_VAL_SPEC3();

    /* MultiPortSwitch: '<S47>/MultiportSwitch5' incorporates:
     *  Constant: '<S47>/Constant80'
     */
    MultiportSwitch5 = Rte_CData_MDD_ST3_VAL_SPEC3();

    /* MultiPortSwitch: '<S47>/MultiportSwitch6' incorporates:
     *  Constant: '<S47>/Constant81'
     */
    rtb_Switch_a = Rte_CData_MDD_ST4_VAL_SPEC3();

    /* MultiPortSwitch: '<S47>/MultiportSwitch7' incorporates:
     *  Constant: '<S47>/Constant85'
     */
    rtb_Switch6 = Rte_CData_MDD_ST5_VAL_SPEC3();

    /* MultiPortSwitch: '<S47>/MultiportSwitch12' incorporates:
     *  Constant: '<S47>/Constant100'
     *  Constant: '<S47>/Constant98'
     *  Sum: '<S47>/Add10'
     */
    rtb_Switch = Mfx_Sub_s32u32_u16(Rte_CData_MDD_ST1_POSITION_SPEC_3() + rtb_Divide, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch13' incorporates:
     *  Constant: '<S47>/Constant100'
     *  Constant: '<S47>/Constant98'
     *  Sum: '<S47>/Add11'
     */
    rtb_Divide = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_ST1_POSITION_SPEC_3() + rtb_Divide, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch14' incorporates:
     *  Constant: '<S47>/Constant112'
     *  Constant: '<S47>/Constant115'
     *  Sum: '<S47>/Add12'
     */
    rtb_Divide4 = Mfx_Sub_s32u32_u16(Rte_CData_MDD_ST2_POSITION_SPEC_3() + rtb_Divide1, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch15' incorporates:
     *  Constant: '<S47>/Constant112'
     *  Constant: '<S47>/Constant115'
     *  Sum: '<S47>/Add13'
     */
    rtb_Divide1 = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_ST2_POSITION_SPEC_3() + rtb_Divide1, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch16' incorporates:
     *  Constant: '<S47>/Constant116'
     *  Constant: '<S47>/Constant119'
     *  Sum: '<S47>/Add14'
     */
    rtb_Divide5 = Mfx_Sub_s32u32_u16(Rte_CData_MDD_ST3_POSITION_SPEC_3() + rtb_Divide2, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch17' incorporates:
     *  Constant: '<S47>/Constant116'
     *  Constant: '<S47>/Constant119'
     *  Sum: '<S47>/Add15'
     */
    rtb_Divide2 = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_ST3_POSITION_SPEC_3() + rtb_Divide2, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch18' incorporates:
     *  Constant: '<S47>/Constant120'
     *  Constant: '<S47>/Constant123'
     *  Sum: '<S47>/Add16'
     */
    rtb_Divide6 = Mfx_Sub_s32u32_u16(Rte_CData_MDD_ST4_POSITION_SPEC_3() + rtb_Switch1, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch19' incorporates:
     *  Constant: '<S47>/Constant120'
     *  Constant: '<S47>/Constant123'
     *  Sum: '<S47>/Add17'
     */
    rtb_Switch1 = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_ST4_POSITION_SPEC_3() + rtb_Switch1, Rte_CData_MDD_ST_RE_DIFF_POSITION());
    break;

   default:
    rtb_Switch13 = Rte_CData_MDD_ST1_VAL_SPEC1();

    /* MultiPortSwitch: '<S47>/MultiportSwitch4' incorporates:
     *  Constant: '<S47>/Constant82'
     *  Constant: '<S47>/Constant88'
     */
    rtb_Switch13_b = Rte_CData_MDD_ST2_VAL_SPEC1();

    /* MultiPortSwitch: '<S47>/MultiportSwitch5' incorporates:
     *  Constant: '<S47>/Constant86'
     */
    MultiportSwitch5 = Rte_CData_MDD_ST3_VAL_SPEC1();

    /* MultiPortSwitch: '<S47>/MultiportSwitch6' incorporates:
     *  Constant: '<S47>/Constant87'
     */
    rtb_Switch_a = Rte_CData_MDD_ST4_VAL_SPEC1();

    /* MultiPortSwitch: '<S47>/MultiportSwitch7' incorporates:
     *  Constant: '<S47>/Constant89'
     */
    rtb_Switch6 = Rte_CData_MDD_ST5_VAL_SPEC1();

    /* MultiPortSwitch: '<S47>/MultiportSwitch12' incorporates:
     *  Constant: '<S47>/Constant140'
     *  Constant: '<S47>/Constant155'
     *  Sum: '<S47>/Add26'
     */
    rtb_Switch = Mfx_Sub_s32u32_u16(Rte_CData_MDD_ST1_POSITION_SPEC_1() + rtb_Divide8, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch13' incorporates:
     *  Constant: '<S47>/Constant140'
     *  Constant: '<S47>/Constant155'
     *  Sum: '<S47>/Add27'
     */
    rtb_Divide = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_ST1_POSITION_SPEC_1() + rtb_Divide8, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch14' incorporates:
     *  Constant: '<S47>/Constant143'
     *  Constant: '<S47>/Constant146'
     *  Sum: '<S47>/Add28'
     */
    rtb_Divide4 = Mfx_Sub_s32u32_u16(Rte_CData_MDD_ST2_POSITION_SPEC_1() + rtb_Divide9, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch15' incorporates:
     *  Constant: '<S47>/Constant143'
     *  Constant: '<S47>/Constant146'
     *  Sum: '<S47>/Add29'
     */
    rtb_Divide1 = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_ST2_POSITION_SPEC_1() + rtb_Divide9, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch16' incorporates:
     *  Constant: '<S47>/Constant147'
     *  Constant: '<S47>/Constant150'
     *  Sum: '<S47>/Add30'
     */
    rtb_Divide5 = Mfx_Sub_s32u32_u16(Rte_CData_MDD_ST3_POSITION_SPEC_1() + rtb_Divide10, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch17' incorporates:
     *  Constant: '<S47>/Constant147'
     *  Constant: '<S47>/Constant150'
     *  Sum: '<S47>/Add31'
     */
    rtb_Divide2 = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_ST3_POSITION_SPEC_1() + rtb_Divide10, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch18' incorporates:
     *  Constant: '<S47>/Constant151'
     *  Constant: '<S47>/Constant154'
     *  Sum: '<S47>/Add32'
     */
    rtb_Divide6 = Mfx_Sub_s32u32_u16(Rte_CData_MDD_ST4_POSITION_SPEC_1() + rtb_Divide11, Rte_CData_MDD_ST_RE_DIFF_POSITION());

    /* MultiPortSwitch: '<S47>/MultiportSwitch19' incorporates:
     *  Constant: '<S47>/Constant151'
     *  Constant: '<S47>/Constant154'
     *  Sum: '<S47>/Add33'
     */
    rtb_Switch1 = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_ST4_POSITION_SPEC_1() + rtb_Divide11, Rte_CData_MDD_ST_RE_DIFF_POSITION());
    break;
  }

  /* End of MultiPortSwitch: '<S47>/MultiportSwitch3' */

  /* DataStoreRead: '<S6>/Data Store Read' */
  HvacDampr_Ctrl_B.DataStoreRead = HvacDampr_Ctrl_DW.HvacDampr_uModMotFb;

  /* Chart: '<S47>/Mode_Act_Fb1' incorporates:
   *  Constant: '<S47>/Constant1'
   *  Constant: '<S47>/Constant2'
   *  Constant: '<S47>/Constant3'
   *  Constant: '<S47>/Constant4'
   *  Constant: '<S47>/Constant5'
   */
  /* Gateway: HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem/Mode_Act_Fb1 */
  /* During: HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem/Mode_Act_Fb1 */
  if (HvacDampr_Ctrl_DW.is_active_c8_HvacDampr_Ctrl == 0U) {
    /* Entry: HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem/Mode_Act_Fb1 */
    HvacDampr_Ctrl_DW.is_active_c8_HvacDampr_Ctrl = 1U;

    /* Entry Internal: HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem/Mode_Act_Fb1 */
    /* Transition: '<S50>:387' */
    HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = 1;
  } else {
    switch (HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl) {
     case 1:
      /* During 'Init_Mode_Judge': '<S50>:386' */
      if (HvacDampr_Ctrl_B.u8Mode_St_h == rtb_Switch13) {
        /* Transition: '<S50>:411' */
        HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST1;

        /* Entry 'MODE_ST1': '<S50>:410' */
        HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch13;
      } else if (HvacDampr_Ctrl_B.u8Mode_St_h == rtb_Switch13_b) {
        /* Transition: '<S50>:426' */
        HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST2;

        /* Entry 'MODE_ST2': '<S50>:424' */
        HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch13_b;
      } else if (HvacDampr_Ctrl_B.u8Mode_St_h == MultiportSwitch5) {
        /* Transition: '<S50>:439' */
        HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST3;

        /* Entry 'MODE_ST3': '<S50>:438' */
        HvacDampr_Ctrl_B.u8Mode_St_h = MultiportSwitch5;
      } else if (HvacDampr_Ctrl_B.u8Mode_St_h == rtb_Switch6) {
        /* Transition: '<S50>:455' */
        HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST5;

        /* Entry 'MODE_ST5': '<S50>:454' */
        HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch6;
      } else if (HvacDampr_Ctrl_B.u8Mode_St_h == rtb_Switch_a) {
        /* Transition: '<S50>:449' */
        HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST4;

        /* Entry 'MODE_ST4': '<S50>:448' */
        HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch_a;
      } else {
        /* During: HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem/Mode_Act_Fb1/Init_Mode_Judge */
        /* During 'Init_Mode_Judge': '<S51>:335' */
        /* Transition: '<S51>:338' */
        if (HvacDampr_Ctrl_B.DataStoreRead > Mfx_Div_s32s32_s32(Rte_CData_MDD_ST2_POSITION_SPEC_1() - Rte_CData_MDD_ST1_POSITION_SPEC_1(), 2) + Rte_CData_MDD_ST1_POSITION_SPEC_1()) {
          /* Transition: '<S51>:340' */
          if (HvacDampr_Ctrl_B.DataStoreRead > Mfx_Div_s32s32_s32(Rte_CData_MDD_ST3_POSITION_SPEC_1() - Rte_CData_MDD_ST2_POSITION_SPEC_1(), 2) + Rte_CData_MDD_ST2_POSITION_SPEC_1()) {
            /* Transition: '<S51>:355' */
            if (HvacDampr_Ctrl_B.DataStoreRead > Mfx_Div_s32s32_s32(Rte_CData_MDD_ST4_POSITION_SPEC_1() - Rte_CData_MDD_ST3_POSITION_SPEC_1(), 2) + Rte_CData_MDD_ST3_POSITION_SPEC_1()) {
              /* Transition: '<S51>:357' */
              if (HvacDampr_Ctrl_B.DataStoreRead > Mfx_Div_s32s32_s32(Rte_CData_MDD_ST5_POSITION_SPEC_1() - Rte_CData_MDD_ST4_POSITION_SPEC_1(), 2) + Rte_CData_MDD_ST4_POSITION_SPEC_1()) {
                /* Transition: '<S51>:365' */
                /* Transition: '<S51>:363' */
                HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch6;

                /* Transition: '<S51>:386' */
              } else {
                /* Transition: '<S51>:359' */
                HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch_a;
              }

              /* Transition: '<S51>:387' */
            } else {
              /* Transition: '<S51>:353' */
              HvacDampr_Ctrl_B.u8Mode_St_h = MultiportSwitch5;
            }

            /* Transition: '<S51>:388' */
          } else {
            /* Transition: '<S51>:344' */
            HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch13_b;
          }

          /* Transition: '<S51>:389' */
        } else {
          /* Transition: '<S51>:342' */
          HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch13;
        }
      }
      break;

     case HvacDampr_Ctrl_IN_MODE_ST1:
      /* During 'MODE_ST1': '<S50>:410' */
      if (HvacDampr_Ctrl_B.DataStoreRead >= rtb_Divide) {
        /* Transition: '<S50>:437' */
        HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST2;

        /* Entry 'MODE_ST2': '<S50>:424' */
        HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch13_b;
      }
      break;

     case HvacDampr_Ctrl_IN_MODE_ST2:
      /* During 'MODE_ST2': '<S50>:424' */
      if (HvacDampr_Ctrl_B.DataStoreRead <= rtb_Switch) {
        /* Transition: '<S50>:436' */
        HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST1;

        /* Entry 'MODE_ST1': '<S50>:410' */
        HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch13;
      } else {
        if (HvacDampr_Ctrl_B.DataStoreRead >= rtb_Divide1) {
          /* Transition: '<S50>:441' */
          HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST3;

          /* Entry 'MODE_ST3': '<S50>:438' */
          HvacDampr_Ctrl_B.u8Mode_St_h = MultiportSwitch5;
        }
      }
      break;

     case HvacDampr_Ctrl_IN_MODE_ST3:
      /* During 'MODE_ST3': '<S50>:438' */
      if (HvacDampr_Ctrl_B.DataStoreRead <= rtb_Divide4) {
        /* Transition: '<S50>:440' */
        HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST2;

        /* Entry 'MODE_ST2': '<S50>:424' */
        HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch13_b;
      } else {
        if (HvacDampr_Ctrl_B.DataStoreRead >= rtb_Divide2) {
          /* Transition: '<S50>:451' */
          HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST4;

          /* Entry 'MODE_ST4': '<S50>:448' */
          HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch_a;
        }
      }
      break;

     case HvacDampr_Ctrl_IN_MODE_ST4:
      /* During 'MODE_ST4': '<S50>:448' */
      if (HvacDampr_Ctrl_B.DataStoreRead <= rtb_Divide5) {
        /* Transition: '<S50>:450' */
        HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST3;

        /* Entry 'MODE_ST3': '<S50>:438' */
        HvacDampr_Ctrl_B.u8Mode_St_h = MultiportSwitch5;
      } else {
        if (HvacDampr_Ctrl_B.DataStoreRead >= rtb_Switch1) {
          /* Transition: '<S50>:453' */
          HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST5;

          /* Entry 'MODE_ST5': '<S50>:454' */
          HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch6;
        }
      }
      break;

     default:
      /* During 'MODE_ST5': '<S50>:454' */
      if (HvacDampr_Ctrl_B.DataStoreRead <= rtb_Divide6) {
        /* Transition: '<S50>:452' */
        HvacDampr_Ctrl_DW.is_c8_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST4;

        /* Entry 'MODE_ST4': '<S50>:448' */
        HvacDampr_Ctrl_B.u8Mode_St_h = rtb_Switch_a;
      }
      break;
    }
  }

  /* End of Chart: '<S47>/Mode_Act_Fb1' */

  /* MultiPortSwitch: '<S47>/MultiportSwitch' incorporates:
   *  Constant: '<S47>/Constant106'
   *  Constant: '<S47>/Constant59'
   *  Constant: '<S47>/Constant73'
   */
  switch (rtb_Switch2_p) {
   case 1:
    rtb_Switch13 = Rte_CData_MOTO_MODE_SPECT2_R_TURN();

    /* MultiPortSwitch: '<S47>/MultiportSwitch1' incorporates:
     *  Constant: '<S47>/Constant106'
     *  Constant: '<S47>/Constant58'
     */
    rtb_Switch13_b = Rte_CData_MOTO_MODE_SPECT2_P_TURN();
    break;

   case 2:
    rtb_Switch13 = Rte_CData_MOTO_MODE_SPECT3_R_TURN();

    /* MultiPortSwitch: '<S47>/MultiportSwitch1' incorporates:
     *  Constant: '<S47>/Constant73'
     *  Constant: '<S47>/Constant74'
     */
    rtb_Switch13_b = Rte_CData_MOTO_MODE_SPECT3_P_TURN();
    break;

   default:
    rtb_Switch13 = Rte_CData_MOTO_MODE_SPECT1_R_TURN();

    /* MultiPortSwitch: '<S47>/MultiportSwitch1' incorporates:
     *  Constant: '<S47>/Constant59'
     *  Constant: '<S47>/Constant60'
     */
    rtb_Switch13_b = Rte_CData_MOTO_MODE_SPECT1_P_TURN();
    break;
  }

  /* End of MultiPortSwitch: '<S47>/MultiportSwitch' */

  /* DataStoreWrite: '<S6>/Data Store Write18' incorporates:
   *  Inport: '<Root>/HvacDampr_stReqMotMot_Val'
   */
  Rte_Read_HvacDampr_stReqMotMot_Val(&HvacDampr_Ctrl_DW.HvacDampr_stReqMotMot);

  /* DataStoreWrite: '<S6>/Data Store Write30' incorporates:
   *  Inport: '<Root>/HvacDampr_bReqVldMotMot_Val'
   */
  Rte_Read_HvacDampr_bReqVldMotMot_Val(&HvacDampr_Ctrl_DW.HvacDampr_bReqVldMotMot);

  /* FunctionCaller: '<S6>/IoHwAb_IoSigAdc_AdcFac_Get1' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_FrntModMotorPosnFb, &rtb_IoHwAb_IoSigAdc_AdcFac_Get1);

  /* DataTypeConversion: '<S6>/DataTypeConversion14' */
  tmp_1 = rtb_IoHwAb_IoSigAdc_AdcFac_Get1;
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Get1 < 0) {
    tmp_1 = 0;
  }

  /* DataStoreWrite: '<S6>/Data Store Write12' incorporates:
   *  DataTypeConversion: '<S6>/DataTypeConversion14'
   */
  HvacDampr_Ctrl_DW.HvacDampr_uModMotFb = (uint16)tmp_1;

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' */

  /* Inport: '<Root>/HvacDampr_bUdsTrigModMot_Val' */
  Rte_Read_HvacDampr_bUdsTrigModMot_Val(&tmpRead_2);

  /* RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/HvacDampr_Ctrl_Runnable_10ms_sys'
   */
  /* Switch: '<S6>/Switch1' incorporates:
   *  DataStoreRead: '<S6>/Data Store Read1'
   *  Inport: '<Root>/HvacDampr_stReqUdsModMot_Val'
   */
  if (tmpRead_2) {
    Rte_Read_HvacDampr_stReqUdsModMot_Val(&rtb_Switch1_d);
  } else {
    rtb_Switch1_d = HvacDampr_Ctrl_DW.HvacDampr_stReqMotMot;
  }

  /* End of Switch: '<S6>/Switch1' */

  /* MultiPortSwitch: '<S6>/Mode_St Switch' incorporates:
   *  Delay: '<S6>/Delay'
   */
  switch (rtb_Switch1_d) {
   case 1:
    /* MultiPortSwitch: '<S47>/MultiportSwitch2' incorporates:
     *  Constant: '<S47>/Constant109'
     *  Constant: '<S47>/Constant63'
     *  Constant: '<S47>/Constant71'
     */
    switch (rtb_Switch2_p) {
     case 1:
      rtb_Switch1 = Rte_CData_MDD_PNL_POSITION_SPEC_2();
      break;

     case 2:
      rtb_Switch1 = Rte_CData_MDD_PNL_POSITION_SPEC_3();
      break;

     default:
      rtb_Switch1 = Rte_CData_MDD_PNL_POSITION_SPEC_1();
      break;
    }

    /* End of MultiPortSwitch: '<S47>/MultiportSwitch2' */
    break;

   case 2:
    /* MultiPortSwitch: '<S47>/MultiportSwitch8' incorporates:
     *  Constant: '<S47>/Constant64'
     *  Constant: '<S47>/Constant67'
     *  Constant: '<S47>/Constant72'
     */
    switch (rtb_Switch2_p) {
     case 1:
      rtb_Switch1 = Rte_CData_MDD_PNLFLR_POSITION_SPEC_2();
      break;

     case 2:
      rtb_Switch1 = Rte_CData_MDD_PNLFLR_POSITION_SPEC_3();
      break;

     default:
      rtb_Switch1 = Rte_CData_MDD_PNLFLR_POSITION_SPEC_1();
      break;
    }

    /* End of MultiPortSwitch: '<S47>/MultiportSwitch8' */
    break;

   case 3:
    /* MultiPortSwitch: '<S47>/MultiportSwitch9' incorporates:
     *  Constant: '<S47>/Constant108'
     *  Constant: '<S47>/Constant62'
     *  Constant: '<S47>/Constant69'
     */
    switch (rtb_Switch2_p) {
     case 1:
      rtb_Switch1 = Rte_CData_MDD_FLR_POSITION_SPEC_2();
      break;

     case 2:
      rtb_Switch1 = Rte_CData_MDD_FLR_POSITION_SPEC_3();
      break;

     default:
      rtb_Switch1 = Rte_CData_MDD_FLR_POSITION_SPEC_1();
      break;
    }

    /* End of MultiPortSwitch: '<S47>/MultiportSwitch9' */
    break;

   case 4:
    /* MultiPortSwitch: '<S47>/MultiportSwitch10' incorporates:
     *  Constant: '<S47>/Constant65'
     *  Constant: '<S47>/Constant66'
     *  Constant: '<S47>/Constant70'
     */
    switch (rtb_Switch2_p) {
     case 1:
      rtb_Switch1 = Rte_CData_MDD_FLRDEF_POSITION_SPEC_2();
      break;

     case 2:
      rtb_Switch1 = Rte_CData_MDD_FLRDEF_POSITION_SPEC_3();
      break;

     default:
      rtb_Switch1 = Rte_CData_MDD_FLRDEF_POSITION_SPEC_1();
      break;
    }

    /* End of MultiPortSwitch: '<S47>/MultiportSwitch10' */
    break;

   case 5:
    /* MultiPortSwitch: '<S47>/MultiportSwitch11' incorporates:
     *  Constant: '<S47>/Constant107'
     *  Constant: '<S47>/Constant61'
     *  Constant: '<S47>/Constant68'
     */
    switch (rtb_Switch2_p) {
     case 1:
      rtb_Switch1 = Rte_CData_MDD_DEF_POSITION_SPEC_2();
      break;

     case 2:
      rtb_Switch1 = Rte_CData_MDD_DEF_POSITION_SPEC_3();
      break;

     default:
      rtb_Switch1 = Rte_CData_MDD_DEF_POSITION_SPEC_1();
      break;
    }

    /* End of MultiPortSwitch: '<S47>/MultiportSwitch11' */
    break;

   default:
    rtb_Switch1 = HvacDampr_Ctrl_DW.Delay_DSTATE;
    break;
  }

  /* End of MultiPortSwitch: '<S6>/Mode_St Switch' */

  /* Switch: '<S49>/Switch' incorporates:
   *  Constant: '<S49>/Constant49'
   *  Constant: '<S49>/Constant5'
   *  Constant: '<S49>/Constant54'
   *  RelationalOperator: '<S49>/Relational Operator2'
   *  Sum: '<S49>/Add'
   *  Sum: '<S49>/Add1'
   */
  if (rtb_Switch1 < (uint16)(Rte_CData_DCMOTOR_MODE_DEFMAX_POS() - Rte_CData_DCMOTOR_MODE_POS_LIMIT())) {
    rtb_Divide7 = (uint16)((uint32)rtb_Switch1 + Rte_CData_DCMOTOR_MODE_POS_LIMIT());
  } else {
    rtb_Divide7 = Rte_CData_DCMOTOR_MODE_DEFMAX_POS();
  }

  /* End of Switch: '<S49>/Switch' */

  /* Switch: '<S49>/Switch1' incorporates:
   *  Constant: '<S49>/Constant54'
   *  Constant: '<S49>/Constant55'
   *  Constant: '<S49>/Constant6'
   *  RelationalOperator: '<S49>/Relational Operator1'
   *  Sum: '<S49>/Add2'
   *  Sum: '<S49>/Add3'
   */
  if (rtb_Switch1 >= (uint16)((uint32)Rte_CData_DCMOTOR_MODE_POS_LIMIT() + Rte_CData_DCMOTOR_MODE_FACEMIX_POS())) {
    rtb_Divide = (uint16)(rtb_Switch1 - Rte_CData_DCMOTOR_MODE_FACEMIX_POS());
  } else {
    rtb_Divide = Rte_CData_DCMOTOR_MODE_FACEMIX_POS();
  }

  /* End of Switch: '<S49>/Switch1' */

  /* Chart: '<S49>/DC Motor State' incorporates:
   *  Constant: '<S49>/Constant3'
   *  Constant: '<S49>/Constant57'
   *  Constant: '<S49>/Constant58'
   *  Constant: '<S49>/Constant60'
   *  Constant: '<S6>/Constant11'
   */
  HvacDampr_Ctrl_DCMotorState_a(HvacDampr_Ctrl_B.DataStoreRead, rtb_Switch1, rtb_Divide7, rtb_Divide, Rte_CData_DCMOTOR_MODE_STALL_TICKS(), Rte_CData_DCMOTOR_MODE_BACK_TICKS(), Rte_CData_DCMOTOR_MODE_STOP_TICKS(), Rte_CData_MOTO_INIT_DEAL_TIME(), rtb_Switch13, rtb_Switch13_b, Rte_CData_MOTO_STOP(), &HvacDampr_Ctrl_B.LastTargetPos_a, &HvacDampr_Ctrl_B.Out_RunSts_jc, &HvacDampr_Ctrl_B.Out_MotorSts_e, &HvacDampr_Ctrl_B.Moto_JAM_St_j, &HvacDampr_Ctrl_DW.sf_DCMotorState_a);

  /* Switch: '<S49>/Switch2' incorporates:
   *  Constant: '<S6>/Constant11'
   *  DataStoreRead: '<S6>/Data Store Read6'
   */
  if (HvacDampr_Ctrl_DW.HvacDampr_bReqVldMotMot) {
    rtb_Switch1_d = HvacDampr_Ctrl_B.Out_MotorSts_e;
  } else {
    rtb_Switch1_d = Rte_CData_MOTO_STOP();
  }

  /* End of Switch: '<S49>/Switch2' */

  /* Switch: '<S48>/Switch12' incorporates:
   *  Constant: '<S48>/Constant15'
   *  Constant: '<S48>/Constant8'
   *  Sum: '<S48>/Add12'
   */
  if (Mfx_Sub_u16u16_u16(Rte_CData_CIRCUIT_SHORT_POWER_VAL(), HvacDampr_Ctrl_B.DataStoreRead) > 0) {
    /* Switch: '<S48>/Switch14' incorporates:
     *  Constant: '<S48>/Constant14'
     *  Constant: '<S48>/Constant16'
     *  Constant: '<S48>/Constant25'
     *  Sum: '<S48>/Add14'
     */
    if (Mfx_Sub_u16u16_u16(HvacDampr_Ctrl_B.DataStoreRead, Rte_CData_CIRCUIT_SHORT_GND_VAL()) > 0) {
      rtb_Switch13 = Rte_CData_CIRCUIT_NORMAL();
    } else {
      rtb_Switch13 = Rte_CData_CIRCUIT_SHORT_GND();
    }

    /* End of Switch: '<S48>/Switch14' */
  } else {
    rtb_Switch13 = Rte_CData_CIRCUIT_SHORT_POWER();
  }

  /* End of Switch: '<S48>/Switch12' */

  /* Switch: '<S48>/Switch13' incorporates:
   *  Delay: '<S48>/Delay3'
   *  Sum: '<S48>/Add13'
   */
  rtb_Switch2_p = (uint8)((uint8)(rtb_Switch13 - HvacDampr_Ctrl_DW.Delay3_DSTATE_mb) != 0);

  /* Outputs for Enabled SubSystem: '<S48>/Enabled CompLP Fault cauculate' */
  /* Constant: '<S48>/Constant13' */
  Hva_EnabledCompLPFaultcauculate(rtb_Switch2_p, true, &HvacDampr_Ctrl_B.In1_nc);

  /* End of Outputs for SubSystem: '<S48>/Enabled CompLP Fault cauculate' */

  /* Outputs for Enabled SubSystem: '<S48>/Enabled Subsystem' */
  /* Delay: '<S48>/Delay3' */
  HvacDampr_Ctrl_EnabledSubsystem(HvacDampr_Ctrl_B.In1_nc, HvacDampr_Ctrl_DW.Delay3_DSTATE_mb, rtb_Switch2_p, &HvacDampr_Ctrl_B.In1_n, &HvacDampr_Ctrl_DW.EnabledSubsystem_d);

  /* End of Outputs for SubSystem: '<S48>/Enabled Subsystem' */

  /* If: '<S48>/If1' */
  if (rtb_Switch1_d == 0) {
    /* Switch: '<S48>/Switch6' incorporates:
     *  Constant: '<S48>/Constant23'
     *  Constant: '<S48>/Constant24'
     *  RelationalOperator: '<S48>/RelationalOperator'
     *  Switch: '<S48>/Switch10'
     */
    if (HvacDampr_Ctrl_B.In1_n > 0) {
      rtb_Switch6 = HvacDampr_Ctrl_B.In1_n;
    } else if (HvacDampr_Ctrl_B.Moto_JAM_St_j != 1) {
      /* Switch: '<S48>/Switch9' incorporates:
       *  Constant: '<S48>/Constant10'
       *  Constant: '<S48>/Constant17'
       *  Constant: '<S48>/Constant22'
       *  Constant: '<S48>/Constant9'
       *  Logic: '<S48>/Logical Operator1'
       *  Sum: '<S48>/Add7'
       *  Sum: '<S48>/Add8'
       *  Switch: '<S48>/Switch10'
       *  Switch: '<S48>/Switch7'
       *  Switch: '<S48>/Switch8'
       */
      if ((Mfx_Sub_s32u32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL() + rtb_Switch1, HvacDampr_Ctrl_B.DataStoreRead) > 0) && (Mfx_Add_u32s32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL(), HvacDampr_Ctrl_B.DataStoreRead - rtb_Switch1) > 0)) {
        rtb_Switch6 = Rte_CData_DCMOTOR_NORMAL();
      } else {
        rtb_Switch6 = Rte_CData_DCMOTOR_POS_UNREACHED();
      }

      /* End of Switch: '<S48>/Switch9' */
    } else {
      rtb_Switch6 = Rte_CData_DCMOTOR_JAM();
    }

    /* End of Switch: '<S48>/Switch6' */

    /* Outputs for IfAction SubSystem: '<S48>/If Action Subsystem' incorporates:
     *  ActionPort: '<S54>/Action Port'
     */
    HvacDampr_Ctr_IfActionSubsystem(rtb_Switch6, &HvacDampr_Ctrl_B.In1_dx);

    /* End of Outputs for SubSystem: '<S48>/If Action Subsystem' */
  }

  /* End of If: '<S48>/If1' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' */

  /* Inport: '<Root>/HvacDampr_stReqUdsPassMixMot_Val' */
  Rte_Read_HvacDampr_stReqUdsPassMixMot_Val(&rtb_Switch12_k);

  /* Inport: '<Root>/HvacDampr_bUdsTrigPassMixMot_Val' */
  Rte_Read_HvacDampr_bUdsTrigPassMixMot_Val(&tmpRead_3);

  /* RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/HvacDampr_Ctrl_Runnable_10ms_sys'
   */
  /* Switch: '<S6>/Switch2' incorporates:
   *  Constant: '<S6>/Constant18'
   *  Constant: '<S6>/Constant20'
   *  Constant: '<S6>/Constant6'
   *  RelationalOperator: '<S6>/RelationalOperator'
   */
  if (HvacDampr_Ctrl_B.In1_dx == 2) {
    tmp_2 = DEM_EVENT_STATUS_FAILED;
  } else {
    tmp_2 = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S6>/Switch2' */

  /* FunctionCaller: '<S6>/DTC_ModDamprMotMaxErr_SetEventStatus' */
  Rte_Call_DTC_ModDamprMotMaxErr_SetEventStatus(tmp_2);

  /* Switch: '<S6>/Switch18' incorporates:
   *  Constant: '<S6>/Constant22'
   *  Constant: '<S6>/Constant23'
   *  Constant: '<S6>/Constant4'
   *  RelationalOperator: '<S6>/RelationalOperator1'
   */
  if (HvacDampr_Ctrl_B.In1_dx == 1) {
    tmp_2 = DEM_EVENT_STATUS_FAILED;
  } else {
    tmp_2 = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S6>/Switch18' */

  /* FunctionCaller: '<S6>/DTC_ModDamprMotMinErr_SetEventStatus' */
  Rte_Call_DTC_ModDamprMotMinErr_SetEventStatus(tmp_2);

  /* Switch: '<S6>/Switch19' incorporates:
   *  Constant: '<S6>/Constant21'
   *  Constant: '<S6>/Constant24'
   *  Constant: '<S6>/Constant25'
   *  RelationalOperator: '<S6>/RelationalOperator2'
   */
  if (HvacDampr_Ctrl_B.In1_dx == 3) {
    tmp_2 = DEM_EVENT_STATUS_FAILED;
  } else {
    tmp_2 = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S6>/Switch19' */

  /* FunctionCaller: '<S6>/DTC_ModDamprMotStuck_SetEventStatus' */
  Rte_Call_DTC_ModDamprMotStuck_SetEventStatus(tmp_2);

  /* Switch: '<S49>/Switch5' incorporates:
   *  Constant: '<S6>/Constant11'
   *  Sum: '<S49>/Add5'
   */
  if ((uint8)(HvacDampr_Ctrl_B.Out_MotorSts_e - Rte_CData_MOTO_STOP()) > 0) {
    /* Outport: '<Root>/HvacDampr_stModMotRunng_Val' incorporates:
     *  Constant: '<S49>/Constant8'
     *  DataTypeConversion: '<S6>/DataTypeConversion'
     */
    (void) Rte_Write_HvacDampr_stModMotRunng_Val(Rte_CData_MOTO_RUNNING());
  } else {
    /* Outport: '<Root>/HvacDampr_stModMotRunng_Val' incorporates:
     *  Constant: '<S49>/Constant9'
     *  DataTypeConversion: '<S6>/DataTypeConversion'
     */
    (void) Rte_Write_HvacDampr_stModMotRunng_Val(Rte_CData_MOTO_STOP_RUNNING());
  }

  /* End of Switch: '<S49>/Switch5' */

  /* FunctionCaller: '<S7>/IoHwAb_IoSigAdc_AdcFac_Get17' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_PassTempMotorPosnFb, &rtb_IoHwAb_IoSigAdc_AdcFac_Get1);

  /* DataTypeConversion: '<S7>/DataTypeConversion17' */
  tmp = rtb_IoHwAb_IoSigAdc_AdcFac_Get1;
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Get1 < 0) {
    tmp = 0;
  }

  HvacDampr_Ctrl_B.DataTypeConversion17 = (uint16)tmp;

  /* End of DataTypeConversion: '<S7>/DataTypeConversion17' */

  /* DataStoreWrite: '<S7>/Data Store Write11' */
  HvacDampr_Ctrl_DW.HvacDampr_uPassMixMotFb = HvacDampr_Ctrl_B.DataTypeConversion17;

  /* SignalConversion generated from: '<S1>/HvacDampr_stReqPassMixMot_Val_read' incorporates:
   *  Inport: '<Root>/HvacDampr_stReqPassMixMot_Val'
   */
  Rte_Read_HvacDampr_stReqPassMixMot_Val(&rtb_TmpSignalConversionAtHva_gj);

  /* DataStoreWrite: '<S7>/Data Store Write21' */
  HvacDampr_Ctrl_DW.HvacDampr_stReqPassMixMot = rtb_TmpSignalConversionAtHva_gj;

  /* SignalConversion generated from: '<S1>/HvacDampr_bReqVldPassMixMot_Val_read' incorporates:
   *  Inport: '<Root>/HvacDampr_bReqVldPassMixMot_Val'
   */
  Rte_Read_HvacDampr_bReqVldPassMixMot_Val(&rtb_TmpSignalConversionAtHvac_l);

  /* DataStoreWrite: '<S7>/Data Store Write32' */
  HvacDampr_Ctrl_DW.HvacDampr_bReqVldPassMixMot = rtb_TmpSignalConversionAtHvac_l;

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/Constant2'
   *  Constant: '<S7>/Constant3'
   *  Constant: '<S7>/XH2_AirBoxCfgVal1'
   *  Logic: '<S7>/Logical Operator'
   *  Logic: '<S7>/Logical Operator1'
   *  RelationalOperator: '<S7>/Relational Operator1'
   *  RelationalOperator: '<S7>/Relational Operator2'
   *  RelationalOperator: '<S7>/Relational Operator3'
   *  RelationalOperator: '<S7>/Relational Operator4'
   */
  if ((rtb_TmpSignalConversionAtgPRM_u == 1) || (rtb_TmpSignalConversionAtgPRM_u == 2) || (rtb_TmpSignalConversionAtgPRM_u == 3) || (rtb_TmpSignalConversionAtgPRM_b == Rte_CData_PRM_A08_CFG_SPEC_VAL())) {
    rtb_TmpSignalConversionAtgPRM_b = 1U;
  }

  /* End of Switch: '<S7>/Switch' */

  /* SwitchCase: '<S58>/Switch Case' incorporates:
   *  Constant: '<S58>/Constant1'
   *  Constant: '<S58>/Constant2'
   *  Constant: '<S58>/Constant3'
   *  Constant: '<S58>/Constant4'
   *  Constant: '<S58>/Constant5'
   *  Constant: '<S58>/Constant6'
   *  Inport: '<S62>/u8Temp_P_TURN_In'
   *  Inport: '<S62>/u8Temp_R_TURN_In'
   *  Inport: '<S63>/u8Temp_P_TURN_In'
   *  Inport: '<S63>/u8Temp_R_TURN_In'
   *  Inport: '<S64>/u8Temp_P_TURN_In'
   *  Inport: '<S64>/u8Temp_R_TURN_In'
   */
  switch (rtb_TmpSignalConversionAtgPRM_b) {
   case 0:
    /* Switch: '<S57>/Switch' */
    if (tmpRead_3) {
      rtb_TmpSignalConversionAtHva_gj = rtb_Switch12_k;
    }

    /* Sum: '<S57>/Add5' incorporates:
     *  Constant: '<S57>/Constant'
     *  Gain: '<S57>/Gain1'
     */
    tmp_0 = ((sint32)(209U * rtb_TmpSignalConversionAtHva_gj) - 10240) >> 5;
    if (tmp_0 < 0) {
      tmp_0 = 0;
    }

    /* Outputs for IfAction SubSystem: '<S58>/A02_TEMP_Pos_Action ' incorporates:
     *  ActionPort: '<S62>/Action Port'
     */
    /* Lookup_n-D: '<S62>/HVAC_PaTempHmixToPosCnv_CUR' incorporates:
     *  Saturate: '<S57>/Saturation2'
     *  Sum: '<S57>/Add5'
     */
    HvacDampr_Ctrl_B.Merge_m = Ifx_IntIpoCur_u16_u16(Mfx_Min_u16((uint16)tmp_0, 1000U), (Rte_CData_HVAC_PaTempHmixToPosCnv_CUR())->N1, (Rte_CData_HVAC_PaTempHmixToPosCnv_CUR())->BP1, (Rte_CData_HVAC_PaTempHmixToPosCnv_CUR())->Table);

    /* Lookup_n-D: '<S62>/HVAC_PaTempPosToHmixCnv_CUR' */
    HvacDampr_Ctrl_B.Merge1_b = Ifx_IntIpoCur_u16_u16(HvacDampr_Ctrl_B.DataTypeConversion17, (Rte_CData_HVAC_PaTempPosToHmixCnv_CUR())->N1, (Rte_CData_HVAC_PaTempPosToHmixCnv_CUR())->BP1, (Rte_CData_HVAC_PaTempPosToHmixCnv_CUR())->Table);
    HvacDampr_Ctrl_B.Merge2_n = Rte_CData_MOTO_PA_TEMP_SPECT1_R_TURN();
    HvacDampr_Ctrl_B.Merge3_j = Rte_CData_MOTO_PA_TEMP_SPECT1_P_TURN();

    /* End of Outputs for SubSystem: '<S58>/A02_TEMP_Pos_Action ' */
    break;

   case 1:
    /* Switch: '<S57>/Switch' */
    if (tmpRead_3) {
      rtb_TmpSignalConversionAtHva_gj = rtb_Switch12_k;
    }

    /* Sum: '<S57>/Add5' incorporates:
     *  Constant: '<S57>/Constant'
     *  Gain: '<S57>/Gain1'
     */
    tmp_0 = ((sint32)(209U * rtb_TmpSignalConversionAtHva_gj) - 10240) >> 5;
    if (tmp_0 < 0) {
      tmp_0 = 0;
    }

    /* Outputs for IfAction SubSystem: '<S58>/A29_TEMP_Pos_Action' incorporates:
     *  ActionPort: '<S64>/Action Port'
     */
    /* Lookup_n-D: '<S64>/HVAC_PaTempHmixToPosCnv_CUR2' incorporates:
     *  Saturate: '<S57>/Saturation2'
     *  Sum: '<S57>/Add5'
     */
    HvacDampr_Ctrl_B.Merge_m = Ifx_IntIpoCur_u16_u16(Mfx_Min_u16((uint16)tmp_0, 1000U), (Rte_CData_HVAC_PaTempHmixToPosCnv_CUR2())->N1, (Rte_CData_HVAC_PaTempHmixToPosCnv_CUR2())->BP1, (Rte_CData_HVAC_PaTempHmixToPosCnv_CUR2())->Table);

    /* Lookup_n-D: '<S64>/HVAC_PaTempPosToHmixCnv_CUR2' */
    HvacDampr_Ctrl_B.Merge1_b = Ifx_IntIpoCur_u16_u16(HvacDampr_Ctrl_B.DataTypeConversion17, (Rte_CData_HVAC_PaTempPosToHmixCnv_CUR2())->N1, (Rte_CData_HVAC_PaTempPosToHmixCnv_CUR2())->BP1, (Rte_CData_HVAC_PaTempPosToHmixCnv_CUR2())->Table);
    HvacDampr_Ctrl_B.Merge2_n = Rte_CData_MOTO_PA_TEMP_SPECT2_R_TURN();
    HvacDampr_Ctrl_B.Merge3_j = Rte_CData_MOTO_PA_TEMP_SPECT2_P_TURN();

    /* End of Outputs for SubSystem: '<S58>/A29_TEMP_Pos_Action' */
    break;

   case 2:
    /* Switch: '<S57>/Switch' */
    if (tmpRead_3) {
      rtb_TmpSignalConversionAtHva_gj = rtb_Switch12_k;
    }

    /* Sum: '<S57>/Add5' incorporates:
     *  Constant: '<S57>/Constant'
     *  Gain: '<S57>/Gain1'
     */
    tmp_0 = ((sint32)(209U * rtb_TmpSignalConversionAtHva_gj) - 10240) >> 5;
    if (tmp_0 < 0) {
      tmp_0 = 0;
    }

    /* Outputs for IfAction SubSystem: '<S58>/A08_TEMP_Pos_Action' incorporates:
     *  ActionPort: '<S63>/Action Port'
     */
    /* Lookup_n-D: '<S63>/HVAC_PaTempHmixToPosCnv_CUR3' incorporates:
     *  Saturate: '<S57>/Saturation2'
     *  Sum: '<S57>/Add5'
     */
    HvacDampr_Ctrl_B.Merge_m = Ifx_IntIpoCur_u16_u16(Mfx_Min_u16((uint16)tmp_0, 1000U), (Rte_CData_HVAC_PaTempHmixToPosCnv_CUR3())->N1, (Rte_CData_HVAC_PaTempHmixToPosCnv_CUR3())->BP1, (Rte_CData_HVAC_PaTempHmixToPosCnv_CUR3())->Table);

    /* Lookup_n-D: '<S63>/HVAC_PaTempPosToHmixCnv_CUR3' */
    HvacDampr_Ctrl_B.Merge1_b = Ifx_IntIpoCur_u16_u16(HvacDampr_Ctrl_B.DataTypeConversion17, (Rte_CData_HVAC_PaTempPosToHmixCnv_CUR3())->N1, (Rte_CData_HVAC_PaTempPosToHmixCnv_CUR3())->BP1, (Rte_CData_HVAC_PaTempPosToHmixCnv_CUR3())->Table);
    HvacDampr_Ctrl_B.Merge2_n = Rte_CData_MOTO_PA_TEMP_SPECT3_R_TURN();
    HvacDampr_Ctrl_B.Merge3_j = Rte_CData_MOTO_PA_TEMP_SPECT3_P_TURN();

    /* End of Outputs for SubSystem: '<S58>/A08_TEMP_Pos_Action' */
    break;
  }

  /* End of SwitchCase: '<S58>/Switch Case' */

  /* Switch: '<S60>/Switch' incorporates:
   *  Constant: '<S60>/Constant49'
   *  Constant: '<S60>/Constant5'
   *  Constant: '<S60>/Constant54'
   *  RelationalOperator: '<S60>/Relational Operator2'
   *  Sum: '<S60>/Add'
   *  Sum: '<S60>/Add1'
   */
  if (HvacDampr_Ctrl_B.Merge_m < (uint16)(Rte_CData_DCMOTOR_MODE_DEFMAX_POS() - Rte_CData_DCMOTOR_MODE_POS_LIMIT())) {
    rtb_Divide = (uint16)((uint32)HvacDampr_Ctrl_B.Merge_m + Rte_CData_DCMOTOR_MODE_POS_LIMIT());
  } else {
    rtb_Divide = Rte_CData_DCMOTOR_MODE_DEFMAX_POS();
  }

  /* End of Switch: '<S60>/Switch' */

  /* Switch: '<S60>/Switch1' incorporates:
   *  Constant: '<S60>/Constant54'
   *  Constant: '<S60>/Constant55'
   *  Constant: '<S60>/Constant6'
   *  RelationalOperator: '<S60>/Relational Operator1'
   *  Sum: '<S60>/Add2'
   *  Sum: '<S60>/Add3'
   */
  if (HvacDampr_Ctrl_B.Merge_m >= (uint16)((uint32)Rte_CData_DCMOTOR_MODE_POS_LIMIT() + Rte_CData_DCMOTOR_MODE_FACEMIX_POS())) {
    rtb_Divide1 = (uint16)(HvacDampr_Ctrl_B.Merge_m - Rte_CData_DCMOTOR_MODE_FACEMIX_POS());
  } else {
    rtb_Divide1 = Rte_CData_DCMOTOR_MODE_FACEMIX_POS();
  }

  /* End of Switch: '<S60>/Switch1' */

  /* Chart: '<S60>/DC Motor State' incorporates:
   *  Constant: '<S60>/Constant3'
   *  Constant: '<S60>/Constant57'
   *  Constant: '<S60>/Constant58'
   *  Constant: '<S60>/Constant60'
   *  Constant: '<S7>/Constant5'
   */
  HvacDampr_Ctrl_DCMotorState(HvacDampr_Ctrl_B.DataTypeConversion17, HvacDampr_Ctrl_B.Merge_m, rtb_Divide, rtb_Divide1, Rte_CData_DCMOTOR_MODE_STALL_TICKS(), Rte_CData_DCMOTOR_MODE_BACK_TICKS(), Rte_CData_DCMOTOR_MODE_STOP_TICKS(), Rte_CData_MOTO_INIT_DEAL_TIME(), HvacDampr_Ctrl_B.Merge2_n, HvacDampr_Ctrl_B.Merge3_j, Rte_CData_MOTO_STOP(), &HvacDampr_Ctrl_B.LastTargetPos_n, &HvacDampr_Ctrl_B.Out_RunSts_e, &HvacDampr_Ctrl_B.Out_MotorSts_k, &HvacDampr_Ctrl_B.Moto_JAM_St_f, &HvacDampr_Ctrl_DW.sf_DCMotorState_hw);

  /* Switch: '<S60>/Switch2' incorporates:
   *  Constant: '<S7>/Constant5'
   */
  if (rtb_TmpSignalConversionAtHvac_l) {
    rtb_TmpSignalConversionAtgPRM_b = HvacDampr_Ctrl_B.Out_MotorSts_k;
  } else {
    rtb_TmpSignalConversionAtgPRM_b = Rte_CData_MOTO_STOP();
  }

  /* End of Switch: '<S60>/Switch2' */

  /* Switch: '<S59>/Switch12' incorporates:
   *  Constant: '<S59>/Constant15'
   *  Constant: '<S59>/Constant8'
   *  Sum: '<S59>/Add12'
   */
  if (Mfx_Sub_u16u16_u16(Rte_CData_CIRCUIT_SHORT_POWER_VAL(), HvacDampr_Ctrl_B.DataTypeConversion17) > 0) {
    /* Switch: '<S59>/Switch14' incorporates:
     *  Constant: '<S59>/Constant14'
     *  Constant: '<S59>/Constant16'
     *  Constant: '<S59>/Constant25'
     *  Sum: '<S59>/Add14'
     */
    if (Mfx_Sub_u16u16_u16(HvacDampr_Ctrl_B.DataTypeConversion17, Rte_CData_CIRCUIT_SHORT_GND_VAL()) > 0) {
      rtb_Switch12_k = Rte_CData_CIRCUIT_NORMAL();
    } else {
      rtb_Switch12_k = Rte_CData_CIRCUIT_SHORT_GND();
    }

    /* End of Switch: '<S59>/Switch14' */
  } else {
    rtb_Switch12_k = Rte_CData_CIRCUIT_SHORT_POWER();
  }

  /* End of Switch: '<S59>/Switch12' */

  /* Switch: '<S59>/Switch13' incorporates:
   *  Delay: '<S59>/Delay3'
   *  Sum: '<S59>/Add13'
   */
  rtb_TmpSignalConversionAtHva_gj = (uint8)((uint8)(rtb_Switch12_k - HvacDampr_Ctrl_DW.Delay3_DSTATE_i) != 0);

  /* Outputs for Enabled SubSystem: '<S59>/Enabled CompLP Fault cauculate' */
  /* Constant: '<S59>/Constant13' */
  Hva_EnabledCompLPFaultcauculate(rtb_TmpSignalConversionAtHva_gj, true, &HvacDampr_Ctrl_B.In1_a);

  /* End of Outputs for SubSystem: '<S59>/Enabled CompLP Fault cauculate' */

  /* Outputs for Enabled SubSystem: '<S59>/Enabled Subsystem' */
  /* Delay: '<S59>/Delay3' */
  HvacDampr_Ctrl_EnabledSubsystem(HvacDampr_Ctrl_B.In1_a, HvacDampr_Ctrl_DW.Delay3_DSTATE_i, rtb_TmpSignalConversionAtHva_gj, &HvacDampr_Ctrl_B.In1_o, &HvacDampr_Ctrl_DW.EnabledSubsystem_hh);

  /* End of Outputs for SubSystem: '<S59>/Enabled Subsystem' */

  /* If: '<S59>/If1' */
  if (rtb_TmpSignalConversionAtgPRM_b == 0) {
    /* Switch: '<S59>/Switch6' incorporates:
     *  Constant: '<S59>/Constant23'
     *  Constant: '<S59>/Constant24'
     *  RelationalOperator: '<S59>/RelationalOperator'
     *  Switch: '<S59>/Switch10'
     */
    if (HvacDampr_Ctrl_B.In1_o > 0) {
      rtb_Switch6 = HvacDampr_Ctrl_B.In1_o;
    } else if (HvacDampr_Ctrl_B.Moto_JAM_St_f != 1) {
      /* Switch: '<S59>/Switch9' incorporates:
       *  Constant: '<S59>/Constant10'
       *  Constant: '<S59>/Constant17'
       *  Constant: '<S59>/Constant22'
       *  Constant: '<S59>/Constant9'
       *  Logic: '<S59>/Logical Operator1'
       *  Sum: '<S59>/Add7'
       *  Sum: '<S59>/Add8'
       *  Switch: '<S59>/Switch10'
       *  Switch: '<S59>/Switch7'
       *  Switch: '<S59>/Switch8'
       */
      if ((Mfx_Sub_s32u32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL() + HvacDampr_Ctrl_B.Merge_m, HvacDampr_Ctrl_B.DataTypeConversion17) > 0) && (Mfx_Add_u32s32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL(), HvacDampr_Ctrl_B.DataTypeConversion17 - HvacDampr_Ctrl_B.Merge_m) > 0)) {
        rtb_Switch6 = Rte_CData_DCMOTOR_NORMAL();
      } else {
        rtb_Switch6 = Rte_CData_DCMOTOR_POS_UNREACHED();
      }

      /* End of Switch: '<S59>/Switch9' */
    } else {
      rtb_Switch6 = Rte_CData_DCMOTOR_JAM();
    }

    /* End of Switch: '<S59>/Switch6' */

    /* Outputs for IfAction SubSystem: '<S59>/If Action Subsystem' incorporates:
     *  ActionPort: '<S67>/Action Port'
     */
    HvacDampr_Ctr_IfActionSubsystem(rtb_Switch6, &HvacDampr_Ctrl_B.In1_h);

    /* End of Outputs for SubSystem: '<S59>/If Action Subsystem' */
  }

  /* End of If: '<S59>/If1' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant18'
   *  Constant: '<S7>/Constant20'
   *  Constant: '<S7>/Constant6'
   *  RelationalOperator: '<S7>/RelationalOperator'
   */
  if (HvacDampr_Ctrl_B.In1_h == 2) {
    tmp_2 = DEM_EVENT_STATUS_FAILED;
  } else {
    tmp_2 = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* FunctionCaller: '<S7>/DTC_PassMixDamprMotMaxErr_SetEventStatus' */
  Rte_Call_DTC_PassMixDamprMotMaxErr_SetEventStatus(tmp_2);

  /* Switch: '<S7>/Switch18' incorporates:
   *  Constant: '<S7>/Constant22'
   *  Constant: '<S7>/Constant23'
   *  Constant: '<S7>/Constant26'
   *  RelationalOperator: '<S7>/RelationalOperator1'
   */
  if (HvacDampr_Ctrl_B.In1_h == 1) {
    tmp_2 = DEM_EVENT_STATUS_FAILED;
  } else {
    tmp_2 = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S7>/Switch18' */

  /* FunctionCaller: '<S7>/DTC_PassMixDamprMotMinErr_SetEventStatus' */
  Rte_Call_DTC_PassMixDamprMotMinErr_SetEventStatus(tmp_2);

  /* Switch: '<S7>/Switch19' incorporates:
   *  Constant: '<S7>/Constant21'
   *  Constant: '<S7>/Constant24'
   *  Constant: '<S7>/Constant25'
   *  RelationalOperator: '<S7>/RelationalOperator2'
   */
  if (HvacDampr_Ctrl_B.In1_h == 3) {
    tmp_2 = DEM_EVENT_STATUS_FAILED;
  } else {
    tmp_2 = DEM_EVENT_STATUS_PASSED;
  }

  /* End of Switch: '<S7>/Switch19' */

  /* FunctionCaller: '<S7>/DTC_PassMixDamprMotStuck_SetEventStatus' */
  Rte_Call_DTC_PassMixDamprMotStuck_SetEventStatus(tmp_2);

  /* Switch: '<S60>/Switch5' incorporates:
   *  Constant: '<S7>/Constant5'
   *  Sum: '<S60>/Add5'
   */
  if ((uint8)(HvacDampr_Ctrl_B.Out_MotorSts_k - Rte_CData_MOTO_STOP()) > 0) {
    /* Outport: '<Root>/HvacDampr_stPassMixMotRunng_Val' incorporates:
     *  Constant: '<S60>/Constant8'
     *  DataTypeConversion: '<S7>/DataTypeConversion'
     */
    (void) Rte_Write_HvacDampr_stPassMixMotRunng_Val(Rte_CData_MOTO_RUNNING());
  } else {
    /* Outport: '<Root>/HvacDampr_stPassMixMotRunng_Val' incorporates:
     *  Constant: '<S60>/Constant9'
     *  DataTypeConversion: '<S7>/DataTypeConversion'
     */
    (void) Rte_Write_HvacDampr_stPassMixMotRunng_Val(Rte_CData_MOTO_STOP_RUNNING());
  }

  /* End of Switch: '<S60>/Switch5' */

  /* Outport: '<Root>/HvacDampr_stPassMixMotAct_Val' incorporates:
   *  Constant: '<S61>/Constant1'
   *  Gain: '<S61>/Gain2'
   *  Product: '<S61>/Divide'
   *  Saturate: '<S7>/Saturation3'
   *  Sum: '<S61>/Add4'
   */
  (void) Rte_Write_HvacDampr_stPassMixMotAct_Val(Mfx_Limit_u8((uint8)((51200U * HvacDampr_Ctrl_B.Merge1_b + 16384000U) / 334848U), 49U, 201U));

  /* FunctionCaller: '<S8>/IoHwAb_IoSigAdc_AdcFac_Get1' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_ReModMotorPosnFb, &rtb_IoHwAb_IoSigAdc_AdcFac_Get1);

  /* DataTypeConversion: '<S8>/DataTypeConversion14' incorporates:
   *  DataStoreWrite: '<S8>/Data Store Write12'
   */
  tmp = rtb_IoHwAb_IoSigAdc_AdcFac_Get1;
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Get1 < 0) {
    tmp = 0;
  }

  HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb = (uint16)tmp;

  /* End of DataTypeConversion: '<S8>/DataTypeConversion14' */

  /* DataStoreWrite: '<S70>/Data Store Write' incorporates:
   *  Constant: '<S70>/Constant'
   */
  HvacDampr_Ctrl_DW.MDD_PNL_VAL_c = Rte_CData_MDD_PNL_VAL();

  /* Product: '<S70>/Divide8' incorporates:
   *  Constant: '<S70>/PA_MDD_RE_ST1_POSITION_SPEC_1'
   *  Constant: '<S70>/PA_MDD_RE_ST2_POSITION_SPEC_1'
   *  Sum: '<S70>/Subtract8'
   */
  rtb_Divide7 = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_RE_ST2_POSITION_SPEC_1(), Rte_CData_MDD_RE_ST1_POSITION_SPEC_1()) >> 1);

  /* Sum: '<S70>/Add26' incorporates:
   *  Constant: '<S70>/Constant140'
   *  Constant: '<S70>/PA_MDD_RE_ST1_POSITION_SPEC_1'
   */
  rtb_Divide11 = Mfx_Sub_s32u32_u16(Rte_CData_MDD_RE_ST1_POSITION_SPEC_1() + rtb_Divide7, Rte_CData_MDD_ST_RE_DIFF_POSITION());

  /* Sum: '<S70>/Add27' incorporates:
   *  Constant: '<S70>/Constant140'
   *  Constant: '<S70>/PA_MDD_RE_ST1_POSITION_SPEC_1'
   */
  rtb_Divide2 = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_RE_ST1_POSITION_SPEC_1() + rtb_Divide7, Rte_CData_MDD_ST_RE_DIFF_POSITION());

  /* Product: '<S70>/Divide9' incorporates:
   *  Constant: '<S70>/PA_MDD_RE_ST2_POSITION_SPEC_2'
   *  Constant: '<S70>/PA_MDD_RE_ST3_POSITION_SPEC_1'
   *  Sum: '<S70>/Subtract9'
   */
  rtb_Divide7 = (uint16)((uint32)Mfx_Sub_u16u16_u16(Rte_CData_MDD_RE_ST3_POSITION_SPEC_1(), Rte_CData_MDD_RE_ST2_POSITION_SPEC_1()) >> 1);

  /* Sum: '<S70>/Add29' incorporates:
   *  Constant: '<S70>/Constant143'
   *  Constant: '<S70>/PA_MDD_RE_ST2_POSITION_SPEC_2'
   */
  rtb_Divide6 = Mfx_Add_u32u32_u16((uint32)Rte_CData_MDD_RE_ST2_POSITION_SPEC_1() + rtb_Divide7, Rte_CData_MDD_ST_RE_DIFF_POSITION());

  /* Chart: '<S70>/Re_Mode_Act_Fb1' incorporates:
   *  Constant: '<S70>/PA_MDD_RE_ST1_POSITION_SPEC_2'
   *  Constant: '<S70>/PA_MDD_RE_ST1_VAL_SPEC1'
   *  Constant: '<S70>/PA_MDD_RE_ST2_POSITION_SPEC_3'
   *  Constant: '<S70>/PA_MDD_RE_ST2_VAL_SPEC1'
   *  Constant: '<S70>/PA_MDD_RE_ST3_POSITION_SPEC_2'
   *  Constant: '<S70>/PA_MDD_RE_ST3_VAL_SPEC1'
   *  DataStoreRead: '<S8>/Data Store Read'
   *  Sum: '<S70>/Add28'
   */
  /* Gateway: HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem/Re_Mode_Act_Fb1 */
  /* During: HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem/Re_Mode_Act_Fb1 */
  if (HvacDampr_Ctrl_DW.is_active_c3_HvacDampr_Ctrl == 0U) {
    /* Entry: HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem/Re_Mode_Act_Fb1 */
    HvacDampr_Ctrl_DW.is_active_c3_HvacDampr_Ctrl = 1U;

    /* Entry Internal: HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem/Re_Mode_Act_Fb1 */
    /* Transition: '<S73>:387' */
    HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = 1;
  } else {
    switch (HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl) {
     case 1:
      /* During 'Init_Mode_Judge': '<S73>:386' */
      if (HvacDampr_Ctrl_B.u8Mode_St == Rte_CData_MDD_RE_ST1_VAL_SPEC1()) {
        /* Transition: '<S73>:411' */
        HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST1;

        /* Entry 'MODE_ST1': '<S73>:410' */
        HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST1_VAL_SPEC1();
      } else if (HvacDampr_Ctrl_B.u8Mode_St == Rte_CData_MDD_RE_ST2_VAL_SPEC1()) {
        /* Transition: '<S73>:426' */
        HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST2;

        /* Entry 'MODE_ST2': '<S73>:424' */
        HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST2_VAL_SPEC1();
      } else if (HvacDampr_Ctrl_B.u8Mode_St == Rte_CData_MDD_RE_ST3_VAL_SPEC1()) {
        /* Transition: '<S73>:439' */
        HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST3;

        /* Entry 'MODE_ST3': '<S73>:438' */
        HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST3_VAL_SPEC1();
      } else if (HvacDampr_Ctrl_B.u8Mode_St == Rte_CData_MDD_RE_ST3_VAL_SPEC1()) {
        /* Transition: '<S73>:455' */
        HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST5;

        /* Entry 'MODE_ST5': '<S73>:454' */
        HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST3_VAL_SPEC1();
      } else if (HvacDampr_Ctrl_B.u8Mode_St == Rte_CData_MDD_RE_ST3_VAL_SPEC1()) {
        /* Transition: '<S73>:449' */
        HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST4;

        /* Entry 'MODE_ST4': '<S73>:448' */
        HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST3_VAL_SPEC1();
      } else {
        /* During: HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem/Re_Mode_Act_Fb1/Init_Mode_Judge */
        /* During 'Init_Mode_Judge': '<S74>:335' */
        /* Transition: '<S74>:338' */
        if (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb > Mfx_Div_s32s32_s32(Rte_CData_MDD_RE_ST2_POSITION_SPEC_1() - Rte_CData_MDD_RE_ST1_POSITION_SPEC_1(), 2) + Rte_CData_MDD_RE_ST1_POSITION_SPEC_1()) {
          /* Transition: '<S74>:340' */
          if (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb > Mfx_Div_s32s32_s32(Rte_CData_MDD_RE_ST3_POSITION_SPEC_1() - Rte_CData_MDD_RE_ST2_POSITION_SPEC_1(), 2) + Rte_CData_MDD_RE_ST2_POSITION_SPEC_1()) {
            /* Transition: '<S74>:355' */
            if (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb > Rte_CData_MDD_RE_ST3_POSITION_SPEC_1()) {
              /* Transition: '<S74>:357' */
              /* Transition: '<S74>:365' */
              /* Transition: '<S74>:363' */
              HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST3_VAL_SPEC1();

              /* Transition: '<S74>:386' */
              /* Transition: '<S74>:387' */
            } else {
              /* Transition: '<S74>:353' */
              HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST3_VAL_SPEC1();
            }

            /* Transition: '<S74>:388' */
          } else {
            /* Transition: '<S74>:344' */
            HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST2_VAL_SPEC1();
          }

          /* Transition: '<S74>:389' */
        } else {
          /* Transition: '<S74>:342' */
          HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST1_VAL_SPEC1();
        }
      }
      break;

     case HvacDampr_Ctrl_IN_MODE_ST1:
      /* During 'MODE_ST1': '<S73>:410' */
      if (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb >= rtb_Divide2) {
        /* Transition: '<S73>:437' */
        HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST2;

        /* Entry 'MODE_ST2': '<S73>:424' */
        HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST2_VAL_SPEC1();
      }
      break;

     case HvacDampr_Ctrl_IN_MODE_ST2:
      /* During 'MODE_ST2': '<S73>:424' */
      if (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb <= rtb_Divide11) {
        /* Transition: '<S73>:436' */
        HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST1;

        /* Entry 'MODE_ST1': '<S73>:410' */
        HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST1_VAL_SPEC1();
      } else {
        if (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb >= rtb_Divide6) {
          /* Transition: '<S73>:441' */
          HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST3;

          /* Entry 'MODE_ST3': '<S73>:438' */
          HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST3_VAL_SPEC1();
        }
      }
      break;

     case HvacDampr_Ctrl_IN_MODE_ST3:
      /* Sum: '<S70>/Add28' incorporates:
       *  Constant: '<S70>/Constant143'
       *  Constant: '<S70>/PA_MDD_RE_ST2_POSITION_SPEC_2'
       */
      /* During 'MODE_ST3': '<S73>:438' */
      tmp_0 = (Rte_CData_MDD_RE_ST2_POSITION_SPEC_1() + rtb_Divide7) - Rte_CData_MDD_ST_RE_DIFF_POSITION();
      if (tmp_0 < 0) {
        tmp_0 = 0;
      } else {
        if (tmp_0 > 65535) {
          tmp_0 = 65535;
        }
      }

      if (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb <= tmp_0) {
        /* Transition: '<S73>:440' */
        HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST2;

        /* Entry 'MODE_ST2': '<S73>:424' */
        HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST2_VAL_SPEC1();
      } else {
        if (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb >= rtb_Divide6) {
          /* Transition: '<S73>:451' */
          HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST4;

          /* Entry 'MODE_ST4': '<S73>:448' */
          HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST3_VAL_SPEC1();
        }
      }
      break;

     case HvacDampr_Ctrl_IN_MODE_ST4:
      /* During 'MODE_ST4': '<S73>:448' */
      if (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb <= rtb_Divide6) {
        /* Transition: '<S73>:450' */
        HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST3;

        /* Entry 'MODE_ST3': '<S73>:438' */
        HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST3_VAL_SPEC1();
      } else {
        if (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb >= rtb_Divide6) {
          /* Transition: '<S73>:453' */
          HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST5;

          /* Entry 'MODE_ST5': '<S73>:454' */
          HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST3_VAL_SPEC1();
        }
      }
      break;

     default:
      /* During 'MODE_ST5': '<S73>:454' */
      if (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb <= rtb_Divide6) {
        /* Transition: '<S73>:452' */
        HvacDampr_Ctrl_DW.is_c3_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_MODE_ST4;

        /* Entry 'MODE_ST4': '<S73>:448' */
        HvacDampr_Ctrl_B.u8Mode_St = Rte_CData_MDD_RE_ST3_VAL_SPEC1();
      }
      break;
    }
  }

  /* End of Chart: '<S70>/Re_Mode_Act_Fb1' */

  /* DataStoreWrite: '<S8>/Data Store Write18' incorporates:
   *  Inport: '<Root>/HvacDampr_stReqReMotMot_Val'
   */
  Rte_Read_HvacDampr_stReqReMotMot_Val(&HvacDampr_Ctrl_DW.HvacDampr_stReqReModMot);

  /* DataStoreWrite: '<S8>/Data Store Write30' incorporates:
   *  Inport: '<Root>/HvacDampr_bReqVldReMotMot_Val'
   */
  Rte_Read_HvacDampr_bReqVldReMotMot_Val(&HvacDampr_Ctrl_DW.HvacDampr_bReqVldReModMot);

  /* SignalConversion generated from: '<S1>/gPRM_u8ReAirConditionBoxSpecCfg_Val_read' incorporates:
   *  Inport: '<Root>/gPRM_u8ReAirConditionBoxSpecCfg_Val'
   */
  Rte_Read_gPRM_u8ReAirConditionBoxSpecCfg_Val(&rtb_TmpSignalConversionAtgPRM_d);

  /* Logic: '<S8>/Logical Operator' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Constant: '<S8>/Constant2'
   *  Constant: '<S8>/XH2_AirBoxCfgVal1'
   *  Logic: '<S8>/Logical Operator1'
   *  RelationalOperator: '<S8>/Relational Operator'
   *  RelationalOperator: '<S8>/Relational Operator1'
   *  RelationalOperator: '<S8>/Relational Operator2'
   *  RelationalOperator: '<S8>/Relational Operator3'
   */
  rtb_LogicalOperator_a = ((rtb_TmpSignalConversionAtgPRM_u == 1) || (rtb_TmpSignalConversionAtgPRM_u == 2) || (rtb_TmpSignalConversionAtgPRM_u == 3) || (rtb_TmpSignalConversionAtgPRM_d == Rte_CData_PRM_A08_CFG_SPEC_VAL()));

  /* MultiPortSwitch: '<S8>/Mode_St Switch' incorporates:
   *  Constant: '<S70>/PA_MDD_RE_FLR_POSITION_SPEC_1'
   *  Constant: '<S70>/PA_MDD_RE_PNLFLR_POSITION_SPEC_1'
   *  Constant: '<S70>/PA_MDD_RE_PNL_POSITION_SPEC_1'
   *  DataStoreRead: '<S8>/Data Store Read1'
   *  Delay: '<S8>/Delay'
   */
  switch (HvacDampr_Ctrl_DW.HvacDampr_stReqReModMot) {
   case 1:
    rtb_Divide7 = Rte_CData_MDD_RE_PNL_POSITION_SPEC_1();
    break;

   case 2:
    rtb_Divide7 = Rte_CData_MDD_RE_PNLFLR_POSITION_SPEC_1();
    break;

   case 3:
    rtb_Divide7 = Rte_CData_MDD_RE_FLR_POSITION_SPEC_1();
    break;

   case 4:
    rtb_Divide7 = Rte_CData_MDD_RE_FLR_POSITION_SPEC_1();
    break;

   case 5:
    rtb_Divide7 = Rte_CData_MDD_RE_FLR_POSITION_SPEC_1();
    break;

   default:
    rtb_Divide7 = HvacDampr_Ctrl_DW.Delay_DSTATE_k;
    break;
  }

  /* End of MultiPortSwitch: '<S8>/Mode_St Switch' */

  /* Switch: '<S71>/Switch12' incorporates:
   *  Constant: '<S71>/Constant15'
   *  Constant: '<S71>/Constant8'
   *  DataStoreRead: '<S8>/Data Store Read'
   *  Sum: '<S71>/Add12'
   */
  if (Mfx_Sub_u16u16_u16(Rte_CData_CIRCUIT_SHORT_POWER_VAL(), HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb) > 0) {
    /* Switch: '<S71>/Switch14' incorporates:
     *  Constant: '<S71>/Constant14'
     *  Constant: '<S71>/Constant16'
     *  Constant: '<S71>/Constant25'
     *  Sum: '<S71>/Add14'
     */
    if (Mfx_Sub_u16u16_u16(HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb, Rte_CData_CIRCUIT_SHORT_GND_VAL()) > 0) {
      rtb_TmpSignalConversionAtHva_gj = Rte_CData_CIRCUIT_NORMAL();
    } else {
      rtb_TmpSignalConversionAtHva_gj = Rte_CData_CIRCUIT_SHORT_GND();
    }

    /* End of Switch: '<S71>/Switch14' */
  } else {
    rtb_TmpSignalConversionAtHva_gj = Rte_CData_CIRCUIT_SHORT_POWER();
  }

  /* End of Switch: '<S71>/Switch12' */

  /* Switch: '<S71>/Switch13' incorporates:
   *  Delay: '<S71>/Delay3'
   *  Sum: '<S71>/Add13'
   */
  rtb_Switch2_p = (uint8)((uint8)(rtb_TmpSignalConversionAtHva_gj - HvacDampr_Ctrl_DW.Delay3_DSTATE_g) != 0);

  /* Outputs for Enabled SubSystem: '<S71>/Enabled CompLP Fault cauculate' */
  /* Constant: '<S71>/Constant13' */
  Hva_EnabledCompLPFaultcauculate(rtb_Switch2_p, true, &HvacDampr_Ctrl_B.In1_eo);

  /* End of Outputs for SubSystem: '<S71>/Enabled CompLP Fault cauculate' */

  /* Outputs for Enabled SubSystem: '<S71>/Enabled Subsystem' */
  /* Delay: '<S71>/Delay3' */
  HvacDampr_Ctrl_EnabledSubsystem(HvacDampr_Ctrl_B.In1_eo, HvacDampr_Ctrl_DW.Delay3_DSTATE_g, rtb_Switch2_p, &HvacDampr_Ctrl_B.In1_l, &HvacDampr_Ctrl_DW.EnabledSubsystem_b);

  /* End of Outputs for SubSystem: '<S71>/Enabled Subsystem' */

  /* Chart: '<S72>/DC Motor State' incorporates:
   *  Constant: '<S70>/PA_MOTO_REMODE_SPECT1_P_TURN'
   *  Constant: '<S70>/PA_MOTO_REMODE_SPECT1_R_TURN'
   *  Constant: '<S72>/Constant3'
   *  Constant: '<S72>/Constant58'
   *  Constant: '<S8>/Constant11'
   *  DataStoreRead: '<S8>/Data Store Read'
   */
  /* Gateway: HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem2/DC Motor State */
  if (HvacDampr_Ctrl_DW.temporalCounter_i1 < 65535U) {
    HvacDampr_Ctrl_DW.temporalCounter_i1++;
  }

  /* During: HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem2/DC Motor State */
  if (HvacDampr_Ctrl_DW.is_active_c11_HvacDampr_Ctrl == 0U) {
    /* Entry: HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem2/DC Motor State */
    HvacDampr_Ctrl_DW.is_active_c11_HvacDampr_Ctrl = 1U;

    /* Entry Internal: HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem2/DC Motor State */
    /* Transition: '<S79>:199' */
    HvacDampr_Ctrl_DW.is_c11_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Delay_h;
    HvacDampr_Ctrl_DW.temporalCounter_i1 = 0U;
  } else {
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    guard5 = false;
    guard6 = false;
    guard7 = false;
    guard8 = false;
    switch (HvacDampr_Ctrl_DW.is_c11_HvacDampr_Ctrl) {
     case HvacDampr_Ctrl_IN_Delay_h:
      /* During 'Delay': '<S79>:197' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1 >= Rte_CData_MOTO_INIT_DEAL_TIME()) {
        /* Transition: '<S79>:200' */
        HvacDampr_Ctrl_DW.is_c11_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o5;
      } else {
        /* Transition: '<S79>:190' */
        HvacDampr_Ctrl_B.LastTargetPos_j = HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts0_o5:
      /* During 'Sts0': '<S79>:1' */
      switch (HvacDampr_Ctrl_B.Out_RunSts_j) {
       case 1:
        /* Transition: '<S79>:19' */
        HvacDampr_Ctrl_DW.is_c11_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts1_j;
        HvacDampr_Ctrl_DW.temporalCounter_i1 = 0U;
        break;

       case 5:
        /* Transition: '<S79>:66' */
        HvacDampr_Ctrl_DW.is_c11_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts5_j;
        HvacDampr_Ctrl_DW.temporalCounter_i1 = 0U;
        break;

       default:
        /* Transition: '<S79>:25' */
        if ((rtb_Divide7 > HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb + Rte_CData_DCMOTOR_MODE_POS_DIFF()) || (rtb_Divide7 + Rte_CData_DCMOTOR_MODE_POS_DIFF() < HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb)) {
          /* Transition: '<S79>:28' */
          /* Transition: '<S79>:32' */
          HvacDampr_Ctrl_DW.RefreshTargetPos = rtb_Divide7;

          /* Transition: '<S79>:35' */
        } else {
          /* Transition: '<S79>:34' */
        }

        /* Transition: '<S79>:46' */
        if (HvacDampr_Ctrl_DW.RefreshTargetPos > HvacDampr_Ctrl_B.LastTargetPos_j) {
          /* Transition: '<S79>:48' */
          /* Transition: '<S79>:50' */
          HvacDampr_Ctrl_B.Out_RunSts_j = 1U;
          HvacDampr_Ctrl_B.LastTargetPos_j = HvacDampr_Ctrl_DW.RefreshTargetPos;
          HvacDampr_Ctrl_B.Out_MotorSts_i = Rte_CData_MOTO_REMODE_SPECT1_P_TURN();
          HvacDampr_Ctrl_B.Moto_JAM_St_i = 0U;

          /* Transition: '<S79>:62' */
          /* Transition: '<S79>:63' */
        } else {
          /* Transition: '<S79>:53' */
          if (HvacDampr_Ctrl_DW.RefreshTargetPos < HvacDampr_Ctrl_B.LastTargetPos_j) {
            /* Transition: '<S79>:54' */
            /* Transition: '<S79>:56' */
            HvacDampr_Ctrl_B.Out_RunSts_j = 5U;
            HvacDampr_Ctrl_B.LastTargetPos_j = HvacDampr_Ctrl_DW.RefreshTargetPos;

            /* RefreshTargetPos = LastTargetPos ; */
            HvacDampr_Ctrl_B.Out_MotorSts_i = Rte_CData_MOTO_REMODE_SPECT1_R_TURN();
            HvacDampr_Ctrl_B.Moto_JAM_St_i = 0U;

            /* Transition: '<S79>:63' */
          } else {
            /* Transition: '<S79>:58' */
          }
        }
        break;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts1_j:
      /* During 'Sts1': '<S79>:2' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1 >= Rte_CData_DCMOTOR_MODE_STOP_TICKS()) {
        /* Transition: '<S79>:116' */
        if (HvacDampr_Ctrl_B.Out_RunSts_j == 2) {
          /* Transition: '<S79>:158' */
          guard2 = true;
        } else if (HvacDampr_Ctrl_B.Out_RunSts_j == 4) {
          /* Transition: '<S79>:159' */
          guard3 = true;
        } else {
          guard7 = true;
        }
      } else {
        guard7 = true;
      }
      break;

     case HvacDampr_Ctrl_IN_Sts2_b:
      /* During 'Sts2': '<S79>:4' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1 >= Rte_CData_DCMOTOR_MODE_BACK_TICKS()) {
        /* Transition: '<S79>:121' */
        HvacDampr_Ctrl_DW.is_c11_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts3_e;

        /* Entry 'Sts3': '<S79>:119' */
        HvacDampr_Ctrl_B.Out_RunSts_j = 0U;
        HvacDampr_Ctrl_B.Out_MotorSts_i = Rte_CData_MOTO_STOP();
      }
      break;

     case HvacDampr_Ctrl_IN_Sts3_e:
      /* During 'Sts3': '<S79>:119' */
      /* Transition: '<S79>:189' */
      HvacDampr_Ctrl_B.Out_RunSts_j = 0U;
      HvacDampr_Ctrl_B.Out_MotorSts_i = 0U;
      HvacDampr_Ctrl_B.LastTargetPos_j = HvacDampr_Ctrl_DW.RefreshTargetPos;
      HvacDampr_Ctrl_DW.is_c11_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o5;
      break;

     case HvacDampr_Ctrl_IN_Sts5_j:
      /* During 'Sts5': '<S79>:3' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1 >= Rte_CData_DCMOTOR_MODE_STOP_TICKS()) {
        /* Transition: '<S79>:161' */
        if (HvacDampr_Ctrl_B.Out_RunSts_j == 6) {
          /* Transition: '<S79>:162' */
          guard5 = true;
        } else if (HvacDampr_Ctrl_B.Out_RunSts_j == 7) {
          /* Transition: '<S79>:163' */
          guard6 = true;
        } else {
          guard8 = true;
        }
      } else {
        guard8 = true;
      }
      break;

     default:
      /* During 'Sts6': '<S79>:6' */
      if (HvacDampr_Ctrl_DW.temporalCounter_i1 >= Rte_CData_DCMOTOR_MODE_BACK_TICKS()) {
        /* Transition: '<S79>:165' */
        HvacDampr_Ctrl_DW.is_c11_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts3_e;

        /* Entry 'Sts3': '<S79>:119' */
        HvacDampr_Ctrl_B.Out_RunSts_j = 0U;
        HvacDampr_Ctrl_B.Out_MotorSts_i = Rte_CData_MOTO_STOP();
      }
      break;
    }

    if (guard8) {
      if (HvacDampr_Ctrl_DW.temporalCounter_i1 >= Rte_CData_DCMOTOR_MODE_STALL_TICKS()) {
        /* Transition: '<S79>:192' */
        /* Transition: '<S79>:193' */
        HvacDampr_Ctrl_B.Out_RunSts_j = 6U;
        HvacDampr_Ctrl_B.Moto_JAM_St_i = 1U;
        if (HvacDampr_Ctrl_B.Out_RunSts_j == 6) {
          /* Transition: '<S79>:162' */
          guard5 = true;
        } else if (HvacDampr_Ctrl_B.Out_RunSts_j == 7) {
          /* Transition: '<S79>:163' */
          guard6 = true;
        } else {
          guard4 = true;
        }
      } else {
        guard4 = true;
      }
    }

    if (guard7) {
      if (HvacDampr_Ctrl_DW.temporalCounter_i1 >= Rte_CData_DCMOTOR_MODE_STALL_TICKS()) {
        /* Transition: '<S79>:187' */
        /* Transition: '<S79>:188' */
        HvacDampr_Ctrl_B.Out_RunSts_j = 2U;
        HvacDampr_Ctrl_B.Moto_JAM_St_i = 1U;
        if (HvacDampr_Ctrl_B.Out_RunSts_j == 2) {
          /* Transition: '<S79>:158' */
          guard2 = true;
        } else if (HvacDampr_Ctrl_B.Out_RunSts_j == 4) {
          /* Transition: '<S79>:159' */
          guard3 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    }

    if (guard6) {
      /* Transition: '<S79>:175' */
      HvacDampr_Ctrl_B.Out_RunSts_j = 0U;
      HvacDampr_Ctrl_B.LastTargetPos_j = HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb;

      /* Transition: '<S79>:167' */
      HvacDampr_Ctrl_DW.is_c11_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o5;
    }

    if (guard5) {
      HvacDampr_Ctrl_DW.is_c11_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts6_l;
      HvacDampr_Ctrl_DW.temporalCounter_i1 = 0U;

      /* Entry 'Sts6': '<S79>:6' */
      HvacDampr_Ctrl_B.Out_RunSts_j = 3U;
      HvacDampr_Ctrl_B.Out_MotorSts_i = Rte_CData_MOTO_REMODE_SPECT1_P_TURN();
    }

    if (guard4) {
      /* Switch: '<S72>/Switch1' incorporates:
       *  Constant: '<S72>/Constant54'
       *  Constant: '<S72>/Constant55'
       *  Constant: '<S72>/Constant6'
       *  RelationalOperator: '<S72>/Relational Operator1'
       *  Sum: '<S72>/Add2'
       *  Sum: '<S72>/Add3'
       */
      /* Transition: '<S79>:143' */
      if (rtb_Divide7 >= (uint16)((uint32)Rte_CData_DCMOTOR_MODE_POS_LIMIT() + Rte_CData_DCMOTOR_MODE_FACEMIX_POS())) {
        rtb_Divide = (uint16)(rtb_Divide7 - Rte_CData_DCMOTOR_MODE_FACEMIX_POS());
      } else {
        rtb_Divide = Rte_CData_DCMOTOR_MODE_FACEMIX_POS();
      }

      /* End of Switch: '<S72>/Switch1' */
      if (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb < rtb_Divide) {
        /* Transition: '<S79>:144' */
        /* Transition: '<S79>:124' */
        HvacDampr_Ctrl_B.Out_RunSts_j = 0U;
        HvacDampr_Ctrl_B.LastTargetPos_j = HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb;
        HvacDampr_Ctrl_B.Out_MotorSts_i = Rte_CData_MOTO_STOP();

        /* Transition: '<S79>:151' */
        /* Transition: '<S79>:152' */
        /* Transition: '<S79>:153' */
        /* Transition: '<S79>:154' */
      } else {
        /* Transition: '<S79>:126' */
        if (rtb_Divide7 < HvacDampr_Ctrl_DW.RefreshTargetPos) {
          /* Transition: '<S79>:131' */
          /* Transition: '<S79>:136' */
          HvacDampr_Ctrl_B.Out_RunSts_j = 0U;

          /* Transition: '<S79>:152' */
          /* Transition: '<S79>:153' */
          /* Transition: '<S79>:154' */
        } else {
          /* Transition: '<S79>:129' */
          if (rtb_Divide7 > HvacDampr_Ctrl_DW.RefreshTargetPos) {
            /* Transition: '<S79>:130' */
            /* Transition: '<S79>:134' */
            HvacDampr_Ctrl_B.Out_RunSts_j = 7U;
            HvacDampr_Ctrl_B.Out_MotorSts_i = Rte_CData_MOTO_STOP();

            /* Transition: '<S79>:153' */
            /* Transition: '<S79>:154' */
          } else {
            /* Transition: '<S79>:138' */
            if ((HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb >= HvacDampr_Ctrl_DW.RefreshTargetPos - 20) && (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb <= HvacDampr_Ctrl_DW.RefreshTargetPos + 20)) {
              /* Transition: '<S79>:135' */
              /* Transition: '<S79>:148' */
              HvacDampr_Ctrl_B.Out_RunSts_j = 6U;
              HvacDampr_Ctrl_B.Out_MotorSts_i = Rte_CData_MOTO_STOP();

              /* Transition: '<S79>:154' */
            } else {
              /* Transition: '<S79>:150' */
            }
          }
        }
      }
    }

    if (guard3) {
      /* Transition: '<S79>:173' */
      HvacDampr_Ctrl_B.Out_RunSts_j = 0U;
      HvacDampr_Ctrl_B.LastTargetPos_j = HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb;

      /* Transition: '<S79>:178' */
      HvacDampr_Ctrl_DW.is_c11_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts0_o5;
    }

    if (guard2) {
      HvacDampr_Ctrl_DW.is_c11_HvacDampr_Ctrl = HvacDampr_Ctrl_IN_Sts2_b;
      HvacDampr_Ctrl_DW.temporalCounter_i1 = 0U;

      /* Entry 'Sts2': '<S79>:4' */
      HvacDampr_Ctrl_B.Out_RunSts_j = 3U;
      HvacDampr_Ctrl_B.Out_MotorSts_i = Rte_CData_MOTO_REMODE_SPECT1_R_TURN();
    }

    if (guard1) {
      /* Switch: '<S72>/Switch' incorporates:
       *  Constant: '<S72>/Constant49'
       *  Constant: '<S72>/Constant5'
       *  Constant: '<S72>/Constant54'
       *  RelationalOperator: '<S72>/Relational Operator2'
       *  Sum: '<S72>/Add'
       *  Sum: '<S72>/Add1'
       */
      /* Transition: '<S79>:69' */
      if (rtb_Divide7 < (uint16)(Rte_CData_DCMOTOR_MODE_DEFMAX_POS() - Rte_CData_DCMOTOR_MODE_POS_LIMIT())) {
        rtb_Divide = (uint16)((uint32)rtb_Divide7 + Rte_CData_DCMOTOR_MODE_POS_LIMIT());
      } else {
        rtb_Divide = Rte_CData_DCMOTOR_MODE_DEFMAX_POS();
      }

      /* End of Switch: '<S72>/Switch' */
      if (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb > rtb_Divide) {
        /* Transition: '<S79>:71' */
        /* Transition: '<S79>:72' */
        HvacDampr_Ctrl_B.Out_RunSts_j = 0U;
        HvacDampr_Ctrl_B.LastTargetPos_j = HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb;
        HvacDampr_Ctrl_B.Out_MotorSts_i = Rte_CData_MOTO_STOP();

        /* Transition: '<S79>:112' */
        /* Transition: '<S79>:113' */
        /* Transition: '<S79>:114' */
        /* Transition: '<S79>:115' */
      } else {
        /* Transition: '<S79>:76' */
        if (rtb_Divide7 > HvacDampr_Ctrl_DW.RefreshTargetPos) {
          /* Transition: '<S79>:78' */
          /* Transition: '<S79>:80' */
          HvacDampr_Ctrl_B.Out_RunSts_j = 0U;

          /* Transition: '<S79>:113' */
          /* Transition: '<S79>:114' */
          /* Transition: '<S79>:115' */
        } else {
          /* Transition: '<S79>:82' */
          if (rtb_Divide7 < HvacDampr_Ctrl_DW.RefreshTargetPos) {
            /* Transition: '<S79>:84' */
            /* Transition: '<S79>:86' */
            HvacDampr_Ctrl_B.Out_RunSts_j = 4U;
            HvacDampr_Ctrl_B.Out_MotorSts_i = Rte_CData_MOTO_STOP();

            /* Transition: '<S79>:114' */
            /* Transition: '<S79>:115' */
          } else {
            /* Transition: '<S79>:88' */
            if ((HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb >= HvacDampr_Ctrl_DW.RefreshTargetPos - 20) && (HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb <= HvacDampr_Ctrl_DW.RefreshTargetPos + 20)) {
              /* Transition: '<S79>:90' */
              /* Transition: '<S79>:92' */
              HvacDampr_Ctrl_B.Out_RunSts_j = 2U;
              HvacDampr_Ctrl_B.Out_MotorSts_i = Rte_CData_MOTO_STOP();

              /* Transition: '<S79>:115' */
            } else {
              /* Transition: '<S79>:185' */
            }
          }
        }
      }
    }
  }

  /* End of Chart: '<S72>/DC Motor State' */

  /* Switch: '<S72>/Switch2' incorporates:
   *  Constant: '<S8>/Constant11'
   *  DataStoreRead: '<S8>/Data Store Read6'
   */
  if (HvacDampr_Ctrl_DW.HvacDampr_bReqVldReModMot) {
    rtb_Switch2_p = HvacDampr_Ctrl_B.Out_MotorSts_i;
  } else {
    rtb_Switch2_p = Rte_CData_MOTO_STOP();
  }

  /* End of Switch: '<S72>/Switch2' */

  /* If: '<S71>/If1' */
  if (rtb_Switch2_p == 0) {
    /* Switch: '<S71>/Switch6' incorporates:
     *  Constant: '<S71>/Constant23'
     *  Constant: '<S71>/Constant24'
     *  RelationalOperator: '<S71>/RelationalOperator'
     *  Switch: '<S71>/Switch10'
     */
    if (HvacDampr_Ctrl_B.In1_l > 0) {
      rtb_Switch6 = HvacDampr_Ctrl_B.In1_l;
    } else if (HvacDampr_Ctrl_B.Moto_JAM_St_i != 1) {
      /* Switch: '<S71>/Switch9' incorporates:
       *  Constant: '<S71>/Constant10'
       *  Constant: '<S71>/Constant17'
       *  Constant: '<S71>/Constant22'
       *  Constant: '<S71>/Constant9'
       *  DataStoreRead: '<S8>/Data Store Read'
       *  Logic: '<S71>/Logical Operator1'
       *  Sum: '<S71>/Add7'
       *  Sum: '<S71>/Add8'
       *  Switch: '<S71>/Switch10'
       *  Switch: '<S71>/Switch7'
       *  Switch: '<S71>/Switch8'
       */
      if ((Mfx_Sub_s32u32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL() + rtb_Divide7, HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb) > 0) && (Mfx_Add_u32s32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL(), HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb - rtb_Divide7) > 0)) {
        rtb_Switch6 = Rte_CData_DCMOTOR_NORMAL();
      } else {
        rtb_Switch6 = Rte_CData_DCMOTOR_POS_UNREACHED();
      }

      /* End of Switch: '<S71>/Switch9' */
    } else {
      rtb_Switch6 = Rte_CData_DCMOTOR_JAM();
    }

    /* End of Switch: '<S71>/Switch6' */

    /* Outputs for IfAction SubSystem: '<S71>/If Action Subsystem' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    HvacDampr_Ctr_IfActionSubsystem(rtb_Switch6, &HvacDampr_Ctrl_B.In1_e);

    /* End of Outputs for SubSystem: '<S71>/If Action Subsystem' */
  }

  /* End of If: '<S71>/If1' */

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant4'
   */
  if (rtb_LogicalOperator_a) {
    rtb_Switch13_b = HvacDampr_Ctrl_B.u8Mode_St;
  } else {
    rtb_Switch13_b = 0U;
  }

  /* Outport: '<Root>/HvacDampr_stReModMotAct_Val' incorporates:
   *  Switch: '<S8>/Switch1'
   */
  (void) Rte_Write_HvacDampr_stReModMotAct_Val(rtb_Switch13_b);

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S8>/Constant5'
   */
  if (rtb_LogicalOperator_a) {
    rtb_Switch13_b = HvacDampr_Ctrl_B.In1_e;
  } else {
    rtb_Switch13_b = 0U;
  }

  /* Outport: '<Root>/HvacDampr_stReModMotFlt_Val' incorporates:
   *  Switch: '<S8>/Switch2'
   */
  (void) Rte_Write_HvacDampr_stReModMotFlt_Val(rtb_Switch13_b);

  /* Switch: '<S8>/Switch3' incorporates:
   *  Constant: '<S8>/Constant6'
   */
  if (!rtb_LogicalOperator_a) {
    rtb_Switch2_p = 0U;
  }

  /* Outport: '<Root>/HvacDampr_stReModMotDir_Val' incorporates:
   *  Switch: '<S8>/Switch3'
   */
  (void) Rte_Write_HvacDampr_stReModMotDir_Val(rtb_Switch2_p);

  /* Switch: '<S8>/Switch4' incorporates:
   *  Constant: '<S8>/Constant8'
   *  DataStoreWrite: '<S8>/Data Store Write12'
   *  Switch: '<S8>/Switch5'
   */
  if (rtb_LogicalOperator_a) {
    /* Switch: '<S72>/Switch5' incorporates:
     *  Constant: '<S8>/Constant11'
     *  Sum: '<S72>/Add5'
     */
    if ((uint8)(HvacDampr_Ctrl_B.Out_MotorSts_i - Rte_CData_MOTO_STOP()) > 0) {
      /* Outport: '<Root>/HvacDampr_stReModMotRunng_Val' incorporates:
       *  Constant: '<S72>/Constant8'
       */
      (void) Rte_Write_HvacDampr_stReModMotRunng_Val(Rte_CData_MOTO_RUNNING());
    } else {
      /* Outport: '<Root>/HvacDampr_stReModMotRunng_Val' incorporates:
       *  Constant: '<S72>/Constant9'
       */
      (void) Rte_Write_HvacDampr_stReModMotRunng_Val(Rte_CData_MOTO_STOP_RUNNING());
    }

    /* End of Switch: '<S72>/Switch5' */
    rtb_Divide = HvacDampr_Ctrl_DW.HvacDampr_uReModMotFb;
  } else {
    /* Outport: '<Root>/HvacDampr_stReModMotRunng_Val' incorporates:
     *  Constant: '<S8>/Constant7'
     */
    (void) Rte_Write_HvacDampr_stReModMotRunng_Val(0U);
    rtb_Divide = 0U;
  }

  /* End of Switch: '<S8>/Switch4' */

  /* Outport: '<Root>/HvacDampr_uReModMotFb_Val' incorporates:
   *  Switch: '<S8>/Switch5'
   */
  (void) Rte_Write_HvacDampr_uReModMotFb_Val(rtb_Divide);

  /* FunctionCaller: '<S9>/IoHwAb_IoSigAdc_AdcFac_Get17' */
  Rte_Call_IoHwAb_IoSigAdc_AdcFac_Get(I_A_ReTempMotorPosnFb, &rtb_IoHwAb_IoSigAdc_AdcFac_Get1);

  /* DataTypeConversion: '<S9>/DataTypeConversion17' incorporates:
   *  DataStoreWrite: '<S9>/Data Store Write11'
   */
  if (rtb_IoHwAb_IoSigAdc_AdcFac_Get1 < 0) {
    rtb_IoHwAb_IoSigAdc_AdcFac_Get1 = 0;
  }

  HvacDampr_Ctrl_DW.HvacDampr_uReMixMotFb = (uint16)rtb_IoHwAb_IoSigAdc_AdcFac_Get1;

  /* End of DataTypeConversion: '<S9>/DataTypeConversion17' */

  /* SignalConversion generated from: '<S1>/HvacDampr_stReqReMixMot_Val_read' incorporates:
   *  Inport: '<Root>/HvacDampr_stReqReMixMot_Val'
   */
  Rte_Read_HvacDampr_stReqReMixMot_Val(&rtb_TmpSignalConversionAtHvac_e);

  /* DataStoreWrite: '<S9>/Data Store Write21' */
  HvacDampr_Ctrl_DW.HvacDampr_stReqReMixMot = rtb_TmpSignalConversionAtHvac_e;

  /* SignalConversion generated from: '<S1>/HvacDampr_bReqVldReMixMot_Val_read' incorporates:
   *  Inport: '<Root>/HvacDampr_bReqVldReMixMot_Val'
   */
  Rte_Read_HvacDampr_bReqVldReMixMot_Val(&rtb_TmpSignalConversionAtHva_ca);

  /* DataStoreWrite: '<S9>/Data Store Write32' */
  HvacDampr_Ctrl_DW.HvacDampr_bReqVldReMixMot = rtb_TmpSignalConversionAtHva_ca;

  /* Logic: '<S9>/Logical Operator' incorporates:
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant1'
   *  Constant: '<S9>/Constant2'
   *  Constant: '<S9>/XH2_AirBoxCfgVal1'
   *  Logic: '<S9>/Logical Operator1'
   *  RelationalOperator: '<S9>/Relational Operator1'
   *  RelationalOperator: '<S9>/Relational Operator2'
   *  RelationalOperator: '<S9>/Relational Operator3'
   *  RelationalOperator: '<S9>/Relational Operator4'
   */
  rtb_LogicalOperator_a = ((rtb_TmpSignalConversionAtgPRM_u == 1) || (rtb_TmpSignalConversionAtgPRM_u == 2) || (rtb_TmpSignalConversionAtgPRM_u == 3) || (rtb_TmpSignalConversionAtgPRM_d == Rte_CData_PRM_A08_CFG_SPEC_VAL()));

  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S9>/Constant3'
   */
  if (rtb_LogicalOperator_a) {
    rtb_TmpSignalConversionAtgPRM_d = 2U;
  }

  /* End of Switch: '<S9>/Switch' */

  /* SwitchCase: '<S81>/Switch Case' incorporates:
   *  Constant: '<S81>/PA_MOTO_RE_TEMP_SPECT1_P_TURN'
   *  Constant: '<S81>/PA_MOTO_RE_TEMP_SPECT1_R_TURN'
   *  Constant: '<S81>/PA_MOTO_RE_TEMP_SPECT2_P_TURN'
   *  Constant: '<S81>/PA_MOTO_RE_TEMP_SPECT2_R_TURN'
   *  Constant: '<S81>/PA_MOTO_RE_TEMP_SPECT3_P_TURN'
   *  Constant: '<S81>/PA_MOTO_RE_TEMP_SPECT3_R_TURN'
   *  Inport: '<S85>/u8Temp_P_TURN_In'
   *  Inport: '<S85>/u8Temp_R_TURN_In'
   *  Inport: '<S86>/u8Temp_P_TURN_In'
   *  Inport: '<S86>/u8Temp_R_TURN_In'
   *  Inport: '<S87>/u8Temp_P_TURN_In'
   *  Inport: '<S87>/u8Temp_R_TURN_In'
   */
  switch (rtb_TmpSignalConversionAtgPRM_d) {
   case 0:
    /* Sum: '<S80>/Add5' incorporates:
     *  Constant: '<S80>/Constant'
     *  Gain: '<S80>/Gain1'
     */
    tmp_0 = ((sint32)(209U * rtb_TmpSignalConversionAtHvac_e) - 10240) >> 5;
    if (tmp_0 < 0) {
      tmp_0 = 0;
    }

    /* Outputs for IfAction SubSystem: '<S81>/A02_TEMP_Pos_Action ' incorporates:
     *  ActionPort: '<S85>/Action Port'
     */
    /* Lookup_n-D: '<S85>/PA_HvacDampr_ReTempHmixToPosCnv_CUR' incorporates:
     *  Saturate: '<S80>/Saturation2'
     *  Sum: '<S80>/Add5'
     */
    HvacDampr_Ctrl_B.Merge_f = Ifx_IntIpoCur_u16_u16(Mfx_Min_u16((uint16)tmp_0, 1000U), (Rte_CData_HvacDampr_ReTempHmixToPosCnv_CUR())->N1, (Rte_CData_HvacDampr_ReTempHmixToPosCnv_CUR())->BP1, (Rte_CData_HvacDampr_ReTempHmixToPosCnv_CUR())->Table);

    /* Lookup_n-D: '<S85>/PA_HvacDampr_ReTempPosToHmixCnv_CUR' incorporates:
     *  DataStoreWrite: '<S9>/Data Store Write11'
     */
    HvacDampr_Ctrl_B.Merge1_c = Ifx_IntIpoCur_u16_u16(HvacDampr_Ctrl_DW.HvacDampr_uReMixMotFb, (Rte_CData_HvacDampr_ReTempPosToHmixCnv_CUR())->N1, (Rte_CData_HvacDampr_ReTempPosToHmixCnv_CUR())->BP1, (Rte_CData_HvacDampr_ReTempPosToHmixCnv_CUR())->Table);
    HvacDampr_Ctrl_B.Merge2_o = Rte_CData_MOTO_RE_TEMP_SPECT1_R_TURN();
    HvacDampr_Ctrl_B.Merge3_b = Rte_CData_MOTO_RE_TEMP_SPECT1_P_TURN();

    /* End of Outputs for SubSystem: '<S81>/A02_TEMP_Pos_Action ' */
    break;

   case 1:
    /* Sum: '<S80>/Add5' incorporates:
     *  Constant: '<S80>/Constant'
     *  Gain: '<S80>/Gain1'
     */
    tmp_0 = ((sint32)(209U * rtb_TmpSignalConversionAtHvac_e) - 10240) >> 5;
    if (tmp_0 < 0) {
      tmp_0 = 0;
    }

    /* Outputs for IfAction SubSystem: '<S81>/A29_TEMP_Pos_Action' incorporates:
     *  ActionPort: '<S87>/Action Port'
     */
    /* Lookup_n-D: '<S87>/PA_HvacDampr_ReTempHmixToPosCnv2_CUR' incorporates:
     *  Saturate: '<S80>/Saturation2'
     *  Sum: '<S80>/Add5'
     */
    HvacDampr_Ctrl_B.Merge_f = Ifx_IntIpoCur_u16_u16(Mfx_Min_u16((uint16)tmp_0, 1000U), (Rte_CData_HvacDampr_ReTempHmixToPosCnv2_CUR())->N1, (Rte_CData_HvacDampr_ReTempHmixToPosCnv2_CUR())->BP1, (Rte_CData_HvacDampr_ReTempHmixToPosCnv2_CUR())->Table);

    /* Lookup_n-D: '<S87>/PA_HvacDampr_ReTempPosToHmixCnv2_CUR' incorporates:
     *  DataStoreWrite: '<S9>/Data Store Write11'
     */
    HvacDampr_Ctrl_B.Merge1_c = Ifx_IntIpoCur_u16_u16(HvacDampr_Ctrl_DW.HvacDampr_uReMixMotFb, (Rte_CData_HvacDampr_ReTempPosToHmixCnv2_CUR())->N1, (Rte_CData_HvacDampr_ReTempPosToHmixCnv2_CUR())->BP1, (Rte_CData_HvacDampr_ReTempPosToHmixCnv2_CUR())->Table);
    HvacDampr_Ctrl_B.Merge2_o = Rte_CData_MOTO_RE_TEMP_SPECT2_R_TURN();
    HvacDampr_Ctrl_B.Merge3_b = Rte_CData_MOTO_RE_TEMP_SPECT2_P_TURN();

    /* End of Outputs for SubSystem: '<S81>/A29_TEMP_Pos_Action' */
    break;

   case 2:
    /* Sum: '<S80>/Add5' incorporates:
     *  Constant: '<S80>/Constant'
     *  Gain: '<S80>/Gain1'
     */
    tmp_0 = ((sint32)(209U * rtb_TmpSignalConversionAtHvac_e) - 10240) >> 5;
    if (tmp_0 < 0) {
      tmp_0 = 0;
    }

    /* Outputs for IfAction SubSystem: '<S81>/A08_TEMP_Pos_Action' incorporates:
     *  ActionPort: '<S86>/Action Port'
     */
    /* Lookup_n-D: '<S86>/PA_HvacDampr_ReTempHmixToPosCnv3_CUR' incorporates:
     *  Saturate: '<S80>/Saturation2'
     *  Sum: '<S80>/Add5'
     */
    HvacDampr_Ctrl_B.Merge_f = Ifx_IntIpoCur_u16_u16(Mfx_Min_u16((uint16)tmp_0, 1000U), (Rte_CData_HvacDampr_ReTempHmixToPosCnv3_CUR())->N1, (Rte_CData_HvacDampr_ReTempHmixToPosCnv3_CUR())->BP1, (Rte_CData_HvacDampr_ReTempHmixToPosCnv3_CUR())->Table);

    /* Lookup_n-D: '<S86>/PA_HvacDampr_ReTempPosToHmixCnv3_CUR' incorporates:
     *  DataStoreWrite: '<S9>/Data Store Write11'
     */
    HvacDampr_Ctrl_B.Merge1_c = Ifx_IntIpoCur_u16_u16(HvacDampr_Ctrl_DW.HvacDampr_uReMixMotFb, (Rte_CData_HvacDampr_ReTempPosToHmixCnv3_CUR())->N1, (Rte_CData_HvacDampr_ReTempPosToHmixCnv3_CUR())->BP1, (Rte_CData_HvacDampr_ReTempPosToHmixCnv3_CUR())->Table);
    HvacDampr_Ctrl_B.Merge2_o = Rte_CData_MOTO_RE_TEMP_SPECT3_R_TURN();
    HvacDampr_Ctrl_B.Merge3_b = Rte_CData_MOTO_RE_TEMP_SPECT3_P_TURN();

    /* End of Outputs for SubSystem: '<S81>/A08_TEMP_Pos_Action' */
    break;
  }

  /* End of SwitchCase: '<S81>/Switch Case' */

  /* Switch: '<S82>/Switch12' incorporates:
   *  Constant: '<S82>/Constant15'
   *  Constant: '<S82>/Constant8'
   *  DataStoreWrite: '<S9>/Data Store Write11'
   *  Sum: '<S82>/Add12'
   */
  if (Mfx_Sub_u16u16_u16(Rte_CData_CIRCUIT_SHORT_POWER_VAL(), HvacDampr_Ctrl_DW.HvacDampr_uReMixMotFb) > 0) {
    /* Switch: '<S82>/Switch14' incorporates:
     *  Constant: '<S82>/Constant14'
     *  Constant: '<S82>/Constant16'
     *  Constant: '<S82>/Constant25'
     *  Sum: '<S82>/Add14'
     */
    if (Mfx_Sub_u16u16_u16(HvacDampr_Ctrl_DW.HvacDampr_uReMixMotFb, Rte_CData_CIRCUIT_SHORT_GND_VAL()) > 0) {
      rtb_TmpSignalConversionAtgPRM_u = Rte_CData_CIRCUIT_NORMAL();
    } else {
      rtb_TmpSignalConversionAtgPRM_u = Rte_CData_CIRCUIT_SHORT_GND();
    }

    /* End of Switch: '<S82>/Switch14' */
  } else {
    rtb_TmpSignalConversionAtgPRM_u = Rte_CData_CIRCUIT_SHORT_POWER();
  }

  /* End of Switch: '<S82>/Switch12' */

  /* Switch: '<S82>/Switch13' incorporates:
   *  Delay: '<S82>/Delay3'
   *  Sum: '<S82>/Add13'
   */
  rtb_TmpSignalConversionAtgPRM_d = (uint8)((uint8)(rtb_TmpSignalConversionAtgPRM_u - HvacDampr_Ctrl_DW.Delay3_DSTATE_f) != 0);

  /* Outputs for Enabled SubSystem: '<S82>/Enabled CompLP Fault cauculate' */
  /* Constant: '<S82>/Constant13' */
  Hva_EnabledCompLPFaultcauculate(rtb_TmpSignalConversionAtgPRM_d, true, &HvacDampr_Ctrl_B.In1_en);

  /* End of Outputs for SubSystem: '<S82>/Enabled CompLP Fault cauculate' */

  /* Outputs for Enabled SubSystem: '<S82>/Enabled Subsystem' */
  /* Delay: '<S82>/Delay3' */
  HvacDampr_Ctrl_EnabledSubsystem(HvacDampr_Ctrl_B.In1_en, HvacDampr_Ctrl_DW.Delay3_DSTATE_f, rtb_TmpSignalConversionAtgPRM_d, &HvacDampr_Ctrl_B.In1_d, &HvacDampr_Ctrl_DW.EnabledSubsystem_ky);

  /* End of Outputs for SubSystem: '<S82>/Enabled Subsystem' */

  /* Switch: '<S83>/Switch' incorporates:
   *  Constant: '<S83>/Constant49'
   *  Constant: '<S83>/Constant5'
   *  Constant: '<S83>/Constant54'
   *  RelationalOperator: '<S83>/Relational Operator2'
   *  Sum: '<S83>/Add'
   *  Sum: '<S83>/Add1'
   */
  if (HvacDampr_Ctrl_B.Merge_f < (uint16)(Rte_CData_DCMOTOR_MODE_DEFMAX_POS() - Rte_CData_DCMOTOR_MODE_POS_LIMIT())) {
    rtb_Divide = (uint16)((uint32)HvacDampr_Ctrl_B.Merge_f + Rte_CData_DCMOTOR_MODE_POS_LIMIT());
  } else {
    rtb_Divide = Rte_CData_DCMOTOR_MODE_DEFMAX_POS();
  }

  /* End of Switch: '<S83>/Switch' */

  /* Switch: '<S83>/Switch1' incorporates:
   *  Constant: '<S83>/Constant54'
   *  Constant: '<S83>/Constant55'
   *  Constant: '<S83>/Constant6'
   *  RelationalOperator: '<S83>/Relational Operator1'
   *  Sum: '<S83>/Add2'
   *  Sum: '<S83>/Add3'
   */
  if (HvacDampr_Ctrl_B.Merge_f >= (uint16)((uint32)Rte_CData_DCMOTOR_MODE_POS_LIMIT() + Rte_CData_DCMOTOR_MODE_FACEMIX_POS())) {
    rtb_Divide1 = (uint16)(HvacDampr_Ctrl_B.Merge_f - Rte_CData_DCMOTOR_MODE_FACEMIX_POS());
  } else {
    rtb_Divide1 = Rte_CData_DCMOTOR_MODE_FACEMIX_POS();
  }

  /* End of Switch: '<S83>/Switch1' */

  /* Chart: '<S83>/DC Motor State' incorporates:
   *  Constant: '<S83>/Constant3'
   *  Constant: '<S83>/Constant57'
   *  Constant: '<S83>/Constant58'
   *  Constant: '<S83>/Constant60'
   *  Constant: '<S9>/Constant5'
   *  DataStoreWrite: '<S9>/Data Store Write11'
   */
  HvacDampr_Ctrl_DCMotorState_a(HvacDampr_Ctrl_DW.HvacDampr_uReMixMotFb, HvacDampr_Ctrl_B.Merge_f, rtb_Divide, rtb_Divide1, Rte_CData_DCMOTOR_MODE_STALL_TICKS(), Rte_CData_DCMOTOR_MODE_BACK_TICKS(), Rte_CData_DCMOTOR_MODE_STOP_TICKS(), Rte_CData_MOTO_INIT_DEAL_TIME(), HvacDampr_Ctrl_B.Merge2_o, HvacDampr_Ctrl_B.Merge3_b, Rte_CData_MOTO_STOP(), &HvacDampr_Ctrl_B.LastTargetPos, &HvacDampr_Ctrl_B.Out_RunSts, &HvacDampr_Ctrl_B.Out_MotorSts, &HvacDampr_Ctrl_B.Moto_JAM_St, &HvacDampr_Ctrl_DW.sf_DCMotorState_c);

  /* Switch: '<S83>/Switch2' incorporates:
   *  Constant: '<S9>/Constant5'
   */
  if (rtb_TmpSignalConversionAtHva_ca) {
    rtb_Switch2_p = HvacDampr_Ctrl_B.Out_MotorSts;
  } else {
    rtb_Switch2_p = Rte_CData_MOTO_STOP();
  }

  /* End of Switch: '<S83>/Switch2' */

  /* If: '<S82>/If1' */
  if (rtb_Switch2_p == 0) {
    /* Switch: '<S82>/Switch6' incorporates:
     *  Constant: '<S82>/Constant23'
     *  Constant: '<S82>/Constant24'
     *  RelationalOperator: '<S82>/RelationalOperator'
     *  Switch: '<S82>/Switch10'
     */
    if (HvacDampr_Ctrl_B.In1_d > 0) {
      rtb_Switch6 = HvacDampr_Ctrl_B.In1_d;
    } else if (HvacDampr_Ctrl_B.Moto_JAM_St != 1) {
      /* Switch: '<S82>/Switch9' incorporates:
       *  Constant: '<S82>/Constant10'
       *  Constant: '<S82>/Constant17'
       *  Constant: '<S82>/Constant22'
       *  Constant: '<S82>/Constant9'
       *  DataStoreWrite: '<S9>/Data Store Write11'
       *  Logic: '<S82>/Logical Operator1'
       *  Sum: '<S82>/Add7'
       *  Sum: '<S82>/Add8'
       *  Switch: '<S82>/Switch10'
       *  Switch: '<S82>/Switch7'
       *  Switch: '<S82>/Switch8'
       */
      if ((Mfx_Sub_s32u32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL() + HvacDampr_Ctrl_B.Merge_f, HvacDampr_Ctrl_DW.HvacDampr_uReMixMotFb) > 0) && (Mfx_Add_u32s32_u16(Rte_CData_MOTO_FALSE_JUDGE_VAL(), HvacDampr_Ctrl_DW.HvacDampr_uReMixMotFb - HvacDampr_Ctrl_B.Merge_f) > 0)) {
        rtb_Switch6 = Rte_CData_DCMOTOR_NORMAL();
      } else {
        rtb_Switch6 = Rte_CData_DCMOTOR_POS_UNREACHED();
      }

      /* End of Switch: '<S82>/Switch9' */
    } else {
      rtb_Switch6 = Rte_CData_DCMOTOR_JAM();
    }

    /* End of Switch: '<S82>/Switch6' */

    /* Outputs for IfAction SubSystem: '<S82>/If Action Subsystem' incorporates:
     *  ActionPort: '<S90>/Action Port'
     */
    HvacDampr_Ctr_IfActionSubsystem(rtb_Switch6, &HvacDampr_Ctrl_B.In1);

    /* End of Outputs for SubSystem: '<S82>/If Action Subsystem' */
  }

  /* End of If: '<S82>/If1' */

  /* Switch: '<S9>/Switch1' incorporates:
   *  Constant: '<S9>/Constant4'
   *  DataStoreWrite: '<S9>/Data Store Write11'
   */
  if (rtb_LogicalOperator_a) {
    rtb_Divide = HvacDampr_Ctrl_DW.HvacDampr_uReMixMotFb;
  } else {
    rtb_Divide = 0U;
  }

  /* Outport: '<Root>/HvacDampr_uReMixMotFb_Val' incorporates:
   *  Switch: '<S9>/Switch1'
   */
  (void) Rte_Write_HvacDampr_uReMixMotFb_Val(rtb_Divide);

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S9>/Constant7'
   *  Switch: '<S9>/Switch3'
   */
  if (rtb_LogicalOperator_a) {
    /* Outport: '<Root>/HvacDampr_stReMixMotAct_Val' incorporates:
     *  Constant: '<S84>/Constant1'
     *  Gain: '<S84>/Gain2'
     *  Product: '<S84>/Divide'
     *  Saturate: '<S9>/Saturation3'
     *  Sum: '<S84>/Add4'
     */
    (void) Rte_Write_HvacDampr_stReMixMotAct_Val(Mfx_Limit_u8((uint8)((51200U * HvacDampr_Ctrl_B.Merge1_c + 16384000U) / 334848U), 49U, 201U));
    rtb_Switch13_b = HvacDampr_Ctrl_B.In1;
  } else {
    /* Outport: '<Root>/HvacDampr_stReMixMotAct_Val' incorporates:
     *  Constant: '<S9>/Constant6'
     */
    (void) Rte_Write_HvacDampr_stReMixMotAct_Val(0U);
    rtb_Switch13_b = 0U;
  }

  /* End of Switch: '<S9>/Switch2' */

  /* Outport: '<Root>/HvacDampr_stReMixMotFlt_Val' incorporates:
   *  Switch: '<S9>/Switch3'
   */
  (void) Rte_Write_HvacDampr_stReMixMotFlt_Val(rtb_Switch13_b);

  /* Switch: '<S9>/Switch4' incorporates:
   *  Constant: '<S9>/Constant8'
   */
  if (!rtb_LogicalOperator_a) {
    rtb_Switch2_p = 0U;
  }

  /* Outport: '<Root>/HvacDampr_stReMixMotDir_Val' incorporates:
   *  Switch: '<S9>/Switch4'
   */
  (void) Rte_Write_HvacDampr_stReMixMotDir_Val(rtb_Switch2_p);

  /* Switch: '<S9>/Switch5' */
  if (rtb_LogicalOperator_a) {
    /* Switch: '<S83>/Switch5' incorporates:
     *  Constant: '<S9>/Constant5'
     *  Sum: '<S83>/Add5'
     */
    if ((uint8)(HvacDampr_Ctrl_B.Out_MotorSts - Rte_CData_MOTO_STOP()) > 0) {
      /* Outport: '<Root>/HvacDampr_stReMixMotRunng_Val' incorporates:
       *  Constant: '<S83>/Constant8'
       */
      (void) Rte_Write_HvacDampr_stReMixMotRunng_Val(Rte_CData_MOTO_RUNNING());
    } else {
      /* Outport: '<Root>/HvacDampr_stReMixMotRunng_Val' incorporates:
       *  Constant: '<S83>/Constant9'
       */
      (void) Rte_Write_HvacDampr_stReMixMotRunng_Val(Rte_CData_MOTO_STOP_RUNNING());
    }

    /* End of Switch: '<S83>/Switch5' */
  } else {
    /* Outport: '<Root>/HvacDampr_stReMixMotRunng_Val' incorporates:
     *  Constant: '<S9>/Constant9'
     */
    (void) Rte_Write_HvacDampr_stReMixMotRunng_Val(0U);
  }

  /* End of Switch: '<S9>/Switch5' */

  /* FunctionCaller: '<S1>/DTC_DrvrMixDamprMotMaxErr_GetEventFailed' */
  Rte_Call_DTC_DrvrMixDamprMotMaxErr_GetEventFailed(&rtb_DTC_DrvrMixDamprMotMaxEr_ar);

  /* FunctionCaller: '<S1>/DTC_DrvrMixDamprMotMaxErr_GetEventTested' */
  Rte_Call_DTC_DrvrMixDamprMotMaxErr_GetEventTested(&rtb_DTC_DrvrMixDamprMotMaxErr_e);

  /* FunctionCaller: '<S1>/DTC_DrvrMixDamprMotMinErr_GetEventFailed' */
  Rte_Call_DTC_DrvrMixDamprMotMinErr_GetEventFailed(&rtb_DTC_DrvrMixDamprMotMinErr_g);

  /* FunctionCaller: '<S1>/DTC_DrvrMixDamprMotMinErr_GetEventTested' */
  Rte_Call_DTC_DrvrMixDamprMotMinErr_GetEventTested(&rtb_DTC_DrvrMixDamprMotMinErr_h);

  /* FunctionCaller: '<S1>/DTC_DrvrMixDamprMotStuck_GetEventFailed' */
  Rte_Call_DTC_DrvrMixDamprMotStuck_GetEventFailed(&rtb_DTC_DrvrMixDamprMotStuck__m);

  /* FunctionCaller: '<S1>/DTC_DrvrMixDamprMotStuck_GetEventTested' */
  Rte_Call_DTC_DrvrMixDamprMotStuck_GetEventTested(&rtb_DTC_DrvrMixDamprMotStuck__b);

  /* FunctionCaller: '<S1>/DTC_ModDamprMotMaxErr_GetEventFailed' */
  Rte_Call_DTC_ModDamprMotMaxErr_GetEventFailed(&rtb_DTC_ModDamprMotMaxErr_Get_l);

  /* FunctionCaller: '<S1>/DTC_ModDamprMotMaxErr_GetEventTested' */
  Rte_Call_DTC_ModDamprMotMaxErr_GetEventTested(&rtb_DTC_ModDamprMotMaxErr_Get_m);

  /* FunctionCaller: '<S1>/DTC_ModDamprMotMinErr_GetEventFailed' */
  Rte_Call_DTC_ModDamprMotMinErr_GetEventFailed(&rtb_DTC_ModDamprMotMinErr_Get_n);

  /* FunctionCaller: '<S1>/DTC_ModDamprMotMinErr_GetEventTested' */
  Rte_Call_DTC_ModDamprMotMinErr_GetEventTested(&rtb_DTC_ModDamprMotMinErr_Get_e);

  /* FunctionCaller: '<S1>/DTC_ModDamprMotStuck_GetEventFailed' */
  Rte_Call_DTC_ModDamprMotStuck_GetEventFailed(&rtb_DTC_ModDamprMotStuck_GetE_b);

  /* FunctionCaller: '<S1>/DTC_ModDamprMotStuck_GetEventTested' */
  Rte_Call_DTC_ModDamprMotStuck_GetEventTested(&rtb_DTC_ModDamprMotStuck_GetE_h);

  /* FunctionCaller: '<S1>/DTC_PassMixDamprMotMaxErr_GetEventFailed' */
  Rte_Call_DTC_PassMixDamprMotMaxErr_GetEventFailed(&rtb_DTC_PassMixDamprMotMaxErr_n);

  /* FunctionCaller: '<S1>/DTC_PassMixDamprMotMaxErr_GetEventTested' */
  Rte_Call_DTC_PassMixDamprMotMaxErr_GetEventTested(&rtb_DTC_PassMixDamprMotMaxErr_l);

  /* FunctionCaller: '<S1>/DTC_PassMixDamprMotMinErr_GetEventFailed' */
  Rte_Call_DTC_PassMixDamprMotMinErr_GetEventFailed(&rtb_DTC_PassMixDamprMotMinErr_j);

  /* FunctionCaller: '<S1>/DTC_PassMixDamprMotMinErr_GetEventTested' */
  Rte_Call_DTC_PassMixDamprMotMinErr_GetEventTested(&rtb_DTC_PassMixDamprMotMinErr_a);

  /* FunctionCaller: '<S1>/DTC_PassMixDamprMotStuck_GetEventFailed' */
  Rte_Call_DTC_PassMixDamprMotStuck_GetEventFailed(&rtb_DTC_PassMixDamprMotStuck__b);

  /* FunctionCaller: '<S1>/DTC_PassMixDamprMotStuck_GetEventTested' */
  Rte_Call_DTC_PassMixDamprMotStuck_GetEventTested(&rtb_DTC_PassMixDamprMotStuck__h);

  /* FunctionCaller: '<S1>/DTC_RcrltnDamprMotMaxErr_GetEventFailed' */
  Rte_Call_DTC_RcrltnDamprMotMaxErr_GetEventFailed(&rtb_DTC_RcrltnDamprMotMaxErr__f);

  /* FunctionCaller: '<S1>/DTC_RcrltnDamprMotMaxErr_GetEventTested' */
  Rte_Call_DTC_RcrltnDamprMotMaxErr_GetEventTested(&rtb_DTC_RcrltnDamprMotMaxErr_jj);

  /* FunctionCaller: '<S1>/DTC_RcrltnDamprMotMinErr_GetEventFailed' */
  Rte_Call_DTC_RcrltnDamprMotMinErr_GetEventFailed(&rtb_DTC_RcrltnDamprMotMinErr__j);

  /* FunctionCaller: '<S1>/DTC_RcrltnDamprMotMinErr_GetEventTested' */
  Rte_Call_DTC_RcrltnDamprMotMinErr_GetEventTested(&rtb_DTC_RcrltnDamprMotMinErr__o);

  /* FunctionCaller: '<S1>/DTC_RcrltnDamprMotStuck_GetEventFailed' */
  Rte_Call_DTC_RcrltnDamprMotStuck_GetEventFailed(&rtb_DTC_RcrltnDamprMotStuck_G_i);

  /* FunctionCaller: '<S1>/DTC_RcrltnDamprMotStuck_GetEventTested' */
  Rte_Call_DTC_RcrltnDamprMotStuck_GetEventTested(&rtb_DTC_RcrltnDamprMotStuck_G_c);

  /* Update for Delay: '<S12>/Delay3' */
  HvacDampr_Ctrl_DW.Delay3_DSTATE = rtb_Switch1_g2;

  /* Update for Delay: '<S24>/Delay3' */
  HvacDampr_Ctrl_DW.Delay3_DSTATE_m = rtb_Switch1_l4;

  /* Update for Delay: '<S36>/Delay3' */
  HvacDampr_Ctrl_DW.Delay3_DSTATE_l = rtb_TmpSignalConversionAtHvacDa;

  /* Update for Delay: '<S6>/Delay' */
  HvacDampr_Ctrl_DW.Delay_DSTATE = rtb_Switch1;

  /* Update for Delay: '<S48>/Delay3' */
  HvacDampr_Ctrl_DW.Delay3_DSTATE_mb = rtb_Switch13;

  /* Update for Delay: '<S59>/Delay3' */
  HvacDampr_Ctrl_DW.Delay3_DSTATE_i = rtb_Switch12_k;

  /* Update for Delay: '<S8>/Delay' */
  HvacDampr_Ctrl_DW.Delay_DSTATE_k = rtb_Divide7;

  /* Update for Delay: '<S71>/Delay3' */
  HvacDampr_Ctrl_DW.Delay3_DSTATE_g = rtb_TmpSignalConversionAtHva_gj;

  /* Update for Delay: '<S82>/Delay3' */
  HvacDampr_Ctrl_DW.Delay3_DSTATE_f = rtb_TmpSignalConversionAtgPRM_u;

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' */

  /* Outport: '<Root>/HvacDampr_stDrvrMixMotDir_Val' */
  (void) Rte_Write_HvacDampr_stDrvrMixMotDir_Val(Switch2);

  /* Outport: '<Root>/HvacDampr_stDrvrMixMotFlt_Val' */
  (void) Rte_Write_HvacDampr_stDrvrMixMotFlt_Val(HvacDampr_Ctrl_B.In1_hi);

  /* Outport: '<Root>/HvacDampr_stModMotAct_Val' */
  (void) Rte_Write_HvacDampr_stModMotAct_Val(HvacDampr_Ctrl_B.u8Mode_St_h);

  /* Outport: '<Root>/HvacDampr_stModMotDir_Val' */
  (void) Rte_Write_HvacDampr_stModMotDir_Val(rtb_Switch1_d);

  /* Outport: '<Root>/HvacDampr_stModMotFlt_Val' */
  (void) Rte_Write_HvacDampr_stModMotFlt_Val(HvacDampr_Ctrl_B.In1_dx);

  /* Outport: '<Root>/HvacDampr_stPassMixMotDir_Val' */
  (void) Rte_Write_HvacDampr_stPassMixMotDir_Val(rtb_TmpSignalConversionAtgPRM_b);

  /* Outport: '<Root>/HvacDampr_stPassMixMotFlt_Val' */
  (void) Rte_Write_HvacDampr_stPassMixMotFlt_Val(HvacDampr_Ctrl_B.In1_h);

  /* Outport: '<Root>/HvacDampr_uDrvrMixMotFb_Val' */
  (void) Rte_Write_HvacDampr_uDrvrMixMotFb_Val(HvacDampr_Ctrl_B.DataTypeConversion11);

  /* RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/HvacDampr_Ctrl_Runnable_10ms_sys'
   */
  /* Outport: '<Root>/HvacDampr_uModMotFb_Val' incorporates:
   *  DataTypeConversion: '<S6>/DataTypeConversion14'
   */
  (void) Rte_Write_HvacDampr_uModMotFb_Val((uint16)tmp_1);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' */

  /* Outport: '<Root>/HvacDampr_uPassMixMotFb_Val' */
  (void) Rte_Write_HvacDampr_uPassMixMotFb_Val(HvacDampr_Ctrl_B.DataTypeConversion17);
}

/* Model initialize function */
FUNC(void, HvacDampr_Ctrl_CODE) HvacDampr_Ctrl_Runnable_Init(void)
{
  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' incorporates:
   *  SubSystem: '<Root>/HvacDampr_Ctrl_Runnable_10ms_sys'
   */

  /* SystemInitialize for Chart: '<S37>/DC Motor State' */
  HvacDampr_Ctr_DCMotorState_Init(&HvacDampr_Ctrl_B.LastTargetPos_h, &HvacDampr_Ctrl_B.Out_RunSts_n, &HvacDampr_Ctrl_B.Out_MotorSts_f, &HvacDampr_Ctrl_B.Moto_JAM_St_n);

  /* SystemInitialize for Chart: '<S49>/DC Motor State' */
  HvacDampr_C_DCMotorState_f_Init(&HvacDampr_Ctrl_B.LastTargetPos_a, &HvacDampr_Ctrl_B.Out_RunSts_jc, &HvacDampr_Ctrl_B.Out_MotorSts_e, &HvacDampr_Ctrl_B.Moto_JAM_St_j);

  /* SystemInitialize for Chart: '<S60>/DC Motor State' */
  HvacDampr_Ctr_DCMotorState_Init(&HvacDampr_Ctrl_B.LastTargetPos_n, &HvacDampr_Ctrl_B.Out_RunSts_e, &HvacDampr_Ctrl_B.Out_MotorSts_k, &HvacDampr_Ctrl_B.Moto_JAM_St_f);

  /* SystemInitialize for Chart: '<S83>/DC Motor State' */
  HvacDampr_C_DCMotorState_f_Init(&HvacDampr_Ctrl_B.LastTargetPos, &HvacDampr_Ctrl_B.Out_RunSts, &HvacDampr_Ctrl_B.Out_MotorSts, &HvacDampr_Ctrl_B.Moto_JAM_St);

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/HvacDampr_Ctrl_Runnable_10ms' */

  /* SystemInitialize for Outport: '<Root>/HvacDampr_stDrvrMixMotFlt_Val' */
  (void) Rte_Write_HvacDampr_stDrvrMixMotFlt_Val(HvacDampr_Ctrl_B.In1_hi);

  /* SystemInitialize for Outport: '<Root>/HvacDampr_stModMotAct_Val' */
  (void) Rte_Write_HvacDampr_stModMotAct_Val(HvacDampr_Ctrl_B.u8Mode_St_h);

  /* SystemInitialize for Outport: '<Root>/HvacDampr_stModMotFlt_Val' */
  (void) Rte_Write_HvacDampr_stModMotFlt_Val(HvacDampr_Ctrl_B.In1_dx);

  /* SystemInitialize for Outport: '<Root>/HvacDampr_stPassMixMotFlt_Val' */
  (void) Rte_Write_HvacDampr_stPassMixMotFlt_Val(HvacDampr_Ctrl_B.In1_h);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
