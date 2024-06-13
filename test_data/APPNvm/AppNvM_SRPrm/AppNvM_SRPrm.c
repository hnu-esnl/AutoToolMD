/**********************************************************************************************************************
 *  FILE REQUIRES USER MODIFICATIONS
 *  Template Scope: sections marked with Start and End comments
 *  -------------------------------------------------------------------------------------------------------------------
 *  This file includes template code that must be completed and/or adapted during BSW integration.
 *  The template code is incomplete and only intended for providing a signature and an empty implementation.
 *  It is neither intended nor qualified for use in series production without applying suitable quality measures.
 *  The template code must be completed as described in the instructions given within this file and/or in the.
 *  Technical Reference.
 *  The completed implementation must be tested with diligent care and must comply with all quality requirements which.
 *  are necessary according to the state of the art before its use.
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  AppNvM_SRPrm.c
 *           Config:  Platform_TC399.dpa
 *        SW-C Type:  AppNvM_SRPrm
 *
 *        Generator:  MICROSAR RTE Generator Version 4.27.0
 *                    RTE Core Version 1.27.0
 *          License:  CBD2101052
 *
 *      Description:  C-Code implementation template for SW-C <AppNvM_SRPrm>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_AppNvM_SRPrm.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "AppNvM_Block.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Boolean: Boolean
 * Boolean: Boolean
 * UInt16: Integer in interval [0...65535]
 * UInt32: Integer in interval [0...4294967295]
 * UInt8: Integer in interval [0...255]
 * UInt8: Integer in interval [0...255]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * rt_Array_UInt8_4: Array with 4 element(s) of type UInt8
 * rt_Array_uint16_25: Array with 25 element(s) of type uint16
 *
 *********************************************************************************************************************/


