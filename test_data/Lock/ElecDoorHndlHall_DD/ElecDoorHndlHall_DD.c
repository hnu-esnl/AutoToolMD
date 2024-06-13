/*
 * File: ElecDoorHndlHall_DD.c
 *
 * Code generated for Simulink model 'ElecDoorHndlHall_DD'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Sep 30 15:49:07 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ElecDoorHndlHall_DD.h"
#include "ElecDoorHndlHall_DD_private.h"

/* Named constants for Chart: '<S3>/Chart' */
#define ElecDoorHndlHall_DD_IN_Count   ((uint8)1U)
#define ElecDoorHndlHall_DD_IN_Idle    ((uint8)2U)
#define ElecDoorHndlHall_DD_IN_Wait    ((uint8)3U)

/* Block signals (default storage) */
VAR(B_ElecDoorHndlHall_DD_T, ElecDoorHndlHall_DD_VAR) ElecDoorHndlHall_DD_B;

/* Block states (default storage) */
VAR(DW_ElecDoorHndlHall_DD_T, ElecDoorHndlHall_DD_VAR) ElecDoorHndlHall_DD_DW;

/*
 * System initialize for atomic system:
 *    '<S3>/Chart'
 *    '<S4>/Chart'
 *    '<S5>/Chart'
 *    '<S6>/Chart'
 */
