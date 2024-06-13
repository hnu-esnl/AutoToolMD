/*
 * File: ElecDoorHndl_Ctrl.c
 *
 * Code generated for Simulink model 'ElecDoorHndl_Ctrl'.
 *
 * Model version                  : 1.6620
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Oct 23 12:41:53 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: NEC->V850
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ElecDoorHndl_Ctrl.h"

/* Named constants for Chart: '<S13>/HallSupplyOutput' */
#define ElecDoorHndl_Ctrl_IN_ACTIVE    ((uint8)1U)
#define ElecDoorHndl_Ctrl_IN_Filter    ((uint8)1U)
#define ElecDoorHndl_Ctrl_IN_HallClose ((uint8)2U)
#define ElecDoorHndl_Ctrl_IN_IDEL      ((uint8)2U)
#define ElecDoorHndl_IN_NO_ACTIVE_CHILD ((uint8)0U)

/* Named constants for Chart: '<S14>/MotorOutput' */
#define ElecDoorH_IN_REREVERSEUNLOCKREQ ((uint8)3U)
#define ElecDoorHn_IN_NO_ACTIVE_CHILD_j ((uint8)0U)
#define ElecDoorHnd_IN_EMERGENCY_unfold ((uint8)2U)
#define ElecDoorHndl_C_IN_Motor_Reverse ((uint8)2U)
#define ElecDoorHndl_Ct_IN_Zone0_unfold ((uint8)4U)
#define ElecDoorHndl_Ct_IN_Zone1_unfold ((uint8)6U)
#define ElecDoorHndl_Ct_IN_Zone2_unfold ((uint8)8U)
#define ElecDoorHndl_Ct_IN_Zone3_unfold ((uint8)10U)
#define ElecDoorHndl_Ctr_IN_Motor_Drive ((uint8)1U)
#define ElecDoorHndl_Ctr_IN_REUNLOCKREQ ((uint8)4U)
#define ElecDoorHndl_Ctrl_IN_DLE       ((uint8)1U)
#define ElecDoorHndl_Ctrl_IN_Null      ((uint8)1U)
#define ElecDoorHndl_Ctrl_IN_RELOCKREQ ((uint8)2U)
#define ElecDoorHndl_Ctrl_IN_Zone0_fold ((uint8)3U)
#define ElecDoorHndl_Ctrl_IN_Zone1_fold ((uint8)5U)
#define ElecDoorHndl_Ctrl_IN_Zone2_fold ((uint8)7U)
#define ElecDoorHndl_Ctrl_IN_Zone3_fold ((uint8)9U)

/* Named constants for Chart: '<S19>/LimitPositionLearn' */
#define ElecDoorHndl_Ctrl_IN_IDEL_p    ((uint8)1U)
#define ElecDoorHndl_Ctrl_IN_Memory    ((uint8)2U)

/* Named constants for Chart: '<S10>/MotorStuck' */
#define ElecDoorHndl_Ctrl_IN_IDEL_l    ((uint8)1U)
#define ElecDoorHndl_Ctrl_IN_STUCK     ((uint8)2U)

/* Invariant block signals (default storage) */
const ConstBlockIO_ElecDoorHndl_Ctrl ElecDoorHndl_Ctrl_ConstB = {
  255U,                                /* '<S25>/Switch2' */
  0U,                                  /* '<S5>/Constant12' */
  255U                                 /* '<S58>/Switch2' */
};

/* Block signals (default storage) */
BlockIO_ElecDoorHndl_Ctrl ElecDoorHndl_Ctrl_B;

/* Block states (default storage) */
D_Work_ElecDoorHndl_Ctrl ElecDoorHndl_Ctrl_DWork;
static void ElecDoorH_HallSupplyOutput_Init(boolean *rty_bHallSupplyOutput);
static void ElecDoorHndl_C_HallSupplyOutput(uint8 rtu_u8MotorRunningSts, uint8 rtu_u8HallCloseFilterTimePrm, boolean *rty_bHallSupplyOutput, rtDW_HallSupplyOutput_ElecDoorH *localDW);
static void ElecDoorHndl_C_MotorOutput_Init(uint8 *rty_u8MotorRunningSts, uint8 *rty_u8MotorOutput, uint8 *rty_u8MotorTargetSpeed, uint8 *rty_u8MotorAction);
static void ElecDoorHndl_Ctrl_MotorOutput(uint8 rtu_u8DoorHandleReq, uint8 rtu_u8DoorHandleZoneState, uint8 rtu_gPRM_u8tDoorHandleForceCfg, uint8 rtu_gPRM_u8tDoorHandleEmergency, uint8 rtu_gPRM_u8tDoorHandleSoftStopC, uint8 rtu_gPRM_u8tDoorHandleTimeOutCf, uint16 rtu_gDiag_u16BatteryVolt_mv, uint8 *rty_u8MotorRunningSts, uint8 *rty_u8MotorOutput, uint8 *rty_u8MotorTargetSpeed, uint8 *rty_u8MotorAction, rtDW_MotorOutput_ElecDoorHndl_C *localDW);
static void ElecDoorHn_CurrentPosition_Init(uint16 *rty_u16Position_CUR);
static void ElecDoorHndl_Ct_CurrentPosition(uint16 rtu_u16Position_NVM, uint16 rtu_gASI_u16HallCnt, boolean rtu_bBigEndPosInitSts, boolean rtu_bLittleEndPosInitSts, uint16 rtu_u16DefaultPositionPrm, uint8 rtu_u8HallDirction, uint16 *rty_u16Position_CUR, rtDW_CurrentPosition_ElecDoorHn *localDW);
static void ElecDoorHndl__HallDirction_Init(uint8 *rty_u8HallDirction);
static void ElecDoorHndl_Ctrl_HallDirction(uint8 rtu_u8MotorOutput_FB, boolean rtu_bHallSupplyOutput_FB, uint8 *rty_u8HallDirction);
static void ElecDoo_LimitPositionLearn_Init(uint8 *rty_u8PosLearnReq, uint16 *rty_u16StopBigEndPosBuffer, uint16 *rty_u16StopLittleEndPosBuffer);
static void ElecDoorHndl_LimitPositionLearn(boolean rtu_bBigEndPosInitSts, boolean rtu_bLittleEndPosInitSts, uint8 rtu_u8PosZone, uint8 rtu_u8MotorOutput_FB, uint16 rtu_u16Position_CUR, boolean rtu_bMotorStallFlag, uint8 rtu_u8DefaultValueWrtCnt, uint8 *rty_u8PosLearnReq, uint16 *rty_u16StopBigEndPosBuffer, uint16 *rty_u16StopLittleEndPosBuffer, rtDW_LimitPositionLearn_ElecDoo *localDW);
static void ElecD_LimitPositionProcess_Init(uint8 *rty_u8HardStopBigEndPosEEPWrtCn, uint8 *rty_u8HardStopLittleEndPosEEPWr);
static void ElecDoorHn_LimitPositionProcess(uint8 rtu_u8PosLearnReq, uint8 *rty_u8HardStopBigEndPosEEPWrtCn, uint8 *rty_u8HardStopLittleEndPosEEPWr, rtDW_LimitPositionProcess_ElecD *localDW);
static void ElecDoorHndl_FLDoorLockReq_Init(uint8 *rty_temp_u8DoorHandlePosition, uint8 *rty_u8DoorHandleZoneState);
static void ElecDoorHndl_Ctrl_FLDoorLockReq(uint8 rtu_u8HallPosPct, float64 rtu_bPowerOnReset, float64 rtu_u8MotorErrorSts, uint8 *rty_temp_u8DoorHandlePosition, uint8 *rty_u8DoorHandleZoneState, rtDW_FLDoorLockReq_ElecDoorHndl *localDW);
static void ElecDoorH_PositionDistance_Init(uint16 *rty_u16HardStopBigEndPos, uint16 *rty_u16HardStopLittleEndPos, uint16 *rty_u16SoftStopBigEndPos, uint16 *rty_u16SoftStopLittleEndPos, uint16 *rty_u16TotalDistance);
static void ElecDoorHndl_C_PositionDistance(uint16 rtu_u16HardStopBigEndPos_NVM, uint16 rtu_u16HardStopLittleEndPos_NVM, uint8 rtu_u8StopOffsetPrm, boolean rtu_bPosInitSts, uint16 *rty_u16HardStopBigEndPos, uint16 *rty_u16HardStopLittleEndPos, uint16 *rty_u16SoftStopBigEndPos, uint16 *rty_u16SoftStopLittleEndPos, uint16 *rty_u16TotalDistance);
static void ElecDoorHndl_C_PositionEEP_Init(uint8 *rty_u8PosEEPWrtCnt);
static void ElecDoorHndl_Ctrl_PositionEEP(uint8 rtu_u8MotorRunningSts_FB, boolean rtu_bHallSupplyOutput_FB, uint8 *rty_u8PosEEPWrtCnt, rtDW_PositionEEP_ElecDoorHndl_C *localDW);
static void ElecDoorH_PositionLearnSts_Init(boolean *rty_bPosInitSts, boolean *rty_bBigEndPosInitSts, boolean *rty_bLittleEndPosInitSts, uint8 *rty_u8DefaultValueWrtCnt);
static void ElecDoorHndl_C_PositionLearnSts(boolean rtu_bPowerOnReset, boolean rtu_bHallCfg, uint16 rtu_u16HardStopBigEndPos_NVM, uint16 rtu_u16HardStopLittleEndPos_NVM, uint16 rtu_u16DefaultPositionMaxPrm, uint16 rtu_u16DefaultPositionMinPrm, uint16 rtu_u16TotalDistanceMinPrm, boolean *rty_bPosInitSts, boolean *rty_bBigEndPosInitSts, boolean *rty_bLittleEndPosInitSts, uint8 *rty_u8DefaultValueWrtCnt, rtDW_PositionLearnSts_ElecDoorH *localDW);
static void ElecDoorHndl__PositionZone_Init(uint8 *rty_u8PosZone);
static void ElecDoorHndl_Ctrl_PositionZone(uint16 rtu_u16Position_CUR, uint16 rtu_u16SoftStopBigEndPos, uint16 rtu_u16SoftStopLittleEndPos, uint16 rtu_u16HardStopBigEndPos, uint16 rtu_u16HardStopLittleEndPos, boolean rtu_bPosInitSts, uint8 *rty_u8PosZone);

/* Forward declaration for local functions */
static void ElecDoorHndl_Ctrl_Zone2_unfold(uint8 rtu_u8DoorHandleZoneState, uint16 rtu_gDiag_u16BatteryVolt_mv, uint8 *rty_u8MotorRunningSts, uint8 *rty_u8MotorOutput, uint8 *rty_u8MotorTargetSpeed, uint8 *rty_u8MotorAction, rtDW_MotorOutput_ElecDoorHndl_C *localDW);
static void ElecDoorHndl_Ctrl_Zone3_fold(uint8 rtu_u8DoorHandleZoneState, uint8 rtu_gPRM_u8tDoorHandleTimeOutCf, uint16 rtu_gDiag_u16BatteryVolt_mv, uint8 *rty_u8MotorRunningSts, uint8 *rty_u8MotorOutput, uint8 *rty_u8MotorTargetSpeed, uint8 *rty_u8MotorAction, rtDW_MotorOutput_ElecDoorHndl_C *localDW);
static void ElecDoorHndl_Ctrl_Motor_Drive(uint8 rtu_u8DoorHandleZoneState, uint8 rtu_gPRM_u8tDoorHandleForceCfg, uint8 rtu_gPRM_u8tDoorHandleEmergency, uint8 rtu_gPRM_u8tDoorHandleSoftStopC, uint8 rtu_gPRM_u8tDoorHandleTimeOutCf, uint16 rtu_gDiag_u16BatteryVolt_mv, uint8 *rty_u8MotorRunningSts, uint8 *rty_u8MotorOutput, uint8 *rty_u8MotorTargetSpeed, uint8 *rty_u8MotorAction, rtDW_MotorOutput_ElecDoorHndl_C *localDW);

/* Forward declaration for local functions */
static void ElecDoorH_enter_internal_Memory(uint8 rtu_u8MotorOutput_FB, uint16 rtu_u16Position_CUR, uint8 *rty_u8PosLearnReq, uint16 *rty_u16StopBigEndPosBuffer, uint16 *rty_u16StopLittleEndPosBuffer, rtDW_LimitPositionLearn_ElecDoo *localDW);

/*
 * System initialize for atomic system:
 *    '<S13>/HallSupplyOutput'
 *    '<S46>/HallSupplyOutput'
 */
static void ElecDoorH_HallSupplyOutput_Init(boolean *rty_bHallSupplyOutput)
{
  *rty_bHallSupplyOutput = false;
}

/*
 * Output and update for atomic system:
 *    '<S13>/HallSupplyOutput'
 *    '<S46>/HallSupplyOutput'
 */
static void ElecDoorHndl_C_HallSupplyOutput(uint8 rtu_u8MotorRunningSts, uint8 rtu_u8HallCloseFilterTimePrm, boolean *rty_bHallSupplyOutput, rtDW_HallSupplyOutput_ElecDoorH *localDW)
{
  /* Chart: '<S13>/HallSupplyOutput' */
  if (localDW->temporalCounter_i1 < 255U) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c17_ElecDoorHndl_Ctrl == 0U) {
    localDW->is_active_c17_ElecDoorHndl_Ctrl = 1U;
    localDW->is_c17_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctrl_IN_IDEL;
    localDW->is_IDEL = ElecDoorHndl_Ctrl_IN_Filter;
    localDW->temporalCounter_i1 = 0U;
  } else if (localDW->is_c17_ElecDoorHndl_Ctrl == ElecDoorHndl_Ctrl_IN_ACTIVE) {
    *rty_bHallSupplyOutput = true;
    if (rtu_u8MotorRunningSts != MOTOR_STS_RUNNING) {
      localDW->is_c17_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctrl_IN_IDEL;
      localDW->is_IDEL = ElecDoorHndl_Ctrl_IN_Filter;
      localDW->temporalCounter_i1 = 0U;
    }
  } else if (rtu_u8MotorRunningSts == MOTOR_STS_RUNNING) {
    localDW->is_IDEL = ElecDoorHndl_IN_NO_ACTIVE_CHILD;
    localDW->is_c17_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctrl_IN_ACTIVE;
    *rty_bHallSupplyOutput = true;
  } else if (localDW->is_IDEL == ElecDoorHndl_Ctrl_IN_Filter) {
    if (localDW->temporalCounter_i1 >= rtu_u8HallCloseFilterTimePrm) {
      /* 关闭电机后，延时40ms关闭HALL电源 */
      localDW->is_IDEL = ElecDoorHndl_Ctrl_IN_HallClose;
      *rty_bHallSupplyOutput = false;
    }
  } else {
    *rty_bHallSupplyOutput = false;
  }

  /* End of Chart: '<S13>/HallSupplyOutput' */
}

/* Function for Chart: '<S14>/MotorOutput' */
static void ElecDoorHndl_Ctrl_Zone2_unfold(uint8 rtu_u8DoorHandleZoneState, uint16 rtu_gDiag_u16BatteryVolt_mv, uint8 *rty_u8MotorRunningSts, uint8 *rty_u8MotorOutput, uint8 *rty_u8MotorTargetSpeed, uint8 *rty_u8MotorAction, rtDW_MotorOutput_ElecDoorHndl_C *localDW)
{
  sint32 tmp;
  *rty_u8MotorAction = 2U;
  if (rtu_u8DoorHandleZoneState == 3) {
    localDW->is_Motor_Drive = ElecDoorHndl_Ct_IN_Zone3_unfold;
    localDW->temporalCounter_i1 = 0U;
    *rty_u8MotorOutput = (uint8)DHM_NORMAL_UNFOLD;
    *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
    tmp = rtu_gDiag_u16BatteryVolt_mv == 0 ? MAX_int32_T : 800000 / rtu_gDiag_u16BatteryVolt_mv;
    if (tmp < 0) {
      tmp = 0;
    } else {
      if (tmp > 255) {
        tmp = 255;
      }
    }

    *rty_u8MotorTargetSpeed = (uint8)tmp;
    *rty_u8MotorAction = 2U;
    localDW->ReUnfoldFlag = false;
  }
}