#define AppNvM_SRPrm_START_SEC_CODE
#include "AppNvM_SRPrm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppNvM_SRPrm_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppNvM_SRPrm_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AppNvM_SRPrm_CODE) AppNvM_SRPrm_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppNvM_SRPrm_Init
 *********************************************************************************************************************/

    Rte_Write_gPRM_u16UnderVoltImmPrm_Val(Rte_InitValue_gPRM_u16UnderVoltImmPrm_Val);
    Rte_Write_gPRM_u8MaxRuntimePrm_Val(Rte_InitValue_gPRM_u8MaxRuntimePrm_Val);
    Rte_Write_gPRM_u16HallHighLevel_Val(Rte_InitValue_gPRM_u16HallHighLevel_Val);
    Rte_Write_gPRM_u8PODPowerRelesInhibitForOverheat_Val(Rte_InitValue_gPRM_u8PODPowerRelesInhibitForOverheat_Val);
    Rte_Write_gPRM_bTDCSStopEnableCfg_Val(Rte_InitValue_gPRM_bTDCSStopEnableCfg_Val);
    Rte_Write_gPRM_bPODCinchFunEnCfgRL_Val(Rte_InitValue_gPRM_bPODCinchFunEnCfgRL_Val);
    Rte_Write_gPRM_bPODCinchFunEnCfgRR_Val(Rte_InitValue_gPRM_bPODCinchFunEnCfgRR_Val);
    Rte_Write_gPRM_u16HallLowLevel_Val(Rte_InitValue_gPRM_u16HallLowLevel_Val);
    Rte_Write_gPRM_u8WndAPCfgSet_Val(Rte_InitValue_gPRM_u8WndAPCfgSet_Val);
    Rte_Write_gPRM_u16OverVoltPrm_Val(Rte_InitValue_gPRM_u16OverVoltPrm_Val);
    Rte_Write_gPLG_u8SecondPosition_Val(Rte_InitValue_gPLG_u8SecondPosition_Val);
    Rte_Write_gPRM_u8EnaThermalProtPrm_Val(Rte_InitValue_gPRM_u8EnaThermalProtPrm_Val);
    Rte_Write_gPRM_u16OverVoltImmPrm_Val(Rte_InitValue_gPRM_u16OverVoltImmPrm_Val);
    Rte_Write_gPRM_u8SwStuckTimePrm_Val(Rte_InitValue_gPRM_u8SwStuckTimePrm_Val);
    Rte_Write_gPRM_u8RLEnableAutoUpPrm_Val(Rte_InitValue_gPRM_u8RLEnableAutoUpPrm_Val);
    Rte_Write_gPRM_u8PODPowerRelesActiCntForOverheat_Val(Rte_InitValue_gPRM_u8PODPowerRelesActiCntForOverheat_Val);
    Rte_Write_gPRM_u8SwStuckRecoverTimePrm_Val(Rte_InitValue_gPRM_u8SwStuckRecoverTimePrm_Val);
    Rte_Write_gPRM_u8IniHoldTimer_Val(Rte_InitValue_gPRM_u8IniHoldTimer_Val);
    Rte_Write_gPRM_u16UnderVoltRecoverPrm_Val(Rte_InitValue_gPRM_u16UnderVoltRecoverPrm_Val);
    Rte_Write_gPRM_u32TempCoolDownPrm_Val(Rte_InitValue_gPRM_u32TempCoolDownPrm_Val);
    Rte_Write_gPRM_u8MinReverseTimePrm_Val(Rte_InitValue_gPRM_u8MinReverseTimePrm_Val);
    Rte_Write_gCFG_u8WndVentilationPst_Val(Rte_InitValue_gCFG_u8WndVentilationPst_Val);
    Rte_Write_gPRM_u8PODTmrCinchRst_Val(Rte_InitValue_gPRM_u8PODTmrCinchRst_Val);
    Rte_Write_gPRM_u8PODCinchTWForOverheat_Val(Rte_InitValue_gPRM_u8PODCinchTWForOverheat_Val);
    Rte_Write_gPRM_u8PODTmrCinchOper_Val(Rte_InitValue_gPRM_u8PODTmrCinchOper_Val);
    Rte_Write_gPRM_u8FLEnableAutoUpPrm_Val(Rte_InitValue_gPRM_u8FLEnableAutoUpPrm_Val);
    Rte_Write_gPRM_bRearTurnLightType_Val(Rte_InitValue_gPRM_bRearTurnLightType_Val);
    Rte_Write_gPRM_u32TempDisableUpPrm_Val(Rte_InitValue_gPRM_u32TempDisableUpPrm_Val);
    Rte_Write_gPRM_u8RREnableAutoUpPrm_Val(Rte_InitValue_gPRM_u8RREnableAutoUpPrm_Val);
    Rte_Write_gPRM_u8VoltRecoverDelayPrm_Val(Rte_InitValue_gPRM_u8VoltRecoverDelayPrm_Val);
    Rte_Write_gPRM_u8HallOverTime_Val(Rte_InitValue_gPRM_u8HallOverTime_Val);
    Rte_Write_gPRM_u8PODPowerRelesTWForOverheat_Val(Rte_InitValue_gPRM_u8PODPowerRelesTWForOverheat_Val);
    Rte_Write_gPRM_u16UnderVoltPrm_Val(Rte_InitValue_gPRM_u16UnderVoltPrm_Val);
    Rte_Write_gPRM_u8PODCinchInhibitForOverheat_Val(Rte_InitValue_gPRM_u8PODCinchInhibitForOverheat_Val);
    Rte_Write_gPRM_u8PODTCinchActv_Val(Rte_InitValue_gPRM_u8PODTCinchActv_Val);
    Rte_Write_gPRM_u8VoltProtDelayPrm_Val(Rte_InitValue_gPRM_u8VoltProtDelayPrm_Val);
    Rte_Write_gPLG_u8SpindleCfg_Val(Rte_InitValue_gPLG_u8SpindleCfg_Val);
    Rte_Write_gPRM_u8HallFilterTime_Val(Rte_InitValue_gPRM_u8HallFilterTime_Val);
    Rte_Write_gPRM_u8FREnableAutoUpPrm_Val(Rte_InitValue_gPRM_u8FREnableAutoUpPrm_Val);
    Rte_Write_gPRM_u32TempDisableAllPrm_Val(Rte_InitValue_gPRM_u32TempDisableAllPrm_Val);
    Rte_Write_gPRM_u16OverVoltRecoverPrm_Val(Rte_InitValue_gPRM_u16OverVoltRecoverPrm_Val);
    Rte_Write_gPRM_u8PODCinchActiCntForOverheat_Val(Rte_InitValue_gPRM_u8PODCinchActiCntForOverheat_Val);
    Rte_Write_gPRM_u8ZcuTypePrm_Val(Rte_InitValue_gPRM_u8ZcuTypePrm_Val);
    Rte_Write_gPRM_u8StaggerTimePrm_Val(Rte_InitValue_gPRM_u8StaggerTimePrm_Val);
    Rte_Write_gCFG_bLCK_PowerFillerCapCfg_Val(Rte_InitValue_gCFG_bLCK_PowerFillerCapCfg_Val);
    Rte_Write_gCFG_bReCabinTSnsrAvl_Val(Rte_InitValue_gCFG_bReCabinTSnsrAvl_Val);
    Rte_Write_gCFG_bRLDoorFramelessGlassCfg_Val(Rte_InitValue_gCFG_bRLDoorFramelessGlassCfg_Val);
    Rte_Write_gCFG_bRRDoorFramelessGlassCfg_Val(Rte_InitValue_gCFG_bRRDoorFramelessGlassCfg_Val);
    Rte_Write_gCFG_bWndVentilationFunCfg_Val(Rte_InitValue_gCFG_bWndVentilationFunCfg_Val);
    Rte_Write_gCFG_RearWiperPresent_Val(Rte_InitValue_gCFG_RearWiperPresent_Val);
    Rte_Write_gCFG_u8LocalSideWinSwType_Val(Rte_InitValue_gCFG_u8LocalSideWinSwType_Val);
    Rte_Write_gCFG_u8ReBlowrCtrlFreqTyp_Val(Rte_InitValue_gCFG_u8ReBlowrCtrlFreqTyp_Val);
    Rte_Write_gCFG_u8ReBlowrCtrlTyp_Val(Rte_InitValue_gCFG_u8ReBlowrCtrlTyp_Val);
    Rte_Write_gCFG_u8ReHVACBoxTyp_Val(Rte_InitValue_gCFG_u8ReHVACBoxTyp_Val);
    Rte_Write_gCFG_u8SsmInFunctionConfig_Val(Rte_InitValue_gCFG_u8SsmInFunctionConfig_Val);
    Rte_Write_gCFG_u8WndAPCfgSet_Val(Rte_InitValue_gCFG_u8WndAPCfgSet_Val);
    Rte_Write_gPLG_bAntiPinchSensorCfg_Val(Rte_InitValue_gPLG_bAntiPinchSensorCfg_Val);
    Rte_Write_gPLG_bBuzzerCfg_Val(Rte_InitValue_gPLG_bBuzzerCfg_Val);
    Rte_Write_gPLG_bFollowUpCloseCfg_Val(Rte_InitValue_gPLG_bFollowUpCloseCfg_Val);
    Rte_Write_gPLG_bFollowUpOpenCfg_Val(Rte_InitValue_gPLG_bFollowUpOpenCfg_Val);
    Rte_Write_gPLG_bFuncEnCfg_Val(Rte_InitValue_gPLG_bFuncEnCfg_Val);
    Rte_Write_gPLG_bMultiObstacleEnable_Val(Rte_InitValue_gPLG_bMultiObstacleEnable_Val);
    Rte_Write_gPLG_bOverSpeedCfg_Val(Rte_InitValue_gPLG_bOverSpeedCfg_Val);
    Rte_Write_gPLG_bReverseOpen_Cfg_Val(Rte_InitValue_gPLG_bReverseOpen_Cfg_Val);
    Rte_Write_gPLG_u8CinchingInhibitTime_Val(Rte_InitValue_gPLG_u8CinchingInhibitTime_Val);
    Rte_Write_gPLG_u8CinchingMaxActiTime_Val(Rte_InitValue_gPLG_u8CinchingMaxActiTime_Val);
    Rte_Write_gPLG_u8LatchTypeCfg_Val(Rte_InitValue_gPLG_u8LatchTypeCfg_Val);
    Rte_Write_gPLG_u8OpenTrunkSpeedLimit_Val(Rte_InitValue_gPLG_u8OpenTrunkSpeedLimit_Val);
    Rte_Write_gPLG_u8PowerReleasInhibitTime_Val(Rte_InitValue_gPLG_u8PowerReleasInhibitTime_Val);
    Rte_Write_gPLG_u8PowerReleasMaxActiTime_Val(Rte_InitValue_gPLG_u8PowerReleasMaxActiTime_Val);
    Rte_Write_gPLG_u8SpindleHeatPretectFactor_Val(Rte_InitValue_gPLG_u8SpindleHeatPretectFactor_Val);
    Rte_Write_gPLG_u8SpindleMaxActiTime_Val(Rte_InitValue_gPLG_u8SpindleMaxActiTime_Val);
    Rte_Write_gPLG_u8SpindleMaxInteActiTim_Val(Rte_InitValue_gPLG_u8SpindleMaxInteActiTim_Val);
    Rte_Write_gPLG_u8VehicleType_Val(Rte_InitValue_gPLG_u8VehicleType_Val);
    Rte_Write_gPRM_bChargeLightEnableCfg_Val(Rte_InitValue_gPRM_bChargeLightEnableCfg_Val);
    Rte_Write_gPRM_bCHMSLEnableCfg_Val(Rte_InitValue_gPRM_bCHMSLEnableCfg_Val);
    Rte_Write_gPRM_bParkLightEnableCfg_Val(Rte_InitValue_gPRM_bParkLightEnableCfg_Val);
    Rte_Write_gPRM_bPODRelsCinchFunEnCfgRL_Val(Rte_InitValue_gPRM_bPODRelsCinchFunEnCfgRL_Val);
    Rte_Write_gPRM_bPODRelsCinchFunEnCfgRR_Val(Rte_InitValue_gPRM_bPODRelsCinchFunEnCfgRR_Val);
    Rte_Write_gPRM_bPositionLightEnableCfg_Val(Rte_InitValue_gPRM_bPositionLightEnableCfg_Val);
    Rte_Write_gPRM_bPositionLightTimingOFFEnableCfg_Val(Rte_InitValue_gPRM_bPositionLightTimingOFFEnableCfg_Val);
    Rte_Write_gPRM_bRearFogLightEnableCfg_Val(Rte_InitValue_gPRM_bRearFogLightEnableCfg_Val);
    Rte_Write_gPRM_bRearTurnONRearPositionOFFCfg_Val(Rte_InitValue_gPRM_bRearTurnONRearPositionOFFCfg_Val);
    Rte_Write_gPRM_bReverseLightEnableCfg_Val(Rte_InitValue_gPRM_bReverseLightEnableCfg_Val);
    Rte_Write_gPRM_bSideBrkLightEnableCfg_Val(Rte_InitValue_gPRM_bSideBrkLightEnableCfg_Val);
    Rte_Write_gPRM_bTurnLightEnableCfg_Val(Rte_InitValue_gPRM_bTurnLightEnableCfg_Val);
    Rte_Write_gPRM_u8LicencePlateLightShutDown_Val(Rte_InitValue_gPRM_u8LicencePlateLightShutDown_Val);
    Rte_Write_gPRM_u8LocalKeepWakeUpCfg_Val(Rte_InitValue_gPRM_u8LocalKeepWakeUpCfg_Val);
    Rte_Write_gPRM_u8PositionLightShutDown_Val(Rte_InitValue_gPRM_u8PositionLightShutDown_Val);
    Rte_Write_gPRM_u8PowerDoorCfg_Val(Rte_InitValue_gPRM_u8PowerDoorCfg_Val);
    Rte_Write_gPRM_u8ReAirConditionBoxSpecCfg_Val(Rte_InitValue_gPRM_u8ReAirConditionBoxSpecCfg_Val);
    Rte_Write_gPRM_u8RearPositionLightReuseCfg_Val(Rte_InitValue_gPRM_u8RearPositionLightReuseCfg_Val);
    Rte_Write_gPRM_u8RearWiperAndWashDelayTimeCfg_Val(Rte_InitValue_gPRM_u8RearWiperAndWashDelayTimeCfg_Val);
    Rte_Write_gPRM_u8RLPowerDoorReqWinOpenPst_Val(Rte_InitValue_gPRM_u8RLPowerDoorReqWinOpenPst_Val);
    Rte_Write_gPRM_u8RLWinShortDropPst_Val(Rte_InitValue_gPRM_u8RLWinShortDropPst_Val);
    Rte_Write_gPRM_u8RRPowerDoorReqWinOpenPst_Val(Rte_InitValue_gPRM_u8RRPowerDoorReqWinOpenPst_Val);
    Rte_Write_gPRM_u8RRWinShortDropPst_Val(Rte_InitValue_gPRM_u8RRWinShortDropPst_Val);
    Rte_Write_gPRM_u8RwpIntervalTime1DelayCfg_Val(Rte_InitValue_gPRM_u8RwpIntervalTime1DelayCfg_Val);
    Rte_Write_gPRM_u8RwpIntervalTime2DelayCfg_Val(Rte_InitValue_gPRM_u8RwpIntervalTime2DelayCfg_Val);
    Rte_Write_gPRM_u8RwpIntervalTime3DelayCfg_Val(Rte_InitValue_gPRM_u8RwpIntervalTime3DelayCfg_Val);
    Rte_Write_gPRM_u8RwpIntervalTime4DelayCfg_Val(Rte_InitValue_gPRM_u8RwpIntervalTime4DelayCfg_Val);
    Rte_Write_gPRM_u8RwpIntervalTime5DelayCfg_Val(Rte_InitValue_gPRM_u8RwpIntervalTime5DelayCfg_Val);
    Rte_Write_gPRM_u8RwpIntervalTime6DelayCfg_Val(Rte_InitValue_gPRM_u8RwpIntervalTime6DelayCfg_Val);
    Rte_Write_gPRM_u8RwpIntervalTime7DelayCfg_Val(Rte_InitValue_gPRM_u8RwpIntervalTime7DelayCfg_Val);
    Rte_Write_gPRM_u8RwpParkActivationTimeCfg_Val(Rte_InitValue_gPRM_u8RwpParkActivationTimeCfg_Val);
    Rte_Write_gPRM_u8RwpServiceTimeCfg_Val(Rte_InitValue_gPRM_u8RwpServiceTimeCfg_Val);
    Rte_Write_gPRM_u8RwpStallTimeCfg_Val(Rte_InitValue_gPRM_u8RwpStallTimeCfg_Val);
    Rte_Write_gPRM_u8tAjarKeepAwakeCfg_Val(Rte_InitValue_gPRM_u8tAjarKeepAwakeCfg_Val);
    Rte_Write_gPRM_u8tDoorHandleEmergencyCfg_Val(Rte_InitValue_gPRM_u8tDoorHandleEmergencyCfg_Val);
    Rte_Write_gPRM_u8tDoorHandleForceCfg_Val(Rte_InitValue_gPRM_u8tDoorHandleForceCfg_Val);
    Rte_Write_gPRM_u8tDoorHandleSoftStopCfg_Val(Rte_InitValue_gPRM_u8tDoorHandleSoftStopCfg_Val);
    Rte_Write_gPRM_u8tDoorHandleTimeOutCfg_Val(Rte_InitValue_gPRM_u8tDoorHandleTimeOutCfg_Val);
    Rte_Write_gPRM_u8tDoorsLockUnlockCfg_Val(Rte_InitValue_gPRM_u8tDoorsLockUnlockCfg_Val);
    Rte_Write_gPRM_u8tFillerCapLockUnlockCfg_Val(Rte_InitValue_gPRM_u8tFillerCapLockUnlockCfg_Val);
    Rte_Write_gPRM_u8tIntervalEmgcUnlockCfg_Val(Rte_InitValue_gPRM_u8tIntervalEmgcUnlockCfg_Val);
    Rte_Write_gPRM_u8tIntervalReverseUnlockCfg_Val(Rte_InitValue_gPRM_u8tIntervalReverseUnlockCfg_Val);
    Rte_Write_gPRM_u8tPowerCinchCfg_Val(Rte_InitValue_gPRM_u8tPowerCinchCfg_Val);
    Rte_Write_gPRM_u8tPowerReleaseCfg_Val(Rte_InitValue_gPRM_u8tPowerReleaseCfg_Val);
    Rte_Write_gPRM_u8tPowerReleaseTimeOutCfg_Val(Rte_InitValue_gPRM_u8tPowerReleaseTimeOutCfg_Val);
    Rte_Write_gPRM_u8tTrunkUnlockCfg_Val(Rte_InitValue_gPRM_u8tTrunkUnlockCfg_Val);
    Rte_Write_gPRM_u8UINM_LocalSideWinSwActivetime_Val(Rte_InitValue_gPRM_u8UINM_LocalSideWinSwActivetime_Val);
    Rte_Write_gPRM_u8VehicleTypeCfg_Val(Rte_InitValue_gPRM_u8VehicleTypeCfg_Val);
    Rte_Write_gPRM_u8VehRLCM_Val(Rte_InitValue_gPRM_u8VehRLCM_Val);
    Rte_Write_gPRM_u8WndVentilationPst_Val(Rte_InitValue_gPRM_u8WndVentilationPst_Val);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppNvM_SRPrm_vWriteEepMainFunction_10ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_gCFG_RearWiperPresent_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gCFG_bLCK_PowerFillerCapCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gCFG_bRLDoorFramelessGlassCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gCFG_bRRDoorFramelessGlassCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gCFG_bReCabinTSnsrAvl_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gCFG_bWndVentilationFunCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gCFG_u8LocalSideWinSwType_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gCFG_u8ReBlowrCtrlFreqTyp_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gCFG_u8ReBlowrCtrlTyp_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gCFG_u8ReHVACBoxTyp_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gCFG_u8SsmInFunctionConfig_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gCFG_u8SsmInVariantCoding_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_4
 *   Std_ReturnType Rte_Write_gCFG_u8WndAPCfgSet_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gCFG_u8WndVentilationPst_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPLG_bAntiPinchSensorCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPLG_bBuzzerCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPLG_bFollowUpCloseCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPLG_bFollowUpOpenCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPLG_bFuncEnCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPLG_bMultiObstacleEnable_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPLG_bOverSpeedCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPLG_bReverseOpen_Cfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPLG_u8CinchingInhibitTime_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPLG_u8CinchingMaxActiTime_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPLG_u8LatchTypeCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPLG_u8OpenTrunkSpeedLimit_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPLG_u8PowerReleasInhibitTime_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPLG_u8PowerReleasMaxActiTime_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPLG_u8SecondPosition_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPLG_u8SpindleCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPLG_u8SpindleHeatPretectFactor_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPLG_u8SpindleMaxActiTime_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPLG_u8SpindleMaxInteActiTim_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPLG_u8VehicleType_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_au16OvrCurrDebTime_Val(const uint16 *data)
 *     Argument data: uint16* is of type rt_Array_uint16_25
 *   Std_ReturnType Rte_Write_gPRM_au16OvrCurrThres_Val(const uint16 *data)
 *     Argument data: uint16* is of type rt_Array_uint16_25
 *   Std_ReturnType Rte_Write_gPRM_bCHMSLEnableCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bChargeLightEnableCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bPODCinchFunEnCfgRL_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bPODCinchFunEnCfgRR_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bPODRelsCinchFunEnCfgRL_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bPODRelsCinchFunEnCfgRR_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bParkLightEnableCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bPositionLightEnableCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bPositionLightTimingOFFEnableCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bRearFogLightEnableCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bRearTurnLightType_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bRearTurnONRearPositionOFFCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bReverseLightEnableCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bSideBrkLightEnableCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bTDCSStopEnableCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_bTurnLightEnableCfg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gPRM_u16HallHighLevel_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gPRM_u16HallLowLevel_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gPRM_u16OverVoltImmPrm_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gPRM_u16OverVoltPrm_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gPRM_u16OverVoltRecoverPrm_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gPRM_u16UnderVoltImmPrm_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gPRM_u16UnderVoltPrm_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gPRM_u16UnderVoltRecoverPrm_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gPRM_u32TempCoolDownPrm_Val(UInt32 data)
 *   Std_ReturnType Rte_Write_gPRM_u32TempDisableAllPrm_Val(UInt32 data)
 *   Std_ReturnType Rte_Write_gPRM_u32TempDisableUpPrm_Val(UInt32 data)
 *   Std_ReturnType Rte_Write_gPRM_u8EnaThermalProtPrm_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8FLEnableAutoUpPrm_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8FREnableAutoUpPrm_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8HallFilterTime_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8HallOverTime_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8IniHoldTimer_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8LicencePlateLightShutDown_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8LocalKeepWakeUpCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8MaxRuntimePrm_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8MinReverseTimePrm_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8PODCinchActiCntForOverheat_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8PODCinchInhibitForOverheat_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8PODCinchTWForOverheat_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8PODPowerRelesActiCntForOverheat_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8PODPowerRelesInhibitForOverheat_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8PODPowerRelesTWForOverheat_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8PODTCinchActv_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8PODTmrCinchOper_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8PODTmrCinchRst_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8PositionLightShutDown_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8PowerDoorCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RLEnableAutoUpPrm_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RLPowerDoorReqWinOpenPst_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RLWinShortDropPst_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RREnableAutoUpPrm_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RRPowerDoorReqWinOpenPst_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RRWinShortDropPst_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8ReAirConditionBoxSpecCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RearPositionLightReuseCfg_Val(uint8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RearWiperAndWashDelayTimeCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RwpIntervalTime1DelayCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RwpIntervalTime2DelayCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RwpIntervalTime3DelayCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RwpIntervalTime4DelayCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RwpIntervalTime5DelayCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RwpIntervalTime6DelayCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RwpIntervalTime7DelayCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RwpParkActivationTimeCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RwpServiceTimeCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8RwpStallTimeCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8StaggerTimePrm_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8SwStuckRecoverTimePrm_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8SwStuckTimePrm_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8UINM_LocalSideWinSwActivetime_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8VehRLCM_Val(uint8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8VehicleTypeCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8VoltProtDelayPrm_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8VoltRecoverDelayPrm_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8WndAPCfgSet_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8WndVentilationPst_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8ZcuTypePrm_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8tAjarKeepAwakeCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8tDoorHandleEmergencyCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8tDoorHandleForceCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8tDoorHandleSoftStopCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8tDoorHandleTimeOutCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8tDoorsLockUnlockCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8tFillerCapLockUnlockCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8tIntervalEmgcUnlockCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8tIntervalReverseUnlockCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8tPowerCinchCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8tPowerReleaseCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8tPowerReleaseTimeOutCfg_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gPRM_u8tTrunkUnlockCfg_Val(UInt8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppNvM_SRPrm_vWriteEepMainFunction_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AppNvM_SRPrm_CODE) AppNvM_SRPrm_vWriteEepMainFunction_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
    uint16 au16Tmp[25];
	uint8 au8Tmp_600A[4];
	/*uint8 MaxRuntimePrm_Val = 120u;
	uint8 SwStuckTimePrm_Val = 60u;
	uint8 SwStuckRecoverTimePrm_Val = 5u;
	uint8 IniHoldTimer_Val = 4u;
	uint8 StaggerTimePrm_Val = 1u;
	uint8 MinReverseTimePrm_Val = 0u;
	uint8 FLEnableAutoUpPrm_Val = 1u;
	uint8 FREnableAutoUpPrm_Val = 1u;
	uint8 RLEnableAutoUpPrm_Val = 1u;
	uint8 RREnableAutoUpPrm_Val = 1u;
	uint8 ZcuTypePrm_Val = 0u;
	uint16 OverVoltImmPrm_Val = 18000u;
	uint16 OverVoltPrm_Val = 16000u;
	uint16 OverVoltRecoverPrm_Val = 15600u;
	uint16 UnderVoltImmPrm_Val = 7000u;
	uint16 UnderVoltPrm_Val = 10000u;
	uint16 UnderVoltRecoverPrm_Val = 10600u;
	uint8 VoltProtDelayPrm_Val = 1u;
	uint8 VoltRecoverDelayPrm_Val = 10u;
	uint8 EnaThermalProtPrm_Val = 1u;
	uint32 TempDisableUpPrm_Val = 100u;
	uint32 TempDisableAllPrm_Val = 120u;
	uint32 TempCoolDownPrm_Val = 80u;
	uint16 PositionLightShutDown_Val = 930u;
	uint8 DoorsLockUnlockCfg_Val = 20u;
	uint8 IntervalReverseUnlockCfg_Val = 40u;
	uint8 IntervalEmgcUnlockCfg_Val = 30u;
	uint8 DoorHandleLockUnlockCfg_Val = 30u;
	uint8 DoorHandleEmgcUnlockCfg_Val = 50u;
	uint8 FillerCapUnlockCfg_Val = 20u;
	uint8 FillerCapReleaseCfg_Val = 40u;
	uint8 TrunkUnlockCfg_Val = 40u;
	boolean RearTurnONFrontPositionOFFCfg_Val = 0u;
	boolean ParkLightEnableCfg_Val = 0u;
	uint16 LicencePlateLightShutDown_Val = 930u;
	*/
#if 0
	uint8 MaxRuntimePrm = 120u;
	uint8 SwStuckTimePrm = 60u;
	uint8 SwStuckRecoverTimePrm = 5u;
	uint8 IniHoldTimer = 4u;
	uint8 StaggerTimePrm = 1u;
	uint8 MinReverseTimePrm = 0u;
	uint8 FLEnableAutoUpPrm = 1u;
	uint8 FREnableAutoUpPrm = 1u;
	uint8 RLEnableAutoUpPrm = 1u;
	uint8 RREnableAutoUpPrm = 1u;
	uint8 ZcuTypePrm = 0u;
	uint16 OverVoltImmPrm = 18000u;
	uint16 OverVoltPrm = 16000u;
	uint16 OverVoltRecoverPrm = 15600u;
	uint16 UnderVoltImmPrm = 7000u;
	uint16 UnderVoltPrm = 10000u;
	uint16 UnderVoltRecoverPrm = 10600u;
	uint8 VoltProtDelayPrm = 1u;
	uint8 VoltRecoverDelayPrm = 10u;
	uint8 EnaThermalProtPrm = 1u;
	uint32 TempDisableUpPrm = 100u;
	uint32 TempDisableAllPrm = 120u;
	uint32 TempCoolDownPrm = 80u;
	uint8 PositionLightShutDown = 93u;
	uint8 tDoorsLockUnlockCfg = 20u;
	uint8 tIntervalReverseUnlockCfg = 20u;
	uint8 tIntervalEmgcUnlockCfg = 30u;
	uint8 tDoorHandleSoftStopCfg = 30u;
	uint8 tDoorHandleEmergencyCfg = 50u;
	uint8 tFillerCapLockUnlockCfg = 20u;
	uint8 tTrunkUnlockCfg = 40u;
	boolean PositionLightTimingOFFEnableCfg = 1u;
	boolean PositionLightEnableCfg = 1u;
	boolean TurnLightEnableCfg = 1u;
	boolean RearTurnONRearPositionOFFCfg = 0u;
	boolean ParkLightEnableCfg = 0u;
	uint8 LicencePlateLightShutDown = 93u;
	//uint8 VehicleTypeCfg = 0u;
	boolean ReverseLightEnableCfg = 1u;
	boolean SideBrkLightEnableCfg = 1u;
	boolean CHMSLEnableCfg = 1u;
	boolean RearFogLightEnableCfg = 1u;
	uint8 LocalKeepWakeUpCfg = 5u;
	uint8 tAjarKeepAwakeCfg = 90u;
	uint8 tPowerReleaseCfg = 30u;
	uint8 tPowerCinchCfg = 30u;
	uint8 tPowerReleaseTimeOutCfg = 50u;
	uint8 tDoorHandleForceCfg = 30u;
	uint8 tDoorHandleTimeOutCfg = 20u;
	uint8 PowerDoorCfg = 0u;
	boolean WndVentilationFunCfg = 1u;
	uint8 WndVentilationPst = 20u;
	uint8 WndAPCfgSet = 1u;
	uint8 TrunkMsgOutLampShutdownTime = 15u;
	uint16 HallHighLevel = 2496u;
	uint16 HallLowLevel = 2455u;
	uint8 HallFilterTime = 0u;
	uint8 HallOverTime = 100u;



    uint8 RwpParkActivationTimeCfg = 40u;
    uint8 RwpServiceTimeCfg = 40u;
    uint8 RwpIntervalTime1DelayCfg = 12u;
    uint8 RwpIntervalTime2DelayCfg = 10u;
    uint8 RwpIntervalTime3DelayCfg = 8u;
    uint8 RwpIntervalTime4DelayCfg = 6u;
    uint8 RwpIntervalTime5DelayCfg = 4u;
    uint8 RwpIntervalTime6DelayCfg = 2u;
    uint8 RwpIntervalTime7DelayCfg = 1u;
    uint8 RwpStallTimeCfg = 10u;
    boolean PODCinchFunEnCfgRL = 1u;
    boolean PODCinchFunEnCfgRR = 1u;
    uint8 PODTCinchActv = 20u;
    uint8 PODPowerRelesTWForOverheat = 60u;
    uint8 PODPowerRelesActiCntForOverheat = 10u;
    uint8 PODPowerRelesInhibitForOverheat = 30u;
    uint8 PODCinchTWForOverheat = 60u;
    uint8 PODCinchActiCntForOverheat = 10u;
    uint8 PODCinchInhibitForOverheat = 30u;
    uint8 PODTmrCinchOper = 30u;
    uint8 PODTmrCinchRst = 25u;
    boolean RearWiperPresent = 1u;
    boolean LCK_PowerFillerCapCfg = 0u;
    boolean ChargeLightEnableCfg = 1u;



    Rte_Write_gPRM_u8MaxRuntimePrm_Val(MaxRuntimePrm);
    Rte_Write_gPRM_u8SwStuckTimePrm_Val(SwStuckTimePrm);
    Rte_Write_gPRM_u8SwStuckRecoverTimePrm_Val(SwStuckRecoverTimePrm);
    Rte_Write_gPRM_u8IniHoldTimer_Val(IniHoldTimer);
    Rte_Write_gPRM_u8StaggerTimePrm_Val(StaggerTimePrm);
    Rte_Write_gPRM_u8MinReverseTimePrm_Val(MinReverseTimePrm);
    Rte_Write_gPRM_u8FLEnableAutoUpPrm_Val(FLEnableAutoUpPrm);
    Rte_Write_gPRM_u8FREnableAutoUpPrm_Val(FREnableAutoUpPrm);
    Rte_Write_gPRM_u8RLEnableAutoUpPrm_Val(RLEnableAutoUpPrm);
    Rte_Write_gPRM_u8RREnableAutoUpPrm_Val(RREnableAutoUpPrm);
    Rte_Write_gPRM_u8ZcuTypePrm_Val(ZcuTypePrm);
    Rte_Write_gPRM_u16OverVoltImmPrm_Val(OverVoltImmPrm);
    Rte_Write_gPRM_u16OverVoltPrm_Val(OverVoltPrm);
    Rte_Write_gPRM_u16OverVoltRecoverPrm_Val(OverVoltRecoverPrm);
    Rte_Write_gPRM_u16UnderVoltImmPrm_Val(UnderVoltImmPrm);
    Rte_Write_gPRM_u16UnderVoltPrm_Val(UnderVoltPrm);
    Rte_Write_gPRM_u16UnderVoltRecoverPrm_Val(UnderVoltRecoverPrm);
    Rte_Write_gPRM_u8VoltProtDelayPrm_Val(VoltProtDelayPrm);
    Rte_Write_gPRM_u8VoltRecoverDelayPrm_Val(VoltRecoverDelayPrm);
    Rte_Write_gPRM_u8EnaThermalProtPrm_Val(EnaThermalProtPrm);
    Rte_Write_gPRM_u32TempDisableUpPrm_Val(TempDisableUpPrm);
    Rte_Write_gPRM_u32TempDisableAllPrm_Val(TempDisableAllPrm);
    Rte_Write_gPRM_u32TempCoolDownPrm_Val(TempCoolDownPrm);
    Rte_Write_gPRM_u8PositionLightShutDown_Val(PositionLightShutDown);
    Rte_Write_gPRM_u8tDoorsLockUnlockCfg_Val(tDoorsLockUnlockCfg);
    Rte_Write_gPRM_u8tIntervalReverseUnlockCfg_Val(tIntervalReverseUnlockCfg);
    Rte_Write_gPRM_u8tIntervalEmgcUnlockCfg_Val(tIntervalEmgcUnlockCfg);
    Rte_Write_gPRM_u8tDoorHandleSoftStopCfg_Val(tDoorHandleSoftStopCfg);
    Rte_Write_gPRM_u8tDoorHandleEmergencyCfg_Val(tDoorHandleEmergencyCfg);
    Rte_Write_gPRM_u8tFillerCapLockUnlockCfg_Val(tFillerCapLockUnlockCfg);
    Rte_Write_gPRM_u8tTrunkUnlockCfg_Val(tTrunkUnlockCfg);
    Rte_Write_gPRM_bPositionLightTimingOFFEnableCfg_Val(PositionLightTimingOFFEnableCfg);
    Rte_Write_gPRM_bPositionLightEnableCfg_Val(PositionLightEnableCfg);
    Rte_Write_gPRM_bTurnLightEnableCfg_Val(TurnLightEnableCfg);
    Rte_Write_gPRM_bRearTurnONRearPositionOFFCfg_Val(RearTurnONRearPositionOFFCfg);
    Rte_Write_gPRM_bParkLightEnableCfg_Val(ParkLightEnableCfg);
    Rte_Write_gPRM_u8LicencePlateLightShutDown_Val(LicencePlateLightShutDown);
    Rte_Write_gPRM_u8VehicleTypeCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_F19A);
    Rte_Write_gPRM_bReverseLightEnableCfg_Val(ReverseLightEnableCfg);
    Rte_Write_gPRM_bSideBrkLightEnableCfg_Val(SideBrkLightEnableCfg);
    Rte_Write_gPRM_bCHMSLEnableCfg_Val(CHMSLEnableCfg);
    Rte_Write_gPRM_bRearFogLightEnableCfg_Val(RearFogLightEnableCfg);
    Rte_Write_gPRM_u8LocalKeepWakeUpCfg_Val(LocalKeepWakeUpCfg);
    Rte_Write_gPRM_u8tAjarKeepAwakeCfg_Val(tAjarKeepAwakeCfg);
    Rte_Write_gPRM_u8tPowerReleaseCfg_Val(tPowerReleaseCfg);
    Rte_Write_gPRM_u8tPowerCinchCfg_Val(tPowerCinchCfg);
    Rte_Write_gPRM_u8tPowerReleaseTimeOutCfg_Val(tPowerReleaseTimeOutCfg);
    Rte_Write_gPRM_u8tDoorHandleForceCfg_Val(tDoorHandleForceCfg);
    Rte_Write_gPRM_u8tDoorHandleTimeOutCfg_Val(tDoorHandleTimeOutCfg);
    Rte_Write_gPRM_u8PowerDoorCfg_Val(PowerDoorCfg);
    Rte_Write_gCFG_bWndVentilationFunCfg_Val(WndVentilationFunCfg);
    Rte_Write_gCFG_u8WndVentilationPst_Val(WndVentilationPst);
    Rte_Write_gCFG_u8WndAPCfgSet_Val(WndAPCfgSet);
    //Rte_Write_gPRM_u8TrunkMsgOutLampShutdownTime_Val(TrunkMsgOutLampShutdownTime);
    Rte_Write_gPRM_u16HallHighLevel_Val(HallHighLevel);
    Rte_Write_gPRM_u16HallLowLevel_Val(HallLowLevel);
    Rte_Write_gPRM_u8HallFilterTime_Val(HallFilterTime);
    Rte_Write_gPRM_u8HallOverTime_Val(HallOverTime);




Rte_Write_gPRM_u8RwpParkActivationTimeCfg_Val(RwpParkActivationTimeCfg);
Rte_Write_gPRM_u8RwpServiceTimeCfg_Val(RwpServiceTimeCfg);
Rte_Write_gPRM_u8RwpIntervalTime1DelayCfg_Val(RwpIntervalTime1DelayCfg);
Rte_Write_gPRM_u8RwpIntervalTime2DelayCfg_Val(RwpIntervalTime2DelayCfg);
Rte_Write_gPRM_u8RwpIntervalTime3DelayCfg_Val(RwpIntervalTime3DelayCfg);
Rte_Write_gPRM_u8RwpIntervalTime4DelayCfg_Val(RwpIntervalTime4DelayCfg);
Rte_Write_gPRM_u8RwpIntervalTime5DelayCfg_Val(RwpIntervalTime5DelayCfg);
Rte_Write_gPRM_u8RwpIntervalTime6DelayCfg_Val(RwpIntervalTime6DelayCfg);
Rte_Write_gPRM_u8RwpIntervalTime7DelayCfg_Val(RwpIntervalTime7DelayCfg);
Rte_Write_gPRM_u8RwpStallTimeCfg_Val(RwpStallTimeCfg);
Rte_Write_gPRM_bPODCinchFunEnCfgRL_Val(PODCinchFunEnCfgRL);
Rte_Write_gPRM_bPODCinchFunEnCfgRR_Val(PODCinchFunEnCfgRR);
Rte_Write_gPRM_u8PODTCinchActv_Val(PODTCinchActv);
Rte_Write_gPRM_u8PODPowerRelesTWForOverheat_Val(PODPowerRelesTWForOverheat);
Rte_Write_gPRM_u8PODPowerRelesActiCntForOverheat_Val(PODPowerRelesActiCntForOverheat);
Rte_Write_gPRM_u8PODPowerRelesInhibitForOverheat_Val(PODPowerRelesInhibitForOverheat);
Rte_Write_gPRM_u8PODCinchTWForOverheat_Val(PODCinchTWForOverheat);
Rte_Write_gPRM_u8PODCinchActiCntForOverheat_Val(PODCinchActiCntForOverheat);
Rte_Write_gPRM_u8PODCinchInhibitForOverheat_Val(PODCinchInhibitForOverheat);
Rte_Write_gPRM_u8PODTmrCinchOper_Val(PODTmrCinchOper);
Rte_Write_gPRM_u8PODTmrCinchRst_Val(PODTmrCinchRst);
Rte_Write_gCFG_RearWiperPresent_Val(RearWiperPresent);
//Rte_Write_gRPM_bLCK_PowerFillerCapCfg_Val(LCK_PowerFillerCapCfg);
Rte_Write_gPRM_bChargeLightEnableCfg_Val(ChargeLightEnableCfg);
#endif

    Rte_Write_gPRM_u8VehicleTypeCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_F19A);

