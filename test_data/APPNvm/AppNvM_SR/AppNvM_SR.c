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
 *             File:  AppNvM_SR.c
 *           Config:  Platform_TC399.dpa
 *        SW-C Type:  AppNvM_SR
 *
 *        Generator:  MICROSAR RTE Generator Version 4.27.0
 *                    RTE Core Version 1.27.0
 *          License:  CBD2101052
 *
 *      Description:  C-Code implementation template for SW-C <AppNvM_SR>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_AppNvM_SR.h"
#include "NvM_Types.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "AppNvM_Block.h"
#include "AppNvM_Api.h"
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
 * SInt8: Integer in interval [-128...127]
 * UInt16: Integer in interval [0...65535]
 * UInt32: Integer in interval [0...4294967295]
 * UInt8: Integer in interval [0...255]
 * UInt8: Integer in interval [0...255]
 *
 * Array Types:
 * ============
 * rt_Array_SInt8_160: Array with 160 element(s) of type SInt8
 * rt_Array_UInt8_1: Array with 1 element(s) of type UInt8
 * rt_Array_UInt8_10: Array with 10 element(s) of type UInt8
 * rt_Array_UInt8_128: Array with 128 element(s) of type UInt8
 * rt_Array_UInt8_16: Array with 16 element(s) of type UInt8
 * rt_Array_UInt8_17: Array with 17 element(s) of type UInt8
 * rt_Array_UInt8_18: Array with 18 element(s) of type UInt8
 * rt_Array_UInt8_24: Array with 24 element(s) of type UInt8
 * rt_Array_UInt8_240: Array with 240 element(s) of type UInt8
 * rt_Array_UInt8_3: Array with 3 element(s) of type UInt8
 * rt_Array_UInt8_4: Array with 4 element(s) of type UInt8
 * rt_Array_UInt8_50: Array with 50 element(s) of type UInt8
 * rt_Array_UInt8_6: Array with 6 element(s) of type UInt8
 * rt_Array_UInt8_6: Array with 6 element(s) of type UInt8
 * rt_Array_UInt8_77: Array with 77 element(s) of type UInt8
 * rt_Array_UInt8_8: Array with 8 element(s) of type UInt8
 *
 *********************************************************************************************************************/


