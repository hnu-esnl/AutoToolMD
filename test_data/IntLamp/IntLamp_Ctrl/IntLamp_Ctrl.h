/*
 * File: IntLamp_Ctrl.h
 *
 * Code generated for Simulink model 'IntLamp_Ctrl'.
 *
 * Model version                  : 1.32
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Oct 12 17:15:30 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_IntLamp_Ctrl_h_
#define RTW_HEADER_IntLamp_Ctrl_h_
#include <math.h>
#ifndef IntLamp_Ctrl_COMMON_INCLUDES_
# define IntLamp_Ctrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_IntLamp_Ctrl.h"
#endif                                 /* IntLamp_Ctrl_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<S2>/Chart' */
typedef struct {
  uint8 is_active_c1_IntLamp_Ctrl;     /* '<S2>/Chart' */
  uint8 is_c1_IntLamp_Ctrl;            /* '<S2>/Chart' */
} DW_Chart_IntLamp_Ctrl_T;

/* Block states (default storage) for system '<S2>/Light_Control' */
typedef struct {
  float64 n;                           /* '<S2>/Light_Control' */
  float64 OnTime;                      /* '<S2>/Light_Control' */
  float64 OffTime;                     /* '<S2>/Light_Control' */
  uint8 is_active_c2_IntLamp_Ctrl;     /* '<S2>/Light_Control' */
  uint8 is_c2_IntLamp_Ctrl;            /* '<S2>/Light_Control' */
  uint8 is_OFF;                        /* '<S2>/Light_Control' */
  uint8 is_ON;                         /* '<S2>/Light_Control' */
  uint8 is_ON_Normal;                  /* '<S2>/Light_Control' */
  uint8 is_ON_Grad;                    /* '<S2>/Light_Control' */
  uint8 is_Flicker;                    /* '<S2>/Light_Control' */
} DW_Light_Control_IntLamp_Ctrl_T;

/* Block states (default storage) for system '<S11>/Timer_Occur' */
typedef struct {
  uint32 temporalCounter_i1;           /* '<S11>/Timer_Occur' */
  uint8 is_active_c14_IntLamp_Ctrl;    /* '<S11>/Timer_Occur' */
  uint8 is_c14_IntLamp_Ctrl;           /* '<S11>/Timer_Occur' */
} DW_Timer_Occur_IntLamp_Ctrl_T;

/* Block states (default storage) for system '<S4>/Light_Control' */
typedef struct {
  float64 n;                           /* '<S4>/Light_Control' */
  float64 OnTime;                      /* '<S4>/Light_Control' */
  float64 OffTime;                     /* '<S4>/Light_Control' */
  uint8 is_active_c8_IntLamp_Ctrl;     /* '<S4>/Light_Control' */
  uint8 is_c8_IntLamp_Ctrl;            /* '<S4>/Light_Control' */
  uint8 is_OFF;                        /* '<S4>/Light_Control' */
  uint8 is_ON;                         /* '<S4>/Light_Control' */
  uint8 is_ON_Normal;                  /* '<S4>/Light_Control' */
  uint8 is_ON_Grad;                    /* '<S4>/Light_Control' */
  uint8 is_Flicker;                    /* '<S4>/Light_Control' */
} DW_Light_Control_IntLamp_Ct_g_T;