//Start add Realease_October
    Rte_Write_gPRM_bPositionLightTimingOFFEnableCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_bPositionLightTimingOFFEnableCfg);
    Rte_Write_gPRM_bParkLightEnableCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_bParkLightEnableCfg);
    Rte_Write_gPRM_bPositionLightEnableCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_bPositionLightEnableCfg);
    Rte_Write_gPRM_bTurnLightEnableCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_bTurnLightEnableCfg);
    Rte_Write_gPRM_bReverseLightEnableCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_bReverseLightEnableCfg);
    Rte_Write_gPRM_bRearFogLightEnableCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_bRearFogLightEnableCfg);
    Rte_Write_gPRM_bChargeLightEnableCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_bChargeLightEnableCfg);
    Rte_Write_gPRM_u8RearPositionLightReuseCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_u8RearPositionLightReuseCfg);
    Rte_Write_gPRM_u8VehRLCM_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_u8VehRLCM);
    Rte_Write_gPRM_bRearTurnLightType_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_bRearTurnLightType);
    Rte_Write_gCFG_bWndVentilationFunCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gCFG_bWndVentilationFunCfg);
    Rte_Write_gPRM_u8WndAPCfgSet_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_u8WndAPCfgSet);
    Rte_Write_gPRM_bPODRelsCinchFunEnCfgRL_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_bPODRelsCinchFunEnCfgRL);
    Rte_Write_gPRM_bPODRelsCinchFunEnCfgRR_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_bPODRelsCinchFunEnCfgRR);
    Rte_Write_gCFG_RearWiperPresent_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gCFG_RearWiperPresent);
    Rte_Write_gCFG_u8ReHVACBoxTyp_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gCFG_u8ReHVACBoxTyp);
    Rte_Write_gCFG_u8LocalSideWinSwType_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gCFG_u8LocalSideWinSwType);
    Rte_Write_gPRM_u8ReAirConditionBoxSpecCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gPRM_u8ReAirConditionBoxSpecCfg);
    Rte_Write_gCFG_u8ReBlowrCtrlTyp_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gCFG_u8ReBlowrCtrlTyp);
    Rte_Write_gCFG_u8ReBlowrCtrlFreqTyp_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gCFG_u8ReBlowrCtrlFreqTyp);
    Rte_Write_gCFG_bReCabinTSnsrAvl_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gCFG_bReCabinTSnsrAvl);
