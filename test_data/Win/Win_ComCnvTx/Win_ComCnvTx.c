/*
 * File: Win_ComCnvTx.c
 *
 * Code generated for Simulink model 'Win_ComCnvTx'.
 *
 * Model version                  : 1.201
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Oct  6 15:54:08 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Win_ComCnvTx.h"

/* Model step function */
void Win_ComCnvTx_Runnable_10ms(void)
{
  uint8 tmpRead;
  uint8 tmpRead_0;
  uint8 tmpRead_1;
  uint8 tmpRead_2;
  uint8 tmpRead_3;
  uint8 tmpRead_4;
  uint8 tmpRead_5;
  uint8 tmpRead_6;
  boolean tmpRead_7;
  boolean tmpRead_8;
  boolean tmpRead_9;
  boolean tmpRead_a;
  boolean tmpRead_b;
  uint8 tmpRead_c;
  uint8 tmpRead_d;
  uint8 tmpRead_e;
  uint8 tmpRead_f;
  boolean tmpRead_g;
  boolean tmpRead_h;
  boolean tmpRead_i;
  boolean tmpRead_j;
  boolean tmpRead_k;
  boolean tmpRead_l;
  boolean tmpRead_m;
  boolean tmpRead_n;
  boolean tmpRead_o;
  uint8 tmpRead_p;
  uint8 tmpRead_q;
  uint8 tmpRead_r;
  uint8 tmpRead_s;

  /* Inport: '<Root>/gWND_u8LocalSideRRWinSwSt' */
  Rte_Read_gWND_u8LocalSideRRWinSwSt_Val(&tmpRead_s);

  /* Inport: '<Root>/gWND_u8LocalSideRLWinSwSt' */
  Rte_Read_gWND_u8LocalSideRLWinSwSt_Val(&tmpRead_r);

  /* Inport: '<Root>/gWND_u8LocalSideFRWinSwSt' */
  Rte_Read_gWND_u8LocalSideFRWinSwSt_Val(&tmpRead_q);

  /* Inport: '<Root>/gWin_u8PWL_PassengerWinLockLedSt' */
  Rte_Read_gWin_u8PWL_PassengerWinLockLedSt_Val(&tmpRead_p);

  /* Inport: '<Root>/gWin_bUINM_PassengerWinLockBtnSt' */
  Rte_Read_gWin_bUINM_PassengerWinLockBtnSt_Val(&tmpRead_o);

  /* Inport: '<Root>/gWin_bRRWinShortDropSt' */
  Rte_Read_gWin_bRRWinShortDropSt_Val(&tmpRead_n);

  /* Inport: '<Root>/gWin_bRLWinShortDropSt' */
  Rte_Read_gWin_bRLWinShortDropSt_Val(&tmpRead_m);

  /* Inport: '<Root>/gWin_bFRWinShortDropSt' */
  Rte_Read_gWin_bFRWinShortDropSt_Val(&tmpRead_l);

  /* Inport: '<Root>/gWin_bFLWinShortDropSt' */
  Rte_Read_gWin_bFLWinShortDropSt_Val(&tmpRead_k);

  /* Inport: '<Root>/gWND_bRRWinMotErrSt' */
  Rte_Read_gWND_bRRWinMotErrSt_Val(&tmpRead_j);

  /* Inport: '<Root>/gWND_bRLWinMotErrSt' */
  Rte_Read_gWND_bRLWinMotErrSt_Val(&tmpRead_i);

  /* Inport: '<Root>/gWND_bFRWinMotErrSt' */
  Rte_Read_gWND_bFRWinMotErrSt_Val(&tmpRead_h);

  /* Inport: '<Root>/gWND_bFLWinMotErrSt' */
  Rte_Read_gWND_bFLWinMotErrSt_Val(&tmpRead_g);

  /* Inport: '<Root>/gWND_u8DrvSideRRWinSwSt' */
  Rte_Read_gWND_u8DrvSideRRWinSwSt_Val(&tmpRead_f);

  /* Inport: '<Root>/gWND_u8DrvSideRLWinSwSt' */
  Rte_Read_gWND_u8DrvSideRLWinSwSt_Val(&tmpRead_e);

  /* Inport: '<Root>/gWND_u8DrvSideFRWinSwSt' */
  Rte_Read_gWND_u8DrvSideFRWinSwSt_Val(&tmpRead_d);

  /* Inport: '<Root>/gWND_u8DrvSideFLWinSwSt' */
  Rte_Read_gWND_u8DrvSideFLWinSwSt_Val(&tmpRead_c);

  /* Inport: '<Root>/gWin_bUINM_RRDoorOutsideSwSt' */
  Rte_Read_gWin_bUINM_RRDoorOutsideSwSt_Val(&tmpRead_b);

  /* Inport: '<Root>/gWin_bUINM_RLDoorOutsideSwSt' */
  Rte_Read_gWin_bUINM_RLDoorOutsideSwSt_Val(&tmpRead_a);

  /* Inport: '<Root>/gWin_bUINM_FRDoorOutsideSwSt' */
  Rte_Read_gWin_bUINM_FRDoorOutsideSwSt_Val(&tmpRead_9);

  /* Inport: '<Root>/gWin_bUINM_FLDoorOutsideSwSt' */
  Rte_Read_gWin_bUINM_FLDoorOutsideSwSt_Val(&tmpRead_8);

  /* Inport: '<Root>/gWin_bPWL_PassengerWinLockLedFltSt' */
  Rte_Read_gWin_bPWL_PassengerWinLockLedFltSt_Val(&tmpRead_7);

  /* Inport: '<Root>/gWin_u8PWL_WinOpeationSt_RRWinSt' */
  Rte_Read_gWin_u8PWL_WinOpeationSt_RRWinSt_Val(&tmpRead_6);

  /* Inport: '<Root>/gWin_u8PWL_WinOpeationSt_RLWinSt' */
  Rte_Read_gWin_u8PWL_WinOpeationSt_RLWinSt_Val(&tmpRead_5);

  /* Inport: '<Root>/gWin_u8PWL_WinOpeationSt_FRWinSt' */
  Rte_Read_gWin_u8PWL_WinOpeationSt_FRWinSt_Val(&tmpRead_4);

  /* Inport: '<Root>/gWin_u8PWL_WinOpeationSt_FLWinSt' */
  Rte_Read_gWin_u8PWL_WinOpeationSt_FLWinSt_Val(&tmpRead_3);

  /* Inport: '<Root>/gWND_u8CurrentRRWinPst' */
  Rte_Read_gWND_u8CurrentRRWinPst_Val(&tmpRead_2);

  /* Inport: '<Root>/gWND_u8CurrentRLWinPst' */
  Rte_Read_gWND_u8CurrentRLWinPst_Val(&tmpRead_1);

  /* Inport: '<Root>/gWND_u8CurrentFRWinPst' */
  Rte_Read_gWND_u8CurrentFRWinPst_Val(&tmpRead_0);

  /* Inport: '<Root>/gWND_u8CurrentFLWinPst' */
  Rte_Read_gWND_u8CurrentFLWinPst_Val(&tmpRead);

  /* Outport: '<Root>/ComTx_u8PWL_WinCurrentPos_FLWinPst' */
  (void) Rte_Write_ComTx_u8PWL_WinCurrentPos_FLWinPst_Val(tmpRead);

  /* Outport: '<Root>/ComTx_u8PWL_WinCurrentPos_FRWinPst' */
  (void) Rte_Write_ComTx_u8PWL_WinCurrentPos_FRWinPst_Val(tmpRead_0);

  /* Outport: '<Root>/ComTx_u8PWL_WinCurrentPos_RLWinPst' */
  (void) Rte_Write_ComTx_u8PWL_WinCurrentPos_RLWinPst_Val(tmpRead_1);

  /* Outport: '<Root>/ComTx_u8PWL_WinCurrentPos_RRWinPst' */
  (void) Rte_Write_ComTx_u8PWL_WinCurrentPos_RRWinPst_Val(tmpRead_2);

  /* Outport: '<Root>/ComTx_u8PWL_WinOpeationSt_FLWinSt' */
  (void) Rte_Write_ComTx_u8PWL_WinOpeationSt_FLWinSt_Val(tmpRead_3);

  /* Outport: '<Root>/ComTx_u8PWL_WinOpeationSt_FRWinSt' */
  (void) Rte_Write_ComTx_u8PWL_WinOpeationSt_FRWinSt_Val(tmpRead_4);

  /* Outport: '<Root>/ComTx_u8PWL_WinOpeationSt_RLWinSt' */
  (void) Rte_Write_ComTx_u8PWL_WinOpeationSt_RLWinSt_Val(tmpRead_5);

  /* Outport: '<Root>/ComTx_u8PWL_WinOpeationSt_RRWinSt' */
  (void) Rte_Write_ComTx_u8PWL_WinOpeationSt_RRWinSt_Val(tmpRead_6);

  /* Outport: '<Root>/ComTx_bPWL_PassengerWinLockLedFltSt' */
  (void) Rte_Write_ComTx_bPWL_PassengerWinLockLedFltSt_Val(tmpRead_7);

  /* Outport: '<Root>/ComTx_bUINM_FLDoorOutsideSwSt' */
  (void) Rte_Write_ComTx_bUINM_FLDoorOutsideSwSt_Val(tmpRead_8);

  /* Outport: '<Root>/ComTx_bUINM_FRDoorOutsideSwSt' */
  (void) Rte_Write_ComTx_bUINM_FRDoorOutsideSwSt_Val(tmpRead_9);

  /* Outport: '<Root>/ComTx_bUINM_RLDoorOutsideSwSt' */
  (void) Rte_Write_ComTx_bUINM_RLDoorOutsideSwSt_Val(tmpRead_a);

  /* Outport: '<Root>/ComTx_bUINM_RRDoorOutsideSwSt' */
  (void) Rte_Write_ComTx_bUINM_RRDoorOutsideSwSt_Val(tmpRead_b);

  /* Outport: '<Root>/ComTx_u8UINM_DriverSide_FLWinSwSt' */
  (void) Rte_Write_ComTx_u8UINM_DriverSide_FLWinSwSt_Val(tmpRead_c);

  /* Outport: '<Root>/ComTx_u8UINM_DriverSide_FRWinSwSt' */
  (void) Rte_Write_ComTx_u8UINM_DriverSide_FRWinSwSt_Val(tmpRead_d);

  /* Outport: '<Root>/ComTx_u8UINM_DriverSide_RLWinSwSt' */
  (void) Rte_Write_ComTx_u8UINM_DriverSide_RLWinSwSt_Val(tmpRead_e);

  /* Outport: '<Root>/ComTx_u8UINM_DriverSide_RRWinSwSt' */
  (void) Rte_Write_ComTx_u8UINM_DriverSide_RRWinSwSt_Val(tmpRead_f);

  /* Outport: '<Root>/ComTx_bPWL_FLWinMotErrSt' */
  (void) Rte_Write_ComTx_bPWL_FLWinMotErrSt_Val(tmpRead_g);

  /* Outport: '<Root>/ComTx_bPWL_FRWinMotErrSt' */
  (void) Rte_Write_ComTx_bPWL_FRWinMotErrSt_Val(tmpRead_h);

  /* Outport: '<Root>/ComTx_bPWL_RLWinMotErrSt' */
  (void) Rte_Write_ComTx_bPWL_RLWinMotErrSt_Val(tmpRead_i);

  /* Outport: '<Root>/ComTx_bPWL_RRWinMotErrSt' */
  (void) Rte_Write_ComTx_bPWL_RRWinMotErrSt_Val(tmpRead_j);

  /* Outport: '<Root>/ComTx_bPWL_FLWinShortDropSt' */
  (void) Rte_Write_ComTx_bPWL_FLWinShortDropSt_Val(tmpRead_k);

  /* Outport: '<Root>/ComTx_bPWL_FRWinShortDropSt' */
  (void) Rte_Write_ComTx_bPWL_FRWinShortDropSt_Val(tmpRead_l);

  /* Outport: '<Root>/ComTx_bPWL_RLWinShortDropSt' */
  (void) Rte_Write_ComTx_bPWL_RLWinShortDropSt_Val(tmpRead_m);

  /* Outport: '<Root>/ComTx_bPWL_RRWinShortDropSt' */
  (void) Rte_Write_ComTx_bPWL_RRWinShortDropSt_Val(tmpRead_n);

  /* Outport: '<Root>/ComTx_bUINM_PassengerWinLockBtnSt' */
  (void) Rte_Write_ComTx_bUINM_PassengerWinLockBtnSt_Val(tmpRead_o);

  /* Outport: '<Root>/ComTx_u8PWL_PassengerWinLockLedSt' */
  (void) Rte_Write_ComTx_u8PWL_PassengerWinLockLedSt_Val(tmpRead_p);

  /* Outport: '<Root>/ComTx_u8UINM_LocalSide_FRWinSwSt' */
  (void) Rte_Write_ComTx_u8UINM_LocalSide_FRWinSwSt_Val(tmpRead_q);

  /* Outport: '<Root>/ComTx_u8UINM_LocalSide_RLWinSwSt' */
  (void) Rte_Write_ComTx_u8UINM_LocalSide_RLWinSwSt_Val(tmpRead_r);

  /* Outport: '<Root>/ComTx_u8UINM_LocalSide_RRWinSwSt' */
  (void) Rte_Write_ComTx_u8UINM_LocalSide_RRWinSwSt_Val(tmpRead_s);

  /* Outport: '<Root>/ComTx_u8UINM_LocalSide_FRWinSwSt_A09' */
  (void) Rte_Write_ComTx_u8UINM_LocalSide_FRWinSwSt_A09_Val(tmpRead_q);

  /* Outport: '<Root>/ComTx_u8UINM_LocalSide_FRWinSwSt_Can02' */
  (void) Rte_Write_ComTx_u8UINM_LocalSide_FRWinSwSt_Can02_Val(tmpRead_q);

  /* Outport: '<Root>/ComTx_bPWL_FRWinShortDropSt_Can02' */
  (void) Rte_Write_ComTx_bPWL_FRWinShortDropSt_Can02_Val(tmpRead_l);

  /* Outport: '<Root>/ComTx_u8PWL_WinOpeationSt_FRWinSt_Can02' */
  (void) Rte_Write_ComTx_u8PWL_WinOpeationSt_FRWinSt_Can02_Val(tmpRead_4);

  /* Outport: '<Root>/ComTx_bPWL_FRWinMotErrSt_Can02' */
  (void) Rte_Write_ComTx_bPWL_FRWinMotErrSt_Can02_Val(tmpRead_h);

  /* Outport: '<Root>/ComTx_u8PWL_WinCurrentPos_FRWinPst_Can02' */
  (void) Rte_Write_ComTx_u8PWL_WinCurrentPos_FRWinPst_Can02_Val(tmpRead_0);

  /* Outport: '<Root>/ComTx_bUINM_FRDoorOutsideSwSt_Can02' */
  (void) Rte_Write_ComTx_bUINM_FRDoorOutsideSwSt_Can02_Val(tmpRead_9);
}

/* Model initialize function */
void Win_ComCnvTx_Runnable_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