/* Block signals (default storage) */
typedef struct tag_B_IntLamp_Ctrl_T {
  float64 Divide;                      /* '<S2>/Divide' */
  float64 Product;                     /* '<S2>/Product' */
  float64 Divide2;                     /* '<S2>/Divide2' */
  float64 Divide3;                     /* '<S2>/Divide3' */
  float64 Divide_o;                    /* '<S4>/Divide' */
  float64 Product_h;                   /* '<S4>/Product' */
  float64 Divide2_j;                   /* '<S4>/Divide2' */
  float64 Divide3_h;                   /* '<S4>/Divide3' */
  float64 Delay3_i;                    /* '<S5>/Delay3' */
  float64 Divide_l;                    /* '<S5>/Divide' */
  float64 Product_c;                   /* '<S5>/Product' */
  float64 Divide2_f;                   /* '<S5>/Divide2' */
  float64 Divide3_g;                   /* '<S5>/Divide3' */
  float64 Delay3_o;                    /* '<S7>/Delay3' */
  float64 Divide_m;                    /* '<S7>/Divide' */
  float64 Product_b;                   /* '<S7>/Product' */
  float64 Divide2_g;                   /* '<S7>/Divide2' */
  float64 Divide3_j;                   /* '<S7>/Divide3' */
  float64 TimerOccur;                  /* '<S26>/Timer_Occur' */
  float64 n;                           /* '<S7>/MsgTimeOut_Counter' */
  float64 TimerShutdown;               /* '<S7>/Light_Control' */
  float64 PWM_Out;                     /* '<S7>/Light_Control' */
  float64 TimerOccur_k;                /* '<S21>/Timer_Occur' */
  float64 n_e;                         /* '<S5>/MsgTimeOut_Counter' */
  float64 TimerShutdown_h;             /* '<S5>/Light_Control' */
  float64 PWM_Out_e;                   /* '<S5>/Light_Control' */
  float64 TimerOccur_n;                /* '<S16>/Timer_Occur' */
  float64 n_k;                         /* '<S4>/MsgTimeOut_Counter' */
  float64 TimerShutdown_l;             /* '<S4>/Light_Control' */
  float64 PWM_Out_o;                   /* '<S4>/Light_Control' */
  float64 TimerOccur_d;                /* '<S11>/Timer_Occur' */
  float64 n_c;                         /* '<S2>/MsgTimeOut_Counter' */
  float64 TimerShutdown_hs;            /* '<S2>/Light_Control' */
  float64 PWM_Out_m;                   /* '<S2>/Light_Control' */
  uint16 TimerTrigtime_Inp;            /* '<S7>/Chart' */
  uint16 TimerTrigtime_Inp_h;          /* '<S5>/Chart' */
  uint16 TimerTrigtime_Inp_hz;         /* '<S4>/Chart' */
  uint16 TimerTrigtime_Inp_k;          /* '<S2>/Chart' */
  uint16 Gain15;                       /* '<S3>/Gain15' */
  uint16 Gain5;                        /* '<S3>/Gain5' */
  uint16 Gain10;                       /* '<S3>/Gain10' */
  uint16 Gain;                         /* '<S3>/Gain' */
  uint16 TargetBrightness_Inp;         /* '<S7>/Chart' */
  uint16 TargetBrightness_Inp_p;       /* '<S5>/Chart' */
  uint16 TargetBrightness_Inp_b;       /* '<S4>/Chart' */
  uint16 TargetBrightness_Inp_l;       /* '<S2>/Chart' */
  uint16 Gain16;                       /* '<S3>/Gain16' */
  uint16 Gain17;                       /* '<S3>/Gain17' */
  uint16 Gain18;                       /* '<S3>/Gain18' */
  uint16 Gain19;                       /* '<S3>/Gain19' */
  uint16 Gain6;                        /* '<S3>/Gain6' */
  uint16 Gain7;                        /* '<S3>/Gain7' */
  uint16 Gain8;                        /* '<S3>/Gain8' */
  uint16 Gain9;                        /* '<S3>/Gain9' */
  uint16 Gain11;                       /* '<S3>/Gain11' */
  uint16 Gain12;                       /* '<S3>/Gain12' */
  uint16 Gain13;                       /* '<S3>/Gain13' */
  uint16 Gain14;                       /* '<S3>/Gain14' */
  uint16 Gain1;                        /* '<S3>/Gain1' */
  uint16 Gain2;                        /* '<S3>/Gain2' */
  uint16 Gain3;                        /* '<S3>/Gain3' */
  uint16 Gain4;                        /* '<S3>/Gain4' */
  uint16 SlopePara_Inp;                /* '<S7>/Chart' */
  uint16 FlickerOnT_Inp;               /* '<S7>/Chart' */
  uint16 FlickerOffT_Inp;              /* '<S7>/Chart' */
  uint16 TimerGrad_Inp;                /* '<S7>/Chart' */
  uint16 SlopePara_Inp_e;              /* '<S5>/Chart' */
  uint16 FlickerOnT_Inp_a;             /* '<S5>/Chart' */
  uint16 FlickerOffT_Inp_n;            /* '<S5>/Chart' */
  uint16 TimerGrad_Inp_c;              /* '<S5>/Chart' */
  uint16 SlopePara_Inp_i;              /* '<S4>/Chart' */
  uint16 FlickerOnT_Inp_j;             /* '<S4>/Chart' */
  uint16 FlickerOffT_Inp_p;            /* '<S4>/Chart' */
  uint16 TimerGrad_Inp_cu;             /* '<S4>/Chart' */
  uint16 SlopePara_Inp_ej;             /* '<S2>/Chart' */
  uint16 FlickerOnT_Inp_p;             /* '<S2>/Chart' */
  uint16 FlickerOffT_Inp_d;            /* '<S2>/Chart' */
  uint16 TimerGrad_Inp_k;              /* '<S2>/Chart' */
  uint8 TmpSignalConversionAtgCAN_u8IL_;/* '<Root>/gCAN_u8IL_CtrCmdBKGLight' */
  uint8 TmpSignalConversionAtgCAN_u8I_p;/* '<Root>/gCAN_u8IL_TimerEnBKGLight' */
  uint8 Switch2;                       /* '<S11>/Switch2' */
  uint8 Switch2_d;                     /* '<S2>/Switch2' */
  uint8 TmpSignalConversionAtgCAN_u8I_c;/* '<Root>/gCAN_u8IL_CtrCmdCourtesyLightRL' */
  uint8 TmpSignalConversionAtgCAN_u8I_o;/* '<Root>/gCAN_u8IL_TimerEnCourtesyLightRL' */
  uint8 Switch2_g;                     /* '<S16>/Switch2' */
  uint8 Switch2_m;                     /* '<S4>/Switch2' */
  uint8 TmpSignalConversionAtgCAN_u8I_g;/* '<Root>/gCAN_u8IL_CtrCmdCourtesyLightRR' */
  uint8 TmpSignalConversionAtgCAN_u8I_i;/* '<Root>/gCAN_u8IL_TimerEnCourtesyLightRR' */
  uint8 Switch2_j;                     /* '<S21>/Switch2' */
  uint8 Switch2_o;                     /* '<S5>/Switch2' */
  uint8 TmpSignalConversionAtgCAN_u8I_f;/* '<Root>/gCAN_u8IL_CtrCmdTrunkLight' */
  uint8 TmpSignalConversionAtgCAN_u8_cn;/* '<Root>/gCAN_u8IL_TimerEnTrunkLight' */
  uint8 Switch2_a;                     /* '<S26>/Switch2' */
  uint8 Switch2_dd;                    /* '<S7>/Switch2' */
  uint8 CtrCmd_Inp;                    /* '<S7>/Chart' */
  uint8 CtrMode_Inp;                   /* '<S7>/Chart' */
  uint8 FlickerCycle_Inp;              /* '<S7>/Chart' */
  uint8 TimerEnable_Inp;               /* '<S7>/Chart' */
  uint8 TimerAction_Inp;               /* '<S7>/Chart' */
  uint8 TimerMode_Inp;                 /* '<S7>/Chart' */
  uint8 CtrCmd_Inp_j;                  /* '<S5>/Chart' */
  uint8 CtrMode_Inp_p;                 /* '<S5>/Chart' */
  uint8 FlickerCycle_Inp_c;            /* '<S5>/Chart' */
  uint8 TimerEnable_Inp_f;             /* '<S5>/Chart' */
  uint8 TimerAction_Inp_o;             /* '<S5>/Chart' */
  uint8 TimerMode_Inp_b;               /* '<S5>/Chart' */
  uint8 CtrCmd_Inp_l;                  /* '<S4>/Chart' */
  uint8 CtrMode_Inp_i;                 /* '<S4>/Chart' */
  uint8 FlickerCycle_Inp_k;            /* '<S4>/Chart' */
  uint8 TimerEnable_Inp_g;             /* '<S4>/Chart' */
  uint8 TimerAction_Inp_n;             /* '<S4>/Chart' */
  uint8 TimerMode_Inp_o;               /* '<S4>/Chart' */
  uint8 CtrCmd_Inp_o;                  /* '<S2>/Chart' */
  uint8 CtrMode_Inp_k;                 /* '<S2>/Chart' */
  uint8 FlickerCycle_Inp_f;            /* '<S2>/Chart' */
  uint8 TimerEnable_Inp_a;             /* '<S2>/Chart' */
  uint8 TimerAction_Inp_p;             /* '<S2>/Chart' */
  uint8 TimerMode_Inp_j;               /* '<S2>/Chart' */
  boolean LogicalOperator4;            /* '<S2>/Logical Operator4' */
  boolean LogicalOperator4_a;          /* '<S4>/Logical Operator4' */
  boolean LogicalOperator4_p;          /* '<S5>/Logical Operator4' */
  boolean LogicalOperator4_o;          /* '<S7>/Logical Operator4' */
} B_IntLamp_Ctrl_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_IntLamp_Ctrl_T {
  float64 Delay3_DSTATE;               /* '<S2>/Delay3' */
  float64 Delay3_DSTATE_o;             /* '<S4>/Delay3' */
  uint8 Delay2_DSTATE;                 /* '<S2>/Delay2' */
  uint8 Delay2_DSTATE_h;               /* '<S4>/Delay2' */
  uint8 Delay2_DSTATE_i;               /* '<S5>/Delay2' */
  uint8 Delay2_DSTATE_i5;              /* '<S7>/Delay2' */
  boolean Delay_DSTATE;                /* '<S2>/Delay' */
  boolean Delay_DSTATE_f;              /* '<S4>/Delay' */
  boolean Delay_DSTATE_c;              /* '<S5>/Delay' */
  boolean Delay_DSTATE_c0;             /* '<S7>/Delay' */
  uint8 TimerAction;                   /* '<S11>/Data Store Memory' */
  uint8 TimerAction_p;                 /* '<S16>/Data Store Memory' */
  uint8 TimerAction_e;                 /* '<S21>/Data Store Memory' */
  uint8 TimerAction_l;                 /* '<S26>/Data Store Memory' */
  DW_Timer_Occur_IntLamp_Ctrl_T sf_Timer_Occur_n;/* '<S26>/Timer_Occur' */
  DW_Light_Control_IntLamp_Ctrl_T sf_Light_Control_i;/* '<S7>/Light_Control' */
  DW_Chart_IntLamp_Ctrl_T sf_Chart_f;  /* '<S7>/Chart' */
  DW_Timer_Occur_IntLamp_Ctrl_T sf_Timer_Occur_ek;/* '<S21>/Timer_Occur' */
  DW_Light_Control_IntLamp_Ct_g_T sf_Light_Control_d;/* '<S5>/Light_Control' */
  DW_Chart_IntLamp_Ctrl_T sf_Chart_hv; /* '<S5>/Chart' */
  DW_Timer_Occur_IntLamp_Ctrl_T sf_Timer_Occur_e;/* '<S16>/Timer_Occur' */
  DW_Light_Control_IntLamp_Ct_g_T sf_Light_Control_l;/* '<S4>/Light_Control' */
  DW_Chart_IntLamp_Ctrl_T sf_Chart_h;  /* '<S4>/Chart' */
  DW_Timer_Occur_IntLamp_Ctrl_T sf_Timer_Occur;/* '<S11>/Timer_Occur' */
  DW_Light_Control_IntLamp_Ctrl_T sf_Light_Control;/* '<S2>/Light_Control' */
  DW_Chart_IntLamp_Ctrl_T sf_Chart;    /* '<S2>/Chart' */
} DW_IntLamp_Ctrl_T;

