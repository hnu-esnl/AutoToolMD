/*
 * File: HvacDampr_Ctrl.h
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

#ifndef RTW_HEADER_HvacDampr_Ctrl_h_
#define RTW_HEADER_HvacDampr_Ctrl_h_
#ifndef HvacDampr_Ctrl_COMMON_INCLUDES_
# define HvacDampr_Ctrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_HvacDampr_Ctrl.h"
#endif                                 /* HvacDampr_Ctrl_COMMON_INCLUDES_ */

#include "HvacDampr_Ctrl_types.h"

/* Child system includes */
#include "Rte_Type.h"
#include "Ifx.h"
#include "mfx.h"

/* Macros for accessing real-time model data structure */

/* user code (top of header file) */
#define HvacDampr_Ctrl_VAR
#define HvacDampr_Ctrl_CODE_LOCAL

/* Block states (default storage) for system '<S12>/Enabled Subsystem' */
typedef struct {
  uint16 Delay_DSTATE;                 /* '<S17>/Delay' */
} DW_EnabledSubsystem_HvacDampr_T;

/* Block states (default storage) for system '<S37>/DC Motor State' */
typedef struct {
  uint16 RefreshTargetPos;             /* '<S37>/DC Motor State' */
  uint16 temporalCounter_i1;           /* '<S37>/DC Motor State' */
  uint8 is_active_c4_HvacDampr_Ctrl;   /* '<S37>/DC Motor State' */
  uint8 is_c4_HvacDampr_Ctrl;          /* '<S37>/DC Motor State' */
} DW_DCMotorState_HvacDampr_Ctr_T;

/* Block states (default storage) for system '<S49>/DC Motor State' */
typedef struct {
  uint16 RefreshTargetPos;             /* '<S49>/DC Motor State' */
  uint16 temporalCounter_i1;           /* '<S49>/DC Motor State' */
  uint8 is_active_c7_HvacDampr_Ctrl;   /* '<S49>/DC Motor State' */
  uint8 is_c7_HvacDampr_Ctrl;          /* '<S49>/DC Motor State' */
} DW_DCMotorState_HvacDampr_C_m_T;

