/*
 * File: EFuse_Mon.h
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

#ifndef RTW_HEADER_EFuse_Mon_h_
#define RTW_HEADER_EFuse_Mon_h_
#include <math.h>
#ifndef EFuse_Mon_COMMON_INCLUDES_
#define EFuse_Mon_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_EFuse_Mon.h"
#endif                                 /* EFuse_Mon_COMMON_INCLUDES_ */

#include "EFuse_Mon_types.h"

/* Macros for accessing real-time model data structure */

#define EFuse_Mon_VAR

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_EFuse_Mon_T {
  float64 DiscreteTimeIntegrator_DSTATE;/* '<S137>/Discrete-Time Integrator' */
  float64 DiscreteTimeIntegrator_DSTATE_j;/* '<S139>/Discrete-Time Integrator' */
  float64 DiscreteTimeIntegrator_DSTATE_o;/* '<S138>/Discrete-Time Integrator' */
  float64 DiscreteTimeIntegrator_DSTATE_h;/* '<S140>/Discrete-Time Integrator' */
  float64 DiscreteTimeIntegrator_DSTATE_g;/* '<S141>/Discrete-Time Integrator' */
  float64 DiscreteTimeIntegrator_DSTATE_b;/* '<S142>/Discrete-Time Integrator' */
  float64 DiscreteTimeIntegrator_DSTAT_bj;/* '<S143>/Discrete-Time Integrator' */
  float64 DiscreteTimeIntegrator_DSTATE_a;/* '<S144>/Discrete-Time Integrator' */
  float64 DiscreteTimeIntegrator_DSTATE_m;/* '<S145>/Discrete-Time Integrator' */
  uint32 UnitDelay_DSTATE;             /* '<S13>/Unit Delay' */
  uint32 UnitDelay_DSTATE_j;           /* '<S14>/Unit Delay' */
} DW_EFuse_Mon_T;