#define AppNvM_SR_START_SEC_CODE
#include "AppNvM_SR_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppNvM_SR_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppNvM_SR_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AppNvM_SR_CODE) AppNvM_SR_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppNvM_SR_Init
 *********************************************************************************************************************/

    uint8 i = 0;

    for (i = 1u; i < (uint8)NvM_WriteBlockMAX; i++)
    {
       (void)NvM_SetRamBlockStatus(NvM_WriteBlockCfg[i].info.NvMBlockID, TRUE);
    }
    // AppNvM_SR_vReadEepMainFunction_10ms();
    Rte_Write_gNVM_bPbcinDataStorageValid1_Val(1);
    Rte_Write_gNVM_bPbcinDataStorageValid2_Val(1);
    Rte_Write_gNVM_bPbcinDataStorageValid3_Val(1);
    Rte_Write_gNVM_bSsminDataStorageValid_Val(1);

	(void)Rte_Write_gNVM_u8PbcinDataStorageReadArea1_a_Val(app_EPB_Area1_RAM_Mirror.gNVM_u8PbcinDataStorageReadArea1_a);
	(void)Rte_Write_gNVM_u8PbcinDataStorageReadArea2_a_Val(app_EPB_Area2_RAM_Mirror.gNVM_u8PbcinDataStorageReadArea2_a);
	(void)Rte_Write_gNVM_u8PbcinDataStorageReadArea3_a_Val(app_EPB_Area3_RAM_Mirror.gNVM_u8PbcinDataStorageReadArea3_a);
	(void)Rte_Write_gNVM_u8SsminDataStorageRead_a_Val(app_SSM_Area1_RAM_Mirror.gNVM_u8SsminDataStorageRead_a);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppNvM_SR_vReadEepMainFunction_10ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_gAppDiag_0110_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_0110Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_0120_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_77
 *   Std_ReturnType Rte_Read_gAppDiag_0120Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_0203_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_16
 *   Std_ReturnType Rte_Read_gAppDiag_0203Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_0206_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_4
 *   Std_ReturnType Rte_Read_gAppDiag_0206Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_1009_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_6
 *   Std_ReturnType Rte_Read_gAppDiag_1009Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_1809_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_16
 *   Std_ReturnType Rte_Read_gAppDiag_1809Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_1A08_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_8
 *   Std_ReturnType Rte_Read_gAppDiag_1A08Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_1F03_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_16
 *   Std_ReturnType Rte_Read_gAppDiag_1F03Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_2006_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_16
 *   Std_ReturnType Rte_Read_gAppDiag_2006Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_220C_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_8
 *   Std_ReturnType Rte_Read_gAppDiag_220CCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_3205_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_24
 *   Std_ReturnType Rte_Read_gAppDiag_3205Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_3206_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_50
 *   Std_ReturnType Rte_Read_gAppDiag_3206Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_3207_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_50
 *   Std_ReturnType Rte_Read_gAppDiag_3207Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_350D_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_4
 *   Std_ReturnType Rte_Read_gAppDiag_350DCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_600A_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_4
 *   Std_ReturnType Rte_Read_gAppDiag_600ACnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_600C_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_1
 *   Std_ReturnType Rte_Read_gAppDiag_600CCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_C300_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_16
 *   Std_ReturnType Rte_Read_gAppDiag_C300Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_C301_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_10
 *   Std_ReturnType Rte_Read_gAppDiag_C301Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_F102_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_17
 *   Std_ReturnType Rte_Read_gAppDiag_F102Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_F103_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_50
 *   Std_ReturnType Rte_Read_gAppDiag_F103Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_F184_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_10
 *   Std_ReturnType Rte_Read_gAppDiag_F184Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_F190_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_17
 *   Std_ReturnType Rte_Read_gAppDiag_F190Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_F199_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_4
 *   Std_ReturnType Rte_Read_gAppDiag_F199Cnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_F19A_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gAppDiag_F19ACnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gEDH_u16RLDoorHandleBigPosition_Val(UInt16 *data)
 *   Std_ReturnType Rte_Read_gEDH_u16RLDoorHandlePosition_Val(UInt16 *data)
 *   Std_ReturnType Rte_Read_gEDH_u16RLDoorHandleSmallPosition_Val(UInt16 *data)
 *   Std_ReturnType Rte_Read_gEDH_u16RRDoorHandleBigPosition_Val(UInt16 *data)
 *   Std_ReturnType Rte_Read_gEDH_u16RRDoorHandlePosition_Val(UInt16 *data)
 *   Std_ReturnType Rte_Read_gEDH_u16RRDoorHandleSmallPosition_Val(UInt16 *data)
 *   Std_ReturnType Rte_Read_gEDH_u8RLDoorHandleBigPositionWrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gEDH_u8RLDoorHandlePositionWrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gEDH_u8RLDoorHandleSmallPositionWrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gEDH_u8RRDoorHandleBigPositionWrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gEDH_u8RRDoorHandlePositionWrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gEDH_u8RRDoorHandleSmallPositionWrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gEPB_u8PbcoutDataStorageArea1WrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gEPB_u8PbcoutDataStorageArea2WrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gEPB_u8PbcoutDataStorageArea3WrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gEPB_u8PbcoutDataStorageWriteArea1_a_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_8
 *   Std_ReturnType Rte_Read_gEPB_u8PbcoutDataStorageWriteArea2_a_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_8
 *   Std_ReturnType Rte_Read_gEPB_u8PbcoutDataStorageWriteArea3_a_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_240
 *   Std_ReturnType Rte_Read_gEPB_u8SsmoutDataStorageWrite_a_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_128
 *   Std_ReturnType Rte_Read_gEPB_u8SsmoutDataStorageWrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gSLC_s8SlcEepBlock_FRL_Val(SInt8 *data)
 *     Argument data: SInt8* is of type rt_Array_SInt8_160
 *   Std_ReturnType Rte_Read_gSLC_s8SlcEepBlock_RR_Val(SInt8 *data)
 *     Argument data: SInt8* is of type rt_Array_SInt8_160
 *   Std_ReturnType Rte_Read_gSLC_u8FRLEEWrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gSLC_u8FRLEEWrtCnt2_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gSLC_u8RREEWrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gSLC_u8RREEWrtCnt2_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gSLC_u8SlcEepBlock2_FRL_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_18
 *   Std_ReturnType Rte_Read_gSLC_u8SlcEepBlock2_RR_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_18
 *   Std_ReturnType Rte_Read_gUxFvM_u8FvMTripCntBlock_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_4
 *   Std_ReturnType Rte_Read_gUxFvM_u8FvMTripCntBlockWrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gUxSecOC_u8SecOCBlock_Val(UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_3
 *   Std_ReturnType Rte_Read_gUxSecOC_u8SecOCBlockWrtCnt_Val(UInt8 *data)
 *   Std_ReturnType Rte_Read_gWND_bRLTPflg_Val(Boolean *data)
 *   Std_ReturnType Rte_Read_gWND_bRRTPflg_Val(Boolean *data)
 *   Std_ReturnType Rte_Read_gWND_u32RLMotorTemperature_Val(UInt32 *data)
 *   Std_ReturnType Rte_Read_gWND_u32RRMotorTemperature_Val(UInt32 *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppNvM_SR_vReadEepMainFunction_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AppNvM_SR_CODE) AppNvM_SR_vReadEepMainFunction_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppNvM_SR_vReadEepMainFunction_10ms
 *********************************************************************************************************************/
	uint8 res;
  /*************************************************
  * Direct Function Accesses
  *************************************************/
	Dcm_SesCtrlType tmp_sessionCtrlType;
	Dcm_GetSesCtrlType(&tmp_sessionCtrlType);

	if(tmp_sessionCtrlType == 02)
	{
		/* Donothing */
	}
	else
	{

	/***********************************************App*Interfaces********************************************************/
		(void)Rte_Write_gNVM_u16RLDoorHandlePosition_Val(app_App_Small_Blk0_RAM_Mirror.gNVM_u16RLDoorHandlePosition);
		(void)Rte_Write_gNVM_u16RLDoorHandleBigPosition_Val(app_App_Small_Blk0_RAM_Mirror.gNVM_u16RLDoorHandleBigPosition);
		(void)Rte_Write_gNVM_u16RLDoorHandleSmallPosition_Val(app_App_Small_Blk0_RAM_Mirror.gNVM_u16RLDoorHandleSmallPosition);
		(void)Rte_Write_gNVM_u16RRDoorHandlePosition_Val(app_App_Small_Blk0_RAM_Mirror.gNVM_u16RRDoorHandlePosition);
		(void)Rte_Write_gNVM_u16RRDoorHandleBigPosition_Val(app_App_Small_Blk0_RAM_Mirror.gNVM_u16RRDoorHandleBigPosition);
		(void)Rte_Write_gNVM_u16RRDoorHandleSmallPosition_Val(app_App_Small_Blk0_RAM_Mirror.gNVM_u16RRDoorHandleSmallPosition);
#if 0
		(void)Rte_Write_gNVM_s8SlcEepBlock_FRL_Val(app_App_Medium_Blk0_RAM_Mirror.gNVM_s8SlcEepBlock_FRL);
		(void)Rte_Write_gNVM_u8SlcEepBlock2_FRL_Val(app_App_Medium_Blk0_RAM_Mirror.gNVM_u8SlcEepBlock2_FRL);
		(void)Rte_Write_gNVM_au8SlcEepBlock_RR_Val(app_App_Medium_Blk1_RAM_Mirror.gNVM_au8SlcEepBlock_RR);
		(void)Rte_Write_gNVM_au8SlcEepBlock2_RR_Val(app_App_Medium_Blk1_RAM_Mirror.gNVM_au8SlcEepBlock2_RR);
#endif
		(void)Rte_Write_gAppNvM_1809_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.DID1809);
		(void)Rte_Write_gAppNvM_C300_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.C300);
		(void)Rte_Write_gAppNvM_F19A_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_F19A);
		(void)Rte_Write_gAppNvM_3206_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.DID3206);
		(void)Rte_Write_gAppNvM_3207_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.DID3207);
		(void)Rte_Write_gAppNvM_F190_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_F190.DIDF190);
