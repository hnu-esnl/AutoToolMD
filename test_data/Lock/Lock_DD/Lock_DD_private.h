/*
 * File: Lock_DD_private.h
 *
 * Code generated for Simulink model 'Lock_DD'.
 *
 * Model version                  : 1.315
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Oct 19 10:36:27 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Lock_DD_private_h_
#define RTW_HEADER_Lock_DD_private_h_
#include "rtwtypes.h"
#include "Lock_DD.h"

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

extern FUNC(void, Lock_DD_CODE_LOCAL) Lock_DD_M2Active(VAR(uint8, AUTOMATIC) rtu_ElecRelMotorMode, VAR(uint16, AUTOMATIC) rtu_ElecRelMotorPWM, P2VAR(uint8, AUTOMATIC, Lock_DD_VAR) rty_M1Mode, P2VAR(uint8, AUTOMATIC, Lock_DD_VAR) rty_M2Mode, P2VAR(uint16, AUTOMATIC, Lock_DD_VAR) rty_M2Pwm);
extern FUNC(void, Lock_DD_CODE_LOCAL) Lock_DD_Cinch(P2VAR(uint8, AUTOMATIC, Lock_DD_VAR) rty_PwrRelsMotorPs);
extern FUNC(void, Lock_DD_CODE_LOCAL) Lock_DD_Cinch1(P2VAR(uint8, AUTOMATIC, Lock_DD_VAR) rty_PwrRelsMotorPs);
extern FUNC(void, Lock_DD_CODE_LOCAL) Lock_DD_Cinch2(P2VAR(uint8, AUTOMATIC, Lock_DD_VAR) rty_PwrRelsMotorPs);
extern FUNC(void, Lock_DD_CODE_LOCAL) Lock_DD_Cinch3(P2VAR(uint8, AUTOMATIC, Lock_DD_VAR) rty_PwrRelsMotorPs);

#endif                                 /* RTW_HEADER_Lock_DD_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
