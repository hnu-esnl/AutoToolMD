/*
 * File: INL_10ms.h
 *
 * Code generated for Simulink model 'INL_10ms'.
 *
 * Model version                  : 1.28
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Aug  1 16:00:04 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_INL_10ms_h_
#define RTW_HEADER_INL_10ms_h_
#include <math.h>
#ifndef INL_10ms_COMMON_INCLUDES_
# define INL_10ms_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_INL_10ms.h"
#endif                                 /* INL_10ms_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<S2>/Light_Control' */
typedef struct {
  float64 n;                           /* '<S2>/Light_Control' */
  float64 OnTime;                      /* '<S2>/Light_Control' */
  float64 OffTime;                     /* '<S2>/Light_Control' */
  uint8 is_active_c1_INL_10ms;         /* '<S2>/Light_Control' */
  uint8 is_c1_INL_10ms;                /* '<S2>/Light_Control' */
  uint8 is_OFF;                        /* '<S2>/Light_Control' */
  uint8 is_ON;                         /* '<S2>/Light_Control' */
  uint8 is_Flicker;                    /* '<S2>/Light_Control' */
} DW_Light_Control_INL_10ms_T;

/* Block states (default storage) for system '<S16>/Timer_Occur' */
typedef struct {
  uint32 temporalCounter_i1;           /* '<S16>/Timer_Occur' */
  uint8 is_active_c4_INL_10ms;         /* '<S16>/Timer_Occur' */
  uint8 is_c4_INL_10ms;                /* '<S16>/Timer_Occur' */
} DW_Timer_Occur_INL_10ms_T;

/* Block states (default storage) for system '<S4>/Light_Control' */
typedef struct {
  float64 n;                           /* '<S4>/Light_Control' */
  float64 OnTime;                      /* '<S4>/Light_Control' */
  float64 OffTime;                     /* '<S4>/Light_Control' */
  uint8 is_active_c7_INL_10ms;         /* '<S4>/Light_Control' */
  uint8 is_c7_INL_10ms;                /* '<S4>/Light_Control' */
  uint8 is_OFF;                        /* '<S4>/Light_Control' */
  uint8 is_Flicker;                    /* '<S4>/Light_Control' */
  uint8 is_ON;                         /* '<S4>/Light_Control' */
} DW_Light_Control_INL_10ms_h_T;