/* Function for Chart: '<S14>/MotorOutput' */
static void ElecDoorHndl_Ctrl_Zone3_fold(uint8 rtu_u8DoorHandleZoneState, uint8 rtu_gPRM_u8tDoorHandleTimeOutCf, uint16 rtu_gDiag_u16BatteryVolt_mv, uint8 *rty_u8MotorRunningSts, uint8 *rty_u8MotorOutput, uint8 *rty_u8MotorTargetSpeed, uint8 *rty_u8MotorAction, rtDW_MotorOutput_ElecDoorHndl_C *localDW)
{
  sint32 tmp;
  uint32 qY;
  *rty_u8MotorAction = 1U;
  if (rtu_u8DoorHandleZoneState == 2) {
    localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_Zone2_fold;
    *rty_u8MotorOutput = (uint8)DHM_NORMAL_FOLD;
    *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
    tmp = rtu_gDiag_u16BatteryVolt_mv == 0 ? MAX_int32_T : 1000000 / rtu_gDiag_u16BatteryVolt_mv;
    if (tmp < 0) {
      tmp = 0;
    } else {
      if (tmp > 255) {
        tmp = 255;
      }
    }

    *rty_u8MotorTargetSpeed = (uint8)tmp;
    *rty_u8MotorAction = 1U;
    localDW->ReFoldFlag = false;
    qY = localDW->u32FoldTimeOutCnt + /*MW:OvSatOk*/ 1U;
    if (qY < localDW->u32FoldTimeOutCnt) {
      qY = MAX_uint32_T;
    }

    localDW->u32FoldTimeOutCnt = qY;
  } else if (localDW->u32FoldTimeOutCnt > (uint32)(rtu_gPRM_u8tDoorHandleTimeOutCf * 10)) {
    localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_Zone0_fold;
    localDW->temporalCounter_i1 = 0U;
    *rty_u8MotorOutput = (uint8)DHM_NORMAL_FOLD;
    *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
    *rty_u8MotorTargetSpeed = 100U;
    *rty_u8MotorAction = 1U;
    localDW->ReFoldFlag = false;
    localDW->u32FoldTimeOutCnt = 0U;
  } else {
    qY = localDW->u32FoldTimeOutCnt + /*MW:OvSatOk*/ 1U;
    if (qY < localDW->u32FoldTimeOutCnt) {
      qY = MAX_uint32_T;
    }

    localDW->u32FoldTimeOutCnt = qY;
  }
}