//Start add Realease_October
		(void)Rte_Write_gAppNvM_1009_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1009.DID1009);
		(void)Rte_Write_gAppNvM_1A08_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1A08.DID1A08);
		(void)Rte_Write_gAppNvM_2006_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_2006.DID2006);
		(void)Rte_Write_gAppNvM_600C_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600C.DID600C);
		(void)Rte_Write_gAppNvM_600A_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600A.DID600A);
		(void)Rte_Write_gAppNvM_1F03_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1F03.DID1F03);
		(void)Rte_Write_gAppNvM_350D_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_350D.DID350D);
		(void)Rte_Write_gAppNvM_220C_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_220C.DID220C);
		(void)Rte_Write_gAppNvM_C301_Val(app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C301);
        (void)Rte_Write_gAppNvM_F102_Val(app_App_Small_Blk0_RAM_Mirror.gAppNvM_F102);
        (void)Rte_Write_gAppNvM_F103_Val(app_App_Small_Blk0_RAM_Mirror.gAppNvM_F103);
        (void)Rte_Write_gAppNvM_0203_Val(app_App_Small_Blk0_RAM_Mirror.gAppNvM_0203);
        (void)Rte_Write_gAppNvM_0206_Val(app_App_Small_Blk0_RAM_Mirror.gAppNvM_0206);
        (void)Rte_Write_gAppNvM_0110_Val(app_App_Small_Blk0_RAM_Mirror.gAppNvM_0110);
        (void)Rte_Write_gAppNvM_3205_Val(app_App_Small_Blk0_RAM_Mirror.gAppNvM_3205);
        (void)Rte_Write_gAppNvM_0120_Val(app_App_Small_Blk0_RAM_Mirror.gAppNvM_0120);
        (void)Rte_Write_gAppNvM_F184_Val(app_App_Small_Blk0_RAM_Mirror.gAppNvM_F184);
        (void)Rte_Write_gAppNvM_F199_Val(app_App_Small_Blk0_RAM_Mirror.gAppNvM_F199);