/* Block signals (default storage) */
typedef struct tag_B_INL_10ms_T {
  float64 Divide;                      /* '<S2>/Divide' */
  float64 Product;                     /* '<S2>/Product' */
  float64 Divide2;                     /* '<S2>/Divide2' */
  float64 Divide3;                     /* '<S2>/Divide3' */
  float64 Divide_o;                    /* '<S4>/Divide' */
  float64 Product_o;                   /* '<S4>/Product' */
  float64 Divide2_f;                   /* '<S4>/Divide2' */
  float64 Divide3_g;                   /* '<S4>/Divide3' */
  float64 Divide_g;                    /* '<S5>/Divide' */
  float64 Product_h;                   /* '<S5>/Product' */
  float64 Divide2_p;                   /* '<S5>/Divide2' */
  float64 Divide3_o;                   /* '<S5>/Divide3' */
  float64 Divide_i;                    /* '<S7>/Divide' */
  float64 Product_a;                   /* '<S7>/Product' */
  float64 Divide2_e;                   /* '<S7>/Divide2' */
  float64 Divide3_o5;                  /* '<S7>/Divide3' */
  float64 TimerOccur;                  /* '<S46>/Timer_Occur' */
  float64 n;                           /* '<S7>/MsgTimeOut_Counter' */
  float64 TimerShutdown;               /* '<S7>/Light_Control' */
  float64 PWM_Out;                     /* '<S7>/Light_Control' */
  float64 TimerOccur_p;                /* '<S36>/Timer_Occur' */
  float64 n_p;                         /* '<S5>/MsgTimeOut_Counter' */
  float64 TimerShutdown_g;             /* '<S5>/Light_Control' */
  float64 PWM_Out_e;                   /* '<S5>/Light_Control' */
  float64 TimerOccur_a;                /* '<S26>/Timer_Occur' */
  float64 n_d;                         /* '<S4>/MsgTimeOut_Counter' */
  float64 TimerShutdown_i;             /* '<S4>/Light_Control' */
  float64 PWM_Out_g;                   /* '<S4>/Light_Control' */
  float64 TimerOccur_b;                /* '<S16>/Timer_Occur' */
  float64 n_e;                         /* '<S2>/MsgTimeOut_Counter' */
  float64 TimerShutdown_d;             /* '<S2>/Light_Control' */
  float64 PWM_Out_o;                   /* '<S2>/Light_Control' */
  uint8 TmpSignalConversionAtgCAN_u8IL_;/* '<Root>/gCAN_u8IL_TimerEnBKGLight' */
  uint8 Switch2;                       /* '<S16>/Switch2' */
  uint8 Switch2_k;                     /* '<S2>/Switch2' */
  uint8 TmpSignalConversionAtgCAN_u8I_o;/* '<Root>/gCAN_u8IL_TimerEnCourtesyLightRL' */
  uint8 Switch2_b;                     /* '<S26>/Switch2' */
  uint8 Switch2_j;                     /* '<S4>/Switch2' */
  uint8 TmpSignalConversionAtgCAN_u8I_i;/* '<Root>/gCAN_u8IL_TimerEnCourtesyLightRR' */
  uint8 Switch2_c;                     /* '<S36>/Switch2' */
  uint8 Switch2_h;                     /* '<S5>/Switch2' */
  uint8 TmpSignalConversionAtgCAN_u8I_c;/* '<Root>/gCAN_u8IL_TimerEnTrunkLight' */
  uint8 Switch2_j5;                    /* '<S46>/Switch2' */
  uint8 Switch2_o;                     /* '<S7>/Switch2' */
} B_INL_10ms_T;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_DW_INL_10ms_T {
  uint16 Delay4_DSTATE;                /* '<S2>/Delay4' */
  uint16 Delay5_DSTATE;                /* '<S2>/Delay5' */
  uint16 Delay6_DSTATE;                /* '<S2>/Delay6' */
  uint16 Delay4_DSTATE_n;              /* '<S4>/Delay4' */
  uint16 Delay5_DSTATE_c;              /* '<S4>/Delay5' */
  uint16 Delay6_DSTATE_j;              /* '<S4>/Delay6' */
  uint16 Delay4_DSTATE_g;              /* '<S5>/Delay4' */
  uint16 Delay5_DSTATE_k;              /* '<S5>/Delay5' */
  uint16 Delay6_DSTATE_d;              /* '<S5>/Delay6' */
  uint16 Delay4_DSTATE_a;              /* '<S7>/Delay4' */
  uint16 Delay5_DSTATE_o;              /* '<S7>/Delay5' */
  uint16 Delay6_DSTATE_p;              /* '<S7>/Delay6' */
  uint16 Delay3_DSTATE;                /* '<S2>/Delay3' */
  uint16 Delay3_DSTATE_e;              /* '<S4>/Delay3' */
  uint16 Delay3_DSTATE_d;              /* '<S5>/Delay3' */
  uint16 Delay3_DSTATE_j;              /* '<S7>/Delay3' */
  uint8 Delay1_DSTATE;                 /* '<S2>/Delay1' */
  uint8 Delay2_DSTATE;                 /* '<S2>/Delay2' */
  uint8 Delay1_DSTATE_a;               /* '<S4>/Delay1' */
  uint8 Delay2_DSTATE_o;               /* '<S4>/Delay2' */
  uint8 Delay1_DSTATE_c;               /* '<S5>/Delay1' */
  uint8 Delay2_DSTATE_n;               /* '<S5>/Delay2' */
  uint8 Delay1_DSTATE_n;               /* '<S7>/Delay1' */
  uint8 Delay2_DSTATE_e;               /* '<S7>/Delay2' */
  boolean Delay_DSTATE;                /* '<S2>/Delay' */
  boolean Delay_DSTATE_n;              /* '<S4>/Delay' */
  boolean Delay_DSTATE_g;              /* '<S5>/Delay' */
  boolean Delay_DSTATE_l;              /* '<S7>/Delay' */
  uint8 TimerAction;                   /* '<S16>/Data Store Memory' */
  uint8 TimerAction_p;                 /* '<S26>/Data Store Memory' */
  uint8 TimerAction_d;                 /* '<S36>/Data Store Memory' */
  uint8 TimerAction_l;                 /* '<S46>/Data Store Memory' */
  DW_Timer_Occur_INL_10ms_T sf_Timer_Occur_a;/* '<S46>/Timer_Occur' */
  DW_Light_Control_INL_10ms_T sf_Light_Control_p0;/* '<S7>/Light_Control' */
  DW_Timer_Occur_INL_10ms_T sf_Timer_Occur_n;/* '<S36>/Timer_Occur' */
  DW_Light_Control_INL_10ms_h_T sf_Light_Control_p;/* '<S5>/Light_Control' */
  DW_Timer_Occur_INL_10ms_T sf_Timer_Occur_h;/* '<S26>/Timer_Occur' */
  DW_Light_Control_INL_10ms_h_T sf_Light_Control_a;/* '<S4>/Light_Control' */
  DW_Timer_Occur_INL_10ms_T sf_Timer_Occur;/* '<S16>/Timer_Occur' */
  DW_Light_Control_INL_10ms_T sf_Light_Control;/* '<S2>/Light_Control' */
} DW_INL_10ms_T;

/* Invariant block signals (default storage) */
typedef struct {
  uint32 Constant;                     /* '<S6>/Constant' */
  uint8 Constant2;                     /* '<S6>/Constant2' */
} ConstB_INL_10ms_T;

/* Block signals (default storage) */
extern B_INL_10ms_T INL_10ms_B;

