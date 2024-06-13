/*
 * File: KL15PwrSply_DD_private.h
 *
 * Code generated for Simulink model 'KL15PwrSply_DD'.
 *
 * Model version                  : 1.501
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Oct 27 19:14:36 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_KL15PwrSply_DD_private_h_
#define RTW_HEADER_KL15PwrSply_DD_private_h_
#include "rtwtypes.h"
#include "KL15PwrSply_DD.h"

/* Includes for objects with custom storage classes. */
#include "PwrSplyMngt_Mapping.h"
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

extern FUNC(void, KL15PwrSply_DD_CODE_LOCAL) KL15PwrSply_KL15T1OnDiagErr_Set(VAR(uint32, AUTOMATIC) rtu_stErr, VAR(boolean, AUTOMATIC) rtu_stOCErr, VAR(uint16, AUTOMATIC) rtu_OvrCurrDebTime, P2VAR(boolean, AUTOMATIC, KL15PwrSply_DD_VAR) rty_stSCGDebErr, P2VAR(boolean, AUTOMATIC, KL15PwrSply_DD_VAR) rty_stOLDebErr, P2VAR(boolean, AUTOMATIC, KL15PwrSply_DD_VAR) rty_stOCDebErr, P2VAR(DW_KL15T1OnDiagErr_Set_KL15Pw_T, AUTOMATIC, KL15PwrSply_DD_VAR) localDW);
extern FUNC(void, KL15PwrSply_DD_CODE_LOCAL) KL15PwrSpl_KL15T1OffDiagErr_Set(VAR(uint32, AUTOMATIC) rtu_stErr, P2VAR(boolean, AUTOMATIC, KL15PwrSply_DD_VAR) rty_stSCBDebErr, P2VAR(DW_KL15T1OffDiagErr_Set_KL15P_T, AUTOMATIC, KL15PwrSply_DD_VAR) localDW);

#endif                                 /* RTW_HEADER_KL15PwrSply_DD_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