//End add Realease_October
    Rte_Write_gCFG_bRLDoorFramelessGlassCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gCFG_bRLDoorFramelessGlassCfg);
    Rte_Write_gCFG_bRRDoorFramelessGlassCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.bits.gCFG_bRRDoorFramelessGlassCfg);
    Rte_Write_gPRM_u8tDoorsLockUnlockCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gPRM_u8tDoorsLockUnlockCfg);
    Rte_Write_gPRM_u8tIntervalReverseUnlockCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gPRM_u8tIntervalReverseUnlockCfg);
    Rte_Write_gPRM_u8tIntervalEmgcUnlockCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gPRM_u8tIntervalEmgcUnlockCfg);
    Rte_Write_gPRM_u8tPowerReleaseCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gPRM_u8tPowerReleaseCfg);
    Rte_Write_gPRM_u8tPowerCinchCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gPRM_u8tPowerCinchCfg);
    Rte_Write_gPRM_u8tPowerReleaseTimeOutCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gPRM_u8tPowerReleaseTimeOutCfg);
    Rte_Write_gPRM_u8tDoorHandleSoftStopCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gPRM_u8tDoorHandleSoftStopCfg);
    Rte_Write_gPRM_u8tDoorHandleForceCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gPRM_u8tDoorHandleForceCfg);
    Rte_Write_gPRM_u8tDoorHandleEmergencyCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gPRM_u8tDoorHandleEmergencyCfg);
    Rte_Write_gPRM_u8tDoorHandleTimeOutCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gPRM_u8tDoorHandleTimeOutCfg);
    Rte_Write_gPRM_u8tAjarKeepAwakeCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gPRM_u8tAjarKeepAwakeCfg);
    Rte_Write_gPRM_u8tTrunkUnlockCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gPRM_u8tTrunkUnlockCfg);
    Rte_Write_gPRM_u8tFillerCapLockUnlockCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gPRM_u8tFillerCapLockUnlockCfg);
    Rte_Write_gCFG_bLCK_PowerFillerCapCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.bits.gCFG_bLCK_PowerFillerCapCfg);

    au16Tmp[0] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte0 << 8;
    au16Tmp[0] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte1;
    au16Tmp[1] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte2 << 8;
    au16Tmp[1] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte3;
    au16Tmp[2] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte4 << 8;
    au16Tmp[2] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte5;
    au16Tmp[3] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte6 << 8;
    au16Tmp[3] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte7;
    au16Tmp[4] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte8 << 8;
    au16Tmp[4] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte9;
    au16Tmp[5] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte10 << 8;
    au16Tmp[5] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte11;
    au16Tmp[6] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte12 << 8;
    au16Tmp[6] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte13;
    au16Tmp[7] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte14 << 8;
    au16Tmp[7] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte15;
    au16Tmp[8] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte16 << 8;
    au16Tmp[8] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte17;
    au16Tmp[9] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte18 << 8;
    au16Tmp[9] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte19;
    au16Tmp[10] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte20 << 8;
    au16Tmp[10] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte21;
    au16Tmp[11] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte22 << 8;
    au16Tmp[11] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte23;
    au16Tmp[12] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte24 << 8;
    au16Tmp[12] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte25;
    au16Tmp[13] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte26 << 8;
    au16Tmp[13] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte27;
    au16Tmp[14] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte28 << 8;
    au16Tmp[14] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte29;
    au16Tmp[15] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte30 << 8;
    au16Tmp[15] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte31;
    au16Tmp[16] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte32 << 8;
    au16Tmp[16] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte33;
    au16Tmp[17] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte34 << 8;
    au16Tmp[17] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte35;
    au16Tmp[18] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte36 << 8;
    au16Tmp[18] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte37;
    au16Tmp[19] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte38 << 8;
    au16Tmp[19] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte39;
    au16Tmp[20] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte40 << 8;
    au16Tmp[20] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte41;
    au16Tmp[21] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte42 << 8;
    au16Tmp[21] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte43;
    au16Tmp[22] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte44 << 8;
    au16Tmp[22] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte45;
    au16Tmp[23] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte46 << 8;
    au16Tmp[23] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte47;
    au16Tmp[24] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte48 << 8;
    au16Tmp[24] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.bits.gPRM_au16OvrCurrThres_byte49;
    Rte_Write_gPRM_au16OvrCurrThres_Val(au16Tmp);

    au16Tmp[0] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte0 << 8;
    au16Tmp[0] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte1;
    au16Tmp[1] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte2 << 8;
    au16Tmp[1] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte3;
    au16Tmp[2] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte4 << 8;
    au16Tmp[2] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte5;
    au16Tmp[3] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte6 << 8;
    au16Tmp[3] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte7;
    au16Tmp[4] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte8 << 8;
    au16Tmp[4] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte9;
    au16Tmp[5] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte10 << 8;
    au16Tmp[5] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte11;
    au16Tmp[6] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte12 << 8;
    au16Tmp[6] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte13;
    au16Tmp[7] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte14 << 8;
    au16Tmp[7] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte15;
    au16Tmp[8] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte16 << 8;
    au16Tmp[8] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte17;
    au16Tmp[9] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte18 << 8;
    au16Tmp[9] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte19;
    au16Tmp[10] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte20 << 8;
    au16Tmp[10] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte21;
    au16Tmp[11] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte22 << 8;
    au16Tmp[11] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte23;
    au16Tmp[12] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte24 << 8;
    au16Tmp[12] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte25;
    au16Tmp[13] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte26 << 8;
    au16Tmp[13] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte27;
    au16Tmp[14] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte28 << 8;
    au16Tmp[14] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte29;
    au16Tmp[15] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte30 << 8;
    au16Tmp[15] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte31;
    au16Tmp[16] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte32 << 8;
    au16Tmp[16] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte33;
    au16Tmp[17] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte34 << 8;
    au16Tmp[17] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte35;
    au16Tmp[18] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte36 << 8;
    au16Tmp[18] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte37;
    au16Tmp[19] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte38 << 8;
    au16Tmp[19] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte39;
    au16Tmp[20] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte40 << 8;
    au16Tmp[20] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte41;
    au16Tmp[21] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte42 << 8;
    au16Tmp[21] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte43;
    au16Tmp[22] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte44 << 8;
    au16Tmp[22] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte45;
    au16Tmp[23] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte46 << 8;
    au16Tmp[23] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte47;
    au16Tmp[24] = (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte48 << 8;
    au16Tmp[24] += (uint16)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.bits.gPRM_au16OvrCurrDebTime_byte49;
    Rte_Write_gPRM_au16OvrCurrDebTime_Val(au16Tmp);
//Start add Realease_October
    //DID1009
    Rte_Write_gPRM_u8PositionLightShutDown_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1009.bits.gPRM_u8PositionLightShutDown);
    Rte_Write_gPRM_u8LicencePlateLightShutDown_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1009.bits.gPRM_u8LicencePlateLightShutDown);

    //DID1A08
    Rte_Write_gPRM_u8WndVentilationPst_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1A08.bits.gPRM_u8WndVentilationPst);
    Rte_Write_gPRM_u8RLWinShortDropPst_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1A08.bits.gPRM_u8RLWinShortDropPst);
    Rte_Write_gPRM_u8RRWinShortDropPst_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1A08.bits.gPRM_u8RRWinShortDropPst);
    Rte_Write_gPRM_u8RLPowerDoorReqWinOpenPst_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1A08.bits.gPRM_u8RLPowerDoorReqWinOpenPst);
    Rte_Write_gPRM_u8RRPowerDoorReqWinOpenPst_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1A08.bits.gPRM_u8RRPowerDoorReqWinOpenPst);

    //DID220C
    Rte_Write_gPRM_u8RwpParkActivationTimeCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_220C.bits.gPRM_u8RwpParkActivationTimeCfg);
    Rte_Write_gPRM_u8RwpServiceTimeCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_220C.bits.gPRM_u8RwpServiceTimeCfg);
    Rte_Write_gPRM_u8RwpStallTimeCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_220C.bits.gPRM_u8RwpStallTimeCfg);
    Rte_Write_gPRM_u8RearWiperAndWashDelayTimeCfg_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_220C.bits.gPRM_u8RearWiperAndWashDelayTimeCfg);

    //DID2006
    Rte_Write_gPRM_u8PODTCinchActv_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_2006.bits.gPRM_u8PODTCinchActv);
    Rte_Write_gPRM_u8PODPowerRelesTWForOverheat_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_2006.bits.gPRM_u8PODPowerRelesTWForOverheat);
    Rte_Write_gPRM_u8PODPowerRelesActiCntForOverheat_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_2006.bits.gPRM_u8PODPowerRelesActiCntForOverheat);
    Rte_Write_gPRM_u8PODPowerRelesInhibitForOverheat_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_2006.bits.gPRM_u8PODPowerRelesInhibitForOverheat);
    Rte_Write_gPRM_u8PODCinchTWForOverheat_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_2006.bits.gPRM_u8PODCinchTWForOverheat);
    Rte_Write_gPRM_u8PODCinchActiCntForOverheat_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_2006.bits.gPRM_u8PODCinchActiCntForOverheat);
    Rte_Write_gPRM_u8PODCinchInhibitForOverheat_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_2006.bits.gPRM_u8PODCinchInhibitForOverheat);
    Rte_Write_gPRM_u8PODTmrCinchOper_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_2006.bits.gPRM_u8PODTmrCinchOper);
    Rte_Write_gPRM_u8PODTmrCinchRst_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_2006.bits.gPRM_u8PODTmrCinchRst);

    //DID600C
    Rte_Write_gCFG_u8SsmInFunctionConfig_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600C.bits.gCFG_u8SsmInFunctionConfig);
	
	//DID600A
    au8Tmp_600A[0] = (uint8)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600A.bits.gCFG_u8SsmInVariantCoding0_bit0_3;
    au8Tmp_600A[0] += (uint8)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600A.bits.gCFG_u8SsmInVariantCoding0_bit4_7;
    au8Tmp_600A[1] = (uint8)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600A.bits.gCFG_u8SsmInVariantCoding1_bit2;
    au8Tmp_600A[1] += (uint8)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600A.bits.gCFG_u8SsmInVariantCoding1_bit3_4;
    au8Tmp_600A[1] += (uint8)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600A.bits.gCFG_u8SsmInVariantCoding1_bit5;
    au8Tmp_600A[1] += (uint8)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600A.bits.gCFG_u8SsmInVariantCoding1_bit6_7;
    au8Tmp_600A[2] = (uint8)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600A.bits.gCFG_u8SsmInVariantCoding2_bit2_4;
    au8Tmp_600A[2] += (uint8)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600A.bits.gCFG_u8SsmInVariantCoding2_bit5_7;
    au8Tmp_600A[3] = (uint8)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600A.bits.gCFG_u8SsmInVariantCoding3_bit4_6;
    au8Tmp_600A[3] += (uint8)app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600A.bits.gCFG_u8SsmInVariantCoding3_bit7;
    Rte_Write_gCFG_u8SsmInVariantCoding_Val(au8Tmp_600A);

    //DID1F03
    Rte_Write_gPLG_u8SpindleHeatPretectFactor_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1F03.bits.gPLG_u8SpindleHeatPretectFactor);
    Rte_Write_gPLG_u8PowerReleasMaxActiTime_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1F03.bits.gPLG_u8PowerReleasMaxActiTime);
    Rte_Write_gPLG_u8CinchingMaxActiTime_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1F03.bits.gPLG_u8CinchingMaxActiTime);
    Rte_Write_gPLG_u8PowerReleasInhibitTime_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1F03.bits.gPLG_u8PowerReleasInhibitTime);
    Rte_Write_gPLG_u8CinchingInhibitTime_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1F03.bits.gPLG_u8CinchingInhibitTime);
    Rte_Write_gPLG_u8SpindleMaxActiTime_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1F03.bits.gPLG_u8SpindleMaxActiTime);
    Rte_Write_gPLG_u8SpindleMaxInteActiTim_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1F03.bits.gPLG_u8SpindleMaxInteActiTim);
    Rte_Write_gPLG_u8OpenTrunkSpeedLimit_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1F03.bits.gPLG_u8OpenTrunkSpeedLimit);
    Rte_Write_gPLG_u8SecondPosition_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1F03.bits.gPLG_u8SecondPosition);

    //DID350D
    Rte_Write_gPRM_u8UINM_LocalSideWinSwActivetime_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_350D.bits.gPRM_u8UINM_LocalSideWinSwActivetime);
	