FUNC(void, ElecDoorHndlHall_DD_CODE_LOCAL) ElecDoorHndlHall_DD_Chart_Init(P2VAR(uint16, AUTOMATIC, ElecDoorHndlHall_DD_VAR) rty_HallCnt)
{
  *rty_HallCnt = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S3>/Chart'
 *    '<S4>/Chart'
 *    '<S5>/Chart'
 *    '<S6>/Chart'
 */
FUNC(void, ElecDoorHndlHall_DD_CODE_LOCAL) ElecDoorHndlHall_DD_Chart(VAR(uint16, AUTOMATIC) rtu_Cal_EDHDirChangeDelay, VAR(uint32, AUTOMATIC) rtu_HallCntRaw, VAR(uint8, AUTOMATIC) rtu_DoorHndlMotorPs, P2VAR(uint16, AUTOMATIC, ElecDoorHndlHall_DD_VAR) rty_HallCnt, P2VAR(DW_Chart_ElecDoorHndlHall_DD_T, AUTOMATIC, ElecDoorHndlHall_DD_VAR) localDW)
{
  /* Chart: '<S3>/Chart' */
  /* Gateway: ElecDoorHndlHall_DD_Runnable_1ms_sys/HallCntFL/Chart */
  if (localDW->temporalCounter_i1 < 65535U) {
    localDW->temporalCounter_i1++;
  }

  /* During: ElecDoorHndlHall_DD_Runnable_1ms_sys/HallCntFL/Chart */
  if (localDW->is_active_c4_ElecDoorHndlHall_D == 0U) {
    /* Entry: ElecDoorHndlHall_DD_Runnable_1ms_sys/HallCntFL/Chart */
    localDW->is_active_c4_ElecDoorHndlHall_D = 1U;

    /* Entry Internal: ElecDoorHndlHall_DD_Runnable_1ms_sys/HallCntFL/Chart */
    /* Transition: '<S14>:7' */
    localDW->is_c4_ElecDoorHndlHall_DD = ElecDoorHndlHall_DD_IN_Idle;

    /* Entry 'Idle': '<S14>:8' */
    *rty_HallCnt = 0U;
  } else {
    switch (localDW->is_c4_ElecDoorHndlHall_DD) {
     case ElecDoorHndlHall_DD_IN_Count:
      /* During 'Count': '<S14>:11' */
      if (rtu_DoorHndlMotorPs == 0) {
        /* Transition: '<S14>:14' */
        localDW->is_c4_ElecDoorHndlHall_DD = ElecDoorHndlHall_DD_IN_Wait;
        localDW->temporalCounter_i1 = 0U;
      } else {
        *rty_HallCnt = Mfx_Sub_u32u32_u16(rtu_HallCntRaw, localDW->tmp_HallCnt);

        /* u32&#x6570;&#x636E;&#x5728;&#x4E00;&#x4E2A;&#x4E0A;&#x7535;&#x5468;&#x671F;&#x5185;&#x4E0D;&#x4F1A;&#x6EA2;&#x51FA; */
      }
      break;

     case ElecDoorHndlHall_DD_IN_Idle:
      /* During 'Idle': '<S14>:8' */
      if (rtu_DoorHndlMotorPs != 0) {
        /* Transition: '<S14>:12' */
        /* Exit 'Idle': '<S14>:8' */
        localDW->tmp_HallCnt = rtu_HallCntRaw;
        localDW->is_c4_ElecDoorHndlHall_DD = ElecDoorHndlHall_DD_IN_Count;
      }
      break;

     default:
      /* During 'Wait': '<S14>:13' */
      if (localDW->temporalCounter_i1 >= rtu_Cal_EDHDirChangeDelay) {
        /* Transition: '<S14>:15' */
        localDW->is_c4_ElecDoorHndlHall_DD = ElecDoorHndlHall_DD_IN_Idle;

        /* Entry 'Idle': '<S14>:8' */
        *rty_HallCnt = 0U;
      } else {
        if (rtu_DoorHndlMotorPs != 0) {
          /* Transition: '<S14>:33' */
          localDW->is_c4_ElecDoorHndlHall_DD = ElecDoorHndlHall_DD_IN_Count;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Chart' */
}

/* Model step function for TID1 */
FUNC(void, ElecDoorHndlHall_DD_CODE) ElecDoorHndlHall_DD_Runnable_1ms(void) /* Sample time: [0.001s, 0.0s] */
{
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  uint32 rtb_IoHwAb_IoSigIcu_Icu_GetEdge;
  uint32 rtb_IoHwAb_IoSigIcu_Icu_GetEd_a;
  uint32 rtb_IoHwAb_IoSigIcu_Icu_GetEd_o;
  uint32 rtb_IoHwAb_IoSigIcu_Icu_GetEd_d;

  /* Inport: '<Root>/gElecDoorHndl_u8RRDoorHndlMotorPs_Val' */
  Rte_Read_gElecDoorHndl_u8RRDoorHndlMotorPs_Val(&tmpRead_2);

  /* Inport: '<Root>/gElecDoorHndl_u8RLDoorHndlMotorPs_Val' */
  Rte_Read_gElecDoorHndl_u8RLDoorHndlMotorPs_Val(&tmpRead_1);

  /* Inport: '<Root>/gElecDoorHndl_u8FRDoorHndlMotorPs_Val' */
  Rte_Read_gElecDoorHndl_u8FRDoorHndlMotorPs_Val(&tmpRead_0);

  /* Inport: '<Root>/gElecDoorHndl_u8FLDoorHndlMotorPs_Val' */
  Rte_Read_gElecDoorHndl_u8FLDoorHndlMotorPs_Val(&tmpRead);

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndlHall_DD_Runnable_1ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ElecDoorHndlHall_DD_Runnable_1ms_sys'
   */
  /* FunctionCaller: '<S3>/IoHwAb_IoSigIcu_Icu_GetEdgeNumbers' */
  Rte_Call_IoHwAb_IoSigIcu_Icu_GetEdgeNumbers(I_A_FLDoorHndlHall, &rtb_IoHwAb_IoSigIcu_Icu_GetEdge);

  /* Chart: '<S3>/Chart' incorporates:
   *  Constant: '<S1>/Constant'
   */
  ElecDoorHndlHall_DD_Chart(40, rtb_IoHwAb_IoSigIcu_Icu_GetEdge, tmpRead, &ElecDoorHndlHall_DD_B.HallCnt_h, &ElecDoorHndlHall_DD_DW.sf_Chart);

  /* FunctionCaller: '<S4>/IoHwAb_IoSigIcu_Icu_GetEdgeNumbers' */
  Rte_Call_IoHwAb_IoSigIcu_Icu_GetEdgeNumbers(I_A_FRDoorHndlHall, &rtb_IoHwAb_IoSigIcu_Icu_GetEd_a);

  /* Chart: '<S4>/Chart' incorporates:
   *  Constant: '<S1>/Constant'
   */
  ElecDoorHndlHall_DD_Chart(40, rtb_IoHwAb_IoSigIcu_Icu_GetEd_a, tmpRead_0, &ElecDoorHndlHall_DD_B.HallCnt_a, &ElecDoorHndlHall_DD_DW.sf_Chart_m);

  /* FunctionCaller: '<S5>/IoHwAb_IoSigIcu_Icu_GetEdgeNumbers' */
  Rte_Call_IoHwAb_IoSigIcu_Icu_GetEdgeNumbers(I_A_RLDoorHndlHall, &rtb_IoHwAb_IoSigIcu_Icu_GetEd_o);

  /* Chart: '<S5>/Chart' incorporates:
   *  Constant: '<S1>/Constant'
   */
  ElecDoorHndlHall_DD_Chart(40, rtb_IoHwAb_IoSigIcu_Icu_GetEd_o, tmpRead_1, &ElecDoorHndlHall_DD_B.HallCnt_b, &ElecDoorHndlHall_DD_DW.sf_Chart_h);

  /* FunctionCaller: '<S6>/IoHwAb_IoSigIcu_Icu_GetEdgeNumbers' */
  Rte_Call_IoHwAb_IoSigIcu_Icu_GetEdgeNumbers(I_A_RRDoorHndlHall, &rtb_IoHwAb_IoSigIcu_Icu_GetEd_d);

  /* Chart: '<S6>/Chart' incorporates:
   *  Constant: '<S1>/Constant'
   */
  ElecDoorHndlHall_DD_Chart(40, rtb_IoHwAb_IoSigIcu_Icu_GetEd_d, tmpRead_2, &ElecDoorHndlHall_DD_B.HallCnt, &ElecDoorHndlHall_DD_DW.sf_Chart_p);

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndlHall_DD_Runnable_1ms_at_outport_1' */

  /* Outport: '<Root>/gElecDoorHndlHall_u16FLDoorHandleHallAD_Val' */
  (void) Rte_Write_gElecDoorHndlHall_u16FLDoorHandleHallAD_Val(0U);

  /* Outport: '<Root>/gElecDoorHndlHall_u16FLDoorHandleHallAD1_Val' */
  (void) Rte_Write_gElecDoorHndlHall_u16FLDoorHandleHallAD1_Val(0U);

  /* Outport: '<Root>/gElecDoorHndlHall_u16FRDoorHandleHallAD_Val' */
  (void) Rte_Write_gElecDoorHndlHall_u16FRDoorHandleHallAD_Val(0U);

  /* Outport: '<Root>/gElecDoorHndlHall_u16FRDoorHandleHallAD1_Val' */
  (void) Rte_Write_gElecDoorHndlHall_u16FRDoorHandleHallAD1_Val(0U);

  /* Outport: '<Root>/gElecDoorHndlHall_u16RLDoorHandleHallAD_Val' */
  (void) Rte_Write_gElecDoorHndlHall_u16RLDoorHandleHallAD_Val(0U);

  /* Outport: '<Root>/gElecDoorHndlHall_u16RLDoorHandleHallAD1_Val' */
  (void) Rte_Write_gElecDoorHndlHall_u16RLDoorHandleHallAD1_Val(0U);

  /* Outport: '<Root>/gElecDoorHndlHall_u16RRDoorHandleHallAD_Val' */
  (void) Rte_Write_gElecDoorHndlHall_u16RRDoorHandleHallAD_Val(0U);

  /* Outport: '<Root>/gEDH_u16FLHallCnt_Val' */
  (void) Rte_Write_gEDH_u16FLHallCnt_Val(ElecDoorHndlHall_DD_B.HallCnt_h);

  /* Outport: '<Root>/gEDH_u16FRHallCnt_Val' */
  (void) Rte_Write_gEDH_u16FRHallCnt_Val(ElecDoorHndlHall_DD_B.HallCnt_a);

  /* Outport: '<Root>/gEDH_u16RLHallCnt_Val' */
  (void) Rte_Write_gEDH_u16RLHallCnt_Val(ElecDoorHndlHall_DD_B.HallCnt_b);

  /* Outport: '<Root>/gEDH_u16RRHallCnt_Val' */
  (void) Rte_Write_gEDH_u16RRHallCnt_Val(ElecDoorHndlHall_DD_B.HallCnt);
}

/* Model initialize function */
FUNC(void, ElecDoorHndlHall_DD_CODE) ElecDoorHndlHall_DD_Runnable_Init(void)
{
  /* SystemInitialize for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndlHall_DD_Runnable_1ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/ElecDoorHndlHall_DD_Runnable_1ms_sys'
   */

  /* SystemInitialize for Chart: '<S3>/Chart' */
  ElecDoorHndlHall_DD_Chart_Init(&ElecDoorHndlHall_DD_B.HallCnt_h);

  /* SystemInitialize for Chart: '<S4>/Chart' */
  ElecDoorHndlHall_DD_Chart_Init(&ElecDoorHndlHall_DD_B.HallCnt_a);

  /* SystemInitialize for Chart: '<S5>/Chart' */
  ElecDoorHndlHall_DD_Chart_Init(&ElecDoorHndlHall_DD_B.HallCnt_b);

  /* SystemInitialize for Chart: '<S6>/Chart' */
  ElecDoorHndlHall_DD_Chart_Init(&ElecDoorHndlHall_DD_B.HallCnt);

  /* End of SystemInitialize for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_ElecDoorHndlHall_DD_Runnable_1ms_at_outport_1' */

  /* SystemInitialize for Outport: '<Root>/gEDH_u16FLHallCnt_Val' */
  (void) Rte_Write_gEDH_u16FLHallCnt_Val(ElecDoorHndlHall_DD_B.HallCnt_h);

  /* SystemInitialize for Outport: '<Root>/gEDH_u16FRHallCnt_Val' */
  (void) Rte_Write_gEDH_u16FRHallCnt_Val(ElecDoorHndlHall_DD_B.HallCnt_a);

  /* SystemInitialize for Outport: '<Root>/gEDH_u16RLHallCnt_Val' */
  (void) Rte_Write_gEDH_u16RLHallCnt_Val(ElecDoorHndlHall_DD_B.HallCnt_b);

  /* SystemInitialize for Outport: '<Root>/gEDH_u16RRHallCnt_Val' */
  (void) Rte_Write_gEDH_u16RRHallCnt_Val(ElecDoorHndlHall_DD_B.HallCnt);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
