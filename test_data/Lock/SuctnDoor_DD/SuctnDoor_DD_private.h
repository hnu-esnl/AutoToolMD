/*
 * File: SuctnDoor_DD_private.h
 *
 * Code generated for Simulink model 'SuctnDoor_DD'.
 *
 * Model version                  : 1.183
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Sep 30 16:00:26 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SuctnDoor_DD_private_h_
#define RTW_HEADER_SuctnDoor_DD_private_h_
#include "rtwtypes.h"
#include "SuctnDoor_DD.h"

/* Includes for objects with custom storage classes. */
#include "Lock_Mapping.h"
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

extern FUNC(void, SuctnDoor_DD_CODE_LOCAL) SuctnDoor_DD_Cinch(P2VAR(boolean, AUTOMATIC, SuctnDoor_DD_VAR) rty_CinchPlusSt, P2VAR(boolean, AUTOMATIC, SuctnDoor_DD_VAR) rty_CinchMinusSt);
extern FUNC(void, SuctnDoor_DD_CODE_LOCAL) SuctnDoor_DD_CinchRst(P2VAR(boolean, AUTOMATIC, SuctnDoor_DD_VAR) rty_CinchPlusSt, P2VAR(boolean, AUTOMATIC, SuctnDoor_DD_VAR) rty_CinchMinusSt);
extern FUNC(void, SuctnDoor_DD_CODE_LOCAL) Suct_SwitchCaseActionSubsystem2(P2VAR(boolean, AUTOMATIC, SuctnDoor_DD_VAR) rty_CinchPlusSt, P2VAR(boolean, AUTOMATIC, SuctnDoor_DD_VAR) rty_CinchMinusSt);
extern FUNC(void, SuctnDoor_DD_CODE_LOCAL) SuctnDoor_DD_Chart(VAR(uint8, AUTOMATIC) rtu_u8CinchCmd, VAR(uint8, AUTOMATIC) rtu_TiOnForce, P2VAR(float64, AUTOMATIC, SuctnDoor_DD_VAR) rty_bCinchCmd, P2VAR(DW_Chart_SuctnDoor_DD_T, AUTOMATIC, SuctnDoor_DD_VAR) localDW);

#endif                                 /* RTW_HEADER_SuctnDoor_DD_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
