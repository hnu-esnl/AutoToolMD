/*
 * File: HvacDampr_Ctrl_private.h
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

#ifndef RTW_HEADER_HvacDampr_Ctrl_private_h_
#define RTW_HEADER_HvacDampr_Ctrl_private_h_
#include "rtwtypes.h"
#include "HvacDampr_Ctrl.h"

/* Includes for objects with custom storage classes. */
#include "HVAC_Mapping.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

extern FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_C_CRC_Pos_Action_Else(VAR(uint8, AUTOMATIC) rtu_u8Circulation_Hmix_Percent_, VAR(uint16, AUTOMATIC) rtu_u16Circulation_FB_Pos, VAR(uint8, AUTOMATIC) rtu_u8Circulation_R_TURN_In, VAR(uint8, AUTOMATIC) rtu_u8Circulation_P_TURN_In, VAR(uint16, AUTOMATIC) rtu_u16Circulation_2LAYER_FLOW_, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u16Circulation_Taget_PosOut, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_Hmix_PercentO, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_R_TURN_Out, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_P_TURN_Out, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u16Circulation_2LAYER_FLOW_);
extern FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ct_A29_CRC_Pos_Action(VAR(uint8, AUTOMATIC) rtu_u8Circulation_Hmix_Percent_, VAR(uint16, AUTOMATIC) rtu_u16Circulation_FB_Pos, VAR(uint8, AUTOMATIC) rtu_u8Circulation_R_TURN_In, VAR(uint8, AUTOMATIC) rtu_u8Circulation_P_TURN_In, VAR(uint16, AUTOMATIC) rtu_u16Circulation_2LAYER_FLOW_, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u16Circulation_Taget_PosOut, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_Hmix_PercentO, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_R_TURN_Out, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_P_TURN_Out, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u16Circulation_2LAYER_FLOW_);
extern FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ct_A02_CRC_Pos_Action(VAR(uint8, AUTOMATIC) rtu_u8Circulation_Hmix_Percent_, VAR(uint16, AUTOMATIC) rtu_u16Circulation_FB_Pos, VAR(uint8, AUTOMATIC) rtu_u8Circulation_R_TURN_In, VAR(uint8, AUTOMATIC) rtu_u8Circulation_P_TURN_In, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u16Circulation_Taget_PosOut, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_Hmix_PercentO, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_R_TURN_Out, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_u8Circulation_P_TURN_Out);
extern FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ctr_IfActionSubsystem(VAR(uint8, AUTOMATIC) rtu_In1, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out1);
extern FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ctrl_EnabledSubsystem(VAR(boolean, AUTOMATIC) rtu_Enable, VAR(uint8, AUTOMATIC) rtu_Circuit_Fault_In, VAR(uint8, AUTOMATIC) rtu_Time_trigger_St, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Circuit_Fault_Out, P2VAR(DW_EnabledSubsystem_HvacDampr_T, AUTOMATIC, HvacDampr_Ctrl_VAR) localDW);
extern FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) Hva_EnabledCompLPFaultcauculate(VAR(uint8, AUTOMATIC) rtu_Enable, VAR(boolean, AUTOMATIC) rtu_In1, P2VAR(boolean, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out1);
extern FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ctr_DCMotorState_Init(P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_LastTargetPos, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_RunSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_MotorSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Moto_JAM_St);
extern FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ctrl_DCMotorState(VAR(uint16, AUTOMATIC) rtu_In_FeedbackPos, VAR(uint16, AUTOMATIC) rtu_In_NewTargetPos, VAR(uint16, AUTOMATIC) rtu_RunMaxPos, VAR(uint16, AUTOMATIC) rtu_RunMinPos, VAR(uint16, AUTOMATIC) rtu_In_StallTime, VAR(uint16, AUTOMATIC) rtu_In_BackTime, VAR(uint16, AUTOMATIC) rtu_In_StopTime, VAR(uint8, AUTOMATIC) rtu_In_StartTime, VAR(uint8, AUTOMATIC) rtu_u8Moto_R_Turn, VAR(uint8, AUTOMATIC) rtu_u8Moto_P_Turn, VAR(uint8, AUTOMATIC) rtu_u8Moto_Stop, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_LastTargetPos, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_RunSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_MotorSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Moto_JAM_St, P2VAR(DW_DCMotorState_HvacDampr_Ctr_T, AUTOMATIC, HvacDampr_Ctrl_VAR) localDW);
extern FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_C_DCMotorState_f_Init(P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_LastTargetPos, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_RunSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_MotorSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Moto_JAM_St);
extern FUNC(void, HvacDampr_Ctrl_CODE_LOCAL) HvacDampr_Ctrl_DCMotorState_a(VAR(uint16, AUTOMATIC) rtu_In_FeedbackPos, VAR(uint16, AUTOMATIC) rtu_In_NewTargetPos, VAR(uint16, AUTOMATIC) rtu_RunMaxPos, VAR(uint16, AUTOMATIC) rtu_RunMinPos, VAR(uint16, AUTOMATIC) rtu_In_StallTime, VAR(uint16, AUTOMATIC) rtu_In_BackTime, VAR(uint16, AUTOMATIC) rtu_In_StopTime, VAR(uint8, AUTOMATIC) rtu_In_StartTime, VAR(uint8, AUTOMATIC) rtu_u8Moto_R_Turn, VAR(uint8, AUTOMATIC) rtu_u8Moto_P_Turn, VAR(uint8, AUTOMATIC) rtu_u8Moto_Stop, P2VAR(uint16, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_LastTargetPos, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_RunSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Out_MotorSts, P2VAR(uint8, AUTOMATIC, HvacDampr_Ctrl_VAR) rty_Moto_JAM_St, P2VAR(DW_DCMotorState_HvacDampr_C_m_T, AUTOMATIC, HvacDampr_Ctrl_VAR) localDW);

#endif                                 /* RTW_HEADER_HvacDampr_Ctrl_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