/* Invariant block signals (default storage) */
typedef struct {
  const uint32 FixPtBitwiseOperator4;  /* '<S65>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3;  /* '<S65>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5;  /* '<S65>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1;  /* '<S69>/FixPt Bitwise Operator1' */
  const uint32 FixPtBitwiseOperator4_n;/* '<S73>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_d;/* '<S73>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_i;/* '<S73>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_a;/* '<S77>/FixPt Bitwise Operator1' */
  const uint32 Switch;                 /* '<S57>/Switch' */
  const uint32 FixPtBitwiseOperator4_d;/* '<S74>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_g;/* '<S74>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_n;/* '<S74>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_f;/* '<S78>/FixPt Bitwise Operator1' */
  const uint32 Switch7;                /* '<S57>/Switch7' */
  const uint32 FixPtBitwiseOperator4_b;/* '<S75>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_e;/* '<S75>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_g;/* '<S75>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_b;/* '<S79>/FixPt Bitwise Operator1' */
  const uint32 Switch8;                /* '<S57>/Switch8' */
  const uint32 FixPtBitwiseOperator4_a;/* '<S76>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_dl;/* '<S76>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_h;/* '<S76>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_i;/* '<S80>/FixPt Bitwise Operator1' */
  const uint32 FixPtBitwiseOperator4_h;/* '<S81>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_i;/* '<S81>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_l;/* '<S81>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_n;/* '<S85>/FixPt Bitwise Operator1' */
  const uint32 FixPtBitwiseOperator4_f;/* '<S89>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_c;/* '<S89>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_n3;/* '<S89>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_d;/* '<S93>/FixPt Bitwise Operator1' */
  const uint32 Switch_l;               /* '<S59>/Switch' */
  const uint32 FixPtBitwiseOperator4_o;/* '<S90>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_h;/* '<S90>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_o;/* '<S90>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_e;/* '<S94>/FixPt Bitwise Operator1' */
  const uint32 Switch7_n;              /* '<S59>/Switch7' */
  const uint32 FixPtBitwiseOperator4_nr;/* '<S91>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_es;/* '<S91>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_oc;/* '<S91>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_m;/* '<S95>/FixPt Bitwise Operator1' */
  const uint32 Switch8_p;              /* '<S59>/Switch8' */
  const uint32 FixPtBitwiseOperator4_fq;/* '<S92>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_n;/* '<S92>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_k;/* '<S92>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_mv;/* '<S96>/FixPt Bitwise Operator1' */
  const uint32 FixPtBitwiseOperator4_e;/* '<S97>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_f;/* '<S97>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_b;/* '<S97>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_f4;/* '<S101>/FixPt Bitwise Operator1' */
  const uint32 FixPtBitwiseOperator4_p;/* '<S105>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_cs;/* '<S105>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_i3;/* '<S105>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_es;/* '<S109>/FixPt Bitwise Operator1' */
  const uint32 FixPtBitwiseOperator4_k;/* '<S113>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_p;/* '<S113>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_d;/* '<S113>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_o;/* '<S117>/FixPt Bitwise Operator1' */
  const uint32 Switch_c;               /* '<S62>/Switch' */
  const uint32 FixPtBitwiseOperator4_pv;/* '<S114>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_nv;/* '<S114>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_bb;/* '<S114>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_n4;/* '<S118>/FixPt Bitwise Operator1' */
  const uint32 Switch7_g;              /* '<S62>/Switch7' */
  const uint32 FixPtBitwiseOperator4_l;/* '<S115>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_o;/* '<S115>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_ll;/* '<S115>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_k;/* '<S119>/FixPt Bitwise Operator1' */
  const uint32 Switch8_c;              /* '<S62>/Switch8' */
  const uint32 FixPtBitwiseOperator4_g;/* '<S116>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_csp;/* '<S116>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_j;/* '<S116>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_av;/* '<S120>/FixPt Bitwise Operator1' */
  const uint32 FixPtBitwiseOperator4_pp;/* '<S121>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_ca;/* '<S121>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_c;/* '<S121>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_d1;/* '<S125>/FixPt Bitwise Operator1' */
  const uint32 Switch_j;               /* '<S63>/Switch' */
  const uint32 FixPtBitwiseOperator4_bd;/* '<S122>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_fk;/* '<S122>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_e;/* '<S122>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_kp;/* '<S126>/FixPt Bitwise Operator1' */
  const uint32 Switch7_j;              /* '<S63>/Switch7' */
  const uint32 FixPtBitwiseOperator4_m;/* '<S123>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_m;/* '<S123>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_kk;/* '<S123>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_j;/* '<S127>/FixPt Bitwise Operator1' */
  const uint32 Switch8_k;              /* '<S63>/Switch8' */
  const uint32 FixPtBitwiseOperator4_a5;/* '<S124>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_b;/* '<S124>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_m;/* '<S124>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_g;/* '<S128>/FixPt Bitwise Operator1' */
  const uint32 FixPtBitwiseOperator4_i;/* '<S129>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_m0;/* '<S129>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_mm;/* '<S129>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_l;/* '<S133>/FixPt Bitwise Operator1' */
  const uint32 Switch_k;               /* '<S64>/Switch' */
  const uint32 FixPtBitwiseOperator4_md;/* '<S130>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_mm;/* '<S130>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_mmj;/* '<S130>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_fw;/* '<S134>/FixPt Bitwise Operator1' */
  const uint32 Switch7_o;              /* '<S64>/Switch7' */
  const uint32 FixPtBitwiseOperator4_ko;/* '<S131>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_g0;/* '<S131>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_nv;/* '<S131>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_e5;/* '<S135>/FixPt Bitwise Operator1' */
  const uint32 Switch8_o;              /* '<S64>/Switch8' */
  const uint32 FixPtBitwiseOperator4_lc;/* '<S132>/FixPt Bitwise Operator4' */
  const uint32 FixPtBitwiseOperator3_fr;/* '<S132>/FixPt Bitwise Operator3' */
  const uint32 FixPtBitwiseOperator5_ka;/* '<S132>/FixPt Bitwise Operator5' */
  const uint32 FixPtBitwiseOperator1_az;/* '<S136>/FixPt Bitwise Operator1' */
} ConstB_EFuse_Mon_T;

/* Block states (default storage) */
extern VAR(DW_EFuse_Mon_T, EFuse_Mon_VAR) EFuse_Mon_DW;

/* Static Memory for Internal Data */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse03;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get2' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse01;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse01;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse01Fild;