/* Block signals (default storage) */
typedef struct tag_B_HvacDampr_Ctrl_T {
  uint16 Merge2;                       /* '<S10>/Merge2' */
  uint16 Merge4;                       /* '<S10>/Merge4' */
  uint16 Merge2_j;                     /* '<S22>/Merge2' */
  uint16 Merge4_b;                     /* '<S22>/Merge4' */
  uint16 DataTypeConversion11;         /* '<S5>/DataTypeConversion11' */
  uint16 Merge;                        /* '<S35>/Merge' */
  uint16 Merge1;                       /* '<S35>/Merge1' */
  uint16 DataStoreRead;                /* '<S6>/Data Store Read' */
  uint16 DataTypeConversion17;         /* '<S7>/DataTypeConversion17' */
  uint16 Merge_m;                      /* '<S58>/Merge' */
  uint16 Merge1_b;                     /* '<S58>/Merge1' */
  uint16 Merge_f;                      /* '<S81>/Merge' */
  uint16 Merge1_c;                     /* '<S81>/Merge1' */
  uint16 LastTargetPos;                /* '<S83>/DC Motor State' */
  uint16 LastTargetPos_j;              /* '<S72>/DC Motor State' */
  uint16 LastTargetPos_n;              /* '<S60>/DC Motor State' */
  uint16 LastTargetPos_a;              /* '<S49>/DC Motor State' */
  uint16 LastTargetPos_h;              /* '<S37>/DC Motor State' */
  uint16 LastTargetPos_h2;             /* '<S25>/DC Motor State' */
  uint16 LastTargetPos_d;              /* '<S13>/DC Motor State' */
  uint8 Merge_c;                       /* '<S10>/Merge' */
  uint8 Merge1_l;                      /* '<S10>/Merge1' */
  uint8 Merge3;                        /* '<S10>/Merge3' */
  uint8 Merge_o;                       /* '<S22>/Merge' */
  uint8 Merge1_o;                      /* '<S22>/Merge1' */
  uint8 Merge3_g;                      /* '<S22>/Merge3' */
  uint8 Merge2_g;                      /* '<S35>/Merge2' */
  uint8 Merge3_i;                      /* '<S35>/Merge3' */
  uint8 Merge2_n;                      /* '<S58>/Merge2' */
  uint8 Merge3_j;                      /* '<S58>/Merge3' */
  uint8 Merge2_o;                      /* '<S81>/Merge2' */
  uint8 Merge3_b;                      /* '<S81>/Merge3' */
  uint8 Out_RunSts;                    /* '<S83>/DC Motor State' */
  uint8 Out_MotorSts;                  /* '<S83>/DC Motor State' */
  uint8 Moto_JAM_St;                   /* '<S83>/DC Motor State' */
  uint8 In1;                           /* '<S90>/In1' */
  uint8 In1_d;                         /* '<S91>/In1' */
  uint8 Out_RunSts_j;                  /* '<S72>/DC Motor State' */
  uint8 Out_MotorSts_i;                /* '<S72>/DC Motor State' */
  uint8 Moto_JAM_St_i;                 /* '<S72>/DC Motor State' */
  uint8 In1_e;                         /* '<S77>/In1' */
  uint8 In1_l;                         /* '<S78>/In1' */
  uint8 u8Mode_St;                     /* '<S70>/Re_Mode_Act_Fb1' */
  uint8 Out_RunSts_e;                  /* '<S60>/DC Motor State' */
  uint8 Out_MotorSts_k;                /* '<S60>/DC Motor State' */
  uint8 Moto_JAM_St_f;                 /* '<S60>/DC Motor State' */
  uint8 In1_h;                         /* '<S67>/In1' */
  uint8 In1_o;                         /* '<S68>/In1' */
  uint8 Out_RunSts_jc;                 /* '<S49>/DC Motor State' */
  uint8 Out_MotorSts_e;                /* '<S49>/DC Motor State' */
  uint8 Moto_JAM_St_j;                 /* '<S49>/DC Motor State' */
  uint8 In1_dx;                        /* '<S54>/In1' */
  uint8 In1_n;                         /* '<S55>/In1' */
  uint8 u8Mode_St_h;                   /* '<S47>/Mode_Act_Fb1' */
  uint8 Out_RunSts_n;                  /* '<S37>/DC Motor State' */
  uint8 Out_MotorSts_f;                /* '<S37>/DC Motor State' */
  uint8 Moto_JAM_St_n;                 /* '<S37>/DC Motor State' */
  uint8 In1_hi;                        /* '<S44>/In1' */
  uint8 In1_ni;                        /* '<S45>/In1' */
  uint8 Out_RunSts_o;                  /* '<S25>/DC Motor State' */
  uint8 Out_MotorSts_h;                /* '<S25>/DC Motor State' */
  uint8 Moto_JAM_St_fz;                /* '<S25>/DC Motor State' */
  uint8 In1_hu;                        /* '<S31>/In1' */
  uint8 In1_hh;                        /* '<S32>/In1' */
  uint8 Out_RunSts_c;                  /* '<S13>/DC Motor State' */
  uint8 Out_MotorSts_e1;               /* '<S13>/DC Motor State' */
  uint8 Moto_JAM_St_h;                 /* '<S13>/DC Motor State' */
  uint8 In1_lm;                        /* '<S19>/In1' */
  uint8 In1_j;                         /* '<S20>/In1' */
  boolean In1_en;                      /* '<S89>/In1' */
  boolean In1_eo;                      /* '<S76>/In1' */
  boolean In1_a;                       /* '<S66>/In1' */
  boolean In1_nc;                      /* '<S53>/In1' */
  boolean In1_f;                       /* '<S43>/In1' */
  boolean In1_e4;                      /* '<S30>/In1' */
  boolean In1_b;                       /* '<S18>/In1' */
} B_HvacDampr_Ctrl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_HvacDampr_Ctrl_T {
  uint16 Delay_DSTATE;                 /* '<S6>/Delay' */
  uint16 Delay_DSTATE_k;               /* '<S8>/Delay' */
  uint16 HvacDampr_uDrvrRcrltnMotFb;   /* '<S3>/Data Store Memory13' */
  uint16 HvacDampr_uRcrltnMotFb;       /* '<S4>/Data Store Memory13' */
  uint16 u16DrTEMPHmixTargetPos;       /* '<S5>/Data Store Memory1' */
  uint16 HvacDampr_uDrvrMixMotFb;      /* '<S5>/Data Store Memory10' */
  uint16 HvacDampr_uModMotFb;          /* '<S6>/Data Store Memory12' */
  uint16 HvacDampr_uPassMixMotFb;      /* '<S7>/Data Store Memory11' */
  uint16 HvacDampr_uReModMotFb;        /* '<S8>/Data Store Memory12' */
  uint16 HvacDampr_uReMixMotFb;        /* '<S9>/Data Store Memory11' */
  uint16 RefreshTargetPos;             /* '<S72>/DC Motor State' */
  uint16 temporalCounter_i1;           /* '<S72>/DC Motor State' */
  uint16 RefreshTargetPos_l;           /* '<S25>/DC Motor State' */
  uint16 temporalCounter_i1_n;         /* '<S25>/DC Motor State' */
  uint16 RefreshTargetPos_l2;          /* '<S13>/DC Motor State' */
  uint16 temporalCounter_i1_i;         /* '<S13>/DC Motor State' */
  uint8 Delay3_DSTATE;                 /* '<S12>/Delay3' */
  uint8 Delay3_DSTATE_m;               /* '<S24>/Delay3' */
  uint8 Delay3_DSTATE_l;               /* '<S36>/Delay3' */
  uint8 Delay3_DSTATE_mb;              /* '<S48>/Delay3' */
  uint8 Delay3_DSTATE_i;               /* '<S59>/Delay3' */
  uint8 Delay3_DSTATE_g;               /* '<S71>/Delay3' */
  uint8 Delay3_DSTATE_f;               /* '<S82>/Delay3' */
  uint8 HvacDampr_stReqDrvrRcrltnMot;  /* '<S3>/Data Store Memory26' */
  uint8 HvacDampr_stReqRcrltnMot;      /* '<S4>/Data Store Memory26' */
  uint8 HvacDampr_stReqDrvrMixMot;     /* '<S5>/Data Store Memory20' */
  uint8 MDD_PNL_VAL_m;                 /* '<S47>/Data Store Memory' */
  uint8 HvacDampr_stReqMotMot;         /* '<S6>/Data Store Memory18' */
  uint8 HvacDampr_stReqPassMixMot;     /* '<S7>/Data Store Memory21' */
  uint8 MDD_PNL_VAL_c;                 /* '<S70>/Data Store Memory' */
  uint8 HvacDampr_stReqReModMot;       /* '<S8>/Data Store Memory18' */
  uint8 HvacDampr_stReqReMixMot;       /* '<S9>/Data Store Memory21' */
  uint8 is_active_c11_HvacDampr_Ctrl;  /* '<S72>/DC Motor State' */
  uint8 is_c11_HvacDampr_Ctrl;         /* '<S72>/DC Motor State' */
  uint8 is_active_c3_HvacDampr_Ctrl;   /* '<S70>/Re_Mode_Act_Fb1' */
  uint8 is_c3_HvacDampr_Ctrl;          /* '<S70>/Re_Mode_Act_Fb1' */
  uint8 is_active_c8_HvacDampr_Ctrl;   /* '<S47>/Mode_Act_Fb1' */
  uint8 is_c8_HvacDampr_Ctrl;          /* '<S47>/Mode_Act_Fb1' */
  uint8 is_active_c6_HvacDampr_Ctrl;   /* '<S25>/DC Motor State' */
  uint8 is_c6_HvacDampr_Ctrl;          /* '<S25>/DC Motor State' */
  uint8 is_active_c1_HvacDampr_Ctrl;   /* '<S13>/DC Motor State' */
  uint8 is_c1_HvacDampr_Ctrl;          /* '<S13>/DC Motor State' */
  boolean HvacDampr_bReqVldDrvrRcrltnMot;/* '<S3>/Data Store Memory33' */
  boolean HvacDampr_bReqVldRcrltnMot;  /* '<S4>/Data Store Memory33' */
  boolean HvacDampr_bReqVldDrvrMixMot; /* '<S5>/Data Store Memory31' */
  boolean HvacDampr_bReqVldMotMot;     /* '<S6>/Data Store Memory30' */
  boolean HvacDampr_bReqVldPassMixMot; /* '<S7>/Data Store Memory32' */
  boolean HvacDampr_bReqVldReModMot;   /* '<S8>/Data Store Memory30' */
  boolean HvacDampr_bReqVldReMixMot;   /* '<S9>/Data Store Memory32' */
  DW_DCMotorState_HvacDampr_C_m_T sf_DCMotorState_c;/* '<S83>/DC Motor State' */
  DW_EnabledSubsystem_HvacDampr_T EnabledSubsystem_ky;/* '<S82>/Enabled Subsystem' */
  DW_EnabledSubsystem_HvacDampr_T EnabledSubsystem_b;/* '<S71>/Enabled Subsystem' */
  DW_DCMotorState_HvacDampr_Ctr_T sf_DCMotorState_hw;/* '<S60>/DC Motor State' */
  DW_EnabledSubsystem_HvacDampr_T EnabledSubsystem_hh;/* '<S59>/Enabled Subsystem' */
  DW_DCMotorState_HvacDampr_C_m_T sf_DCMotorState_a;/* '<S49>/DC Motor State' */
  DW_EnabledSubsystem_HvacDampr_T EnabledSubsystem_d;/* '<S48>/Enabled Subsystem' */
  DW_DCMotorState_HvacDampr_Ctr_T sf_DCMotorState_h;/* '<S37>/DC Motor State' */
  DW_EnabledSubsystem_HvacDampr_T EnabledSubsystem_h;/* '<S36>/Enabled Subsystem' */
  DW_EnabledSubsystem_HvacDampr_T EnabledSubsystem_k;/* '<S24>/Enabled Subsystem' */
  DW_EnabledSubsystem_HvacDampr_T EnabledSubsystem;/* '<S12>/Enabled Subsystem' */
} DW_HvacDampr_Ctrl_T;