/* Function for Chart: '<S14>/MotorOutput' */
static void ElecDoorHndl_Ctrl_Motor_Drive(uint8 rtu_u8DoorHandleZoneState, uint8 rtu_gPRM_u8tDoorHandleForceCfg, uint8 rtu_gPRM_u8tDoorHandleEmergency, uint8 rtu_gPRM_u8tDoorHandleSoftStopC, uint8 rtu_gPRM_u8tDoorHandleTimeOutCf, uint16 rtu_gDiag_u16BatteryVolt_mv, uint8 *rty_u8MotorRunningSts, uint8 *rty_u8MotorOutput, uint8 *rty_u8MotorTargetSpeed, uint8 *rty_u8MotorAction, rtDW_MotorOutput_ElecDoorHndl_C *localDW)
{
  uint32 qY;
  sint32 tmp;
  boolean guard1 = false;
  if (((*rty_u8MotorOutput == DHM_NORMAL_UNFOLD) && ((localDW->u8DoorHandleReq_prev != localDW->u8DoorHandleReq_start) && (localDW->u8DoorHandleReq_start == REQ_FOLD))) || ((*rty_u8MotorOutput == DHM_NORMAL_FOLD) && ((localDW->u8DoorHandleReq_prev != localDW->u8DoorHandleReq_start) && (localDW->u8DoorHandleReq_start == REQ_EMERGENCY_UNFOLD))) || ((*rty_u8MotorOutput == DHM_NORMAL_FOLD) && ((localDW->u8DoorHandleReq_prev != localDW->u8DoorHandleReq_start) && (localDW->u8DoorHandleReq_start == REQ_UNFOLD)))) {
    localDW->is_Motor_Drive = ElecDoorHn_IN_NO_ACTIVE_CHILD_j;
    localDW->is_c5_ElecDoorHndl_Ctrl = ElecDoorHndl_C_IN_Motor_Reverse;
    localDW->temporalCounter_i1 = 0U;
    *rty_u8MotorOutput = (uint8)DHM_NULL;
    *rty_u8MotorRunningSts = (uint8)MOTOR_STS_STOP;
    *rty_u8MotorTargetSpeed = 0U;
    *rty_u8MotorAction = 0U;
    localDW->is_Motor_Reverse = ElecDoorHndl_Ctrl_IN_Null;
  } else {
    guard1 = false;
    switch (localDW->is_Motor_Drive) {
     case ElecDoorHndl_Ctrl_IN_DLE:
      *rty_u8MotorAction = 0U;
      if ((rtu_u8DoorHandleZoneState == INIT_STATE) && (((localDW->u8DoorHandleReq_prev != localDW->u8DoorHandleReq_start) && (localDW->u8DoorHandleReq_start == REQ_UNFOLD)) || localDW->ReUnfoldFlag)) {
        /* 门把手处于未标定状态 */
        localDW->is_Motor_Drive = ElecDoorHndl_Ct_IN_Zone0_unfold;
        localDW->temporalCounter_i1 = 0U;
        *rty_u8MotorOutput = (uint8)DHM_NORMAL_UNFOLD;
        *rty_u8MotorTargetSpeed = 100U;
        *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
        *rty_u8MotorAction = 2U;
        localDW->ReUnfoldFlag = false;
      } else if ((rtu_u8DoorHandleZoneState == INIT_STATE) && (((localDW->u8DoorHandleReq_prev != localDW->u8DoorHandleReq_start) && (localDW->u8DoorHandleReq_start == REQ_FOLD)) || localDW->ReFoldFlag)) {
        /* 门把手处于未标定状态 */
        localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_Zone0_fold;
        localDW->temporalCounter_i1 = 0U;
        *rty_u8MotorOutput = (uint8)DHM_NORMAL_FOLD;
        *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
        *rty_u8MotorTargetSpeed = 100U;
        *rty_u8MotorAction = 1U;
        localDW->ReFoldFlag = false;
        localDW->u32FoldTimeOutCnt = 0U;
      } else if (((localDW->u8DoorHandleReq_prev != localDW->u8DoorHandleReq_start) && (localDW->u8DoorHandleReq_start == REQ_EMERGENCY_UNFOLD)) || localDW->ReEmergencyUnfold) {
        localDW->is_Motor_Drive = ElecDoorHnd_IN_EMERGENCY_unfold;
        localDW->temporalCounter_i1 = 0U;
        *rty_u8MotorOutput = (uint8)DHM_NORMAL_UNFOLD;
        *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
        *rty_u8MotorTargetSpeed = 100U;
        *rty_u8MotorAction = 2U;
        localDW->ReEmergencyUnfold = false;
      } else if (((localDW->u8DoorHandleReq_prev != localDW->u8DoorHandleReq_start) && (localDW->u8DoorHandleReq_start == REQ_UNFOLD)) || localDW->ReUnfoldFlag) {
        if (rtu_u8DoorHandleZoneState == 1) {
          localDW->is_Motor_Drive = ElecDoorHndl_Ct_IN_Zone1_unfold;
          localDW->temporalCounter_i1 = 0U;
          *rty_u8MotorOutput = (uint8)DHM_NORMAL_UNFOLD;
          *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
          tmp = rtu_gDiag_u16BatteryVolt_mv == 0 ? MAX_int32_T : 800000 / rtu_gDiag_u16BatteryVolt_mv;
          if (tmp < 0) {
            tmp = 0;
          } else {
            if (tmp > 255) {
              tmp = 255;
            }
          }

          *rty_u8MotorTargetSpeed = (uint8)tmp;
          *rty_u8MotorAction = 2U;
          localDW->ReUnfoldFlag = false;
        } else if (rtu_u8DoorHandleZoneState == 2) {
          localDW->is_Motor_Drive = ElecDoorHndl_Ct_IN_Zone2_unfold;
          *rty_u8MotorOutput = (uint8)DHM_NORMAL_UNFOLD;
          *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
          tmp = rtu_gDiag_u16BatteryVolt_mv == 0 ? MAX_int32_T : 1000000 / rtu_gDiag_u16BatteryVolt_mv;
          if (tmp < 0) {
            tmp = 0;
          } else {
            if (tmp > 255) {
              tmp = 255;
            }
          }

          *rty_u8MotorTargetSpeed = (uint8)tmp;
          *rty_u8MotorAction = 2U;
          localDW->ReUnfoldFlag = false;
        } else if (rtu_u8DoorHandleZoneState == 3) {
          localDW->is_Motor_Drive = ElecDoorHndl_Ct_IN_Zone3_unfold;
          localDW->temporalCounter_i1 = 0U;
          *rty_u8MotorOutput = (uint8)DHM_NORMAL_UNFOLD;
          *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
          tmp = rtu_gDiag_u16BatteryVolt_mv == 0 ? MAX_int32_T : 800000 / rtu_gDiag_u16BatteryVolt_mv;
          if (tmp < 0) {
            tmp = 0;
          } else {
            if (tmp > 255) {
              tmp = 255;
            }
          }

          *rty_u8MotorTargetSpeed = (uint8)tmp;
          *rty_u8MotorAction = 2U;
          localDW->ReUnfoldFlag = false;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      break;

     case ElecDoorHnd_IN_EMERGENCY_unfold:
      *rty_u8MotorAction = 2U;
      if (localDW->temporalCounter_i1 >= (uint32)(rtu_gPRM_u8tDoorHandleEmergency * 10)) {
        localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_DLE;
        *rty_u8MotorOutput = (uint8)DHM_NULL;
        *rty_u8MotorRunningSts = (uint8)MOTOR_STS_STOP;
        *rty_u8MotorAction = 0U;
        *rty_u8MotorTargetSpeed = 0U;
      }
      break;

     case ElecDoorHndl_Ctrl_IN_Zone0_fold:
      *rty_u8MotorAction = 1U;
      if (localDW->temporalCounter_i1 >= (uint32)(rtu_gPRM_u8tDoorHandleForceCfg * 10)) {
        localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_DLE;
        *rty_u8MotorOutput = (uint8)DHM_NULL;
        *rty_u8MotorRunningSts = (uint8)MOTOR_STS_STOP;
        *rty_u8MotorAction = 0U;
        *rty_u8MotorTargetSpeed = 0U;
      }
      break;

     case ElecDoorHndl_Ct_IN_Zone0_unfold:
      *rty_u8MotorAction = 2U;
      if (localDW->temporalCounter_i1 >= (uint32)(rtu_gPRM_u8tDoorHandleForceCfg * 10)) {
        localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_DLE;
        *rty_u8MotorOutput = (uint8)DHM_NULL;
        *rty_u8MotorRunningSts = (uint8)MOTOR_STS_STOP;
        *rty_u8MotorAction = 0U;
        *rty_u8MotorTargetSpeed = 0U;
      }
      break;

     case ElecDoorHndl_Ctrl_IN_Zone1_fold:
      *rty_u8MotorAction = 1U;
      if (localDW->temporalCounter_i1 >= rtu_gPRM_u8tDoorHandleSoftStopC) {
        localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_DLE;
        *rty_u8MotorOutput = (uint8)DHM_NULL;
        *rty_u8MotorRunningSts = (uint8)MOTOR_STS_STOP;
        *rty_u8MotorAction = 0U;
        *rty_u8MotorTargetSpeed = 0U;
      }
      break;

     case ElecDoorHndl_Ct_IN_Zone1_unfold:
      *rty_u8MotorAction = 2U;
      if (rtu_u8DoorHandleZoneState == 2) {
        localDW->is_Motor_Drive = ElecDoorHndl_Ct_IN_Zone2_unfold;
        *rty_u8MotorOutput = (uint8)DHM_NORMAL_UNFOLD;
        *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
        tmp = rtu_gDiag_u16BatteryVolt_mv == 0 ? MAX_int32_T : 1000000 / rtu_gDiag_u16BatteryVolt_mv;
        if (tmp < 0) {
          tmp = 0;
        } else {
          if (tmp > 255) {
            tmp = 255;
          }
        }

        *rty_u8MotorTargetSpeed = (uint8)tmp;
        *rty_u8MotorAction = 2U;
        localDW->ReUnfoldFlag = false;
      } else {
        if ((localDW->temporalCounter_i1 >= (uint32)(rtu_gPRM_u8tDoorHandleTimeOutCf * 10)) && (rtu_u8DoorHandleZoneState == 1)) {
          /* 超时强制展开 */
          localDW->is_Motor_Drive = ElecDoorHndl_Ct_IN_Zone0_unfold;
          localDW->temporalCounter_i1 = 0U;
          *rty_u8MotorOutput = (uint8)DHM_NORMAL_UNFOLD;
          *rty_u8MotorTargetSpeed = 100U;
          *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
          *rty_u8MotorAction = 2U;
          localDW->ReUnfoldFlag = false;
        }
      }
      break;

     case ElecDoorHndl_Ctrl_IN_Zone2_fold:
      *rty_u8MotorAction = 1U;
      if (rtu_u8DoorHandleZoneState == 1) {
        localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_Zone1_fold;
        localDW->temporalCounter_i1 = 0U;
        *rty_u8MotorOutput = (uint8)DHM_NORMAL_FOLD;
        *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
        tmp = rtu_gDiag_u16BatteryVolt_mv == 0 ? MAX_int32_T : 800000 / rtu_gDiag_u16BatteryVolt_mv;
        if (tmp < 0) {
          tmp = 0;
        } else {
          if (tmp > 255) {
            tmp = 255;
          }
        }

        *rty_u8MotorTargetSpeed = (uint8)tmp;
        *rty_u8MotorAction = 1U;
        localDW->ReFoldFlag = false;
        localDW->u32FoldTimeOutCnt = 0U;
      } else if (localDW->u32FoldTimeOutCnt > (uint32)(rtu_gPRM_u8tDoorHandleTimeOutCf * 10)) {
        localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_Zone0_fold;
        localDW->temporalCounter_i1 = 0U;
        *rty_u8MotorOutput = (uint8)DHM_NORMAL_FOLD;
        *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
        *rty_u8MotorTargetSpeed = 100U;
        *rty_u8MotorAction = 1U;
        localDW->ReFoldFlag = false;
        localDW->u32FoldTimeOutCnt = 0U;
      } else {
        qY = localDW->u32FoldTimeOutCnt + /*MW:OvSatOk*/ 1U;
        if (qY < localDW->u32FoldTimeOutCnt) {
          qY = MAX_uint32_T;
        }

        localDW->u32FoldTimeOutCnt = qY;
      }
      break;

     case ElecDoorHndl_Ct_IN_Zone2_unfold:
      ElecDoorHndl_Ctrl_Zone2_unfold(rtu_u8DoorHandleZoneState, rtu_gDiag_u16BatteryVolt_mv, rty_u8MotorRunningSts, rty_u8MotorOutput, rty_u8MotorTargetSpeed, rty_u8MotorAction, localDW);
      break;

     case ElecDoorHndl_Ctrl_IN_Zone3_fold:
      ElecDoorHndl_Ctrl_Zone3_fold(rtu_u8DoorHandleZoneState, rtu_gPRM_u8tDoorHandleTimeOutCf, rtu_gDiag_u16BatteryVolt_mv, rty_u8MotorRunningSts, rty_u8MotorOutput, rty_u8MotorTargetSpeed, rty_u8MotorAction, localDW);
      break;

     default:
      *rty_u8MotorAction = 2U;
      if (localDW->temporalCounter_i1 >= rtu_gPRM_u8tDoorHandleSoftStopC) {
        localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_DLE;
        *rty_u8MotorOutput = (uint8)DHM_NULL;
        *rty_u8MotorRunningSts = (uint8)MOTOR_STS_STOP;
        *rty_u8MotorAction = 0U;
        *rty_u8MotorTargetSpeed = 0U;
      }
      break;
    }

    if (guard1) {
      if (((localDW->u8DoorHandleReq_prev != localDW->u8DoorHandleReq_start) && (localDW->u8DoorHandleReq_start == REQ_FOLD)) || localDW->ReFoldFlag) {
        if ((rtu_u8DoorHandleZoneState == 3) || (rtu_u8DoorHandleZoneState == 4)) {
          localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_Zone3_fold;
          *rty_u8MotorOutput = (uint8)DHM_NORMAL_FOLD;
          *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
          tmp = rtu_gDiag_u16BatteryVolt_mv == 0 ? MAX_int32_T : 800000 / rtu_gDiag_u16BatteryVolt_mv;
          if (tmp < 0) {
            tmp = 0;
          } else {
            if (tmp > 255) {
              tmp = 255;
            }
          }

          *rty_u8MotorTargetSpeed = (uint8)tmp;
          *rty_u8MotorAction = 1U;
          localDW->ReFoldFlag = false;
          qY = localDW->u32FoldTimeOutCnt + /*MW:OvSatOk*/ 1U;
          if (qY < localDW->u32FoldTimeOutCnt) {
            qY = MAX_uint32_T;
          }

          localDW->u32FoldTimeOutCnt = qY;
        } else {
          switch (rtu_u8DoorHandleZoneState) {
           case 2:
            localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_Zone2_fold;
            *rty_u8MotorOutput = (uint8)DHM_NORMAL_FOLD;
            *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
            tmp = rtu_gDiag_u16BatteryVolt_mv == 0 ? MAX_int32_T : 1000000 / rtu_gDiag_u16BatteryVolt_mv;
            if (tmp < 0) {
              tmp = 0;
            } else {
              if (tmp > 255) {
                tmp = 255;
              }
            }

            *rty_u8MotorTargetSpeed = (uint8)tmp;
            *rty_u8MotorAction = 1U;
            localDW->ReFoldFlag = false;
            qY = localDW->u32FoldTimeOutCnt + /*MW:OvSatOk*/ 1U;
            if (qY < localDW->u32FoldTimeOutCnt) {
              qY = MAX_uint32_T;
            }

            localDW->u32FoldTimeOutCnt = qY;
            break;

           case 1:
            localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_Zone1_fold;
            localDW->temporalCounter_i1 = 0U;
            *rty_u8MotorOutput = (uint8)DHM_NORMAL_FOLD;
            *rty_u8MotorRunningSts = (uint8)MOTOR_STS_RUNNING;
            tmp = rtu_gDiag_u16BatteryVolt_mv == 0 ? MAX_int32_T : 800000 / rtu_gDiag_u16BatteryVolt_mv;
            if (tmp < 0) {
              tmp = 0;
            } else {
              if (tmp > 255) {
                tmp = 255;
              }
            }

            *rty_u8MotorTargetSpeed = (uint8)tmp;
            *rty_u8MotorAction = 1U;
            localDW->ReFoldFlag = false;
            localDW->u32FoldTimeOutCnt = 0U;
            break;
          }
        }
      }
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S14>/MotorOutput'
 *    '<S47>/MotorOutput'
 */
static void ElecDoorHndl_C_MotorOutput_Init(uint8 *rty_u8MotorRunningSts, uint8 *rty_u8MotorOutput, uint8 *rty_u8MotorTargetSpeed, uint8 *rty_u8MotorAction)
{
  *rty_u8MotorRunningSts = 0U;
  *rty_u8MotorOutput = 0U;
  *rty_u8MotorTargetSpeed = 0U;
  *rty_u8MotorAction = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S14>/MotorOutput'
 *    '<S47>/MotorOutput'
 */
static void ElecDoorHndl_Ctrl_MotorOutput(uint8 rtu_u8DoorHandleReq, uint8 rtu_u8DoorHandleZoneState, uint8 rtu_gPRM_u8tDoorHandleForceCfg, uint8 rtu_gPRM_u8tDoorHandleEmergency, uint8 rtu_gPRM_u8tDoorHandleSoftStopC, uint8 rtu_gPRM_u8tDoorHandleTimeOutCf, uint16 rtu_gDiag_u16BatteryVolt_mv, uint8 *rty_u8MotorRunningSts, uint8 *rty_u8MotorOutput, uint8 *rty_u8MotorTargetSpeed, uint8 *rty_u8MotorAction, rtDW_MotorOutput_ElecDoorHndl_C *localDW)
{
  /* Chart: '<S14>/MotorOutput' */
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  localDW->u8DoorHandleReq_prev = localDW->u8DoorHandleReq_start;
  localDW->u8DoorHandleReq_start = rtu_u8DoorHandleReq;

  /* Chart: '<S14>/MotorOutput' */
  if (localDW->is_active_c5_ElecDoorHndl_Ctrl == 0U) {
    localDW->u8DoorHandleReq_prev = rtu_u8DoorHandleReq;
    localDW->is_active_c5_ElecDoorHndl_Ctrl = 1U;
    localDW->is_c5_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctr_IN_Motor_Drive;
    localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_DLE;
    *rty_u8MotorOutput = (uint8)DHM_NULL;
    *rty_u8MotorRunningSts = (uint8)MOTOR_STS_STOP;
    *rty_u8MotorAction = 0U;
    *rty_u8MotorTargetSpeed = 0U;
  } else if (localDW->is_c5_ElecDoorHndl_Ctrl == ElecDoorHndl_Ctr_IN_Motor_Drive) {
    ElecDoorHndl_Ctrl_Motor_Drive(rtu_u8DoorHandleZoneState, rtu_gPRM_u8tDoorHandleForceCfg, rtu_gPRM_u8tDoorHandleEmergency, rtu_gPRM_u8tDoorHandleSoftStopC, rtu_gPRM_u8tDoorHandleTimeOutCf, rtu_gDiag_u16BatteryVolt_mv, rty_u8MotorRunningSts, rty_u8MotorOutput, rty_u8MotorTargetSpeed, rty_u8MotorAction, localDW);
  } else {
    *rty_u8MotorAction = 0U;
    if (localDW->temporalCounter_i1 >= 40U) {
      localDW->is_Motor_Reverse = ElecDoorHn_IN_NO_ACTIVE_CHILD_j;
      localDW->is_c5_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctr_IN_Motor_Drive;
      localDW->is_Motor_Drive = ElecDoorHndl_Ctrl_IN_DLE;
      *rty_u8MotorOutput = (uint8)DHM_NULL;
      *rty_u8MotorRunningSts = (uint8)MOTOR_STS_STOP;
      *rty_u8MotorAction = 0U;
      *rty_u8MotorTargetSpeed = 0U;
    } else {
      switch (localDW->is_Motor_Reverse) {
       case ElecDoorHndl_Ctrl_IN_Null:
        if (rtu_u8DoorHandleReq == REQ_UNFOLD) {
          localDW->is_Motor_Reverse = ElecDoorHndl_Ctrl_IN_RELOCKREQ;
          localDW->ReUnfoldFlag = true;
          localDW->ReFoldFlag = false;
          localDW->ReEmergencyUnfold = false;
        } else if (rtu_u8DoorHandleReq == REQ_EMERGENCY_UNFOLD) {
          localDW->is_Motor_Reverse = ElecDoorH_IN_REREVERSEUNLOCKREQ;
          localDW->ReEmergencyUnfold = true;
          localDW->ReFoldFlag = false;
          localDW->ReUnfoldFlag = false;
        } else {
          if (rtu_u8DoorHandleReq == REQ_FOLD) {
            localDW->is_Motor_Reverse = ElecDoorHndl_Ctr_IN_REUNLOCKREQ;
            localDW->ReFoldFlag = true;
            localDW->ReUnfoldFlag = false;
            localDW->ReEmergencyUnfold = false;
          }
        }
        break;

       case ElecDoorHndl_Ctrl_IN_RELOCKREQ:
        if (rtu_u8DoorHandleReq == REQ_UNFOLD) {
          localDW->is_Motor_Reverse = ElecDoorHndl_Ctrl_IN_RELOCKREQ;
          localDW->ReUnfoldFlag = true;
          localDW->ReFoldFlag = false;
          localDW->ReEmergencyUnfold = false;
        } else if (rtu_u8DoorHandleReq == REQ_EMERGENCY_UNFOLD) {
          localDW->is_Motor_Reverse = ElecDoorH_IN_REREVERSEUNLOCKREQ;
          localDW->ReEmergencyUnfold = true;
          localDW->ReFoldFlag = false;
          localDW->ReUnfoldFlag = false;
        } else {
          if (rtu_u8DoorHandleReq == REQ_FOLD) {
            localDW->is_Motor_Reverse = ElecDoorHndl_Ctr_IN_REUNLOCKREQ;
            localDW->ReFoldFlag = true;
            localDW->ReUnfoldFlag = false;
            localDW->ReEmergencyUnfold = false;
          }
        }
        break;

       case ElecDoorH_IN_REREVERSEUNLOCKREQ:
        if (rtu_u8DoorHandleReq == REQ_UNFOLD) {
          localDW->is_Motor_Reverse = ElecDoorHndl_Ctrl_IN_RELOCKREQ;
          localDW->ReUnfoldFlag = true;
          localDW->ReFoldFlag = false;
          localDW->ReEmergencyUnfold = false;
        } else if (rtu_u8DoorHandleReq == REQ_EMERGENCY_UNFOLD) {
          localDW->is_Motor_Reverse = ElecDoorH_IN_REREVERSEUNLOCKREQ;
          localDW->ReEmergencyUnfold = true;
          localDW->ReFoldFlag = false;
          localDW->ReUnfoldFlag = false;
        } else {
          if (rtu_u8DoorHandleReq == REQ_FOLD) {
            localDW->is_Motor_Reverse = ElecDoorHndl_Ctr_IN_REUNLOCKREQ;
            localDW->ReFoldFlag = true;
            localDW->ReUnfoldFlag = false;
            localDW->ReEmergencyUnfold = false;
          }
        }
        break;

       default:
        if (rtu_u8DoorHandleReq == REQ_UNFOLD) {
          localDW->is_Motor_Reverse = ElecDoorHndl_Ctrl_IN_RELOCKREQ;
          localDW->ReUnfoldFlag = true;
          localDW->ReFoldFlag = false;
          localDW->ReEmergencyUnfold = false;
        } else if (rtu_u8DoorHandleReq == REQ_EMERGENCY_UNFOLD) {
          localDW->is_Motor_Reverse = ElecDoorH_IN_REREVERSEUNLOCKREQ;
          localDW->ReEmergencyUnfold = true;
          localDW->ReFoldFlag = false;
          localDW->ReUnfoldFlag = false;
        } else {
          if (rtu_u8DoorHandleReq == REQ_FOLD) {
            localDW->is_Motor_Reverse = ElecDoorHndl_Ctr_IN_REUNLOCKREQ;
            localDW->ReFoldFlag = true;
            localDW->ReUnfoldFlag = false;
            localDW->ReEmergencyUnfold = false;
          }
        }
        break;
      }
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S17>/CurrentPosition'
 *    '<S50>/CurrentPosition'
 */
static void ElecDoorHn_CurrentPosition_Init(uint16 *rty_u16Position_CUR)
{
  *rty_u16Position_CUR = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S17>/CurrentPosition'
 *    '<S50>/CurrentPosition'
 */
static void ElecDoorHndl_Ct_CurrentPosition(uint16 rtu_u16Position_NVM, uint16 rtu_gASI_u16HallCnt, boolean rtu_bBigEndPosInitSts, boolean rtu_bLittleEndPosInitSts, uint16 rtu_u16DefaultPositionPrm, uint8 rtu_u8HallDirction, uint16 *rty_u16Position_CUR, rtDW_CurrentPosition_ElecDoorHn *localDW)
{
  sint32 tmp;
  localDW->u8HallDirction_prev = localDW->u8HallDirction_start;
  localDW->u8HallDirction_start = rtu_u8HallDirction;
  if (!localDW->doneDoubleBufferReInit) {
    localDW->doneDoubleBufferReInit = true;
    localDW->u8HallDirction_prev = rtu_u8HallDirction;
  }

  /* Chart: '<S17>/CurrentPosition' */
  if (!localDW->bFirstRun) {
    localDW->bFirstRun = true;
    localDW->gASI_u16HallCntSTD = (uint16)0x0000;
    *rty_u16Position_CUR = rtu_u16Position_NVM;

    /* EEProm Position */
  } else if (rtu_bBigEndPosInitSts && rtu_bLittleEndPosInitSts) {
    /* 任意位置学习成功以后，均必须按照实际HALL计算位置，否则无法学习到另一端位置 */
    *rty_u16Position_CUR = rtu_u16DefaultPositionPrm;

    /* Default Position
       注意这条赋值会引起位置突变 */
  } else {
    if (((localDW->u8HallDirction_prev != localDW->u8HallDirction_start) && (localDW->u8HallDirction_start == HALL_DIR_INCREASE)) || ((localDW->u8HallDirction_prev != localDW->u8HallDirction_start) && (localDW->u8HallDirction_start == HALL_DIR_REDUCE))) {
      localDW->gASI_u16HallCntSTD = rtu_gASI_u16HallCnt;

      /* 记录电机开启运动时的HALL数作为“基准值”
         理论上这时的gASI_u16HallCnt应该是"0" */
    }

    /* 记录当前HALL数作为“当前值” */
    if (rtu_gASI_u16HallCnt >= localDW->gASI_u16HallCntSTD) {
      if (rtu_u8HallDirction == HALL_DIR_INCREASE) {
        tmp = (*rty_u16Position_CUR + rtu_gASI_u16HallCnt) - localDW->gASI_u16HallCntSTD;
        if (tmp < 0) {
          tmp = 0;
        } else {
          if (tmp > 65535) {
            tmp = 65535;
          }
        }

        *rty_u16Position_CUR = (uint16)tmp;

        /* Increase Position
           “当前位置” = ((“当前位置” + (“当前值” - “基准值”)) */
        localDW->gASI_u16HallCntSTD = rtu_gASI_u16HallCnt;

        /* 更新记录当下任务周期计算后的“基准值” */
      } else {
        if (rtu_u8HallDirction == HALL_DIR_REDUCE) {
          tmp = (*rty_u16Position_CUR - rtu_gASI_u16HallCnt) + localDW->gASI_u16HallCntSTD;
          if (tmp < 0) {
            tmp = 0;
          } else {
            if (tmp > 65535) {
              tmp = 65535;
            }
          }

          *rty_u16Position_CUR = (uint16)tmp;

          /* Reduce Position
             “当前位置” = ((“当前位置” - (“当前值” - “基准值”)) */
          localDW->gASI_u16HallCntSTD = rtu_gASI_u16HallCnt;

          /* 更新记录当下任务周期计算后的“基准值” */
        }
      }
    } else {
      /* BYPASS for 异常处理，本次10ms任务的HallCnt
         小于上次的HallCnt */
    }
  }

  /* End of Chart: '<S17>/CurrentPosition' */
}

/*
 * System initialize for atomic system:
 *    '<S18>/HallDirction'
 *    '<S51>/HallDirction'
 */
static void ElecDoorHndl__HallDirction_Init(uint8 *rty_u8HallDirction)
{
  *rty_u8HallDirction = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S18>/HallDirction'
 *    '<S51>/HallDirction'
 */
static void ElecDoorHndl_Ctrl_HallDirction(uint8 rtu_u8MotorOutput_FB, boolean rtu_bHallSupplyOutput_FB, uint8 *rty_u8HallDirction)
{
  /* Chart: '<S18>/HallDirction' */
  if (rtu_u8MotorOutput_FB == DHM_NORMAL_UNFOLD) {
    *rty_u8HallDirction = (uint8)HALL_DIR_INCREASE;
  } else if (rtu_u8MotorOutput_FB == DHM_NORMAL_FOLD) {
    *rty_u8HallDirction = (uint8)HALL_DIR_REDUCE;
  } else if (!rtu_bHallSupplyOutput_FB) {
    *rty_u8HallDirction = (uint8)HALL_DIR_STOP;
  } else {
    /* 当电机停止输出后，待霍尔传感器失能 */
  }

  /* End of Chart: '<S18>/HallDirction' */
}

/* Function for Chart: '<S19>/LimitPositionLearn' */
static void ElecDoorH_enter_internal_Memory(uint8 rtu_u8MotorOutput_FB, uint16 rtu_u16Position_CUR, uint8 *rty_u8PosLearnReq, uint16 *rty_u16StopBigEndPosBuffer, uint16 *rty_u16StopLittleEndPosBuffer, rtDW_LimitPositionLearn_ElecDoo *localDW)
{
  sint32 tmp;
  boolean guard1 = false;
  boolean guard2 = false;
  boolean guard3 = false;
  guard1 = false;
  guard2 = false;
  guard3 = false;
  if (rtu_u8MotorOutput_FB == DHM_NORMAL_UNFOLD) {
    if (localDW->bPosRecover) {
      *rty_u16StopBigEndPosBuffer = rtu_u16Position_CUR;
      *rty_u16StopLittleEndPosBuffer = (uint16)0x0000;
      *rty_u8PosLearnReq = (uint8)0xFF;
      tmp = localDW->u8BigEndPosLearnCnt + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8BigEndPosLearnCnt = (uint8)tmp;
      tmp = localDW->u8LittleEndPosLearnCnt + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      localDW->u8LittleEndPosLearnCnt = (uint8)tmp;
      if ((localDW->u8BigEndPosLearnCnt != 0) && (localDW->u8LittleEndPosLearnCnt != 0)) {
        /* {u8PosLearnReq = 0xFF;}
           同时记录两端位置方案 */
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  } else {
    guard2 = true;
  }

  if (guard3) {
    *rty_u16StopBigEndPosBuffer = rtu_u16Position_CUR;
    *rty_u8PosLearnReq = (uint8)0x01;
    tmp = localDW->u8BigEndPosLearnCnt + 1;
    if (tmp > 255) {
      tmp = 255;
    }

    localDW->u8BigEndPosLearnCnt = (uint8)tmp;
    if ((localDW->u8BigEndPosLearnCnt != 0) && (localDW->u8LittleEndPosLearnCnt != 0)) {
      /* {u8PosLearnReq = 0xFF;}
         同时记录两端位置方案 */
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if (rtu_u8MotorOutput_FB == DHM_NORMAL_FOLD) {
      if (localDW->bPosRecover) {
        *rty_u16StopLittleEndPosBuffer = rtu_u16Position_CUR;
        *rty_u16StopBigEndPosBuffer = (uint16)0xFFFF;
        *rty_u8PosLearnReq = (uint8)0xFF;
        tmp = localDW->u8BigEndPosLearnCnt + 1;
        if (tmp > 255) {
          tmp = 255;
        }

        localDW->u8BigEndPosLearnCnt = (uint8)tmp;
        tmp = localDW->u8LittleEndPosLearnCnt + 1;
        if (tmp > 255) {
          tmp = 255;
        }

        localDW->u8LittleEndPosLearnCnt = (uint8)tmp;
        if ((localDW->u8BigEndPosLearnCnt != 0) && (localDW->u8LittleEndPosLearnCnt != 0)) {
          /* {u8PosLearnReq = 0xFF;}
             同时记录两端位置方案 */
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    }
  }

  if (guard1) {
    *rty_u16StopLittleEndPosBuffer = rtu_u16Position_CUR;
    *rty_u8PosLearnReq = (uint8)0x02;
    tmp = localDW->u8LittleEndPosLearnCnt + 1;
    if (tmp > 255) {
      tmp = 255;
    }

    localDW->u8LittleEndPosLearnCnt = (uint8)tmp;
  }
}

/*
 * System initialize for atomic system:
 *    '<S19>/LimitPositionLearn'
 *    '<S52>/LimitPositionLearn'
 */
static void ElecDoo_LimitPositionLearn_Init(uint8 *rty_u8PosLearnReq, uint16 *rty_u16StopBigEndPosBuffer, uint16 *rty_u16StopLittleEndPosBuffer)
{
  *rty_u8PosLearnReq = 0U;
  *rty_u16StopBigEndPosBuffer = 0U;
  *rty_u16StopLittleEndPosBuffer = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S19>/LimitPositionLearn'
 *    '<S52>/LimitPositionLearn'
 */
static void ElecDoorHndl_LimitPositionLearn(boolean rtu_bBigEndPosInitSts, boolean rtu_bLittleEndPosInitSts, uint8 rtu_u8PosZone, uint8 rtu_u8MotorOutput_FB, uint16 rtu_u16Position_CUR, boolean rtu_bMotorStallFlag, uint8 rtu_u8DefaultValueWrtCnt, uint8 *rty_u8PosLearnReq, uint16 *rty_u16StopBigEndPosBuffer, uint16 *rty_u16StopLittleEndPosBuffer, rtDW_LimitPositionLearn_ElecDoo *localDW)
{
  sint32 tmp;
  boolean guard1 = false;
  boolean guard2 = false;
  boolean guard3 = false;
  boolean guard4 = false;

  /* Chart: '<S19>/LimitPositionLearn' */
  if (localDW->temporalCounter_i1 < 3U) {
    localDW->temporalCounter_i1++;
  }

  localDW->bMotorStallFlag_prev = localDW->bMotorStallFlag_start;
  localDW->bMotorStallFlag_start = rtu_bMotorStallFlag;
  localDW->u8DefaultValueWrtCnt_prev = localDW->u8DefaultValueWrtCnt_start;
  localDW->u8DefaultValueWrtCnt_start = rtu_u8DefaultValueWrtCnt;

  /* Chart: '<S19>/LimitPositionLearn' */
  if (localDW->is_active_c28_ElecDoorHndl_Ctrl == 0U) {
    localDW->bMotorStallFlag_prev = rtu_bMotorStallFlag;
    localDW->u8DefaultValueWrtCnt_prev = rtu_u8DefaultValueWrtCnt;
    localDW->is_active_c28_ElecDoorHndl_Ctrl = 1U;
    localDW->is_c28_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctrl_IN_IDEL_p;
    *rty_u8PosLearnReq = (uint8)0x00;
    localDW->bPosRecover = false;
  } else {
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    if (localDW->is_c28_ElecDoorHndl_Ctrl == ElecDoorHndl_Ctrl_IN_IDEL_p) {
      if ((rtu_bBigEndPosInitSts || rtu_bLittleEndPosInitSts) && ((localDW->bMotorStallFlag_prev != localDW->bMotorStallFlag_start) && localDW->bMotorStallFlag_start)) {
        /* 至少有一端位置尚未学习完成 */
        /* 电机堵转 */
        guard2 = true;
      } else {
        /* 位置已学习完整 */
        if (rtu_u8PosZone != POS_ZONE_NORMAL) {
          localDW->bPosRecover = true;

          /* 电机未工作在正常区间内 */
          if ((localDW->bMotorStallFlag_prev != localDW->bMotorStallFlag_start) && localDW->bMotorStallFlag_start) {
            /* 电机堵转 */
            guard2 = true;
          } else {
            guard4 = true;
          }
        } else {
          guard4 = true;
        }
      }
    } else if ((rtu_bBigEndPosInitSts || rtu_bLittleEndPosInitSts) && ((localDW->bMotorStallFlag_prev != localDW->bMotorStallFlag_start) && localDW->bMotorStallFlag_start)) {
      /* 至少有一端位置尚未学习完成 */
      /* 电机堵转 */
      guard1 = true;
    } else {
      /* 位置已学习完整 */
      if (rtu_u8PosZone != POS_ZONE_NORMAL) {
        localDW->bPosRecover = true;

        /* 电机未工作在正常区间内 */
        if ((localDW->bMotorStallFlag_prev != localDW->bMotorStallFlag_start) && localDW->bMotorStallFlag_start) {
          /* 电机堵转 */
          guard1 = true;
        } else {
          guard3 = true;
        }
      } else {
        guard3 = true;
      }
    }

    if (guard4) {
      if (localDW->u8DefaultValueWrtCnt_prev != localDW->u8DefaultValueWrtCnt_start) {
        *rty_u16StopBigEndPosBuffer = (uint16)0xFFFF;
        *rty_u16StopLittleEndPosBuffer = 0U;
        *rty_u8PosLearnReq = (uint8)0xFF;
        tmp = localDW->u8BigEndPosLearnCnt + 1;
        if (tmp > 255) {
          tmp = 255;
        }

        localDW->u8BigEndPosLearnCnt = (uint8)tmp;
        tmp = localDW->u8LittleEndPosLearnCnt + 1;
        if (tmp > 255) {
          tmp = 255;
        }

        localDW->u8LittleEndPosLearnCnt = (uint8)tmp;
        guard2 = true;
      }
    }

    if (guard3) {
      if (localDW->u8DefaultValueWrtCnt_prev != localDW->u8DefaultValueWrtCnt_start) {
        *rty_u16StopBigEndPosBuffer = (uint16)0xFFFF;
        *rty_u16StopLittleEndPosBuffer = 0U;
        *rty_u8PosLearnReq = (uint8)0xFF;
        tmp = localDW->u8BigEndPosLearnCnt + 1;
        if (tmp > 255) {
          tmp = 255;
        }

        localDW->u8BigEndPosLearnCnt = (uint8)tmp;
        tmp = localDW->u8LittleEndPosLearnCnt + 1;
        if (tmp > 255) {
          tmp = 255;
        }

        localDW->u8LittleEndPosLearnCnt = (uint8)tmp;
        guard1 = true;
      } else {
        if (localDW->temporalCounter_i1 >= 1) {
          localDW->is_c28_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctrl_IN_IDEL_p;
          *rty_u8PosLearnReq = (uint8)0x00;
          localDW->bPosRecover = false;
        }
      }
    }

    if (guard2) {
      localDW->is_c28_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctrl_IN_Memory;
      localDW->temporalCounter_i1 = 0U;
      ElecDoorH_enter_internal_Memory(rtu_u8MotorOutput_FB, rtu_u16Position_CUR, rty_u8PosLearnReq, rty_u16StopBigEndPosBuffer, rty_u16StopLittleEndPosBuffer, localDW);
    }

    if (guard1) {
      localDW->bPosRecover = false;
      localDW->is_c28_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctrl_IN_Memory;
      localDW->temporalCounter_i1 = 0U;
      ElecDoorH_enter_internal_Memory(rtu_u8MotorOutput_FB, rtu_u16Position_CUR, rty_u8PosLearnReq, rty_u16StopBigEndPosBuffer, rty_u16StopLittleEndPosBuffer, localDW);
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S20>/LimitPositionProcess'
 *    '<S53>/LimitPositionProcess'
 */
static void ElecD_LimitPositionProcess_Init(uint8 *rty_u8HardStopBigEndPosEEPWrtCn, uint8 *rty_u8HardStopLittleEndPosEEPWr)
{
  *rty_u8HardStopBigEndPosEEPWrtCn = 0U;
  *rty_u8HardStopLittleEndPosEEPWr = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S20>/LimitPositionProcess'
 *    '<S53>/LimitPositionProcess'
 */
static void ElecDoorHn_LimitPositionProcess(uint8 rtu_u8PosLearnReq, uint8 *rty_u8HardStopBigEndPosEEPWrtCn, uint8 *rty_u8HardStopLittleEndPosEEPWr, rtDW_LimitPositionProcess_ElecD *localDW)
{
  sint32 tmp;
  localDW->u8PosLearnReq_prev = localDW->u8PosLearnReq_start;
  localDW->u8PosLearnReq_start = rtu_u8PosLearnReq;
  if (!localDW->doneDoubleBufferReInit) {
    localDW->doneDoubleBufferReInit = true;
    localDW->u8PosLearnReq_prev = rtu_u8PosLearnReq;
  }

  /* Chart: '<S20>/LimitPositionProcess' */
  if ((localDW->u8PosLearnReq_prev != localDW->u8PosLearnReq_start) && (localDW->u8PosLearnReq_start == 0x01)) {
    /* 学习BigEnd位置 */
    tmp = *rty_u8HardStopBigEndPosEEPWrtCn + 1;
    if (tmp > 255) {
      tmp = 255;
    }

    *rty_u8HardStopBigEndPosEEPWrtCn = (uint8)tmp;
  }

  if ((localDW->u8PosLearnReq_prev != localDW->u8PosLearnReq_start) && (localDW->u8PosLearnReq_start == 0x02)) {
    /* 学习LittleEnd位置 */
    tmp = *rty_u8HardStopLittleEndPosEEPWr + 1;
    if (tmp > 255) {
      tmp = 255;
    }

    *rty_u8HardStopLittleEndPosEEPWr = (uint8)tmp;
  }

  if ((localDW->u8PosLearnReq_prev != localDW->u8PosLearnReq_start) && (localDW->u8PosLearnReq_start == 0xFF)) {
    /* 同步学 */
    tmp = *rty_u8HardStopBigEndPosEEPWrtCn + 1;
    if (tmp > 255) {
      tmp = 255;
    }

    *rty_u8HardStopBigEndPosEEPWrtCn = (uint8)tmp;
    tmp = *rty_u8HardStopLittleEndPosEEPWr + 1;
    if (tmp > 255) {
      tmp = 255;
    }

    *rty_u8HardStopLittleEndPosEEPWr = (uint8)tmp;
  }

  if (*rty_u8HardStopBigEndPosEEPWrtCn >= 250) {
    *rty_u8HardStopBigEndPosEEPWrtCn = 0U;
  }

  if (*rty_u8HardStopLittleEndPosEEPWr >= 250) {
    *rty_u8HardStopLittleEndPosEEPWr = 0U;
  }

  /* End of Chart: '<S20>/LimitPositionProcess' */
}

/*
 * System initialize for atomic system:
 *    '<S21>/FLDoorLockReq'
 *    '<S54>/FLDoorLockReq'
 */
static void ElecDoorHndl_FLDoorLockReq_Init(uint8 *rty_temp_u8DoorHandlePosition, uint8 *rty_u8DoorHandleZoneState)
{
  *rty_temp_u8DoorHandlePosition = 0U;
  *rty_u8DoorHandleZoneState = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S21>/FLDoorLockReq'
 *    '<S54>/FLDoorLockReq'
 */
static void ElecDoorHndl_Ctrl_FLDoorLockReq(uint8 rtu_u8HallPosPct, float64 rtu_bPowerOnReset, float64 rtu_u8MotorErrorSts, uint8 *rty_temp_u8DoorHandlePosition, uint8 *rty_u8DoorHandleZoneState, rtDW_FLDoorLockReq_ElecDoorHndl *localDW)
{
  /* Chart: '<S21>/FLDoorLockReq' */
  if ((!localDW->bFirstRun) && (rtu_bPowerOnReset == 1.0)) {
    *rty_temp_u8DoorHandlePosition = (uint8)0xFF;
    *rty_u8DoorHandleZoneState = (uint8)INIT_STATE;
    localDW->bFirstRun = true;
  } else if (rtu_u8MotorErrorSts == 1.0) {
    *rty_temp_u8DoorHandlePosition = (uint8)0xFE;
    *rty_u8DoorHandleZoneState = (uint8)ERROR_STATE;
  } else {
    *rty_temp_u8DoorHandlePosition = rtu_u8HallPosPct;
    if (255 == *rty_temp_u8DoorHandlePosition) {
      *rty_temp_u8DoorHandlePosition = (uint8)0xFF;
      *rty_u8DoorHandleZoneState = (uint8)INIT_STATE;
    } else if (*rty_temp_u8DoorHandlePosition < 10) {
      *rty_u8DoorHandleZoneState = (uint8)ZONE_ONE;
    } else if ((10 <= *rty_temp_u8DoorHandlePosition) && (*rty_temp_u8DoorHandlePosition <= 90)) {
      *rty_u8DoorHandleZoneState = (uint8)ZONE_TWO;
    } else if ((90 < *rty_temp_u8DoorHandlePosition) && (*rty_temp_u8DoorHandlePosition < 100)) {
      *rty_u8DoorHandleZoneState = (uint8)ZONE_THREE;
    } else {
      if (100 == *rty_temp_u8DoorHandlePosition) {
        *rty_u8DoorHandleZoneState = (uint8)ZONE_FOUR;
      }
    }
  }

  /* End of Chart: '<S21>/FLDoorLockReq' */
}

/*
 * System initialize for atomic system:
 *    '<S22>/PositionDistance'
 *    '<S55>/PositionDistance'
 */
static void ElecDoorH_PositionDistance_Init(uint16 *rty_u16HardStopBigEndPos, uint16 *rty_u16HardStopLittleEndPos, uint16 *rty_u16SoftStopBigEndPos, uint16 *rty_u16SoftStopLittleEndPos, uint16 *rty_u16TotalDistance)
{
  *rty_u16HardStopBigEndPos = 0U;
  *rty_u16HardStopLittleEndPos = 0U;
  *rty_u16SoftStopBigEndPos = 0U;
  *rty_u16SoftStopLittleEndPos = 0U;
  *rty_u16TotalDistance = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S22>/PositionDistance'
 *    '<S55>/PositionDistance'
 */
static void ElecDoorHndl_C_PositionDistance(uint16 rtu_u16HardStopBigEndPos_NVM, uint16 rtu_u16HardStopLittleEndPos_NVM, uint8 rtu_u8StopOffsetPrm, boolean rtu_bPosInitSts, uint16 *rty_u16HardStopBigEndPos, uint16 *rty_u16HardStopLittleEndPos, uint16 *rty_u16SoftStopBigEndPos, uint16 *rty_u16SoftStopLittleEndPos, uint16 *rty_u16TotalDistance)
{
  sint32 tmp;

  /* Chart: '<S22>/PositionDistance' */
  if (rtu_bPosInitSts) {
    *rty_u16HardStopBigEndPos = MAX_uint16_T;
    *rty_u16HardStopLittleEndPos = 0U;
    *rty_u16SoftStopBigEndPos = (uint16)(65535 - rtu_u8StopOffsetPrm);
    *rty_u16SoftStopLittleEndPos = rtu_u8StopOffsetPrm;
    *rty_u16TotalDistance = MAX_uint16_T;
  } else {
    *rty_u16HardStopBigEndPos = rtu_u16HardStopBigEndPos_NVM;
    *rty_u16HardStopLittleEndPos = rtu_u16HardStopLittleEndPos_NVM;
    tmp = rtu_u16HardStopBigEndPos_NVM - rtu_u8StopOffsetPrm;
    if (tmp < 0) {
      tmp = 0;
    }

    *rty_u16SoftStopBigEndPos = (uint16)tmp;
    tmp = rtu_u16HardStopLittleEndPos_NVM + rtu_u8StopOffsetPrm;
    if (tmp > 65535) {
      tmp = 65535;
    }

    *rty_u16SoftStopLittleEndPos = (uint16)tmp;
    tmp = *rty_u16HardStopBigEndPos - *rty_u16HardStopLittleEndPos;
    if (tmp < 0) {
      tmp = 0;
    }

    *rty_u16TotalDistance = (uint16)tmp;
  }

  /* End of Chart: '<S22>/PositionDistance' */
}

/*
 * System initialize for atomic system:
 *    '<S23>/PositionEEP'
 *    '<S56>/PositionEEP'
 */
static void ElecDoorHndl_C_PositionEEP_Init(uint8 *rty_u8PosEEPWrtCnt)
{
  *rty_u8PosEEPWrtCnt = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S23>/PositionEEP'
 *    '<S56>/PositionEEP'
 */
static void ElecDoorHndl_Ctrl_PositionEEP(uint8 rtu_u8MotorRunningSts_FB, boolean rtu_bHallSupplyOutput_FB, uint8 *rty_u8PosEEPWrtCnt, rtDW_PositionEEP_ElecDoorHndl_C *localDW)
{
  sint32 tmp;
  localDW->bHallSupplyOutput_FB_prev = localDW->bHallSupplyOutput_FB_start;
  localDW->bHallSupplyOutput_FB_start = rtu_bHallSupplyOutput_FB;
  if (!localDW->doneDoubleBufferReInit) {
    localDW->doneDoubleBufferReInit = true;
    localDW->bHallSupplyOutput_FB_prev = rtu_bHallSupplyOutput_FB;
  }

  /* Chart: '<S23>/PositionEEP' */
  if ((localDW->bHallSupplyOutput_FB_prev != localDW->bHallSupplyOutput_FB_start) && (!localDW->bHallSupplyOutput_FB_start) && (rtu_u8MotorRunningSts_FB == MOTOR_STS_STOP)) {
    /* 电机结束运动且HALL供电结束
       [hasChangedTo(u8MotorRunningSts_FB,MOTOR_STS_STOP)] */
    if (*rty_u8PosEEPWrtCnt < 250) {
      tmp = *rty_u8PosEEPWrtCnt + 1;
      if (tmp > 255) {
        tmp = 255;
      }

      *rty_u8PosEEPWrtCnt = (uint8)tmp;
    } else {
      *rty_u8PosEEPWrtCnt = 0U;
    }
  }

  /* End of Chart: '<S23>/PositionEEP' */
}

/*
 * System initialize for atomic system:
 *    '<S24>/PositionLearnSts'
 *    '<S57>/PositionLearnSts'
 */
static void ElecDoorH_PositionLearnSts_Init(boolean *rty_bPosInitSts, boolean *rty_bBigEndPosInitSts, boolean *rty_bLittleEndPosInitSts, uint8 *rty_u8DefaultValueWrtCnt)
{
  *rty_bPosInitSts = false;
  *rty_bBigEndPosInitSts = false;
  *rty_bLittleEndPosInitSts = false;
  *rty_u8DefaultValueWrtCnt = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S24>/PositionLearnSts'
 *    '<S57>/PositionLearnSts'
 */
static void ElecDoorHndl_C_PositionLearnSts(boolean rtu_bPowerOnReset, boolean rtu_bHallCfg, uint16 rtu_u16HardStopBigEndPos_NVM, uint16 rtu_u16HardStopLittleEndPos_NVM, uint16 rtu_u16DefaultPositionMaxPrm, uint16 rtu_u16DefaultPositionMinPrm, uint16 rtu_u16TotalDistanceMinPrm, boolean *rty_bPosInitSts, boolean *rty_bBigEndPosInitSts, boolean *rty_bLittleEndPosInitSts, uint8 *rty_u8DefaultValueWrtCnt, rtDW_PositionLearnSts_ElecDoorH *localDW)
{
  sint32 tmp;

  /* Chart: '<S24>/PositionLearnSts' */
  if (!rtu_bHallCfg) {
    *rty_bBigEndPosInitSts = true;
    *rty_bLittleEndPosInitSts = true;
    *rty_bPosInitSts = ((*rty_bBigEndPosInitSts) && (*rty_bLittleEndPosInitSts));
  } else if ((!localDW->bFirstRun) && rtu_bPowerOnReset) {
    localDW->bFirstRun = true;
    *rty_bBigEndPosInitSts = true;
    *rty_bLittleEndPosInitSts = true;
    tmp = *rty_u8DefaultValueWrtCnt + 1;
    if (tmp > 255) {
      tmp = 255;
    }

    *rty_u8DefaultValueWrtCnt = (uint8)tmp;
    if (*rty_u8DefaultValueWrtCnt == 250) {
      *rty_u8DefaultValueWrtCnt = 0U;
    }

    *rty_bPosInitSts = ((*rty_bBigEndPosInitSts) && (*rty_bLittleEndPosInitSts));
  } else {
    if ((rtu_u16HardStopBigEndPos_NVM > rtu_u16HardStopLittleEndPos_NVM) && (rtu_u16HardStopBigEndPos_NVM - rtu_u16HardStopLittleEndPos_NVM > rtu_u16TotalDistanceMinPrm)) {
      /* 最小u16TotalDistanceMinPrm个HALL数 才是有效的位置学习 */
      *rty_bBigEndPosInitSts = ((rtu_u16HardStopBigEndPos_NVM >= rtu_u16DefaultPositionMaxPrm) || (rtu_u16HardStopBigEndPos_NVM <= rtu_u16DefaultPositionMinPrm));
      *rty_bLittleEndPosInitSts = ((rtu_u16HardStopLittleEndPos_NVM >= rtu_u16DefaultPositionMaxPrm) || (rtu_u16HardStopLittleEndPos_NVM <= rtu_u16DefaultPositionMinPrm));
      *rty_bPosInitSts = ((*rty_bBigEndPosInitSts) && (*rty_bLittleEndPosInitSts));
    }
  }

  /* End of Chart: '<S24>/PositionLearnSts' */
}

/*
 * System initialize for atomic system:
 *    '<S26>/PositionZone'
 *    '<S59>/PositionZone'
 */
static void ElecDoorHndl__PositionZone_Init(uint8 *rty_u8PosZone)
{
  *rty_u8PosZone = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S26>/PositionZone'
 *    '<S59>/PositionZone'
 */
static void ElecDoorHndl_Ctrl_PositionZone(uint16 rtu_u16Position_CUR, uint16 rtu_u16SoftStopBigEndPos, uint16 rtu_u16SoftStopLittleEndPos, uint16 rtu_u16HardStopBigEndPos, uint16 rtu_u16HardStopLittleEndPos, boolean rtu_bPosInitSts, uint8 *rty_u8PosZone)
{
  /* Chart: '<S26>/PositionZone' */
  if (rtu_bPosInitSts || ((rtu_u16Position_CUR > rtu_u16SoftStopLittleEndPos) && (rtu_u16Position_CUR < rtu_u16SoftStopBigEndPos))) {
    /* 正常区间内 */
    *rty_u8PosZone = (uint8)POS_ZONE_NORMAL;
  } else if ((rtu_u16Position_CUR <= rtu_u16SoftStopLittleEndPos) && (rtu_u16Position_CUR > rtu_u16HardStopLittleEndPos)) {
    /* 退至软停点 */
    *rty_u8PosZone = (uint8)POS_ZONE_BACKWARD_SOFT;
  } else if ((rtu_u16Position_CUR >= rtu_u16SoftStopBigEndPos) && (rtu_u16Position_CUR < rtu_u16HardStopBigEndPos)) {
    /* 进至软停点 */
    *rty_u8PosZone = (uint8)POS_ZONE_FORWARD_SOFT;
  } else if (rtu_u16Position_CUR >= rtu_u16SoftStopBigEndPos) {
    /* 进至硬停点 */
    *rty_u8PosZone = (uint8)POS_ZONE_FORWARD_HARD;
  } else {
    *rty_u8PosZone = (uint8)POS_ZONE_ERROR;

    /* Error */
  }

  /* End of Chart: '<S26>/PositionZone' */
}

/* Model step function */
void ElecDoorHndl_Ctrl_Runnable_10ms(void)
{
  /* local block i/o variables */
  uint16 rtb_gNVM_u16RLDoorHandleBigPosi;
  uint16 rtb_gNVM_u16RLDoorHandleSmallPo;
  uint16 rtb_gEDH_u16RLHallCnt;
  uint16 rtb_gNVM_u16RRDoorHandleBigPosi;
  uint16 rtb_gNVM_u16RRDoorHandleSmallPo;
  uint16 rtb_gEDH_u16RRHallCnt;
  uint16 rtb_u16HardStopBigEndPos;
  uint16 rtb_u16HardStopLittleEndPos;
  uint16 rtb_u16SoftStopBigEndPos;
  uint16 rtb_u16SoftStopLittleEndPos;
  uint16 rtb_u16TotalDistance;
  uint16 rtb_u16HardStopBigEndPos_j;
  uint16 rtb_u16HardStopLittleEndPos_a;
  uint16 rtb_u16SoftStopBigEndPos_l;
  uint16 rtb_u16SoftStopLittleEndPos_k;
  uint16 rtb_u16TotalDistance_m;
  uint8 rtb_u8PosZone;
  uint8 rtb_u8PosZone_a;
  boolean rtb_gASI_bPowerOnReset;
  boolean tmpRead;
  boolean tmpRead_0;
  uint16 tmpRead_1;
  uint16 tmpRead_2;
  boolean tmpRead_3;
  boolean tmpRead_4;
  uint8 tmpRead_5;
  uint8 tmpRead_6;
  uint32 rtb_Switch1;
  sint32 rtb_u32AllowSleep_Local;
  uint8 rtb_gCAN_u8DoorHandleCommandAct;
  uint8 u8MotorAction_e;
  uint8 u8MotorAction;

  /* DataStoreWrite: '<S3>/Data Store Write1' incorporates:
   *  Inport: '<Root>/gEDH_u16RLHallWidth'
   */
  Rte_Read_gEDH_u16RLHallWidth_Val(&ElecDoorHndl_Ctrl_DWork.gASI_u16HallWidth);

  /* DataStoreWrite: '<S3>/Data Store Write2' */
  ElecDoorHndl_Ctrl_DWork.gASI_u8MotorErrorSts = 0U;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgCAN_u8LCK_DoorHandleCommandActionTypeOutport1' incorporates:
   *  Inport: '<Root>/gCAN_u8LCK_DoorHandleCommandActionType'
   */
  Rte_Read_gCAN_u8LCK_DoorHandleCommandActionType_Val(&rtb_gCAN_u8DoorHandleCommandAct);

  /* Inport: '<Root>/gCAN_bLCK_RearLeftDoorHandle_Val' */
  Rte_Read_gCAN_bLCK_RearLeftDoorHandle_Val(&tmpRead);

  /* Chart: '<S11>/FLDoorLockReq' */
  if (tmpRead) {
    /* Active */
    switch (rtb_gCAN_u8DoorHandleCommandAct) {
     case 1:
      ElecDoorHndl_Ctrl_B.Switch = (uint8)REQ_FOLD;
      break;

     case 3:
      ElecDoorHndl_Ctrl_B.Switch = (uint8)REQ_UNFOLD;
      break;

     case 4:
      ElecDoorHndl_Ctrl_B.Switch = (uint8)REQ_EMERGENCY_UNFOLD;
      break;

     default:
      ElecDoorHndl_Ctrl_B.Switch = (uint8)REQ_NULL;
      break;
    }
  } else {
    ElecDoorHndl_Ctrl_B.Switch = (uint8)REQ_NULL;
  }

  /* End of Chart: '<S11>/FLDoorLockReq' */

  /* Inport: '<Root>/gEDH_u8RLDoorHndlMotorUds_Val' */
  Rte_Read_gEDH_u8RLDoorHndlMotorUds_Val(&u8MotorAction_e);

  /* Inport: '<Root>/gEDH_bRLDoorHndlMotorTrigUds_Val' */
  Rte_Read_gEDH_bRLDoorHndlMotorTrigUds_Val(&tmpRead_3);

  /* Inport: '<Root>/gNVM_u16RLDoorHandlePosition' */
  Rte_Read_gNVM_u16RLDoorHandlePosition_Val(&tmpRead_1);

  /* Switch: '<S37>/Switch' */
  if (tmpRead_3) {
    ElecDoorHndl_Ctrl_B.Switch = u8MotorAction_e;
  }

  /* End of Switch: '<S37>/Switch' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgASI_bPowerOnResetOutport1' incorporates:
   *  Inport: '<Root>/gASI_bPowerOnReset'
   */
  Rte_Read_gASI_bPowerOnReset_Val(&rtb_gASI_bPowerOnReset);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgNVM_u16RLDoorHandleBigPositionOutport1' incorporates:
   *  Inport: '<Root>/gNVM_u16RLDoorHandleBigPosition'
   */
  Rte_Read_gNVM_u16RLDoorHandleBigPosition_Val(&rtb_gNVM_u16RLDoorHandleBigPosi);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgNVM_u16RLDoorHandleSmallPositionOutport1' incorporates:
   *  Inport: '<Root>/gNVM_u16RLDoorHandleSmallPosition'
   */
  Rte_Read_gNVM_u16RLDoorHandleSmallPosition_Val(&rtb_gNVM_u16RLDoorHandleSmallPo);

  /* Chart: '<S24>/PositionLearnSts' incorporates:
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant21'
   *  Constant: '<S5>/Constant3'
   *  Constant: '<S5>/Constant4'
   */
  ElecDoorHndl_C_PositionLearnSts(rtb_gASI_bPowerOnReset, true, rtb_gNVM_u16RLDoorHandleBigPosi, rtb_gNVM_u16RLDoorHandleSmallPo, MAX_uint16_T, 0, 50, &ElecDoorHndl_Ctrl_B.bPosInitSts_b, &ElecDoorHndl_Ctrl_B.bBigEndPosInitSts_a, &ElecDoorHndl_Ctrl_B.bLittleEndPosInitSts_n, &ElecDoorHndl_Ctrl_B.u8DefaultValueWrtCnt_g, &ElecDoorHndl_Ctrl_DWork.sf_PositionLearnSts);

  /* Delay: '<S5>/Delay1' */
  ElecDoorHndl_Ctrl_B.Delay1 = ElecDoorHndl_Ctrl_B.u8MotorOutput_a;

  /* Chart: '<S18>/HallDirction' incorporates:
   *  Delay: '<S5>/Delay3'
   */
  ElecDoorHndl_Ctrl_HallDirction(ElecDoorHndl_Ctrl_B.Delay1, ElecDoorHndl_Ctrl_B.bHallSupplyOutput_n, &ElecDoorHndl_Ctrl_B.u8HallDirction_c);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgEDH_u16RLHallCntOutport1' incorporates:
   *  Inport: '<Root>/gEDH_u16RLHallCnt'
   */
  Rte_Read_gEDH_u16RLHallCnt_Val(&rtb_gEDH_u16RLHallCnt);

  /* Chart: '<S17>/CurrentPosition' incorporates:
   *  Constant: '<S5>/Constant5'
   */
  ElecDoorHndl_Ct_CurrentPosition(tmpRead_1, rtb_gEDH_u16RLHallCnt, ElecDoorHndl_Ctrl_B.bBigEndPosInitSts_a, ElecDoorHndl_Ctrl_B.bLittleEndPosInitSts_n, 32767, ElecDoorHndl_Ctrl_B.u8HallDirction_c, &ElecDoorHndl_Ctrl_B.u16Position_CUR_j, &ElecDoorHndl_Ctrl_DWork.sf_CurrentPosition);

  /* Chart: '<S22>/PositionDistance' incorporates:
   *  Constant: '<S5>/Constant6'
   */
  ElecDoorHndl_C_PositionDistance(rtb_gNVM_u16RLDoorHandleBigPosi, rtb_gNVM_u16RLDoorHandleSmallPo, 5, ElecDoorHndl_Ctrl_B.bPosInitSts_b, &rtb_u16HardStopBigEndPos_j, &rtb_u16HardStopLittleEndPos_a, &rtb_u16SoftStopBigEndPos_l, &rtb_u16SoftStopLittleEndPos_k, &rtb_u16TotalDistance_m);

  /* Switch: '<S25>/Switch1' incorporates:
   *  DataTypeConversion: '<S25>/Data Type Conversion5'
   *  DataTypeConversion: '<S25>/Data Type Conversion6'
   *  DataTypeConversion: '<S25>/Data Type Conversion7'
   *  Product: '<S25>/Divide1'
   *  Product: '<S25>/Product3'
   *  Sum: '<S25>/Add3'
   */
  if (ElecDoorHndl_Ctrl_B.bPosInitSts_b) {
    rtb_Switch1 = ElecDoorHndl_Ctrl_ConstB.Switch2;
  } else {
    rtb_Switch1 = rtb_u16TotalDistance_m == 0U ? MAX_uint32_T : ((uint32)ElecDoorHndl_Ctrl_B.u16Position_CUR_j - rtb_u16HardStopLittleEndPos_a) * 100U / rtb_u16TotalDistance_m;
  }

  /* End of Switch: '<S25>/Switch1' */

  /* Chart: '<S21>/FLDoorLockReq' incorporates:
   *  DataTypeConversion: '<S25>/Data Type Conversion8'
   */
  ElecDoorHndl_Ctrl_FLDoorLockReq((uint8)rtb_Switch1, 0.0, 0.0, &ElecDoorHndl_Ctrl_B.temp_u8DoorHandlePosition_a, &ElecDoorHndl_Ctrl_B.u8DoorHandleZoneState_n, &ElecDoorHndl_Ctrl_DWork.sf_FLDoorLockReq);

  /* Chart: '<S23>/PositionEEP' incorporates:
   *  Delay: '<S5>/Delay3'
   *  Delay: '<S5>/Delay30'
   */
  ElecDoorHndl_Ctrl_PositionEEP(ElecDoorHndl_Ctrl_B.u8MotorRunningSts_i, ElecDoorHndl_Ctrl_B.bHallSupplyOutput_n, &ElecDoorHndl_Ctrl_B.u8PosEEPWrtCnt_g, &ElecDoorHndl_Ctrl_DWork.sf_PositionEEP);

  /* Delay: '<S9>/Delay4' */
  ElecDoorHndl_Ctrl_B.Delay4 = ElecDoorHndl_Ctrl_DWork.Delay4_DSTATE;

  /* Chart: '<S10>/MotorStuck' incorporates:
   *  Constant: '<S5>/Constant11'
   *  Constant: '<S5>/Constant9'
   *  Delay: '<S5>/Delay30'
   */
  ElecDoorHndl_Ctrl_DWork.gASI_u16HallCnt_prev_l = ElecDoorHndl_Ctrl_DWork.gASI_u16HallCnt_start_m;
  ElecDoorHndl_Ctrl_DWork.gASI_u16HallCnt_start_m = rtb_gEDH_u16RLHallCnt;
  if (ElecDoorHndl_Ctrl_DWork.is_active_c19_ElecDoorHndl_Ctrl == 0U) {
    ElecDoorHndl_Ctrl_DWork.gASI_u16HallCnt_prev_l = rtb_gEDH_u16RLHallCnt;
    ElecDoorHndl_Ctrl_DWork.is_active_c19_ElecDoorHndl_Ctrl = 1U;
    ElecDoorHndl_Ctrl_DWork.is_c19_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctrl_IN_IDEL_l;
    ElecDoorHndl_Ctrl_B.u16MotorStallCnt_i = (uint16)0x00;
    ElecDoorHndl_Ctrl_B.bMotorStallFlag_f = false;
  } else if (ElecDoorHndl_Ctrl_DWork.is_c19_ElecDoorHndl_Ctrl == ElecDoorHndl_Ctrl_IN_IDEL_l) {
    if (ElecDoorHndl_Ctrl_B.u8MotorRunningSts_i == MOTOR_STS_RUNNING) {
      ElecDoorHndl_Ctrl_DWork.is_c19_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctrl_IN_STUCK;
      ElecDoorHndl_Ctrl_B.u16MotorStallCnt_i = (uint16)0x00;
      ElecDoorHndl_Ctrl_B.bMotorStallFlag_f = false;
      if (ElecDoorHndl_Ctrl_DWork.gASI_u16HallCnt_prev_l != ElecDoorHndl_Ctrl_DWork.gASI_u16HallCnt_start_m) {
        ElecDoorHndl_Ctrl_B.u16MotorStallCnt_i = (uint16)0x00;
      } else {
        rtb_u32AllowSleep_Local = ElecDoorHndl_Ctrl_B.u16MotorStallCnt_i + 1;
        if (rtb_u32AllowSleep_Local > 65535) {
          rtb_u32AllowSleep_Local = 65535;
        }

        ElecDoorHndl_Ctrl_B.u16MotorStallCnt_i = (uint16)rtb_u32AllowSleep_Local;
      }

      if (ElecDoorHndl_Ctrl_B.u16MotorStallCnt_i >= 300) {
        ElecDoorHndl_Ctrl_B.u16MotorStallCnt_i = MAX_uint16_T;
        ElecDoorHndl_Ctrl_B.bMotorStallFlag_f = true;
      } else {
        ElecDoorHndl_Ctrl_B.bMotorStallFlag_f = false;
      }
    }
  } else {
    ElecDoorHndl_Ctrl_DWork.is_c19_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctrl_IN_IDEL_l;
    ElecDoorHndl_Ctrl_B.u16MotorStallCnt_i = (uint16)0x00;
    ElecDoorHndl_Ctrl_B.bMotorStallFlag_f = false;
  }

  /* End of Chart: '<S10>/MotorStuck' */

  /* Chart: '<S19>/LimitPositionLearn' */
  ElecDoorHndl_LimitPositionLearn(ElecDoorHndl_Ctrl_B.bBigEndPosInitSts_a, ElecDoorHndl_Ctrl_B.bLittleEndPosInitSts_n, ElecDoorHndl_Ctrl_B.Delay4, ElecDoorHndl_Ctrl_B.Delay1, ElecDoorHndl_Ctrl_B.u16Position_CUR_j, ElecDoorHndl_Ctrl_B.bMotorStallFlag_f, ElecDoorHndl_Ctrl_B.u8DefaultValueWrtCnt_g, &ElecDoorHndl_Ctrl_B.u8PosLearnReq_f, &ElecDoorHndl_Ctrl_B.u16StopBigEndPosBuffer_c, &ElecDoorHndl_Ctrl_B.u16StopLittleEndPosBuffer_p, &ElecDoorHndl_Ctrl_DWork.sf_LimitPositionLearn);

  /* Chart: '<S20>/LimitPositionProcess' */
  ElecDoorHn_LimitPositionProcess(ElecDoorHndl_Ctrl_B.u8PosLearnReq_f, &ElecDoorHndl_Ctrl_B.u8HardStopBigEndPosEEPWrtCnt_k, &ElecDoorHndl_Ctrl_B.u8HardStopLittleEndPosEEPWrtC_m, &ElecDoorHndl_Ctrl_DWork.sf_LimitPositionProcess);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8tDoorHandleForceCfgOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8tDoorHandleForceCfg'
   */
  Rte_Read_gPRM_u8tDoorHandleForceCfg_Val(&ElecDoorHndl_Ctrl_B.gPRM_u8tDoorHandleForceCfg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8tDoorHandleEmergencyCfgOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8tDoorHandleEmergencyCfg'
   */
  Rte_Read_gPRM_u8tDoorHandleEmergencyCfg_Val(&ElecDoorHndl_Ctrl_B.gPRM_u8tDoorHandleEmergencyCfg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8tDoorHandleSoftStopCfgOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8tDoorHandleSoftStopCfg'
   */
  Rte_Read_gPRM_u8tDoorHandleSoftStopCfg_Val(&ElecDoorHndl_Ctrl_B.gPRM_u8tDoorHandleSoftStopCfg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgPRM_u8tDoorHandleTimeOutCfgOutport1' incorporates:
   *  Inport: '<Root>/gPRM_u8tDoorHandleTimeOutCfg'
   */
  Rte_Read_gPRM_u8tDoorHandleTimeOutCfg_Val(&ElecDoorHndl_Ctrl_B.gPRM_u8tDoorHandleTimeOutCfg);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgVRM_u16BatteryVolt_mvOutport1' incorporates:
   *  Inport: '<Root>/gVRM_u16BatteryVolt_mv'
   */
  Rte_Read_gVRM_u16BatteryVolt_mv_Val(&ElecDoorHndl_Ctrl_B.gVRM_u16BatteryVolt_mv);

  /* Chart: '<S14>/MotorOutput' */
  ElecDoorHndl_Ctrl_MotorOutput(ElecDoorHndl_Ctrl_B.Switch, ElecDoorHndl_Ctrl_B.u8DoorHandleZoneState_n, ElecDoorHndl_Ctrl_B.gPRM_u8tDoorHandleForceCfg, ElecDoorHndl_Ctrl_B.gPRM_u8tDoorHandleEmergencyCfg, ElecDoorHndl_Ctrl_B.gPRM_u8tDoorHandleSoftStopCfg, ElecDoorHndl_Ctrl_B.gPRM_u8tDoorHandleTimeOutCfg, ElecDoorHndl_Ctrl_B.gVRM_u16BatteryVolt_mv, &ElecDoorHndl_Ctrl_B.u8MotorRunningSts_i, &ElecDoorHndl_Ctrl_B.u8MotorOutput_a, &ElecDoorHndl_Ctrl_B.u8MotorTargetSpeed_o, &u8MotorAction_e, &ElecDoorHndl_Ctrl_DWork.sf_MotorOutput);

  /* DataStoreWrite: '<S4>/Data Store Write1' incorporates:
   *  Inport: '<Root>/gEDH_u16RRHallWidth'
   */
  /* bit 0 */
  Rte_Read_gEDH_u16RRHallWidth_Val(&ElecDoorHndl_Ctrl_DWork.gEDH_u16RRHallWidth);

  /* Chart: '<S13>/HallSupplyOutput' incorporates:
   *  Constant: '<S5>/Constant16'
   */
  ElecDoorHndl_C_HallSupplyOutput(ElecDoorHndl_Ctrl_B.u8MotorRunningSts_i, 4, &ElecDoorHndl_Ctrl_B.bHallSupplyOutput_n, &ElecDoorHndl_Ctrl_DWork.sf_HallSupplyOutput);

  /* Chart: '<S26>/PositionZone' */
  ElecDoorHndl_Ctrl_PositionZone(ElecDoorHndl_Ctrl_B.u16Position_CUR_j, rtb_u16SoftStopBigEndPos_l, rtb_u16SoftStopLittleEndPos_k, rtb_u16HardStopBigEndPos_j, rtb_u16HardStopLittleEndPos_a, ElecDoorHndl_Ctrl_B.bPosInitSts_b, &rtb_u8PosZone_a);

  /* Switch: '<S26>/Switch5' incorporates:
   *  Constant: '<S26>/Constant2'
   *  Delay: '<S9>/Delay4'
   */
  if (ElecDoorHndl_Ctrl_B.bPosInitSts_b) {
    ElecDoorHndl_Ctrl_DWork.Delay4_DSTATE = 0U;
  } else {
    ElecDoorHndl_Ctrl_DWork.Delay4_DSTATE = rtb_u8PosZone_a;
  }

  /* End of Switch: '<S26>/Switch5' */

  /* DataStoreWrite: '<S4>/Data Store Write2' */
  ElecDoorHndl_Ctrl_DWork.gDiag_u8RRDoorHandleHallErrorFl = 0U;

  /* Delay: '<S39>/Delay1' */
  ElecDoorHndl_Ctrl_B.Delay1_g = ElecDoorHndl_Ctrl_B.u8MotorOutput;

  /* Inport: '<Root>/gCAN_bLCK_RearRightDoorHandle_Val' */
  Rte_Read_gCAN_bLCK_RearRightDoorHandle_Val(&tmpRead_0);

  /* Chart: '<S44>/FLDoorLockReq' */
  if (tmpRead_0) {
    /* Active */
    switch (rtb_gCAN_u8DoorHandleCommandAct) {
     case 1:
      ElecDoorHndl_Ctrl_B.Switch_m = (uint8)REQ_FOLD;
      break;

     case 3:
      ElecDoorHndl_Ctrl_B.Switch_m = (uint8)REQ_UNFOLD;
      break;

     case 4:
      ElecDoorHndl_Ctrl_B.Switch_m = (uint8)REQ_EMERGENCY_UNFOLD;
      break;

     default:
      ElecDoorHndl_Ctrl_B.Switch_m = (uint8)REQ_NULL;
      break;
    }
  } else {
    ElecDoorHndl_Ctrl_B.Switch_m = (uint8)REQ_NULL;
  }

  /* End of Chart: '<S44>/FLDoorLockReq' */

  /* Inport: '<Root>/gEDH_u8RRDoorHndlMotorUds_Val' */
  Rte_Read_gEDH_u8RRDoorHndlMotorUds_Val(&u8MotorAction);

  /* Inport: '<Root>/gEDH_bRRDoorHndlMotorTrigUds_Val' */
  Rte_Read_gEDH_bRRDoorHndlMotorTrigUds_Val(&tmpRead_4);

  /* Inport: '<Root>/gNVM_u16RRDoorHandlePosition' */
  Rte_Read_gNVM_u16RRDoorHandlePosition_Val(&tmpRead_2);

  /* Switch: '<S70>/Switch' */
  if (tmpRead_4) {
    ElecDoorHndl_Ctrl_B.Switch_m = u8MotorAction;
  }

  /* End of Switch: '<S70>/Switch' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgNVM_u16RRDoorHandleBigPositionOutport1' incorporates:
   *  Inport: '<Root>/gNVM_u16RRDoorHandleBigPosition'
   */
  Rte_Read_gNVM_u16RRDoorHandleBigPosition_Val(&rtb_gNVM_u16RRDoorHandleBigPosi);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgNVM_u16RRDoorHandleSmallPositionOutport1' incorporates:
   *  Inport: '<Root>/gNVM_u16RRDoorHandleSmallPosition'
   */
  Rte_Read_gNVM_u16RRDoorHandleSmallPosition_Val(&rtb_gNVM_u16RRDoorHandleSmallPo);

  /* Chart: '<S57>/PositionLearnSts' incorporates:
   *  Constant: '<S39>/Constant1'
   *  Constant: '<S39>/Constant21'
   *  Constant: '<S39>/Constant3'
   *  Constant: '<S39>/Constant4'
   */
  ElecDoorHndl_C_PositionLearnSts(rtb_gASI_bPowerOnReset, true, rtb_gNVM_u16RRDoorHandleBigPosi, rtb_gNVM_u16RRDoorHandleSmallPo, MAX_uint16_T, 0, 50, &ElecDoorHndl_Ctrl_B.bPosInitSts, &ElecDoorHndl_Ctrl_B.bBigEndPosInitSts, &ElecDoorHndl_Ctrl_B.bLittleEndPosInitSts, &ElecDoorHndl_Ctrl_B.u8DefaultValueWrtCnt, &ElecDoorHndl_Ctrl_DWork.sf_PositionLearnSts_n);

  /* Chart: '<S51>/HallDirction' incorporates:
   *  Delay: '<S39>/Delay3'
   */
  ElecDoorHndl_Ctrl_HallDirction(ElecDoorHndl_Ctrl_B.Delay1_g, ElecDoorHndl_Ctrl_B.bHallSupplyOutput, &ElecDoorHndl_Ctrl_B.u8HallDirction);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtgEDH_u16RRHallCntOutport1' incorporates:
   *  Inport: '<Root>/gEDH_u16RRHallCnt'
   */
  Rte_Read_gEDH_u16RRHallCnt_Val(&rtb_gEDH_u16RRHallCnt);

  /* Chart: '<S50>/CurrentPosition' incorporates:
   *  Constant: '<S39>/Constant5'
   */
  ElecDoorHndl_Ct_CurrentPosition(tmpRead_2, rtb_gEDH_u16RRHallCnt, ElecDoorHndl_Ctrl_B.bBigEndPosInitSts, ElecDoorHndl_Ctrl_B.bLittleEndPosInitSts, 32767, ElecDoorHndl_Ctrl_B.u8HallDirction, &ElecDoorHndl_Ctrl_B.u16Position_CUR, &ElecDoorHndl_Ctrl_DWork.sf_CurrentPosition_l);

  /* Chart: '<S55>/PositionDistance' incorporates:
   *  Constant: '<S39>/Constant6'
   */
  ElecDoorHndl_C_PositionDistance(rtb_gNVM_u16RRDoorHandleBigPosi, rtb_gNVM_u16RRDoorHandleSmallPo, 5, ElecDoorHndl_Ctrl_B.bPosInitSts, &rtb_u16HardStopBigEndPos, &rtb_u16HardStopLittleEndPos, &rtb_u16SoftStopBigEndPos, &rtb_u16SoftStopLittleEndPos, &rtb_u16TotalDistance);

  /* Switch: '<S58>/Switch1' incorporates:
   *  DataTypeConversion: '<S58>/Data Type Conversion5'
   *  DataTypeConversion: '<S58>/Data Type Conversion6'
   *  DataTypeConversion: '<S58>/Data Type Conversion7'
   *  Product: '<S58>/Divide1'
   *  Product: '<S58>/Product3'
   *  Sum: '<S58>/Add3'
   */
  if (ElecDoorHndl_Ctrl_B.bPosInitSts) {
    rtb_Switch1 = ElecDoorHndl_Ctrl_ConstB.Switch2_c;
  } else {
    rtb_Switch1 = rtb_u16TotalDistance == 0U ? MAX_uint32_T : ((uint32)ElecDoorHndl_Ctrl_B.u16Position_CUR - rtb_u16HardStopLittleEndPos) * 100U / rtb_u16TotalDistance;
  }

  /* End of Switch: '<S58>/Switch1' */

  /* Chart: '<S54>/FLDoorLockReq' incorporates:
   *  DataTypeConversion: '<S58>/Data Type Conversion8'
   */
  ElecDoorHndl_Ctrl_FLDoorLockReq((uint8)rtb_Switch1, 0.0, 0.0, &ElecDoorHndl_Ctrl_B.temp_u8DoorHandlePosition, &ElecDoorHndl_Ctrl_B.u8DoorHandleZoneState, &ElecDoorHndl_Ctrl_DWork.sf_FLDoorLockReq_cc);

  /* Chart: '<S56>/PositionEEP' incorporates:
   *  Delay: '<S39>/Delay3'
   *  Delay: '<S39>/Delay30'
   */
  ElecDoorHndl_Ctrl_PositionEEP(ElecDoorHndl_Ctrl_B.u8MotorRunningSts, ElecDoorHndl_Ctrl_B.bHallSupplyOutput, &ElecDoorHndl_Ctrl_B.u8PosEEPWrtCnt, &ElecDoorHndl_Ctrl_DWork.sf_PositionEEP_o);

  /* Delay: '<S42>/Delay4' */
  ElecDoorHndl_Ctrl_B.Delay4_e = ElecDoorHndl_Ctrl_DWork.Delay4_DSTATE_l;

  /* Chart: '<S43>/MotorStuck' incorporates:
   *  Constant: '<S39>/Constant11'
   *  Constant: '<S39>/Constant9'
   *  Delay: '<S39>/Delay30'
   */
  ElecDoorHndl_Ctrl_DWork.gASI_u16HallCnt_prev = ElecDoorHndl_Ctrl_DWork.gASI_u16HallCnt_start;
  ElecDoorHndl_Ctrl_DWork.gASI_u16HallCnt_start = rtb_gEDH_u16RRHallCnt;
  if (ElecDoorHndl_Ctrl_DWork.is_active_c14_ElecDoorHndl_Ctrl == 0U) {
    ElecDoorHndl_Ctrl_DWork.gASI_u16HallCnt_prev = rtb_gEDH_u16RRHallCnt;
    ElecDoorHndl_Ctrl_DWork.is_active_c14_ElecDoorHndl_Ctrl = 1U;
    ElecDoorHndl_Ctrl_DWork.is_c14_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctrl_IN_IDEL_l;
    ElecDoorHndl_Ctrl_B.u16MotorStallCnt = (uint16)0x00;
    ElecDoorHndl_Ctrl_B.bMotorStallFlag = false;
  } else if (ElecDoorHndl_Ctrl_DWork.is_c14_ElecDoorHndl_Ctrl == ElecDoorHndl_Ctrl_IN_IDEL_l) {
    if (ElecDoorHndl_Ctrl_B.u8MotorRunningSts == MOTOR_STS_RUNNING) {
      ElecDoorHndl_Ctrl_DWork.is_c14_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctrl_IN_STUCK;
      ElecDoorHndl_Ctrl_B.u16MotorStallCnt = (uint16)0x00;
      ElecDoorHndl_Ctrl_B.bMotorStallFlag = false;
      if (ElecDoorHndl_Ctrl_DWork.gASI_u16HallCnt_prev != ElecDoorHndl_Ctrl_DWork.gASI_u16HallCnt_start) {
        ElecDoorHndl_Ctrl_B.u16MotorStallCnt = (uint16)0x00;
      } else {
        rtb_u32AllowSleep_Local = ElecDoorHndl_Ctrl_B.u16MotorStallCnt + 1;
        if (rtb_u32AllowSleep_Local > 65535) {
          rtb_u32AllowSleep_Local = 65535;
        }

        ElecDoorHndl_Ctrl_B.u16MotorStallCnt = (uint16)rtb_u32AllowSleep_Local;
      }

      if (ElecDoorHndl_Ctrl_B.u16MotorStallCnt >= 300) {
        ElecDoorHndl_Ctrl_B.u16MotorStallCnt = MAX_uint16_T;
        ElecDoorHndl_Ctrl_B.bMotorStallFlag = true;
      } else {
        ElecDoorHndl_Ctrl_B.bMotorStallFlag = false;
      }
    }
  } else {
    ElecDoorHndl_Ctrl_DWork.is_c14_ElecDoorHndl_Ctrl = ElecDoorHndl_Ctrl_IN_IDEL_l;
    ElecDoorHndl_Ctrl_B.u16MotorStallCnt = (uint16)0x00;
    ElecDoorHndl_Ctrl_B.bMotorStallFlag = false;
  }

  /* End of Chart: '<S43>/MotorStuck' */

  /* Chart: '<S52>/LimitPositionLearn' */
  ElecDoorHndl_LimitPositionLearn(ElecDoorHndl_Ctrl_B.bBigEndPosInitSts, ElecDoorHndl_Ctrl_B.bLittleEndPosInitSts, ElecDoorHndl_Ctrl_B.Delay4_e, ElecDoorHndl_Ctrl_B.Delay1_g, ElecDoorHndl_Ctrl_B.u16Position_CUR, ElecDoorHndl_Ctrl_B.bMotorStallFlag, ElecDoorHndl_Ctrl_B.u8DefaultValueWrtCnt, &ElecDoorHndl_Ctrl_B.u8PosLearnReq, &ElecDoorHndl_Ctrl_B.u16StopBigEndPosBuffer, &ElecDoorHndl_Ctrl_B.u16StopLittleEndPosBuffer, &ElecDoorHndl_Ctrl_DWork.sf_LimitPositionLearn_g);

  /* Chart: '<S53>/LimitPositionProcess' */
  ElecDoorHn_LimitPositionProcess(ElecDoorHndl_Ctrl_B.u8PosLearnReq, &ElecDoorHndl_Ctrl_B.u8HardStopBigEndPosEEPWrtCnt, &ElecDoorHndl_Ctrl_B.u8HardStopLittleEndPosEEPWrtCnt, &ElecDoorHndl_Ctrl_DWork.sf_LimitPositionProcess_p);

  /* Chart: '<S47>/MotorOutput' */
  ElecDoorHndl_Ctrl_MotorOutput(ElecDoorHndl_Ctrl_B.Switch_m, ElecDoorHndl_Ctrl_B.u8DoorHandleZoneState, ElecDoorHndl_Ctrl_B.gPRM_u8tDoorHandleForceCfg, ElecDoorHndl_Ctrl_B.gPRM_u8tDoorHandleEmergencyCfg, ElecDoorHndl_Ctrl_B.gPRM_u8tDoorHandleSoftStopCfg, ElecDoorHndl_Ctrl_B.gPRM_u8tDoorHandleTimeOutCfg, ElecDoorHndl_Ctrl_B.gVRM_u16BatteryVolt_mv, &ElecDoorHndl_Ctrl_B.u8MotorRunningSts, &ElecDoorHndl_Ctrl_B.u8MotorOutput, &ElecDoorHndl_Ctrl_B.u8MotorTargetSpeed, &u8MotorAction, &ElecDoorHndl_Ctrl_DWork.sf_MotorOutput_j);

  /* Chart: '<S46>/HallSupplyOutput' incorporates:
   *  Constant: '<S39>/Constant16'
   */
  ElecDoorHndl_C_HallSupplyOutput(ElecDoorHndl_Ctrl_B.u8MotorRunningSts, 4, &ElecDoorHndl_Ctrl_B.bHallSupplyOutput, &ElecDoorHndl_Ctrl_DWork.sf_HallSupplyOutput_b);

  /* Chart: '<S59>/PositionZone' */
  ElecDoorHndl_Ctrl_PositionZone(ElecDoorHndl_Ctrl_B.u16Position_CUR, rtb_u16SoftStopBigEndPos, rtb_u16SoftStopLittleEndPos, rtb_u16HardStopBigEndPos, rtb_u16HardStopLittleEndPos, ElecDoorHndl_Ctrl_B.bPosInitSts, &rtb_u8PosZone);

  /* Switch: '<S59>/Switch5' incorporates:
   *  Constant: '<S59>/Constant2'
   *  Delay: '<S42>/Delay4'
   */
  if (ElecDoorHndl_Ctrl_B.bPosInitSts) {
    ElecDoorHndl_Ctrl_DWork.Delay4_DSTATE_l = 0U;
  } else {
    ElecDoorHndl_Ctrl_DWork.Delay4_DSTATE_l = rtb_u8PosZone;
  }

  /* End of Switch: '<S59>/Switch5' */

  /* Chart: '<S1>/AllowSleep_Local' */
  rtb_u32AllowSleep_Local = 0x0000;

  /* bit 0 */
  if (ElecDoorHndl_Ctrl_B.u8MotorOutput_a != 0) {
    rtb_u32AllowSleep_Local = 1;
  }

  if (ElecDoorHndl_Ctrl_B.u8MotorOutput != 0) {
    rtb_u32AllowSleep_Local = (sint32)((uint32)rtb_u32AllowSleep_Local | 0x0002);
  }

  /* End of Chart: '<S1>/AllowSleep_Local' */

  /* Inport: '<Root>/gElecDoorHndl_u8RRDoorHndlMotorPs_Val' */
  Rte_Read_gElecDoorHndl_u8RRDoorHndlMotorPs_Val(&tmpRead_6);

  /* Inport: '<Root>/gElecDoorHndl_u8RLDoorHndlMotorPs_Val' */
  Rte_Read_gElecDoorHndl_u8RLDoorHndlMotorPs_Val(&tmpRead_5);

  /* Outport: '<Root>/gEDH_u8LCK_RearLeftDoorHandlePosition' */
  (void) Rte_Write_gEDH_u8LCK_RearLeftDoorHandlePosition_Val(ElecDoorHndl_Ctrl_B.temp_u8DoorHandlePosition_a);

  /* Outport: '<Root>/gEDH_u8RLDoorHandleMotorOutput' */
  (void) Rte_Write_gEDH_u8RLDoorHandleMotorOutput_Val(ElecDoorHndl_Ctrl_B.u8MotorOutput_a);

  /* Outport: '<Root>/gEDH_u8LCK_RearLeftDoorHandleAction' */
  (void) Rte_Write_gEDH_u8LCK_RearLeftDoorHandleAction_Val(tmpRead_5);

  /* Outport: '<Root>/gEDH_u8RLDoorHandleBigPositionWrtCnt' */
  (void) Rte_Write_gEDH_u8RLDoorHandleBigPositionWrtCnt_Val(ElecDoorHndl_Ctrl_B.u8HardStopBigEndPosEEPWrtCnt_k);

  /* Outport: '<Root>/gEDH_u8RLDoorHandleSmallPositionWrtCnt' */
  (void) Rte_Write_gEDH_u8RLDoorHandleSmallPositionWrtCnt_Val(ElecDoorHndl_Ctrl_B.u8HardStopLittleEndPosEEPWrtC_m);

  /* Outport: '<Root>/gEDH_u16RLDoorHandleBigPosition' */
  (void) Rte_Write_gEDH_u16RLDoorHandleBigPosition_Val(ElecDoorHndl_Ctrl_B.u16StopBigEndPosBuffer_c);

  /* Outport: '<Root>/gEDH_u16RLDoorHandleSmallPosition' */
  (void) Rte_Write_gEDH_u16RLDoorHandleSmallPosition_Val(ElecDoorHndl_Ctrl_B.u16StopLittleEndPosBuffer_p);

  /* Outport: '<Root>/gEDH_u16RLDoorHandlePosition' */
  (void) Rte_Write_gEDH_u16RLDoorHandlePosition_Val(ElecDoorHndl_Ctrl_B.u16Position_CUR_j);

  /* Outport: '<Root>/gEDH_u8RLDoorHandlePositionWrtCnt' */
  (void) Rte_Write_gEDH_u8RLDoorHandlePositionWrtCnt_Val(ElecDoorHndl_Ctrl_B.u8PosEEPWrtCnt_g);

  /* Outport: '<Root>/gEDH_u8LCK_RearRightDoorHandlePosition' */
  (void) Rte_Write_gEDH_u8LCK_RearRightDoorHandlePosition_Val(ElecDoorHndl_Ctrl_B.temp_u8DoorHandlePosition);

  /* Outport: '<Root>/gEDH_u8RRDoorHandleMotorOutput' */
  (void) Rte_Write_gEDH_u8RRDoorHandleMotorOutput_Val(ElecDoorHndl_Ctrl_B.u8MotorOutput);

  /* Outport: '<Root>/gEDH_u8LCK_RearRightDoorHandleAction' */
  (void) Rte_Write_gEDH_u8LCK_RearRightDoorHandleAction_Val(tmpRead_6);

  /* Outport: '<Root>/gEDH_u8RRDoorHandleBigPositionWrtCnt' */
  (void) Rte_Write_gEDH_u8RRDoorHandleBigPositionWrtCnt_Val(ElecDoorHndl_Ctrl_B.u8HardStopBigEndPosEEPWrtCnt);

  /* Outport: '<Root>/gEDH_u8RRDoorHandleSmallPositionWrtCnt' */
  (void) Rte_Write_gEDH_u8RRDoorHandleSmallPositionWrtCnt_Val(ElecDoorHndl_Ctrl_B.u8HardStopLittleEndPosEEPWrtCnt);

  /* Outport: '<Root>/gEDH_u16RRDoorHandleBigPosition' */
  (void) Rte_Write_gEDH_u16RRDoorHandleBigPosition_Val(ElecDoorHndl_Ctrl_B.u16StopBigEndPosBuffer);

  /* Outport: '<Root>/gEDH_u16RRDoorHandleSmallPosition' */
  (void) Rte_Write_gEDH_u16RRDoorHandleSmallPosition_Val(ElecDoorHndl_Ctrl_B.u16StopLittleEndPosBuffer);

  /* Outport: '<Root>/gEDH_u16RRDoorHandlePosition' */
  (void) Rte_Write_gEDH_u16RRDoorHandlePosition_Val(ElecDoorHndl_Ctrl_B.u16Position_CUR);

  /* Outport: '<Root>/gEDH_u8RRDoorHandlePositionWrtCnt' */
  (void) Rte_Write_gEDH_u8RRDoorHandlePositionWrtCnt_Val(ElecDoorHndl_Ctrl_B.u8PosEEPWrtCnt);

  /* Switch: '<S47>/Switch2' incorporates:
   *  Constant: '<S47>/Constant1'
   */
  if (ElecDoorHndl_Ctrl_B.u8MotorTargetSpeed > 100) {
    tmpRead_6 = 100U;
  } else {
    tmpRead_6 = ElecDoorHndl_Ctrl_B.u8MotorTargetSpeed;
  }

  /* End of Switch: '<S47>/Switch2' */

  /* Outport: '<Root>/gEDH_u8RRDoorHandlePWMOutput' */
  (void) Rte_Write_gEDH_u8RRDoorHandlePWMOutput_Val(tmpRead_6);

  /* Switch: '<S14>/Switch2' incorporates:
   *  Constant: '<S14>/Constant1'
   */
  if (ElecDoorHndl_Ctrl_B.u8MotorTargetSpeed_o > 100) {
    tmpRead_6 = 100U;
  } else {
    tmpRead_6 = ElecDoorHndl_Ctrl_B.u8MotorTargetSpeed_o;
  }

  /* End of Switch: '<S14>/Switch2' */

  /* Outport: '<Root>/gEDH_u8RLDoorHandlePWMOutput' */
  (void) Rte_Write_gEDH_u8RLDoorHandlePWMOutput_Val(tmpRead_6);

  /* Outport: '<Root>/gEDH_u32AllowSleep_NW' */
  (void) Rte_Write_gEDH_u32AllowSleep_NW_Val(ElecDoorHndl_Ctrl_ConstB.Constant12);

  /* Outport: '<Root>/gEDH_u32AllowSleep_Local' */
  (void) Rte_Write_gEDH_u32AllowSleep_Local_Val((uint32)rtb_u32AllowSleep_Local);

  /* Outport: '<Root>/gEDH_bRRHallSupplyOutput' */
  (void) Rte_Write_gEDH_bRRHallSupplyOutput_Val(ElecDoorHndl_Ctrl_B.bHallSupplyOutput);

  /* Outport: '<Root>/gEDH_bRLHallSupplyOutput' */
  (void) Rte_Write_gEDH_bRLHallSupplyOutput_Val(ElecDoorHndl_Ctrl_B.bHallSupplyOutput_n);
}

/* Model initialize function */
void ElecDoorHndl_Ctrl_Runnable_Init(void)
{
  {
    /* local block i/o variables */
    uint16 rtb_u16HardStopBigEndPos;
    uint16 rtb_u16HardStopLittleEndPos;
    uint16 rtb_u16SoftStopBigEndPos;
    uint16 rtb_u16SoftStopLittleEndPos;
    uint16 rtb_u16TotalDistance;
    uint16 rtb_u16HardStopBigEndPos_j;
    uint16 rtb_u16HardStopLittleEndPos_a;
    uint16 rtb_u16SoftStopBigEndPos_l;
    uint16 rtb_u16SoftStopLittleEndPos_k;
    uint16 rtb_u16TotalDistance_m;
    uint8 rtb_u8PosZone;
    uint8 rtb_u8PosZone_a;
    uint8 u8MotorAction_e;

    /* SystemInitialize for Chart: '<S24>/PositionLearnSts' */
    ElecDoorH_PositionLearnSts_Init(&ElecDoorHndl_Ctrl_B.bPosInitSts_b, &ElecDoorHndl_Ctrl_B.bBigEndPosInitSts_a, &ElecDoorHndl_Ctrl_B.bLittleEndPosInitSts_n, &ElecDoorHndl_Ctrl_B.u8DefaultValueWrtCnt_g);

    /* SystemInitialize for Chart: '<S18>/HallDirction' */
    ElecDoorHndl__HallDirction_Init(&ElecDoorHndl_Ctrl_B.u8HallDirction_c);

    /* SystemInitialize for Chart: '<S17>/CurrentPosition' */
    ElecDoorHn_CurrentPosition_Init(&ElecDoorHndl_Ctrl_B.u16Position_CUR_j);

    /* SystemInitialize for Chart: '<S22>/PositionDistance' */
    ElecDoorH_PositionDistance_Init(&rtb_u16HardStopBigEndPos_j, &rtb_u16HardStopLittleEndPos_a, &rtb_u16SoftStopBigEndPos_l, &rtb_u16SoftStopLittleEndPos_k, &rtb_u16TotalDistance_m);

    /* SystemInitialize for Chart: '<S21>/FLDoorLockReq' */
    ElecDoorHndl_FLDoorLockReq_Init(&ElecDoorHndl_Ctrl_B.temp_u8DoorHandlePosition_a, &ElecDoorHndl_Ctrl_B.u8DoorHandleZoneState_n);

    /* SystemInitialize for Chart: '<S23>/PositionEEP' */
    ElecDoorHndl_C_PositionEEP_Init(&ElecDoorHndl_Ctrl_B.u8PosEEPWrtCnt_g);

    /* SystemInitialize for Chart: '<S19>/LimitPositionLearn' */
    ElecDoo_LimitPositionLearn_Init(&ElecDoorHndl_Ctrl_B.u8PosLearnReq_f, &ElecDoorHndl_Ctrl_B.u16StopBigEndPosBuffer_c, &ElecDoorHndl_Ctrl_B.u16StopLittleEndPosBuffer_p);

    /* SystemInitialize for Chart: '<S20>/LimitPositionProcess' */
    ElecD_LimitPositionProcess_Init(&ElecDoorHndl_Ctrl_B.u8HardStopBigEndPosEEPWrtCnt_k, &ElecDoorHndl_Ctrl_B.u8HardStopLittleEndPosEEPWrtC_m);

    /* SystemInitialize for Chart: '<S14>/MotorOutput' */
    ElecDoorHndl_C_MotorOutput_Init(&ElecDoorHndl_Ctrl_B.u8MotorRunningSts_i, &ElecDoorHndl_Ctrl_B.u8MotorOutput_a, &ElecDoorHndl_Ctrl_B.u8MotorTargetSpeed_o, &u8MotorAction_e);

    /* SystemInitialize for Chart: '<S13>/HallSupplyOutput' */
    ElecDoorH_HallSupplyOutput_Init(&ElecDoorHndl_Ctrl_B.bHallSupplyOutput_n);

    /* SystemInitialize for Chart: '<S26>/PositionZone' */
    ElecDoorHndl__PositionZone_Init(&rtb_u8PosZone_a);

    /* SystemInitialize for Chart: '<S57>/PositionLearnSts' */
    ElecDoorH_PositionLearnSts_Init(&ElecDoorHndl_Ctrl_B.bPosInitSts, &ElecDoorHndl_Ctrl_B.bBigEndPosInitSts, &ElecDoorHndl_Ctrl_B.bLittleEndPosInitSts, &ElecDoorHndl_Ctrl_B.u8DefaultValueWrtCnt);

    /* SystemInitialize for Chart: '<S51>/HallDirction' */
    ElecDoorHndl__HallDirction_Init(&ElecDoorHndl_Ctrl_B.u8HallDirction);

    /* SystemInitialize for Chart: '<S50>/CurrentPosition' */
    ElecDoorHn_CurrentPosition_Init(&ElecDoorHndl_Ctrl_B.u16Position_CUR);

    /* SystemInitialize for Chart: '<S55>/PositionDistance' */
    ElecDoorH_PositionDistance_Init(&rtb_u16HardStopBigEndPos, &rtb_u16HardStopLittleEndPos, &rtb_u16SoftStopBigEndPos, &rtb_u16SoftStopLittleEndPos, &rtb_u16TotalDistance);

    /* SystemInitialize for Chart: '<S54>/FLDoorLockReq' */
    ElecDoorHndl_FLDoorLockReq_Init(&ElecDoorHndl_Ctrl_B.temp_u8DoorHandlePosition, &ElecDoorHndl_Ctrl_B.u8DoorHandleZoneState);

    /* SystemInitialize for Chart: '<S56>/PositionEEP' */
    ElecDoorHndl_C_PositionEEP_Init(&ElecDoorHndl_Ctrl_B.u8PosEEPWrtCnt);

    /* SystemInitialize for Chart: '<S52>/LimitPositionLearn' */
    ElecDoo_LimitPositionLearn_Init(&ElecDoorHndl_Ctrl_B.u8PosLearnReq, &ElecDoorHndl_Ctrl_B.u16StopBigEndPosBuffer, &ElecDoorHndl_Ctrl_B.u16StopLittleEndPosBuffer);

    /* SystemInitialize for Chart: '<S53>/LimitPositionProcess' */
    ElecD_LimitPositionProcess_Init(&ElecDoorHndl_Ctrl_B.u8HardStopBigEndPosEEPWrtCnt, &ElecDoorHndl_Ctrl_B.u8HardStopLittleEndPosEEPWrtCnt);

    /* SystemInitialize for Chart: '<S47>/MotorOutput' */
    ElecDoorHndl_C_MotorOutput_Init(&ElecDoorHndl_Ctrl_B.u8MotorRunningSts, &ElecDoorHndl_Ctrl_B.u8MotorOutput, &ElecDoorHndl_Ctrl_B.u8MotorTargetSpeed, &u8MotorAction_e);

    /* SystemInitialize for Chart: '<S46>/HallSupplyOutput' */
    ElecDoorH_HallSupplyOutput_Init(&ElecDoorHndl_Ctrl_B.bHallSupplyOutput);

    /* SystemInitialize for Chart: '<S59>/PositionZone' */
    ElecDoorHndl__PositionZone_Init(&rtb_u8PosZone);
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
