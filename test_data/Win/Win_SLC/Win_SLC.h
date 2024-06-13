/*
 * File: Win_SLC.h
 *
 * Code generated for Simulink model 'Win_SLC'.
 *
 * Model version                  : 1.229
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Oct 28 12:12:13 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Win_SLC_h_
#define RTW_HEADER_Win_SLC_h_
#ifndef Win_SLC_COMMON_INCLUDES_
# define Win_SLC_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "Rte_Win_SLC.h"
#endif                                 /* Win_SLC_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<S4>/MotorProtect_FL' */
typedef struct {
  uint8 is_active_c31_zcu_wnd_lib;     /* '<S4>/MotorProtect_FL' */
  uint8 is_c31_zcu_wnd_lib;            /* '<S4>/MotorProtect_FL' */
  uint8 is_Stop;                       /* '<S4>/MotorProtect_FL' */
  uint8 is_RVS;                        /* '<S4>/MotorProtect_FL' */
  uint8 is_UpDn;                       /* '<S4>/MotorProtect_FL' */
  uint8 temporalCounter_i1;            /* '<S4>/MotorProtect_FL' */
  uint8 u8OutputSts_prev;              /* '<S4>/MotorProtect_FL' */
  uint8 u8OutputSts_start;             /* '<S4>/MotorProtect_FL' */
  boolean bDnToUpFlag;                 /* '<S4>/MotorProtect_FL' */
  boolean bUpToDnFlag;                 /* '<S4>/MotorProtect_FL' */
  boolean bUpToRVSFlag;                /* '<S4>/MotorProtect_FL' */
} rtDW_MotorProtect_FL_Win_SLC;

/* Block states (default storage) for system '<S6>/Reverse_FL' */
typedef struct {
  uint16 u16Posi_prev;                 /* '<S6>/Reverse_FL' */
  uint16 temporalCounter_i1;           /* '<S6>/Reverse_FL' */
  uint8 is_active_c30_zcu_wnd_lib;     /* '<S6>/Reverse_FL' */
  uint8 is_c30_zcu_wnd_lib;            /* '<S6>/Reverse_FL' */
  boolean bReverse_prev;               /* '<S6>/Reverse_FL' */
  boolean bReverse_start;              /* '<S6>/Reverse_FL' */
} rtDW_Reverse_FL_Win_SLC;

/* Block signals (default storage) */
typedef struct tag_BlockIO_Win_SLC {
  uint8 u8FLOutputSts;                 /* '<S6>/StartAtDiffTime' */
  uint8 u8FROutputSts;                 /* '<S6>/StartAtDiffTime' */
  uint8 u8RLOutputSts;                 /* '<S6>/StartAtDiffTime' */
  uint8 u8RROutputSts;                 /* '<S6>/StartAtDiffTime' */
  uint8 u8OutputReq;                   /* '<S4>/MotorProtect_RR' */
  uint8 u8OutputReq_j;                 /* '<S4>/MotorProtect_RL' */
  uint8 u8OutputReq_k;                 /* '<S4>/MotorProtect_FR' */
  uint8 u8OutputReq_kv;                /* '<S4>/MotorProtect_FL' */
  uint8 u8FLWinOutput;                 /* '<S3>/RelayOutput-ConvertTo-MOS_Driver' */
  uint8 u8FRWinOutput;                 /* '<S3>/RelayOutput-ConvertTo-MOS_Driver' */
  uint8 u8RLWinOutput;                 /* '<S3>/RelayOutput-ConvertTo-MOS_Driver' */
  uint8 u8RRWinOutput;                 /* '<S3>/RelayOutput-ConvertTo-MOS_Driver' */
} BlockIO_Win_SLC;

/* Block states (default storage) for system '<Root>' */
typedef struct tag_D_Work_Win_SLC {
  uint16 wndOverVoltImmPrm;
  uint8 is_active_c3_Win_SLC;          /* '<S6>/StartAtDiffTime' */
  uint8 is_Output_Set;                 /* '<S6>/StartAtDiffTime' */
  uint8 u8OutputRec;                   /* '<S6>/StartAtDiffTime' */
  uint8 temporalCounter_i1;            /* '<S6>/StartAtDiffTime' */
  uint8 is_active_c1_Win_SLC;          /* '<S3>/RelayOutput-ConvertTo-MOS_Driver' */
  uint8 temporalCounter_i1_c;          /* '<S3>/RelayOutput-ConvertTo-MOS_Driver' */
  boolean bFLDnOutput;                 /* '<S6>/StartAtDiffTime' */
  boolean bFRDnOutput;                 /* '<S6>/StartAtDiffTime' */
  boolean bRLDnOutput;                 /* '<S6>/StartAtDiffTime' */
  boolean bRRDnOutput;                 /* '<S6>/StartAtDiffTime' */
  rtDW_Reverse_FL_Win_SLC sf_Reverse_RR;/* '<S6>/Reverse_RR' */
  rtDW_Reverse_FL_Win_SLC sf_Reverse_RL;/* '<S6>/Reverse_RL' */
  rtDW_Reverse_FL_Win_SLC sf_Reverse_FR;/* '<S6>/Reverse_FR' */
  rtDW_Reverse_FL_Win_SLC sf_Reverse_FL;/* '<S6>/Reverse_FL' */
  rtDW_MotorProtect_FL_Win_SLC sf_MotorProtect_RR;/* '<S4>/MotorProtect_RR' */
  rtDW_MotorProtect_FL_Win_SLC sf_MotorProtect_RL;/* '<S4>/MotorProtect_RL' */
  rtDW_MotorProtect_FL_Win_SLC sf_MotorProtect_FR;/* '<S4>/MotorProtect_FR' */
  rtDW_MotorProtect_FL_Win_SLC sf_MotorProtect_FL;/* '<S4>/MotorProtect_FL' */
} D_Work_Win_SLC;

/* Block signals (default storage) */
extern BlockIO_Win_SLC Win_SLC_B;

/* Block states (default storage) */
extern D_Work_Win_SLC Win_SLC_DWork;

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
 * '<Root>' : 'Win_SLC'
 * '<S1>'   : 'Win_SLC/Win'
 * '<S2>'   : 'Win_SLC/Win/MotorControl'
 * '<S3>'   : 'Win_SLC/Win/MotorOutput'
 * '<S4>'   : 'Win_SLC/Win/MotorProtect'
 * '<S5>'   : 'Win_SLC/Win/PriorityArbitration'
 * '<S6>'   : 'Win_SLC/Win/Reverse'
 * '<S7>'   : 'Win_SLC/Win/MotorOutput/RelayOutput-ConvertTo-MOS_Driver'
 * '<S8>'   : 'Win_SLC/Win/MotorProtect/MotorProtect_FL'
 * '<S9>'   : 'Win_SLC/Win/MotorProtect/MotorProtect_FR'
 * '<S10>'  : 'Win_SLC/Win/MotorProtect/MotorProtect_RL'
 * '<S11>'  : 'Win_SLC/Win/MotorProtect/MotorProtect_RR'
 * '<S12>'  : 'Win_SLC/Win/Reverse/Reverse_FL'
 * '<S13>'  : 'Win_SLC/Win/Reverse/Reverse_FR'
 * '<S14>'  : 'Win_SLC/Win/Reverse/Reverse_RL'
 * '<S15>'  : 'Win_SLC/Win/Reverse/Reverse_RR'
 * '<S16>'  : 'Win_SLC/Win/Reverse/StartAtDiffTime'
 */
#endif                                 /* RTW_HEADER_Win_SLC_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
