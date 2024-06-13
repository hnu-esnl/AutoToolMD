/*
 * File: PwrModMngt_ComCnvTx.c
 *
 * Code generated for Simulink model 'PwrModMngt_ComCnvTx'.
 *
 * Model version                  : 5.14
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Thu Sep 22 10:17:03 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Renesas->V850
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PwrModMngt_ComCnvTx.h"

/* Model step function */
void PwrModMngt_ComCnvTx_Runnable_10ms(void)
{
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 tmpRead_1;

  /* Inport: '<Root>/gPwrModMngt_u8RMSeatSt' */
  (void)Rte_Read_gPwrModMngt_u8RMSeatSt_Val(&tmpRead_1);

  /* Inport: '<Root>/gPwrModMngt_u8RRSeatSt' */
  (void)Rte_Read_gPwrModMngt_u8RRSeatSt_Val(&tmpRead_0);

  /* Inport: '<Root>/gPwrModMngt_u8RLSeatSt' */
  (void)Rte_Read_gPwrModMngt_u8RLSeatSt_Val(&tmpRead);

  /* Outport: '<Root>/ComTx_u8UMM_SecondLHSeatSt' incorporates:
   *  SignalConversion: '<Root>/Signal Conversion'
   */
  (void)Rte_Write_ComTx_u8UMM_SecondLHSeatSt_Val(tmpRead);

  /* Outport: '<Root>/ComTx_u8UMM_SecondRHSeatSt' incorporates:
   *  SignalConversion: '<Root>/Signal Conversion1'
   */
  (void)Rte_Write_ComTx_u8UMM_SecondRHSeatSt_Val(tmpRead_0);

  /* Outport: '<Root>/ComTx_u8UMM_SecondMIDSeatSt' incorporates:
   *  SignalConversion: '<Root>/Signal Conversion2'
   */
  (void)Rte_Write_ComTx_u8UMM_SecondMIDSeatSt_Val(tmpRead_1);
}

/* Model initialize function */
void PwrModMngt_ComCnvTx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
