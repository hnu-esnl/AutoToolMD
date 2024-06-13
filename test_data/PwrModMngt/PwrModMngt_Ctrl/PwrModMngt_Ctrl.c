/*
 * File: PwrModMngt_Ctrl.c
 *
 * Code generated for Simulink model 'PwrModMngt_Ctrl'.
 *
 * Model version                  : 5.3
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Thu Sep 22 10:16:26 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Renesas->V850
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PwrModMngt_Ctrl.h"

static void PwrModMngt_Ctrl_FLSeatSt_Init(uint8 *rty_gPMM_u8FLSeatSt);
static void PwrModMngt_Ctrl_FLSeatSt(uint8 rtu_gASI_u8DrvSeatOccupancySw, uint8 *
  rty_gPMM_u8FLSeatSt);

/*
 * System initialize for atomic system:
 *    '<S1>/FLSeatSt'
 *    '<S2>/FLSeatSt'
 *    '<S3>/FLSeatSt'
 */
static void PwrModMngt_Ctrl_FLSeatSt_Init(uint8 *rty_gPMM_u8FLSeatSt)
{
  *rty_gPMM_u8FLSeatSt = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S1>/FLSeatSt'
 *    '<S2>/FLSeatSt'
 *    '<S3>/FLSeatSt'
 */
static void PwrModMngt_Ctrl_FLSeatSt(uint8 rtu_gASI_u8DrvSeatOccupancySw, uint8 *
  rty_gPMM_u8FLSeatSt)
{
  /* Chart: '<S1>/FLSeatSt' */
  *rty_gPMM_u8FLSeatSt = rtu_gASI_u8DrvSeatOccupancySw;
}

/* Model step function */
void PwrModMngt_Ctrl_Runnable_10ms(void)
{
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpWrite;

  /* Inport: '<Root>/gPwrModMngt_u8RMSeatOccpdSwt' */
  (void)Rte_Read_gPwrModMngt_u8RMSeatOccpdSwt_Val(&tmpRead_1);

  /* Inport: '<Root>/gPwrModMngt_u8RRSeatOccpdSwt' */
  (void)Rte_Read_gPwrModMngt_u8RRSeatOccpdSwt_Val(&tmpRead_0);

  /* Inport: '<Root>/gPwrModMngt_u8RLSeatOccpdSwt' */
  (void)Rte_Read_gPwrModMngt_u8RLSeatOccpdSwt_Val(&tmpRead);

  /* Chart: '<S1>/FLSeatSt' incorporates:
   *  Outport: '<Root>/gPwrModMngt_u8RLSeatSt'
   */
  PwrModMngt_Ctrl_FLSeatSt(tmpRead, &tmpWrite);

  /* Chart: '<S3>/FLSeatSt' incorporates:
   *  Outport: '<Root>/gPwrModMngt_u8RRSeatSt'
   */
  PwrModMngt_Ctrl_FLSeatSt(tmpRead_0, &tmpRead);

  /* Chart: '<S2>/FLSeatSt' incorporates:
   *  Outport: '<Root>/gPwrModMngt_u8RMSeatSt'
   */
  PwrModMngt_Ctrl_FLSeatSt(tmpRead_1, &tmpRead_0);

  /* Outport: '<Root>/gPwrModMngt_u8RLSeatSt' */
  (void)Rte_Write_gPwrModMngt_u8RLSeatSt_Val(tmpWrite);

  /* Outport: '<Root>/gPwrModMngt_u8RRSeatSt' */
  (void)Rte_Write_gPwrModMngt_u8RRSeatSt_Val(tmpRead);

  /* Outport: '<Root>/gPwrModMngt_u8RMSeatSt' */
  (void)Rte_Write_gPwrModMngt_u8RMSeatSt_Val(tmpRead_0);
}

/* Model initialize function */
void PwrModMngt_Ctrl_Runnable_Init(void)
{
  {
    uint8 tmpWrite;
    uint8 tmpWrite_0;
    uint8 tmpWrite_1;

    /* SystemInitialize for Chart: '<S1>/FLSeatSt' incorporates:
     *  Outport: '<Root>/gPwrModMngt_u8RLSeatSt'
     */
    PwrModMngt_Ctrl_FLSeatSt_Init(&tmpWrite);

    /* SystemInitialize for Chart: '<S3>/FLSeatSt' incorporates:
     *  Outport: '<Root>/gPwrModMngt_u8RRSeatSt'
     */
    PwrModMngt_Ctrl_FLSeatSt_Init(&tmpWrite_0);

    /* SystemInitialize for Chart: '<S2>/FLSeatSt' incorporates:
     *  Outport: '<Root>/gPwrModMngt_u8RMSeatSt'
     */
    PwrModMngt_Ctrl_FLSeatSt_Init(&tmpWrite_1);

    /* Outport: '<Root>/gPwrModMngt_u8RLSeatSt' */
    (void)Rte_Write_gPwrModMngt_u8RLSeatSt_Val(tmpWrite);

    /* Outport: '<Root>/gPwrModMngt_u8RRSeatSt' */
    (void)Rte_Write_gPwrModMngt_u8RRSeatSt_Val(tmpWrite_0);

    /* Outport: '<Root>/gPwrModMngt_u8RMSeatSt' */
    (void)Rte_Write_gPwrModMngt_u8RMSeatSt_Val(tmpWrite_1);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