/* Block states (default storage) */
extern DW_INL_10ms_T INL_10ms_DW;
extern const ConstB_INL_10ms_T INL_10ms_ConstB;/* constant block i/o */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
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
 * '<Root>' : 'INL_10ms'
 * '<S1>'   : 'INL_10ms/INL_T'
 * '<S2>'   : 'INL_10ms/INL_T/BkgLight_T'
 * '<S3>'   : 'INL_10ms/INL_T/CANmessage_Transition'
 * '<S4>'   : 'INL_10ms/INL_T/CourtesyLightRL'
 * '<S5>'   : 'INL_10ms/INL_T/CourtesyLightRR'
 * '<S6>'   : 'INL_10ms/INL_T/Sleep_Wakeup'
 * '<S7>'   : 'INL_10ms/INL_T/TrunkLight'
 * '<S8>'   : 'INL_10ms/INL_T/BkgLight_T/IsZero'
 * '<S9>'   : 'INL_10ms/INL_T/BkgLight_T/IsZero1'
 * '<S10>'  : 'INL_10ms/INL_T/BkgLight_T/IsZero2'
 * '<S11>'  : 'INL_10ms/INL_T/BkgLight_T/IsZero3'
 * '<S12>'  : 'INL_10ms/INL_T/BkgLight_T/IsZero4'
 * '<S13>'  : 'INL_10ms/INL_T/BkgLight_T/IsZero5'
 * '<S14>'  : 'INL_10ms/INL_T/BkgLight_T/Light_Control'
 * '<S15>'  : 'INL_10ms/INL_T/BkgLight_T/MsgTimeOut_Counter'
 * '<S16>'  : 'INL_10ms/INL_T/BkgLight_T/Timer_Control'
 * '<S17>'  : 'INL_10ms/INL_T/BkgLight_T/Timer_Control/Timer_Occur'
 * '<S18>'  : 'INL_10ms/INL_T/CourtesyLightRL/IsZero'
 * '<S19>'  : 'INL_10ms/INL_T/CourtesyLightRL/IsZero1'
 * '<S20>'  : 'INL_10ms/INL_T/CourtesyLightRL/IsZero2'
 * '<S21>'  : 'INL_10ms/INL_T/CourtesyLightRL/IsZero3'
 * '<S22>'  : 'INL_10ms/INL_T/CourtesyLightRL/IsZero4'
 * '<S23>'  : 'INL_10ms/INL_T/CourtesyLightRL/IsZero5'
 * '<S24>'  : 'INL_10ms/INL_T/CourtesyLightRL/Light_Control'
 * '<S25>'  : 'INL_10ms/INL_T/CourtesyLightRL/MsgTimeOut_Counter'
 * '<S26>'  : 'INL_10ms/INL_T/CourtesyLightRL/Timer_Control'
 * '<S27>'  : 'INL_10ms/INL_T/CourtesyLightRL/Timer_Control/Timer_Occur'
 * '<S28>'  : 'INL_10ms/INL_T/CourtesyLightRR/IsZero'
 * '<S29>'  : 'INL_10ms/INL_T/CourtesyLightRR/IsZero1'
 * '<S30>'  : 'INL_10ms/INL_T/CourtesyLightRR/IsZero2'
 * '<S31>'  : 'INL_10ms/INL_T/CourtesyLightRR/IsZero3'
 * '<S32>'  : 'INL_10ms/INL_T/CourtesyLightRR/IsZero4'
 * '<S33>'  : 'INL_10ms/INL_T/CourtesyLightRR/IsZero5'
 * '<S34>'  : 'INL_10ms/INL_T/CourtesyLightRR/Light_Control'
 * '<S35>'  : 'INL_10ms/INL_T/CourtesyLightRR/MsgTimeOut_Counter'
 * '<S36>'  : 'INL_10ms/INL_T/CourtesyLightRR/Timer_Control'
 * '<S37>'  : 'INL_10ms/INL_T/CourtesyLightRR/Timer_Control/Timer_Occur'
 * '<S38>'  : 'INL_10ms/INL_T/TrunkLight/IsZero'
 * '<S39>'  : 'INL_10ms/INL_T/TrunkLight/IsZero1'
 * '<S40>'  : 'INL_10ms/INL_T/TrunkLight/IsZero2'
 * '<S41>'  : 'INL_10ms/INL_T/TrunkLight/IsZero3'
 * '<S42>'  : 'INL_10ms/INL_T/TrunkLight/IsZero4'
 * '<S43>'  : 'INL_10ms/INL_T/TrunkLight/IsZero5'
 * '<S44>'  : 'INL_10ms/INL_T/TrunkLight/Light_Control'
 * '<S45>'  : 'INL_10ms/INL_T/TrunkLight/MsgTimeOut_Counter'
 * '<S46>'  : 'INL_10ms/INL_T/TrunkLight/Timer_Control'
 * '<S47>'  : 'INL_10ms/INL_T/TrunkLight/Timer_Control/Timer_Occur'
 */
#endif                                 /* RTW_HEADER_INL_10ms_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
