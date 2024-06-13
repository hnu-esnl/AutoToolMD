/*
 * File: ElecDoorHndlHall_DD_private.h
 *
 * Code generated for Simulink model 'ElecDoorHndlHall_DD'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Sep 30 15:49:07 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ElecDoorHndlHall_DD_private_h_
#define RTW_HEADER_ElecDoorHndlHall_DD_private_h_
#include "rtwtypes.h"
#include "ElecDoorHndlHall_DD.h"

/* Includes for objects with custom storage classes. */
#include "Lock_Mapping.h"

extern FUNC(void, ElecDoorHndlHall_DD_CODE_LOCAL) ElecDoorHndlHall_DD_Chart_Init(P2VAR(uint16, AUTOMATIC, ElecDoorHndlHall_DD_VAR) rty_HallCnt);
extern FUNC(void, ElecDoorHndlHall_DD_CODE_LOCAL) ElecDoorHndlHall_DD_Chart(VAR(uint16, AUTOMATIC) rtu_Cal_EDHDirChangeDelay, VAR(uint32, AUTOMATIC) rtu_HallCntRaw, VAR(uint8, AUTOMATIC) rtu_DoorHndlMotorPs, P2VAR(uint16, AUTOMATIC, ElecDoorHndlHall_DD_VAR) rty_HallCnt, P2VAR(DW_Chart_ElecDoorHndlHall_DD_T, AUTOMATIC, ElecDoorHndlHall_DD_VAR) localDW);

#endif                                 /* RTW_HEADER_ElecDoorHndlHall_DD_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