/* '<S6>/Switch' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse06;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get5' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse05;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get4' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse02;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get1' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse04;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get3' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse07;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get6' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse08;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get7' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_DiagInfoFuse09;

/* '<S5>/EFuse_DiagInfo_Get_EFuse_DiagInfo_Get8' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse02;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get1' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse02Fild;

/* '<S6>/Switch1' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse03;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get2' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse03Fild;

/* '<S6>/Switch2' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse04;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get3' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse04Fild;

/* '<S6>/Switch3' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse05;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get4' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse05Fild;

/* '<S6>/Switch4' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse06;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get5' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse06Fild;

/* '<S6>/Switch5' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse07;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get6' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse07Fild;

/* '<S6>/Switch6' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse08;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get7' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse08Fild;

/* '<S6>/Switch7' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_EFuse_iRawFuse09;

/* '<S7>/EFuse_Current_Get_EFuse_Current_Get8' */
extern VAR(uint32, EFuse_Mon_VAR) EFuse_Mon_iFuse09Fild;

/* '<S6>/Switch8' */
extern VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse01;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get' */
extern VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse02;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get1' */
extern VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse03;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get2' */
extern VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse04;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get3' */
extern VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse05;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get4' */
extern VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse06;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get5' */
extern VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse07;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get6' */
extern VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse08;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get7' */
extern VAR(uint8, EFuse_Mon_VAR) EFuse_Mon_stSleepFuse09;

/* '<S10>/EFuse_ActMode_Get_EFuse_SleepState_Get8' */
extern VAR(boolean, EFuse_Mon_VAR) EFuse_UltrasonicRadar1SCGFault;

/* '<S13>/Relational Operator' */
extern VAR(boolean, EFuse_Mon_VAR) EFuse_M_UltrasonicRadar1OCFault;

/* '<S14>/Relational Operator' */
extern VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse01SWProt;

/* '<S137>/Relational Operator1' */
extern VAR(boolean, EFuse_Mon_VAR) EFus_DTCRearDCDCPwrSplySCGFault;

/* '<S8>/Logical Operator' */
extern VAR(boolean, EFuse_Mon_VAR) EFuse_DTCRearDCDCPwrSplyOCFault;

/* '<S8>/Logical Operator2' */
extern VAR(boolean, EFuse_Mon_VAR) EF_DTCADCBackup1PwrSplySCGFault;

/* '<S8>/Logical Operator3' */
extern VAR(boolean, EFuse_Mon_VAR) EFu_DTCADCBackup1PwrSplyOLFault;

/* '<S8>/Logical Operator4' */
extern VAR(boolean, EFuse_Mon_VAR) EFu_DTCADCBackup1PwrSplyOCFault;

/* '<S8>/Logical Operator5' */
extern VAR(boolean, EFuse_Mon_VAR) EF_DTCADCBackup2PwrSplySCGFault;

/* '<S8>/Logical Operator6' */
extern VAR(boolean, EFuse_Mon_VAR) EFu_DTCADCBackup2PwrSplyOLFault;

/* '<S8>/Logical Operator7' */
extern VAR(boolean, EFuse_Mon_VAR) EFu_DTCADCBackup2PwrSplyOCFault;

/* '<S8>/Logical Operator8' */
extern VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse03SWProt;

/* '<S139>/Relational Operator1' */
extern VAR(boolean, EFuse_Mon_VAR) EFuse_DTCRearDCDCPwrSplyOLFault;

/* '<S8>/Logical Operator1' */
extern VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse02SWProt;

/* '<S138>/Relational Operator1' */
extern VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse04SWProt;

/* '<S140>/Relational Operator1' */
extern VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse05SWProt;

/* '<S141>/Relational Operator1' */
extern VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse06SWProt;

/* '<S142>/Relational Operator1' */
extern VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse07SWProt;

/* '<S143>/Relational Operator1' */
extern VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse08SWProt;

/* '<S144>/Relational Operator1' */
extern VAR(boolean, EFuse_Mon_VAR) EFuse_Mon_flgFuse09SWProt;