/* Block signals (default storage) */
extern VAR(B_HvacDampr_Ctrl_T, HvacDampr_Ctrl_VAR) HvacDampr_Ctrl_B;

/* Block states (default storage) */
extern VAR(DW_HvacDampr_Ctrl_T, HvacDampr_Ctrl_VAR) HvacDampr_Ctrl_DW;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S17>/Display' : Unused code path elimination
 * Block '<S17>/Display1' : Unused code path elimination
 * Block '<S13>/Display1' : Unused code path elimination
 * Block '<S13>/Display4' : Unused code path elimination
 * Block '<S13>/Display6' : Unused code path elimination
 * Block '<S29>/Display' : Unused code path elimination
 * Block '<S29>/Display1' : Unused code path elimination
 * Block '<S25>/Display1' : Unused code path elimination
 * Block '<S25>/Display4' : Unused code path elimination
 * Block '<S25>/Display6' : Unused code path elimination
 * Block '<S42>/Display' : Unused code path elimination
 * Block '<S42>/Display1' : Unused code path elimination
 * Block '<S37>/Display1' : Unused code path elimination
 * Block '<S37>/Display4' : Unused code path elimination
 * Block '<S37>/Display6' : Unused code path elimination
 * Block '<S52>/Display' : Unused code path elimination
 * Block '<S52>/Display1' : Unused code path elimination
 * Block '<S49>/Display1' : Unused code path elimination
 * Block '<S49>/Display6' : Unused code path elimination
 * Block '<S65>/Display' : Unused code path elimination
 * Block '<S65>/Display1' : Unused code path elimination
 * Block '<S60>/Display1' : Unused code path elimination
 * Block '<S60>/Display4' : Unused code path elimination
 * Block '<S60>/Display6' : Unused code path elimination
 * Block '<S61>/Display' : Unused code path elimination
 * Block '<S61>/Display3' : Unused code path elimination
 * Block '<S61>/Display5' : Unused code path elimination
 * Block '<S8>/Constant3' : Unused code path elimination
 * Block '<S75>/Display' : Unused code path elimination
 * Block '<S75>/Display1' : Unused code path elimination
 * Block '<S72>/Display1' : Unused code path elimination
 * Block '<S72>/Display6' : Unused code path elimination
 * Block '<S8>/Switch' : Unused code path elimination
 * Block '<S88>/Display' : Unused code path elimination
 * Block '<S88>/Display1' : Unused code path elimination
 * Block '<S83>/Display1' : Unused code path elimination
 * Block '<S83>/Display4' : Unused code path elimination
 * Block '<S83>/Display6' : Unused code path elimination
 * Block '<S84>/Display' : Unused code path elimination
 * Block '<S84>/Display3' : Unused code path elimination
 * Block '<S84>/Display5' : Unused code path elimination
 * Block '<S35>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S58>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S81>/Data Type Conversion' : Eliminate redundant data type conversion
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
 * '<Root>' : 'HvacDampr_Ctrl'
 * '<S1>'   : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys'
 * '<S2>'   : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_Init'
 * '<S3>'   : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto'
 * '<S4>'   : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto'
 * '<S5>'   : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto'
 * '<S6>'   : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto'
 * '<S7>'   : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto'
 * '<S8>'   : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto'
 * '<S9>'   : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto'
 * '<S10>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/CRC_Calculate_Subsystem'
 * '<S11>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/CRC_Pos_To_ST(2LAYER_MODE)'
 * '<S12>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/Subsystem'
 * '<S13>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/Subsystem2'
 * '<S14>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/CRC_Calculate_Subsystem/A02_CRC_Pos_Action'
 * '<S15>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/CRC_Calculate_Subsystem/A29_CRC_Pos_Action'
 * '<S16>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/CRC_Calculate_Subsystem/CRC_Pos_Action_Else '
 * '<S17>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/Subsystem/Enabled Subsystem'
 * '<S18>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/Subsystem/Enabled CompLP Fault cauculate'
 * '<S19>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/Subsystem/If Action Subsystem'
 * '<S20>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/Subsystem/Enabled Subsystem/If Action Subsystem'
 * '<S21>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A02DrCRC_Moto/Subsystem2/DC Motor State'
 * '<S22>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/CRC_Calculate_Subsystem'
 * '<S23>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/CRC_Pos_To_ST(2LAYER_MODE)'
 * '<S24>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/Subsystem'
 * '<S25>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/Subsystem2'
 * '<S26>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/CRC_Calculate_Subsystem/A02_CRC_Pos_Action'
 * '<S27>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/CRC_Calculate_Subsystem/A29_CRC_Pos_Action'
 * '<S28>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/CRC_Calculate_Subsystem/CRC_Pos_Action_Else '
 * '<S29>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/Subsystem/Enabled Subsystem'
 * '<S30>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/Subsystem/Enabled CompLP Fault cauculate'
 * '<S31>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/Subsystem/If Action Subsystem'
 * '<S32>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/Subsystem/Enabled Subsystem/If Action Subsystem'
 * '<S33>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/A09CRC_A02PaCRC_Moto/Subsystem2/DC Motor State'
 * '<S34>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/CanSig_To_TempHmix_Calculate'
 * '<S35>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Hmix_To_PostionVal'
 * '<S36>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Subsystem'
 * '<S37>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Subsystem2'
 * '<S38>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/TempHmixPercent_To_CanSig_Calculate'
 * '<S39>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Hmix_To_PostionVal/A02_TEMP_Pos_Action '
 * '<S40>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Hmix_To_PostionVal/A08_TEMP_Pos_Action'
 * '<S41>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Hmix_To_PostionVal/A29_TEMP_Pos_Action'
 * '<S42>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Subsystem/Enabled Subsystem'
 * '<S43>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Subsystem/Enabled CompLP Fault cauculate'
 * '<S44>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Subsystem/If Action Subsystem'
 * '<S45>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Subsystem/Enabled Subsystem/If Action Subsystem'
 * '<S46>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Dr_Temp_Moto/Subsystem2/DC Motor State'
 * '<S47>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem'
 * '<S48>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem1'
 * '<S49>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem2'
 * '<S50>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem/Mode_Act_Fb1'
 * '<S51>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem/Mode_Act_Fb1/Init_Mode_Judge'
 * '<S52>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem1/Enabled Subsystem'
 * '<S53>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem1/Enabled CompLP Fault cauculate'
 * '<S54>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem1/If Action Subsystem'
 * '<S55>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem1/Enabled Subsystem/If Action Subsystem'
 * '<S56>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Mode_Moto/Subsystem2/DC Motor State'
 * '<S57>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto/CanSig_To_TempHmix_Calculate'
 * '<S58>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto/PA_TEMP_Hmix_To_PostionVal'
 * '<S59>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto/Subsystem'
 * '<S60>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto/Subsystem2'
 * '<S61>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto/TempHmixPercent_To_CanSig_Calculate'
 * '<S62>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto/PA_TEMP_Hmix_To_PostionVal/A02_TEMP_Pos_Action '
 * '<S63>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto/PA_TEMP_Hmix_To_PostionVal/A08_TEMP_Pos_Action'
 * '<S64>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto/PA_TEMP_Hmix_To_PostionVal/A29_TEMP_Pos_Action'
 * '<S65>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto/Subsystem/Enabled Subsystem'
 * '<S66>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto/Subsystem/Enabled CompLP Fault cauculate'
 * '<S67>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto/Subsystem/If Action Subsystem'
 * '<S68>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto/Subsystem/Enabled Subsystem/If Action Subsystem'
 * '<S69>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Pa_Temp_Moto/Subsystem2/DC Motor State'
 * '<S70>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem'
 * '<S71>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem1'
 * '<S72>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem2'
 * '<S73>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem/Re_Mode_Act_Fb1'
 * '<S74>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem/Re_Mode_Act_Fb1/Init_Mode_Judge'
 * '<S75>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem1/Enabled Subsystem'
 * '<S76>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem1/Enabled CompLP Fault cauculate'
 * '<S77>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem1/If Action Subsystem'
 * '<S78>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem1/Enabled Subsystem/If Action Subsystem'
 * '<S79>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Mode_Moto/Subsystem2/DC Motor State'
 * '<S80>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto/CanSig_To_TempHmix_Calculate'
 * '<S81>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto/RE_TEMP_Hmix_To_PostionVal'
 * '<S82>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto/Subsystem'
 * '<S83>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto/Subsystem2'
 * '<S84>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto/TempHmixPercent_To_CanSig_Calculate'
 * '<S85>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto/RE_TEMP_Hmix_To_PostionVal/A02_TEMP_Pos_Action '
 * '<S86>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto/RE_TEMP_Hmix_To_PostionVal/A08_TEMP_Pos_Action'
 * '<S87>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto/RE_TEMP_Hmix_To_PostionVal/A29_TEMP_Pos_Action'
 * '<S88>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto/Subsystem/Enabled Subsystem'
 * '<S89>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto/Subsystem/Enabled CompLP Fault cauculate'
 * '<S90>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto/Subsystem/If Action Subsystem'
 * '<S91>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto/Subsystem/Enabled Subsystem/If Action Subsystem'
 * '<S92>'  : 'HvacDampr_Ctrl/HvacDampr_Ctrl_Runnable_10ms_sys/Re_Temp_Moto/Subsystem2/DC Motor State'
 */
#endif                                 /* RTW_HEADER_HvacDampr_Ctrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