/* Invariant block signals (default storage) */
typedef struct {
  uint32 Constant;                     /* '<S6>/Constant' */
  uint8 Constant2;                     /* '<S6>/Constant2' */
} ConstB_IntLamp_Ctrl_T;

/* Block signals (default storage) */
extern B_IntLamp_Ctrl_T IntLamp_Ctrl_B;

/* Block states (default storage) */
extern DW_IntLamp_Ctrl_T IntLamp_Ctrl_DW;
extern const ConstB_IntLamp_Ctrl_T IntLamp_Ctrl_ConstB;/* constant block i/o */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Constant11' : Unused code path elimination
 * Block '<S2>/Constant13' : Unused code path elimination
 * Block '<S2>/Delay1' : Unused code path elimination
 * Block '<S2>/Logical Operator3' : Unused code path elimination
 * Block '<S2>/Relational Operator2' : Unused code path elimination
 * Block '<S2>/Relational Operator3' : Unused code path elimination
 * Block '<S2>/Scope' : Unused code path elimination
 * Block '<S2>/Scope1' : Unused code path elimination
 * Block '<S2>/Scope2' : Unused code path elimination
 * Block '<S2>/Scope3' : Unused code path elimination
 * Block '<S11>/Scope' : Unused code path elimination
 * Block '<S4>/Constant11' : Unused code path elimination
 * Block '<S4>/Constant13' : Unused code path elimination
 * Block '<S4>/Delay1' : Unused code path elimination
 * Block '<S4>/Logical Operator3' : Unused code path elimination
 * Block '<S4>/Relational Operator2' : Unused code path elimination
 * Block '<S4>/Relational Operator3' : Unused code path elimination
 * Block '<S4>/Scope' : Unused code path elimination
 * Block '<S4>/Scope1' : Unused code path elimination
 * Block '<S4>/Scope2' : Unused code path elimination
 * Block '<S4>/Scope3' : Unused code path elimination
 * Block '<S16>/Scope' : Unused code path elimination
 * Block '<S5>/Constant11' : Unused code path elimination
 * Block '<S5>/Constant13' : Unused code path elimination
 * Block '<S5>/Delay1' : Unused code path elimination
 * Block '<S5>/Logical Operator3' : Unused code path elimination
 * Block '<S5>/Relational Operator2' : Unused code path elimination
 * Block '<S5>/Relational Operator3' : Unused code path elimination
 * Block '<S5>/Scope' : Unused code path elimination
 * Block '<S5>/Scope1' : Unused code path elimination
 * Block '<S5>/Scope2' : Unused code path elimination
 * Block '<S5>/Scope3' : Unused code path elimination
 * Block '<S21>/Scope' : Unused code path elimination
 * Block '<S7>/Constant11' : Unused code path elimination
 * Block '<S7>/Constant13' : Unused code path elimination
 * Block '<S7>/Delay1' : Unused code path elimination
 * Block '<S7>/Logical Operator3' : Unused code path elimination
 * Block '<S7>/Relational Operator2' : Unused code path elimination
 * Block '<S7>/Relational Operator3' : Unused code path elimination
 * Block '<S7>/Scope' : Unused code path elimination
 * Block '<S7>/Scope1' : Unused code path elimination
 * Block '<S7>/Scope2' : Unused code path elimination
 * Block '<S7>/Scope3' : Unused code path elimination
 * Block '<S26>/Scope' : Unused code path elimination
 * Block '<S2>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S4>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S7>/Data Type Conversion2' : Eliminate redundant data type conversion
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
 * '<Root>' : 'IntLamp_Ctrl'
 * '<S1>'   : 'IntLamp_Ctrl/IntLamp_Ctrl_T'
 * '<S2>'   : 'IntLamp_Ctrl/IntLamp_Ctrl_T/BkgLight_T'
 * '<S3>'   : 'IntLamp_Ctrl/IntLamp_Ctrl_T/CANmessage_Transition'
 * '<S4>'   : 'IntLamp_Ctrl/IntLamp_Ctrl_T/CourtesyLightRL'
 * '<S5>'   : 'IntLamp_Ctrl/IntLamp_Ctrl_T/CourtesyLightRR'
 * '<S6>'   : 'IntLamp_Ctrl/IntLamp_Ctrl_T/Sleep_Wakeup'
 * '<S7>'   : 'IntLamp_Ctrl/IntLamp_Ctrl_T/TrunkLight'
 * '<S8>'   : 'IntLamp_Ctrl/IntLamp_Ctrl_T/BkgLight_T/Chart'
 * '<S9>'   : 'IntLamp_Ctrl/IntLamp_Ctrl_T/BkgLight_T/Light_Control'
 * '<S10>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/BkgLight_T/MsgTimeOut_Counter'
 * '<S11>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/BkgLight_T/Timer_Control'
 * '<S12>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/BkgLight_T/Timer_Control/Timer_Occur'
 * '<S13>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/CourtesyLightRL/Chart'
 * '<S14>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/CourtesyLightRL/Light_Control'
 * '<S15>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/CourtesyLightRL/MsgTimeOut_Counter'
 * '<S16>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/CourtesyLightRL/Timer_Control'
 * '<S17>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/CourtesyLightRL/Timer_Control/Timer_Occur'
 * '<S18>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/CourtesyLightRR/Chart'
 * '<S19>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/CourtesyLightRR/Light_Control'
 * '<S20>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/CourtesyLightRR/MsgTimeOut_Counter'
 * '<S21>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/CourtesyLightRR/Timer_Control'
 * '<S22>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/CourtesyLightRR/Timer_Control/Timer_Occur'
 * '<S23>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/TrunkLight/Chart'
 * '<S24>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/TrunkLight/Light_Control'
 * '<S25>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/TrunkLight/MsgTimeOut_Counter'
 * '<S26>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/TrunkLight/Timer_Control'
 * '<S27>'  : 'IntLamp_Ctrl/IntLamp_Ctrl_T/TrunkLight/Timer_Control/Timer_Occur'
 */
#endif                                 /* RTW_HEADER_IntLamp_Ctrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