//End add Realease_October
	/*
    Rte_Write_gPRM_u8MaxRuntimePrm_Val(MaxRuntimePrm_Val);
	Rte_Write_gPRM_u8SwStuckTimePrm_Val(SwStuckTimePrm_Val);
	Rte_Write_gPRM_u8SwStuckRecoverTimePrm_Val(SwStuckRecoverTimePrm_Val);
	Rte_Write_gPRM_u8IniHoldTimer_Val(IniHoldTimer_Val);
	Rte_Write_gPRM_u8StaggerTimePrm_Val(StaggerTimePrm_Val);
	Rte_Write_gPRM_u8MinReverseTimePrm_Val(MinReverseTimePrm_Val);
	Rte_Write_gPRM_u8FLEnableAutoUpPrm_Val(FLEnableAutoUpPrm_Val);
	Rte_Write_gPRM_u8FREnableAutoUpPrm_Val(FREnableAutoUpPrm_Val);
	Rte_Write_gPRM_u8RLEnableAutoUpPrm_Val(RLEnableAutoUpPrm_Val);
	Rte_Write_gPRM_u8RREnableAutoUpPrm_Val(RREnableAutoUpPrm_Val);
	Rte_Write_gPRM_u8ZcuTypePrm_Val(ZcuTypePrm_Val);
	Rte_Write_gPRM_u16OverVoltImmPrm_Val(OverVoltImmPrm_Val);
	Rte_Write_gPRM_u16OverVoltPrm_Val(OverVoltPrm_Val);
	Rte_Write_gPRM_u16OverVoltRecoverPrm_Val(OverVoltRecoverPrm_Val);
	Rte_Write_gPRM_u16UnderVoltImmPrm_Val(UnderVoltImmPrm_Val);
	Rte_Write_gPRM_u16UnderVoltPrm_Val(UnderVoltPrm_Val);
	Rte_Write_gPRM_u16UnderVoltRecoverPrm_Val(UnderVoltRecoverPrm_Val);
	Rte_Write_gPRM_u8VoltProtDelayPrm_Val(VoltProtDelayPrm_Val);
	Rte_Write_gPRM_u8VoltRecoverDelayPrm_Val(VoltRecoverDelayPrm_Val);
	Rte_Write_gPRM_u8EnaThermalProtPrm_Val(EnaThermalProtPrm_Val);
	Rte_Write_gPRM_u32TempDisableUpPrm_Val(TempDisableUpPrm_Val);
	Rte_Write_gPRM_u32TempDisableAllPrm_Val(TempDisableAllPrm_Val);
	Rte_Write_gPRM_u32TempCoolDownPrm_Val(TempCoolDownPrm_Val);
	Rte_Write_gPRM_u16PositionLightShutDown_Val(PositionLightShutDown_Val);
	Rte_Write_gPRM_u8DoorsLockUnlockCfg_Val(DoorsLockUnlockCfg_Val);
	Rte_Write_gPRM_u8IntervalReverseUnlockCfg_Val(IntervalReverseUnlockCfg_Val);
	Rte_Write_gPRM_u8IntervalEmgcUnlockCfg_Val(IntervalEmgcUnlockCfg_Val);
	Rte_Write_gPRM_u8DoorHandleLockUnlockCfg_Val(DoorHandleLockUnlockCfg_Val);
	Rte_Write_gPRM_u8DoorHandleEmgcUnlockCfg_Val(DoorHandleEmgcUnlockCfg_Val);
	Rte_Write_gPRM_u8FillerCapUnlockCfg_Val(FillerCapUnlockCfg_Val);
	Rte_Write_gPRM_u8FillerCapReleaseCfg_Val(FillerCapReleaseCfg_Val);
	Rte_Write_gPRM_u8TrunkUnlockCfg_Val(TrunkUnlockCfg_Val);
	Rte_Write_gPRM_bRearTurnONFrontPositionOFFCfg_Val(RearTurnONFrontPositionOFFCfg_Val);
	Rte_Write_gPRM_bParkLightEnableCfg_Val(ParkLightEnableCfg_Val);
	Rte_Write_gPRM_u16LicencePlateLightShutDown_Val(LicencePlateLightShutDown_Val);
	*/
}


#define AppNvM_SRPrm_STOP_SEC_CODE
#include "AppNvM_SRPrm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



#if 0
/***  Start of saved code (symbol: documentation area:AppNvM_SRPrm_vReadEepMainFunction_10ms_doc)  **********/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:AppNvM_SRPrm_vReadEepMainFunction_10ms)  *********/


/***  End of saved code  ************************************************************************************/
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: Rule2.7
     Reason:     The parameter are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

*/