/* '<S145>/Relational Operator1' */
extern CONST(ConstB_EFuse_Mon_T, EFuse_Mon_VAR) EFuse_Mon_ConstB;/* constant block i/o */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S11>/Constant2' : Unused code path elimination
 * Block '<S11>/Constant3' : Unused code path elimination
 * Block '<S29>/DTProp1' : Unused code path elimination
 * Block '<S29>/DTProp2' : Unused code path elimination
 * Block '<S30>/DTProp1' : Unused code path elimination
 * Block '<S30>/DTProp2' : Unused code path elimination
 * Block '<S30>/Extract Desired Bits' : Unused code path elimination
 * Block '<S30>/Modify Scaling Only' : Unused code path elimination
 * Block '<S31>/DTProp1' : Unused code path elimination
 * Block '<S31>/DTProp2' : Unused code path elimination
 * Block '<S11>/Switch1' : Unused code path elimination
 * Block '<S12>/Constant' : Unused code path elimination
 * Block '<S12>/Constant1' : Unused code path elimination
 * Block '<S12>/Constant2' : Unused code path elimination
 * Block '<S12>/Constant3' : Unused code path elimination
 * Block '<S12>/Constant4' : Unused code path elimination
 * Block '<S12>/Constant5' : Unused code path elimination
 * Block '<S32>/DTProp1' : Unused code path elimination
 * Block '<S32>/DTProp2' : Unused code path elimination
 * Block '<S32>/Extract Desired Bits' : Unused code path elimination
 * Block '<S32>/Modify Scaling Only' : Unused code path elimination
 * Block '<S33>/DTProp1' : Unused code path elimination
 * Block '<S33>/DTProp2' : Unused code path elimination
 * Block '<S33>/Extract Desired Bits' : Unused code path elimination
 * Block '<S33>/Modify Scaling Only' : Unused code path elimination
 * Block '<S34>/DTProp1' : Unused code path elimination
 * Block '<S34>/DTProp2' : Unused code path elimination
 * Block '<S34>/Extract Desired Bits' : Unused code path elimination
 * Block '<S34>/Modify Scaling Only' : Unused code path elimination
 * Block '<S12>/Switch' : Unused code path elimination
 * Block '<S12>/Switch1' : Unused code path elimination
 * Block '<S12>/Switch2' : Unused code path elimination
 * Block '<S15>/Constant2' : Unused code path elimination
 * Block '<S15>/Constant3' : Unused code path elimination
 * Block '<S35>/DTProp1' : Unused code path elimination
 * Block '<S35>/DTProp2' : Unused code path elimination
 * Block '<S36>/DTProp1' : Unused code path elimination
 * Block '<S36>/DTProp2' : Unused code path elimination
 * Block '<S36>/Extract Desired Bits' : Unused code path elimination
 * Block '<S36>/Modify Scaling Only' : Unused code path elimination
 * Block '<S37>/DTProp1' : Unused code path elimination
 * Block '<S37>/DTProp2' : Unused code path elimination
 * Block '<S15>/Switch1' : Unused code path elimination
 * Block '<S16>/Constant' : Unused code path elimination
 * Block '<S16>/Constant1' : Unused code path elimination
 * Block '<S16>/Constant2' : Unused code path elimination
 * Block '<S16>/Constant3' : Unused code path elimination
 * Block '<S16>/Constant4' : Unused code path elimination
 * Block '<S16>/Constant5' : Unused code path elimination
 * Block '<S38>/DTProp1' : Unused code path elimination
 * Block '<S38>/DTProp2' : Unused code path elimination
 * Block '<S38>/Extract Desired Bits' : Unused code path elimination
 * Block '<S38>/Modify Scaling Only' : Unused code path elimination
 * Block '<S39>/DTProp1' : Unused code path elimination
 * Block '<S39>/DTProp2' : Unused code path elimination
 * Block '<S39>/Extract Desired Bits' : Unused code path elimination
 * Block '<S39>/Modify Scaling Only' : Unused code path elimination
 * Block '<S40>/DTProp1' : Unused code path elimination
 * Block '<S40>/DTProp2' : Unused code path elimination
 * Block '<S40>/Extract Desired Bits' : Unused code path elimination
 * Block '<S40>/Modify Scaling Only' : Unused code path elimination
 * Block '<S16>/Switch' : Unused code path elimination
 * Block '<S16>/Switch1' : Unused code path elimination
 * Block '<S16>/Switch2' : Unused code path elimination
 * Block '<S41>/DTProp1' : Unused code path elimination
 * Block '<S41>/DTProp2' : Unused code path elimination
 * Block '<S42>/DTProp1' : Unused code path elimination
 * Block '<S42>/DTProp2' : Unused code path elimination
 * Block '<S43>/DTProp1' : Unused code path elimination
 * Block '<S43>/DTProp2' : Unused code path elimination
 * Block '<S44>/DTProp1' : Unused code path elimination
 * Block '<S44>/DTProp2' : Unused code path elimination
 * Block '<S45>/DTProp1' : Unused code path elimination
 * Block '<S45>/DTProp2' : Unused code path elimination
 * Block '<S46>/DTProp1' : Unused code path elimination
 * Block '<S46>/DTProp2' : Unused code path elimination
 * Block '<S19>/Constant' : Unused code path elimination
 * Block '<S19>/Constant1' : Unused code path elimination
 * Block '<S19>/Constant2' : Unused code path elimination
 * Block '<S19>/Constant3' : Unused code path elimination
 * Block '<S19>/Constant4' : Unused code path elimination
 * Block '<S19>/Constant5' : Unused code path elimination
 * Block '<S47>/DTProp1' : Unused code path elimination
 * Block '<S47>/DTProp2' : Unused code path elimination
 * Block '<S47>/Extract Desired Bits' : Unused code path elimination
 * Block '<S47>/Modify Scaling Only' : Unused code path elimination
 * Block '<S48>/DTProp1' : Unused code path elimination
 * Block '<S48>/DTProp2' : Unused code path elimination
 * Block '<S48>/Extract Desired Bits' : Unused code path elimination
 * Block '<S48>/Modify Scaling Only' : Unused code path elimination
 * Block '<S49>/DTProp1' : Unused code path elimination
 * Block '<S49>/DTProp2' : Unused code path elimination
 * Block '<S49>/Extract Desired Bits' : Unused code path elimination
 * Block '<S49>/Modify Scaling Only' : Unused code path elimination
 * Block '<S19>/Switch' : Unused code path elimination
 * Block '<S19>/Switch1' : Unused code path elimination
 * Block '<S19>/Switch2' : Unused code path elimination
 * Block '<S20>/Constant10' : Unused code path elimination
 * Block '<S20>/Constant11' : Unused code path elimination
 * Block '<S20>/Constant12' : Unused code path elimination
 * Block '<S20>/Constant13' : Unused code path elimination
 * Block '<S20>/Constant14' : Unused code path elimination
 * Block '<S20>/Constant15' : Unused code path elimination
 * Block '<S20>/Constant24' : Unused code path elimination
 * Block '<S20>/Constant25' : Unused code path elimination
 * Block '<S20>/Constant26' : Unused code path elimination
 * Block '<S20>/Constant27' : Unused code path elimination
 * Block '<S20>/Constant28' : Unused code path elimination
 * Block '<S20>/Constant29' : Unused code path elimination
 * Block '<S20>/Constant30' : Unused code path elimination
 * Block '<S20>/Constant31' : Unused code path elimination
 * Block '<S20>/Constant32' : Unused code path elimination
 * Block '<S20>/Constant33' : Unused code path elimination
 * Block '<S20>/Constant34' : Unused code path elimination
 * Block '<S20>/Constant35' : Unused code path elimination
 * Block '<S20>/Constant4' : Unused code path elimination
 * Block '<S20>/Constant5' : Unused code path elimination
 * Block '<S20>/Constant6' : Unused code path elimination
 * Block '<S20>/Constant7' : Unused code path elimination
 * Block '<S20>/Constant8' : Unused code path elimination
 * Block '<S20>/Constant9' : Unused code path elimination
 * Block '<S20>/Logical Operator1' : Unused code path elimination
 * Block '<S20>/Logical Operator11' : Unused code path elimination
 * Block '<S20>/Logical Operator12' : Unused code path elimination
 * Block '<S20>/Logical Operator13' : Unused code path elimination
 * Block '<S20>/Logical Operator16' : Unused code path elimination
 * Block '<S20>/Logical Operator17' : Unused code path elimination
 * Block '<S20>/Logical Operator18' : Unused code path elimination
 * Block '<S20>/Logical Operator2' : Unused code path elimination
 * Block '<S20>/Logical Operator3' : Unused code path elimination
 * Block '<S20>/Logical Operator6' : Unused code path elimination
 * Block '<S20>/Logical Operator7' : Unused code path elimination
 * Block '<S20>/Logical Operator8' : Unused code path elimination
 * Block '<S20>/Relational Operator10' : Unused code path elimination
 * Block '<S20>/Relational Operator11' : Unused code path elimination
 * Block '<S20>/Relational Operator12' : Unused code path elimination
 * Block '<S20>/Relational Operator13' : Unused code path elimination
 * Block '<S20>/Relational Operator14' : Unused code path elimination
 * Block '<S20>/Relational Operator15' : Unused code path elimination
 * Block '<S20>/Relational Operator24' : Unused code path elimination
 * Block '<S20>/Relational Operator25' : Unused code path elimination
 * Block '<S20>/Relational Operator26' : Unused code path elimination
 * Block '<S20>/Relational Operator27' : Unused code path elimination
 * Block '<S20>/Relational Operator28' : Unused code path elimination
 * Block '<S20>/Relational Operator29' : Unused code path elimination
 * Block '<S20>/Relational Operator30' : Unused code path elimination
 * Block '<S20>/Relational Operator31' : Unused code path elimination
 * Block '<S20>/Relational Operator32' : Unused code path elimination
 * Block '<S20>/Relational Operator33' : Unused code path elimination
 * Block '<S20>/Relational Operator34' : Unused code path elimination
 * Block '<S20>/Relational Operator35' : Unused code path elimination
 * Block '<S20>/Relational Operator4' : Unused code path elimination
 * Block '<S20>/Relational Operator5' : Unused code path elimination
 * Block '<S20>/Relational Operator6' : Unused code path elimination
 * Block '<S20>/Relational Operator7' : Unused code path elimination
 * Block '<S20>/Relational Operator8' : Unused code path elimination
 * Block '<S20>/Relational Operator9' : Unused code path elimination
 * Block '<S21>/Constant' : Unused code path elimination
 * Block '<S21>/Constant1' : Unused code path elimination
 * Block '<S21>/Constant2' : Unused code path elimination
 * Block '<S21>/Constant3' : Unused code path elimination
 * Block '<S21>/Constant4' : Unused code path elimination
 * Block '<S21>/Constant5' : Unused code path elimination
 * Block '<S50>/DTProp1' : Unused code path elimination
 * Block '<S50>/DTProp2' : Unused code path elimination
 * Block '<S50>/Extract Desired Bits' : Unused code path elimination
 * Block '<S50>/Modify Scaling Only' : Unused code path elimination
 * Block '<S51>/DTProp1' : Unused code path elimination
 * Block '<S51>/DTProp2' : Unused code path elimination
 * Block '<S51>/Extract Desired Bits' : Unused code path elimination
 * Block '<S51>/Modify Scaling Only' : Unused code path elimination
 * Block '<S52>/DTProp1' : Unused code path elimination
 * Block '<S52>/DTProp2' : Unused code path elimination
 * Block '<S52>/Extract Desired Bits' : Unused code path elimination
 * Block '<S52>/Modify Scaling Only' : Unused code path elimination
 * Block '<S21>/Switch' : Unused code path elimination
 * Block '<S21>/Switch1' : Unused code path elimination
 * Block '<S21>/Switch2' : Unused code path elimination
 * Block '<S22>/Constant' : Unused code path elimination
 * Block '<S22>/Constant1' : Unused code path elimination
 * Block '<S22>/Constant2' : Unused code path elimination
 * Block '<S22>/Constant3' : Unused code path elimination
 * Block '<S22>/Constant4' : Unused code path elimination
 * Block '<S22>/Constant5' : Unused code path elimination
 * Block '<S53>/DTProp1' : Unused code path elimination
 * Block '<S53>/DTProp2' : Unused code path elimination
 * Block '<S53>/Extract Desired Bits' : Unused code path elimination
 * Block '<S53>/Modify Scaling Only' : Unused code path elimination
 * Block '<S54>/DTProp1' : Unused code path elimination
 * Block '<S54>/DTProp2' : Unused code path elimination
 * Block '<S54>/Extract Desired Bits' : Unused code path elimination
 * Block '<S54>/Modify Scaling Only' : Unused code path elimination
 * Block '<S55>/DTProp1' : Unused code path elimination
 * Block '<S55>/DTProp2' : Unused code path elimination
 * Block '<S55>/Extract Desired Bits' : Unused code path elimination
 * Block '<S55>/Modify Scaling Only' : Unused code path elimination
 * Block '<S22>/Switch' : Unused code path elimination
 * Block '<S22>/Switch1' : Unused code path elimination
 * Block '<S22>/Switch2' : Unused code path elimination
 * Block '<S29>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S31>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S35>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S37>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S41>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S42>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S43>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S44>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S45>/Modify Scaling Only' : Eliminate redundant data type conversion
 * Block '<S46>/Modify Scaling Only' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'EFuse_Mon'
 * '<S1>'   : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys'
 * '<S2>'   : 'EFuse_Mon/EFuse_Mon_Runnable_Init'
 * '<S3>'   : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/CurrFildMsgSend'
 * '<S4>'   : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter'
 * '<S5>'   : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DiagInfoGet'
 * '<S6>'   : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/EFuseCurrFild'
 * '<S7>'   : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/EFuseCurrSens'
 * '<S8>'   : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender'
 * '<S9>'   : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/SWITCurveProtCalc'
 * '<S10>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/SleepStateGet'
 * '<S11>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem'
 * '<S12>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem1'
 * '<S13>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem10'
 * '<S14>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem12'
 * '<S15>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem2'
 * '<S16>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem3'
 * '<S17>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem4'
 * '<S18>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem5'
 * '<S19>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem6'
 * '<S20>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem7'
 * '<S21>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem8'
 * '<S22>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem9'
 * '<S23>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Switch Case Action Subsystem'
 * '<S24>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Switch Case Action Subsystem1'
 * '<S25>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Switch Case Action Subsystem2'
 * '<S26>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Switch Case Action Subsystem3'
 * '<S27>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Switch Case Action Subsystem4'
 * '<S28>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Switch Case Action Subsystem5'
 * '<S29>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem/Extract Bits'
 * '<S30>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem/Extract Bits1'
 * '<S31>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem/Extract Bits2'
 * '<S32>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem1/Extract Bits'
 * '<S33>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem1/Extract Bits1'
 * '<S34>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem1/Extract Bits2'
 * '<S35>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem2/Extract Bits'
 * '<S36>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem2/Extract Bits1'
 * '<S37>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem2/Extract Bits2'
 * '<S38>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem3/Extract Bits'
 * '<S39>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem3/Extract Bits1'
 * '<S40>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem3/Extract Bits2'
 * '<S41>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem4/Extract Bits'
 * '<S42>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem4/Extract Bits1'
 * '<S43>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem4/Extract Bits2'
 * '<S44>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem5/Extract Bits'
 * '<S45>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem5/Extract Bits1'
 * '<S46>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem5/Extract Bits2'
 * '<S47>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem6/Extract Bits'
 * '<S48>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem6/Extract Bits1'
 * '<S49>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem6/Extract Bits2'
 * '<S50>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem8/Extract Bits'
 * '<S51>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem8/Extract Bits1'
 * '<S52>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem8/Extract Bits2'
 * '<S53>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem9/Extract Bits'
 * '<S54>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem9/Extract Bits1'
 * '<S55>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/DTCCodeRepoter/Subsystem9/Extract Bits2'
 * '<S56>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem'
 * '<S57>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem1'
 * '<S58>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem2'
 * '<S59>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem3'
 * '<S60>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem4'
 * '<S61>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem5'
 * '<S62>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem6'
 * '<S63>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem7'
 * '<S64>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem8'
 * '<S65>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem/Bit Clear'
 * '<S66>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem/Bit Clear7'
 * '<S67>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem/Bit Clear8'
 * '<S68>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem/Bit Clear9'
 * '<S69>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem/Bit Set'
 * '<S70>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem/Bit Set7'
 * '<S71>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem/Bit Set8'
 * '<S72>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem/Bit Set9'
 * '<S73>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem1/Bit Clear'
 * '<S74>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem1/Bit Clear7'
 * '<S75>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem1/Bit Clear8'
 * '<S76>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem1/Bit Clear9'
 * '<S77>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem1/Bit Set'
 * '<S78>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem1/Bit Set7'
 * '<S79>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem1/Bit Set8'
 * '<S80>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem1/Bit Set9'
 * '<S81>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem2/Bit Clear'
 * '<S82>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem2/Bit Clear7'
 * '<S83>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem2/Bit Clear8'
 * '<S84>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem2/Bit Clear9'
 * '<S85>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem2/Bit Set'
 * '<S86>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem2/Bit Set7'
 * '<S87>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem2/Bit Set8'
 * '<S88>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem2/Bit Set9'
 * '<S89>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem3/Bit Clear'
 * '<S90>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem3/Bit Clear7'
 * '<S91>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem3/Bit Clear8'
 * '<S92>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem3/Bit Clear9'
 * '<S93>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem3/Bit Set'
 * '<S94>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem3/Bit Set7'
 * '<S95>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem3/Bit Set8'
 * '<S96>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem3/Bit Set9'
 * '<S97>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem4/Bit Clear'
 * '<S98>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem4/Bit Clear7'
 * '<S99>'  : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem4/Bit Clear8'
 * '<S100>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem4/Bit Clear9'
 * '<S101>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem4/Bit Set'
 * '<S102>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem4/Bit Set7'
 * '<S103>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem4/Bit Set8'
 * '<S104>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem4/Bit Set9'
 * '<S105>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem5/Bit Clear'
 * '<S106>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem5/Bit Clear7'
 * '<S107>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem5/Bit Clear8'
 * '<S108>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem5/Bit Clear9'
 * '<S109>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem5/Bit Set'
 * '<S110>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem5/Bit Set7'
 * '<S111>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem5/Bit Set8'
 * '<S112>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem5/Bit Set9'
 * '<S113>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem6/Bit Clear'
 * '<S114>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem6/Bit Clear7'
 * '<S115>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem6/Bit Clear8'
 * '<S116>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem6/Bit Clear9'
 * '<S117>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem6/Bit Set'
 * '<S118>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem6/Bit Set7'
 * '<S119>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem6/Bit Set8'
 * '<S120>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem6/Bit Set9'
 * '<S121>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem7/Bit Clear'
 * '<S122>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem7/Bit Clear7'
 * '<S123>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem7/Bit Clear8'
 * '<S124>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem7/Bit Clear9'
 * '<S125>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem7/Bit Set'
 * '<S126>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem7/Bit Set7'
 * '<S127>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem7/Bit Set8'
 * '<S128>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem7/Bit Set9'
 * '<S129>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem8/Bit Clear'
 * '<S130>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem8/Bit Clear7'
 * '<S131>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem8/Bit Clear8'
 * '<S132>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem8/Bit Clear9'
 * '<S133>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem8/Bit Set'
 * '<S134>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem8/Bit Set7'
 * '<S135>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem8/Bit Set8'
 * '<S136>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/ErrInfoSender/Subsystem8/Bit Set9'
 * '<S137>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/SWITCurveProtCalc/Fuse01SWProtCalc'
 * '<S138>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/SWITCurveProtCalc/Fuse02SWProtCalc'
 * '<S139>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/SWITCurveProtCalc/Fuse03SWProtCalc'
 * '<S140>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/SWITCurveProtCalc/Fuse04SWProtCalc'
 * '<S141>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/SWITCurveProtCalc/Fuse05SWProtCalc'
 * '<S142>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/SWITCurveProtCalc/Fuse06SWProtCalc'
 * '<S143>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/SWITCurveProtCalc/Fuse07SWProtCalc'
 * '<S144>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/SWITCurveProtCalc/Fuse08SWProtCalc'
 * '<S145>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/SWITCurveProtCalc/Fuse09SWProtCalc'
 * '<S146>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/SWITCurveProtCalc/ProtThdSelect'
 * '<S147>' : 'EFuse_Mon/EFuse_Mon_Runnable_10ms_sys/SWITCurveProtCalc/Subsystem'
 */
#endif                                 /* RTW_HEADER_EFuse_Mon_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