//End add Realease_October
		(void)Rte_Write_gNVM_u8SecOCBlock_Val(app_NvM_SecOC_RAM_Mirror.gNvM_SecOC);
		(void)Rte_Write_gNVM_u8FvMTripCntBlock_Val(app_NvM_FvM_TripCnt_RAM_Mirror.gNvM_FvM_TripCnt);

	/**************************************EPB interface******************************************************************/
		(void)NvM_SetRamBlockStatus(NvM_WriteBlockCfg[EPB_Area1].info.NvMBlockID, TRUE);
		(void)NvM_SetRamBlockStatus(NvM_WriteBlockCfg[EPB_Area2].info.NvMBlockID, TRUE);
		(void)NvM_SetRamBlockStatus(NvM_WriteBlockCfg[EPB_Area3].info.NvMBlockID, TRUE);
		(void)NvM_SetRamBlockStatus(NvM_WriteBlockCfg[SSM_Area1].info.NvMBlockID, TRUE);

		res = EEP_u8GetWriteBlockStatus(EPB_Area1);
		if(NVM_REQ_NOT_OK == res || NVM_REQ_INTEGRITY_FAILED == res)
		{
			/*the validity information : InValid*/
			Rte_Write_gNVM_bPbcinDataStorageValid1_Val(0);
		}
		else
		{
			/*the validity information : Valid*/
			Rte_Write_gNVM_bPbcinDataStorageValid1_Val(1);
		}

		res = EEP_u8GetWriteBlockStatus(EPB_Area2);
		if(NVM_REQ_NOT_OK == res || NVM_REQ_INTEGRITY_FAILED == res)
		{
			/*the validity information : InValid*/
			Rte_Write_gNVM_bPbcinDataStorageValid2_Val(0);
		}
		else
		{
			/*the validity information : Valid*/
			Rte_Write_gNVM_bPbcinDataStorageValid2_Val(1);
		}

		res = EEP_u8GetWriteBlockStatus(EPB_Area3);
		if(NVM_REQ_NOT_OK == res || NVM_REQ_INTEGRITY_FAILED == res)
		{
			/*the validity information : InValid*/
			Rte_Write_gNVM_bPbcinDataStorageValid3_Val(0);
		}
		else
		{
			/*the validity information : Valid*/
			Rte_Write_gNVM_bPbcinDataStorageValid3_Val(1);
		}

		res = EEP_u8GetWriteBlockStatus(SSM_Area1);
		if(NVM_REQ_NOT_OK == res || NVM_REQ_INTEGRITY_FAILED == res)
		{
			/*the validity information : InValid*/
			Rte_Write_gNVM_bSsminDataStorageValid_Val(0);
		}
		else
		{
			/*the validity information : Valid*/
			Rte_Write_gNVM_bSsminDataStorageValid_Val(1);
		}

		(void)Rte_Write_gNVM_u8PbcinDataStorageReadArea1_a_Val(app_EPB_Area1_RAM_Mirror.gNVM_u8PbcinDataStorageReadArea1_a);
		(void)Rte_Write_gNVM_u8PbcinDataStorageReadArea2_a_Val(app_EPB_Area2_RAM_Mirror.gNVM_u8PbcinDataStorageReadArea2_a);
		(void)Rte_Write_gNVM_u8PbcinDataStorageReadArea3_a_Val(app_EPB_Area3_RAM_Mirror.gNVM_u8PbcinDataStorageReadArea3_a);
		(void)Rte_Write_gNVM_u8SsminDataStorageRead_a_Val(app_SSM_Area1_RAM_Mirror.gNVM_u8SsminDataStorageRead_a);
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppNvM_SR_vWriteEepMainFunction_10ms
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
 *   Std_ReturnType Rte_Write_gAppNvM_0110_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gAppNvM_0120_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_77
 *   Std_ReturnType Rte_Write_gAppNvM_0203_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_16
 *   Std_ReturnType Rte_Write_gAppNvM_0206_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_4
 *   Std_ReturnType Rte_Write_gAppNvM_1009_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_6
 *   Std_ReturnType Rte_Write_gAppNvM_1809_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_16
 *   Std_ReturnType Rte_Write_gAppNvM_1A08_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_8
 *   Std_ReturnType Rte_Write_gAppNvM_1F03_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_16
 *   Std_ReturnType Rte_Write_gAppNvM_2006_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_16
 *   Std_ReturnType Rte_Write_gAppNvM_220C_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_8
 *   Std_ReturnType Rte_Write_gAppNvM_3205_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_24
 *   Std_ReturnType Rte_Write_gAppNvM_3206_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_50
 *   Std_ReturnType Rte_Write_gAppNvM_3207_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_50
 *   Std_ReturnType Rte_Write_gAppNvM_350D_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_4
 *   Std_ReturnType Rte_Write_gAppNvM_600A_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_4
 *   Std_ReturnType Rte_Write_gAppNvM_600C_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_1
 *   Std_ReturnType Rte_Write_gAppNvM_C300_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_16
 *   Std_ReturnType Rte_Write_gAppNvM_C301_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_10
 *   Std_ReturnType Rte_Write_gAppNvM_F102_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_17
 *   Std_ReturnType Rte_Write_gAppNvM_F103_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_50
 *   Std_ReturnType Rte_Write_gAppNvM_F184_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_10
 *   Std_ReturnType Rte_Write_gAppNvM_F190_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_17
 *   Std_ReturnType Rte_Write_gAppNvM_F199_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_4
 *   Std_ReturnType Rte_Write_gAppNvM_F19A_Val(UInt8 data)
 *   Std_ReturnType Rte_Write_gNVM_bPbcinDataStorageValid1_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gNVM_bPbcinDataStorageValid2_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gNVM_bPbcinDataStorageValid3_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gNVM_bRLTPflg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gNVM_bRLWinShrtDrpFlg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gNVM_bRRTPflg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gNVM_bRRWinShrtDrpFlg_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gNVM_bSsminDataStorageValid_Val(Boolean data)
 *   Std_ReturnType Rte_Write_gNVM_s8SlcEepBlock_FRL_Val(const SInt8 *data)
 *     Argument data: SInt8* is of type rt_Array_SInt8_160
 *   Std_ReturnType Rte_Write_gNVM_u16RLDoorHandleBigPosition_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gNVM_u16RLDoorHandlePosition_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gNVM_u16RLDoorHandleSmallPosition_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gNVM_u16RRDoorHandleBigPosition_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gNVM_u16RRDoorHandlePosition_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gNVM_u16RRDoorHandleSmallPosition_Val(UInt16 data)
 *   Std_ReturnType Rte_Write_gNVM_u32RLMotorTemperature_Val(UInt32 data)
 *   Std_ReturnType Rte_Write_gNVM_u32RRMotorTemperature_Val(UInt32 data)
 *   Std_ReturnType Rte_Write_gNVM_u8FvMTripCntBlock_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_4
 *   Std_ReturnType Rte_Write_gNVM_u8PbcinDataStorageReadArea1_a_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_8
 *   Std_ReturnType Rte_Write_gNVM_u8PbcinDataStorageReadArea2_a_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_8
 *   Std_ReturnType Rte_Write_gNVM_u8PbcinDataStorageReadArea3_a_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_240
 *   Std_ReturnType Rte_Write_gNVM_u8SecOCBlock_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_3
 *   Std_ReturnType Rte_Write_gNVM_u8SsminDataStorageRead_a_Val(const UInt8 *data)
 *     Argument data: UInt8* is of type rt_Array_UInt8_128
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppNvM_SR_vWriteEepMainFunction_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AppNvM_SR_CODE) AppNvM_SR_vWriteEepMainFunction_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppNvM_SR_vWriteEepMainFunction_10ms
 *********************************************************************************************************************/
	 uint8 Temp_u8,i,res;
	 Dcm_SesCtrlType tmp_sessionCtrlType;
	 Dcm_GetSesCtrlType(&tmp_sessionCtrlType);

		if(tmp_sessionCtrlType == 02)
		{
			/* Donothing */
		}
		else
		{
			/*******************************************************App*Interfaces**************************************************************************/
			static uint8 tmp_gEDH_u8RLDoorHandlePositionWrtCnt_old = 0;
			(void)Rte_Read_gEDH_u8RLDoorHandlePositionWrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_gEDH_u8RLDoorHandlePositionWrtCnt_old)
			{
				(void)Rte_Read_gEDH_u16RLDoorHandlePosition_Val(&app_App_Small_Blk0_RAM_Mirror.gNVM_u16RLDoorHandlePosition);
				NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
				tmp_gEDH_u8RLDoorHandlePositionWrtCnt_old = Temp_u8;
			}

			static uint8 tmp_gEDH_u8RLDoorHandleBigPositionWrtCnt_old = 0;
			(void)Rte_Read_gEDH_u8RLDoorHandleBigPositionWrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_gEDH_u8RLDoorHandleBigPositionWrtCnt_old)
			{
				(void)Rte_Read_gEDH_u16RLDoorHandleBigPosition_Val(&app_App_Small_Blk0_RAM_Mirror.gNVM_u16RLDoorHandleBigPosition);
				NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
				tmp_gEDH_u8RLDoorHandleBigPositionWrtCnt_old = Temp_u8;
			}

			static uint8 tmp_gEDH_u8RLDoorHandleSmallPositionWrtCnt_old = 0;
			(void)Rte_Read_gEDH_u8RLDoorHandleSmallPositionWrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_gEDH_u8RLDoorHandleSmallPositionWrtCnt_old)
			{
				(void)Rte_Read_gEDH_u16RLDoorHandleSmallPosition_Val(&app_App_Small_Blk0_RAM_Mirror.gNVM_u16RLDoorHandleSmallPosition);
				NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
				tmp_gEDH_u8RLDoorHandleSmallPositionWrtCnt_old = Temp_u8;
			}

			static uint8 tmp_gEDH_u8RRDoorHandlePositionWrtCnt_old = 0;
			(void)Rte_Read_gEDH_u8RRDoorHandlePositionWrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_gEDH_u8RRDoorHandlePositionWrtCnt_old)
			{
				(void)Rte_Read_gEDH_u16RRDoorHandlePosition_Val(&app_App_Small_Blk0_RAM_Mirror.gNVM_u16RRDoorHandlePosition);
				NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
				tmp_gEDH_u8RRDoorHandlePositionWrtCnt_old = Temp_u8;
			}

			static uint8 tmp_gEDH_u8RRDoorHandleBigPositionWrtCnt_old = 0;
			(void)Rte_Read_gEDH_u8RRDoorHandleBigPositionWrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_gEDH_u8RRDoorHandleBigPositionWrtCnt_old)
			{
				(void)Rte_Read_gEDH_u16RRDoorHandleBigPosition_Val(&app_App_Small_Blk0_RAM_Mirror.gNVM_u16RRDoorHandleBigPosition);
				NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
				tmp_gEDH_u8RRDoorHandleBigPositionWrtCnt_old = Temp_u8;
			}

			static uint8 tmp_gEDH_u8RRDoorHandleSmallPositionWrtCnt_old = 0;
			(void)Rte_Read_gEDH_u8RRDoorHandleSmallPositionWrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_gEDH_u8RRDoorHandleSmallPositionWrtCnt_old)
			{
				(void)Rte_Read_gEDH_u16RRDoorHandleSmallPosition_Val(&app_App_Small_Blk0_RAM_Mirror.gNVM_u16RRDoorHandleSmallPosition);
				NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
				tmp_gEDH_u8RRDoorHandleSmallPositionWrtCnt_old = Temp_u8;
			}

			static uint8 tmp_gSLC_u8FRLEEWrtCnt_old = 0;
			(void)Rte_Read_gSLC_u8FRLEEWrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_gSLC_u8FRLEEWrtCnt_old)
			{
				(void)Rte_Read_gSLC_s8SlcEepBlock_FRL_Val(&app_App_Medium_Blk0_RAM_Mirror.gNVM_s8SlcEepBlock_FRL);
				NvM_WriteBlockCfg[App_Medium_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
				tmp_gSLC_u8FRLEEWrtCnt_old = Temp_u8;
			}

			static uint8 tmp_gSLC_u8FRLEEWrtCnt2_old = 0;
			(void)Rte_Read_gSLC_u8FRLEEWrtCnt2_Val(&Temp_u8);
			if(Temp_u8 != tmp_gSLC_u8FRLEEWrtCnt2_old)
			{
				(void)Rte_Read_gSLC_u8SlcEepBlock2_FRL_Val(&app_App_Medium_Blk0_RAM_Mirror.gNVM_u8SlcEepBlock2_FRL);
				NvM_WriteBlockCfg[App_Medium_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
				tmp_gSLC_u8FRLEEWrtCnt2_old = Temp_u8;
			}

			static uint8 tmp_gSLC_u8RREEWrtCnt_old = 0;
			(void)Rte_Read_gSLC_u8RREEWrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_gSLC_u8RREEWrtCnt_old)
			{
				(void)Rte_Read_gSLC_s8SlcEepBlock_RR_Val(&app_App_Medium_Blk1_RAM_Mirror.gNVM_au8SlcEepBlock_RR);
				NvM_WriteBlockCfg[App_Medium_Blk1].flg.NvMWriteEnableFlg = (boolean)TRUE;
				tmp_gSLC_u8RREEWrtCnt_old = Temp_u8;
			}

			static uint8 tmp_gSLC_u8RREEWrtCnt2_old = 0;
			(void)Rte_Read_gSLC_u8RREEWrtCnt2_Val(&Temp_u8);
			if(Temp_u8 != tmp_gSLC_u8RREEWrtCnt2_old)
			{
				(void)Rte_Read_gSLC_u8SlcEepBlock2_RR_Val(&app_App_Medium_Blk1_RAM_Mirror.gNVM_au8SlcEepBlock2_RR);
				NvM_WriteBlockCfg[App_Medium_Blk1].flg.NvMWriteEnableFlg = (boolean)TRUE;
				tmp_gSLC_u8RREEWrtCnt2_old = Temp_u8;
			}

            static uint8 tmp_gAppDiag_1809Cnt_old = 0;
            (void)Rte_Read_gAppDiag_1809Cnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_1809Cnt_old)
            {
                (void)Rte_Read_gAppDiag_1809_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1809.DID1809);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_1809Cnt_old = Temp_u8;
            }

            static uint8 tmp_gAppDiag_C300Cnt_old = 0;
            (void)Rte_Read_gAppDiag_C300Cnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_C300Cnt_old)
            {
                (void)Rte_Read_gAppDiag_C300_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_C300.C300);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_C300Cnt_old = Temp_u8;
            }

            static uint8 tmp_gAppDiag_F19ACnt_old = 0;
            (void)Rte_Read_gAppDiag_F19ACnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_F19ACnt_old)
            {
                (void)Rte_Read_gAppDiag_F19A_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_F19A);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_F19ACnt_old = Temp_u8;
            }

            static uint8 tmp_gAppDiag_3206Cnt_old = 0;
            (void)Rte_Read_gAppDiag_3206Cnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_3206Cnt_old)
            {
                (void)Rte_Read_gAppDiag_3206_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3206.DID3206);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_3206Cnt_old = Temp_u8;
            }

            static uint8 tmp_gAppDiag_3207Cnt_old = 0;
            (void)Rte_Read_gAppDiag_3207Cnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_3207Cnt_old)
            {
                (void)Rte_Read_gAppDiag_3207_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_3207.DID3207);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_3207Cnt_old = Temp_u8;
            }

            static uint8 tmp_gAppDiag_F190Cnt_old = 0;
            (void)Rte_Read_gAppDiag_F190Cnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_F190Cnt_old)
            {
                (void)Rte_Read_gAppDiag_F190_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_F190.DIDF190);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_F190Cnt_old = Temp_u8;
            }

//Start add Realease_October
            static uint8 tmp_gAppDiag_1009Cnt_old = 0;
            (void)Rte_Read_gAppDiag_1009Cnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_1009Cnt_old)
            {
                (void)Rte_Read_gAppDiag_1009_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1009.DID1009);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_1009Cnt_old = Temp_u8;
            }

			static uint8 tmp_gAppDiag_1A08Cnt_old = 0;
            (void)Rte_Read_gAppDiag_1A08Cnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_1A08Cnt_old)
            {
                (void)Rte_Read_gAppDiag_1A08_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1A08.DID1A08);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_1A08Cnt_old = Temp_u8;
            }

            static uint8 tmp_gAppDiag_2006Cnt_old = 0;
            (void)Rte_Read_gAppDiag_2006Cnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_2006Cnt_old)
            {
                (void)Rte_Read_gAppDiag_2006_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_2006.DID2006);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_2006Cnt_old = Temp_u8;
            }

			static uint8 tmp_gAppDiag_220CCnt_old = 0;
            (void)Rte_Read_gAppDiag_220CCnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_220CCnt_old)
            {
                (void)Rte_Read_gAppDiag_220C_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_220C.DID220C);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_220CCnt_old = Temp_u8;
            }	
			
            static uint8 tmp_gAppDiag_600CCnt_old = 0;
            (void)Rte_Read_gAppDiag_600CCnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_600CCnt_old)
            {
                (void)Rte_Read_gAppDiag_600C_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600C.DID600C);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_600CCnt_old = Temp_u8;
            }

			static uint8 tmp_gAppDiag_600ACnt_old = 0;
            (void)Rte_Read_gAppDiag_600ACnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_600ACnt_old)
            {
                (void)Rte_Read_gAppDiag_600A_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_600A.DID600A);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_600ACnt_old = Temp_u8;
            }

			static uint8 tmp_gAppDiag_1F03Cnt_old = 0;
            (void)Rte_Read_gAppDiag_1F03Cnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_1F03Cnt_old)
            {
                (void)Rte_Read_gAppDiag_1F03_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_1F03.DID1F03);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_1F03Cnt_old = Temp_u8;
            }

			static uint8 tmp_gAppDiag_350DCnt_old = 0;
            (void)Rte_Read_gAppDiag_350DCnt_Val(&Temp_u8);
            if(Temp_u8 != tmp_gAppDiag_350DCnt_old)
            {
                (void)Rte_Read_gAppDiag_350D_Val(&app_UDS_Small_Blk0_RAM_Mirror.gAppNvM_350D.DID350D);
                NvM_WriteBlockCfg[UDS_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
                tmp_gAppDiag_350DCnt_old = Temp_u8;
            }

        static uint8 tmp_gAppDiag_F102Cnt_old = 0;
        (void)Rte_Read_gAppDiag_F102Cnt_Val(&Temp_u8);
        if(Temp_u8 != tmp_gAppDiag_F102Cnt_old)
        {
            (void)Rte_Read_gAppDiag_F102_Val(&app_App_Small_Blk0_RAM_Mirror.gAppNvM_F102);
            NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
            tmp_gAppDiag_F102Cnt_old = Temp_u8;
        }

        static uint8 tmp_gAppDiag_F103Cnt_old = 0;
        (void)Rte_Read_gAppDiag_F103Cnt_Val(&Temp_u8);
        if(Temp_u8 != tmp_gAppDiag_F103Cnt_old)
        {
            (void)Rte_Read_gAppDiag_F103_Val(&app_App_Small_Blk0_RAM_Mirror.gAppNvM_F103);
            NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
            tmp_gAppDiag_F103Cnt_old = Temp_u8;
        }

        static uint8 tmp_gAppDiag_0203Cnt_old = 0;
        (void)Rte_Read_gAppDiag_0203Cnt_Val(&Temp_u8);
        if(Temp_u8 != tmp_gAppDiag_0203Cnt_old)
        {
            (void)Rte_Read_gAppDiag_0203_Val(&app_App_Small_Blk0_RAM_Mirror.gAppNvM_0203);
            NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
            tmp_gAppDiag_0203Cnt_old = Temp_u8;
        }

        static uint8 tmp_gAppDiag_0206Cnt_old = 0;
        (void)Rte_Read_gAppDiag_0206Cnt_Val(&Temp_u8);
        if(Temp_u8 != tmp_gAppDiag_0206Cnt_old)
        {
            (void)Rte_Read_gAppDiag_0206_Val(&app_App_Small_Blk0_RAM_Mirror.gAppNvM_0206);
            NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
            tmp_gAppDiag_0206Cnt_old = Temp_u8;
        }

        static uint8 tmp_gAppDiag_0110Cnt_old = 0;
        (void)Rte_Read_gAppDiag_0110Cnt_Val(&Temp_u8);
        if(Temp_u8 != tmp_gAppDiag_0110Cnt_old)
        {
            (void)Rte_Read_gAppDiag_0110_Val(&app_App_Small_Blk0_RAM_Mirror.gAppNvM_0110);
            NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
            tmp_gAppDiag_0110Cnt_old = Temp_u8;
        }

        static uint8 tmp_gAppDiag_3205Cnt_old = 0;
        (void)Rte_Read_gAppDiag_3205Cnt_Val(&Temp_u8);
        if(Temp_u8 != tmp_gAppDiag_3205Cnt_old)
        {
            (void)Rte_Read_gAppDiag_3205_Val(&app_App_Small_Blk0_RAM_Mirror.gAppNvM_3205);
            NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
            tmp_gAppDiag_3205Cnt_old = Temp_u8;
        }

        static uint8 tmp_gAppDiag_0120Cnt_old = 0;
        (void)Rte_Read_gAppDiag_0120Cnt_Val(&Temp_u8);
        if(Temp_u8 != tmp_gAppDiag_0120Cnt_old)
        {
            (void)Rte_Read_gAppDiag_0120_Val(&app_App_Small_Blk0_RAM_Mirror.gAppNvM_0120);
            NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
            tmp_gAppDiag_0120Cnt_old = Temp_u8;
        }

        static uint8 tmp_gAppDiag_F184Cnt_old = 0;
        (void)Rte_Read_gAppDiag_F184Cnt_Val(&Temp_u8);
        if(Temp_u8 != tmp_gAppDiag_F184Cnt_old)
        {
            (void)Rte_Read_gAppDiag_F184_Val(&app_App_Small_Blk0_RAM_Mirror.gAppNvM_F184);
            NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
            tmp_gAppDiag_F184Cnt_old = Temp_u8;
        }

        static uint8 tmp_gAppDiag_F199Cnt_old = 0;
        (void)Rte_Read_gAppDiag_F199Cnt_Val(&Temp_u8);
        if(Temp_u8 != tmp_gAppDiag_F199Cnt_old)
        {
            (void)Rte_Read_gAppDiag_F199_Val(&app_App_Small_Blk0_RAM_Mirror.gAppNvM_F199);
            NvM_WriteBlockCfg[App_Small_Blk0].flg.NvMWriteEnableFlg = (boolean)TRUE;
            tmp_gAppDiag_F199Cnt_old = Temp_u8;
        }
//End add Realease_October

			/**********************************************************EPB Interface**************************************************************/
			static uint8 tmp_8PbcoutDataStorageArea1WrtCnt_old = 0;
			(void)Rte_Read_gEPB_u8PbcoutDataStorageArea1WrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_8PbcoutDataStorageArea1WrtCnt_old)
			{
					(void)Rte_Read_gEPB_u8PbcoutDataStorageWriteArea1_a_Val(&app_EPB_Area1_RAM_Mirror.gNVM_u8PbcinDataStorageReadArea1_a);
					NvM_WriteBlockCfg[EPB_Area1].flg.NvMWriteEnableFlg = (boolean)TRUE;
					tmp_8PbcoutDataStorageArea1WrtCnt_old = Temp_u8;
			}

			static uint8 tmp_8PbcoutDataStorageArea2WrtCnt_old = 0;
			(void)Rte_Read_gEPB_u8PbcoutDataStorageArea2WrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_8PbcoutDataStorageArea2WrtCnt_old)
			{
					(void)Rte_Read_gEPB_u8PbcoutDataStorageWriteArea2_a_Val(&app_EPB_Area2_RAM_Mirror.gNVM_u8PbcinDataStorageReadArea2_a);
					NvM_WriteBlockCfg[EPB_Area2].flg.NvMWriteEnableFlg = (boolean)TRUE;
					tmp_8PbcoutDataStorageArea2WrtCnt_old = Temp_u8;
			}

			static uint8 tmp_8PbcoutDataStorageArea3WrtCnt_old = 0;
			(void)Rte_Read_gEPB_u8PbcoutDataStorageArea3WrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_8PbcoutDataStorageArea3WrtCnt_old)
			{
					(void)Rte_Read_gEPB_u8PbcoutDataStorageWriteArea3_a_Val(&app_EPB_Area3_RAM_Mirror.gNVM_u8PbcinDataStorageReadArea3_a);
					NvM_WriteBlockCfg[EPB_Area3].flg.NvMWriteEnableFlg = (boolean)TRUE;
					tmp_8PbcoutDataStorageArea3WrtCnt_old = Temp_u8;
			}

			static uint8 tmp_8SsmoutDataStorageWrtCnt_old = 0;
			(void)Rte_Read_gEPB_u8SsmoutDataStorageWrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_8SsmoutDataStorageWrtCnt_old)
			{
					(void)Rte_Read_gEPB_u8SsmoutDataStorageWrite_a_Val(&app_SSM_Area1_RAM_Mirror.gNVM_u8SsminDataStorageRead_a);
					NvM_WriteBlockCfg[SSM_Area1].flg.NvMWriteEnableFlg = (boolean)TRUE;
					tmp_8SsmoutDataStorageWrtCnt_old = Temp_u8;
			}
			static uint8 tmp_SecOCblockCnt_old = 0;
			(void)Rte_Read_gUxSecOC_u8SecOCBlockWrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_SecOCblockCnt_old)
			{

			        (void)Rte_Read_gUxSecOC_u8SecOCBlock_Val(&app_NvM_SecOC_RAM_Mirror.gNvM_SecOC);
			        NvM_WriteBlockCfg[NvM_SecOC].flg.NvMWriteEnableFlg = (boolean)TRUE;
			        tmp_SecOCblockCnt_old = Temp_u8;
			}
			static uint8 tmp_TripCntblockCnt_old = 0;
			(void)Rte_Read_gUxFvM_u8FvMTripCntBlockWrtCnt_Val(&Temp_u8);
			if(Temp_u8 != tmp_TripCntblockCnt_old)
			{

			         (void)Rte_Read_gUxFvM_u8FvMTripCntBlock_Val(&app_NvM_FvM_TripCnt_RAM_Mirror.gNvM_FvM_TripCnt);
			          NvM_WriteBlockCfg[NvM_FvM_TripCnt].flg.NvMWriteEnableFlg = (boolean)TRUE;
			          tmp_TripCntblockCnt_old = Temp_u8;
			}


			#if 1
			  (void)EEP_vSearchWriteBlockFlg();
			  for (i = 1u; i < (uint8)NvM_WriteBlockMAX; i++)
			  {
				  res = EEP_u8GetWriteBlockStatus(i);
				  if(res == NVM_REQ_NOT_OK)
				  {
					  NvM_WriteBlockCfg[i].flg.NvMWriteEnableFlg = TRUE;
				  }
			  }
			#endif

		}
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


FUNC(Std_ReturnType, AppNvM_SR_CODE) AppNvM_GetBlockStatus_Operation(UInt8 BlockId, P2VAR(UInt8, AUTOMATIC, RTE_APPNVM_SR_APPL_VAR) BlockStatusPtr) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppNvM_GetBlockStatus_Operation (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define AppNvM_SR_STOP_SEC_CODE
#include "AppNvM_SR_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
