/*
 * File: KL15PwrSply_DD.c
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

#include "KL15PwrSply_DD.h"
#include "KL15PwrSply_DD_private.h"

/* Named constants for Chart: '<S1>/RLALampAllwSleepDly' */
#define KL15PwrSply_DD_IN_AllwSleep    ((uint8)1U)
#define KL15PwrSply_DD_IN_NWHold       ((uint8)2U)
#define KL15PwrSply_DD_IN_Normal       ((uint8)3U)

/* Named constants for Chart: '<S1>/RLALampWkUpDly' */
#define KL15PwrSply_DD_IN_Normal_h     ((uint8)1U)
#define KL15PwrSply_DD_IN_WkUp         ((uint8)2U)
#define KL15PwrSply_DD_IN_WkUpHold     ((uint8)3U)

/* Exported block states */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) AMPOnDiagDly_I;/* Simulink.Signal object 'AMPOnDiagDly_I'
                                                                * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) AMPOnDiagRetryDly_I;/* Simulink.Signal object 'AMPOnDiagRetryDly_I'
                                                                     * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                     */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) InverterOnDiagDly_I;/* Simulink.Signal object 'InverterOnDiagDly_I'
                                                                     * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                     */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) InverterOnDiagRetryDly_I;/* Simulink.Signal object 'InverterOnDiagRetryDly_I'
                                                                          * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                          */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) KL15T1OnDiagDly_I;/* Simulink.Signal object 'KL15T1OnDiagDly_I'
                                                                   * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                   */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) KL15T1OnDiagRetryDly_I;/* Simulink.Signal object 'KL15T1OnDiagRetryDly_I'
                                                                        * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                        */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) KL15T2OnDiagDly_I;/* Simulink.Signal object 'KL15T2OnDiagDly_I'
                                                                   * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                   */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) KL15T2OnDiagRetryDly_I;/* Simulink.Signal object 'KL15T2OnDiagRetryDly_I'
                                                                        * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                        */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) PASOnDiagDly_I;/* Simulink.Signal object 'PASOnDiagDly_I'
                                                                * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) PASOnDiagRetryDly_I;/* Simulink.Signal object 'PASOnDiagRetryDly_I'
                                                                     * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                     */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) PCUOnDiagDly_I;/* Simulink.Signal object 'PCUOnDiagDly_I'
                                                                * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) PCUOnDiagRetryDly_I;/* Simulink.Signal object 'PCUOnDiagRetryDly_I'
                                                                     * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                     */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RLALampCtlUnitOnDiagDly_I;/* Simulink.Signal object 'RLALampCtlUnitOnDiagDly_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                           */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RLALampCtlUnitOnDiagRetryDly_I;/* Simulink.Signal object 'RLALampCtlUnitOnDiagRetryDly_I'
                                                                                * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                                */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RLALampWkUpOnDly;/* Simulink.Signal object 'RLALampWkUpOnDly'
                                                                  * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                  */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RLBLampCtlUnitOnDiagDly_I;/* Simulink.Signal object 'RLBLampCtlUnitOnDiagDly_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                           */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RLBLampCtlUnitOnDiagRetryDly_I;/* Simulink.Signal object 'RLBLampCtlUnitOnDiagRetryDly_I'
                                                                                * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                                */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RLBLampWkUpOnDly;/* Simulink.Signal object 'RLBLampWkUpOnDly'
                                                                  * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                  */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RMOnDiagDly_I;/* Simulink.Signal object 'RMOnDiagDly_I'
                                                               * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                               */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RMOnDiagRetryDly_I;/* Simulink.Signal object 'RMOnDiagRetryDly_I'
                                                                    * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                    */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RRALampCtlUnitOnDiagDly_I;/* Simulink.Signal object 'RRALampCtlUnitOnDiagDly_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                           */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RRALampCtlUnitOnDiagRetryDly_I;/* Simulink.Signal object 'RRALampCtlUnitOnDiagRetryDly_I'
                                                                                * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                                */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RRALampWkUpOnDly;/* Simulink.Signal object 'RRALampWkUpOnDly'
                                                                  * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                  */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RRBLampCtlUnitOnDiagDly_I;/* Simulink.Signal object 'RRBLampCtlUnitOnDiagDly_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                           */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RRBLampCtlUnitOnDiagRetryDly_I;/* Simulink.Signal object 'RRBLampCtlUnitOnDiagRetryDly_I'
                                                                                * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                                */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RRBLampWkUpOnDly;/* Simulink.Signal object 'RRBLampWkUpOnDly'
                                                                  * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                  */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) Rear12VOnDiagDly_I;/* Simulink.Signal object 'Rear12VOnDiagDly_I'
                                                                    * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                    */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) Rear12VOnDiagRetryDly_I;/* Simulink.Signal object 'Rear12VOnDiagRetryDly_I'
                                                                         * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                         */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RearBlowerOnDiagDly_I;/* Simulink.Signal object 'RearBlowerOnDiagDly_I'
                                                                       * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                       */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RearBlowerOnDiagRetryDly_I;/* Simulink.Signal object 'RearBlowerOnDiagRetryDly_I'
                                                                            * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                            */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RearCtrlPanelOnDiagDly_I;/* Simulink.Signal object 'RearCtrlPanelOnDiagDly_I'
                                                                          * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                          */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RearCtrlPanelOnDiagRetryDly_I;/* Simulink.Signal object 'RearCtrlPanelOnDiagRetryDly_I'
                                                                               * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                               */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RearEOPOnDiagDly_I;/* Simulink.Signal object 'RearEOPOnDiagDly_I'
                                                                    * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                    */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RearEOPOnDiagRetryDly_I;/* Simulink.Signal object 'RearEOPOnDiagRetryDly_I'
                                                                         * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                         */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RearMotorOnDiagDly_I;/* Simulink.Signal object 'RearMotorOnDiagDly_I'
                                                                      * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                      */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RearMotorOnDiagRetryDly_I;/* Simulink.Signal object 'RearMotorOnDiagRetryDly_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                           */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RearMotorWkUpOnDly;/* Simulink.Signal object 'RearMotorWkUpOnDly'
                                                                    * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                    */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RearRadarOnDiagDly_I;/* Simulink.Signal object 'RearRadarOnDiagDly_I'
                                                                      * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                      */
VAR(Efx_DebounceState_Type, KL15PwrSply_DD_VAR) RearRadarOnDiagRetryDly_I;/* Simulink.Signal object 'RearRadarOnDiagRetryDly_I'
                                                                           * #RBDGSLibOwnedElement #BlkType:EfxTurnOnDelay
                                                                           */
VAR(uint16, KL15PwrSply_DD_VAR) RLALampAllwSleepTiming;/* '<S1>/Data Store Memory' */
VAR(uint16, KL15PwrSply_DD_VAR) RLBLampAllwSleepTiming;/* '<S1>/Data Store Memory1' */
VAR(uint16, KL15PwrSply_DD_VAR) RRALampAllwSleepTiming;/* '<S1>/Data Store Memory2' */
VAR(uint16, KL15PwrSply_DD_VAR) RRBLampAllwSleepTiming;/* '<S1>/Data Store Memory3' */
VAR(uint16, KL15PwrSply_DD_VAR) RearMotorAllwSleepTiming;/* '<S1>/Data Store Memory4' */
VAR(uint16, KL15PwrSply_DD_VAR) RLALampWkUpTiming;/* '<S1>/Data Store Memory5' */
VAR(uint16, KL15PwrSply_DD_VAR) RLBLampWkUpTiming;/* '<S1>/Data Store Memory6' */
VAR(uint16, KL15PwrSply_DD_VAR) RRALampWkUpTiming;/* '<S1>/Data Store Memory7' */
VAR(uint16, KL15PwrSply_DD_VAR) RRBLampWkUpTiming;/* '<S1>/Data Store Memory8' */
VAR(uint16, KL15PwrSply_DD_VAR) RearMotorWkUpTiming;/* '<S1>/Data Store Memory9' */

/* Static Memory for Internal Data */
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr08_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr10_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr02_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr01_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr12_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr11_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr04_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr09_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr07_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr03_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr25_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr06_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr05_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr29_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr27_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr28_Calc;
VAR(float32, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrCurr26_Calc;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag08_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag10_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag02_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag01_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag12_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag11_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag04_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag09_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag07_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag03_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag25_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag06_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag05_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag29_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag27_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag28_Get;
VAR(uint32, KL15PwrSply_DD_VAR) KL15PwrSply_D_PwrSplyDiag26_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol08_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol10_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol02_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol01_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol12_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol11_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol04_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol09_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol07_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol03_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol25_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol06_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol05_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol29_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol27_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol28_Get;
VAR(sint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrVol26_Get;
VAR(uint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl02;
VAR(uint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl01;
VAR(uint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl29;
VAR(uint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl27;
VAR(uint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl28;
VAR(uint16, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl26;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl25;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr25;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl08;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr08;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl10;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr10;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr02;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr01;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl12;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr12;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl11;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr11;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl04;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr04;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl09;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr09;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl07;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr07;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl03;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr03;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl06;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr06;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl13;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl14;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSply_stCtrl05;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr05;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr29;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr27;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr28;
VAR(uint8, KL15PwrSply_DD_VAR) KL15PwrSply_DD_PwrSplyRealErr26;
VAR(boolean, KL15PwrSply_DD_VAR) KL15PwrSply_DD_flgRearMotorWkUp;
VAR(boolean, KL15PwrSply_DD_VAR) KL_flgRearMotorLampAllwSleep_NW;
VAR(boolean, KL15PwrSply_DD_VAR) KL15PwrSply_DD_flgRRBLampWkUp;
VAR(boolean, KL15PwrSply_DD_VAR) KL15PwrS_flgRRBLampAllwSleep_NW;
VAR(boolean, KL15PwrSply_DD_VAR) KL15PwrSply_DD_flgRRALampWkUp;
VAR(boolean, KL15PwrSply_DD_VAR) KL15PwrS_flgRRALampAllwSleep_NW;
VAR(boolean, KL15PwrSply_DD_VAR) KL15PwrSply_DD_flgRLBLampWkUp;
VAR(boolean, KL15PwrSply_DD_VAR) KL15PwrS_flgRLBLampAllwSleep_NW;
VAR(boolean, KL15PwrSply_DD_VAR) KL15PwrSply_DD_flgRLALampWkUp;
VAR(boolean, KL15PwrSply_DD_VAR) KL15PwrS_flgRLALampAllwSleep_NW;

/* Block signals (default storage) */
VAR(B_KL15PwrSply_DD_T, KL15PwrSply_DD_VAR) KL15PwrSply_DD_B;

/* Block states (default storage) */
VAR(DW_KL15PwrSply_DD_T, KL15PwrSply_DD_VAR) KL15PwrSply_DD_DW;

/*
 * Output and update for action system:
 *    '<S5>/KL15T1OnDiagErr_Set'
 *    '<S6>/KL15T2OnDiagErr_Set'
 *    '<S7>/PASOnDiagErr_Set'
 *    '<S33>/RearCtrlPanelOnDiagErr_Set'
 */
FUNC(void, KL15PwrSply_DD_CODE_LOCAL) KL15PwrSply_KL15T1OnDiagErr_Set(VAR(uint32, AUTOMATIC) rtu_stErr, VAR(boolean, AUTOMATIC) rtu_stOCErr, VAR(uint16, AUTOMATIC) rtu_OvrCurrDebTime, P2VAR(boolean, AUTOMATIC, KL15PwrSply_DD_VAR) rty_stSCGDebErr, P2VAR(boolean, AUTOMATIC, KL15PwrSply_DD_VAR) rty_stOLDebErr, P2VAR(boolean, AUTOMATIC, KL15PwrSply_DD_VAR) rty_stOCDebErr, P2VAR(DW_KL15T1OnDiagErr_Set_KL15Pw_T, AUTOMATIC, KL15PwrSply_DD_VAR) localDW)
{
  uint16 rtb_Switch1_lq;
  uint16 rtb_Switch2_f;
  uint16 rtb_Switch3_hd;
  boolean tmp;

  /* Switch: '<S67>/Switch1' incorporates:
   *  Constant: '<S67>/Constant1'
   *  Constant: '<S67>/Constant2'
   *  DataTypeConversion: '<S67>/DataTypeConversion'
   *  DataTypeConversion: '<S74>/Extract Desired Bits'
   *  Sum: '<S67>/Add'
   *  UnitDelay: '<S67>/UnitDelay'
   */
  if (((uint8)(rtu_stErr >> 1) & 1) << 1 != 0) {
    rtb_Switch1_lq = Mfx_Add_u16u16_u16(localDW->UnitDelay_DSTATE, 10U);
  } else {
    rtb_Switch1_lq = 0U;
  }

  /* End of Switch: '<S67>/Switch1' */

  /* RelationalOperator: '<S67>/RelationalOperator' incorporates:
   *  Constant: '<S67>/Constant3'
   */
  *rty_stSCGDebErr = (rtb_Switch1_lq > 100);

  /* Switch: '<S67>/Switch8' incorporates:
   *  Constant: '<S67>/Constant'
   *  Constant: '<S67>/Constant13'
   *  DataTypeConversion: '<S67>/DataTypeConversion1'
   *  DataTypeConversion: '<S73>/Extract Desired Bits'
   */
  if (OLFaultBypass) {
    tmp = false;
  } else {
    tmp = (((uint8)(rtu_stErr >> 3) & 1U) != 0U);
  }

  /* End of Switch: '<S67>/Switch8' */

  /* Switch: '<S67>/Switch2' incorporates:
   *  Constant: '<S67>/Constant4'
   *  Constant: '<S67>/Constant5'
   *  Sum: '<S67>/Add1'
   *  UnitDelay: '<S67>/UnitDelay1'
   */
  if (tmp) {
    rtb_Switch2_f = Mfx_Add_u16u16_u16(localDW->UnitDelay1_DSTATE, 10U);
  } else {
    rtb_Switch2_f = 0U;
  }

  /* End of Switch: '<S67>/Switch2' */

  /* RelationalOperator: '<S67>/RelationalOperator1' incorporates:
   *  Constant: '<S67>/Constant6'
   */
  *rty_stOLDebErr = (rtb_Switch2_f > 100);

  /* Switch: '<S67>/Switch3' incorporates:
   *  Constant: '<S67>/Constant7'
   *  Constant: '<S67>/Constant8'
   *  Sum: '<S67>/Add2'
   *  UnitDelay: '<S67>/UnitDelay2'
   */
  if (rtu_stOCErr) {
    rtb_Switch3_hd = Mfx_Add_u16u16_u16(localDW->UnitDelay2_DSTATE, 10U);
  } else {
    rtb_Switch3_hd = 0U;
  }

  /* End of Switch: '<S67>/Switch3' */

  /* RelationalOperator: '<S67>/RelationalOperator2' */
  *rty_stOCDebErr = (rtb_Switch3_hd > rtu_OvrCurrDebTime);

  /* Update for UnitDelay: '<S67>/UnitDelay' */
  localDW->UnitDelay_DSTATE = rtb_Switch1_lq;

  /* Update for UnitDelay: '<S67>/UnitDelay1' */
  localDW->UnitDelay1_DSTATE = rtb_Switch2_f;

  /* Update for UnitDelay: '<S67>/UnitDelay2' */
  localDW->UnitDelay2_DSTATE = rtb_Switch3_hd;
}

/*
 * Output and update for action system:
 *    '<S5>/KL15T1OffDiagErr_Set'
 *    '<S6>/KL15T2OffDiagErr_Set'
 *    '<S7>/PASOffDiagErr_Set'
 *    '<S33>/RearCtrlPanelOffDiagErr_Set'
 */
FUNC(void, KL15PwrSply_DD_CODE_LOCAL) KL15PwrSpl_KL15T1OffDiagErr_Set(VAR(uint32, AUTOMATIC) rtu_stErr, P2VAR(boolean, AUTOMATIC, KL15PwrSply_DD_VAR) rty_stSCBDebErr, P2VAR(DW_KL15T1OffDiagErr_Set_KL15P_T, AUTOMATIC, KL15PwrSply_DD_VAR) localDW)
{
  uint16 rtb_Switch2_h;

  /* Switch: '<S66>/Switch2' incorporates:
   *  Constant: '<S66>/Constant1'
   *  Constant: '<S66>/Constant4'
   *  DataTypeConversion: '<S72>/Extract Desired Bits'
   *  Sum: '<S66>/Add1'
   *  UnitDelay: '<S66>/UnitDelay1'
   */
  if (((uint8)rtu_stErr & 1U) != 0U) {
    rtb_Switch2_h = Mfx_Add_u16u16_u16(localDW->UnitDelay1_DSTATE, 10U);
  } else {
    rtb_Switch2_h = 0U;
  }

  /* End of Switch: '<S66>/Switch2' */

  /* RelationalOperator: '<S66>/RelationalOperator1' incorporates:
   *  Constant: '<S66>/Constant2'
   */
  *rty_stSCBDebErr = (rtb_Switch2_h > 100);

  /* Update for UnitDelay: '<S66>/UnitDelay1' */
  localDW->UnitDelay1_DSTATE = rtb_Switch2_h;
}

/* Model step function for TID1 */
FUNC(void, KL15PwrSply_DD_CODE) KL15PwrSply_DD_Runnable_10ms(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  uint32 rtb_Bfx_PutBit_sf;
  uint32 rtb_Bfx_PutBit_sf_g;
  uint8 rtb_UnitDelay4;
  uint8 rtb_UnitDelay4_a;
  uint8 rtb_UnitDelay4_f;
  uint8 rtb_UnitDelay4_j;
  uint8 rtb_UnitDelay4_l;
  uint8 rtb_UnitDelay4_b;
  uint8 rtb_UnitDelay4_p;
  uint8 rtb_UnitDelay4_n;
  uint8 rtb_UnitDelay4_le;
  uint8 rtb_UnitDelay4_m;
  uint8 rtb_UnitDelay4_k;
  uint8 rtb_UnitDelay4_c;
  uint8 rtb_UnitDelay4_d;
  uint8 rtb_UnitDelay4_lc;
  uint8 rtb_UnitDelay4_nr;
  uint8 rtb_UnitDelay4_g;
  uint8 rtb_UnitDelay4_kv;
  uint8 rtb_Efx_Debounce_sf;
  uint8 rtb_Efx_Debounce_sf_m;
  uint8 rtb_Efx_Debounce_sf_i;
  uint8 rtb_Efx_Debounce_sf_e;
  uint8 rtb_Efx_Debounce_sf_eu;
  uint8 rtb_UnitDelay_g;
  uint8 rtb_Efx_Debounce_sf_d;
  boolean rtb_LogicalOperator7;
  boolean rtb_Efx_Debounce_sf_j;
  boolean rtb_LogicalOperator8;
  boolean rtb_Efx_Debounce_sf_g;
  boolean rtb_LogicalOperator10;
  boolean rtb_Efx_Debounce_sf_k;
  boolean rtb_LogicalOperator11;
  boolean rtb_Efx_Debounce_sf_f;
  boolean rtb_LogicalOperator10_n;
  boolean rtb_LogicalOperator9;
  boolean rtb_Efx_Debounce_sf_a;
  boolean rtb_LogicalOperator10_k;
  boolean rtb_LogicalOperator10_c;
  boolean rtb_LogicalOperator10_p;
  boolean rtb_LogicalOperator10_o;
  boolean rtb_LogicalOperator10_ov;
  boolean rtb_LogicalOperator10_l;
  boolean rtb_LogicalOperator10_a;
  boolean rtb_LogicalOperator10_ak;
  boolean rtb_LogicalOperator10_i;
  boolean rtb_LogicalOperator10_e;
  boolean rtb_LogicalOperator10_nm;
  boolean rtb_LogicalOperator5_b;
  boolean rtb_LogicalOperator6_my;
  boolean rtb_LogicalOperator10_kk;
  boolean rtb_LogicalOperator10_nq;
  boolean rtb_LogicalOperator10_f;
  boolean rtb_LogicalOperator10_j;
  boolean rtb_LogicalOperator10_g;
  boolean rtb_DataTypeConversion2_c;
  boolean rtb_DTC_RearEOPPowerSCB_GetEv_f;
  boolean rtb_DTC_RRBLampCtlUnitPowerS_pq;
  boolean rtb_DTC_RRALampCtlUnitPowerSC_h;
  boolean rtb_DTC_RLBLampCtlUnitPowerSC_k;
  boolean rtb_DTC_RLALampCtlUnitPowerSC_f;
  boolean rtb_DataTypeConversion2_jd;
  boolean rtb_DataTypeConversion2_bh;
  const uint16 *tmpIRead;
  const uint16 *tmpIRead_0;
  const uint8 *tmpIRead_1;
  const uint8 *tmpIRead_2;
  uint32 tmpIWrite;
  uint32 tmpIWrite_0;
  boolean tmpIWrite_1[29];
  uint16 tmpIWrite_2[29];
  uint8 tmpIWrite_3[29];
  boolean rtb_LogicalOperator;
  boolean rtb_LogicalOperator2;
  boolean rtb_DataTypeConversion2_k;
  boolean rtb_DTC_RearMotorPowerOL_GetE_l;
  boolean rtb_DTC_RearMotorPowerOL_GetE_n;
  boolean rtb_DTC_RearMotorPowerSCG_Ge_lg;
  boolean rtb_DTC_RearMotorPowerSCG_Get_f;
  boolean rtb_DTC_RearMotorPowerOC_GetE_o;
  boolean rtb_DTC_RearMotorPowerOC_Get_ho;
  sint32 rtb_DataTypeConversion_jj;
  boolean rtb_DTC_AMPPowerOL_GetEventFa_g;
  boolean rtb_DTC_AMPPowerOL_GetEventTe_k;
  boolean rtb_DTC_AMPPowerSCG_GetEventF_k;
  boolean rtb_DTC_AMPPowerSCG_GetEventT_p;
  boolean rtb_DTC_AMPPowerOC_GetEventFa_g;
  boolean rtb_DTC_AMPPowerOC_GetEventTe_m;
  boolean rtb_DTC_InverterPowerOL_GetE_mi;
  boolean rtb_DTC_InverterPowerOL_GetEv_p;
  boolean rtb_DTC_InverterPowerSCG_GetE_h;
  boolean rtb_DTC_InverterPowerSCG_GetE_m;
  boolean rtb_DTC_InverterPowerOC_GetEv_l;
  boolean rtb_DTC_InverterPowerOC_GetE_av;
  uint8 rtb_Switch_o;
  boolean rtb_DTC_PCUPowerOL_GetEventFa_m;
  boolean rtb_DTC_PCUPowerOL_GetEventTe_e;
  boolean rtb_DTC_PCUPowerSCG_GetEventF_k;
  boolean rtb_DTC_PCUPowerSCG_GetEventT_m;
  boolean rtb_DTC_PCUPowerOC_GetEventFa_m;
  boolean rtb_DTC_PCUPowerOC_GetEventTe_m;
  boolean rtb_DTC_RMPowerOL_GetEventFai_h;
  boolean rtb_DTC_RMPowerOL_GetEventTes_h;
  boolean rtb_DTC_RMPowerSCG_GetEventFa_b;
  boolean rtb_DTC_RMPowerSCG_GetEventTe_l;
  boolean rtb_DTC_RMPowerOC_GetEventFai_d;
  boolean rtb_DTC_RMPowerOC_GetEventTes_m;
  boolean rtb_DTC_Rear12VPowerOL_GetEve_b;
  boolean rtb_DTC_Rear12VPowerOL_GetEve_j;
  boolean rtb_DTC_Rear12VPowerSCG_GetEv_i;
  boolean rtb_DTC_Rear12VPowerSCG_GetEv_b;
  boolean rtb_DTC_Rear12VPowerOC_GetEve_m;
  boolean rtb_DTC_Rear12VPowerOC_GetEve_d;
  boolean rtb_DTC_RearBlowerPowerOL_Get_k;
  boolean rtb_DTC_RearBlowerPowerOL_Get_b;
  boolean rtb_DTC_RearBlowerPowerSCG_Ge_f;
  boolean rtb_DTC_RearBlowerPowerSCG_G_kd;
  boolean rtb_DTC_RearBlowerPowerOC_Ge_op;
  boolean rtb_DTC_RearBlowerPowerOC_Get_o;
  boolean rtb_DTC_RearRadarPowerOL_GetE_j;
  boolean rtb_DTC_RearRadarPowerOL_GetE_b;
  boolean rtb_DTC_RearRadarPowerSCG_Ge_hw;
  boolean rtb_DTC_RearRadarPowerSCG_Get_c;
  boolean rtb_DTC_RearRadarPowerOC_GetE_a;
  boolean rtb_DTC_RearRadarPowerOC_GetE_l;
  boolean rtb_DTC_RLALampCtlUnitPowerOC_m;
  boolean rtb_DTC_RLALampCtlUnitPowerSC_h;
  boolean rtb_LogicalOperator14_an;
  uint8 rtb_Switch_j;
  boolean rtb_DTC_RLALampCtlUnitPowerOL_n;
  boolean rtb_DTC_RLALampCtlUnitPowerOL_o;
  boolean rtb_DTC_RLALampCtlUnitPowerS_gp;
  boolean rtb_DTC_RLALampCtlUnitPowerSC_k;
  boolean rtb_DTC_RLALampCtlUnitPowerO_b5;
  boolean rtb_DTC_RLALampCtlUnitPowerOC_n;
  boolean rtb_DTC_RLBLampCtlUnitPowerSC_f;
  boolean rtb_DTC_RLBLampCtlUnitPowerOL_o;
  boolean rtb_DTC_RLBLampCtlUnitPowerOL_p;
  boolean rtb_DTC_RLBLampCtlUnitPowerSC_g;
  boolean rtb_DTC_RLBLampCtlUnitPowerS_ee;
  boolean rtb_DTC_RLBLampCtlUnitPowerOC_n;
  boolean rtb_DTC_RLBLampCtlUnitPowerOC_o;
  boolean rtb_DTC_RRALampCtlUnitPowerSC_a;
  boolean rtb_DTC_RRALampCtlUnitPowerO_kf;
  boolean rtb_DTC_RRALampCtlUnitPowerOL_e;
  boolean rtb_DTC_RRALampCtlUnitPowerS_ij;
  boolean rtb_DTC_RRALampCtlUnitPowerS_on;
  boolean rtb_DTC_RRALampCtlUnitPowerOC_e;
  boolean rtb_DTC_RRALampCtlUnitPowerO_ow;
  boolean rtb_DTC_RRBLampCtlUnitPowerS_n4;
  boolean rtb_DTC_RRBLampCtlUnitPowerOL_f;
  boolean rtb_DTC_RRBLampCtlUnitPowerOL_k;
  boolean rtb_DTC_RRBLampCtlUnitPowerSC_h;
  boolean rtb_DTC_RRBLampCtlUnitPowerSC_c;
  boolean rtb_DTC_RRBLampCtlUnitPowerO_af;
  boolean rtb_DTC_RRBLampCtlUnitPowerOC_l;
  boolean rtb_DTC_RearEOPPowerSCB_GetEv_c;
  boolean rtb_DTC_RearEOPPowerOL_GetEve_l;
  boolean rtb_DTC_RearEOPPowerOL_GetEve_p;
  boolean rtb_DTC_RearEOPPowerSCG_GetEv_e;
  boolean rtb_DTC_RearEOPPowerSCG_GetEv_f;
  boolean rtb_DTC_RearEOPPowerOC_GetEve_o;
  boolean rtb_DTC_RearEOPPowerOC_GetEv_dh;
  uint16 rtb_Switch4_mq;
  Dem_EventStatusType rtb_Switch4_k3;
  uint8 tmp;
  uint8 rtb_LogicalOperator2_tmp_tmp;

  /* Inport: '<Root>/PwrSply_au8PwrSup_Val' */
  tmpIRead_2 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_au8PwrSup_Val();

  /* Inport: '<Root>/PwrSply_au8CoornReq_Val' */
  tmpIRead_1 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_au8CoornReq_Val();

  /* Inport: '<Root>/gPRM_au16OvrCurrThres_Val' */
  tmpIRead_0 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_gPRM_au16OvrCurrThres_Val();

  /* Inport: '<Root>/gPRM_au16OvrCurrDebTime_Val' */
  tmpIRead = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_gPRM_au16OvrCurrDebTime_Val();

  /* RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_KL15PwrSply_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/KL15PwrSply_DD_Runnable_10ms_sys'
   */
  /* RelationalOperator: '<S1>/Relational Operator' incorporates:
   *  Inport: '<Root>/gVRM_u16BatteryVolt_mv_Val'
   *  RelationalOperator: '<S1>/Relational Operator1'
   */
  rtb_DataTypeConversion_jj = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_gVRM_u16BatteryVolt_mv_Val();

  /* Logic: '<S1>/Logical Operator' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Inport: '<Root>/BattU_bVoltEnbPinDiag_Val'
   *  Logic: '<S1>/Logical Operator1'
   *  RelationalOperator: '<S1>/Relational Operator'
   *  RelationalOperator: '<S1>/Relational Operator1'
   */
  rtb_LogicalOperator = (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_BattU_bVoltEnbPinDiag_Val() || ((rtb_DataTypeConversion_jj > 9000) && (rtb_DataTypeConversion_jj < 16000)));

  /* RelationalOperator: '<S1>/Relational Operator3' incorporates:
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  rtb_LogicalOperator2_tmp_tmp = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_u8UMM_UsageModeSt_Val();

  /* Logic: '<S1>/Logical Operator2' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   *  RelationalOperator: '<S1>/Relational Operator2'
   *  RelationalOperator: '<S1>/Relational Operator3'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  rtb_LogicalOperator2 = ((KL15PwrSply_DD_DW.UnitDelay_DSTATE == 0) && (rtb_LogicalOperator2_tmp_tmp == 1));

  /* RelationalOperator: '<S1>/Relational Operator10' incorporates:
   *  Inport: '<Root>/gPRM_u8VehRLCM_Val'
   *  RelationalOperator: '<S1>/Relational Operator11'
   *  RelationalOperator: '<S1>/Relational Operator12'
   *  RelationalOperator: '<S1>/Relational Operator13'
   *  RelationalOperator: '<S1>/Relational Operator14'
   *  RelationalOperator: '<S1>/Relational Operator15'
   */
  rtb_DataTypeConversion_jj = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_gPRM_u8VehRLCM_Val();

  /* Outputs for Enabled SubSystem: '<S1>/RLALampCtlUnit_Ctl_2F_Diag_CutOff' incorporates:
   *  EnablePort: '<S19>/Enable'
   */
  /* Logic: '<S1>/Logical Operator12' incorporates:
   *  Constant: '<S19>/Constant33'
   *  Constant: '<S19>/Constant34'
   *  Constant: '<S1>/Constant53'
   *  Constant: '<S1>/Constant54'
   *  Inport: '<S108>/stRealErr'
   *  Logic: '<S19>/Logical Operator5'
   *  Logic: '<S19>/Logical Operator6'
   *  Logic: '<S19>/Logical Operator7'
   *  RelationalOperator: '<S19>/Relational Operator4'
   *  RelationalOperator: '<S19>/Relational Operator5'
   *  RelationalOperator: '<S19>/Relational Operator6'
   *  RelationalOperator: '<S1>/Relational Operator10'
   *  RelationalOperator: '<S1>/Relational Operator11'
   *  UnitDelay: '<S19>/Unit Delay2'
   */
  if ((rtb_DataTypeConversion_jj == 1) || (rtb_DataTypeConversion_jj == 2)) {
    /* UnitDelay: '<S19>/Unit Delay4' */
    rtb_UnitDelay4_kv = KL15PwrSply_DD_DW.UnitDelay4_DSTATE_bq;

    /* S-Function (Efx_Debounce_sf): '<S109>/Efx_Debounce_sf' incorporates:
     *  Constant: '<S109>/Reset'
     *  Constant: '<S109>/THighLow'
     *  Constant: '<S109>/X_Init'
     *  Constant: '<S19>/Constant1'
     *  Constant: '<S19>/Constant2'
     *  S-Function (Upcast_sf): '<S109>/Upcast'
     *  S-Function (Upcast_sf): '<S109>/Upcast1'
     */
    {
      Efx_DebounceParam_Type paramdebounce_loc;
      Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
      rtb_Efx_Debounce_sf_eu = Efx_Debounce_u8_u8(rtb_UnitDelay4_kv, &RLALampCtlUnitOnDiagDly_I, &paramdebounce_loc, 10000 );
    }

    /* RelationalOperator: '<S19>/Relational Operator1' incorporates:
     *  Constant: '<S19>/Constant4'
     */
    rtb_DTC_RLALampCtlUnitPowerOC_m = (tmpIRead_2[25] == 1);

    /* RelationalOperator: '<S19>/Relational Operator2' incorporates:
     *  Constant: '<S19>/Constant5'
     */
    rtb_DTC_RLALampCtlUnitPowerSC_f = (tmpIRead_2[25] == 2);

    /* Logic: '<S19>/Logical Operator10' incorporates:
     *  Constant: '<S19>/Constant3'
     *  Logic: '<S19>/Logical Operator3'
     *  Logic: '<S19>/Logical Operator4'
     *  RelationalOperator: '<S19>/Relational Operator'
     *  UnitDelay: '<S19>/Unit Delay'
     */
    rtb_LogicalOperator10_g = ((KL15PwrSply_DD_DW.UnitDelay_DSTATE_h != 0) || ((!rtb_DTC_RLALampCtlUnitPowerOC_m) && (!rtb_DTC_RLALampCtlUnitPowerSC_f)));

    /* S-Function (Efx_Debounce_sf): '<S110>/Efx_Debounce_sf' incorporates:
     *  Constant: '<S110>/Reset'
     *  Constant: '<S110>/THighLow'
     *  Constant: '<S110>/X_Init'
     *  Constant: '<S19>/Constant10'
     *  Constant: '<S19>/Constant9'
     *  S-Function (Upcast_sf): '<S110>/Upcast'
     *  S-Function (Upcast_sf): '<S110>/Upcast1'
     */
    {
      Efx_DebounceParam_Type paramdebounce_loc;
      Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
      rtb_DTC_RLALampCtlUnitPowerSC_f = Efx_Debounce_u8_u8(rtb_LogicalOperator10_g, &RLALampCtlUnitOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
    }

    /* FunctionCaller: '<S19>/DTC_RLALampCtlUnitPowerSCG_GetEventFailed' */
    Rte_Call_DTC_RLALampCtlUnitPowerSCG_GetEventFailed(&rtb_DTC_RLALampCtlUnitPowerOC_m);

    /* FunctionCaller: '<S19>/DTC_RLALampCtlUnitPowerSCG_GetEventTested' */
    Rte_Call_DTC_RLALampCtlUnitPowerSCG_GetEventTested(&rtb_DTC_RLALampCtlUnitPowerSC_h);

    /* Logic: '<S19>/Logical Operator14' */
    rtb_LogicalOperator14_an = (rtb_DTC_RLALampCtlUnitPowerOC_m && rtb_DTC_RLALampCtlUnitPowerSC_h);

    /* FunctionCaller: '<S19>/DTC_RLALampCtlUnitPowerOC_GetEventFailed' */
    Rte_Call_DTC_RLALampCtlUnitPowerOC_GetEventFailed(&rtb_DTC_RLALampCtlUnitPowerSC_h);

    /* FunctionCaller: '<S19>/DTC_RLALampCtlUnitPowerOC_GetEventTested' */
    Rte_Call_DTC_RLALampCtlUnitPowerOC_GetEventTested(&rtb_DTC_RLALampCtlUnitPowerOC_m);

    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S19>/Constant'
     *  Inport: '<Root>/KL15PwrSply_bRLALampCtlUnitPowerTrigUds_Val'
     *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
     *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
     *  Logic: '<S19>/Logical Operator13'
     *  Logic: '<S19>/Logical Operator15'
     *  Logic: '<S19>/Logical Operator8'
     *  Logic: '<S19>/Logical Operator9'
     *  MultiPortSwitch: '<S19>/MultiportSwitch11'
     *  Switch: '<S19>/Switch1'
     *  Switch: '<S19>/Switch41'
     *  UnitDelay: '<S19>/Unit Delay3'
     */
    if ((rtb_LogicalOperator14_an || (rtb_DTC_RLALampCtlUnitPowerSC_h && rtb_DTC_RLALampCtlUnitPowerOC_m)) && rtb_DTC_RLALampCtlUnitPowerSC_f) {
      rtb_Switch_j = 0U;
    } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bRLALampCtlUnitPowerTrigUds_Val()) {
      /* Switch: '<S19>/Switch1' incorporates:
       *  Inport: '<Root>/KL15PwrSply_u8stRLALampCtlUnitPowerUds_Val'
       */
      rtb_Switch_j = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stRLALampCtlUnitPowerUds_Val();
    } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
      /* MultiPortSwitch: '<S19>/MultiportSwitch11' incorporates:
       *  Switch: '<S19>/Switch1'
       */
      rtb_Switch_j = tmpIRead_1[25];
    } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_k && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
      /* Switch: '<S19>/Switch41' incorporates:
       *  Constant: '<S19>/Constant27'
       *  MultiPortSwitch: '<S19>/MultiportSwitch11'
       *  Switch: '<S19>/Switch1'
       */
      rtb_Switch_j = 1U;
    } else {
      /* MultiPortSwitch: '<S19>/MultiportSwitch11' incorporates:
       *  Switch: '<S19>/Switch1'
       *  Switch: '<S19>/Switch41'
       */
      rtb_Switch_j = tmpIRead_1[25];
    }

    /* End of Switch: '<S19>/Switch' */

    /* FunctionCaller: '<S19>/IoHwAb_IoDiagPwm_Pwm_Get' */
    Rte_Call_IoHwAb_IoDiagPwm_Pwm_Get(O_P_KL15PwrSply26, &KL15PwrSply_D_PwrSplyDiag26_Get);

    /* SwitchCase: '<S19>/Switch Case1' incorporates:
     *  Logic: '<S19>/Logical Operator1'
     *  Logic: '<S19>/Logical Operator2'
     */
    if (rtb_LogicalOperator && (rtb_Switch_j == 0)) {
      /* Outputs for IfAction SubSystem: '<S19>/RLALampCtlUnitOffDiagErr_Set' incorporates:
       *  ActionPort: '<S105>/Action Port'
       */
      /* Switch: '<S105>/Switch1' incorporates:
       *  Constant: '<S105>/Constant5'
       *  Constant: '<S105>/Constant6'
       *  DataTypeConversion: '<S112>/Extract Desired Bits'
       */
      if (((uint8)KL15PwrSply_D_PwrSplyDiag26_Get & 1U) != 0U) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S105>/Switch1' */

      /* FunctionCaller: '<S105>/DTC_RLALampCtlUnitPowerSCB_SetEventStatus' */
      Rte_Call_DTC_RLALampCtlUnitPowerSCB_SetEventStatus(rtb_Switch4_k3);

      /* End of Outputs for SubSystem: '<S19>/RLALampCtlUnitOffDiagErr_Set' */
    } else {
      /* Outputs for IfAction SubSystem: '<S19>/RLALampCtlUnitOffDiagErr_DebounceReset' incorporates:
       *  ActionPort: '<S104>/Action Port'
       */
      /* FunctionCaller: '<S104>/DTC_RLALampCtlUnitPowerSCB_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S104>/Constant'
       */
      Rte_Call_DTC_RLALampCtlUnitPowerSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S19>/RLALampCtlUnitOffDiagErr_DebounceReset' */
    }

    /* End of SwitchCase: '<S19>/Switch Case1' */

    /* FunctionCaller: '<S19>/IoHwAb_IoSigAdc_Adc_Get' */
    Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol26, &KL15PwrSply_DD_PwrVol26_Get);

    /* Product: '<S19>/Divide1' */
    KL15PwrSply_DD_PwrCurr26_Calc = (float32)KL15PwrSply_DD_PwrVol26_Get / 1780.0F * 20000.0F;

    /* SwitchCase: '<S19>/Switch Case' incorporates:
     *  Logic: '<S19>/Logical Operator'
     */
    if (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_eu != 0)) {
      /* Outputs for IfAction SubSystem: '<S19>/RLALampCtlUnitOnDiagErr_Set' incorporates:
       *  ActionPort: '<S107>/Action Port'
       */
      /* Switch: '<S107>/Switch8' incorporates:
       *  Constant: '<S107>/Constant'
       *  Constant: '<S107>/Constant13'
       *  DataTypeConversion: '<S107>/DataTypeConversion1'
       *  DataTypeConversion: '<S113>/Extract Desired Bits'
       */
      if (OLFaultBypass) {
        rtb_DTC_RLALampCtlUnitPowerOC_m = false;
      } else {
        rtb_DTC_RLALampCtlUnitPowerOC_m = (((uint8)(KL15PwrSply_D_PwrSplyDiag26_Get >> 3) & 1U) != 0U);
      }

      /* End of Switch: '<S107>/Switch8' */

      /* Switch: '<S107>/Switch1' incorporates:
       *  Constant: '<S107>/Constant3'
       *  Constant: '<S107>/Constant4'
       */
      if (rtb_DTC_RLALampCtlUnitPowerOC_m) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S107>/Switch1' */

      /* FunctionCaller: '<S107>/DTC_RLALampCtlUnitPowerOL_SetEventStatus' */
      Rte_Call_DTC_RLALampCtlUnitPowerOL_SetEventStatus(rtb_Switch4_k3);

      /* Switch: '<S107>/Switch' incorporates:
       *  Constant: '<S107>/Constant1'
       *  Constant: '<S107>/Constant2'
       *  DataTypeConversion: '<S107>/DataTypeConversion'
       *  DataTypeConversion: '<S114>/Extract Desired Bits'
       */
      if (((uint8)(KL15PwrSply_D_PwrSplyDiag26_Get >> 1) & 1) << 1 != 0) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S107>/Switch' */

      /* FunctionCaller: '<S107>/DTC_RLALampCtlUnitPowerSCG_SetEventStatus' */
      Rte_Call_DTC_RLALampCtlUnitPowerSCG_SetEventStatus(rtb_Switch4_k3);

      /* Switch: '<S107>/Switch4' incorporates:
       *  Constant: '<S107>/Constant10'
       *  Constant: '<S107>/Constant9'
       *  Logic: '<S19>/Logical Operator11'
       *  RelationalOperator: '<S19>/Relational Operator7'
       *  Sum: '<S107>/Add2'
       *  UnitDelay: '<S107>/UnitDelay2'
       */
      if ((KL15PwrSply_DD_PwrCurr26_Calc > tmpIRead_0[18]) && (rtb_Efx_Debounce_sf_eu != 0)) {
        rtb_Switch4_mq = Mfx_Add_u16u16_u16(KL15PwrSply_DD_DW.UnitDelay2_DSTATE_kd, 10U);
      } else {
        rtb_Switch4_mq = 0U;
      }

      /* End of Switch: '<S107>/Switch4' */

      /* Switch: '<S107>/Switch3' incorporates:
       *  Constant: '<S107>/Constant7'
       *  Constant: '<S107>/Constant8'
       *  RelationalOperator: '<S107>/RelationalOperator2'
       */
      if (rtb_Switch4_mq > tmpIRead[18]) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_FAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PASSED;
      }

      /* End of Switch: '<S107>/Switch3' */

      /* FunctionCaller: '<S107>/DTC_RLALampCtlUnitPowerOC_SetEventStatus' */
      Rte_Call_DTC_RLALampCtlUnitPowerOC_SetEventStatus(rtb_Switch4_k3);

      /* Update for UnitDelay: '<S107>/UnitDelay2' */
      KL15PwrSply_DD_DW.UnitDelay2_DSTATE_kd = rtb_Switch4_mq;

      /* End of Outputs for SubSystem: '<S19>/RLALampCtlUnitOnDiagErr_Set' */
    } else {
      /* Outputs for IfAction SubSystem: '<S19>/RLALampCtlUnitOnDiagErr_DebounceReset' incorporates:
       *  ActionPort: '<S106>/Action Port'
       */
      /* FunctionCaller: '<S106>/DTC_RLALampCtlUnitPowerOC_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S106>/Constant'
       */
      Rte_Call_DTC_RLALampCtlUnitPowerOC_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* FunctionCaller: '<S106>/DTC_RLALampCtlUnitPowerOL_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S106>/Constant1'
       */
      Rte_Call_DTC_RLALampCtlUnitPowerOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* FunctionCaller: '<S106>/DTC_RLALampCtlUnitPowerSCG_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S106>/Constant2'
       */
      Rte_Call_DTC_RLALampCtlUnitPowerSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S19>/RLALampCtlUnitOnDiagErr_DebounceReset' */
    }

    /* End of SwitchCase: '<S19>/Switch Case' */

    /* DataTypeConversion: '<S19>/DataTypeConversion3' */
    rtb_DTC_RLALampCtlUnitPowerSC_h = (rtb_Switch_j != 0);

    /* Switch: '<S19>/Switch66' incorporates:
     *  Constant: '<S19>/Constant14'
     *  Constant: '<S19>/Constant140'
     *  DataTypeConversion: '<S19>/DataTypeConversion3'
     */
    if (rtb_Switch_j != 0) {
      KL15PwrSply_DD_PwrSply_stCtrl26 = 32768U;
    } else {
      KL15PwrSply_DD_PwrSply_stCtrl26 = 0U;
    }

    /* End of Switch: '<S19>/Switch66' */

    /* FunctionCaller: '<S19>/IoHwAb_IoSigPwm_Pwm_SetDuty' */
    Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_KL15PwrSply26, KL15PwrSply_DD_PwrSply_stCtrl26);

    /* FunctionCaller: '<S111>/DTC_RLALampCtlUnitPowerSCB_GetEventFailed' */
    Rte_Call_DTC_RLALampCtlUnitPowerSCB_GetEventFailed(&rtb_DTC_RLALampCtlUnitPowerSC_h);

    /* FunctionCaller: '<S111>/DTC_RLALampCtlUnitPowerSCB_GetEventTested' */
    Rte_Call_DTC_RLALampCtlUnitPowerSCB_GetEventTested(&rtb_DTC_RLALampCtlUnitPowerSC_f);

    /* FunctionCaller: '<S111>/DTC_RLALampCtlUnitPowerOL_GetEventFailed' */
    Rte_Call_DTC_RLALampCtlUnitPowerOL_GetEventFailed(&rtb_DTC_RLALampCtlUnitPowerOL_n);

    /* FunctionCaller: '<S111>/DTC_RLALampCtlUnitPowerOL_GetEventTested' */
    Rte_Call_DTC_RLALampCtlUnitPowerOL_GetEventTested(&rtb_DTC_RLALampCtlUnitPowerOL_o);

    /* FunctionCaller: '<S111>/DTC_RLALampCtlUnitPowerSCG_GetEventFailed' */
    Rte_Call_DTC_RLALampCtlUnitPowerSCG_GetEventFailed(&rtb_DTC_RLALampCtlUnitPowerS_gp);

    /* FunctionCaller: '<S111>/DTC_RLALampCtlUnitPowerSCG_GetEventTested' */
    Rte_Call_DTC_RLALampCtlUnitPowerSCG_GetEventTested(&rtb_DTC_RLALampCtlUnitPowerSC_k);

    /* FunctionCaller: '<S111>/DTC_RLALampCtlUnitPowerOC_GetEventFailed' */
    Rte_Call_DTC_RLALampCtlUnitPowerOC_GetEventFailed(&rtb_DTC_RLALampCtlUnitPowerO_b5);

    /* FunctionCaller: '<S111>/DTC_RLALampCtlUnitPowerOC_GetEventTested' */
    Rte_Call_DTC_RLALampCtlUnitPowerOC_GetEventTested(&rtb_DTC_RLALampCtlUnitPowerOC_n);

    /* Switch: '<S111>/Switch4' incorporates:
     *  Constant: '<S111>/Constant5'
     *  Constant: '<S111>/Constant59'
     *  Constant: '<S111>/Constant8'
     *  Logic: '<S111>/Logical Operator1'
     *  Logic: '<S111>/Logical Operator4'
     *  Logic: '<S111>/Logical Operator6'
     *  Logic: '<S111>/Logical Operator7'
     *  RelationalOperator: '<S111>/Relational Operator'
     *  RelationalOperator: '<S111>/Relational Operator1'
     *  Switch: '<S111>/Switch1'
     *  Switch: '<S111>/Switch5'
     *  Switch: '<S111>/Switch6'
     */
    if (rtb_DTC_RLALampCtlUnitPowerSC_h && rtb_DTC_RLALampCtlUnitPowerSC_f && (rtb_Switch_j == 0)) {
      KL15PwrSply_DD_PwrSplyRealErr26 = 2U;
    } else if (rtb_DTC_RLALampCtlUnitPowerOL_n && rtb_DTC_RLALampCtlUnitPowerOL_o && (rtb_Switch_j == 1)) {
      /* Switch: '<S111>/Switch5' incorporates:
       *  Constant: '<S111>/Constant6'
       */
      KL15PwrSply_DD_PwrSplyRealErr26 = 3U;
    } else if (rtb_DTC_RLALampCtlUnitPowerS_gp && rtb_DTC_RLALampCtlUnitPowerSC_k) {
      /* Switch: '<S111>/Switch6' incorporates:
       *  Constant: '<S111>/Constant7'
       *  Switch: '<S111>/Switch5'
       */
      KL15PwrSply_DD_PwrSplyRealErr26 = 1U;
    } else if (rtb_DTC_RLALampCtlUnitPowerO_b5 && rtb_DTC_RLALampCtlUnitPowerOC_n) {
      /* Switch: '<S111>/Switch1' incorporates:
       *  Constant: '<S111>/Constant1'
       *  Switch: '<S111>/Switch5'
       *  Switch: '<S111>/Switch6'
       */
      KL15PwrSply_DD_PwrSplyRealErr26 = 4U;
    } else {
      /* Switch: '<S111>/Switch6' incorporates:
       *  Constant: '<S111>/Constant3'
       *  Switch: '<S111>/Switch1'
       *  Switch: '<S111>/Switch5'
       */
      KL15PwrSply_DD_PwrSplyRealErr26 = 0U;
    }

    /* End of Switch: '<S111>/Switch4' */

    /* Outputs for Enabled SubSystem: '<S19>/RealErrHold' incorporates:
     *  EnablePort: '<S108>/Enable'
     */
    if (((0 == KL15PwrSply_DD_PwrSplyRealErr26) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_iy != KL15PwrSply_DD_PwrSplyRealErr26) && (0 != KL15PwrSply_DD_PwrSplyRealErr26))) {
      KL15PwrSply_DD_B.stRealErr_gb = KL15PwrSply_DD_PwrSplyRealErr26;
    }

    /* End of Outputs for SubSystem: '<S19>/RealErrHold' */

    /* Switch: '<S19>/Switch2' incorporates:
     *  Constant: '<S19>/Constant13'
     *  Constant: '<S19>/Constant33'
     *  Constant: '<S19>/Constant34'
     *  Constant: '<S19>/Constant6'
     *  Inport: '<S108>/stRealErr'
     *  Logic: '<S19>/Logical Operator5'
     *  Logic: '<S19>/Logical Operator6'
     *  Logic: '<S19>/Logical Operator7'
     *  Product: '<S19>/Product'
     *  RelationalOperator: '<S19>/Relational Operator4'
     *  RelationalOperator: '<S19>/Relational Operator5'
     *  RelationalOperator: '<S19>/Relational Operator6'
     *  UnitDelay: '<S19>/Unit Delay1'
     *  UnitDelay: '<S19>/Unit Delay2'
     */
    if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_ic != 0) {
      KL15PwrSply_DD_B.Switch2_f = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr26_Calc * 0.01F);
    } else {
      KL15PwrSply_DD_B.Switch2_f = 0U;
    }

    /* End of Switch: '<S19>/Switch2' */

    /* DataTypeConversion: '<S19>/DataTypeConversion2' */
    KL15PwrSply_DD_B.DataTypeConversion2_hj = (rtb_Switch_j != 0);

    /* Update for UnitDelay: '<S19>/Unit Delay4' */
    KL15PwrSply_DD_DW.UnitDelay4_DSTATE_bq = rtb_Switch_j;

    /* Update for UnitDelay: '<S19>/Unit Delay' */
    KL15PwrSply_DD_DW.UnitDelay_DSTATE_h = tmpIRead_2[25];

    /* Update for UnitDelay: '<S19>/Unit Delay3' incorporates:
     *  DataTypeConversion: '<S19>/DataTypeConversion4'
     */
    KL15PwrSply_DD_DW.UnitDelay3_DSTATE_k = (rtb_Switch_j != 0);

    /* Update for UnitDelay: '<S19>/Unit Delay2' */
    KL15PwrSply_DD_DW.UnitDelay2_DSTATE_iy = KL15PwrSply_DD_PwrSplyRealErr26;

    /* Update for UnitDelay: '<S19>/Unit Delay1' */
    KL15PwrSply_DD_DW.UnitDelay1_DSTATE_ic = rtb_Switch_j;
  }

  /* End of Logic: '<S1>/Logical Operator12' */
  /* End of Outputs for SubSystem: '<S1>/RLALampCtlUnit_Ctl_2F_Diag_CutOff' */

  /* Logic: '<S1>/Logical Operator7' incorporates:
   *  Constant: '<S1>/Constant22'
   *  Inport: '<Root>/PwrSply_bNetSleepFlag_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd01_Val'
   *  Inport: '<Root>/PwrSply_bPositionLightTimingOFFEnableCfg_Val'
   *  Logic: '<S1>/Logical Operator10'
   *  Logic: '<S1>/Logical Operator11'
   *  Logic: '<S1>/Logical Operator4'
   *  Logic: '<S1>/Logical Operator8'
   *  Logic: '<S1>/Logical Operator9'
   *  RelationalOperator: '<S1>/Relational Operator5'
   */
  rtb_DTC_RLALampCtlUnitPowerS_gp = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bNetSleepFlag_Val();
  rtb_DTC_RLALampCtlUnitPowerO_b5 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bPositionLightCtrlCmd01_Val();
  rtb_DTC_RLALampCtlUnitPowerSC_k = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bPositionLightTimingOFFEnableCfg_Val();
  rtb_LogicalOperator7 = (rtb_DTC_RLALampCtlUnitPowerS_gp && (KL15PwrSply_DD_PwrSplyRealErr26 == 2) && rtb_DTC_RLALampCtlUnitPowerO_b5 && rtb_DTC_RLALampCtlUnitPowerSC_k);

  /* S-Function (Efx_Debounce_sf): '<S40>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant23'
   *  Constant: '<S1>/Constant24'
   *  Constant: '<S40>/Reset'
   *  Constant: '<S40>/THighLow'
   *  Constant: '<S40>/X_Init'
   *  S-Function (Upcast_sf): '<S40>/Upcast'
   *  S-Function (Upcast_sf): '<S40>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 100);
    rtb_Efx_Debounce_sf_j = Efx_Debounce_u8_u8(rtb_LogicalOperator7, &RLALampWkUpOnDly, &paramdebounce_loc, 10000 );
  }

  /* Chart: '<S1>/RLALampAllwSleepDly' incorporates:
   *  Constant: '<S1>/Constant34'
   */
  /* Gateway: KL15PwrSply_DD_Runnable_10ms_sys/RLALampAllwSleepDly */
  /* During: KL15PwrSply_DD_Runnable_10ms_sys/RLALampAllwSleepDly */
  if (KL15PwrSply_DD_DW.is_active_c1_KL15PwrSply_DD == 0U) {
    /* Entry: KL15PwrSply_DD_Runnable_10ms_sys/RLALampAllwSleepDly */
    KL15PwrSply_DD_DW.is_active_c1_KL15PwrSply_DD = 1U;

    /* Entry Internal: KL15PwrSply_DD_Runnable_10ms_sys/RLALampAllwSleepDly */
    /* Transition: '<S18>:4' */
    KL15PwrSply_DD_DW.is_c1_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

    /* Entry 'Normal': '<S18>:3' */
    /* '<S18>:3:1' flgAllwSleep_NW=false; */
    KL15PwrS_flgRLALampAllwSleep_NW = false;

    /* '<S18>:3:1' AllwSleepTiming=0; */
    KL15PwrSply_DD_B.AllwSleepTiming_h = 0U;
  } else {
    switch (KL15PwrSply_DD_DW.is_c1_KL15PwrSply_DD) {
     case KL15PwrSply_DD_IN_AllwSleep:
      KL15PwrS_flgRLALampAllwSleep_NW = false;

      /* During 'AllwSleep': '<S18>:15' */
      /* '<S18>:18:1' sf_internal_predicateOutput = ~flgNMHold; */
      if (!rtb_Efx_Debounce_sf_j) {
        /* Transition: '<S18>:18' */
        KL15PwrSply_DD_DW.is_c1_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

        /* Entry 'Normal': '<S18>:3' */
        /* '<S18>:3:1' flgAllwSleep_NW=false; */
        KL15PwrS_flgRLALampAllwSleep_NW = false;

        /* '<S18>:3:1' AllwSleepTiming=0; */
        KL15PwrSply_DD_B.AllwSleepTiming_h = 0U;
      }
      break;

     case KL15PwrSply_DD_IN_NWHold:
      KL15PwrS_flgRLALampAllwSleep_NW = true;

      /* During 'NWHold': '<S18>:5' */
      /* '<S18>:8:1' sf_internal_predicateOutput = ~flgNMHold; */
      if (!rtb_Efx_Debounce_sf_j) {
        /* Transition: '<S18>:8' */
        KL15PwrSply_DD_DW.is_c1_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

        /* Entry 'Normal': '<S18>:3' */
        /* '<S18>:3:1' flgAllwSleep_NW=false; */
        KL15PwrS_flgRLALampAllwSleep_NW = false;

        /* '<S18>:3:1' AllwSleepTiming=0; */
        KL15PwrSply_DD_B.AllwSleepTiming_h = 0U;
      } else {
        /* '<S18>:17:1' sf_internal_predicateOutput = AllwSleepTiming>AllwSleepNWTime; */
        if (KL15PwrSply_DD_B.AllwSleepTiming_h > 3000) {
          /* Transition: '<S18>:17' */
          KL15PwrSply_DD_DW.is_c1_KL15PwrSply_DD = KL15PwrSply_DD_IN_AllwSleep;

          /* Entry 'AllwSleep': '<S18>:15' */
          /* '<S18>:15:1' flgAllwSleep_NW=false; */
          KL15PwrS_flgRLALampAllwSleep_NW = false;

          /* '<S18>:15:1' AllwSleepTiming=0; */
          KL15PwrSply_DD_B.AllwSleepTiming_h = 0U;
        } else {
          /* '<S18>:5:1' AllwSleepTiming=AllwSleepTiming+1; */
          KL15PwrSply_DD_B.AllwSleepTiming_h = Mfx_Add_u16u16_u16(KL15PwrSply_DD_B.AllwSleepTiming_h, 1U);
        }
      }
      break;

     default:
      KL15PwrS_flgRLALampAllwSleep_NW = false;

      /* During 'Normal': '<S18>:3' */
      /* '<S18>:6:1' sf_internal_predicateOutput = flgNMHold; */
      if (rtb_Efx_Debounce_sf_j) {
        /* Transition: '<S18>:6' */
        KL15PwrSply_DD_DW.is_c1_KL15PwrSply_DD = KL15PwrSply_DD_IN_NWHold;

        /* Entry 'NWHold': '<S18>:5' */
        /* '<S18>:5:1' flgAllwSleep_NW=true; */
        KL15PwrS_flgRLALampAllwSleep_NW = true;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/RLALampAllwSleepDly' */

  /* DataStoreWrite: '<S1>/Data Store Write' */
  RLALampAllwSleepTiming = KL15PwrSply_DD_B.AllwSleepTiming_h;

  /* Outputs for Enabled SubSystem: '<S1>/RLBLampCtlUnit_Ctl_2F_Diag_CutOff' incorporates:
   *  EnablePort: '<S22>/Enable'
   */
  /* RelationalOperator: '<S1>/Relational Operator14' incorporates:
   *  Constant: '<S1>/Constant57'
   *  Constant: '<S22>/Constant33'
   *  Constant: '<S22>/Constant34'
   *  Inport: '<S119>/stRealErr'
   *  Logic: '<S22>/Logical Operator5'
   *  Logic: '<S22>/Logical Operator6'
   *  Logic: '<S22>/Logical Operator7'
   *  RelationalOperator: '<S22>/Relational Operator4'
   *  RelationalOperator: '<S22>/Relational Operator5'
   *  RelationalOperator: '<S22>/Relational Operator6'
   *  UnitDelay: '<S22>/Unit Delay2'
   */
  if (rtb_DataTypeConversion_jj == 2) {
    /* UnitDelay: '<S22>/Unit Delay4' */
    rtb_UnitDelay4_g = KL15PwrSply_DD_DW.UnitDelay4_DSTATE_ef;

    /* S-Function (Efx_Debounce_sf): '<S120>/Efx_Debounce_sf' incorporates:
     *  Constant: '<S120>/Reset'
     *  Constant: '<S120>/THighLow'
     *  Constant: '<S120>/X_Init'
     *  Constant: '<S22>/Constant1'
     *  Constant: '<S22>/Constant2'
     *  S-Function (Upcast_sf): '<S120>/Upcast'
     *  S-Function (Upcast_sf): '<S120>/Upcast1'
     */
    {
      Efx_DebounceParam_Type paramdebounce_loc;
      Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
      rtb_Efx_Debounce_sf_e = Efx_Debounce_u8_u8(rtb_UnitDelay4_g, &RLBLampCtlUnitOnDiagDly_I, &paramdebounce_loc, 10000 );
    }

    /* RelationalOperator: '<S22>/Relational Operator1' incorporates:
     *  Constant: '<S22>/Constant4'
     */
    rtb_DTC_RLALampCtlUnitPowerOL_n = (tmpIRead_2[27] == 1);

    /* RelationalOperator: '<S22>/Relational Operator2' incorporates:
     *  Constant: '<S22>/Constant5'
     */
    rtb_DTC_RLBLampCtlUnitPowerSC_k = (tmpIRead_2[27] == 2);

    /* Logic: '<S22>/Logical Operator10' incorporates:
     *  Constant: '<S22>/Constant3'
     *  Logic: '<S22>/Logical Operator3'
     *  Logic: '<S22>/Logical Operator4'
     *  RelationalOperator: '<S22>/Relational Operator'
     *  UnitDelay: '<S22>/Unit Delay'
     */
    rtb_LogicalOperator10_j = ((KL15PwrSply_DD_DW.UnitDelay_DSTATE_jy != 0) || ((!rtb_DTC_RLALampCtlUnitPowerOL_n) && (!rtb_DTC_RLBLampCtlUnitPowerSC_k)));

    /* S-Function (Efx_Debounce_sf): '<S121>/Efx_Debounce_sf' incorporates:
     *  Constant: '<S121>/Reset'
     *  Constant: '<S121>/THighLow'
     *  Constant: '<S121>/X_Init'
     *  Constant: '<S22>/Constant10'
     *  Constant: '<S22>/Constant9'
     *  S-Function (Upcast_sf): '<S121>/Upcast'
     *  S-Function (Upcast_sf): '<S121>/Upcast1'
     */
    {
      Efx_DebounceParam_Type paramdebounce_loc;
      Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
      rtb_DTC_RLBLampCtlUnitPowerSC_k = Efx_Debounce_u8_u8(rtb_LogicalOperator10_j, &RLBLampCtlUnitOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
    }

    /* FunctionCaller: '<S22>/DTC_RLBLampCtlUnitPowerSCG_GetEventFailed' */
    Rte_Call_DTC_RLBLampCtlUnitPowerSCG_GetEventFailed(&rtb_DTC_RLALampCtlUnitPowerOL_n);

    /* FunctionCaller: '<S22>/DTC_RLBLampCtlUnitPowerSCG_GetEventTested' */
    Rte_Call_DTC_RLBLampCtlUnitPowerSCG_GetEventTested(&rtb_DTC_RLBLampCtlUnitPowerSC_f);

    /* Logic: '<S22>/Logical Operator14' */
    rtb_DTC_RLALampCtlUnitPowerOL_o = (rtb_DTC_RLALampCtlUnitPowerOL_n && rtb_DTC_RLBLampCtlUnitPowerSC_f);

    /* FunctionCaller: '<S22>/DTC_RLBLampCtlUnitPowerOC_GetEventFailed' */
    Rte_Call_DTC_RLBLampCtlUnitPowerOC_GetEventFailed(&rtb_DTC_RLBLampCtlUnitPowerSC_f);

    /* FunctionCaller: '<S22>/DTC_RLBLampCtlUnitPowerOC_GetEventTested' */
    Rte_Call_DTC_RLBLampCtlUnitPowerOC_GetEventTested(&rtb_DTC_RLALampCtlUnitPowerOL_n);

    /* Switch: '<S22>/Switch' incorporates:
     *  Constant: '<S22>/Constant'
     *  Inport: '<Root>/KL15PwrSply_bRLBLampCtlUnitPowerTrigUds_Val'
     *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
     *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
     *  Logic: '<S22>/Logical Operator13'
     *  Logic: '<S22>/Logical Operator15'
     *  Logic: '<S22>/Logical Operator8'
     *  Logic: '<S22>/Logical Operator9'
     *  MultiPortSwitch: '<S22>/MultiportSwitch11'
     *  Switch: '<S22>/Switch1'
     *  Switch: '<S22>/Switch41'
     *  UnitDelay: '<S22>/Unit Delay3'
     */
    if ((rtb_DTC_RLALampCtlUnitPowerOL_o || (rtb_DTC_RLBLampCtlUnitPowerSC_f && rtb_DTC_RLALampCtlUnitPowerOL_n)) && rtb_DTC_RLBLampCtlUnitPowerSC_k) {
      rtb_Switch_j = 0U;
    } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bRLBLampCtlUnitPowerTrigUds_Val()) {
      /* Switch: '<S22>/Switch1' incorporates:
       *  Inport: '<Root>/KL15PwrSply_u8stRLBLampCtlUnitPowerUds_Val'
       */
      rtb_Switch_j = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stRLBLampCtlUnitPowerUds_Val();
    } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
      /* MultiPortSwitch: '<S22>/MultiportSwitch11' incorporates:
       *  Switch: '<S22>/Switch1'
       */
      rtb_Switch_j = tmpIRead_1[27];
    } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_gy && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
      /* Switch: '<S22>/Switch41' incorporates:
       *  Constant: '<S22>/Constant27'
       *  MultiPortSwitch: '<S22>/MultiportSwitch11'
       *  Switch: '<S22>/Switch1'
       */
      rtb_Switch_j = 1U;
    } else {
      /* MultiPortSwitch: '<S22>/MultiportSwitch11' incorporates:
       *  Switch: '<S22>/Switch1'
       *  Switch: '<S22>/Switch41'
       */
      rtb_Switch_j = tmpIRead_1[27];
    }

    /* End of Switch: '<S22>/Switch' */

    /* FunctionCaller: '<S22>/IoHwAb_IoDiagPwm_Pwm_Get' */
    Rte_Call_IoHwAb_IoDiagPwm_Pwm_Get(O_P_KL15PwrSply28, &KL15PwrSply_D_PwrSplyDiag28_Get);

    /* SwitchCase: '<S22>/Switch Case1' incorporates:
     *  Logic: '<S22>/Logical Operator1'
     *  Logic: '<S22>/Logical Operator2'
     */
    if (rtb_LogicalOperator && (rtb_Switch_j == 0)) {
      /* Outputs for IfAction SubSystem: '<S22>/RLBLampCtlUnitOffDiagErr_Set' incorporates:
       *  ActionPort: '<S116>/Action Port'
       */
      /* Switch: '<S116>/Switch1' incorporates:
       *  Constant: '<S116>/Constant5'
       *  Constant: '<S116>/Constant6'
       *  DataTypeConversion: '<S123>/Extract Desired Bits'
       */
      if (((uint8)KL15PwrSply_D_PwrSplyDiag28_Get & 1U) != 0U) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S116>/Switch1' */

      /* FunctionCaller: '<S116>/DTC_RLBLampCtlUnitPowerSCB_SetEventStatus' */
      Rte_Call_DTC_RLBLampCtlUnitPowerSCB_SetEventStatus(rtb_Switch4_k3);

      /* End of Outputs for SubSystem: '<S22>/RLBLampCtlUnitOffDiagErr_Set' */
    } else {
      /* Outputs for IfAction SubSystem: '<S22>/RLBLampCtlUnitOffDiagErr_DebounceReset' incorporates:
       *  ActionPort: '<S115>/Action Port'
       */
      /* FunctionCaller: '<S115>/DTC_RLBLampCtlUnitPowerSCB_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S115>/Constant'
       */
      Rte_Call_DTC_RLBLampCtlUnitPowerSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S22>/RLBLampCtlUnitOffDiagErr_DebounceReset' */
    }

    /* End of SwitchCase: '<S22>/Switch Case1' */

    /* FunctionCaller: '<S22>/IoHwAb_IoSigAdc_Adc_Get' */
    Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol28, &KL15PwrSply_DD_PwrVol28_Get);

    /* Product: '<S22>/Divide1' */
    KL15PwrSply_DD_PwrCurr28_Calc = (float32)KL15PwrSply_DD_PwrVol28_Get / 1780.0F * 20000.0F;

    /* SwitchCase: '<S22>/Switch Case' incorporates:
     *  Logic: '<S22>/Logical Operator'
     */
    if (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_e != 0)) {
      /* Outputs for IfAction SubSystem: '<S22>/RLBLampCtlUnitOnDiagErr_Set' incorporates:
       *  ActionPort: '<S118>/Action Port'
       */
      /* Switch: '<S118>/Switch8' incorporates:
       *  Constant: '<S118>/Constant'
       *  Constant: '<S118>/Constant13'
       *  DataTypeConversion: '<S118>/DataTypeConversion1'
       *  DataTypeConversion: '<S124>/Extract Desired Bits'
       */
      if (OLFaultBypass) {
        rtb_DTC_RLALampCtlUnitPowerOC_m = false;
      } else {
        rtb_DTC_RLALampCtlUnitPowerOC_m = (((uint8)(KL15PwrSply_D_PwrSplyDiag28_Get >> 3) & 1U) != 0U);
      }

      /* End of Switch: '<S118>/Switch8' */

      /* Switch: '<S118>/Switch1' incorporates:
       *  Constant: '<S118>/Constant3'
       *  Constant: '<S118>/Constant4'
       */
      if (rtb_DTC_RLALampCtlUnitPowerOC_m) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S118>/Switch1' */

      /* FunctionCaller: '<S118>/DTC_RLBLampCtlUnitPowerOL_SetEventStatus' */
      Rte_Call_DTC_RLBLampCtlUnitPowerOL_SetEventStatus(rtb_Switch4_k3);

      /* Switch: '<S118>/Switch' incorporates:
       *  Constant: '<S118>/Constant1'
       *  Constant: '<S118>/Constant2'
       *  DataTypeConversion: '<S118>/DataTypeConversion'
       *  DataTypeConversion: '<S125>/Extract Desired Bits'
       */
      if (((uint8)(KL15PwrSply_D_PwrSplyDiag28_Get >> 1) & 1) << 1 != 0) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S118>/Switch' */

      /* FunctionCaller: '<S118>/DTC_RLBLampCtlUnitPowerSCG_SetEventStatus' */
      Rte_Call_DTC_RLBLampCtlUnitPowerSCG_SetEventStatus(rtb_Switch4_k3);

      /* Switch: '<S118>/Switch4' incorporates:
       *  Constant: '<S118>/Constant10'
       *  Constant: '<S118>/Constant9'
       *  Logic: '<S22>/Logical Operator11'
       *  RelationalOperator: '<S22>/Relational Operator7'
       *  Sum: '<S118>/Add2'
       *  UnitDelay: '<S118>/UnitDelay2'
       */
      if ((KL15PwrSply_DD_PwrCurr28_Calc > tmpIRead_0[20]) && (rtb_Efx_Debounce_sf_e != 0)) {
        rtb_Switch4_mq = Mfx_Add_u16u16_u16(KL15PwrSply_DD_DW.UnitDelay2_DSTATE_om, 10U);
      } else {
        rtb_Switch4_mq = 0U;
      }

      /* End of Switch: '<S118>/Switch4' */

      /* Switch: '<S118>/Switch3' incorporates:
       *  Constant: '<S118>/Constant7'
       *  Constant: '<S118>/Constant8'
       *  RelationalOperator: '<S118>/RelationalOperator2'
       */
      if (rtb_Switch4_mq > tmpIRead[20]) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_FAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PASSED;
      }

      /* End of Switch: '<S118>/Switch3' */

      /* FunctionCaller: '<S118>/DTC_RLBLampCtlUnitPowerOC_SetEventStatus' */
      Rte_Call_DTC_RLBLampCtlUnitPowerOC_SetEventStatus(rtb_Switch4_k3);

      /* Update for UnitDelay: '<S118>/UnitDelay2' */
      KL15PwrSply_DD_DW.UnitDelay2_DSTATE_om = rtb_Switch4_mq;

      /* End of Outputs for SubSystem: '<S22>/RLBLampCtlUnitOnDiagErr_Set' */
    } else {
      /* Outputs for IfAction SubSystem: '<S22>/RLBLampCtlUnitOnDiagErr_DebounceReset' incorporates:
       *  ActionPort: '<S117>/Action Port'
       */
      /* FunctionCaller: '<S117>/DTC_RLBLampCtlUnitPowerOC_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S117>/Constant'
       */
      Rte_Call_DTC_RLBLampCtlUnitPowerOC_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* FunctionCaller: '<S117>/DTC_RLBLampCtlUnitPowerOL_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S117>/Constant1'
       */
      Rte_Call_DTC_RLBLampCtlUnitPowerOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* FunctionCaller: '<S117>/DTC_RLBLampCtlUnitPowerSCG_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S117>/Constant2'
       */
      Rte_Call_DTC_RLBLampCtlUnitPowerSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S22>/RLBLampCtlUnitOnDiagErr_DebounceReset' */
    }

    /* End of SwitchCase: '<S22>/Switch Case' */

    /* DataTypeConversion: '<S22>/DataTypeConversion3' */
    rtb_DTC_RLBLampCtlUnitPowerSC_f = (rtb_Switch_j != 0);

    /* Switch: '<S22>/Switch66' incorporates:
     *  Constant: '<S22>/Constant14'
     *  Constant: '<S22>/Constant140'
     *  DataTypeConversion: '<S22>/DataTypeConversion3'
     */
    if (rtb_Switch_j != 0) {
      KL15PwrSply_DD_PwrSply_stCtrl28 = 32768U;
    } else {
      KL15PwrSply_DD_PwrSply_stCtrl28 = 0U;
    }

    /* End of Switch: '<S22>/Switch66' */

    /* FunctionCaller: '<S22>/IoHwAb_IoSigPwm_Pwm_SetDuty' */
    Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_KL15PwrSply28, KL15PwrSply_DD_PwrSply_stCtrl28);

    /* FunctionCaller: '<S122>/DTC_RLBLampCtlUnitPowerSCB_GetEventFailed' */
    Rte_Call_DTC_RLBLampCtlUnitPowerSCB_GetEventFailed(&rtb_DTC_RLBLampCtlUnitPowerSC_f);

    /* FunctionCaller: '<S122>/DTC_RLBLampCtlUnitPowerSCB_GetEventTested' */
    Rte_Call_DTC_RLBLampCtlUnitPowerSCB_GetEventTested(&rtb_DTC_RLBLampCtlUnitPowerSC_k);

    /* FunctionCaller: '<S122>/DTC_RLBLampCtlUnitPowerOL_GetEventFailed' */
    Rte_Call_DTC_RLBLampCtlUnitPowerOL_GetEventFailed(&rtb_DTC_RLBLampCtlUnitPowerOL_o);

    /* FunctionCaller: '<S122>/DTC_RLBLampCtlUnitPowerOL_GetEventTested' */
    Rte_Call_DTC_RLBLampCtlUnitPowerOL_GetEventTested(&rtb_DTC_RLBLampCtlUnitPowerOL_p);

    /* FunctionCaller: '<S122>/DTC_RLBLampCtlUnitPowerSCG_GetEventFailed' */
    Rte_Call_DTC_RLBLampCtlUnitPowerSCG_GetEventFailed(&rtb_DTC_RLBLampCtlUnitPowerSC_g);

    /* FunctionCaller: '<S122>/DTC_RLBLampCtlUnitPowerSCG_GetEventTested' */
    Rte_Call_DTC_RLBLampCtlUnitPowerSCG_GetEventTested(&rtb_DTC_RLBLampCtlUnitPowerS_ee);

    /* FunctionCaller: '<S122>/DTC_RLBLampCtlUnitPowerOC_GetEventFailed' */
    Rte_Call_DTC_RLBLampCtlUnitPowerOC_GetEventFailed(&rtb_DTC_RLBLampCtlUnitPowerOC_n);

    /* FunctionCaller: '<S122>/DTC_RLBLampCtlUnitPowerOC_GetEventTested' */
    Rte_Call_DTC_RLBLampCtlUnitPowerOC_GetEventTested(&rtb_DTC_RLBLampCtlUnitPowerOC_o);

    /* Switch: '<S122>/Switch4' incorporates:
     *  Constant: '<S122>/Constant5'
     *  Constant: '<S122>/Constant59'
     *  Constant: '<S122>/Constant8'
     *  Logic: '<S122>/Logical Operator1'
     *  Logic: '<S122>/Logical Operator4'
     *  Logic: '<S122>/Logical Operator6'
     *  Logic: '<S122>/Logical Operator7'
     *  RelationalOperator: '<S122>/Relational Operator'
     *  RelationalOperator: '<S122>/Relational Operator1'
     *  Switch: '<S122>/Switch1'
     *  Switch: '<S122>/Switch5'
     *  Switch: '<S122>/Switch6'
     */
    if (rtb_DTC_RLBLampCtlUnitPowerSC_f && rtb_DTC_RLBLampCtlUnitPowerSC_k && (rtb_Switch_j == 0)) {
      KL15PwrSply_DD_PwrSplyRealErr28 = 2U;
    } else if (rtb_DTC_RLBLampCtlUnitPowerOL_o && rtb_DTC_RLBLampCtlUnitPowerOL_p && (rtb_Switch_j == 1)) {
      /* Switch: '<S122>/Switch5' incorporates:
       *  Constant: '<S122>/Constant6'
       */
      KL15PwrSply_DD_PwrSplyRealErr28 = 3U;
    } else if (rtb_DTC_RLBLampCtlUnitPowerSC_g && rtb_DTC_RLBLampCtlUnitPowerS_ee) {
      /* Switch: '<S122>/Switch6' incorporates:
       *  Constant: '<S122>/Constant7'
       *  Switch: '<S122>/Switch5'
       */
      KL15PwrSply_DD_PwrSplyRealErr28 = 1U;
    } else if (rtb_DTC_RLBLampCtlUnitPowerOC_n && rtb_DTC_RLBLampCtlUnitPowerOC_o) {
      /* Switch: '<S122>/Switch1' incorporates:
       *  Constant: '<S122>/Constant1'
       *  Switch: '<S122>/Switch5'
       *  Switch: '<S122>/Switch6'
       */
      KL15PwrSply_DD_PwrSplyRealErr28 = 4U;
    } else {
      /* Switch: '<S122>/Switch6' incorporates:
       *  Constant: '<S122>/Constant3'
       *  Switch: '<S122>/Switch1'
       *  Switch: '<S122>/Switch5'
       */
      KL15PwrSply_DD_PwrSplyRealErr28 = 0U;
    }

    /* End of Switch: '<S122>/Switch4' */

    /* Outputs for Enabled SubSystem: '<S22>/RealErrHold' incorporates:
     *  EnablePort: '<S119>/Enable'
     */
    if (((0 == KL15PwrSply_DD_PwrSplyRealErr28) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_eg != KL15PwrSply_DD_PwrSplyRealErr28) && (0 != KL15PwrSply_DD_PwrSplyRealErr28))) {
      KL15PwrSply_DD_B.stRealErr_m = KL15PwrSply_DD_PwrSplyRealErr28;
    }

    /* End of Outputs for SubSystem: '<S22>/RealErrHold' */

    /* Switch: '<S22>/Switch2' incorporates:
     *  Constant: '<S22>/Constant13'
     *  Constant: '<S22>/Constant33'
     *  Constant: '<S22>/Constant34'
     *  Constant: '<S22>/Constant6'
     *  Inport: '<S119>/stRealErr'
     *  Logic: '<S22>/Logical Operator5'
     *  Logic: '<S22>/Logical Operator6'
     *  Logic: '<S22>/Logical Operator7'
     *  Product: '<S22>/Product'
     *  RelationalOperator: '<S22>/Relational Operator4'
     *  RelationalOperator: '<S22>/Relational Operator5'
     *  RelationalOperator: '<S22>/Relational Operator6'
     *  UnitDelay: '<S22>/Unit Delay1'
     *  UnitDelay: '<S22>/Unit Delay2'
     */
    if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_lm != 0) {
      KL15PwrSply_DD_B.Switch2_p = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr28_Calc * 0.01F);
    } else {
      KL15PwrSply_DD_B.Switch2_p = 0U;
    }

    /* End of Switch: '<S22>/Switch2' */

    /* DataTypeConversion: '<S22>/DataTypeConversion2' */
    KL15PwrSply_DD_B.DataTypeConversion2_c = (rtb_Switch_j != 0);

    /* Update for UnitDelay: '<S22>/Unit Delay4' */
    KL15PwrSply_DD_DW.UnitDelay4_DSTATE_ef = rtb_Switch_j;

    /* Update for UnitDelay: '<S22>/Unit Delay' */
    KL15PwrSply_DD_DW.UnitDelay_DSTATE_jy = tmpIRead_2[27];

    /* Update for UnitDelay: '<S22>/Unit Delay3' incorporates:
     *  DataTypeConversion: '<S22>/DataTypeConversion4'
     */
    KL15PwrSply_DD_DW.UnitDelay3_DSTATE_gy = (rtb_Switch_j != 0);

    /* Update for UnitDelay: '<S22>/Unit Delay2' */
    KL15PwrSply_DD_DW.UnitDelay2_DSTATE_eg = KL15PwrSply_DD_PwrSplyRealErr28;

    /* Update for UnitDelay: '<S22>/Unit Delay1' */
    KL15PwrSply_DD_DW.UnitDelay1_DSTATE_lm = rtb_Switch_j;
  }

  /* End of Outputs for SubSystem: '<S1>/RLBLampCtlUnit_Ctl_2F_Diag_CutOff' */

  /* Logic: '<S1>/Logical Operator8' incorporates:
   *  Constant: '<S1>/Constant25'
   *  RelationalOperator: '<S1>/Relational Operator7'
   */
  rtb_LogicalOperator8 = (rtb_DTC_RLALampCtlUnitPowerS_gp && (KL15PwrSply_DD_PwrSplyRealErr28 == 2) && rtb_DTC_RLALampCtlUnitPowerO_b5 && rtb_DTC_RLALampCtlUnitPowerSC_k);

  /* S-Function (Efx_Debounce_sf): '<S41>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant26'
   *  Constant: '<S1>/Constant27'
   *  Constant: '<S41>/Reset'
   *  Constant: '<S41>/THighLow'
   *  Constant: '<S41>/X_Init'
   *  S-Function (Upcast_sf): '<S41>/Upcast'
   *  S-Function (Upcast_sf): '<S41>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 100);
    rtb_Efx_Debounce_sf_g = Efx_Debounce_u8_u8(rtb_LogicalOperator8, &RLBLampWkUpOnDly, &paramdebounce_loc, 10000 );
  }

  /* Chart: '<S1>/RLBLampAllwSleepDly' incorporates:
   *  Constant: '<S1>/Constant35'
   */
  /* Gateway: KL15PwrSply_DD_Runnable_10ms_sys/RLBLampAllwSleepDly */
  /* During: KL15PwrSply_DD_Runnable_10ms_sys/RLBLampAllwSleepDly */
  if (KL15PwrSply_DD_DW.is_active_c2_KL15PwrSply_DD == 0U) {
    /* Entry: KL15PwrSply_DD_Runnable_10ms_sys/RLBLampAllwSleepDly */
    KL15PwrSply_DD_DW.is_active_c2_KL15PwrSply_DD = 1U;

    /* Entry Internal: KL15PwrSply_DD_Runnable_10ms_sys/RLBLampAllwSleepDly */
    /* Transition: '<S21>:4' */
    KL15PwrSply_DD_DW.is_c2_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

    /* Entry 'Normal': '<S21>:3' */
    /* '<S21>:3:1' flgAllwSleep_NW=false; */
    KL15PwrS_flgRLBLampAllwSleep_NW = false;

    /* '<S21>:3:1' AllwSleepTiming=0; */
    KL15PwrSply_DD_B.AllwSleepTiming_ll = 0U;
  } else {
    switch (KL15PwrSply_DD_DW.is_c2_KL15PwrSply_DD) {
     case KL15PwrSply_DD_IN_AllwSleep:
      KL15PwrS_flgRLBLampAllwSleep_NW = false;

      /* During 'AllwSleep': '<S21>:15' */
      /* '<S21>:18:1' sf_internal_predicateOutput = ~flgNMHold; */
      if (!rtb_Efx_Debounce_sf_g) {
        /* Transition: '<S21>:18' */
        KL15PwrSply_DD_DW.is_c2_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

        /* Entry 'Normal': '<S21>:3' */
        /* '<S21>:3:1' flgAllwSleep_NW=false; */
        KL15PwrS_flgRLBLampAllwSleep_NW = false;

        /* '<S21>:3:1' AllwSleepTiming=0; */
        KL15PwrSply_DD_B.AllwSleepTiming_ll = 0U;
      }
      break;

     case KL15PwrSply_DD_IN_NWHold:
      KL15PwrS_flgRLBLampAllwSleep_NW = true;

      /* During 'NWHold': '<S21>:5' */
      /* '<S21>:8:1' sf_internal_predicateOutput = ~flgNMHold; */
      if (!rtb_Efx_Debounce_sf_g) {
        /* Transition: '<S21>:8' */
        KL15PwrSply_DD_DW.is_c2_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

        /* Entry 'Normal': '<S21>:3' */
        /* '<S21>:3:1' flgAllwSleep_NW=false; */
        KL15PwrS_flgRLBLampAllwSleep_NW = false;

        /* '<S21>:3:1' AllwSleepTiming=0; */
        KL15PwrSply_DD_B.AllwSleepTiming_ll = 0U;
      } else {
        /* '<S21>:17:1' sf_internal_predicateOutput = AllwSleepTiming>AllwSleepNWTime; */
        if (KL15PwrSply_DD_B.AllwSleepTiming_ll > 3000) {
          /* Transition: '<S21>:17' */
          KL15PwrSply_DD_DW.is_c2_KL15PwrSply_DD = KL15PwrSply_DD_IN_AllwSleep;

          /* Entry 'AllwSleep': '<S21>:15' */
          /* '<S21>:15:1' flgAllwSleep_NW=false; */
          KL15PwrS_flgRLBLampAllwSleep_NW = false;

          /* '<S21>:15:1' AllwSleepTiming=0; */
          KL15PwrSply_DD_B.AllwSleepTiming_ll = 0U;
        } else {
          /* '<S21>:5:1' AllwSleepTiming=AllwSleepTiming+1; */
          KL15PwrSply_DD_B.AllwSleepTiming_ll = Mfx_Add_u16u16_u16(KL15PwrSply_DD_B.AllwSleepTiming_ll, 1U);
        }
      }
      break;

     default:
      KL15PwrS_flgRLBLampAllwSleep_NW = false;

      /* During 'Normal': '<S21>:3' */
      /* '<S21>:6:1' sf_internal_predicateOutput = flgNMHold; */
      if (rtb_Efx_Debounce_sf_g) {
        /* Transition: '<S21>:6' */
        KL15PwrSply_DD_DW.is_c2_KL15PwrSply_DD = KL15PwrSply_DD_IN_NWHold;

        /* Entry 'NWHold': '<S21>:5' */
        /* '<S21>:5:1' flgAllwSleep_NW=true; */
        KL15PwrS_flgRLBLampAllwSleep_NW = true;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/RLBLampAllwSleepDly' */

  /* DataStoreWrite: '<S1>/Data Store Write1' */
  RLBLampAllwSleepTiming = KL15PwrSply_DD_B.AllwSleepTiming_ll;

  /* Outputs for Enabled SubSystem: '<S1>/RRALampCtlUnit_Ctl_2F_Diag_CutOff' incorporates:
   *  EnablePort: '<S26>/Enable'
   */
  /* Logic: '<S1>/Logical Operator13' incorporates:
   *  Constant: '<S1>/Constant55'
   *  Constant: '<S1>/Constant56'
   *  Constant: '<S26>/Constant33'
   *  Constant: '<S26>/Constant34'
   *  Inport: '<S141>/stRealErr'
   *  Logic: '<S26>/Logical Operator5'
   *  Logic: '<S26>/Logical Operator6'
   *  Logic: '<S26>/Logical Operator7'
   *  RelationalOperator: '<S1>/Relational Operator12'
   *  RelationalOperator: '<S1>/Relational Operator13'
   *  RelationalOperator: '<S26>/Relational Operator4'
   *  RelationalOperator: '<S26>/Relational Operator5'
   *  RelationalOperator: '<S26>/Relational Operator6'
   *  UnitDelay: '<S26>/Unit Delay2'
   */
  if ((rtb_DataTypeConversion_jj == 1) || (rtb_DataTypeConversion_jj == 2)) {
    /* UnitDelay: '<S26>/Unit Delay4' */
    rtb_UnitDelay4_nr = KL15PwrSply_DD_DW.UnitDelay4_DSTATE_ec;

    /* S-Function (Efx_Debounce_sf): '<S142>/Efx_Debounce_sf' incorporates:
     *  Constant: '<S142>/Reset'
     *  Constant: '<S142>/THighLow'
     *  Constant: '<S142>/X_Init'
     *  Constant: '<S26>/Constant1'
     *  Constant: '<S26>/Constant2'
     *  S-Function (Upcast_sf): '<S142>/Upcast'
     *  S-Function (Upcast_sf): '<S142>/Upcast1'
     */
    {
      Efx_DebounceParam_Type paramdebounce_loc;
      Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
      rtb_Efx_Debounce_sf_i = Efx_Debounce_u8_u8(rtb_UnitDelay4_nr, &RRALampCtlUnitOnDiagDly_I, &paramdebounce_loc, 10000 );
    }

    /* RelationalOperator: '<S26>/Relational Operator1' incorporates:
     *  Constant: '<S26>/Constant4'
     */
    rtb_DTC_RLBLampCtlUnitPowerOL_o = (tmpIRead_2[26] == 1);

    /* RelationalOperator: '<S26>/Relational Operator2' incorporates:
     *  Constant: '<S26>/Constant5'
     */
    rtb_DTC_RRALampCtlUnitPowerSC_h = (tmpIRead_2[26] == 2);

    /* Logic: '<S26>/Logical Operator10' incorporates:
     *  Constant: '<S26>/Constant3'
     *  Logic: '<S26>/Logical Operator3'
     *  Logic: '<S26>/Logical Operator4'
     *  RelationalOperator: '<S26>/Relational Operator'
     *  UnitDelay: '<S26>/Unit Delay'
     */
    rtb_LogicalOperator10_f = ((KL15PwrSply_DD_DW.UnitDelay_DSTATE_i != 0) || ((!rtb_DTC_RLBLampCtlUnitPowerOL_o) && (!rtb_DTC_RRALampCtlUnitPowerSC_h)));

    /* S-Function (Efx_Debounce_sf): '<S143>/Efx_Debounce_sf' incorporates:
     *  Constant: '<S143>/Reset'
     *  Constant: '<S143>/THighLow'
     *  Constant: '<S143>/X_Init'
     *  Constant: '<S26>/Constant10'
     *  Constant: '<S26>/Constant9'
     *  S-Function (Upcast_sf): '<S143>/Upcast'
     *  S-Function (Upcast_sf): '<S143>/Upcast1'
     */
    {
      Efx_DebounceParam_Type paramdebounce_loc;
      Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
      rtb_DTC_RRALampCtlUnitPowerSC_h = Efx_Debounce_u8_u8(rtb_LogicalOperator10_f, &RRALampCtlUnitOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
    }

    /* FunctionCaller: '<S26>/DTC_RRALampCtlUnitPowerSCG_GetEventFailed' */
    Rte_Call_DTC_RRALampCtlUnitPowerSCG_GetEventFailed(&rtb_DTC_RLBLampCtlUnitPowerOL_o);

    /* FunctionCaller: '<S26>/DTC_RRALampCtlUnitPowerSCG_GetEventTested' */
    Rte_Call_DTC_RRALampCtlUnitPowerSCG_GetEventTested(&rtb_DTC_RRALampCtlUnitPowerSC_a);

    /* Logic: '<S26>/Logical Operator14' */
    rtb_DTC_RLBLampCtlUnitPowerOL_p = (rtb_DTC_RLBLampCtlUnitPowerOL_o && rtb_DTC_RRALampCtlUnitPowerSC_a);

    /* FunctionCaller: '<S26>/DTC_RRALampCtlUnitPowerOC_GetEventFailed' */
    Rte_Call_DTC_RRALampCtlUnitPowerOC_GetEventFailed(&rtb_DTC_RRALampCtlUnitPowerSC_a);

    /* FunctionCaller: '<S26>/DTC_RRALampCtlUnitPowerOC_GetEventTested' */
    Rte_Call_DTC_RRALampCtlUnitPowerOC_GetEventTested(&rtb_DTC_RLBLampCtlUnitPowerOL_o);

    /* Switch: '<S26>/Switch' incorporates:
     *  Constant: '<S26>/Constant'
     *  Inport: '<Root>/KL15PwrSply_bRRALampCtlUnitPowerTrigUds_Val'
     *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
     *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
     *  Logic: '<S26>/Logical Operator13'
     *  Logic: '<S26>/Logical Operator15'
     *  Logic: '<S26>/Logical Operator8'
     *  Logic: '<S26>/Logical Operator9'
     *  MultiPortSwitch: '<S26>/MultiportSwitch11'
     *  Switch: '<S26>/Switch1'
     *  Switch: '<S26>/Switch41'
     *  UnitDelay: '<S26>/Unit Delay3'
     */
    if ((rtb_DTC_RLBLampCtlUnitPowerOL_p || (rtb_DTC_RRALampCtlUnitPowerSC_a && rtb_DTC_RLBLampCtlUnitPowerOL_o)) && rtb_DTC_RRALampCtlUnitPowerSC_h) {
      rtb_Switch_j = 0U;
    } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bRRALampCtlUnitPowerTrigUds_Val()) {
      /* Switch: '<S26>/Switch1' incorporates:
       *  Inport: '<Root>/KL15PwrSply_u8stRRALampCtlUnitPowerUds_Val'
       */
      rtb_Switch_j = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stRRALampCtlUnitPowerUds_Val();
    } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
      /* MultiPortSwitch: '<S26>/MultiportSwitch11' incorporates:
       *  Switch: '<S26>/Switch1'
       */
      rtb_Switch_j = tmpIRead_1[26];
    } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_m && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
      /* Switch: '<S26>/Switch41' incorporates:
       *  Constant: '<S26>/Constant27'
       *  MultiPortSwitch: '<S26>/MultiportSwitch11'
       *  Switch: '<S26>/Switch1'
       */
      rtb_Switch_j = 1U;
    } else {
      /* MultiPortSwitch: '<S26>/MultiportSwitch11' incorporates:
       *  Switch: '<S26>/Switch1'
       *  Switch: '<S26>/Switch41'
       */
      rtb_Switch_j = tmpIRead_1[26];
    }

    /* End of Switch: '<S26>/Switch' */

    /* FunctionCaller: '<S26>/IoHwAb_IoDiagPwm_Pwm_Get' */
    Rte_Call_IoHwAb_IoDiagPwm_Pwm_Get(O_P_KL15PwrSply27, &KL15PwrSply_D_PwrSplyDiag27_Get);

    /* SwitchCase: '<S26>/Switch Case1' incorporates:
     *  Logic: '<S26>/Logical Operator1'
     *  Logic: '<S26>/Logical Operator2'
     */
    if (rtb_LogicalOperator && (rtb_Switch_j == 0)) {
      /* Outputs for IfAction SubSystem: '<S26>/RRALampCtlUnitOffDiagErr_Set' incorporates:
       *  ActionPort: '<S138>/Action Port'
       */
      /* Switch: '<S138>/Switch1' incorporates:
       *  Constant: '<S138>/Constant5'
       *  Constant: '<S138>/Constant6'
       *  DataTypeConversion: '<S145>/Extract Desired Bits'
       */
      if (((uint8)KL15PwrSply_D_PwrSplyDiag27_Get & 1U) != 0U) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S138>/Switch1' */

      /* FunctionCaller: '<S138>/DTC_RRALampCtlUnitPowerSCB_SetEventStatus' */
      Rte_Call_DTC_RRALampCtlUnitPowerSCB_SetEventStatus(rtb_Switch4_k3);

      /* End of Outputs for SubSystem: '<S26>/RRALampCtlUnitOffDiagErr_Set' */
    } else {
      /* Outputs for IfAction SubSystem: '<S26>/RRALampCtlUnitOffDiagErr_DebounceReset' incorporates:
       *  ActionPort: '<S137>/Action Port'
       */
      /* FunctionCaller: '<S137>/DTC_RRALampCtlUnitPowerSCB_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S137>/Constant'
       */
      Rte_Call_DTC_RRALampCtlUnitPowerSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S26>/RRALampCtlUnitOffDiagErr_DebounceReset' */
    }

    /* End of SwitchCase: '<S26>/Switch Case1' */

    /* FunctionCaller: '<S26>/IoHwAb_IoSigAdc_Adc_Get' */
    Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol27, &KL15PwrSply_DD_PwrVol27_Get);

    /* Product: '<S26>/Divide1' */
    KL15PwrSply_DD_PwrCurr27_Calc = (float32)KL15PwrSply_DD_PwrVol27_Get / 1780.0F * 20000.0F;

    /* SwitchCase: '<S26>/Switch Case' incorporates:
     *  Logic: '<S26>/Logical Operator'
     */
    if (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_i != 0)) {
      /* Outputs for IfAction SubSystem: '<S26>/RRALampCtlUnitOnDiagErr_Set' incorporates:
       *  ActionPort: '<S140>/Action Port'
       */
      /* Switch: '<S140>/Switch8' incorporates:
       *  Constant: '<S140>/Constant'
       *  Constant: '<S140>/Constant13'
       *  DataTypeConversion: '<S140>/DataTypeConversion1'
       *  DataTypeConversion: '<S146>/Extract Desired Bits'
       */
      if (OLFaultBypass) {
        rtb_DTC_RLALampCtlUnitPowerOC_m = false;
      } else {
        rtb_DTC_RLALampCtlUnitPowerOC_m = (((uint8)(KL15PwrSply_D_PwrSplyDiag27_Get >> 3) & 1U) != 0U);
      }

      /* End of Switch: '<S140>/Switch8' */

      /* Switch: '<S140>/Switch1' incorporates:
       *  Constant: '<S140>/Constant3'
       *  Constant: '<S140>/Constant4'
       */
      if (rtb_DTC_RLALampCtlUnitPowerOC_m) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S140>/Switch1' */

      /* FunctionCaller: '<S140>/DTC_RRALampCtlUnitPowerOL_SetEventStatus' */
      Rte_Call_DTC_RRALampCtlUnitPowerOL_SetEventStatus(rtb_Switch4_k3);

      /* Switch: '<S140>/Switch' incorporates:
       *  Constant: '<S140>/Constant1'
       *  Constant: '<S140>/Constant2'
       *  DataTypeConversion: '<S140>/DataTypeConversion'
       *  DataTypeConversion: '<S147>/Extract Desired Bits'
       */
      if (((uint8)(KL15PwrSply_D_PwrSplyDiag27_Get >> 1) & 1) << 1 != 0) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S140>/Switch' */

      /* FunctionCaller: '<S140>/DTC_RRALampCtlUnitPowerSCG_SetEventStatus' */
      Rte_Call_DTC_RRALampCtlUnitPowerSCG_SetEventStatus(rtb_Switch4_k3);

      /* Switch: '<S140>/Switch4' incorporates:
       *  Constant: '<S140>/Constant10'
       *  Constant: '<S140>/Constant9'
       *  Logic: '<S26>/Logical Operator11'
       *  RelationalOperator: '<S26>/Relational Operator7'
       *  Sum: '<S140>/Add2'
       *  UnitDelay: '<S140>/UnitDelay2'
       */
      if ((KL15PwrSply_DD_PwrCurr27_Calc > tmpIRead_0[19]) && (rtb_Efx_Debounce_sf_i != 0)) {
        rtb_Switch4_mq = Mfx_Add_u16u16_u16(KL15PwrSply_DD_DW.UnitDelay2_DSTATE_k, 10U);
      } else {
        rtb_Switch4_mq = 0U;
      }

      /* End of Switch: '<S140>/Switch4' */

      /* Switch: '<S140>/Switch3' incorporates:
       *  Constant: '<S140>/Constant7'
       *  Constant: '<S140>/Constant8'
       *  RelationalOperator: '<S140>/RelationalOperator2'
       */
      if (rtb_Switch4_mq > tmpIRead[19]) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_FAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PASSED;
      }

      /* End of Switch: '<S140>/Switch3' */

      /* FunctionCaller: '<S140>/DTC_RRALampCtlUnitPowerOC_SetEventStatus' */
      Rte_Call_DTC_RRALampCtlUnitPowerOC_SetEventStatus(rtb_Switch4_k3);

      /* Update for UnitDelay: '<S140>/UnitDelay2' */
      KL15PwrSply_DD_DW.UnitDelay2_DSTATE_k = rtb_Switch4_mq;

      /* End of Outputs for SubSystem: '<S26>/RRALampCtlUnitOnDiagErr_Set' */
    } else {
      /* Outputs for IfAction SubSystem: '<S26>/RRALampCtlUnitOnDiagErr_DebounceReset' incorporates:
       *  ActionPort: '<S139>/Action Port'
       */
      /* FunctionCaller: '<S139>/DTC_RRALampCtlUnitPowerOC_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S139>/Constant'
       */
      Rte_Call_DTC_RRALampCtlUnitPowerOC_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* FunctionCaller: '<S139>/DTC_RRALampCtlUnitPowerOL_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S139>/Constant1'
       */
      Rte_Call_DTC_RRALampCtlUnitPowerOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* FunctionCaller: '<S139>/DTC_RRALampCtlUnitPowerSCG_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S139>/Constant2'
       */
      Rte_Call_DTC_RRALampCtlUnitPowerSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S26>/RRALampCtlUnitOnDiagErr_DebounceReset' */
    }

    /* End of SwitchCase: '<S26>/Switch Case' */

    /* DataTypeConversion: '<S26>/DataTypeConversion3' */
    rtb_DTC_RRALampCtlUnitPowerSC_a = (rtb_Switch_j != 0);

    /* Switch: '<S26>/Switch66' incorporates:
     *  Constant: '<S26>/Constant14'
     *  Constant: '<S26>/Constant140'
     *  DataTypeConversion: '<S26>/DataTypeConversion3'
     */
    if (rtb_Switch_j != 0) {
      KL15PwrSply_DD_PwrSply_stCtrl27 = 32768U;
    } else {
      KL15PwrSply_DD_PwrSply_stCtrl27 = 0U;
    }

    /* End of Switch: '<S26>/Switch66' */

    /* FunctionCaller: '<S26>/IoHwAb_IoSigPwm_Pwm_SetDuty' */
    Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_KL15PwrSply27, KL15PwrSply_DD_PwrSply_stCtrl27);

    /* FunctionCaller: '<S144>/DTC_RRALampCtlUnitPowerSCB_GetEventFailed' */
    Rte_Call_DTC_RRALampCtlUnitPowerSCB_GetEventFailed(&rtb_DTC_RRALampCtlUnitPowerSC_a);

    /* FunctionCaller: '<S144>/DTC_RRALampCtlUnitPowerSCB_GetEventTested' */
    Rte_Call_DTC_RRALampCtlUnitPowerSCB_GetEventTested(&rtb_DTC_RRALampCtlUnitPowerSC_h);

    /* FunctionCaller: '<S144>/DTC_RRALampCtlUnitPowerOL_GetEventFailed' */
    Rte_Call_DTC_RRALampCtlUnitPowerOL_GetEventFailed(&rtb_DTC_RRALampCtlUnitPowerO_kf);

    /* FunctionCaller: '<S144>/DTC_RRALampCtlUnitPowerOL_GetEventTested' */
    Rte_Call_DTC_RRALampCtlUnitPowerOL_GetEventTested(&rtb_DTC_RRALampCtlUnitPowerOL_e);

    /* FunctionCaller: '<S144>/DTC_RRALampCtlUnitPowerSCG_GetEventFailed' */
    Rte_Call_DTC_RRALampCtlUnitPowerSCG_GetEventFailed(&rtb_DTC_RRALampCtlUnitPowerS_ij);

    /* FunctionCaller: '<S144>/DTC_RRALampCtlUnitPowerSCG_GetEventTested' */
    Rte_Call_DTC_RRALampCtlUnitPowerSCG_GetEventTested(&rtb_DTC_RRALampCtlUnitPowerS_on);

    /* FunctionCaller: '<S144>/DTC_RRALampCtlUnitPowerOC_GetEventFailed' */
    Rte_Call_DTC_RRALampCtlUnitPowerOC_GetEventFailed(&rtb_DTC_RRALampCtlUnitPowerOC_e);

    /* FunctionCaller: '<S144>/DTC_RRALampCtlUnitPowerOC_GetEventTested' */
    Rte_Call_DTC_RRALampCtlUnitPowerOC_GetEventTested(&rtb_DTC_RRALampCtlUnitPowerO_ow);

    /* Switch: '<S144>/Switch4' incorporates:
     *  Constant: '<S144>/Constant5'
     *  Constant: '<S144>/Constant59'
     *  Constant: '<S144>/Constant8'
     *  Logic: '<S144>/Logical Operator1'
     *  Logic: '<S144>/Logical Operator4'
     *  Logic: '<S144>/Logical Operator6'
     *  Logic: '<S144>/Logical Operator7'
     *  RelationalOperator: '<S144>/Relational Operator'
     *  RelationalOperator: '<S144>/Relational Operator1'
     *  Switch: '<S144>/Switch1'
     *  Switch: '<S144>/Switch5'
     *  Switch: '<S144>/Switch6'
     */
    if (rtb_DTC_RRALampCtlUnitPowerSC_a && rtb_DTC_RRALampCtlUnitPowerSC_h && (rtb_Switch_j == 0)) {
      KL15PwrSply_DD_PwrSplyRealErr27 = 2U;
    } else if (rtb_DTC_RRALampCtlUnitPowerO_kf && rtb_DTC_RRALampCtlUnitPowerOL_e && (rtb_Switch_j == 1)) {
      /* Switch: '<S144>/Switch5' incorporates:
       *  Constant: '<S144>/Constant6'
       */
      KL15PwrSply_DD_PwrSplyRealErr27 = 3U;
    } else if (rtb_DTC_RRALampCtlUnitPowerS_ij && rtb_DTC_RRALampCtlUnitPowerS_on) {
      /* Switch: '<S144>/Switch6' incorporates:
       *  Constant: '<S144>/Constant7'
       *  Switch: '<S144>/Switch5'
       */
      KL15PwrSply_DD_PwrSplyRealErr27 = 1U;
    } else if (rtb_DTC_RRALampCtlUnitPowerOC_e && rtb_DTC_RRALampCtlUnitPowerO_ow) {
      /* Switch: '<S144>/Switch1' incorporates:
       *  Constant: '<S144>/Constant1'
       *  Switch: '<S144>/Switch5'
       *  Switch: '<S144>/Switch6'
       */
      KL15PwrSply_DD_PwrSplyRealErr27 = 4U;
    } else {
      /* Switch: '<S144>/Switch6' incorporates:
       *  Constant: '<S144>/Constant3'
       *  Switch: '<S144>/Switch1'
       *  Switch: '<S144>/Switch5'
       */
      KL15PwrSply_DD_PwrSplyRealErr27 = 0U;
    }

    /* End of Switch: '<S144>/Switch4' */

    /* Outputs for Enabled SubSystem: '<S26>/RealErrHold' incorporates:
     *  EnablePort: '<S141>/Enable'
     */
    if (((0 == KL15PwrSply_DD_PwrSplyRealErr27) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_ik != KL15PwrSply_DD_PwrSplyRealErr27) && (0 != KL15PwrSply_DD_PwrSplyRealErr27))) {
      KL15PwrSply_DD_B.stRealErr_i4 = KL15PwrSply_DD_PwrSplyRealErr27;
    }

    /* End of Outputs for SubSystem: '<S26>/RealErrHold' */

    /* Switch: '<S26>/Switch2' incorporates:
     *  Constant: '<S26>/Constant13'
     *  Constant: '<S26>/Constant33'
     *  Constant: '<S26>/Constant34'
     *  Constant: '<S26>/Constant6'
     *  Inport: '<S141>/stRealErr'
     *  Logic: '<S26>/Logical Operator5'
     *  Logic: '<S26>/Logical Operator6'
     *  Logic: '<S26>/Logical Operator7'
     *  Product: '<S26>/Product'
     *  RelationalOperator: '<S26>/Relational Operator4'
     *  RelationalOperator: '<S26>/Relational Operator5'
     *  RelationalOperator: '<S26>/Relational Operator6'
     *  UnitDelay: '<S26>/Unit Delay1'
     *  UnitDelay: '<S26>/Unit Delay2'
     */
    if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_fn != 0) {
      KL15PwrSply_DD_B.Switch2_n = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr27_Calc * 0.01F);
    } else {
      KL15PwrSply_DD_B.Switch2_n = 0U;
    }

    /* End of Switch: '<S26>/Switch2' */

    /* DataTypeConversion: '<S26>/DataTypeConversion2' */
    KL15PwrSply_DD_B.DataTypeConversion2_b = (rtb_Switch_j != 0);

    /* Update for UnitDelay: '<S26>/Unit Delay4' */
    KL15PwrSply_DD_DW.UnitDelay4_DSTATE_ec = rtb_Switch_j;

    /* Update for UnitDelay: '<S26>/Unit Delay' */
    KL15PwrSply_DD_DW.UnitDelay_DSTATE_i = tmpIRead_2[26];

    /* Update for UnitDelay: '<S26>/Unit Delay3' incorporates:
     *  DataTypeConversion: '<S26>/DataTypeConversion4'
     */
    KL15PwrSply_DD_DW.UnitDelay3_DSTATE_m = (rtb_Switch_j != 0);

    /* Update for UnitDelay: '<S26>/Unit Delay2' */
    KL15PwrSply_DD_DW.UnitDelay2_DSTATE_ik = KL15PwrSply_DD_PwrSplyRealErr27;

    /* Update for UnitDelay: '<S26>/Unit Delay1' */
    KL15PwrSply_DD_DW.UnitDelay1_DSTATE_fn = rtb_Switch_j;
  }

  /* End of Logic: '<S1>/Logical Operator13' */
  /* End of Outputs for SubSystem: '<S1>/RRALampCtlUnit_Ctl_2F_Diag_CutOff' */

  /* Logic: '<S1>/Logical Operator10' incorporates:
   *  Constant: '<S1>/Constant28'
   *  Inport: '<Root>/PwrSply_bPositionLightCtrlCmd02_Val'
   *  Logic: '<S1>/Logical Operator11'
   *  RelationalOperator: '<S1>/Relational Operator8'
   */
  rtb_DTC_RLALampCtlUnitPowerOL_n = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bPositionLightCtrlCmd02_Val();
  rtb_LogicalOperator10 = (rtb_DTC_RLALampCtlUnitPowerS_gp && (KL15PwrSply_DD_PwrSplyRealErr27 == 2) && rtb_DTC_RLALampCtlUnitPowerOL_n && rtb_DTC_RLALampCtlUnitPowerSC_k);

  /* S-Function (Efx_Debounce_sf): '<S42>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant29'
   *  Constant: '<S1>/Constant30'
   *  Constant: '<S42>/Reset'
   *  Constant: '<S42>/THighLow'
   *  Constant: '<S42>/X_Init'
   *  S-Function (Upcast_sf): '<S42>/Upcast'
   *  S-Function (Upcast_sf): '<S42>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 100);
    rtb_Efx_Debounce_sf_k = Efx_Debounce_u8_u8(rtb_LogicalOperator10, &RRALampWkUpOnDly, &paramdebounce_loc, 10000 );
  }

  /* Chart: '<S1>/RRALampAllwSleepDly' incorporates:
   *  Constant: '<S1>/Constant36'
   */
  /* Gateway: KL15PwrSply_DD_Runnable_10ms_sys/RRALampAllwSleepDly */
  /* During: KL15PwrSply_DD_Runnable_10ms_sys/RRALampAllwSleepDly */
  if (KL15PwrSply_DD_DW.is_active_c3_KL15PwrSply_DD == 0U) {
    /* Entry: KL15PwrSply_DD_Runnable_10ms_sys/RRALampAllwSleepDly */
    KL15PwrSply_DD_DW.is_active_c3_KL15PwrSply_DD = 1U;

    /* Entry Internal: KL15PwrSply_DD_Runnable_10ms_sys/RRALampAllwSleepDly */
    /* Transition: '<S25>:4' */
    KL15PwrSply_DD_DW.is_c3_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

    /* Entry 'Normal': '<S25>:3' */
    /* '<S25>:3:1' flgAllwSleep_NW=false; */
    KL15PwrS_flgRRALampAllwSleep_NW = false;

    /* '<S25>:3:1' AllwSleepTiming=0; */
    KL15PwrSply_DD_B.AllwSleepTiming_p = 0U;
  } else {
    switch (KL15PwrSply_DD_DW.is_c3_KL15PwrSply_DD) {
     case KL15PwrSply_DD_IN_AllwSleep:
      KL15PwrS_flgRRALampAllwSleep_NW = false;

      /* During 'AllwSleep': '<S25>:15' */
      /* '<S25>:18:1' sf_internal_predicateOutput = ~flgNMHold; */
      if (!rtb_Efx_Debounce_sf_k) {
        /* Transition: '<S25>:18' */
        KL15PwrSply_DD_DW.is_c3_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

        /* Entry 'Normal': '<S25>:3' */
        /* '<S25>:3:1' flgAllwSleep_NW=false; */
        KL15PwrS_flgRRALampAllwSleep_NW = false;

        /* '<S25>:3:1' AllwSleepTiming=0; */
        KL15PwrSply_DD_B.AllwSleepTiming_p = 0U;
      }
      break;

     case KL15PwrSply_DD_IN_NWHold:
      KL15PwrS_flgRRALampAllwSleep_NW = true;

      /* During 'NWHold': '<S25>:5' */
      /* '<S25>:8:1' sf_internal_predicateOutput = ~flgNMHold; */
      if (!rtb_Efx_Debounce_sf_k) {
        /* Transition: '<S25>:8' */
        KL15PwrSply_DD_DW.is_c3_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

        /* Entry 'Normal': '<S25>:3' */
        /* '<S25>:3:1' flgAllwSleep_NW=false; */
        KL15PwrS_flgRRALampAllwSleep_NW = false;

        /* '<S25>:3:1' AllwSleepTiming=0; */
        KL15PwrSply_DD_B.AllwSleepTiming_p = 0U;
      } else {
        /* '<S25>:17:1' sf_internal_predicateOutput = AllwSleepTiming>AllwSleepNWTime; */
        if (KL15PwrSply_DD_B.AllwSleepTiming_p > 3000) {
          /* Transition: '<S25>:17' */
          KL15PwrSply_DD_DW.is_c3_KL15PwrSply_DD = KL15PwrSply_DD_IN_AllwSleep;

          /* Entry 'AllwSleep': '<S25>:15' */
          /* '<S25>:15:1' flgAllwSleep_NW=false; */
          KL15PwrS_flgRRALampAllwSleep_NW = false;

          /* '<S25>:15:1' AllwSleepTiming=0; */
          KL15PwrSply_DD_B.AllwSleepTiming_p = 0U;
        } else {
          /* '<S25>:5:1' AllwSleepTiming=AllwSleepTiming+1; */
          KL15PwrSply_DD_B.AllwSleepTiming_p = Mfx_Add_u16u16_u16(KL15PwrSply_DD_B.AllwSleepTiming_p, 1U);
        }
      }
      break;

     default:
      KL15PwrS_flgRRALampAllwSleep_NW = false;

      /* During 'Normal': '<S25>:3' */
      /* '<S25>:6:1' sf_internal_predicateOutput = flgNMHold; */
      if (rtb_Efx_Debounce_sf_k) {
        /* Transition: '<S25>:6' */
        KL15PwrSply_DD_DW.is_c3_KL15PwrSply_DD = KL15PwrSply_DD_IN_NWHold;

        /* Entry 'NWHold': '<S25>:5' */
        /* '<S25>:5:1' flgAllwSleep_NW=true; */
        KL15PwrS_flgRRALampAllwSleep_NW = true;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/RRALampAllwSleepDly' */

  /* DataStoreWrite: '<S1>/Data Store Write2' */
  RRALampAllwSleepTiming = KL15PwrSply_DD_B.AllwSleepTiming_p;

  /* Outputs for Enabled SubSystem: '<S1>/RRBLampCtlUnit_Ctl_2F_Diag_CutOff' incorporates:
   *  EnablePort: '<S29>/Enable'
   */
  /* RelationalOperator: '<S1>/Relational Operator15' incorporates:
   *  Constant: '<S1>/Constant58'
   *  Constant: '<S29>/Constant33'
   *  Constant: '<S29>/Constant34'
   *  Inport: '<S152>/stRealErr'
   *  Logic: '<S29>/Logical Operator5'
   *  Logic: '<S29>/Logical Operator6'
   *  Logic: '<S29>/Logical Operator7'
   *  RelationalOperator: '<S29>/Relational Operator4'
   *  RelationalOperator: '<S29>/Relational Operator5'
   *  RelationalOperator: '<S29>/Relational Operator6'
   *  UnitDelay: '<S29>/Unit Delay2'
   */
  if (rtb_DataTypeConversion_jj == 2) {
    /* UnitDelay: '<S29>/Unit Delay4' */
    rtb_UnitDelay4_lc = KL15PwrSply_DD_DW.UnitDelay4_DSTATE_n;

    /* S-Function (Efx_Debounce_sf): '<S153>/Efx_Debounce_sf' incorporates:
     *  Constant: '<S153>/Reset'
     *  Constant: '<S153>/THighLow'
     *  Constant: '<S153>/X_Init'
     *  Constant: '<S29>/Constant1'
     *  Constant: '<S29>/Constant2'
     *  S-Function (Upcast_sf): '<S153>/Upcast'
     *  S-Function (Upcast_sf): '<S153>/Upcast1'
     */
    {
      Efx_DebounceParam_Type paramdebounce_loc;
      Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
      rtb_Efx_Debounce_sf_m = Efx_Debounce_u8_u8(rtb_UnitDelay4_lc, &RRBLampCtlUnitOnDiagDly_I, &paramdebounce_loc, 10000 );
    }

    /* RelationalOperator: '<S29>/Relational Operator1' incorporates:
     *  Constant: '<S29>/Constant4'
     */
    rtb_DTC_RRALampCtlUnitPowerO_kf = (tmpIRead_2[28] == 1);

    /* RelationalOperator: '<S29>/Relational Operator2' incorporates:
     *  Constant: '<S29>/Constant5'
     */
    rtb_DTC_RRBLampCtlUnitPowerS_pq = (tmpIRead_2[28] == 2);

    /* Logic: '<S29>/Logical Operator10' incorporates:
     *  Constant: '<S29>/Constant3'
     *  Logic: '<S29>/Logical Operator3'
     *  Logic: '<S29>/Logical Operator4'
     *  RelationalOperator: '<S29>/Relational Operator'
     *  UnitDelay: '<S29>/Unit Delay'
     */
    rtb_LogicalOperator10_nq = ((KL15PwrSply_DD_DW.UnitDelay_DSTATE_f5 != 0) || ((!rtb_DTC_RRALampCtlUnitPowerO_kf) && (!rtb_DTC_RRBLampCtlUnitPowerS_pq)));

    /* S-Function (Efx_Debounce_sf): '<S154>/Efx_Debounce_sf' incorporates:
     *  Constant: '<S154>/Reset'
     *  Constant: '<S154>/THighLow'
     *  Constant: '<S154>/X_Init'
     *  Constant: '<S29>/Constant10'
     *  Constant: '<S29>/Constant9'
     *  S-Function (Upcast_sf): '<S154>/Upcast'
     *  S-Function (Upcast_sf): '<S154>/Upcast1'
     */
    {
      Efx_DebounceParam_Type paramdebounce_loc;
      Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
      rtb_DTC_RRBLampCtlUnitPowerS_pq = Efx_Debounce_u8_u8(rtb_LogicalOperator10_nq, &RRBLampCtlUnitOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
    }

    /* FunctionCaller: '<S29>/DTC_RRBLampCtlUnitPowerSCG_GetEventFailed' */
    Rte_Call_DTC_RRBLampCtlUnitPowerSCG_GetEventFailed(&rtb_DTC_RRALampCtlUnitPowerO_kf);

    /* FunctionCaller: '<S29>/DTC_RRBLampCtlUnitPowerSCG_GetEventTested' */
    Rte_Call_DTC_RRBLampCtlUnitPowerSCG_GetEventTested(&rtb_DTC_RRBLampCtlUnitPowerS_n4);

    /* Logic: '<S29>/Logical Operator14' */
    rtb_DTC_RRALampCtlUnitPowerOL_e = (rtb_DTC_RRALampCtlUnitPowerO_kf && rtb_DTC_RRBLampCtlUnitPowerS_n4);

    /* FunctionCaller: '<S29>/DTC_RRBLampCtlUnitPowerOC_GetEventFailed' */
    Rte_Call_DTC_RRBLampCtlUnitPowerOC_GetEventFailed(&rtb_DTC_RRBLampCtlUnitPowerS_n4);

    /* FunctionCaller: '<S29>/DTC_RRBLampCtlUnitPowerOC_GetEventTested' */
    Rte_Call_DTC_RRBLampCtlUnitPowerOC_GetEventTested(&rtb_DTC_RRALampCtlUnitPowerO_kf);

    /* Switch: '<S29>/Switch' incorporates:
     *  Constant: '<S29>/Constant'
     *  Inport: '<Root>/KL15PwrSply_bRRBLampCtlUnitPowerTrigUds_Val'
     *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
     *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
     *  Logic: '<S29>/Logical Operator13'
     *  Logic: '<S29>/Logical Operator15'
     *  Logic: '<S29>/Logical Operator8'
     *  Logic: '<S29>/Logical Operator9'
     *  MultiPortSwitch: '<S29>/MultiportSwitch11'
     *  Switch: '<S29>/Switch1'
     *  Switch: '<S29>/Switch41'
     *  UnitDelay: '<S29>/Unit Delay3'
     */
    if ((rtb_DTC_RRALampCtlUnitPowerOL_e || (rtb_DTC_RRBLampCtlUnitPowerS_n4 && rtb_DTC_RRALampCtlUnitPowerO_kf)) && rtb_DTC_RRBLampCtlUnitPowerS_pq) {
      rtb_Switch_j = 0U;
    } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bRRBLampCtlUnitPowerTrigUds_Val()) {
      /* Switch: '<S29>/Switch1' incorporates:
       *  Inport: '<Root>/KL15PwrSply_u8stRRBLampCtlUnitPowerUds_Val'
       */
      rtb_Switch_j = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stRRBLampCtlUnitPowerUds_Val();
    } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
      /* MultiPortSwitch: '<S29>/MultiportSwitch11' incorporates:
       *  Switch: '<S29>/Switch1'
       */
      rtb_Switch_j = tmpIRead_1[28];
    } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_g && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
      /* Switch: '<S29>/Switch41' incorporates:
       *  Constant: '<S29>/Constant27'
       *  MultiPortSwitch: '<S29>/MultiportSwitch11'
       *  Switch: '<S29>/Switch1'
       */
      rtb_Switch_j = 1U;
    } else {
      /* MultiPortSwitch: '<S29>/MultiportSwitch11' incorporates:
       *  Switch: '<S29>/Switch1'
       *  Switch: '<S29>/Switch41'
       */
      rtb_Switch_j = tmpIRead_1[28];
    }

    /* End of Switch: '<S29>/Switch' */

    /* FunctionCaller: '<S29>/IoHwAb_IoDiagPwm_Pwm_Get' */
    Rte_Call_IoHwAb_IoDiagPwm_Pwm_Get(O_P_KL15PwrSply29, &KL15PwrSply_D_PwrSplyDiag29_Get);

    /* SwitchCase: '<S29>/Switch Case1' incorporates:
     *  Logic: '<S29>/Logical Operator1'
     *  Logic: '<S29>/Logical Operator2'
     */
    if (rtb_LogicalOperator && (rtb_Switch_j == 0)) {
      /* Outputs for IfAction SubSystem: '<S29>/RRBLampCtlUnitOffDiagErr_Set' incorporates:
       *  ActionPort: '<S149>/Action Port'
       */
      /* Switch: '<S149>/Switch1' incorporates:
       *  Constant: '<S149>/Constant5'
       *  Constant: '<S149>/Constant6'
       *  DataTypeConversion: '<S156>/Extract Desired Bits'
       */
      if (((uint8)KL15PwrSply_D_PwrSplyDiag29_Get & 1U) != 0U) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S149>/Switch1' */

      /* FunctionCaller: '<S149>/DTC_RRBLampCtlUnitPowerSCB_SetEventStatus' */
      Rte_Call_DTC_RRBLampCtlUnitPowerSCB_SetEventStatus(rtb_Switch4_k3);

      /* End of Outputs for SubSystem: '<S29>/RRBLampCtlUnitOffDiagErr_Set' */
    } else {
      /* Outputs for IfAction SubSystem: '<S29>/RRBLampCtlUnitOffDiagErr_DebounceReset' incorporates:
       *  ActionPort: '<S148>/Action Port'
       */
      /* FunctionCaller: '<S148>/DTC_RRBLampCtlUnitPowerSCB_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S148>/Constant'
       */
      Rte_Call_DTC_RRBLampCtlUnitPowerSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S29>/RRBLampCtlUnitOffDiagErr_DebounceReset' */
    }

    /* End of SwitchCase: '<S29>/Switch Case1' */

    /* FunctionCaller: '<S29>/IoHwAb_IoSigAdc_Adc_Get' */
    Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol29, &KL15PwrSply_DD_PwrVol29_Get);

    /* Product: '<S29>/Divide1' */
    KL15PwrSply_DD_PwrCurr29_Calc = (float32)KL15PwrSply_DD_PwrVol29_Get / 1780.0F * 20000.0F;

    /* SwitchCase: '<S29>/Switch Case' incorporates:
     *  Logic: '<S29>/Logical Operator'
     */
    if (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_m != 0)) {
      /* Outputs for IfAction SubSystem: '<S29>/RRBLampCtlUnitOnDiagErr_Set' incorporates:
       *  ActionPort: '<S151>/Action Port'
       */
      /* Switch: '<S151>/Switch8' incorporates:
       *  Constant: '<S151>/Constant'
       *  Constant: '<S151>/Constant13'
       *  DataTypeConversion: '<S151>/DataTypeConversion1'
       *  DataTypeConversion: '<S157>/Extract Desired Bits'
       */
      if (OLFaultBypass) {
        rtb_DTC_RLALampCtlUnitPowerOC_m = false;
      } else {
        rtb_DTC_RLALampCtlUnitPowerOC_m = (((uint8)(KL15PwrSply_D_PwrSplyDiag29_Get >> 3) & 1U) != 0U);
      }

      /* End of Switch: '<S151>/Switch8' */

      /* Switch: '<S151>/Switch1' incorporates:
       *  Constant: '<S151>/Constant3'
       *  Constant: '<S151>/Constant4'
       */
      if (rtb_DTC_RLALampCtlUnitPowerOC_m) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S151>/Switch1' */

      /* FunctionCaller: '<S151>/DTC_RRBLampCtlUnitPowerOL_SetEventStatus' */
      Rte_Call_DTC_RRBLampCtlUnitPowerOL_SetEventStatus(rtb_Switch4_k3);

      /* Switch: '<S151>/Switch' incorporates:
       *  Constant: '<S151>/Constant1'
       *  Constant: '<S151>/Constant2'
       *  DataTypeConversion: '<S151>/DataTypeConversion'
       *  DataTypeConversion: '<S158>/Extract Desired Bits'
       */
      if (((uint8)(KL15PwrSply_D_PwrSplyDiag29_Get >> 1) & 1) << 1 != 0) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S151>/Switch' */

      /* FunctionCaller: '<S151>/DTC_RRBLampCtlUnitPowerSCG_SetEventStatus' */
      Rte_Call_DTC_RRBLampCtlUnitPowerSCG_SetEventStatus(rtb_Switch4_k3);

      /* Switch: '<S151>/Switch4' incorporates:
       *  Constant: '<S151>/Constant10'
       *  Constant: '<S151>/Constant9'
       *  Logic: '<S29>/Logical Operator11'
       *  RelationalOperator: '<S29>/Relational Operator7'
       *  Sum: '<S151>/Add2'
       *  UnitDelay: '<S151>/UnitDelay2'
       */
      if ((KL15PwrSply_DD_PwrCurr29_Calc > tmpIRead_0[21]) && (rtb_Efx_Debounce_sf_m != 0)) {
        rtb_Switch4_mq = Mfx_Add_u16u16_u16(KL15PwrSply_DD_DW.UnitDelay2_DSTATE_a, 10U);
      } else {
        rtb_Switch4_mq = 0U;
      }

      /* End of Switch: '<S151>/Switch4' */

      /* Switch: '<S151>/Switch3' incorporates:
       *  Constant: '<S151>/Constant7'
       *  Constant: '<S151>/Constant8'
       *  RelationalOperator: '<S151>/RelationalOperator2'
       */
      if (rtb_Switch4_mq > tmpIRead[21]) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_FAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PASSED;
      }

      /* End of Switch: '<S151>/Switch3' */

      /* FunctionCaller: '<S151>/DTC_RRBLampCtlUnitPowerOC_SetEventStatus' */
      Rte_Call_DTC_RRBLampCtlUnitPowerOC_SetEventStatus(rtb_Switch4_k3);

      /* Update for UnitDelay: '<S151>/UnitDelay2' */
      KL15PwrSply_DD_DW.UnitDelay2_DSTATE_a = rtb_Switch4_mq;

      /* End of Outputs for SubSystem: '<S29>/RRBLampCtlUnitOnDiagErr_Set' */
    } else {
      /* Outputs for IfAction SubSystem: '<S29>/RRBLampCtlUnitOnDiagErr_DebounceReset' incorporates:
       *  ActionPort: '<S150>/Action Port'
       */
      /* FunctionCaller: '<S150>/DTC_RRBLampCtlUnitPowerOC_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S150>/Constant'
       */
      Rte_Call_DTC_RRBLampCtlUnitPowerOC_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* FunctionCaller: '<S150>/DTC_RRBLampCtlUnitPowerOL_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S150>/Constant1'
       */
      Rte_Call_DTC_RRBLampCtlUnitPowerOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* FunctionCaller: '<S150>/DTC_RRBLampCtlUnitPowerSCG_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S150>/Constant2'
       */
      Rte_Call_DTC_RRBLampCtlUnitPowerSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S29>/RRBLampCtlUnitOnDiagErr_DebounceReset' */
    }

    /* End of SwitchCase: '<S29>/Switch Case' */

    /* DataTypeConversion: '<S29>/DataTypeConversion3' */
    rtb_DTC_RRBLampCtlUnitPowerS_n4 = (rtb_Switch_j != 0);

    /* Switch: '<S29>/Switch66' incorporates:
     *  Constant: '<S29>/Constant14'
     *  Constant: '<S29>/Constant140'
     *  DataTypeConversion: '<S29>/DataTypeConversion3'
     */
    if (rtb_Switch_j != 0) {
      KL15PwrSply_DD_PwrSply_stCtrl29 = 32768U;
    } else {
      KL15PwrSply_DD_PwrSply_stCtrl29 = 0U;
    }

    /* End of Switch: '<S29>/Switch66' */

    /* FunctionCaller: '<S29>/IoHwAb_IoSigPwm_Pwm_SetDuty' */
    Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_KL15PwrSply29, KL15PwrSply_DD_PwrSply_stCtrl29);

    /* FunctionCaller: '<S155>/DTC_RRBLampCtlUnitPowerSCB_GetEventFailed' */
    Rte_Call_DTC_RRBLampCtlUnitPowerSCB_GetEventFailed(&rtb_DTC_RRBLampCtlUnitPowerS_n4);

    /* FunctionCaller: '<S155>/DTC_RRBLampCtlUnitPowerSCB_GetEventTested' */
    Rte_Call_DTC_RRBLampCtlUnitPowerSCB_GetEventTested(&rtb_DTC_RRBLampCtlUnitPowerS_pq);

    /* FunctionCaller: '<S155>/DTC_RRBLampCtlUnitPowerOL_GetEventFailed' */
    Rte_Call_DTC_RRBLampCtlUnitPowerOL_GetEventFailed(&rtb_DTC_RRBLampCtlUnitPowerOL_f);

    /* FunctionCaller: '<S155>/DTC_RRBLampCtlUnitPowerOL_GetEventTested' */
    Rte_Call_DTC_RRBLampCtlUnitPowerOL_GetEventTested(&rtb_DTC_RRBLampCtlUnitPowerOL_k);

    /* FunctionCaller: '<S155>/DTC_RRBLampCtlUnitPowerSCG_GetEventFailed' */
    Rte_Call_DTC_RRBLampCtlUnitPowerSCG_GetEventFailed(&rtb_DTC_RRBLampCtlUnitPowerSC_h);

    /* FunctionCaller: '<S155>/DTC_RRBLampCtlUnitPowerSCG_GetEventTested' */
    Rte_Call_DTC_RRBLampCtlUnitPowerSCG_GetEventTested(&rtb_DTC_RRBLampCtlUnitPowerSC_c);

    /* FunctionCaller: '<S155>/DTC_RRBLampCtlUnitPowerOC_GetEventFailed' */
    Rte_Call_DTC_RRBLampCtlUnitPowerOC_GetEventFailed(&rtb_DTC_RRBLampCtlUnitPowerO_af);

    /* FunctionCaller: '<S155>/DTC_RRBLampCtlUnitPowerOC_GetEventTested' */
    Rte_Call_DTC_RRBLampCtlUnitPowerOC_GetEventTested(&rtb_DTC_RRBLampCtlUnitPowerOC_l);

    /* Switch: '<S155>/Switch4' incorporates:
     *  Constant: '<S155>/Constant5'
     *  Constant: '<S155>/Constant59'
     *  Constant: '<S155>/Constant8'
     *  Logic: '<S155>/Logical Operator1'
     *  Logic: '<S155>/Logical Operator4'
     *  Logic: '<S155>/Logical Operator6'
     *  Logic: '<S155>/Logical Operator7'
     *  RelationalOperator: '<S155>/Relational Operator'
     *  RelationalOperator: '<S155>/Relational Operator1'
     *  Switch: '<S155>/Switch1'
     *  Switch: '<S155>/Switch5'
     *  Switch: '<S155>/Switch6'
     */
    if (rtb_DTC_RRBLampCtlUnitPowerS_n4 && rtb_DTC_RRBLampCtlUnitPowerS_pq && (rtb_Switch_j == 0)) {
      KL15PwrSply_DD_PwrSplyRealErr29 = 2U;
    } else if (rtb_DTC_RRBLampCtlUnitPowerOL_f && rtb_DTC_RRBLampCtlUnitPowerOL_k && (rtb_Switch_j == 1)) {
      /* Switch: '<S155>/Switch5' incorporates:
       *  Constant: '<S155>/Constant6'
       */
      KL15PwrSply_DD_PwrSplyRealErr29 = 3U;
    } else if (rtb_DTC_RRBLampCtlUnitPowerSC_h && rtb_DTC_RRBLampCtlUnitPowerSC_c) {
      /* Switch: '<S155>/Switch6' incorporates:
       *  Constant: '<S155>/Constant7'
       *  Switch: '<S155>/Switch5'
       */
      KL15PwrSply_DD_PwrSplyRealErr29 = 1U;
    } else if (rtb_DTC_RRBLampCtlUnitPowerO_af && rtb_DTC_RRBLampCtlUnitPowerOC_l) {
      /* Switch: '<S155>/Switch1' incorporates:
       *  Constant: '<S155>/Constant1'
       *  Switch: '<S155>/Switch5'
       *  Switch: '<S155>/Switch6'
       */
      KL15PwrSply_DD_PwrSplyRealErr29 = 4U;
    } else {
      /* Switch: '<S155>/Switch6' incorporates:
       *  Constant: '<S155>/Constant3'
       *  Switch: '<S155>/Switch1'
       *  Switch: '<S155>/Switch5'
       */
      KL15PwrSply_DD_PwrSplyRealErr29 = 0U;
    }

    /* End of Switch: '<S155>/Switch4' */

    /* Outputs for Enabled SubSystem: '<S29>/RealErrHold' incorporates:
     *  EnablePort: '<S152>/Enable'
     */
    if (((0 == KL15PwrSply_DD_PwrSplyRealErr29) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_b != KL15PwrSply_DD_PwrSplyRealErr29) && (0 != KL15PwrSply_DD_PwrSplyRealErr29))) {
      KL15PwrSply_DD_B.stRealErr_i = KL15PwrSply_DD_PwrSplyRealErr29;
    }

    /* End of Outputs for SubSystem: '<S29>/RealErrHold' */

    /* Switch: '<S29>/Switch2' incorporates:
     *  Constant: '<S29>/Constant13'
     *  Constant: '<S29>/Constant33'
     *  Constant: '<S29>/Constant34'
     *  Constant: '<S29>/Constant6'
     *  Inport: '<S152>/stRealErr'
     *  Logic: '<S29>/Logical Operator5'
     *  Logic: '<S29>/Logical Operator6'
     *  Logic: '<S29>/Logical Operator7'
     *  Product: '<S29>/Product'
     *  RelationalOperator: '<S29>/Relational Operator4'
     *  RelationalOperator: '<S29>/Relational Operator5'
     *  RelationalOperator: '<S29>/Relational Operator6'
     *  UnitDelay: '<S29>/Unit Delay1'
     *  UnitDelay: '<S29>/Unit Delay2'
     */
    if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_a != 0) {
      KL15PwrSply_DD_B.Switch2_o = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr29_Calc * 0.01F);
    } else {
      KL15PwrSply_DD_B.Switch2_o = 0U;
    }

    /* End of Switch: '<S29>/Switch2' */

    /* DataTypeConversion: '<S29>/DataTypeConversion2' */
    KL15PwrSply_DD_B.DataTypeConversion2_h = (rtb_Switch_j != 0);

    /* Update for UnitDelay: '<S29>/Unit Delay4' */
    KL15PwrSply_DD_DW.UnitDelay4_DSTATE_n = rtb_Switch_j;

    /* Update for UnitDelay: '<S29>/Unit Delay' */
    KL15PwrSply_DD_DW.UnitDelay_DSTATE_f5 = tmpIRead_2[28];

    /* Update for UnitDelay: '<S29>/Unit Delay3' incorporates:
     *  DataTypeConversion: '<S29>/DataTypeConversion4'
     */
    KL15PwrSply_DD_DW.UnitDelay3_DSTATE_g = (rtb_Switch_j != 0);

    /* Update for UnitDelay: '<S29>/Unit Delay2' */
    KL15PwrSply_DD_DW.UnitDelay2_DSTATE_b = KL15PwrSply_DD_PwrSplyRealErr29;

    /* Update for UnitDelay: '<S29>/Unit Delay1' */
    KL15PwrSply_DD_DW.UnitDelay1_DSTATE_a = rtb_Switch_j;
  }

  /* End of Outputs for SubSystem: '<S1>/RRBLampCtlUnit_Ctl_2F_Diag_CutOff' */

  /* Logic: '<S1>/Logical Operator11' incorporates:
   *  Constant: '<S1>/Constant31'
   *  RelationalOperator: '<S1>/Relational Operator9'
   */
  rtb_LogicalOperator11 = (rtb_DTC_RLALampCtlUnitPowerS_gp && (KL15PwrSply_DD_PwrSplyRealErr29 == 2) && rtb_DTC_RLALampCtlUnitPowerOL_n && rtb_DTC_RLALampCtlUnitPowerSC_k);

  /* S-Function (Efx_Debounce_sf): '<S43>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant32'
   *  Constant: '<S1>/Constant33'
   *  Constant: '<S43>/Reset'
   *  Constant: '<S43>/THighLow'
   *  Constant: '<S43>/X_Init'
   *  S-Function (Upcast_sf): '<S43>/Upcast'
   *  S-Function (Upcast_sf): '<S43>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 100);
    rtb_Efx_Debounce_sf_f = Efx_Debounce_u8_u8(rtb_LogicalOperator11, &RRBLampWkUpOnDly, &paramdebounce_loc, 10000 );
  }

  /* Chart: '<S1>/RRBLampAllwSleepDly' incorporates:
   *  Constant: '<S1>/Constant37'
   */
  /* Gateway: KL15PwrSply_DD_Runnable_10ms_sys/RRBLampAllwSleepDly */
  /* During: KL15PwrSply_DD_Runnable_10ms_sys/RRBLampAllwSleepDly */
  if (KL15PwrSply_DD_DW.is_active_c4_KL15PwrSply_DD == 0U) {
    /* Entry: KL15PwrSply_DD_Runnable_10ms_sys/RRBLampAllwSleepDly */
    KL15PwrSply_DD_DW.is_active_c4_KL15PwrSply_DD = 1U;

    /* Entry Internal: KL15PwrSply_DD_Runnable_10ms_sys/RRBLampAllwSleepDly */
    /* Transition: '<S28>:4' */
    KL15PwrSply_DD_DW.is_c4_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

    /* Entry 'Normal': '<S28>:3' */
    /* '<S28>:3:1' flgAllwSleep_NW=false; */
    KL15PwrS_flgRRBLampAllwSleep_NW = false;

    /* '<S28>:3:1' AllwSleepTiming=0; */
    KL15PwrSply_DD_B.AllwSleepTiming_l = 0U;
  } else {
    switch (KL15PwrSply_DD_DW.is_c4_KL15PwrSply_DD) {
     case KL15PwrSply_DD_IN_AllwSleep:
      KL15PwrS_flgRRBLampAllwSleep_NW = false;

      /* During 'AllwSleep': '<S28>:15' */
      /* '<S28>:18:1' sf_internal_predicateOutput = ~flgNMHold; */
      if (!rtb_Efx_Debounce_sf_f) {
        /* Transition: '<S28>:18' */
        KL15PwrSply_DD_DW.is_c4_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

        /* Entry 'Normal': '<S28>:3' */
        /* '<S28>:3:1' flgAllwSleep_NW=false; */
        KL15PwrS_flgRRBLampAllwSleep_NW = false;

        /* '<S28>:3:1' AllwSleepTiming=0; */
        KL15PwrSply_DD_B.AllwSleepTiming_l = 0U;
      }
      break;

     case KL15PwrSply_DD_IN_NWHold:
      KL15PwrS_flgRRBLampAllwSleep_NW = true;

      /* During 'NWHold': '<S28>:5' */
      /* '<S28>:8:1' sf_internal_predicateOutput = ~flgNMHold; */
      if (!rtb_Efx_Debounce_sf_f) {
        /* Transition: '<S28>:8' */
        KL15PwrSply_DD_DW.is_c4_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

        /* Entry 'Normal': '<S28>:3' */
        /* '<S28>:3:1' flgAllwSleep_NW=false; */
        KL15PwrS_flgRRBLampAllwSleep_NW = false;

        /* '<S28>:3:1' AllwSleepTiming=0; */
        KL15PwrSply_DD_B.AllwSleepTiming_l = 0U;
      } else {
        /* '<S28>:17:1' sf_internal_predicateOutput = AllwSleepTiming>AllwSleepNWTime; */
        if (KL15PwrSply_DD_B.AllwSleepTiming_l > 3000) {
          /* Transition: '<S28>:17' */
          KL15PwrSply_DD_DW.is_c4_KL15PwrSply_DD = KL15PwrSply_DD_IN_AllwSleep;

          /* Entry 'AllwSleep': '<S28>:15' */
          /* '<S28>:15:1' flgAllwSleep_NW=false; */
          KL15PwrS_flgRRBLampAllwSleep_NW = false;

          /* '<S28>:15:1' AllwSleepTiming=0; */
          KL15PwrSply_DD_B.AllwSleepTiming_l = 0U;
        } else {
          /* '<S28>:5:1' AllwSleepTiming=AllwSleepTiming+1; */
          KL15PwrSply_DD_B.AllwSleepTiming_l = Mfx_Add_u16u16_u16(KL15PwrSply_DD_B.AllwSleepTiming_l, 1U);
        }
      }
      break;

     default:
      KL15PwrS_flgRRBLampAllwSleep_NW = false;

      /* During 'Normal': '<S28>:3' */
      /* '<S28>:6:1' sf_internal_predicateOutput = flgNMHold; */
      if (rtb_Efx_Debounce_sf_f) {
        /* Transition: '<S28>:6' */
        KL15PwrSply_DD_DW.is_c4_KL15PwrSply_DD = KL15PwrSply_DD_IN_NWHold;

        /* Entry 'NWHold': '<S28>:5' */
        /* '<S28>:5:1' flgAllwSleep_NW=true; */
        KL15PwrS_flgRRBLampAllwSleep_NW = true;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/RRBLampAllwSleepDly' */

  /* DataStoreWrite: '<S1>/Data Store Write3' */
  RRBLampAllwSleepTiming = KL15PwrSply_DD_B.AllwSleepTiming_l;

  /* FunctionCaller: '<S208>/DTC_RearMotorPowerSCB_GetEventFailed' */
  Rte_Call_DTC_RearMotorPowerSCB_GetEventFailed(&rtb_DataTypeConversion2_c);

  /* FunctionCaller: '<S208>/DTC_RearMotorPowerSCB_GetEventTested' */
  Rte_Call_DTC_RearMotorPowerSCB_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* FunctionCaller: '<S37>/DTC_RearMotorPowerSCG_GetEventFailed' */
  Rte_Call_DTC_RearMotorPowerSCG_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S37>/DTC_RearMotorPowerSCG_GetEventTested' */
  Rte_Call_DTC_RearMotorPowerSCG_GetEventTested(&rtb_DataTypeConversion2_bh);

  /* Logic: '<S37>/Logical Operator14' */
  rtb_DTC_RRBLampCtlUnitPowerOL_f = (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_bh);

  /* FunctionCaller: '<S37>/DTC_RearMotorPowerOC_GetEventFailed' */
  Rte_Call_DTC_RearMotorPowerOC_GetEventFailed(&rtb_DataTypeConversion2_bh);

  /* FunctionCaller: '<S37>/DTC_RearMotorPowerOC_GetEventTested' */
  Rte_Call_DTC_RearMotorPowerOC_GetEventTested(&rtb_DataTypeConversion2_k);

  /* Logic: '<S37>/Logical Operator13' incorporates:
   *  Logic: '<S37>/Logical Operator15'
   */
  rtb_DataTypeConversion2_k = (rtb_DTC_RRBLampCtlUnitPowerOL_f || (rtb_DataTypeConversion2_bh && rtb_DataTypeConversion2_k));

  /* UnitDelay: '<S37>/Unit Delay' */
  rtb_UnitDelay_g = KL15PwrSply_DD_DW.UnitDelay_DSTATE_m;

  /* RelationalOperator: '<S37>/Relational Operator1' incorporates:
   *  Constant: '<S37>/Constant4'
   */
  rtb_DataTypeConversion2_bh = (tmpIRead_2[24] == 1);

  /* Logic: '<S37>/Logical Operator10' incorporates:
   *  Constant: '<S37>/Constant3'
   *  Constant: '<S37>/Constant5'
   *  Logic: '<S37>/Logical Operator3'
   *  Logic: '<S37>/Logical Operator4'
   *  RelationalOperator: '<S37>/Relational Operator'
   *  RelationalOperator: '<S37>/Relational Operator2'
   */
  rtb_LogicalOperator10_n = ((rtb_UnitDelay_g != 0) || ((!rtb_DataTypeConversion2_bh) && (tmpIRead_2[24] != 2)));

  /* S-Function (Efx_Debounce_sf): '<S207>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S207>/Reset'
   *  Constant: '<S207>/THighLow'
   *  Constant: '<S207>/X_Init'
   *  Constant: '<S37>/Constant10'
   *  Constant: '<S37>/Constant9'
   *  S-Function (Upcast_sf): '<S207>/Upcast'
   *  S-Function (Upcast_sf): '<S207>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
    rtb_DataTypeConversion2_bh = Efx_Debounce_u8_u8(rtb_LogicalOperator10_n, &RearMotorOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
  }

  /* Switch: '<S37>/Switch' incorporates:
   *  Constant: '<S37>/Constant'
   *  Inport: '<Root>/KL15PwrSply_bRearMotorPowerTrigUds_Val'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   *  Logic: '<S37>/Logical Operator8'
   *  Logic: '<S37>/Logical Operator9'
   *  MultiPortSwitch: '<S37>/MultiportSwitch11'
   *  Switch: '<S37>/Switch1'
   *  Switch: '<S37>/Switch41'
   *  UnitDelay: '<S37>/Unit Delay3'
   */
  if (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_bh) {
    KL15PwrSply_DD_PwrSply_stCtrl25 = 0U;
  } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bRearMotorPowerTrigUds_Val()) {
    /* Switch: '<S37>/Switch1' incorporates:
     *  Inport: '<Root>/KL15PwrSply_u8stRearMotorPowerUds_Val'
     */
    KL15PwrSply_DD_PwrSply_stCtrl25 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stRearMotorPowerUds_Val();
  } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S37>/MultiportSwitch11' incorporates:
     *  Switch: '<S37>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl25 = tmpIRead_1[24];
  } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
    /* Switch: '<S37>/Switch41' incorporates:
     *  Constant: '<S37>/Constant27'
     *  MultiPortSwitch: '<S37>/MultiportSwitch11'
     *  Switch: '<S37>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl25 = 1U;
  } else {
    /* MultiPortSwitch: '<S37>/MultiportSwitch11' incorporates:
     *  Switch: '<S37>/Switch1'
     *  Switch: '<S37>/Switch41'
     */
    KL15PwrSply_DD_PwrSply_stCtrl25 = tmpIRead_1[24];
  }

  /* End of Switch: '<S37>/Switch' */

  /* FunctionCaller: '<S208>/DTC_RearMotorPowerOL_GetEventFailed' */
  Rte_Call_DTC_RearMotorPowerOL_GetEventFailed(&rtb_DTC_RearMotorPowerOL_GetE_l);

  /* FunctionCaller: '<S208>/DTC_RearMotorPowerOL_GetEventTested' */
  Rte_Call_DTC_RearMotorPowerOL_GetEventTested(&rtb_DTC_RearMotorPowerOL_GetE_n);

  /* FunctionCaller: '<S208>/DTC_RearMotorPowerSCG_GetEventFailed' */
  Rte_Call_DTC_RearMotorPowerSCG_GetEventFailed(&rtb_DTC_RearMotorPowerSCG_Ge_lg);

  /* FunctionCaller: '<S208>/DTC_RearMotorPowerSCG_GetEventTested' */
  Rte_Call_DTC_RearMotorPowerSCG_GetEventTested(&rtb_DTC_RearMotorPowerSCG_Get_f);

  /* FunctionCaller: '<S208>/DTC_RearMotorPowerOC_GetEventFailed' */
  Rte_Call_DTC_RearMotorPowerOC_GetEventFailed(&rtb_DTC_RearMotorPowerOC_GetE_o);

  /* FunctionCaller: '<S208>/DTC_RearMotorPowerOC_GetEventTested' */
  Rte_Call_DTC_RearMotorPowerOC_GetEventTested(&rtb_DTC_RearMotorPowerOC_Get_ho);

  /* Switch: '<S208>/Switch4' incorporates:
   *  Constant: '<S208>/Constant5'
   *  Constant: '<S208>/Constant59'
   *  Constant: '<S208>/Constant8'
   *  Logic: '<S208>/Logical Operator1'
   *  Logic: '<S208>/Logical Operator4'
   *  Logic: '<S208>/Logical Operator6'
   *  Logic: '<S208>/Logical Operator7'
   *  RelationalOperator: '<S208>/Relational Operator'
   *  RelationalOperator: '<S208>/Relational Operator1'
   *  Switch: '<S208>/Switch1'
   *  Switch: '<S208>/Switch5'
   *  Switch: '<S208>/Switch6'
   */
  if (rtb_DataTypeConversion2_c && rtb_DataTypeConversion2_jd && (KL15PwrSply_DD_PwrSply_stCtrl25 == 0)) {
    KL15PwrSply_DD_PwrSplyRealErr25 = 2U;
  } else if (rtb_DTC_RearMotorPowerOL_GetE_l && rtb_DTC_RearMotorPowerOL_GetE_n && (KL15PwrSply_DD_PwrSply_stCtrl25 == 1)) {
    /* Switch: '<S208>/Switch5' incorporates:
     *  Constant: '<S208>/Constant6'
     */
    KL15PwrSply_DD_PwrSplyRealErr25 = 3U;
  } else if (rtb_DTC_RearMotorPowerSCG_Ge_lg && rtb_DTC_RearMotorPowerSCG_Get_f) {
    /* Switch: '<S208>/Switch6' incorporates:
     *  Constant: '<S208>/Constant7'
     *  Switch: '<S208>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr25 = 1U;
  } else if (rtb_DTC_RearMotorPowerOC_GetE_o && rtb_DTC_RearMotorPowerOC_Get_ho) {
    /* Switch: '<S208>/Switch1' incorporates:
     *  Constant: '<S208>/Constant1'
     *  Switch: '<S208>/Switch5'
     *  Switch: '<S208>/Switch6'
     */
    KL15PwrSply_DD_PwrSplyRealErr25 = 4U;
  } else {
    /* Switch: '<S208>/Switch6' incorporates:
     *  Constant: '<S208>/Constant3'
     *  Switch: '<S208>/Switch1'
     *  Switch: '<S208>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr25 = 0U;
  }

  /* End of Switch: '<S208>/Switch4' */

  /* Logic: '<S1>/Logical Operator9' incorporates:
   *  Constant: '<S1>/Constant17'
   *  RelationalOperator: '<S1>/Relational Operator6'
   */
  rtb_LogicalOperator9 = (rtb_DTC_RLALampCtlUnitPowerS_gp && (KL15PwrSply_DD_PwrSplyRealErr25 == 2));

  /* S-Function (Efx_Debounce_sf): '<S39>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S1>/Constant18'
   *  Constant: '<S1>/Constant19'
   *  Constant: '<S39>/Reset'
   *  Constant: '<S39>/THighLow'
   *  Constant: '<S39>/X_Init'
   *  S-Function (Upcast_sf): '<S39>/Upcast'
   *  S-Function (Upcast_sf): '<S39>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 100);
    rtb_Efx_Debounce_sf_a = Efx_Debounce_u8_u8(rtb_LogicalOperator9, &RearMotorWkUpOnDly, &paramdebounce_loc, 10000 );
  }

  /* Chart: '<S1>/RearMotorAllwSleepDly' incorporates:
   *  Constant: '<S1>/Constant38'
   */
  /* Gateway: KL15PwrSply_DD_Runnable_10ms_sys/RearMotorAllwSleepDly */
  /* During: KL15PwrSply_DD_Runnable_10ms_sys/RearMotorAllwSleepDly */
  if (KL15PwrSply_DD_DW.is_active_c5_KL15PwrSply_DD == 0U) {
    /* Entry: KL15PwrSply_DD_Runnable_10ms_sys/RearMotorAllwSleepDly */
    KL15PwrSply_DD_DW.is_active_c5_KL15PwrSply_DD = 1U;

    /* Entry Internal: KL15PwrSply_DD_Runnable_10ms_sys/RearMotorAllwSleepDly */
    /* Transition: '<S35>:4' */
    KL15PwrSply_DD_DW.is_c5_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

    /* Entry 'Normal': '<S35>:3' */
    /* '<S35>:3:1' flgAllwSleep_NW=false; */
    KL_flgRearMotorLampAllwSleep_NW = false;

    /* '<S35>:3:1' AllwSleepTiming=0; */
    KL15PwrSply_DD_B.AllwSleepTiming = 0U;
  } else {
    switch (KL15PwrSply_DD_DW.is_c5_KL15PwrSply_DD) {
     case KL15PwrSply_DD_IN_AllwSleep:
      KL_flgRearMotorLampAllwSleep_NW = false;

      /* During 'AllwSleep': '<S35>:15' */
      /* '<S35>:18:1' sf_internal_predicateOutput = ~flgNMHold; */
      if (!rtb_Efx_Debounce_sf_a) {
        /* Transition: '<S35>:18' */
        KL15PwrSply_DD_DW.is_c5_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

        /* Entry 'Normal': '<S35>:3' */
        /* '<S35>:3:1' flgAllwSleep_NW=false; */
        KL_flgRearMotorLampAllwSleep_NW = false;

        /* '<S35>:3:1' AllwSleepTiming=0; */
        KL15PwrSply_DD_B.AllwSleepTiming = 0U;
      }
      break;

     case KL15PwrSply_DD_IN_NWHold:
      KL_flgRearMotorLampAllwSleep_NW = true;

      /* During 'NWHold': '<S35>:5' */
      /* '<S35>:8:1' sf_internal_predicateOutput = ~flgNMHold; */
      if (!rtb_Efx_Debounce_sf_a) {
        /* Transition: '<S35>:8' */
        KL15PwrSply_DD_DW.is_c5_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal;

        /* Entry 'Normal': '<S35>:3' */
        /* '<S35>:3:1' flgAllwSleep_NW=false; */
        KL_flgRearMotorLampAllwSleep_NW = false;

        /* '<S35>:3:1' AllwSleepTiming=0; */
        KL15PwrSply_DD_B.AllwSleepTiming = 0U;
      } else {
        /* '<S35>:17:1' sf_internal_predicateOutput = AllwSleepTiming>AllwSleepNWTime; */
        if (KL15PwrSply_DD_B.AllwSleepTiming > 3000) {
          /* Transition: '<S35>:17' */
          KL15PwrSply_DD_DW.is_c5_KL15PwrSply_DD = KL15PwrSply_DD_IN_AllwSleep;

          /* Entry 'AllwSleep': '<S35>:15' */
          /* '<S35>:15:1' flgAllwSleep_NW=false; */
          KL_flgRearMotorLampAllwSleep_NW = false;

          /* '<S35>:15:1' AllwSleepTiming=0; */
          KL15PwrSply_DD_B.AllwSleepTiming = 0U;
        } else {
          /* '<S35>:5:1' AllwSleepTiming=AllwSleepTiming+1; */
          KL15PwrSply_DD_B.AllwSleepTiming = Mfx_Add_u16u16_u16(KL15PwrSply_DD_B.AllwSleepTiming, 1U);
        }
      }
      break;

     default:
      KL_flgRearMotorLampAllwSleep_NW = false;

      /* During 'Normal': '<S35>:3' */
      /* '<S35>:6:1' sf_internal_predicateOutput = flgNMHold; */
      if (rtb_Efx_Debounce_sf_a) {
        /* Transition: '<S35>:6' */
        KL15PwrSply_DD_DW.is_c5_KL15PwrSply_DD = KL15PwrSply_DD_IN_NWHold;

        /* Entry 'NWHold': '<S35>:5' */
        /* '<S35>:5:1' flgAllwSleep_NW=true; */
        KL_flgRearMotorLampAllwSleep_NW = true;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/RearMotorAllwSleepDly' */

  /* DataStoreWrite: '<S1>/Data Store Write4' */
  RearMotorAllwSleepTiming = KL15PwrSply_DD_B.AllwSleepTiming;

  /* Chart: '<S1>/RLALampWkUpDly' incorporates:
   *  Constant: '<S1>/Constant46'
   */
  /* Gateway: KL15PwrSply_DD_Runnable_10ms_sys/RLALampWkUpDly */
  /* During: KL15PwrSply_DD_Runnable_10ms_sys/RLALampWkUpDly */
  if (KL15PwrSply_DD_DW.is_active_c6_KL15PwrSply_DD == 0U) {
    /* Entry: KL15PwrSply_DD_Runnable_10ms_sys/RLALampWkUpDly */
    KL15PwrSply_DD_DW.is_active_c6_KL15PwrSply_DD = 1U;

    /* Entry Internal: KL15PwrSply_DD_Runnable_10ms_sys/RLALampWkUpDly */
    /* Transition: '<S20>:4' */
    KL15PwrSply_DD_DW.is_c6_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

    /* Entry 'Normal': '<S20>:3' */
    /* '<S20>:3:1' flgWkUp=false; */
    KL15PwrSply_DD_flgRLALampWkUp = false;

    /* '<S20>:3:1' WkUpTiming=0; */
    KL15PwrSply_DD_B.WkUpTiming_p4 = 0U;
  } else {
    switch (KL15PwrSply_DD_DW.is_c6_KL15PwrSply_DD) {
     case KL15PwrSply_DD_IN_Normal_h:
      KL15PwrSply_DD_flgRLALampWkUp = false;

      /* During 'Normal': '<S20>:3' */
      /* '<S20>:6:1' sf_internal_predicateOutput = flgWkUpHold; */
      if (rtb_Efx_Debounce_sf_j) {
        /* Transition: '<S20>:6' */
        KL15PwrSply_DD_DW.is_c6_KL15PwrSply_DD = KL15PwrSply_DD_IN_WkUpHold;

        /* Entry 'WkUpHold': '<S20>:5' */
        /* '<S20>:5:1' flgWkUp=true; */
        KL15PwrSply_DD_flgRLALampWkUp = true;
      }
      break;

     case KL15PwrSply_DD_IN_WkUp:
      KL15PwrSply_DD_flgRLALampWkUp = false;

      /* During 'WkUp': '<S20>:15' */
      /* '<S20>:18:1' sf_internal_predicateOutput = ~flgWkUpHold; */
      if (!rtb_Efx_Debounce_sf_j) {
        /* Transition: '<S20>:18' */
        KL15PwrSply_DD_DW.is_c6_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

        /* Entry 'Normal': '<S20>:3' */
        /* '<S20>:3:1' flgWkUp=false; */
        KL15PwrSply_DD_flgRLALampWkUp = false;

        /* '<S20>:3:1' WkUpTiming=0; */
        KL15PwrSply_DD_B.WkUpTiming_p4 = 0U;
      }
      break;

     default:
      KL15PwrSply_DD_flgRLALampWkUp = true;

      /* During 'WkUpHold': '<S20>:5' */
      /* '<S20>:8:1' sf_internal_predicateOutput = ~flgWkUpHold; */
      if (!rtb_Efx_Debounce_sf_j) {
        /* Transition: '<S20>:8' */
        KL15PwrSply_DD_DW.is_c6_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

        /* Entry 'Normal': '<S20>:3' */
        /* '<S20>:3:1' flgWkUp=false; */
        KL15PwrSply_DD_flgRLALampWkUp = false;

        /* '<S20>:3:1' WkUpTiming=0; */
        KL15PwrSply_DD_B.WkUpTiming_p4 = 0U;
      } else {
        /* '<S20>:17:1' sf_internal_predicateOutput = WkUpTiming>WkUpTime; */
        if (KL15PwrSply_DD_B.WkUpTiming_p4 > 5) {
          /* Transition: '<S20>:17' */
          KL15PwrSply_DD_DW.is_c6_KL15PwrSply_DD = KL15PwrSply_DD_IN_WkUp;

          /* Entry 'WkUp': '<S20>:15' */
          /* '<S20>:15:1' flgWkUp=false; */
          KL15PwrSply_DD_flgRLALampWkUp = false;

          /* '<S20>:15:1' WkUpTiming=0; */
          KL15PwrSply_DD_B.WkUpTiming_p4 = 0U;
        } else {
          /* '<S20>:5:1' WkUpTiming=WkUpTiming+1; */
          KL15PwrSply_DD_B.WkUpTiming_p4 = Mfx_Add_u16u16_u16(KL15PwrSply_DD_B.WkUpTiming_p4, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S1>/RLALampWkUpDly' */

  /* DataStoreWrite: '<S1>/Data Store Write5' */
  RLALampWkUpTiming = KL15PwrSply_DD_B.WkUpTiming_p4;

  /* Chart: '<S1>/RLBLampWkUpDly' incorporates:
   *  Constant: '<S1>/Constant47'
   */
  /* Gateway: KL15PwrSply_DD_Runnable_10ms_sys/RLBLampWkUpDly */
  /* During: KL15PwrSply_DD_Runnable_10ms_sys/RLBLampWkUpDly */
  if (KL15PwrSply_DD_DW.is_active_c7_KL15PwrSply_DD == 0U) {
    /* Entry: KL15PwrSply_DD_Runnable_10ms_sys/RLBLampWkUpDly */
    KL15PwrSply_DD_DW.is_active_c7_KL15PwrSply_DD = 1U;

    /* Entry Internal: KL15PwrSply_DD_Runnable_10ms_sys/RLBLampWkUpDly */
    /* Transition: '<S23>:4' */
    KL15PwrSply_DD_DW.is_c7_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

    /* Entry 'Normal': '<S23>:3' */
    /* '<S23>:3:1' flgWkUp=false; */
    KL15PwrSply_DD_flgRLBLampWkUp = false;

    /* '<S23>:3:1' WkUpTiming=0; */
    KL15PwrSply_DD_B.WkUpTiming_p = 0U;
  } else {
    switch (KL15PwrSply_DD_DW.is_c7_KL15PwrSply_DD) {
     case KL15PwrSply_DD_IN_Normal_h:
      KL15PwrSply_DD_flgRLBLampWkUp = false;

      /* During 'Normal': '<S23>:3' */
      /* '<S23>:6:1' sf_internal_predicateOutput = flgWkUpHold; */
      if (rtb_Efx_Debounce_sf_g) {
        /* Transition: '<S23>:6' */
        KL15PwrSply_DD_DW.is_c7_KL15PwrSply_DD = KL15PwrSply_DD_IN_WkUpHold;

        /* Entry 'WkUpHold': '<S23>:5' */
        /* '<S23>:5:1' flgWkUp=true; */
        KL15PwrSply_DD_flgRLBLampWkUp = true;
      }
      break;

     case KL15PwrSply_DD_IN_WkUp:
      KL15PwrSply_DD_flgRLBLampWkUp = false;

      /* During 'WkUp': '<S23>:15' */
      /* '<S23>:18:1' sf_internal_predicateOutput = ~flgWkUpHold; */
      if (!rtb_Efx_Debounce_sf_g) {
        /* Transition: '<S23>:18' */
        KL15PwrSply_DD_DW.is_c7_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

        /* Entry 'Normal': '<S23>:3' */
        /* '<S23>:3:1' flgWkUp=false; */
        KL15PwrSply_DD_flgRLBLampWkUp = false;

        /* '<S23>:3:1' WkUpTiming=0; */
        KL15PwrSply_DD_B.WkUpTiming_p = 0U;
      }
      break;

     default:
      KL15PwrSply_DD_flgRLBLampWkUp = true;

      /* During 'WkUpHold': '<S23>:5' */
      /* '<S23>:8:1' sf_internal_predicateOutput = ~flgWkUpHold; */
      if (!rtb_Efx_Debounce_sf_g) {
        /* Transition: '<S23>:8' */
        KL15PwrSply_DD_DW.is_c7_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

        /* Entry 'Normal': '<S23>:3' */
        /* '<S23>:3:1' flgWkUp=false; */
        KL15PwrSply_DD_flgRLBLampWkUp = false;

        /* '<S23>:3:1' WkUpTiming=0; */
        KL15PwrSply_DD_B.WkUpTiming_p = 0U;
      } else {
        /* '<S23>:17:1' sf_internal_predicateOutput = WkUpTiming>WkUpTime; */
        if (KL15PwrSply_DD_B.WkUpTiming_p > 5) {
          /* Transition: '<S23>:17' */
          KL15PwrSply_DD_DW.is_c7_KL15PwrSply_DD = KL15PwrSply_DD_IN_WkUp;

          /* Entry 'WkUp': '<S23>:15' */
          /* '<S23>:15:1' flgWkUp=false; */
          KL15PwrSply_DD_flgRLBLampWkUp = false;

          /* '<S23>:15:1' WkUpTiming=0; */
          KL15PwrSply_DD_B.WkUpTiming_p = 0U;
        } else {
          /* '<S23>:5:1' WkUpTiming=WkUpTiming+1; */
          KL15PwrSply_DD_B.WkUpTiming_p = Mfx_Add_u16u16_u16(KL15PwrSply_DD_B.WkUpTiming_p, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S1>/RLBLampWkUpDly' */

  /* DataStoreWrite: '<S1>/Data Store Write6' */
  RLBLampWkUpTiming = KL15PwrSply_DD_B.WkUpTiming_p;

  /* Chart: '<S1>/RRALampWkUpDly' incorporates:
   *  Constant: '<S1>/Constant48'
   */
  /* Gateway: KL15PwrSply_DD_Runnable_10ms_sys/RRALampWkUpDly */
  /* During: KL15PwrSply_DD_Runnable_10ms_sys/RRALampWkUpDly */
  if (KL15PwrSply_DD_DW.is_active_c8_KL15PwrSply_DD == 0U) {
    /* Entry: KL15PwrSply_DD_Runnable_10ms_sys/RRALampWkUpDly */
    KL15PwrSply_DD_DW.is_active_c8_KL15PwrSply_DD = 1U;

    /* Entry Internal: KL15PwrSply_DD_Runnable_10ms_sys/RRALampWkUpDly */
    /* Transition: '<S27>:4' */
    KL15PwrSply_DD_DW.is_c8_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

    /* Entry 'Normal': '<S27>:3' */
    /* '<S27>:3:1' flgWkUp=false; */
    KL15PwrSply_DD_flgRRALampWkUp = false;

    /* '<S27>:3:1' WkUpTiming=0; */
    KL15PwrSply_DD_B.WkUpTiming_h = 0U;
  } else {
    switch (KL15PwrSply_DD_DW.is_c8_KL15PwrSply_DD) {
     case KL15PwrSply_DD_IN_Normal_h:
      KL15PwrSply_DD_flgRRALampWkUp = false;

      /* During 'Normal': '<S27>:3' */
      /* '<S27>:6:1' sf_internal_predicateOutput = flgWkUpHold; */
      if (rtb_Efx_Debounce_sf_k) {
        /* Transition: '<S27>:6' */
        KL15PwrSply_DD_DW.is_c8_KL15PwrSply_DD = KL15PwrSply_DD_IN_WkUpHold;

        /* Entry 'WkUpHold': '<S27>:5' */
        /* '<S27>:5:1' flgWkUp=true; */
        KL15PwrSply_DD_flgRRALampWkUp = true;
      }
      break;

     case KL15PwrSply_DD_IN_WkUp:
      KL15PwrSply_DD_flgRRALampWkUp = false;

      /* During 'WkUp': '<S27>:15' */
      /* '<S27>:18:1' sf_internal_predicateOutput = ~flgWkUpHold; */
      if (!rtb_Efx_Debounce_sf_k) {
        /* Transition: '<S27>:18' */
        KL15PwrSply_DD_DW.is_c8_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

        /* Entry 'Normal': '<S27>:3' */
        /* '<S27>:3:1' flgWkUp=false; */
        KL15PwrSply_DD_flgRRALampWkUp = false;

        /* '<S27>:3:1' WkUpTiming=0; */
        KL15PwrSply_DD_B.WkUpTiming_h = 0U;
      }
      break;

     default:
      KL15PwrSply_DD_flgRRALampWkUp = true;

      /* During 'WkUpHold': '<S27>:5' */
      /* '<S27>:8:1' sf_internal_predicateOutput = ~flgWkUpHold; */
      if (!rtb_Efx_Debounce_sf_k) {
        /* Transition: '<S27>:8' */
        KL15PwrSply_DD_DW.is_c8_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

        /* Entry 'Normal': '<S27>:3' */
        /* '<S27>:3:1' flgWkUp=false; */
        KL15PwrSply_DD_flgRRALampWkUp = false;

        /* '<S27>:3:1' WkUpTiming=0; */
        KL15PwrSply_DD_B.WkUpTiming_h = 0U;
      } else {
        /* '<S27>:17:1' sf_internal_predicateOutput = WkUpTiming>WkUpTime; */
        if (KL15PwrSply_DD_B.WkUpTiming_h > 5) {
          /* Transition: '<S27>:17' */
          KL15PwrSply_DD_DW.is_c8_KL15PwrSply_DD = KL15PwrSply_DD_IN_WkUp;

          /* Entry 'WkUp': '<S27>:15' */
          /* '<S27>:15:1' flgWkUp=false; */
          KL15PwrSply_DD_flgRRALampWkUp = false;

          /* '<S27>:15:1' WkUpTiming=0; */
          KL15PwrSply_DD_B.WkUpTiming_h = 0U;
        } else {
          /* '<S27>:5:1' WkUpTiming=WkUpTiming+1; */
          KL15PwrSply_DD_B.WkUpTiming_h = Mfx_Add_u16u16_u16(KL15PwrSply_DD_B.WkUpTiming_h, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S1>/RRALampWkUpDly' */

  /* DataStoreWrite: '<S1>/Data Store Write7' */
  RRALampWkUpTiming = KL15PwrSply_DD_B.WkUpTiming_h;

  /* Chart: '<S1>/RRBLampWkUpDly' incorporates:
   *  Constant: '<S1>/Constant49'
   */
  /* Gateway: KL15PwrSply_DD_Runnable_10ms_sys/RRBLampWkUpDly */
  /* During: KL15PwrSply_DD_Runnable_10ms_sys/RRBLampWkUpDly */
  if (KL15PwrSply_DD_DW.is_active_c9_KL15PwrSply_DD == 0U) {
    /* Entry: KL15PwrSply_DD_Runnable_10ms_sys/RRBLampWkUpDly */
    KL15PwrSply_DD_DW.is_active_c9_KL15PwrSply_DD = 1U;

    /* Entry Internal: KL15PwrSply_DD_Runnable_10ms_sys/RRBLampWkUpDly */
    /* Transition: '<S30>:4' */
    KL15PwrSply_DD_DW.is_c9_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

    /* Entry 'Normal': '<S30>:3' */
    /* '<S30>:3:1' flgWkUp=false; */
    KL15PwrSply_DD_flgRRBLampWkUp = false;

    /* '<S30>:3:1' WkUpTiming=0; */
    KL15PwrSply_DD_B.WkUpTiming_f = 0U;
  } else {
    switch (KL15PwrSply_DD_DW.is_c9_KL15PwrSply_DD) {
     case KL15PwrSply_DD_IN_Normal_h:
      KL15PwrSply_DD_flgRRBLampWkUp = false;

      /* During 'Normal': '<S30>:3' */
      /* '<S30>:6:1' sf_internal_predicateOutput = flgWkUpHold; */
      if (rtb_Efx_Debounce_sf_f) {
        /* Transition: '<S30>:6' */
        KL15PwrSply_DD_DW.is_c9_KL15PwrSply_DD = KL15PwrSply_DD_IN_WkUpHold;

        /* Entry 'WkUpHold': '<S30>:5' */
        /* '<S30>:5:1' flgWkUp=true; */
        KL15PwrSply_DD_flgRRBLampWkUp = true;
      }
      break;

     case KL15PwrSply_DD_IN_WkUp:
      KL15PwrSply_DD_flgRRBLampWkUp = false;

      /* During 'WkUp': '<S30>:15' */
      /* '<S30>:18:1' sf_internal_predicateOutput = ~flgWkUpHold; */
      if (!rtb_Efx_Debounce_sf_f) {
        /* Transition: '<S30>:18' */
        KL15PwrSply_DD_DW.is_c9_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

        /* Entry 'Normal': '<S30>:3' */
        /* '<S30>:3:1' flgWkUp=false; */
        KL15PwrSply_DD_flgRRBLampWkUp = false;

        /* '<S30>:3:1' WkUpTiming=0; */
        KL15PwrSply_DD_B.WkUpTiming_f = 0U;
      }
      break;

     default:
      KL15PwrSply_DD_flgRRBLampWkUp = true;

      /* During 'WkUpHold': '<S30>:5' */
      /* '<S30>:8:1' sf_internal_predicateOutput = ~flgWkUpHold; */
      if (!rtb_Efx_Debounce_sf_f) {
        /* Transition: '<S30>:8' */
        KL15PwrSply_DD_DW.is_c9_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

        /* Entry 'Normal': '<S30>:3' */
        /* '<S30>:3:1' flgWkUp=false; */
        KL15PwrSply_DD_flgRRBLampWkUp = false;

        /* '<S30>:3:1' WkUpTiming=0; */
        KL15PwrSply_DD_B.WkUpTiming_f = 0U;
      } else {
        /* '<S30>:17:1' sf_internal_predicateOutput = WkUpTiming>WkUpTime; */
        if (KL15PwrSply_DD_B.WkUpTiming_f > 5) {
          /* Transition: '<S30>:17' */
          KL15PwrSply_DD_DW.is_c9_KL15PwrSply_DD = KL15PwrSply_DD_IN_WkUp;

          /* Entry 'WkUp': '<S30>:15' */
          /* '<S30>:15:1' flgWkUp=false; */
          KL15PwrSply_DD_flgRRBLampWkUp = false;

          /* '<S30>:15:1' WkUpTiming=0; */
          KL15PwrSply_DD_B.WkUpTiming_f = 0U;
        } else {
          /* '<S30>:5:1' WkUpTiming=WkUpTiming+1; */
          KL15PwrSply_DD_B.WkUpTiming_f = Mfx_Add_u16u16_u16(KL15PwrSply_DD_B.WkUpTiming_f, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S1>/RRBLampWkUpDly' */

  /* DataStoreWrite: '<S1>/Data Store Write8' */
  RRBLampWkUpTiming = KL15PwrSply_DD_B.WkUpTiming_f;

  /* Chart: '<S1>/RearMotorWkUpDly' incorporates:
   *  Constant: '<S1>/Constant50'
   */
  /* Gateway: KL15PwrSply_DD_Runnable_10ms_sys/RearMotorWkUpDly */
  /* During: KL15PwrSply_DD_Runnable_10ms_sys/RearMotorWkUpDly */
  if (KL15PwrSply_DD_DW.is_active_c10_KL15PwrSply_DD == 0U) {
    /* Entry: KL15PwrSply_DD_Runnable_10ms_sys/RearMotorWkUpDly */
    KL15PwrSply_DD_DW.is_active_c10_KL15PwrSply_DD = 1U;

    /* Entry Internal: KL15PwrSply_DD_Runnable_10ms_sys/RearMotorWkUpDly */
    /* Transition: '<S36>:4' */
    KL15PwrSply_DD_DW.is_c10_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

    /* Entry 'Normal': '<S36>:3' */
    /* '<S36>:3:1' flgWkUp=false; */
    KL15PwrSply_DD_flgRearMotorWkUp = false;

    /* '<S36>:3:1' WkUpTiming=0; */
    KL15PwrSply_DD_B.WkUpTiming = 0U;
  } else {
    switch (KL15PwrSply_DD_DW.is_c10_KL15PwrSply_DD) {
     case KL15PwrSply_DD_IN_Normal_h:
      KL15PwrSply_DD_flgRearMotorWkUp = false;

      /* During 'Normal': '<S36>:3' */
      /* '<S36>:6:1' sf_internal_predicateOutput = flgWkUpHold; */
      if (rtb_Efx_Debounce_sf_a) {
        /* Transition: '<S36>:6' */
        KL15PwrSply_DD_DW.is_c10_KL15PwrSply_DD = KL15PwrSply_DD_IN_WkUpHold;

        /* Entry 'WkUpHold': '<S36>:5' */
        /* '<S36>:5:1' flgWkUp=true; */
        KL15PwrSply_DD_flgRearMotorWkUp = true;
      }
      break;

     case KL15PwrSply_DD_IN_WkUp:
      KL15PwrSply_DD_flgRearMotorWkUp = false;

      /* During 'WkUp': '<S36>:15' */
      /* '<S36>:18:1' sf_internal_predicateOutput = ~flgWkUpHold; */
      if (!rtb_Efx_Debounce_sf_a) {
        /* Transition: '<S36>:18' */
        KL15PwrSply_DD_DW.is_c10_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

        /* Entry 'Normal': '<S36>:3' */
        /* '<S36>:3:1' flgWkUp=false; */
        KL15PwrSply_DD_flgRearMotorWkUp = false;

        /* '<S36>:3:1' WkUpTiming=0; */
        KL15PwrSply_DD_B.WkUpTiming = 0U;
      }
      break;

     default:
      KL15PwrSply_DD_flgRearMotorWkUp = true;

      /* During 'WkUpHold': '<S36>:5' */
      /* '<S36>:8:1' sf_internal_predicateOutput = ~flgWkUpHold; */
      if (!rtb_Efx_Debounce_sf_a) {
        /* Transition: '<S36>:8' */
        KL15PwrSply_DD_DW.is_c10_KL15PwrSply_DD = KL15PwrSply_DD_IN_Normal_h;

        /* Entry 'Normal': '<S36>:3' */
        /* '<S36>:3:1' flgWkUp=false; */
        KL15PwrSply_DD_flgRearMotorWkUp = false;

        /* '<S36>:3:1' WkUpTiming=0; */
        KL15PwrSply_DD_B.WkUpTiming = 0U;
      } else {
        /* '<S36>:17:1' sf_internal_predicateOutput = WkUpTiming>WkUpTime; */
        if (KL15PwrSply_DD_B.WkUpTiming > 5) {
          /* Transition: '<S36>:17' */
          KL15PwrSply_DD_DW.is_c10_KL15PwrSply_DD = KL15PwrSply_DD_IN_WkUp;

          /* Entry 'WkUp': '<S36>:15' */
          /* '<S36>:15:1' flgWkUp=false; */
          KL15PwrSply_DD_flgRearMotorWkUp = false;

          /* '<S36>:15:1' WkUpTiming=0; */
          KL15PwrSply_DD_B.WkUpTiming = 0U;
        } else {
          /* '<S36>:5:1' WkUpTiming=WkUpTiming+1; */
          KL15PwrSply_DD_B.WkUpTiming = Mfx_Add_u16u16_u16(KL15PwrSply_DD_B.WkUpTiming, 1U);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S1>/RearMotorWkUpDly' */

  /* DataStoreWrite: '<S1>/Data Store Write9' */
  RearMotorWkUpTiming = KL15PwrSply_DD_B.WkUpTiming;

  /* UnitDelay: '<S3>/Unit Delay4' */
  rtb_UnitDelay4 = KL15PwrSply_DD_PwrSply_stCtrl08;

  /* S-Function (Efx_Debounce_sf): '<S49>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S3>/Constant1'
   *  Constant: '<S3>/Constant2'
   *  Constant: '<S49>/Reset'
   *  Constant: '<S49>/THighLow'
   *  Constant: '<S49>/X_Init'
   *  S-Function (Upcast_sf): '<S49>/Upcast'
   *  S-Function (Upcast_sf): '<S49>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
    rtb_UnitDelay_g = Efx_Debounce_u8_u8(rtb_UnitDelay4, &AMPOnDiagDly_I, &paramdebounce_loc, 10000 );
  }

  /* UnitDelay: '<S3>/Unit Delay' */
  rtb_Efx_Debounce_sf_d = KL15PwrSply_DD_DW.UnitDelay_DSTATE_d;

  /* RelationalOperator: '<S3>/Relational Operator1' incorporates:
   *  Constant: '<S3>/Constant4'
   */
  rtb_DataTypeConversion2_bh = (tmpIRead_2[7] == 1);

  /* RelationalOperator: '<S3>/Relational Operator2' incorporates:
   *  Constant: '<S3>/Constant5'
   */
  rtb_DataTypeConversion2_k = (tmpIRead_2[7] == 2);

  /* Logic: '<S3>/Logical Operator10' incorporates:
   *  Constant: '<S3>/Constant3'
   *  Logic: '<S3>/Logical Operator3'
   *  Logic: '<S3>/Logical Operator4'
   *  RelationalOperator: '<S3>/Relational Operator'
   */
  rtb_LogicalOperator10_k = ((rtb_Efx_Debounce_sf_d != 0) || ((!rtb_DataTypeConversion2_bh) && (!rtb_DataTypeConversion2_k)));

  /* S-Function (Efx_Debounce_sf): '<S50>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S3>/Constant10'
   *  Constant: '<S3>/Constant9'
   *  Constant: '<S50>/Reset'
   *  Constant: '<S50>/THighLow'
   *  Constant: '<S50>/X_Init'
   *  S-Function (Upcast_sf): '<S50>/Upcast'
   *  S-Function (Upcast_sf): '<S50>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
    rtb_DataTypeConversion2_bh = Efx_Debounce_u8_u8(rtb_LogicalOperator10_k, &AMPOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S3>/DTC_AMPPowerSCG_GetEventFailed' */
  Rte_Call_DTC_AMPPowerSCG_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S3>/DTC_AMPPowerSCG_GetEventTested' */
  Rte_Call_DTC_AMPPowerSCG_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Logic: '<S3>/Logical Operator14' */
  rtb_DTC_RearMotorPowerOL_GetE_l = (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd);

  /* FunctionCaller: '<S3>/DTC_AMPPowerOC_GetEventFailed' */
  Rte_Call_DTC_AMPPowerOC_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S3>/DTC_AMPPowerOC_GetEventTested' */
  Rte_Call_DTC_AMPPowerOC_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/KL15PwrSply_bAMPPowerTrigUds_Val'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   *  Logic: '<S3>/Logical Operator13'
   *  Logic: '<S3>/Logical Operator15'
   *  Logic: '<S3>/Logical Operator8'
   *  Logic: '<S3>/Logical Operator9'
   *  MultiPortSwitch: '<S3>/MultiportSwitch11'
   *  Switch: '<S3>/Switch1'
   *  Switch: '<S3>/Switch41'
   *  UnitDelay: '<S3>/Unit Delay3'
   */
  if ((rtb_DTC_RearMotorPowerOL_GetE_l || (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd)) && rtb_DataTypeConversion2_bh) {
    KL15PwrSply_DD_PwrSply_stCtrl08 = 0U;
  } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bAMPPowerTrigUds_Val()) {
    /* Switch: '<S3>/Switch1' incorporates:
     *  Inport: '<Root>/KL15PwrSply_u8stAMPPowerUds_Val'
     */
    KL15PwrSply_DD_PwrSply_stCtrl08 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stAMPPowerUds_Val();
  } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S3>/MultiportSwitch11' incorporates:
     *  Switch: '<S3>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl08 = tmpIRead_1[7];
  } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_l && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
    /* Switch: '<S3>/Switch41' incorporates:
     *  Constant: '<S3>/Constant27'
     *  MultiPortSwitch: '<S3>/MultiportSwitch11'
     *  Switch: '<S3>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl08 = 1U;
  } else {
    /* MultiPortSwitch: '<S3>/MultiportSwitch11' incorporates:
     *  Switch: '<S3>/Switch1'
     *  Switch: '<S3>/Switch41'
     */
    KL15PwrSply_DD_PwrSply_stCtrl08 = tmpIRead_1[7];
  }

  /* End of Switch: '<S3>/Switch' */

  /* Logic: '<S3>/Logical Operator1' incorporates:
   *  Logic: '<S3>/Logical Operator2'
   */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (KL15PwrSply_DD_PwrSply_stCtrl08 == 0));

  /* FunctionCaller: '<S3>/IoHwAb_IoDiagDo_Do_Get' */
  Rte_Call_IoHwAb_IoDiagDo_Do_Get(O_S_KL15PwrSply08, &KL15PwrSply_D_PwrSplyDiag08_Get);

  /* SwitchCase: '<S3>/Switch Case1' incorporates:
   *  DataTypeConversion: '<S3>/DataTypeConversion1'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S3>/AMPOffDiagErr_Set' incorporates:
     *  ActionPort: '<S45>/Action Port'
     */
    /* Switch: '<S45>/Switch1' incorporates:
     *  Constant: '<S45>/Constant5'
     *  Constant: '<S45>/Constant6'
     *  DataTypeConversion: '<S52>/Extract Desired Bits'
     */
    if (((uint8)KL15PwrSply_D_PwrSplyDiag08_Get & 1U) != 0U) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S45>/Switch1' */

    /* FunctionCaller: '<S45>/DTC_AMPPowerSCB_SetEventStatus' */
    Rte_Call_DTC_AMPPowerSCB_SetEventStatus(rtb_Switch4_k3);

    /* End of Outputs for SubSystem: '<S3>/AMPOffDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/AMPOffDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S44>/Action Port'
     */
    /* FunctionCaller: '<S44>/DTC_AMPPowerSCB_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S44>/Constant'
     */
    Rte_Call_DTC_AMPPowerSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S3>/AMPOffDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S3>/Switch Case1' */

  /* FunctionCaller: '<S3>/IoHwAb_IoSigAdc_Adc_Get' */
  Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol08, &KL15PwrSply_DD_PwrVol08_Get);

  /* Product: '<S3>/Divide1' */
  KL15PwrSply_DD_PwrCurr08_Calc = (float32)KL15PwrSply_DD_PwrVol08_Get / 1780.0F * 34100.0F;

  /* RelationalOperator: '<S3>/Relational Operator7' */
  rtb_DataTypeConversion2_bh = (KL15PwrSply_DD_PwrCurr08_Calc > tmpIRead_0[7]);

  /* Logic: '<S3>/Logical Operator11' */
  rtb_DTC_RearMotorPowerOL_GetE_l = (rtb_DataTypeConversion2_bh && (rtb_UnitDelay_g != 0));

  /* Logic: '<S3>/Logical Operator' */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (rtb_UnitDelay_g != 0));

  /* SwitchCase: '<S3>/Switch Case' incorporates:
   *  DataTypeConversion: '<S3>/DataTypeConversion'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S3>/AMPOnDiagErr_Set' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    /* Switch: '<S47>/Switch8' incorporates:
     *  Constant: '<S47>/Constant'
     *  Constant: '<S47>/Constant13'
     *  DataTypeConversion: '<S47>/DataTypeConversion1'
     *  DataTypeConversion: '<S53>/Extract Desired Bits'
     */
    if (OLFaultBypass) {
      rtb_DTC_RLALampCtlUnitPowerOC_m = false;
    } else {
      rtb_DTC_RLALampCtlUnitPowerOC_m = (((uint8)(KL15PwrSply_D_PwrSplyDiag08_Get >> 3) & 1U) != 0U);
    }

    /* End of Switch: '<S47>/Switch8' */

    /* Switch: '<S47>/Switch1' incorporates:
     *  Constant: '<S47>/Constant3'
     *  Constant: '<S47>/Constant4'
     */
    if (rtb_DTC_RLALampCtlUnitPowerOC_m) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S47>/Switch1' */

    /* FunctionCaller: '<S47>/DTC_AMPPowerOL_SetEventStatus' */
    Rte_Call_DTC_AMPPowerOL_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S47>/Switch' incorporates:
     *  Constant: '<S47>/Constant1'
     *  Constant: '<S47>/Constant2'
     *  DataTypeConversion: '<S47>/DataTypeConversion'
     *  DataTypeConversion: '<S54>/Extract Desired Bits'
     */
    if (((uint8)(KL15PwrSply_D_PwrSplyDiag08_Get >> 1) & 1) << 1 != 0) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S47>/Switch' */

    /* FunctionCaller: '<S47>/DTC_AMPPowerSCG_SetEventStatus' */
    Rte_Call_DTC_AMPPowerSCG_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S47>/Switch4' incorporates:
     *  Constant: '<S47>/Constant10'
     *  Constant: '<S47>/Constant9'
     *  Sum: '<S47>/Add2'
     *  UnitDelay: '<S47>/UnitDelay2'
     */
    if (rtb_DTC_RearMotorPowerOL_GetE_l) {
      rtb_Switch4_mq = Mfx_Add_u16u16_u16(KL15PwrSply_DD_DW.UnitDelay2_DSTATE_n, 10U);
    } else {
      rtb_Switch4_mq = 0U;
    }

    /* End of Switch: '<S47>/Switch4' */

    /* Switch: '<S47>/Switch3' incorporates:
     *  Constant: '<S47>/Constant7'
     *  Constant: '<S47>/Constant8'
     *  RelationalOperator: '<S47>/RelationalOperator2'
     */
    if (rtb_Switch4_mq > tmpIRead[7]) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_FAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PASSED;
    }

    /* End of Switch: '<S47>/Switch3' */

    /* FunctionCaller: '<S47>/DTC_AMPPowerOC_SetEventStatus' */
    Rte_Call_DTC_AMPPowerOC_SetEventStatus(rtb_Switch4_k3);

    /* Update for UnitDelay: '<S47>/UnitDelay2' */
    KL15PwrSply_DD_DW.UnitDelay2_DSTATE_n = rtb_Switch4_mq;

    /* End of Outputs for SubSystem: '<S3>/AMPOnDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/AMPOnDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S46>/Action Port'
     */
    /* FunctionCaller: '<S46>/DTC_AMPPowerOC_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S46>/Constant'
     */
    Rte_Call_DTC_AMPPowerOC_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S46>/DTC_AMPPowerOL_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S46>/Constant1'
     */
    Rte_Call_DTC_AMPPowerOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S46>/DTC_AMPPowerSCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S46>/Constant2'
     */
    Rte_Call_DTC_AMPPowerSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S3>/AMPOnDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S3>/Switch Case' */

  /* FunctionCaller: '<S3>/IoHwAb_IoSigDio_Do_Set' */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_KL15PwrSply08, KL15PwrSply_DD_PwrSply_stCtrl08);

  /* FunctionCaller: '<S51>/DTC_AMPPowerSCB_GetEventFailed' */
  Rte_Call_DTC_AMPPowerSCB_GetEventFailed(&rtb_DataTypeConversion2_bh);

  /* FunctionCaller: '<S51>/DTC_AMPPowerSCB_GetEventTested' */
  Rte_Call_DTC_AMPPowerSCB_GetEventTested(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S51>/DTC_AMPPowerOL_GetEventFailed' */
  Rte_Call_DTC_AMPPowerOL_GetEventFailed(&rtb_DTC_AMPPowerOL_GetEventFa_g);

  /* FunctionCaller: '<S51>/DTC_AMPPowerOL_GetEventTested' */
  Rte_Call_DTC_AMPPowerOL_GetEventTested(&rtb_DTC_AMPPowerOL_GetEventTe_k);

  /* FunctionCaller: '<S51>/DTC_AMPPowerSCG_GetEventFailed' */
  Rte_Call_DTC_AMPPowerSCG_GetEventFailed(&rtb_DTC_AMPPowerSCG_GetEventF_k);

  /* FunctionCaller: '<S51>/DTC_AMPPowerSCG_GetEventTested' */
  Rte_Call_DTC_AMPPowerSCG_GetEventTested(&rtb_DTC_AMPPowerSCG_GetEventT_p);

  /* FunctionCaller: '<S51>/DTC_AMPPowerOC_GetEventFailed' */
  Rte_Call_DTC_AMPPowerOC_GetEventFailed(&rtb_DTC_AMPPowerOC_GetEventFa_g);

  /* FunctionCaller: '<S51>/DTC_AMPPowerOC_GetEventTested' */
  Rte_Call_DTC_AMPPowerOC_GetEventTested(&rtb_DTC_AMPPowerOC_GetEventTe_m);

  /* Switch: '<S51>/Switch4' incorporates:
   *  Constant: '<S51>/Constant5'
   *  Constant: '<S51>/Constant59'
   *  Constant: '<S51>/Constant8'
   *  Logic: '<S51>/Logical Operator1'
   *  Logic: '<S51>/Logical Operator4'
   *  Logic: '<S51>/Logical Operator6'
   *  Logic: '<S51>/Logical Operator7'
   *  RelationalOperator: '<S51>/Relational Operator'
   *  RelationalOperator: '<S51>/Relational Operator1'
   *  Switch: '<S51>/Switch1'
   *  Switch: '<S51>/Switch5'
   *  Switch: '<S51>/Switch6'
   */
  if (rtb_DataTypeConversion2_bh && rtb_DataTypeConversion2_k && (KL15PwrSply_DD_PwrSply_stCtrl08 == 0)) {
    KL15PwrSply_DD_PwrSplyRealErr08 = 2U;
  } else if (rtb_DTC_AMPPowerOL_GetEventFa_g && rtb_DTC_AMPPowerOL_GetEventTe_k && (KL15PwrSply_DD_PwrSply_stCtrl08 == 1)) {
    /* Switch: '<S51>/Switch5' incorporates:
     *  Constant: '<S51>/Constant6'
     */
    KL15PwrSply_DD_PwrSplyRealErr08 = 3U;
  } else if (rtb_DTC_AMPPowerSCG_GetEventF_k && rtb_DTC_AMPPowerSCG_GetEventT_p) {
    /* Switch: '<S51>/Switch6' incorporates:
     *  Constant: '<S51>/Constant7'
     *  Switch: '<S51>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr08 = 1U;
  } else if (rtb_DTC_AMPPowerOC_GetEventFa_g && rtb_DTC_AMPPowerOC_GetEventTe_m) {
    /* Switch: '<S51>/Switch1' incorporates:
     *  Constant: '<S51>/Constant1'
     *  Switch: '<S51>/Switch5'
     *  Switch: '<S51>/Switch6'
     */
    KL15PwrSply_DD_PwrSplyRealErr08 = 4U;
  } else {
    /* Switch: '<S51>/Switch6' incorporates:
     *  Constant: '<S51>/Constant3'
     *  Switch: '<S51>/Switch1'
     *  Switch: '<S51>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr08 = 0U;
  }

  /* End of Switch: '<S51>/Switch4' */

  /* Outputs for Enabled SubSystem: '<S3>/RealErrHold' incorporates:
   *  EnablePort: '<S48>/Enable'
   */
  /* Logic: '<S3>/Logical Operator7' incorporates:
   *  Constant: '<S3>/Constant33'
   *  Constant: '<S3>/Constant34'
   *  Inport: '<S48>/stRealErr'
   *  Logic: '<S3>/Logical Operator5'
   *  Logic: '<S3>/Logical Operator6'
   *  RelationalOperator: '<S3>/Relational Operator4'
   *  RelationalOperator: '<S3>/Relational Operator5'
   *  RelationalOperator: '<S3>/Relational Operator6'
   *  UnitDelay: '<S3>/Unit Delay2'
   */
  if (((0 == KL15PwrSply_DD_PwrSplyRealErr08) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_f != KL15PwrSply_DD_PwrSplyRealErr08) && (0 != KL15PwrSply_DD_PwrSplyRealErr08))) {
    KL15PwrSply_DD_B.stRealErr_i0 = KL15PwrSply_DD_PwrSplyRealErr08;
  }

  /* End of Logic: '<S3>/Logical Operator7' */
  /* End of Outputs for SubSystem: '<S3>/RealErrHold' */

  /* SignalConversion: '<S1>/SignalConversion26' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[7] = KL15PwrSply_DD_B.stRealErr_i0;

  /* UnitDelay: '<S4>/Unit Delay4' */
  rtb_UnitDelay4_a = KL15PwrSply_DD_PwrSply_stCtrl10;

  /* S-Function (Efx_Debounce_sf): '<S60>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S4>/Constant1'
   *  Constant: '<S4>/Constant2'
   *  Constant: '<S60>/Reset'
   *  Constant: '<S60>/THighLow'
   *  Constant: '<S60>/X_Init'
   *  S-Function (Upcast_sf): '<S60>/Upcast'
   *  S-Function (Upcast_sf): '<S60>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
    rtb_Efx_Debounce_sf_d = Efx_Debounce_u8_u8(rtb_UnitDelay4_a, &InverterOnDiagDly_I, &paramdebounce_loc, 10000 );
  }

  /* UnitDelay: '<S4>/Unit Delay' */
  rtb_UnitDelay_g = KL15PwrSply_DD_DW.UnitDelay_DSTATE_g;

  /* RelationalOperator: '<S4>/Relational Operator1' incorporates:
   *  Constant: '<S4>/Constant4'
   */
  rtb_DataTypeConversion2_bh = (tmpIRead_2[9] == 1);

  /* RelationalOperator: '<S4>/Relational Operator2' incorporates:
   *  Constant: '<S4>/Constant5'
   */
  rtb_DataTypeConversion2_k = (tmpIRead_2[9] == 2);

  /* Logic: '<S4>/Logical Operator10' incorporates:
   *  Constant: '<S4>/Constant3'
   *  Logic: '<S4>/Logical Operator3'
   *  Logic: '<S4>/Logical Operator4'
   *  RelationalOperator: '<S4>/Relational Operator'
   */
  rtb_LogicalOperator10_c = ((rtb_UnitDelay_g != 0) || ((!rtb_DataTypeConversion2_bh) && (!rtb_DataTypeConversion2_k)));

  /* S-Function (Efx_Debounce_sf): '<S61>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S4>/Constant10'
   *  Constant: '<S4>/Constant9'
   *  Constant: '<S61>/Reset'
   *  Constant: '<S61>/THighLow'
   *  Constant: '<S61>/X_Init'
   *  S-Function (Upcast_sf): '<S61>/Upcast'
   *  S-Function (Upcast_sf): '<S61>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
    rtb_DataTypeConversion2_bh = Efx_Debounce_u8_u8(rtb_LogicalOperator10_c, &InverterOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S4>/DTC_InverterPowerSCG_GetEventFailed' */
  Rte_Call_DTC_InverterPowerSCG_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S4>/DTC_InverterPowerSCG_GetEventTested' */
  Rte_Call_DTC_InverterPowerSCG_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Logic: '<S4>/Logical Operator14' */
  rtb_DTC_AMPPowerOL_GetEventFa_g = (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd);

  /* FunctionCaller: '<S4>/DTC_InverterPowerOC_GetEventFailed' */
  Rte_Call_DTC_InverterPowerOC_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S4>/DTC_InverterPowerOC_GetEventTested' */
  Rte_Call_DTC_InverterPowerOC_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/KL15PwrSply_bInverterPowerTrigUds_Val'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   *  Logic: '<S4>/Logical Operator13'
   *  Logic: '<S4>/Logical Operator15'
   *  Logic: '<S4>/Logical Operator8'
   *  Logic: '<S4>/Logical Operator9'
   *  MultiPortSwitch: '<S4>/MultiportSwitch11'
   *  Switch: '<S4>/Switch1'
   *  Switch: '<S4>/Switch41'
   *  UnitDelay: '<S4>/Unit Delay3'
   */
  if ((rtb_DTC_AMPPowerOL_GetEventFa_g || (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd)) && rtb_DataTypeConversion2_bh) {
    KL15PwrSply_DD_PwrSply_stCtrl10 = 0U;
  } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bInverterPowerTrigUds_Val()) {
    /* Switch: '<S4>/Switch1' incorporates:
     *  Inport: '<Root>/KL15PwrSply_u8stInverterPowerUds_Val'
     */
    KL15PwrSply_DD_PwrSply_stCtrl10 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stInverterPowerUds_Val();
  } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S4>/MultiportSwitch11' incorporates:
     *  Switch: '<S4>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl10 = tmpIRead_1[9];
  } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_l2 && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
    /* Switch: '<S4>/Switch41' incorporates:
     *  Constant: '<S4>/Constant27'
     *  MultiPortSwitch: '<S4>/MultiportSwitch11'
     *  Switch: '<S4>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl10 = 1U;
  } else {
    /* MultiPortSwitch: '<S4>/MultiportSwitch11' incorporates:
     *  Switch: '<S4>/Switch1'
     *  Switch: '<S4>/Switch41'
     */
    KL15PwrSply_DD_PwrSply_stCtrl10 = tmpIRead_1[9];
  }

  /* End of Switch: '<S4>/Switch' */

  /* Logic: '<S4>/Logical Operator1' incorporates:
   *  Logic: '<S4>/Logical Operator2'
   */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (KL15PwrSply_DD_PwrSply_stCtrl10 == 0));

  /* FunctionCaller: '<S4>/IoHwAb_IoDiagDo_Do_Get' */
  Rte_Call_IoHwAb_IoDiagDo_Do_Get(O_S_KL15PwrSply10, &KL15PwrSply_D_PwrSplyDiag10_Get);

  /* SwitchCase: '<S4>/Switch Case1' incorporates:
   *  DataTypeConversion: '<S4>/DataTypeConversion1'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S4>/InverterOffDiagErr_Set' incorporates:
     *  ActionPort: '<S56>/Action Port'
     */
    /* Switch: '<S56>/Switch1' incorporates:
     *  Constant: '<S56>/Constant5'
     *  Constant: '<S56>/Constant6'
     *  DataTypeConversion: '<S63>/Extract Desired Bits'
     */
    if (((uint8)KL15PwrSply_D_PwrSplyDiag10_Get & 1U) != 0U) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S56>/Switch1' */

    /* FunctionCaller: '<S56>/DTC_InverterPowerSCB_SetEventStatus' */
    Rte_Call_DTC_InverterPowerSCB_SetEventStatus(rtb_Switch4_k3);

    /* End of Outputs for SubSystem: '<S4>/InverterOffDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/InverterOffDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */
    /* FunctionCaller: '<S55>/DTC_InverterPowerSCB_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S55>/Constant'
     */
    Rte_Call_DTC_InverterPowerSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S4>/InverterOffDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S4>/Switch Case1' */

  /* FunctionCaller: '<S4>/IoHwAb_IoSigAdc_Adc_Get' */
  Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol10, &KL15PwrSply_DD_PwrVol10_Get);

  /* Product: '<S4>/Divide1' */
  KL15PwrSply_DD_PwrCurr10_Calc = (float32)KL15PwrSply_DD_PwrVol10_Get / 1780.0F * 27950.0F;

  /* RelationalOperator: '<S4>/Relational Operator7' */
  rtb_DataTypeConversion2_bh = (KL15PwrSply_DD_PwrCurr10_Calc > tmpIRead_0[9]);

  /* Logic: '<S4>/Logical Operator11' */
  rtb_DTC_AMPPowerOL_GetEventFa_g = (rtb_DataTypeConversion2_bh && (rtb_Efx_Debounce_sf_d != 0));

  /* Logic: '<S4>/Logical Operator' */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_d != 0));

  /* SwitchCase: '<S4>/Switch Case' incorporates:
   *  DataTypeConversion: '<S4>/DataTypeConversion'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S4>/InverterOnDiagErr_Set' incorporates:
     *  ActionPort: '<S58>/Action Port'
     */
    /* Switch: '<S58>/Switch8' incorporates:
     *  Constant: '<S58>/Constant'
     *  Constant: '<S58>/Constant13'
     *  DataTypeConversion: '<S58>/DataTypeConversion1'
     *  DataTypeConversion: '<S64>/Extract Desired Bits'
     */
    if (OLFaultBypass) {
      rtb_DTC_RLALampCtlUnitPowerOC_m = false;
    } else {
      rtb_DTC_RLALampCtlUnitPowerOC_m = (((uint8)(KL15PwrSply_D_PwrSplyDiag10_Get >> 3) & 1U) != 0U);
    }

    /* End of Switch: '<S58>/Switch8' */

    /* Switch: '<S58>/Switch1' incorporates:
     *  Constant: '<S58>/Constant3'
     *  Constant: '<S58>/Constant4'
     */
    if (rtb_DTC_RLALampCtlUnitPowerOC_m) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S58>/Switch1' */

    /* FunctionCaller: '<S58>/DTC_InverterPowerOL_SetEventStatus' */
    Rte_Call_DTC_InverterPowerOL_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S58>/Switch' incorporates:
     *  Constant: '<S58>/Constant1'
     *  Constant: '<S58>/Constant2'
     *  DataTypeConversion: '<S58>/DataTypeConversion'
     *  DataTypeConversion: '<S65>/Extract Desired Bits'
     */
    if (((uint8)(KL15PwrSply_D_PwrSplyDiag10_Get >> 1) & 1) << 1 != 0) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S58>/Switch' */

    /* FunctionCaller: '<S58>/DTC_InverterPowerSCG_SetEventStatus' */
    Rte_Call_DTC_InverterPowerSCG_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S58>/Switch4' incorporates:
     *  Constant: '<S58>/Constant10'
     *  Constant: '<S58>/Constant9'
     *  Sum: '<S58>/Add2'
     *  UnitDelay: '<S58>/UnitDelay2'
     */
    if (rtb_DTC_AMPPowerOL_GetEventFa_g) {
      rtb_Switch4_mq = Mfx_Add_u16u16_u16(KL15PwrSply_DD_DW.UnitDelay2_DSTATE_ap, 10U);
    } else {
      rtb_Switch4_mq = 0U;
    }

    /* End of Switch: '<S58>/Switch4' */

    /* Switch: '<S58>/Switch3' incorporates:
     *  Constant: '<S58>/Constant7'
     *  Constant: '<S58>/Constant8'
     *  RelationalOperator: '<S58>/RelationalOperator2'
     */
    if (rtb_Switch4_mq > tmpIRead[9]) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_FAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PASSED;
    }

    /* End of Switch: '<S58>/Switch3' */

    /* FunctionCaller: '<S58>/DTC_InverterPowerOC_SetEventStatus' */
    Rte_Call_DTC_InverterPowerOC_SetEventStatus(rtb_Switch4_k3);

    /* Update for UnitDelay: '<S58>/UnitDelay2' */
    KL15PwrSply_DD_DW.UnitDelay2_DSTATE_ap = rtb_Switch4_mq;

    /* End of Outputs for SubSystem: '<S4>/InverterOnDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/InverterOnDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S57>/Action Port'
     */
    /* FunctionCaller: '<S57>/DTC_InverterPowerOC_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S57>/Constant'
     */
    Rte_Call_DTC_InverterPowerOC_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S57>/DTC_InverterPowerOL_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S57>/Constant1'
     */
    Rte_Call_DTC_InverterPowerOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S57>/DTC_InverterPowerSCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S57>/Constant2'
     */
    Rte_Call_DTC_InverterPowerSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S4>/InverterOnDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S4>/Switch Case' */

  /* FunctionCaller: '<S4>/IoHwAb_IoSigDio_Do_Set' */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_KL15PwrSply10, KL15PwrSply_DD_PwrSply_stCtrl10);

  /* FunctionCaller: '<S62>/DTC_InverterPowerSCB_GetEventFailed' */
  Rte_Call_DTC_InverterPowerSCB_GetEventFailed(&rtb_DataTypeConversion2_bh);

  /* FunctionCaller: '<S62>/DTC_InverterPowerSCB_GetEventTested' */
  Rte_Call_DTC_InverterPowerSCB_GetEventTested(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S62>/DTC_InverterPowerOL_GetEventFailed' */
  Rte_Call_DTC_InverterPowerOL_GetEventFailed(&rtb_DTC_InverterPowerOL_GetE_mi);

  /* FunctionCaller: '<S62>/DTC_InverterPowerOL_GetEventTested' */
  Rte_Call_DTC_InverterPowerOL_GetEventTested(&rtb_DTC_InverterPowerOL_GetEv_p);

  /* FunctionCaller: '<S62>/DTC_InverterPowerSCG_GetEventFailed' */
  Rte_Call_DTC_InverterPowerSCG_GetEventFailed(&rtb_DTC_InverterPowerSCG_GetE_h);

  /* FunctionCaller: '<S62>/DTC_InverterPowerSCG_GetEventTested' */
  Rte_Call_DTC_InverterPowerSCG_GetEventTested(&rtb_DTC_InverterPowerSCG_GetE_m);

  /* FunctionCaller: '<S62>/DTC_InverterPowerOC_GetEventFailed' */
  Rte_Call_DTC_InverterPowerOC_GetEventFailed(&rtb_DTC_InverterPowerOC_GetEv_l);

  /* FunctionCaller: '<S62>/DTC_InverterPowerOC_GetEventTested' */
  Rte_Call_DTC_InverterPowerOC_GetEventTested(&rtb_DTC_InverterPowerOC_GetE_av);

  /* Switch: '<S62>/Switch4' incorporates:
   *  Constant: '<S62>/Constant5'
   *  Constant: '<S62>/Constant59'
   *  Constant: '<S62>/Constant8'
   *  Logic: '<S62>/Logical Operator1'
   *  Logic: '<S62>/Logical Operator4'
   *  Logic: '<S62>/Logical Operator6'
   *  Logic: '<S62>/Logical Operator7'
   *  RelationalOperator: '<S62>/Relational Operator'
   *  RelationalOperator: '<S62>/Relational Operator1'
   *  Switch: '<S62>/Switch1'
   *  Switch: '<S62>/Switch5'
   *  Switch: '<S62>/Switch6'
   */
  if (rtb_DataTypeConversion2_bh && rtb_DataTypeConversion2_k && (KL15PwrSply_DD_PwrSply_stCtrl10 == 0)) {
    KL15PwrSply_DD_PwrSplyRealErr10 = 2U;
  } else if (rtb_DTC_InverterPowerOL_GetE_mi && rtb_DTC_InverterPowerOL_GetEv_p && (KL15PwrSply_DD_PwrSply_stCtrl10 == 1)) {
    /* Switch: '<S62>/Switch5' incorporates:
     *  Constant: '<S62>/Constant6'
     */
    KL15PwrSply_DD_PwrSplyRealErr10 = 3U;
  } else if (rtb_DTC_InverterPowerSCG_GetE_h && rtb_DTC_InverterPowerSCG_GetE_m) {
    /* Switch: '<S62>/Switch6' incorporates:
     *  Constant: '<S62>/Constant7'
     *  Switch: '<S62>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr10 = 1U;
  } else if (rtb_DTC_InverterPowerOC_GetEv_l && rtb_DTC_InverterPowerOC_GetE_av) {
    /* Switch: '<S62>/Switch1' incorporates:
     *  Constant: '<S62>/Constant1'
     *  Switch: '<S62>/Switch5'
     *  Switch: '<S62>/Switch6'
     */
    KL15PwrSply_DD_PwrSplyRealErr10 = 4U;
  } else {
    /* Switch: '<S62>/Switch6' incorporates:
     *  Constant: '<S62>/Constant3'
     *  Switch: '<S62>/Switch1'
     *  Switch: '<S62>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr10 = 0U;
  }

  /* End of Switch: '<S62>/Switch4' */

  /* Outputs for Enabled SubSystem: '<S4>/RealErrHold' incorporates:
   *  EnablePort: '<S59>/Enable'
   */
  /* Logic: '<S4>/Logical Operator7' incorporates:
   *  Constant: '<S4>/Constant33'
   *  Constant: '<S4>/Constant34'
   *  Inport: '<S59>/stRealErr'
   *  Logic: '<S4>/Logical Operator5'
   *  Logic: '<S4>/Logical Operator6'
   *  RelationalOperator: '<S4>/Relational Operator4'
   *  RelationalOperator: '<S4>/Relational Operator5'
   *  RelationalOperator: '<S4>/Relational Operator6'
   *  UnitDelay: '<S4>/Unit Delay2'
   */
  if (((0 == KL15PwrSply_DD_PwrSplyRealErr10) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_d != KL15PwrSply_DD_PwrSplyRealErr10) && (0 != KL15PwrSply_DD_PwrSplyRealErr10))) {
    KL15PwrSply_DD_B.stRealErr_bx = KL15PwrSply_DD_PwrSplyRealErr10;
  }

  /* End of Logic: '<S4>/Logical Operator7' */
  /* End of Outputs for SubSystem: '<S4>/RealErrHold' */

  /* SignalConversion: '<S1>/SignalConversion28' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[9] = KL15PwrSply_DD_B.stRealErr_bx;

  /* UnitDelay: '<S5>/Unit Delay4' */
  rtb_UnitDelay4_f = KL15PwrSply_DD_DW.UnitDelay4_DSTATE_f;

  /* S-Function (Efx_Debounce_sf): '<S69>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant2'
   *  Constant: '<S69>/Reset'
   *  Constant: '<S69>/THighLow'
   *  Constant: '<S69>/X_Init'
   *  S-Function (Upcast_sf): '<S69>/Upcast'
   *  S-Function (Upcast_sf): '<S69>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
    rtb_Efx_Debounce_sf_d = Efx_Debounce_u8_u8(rtb_UnitDelay4_f, &KL15T1OnDiagDly_I, &paramdebounce_loc, 10000 );
  }

  /* UnitDelay: '<S5>/Unit Delay' */
  rtb_UnitDelay_g = KL15PwrSply_DD_DW.UnitDelay_DSTATE_b;

  /* RelationalOperator: '<S5>/Relational Operator1' incorporates:
   *  Constant: '<S5>/Constant4'
   */
  rtb_DataTypeConversion2_bh = (tmpIRead_2[1] == 1);

  /* Logic: '<S5>/Logical Operator10' incorporates:
   *  Constant: '<S5>/Constant3'
   *  Constant: '<S5>/Constant5'
   *  Logic: '<S5>/Logical Operator3'
   *  Logic: '<S5>/Logical Operator4'
   *  RelationalOperator: '<S5>/Relational Operator'
   *  RelationalOperator: '<S5>/Relational Operator2'
   */
  rtb_LogicalOperator10_p = ((rtb_UnitDelay_g != 0) || ((!rtb_DataTypeConversion2_bh) && (tmpIRead_2[1] != 2)));

  /* S-Function (Efx_Debounce_sf): '<S70>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S5>/Constant10'
   *  Constant: '<S5>/Constant9'
   *  Constant: '<S70>/Reset'
   *  Constant: '<S70>/THighLow'
   *  Constant: '<S70>/X_Init'
   *  S-Function (Upcast_sf): '<S70>/Upcast'
   *  S-Function (Upcast_sf): '<S70>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
    rtb_DataTypeConversion2_bh = Efx_Debounce_u8_u8(rtb_LogicalOperator10_p, &KL15T1OnDiagRetryDly_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S5>/IoHwAb_IoDiagPwm_Pwm_Get' */
  Rte_Call_IoHwAb_IoDiagPwm_Pwm_Get(O_P_KL15PwrSply02, &KL15PwrSply_D_PwrSplyDiag02_Get);

  /* FunctionCaller: '<S5>/IoHwAb_IoSigAdc_Adc_Get' */
  Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol02, &KL15PwrSply_DD_PwrVol02_Get);

  /* Product: '<S5>/Divide1' */
  KL15PwrSply_DD_PwrCurr02_Calc = (float32)KL15PwrSply_DD_PwrVol02_Get / 1780.0F * 670.0F;

  /* SwitchCase: '<S5>/Switch Case' incorporates:
   *  Logic: '<S5>/Logical Operator'
   *  Logic: '<S5>/Logical Operator11'
   *  RelationalOperator: '<S5>/Relational Operator7'
   */
  if (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_d != 0)) {
    /* Outputs for IfAction SubSystem: '<S5>/KL15T1OnDiagErr_Set' incorporates:
     *  ActionPort: '<S67>/Action Port'
     */
    KL15PwrSply_KL15T1OnDiagErr_Set(KL15PwrSply_D_PwrSplyDiag02_Get, (KL15PwrSply_DD_PwrCurr02_Calc > tmpIRead_0[1]) && (rtb_Efx_Debounce_sf_d != 0), tmpIRead[1], &KL15PwrSply_DD_B.RelationalOperator_c, &KL15PwrSply_DD_B.RelationalOperator1_j, &KL15PwrSply_DD_B.RelationalOperator2_hk, &KL15PwrSply_DD_DW.KL15T1OnDiagErr_Set);

    /* End of Outputs for SubSystem: '<S5>/KL15T1OnDiagErr_Set' */
  }

  /* End of SwitchCase: '<S5>/Switch Case' */

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S5>/Constant'
   *  Inport: '<Root>/KL15PwrSply_bKL15T1PowerTrigUds_Val'
   *  Logic: '<S5>/Logical Operator14'
   *  Logic: '<S5>/Logical Operator8'
   *  Switch: '<S5>/Switch1'
   */
  if ((KL15PwrSply_DD_B.RelationalOperator_c || KL15PwrSply_DD_B.RelationalOperator2_hk) && rtb_DataTypeConversion2_bh) {
    rtb_Switch_j = 0U;
  } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bKL15T1PowerTrigUds_Val()) {
    /* Switch: '<S5>/Switch1' incorporates:
     *  Inport: '<Root>/KL15PwrSply_u8stKL15T1PowerUds_Val'
     */
    rtb_Switch_j = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stKL15T1PowerUds_Val();
  } else {
    rtb_Switch_j = tmpIRead_1[1];
  }

  /* End of Switch: '<S5>/Switch' */

  /* Logic: '<S5>/Logical Operator1' incorporates:
   *  Logic: '<S5>/Logical Operator2'
   */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (rtb_Switch_j == 0));

  /* DataTypeConversion: '<S5>/DataTypeConversion1' */
  rtb_DataTypeConversion_jj = rtb_DataTypeConversion2_bh;

  /* DataTypeConversion: '<S5>/DataTypeConversion3' */
  rtb_DataTypeConversion2_bh = (rtb_Switch_j != 0);

  /* Switch: '<S5>/Switch66' incorporates:
   *  Constant: '<S5>/Constant14'
   *  Constant: '<S5>/Constant140'
   */
  if (rtb_DataTypeConversion2_bh) {
    KL15PwrSply_DD_PwrSply_stCtrl02 = 32768U;
  } else {
    KL15PwrSply_DD_PwrSply_stCtrl02 = 0U;
  }

  /* End of Switch: '<S5>/Switch66' */

  /* FunctionCaller: '<S5>/IoHwAb_IoSigPwm_Pwm_SetDuty' */
  Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_KL15PwrSply02, KL15PwrSply_DD_PwrSply_stCtrl02);

  /* SwitchCase: '<S5>/Switch Case1' */
  if (rtb_DataTypeConversion_jj == 1) {
    /* Outputs for IfAction SubSystem: '<S5>/KL15T1OffDiagErr_Set' incorporates:
     *  ActionPort: '<S66>/Action Port'
     */
    KL15PwrSpl_KL15T1OffDiagErr_Set(KL15PwrSply_D_PwrSplyDiag02_Get, &KL15PwrSply_DD_B.RelationalOperator1_h, &KL15PwrSply_DD_DW.KL15T1OffDiagErr_Set);

    /* End of Outputs for SubSystem: '<S5>/KL15T1OffDiagErr_Set' */
  }

  /* End of SwitchCase: '<S5>/Switch Case1' */

  /* Switch: '<S71>/Switch4' incorporates:
   *  Constant: '<S71>/Constant5'
   *  Constant: '<S71>/Constant59'
   *  Constant: '<S71>/Constant8'
   *  Logic: '<S71>/Logical Operator4'
   *  Logic: '<S71>/Logical Operator7'
   *  RelationalOperator: '<S71>/Relational Operator'
   *  RelationalOperator: '<S71>/Relational Operator1'
   *  Switch: '<S71>/Switch1'
   *  Switch: '<S71>/Switch5'
   *  Switch: '<S71>/Switch6'
   */
  if (KL15PwrSply_DD_B.RelationalOperator1_h && (rtb_Switch_j == 0)) {
    KL15PwrSply_DD_PwrSplyRealErr02 = 2U;
  } else if (KL15PwrSply_DD_B.RelationalOperator1_j && (rtb_Switch_j == 1)) {
    /* Switch: '<S71>/Switch5' incorporates:
     *  Constant: '<S71>/Constant6'
     */
    KL15PwrSply_DD_PwrSplyRealErr02 = 3U;
  } else if (KL15PwrSply_DD_B.RelationalOperator_c) {
    /* Switch: '<S71>/Switch6' incorporates:
     *  Constant: '<S71>/Constant7'
     *  Switch: '<S71>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr02 = 1U;
  } else if (KL15PwrSply_DD_B.RelationalOperator2_hk) {
    /* Switch: '<S71>/Switch1' incorporates:
     *  Constant: '<S71>/Constant1'
     *  Switch: '<S71>/Switch5'
     *  Switch: '<S71>/Switch6'
     */
    KL15PwrSply_DD_PwrSplyRealErr02 = 4U;
  } else {
    /* Switch: '<S71>/Switch6' incorporates:
     *  Constant: '<S71>/Constant3'
     *  Switch: '<S71>/Switch1'
     *  Switch: '<S71>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr02 = 0U;
  }

  /* End of Switch: '<S71>/Switch4' */

  /* Outputs for Enabled SubSystem: '<S5>/RealErrHold' incorporates:
   *  EnablePort: '<S68>/Enable'
   */
  /* Logic: '<S5>/Logical Operator7' incorporates:
   *  Constant: '<S5>/Constant33'
   *  Constant: '<S5>/Constant34'
   *  Inport: '<S68>/stRealErr'
   *  Logic: '<S5>/Logical Operator5'
   *  Logic: '<S5>/Logical Operator6'
   *  RelationalOperator: '<S5>/Relational Operator4'
   *  RelationalOperator: '<S5>/Relational Operator5'
   *  RelationalOperator: '<S5>/Relational Operator6'
   *  UnitDelay: '<S5>/Unit Delay2'
   */
  if (((0 == KL15PwrSply_DD_PwrSplyRealErr02) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_hl != KL15PwrSply_DD_PwrSplyRealErr02) && (0 != KL15PwrSply_DD_PwrSplyRealErr02))) {
    KL15PwrSply_DD_B.stRealErr_h = KL15PwrSply_DD_PwrSplyRealErr02;
  }

  /* End of Logic: '<S5>/Logical Operator7' */
  /* End of Outputs for SubSystem: '<S5>/RealErrHold' */

  /* SignalConversion: '<S1>/SignalConversion13' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[1] = KL15PwrSply_DD_B.stRealErr_h;

  /* UnitDelay: '<S6>/Unit Delay4' */
  rtb_UnitDelay4_j = KL15PwrSply_DD_DW.UnitDelay4_DSTATE_b;

  /* S-Function (Efx_Debounce_sf): '<S78>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant2'
   *  Constant: '<S78>/Reset'
   *  Constant: '<S78>/THighLow'
   *  Constant: '<S78>/X_Init'
   *  S-Function (Upcast_sf): '<S78>/Upcast'
   *  S-Function (Upcast_sf): '<S78>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
    rtb_Efx_Debounce_sf_d = Efx_Debounce_u8_u8(rtb_UnitDelay4_j, &KL15T2OnDiagDly_I, &paramdebounce_loc, 10000 );
  }

  /* UnitDelay: '<S6>/Unit Delay' */
  rtb_UnitDelay_g = KL15PwrSply_DD_DW.UnitDelay_DSTATE_p;

  /* RelationalOperator: '<S6>/Relational Operator1' incorporates:
   *  Constant: '<S6>/Constant4'
   */
  rtb_DataTypeConversion2_bh = (tmpIRead_2[0] == 1);

  /* Logic: '<S6>/Logical Operator10' incorporates:
   *  Constant: '<S6>/Constant3'
   *  Constant: '<S6>/Constant5'
   *  Logic: '<S6>/Logical Operator3'
   *  Logic: '<S6>/Logical Operator4'
   *  RelationalOperator: '<S6>/Relational Operator'
   *  RelationalOperator: '<S6>/Relational Operator2'
   */
  rtb_LogicalOperator10_o = ((rtb_UnitDelay_g != 0) || ((!rtb_DataTypeConversion2_bh) && (tmpIRead_2[0] != 2)));

  /* S-Function (Efx_Debounce_sf): '<S79>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S6>/Constant10'
   *  Constant: '<S6>/Constant9'
   *  Constant: '<S79>/Reset'
   *  Constant: '<S79>/THighLow'
   *  Constant: '<S79>/X_Init'
   *  S-Function (Upcast_sf): '<S79>/Upcast'
   *  S-Function (Upcast_sf): '<S79>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
    rtb_DataTypeConversion2_bh = Efx_Debounce_u8_u8(rtb_LogicalOperator10_o, &KL15T2OnDiagRetryDly_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S6>/IoHwAb_IoDiagPwm_Pwm_Get' */
  Rte_Call_IoHwAb_IoDiagPwm_Pwm_Get(O_P_KL15PwrSply01, &KL15PwrSply_D_PwrSplyDiag01_Get);

  /* FunctionCaller: '<S6>/IoHwAb_IoSigAdc_Adc_Get' */
  Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol01, &KL15PwrSply_DD_PwrVol01_Get);

  /* Product: '<S6>/Divide1' */
  KL15PwrSply_DD_PwrCurr01_Calc = (float32)KL15PwrSply_DD_PwrVol01_Get / 1780.0F * 670.0F;

  /* SwitchCase: '<S6>/Switch Case' incorporates:
   *  Logic: '<S6>/Logical Operator'
   *  Logic: '<S6>/Logical Operator11'
   *  RelationalOperator: '<S6>/Relational Operator7'
   */
  if (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_d != 0)) {
    /* Outputs for IfAction SubSystem: '<S6>/KL15T2OnDiagErr_Set' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    KL15PwrSply_KL15T1OnDiagErr_Set(KL15PwrSply_D_PwrSplyDiag01_Get, (KL15PwrSply_DD_PwrCurr01_Calc > tmpIRead_0[0]) && (rtb_Efx_Debounce_sf_d != 0), tmpIRead[0], &KL15PwrSply_DD_B.RelationalOperator_f, &KL15PwrSply_DD_B.RelationalOperator1_i, &KL15PwrSply_DD_B.RelationalOperator2_h, &KL15PwrSply_DD_DW.KL15T2OnDiagErr_Set);

    /* End of Outputs for SubSystem: '<S6>/KL15T2OnDiagErr_Set' */
  }

  /* End of SwitchCase: '<S6>/Switch Case' */

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S6>/Constant'
   *  Inport: '<Root>/KL15PwrSply_bKL15T2PowerTrigUds_Val'
   *  Logic: '<S6>/Logical Operator14'
   *  Logic: '<S6>/Logical Operator8'
   *  Switch: '<S6>/Switch1'
   */
  if ((KL15PwrSply_DD_B.RelationalOperator_f || KL15PwrSply_DD_B.RelationalOperator2_h) && rtb_DataTypeConversion2_bh) {
    rtb_Switch_o = 0U;
  } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bKL15T2PowerTrigUds_Val()) {
    /* Switch: '<S6>/Switch1' incorporates:
     *  Inport: '<Root>/KL15PwrSply_u8stKL15T2PowerUds_Val'
     */
    rtb_Switch_o = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stKL15T2PowerUds_Val();
  } else {
    rtb_Switch_o = tmpIRead_1[0];
  }

  /* End of Switch: '<S6>/Switch' */

  /* Logic: '<S6>/Logical Operator1' incorporates:
   *  Logic: '<S6>/Logical Operator2'
   */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (rtb_Switch_o == 0));

  /* DataTypeConversion: '<S6>/DataTypeConversion1' */
  rtb_DataTypeConversion_jj = rtb_DataTypeConversion2_bh;

  /* DataTypeConversion: '<S6>/DataTypeConversion3' */
  rtb_DataTypeConversion2_bh = (rtb_Switch_o != 0);

  /* Switch: '<S6>/Switch66' incorporates:
   *  Constant: '<S6>/Constant14'
   *  Constant: '<S6>/Constant140'
   */
  if (rtb_DataTypeConversion2_bh) {
    KL15PwrSply_DD_PwrSply_stCtrl01 = 32768U;
  } else {
    KL15PwrSply_DD_PwrSply_stCtrl01 = 0U;
  }

  /* End of Switch: '<S6>/Switch66' */

  /* FunctionCaller: '<S6>/IoHwAb_IoSigPwm_Pwm_SetDuty' */
  Rte_Call_IoHwAb_IoSigPwm_Pwm_SetDuty(O_P_KL15PwrSply01, KL15PwrSply_DD_PwrSply_stCtrl01);

  /* SwitchCase: '<S6>/Switch Case1' */
  if (rtb_DataTypeConversion_jj == 1) {
    /* Outputs for IfAction SubSystem: '<S6>/KL15T2OffDiagErr_Set' incorporates:
     *  ActionPort: '<S75>/Action Port'
     */
    KL15PwrSpl_KL15T1OffDiagErr_Set(KL15PwrSply_D_PwrSplyDiag01_Get, &KL15PwrSply_DD_B.RelationalOperator1_d, &KL15PwrSply_DD_DW.KL15T2OffDiagErr_Set);

    /* End of Outputs for SubSystem: '<S6>/KL15T2OffDiagErr_Set' */
  }

  /* End of SwitchCase: '<S6>/Switch Case1' */

  /* Switch: '<S80>/Switch4' incorporates:
   *  Constant: '<S80>/Constant5'
   *  Constant: '<S80>/Constant59'
   *  Constant: '<S80>/Constant8'
   *  Logic: '<S80>/Logical Operator4'
   *  Logic: '<S80>/Logical Operator7'
   *  RelationalOperator: '<S80>/Relational Operator'
   *  RelationalOperator: '<S80>/Relational Operator1'
   *  Switch: '<S80>/Switch1'
   *  Switch: '<S80>/Switch5'
   *  Switch: '<S80>/Switch6'
   */
  if (KL15PwrSply_DD_B.RelationalOperator1_d && (rtb_Switch_o == 0)) {
    KL15PwrSply_DD_PwrSplyRealErr01 = 2U;
  } else if (KL15PwrSply_DD_B.RelationalOperator1_i && (rtb_Switch_o == 1)) {
    /* Switch: '<S80>/Switch5' incorporates:
     *  Constant: '<S80>/Constant6'
     */
    KL15PwrSply_DD_PwrSplyRealErr01 = 3U;
  } else if (KL15PwrSply_DD_B.RelationalOperator_f) {
    /* Switch: '<S80>/Switch6' incorporates:
     *  Constant: '<S80>/Constant7'
     *  Switch: '<S80>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr01 = 1U;
  } else if (KL15PwrSply_DD_B.RelationalOperator2_h) {
    /* Switch: '<S80>/Switch1' incorporates:
     *  Constant: '<S80>/Constant1'
     *  Switch: '<S80>/Switch5'
     *  Switch: '<S80>/Switch6'
     */
    KL15PwrSply_DD_PwrSplyRealErr01 = 4U;
  } else {
    /* Switch: '<S80>/Switch6' incorporates:
     *  Constant: '<S80>/Constant3'
     *  Switch: '<S80>/Switch1'
     *  Switch: '<S80>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr01 = 0U;
  }

  /* End of Switch: '<S80>/Switch4' */

  /* Outputs for Enabled SubSystem: '<S6>/RealErrHold' incorporates:
   *  EnablePort: '<S77>/Enable'
   */
  /* Logic: '<S6>/Logical Operator7' incorporates:
   *  Constant: '<S6>/Constant33'
   *  Constant: '<S6>/Constant34'
   *  Inport: '<S77>/stRealErr'
   *  Logic: '<S6>/Logical Operator5'
   *  Logic: '<S6>/Logical Operator6'
   *  RelationalOperator: '<S6>/Relational Operator4'
   *  RelationalOperator: '<S6>/Relational Operator5'
   *  RelationalOperator: '<S6>/Relational Operator6'
   *  UnitDelay: '<S6>/Unit Delay2'
   */
  if (((0 == KL15PwrSply_DD_PwrSplyRealErr01) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_ky != KL15PwrSply_DD_PwrSplyRealErr01) && (0 != KL15PwrSply_DD_PwrSplyRealErr01))) {
    KL15PwrSply_DD_B.stRealErr_gq = KL15PwrSply_DD_PwrSplyRealErr01;
  }

  /* End of Logic: '<S6>/Logical Operator7' */
  /* End of Outputs for SubSystem: '<S6>/RealErrHold' */

  /* SignalConversion: '<S1>/SignalConversion12' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[0] = KL15PwrSply_DD_B.stRealErr_gq;

  /* UnitDelay: '<S7>/Unit Delay4' */
  rtb_UnitDelay4_l = KL15PwrSply_DD_PwrSply_stCtrl12;

  /* S-Function (Efx_Debounce_sf): '<S87>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/Constant2'
   *  Constant: '<S87>/Reset'
   *  Constant: '<S87>/THighLow'
   *  Constant: '<S87>/X_Init'
   *  S-Function (Upcast_sf): '<S87>/Upcast'
   *  S-Function (Upcast_sf): '<S87>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
    rtb_Efx_Debounce_sf_d = Efx_Debounce_u8_u8(rtb_UnitDelay4_l, &PASOnDiagDly_I, &paramdebounce_loc, 10000 );
  }

  /* UnitDelay: '<S7>/Unit Delay' */
  rtb_UnitDelay_g = KL15PwrSply_DD_DW.UnitDelay_DSTATE_j;

  /* RelationalOperator: '<S7>/Relational Operator1' incorporates:
   *  Constant: '<S7>/Constant4'
   */
  rtb_DataTypeConversion2_bh = (tmpIRead_2[11] == 1);

  /* Logic: '<S7>/Logical Operator10' incorporates:
   *  Constant: '<S7>/Constant3'
   *  Constant: '<S7>/Constant5'
   *  Logic: '<S7>/Logical Operator3'
   *  Logic: '<S7>/Logical Operator4'
   *  RelationalOperator: '<S7>/Relational Operator'
   *  RelationalOperator: '<S7>/Relational Operator2'
   */
  rtb_LogicalOperator10_ov = ((rtb_UnitDelay_g != 0) || ((!rtb_DataTypeConversion2_bh) && (tmpIRead_2[11] != 2)));

  /* S-Function (Efx_Debounce_sf): '<S88>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S7>/Constant10'
   *  Constant: '<S7>/Constant9'
   *  Constant: '<S88>/Reset'
   *  Constant: '<S88>/THighLow'
   *  Constant: '<S88>/X_Init'
   *  S-Function (Upcast_sf): '<S88>/Upcast'
   *  S-Function (Upcast_sf): '<S88>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
    rtb_DataTypeConversion2_bh = Efx_Debounce_u8_u8(rtb_LogicalOperator10_ov, &PASOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S7>/IoHwAb_IoDiagDo_Do_Get' */
  Rte_Call_IoHwAb_IoDiagDo_Do_Get(O_S_KL15PwrSply12, &KL15PwrSply_D_PwrSplyDiag12_Get);

  /* FunctionCaller: '<S7>/IoHwAb_IoSigAdc_Adc_Get' */
  Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol12, &KL15PwrSply_DD_PwrVol12_Get);

  /* Product: '<S7>/Divide1' */
  KL15PwrSply_DD_PwrCurr12_Calc = (float32)KL15PwrSply_DD_PwrVol12_Get / 1780.0F * 670.0F;

  /* SwitchCase: '<S7>/Switch Case' incorporates:
   *  Logic: '<S7>/Logical Operator'
   *  Logic: '<S7>/Logical Operator11'
   *  RelationalOperator: '<S7>/Relational Operator7'
   */
  if (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_d != 0)) {
    /* Outputs for IfAction SubSystem: '<S7>/PASOnDiagErr_Set' incorporates:
     *  ActionPort: '<S85>/Action Port'
     */
    KL15PwrSply_KL15T1OnDiagErr_Set(KL15PwrSply_D_PwrSplyDiag12_Get, (KL15PwrSply_DD_PwrCurr12_Calc > tmpIRead_0[11]) && (rtb_Efx_Debounce_sf_d != 0), tmpIRead[11], &KL15PwrSply_DD_B.RelationalOperator_b, &KL15PwrSply_DD_B.RelationalOperator1_g, &KL15PwrSply_DD_B.RelationalOperator2_j, &KL15PwrSply_DD_DW.PASOnDiagErr_Set);

    /* End of Outputs for SubSystem: '<S7>/PASOnDiagErr_Set' */
  }

  /* End of SwitchCase: '<S7>/Switch Case' */

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S7>/Constant'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   *  Logic: '<S7>/Logical Operator13'
   *  Logic: '<S7>/Logical Operator8'
   *  Logic: '<S7>/Logical Operator9'
   *  MultiPortSwitch: '<S7>/MultiportSwitch11'
   *  Switch: '<S7>/Switch41'
   *  UnitDelay: '<S7>/Unit Delay3'
   */
  if ((KL15PwrSply_DD_B.RelationalOperator_b || KL15PwrSply_DD_B.RelationalOperator2_j) && rtb_DataTypeConversion2_bh) {
    KL15PwrSply_DD_PwrSply_stCtrl12 = 0U;
  } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S7>/MultiportSwitch11' */
    KL15PwrSply_DD_PwrSply_stCtrl12 = tmpIRead_1[11];
  } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_o && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
    /* Switch: '<S7>/Switch41' incorporates:
     *  Constant: '<S7>/Constant27'
     *  MultiPortSwitch: '<S7>/MultiportSwitch11'
     */
    KL15PwrSply_DD_PwrSply_stCtrl12 = 1U;
  } else {
    /* MultiPortSwitch: '<S7>/MultiportSwitch11' incorporates:
     *  Switch: '<S7>/Switch41'
     */
    KL15PwrSply_DD_PwrSply_stCtrl12 = tmpIRead_1[11];
  }

  /* End of Switch: '<S7>/Switch' */

  /* Logic: '<S7>/Logical Operator1' incorporates:
   *  Logic: '<S7>/Logical Operator2'
   */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (KL15PwrSply_DD_PwrSply_stCtrl12 == 0));

  /* FunctionCaller: '<S7>/IoHwAb_IoSigDio_Do_Set' */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_KL15PwrSply12, KL15PwrSply_DD_PwrSply_stCtrl12);

  /* SwitchCase: '<S7>/Switch Case1' incorporates:
   *  DataTypeConversion: '<S7>/DataTypeConversion1'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S7>/PASOffDiagErr_Set' incorporates:
     *  ActionPort: '<S84>/Action Port'
     */
    KL15PwrSpl_KL15T1OffDiagErr_Set(KL15PwrSply_D_PwrSplyDiag12_Get, &KL15PwrSply_DD_B.RelationalOperator1_c, &KL15PwrSply_DD_DW.PASOffDiagErr_Set);

    /* End of Outputs for SubSystem: '<S7>/PASOffDiagErr_Set' */
  }

  /* End of SwitchCase: '<S7>/Switch Case1' */

  /* Switch: '<S89>/Switch4' incorporates:
   *  Constant: '<S89>/Constant5'
   *  Constant: '<S89>/Constant59'
   *  Constant: '<S89>/Constant8'
   *  Logic: '<S89>/Logical Operator4'
   *  Logic: '<S89>/Logical Operator7'
   *  RelationalOperator: '<S89>/Relational Operator'
   *  RelationalOperator: '<S89>/Relational Operator1'
   *  Switch: '<S89>/Switch1'
   *  Switch: '<S89>/Switch5'
   *  Switch: '<S89>/Switch6'
   */
  if (KL15PwrSply_DD_B.RelationalOperator1_c && (KL15PwrSply_DD_PwrSply_stCtrl12 == 0)) {
    KL15PwrSply_DD_PwrSplyRealErr12 = 2U;
  } else if (KL15PwrSply_DD_B.RelationalOperator1_g && (KL15PwrSply_DD_PwrSply_stCtrl12 == 1)) {
    /* Switch: '<S89>/Switch5' incorporates:
     *  Constant: '<S89>/Constant6'
     */
    KL15PwrSply_DD_PwrSplyRealErr12 = 3U;
  } else if (KL15PwrSply_DD_B.RelationalOperator_b) {
    /* Switch: '<S89>/Switch6' incorporates:
     *  Constant: '<S89>/Constant7'
     *  Switch: '<S89>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr12 = 1U;
  } else if (KL15PwrSply_DD_B.RelationalOperator2_j) {
    /* Switch: '<S89>/Switch1' incorporates:
     *  Constant: '<S89>/Constant1'
     *  Switch: '<S89>/Switch5'
     *  Switch: '<S89>/Switch6'
     */
    KL15PwrSply_DD_PwrSplyRealErr12 = 4U;
  } else {
    /* Switch: '<S89>/Switch6' incorporates:
     *  Constant: '<S89>/Constant3'
     *  Switch: '<S89>/Switch1'
     *  Switch: '<S89>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr12 = 0U;
  }

  /* End of Switch: '<S89>/Switch4' */

  /* Outputs for Enabled SubSystem: '<S7>/RealErrHold' incorporates:
   *  EnablePort: '<S86>/Enable'
   */
  /* Logic: '<S7>/Logical Operator7' incorporates:
   *  Constant: '<S7>/Constant33'
   *  Constant: '<S7>/Constant34'
   *  Inport: '<S86>/stRealErr'
   *  Logic: '<S7>/Logical Operator5'
   *  Logic: '<S7>/Logical Operator6'
   *  RelationalOperator: '<S7>/Relational Operator4'
   *  RelationalOperator: '<S7>/Relational Operator5'
   *  RelationalOperator: '<S7>/Relational Operator6'
   *  UnitDelay: '<S7>/Unit Delay2'
   */
  if (((0 == KL15PwrSply_DD_PwrSplyRealErr12) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_p != KL15PwrSply_DD_PwrSplyRealErr12) && (0 != KL15PwrSply_DD_PwrSplyRealErr12))) {
    KL15PwrSply_DD_B.stRealErr_bg = KL15PwrSply_DD_PwrSplyRealErr12;
  }

  /* End of Logic: '<S7>/Logical Operator7' */
  /* End of Outputs for SubSystem: '<S7>/RealErrHold' */

  /* SignalConversion: '<S1>/SignalConversion20' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[11] = KL15PwrSply_DD_B.stRealErr_bg;

  /* UnitDelay: '<S8>/Unit Delay4' */
  rtb_UnitDelay4_b = KL15PwrSply_DD_PwrSply_stCtrl11;

  /* S-Function (Efx_Debounce_sf): '<S98>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S8>/Constant1'
   *  Constant: '<S8>/Constant2'
   *  Constant: '<S98>/Reset'
   *  Constant: '<S98>/THighLow'
   *  Constant: '<S98>/X_Init'
   *  S-Function (Upcast_sf): '<S98>/Upcast'
   *  S-Function (Upcast_sf): '<S98>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
    rtb_Efx_Debounce_sf_d = Efx_Debounce_u8_u8(rtb_UnitDelay4_b, &PCUOnDiagDly_I, &paramdebounce_loc, 10000 );
  }

  /* UnitDelay: '<S8>/Unit Delay' */
  rtb_UnitDelay_g = KL15PwrSply_DD_DW.UnitDelay_DSTATE_f;

  /* RelationalOperator: '<S8>/Relational Operator1' incorporates:
   *  Constant: '<S8>/Constant4'
   */
  rtb_DataTypeConversion2_bh = (tmpIRead_2[10] == 1);

  /* RelationalOperator: '<S8>/Relational Operator2' incorporates:
   *  Constant: '<S8>/Constant5'
   */
  rtb_DataTypeConversion2_k = (tmpIRead_2[10] == 2);

  /* Logic: '<S8>/Logical Operator10' incorporates:
   *  Constant: '<S8>/Constant3'
   *  Logic: '<S8>/Logical Operator3'
   *  Logic: '<S8>/Logical Operator4'
   *  RelationalOperator: '<S8>/Relational Operator'
   */
  rtb_LogicalOperator10_l = ((rtb_UnitDelay_g != 0) || ((!rtb_DataTypeConversion2_bh) && (!rtb_DataTypeConversion2_k)));

  /* S-Function (Efx_Debounce_sf): '<S99>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S8>/Constant10'
   *  Constant: '<S8>/Constant9'
   *  Constant: '<S99>/Reset'
   *  Constant: '<S99>/THighLow'
   *  Constant: '<S99>/X_Init'
   *  S-Function (Upcast_sf): '<S99>/Upcast'
   *  S-Function (Upcast_sf): '<S99>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
    rtb_DataTypeConversion2_bh = Efx_Debounce_u8_u8(rtb_LogicalOperator10_l, &PCUOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S8>/DTC_PCUPowerSCG_GetEventFailed' */
  Rte_Call_DTC_PCUPowerSCG_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S8>/DTC_PCUPowerSCG_GetEventTested' */
  Rte_Call_DTC_PCUPowerSCG_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Logic: '<S8>/Logical Operator14' */
  rtb_DTC_InverterPowerOL_GetE_mi = (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd);

  /* FunctionCaller: '<S8>/DTC_PCUPowerOC_GetEventFailed' */
  Rte_Call_DTC_PCUPowerOC_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S8>/DTC_PCUPowerOC_GetEventTested' */
  Rte_Call_DTC_PCUPowerOC_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/Constant'
   *  Inport: '<Root>/KL15PwrSply_bPCUPowerTrigUds_Val'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   *  Logic: '<S8>/Logical Operator13'
   *  Logic: '<S8>/Logical Operator15'
   *  Logic: '<S8>/Logical Operator8'
   *  Logic: '<S8>/Logical Operator9'
   *  MultiPortSwitch: '<S8>/MultiportSwitch11'
   *  Switch: '<S8>/Switch1'
   *  Switch: '<S8>/Switch41'
   *  UnitDelay: '<S8>/Unit Delay3'
   */
  if ((rtb_DTC_InverterPowerOL_GetE_mi || (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd)) && rtb_DataTypeConversion2_bh) {
    KL15PwrSply_DD_PwrSply_stCtrl11 = 0U;
  } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bPCUPowerTrigUds_Val()) {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Inport: '<Root>/KL15PwrSply_u8stPCUPowerUds_Val'
     */
    KL15PwrSply_DD_PwrSply_stCtrl11 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stPCUPowerUds_Val();
  } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S8>/MultiportSwitch11' incorporates:
     *  Switch: '<S8>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl11 = tmpIRead_1[10];
  } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_j && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
    /* Switch: '<S8>/Switch41' incorporates:
     *  Constant: '<S8>/Constant27'
     *  MultiPortSwitch: '<S8>/MultiportSwitch11'
     *  Switch: '<S8>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl11 = 1U;
  } else {
    /* MultiPortSwitch: '<S8>/MultiportSwitch11' incorporates:
     *  Switch: '<S8>/Switch1'
     *  Switch: '<S8>/Switch41'
     */
    KL15PwrSply_DD_PwrSply_stCtrl11 = tmpIRead_1[10];
  }

  /* End of Switch: '<S8>/Switch' */

  /* Logic: '<S8>/Logical Operator1' incorporates:
   *  Logic: '<S8>/Logical Operator2'
   */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (KL15PwrSply_DD_PwrSply_stCtrl11 == 0));

  /* FunctionCaller: '<S8>/IoHwAb_IoDiagDo_Do_Get' */
  Rte_Call_IoHwAb_IoDiagDo_Do_Get(O_S_KL15PwrSply11, &KL15PwrSply_D_PwrSplyDiag11_Get);

  /* SwitchCase: '<S8>/Switch Case1' incorporates:
   *  DataTypeConversion: '<S8>/DataTypeConversion1'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S8>/PCUOffDiagErr_Set' incorporates:
     *  ActionPort: '<S94>/Action Port'
     */
    /* Switch: '<S94>/Switch1' incorporates:
     *  Constant: '<S94>/Constant5'
     *  Constant: '<S94>/Constant6'
     *  DataTypeConversion: '<S101>/Extract Desired Bits'
     */
    if (((uint8)KL15PwrSply_D_PwrSplyDiag11_Get & 1U) != 0U) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S94>/Switch1' */

    /* FunctionCaller: '<S94>/DTC_PCUPowerSCB_SetEventStatus' */
    Rte_Call_DTC_PCUPowerSCB_SetEventStatus(rtb_Switch4_k3);

    /* End of Outputs for SubSystem: '<S8>/PCUOffDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S8>/PCUOffDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S93>/Action Port'
     */
    /* FunctionCaller: '<S93>/DTC_PCUPowerSCB_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S93>/Constant'
     */
    Rte_Call_DTC_PCUPowerSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S8>/PCUOffDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S8>/Switch Case1' */

  /* FunctionCaller: '<S8>/IoHwAb_IoSigAdc_Adc_Get' */
  Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol11, &KL15PwrSply_DD_PwrVol11_Get);

  /* Product: '<S8>/Divide1' */
  KL15PwrSply_DD_PwrCurr11_Calc = (float32)KL15PwrSply_DD_PwrVol11_Get / 1780.0F * 34100.0F;

  /* RelationalOperator: '<S8>/Relational Operator7' */
  rtb_DataTypeConversion2_bh = (KL15PwrSply_DD_PwrCurr11_Calc > tmpIRead_0[10]);

  /* Logic: '<S8>/Logical Operator11' */
  rtb_DTC_InverterPowerOL_GetE_mi = (rtb_DataTypeConversion2_bh && (rtb_Efx_Debounce_sf_d != 0));

  /* Logic: '<S8>/Logical Operator' */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_d != 0));

  /* SwitchCase: '<S8>/Switch Case' incorporates:
   *  DataTypeConversion: '<S8>/DataTypeConversion'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S8>/PCUOnDiagErr_Set' incorporates:
     *  ActionPort: '<S96>/Action Port'
     */
    /* Switch: '<S96>/Switch8' incorporates:
     *  Constant: '<S96>/Constant'
     *  Constant: '<S96>/Constant13'
     *  DataTypeConversion: '<S102>/Extract Desired Bits'
     *  DataTypeConversion: '<S96>/DataTypeConversion1'
     */
    if (OLFaultBypass) {
      rtb_DTC_RLALampCtlUnitPowerOC_m = false;
    } else {
      rtb_DTC_RLALampCtlUnitPowerOC_m = (((uint8)(KL15PwrSply_D_PwrSplyDiag11_Get >> 3) & 1U) != 0U);
    }

    /* End of Switch: '<S96>/Switch8' */

    /* Switch: '<S96>/Switch1' incorporates:
     *  Constant: '<S96>/Constant3'
     *  Constant: '<S96>/Constant4'
     */
    if (rtb_DTC_RLALampCtlUnitPowerOC_m) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S96>/Switch1' */

    /* FunctionCaller: '<S96>/DTC_PCUPowerOL_SetEventStatus' */
    Rte_Call_DTC_PCUPowerOL_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S96>/Switch' incorporates:
     *  Constant: '<S96>/Constant1'
     *  Constant: '<S96>/Constant2'
     *  DataTypeConversion: '<S103>/Extract Desired Bits'
     *  DataTypeConversion: '<S96>/DataTypeConversion'
     */
    if (((uint8)(KL15PwrSply_D_PwrSplyDiag11_Get >> 1) & 1) << 1 != 0) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S96>/Switch' */

    /* FunctionCaller: '<S96>/DTC_PCUPowerSCG_SetEventStatus' */
    Rte_Call_DTC_PCUPowerSCG_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S96>/Switch4' incorporates:
     *  Constant: '<S96>/Constant10'
     *  Constant: '<S96>/Constant9'
     *  Sum: '<S96>/Add2'
     *  UnitDelay: '<S96>/UnitDelay2'
     */
    if (rtb_DTC_InverterPowerOL_GetE_mi) {
      rtb_Switch4_mq = Mfx_Add_u16u16_u16(KL15PwrSply_DD_DW.UnitDelay2_DSTATE_er, 10U);
    } else {
      rtb_Switch4_mq = 0U;
    }

    /* End of Switch: '<S96>/Switch4' */

    /* Switch: '<S96>/Switch3' incorporates:
     *  Constant: '<S96>/Constant7'
     *  Constant: '<S96>/Constant8'
     *  RelationalOperator: '<S96>/RelationalOperator2'
     */
    if (rtb_Switch4_mq > tmpIRead[10]) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_FAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PASSED;
    }

    /* End of Switch: '<S96>/Switch3' */

    /* FunctionCaller: '<S96>/DTC_PCUPowerOC_SetEventStatus' */
    Rte_Call_DTC_PCUPowerOC_SetEventStatus(rtb_Switch4_k3);

    /* Update for UnitDelay: '<S96>/UnitDelay2' */
    KL15PwrSply_DD_DW.UnitDelay2_DSTATE_er = rtb_Switch4_mq;

    /* End of Outputs for SubSystem: '<S8>/PCUOnDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S8>/PCUOnDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S95>/Action Port'
     */
    /* FunctionCaller: '<S95>/DTC_PCUPowerOC_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S95>/Constant'
     */
    Rte_Call_DTC_PCUPowerOC_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S95>/DTC_PCUPowerOL_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S95>/Constant1'
     */
    Rte_Call_DTC_PCUPowerOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S95>/DTC_PCUPowerSCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S95>/Constant2'
     */
    Rte_Call_DTC_PCUPowerSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S8>/PCUOnDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S8>/Switch Case' */

  /* FunctionCaller: '<S8>/IoHwAb_IoSigDio_Do_Set' */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_KL15PwrSply11, KL15PwrSply_DD_PwrSply_stCtrl11);

  /* FunctionCaller: '<S100>/DTC_PCUPowerSCB_GetEventFailed' */
  Rte_Call_DTC_PCUPowerSCB_GetEventFailed(&rtb_DataTypeConversion2_bh);

  /* FunctionCaller: '<S100>/DTC_PCUPowerSCB_GetEventTested' */
  Rte_Call_DTC_PCUPowerSCB_GetEventTested(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S100>/DTC_PCUPowerOL_GetEventFailed' */
  Rte_Call_DTC_PCUPowerOL_GetEventFailed(&rtb_DTC_PCUPowerOL_GetEventFa_m);

  /* FunctionCaller: '<S100>/DTC_PCUPowerOL_GetEventTested' */
  Rte_Call_DTC_PCUPowerOL_GetEventTested(&rtb_DTC_PCUPowerOL_GetEventTe_e);

  /* FunctionCaller: '<S100>/DTC_PCUPowerSCG_GetEventFailed' */
  Rte_Call_DTC_PCUPowerSCG_GetEventFailed(&rtb_DTC_PCUPowerSCG_GetEventF_k);

  /* FunctionCaller: '<S100>/DTC_PCUPowerSCG_GetEventTested' */
  Rte_Call_DTC_PCUPowerSCG_GetEventTested(&rtb_DTC_PCUPowerSCG_GetEventT_m);

  /* FunctionCaller: '<S100>/DTC_PCUPowerOC_GetEventFailed' */
  Rte_Call_DTC_PCUPowerOC_GetEventFailed(&rtb_DTC_PCUPowerOC_GetEventFa_m);

  /* FunctionCaller: '<S100>/DTC_PCUPowerOC_GetEventTested' */
  Rte_Call_DTC_PCUPowerOC_GetEventTested(&rtb_DTC_PCUPowerOC_GetEventTe_m);

  /* Switch: '<S100>/Switch4' incorporates:
   *  Constant: '<S100>/Constant5'
   *  Constant: '<S100>/Constant59'
   *  Constant: '<S100>/Constant8'
   *  Logic: '<S100>/Logical Operator1'
   *  Logic: '<S100>/Logical Operator4'
   *  Logic: '<S100>/Logical Operator6'
   *  Logic: '<S100>/Logical Operator7'
   *  RelationalOperator: '<S100>/Relational Operator'
   *  RelationalOperator: '<S100>/Relational Operator1'
   *  Switch: '<S100>/Switch1'
   *  Switch: '<S100>/Switch5'
   *  Switch: '<S100>/Switch6'
   */
  if (rtb_DataTypeConversion2_bh && rtb_DataTypeConversion2_k && (KL15PwrSply_DD_PwrSply_stCtrl11 == 0)) {
    KL15PwrSply_DD_PwrSplyRealErr11 = 2U;
  } else if (rtb_DTC_PCUPowerOL_GetEventFa_m && rtb_DTC_PCUPowerOL_GetEventTe_e && (KL15PwrSply_DD_PwrSply_stCtrl11 == 1)) {
    /* Switch: '<S100>/Switch5' incorporates:
     *  Constant: '<S100>/Constant6'
     */
    KL15PwrSply_DD_PwrSplyRealErr11 = 3U;
  } else if (rtb_DTC_PCUPowerSCG_GetEventF_k && rtb_DTC_PCUPowerSCG_GetEventT_m) {
    /* Switch: '<S100>/Switch6' incorporates:
     *  Constant: '<S100>/Constant7'
     *  Switch: '<S100>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr11 = 1U;
  } else if (rtb_DTC_PCUPowerOC_GetEventFa_m && rtb_DTC_PCUPowerOC_GetEventTe_m) {
    /* Switch: '<S100>/Switch1' incorporates:
     *  Constant: '<S100>/Constant1'
     *  Switch: '<S100>/Switch5'
     *  Switch: '<S100>/Switch6'
     */
    KL15PwrSply_DD_PwrSplyRealErr11 = 4U;
  } else {
    /* Switch: '<S100>/Switch6' incorporates:
     *  Constant: '<S100>/Constant3'
     *  Switch: '<S100>/Switch1'
     *  Switch: '<S100>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr11 = 0U;
  }

  /* End of Switch: '<S100>/Switch4' */

  /* Outputs for Enabled SubSystem: '<S8>/RealErrHold' incorporates:
   *  EnablePort: '<S97>/Enable'
   */
  /* Logic: '<S8>/Logical Operator7' incorporates:
   *  Constant: '<S8>/Constant33'
   *  Constant: '<S8>/Constant34'
   *  Inport: '<S97>/stRealErr'
   *  Logic: '<S8>/Logical Operator5'
   *  Logic: '<S8>/Logical Operator6'
   *  RelationalOperator: '<S8>/Relational Operator4'
   *  RelationalOperator: '<S8>/Relational Operator5'
   *  RelationalOperator: '<S8>/Relational Operator6'
   *  UnitDelay: '<S8>/Unit Delay2'
   */
  if (((0 == KL15PwrSply_DD_PwrSplyRealErr11) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_lb != KL15PwrSply_DD_PwrSplyRealErr11) && (0 != KL15PwrSply_DD_PwrSplyRealErr11))) {
    KL15PwrSply_DD_B.stRealErr_id = KL15PwrSply_DD_PwrSplyRealErr11;
  }

  /* End of Logic: '<S8>/Logical Operator7' */
  /* End of Outputs for SubSystem: '<S8>/RealErrHold' */

  /* SignalConversion: '<S1>/SignalConversion15' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[10] = KL15PwrSply_DD_B.stRealErr_id;

  /* UnitDelay: '<S24>/Unit Delay4' */
  rtb_UnitDelay4_p = KL15PwrSply_DD_PwrSply_stCtrl04;

  /* S-Function (Efx_Debounce_sf): '<S131>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S131>/Reset'
   *  Constant: '<S131>/THighLow'
   *  Constant: '<S131>/X_Init'
   *  Constant: '<S24>/Constant1'
   *  Constant: '<S24>/Constant2'
   *  S-Function (Upcast_sf): '<S131>/Upcast'
   *  S-Function (Upcast_sf): '<S131>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
    rtb_Efx_Debounce_sf_d = Efx_Debounce_u8_u8(rtb_UnitDelay4_p, &RMOnDiagDly_I, &paramdebounce_loc, 10000 );
  }

  /* UnitDelay: '<S24>/Unit Delay' */
  rtb_UnitDelay_g = KL15PwrSply_DD_DW.UnitDelay_DSTATE_c;

  /* RelationalOperator: '<S24>/Relational Operator1' incorporates:
   *  Constant: '<S24>/Constant4'
   */
  rtb_DataTypeConversion2_bh = (tmpIRead_2[3] == 1);

  /* RelationalOperator: '<S24>/Relational Operator2' incorporates:
   *  Constant: '<S24>/Constant5'
   */
  rtb_DataTypeConversion2_k = (tmpIRead_2[3] == 2);

  /* Logic: '<S24>/Logical Operator10' incorporates:
   *  Constant: '<S24>/Constant3'
   *  Logic: '<S24>/Logical Operator3'
   *  Logic: '<S24>/Logical Operator4'
   *  RelationalOperator: '<S24>/Relational Operator'
   */
  rtb_LogicalOperator10_a = ((rtb_UnitDelay_g != 0) || ((!rtb_DataTypeConversion2_bh) && (!rtb_DataTypeConversion2_k)));

  /* S-Function (Efx_Debounce_sf): '<S132>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S132>/Reset'
   *  Constant: '<S132>/THighLow'
   *  Constant: '<S132>/X_Init'
   *  Constant: '<S24>/Constant10'
   *  Constant: '<S24>/Constant9'
   *  S-Function (Upcast_sf): '<S132>/Upcast'
   *  S-Function (Upcast_sf): '<S132>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
    rtb_DataTypeConversion2_bh = Efx_Debounce_u8_u8(rtb_LogicalOperator10_a, &RMOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S24>/DTC_RMPowerSCG_GetEventFailed' */
  Rte_Call_DTC_RMPowerSCG_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S24>/DTC_RMPowerSCG_GetEventTested' */
  Rte_Call_DTC_RMPowerSCG_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Logic: '<S24>/Logical Operator14' */
  rtb_DTC_PCUPowerOL_GetEventFa_m = (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd);

  /* FunctionCaller: '<S24>/DTC_RMPowerOC_GetEventFailed' */
  Rte_Call_DTC_RMPowerOC_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S24>/DTC_RMPowerOC_GetEventTested' */
  Rte_Call_DTC_RMPowerOC_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Switch: '<S24>/Switch' incorporates:
   *  Constant: '<S24>/Constant'
   *  Inport: '<Root>/KL15PwrSply_bRMPowerTrigUds_Val'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   *  Logic: '<S24>/Logical Operator13'
   *  Logic: '<S24>/Logical Operator15'
   *  Logic: '<S24>/Logical Operator8'
   *  Logic: '<S24>/Logical Operator9'
   *  MultiPortSwitch: '<S24>/MultiportSwitch11'
   *  Switch: '<S24>/Switch1'
   *  Switch: '<S24>/Switch41'
   *  UnitDelay: '<S24>/Unit Delay3'
   */
  if ((rtb_DTC_PCUPowerOL_GetEventFa_m || (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd)) && rtb_DataTypeConversion2_bh) {
    KL15PwrSply_DD_PwrSply_stCtrl04 = 0U;
  } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bRMPowerTrigUds_Val()) {
    /* Switch: '<S24>/Switch1' incorporates:
     *  Inport: '<Root>/KL15PwrSply_u8stRMPowerUds_Val'
     */
    KL15PwrSply_DD_PwrSply_stCtrl04 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stRMPowerUds_Val();
  } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S24>/MultiportSwitch11' incorporates:
     *  Switch: '<S24>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl04 = tmpIRead_1[3];
  } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_n && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
    /* Switch: '<S24>/Switch41' incorporates:
     *  Constant: '<S24>/Constant27'
     *  MultiPortSwitch: '<S24>/MultiportSwitch11'
     *  Switch: '<S24>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl04 = 1U;
  } else {
    /* MultiPortSwitch: '<S24>/MultiportSwitch11' incorporates:
     *  Switch: '<S24>/Switch1'
     *  Switch: '<S24>/Switch41'
     */
    KL15PwrSply_DD_PwrSply_stCtrl04 = tmpIRead_1[3];
  }

  /* End of Switch: '<S24>/Switch' */

  /* Logic: '<S24>/Logical Operator1' incorporates:
   *  Logic: '<S24>/Logical Operator2'
   */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (KL15PwrSply_DD_PwrSply_stCtrl04 == 0));

  /* FunctionCaller: '<S24>/IoHwAb_IoDiagDo_Do_Get' */
  Rte_Call_IoHwAb_IoDiagDo_Do_Get(O_S_KL15PwrSply04, &KL15PwrSply_D_PwrSplyDiag04_Get);

  /* SwitchCase: '<S24>/Switch Case1' incorporates:
   *  DataTypeConversion: '<S24>/DataTypeConversion1'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S24>/RMOffDiagErr_Set' incorporates:
     *  ActionPort: '<S127>/Action Port'
     */
    /* Switch: '<S127>/Switch1' incorporates:
     *  Constant: '<S127>/Constant5'
     *  Constant: '<S127>/Constant6'
     *  DataTypeConversion: '<S134>/Extract Desired Bits'
     */
    if (((uint8)KL15PwrSply_D_PwrSplyDiag04_Get & 1U) != 0U) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S127>/Switch1' */

    /* FunctionCaller: '<S127>/DTC_RMPowerSCB_SetEventStatus' */
    Rte_Call_DTC_RMPowerSCB_SetEventStatus(rtb_Switch4_k3);

    /* End of Outputs for SubSystem: '<S24>/RMOffDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S24>/RMOffDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S126>/Action Port'
     */
    /* FunctionCaller: '<S126>/DTC_RMPowerSCB_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S126>/Constant'
     */
    Rte_Call_DTC_RMPowerSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S24>/RMOffDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S24>/Switch Case1' */

  /* FunctionCaller: '<S24>/IoHwAb_IoSigAdc_Adc_Get' */
  Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol04, &KL15PwrSply_DD_PwrVol04_Get);

  /* Product: '<S24>/Divide1' */
  KL15PwrSply_DD_PwrCurr04_Calc = (float32)KL15PwrSply_DD_PwrVol04_Get / 1780.0F * 27950.0F;

  /* RelationalOperator: '<S24>/Relational Operator7' */
  rtb_DataTypeConversion2_bh = (KL15PwrSply_DD_PwrCurr04_Calc > tmpIRead_0[3]);

  /* Logic: '<S24>/Logical Operator11' */
  rtb_DTC_PCUPowerOL_GetEventFa_m = (rtb_DataTypeConversion2_bh && (rtb_Efx_Debounce_sf_d != 0));

  /* Logic: '<S24>/Logical Operator' */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_d != 0));

  /* SwitchCase: '<S24>/Switch Case' incorporates:
   *  DataTypeConversion: '<S24>/DataTypeConversion'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S24>/RMOnDiagErr_Set' incorporates:
     *  ActionPort: '<S129>/Action Port'
     */
    /* Switch: '<S129>/Switch8' incorporates:
     *  Constant: '<S129>/Constant'
     *  Constant: '<S129>/Constant13'
     *  DataTypeConversion: '<S129>/DataTypeConversion1'
     *  DataTypeConversion: '<S135>/Extract Desired Bits'
     */
    if (OLFaultBypass) {
      rtb_DTC_RLALampCtlUnitPowerOC_m = false;
    } else {
      rtb_DTC_RLALampCtlUnitPowerOC_m = (((uint8)(KL15PwrSply_D_PwrSplyDiag04_Get >> 3) & 1U) != 0U);
    }

    /* End of Switch: '<S129>/Switch8' */

    /* Switch: '<S129>/Switch1' incorporates:
     *  Constant: '<S129>/Constant3'
     *  Constant: '<S129>/Constant4'
     */
    if (rtb_DTC_RLALampCtlUnitPowerOC_m) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S129>/Switch1' */

    /* FunctionCaller: '<S129>/DTC_RMPowerOL_SetEventStatus' */
    Rte_Call_DTC_RMPowerOL_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S129>/Switch' incorporates:
     *  Constant: '<S129>/Constant1'
     *  Constant: '<S129>/Constant2'
     *  DataTypeConversion: '<S129>/DataTypeConversion'
     *  DataTypeConversion: '<S136>/Extract Desired Bits'
     */
    if (((uint8)(KL15PwrSply_D_PwrSplyDiag04_Get >> 1) & 1) << 1 != 0) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S129>/Switch' */

    /* FunctionCaller: '<S129>/DTC_RMPowerSCG_SetEventStatus' */
    Rte_Call_DTC_RMPowerSCG_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S129>/Switch3' incorporates:
     *  Constant: '<S129>/Constant7'
     *  Constant: '<S129>/Constant8'
     *  Sum: '<S129>/Add2'
     *  UnitDelay: '<S129>/UnitDelay2'
     */
    if (rtb_DTC_PCUPowerOL_GetEventFa_m) {
      rtb_Switch4_mq = Mfx_Add_u16u16_u16(KL15PwrSply_DD_DW.UnitDelay2_DSTATE_i, 10U);
    } else {
      rtb_Switch4_mq = 0U;
    }

    /* End of Switch: '<S129>/Switch3' */

    /* Switch: '<S129>/Switch2' incorporates:
     *  Constant: '<S129>/Constant5'
     *  Constant: '<S129>/Constant6'
     *  RelationalOperator: '<S129>/RelationalOperator2'
     */
    if (rtb_Switch4_mq > tmpIRead[3]) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_FAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PASSED;
    }

    /* End of Switch: '<S129>/Switch2' */

    /* FunctionCaller: '<S129>/DTC_RMPowerOC_SetEventStatus' */
    Rte_Call_DTC_RMPowerOC_SetEventStatus(rtb_Switch4_k3);

    /* Update for UnitDelay: '<S129>/UnitDelay2' */
    KL15PwrSply_DD_DW.UnitDelay2_DSTATE_i = rtb_Switch4_mq;

    /* End of Outputs for SubSystem: '<S24>/RMOnDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S24>/RMOnDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S128>/Action Port'
     */
    /* FunctionCaller: '<S128>/DTC_RMPowerOC_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S128>/Constant'
     */
    Rte_Call_DTC_RMPowerOC_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S128>/DTC_RMPowerOL_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S128>/Constant1'
     */
    Rte_Call_DTC_RMPowerOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S128>/DTC_RMPowerSCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S128>/Constant2'
     */
    Rte_Call_DTC_RMPowerSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S24>/RMOnDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S24>/Switch Case' */

  /* FunctionCaller: '<S24>/IoHwAb_IoSigDio_Do_Set' */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_KL15PwrSply04, KL15PwrSply_DD_PwrSply_stCtrl04);

  /* FunctionCaller: '<S133>/DTC_RMPowerSCB_GetEventFailed' */
  Rte_Call_DTC_RMPowerSCB_GetEventFailed(&rtb_DataTypeConversion2_bh);

  /* FunctionCaller: '<S133>/DTC_RMPowerSCB_GetEventTested' */
  Rte_Call_DTC_RMPowerSCB_GetEventTested(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S133>/DTC_RMPowerOL_GetEventFailed' */
  Rte_Call_DTC_RMPowerOL_GetEventFailed(&rtb_DTC_RMPowerOL_GetEventFai_h);

  /* FunctionCaller: '<S133>/DTC_RMPowerOL_GetEventTested' */
  Rte_Call_DTC_RMPowerOL_GetEventTested(&rtb_DTC_RMPowerOL_GetEventTes_h);

  /* FunctionCaller: '<S133>/DTC_RMPowerSCG_GetEventFailed' */
  Rte_Call_DTC_RMPowerSCG_GetEventFailed(&rtb_DTC_RMPowerSCG_GetEventFa_b);

  /* FunctionCaller: '<S133>/DTC_RMPowerSCG_GetEventTested' */
  Rte_Call_DTC_RMPowerSCG_GetEventTested(&rtb_DTC_RMPowerSCG_GetEventTe_l);

  /* FunctionCaller: '<S133>/DTC_RMPowerOC_GetEventFailed' */
  Rte_Call_DTC_RMPowerOC_GetEventFailed(&rtb_DTC_RMPowerOC_GetEventFai_d);

  /* FunctionCaller: '<S133>/DTC_RMPowerOC_GetEventTested' */
  Rte_Call_DTC_RMPowerOC_GetEventTested(&rtb_DTC_RMPowerOC_GetEventTes_m);

  /* Switch: '<S133>/Switch4' incorporates:
   *  Constant: '<S133>/Constant5'
   *  Constant: '<S133>/Constant59'
   *  Constant: '<S133>/Constant8'
   *  Logic: '<S133>/Logical Operator1'
   *  Logic: '<S133>/Logical Operator4'
   *  Logic: '<S133>/Logical Operator6'
   *  Logic: '<S133>/Logical Operator7'
   *  RelationalOperator: '<S133>/Relational Operator'
   *  RelationalOperator: '<S133>/Relational Operator1'
   *  Switch: '<S133>/Switch1'
   *  Switch: '<S133>/Switch5'
   *  Switch: '<S133>/Switch6'
   */
  if (rtb_DataTypeConversion2_bh && rtb_DataTypeConversion2_k && (KL15PwrSply_DD_PwrSply_stCtrl04 == 0)) {
    KL15PwrSply_DD_PwrSplyRealErr04 = 2U;
  } else if (rtb_DTC_RMPowerOL_GetEventFai_h && rtb_DTC_RMPowerOL_GetEventTes_h && (KL15PwrSply_DD_PwrSply_stCtrl04 == 1)) {
    /* Switch: '<S133>/Switch5' incorporates:
     *  Constant: '<S133>/Constant6'
     */
    KL15PwrSply_DD_PwrSplyRealErr04 = 3U;
  } else if (rtb_DTC_RMPowerSCG_GetEventFa_b && rtb_DTC_RMPowerSCG_GetEventTe_l) {
    /* Switch: '<S133>/Switch6' incorporates:
     *  Constant: '<S133>/Constant7'
     *  Switch: '<S133>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr04 = 1U;
  } else if (rtb_DTC_RMPowerOC_GetEventFai_d && rtb_DTC_RMPowerOC_GetEventTes_m) {
    /* Switch: '<S133>/Switch1' incorporates:
     *  Constant: '<S133>/Constant1'
     *  Switch: '<S133>/Switch5'
     *  Switch: '<S133>/Switch6'
     */
    KL15PwrSply_DD_PwrSplyRealErr04 = 4U;
  } else {
    /* Switch: '<S133>/Switch6' incorporates:
     *  Constant: '<S133>/Constant3'
     *  Switch: '<S133>/Switch1'
     *  Switch: '<S133>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr04 = 0U;
  }

  /* End of Switch: '<S133>/Switch4' */

  /* Outputs for Enabled SubSystem: '<S24>/RealErrHold' incorporates:
   *  EnablePort: '<S130>/Enable'
   */
  /* Logic: '<S24>/Logical Operator7' incorporates:
   *  Constant: '<S24>/Constant33'
   *  Constant: '<S24>/Constant34'
   *  Inport: '<S130>/stRealErr'
   *  Logic: '<S24>/Logical Operator5'
   *  Logic: '<S24>/Logical Operator6'
   *  RelationalOperator: '<S24>/Relational Operator4'
   *  RelationalOperator: '<S24>/Relational Operator5'
   *  RelationalOperator: '<S24>/Relational Operator6'
   *  UnitDelay: '<S24>/Unit Delay2'
   */
  if (((0 == KL15PwrSply_DD_PwrSplyRealErr04) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_fp != KL15PwrSply_DD_PwrSplyRealErr04) && (0 != KL15PwrSply_DD_PwrSplyRealErr04))) {
    KL15PwrSply_DD_B.stRealErr_o = KL15PwrSply_DD_PwrSplyRealErr04;
  }

  /* End of Logic: '<S24>/Logical Operator7' */
  /* End of Outputs for SubSystem: '<S24>/RealErrHold' */

  /* SignalConversion: '<S1>/SignalConversion22' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[3] = KL15PwrSply_DD_B.stRealErr_o;

  /* UnitDelay: '<S31>/Unit Delay4' */
  rtb_UnitDelay4_n = KL15PwrSply_DD_PwrSply_stCtrl09;

  /* S-Function (Efx_Debounce_sf): '<S164>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S164>/Reset'
   *  Constant: '<S164>/THighLow'
   *  Constant: '<S164>/X_Init'
   *  Constant: '<S31>/Constant1'
   *  Constant: '<S31>/Constant2'
   *  S-Function (Upcast_sf): '<S164>/Upcast'
   *  S-Function (Upcast_sf): '<S164>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
    rtb_Efx_Debounce_sf_d = Efx_Debounce_u8_u8(rtb_UnitDelay4_n, &Rear12VOnDiagDly_I, &paramdebounce_loc, 10000 );
  }

  /* UnitDelay: '<S31>/Unit Delay' */
  rtb_UnitDelay_g = KL15PwrSply_DD_DW.UnitDelay_DSTATE_jd;

  /* RelationalOperator: '<S31>/Relational Operator1' incorporates:
   *  Constant: '<S31>/Constant4'
   */
  rtb_DataTypeConversion2_bh = (tmpIRead_2[8] == 1);

  /* RelationalOperator: '<S31>/Relational Operator2' incorporates:
   *  Constant: '<S31>/Constant5'
   */
  rtb_DataTypeConversion2_k = (tmpIRead_2[8] == 2);

  /* Logic: '<S31>/Logical Operator10' incorporates:
   *  Constant: '<S31>/Constant3'
   *  Logic: '<S31>/Logical Operator3'
   *  Logic: '<S31>/Logical Operator4'
   *  RelationalOperator: '<S31>/Relational Operator'
   */
  rtb_LogicalOperator10_ak = ((rtb_UnitDelay_g != 0) || ((!rtb_DataTypeConversion2_bh) && (!rtb_DataTypeConversion2_k)));

  /* S-Function (Efx_Debounce_sf): '<S165>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S165>/Reset'
   *  Constant: '<S165>/THighLow'
   *  Constant: '<S165>/X_Init'
   *  Constant: '<S31>/Constant10'
   *  Constant: '<S31>/Constant9'
   *  S-Function (Upcast_sf): '<S165>/Upcast'
   *  S-Function (Upcast_sf): '<S165>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
    rtb_DataTypeConversion2_bh = Efx_Debounce_u8_u8(rtb_LogicalOperator10_ak, &Rear12VOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S31>/DTC_Rear12VPowerSCG_GetEventFailed' */
  Rte_Call_DTC_Rear12VPowerSCG_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S31>/DTC_Rear12VPowerSCG_GetEventTested' */
  Rte_Call_DTC_Rear12VPowerSCG_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Logic: '<S31>/Logical Operator14' */
  rtb_DTC_RMPowerOL_GetEventFai_h = (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd);

  /* FunctionCaller: '<S31>/DTC_Rear12VPowerOC_GetEventFailed' */
  Rte_Call_DTC_Rear12VPowerOC_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S31>/DTC_Rear12VPowerOC_GetEventTested' */
  Rte_Call_DTC_Rear12VPowerOC_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Switch: '<S31>/Switch' incorporates:
   *  Constant: '<S31>/Constant'
   *  Inport: '<Root>/KL15PwrSply_bRear12VPowerTrigUds_Val'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   *  Logic: '<S31>/Logical Operator13'
   *  Logic: '<S31>/Logical Operator15'
   *  Logic: '<S31>/Logical Operator8'
   *  Logic: '<S31>/Logical Operator9'
   *  MultiPortSwitch: '<S31>/MultiportSwitch11'
   *  Switch: '<S31>/Switch1'
   *  Switch: '<S31>/Switch41'
   *  UnitDelay: '<S31>/Unit Delay3'
   */
  if ((rtb_DTC_RMPowerOL_GetEventFai_h || (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd)) && rtb_DataTypeConversion2_bh) {
    KL15PwrSply_DD_PwrSply_stCtrl09 = 0U;
  } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bRear12VPowerTrigUds_Val()) {
    /* Switch: '<S31>/Switch1' incorporates:
     *  Inport: '<Root>/KL15PwrSply_u8stRear12VPowerUds_Val'
     */
    KL15PwrSply_DD_PwrSply_stCtrl09 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stRear12VPowerUds_Val();
  } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S31>/MultiportSwitch11' incorporates:
     *  Switch: '<S31>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl09 = tmpIRead_1[8];
  } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_i && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
    /* Switch: '<S31>/Switch41' incorporates:
     *  Constant: '<S31>/Constant27'
     *  MultiPortSwitch: '<S31>/MultiportSwitch11'
     *  Switch: '<S31>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl09 = 1U;
  } else {
    /* MultiPortSwitch: '<S31>/MultiportSwitch11' incorporates:
     *  Switch: '<S31>/Switch1'
     *  Switch: '<S31>/Switch41'
     */
    KL15PwrSply_DD_PwrSply_stCtrl09 = tmpIRead_1[8];
  }

  /* End of Switch: '<S31>/Switch' */

  /* Logic: '<S31>/Logical Operator1' incorporates:
   *  Logic: '<S31>/Logical Operator2'
   */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (KL15PwrSply_DD_PwrSply_stCtrl09 == 0));

  /* FunctionCaller: '<S31>/IoHwAb_IoDiagDo_Do_Get' */
  Rte_Call_IoHwAb_IoDiagDo_Do_Get(O_S_KL15PwrSply09, &KL15PwrSply_D_PwrSplyDiag09_Get);

  /* SwitchCase: '<S31>/Switch Case1' incorporates:
   *  DataTypeConversion: '<S31>/DataTypeConversion1'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S31>/Rear12VOffDiagErr_Set' incorporates:
     *  ActionPort: '<S161>/Action Port'
     */
    /* Switch: '<S161>/Switch1' incorporates:
     *  Constant: '<S161>/Constant5'
     *  Constant: '<S161>/Constant6'
     *  DataTypeConversion: '<S167>/Extract Desired Bits'
     */
    if (((uint8)KL15PwrSply_D_PwrSplyDiag09_Get & 1U) != 0U) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S161>/Switch1' */

    /* FunctionCaller: '<S161>/DTC_Rear12VPowerSCB_SetEventStatus' */
    Rte_Call_DTC_Rear12VPowerSCB_SetEventStatus(rtb_Switch4_k3);

    /* End of Outputs for SubSystem: '<S31>/Rear12VOffDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S31>/Rear12VOffDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S160>/Action Port'
     */
    /* FunctionCaller: '<S160>/DTC_Rear12VPowerSCB_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S160>/Constant'
     */
    Rte_Call_DTC_Rear12VPowerSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S31>/Rear12VOffDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S31>/Switch Case1' */

  /* FunctionCaller: '<S31>/IoHwAb_IoSigAdc_Adc_Get' */
  Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol09, &KL15PwrSply_DD_PwrVol09_Get);

  /* Product: '<S31>/Divide1' */
  KL15PwrSply_DD_PwrCurr09_Calc = (float32)KL15PwrSply_DD_PwrVol09_Get / 1780.0F * 20000.0F;

  /* RelationalOperator: '<S31>/Relational Operator7' */
  rtb_DataTypeConversion2_bh = (KL15PwrSply_DD_PwrCurr09_Calc > tmpIRead_0[8]);

  /* Logic: '<S31>/Logical Operator11' */
  rtb_DTC_RMPowerOL_GetEventFai_h = (rtb_DataTypeConversion2_bh && (rtb_Efx_Debounce_sf_d != 0));

  /* Logic: '<S31>/Logical Operator' */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_d != 0));

  /* SwitchCase: '<S31>/Switch Case' incorporates:
   *  DataTypeConversion: '<S31>/DataTypeConversion'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S31>/Rear12VOnDiagErr_Set' incorporates:
     *  ActionPort: '<S163>/Action Port'
     */
    /* Switch: '<S163>/Switch8' incorporates:
     *  Constant: '<S163>/Constant'
     *  Constant: '<S163>/Constant13'
     *  DataTypeConversion: '<S163>/DataTypeConversion1'
     *  DataTypeConversion: '<S168>/Extract Desired Bits'
     */
    if (OLFaultBypass) {
      rtb_DTC_RLALampCtlUnitPowerOC_m = false;
    } else {
      rtb_DTC_RLALampCtlUnitPowerOC_m = (((uint8)(KL15PwrSply_D_PwrSplyDiag09_Get >> 3) & 1U) != 0U);
    }

    /* End of Switch: '<S163>/Switch8' */

    /* Switch: '<S163>/Switch1' incorporates:
     *  Constant: '<S163>/Constant3'
     *  Constant: '<S163>/Constant4'
     */
    if (rtb_DTC_RLALampCtlUnitPowerOC_m) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S163>/Switch1' */

    /* FunctionCaller: '<S163>/DTC_Rear12VPowerOL_SetEventStatus' */
    Rte_Call_DTC_Rear12VPowerOL_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S163>/Switch' incorporates:
     *  Constant: '<S163>/Constant1'
     *  Constant: '<S163>/Constant2'
     *  DataTypeConversion: '<S163>/DataTypeConversion'
     *  DataTypeConversion: '<S169>/Extract Desired Bits'
     */
    if (((uint8)(KL15PwrSply_D_PwrSplyDiag09_Get >> 1) & 1) << 1 != 0) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S163>/Switch' */

    /* FunctionCaller: '<S163>/DTC_Rear12VPowerSCG_SetEventStatus' */
    Rte_Call_DTC_Rear12VPowerSCG_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S163>/Switch4' incorporates:
     *  Constant: '<S163>/Constant10'
     *  Constant: '<S163>/Constant9'
     *  Sum: '<S163>/Add2'
     *  UnitDelay: '<S163>/UnitDelay2'
     */
    if (rtb_DTC_RMPowerOL_GetEventFai_h) {
      rtb_Switch4_mq = Mfx_Add_u16u16_u16(KL15PwrSply_DD_DW.UnitDelay2_DSTATE_o, 10U);
    } else {
      rtb_Switch4_mq = 0U;
    }

    /* End of Switch: '<S163>/Switch4' */

    /* Switch: '<S163>/Switch3' incorporates:
     *  Constant: '<S163>/Constant7'
     *  Constant: '<S163>/Constant8'
     *  RelationalOperator: '<S163>/RelationalOperator2'
     */
    if (rtb_Switch4_mq > tmpIRead[8]) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_FAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PASSED;
    }

    /* End of Switch: '<S163>/Switch3' */

    /* FunctionCaller: '<S163>/DTC_Rear12VPowerOC_SetEventStatus' */
    Rte_Call_DTC_Rear12VPowerOC_SetEventStatus(rtb_Switch4_k3);

    /* Update for UnitDelay: '<S163>/UnitDelay2' */
    KL15PwrSply_DD_DW.UnitDelay2_DSTATE_o = rtb_Switch4_mq;

    /* End of Outputs for SubSystem: '<S31>/Rear12VOnDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S31>/Rear12VOnDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S162>/Action Port'
     */
    /* FunctionCaller: '<S162>/DTC_Rear12VPowerOC_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S162>/Constant'
     */
    Rte_Call_DTC_Rear12VPowerOC_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S162>/DTC_Rear12VPowerOL_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S162>/Constant1'
     */
    Rte_Call_DTC_Rear12VPowerOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S162>/DTC_Rear12VPowerSCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S162>/Constant2'
     */
    Rte_Call_DTC_Rear12VPowerSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S31>/Rear12VOnDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S31>/Switch Case' */

  /* FunctionCaller: '<S31>/IoHwAb_IoSigDio_Do_Set' */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_KL15PwrSply09, KL15PwrSply_DD_PwrSply_stCtrl09);

  /* FunctionCaller: '<S166>/DTC_Rear12VPowerSCB_GetEventFailed' */
  Rte_Call_DTC_Rear12VPowerSCB_GetEventFailed(&rtb_DataTypeConversion2_bh);

  /* FunctionCaller: '<S166>/DTC_Rear12VPowerSCB_GetEventTested' */
  Rte_Call_DTC_Rear12VPowerSCB_GetEventTested(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S166>/DTC_Rear12VPowerOL_GetEventFailed' */
  Rte_Call_DTC_Rear12VPowerOL_GetEventFailed(&rtb_DTC_Rear12VPowerOL_GetEve_b);

  /* FunctionCaller: '<S166>/DTC_Rear12VPowerOL_GetEventTested' */
  Rte_Call_DTC_Rear12VPowerOL_GetEventTested(&rtb_DTC_Rear12VPowerOL_GetEve_j);

  /* FunctionCaller: '<S166>/DTC_Rear12VPowerSCG_GetEventFailed' */
  Rte_Call_DTC_Rear12VPowerSCG_GetEventFailed(&rtb_DTC_Rear12VPowerSCG_GetEv_i);

  /* FunctionCaller: '<S166>/DTC_Rear12VPowerSCG_GetEventTested' */
  Rte_Call_DTC_Rear12VPowerSCG_GetEventTested(&rtb_DTC_Rear12VPowerSCG_GetEv_b);

  /* FunctionCaller: '<S166>/DTC_Rear12VPowerOC_GetEventFailed' */
  Rte_Call_DTC_Rear12VPowerOC_GetEventFailed(&rtb_DTC_Rear12VPowerOC_GetEve_m);

  /* FunctionCaller: '<S166>/DTC_Rear12VPowerOC_GetEventTested' */
  Rte_Call_DTC_Rear12VPowerOC_GetEventTested(&rtb_DTC_Rear12VPowerOC_GetEve_d);

  /* Switch: '<S166>/Switch4' incorporates:
   *  Constant: '<S166>/Constant5'
   *  Constant: '<S166>/Constant59'
   *  Constant: '<S166>/Constant8'
   *  Logic: '<S166>/Logical Operator1'
   *  Logic: '<S166>/Logical Operator4'
   *  Logic: '<S166>/Logical Operator6'
   *  Logic: '<S166>/Logical Operator7'
   *  RelationalOperator: '<S166>/Relational Operator'
   *  RelationalOperator: '<S166>/Relational Operator1'
   *  Switch: '<S166>/Switch1'
   *  Switch: '<S166>/Switch5'
   *  Switch: '<S166>/Switch6'
   */
  if (rtb_DataTypeConversion2_bh && rtb_DataTypeConversion2_k && (KL15PwrSply_DD_PwrSply_stCtrl09 == 0)) {
    KL15PwrSply_DD_PwrSplyRealErr09 = 2U;
  } else if (rtb_DTC_Rear12VPowerOL_GetEve_b && rtb_DTC_Rear12VPowerOL_GetEve_j && (KL15PwrSply_DD_PwrSply_stCtrl09 == 1)) {
    /* Switch: '<S166>/Switch5' incorporates:
     *  Constant: '<S166>/Constant6'
     */
    KL15PwrSply_DD_PwrSplyRealErr09 = 3U;
  } else if (rtb_DTC_Rear12VPowerSCG_GetEv_i && rtb_DTC_Rear12VPowerSCG_GetEv_b) {
    /* Switch: '<S166>/Switch6' incorporates:
     *  Constant: '<S166>/Constant7'
     *  Switch: '<S166>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr09 = 1U;
  } else if (rtb_DTC_Rear12VPowerOC_GetEve_m && rtb_DTC_Rear12VPowerOC_GetEve_d) {
    /* Switch: '<S166>/Switch1' incorporates:
     *  Constant: '<S166>/Constant1'
     *  Switch: '<S166>/Switch5'
     *  Switch: '<S166>/Switch6'
     */
    KL15PwrSply_DD_PwrSplyRealErr09 = 4U;
  } else {
    /* Switch: '<S166>/Switch6' incorporates:
     *  Constant: '<S166>/Constant3'
     *  Switch: '<S166>/Switch1'
     *  Switch: '<S166>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr09 = 0U;
  }

  /* End of Switch: '<S166>/Switch4' */

  /* Outputs for Enabled SubSystem: '<S31>/RealErrHold' incorporates:
   *  EnablePort: '<S159>/Enable'
   */
  /* Logic: '<S31>/Logical Operator7' incorporates:
   *  Constant: '<S31>/Constant33'
   *  Constant: '<S31>/Constant34'
   *  Inport: '<S159>/stRealErr'
   *  Logic: '<S31>/Logical Operator5'
   *  Logic: '<S31>/Logical Operator6'
   *  RelationalOperator: '<S31>/Relational Operator4'
   *  RelationalOperator: '<S31>/Relational Operator5'
   *  RelationalOperator: '<S31>/Relational Operator6'
   *  UnitDelay: '<S31>/Unit Delay2'
   */
  if (((0 == KL15PwrSply_DD_PwrSplyRealErr09) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_kc != KL15PwrSply_DD_PwrSplyRealErr09) && (0 != KL15PwrSply_DD_PwrSplyRealErr09))) {
    KL15PwrSply_DD_B.stRealErr_jt = KL15PwrSply_DD_PwrSplyRealErr09;
  }

  /* End of Logic: '<S31>/Logical Operator7' */
  /* End of Outputs for SubSystem: '<S31>/RealErrHold' */

  /* SignalConversion: '<S1>/SignalConversion27' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[8] = KL15PwrSply_DD_B.stRealErr_jt;

  /* UnitDelay: '<S32>/Unit Delay4' */
  rtb_UnitDelay4_le = KL15PwrSply_DD_PwrSply_stCtrl07;

  /* S-Function (Efx_Debounce_sf): '<S175>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S175>/Reset'
   *  Constant: '<S175>/THighLow'
   *  Constant: '<S175>/X_Init'
   *  Constant: '<S32>/Constant1'
   *  Constant: '<S32>/Constant2'
   *  S-Function (Upcast_sf): '<S175>/Upcast'
   *  S-Function (Upcast_sf): '<S175>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
    rtb_Efx_Debounce_sf_d = Efx_Debounce_u8_u8(rtb_UnitDelay4_le, &RearBlowerOnDiagDly_I, &paramdebounce_loc, 10000 );
  }

  /* UnitDelay: '<S32>/Unit Delay' */
  rtb_UnitDelay_g = KL15PwrSply_DD_DW.UnitDelay_DSTATE_dr;

  /* RelationalOperator: '<S32>/Relational Operator1' incorporates:
   *  Constant: '<S32>/Constant4'
   */
  rtb_DataTypeConversion2_bh = (tmpIRead_2[6] == 1);

  /* RelationalOperator: '<S32>/Relational Operator2' incorporates:
   *  Constant: '<S32>/Constant5'
   */
  rtb_DataTypeConversion2_k = (tmpIRead_2[6] == 2);

  /* Logic: '<S32>/Logical Operator10' incorporates:
   *  Constant: '<S32>/Constant3'
   *  Logic: '<S32>/Logical Operator3'
   *  Logic: '<S32>/Logical Operator4'
   *  RelationalOperator: '<S32>/Relational Operator'
   */
  rtb_LogicalOperator10_i = ((rtb_UnitDelay_g != 0) || ((!rtb_DataTypeConversion2_bh) && (!rtb_DataTypeConversion2_k)));

  /* S-Function (Efx_Debounce_sf): '<S176>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S176>/Reset'
   *  Constant: '<S176>/THighLow'
   *  Constant: '<S176>/X_Init'
   *  Constant: '<S32>/Constant10'
   *  Constant: '<S32>/Constant9'
   *  S-Function (Upcast_sf): '<S176>/Upcast'
   *  S-Function (Upcast_sf): '<S176>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
    rtb_DataTypeConversion2_bh = Efx_Debounce_u8_u8(rtb_LogicalOperator10_i, &RearBlowerOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S32>/DTC_RearBlowerPowerSCG_GetEventFailed' */
  Rte_Call_DTC_RearBlowerPowerSCG_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S32>/DTC_RearBlowerPowerSCG_GetEventTested' */
  Rte_Call_DTC_RearBlowerPowerSCG_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Logic: '<S32>/Logical Operator14' */
  rtb_DTC_Rear12VPowerOL_GetEve_b = (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd);

  /* FunctionCaller: '<S32>/DTC_RearBlowerPowerOC_GetEventFailed' */
  Rte_Call_DTC_RearBlowerPowerOC_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S32>/DTC_RearBlowerPowerOC_GetEventTested' */
  Rte_Call_DTC_RearBlowerPowerOC_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Switch: '<S32>/Switch' incorporates:
   *  Constant: '<S32>/Constant'
   *  Inport: '<Root>/KL15PwrSply_bRearBlowerPowerTrigUds_Val'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   *  Logic: '<S32>/Logical Operator13'
   *  Logic: '<S32>/Logical Operator15'
   *  Logic: '<S32>/Logical Operator8'
   *  Logic: '<S32>/Logical Operator9'
   *  MultiPortSwitch: '<S32>/MultiportSwitch11'
   *  Switch: '<S32>/Switch1'
   *  Switch: '<S32>/Switch41'
   *  UnitDelay: '<S32>/Unit Delay3'
   */
  if ((rtb_DTC_Rear12VPowerOL_GetEve_b || (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd)) && rtb_DataTypeConversion2_bh) {
    KL15PwrSply_DD_PwrSply_stCtrl07 = 0U;
  } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bRearBlowerPowerTrigUds_Val()) {
    /* Switch: '<S32>/Switch1' incorporates:
     *  Inport: '<Root>/KL15PwrSply_u8stRearBlowerPowerUds_Val'
     */
    KL15PwrSply_DD_PwrSply_stCtrl07 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stRearBlowerPowerUds_Val();
  } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S32>/MultiportSwitch11' incorporates:
     *  Switch: '<S32>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl07 = tmpIRead_1[6];
  } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_iy && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
    /* Switch: '<S32>/Switch41' incorporates:
     *  Constant: '<S32>/Constant27'
     *  MultiPortSwitch: '<S32>/MultiportSwitch11'
     *  Switch: '<S32>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl07 = 1U;
  } else {
    /* MultiPortSwitch: '<S32>/MultiportSwitch11' incorporates:
     *  Switch: '<S32>/Switch1'
     *  Switch: '<S32>/Switch41'
     */
    KL15PwrSply_DD_PwrSply_stCtrl07 = tmpIRead_1[6];
  }

  /* End of Switch: '<S32>/Switch' */

  /* Logic: '<S32>/Logical Operator1' incorporates:
   *  Logic: '<S32>/Logical Operator2'
   */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (KL15PwrSply_DD_PwrSply_stCtrl07 == 0));

  /* FunctionCaller: '<S32>/IoHwAb_IoDiagDo_Do_Get' */
  Rte_Call_IoHwAb_IoDiagDo_Do_Get(O_S_KL15PwrSply07, &KL15PwrSply_D_PwrSplyDiag07_Get);

  /* SwitchCase: '<S32>/Switch Case1' incorporates:
   *  DataTypeConversion: '<S32>/DataTypeConversion1'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S32>/RearBlowerOffDiagErr_Set' incorporates:
     *  ActionPort: '<S172>/Action Port'
     */
    /* Switch: '<S172>/Switch1' incorporates:
     *  Constant: '<S172>/Constant5'
     *  Constant: '<S172>/Constant6'
     *  DataTypeConversion: '<S178>/Extract Desired Bits'
     */
    if (((uint8)KL15PwrSply_D_PwrSplyDiag07_Get & 1U) != 0U) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S172>/Switch1' */

    /* FunctionCaller: '<S172>/DTC_RearBlowerPowerSCB_SetEventStatus' */
    Rte_Call_DTC_RearBlowerPowerSCB_SetEventStatus(rtb_Switch4_k3);

    /* End of Outputs for SubSystem: '<S32>/RearBlowerOffDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S32>/RearBlowerOffDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S171>/Action Port'
     */
    /* FunctionCaller: '<S171>/DTC_RearBlowerPowerSCB_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S171>/Constant'
     */
    Rte_Call_DTC_RearBlowerPowerSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S32>/RearBlowerOffDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S32>/Switch Case1' */

  /* FunctionCaller: '<S32>/IoHwAb_IoSigAdc_Adc_Get' */
  Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol07, &KL15PwrSply_DD_PwrVol07_Get);

  /* Product: '<S32>/Divide1' */
  KL15PwrSply_DD_PwrCurr07_Calc = (float32)KL15PwrSply_DD_PwrVol07_Get / 1780.0F * 27950.0F;

  /* RelationalOperator: '<S32>/Relational Operator7' */
  rtb_DataTypeConversion2_bh = (KL15PwrSply_DD_PwrCurr07_Calc > tmpIRead_0[6]);

  /* Logic: '<S32>/Logical Operator11' */
  rtb_DTC_Rear12VPowerOL_GetEve_b = (rtb_DataTypeConversion2_bh && (rtb_Efx_Debounce_sf_d != 0));

  /* Logic: '<S32>/Logical Operator' */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_d != 0));

  /* SwitchCase: '<S32>/Switch Case' incorporates:
   *  DataTypeConversion: '<S32>/DataTypeConversion'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S32>/RearBlowerOnDiagErr_Set' incorporates:
     *  ActionPort: '<S174>/Action Port'
     */
    /* Switch: '<S174>/Switch8' incorporates:
     *  Constant: '<S174>/Constant'
     *  Constant: '<S174>/Constant13'
     *  DataTypeConversion: '<S174>/DataTypeConversion1'
     *  DataTypeConversion: '<S179>/Extract Desired Bits'
     */
    if (OLFaultBypass) {
      rtb_DTC_RLALampCtlUnitPowerOC_m = false;
    } else {
      rtb_DTC_RLALampCtlUnitPowerOC_m = (((uint8)(KL15PwrSply_D_PwrSplyDiag07_Get >> 3) & 1U) != 0U);
    }

    /* End of Switch: '<S174>/Switch8' */

    /* Switch: '<S174>/Switch1' incorporates:
     *  Constant: '<S174>/Constant3'
     *  Constant: '<S174>/Constant4'
     */
    if (rtb_DTC_RLALampCtlUnitPowerOC_m) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S174>/Switch1' */

    /* FunctionCaller: '<S174>/DTC_RearBlowerPowerOL_SetEventStatus' */
    Rte_Call_DTC_RearBlowerPowerOL_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S174>/Switch' incorporates:
     *  Constant: '<S174>/Constant1'
     *  Constant: '<S174>/Constant2'
     *  DataTypeConversion: '<S174>/DataTypeConversion'
     *  DataTypeConversion: '<S180>/Extract Desired Bits'
     */
    if (((uint8)(KL15PwrSply_D_PwrSplyDiag07_Get >> 1) & 1) << 1 != 0) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S174>/Switch' */

    /* FunctionCaller: '<S174>/DTC_RearBlowerPowerSCG_SetEventStatus' */
    Rte_Call_DTC_RearBlowerPowerSCG_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S174>/Switch4' incorporates:
     *  Constant: '<S174>/Constant10'
     *  Constant: '<S174>/Constant9'
     *  Sum: '<S174>/Add2'
     *  UnitDelay: '<S174>/UnitDelay2'
     */
    if (rtb_DTC_Rear12VPowerOL_GetEve_b) {
      rtb_Switch4_mq = Mfx_Add_u16u16_u16(KL15PwrSply_DD_DW.UnitDelay2_DSTATE_l, 10U);
    } else {
      rtb_Switch4_mq = 0U;
    }

    /* End of Switch: '<S174>/Switch4' */

    /* Switch: '<S174>/Switch3' incorporates:
     *  Constant: '<S174>/Constant7'
     *  Constant: '<S174>/Constant8'
     *  RelationalOperator: '<S174>/RelationalOperator2'
     */
    if (rtb_Switch4_mq > tmpIRead[6]) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_FAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PASSED;
    }

    /* End of Switch: '<S174>/Switch3' */

    /* FunctionCaller: '<S174>/DTC_RearBlowerPowerOC_SetEventStatus' */
    Rte_Call_DTC_RearBlowerPowerOC_SetEventStatus(rtb_Switch4_k3);

    /* Update for UnitDelay: '<S174>/UnitDelay2' */
    KL15PwrSply_DD_DW.UnitDelay2_DSTATE_l = rtb_Switch4_mq;

    /* End of Outputs for SubSystem: '<S32>/RearBlowerOnDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S32>/RearBlowerOnDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S173>/Action Port'
     */
    /* FunctionCaller: '<S173>/DTC_RearBlowerPowerSCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S173>/Constant'
     */
    Rte_Call_DTC_RearBlowerPowerSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S173>/DTC_RearBlowerPowerOL_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S173>/Constant1'
     */
    Rte_Call_DTC_RearBlowerPowerOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S173>/DTC_RearBlowerPowerOC_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S173>/Constant2'
     */
    Rte_Call_DTC_RearBlowerPowerOC_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S32>/RearBlowerOnDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S32>/Switch Case' */

  /* FunctionCaller: '<S32>/IoHwAb_IoSigDio_Do_Set' */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_KL15PwrSply07, KL15PwrSply_DD_PwrSply_stCtrl07);

  /* FunctionCaller: '<S177>/DTC_RearBlowerPowerSCB_GetEventFailed' */
  Rte_Call_DTC_RearBlowerPowerSCB_GetEventFailed(&rtb_DataTypeConversion2_bh);

  /* FunctionCaller: '<S177>/DTC_RearBlowerPowerSCB_GetEventTested' */
  Rte_Call_DTC_RearBlowerPowerSCB_GetEventTested(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S177>/DTC_RearBlowerPowerOL_GetEventFailed' */
  Rte_Call_DTC_RearBlowerPowerOL_GetEventFailed(&rtb_DTC_RearBlowerPowerOL_Get_k);

  /* FunctionCaller: '<S177>/DTC_RearBlowerPowerOL_GetEventTested' */
  Rte_Call_DTC_RearBlowerPowerOL_GetEventTested(&rtb_DTC_RearBlowerPowerOL_Get_b);

  /* FunctionCaller: '<S177>/DTC_RearBlowerPowerSCG_GetEventFailed' */
  Rte_Call_DTC_RearBlowerPowerSCG_GetEventFailed(&rtb_DTC_RearBlowerPowerSCG_Ge_f);

  /* FunctionCaller: '<S177>/DTC_RearBlowerPowerSCG_GetEventTested' */
  Rte_Call_DTC_RearBlowerPowerSCG_GetEventTested(&rtb_DTC_RearBlowerPowerSCG_G_kd);

  /* FunctionCaller: '<S177>/DTC_RearBlowerPowerOC_GetEventFailed' */
  Rte_Call_DTC_RearBlowerPowerOC_GetEventFailed(&rtb_DTC_RearBlowerPowerOC_Ge_op);

  /* FunctionCaller: '<S177>/DTC_RearBlowerPowerOC_GetEventTested' */
  Rte_Call_DTC_RearBlowerPowerOC_GetEventTested(&rtb_DTC_RearBlowerPowerOC_Get_o);

  /* Switch: '<S177>/Switch4' incorporates:
   *  Constant: '<S177>/Constant5'
   *  Constant: '<S177>/Constant59'
   *  Constant: '<S177>/Constant8'
   *  Logic: '<S177>/Logical Operator1'
   *  Logic: '<S177>/Logical Operator4'
   *  Logic: '<S177>/Logical Operator6'
   *  Logic: '<S177>/Logical Operator7'
   *  RelationalOperator: '<S177>/Relational Operator'
   *  RelationalOperator: '<S177>/Relational Operator1'
   *  Switch: '<S177>/Switch1'
   *  Switch: '<S177>/Switch5'
   *  Switch: '<S177>/Switch6'
   */
  if (rtb_DataTypeConversion2_bh && rtb_DataTypeConversion2_k && (KL15PwrSply_DD_PwrSply_stCtrl07 == 0)) {
    KL15PwrSply_DD_PwrSplyRealErr07 = 2U;
  } else if (rtb_DTC_RearBlowerPowerOL_Get_k && rtb_DTC_RearBlowerPowerOL_Get_b && (KL15PwrSply_DD_PwrSply_stCtrl07 == 1)) {
    /* Switch: '<S177>/Switch5' incorporates:
     *  Constant: '<S177>/Constant6'
     */
    KL15PwrSply_DD_PwrSplyRealErr07 = 3U;
  } else if (rtb_DTC_RearBlowerPowerSCG_Ge_f && rtb_DTC_RearBlowerPowerSCG_G_kd) {
    /* Switch: '<S177>/Switch6' incorporates:
     *  Constant: '<S177>/Constant7'
     *  Switch: '<S177>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr07 = 1U;
  } else if (rtb_DTC_RearBlowerPowerOC_Ge_op && rtb_DTC_RearBlowerPowerOC_Get_o) {
    /* Switch: '<S177>/Switch1' incorporates:
     *  Constant: '<S177>/Constant1'
     *  Switch: '<S177>/Switch5'
     *  Switch: '<S177>/Switch6'
     */
    KL15PwrSply_DD_PwrSplyRealErr07 = 4U;
  } else {
    /* Switch: '<S177>/Switch6' incorporates:
     *  Constant: '<S177>/Constant3'
     *  Switch: '<S177>/Switch1'
     *  Switch: '<S177>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr07 = 0U;
  }

  /* End of Switch: '<S177>/Switch4' */

  /* Outputs for Enabled SubSystem: '<S32>/RealErrHold' incorporates:
   *  EnablePort: '<S170>/Enable'
   */
  /* Logic: '<S32>/Logical Operator7' incorporates:
   *  Constant: '<S32>/Constant33'
   *  Constant: '<S32>/Constant34'
   *  Inport: '<S170>/stRealErr'
   *  Logic: '<S32>/Logical Operator5'
   *  Logic: '<S32>/Logical Operator6'
   *  RelationalOperator: '<S32>/Relational Operator4'
   *  RelationalOperator: '<S32>/Relational Operator5'
   *  RelationalOperator: '<S32>/Relational Operator6'
   *  UnitDelay: '<S32>/Unit Delay2'
   */
  if (((0 == KL15PwrSply_DD_PwrSplyRealErr07) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_im != KL15PwrSply_DD_PwrSplyRealErr07) && (0 != KL15PwrSply_DD_PwrSplyRealErr07))) {
    KL15PwrSply_DD_B.stRealErr_g = KL15PwrSply_DD_PwrSplyRealErr07;
  }

  /* End of Logic: '<S32>/Logical Operator7' */
  /* End of Outputs for SubSystem: '<S32>/RealErrHold' */

  /* SignalConversion: '<S1>/SignalConversion25' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[6] = KL15PwrSply_DD_B.stRealErr_g;

  /* UnitDelay: '<S33>/Unit Delay4' */
  rtb_UnitDelay4_m = KL15PwrSply_DD_PwrSply_stCtrl03;

  /* S-Function (Efx_Debounce_sf): '<S184>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S184>/Reset'
   *  Constant: '<S184>/THighLow'
   *  Constant: '<S184>/X_Init'
   *  Constant: '<S33>/Constant1'
   *  Constant: '<S33>/Constant2'
   *  S-Function (Upcast_sf): '<S184>/Upcast'
   *  S-Function (Upcast_sf): '<S184>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
    rtb_Efx_Debounce_sf_d = Efx_Debounce_u8_u8(rtb_UnitDelay4_m, &RearCtrlPanelOnDiagDly_I, &paramdebounce_loc, 10000 );
  }

  /* UnitDelay: '<S33>/Unit Delay' */
  rtb_UnitDelay_g = KL15PwrSply_DD_DW.UnitDelay_DSTATE_drb;

  /* RelationalOperator: '<S33>/Relational Operator1' incorporates:
   *  Constant: '<S33>/Constant4'
   */
  rtb_DataTypeConversion2_bh = (tmpIRead_2[2] == 1);

  /* Logic: '<S33>/Logical Operator10' incorporates:
   *  Constant: '<S33>/Constant3'
   *  Constant: '<S33>/Constant5'
   *  Logic: '<S33>/Logical Operator3'
   *  Logic: '<S33>/Logical Operator4'
   *  RelationalOperator: '<S33>/Relational Operator'
   *  RelationalOperator: '<S33>/Relational Operator2'
   */
  rtb_LogicalOperator10_e = ((rtb_UnitDelay_g != 0) || ((!rtb_DataTypeConversion2_bh) && (tmpIRead_2[2] != 2)));

  /* S-Function (Efx_Debounce_sf): '<S185>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S185>/Reset'
   *  Constant: '<S185>/THighLow'
   *  Constant: '<S185>/X_Init'
   *  Constant: '<S33>/Constant10'
   *  Constant: '<S33>/Constant9'
   *  S-Function (Upcast_sf): '<S185>/Upcast'
   *  S-Function (Upcast_sf): '<S185>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
    rtb_DataTypeConversion2_bh = Efx_Debounce_u8_u8(rtb_LogicalOperator10_e, &RearCtrlPanelOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S33>/IoHwAb_IoDiagDo_Do_Get' */
  Rte_Call_IoHwAb_IoDiagDo_Do_Get(O_S_KL15PwrSply03, &KL15PwrSply_D_PwrSplyDiag03_Get);

  /* FunctionCaller: '<S33>/IoHwAb_IoSigAdc_Adc_Get' */
  Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol03, &KL15PwrSply_DD_PwrVol03_Get);

  /* Product: '<S33>/Divide1' */
  KL15PwrSply_DD_PwrCurr03_Calc = (float32)KL15PwrSply_DD_PwrVol03_Get / 1780.0F * 1800.0F;

  /* SwitchCase: '<S33>/Switch Case' incorporates:
   *  Logic: '<S33>/Logical Operator'
   *  Logic: '<S33>/Logical Operator11'
   *  RelationalOperator: '<S33>/Relational Operator7'
   */
  if (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_d != 0)) {
    /* Outputs for IfAction SubSystem: '<S33>/RearCtrlPanelOnDiagErr_Set' incorporates:
     *  ActionPort: '<S183>/Action Port'
     */
    KL15PwrSply_KL15T1OnDiagErr_Set(KL15PwrSply_D_PwrSplyDiag03_Get, (KL15PwrSply_DD_PwrCurr03_Calc > tmpIRead_0[2]) && (rtb_Efx_Debounce_sf_d != 0), tmpIRead[2], &KL15PwrSply_DD_B.RelationalOperator, &KL15PwrSply_DD_B.RelationalOperator1_a, &KL15PwrSply_DD_B.RelationalOperator2, &KL15PwrSply_DD_DW.RearCtrlPanelOnDiagErr_Set);

    /* End of Outputs for SubSystem: '<S33>/RearCtrlPanelOnDiagErr_Set' */
  }

  /* End of SwitchCase: '<S33>/Switch Case' */

  /* Switch: '<S33>/Switch' incorporates:
   *  Constant: '<S33>/Constant'
   *  Inport: '<Root>/KL15PwrSply_bRearCtrlPanelPowerTrigUds_Val'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   *  Logic: '<S33>/Logical Operator13'
   *  Logic: '<S33>/Logical Operator8'
   *  Logic: '<S33>/Logical Operator9'
   *  MultiPortSwitch: '<S33>/MultiportSwitch11'
   *  Switch: '<S33>/Switch1'
   *  Switch: '<S33>/Switch41'
   *  UnitDelay: '<S33>/Unit Delay3'
   */
  if ((KL15PwrSply_DD_B.RelationalOperator || KL15PwrSply_DD_B.RelationalOperator2) && rtb_DataTypeConversion2_bh) {
    KL15PwrSply_DD_PwrSply_stCtrl03 = 0U;
  } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bRearCtrlPanelPowerTrigUds_Val()) {
    /* Switch: '<S33>/Switch1' incorporates:
     *  Inport: '<Root>/KL15PwrSply_u8stRearCtrlPanelPowerUds_Val'
     */
    KL15PwrSply_DD_PwrSply_stCtrl03 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stRearCtrlPanelPowerUds_Val();
  } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S33>/MultiportSwitch11' incorporates:
     *  Switch: '<S33>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl03 = tmpIRead_1[2];
  } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_h && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
    /* Switch: '<S33>/Switch41' incorporates:
     *  Constant: '<S33>/Constant27'
     *  MultiPortSwitch: '<S33>/MultiportSwitch11'
     *  Switch: '<S33>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl03 = 1U;
  } else {
    /* MultiPortSwitch: '<S33>/MultiportSwitch11' incorporates:
     *  Switch: '<S33>/Switch1'
     *  Switch: '<S33>/Switch41'
     */
    KL15PwrSply_DD_PwrSply_stCtrl03 = tmpIRead_1[2];
  }

  /* End of Switch: '<S33>/Switch' */

  /* Logic: '<S33>/Logical Operator1' incorporates:
   *  Logic: '<S33>/Logical Operator2'
   */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (KL15PwrSply_DD_PwrSply_stCtrl03 == 0));

  /* FunctionCaller: '<S33>/IoHwAb_IoSigDio_Do_Set' */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_KL15PwrSply03, KL15PwrSply_DD_PwrSply_stCtrl03);

  /* SwitchCase: '<S33>/Switch Case1' incorporates:
   *  DataTypeConversion: '<S33>/DataTypeConversion1'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S33>/RearCtrlPanelOffDiagErr_Set' incorporates:
     *  ActionPort: '<S182>/Action Port'
     */
    KL15PwrSpl_KL15T1OffDiagErr_Set(KL15PwrSply_D_PwrSplyDiag03_Get, &KL15PwrSply_DD_B.RelationalOperator1, &KL15PwrSply_DD_DW.RearCtrlPanelOffDiagErr_Set);

    /* End of Outputs for SubSystem: '<S33>/RearCtrlPanelOffDiagErr_Set' */
  }

  /* End of SwitchCase: '<S33>/Switch Case1' */

  /* Switch: '<S186>/Switch4' incorporates:
   *  Constant: '<S186>/Constant5'
   *  Constant: '<S186>/Constant59'
   *  Constant: '<S186>/Constant8'
   *  Logic: '<S186>/Logical Operator4'
   *  Logic: '<S186>/Logical Operator7'
   *  RelationalOperator: '<S186>/Relational Operator'
   *  RelationalOperator: '<S186>/Relational Operator1'
   *  Switch: '<S186>/Switch1'
   *  Switch: '<S186>/Switch5'
   *  Switch: '<S186>/Switch6'
   */
  if (KL15PwrSply_DD_B.RelationalOperator1 && (KL15PwrSply_DD_PwrSply_stCtrl03 == 0)) {
    KL15PwrSply_DD_PwrSplyRealErr03 = 2U;
  } else if (KL15PwrSply_DD_B.RelationalOperator1_a && (KL15PwrSply_DD_PwrSply_stCtrl03 == 1)) {
    /* Switch: '<S186>/Switch5' incorporates:
     *  Constant: '<S186>/Constant6'
     */
    KL15PwrSply_DD_PwrSplyRealErr03 = 3U;
  } else if (KL15PwrSply_DD_B.RelationalOperator) {
    /* Switch: '<S186>/Switch6' incorporates:
     *  Constant: '<S186>/Constant7'
     *  Switch: '<S186>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr03 = 1U;
  } else if (KL15PwrSply_DD_B.RelationalOperator2) {
    /* Switch: '<S186>/Switch1' incorporates:
     *  Constant: '<S186>/Constant1'
     *  Switch: '<S186>/Switch5'
     *  Switch: '<S186>/Switch6'
     */
    KL15PwrSply_DD_PwrSplyRealErr03 = 4U;
  } else {
    /* Switch: '<S186>/Switch6' incorporates:
     *  Constant: '<S186>/Constant3'
     *  Switch: '<S186>/Switch1'
     *  Switch: '<S186>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr03 = 0U;
  }

  /* End of Switch: '<S186>/Switch4' */

  /* Outputs for Enabled SubSystem: '<S33>/RealErrHold' incorporates:
   *  EnablePort: '<S181>/Enable'
   */
  /* Logic: '<S33>/Logical Operator7' incorporates:
   *  Constant: '<S33>/Constant33'
   *  Constant: '<S33>/Constant34'
   *  Inport: '<S181>/stRealErr'
   *  Logic: '<S33>/Logical Operator5'
   *  Logic: '<S33>/Logical Operator6'
   *  RelationalOperator: '<S33>/Relational Operator4'
   *  RelationalOperator: '<S33>/Relational Operator5'
   *  RelationalOperator: '<S33>/Relational Operator6'
   *  UnitDelay: '<S33>/Unit Delay2'
   */
  if (((0 == KL15PwrSply_DD_PwrSplyRealErr03) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_dq != KL15PwrSply_DD_PwrSplyRealErr03) && (0 != KL15PwrSply_DD_PwrSplyRealErr03))) {
    KL15PwrSply_DD_B.stRealErr_j = KL15PwrSply_DD_PwrSplyRealErr03;
  }

  /* End of Logic: '<S33>/Logical Operator7' */
  /* End of Outputs for SubSystem: '<S33>/RealErrHold' */

  /* SignalConversion: '<S1>/SignalConversion21' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[2] = KL15PwrSply_DD_B.stRealErr_j;

  /* UnitDelay: '<S37>/Unit Delay4' */
  rtb_UnitDelay4_k = KL15PwrSply_DD_DW.UnitDelay4_DSTATE_i;

  /* S-Function (Efx_Debounce_sf): '<S206>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S206>/Reset'
   *  Constant: '<S206>/THighLow'
   *  Constant: '<S206>/X_Init'
   *  Constant: '<S37>/Constant1'
   *  Constant: '<S37>/Constant2'
   *  S-Function (Upcast_sf): '<S206>/Upcast'
   *  S-Function (Upcast_sf): '<S206>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
    rtb_Efx_Debounce_sf_d = Efx_Debounce_u8_u8(rtb_UnitDelay4_k, &RearMotorOnDiagDly_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S37>/IoHwAb_IoDiagDo_Do_Get' */
  Rte_Call_IoHwAb_IoDiagDo_Do_Get(O_S_KL15PwrSply25, &KL15PwrSply_D_PwrSplyDiag25_Get);

  /* Logic: '<S37>/Logical Operator1' incorporates:
   *  Logic: '<S37>/Logical Operator2'
   */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (KL15PwrSply_DD_PwrSply_stCtrl25 == 0));

  /* SwitchCase: '<S37>/Switch Case1' incorporates:
   *  DataTypeConversion: '<S37>/DataTypeConversion1'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S37>/RearMotorOffDiagErr_Set' incorporates:
     *  ActionPort: '<S203>/Action Port'
     */
    /* Switch: '<S203>/Switch1' incorporates:
     *  Constant: '<S203>/Constant5'
     *  Constant: '<S203>/Constant6'
     *  DataTypeConversion: '<S209>/Extract Desired Bits'
     */
    if (((uint8)KL15PwrSply_D_PwrSplyDiag25_Get & 1U) != 0U) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S203>/Switch1' */

    /* FunctionCaller: '<S203>/DTC_RearMotorPowerSCB_SetEventStatus' */
    Rte_Call_DTC_RearMotorPowerSCB_SetEventStatus(rtb_Switch4_k3);

    /* End of Outputs for SubSystem: '<S37>/RearMotorOffDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S37>/RearMotorOffDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S202>/Action Port'
     */
    /* FunctionCaller: '<S202>/DTC_RearMotorPowerSCB_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S202>/Constant'
     */
    Rte_Call_DTC_RearMotorPowerSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S37>/RearMotorOffDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S37>/Switch Case1' */

  /* FunctionCaller: '<S37>/IoHwAb_IoSigAdc_Adc_Get' */
  Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol25, &KL15PwrSply_DD_PwrVol25_Get);

  /* Product: '<S37>/Divide1' */
  KL15PwrSply_DD_PwrCurr25_Calc = (float32)KL15PwrSply_DD_PwrVol25_Get / 1780.0F * 5500.0F;

  /* RelationalOperator: '<S37>/Relational Operator7' */
  rtb_DataTypeConversion2_bh = (KL15PwrSply_DD_PwrCurr25_Calc > tmpIRead_0[22]);

  /* Logic: '<S37>/Logical Operator11' */
  rtb_DataTypeConversion2_k = (rtb_DataTypeConversion2_bh && (rtb_Efx_Debounce_sf_d != 0));

  /* Logic: '<S37>/Logical Operator' */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_d != 0));

  /* SwitchCase: '<S37>/Switch Case' incorporates:
   *  DataTypeConversion: '<S37>/DataTypeConversion'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S37>/RearMotorOnDiagErr_Set' incorporates:
     *  ActionPort: '<S205>/Action Port'
     */
    /* Switch: '<S205>/Switch8' incorporates:
     *  Constant: '<S205>/Constant'
     *  Constant: '<S205>/Constant13'
     *  DataTypeConversion: '<S205>/DataTypeConversion'
     *  DataTypeConversion: '<S210>/Extract Desired Bits'
     */
    if (OLFaultBypass) {
      rtb_DTC_RLALampCtlUnitPowerOC_m = false;
    } else {
      rtb_DTC_RLALampCtlUnitPowerOC_m = (((uint8)(KL15PwrSply_D_PwrSplyDiag25_Get >> 3) & 1U) != 0U);
    }

    /* End of Switch: '<S205>/Switch8' */

    /* Switch: '<S205>/Switch1' incorporates:
     *  Constant: '<S205>/Constant3'
     *  Constant: '<S205>/Constant4'
     */
    if (rtb_DTC_RLALampCtlUnitPowerOC_m) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S205>/Switch1' */

    /* FunctionCaller: '<S205>/DTC_RearMotorPowerOL_SetEventStatus' */
    Rte_Call_DTC_RearMotorPowerOL_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S205>/Switch' incorporates:
     *  Constant: '<S205>/Constant1'
     *  Constant: '<S205>/Constant2'
     *  DataTypeConversion: '<S205>/DataTypeConversion1'
     *  DataTypeConversion: '<S211>/Extract Desired Bits'
     */
    if (((uint8)(KL15PwrSply_D_PwrSplyDiag25_Get >> 1) & 1) << 1 != 0) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S205>/Switch' */

    /* FunctionCaller: '<S205>/DTC_RearMotorPowerSCG_SetEventStatus' */
    Rte_Call_DTC_RearMotorPowerSCG_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S205>/Switch4' incorporates:
     *  Constant: '<S205>/Constant10'
     *  Constant: '<S205>/Constant9'
     *  Sum: '<S205>/Add2'
     *  UnitDelay: '<S205>/UnitDelay2'
     */
    if (rtb_DataTypeConversion2_k) {
      rtb_Switch4_mq = Mfx_Add_u16u16_u16(KL15PwrSply_DD_DW.UnitDelay2_DSTATE_e, 10U);
    } else {
      rtb_Switch4_mq = 0U;
    }

    /* End of Switch: '<S205>/Switch4' */

    /* Switch: '<S205>/Switch3' incorporates:
     *  Constant: '<S205>/Constant7'
     *  Constant: '<S205>/Constant8'
     *  RelationalOperator: '<S205>/RelationalOperator2'
     */
    if (rtb_Switch4_mq > tmpIRead[22]) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_FAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PASSED;
    }

    /* End of Switch: '<S205>/Switch3' */

    /* FunctionCaller: '<S205>/DTC_RearMotorPowerOC_SetEventStatus' */
    Rte_Call_DTC_RearMotorPowerOC_SetEventStatus(rtb_Switch4_k3);

    /* Update for UnitDelay: '<S205>/UnitDelay2' */
    KL15PwrSply_DD_DW.UnitDelay2_DSTATE_e = rtb_Switch4_mq;

    /* End of Outputs for SubSystem: '<S37>/RearMotorOnDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S37>/RearMotorOnDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S204>/Action Port'
     */
    /* FunctionCaller: '<S204>/DTC_RearMotorPowerOC_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S204>/Constant'
     */
    Rte_Call_DTC_RearMotorPowerOC_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S204>/DTC_RearMotorPowerOL_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S204>/Constant1'
     */
    Rte_Call_DTC_RearMotorPowerOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S204>/DTC_RearMotorPowerSCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S204>/Constant2'
     */
    Rte_Call_DTC_RearMotorPowerSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S37>/RearMotorOnDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S37>/Switch Case' */

  /* FunctionCaller: '<S37>/IoHwAb_IoSigDio_Do_Set' */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_KL15PwrSply25, KL15PwrSply_DD_PwrSply_stCtrl25);

  /* UnitDelay: '<S38>/Unit Delay4' */
  rtb_UnitDelay4_c = KL15PwrSply_DD_PwrSply_stCtrl06;

  /* S-Function (Efx_Debounce_sf): '<S217>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S217>/Reset'
   *  Constant: '<S217>/THighLow'
   *  Constant: '<S217>/X_Init'
   *  Constant: '<S38>/Constant1'
   *  Constant: '<S38>/Constant2'
   *  S-Function (Upcast_sf): '<S217>/Upcast'
   *  S-Function (Upcast_sf): '<S217>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
    rtb_Efx_Debounce_sf_d = Efx_Debounce_u8_u8(rtb_UnitDelay4_c, &RearRadarOnDiagDly_I, &paramdebounce_loc, 10000 );
  }

  /* UnitDelay: '<S38>/Unit Delay' */
  rtb_UnitDelay_g = KL15PwrSply_DD_DW.UnitDelay_DSTATE_a;

  /* RelationalOperator: '<S38>/Relational Operator1' incorporates:
   *  Constant: '<S38>/Constant4'
   */
  rtb_DataTypeConversion2_bh = (tmpIRead_2[5] == 1);

  /* RelationalOperator: '<S38>/Relational Operator2' incorporates:
   *  Constant: '<S38>/Constant5'
   */
  rtb_DataTypeConversion2_k = (tmpIRead_2[5] == 2);

  /* Logic: '<S38>/Logical Operator10' incorporates:
   *  Constant: '<S38>/Constant3'
   *  Logic: '<S38>/Logical Operator3'
   *  Logic: '<S38>/Logical Operator4'
   *  RelationalOperator: '<S38>/Relational Operator'
   */
  rtb_LogicalOperator10_nm = ((rtb_UnitDelay_g != 0) || ((!rtb_DataTypeConversion2_bh) && (!rtb_DataTypeConversion2_k)));

  /* S-Function (Efx_Debounce_sf): '<S218>/Efx_Debounce_sf' incorporates:
   *  Constant: '<S218>/Reset'
   *  Constant: '<S218>/THighLow'
   *  Constant: '<S218>/X_Init'
   *  Constant: '<S38>/Constant10'
   *  Constant: '<S38>/Constant9'
   *  S-Function (Upcast_sf): '<S218>/Upcast'
   *  S-Function (Upcast_sf): '<S218>/Upcast1'
   */
  {
    Efx_DebounceParam_Type paramdebounce_loc;
    Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
    rtb_DataTypeConversion2_bh = Efx_Debounce_u8_u8(rtb_LogicalOperator10_nm, &RearRadarOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
  }

  /* FunctionCaller: '<S38>/DTC_RearRadarPowerSCG_GetEventFailed' */
  Rte_Call_DTC_RearRadarPowerSCG_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S38>/DTC_RearRadarPowerSCG_GetEventTested' */
  Rte_Call_DTC_RearRadarPowerSCG_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Logic: '<S38>/Logical Operator14' */
  rtb_DTC_RearBlowerPowerOL_Get_k = (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd);

  /* FunctionCaller: '<S38>/DTC_RearRadarPowerOC_GetEventFailed' */
  Rte_Call_DTC_RearRadarPowerOC_GetEventFailed(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S38>/DTC_RearRadarPowerOC_GetEventTested' */
  Rte_Call_DTC_RearRadarPowerOC_GetEventTested(&rtb_DataTypeConversion2_jd);

  /* Switch: '<S38>/Switch' incorporates:
   *  Constant: '<S38>/Constant'
   *  Inport: '<Root>/KL15PwrSply_bRearRadarPowerTrigUds_Val'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
   *  Logic: '<S38>/Logical Operator13'
   *  Logic: '<S38>/Logical Operator15'
   *  Logic: '<S38>/Logical Operator8'
   *  Logic: '<S38>/Logical Operator9'
   *  MultiPortSwitch: '<S38>/MultiportSwitch11'
   *  Switch: '<S38>/Switch1'
   *  Switch: '<S38>/Switch41'
   *  UnitDelay: '<S38>/Unit Delay3'
   */
  if ((rtb_DTC_RearBlowerPowerOL_Get_k || (rtb_DataTypeConversion2_k && rtb_DataTypeConversion2_jd)) && rtb_DataTypeConversion2_bh) {
    KL15PwrSply_DD_PwrSply_stCtrl06 = 0U;
  } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bRearRadarPowerTrigUds_Val()) {
    /* Switch: '<S38>/Switch1' incorporates:
     *  Inport: '<Root>/KL15PwrSply_u8stRearRadarPowerUds_Val'
     */
    KL15PwrSply_DD_PwrSply_stCtrl06 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stRearRadarPowerUds_Val();
  } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
    /* MultiPortSwitch: '<S38>/MultiportSwitch11' incorporates:
     *  Switch: '<S38>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl06 = tmpIRead_1[5];
  } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_jp && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
    /* Switch: '<S38>/Switch41' incorporates:
     *  Constant: '<S38>/Constant27'
     *  MultiPortSwitch: '<S38>/MultiportSwitch11'
     *  Switch: '<S38>/Switch1'
     */
    KL15PwrSply_DD_PwrSply_stCtrl06 = 1U;
  } else {
    /* MultiPortSwitch: '<S38>/MultiportSwitch11' incorporates:
     *  Switch: '<S38>/Switch1'
     *  Switch: '<S38>/Switch41'
     */
    KL15PwrSply_DD_PwrSply_stCtrl06 = tmpIRead_1[5];
  }

  /* End of Switch: '<S38>/Switch' */

  /* Logic: '<S38>/Logical Operator1' incorporates:
   *  Logic: '<S38>/Logical Operator2'
   */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (KL15PwrSply_DD_PwrSply_stCtrl06 == 0));

  /* FunctionCaller: '<S38>/IoHwAb_IoDiagDo_Do_Get' */
  Rte_Call_IoHwAb_IoDiagDo_Do_Get(O_S_KL15PwrSply06, &KL15PwrSply_D_PwrSplyDiag06_Get);

  /* SwitchCase: '<S38>/Switch Case1' incorporates:
   *  DataTypeConversion: '<S38>/DataTypeConversion1'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S38>/RearRadarOffDiagErr_Set' incorporates:
     *  ActionPort: '<S214>/Action Port'
     */
    /* Switch: '<S214>/Switch1' incorporates:
     *  Constant: '<S214>/Constant5'
     *  Constant: '<S214>/Constant6'
     *  DataTypeConversion: '<S220>/Extract Desired Bits'
     */
    if (((uint8)KL15PwrSply_D_PwrSplyDiag06_Get & 1U) != 0U) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S214>/Switch1' */

    /* FunctionCaller: '<S214>/DTC_RearRadarPowerSCB_SetEventStatus' */
    Rte_Call_DTC_RearRadarPowerSCB_SetEventStatus(rtb_Switch4_k3);

    /* End of Outputs for SubSystem: '<S38>/RearRadarOffDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S38>/RearRadarOffDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S213>/Action Port'
     */
    /* FunctionCaller: '<S213>/DTC_RearRadarPowerSCB_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S213>/Constant'
     */
    Rte_Call_DTC_RearRadarPowerSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S38>/RearRadarOffDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S38>/Switch Case1' */

  /* FunctionCaller: '<S38>/IoHwAb_IoSigAdc_Adc_Get' */
  Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol06, &KL15PwrSply_DD_PwrVol06_Get);

  /* Product: '<S38>/Divide1' */
  KL15PwrSply_DD_PwrCurr06_Calc = (float32)KL15PwrSply_DD_PwrVol06_Get / 1780.0F * 670.0F;

  /* RelationalOperator: '<S38>/Relational Operator7' */
  rtb_DataTypeConversion2_bh = (KL15PwrSply_DD_PwrCurr06_Calc > tmpIRead_0[5]);

  /* Logic: '<S38>/Logical Operator11' */
  rtb_DTC_RearBlowerPowerOL_Get_k = (rtb_DataTypeConversion2_bh && (rtb_Efx_Debounce_sf_d != 0));

  /* Logic: '<S38>/Logical Operator' */
  rtb_DataTypeConversion2_bh = (rtb_LogicalOperator && (rtb_Efx_Debounce_sf_d != 0));

  /* SwitchCase: '<S38>/Switch Case' incorporates:
   *  DataTypeConversion: '<S38>/DataTypeConversion'
   */
  if (rtb_DataTypeConversion2_bh) {
    /* Outputs for IfAction SubSystem: '<S38>/RearRadarOnDiagErr_Set' incorporates:
     *  ActionPort: '<S216>/Action Port'
     */
    /* Switch: '<S216>/Switch8' incorporates:
     *  Constant: '<S216>/Constant'
     *  Constant: '<S216>/Constant13'
     *  DataTypeConversion: '<S216>/DataTypeConversion1'
     *  DataTypeConversion: '<S221>/Extract Desired Bits'
     */
    if (OLFaultBypass) {
      rtb_DTC_RLALampCtlUnitPowerOC_m = false;
    } else {
      rtb_DTC_RLALampCtlUnitPowerOC_m = (((uint8)(KL15PwrSply_D_PwrSplyDiag06_Get >> 3) & 1U) != 0U);
    }

    /* End of Switch: '<S216>/Switch8' */

    /* Switch: '<S216>/Switch1' incorporates:
     *  Constant: '<S216>/Constant3'
     *  Constant: '<S216>/Constant4'
     */
    if (rtb_DTC_RLALampCtlUnitPowerOC_m) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S216>/Switch1' */

    /* FunctionCaller: '<S216>/DTC_RearRadarPowerOL_SetEventStatus' */
    Rte_Call_DTC_RearRadarPowerOL_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S216>/Switch' incorporates:
     *  Constant: '<S216>/Constant1'
     *  Constant: '<S216>/Constant2'
     *  DataTypeConversion: '<S216>/DataTypeConversion'
     *  DataTypeConversion: '<S222>/Extract Desired Bits'
     */
    if (((uint8)(KL15PwrSply_D_PwrSplyDiag06_Get >> 1) & 1) << 1 != 0) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
    }

    /* End of Switch: '<S216>/Switch' */

    /* FunctionCaller: '<S216>/DTC_RearRadarPowerSCG_SetEventStatus' */
    Rte_Call_DTC_RearRadarPowerSCG_SetEventStatus(rtb_Switch4_k3);

    /* Switch: '<S216>/Switch4' incorporates:
     *  Constant: '<S216>/Constant10'
     *  Constant: '<S216>/Constant9'
     *  Sum: '<S216>/Add2'
     *  UnitDelay: '<S216>/UnitDelay2'
     */
    if (rtb_DTC_RearBlowerPowerOL_Get_k) {
      rtb_Switch4_mq = Mfx_Add_u16u16_u16(KL15PwrSply_DD_DW.UnitDelay2_DSTATE, 10U);
    } else {
      rtb_Switch4_mq = 0U;
    }

    /* End of Switch: '<S216>/Switch4' */

    /* Switch: '<S216>/Switch3' incorporates:
     *  Constant: '<S216>/Constant7'
     *  Constant: '<S216>/Constant8'
     *  RelationalOperator: '<S216>/RelationalOperator2'
     */
    if (rtb_Switch4_mq > tmpIRead[5]) {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_FAILED;
    } else {
      rtb_Switch4_k3 = DEM_EVENT_STATUS_PASSED;
    }

    /* End of Switch: '<S216>/Switch3' */

    /* FunctionCaller: '<S216>/DTC_RearRadarPowerOC_SetEventStatus' */
    Rte_Call_DTC_RearRadarPowerOC_SetEventStatus(rtb_Switch4_k3);

    /* Update for UnitDelay: '<S216>/UnitDelay2' */
    KL15PwrSply_DD_DW.UnitDelay2_DSTATE = rtb_Switch4_mq;

    /* End of Outputs for SubSystem: '<S38>/RearRadarOnDiagErr_Set' */
  } else {
    /* Outputs for IfAction SubSystem: '<S38>/RearRadarOnDiagErr_DebounceReset' incorporates:
     *  ActionPort: '<S215>/Action Port'
     */
    /* FunctionCaller: '<S215>/DTC_RearRadarPowerOC_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S215>/Constant'
     */
    Rte_Call_DTC_RearRadarPowerOC_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S215>/DTC_RearRadarPowerOL_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S215>/Constant1'
     */
    Rte_Call_DTC_RearRadarPowerOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* FunctionCaller: '<S215>/DTC_RearRadarPowerSCG_ResetEventDebounceStatus' incorporates:
     *  Constant: '<S215>/Constant2'
     */
    Rte_Call_DTC_RearRadarPowerSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

    /* End of Outputs for SubSystem: '<S38>/RearRadarOnDiagErr_DebounceReset' */
  }

  /* End of SwitchCase: '<S38>/Switch Case' */

  /* FunctionCaller: '<S38>/IoHwAb_IoSigDio_Do_Set' */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_KL15PwrSply06, KL15PwrSply_DD_PwrSply_stCtrl06);

  /* FunctionCaller: '<S219>/DTC_RearRadarPowerSCB_GetEventFailed' */
  Rte_Call_DTC_RearRadarPowerSCB_GetEventFailed(&rtb_DataTypeConversion2_bh);

  /* FunctionCaller: '<S219>/DTC_RearRadarPowerSCB_GetEventTested' */
  Rte_Call_DTC_RearRadarPowerSCB_GetEventTested(&rtb_DataTypeConversion2_k);

  /* FunctionCaller: '<S219>/DTC_RearRadarPowerOL_GetEventFailed' */
  Rte_Call_DTC_RearRadarPowerOL_GetEventFailed(&rtb_DTC_RearRadarPowerOL_GetE_j);

  /* FunctionCaller: '<S219>/DTC_RearRadarPowerOL_GetEventTested' */
  Rte_Call_DTC_RearRadarPowerOL_GetEventTested(&rtb_DTC_RearRadarPowerOL_GetE_b);

  /* FunctionCaller: '<S219>/DTC_RearRadarPowerSCG_GetEventFailed' */
  Rte_Call_DTC_RearRadarPowerSCG_GetEventFailed(&rtb_DTC_RearRadarPowerSCG_Ge_hw);

  /* FunctionCaller: '<S219>/DTC_RearRadarPowerSCG_GetEventTested' */
  Rte_Call_DTC_RearRadarPowerSCG_GetEventTested(&rtb_DTC_RearRadarPowerSCG_Get_c);

  /* FunctionCaller: '<S219>/DTC_RearRadarPowerOC_GetEventFailed' */
  Rte_Call_DTC_RearRadarPowerOC_GetEventFailed(&rtb_DTC_RearRadarPowerOC_GetE_a);

  /* FunctionCaller: '<S219>/DTC_RearRadarPowerOC_GetEventTested' */
  Rte_Call_DTC_RearRadarPowerOC_GetEventTested(&rtb_DTC_RearRadarPowerOC_GetE_l);

  /* Switch: '<S219>/Switch4' incorporates:
   *  Constant: '<S219>/Constant5'
   *  Constant: '<S219>/Constant59'
   *  Constant: '<S219>/Constant8'
   *  Logic: '<S219>/Logical Operator1'
   *  Logic: '<S219>/Logical Operator4'
   *  Logic: '<S219>/Logical Operator6'
   *  Logic: '<S219>/Logical Operator7'
   *  RelationalOperator: '<S219>/Relational Operator'
   *  RelationalOperator: '<S219>/Relational Operator1'
   *  Switch: '<S219>/Switch1'
   *  Switch: '<S219>/Switch5'
   *  Switch: '<S219>/Switch6'
   */
  if (rtb_DataTypeConversion2_bh && rtb_DataTypeConversion2_k && (KL15PwrSply_DD_PwrSply_stCtrl06 == 0)) {
    KL15PwrSply_DD_PwrSplyRealErr06 = 2U;
  } else if (rtb_DTC_RearRadarPowerOL_GetE_j && rtb_DTC_RearRadarPowerOL_GetE_b && (KL15PwrSply_DD_PwrSply_stCtrl06 == 1)) {
    /* Switch: '<S219>/Switch5' incorporates:
     *  Constant: '<S219>/Constant6'
     */
    KL15PwrSply_DD_PwrSplyRealErr06 = 3U;
  } else if (rtb_DTC_RearRadarPowerSCG_Ge_hw && rtb_DTC_RearRadarPowerSCG_Get_c) {
    /* Switch: '<S219>/Switch6' incorporates:
     *  Constant: '<S219>/Constant7'
     *  Switch: '<S219>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr06 = 1U;
  } else if (rtb_DTC_RearRadarPowerOC_GetE_a && rtb_DTC_RearRadarPowerOC_GetE_l) {
    /* Switch: '<S219>/Switch1' incorporates:
     *  Constant: '<S219>/Constant1'
     *  Switch: '<S219>/Switch5'
     *  Switch: '<S219>/Switch6'
     */
    KL15PwrSply_DD_PwrSplyRealErr06 = 4U;
  } else {
    /* Switch: '<S219>/Switch6' incorporates:
     *  Constant: '<S219>/Constant3'
     *  Switch: '<S219>/Switch1'
     *  Switch: '<S219>/Switch5'
     */
    KL15PwrSply_DD_PwrSplyRealErr06 = 0U;
  }

  /* End of Switch: '<S219>/Switch4' */

  /* Outputs for Enabled SubSystem: '<S38>/RealErrHold' incorporates:
   *  EnablePort: '<S212>/Enable'
   */
  /* Logic: '<S38>/Logical Operator7' incorporates:
   *  Constant: '<S38>/Constant33'
   *  Constant: '<S38>/Constant34'
   *  Inport: '<S212>/stRealErr'
   *  Logic: '<S38>/Logical Operator5'
   *  Logic: '<S38>/Logical Operator6'
   *  RelationalOperator: '<S38>/Relational Operator4'
   *  RelationalOperator: '<S38>/Relational Operator5'
   *  RelationalOperator: '<S38>/Relational Operator6'
   *  UnitDelay: '<S38>/Unit Delay2'
   */
  if (((0 == KL15PwrSply_DD_PwrSplyRealErr06) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_nw != KL15PwrSply_DD_PwrSplyRealErr06) && (0 != KL15PwrSply_DD_PwrSplyRealErr06))) {
    KL15PwrSply_DD_B.stRealErr = KL15PwrSply_DD_PwrSplyRealErr06;
  }

  /* End of Logic: '<S38>/Logical Operator7' */
  /* End of Outputs for SubSystem: '<S38>/RealErrHold' */

  /* SignalConversion: '<S1>/SignalConversion24' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[5] = KL15PwrSply_DD_B.stRealErr;

  /* Outputs for Enabled SubSystem: '<S1>/RearEOP_Ctl_2F_Diag_CutOff' incorporates:
   *  EnablePort: '<S34>/Enable'
   */
  /* RelationalOperator: '<S1>/Relational Operator16' incorporates:
   *  Constant: '<S1>/Constant59'
   *  Constant: '<S34>/Constant33'
   *  Constant: '<S34>/Constant34'
   *  Inport: '<Root>/PwrSply_u8VehicleTypeCfg_Val'
   *  Inport: '<S190>/stRealErr'
   *  Logic: '<S34>/Logical Operator5'
   *  Logic: '<S34>/Logical Operator6'
   *  Logic: '<S34>/Logical Operator7'
   *  RelationalOperator: '<S34>/Relational Operator4'
   *  RelationalOperator: '<S34>/Relational Operator5'
   *  RelationalOperator: '<S34>/Relational Operator6'
   *  UnitDelay: '<S34>/Unit Delay2'
   */
  if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_u8VehicleTypeCfg_Val() == 0) {
    /* UnitDelay: '<S34>/Unit Delay4' */
    rtb_UnitDelay4_d = KL15PwrSply_DD_PwrSply_stCtrl05;

    /* S-Function (Efx_Debounce_sf): '<S195>/Efx_Debounce_sf' incorporates:
     *  Constant: '<S195>/Reset'
     *  Constant: '<S195>/THighLow'
     *  Constant: '<S195>/X_Init'
     *  Constant: '<S34>/Constant1'
     *  Constant: '<S34>/Constant2'
     *  S-Function (Upcast_sf): '<S195>/Upcast'
     *  S-Function (Upcast_sf): '<S195>/Upcast1'
     */
    {
      Efx_DebounceParam_Type paramdebounce_loc;
      Efx_DebounceSetParam(&paramdebounce_loc, 0, 20);
      rtb_Efx_Debounce_sf = Efx_Debounce_u8_u8(rtb_UnitDelay4_d, &RearEOPOnDiagDly_I, &paramdebounce_loc, 10000 );
    }

    /* RelationalOperator: '<S34>/Relational Operator1' incorporates:
     *  Constant: '<S34>/Constant4'
     */
    rtb_DTC_RearRadarPowerOL_GetE_j = (tmpIRead_2[4] == 1);

    /* RelationalOperator: '<S34>/Relational Operator2' incorporates:
     *  Constant: '<S34>/Constant5'
     */
    rtb_DTC_RearEOPPowerSCB_GetEv_f = (tmpIRead_2[4] == 2);

    /* Logic: '<S34>/Logical Operator10' incorporates:
     *  Constant: '<S34>/Constant3'
     *  Logic: '<S34>/Logical Operator3'
     *  Logic: '<S34>/Logical Operator4'
     *  RelationalOperator: '<S34>/Relational Operator'
     *  UnitDelay: '<S34>/Unit Delay'
     */
    rtb_LogicalOperator10_kk = ((KL15PwrSply_DD_DW.UnitDelay_DSTATE_o != 0) || ((!rtb_DTC_RearRadarPowerOL_GetE_j) && (!rtb_DTC_RearEOPPowerSCB_GetEv_f)));

    /* S-Function (Efx_Debounce_sf): '<S196>/Efx_Debounce_sf' incorporates:
     *  Constant: '<S196>/Reset'
     *  Constant: '<S196>/THighLow'
     *  Constant: '<S196>/X_Init'
     *  Constant: '<S34>/Constant10'
     *  Constant: '<S34>/Constant9'
     *  S-Function (Upcast_sf): '<S196>/Upcast'
     *  S-Function (Upcast_sf): '<S196>/Upcast1'
     */
    {
      Efx_DebounceParam_Type paramdebounce_loc;
      Efx_DebounceSetParam(&paramdebounce_loc, 0, 30);
      rtb_DTC_RearEOPPowerSCB_GetEv_f = Efx_Debounce_u8_u8(rtb_LogicalOperator10_kk, &RearEOPOnDiagRetryDly_I, &paramdebounce_loc, 10000 );
    }

    /* FunctionCaller: '<S34>/DTC_RearEOPPowerSCG_GetEventFailed' */
    Rte_Call_DTC_RearEOPPowerSCG_GetEventFailed(&rtb_DTC_RearRadarPowerOL_GetE_j);

    /* FunctionCaller: '<S34>/DTC_RearEOPPowerSCG_GetEventTested' */
    Rte_Call_DTC_RearEOPPowerSCG_GetEventTested(&rtb_DTC_RearEOPPowerSCB_GetEv_c);

    /* Logic: '<S34>/Logical Operator14' */
    rtb_DTC_RearRadarPowerOL_GetE_b = (rtb_DTC_RearRadarPowerOL_GetE_j && rtb_DTC_RearEOPPowerSCB_GetEv_c);

    /* FunctionCaller: '<S34>/DTC_RearEOPPowerOC_GetEventFailed' */
    Rte_Call_DTC_RearEOPPowerOC_GetEventFailed(&rtb_DTC_RearEOPPowerSCB_GetEv_c);

    /* FunctionCaller: '<S34>/DTC_RearEOPPowerOC_GetEventTested' */
    Rte_Call_DTC_RearEOPPowerOC_GetEventTested(&rtb_DTC_RearRadarPowerOL_GetE_j);

    /* Switch: '<S34>/Switch' incorporates:
     *  Constant: '<S34>/Constant'
     *  Inport: '<Root>/KL15PwrSply_bRearEOPPowerTrigUds_Val'
     *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
     *  Inport: '<Root>/PwrSply_bVehSpdTkOvr_Val'
     *  Logic: '<S34>/Logical Operator13'
     *  Logic: '<S34>/Logical Operator15'
     *  Logic: '<S34>/Logical Operator8'
     *  Logic: '<S34>/Logical Operator9'
     *  MultiPortSwitch: '<S34>/MultiportSwitch11'
     *  Switch: '<S34>/Switch1'
     *  Switch: '<S34>/Switch41'
     *  UnitDelay: '<S34>/Unit Delay3'
     */
    if ((rtb_DTC_RearRadarPowerOL_GetE_b || (rtb_DTC_RearEOPPowerSCB_GetEv_c && rtb_DTC_RearRadarPowerOL_GetE_j)) && rtb_DTC_RearEOPPowerSCB_GetEv_f) {
      KL15PwrSply_DD_PwrSply_stCtrl05 = 0U;
    } else if (Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_bRearEOPPowerTrigUds_Val()) {
      /* Switch: '<S34>/Switch1' incorporates:
       *  Inport: '<Root>/KL15PwrSply_u8stRearEOPPowerUds_Val'
       */
      KL15PwrSply_DD_PwrSply_stCtrl05 = Rte_IRead_KL15PwrSply_DD_Runnable_10ms_KL15PwrSply_u8stRearEOPPowerUds_Val();
    } else if (!Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val()) {
      /* MultiPortSwitch: '<S34>/MultiportSwitch11' incorporates:
       *  Switch: '<S34>/Switch1'
       */
      KL15PwrSply_DD_PwrSply_stCtrl05 = tmpIRead_1[4];
    } else if (KL15PwrSply_DD_DW.UnitDelay3_DSTATE_jx && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bVehSpdTkOvr_Val()) {
      /* Switch: '<S34>/Switch41' incorporates:
       *  Constant: '<S34>/Constant27'
       *  MultiPortSwitch: '<S34>/MultiportSwitch11'
       *  Switch: '<S34>/Switch1'
       */
      KL15PwrSply_DD_PwrSply_stCtrl05 = 1U;
    } else {
      /* MultiPortSwitch: '<S34>/MultiportSwitch11' incorporates:
       *  Switch: '<S34>/Switch1'
       *  Switch: '<S34>/Switch41'
       */
      KL15PwrSply_DD_PwrSply_stCtrl05 = tmpIRead_1[4];
    }

    /* End of Switch: '<S34>/Switch' */

    /* FunctionCaller: '<S34>/IoHwAb_IoDiagDo_Do_Get' */
    Rte_Call_IoHwAb_IoDiagDo_Do_Get(O_S_KL15PwrSply05, &KL15PwrSply_D_PwrSplyDiag05_Get);

    /* SwitchCase: '<S34>/Switch Case1' incorporates:
     *  Logic: '<S34>/Logical Operator1'
     *  Logic: '<S34>/Logical Operator2'
     */
    if (rtb_LogicalOperator && (KL15PwrSply_DD_PwrSply_stCtrl05 == 0)) {
      /* Outputs for IfAction SubSystem: '<S34>/RearEOPOffDiagErr_Set' incorporates:
       *  ActionPort: '<S192>/Action Port'
       */
      /* Switch: '<S192>/Switch1' incorporates:
       *  Constant: '<S192>/Constant5'
       *  Constant: '<S192>/Constant6'
       *  DataTypeConversion: '<S198>/Extract Desired Bits'
       */
      if (((uint8)KL15PwrSply_D_PwrSplyDiag05_Get & 1U) != 0U) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S192>/Switch1' */

      /* FunctionCaller: '<S192>/DTC_RearEOPPowerSCB_SetEventStatus' */
      Rte_Call_DTC_RearEOPPowerSCB_SetEventStatus(rtb_Switch4_k3);

      /* End of Outputs for SubSystem: '<S34>/RearEOPOffDiagErr_Set' */
    } else {
      /* Outputs for IfAction SubSystem: '<S34>/RearEOPOffDiagErr_DebounceReset' incorporates:
       *  ActionPort: '<S191>/Action Port'
       */
      /* FunctionCaller: '<S191>/DTC_RearEOPPowerSCB_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S191>/Constant'
       */
      Rte_Call_DTC_RearEOPPowerSCB_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S34>/RearEOPOffDiagErr_DebounceReset' */
    }

    /* End of SwitchCase: '<S34>/Switch Case1' */

    /* FunctionCaller: '<S34>/IoHwAb_IoSigAdc_Adc_Get' */
    Rte_Call_IoHwAb_IoSigAdc_Adc_Get(I_A_KL15PwrVol05, &KL15PwrSply_DD_PwrVol05_Get);

    /* Product: '<S34>/Divide1' */
    KL15PwrSply_DD_PwrCurr05_Calc = (float32)KL15PwrSply_DD_PwrVol05_Get / 1780.0F * 34100.0F;

    /* Logic: '<S34>/Logical Operator' */
    rtb_DTC_RearEOPPowerSCB_GetEv_c = (rtb_LogicalOperator && (rtb_Efx_Debounce_sf != 0));

    /* SwitchCase: '<S34>/Switch Case' incorporates:
     *  DataTypeConversion: '<S34>/DataTypeConversion'
     */
    if (rtb_DTC_RearEOPPowerSCB_GetEv_c) {
      /* Outputs for IfAction SubSystem: '<S34>/RearEOPOnDiagErr_Set' incorporates:
       *  ActionPort: '<S194>/Action Port'
       */
      /* Switch: '<S194>/Switch8' incorporates:
       *  Constant: '<S194>/Constant'
       *  Constant: '<S194>/Constant13'
       *  DataTypeConversion: '<S194>/DataTypeConversion1'
       *  DataTypeConversion: '<S199>/Extract Desired Bits'
       */
      if (OLFaultBypass) {
        rtb_DTC_RLALampCtlUnitPowerOC_m = false;
      } else {
        rtb_DTC_RLALampCtlUnitPowerOC_m = (((uint8)(KL15PwrSply_D_PwrSplyDiag05_Get >> 3) & 1U) != 0U);
      }

      /* End of Switch: '<S194>/Switch8' */

      /* Switch: '<S194>/Switch1' incorporates:
       *  Constant: '<S194>/Constant3'
       *  Constant: '<S194>/Constant4'
       */
      if (rtb_DTC_RLALampCtlUnitPowerOC_m) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S194>/Switch1' */

      /* FunctionCaller: '<S194>/DTC_RearEOPPowerOL_SetEventStatus' */
      Rte_Call_DTC_RearEOPPowerOL_SetEventStatus(rtb_Switch4_k3);

      /* Switch: '<S194>/Switch' incorporates:
       *  Constant: '<S194>/Constant1'
       *  Constant: '<S194>/Constant2'
       *  DataTypeConversion: '<S194>/DataTypeConversion'
       *  DataTypeConversion: '<S200>/Extract Desired Bits'
       */
      if (((uint8)(KL15PwrSply_D_PwrSplyDiag05_Get >> 1) & 1) << 1 != 0) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREFAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PREPASSED;
      }

      /* End of Switch: '<S194>/Switch' */

      /* FunctionCaller: '<S194>/DTC_RearEOPPowerSCG_SetEventStatus' */
      Rte_Call_DTC_RearEOPPowerSCG_SetEventStatus(rtb_Switch4_k3);

      /* Switch: '<S194>/Switch4' incorporates:
       *  Constant: '<S194>/Constant10'
       *  Constant: '<S194>/Constant9'
       *  Logic: '<S34>/Logical Operator11'
       *  RelationalOperator: '<S34>/Relational Operator7'
       *  Sum: '<S194>/Add2'
       *  UnitDelay: '<S194>/UnitDelay2'
       */
      if ((KL15PwrSply_DD_PwrCurr05_Calc > tmpIRead_0[4]) && (rtb_Efx_Debounce_sf != 0)) {
        rtb_Switch4_mq = Mfx_Add_u16u16_u16(KL15PwrSply_DD_DW.UnitDelay2_DSTATE_h, 10U);
      } else {
        rtb_Switch4_mq = 0U;
      }

      /* End of Switch: '<S194>/Switch4' */

      /* Switch: '<S194>/Switch3' incorporates:
       *  Constant: '<S194>/Constant7'
       *  Constant: '<S194>/Constant8'
       *  RelationalOperator: '<S194>/RelationalOperator2'
       */
      if (rtb_Switch4_mq > tmpIRead[4]) {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_FAILED;
      } else {
        rtb_Switch4_k3 = DEM_EVENT_STATUS_PASSED;
      }

      /* End of Switch: '<S194>/Switch3' */

      /* FunctionCaller: '<S194>/DTC_RearEOPPowerOC_SetEventStatus' */
      Rte_Call_DTC_RearEOPPowerOC_SetEventStatus(rtb_Switch4_k3);

      /* Update for UnitDelay: '<S194>/UnitDelay2' */
      KL15PwrSply_DD_DW.UnitDelay2_DSTATE_h = rtb_Switch4_mq;

      /* End of Outputs for SubSystem: '<S34>/RearEOPOnDiagErr_Set' */
    } else {
      /* Outputs for IfAction SubSystem: '<S34>/RearEOPOnDiagErr_DebounceReset' incorporates:
       *  ActionPort: '<S193>/Action Port'
       */
      /* FunctionCaller: '<S193>/DTC_RearEOPPowerOC_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S193>/Constant'
       */
      Rte_Call_DTC_RearEOPPowerOC_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* FunctionCaller: '<S193>/DTC_RearEOPPowerOL_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S193>/Constant1'
       */
      Rte_Call_DTC_RearEOPPowerOL_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* FunctionCaller: '<S193>/DTC_RearEOPPowerSCG_ResetEventDebounceStatus' incorporates:
       *  Constant: '<S193>/Constant2'
       */
      Rte_Call_DTC_RearEOPPowerSCG_ResetEventDebounceStatus(DEM_DEBOUNCE_STATUS_RESET);

      /* End of Outputs for SubSystem: '<S34>/RearEOPOnDiagErr_DebounceReset' */
    }

    /* End of SwitchCase: '<S34>/Switch Case' */

    /* FunctionCaller: '<S34>/IoHwAb_IoSigDio_Do_Set' */
    Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_KL15PwrSply05, KL15PwrSply_DD_PwrSply_stCtrl05);

    /* FunctionCaller: '<S197>/DTC_RearEOPPowerSCB_GetEventFailed' */
    Rte_Call_DTC_RearEOPPowerSCB_GetEventFailed(&rtb_DTC_RearEOPPowerSCB_GetEv_c);

    /* FunctionCaller: '<S197>/DTC_RearEOPPowerSCB_GetEventTested' */
    Rte_Call_DTC_RearEOPPowerSCB_GetEventTested(&rtb_DTC_RearEOPPowerSCB_GetEv_f);

    /* FunctionCaller: '<S197>/DTC_RearEOPPowerOL_GetEventFailed' */
    Rte_Call_DTC_RearEOPPowerOL_GetEventFailed(&rtb_DTC_RearEOPPowerOL_GetEve_l);

    /* FunctionCaller: '<S197>/DTC_RearEOPPowerOL_GetEventTested' */
    Rte_Call_DTC_RearEOPPowerOL_GetEventTested(&rtb_DTC_RearEOPPowerOL_GetEve_p);

    /* FunctionCaller: '<S197>/DTC_RearEOPPowerSCG_GetEventFailed' */
    Rte_Call_DTC_RearEOPPowerSCG_GetEventFailed(&rtb_DTC_RearEOPPowerSCG_GetEv_e);

    /* FunctionCaller: '<S197>/DTC_RearEOPPowerSCG_GetEventTested' */
    Rte_Call_DTC_RearEOPPowerSCG_GetEventTested(&rtb_DTC_RearEOPPowerSCG_GetEv_f);

    /* FunctionCaller: '<S197>/DTC_RearEOPPowerOC_GetEventFailed' */
    Rte_Call_DTC_RearEOPPowerOC_GetEventFailed(&rtb_DTC_RearEOPPowerOC_GetEve_o);

    /* FunctionCaller: '<S197>/DTC_RearEOPPowerOC_GetEventTested' */
    Rte_Call_DTC_RearEOPPowerOC_GetEventTested(&rtb_DTC_RearEOPPowerOC_GetEv_dh);

    /* Switch: '<S197>/Switch4' incorporates:
     *  Constant: '<S197>/Constant5'
     *  Constant: '<S197>/Constant59'
     *  Constant: '<S197>/Constant8'
     *  Logic: '<S197>/Logical Operator1'
     *  Logic: '<S197>/Logical Operator4'
     *  Logic: '<S197>/Logical Operator6'
     *  Logic: '<S197>/Logical Operator7'
     *  RelationalOperator: '<S197>/Relational Operator'
     *  RelationalOperator: '<S197>/Relational Operator1'
     *  Switch: '<S197>/Switch1'
     *  Switch: '<S197>/Switch5'
     *  Switch: '<S197>/Switch6'
     */
    if (rtb_DTC_RearEOPPowerSCB_GetEv_c && rtb_DTC_RearEOPPowerSCB_GetEv_f && (KL15PwrSply_DD_PwrSply_stCtrl05 == 0)) {
      KL15PwrSply_DD_PwrSplyRealErr05 = 2U;
    } else if (rtb_DTC_RearEOPPowerOL_GetEve_l && rtb_DTC_RearEOPPowerOL_GetEve_p && (KL15PwrSply_DD_PwrSply_stCtrl05 == 1)) {
      /* Switch: '<S197>/Switch5' incorporates:
       *  Constant: '<S197>/Constant6'
       */
      KL15PwrSply_DD_PwrSplyRealErr05 = 3U;
    } else if (rtb_DTC_RearEOPPowerSCG_GetEv_e && rtb_DTC_RearEOPPowerSCG_GetEv_f) {
      /* Switch: '<S197>/Switch6' incorporates:
       *  Constant: '<S197>/Constant7'
       *  Switch: '<S197>/Switch5'
       */
      KL15PwrSply_DD_PwrSplyRealErr05 = 1U;
    } else if (rtb_DTC_RearEOPPowerOC_GetEve_o && rtb_DTC_RearEOPPowerOC_GetEv_dh) {
      /* Switch: '<S197>/Switch1' incorporates:
       *  Constant: '<S197>/Constant1'
       *  Switch: '<S197>/Switch5'
       *  Switch: '<S197>/Switch6'
       */
      KL15PwrSply_DD_PwrSplyRealErr05 = 4U;
    } else {
      /* Switch: '<S197>/Switch6' incorporates:
       *  Constant: '<S197>/Constant3'
       *  Switch: '<S197>/Switch1'
       *  Switch: '<S197>/Switch5'
       */
      KL15PwrSply_DD_PwrSplyRealErr05 = 0U;
    }

    /* End of Switch: '<S197>/Switch4' */

    /* Outputs for Enabled SubSystem: '<S34>/RealErrHold' incorporates:
     *  EnablePort: '<S190>/Enable'
     */
    if (((0 == KL15PwrSply_DD_PwrSplyRealErr05) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_g != KL15PwrSply_DD_PwrSplyRealErr05) && (0 != KL15PwrSply_DD_PwrSplyRealErr05))) {
      KL15PwrSply_DD_B.stRealErr_b = KL15PwrSply_DD_PwrSplyRealErr05;
    }

    /* End of Outputs for SubSystem: '<S34>/RealErrHold' */

    /* Switch: '<S34>/Switch2' incorporates:
     *  Constant: '<S34>/Constant13'
     *  Constant: '<S34>/Constant33'
     *  Constant: '<S34>/Constant34'
     *  Constant: '<S34>/Constant6'
     *  Inport: '<S190>/stRealErr'
     *  Logic: '<S34>/Logical Operator5'
     *  Logic: '<S34>/Logical Operator6'
     *  Logic: '<S34>/Logical Operator7'
     *  Product: '<S34>/Product'
     *  RelationalOperator: '<S34>/Relational Operator4'
     *  RelationalOperator: '<S34>/Relational Operator5'
     *  RelationalOperator: '<S34>/Relational Operator6'
     *  UnitDelay: '<S34>/Unit Delay1'
     *  UnitDelay: '<S34>/Unit Delay2'
     */
    if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_p != 0) {
      KL15PwrSply_DD_B.Switch2 = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr05_Calc * 0.01F);
    } else {
      KL15PwrSply_DD_B.Switch2 = 0U;
    }

    /* End of Switch: '<S34>/Switch2' */

    /* DataTypeConversion: '<S34>/DataTypeConversion2' */
    KL15PwrSply_DD_B.DataTypeConversion2 = (KL15PwrSply_DD_PwrSply_stCtrl05 != 0);

    /* Update for UnitDelay: '<S34>/Unit Delay' */
    KL15PwrSply_DD_DW.UnitDelay_DSTATE_o = tmpIRead_2[4];

    /* Update for UnitDelay: '<S34>/Unit Delay3' incorporates:
     *  DataTypeConversion: '<S34>/DataTypeConversion4'
     */
    KL15PwrSply_DD_DW.UnitDelay3_DSTATE_jx = (KL15PwrSply_DD_PwrSply_stCtrl05 != 0);

    /* Update for UnitDelay: '<S34>/Unit Delay2' */
    KL15PwrSply_DD_DW.UnitDelay2_DSTATE_g = KL15PwrSply_DD_PwrSplyRealErr05;

    /* Update for UnitDelay: '<S34>/Unit Delay1' */
    KL15PwrSply_DD_DW.UnitDelay1_DSTATE_p = KL15PwrSply_DD_PwrSply_stCtrl05;
  }

  /* End of RelationalOperator: '<S1>/Relational Operator16' */
  /* End of Outputs for SubSystem: '<S1>/RearEOP_Ctl_2F_Diag_CutOff' */

  /* DataTypeConversion: '<S3>/DataTypeConversion2' */
  rtb_DataTypeConversion2_bh = (KL15PwrSply_DD_PwrSply_stCtrl08 != 0);

  /* DataTypeConversion: '<S5>/DataTypeConversion2' */
  rtb_DataTypeConversion2_jd = (rtb_Switch_j != 0);

  /* DataTypeConversion: '<S6>/DataTypeConversion2' */
  rtb_DataTypeConversion2_c = (rtb_Switch_o != 0);

  /* Logic: '<S1>/Logical Operator5' incorporates:
   *  DataTypeConversion: '<S24>/DataTypeConversion2'
   *  DataTypeConversion: '<S31>/DataTypeConversion2'
   *  DataTypeConversion: '<S32>/DataTypeConversion2'
   *  DataTypeConversion: '<S33>/DataTypeConversion2'
   *  DataTypeConversion: '<S37>/DataTypeConversion2'
   *  DataTypeConversion: '<S38>/DataTypeConversion2'
   *  DataTypeConversion: '<S4>/DataTypeConversion2'
   *  DataTypeConversion: '<S7>/DataTypeConversion2'
   *  DataTypeConversion: '<S8>/DataTypeConversion2'
   *  Inport: '<Root>/PwrSply_bCCULostComm_Val'
   *  Logic: '<S1>/Logical Operator3'
   */
  rtb_LogicalOperator5_b = ((rtb_DataTypeConversion2_c || rtb_DataTypeConversion2_jd || (KL15PwrSply_DD_PwrSply_stCtrl03 != 0) || (KL15PwrSply_DD_PwrSply_stCtrl04 != 0) || KL15PwrSply_DD_B.DataTypeConversion2 || (KL15PwrSply_DD_PwrSply_stCtrl06 != 0) || (KL15PwrSply_DD_PwrSply_stCtrl07 != 0) || rtb_DataTypeConversion2_bh || (KL15PwrSply_DD_PwrSply_stCtrl09 != 0) || (KL15PwrSply_DD_PwrSply_stCtrl10 != 0) || (KL15PwrSply_DD_PwrSply_stCtrl11 != 0) || (KL15PwrSply_DD_PwrSply_stCtrl12 != 0) || (KL15PwrSply_DD_PwrSply_stCtrl25 != 0) || KL15PwrSply_DD_B.DataTypeConversion2_hj || KL15PwrSply_DD_B.DataTypeConversion2_b || KL15PwrSply_DD_B.DataTypeConversion2_c || KL15PwrSply_DD_B.DataTypeConversion2_h) && Rte_IRead_KL15PwrSply_DD_Runnable_10ms_PwrSply_bCCULostComm_Val());

  /* S-Function (Bfx_PutBit_sf): '<S9>/Bfx_PutBit_sf' incorporates:
   *  Constant: '<S1>/Constant10'
   *  Constant: '<S1>/Constant11'
   */
  rtb_Bfx_PutBit_sf_g = 0U;
  Bfx_PutBit_u32u8u8(&rtb_Bfx_PutBit_sf_g, ((uint8)0U), rtb_LogicalOperator5_b);

  /* Logic: '<S1>/Logical Operator6' incorporates:
   *  Constant: '<S1>/Constant13'
   *  DataTypeConversion: '<S37>/DataTypeConversion2'
   *  Inport: '<Root>/PwrSply_u8UMM_UsageModeSt_Val'
   *  Logic: '<S1>/Logical Operator4'
   *  RelationalOperator: '<S1>/Relational Operator3'
   *  RelationalOperator: '<S1>/Relational Operator4'
   */
  rtb_LogicalOperator6_my = ((KL15PwrSply_DD_PwrSply_stCtrl25 != 0) && (rtb_DTC_RLALampCtlUnitPowerS_gp && (rtb_LogicalOperator2_tmp_tmp == 0)));

  /* S-Function (Bfx_PutBit_sf): '<S10>/Bfx_PutBit_sf' incorporates:
   *  Constant: '<S1>/Constant12'
   */
  rtb_Bfx_PutBit_sf = rtb_Bfx_PutBit_sf_g;
  Bfx_PutBit_u32u8u8(&rtb_Bfx_PutBit_sf, ((uint8)1U), rtb_LogicalOperator6_my);

  /* S-Function (Bfx_PutBit_sf): '<S11>/Bfx_PutBit_sf' incorporates:
   *  Constant: '<S1>/Constant14'
   */
  rtb_Bfx_PutBit_sf_g = rtb_Bfx_PutBit_sf;
  Bfx_PutBit_u32u8u8(&rtb_Bfx_PutBit_sf_g, ((uint8)2U), rtb_DataTypeConversion2_c);

  /* S-Function (Bfx_PutBit_sf): '<S12>/Bfx_PutBit_sf' incorporates:
   *  Constant: '<S1>/Constant16'
   *  Outport: '<Root>/gKL15PwrSply_u32AllowSleep_Local_Val'
   */
  tmpIWrite = rtb_Bfx_PutBit_sf_g;
  Bfx_PutBit_u32u8u8(&tmpIWrite, ((uint8)3U), rtb_DataTypeConversion2_jd);

  /* S-Function (Bfx_PutBit_sf): '<S13>/Bfx_PutBit_sf' incorporates:
   *  Constant: '<S1>/Constant39'
   *  Constant: '<S1>/Constant40'
   */
  rtb_Bfx_PutBit_sf = 0U;
  Bfx_PutBit_u32u8u8(&rtb_Bfx_PutBit_sf, ((uint8)0U), KL15PwrS_flgRLALampAllwSleep_NW);

  /* S-Function (Bfx_PutBit_sf): '<S14>/Bfx_PutBit_sf' incorporates:
   *  Constant: '<S1>/Constant42'
   */
  rtb_Bfx_PutBit_sf_g = rtb_Bfx_PutBit_sf;
  Bfx_PutBit_u32u8u8(&rtb_Bfx_PutBit_sf_g, ((uint8)1U), KL15PwrS_flgRLBLampAllwSleep_NW);

  /* S-Function (Bfx_PutBit_sf): '<S15>/Bfx_PutBit_sf' incorporates:
   *  Constant: '<S1>/Constant41'
   */
  rtb_Bfx_PutBit_sf = rtb_Bfx_PutBit_sf_g;
  Bfx_PutBit_u32u8u8(&rtb_Bfx_PutBit_sf, ((uint8)2U), KL15PwrS_flgRRALampAllwSleep_NW);

  /* S-Function (Bfx_PutBit_sf): '<S16>/Bfx_PutBit_sf' incorporates:
   *  Constant: '<S1>/Constant43'
   */
  rtb_Bfx_PutBit_sf_g = rtb_Bfx_PutBit_sf;
  Bfx_PutBit_u32u8u8(&rtb_Bfx_PutBit_sf_g, ((uint8)3U), KL15PwrS_flgRRBLampAllwSleep_NW);

  /* S-Function (Bfx_PutBit_sf): '<S17>/Bfx_PutBit_sf' incorporates:
   *  Constant: '<S1>/Constant44'
   *  Outport: '<Root>/gKL15PwrSply_u32AllowSleep_NW_Val'
   */
  tmpIWrite_0 = rtb_Bfx_PutBit_sf_g;
  Bfx_PutBit_u32u8u8(&tmpIWrite_0, ((uint8)4U), KL_flgRearMotorLampAllwSleep_NW);

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Do_Set1' */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_KL15PwrSply13, KL15PwrSply_DD_PwrSply_stCtrl13);

  /* FunctionCaller: '<S1>/IoHwAb_IoSigDio_Do_Set2' */
  Rte_Call_IoHwAb_IoSigDio_Do_Set(O_S_KL15PwrSply14, KL15PwrSply_DD_PwrSply_stCtrl14);

  /* SignalConversion: '<S1>/SignalConversion5' incorporates:
   *  DataTypeConversion: '<S38>/DataTypeConversion2'
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[5] = (KL15PwrSply_DD_PwrSply_stCtrl06 != 0);

  /* SignalConversion: '<S1>/SignalConversion14' incorporates:
   *  DataTypeConversion: '<S37>/DataTypeConversion2'
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[24] = (KL15PwrSply_DD_PwrSply_stCtrl25 != 0);

  /* SignalConversion: '<S1>/SignalConversion2' incorporates:
   *  DataTypeConversion: '<S33>/DataTypeConversion2'
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[2] = (KL15PwrSply_DD_PwrSply_stCtrl03 != 0);

  /* SignalConversion: '<S1>/SignalConversion6' incorporates:
   *  DataTypeConversion: '<S32>/DataTypeConversion2'
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[6] = (KL15PwrSply_DD_PwrSply_stCtrl07 != 0);

  /* SignalConversion: '<S1>/SignalConversion8' incorporates:
   *  DataTypeConversion: '<S31>/DataTypeConversion2'
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[8] = (KL15PwrSply_DD_PwrSply_stCtrl09 != 0);

  /* SignalConversion: '<S1>/SignalConversion3' incorporates:
   *  DataTypeConversion: '<S24>/DataTypeConversion2'
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[3] = (KL15PwrSply_DD_PwrSply_stCtrl04 != 0);

  /* SignalConversion: '<S1>/SignalConversion10' incorporates:
   *  DataTypeConversion: '<S8>/DataTypeConversion2'
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[10] = (KL15PwrSply_DD_PwrSply_stCtrl11 != 0);

  /* SignalConversion: '<S1>/SignalConversion11' incorporates:
   *  DataTypeConversion: '<S7>/DataTypeConversion2'
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[11] = (KL15PwrSply_DD_PwrSply_stCtrl12 != 0);

  /* SignalConversion: '<S1>/SignalConversion' incorporates:
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[0] = rtb_DataTypeConversion2_c;

  /* SignalConversion: '<S1>/SignalConversion1' incorporates:
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[1] = rtb_DataTypeConversion2_jd;

  /* SignalConversion: '<S1>/SignalConversion9' incorporates:
   *  DataTypeConversion: '<S4>/DataTypeConversion2'
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[9] = (KL15PwrSply_DD_PwrSply_stCtrl10 != 0);

  /* SignalConversion: '<S1>/SignalConversion7' incorporates:
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[7] = rtb_DataTypeConversion2_bh;

  /* SignalConversion: '<S1>/SignalConversion23' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[4] = KL15PwrSply_DD_B.stRealErr_b;

  /* SignalConversion: '<S1>/SignalConversion4' incorporates:
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[4] = KL15PwrSply_DD_B.DataTypeConversion2;

  /* SignalConversion: '<S1>/SignalConversion40' incorporates:
   *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
   */
  tmpIWrite_2[4] = KL15PwrSply_DD_B.Switch2;

  /* Switch: '<S38>/Switch2' incorporates:
   *  UnitDelay: '<S38>/Unit Delay1'
   */
  if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE != 0) {
    /* SignalConversion: '<S1>/SignalConversion41' incorporates:
     *  Constant: '<S38>/Constant13'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     *  Product: '<S38>/Product'
     */
    tmpIWrite_2[5] = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr06_Calc * 0.01F);
  } else {
    /* SignalConversion: '<S1>/SignalConversion41' incorporates:
     *  Constant: '<S38>/Constant6'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     */
    tmpIWrite_2[5] = 0U;
  }

  /* End of Switch: '<S38>/Switch2' */

  /* Switch: '<S37>/Switch2' incorporates:
   *  UnitDelay: '<S37>/Unit Delay1'
   */
  if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_d != 0) {
    /* SignalConversion: '<S1>/SignalConversion46' incorporates:
     *  Constant: '<S37>/Constant13'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     *  Product: '<S37>/Product'
     */
    tmpIWrite_2[24] = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr25_Calc * 0.01F);
  } else {
    /* SignalConversion: '<S1>/SignalConversion46' incorporates:
     *  Constant: '<S37>/Constant6'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     */
    tmpIWrite_2[24] = 0U;
  }

  /* End of Switch: '<S37>/Switch2' */

  /* Switch: '<S33>/Switch2' incorporates:
   *  UnitDelay: '<S33>/Unit Delay1'
   */
  if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_l != 0) {
    /* SignalConversion: '<S1>/SignalConversion38' incorporates:
     *  Constant: '<S33>/Constant13'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     *  Product: '<S33>/Product'
     */
    tmpIWrite_2[2] = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr03_Calc * 0.01F);
  } else {
    /* SignalConversion: '<S1>/SignalConversion38' incorporates:
     *  Constant: '<S33>/Constant6'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     */
    tmpIWrite_2[2] = 0U;
  }

  /* End of Switch: '<S33>/Switch2' */

  /* Switch: '<S32>/Switch2' incorporates:
   *  UnitDelay: '<S32>/Unit Delay1'
   */
  if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_f != 0) {
    /* SignalConversion: '<S1>/SignalConversion42' incorporates:
     *  Constant: '<S32>/Constant13'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     *  Product: '<S32>/Product'
     */
    tmpIWrite_2[6] = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr07_Calc * 0.01F);
  } else {
    /* SignalConversion: '<S1>/SignalConversion42' incorporates:
     *  Constant: '<S32>/Constant6'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     */
    tmpIWrite_2[6] = 0U;
  }

  /* End of Switch: '<S32>/Switch2' */

  /* Switch: '<S31>/Switch2' incorporates:
   *  UnitDelay: '<S31>/Unit Delay1'
   */
  if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_o != 0) {
    /* SignalConversion: '<S1>/SignalConversion44' incorporates:
     *  Constant: '<S31>/Constant13'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     *  Product: '<S31>/Product'
     */
    tmpIWrite_2[8] = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr09_Calc * 0.01F);
  } else {
    /* SignalConversion: '<S1>/SignalConversion44' incorporates:
     *  Constant: '<S31>/Constant6'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     */
    tmpIWrite_2[8] = 0U;
  }

  /* End of Switch: '<S31>/Switch2' */

  /* Switch: '<S24>/Switch2' incorporates:
   *  UnitDelay: '<S24>/Unit Delay1'
   */
  if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_g != 0) {
    /* SignalConversion: '<S1>/SignalConversion39' incorporates:
     *  Constant: '<S24>/Constant13'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     *  Product: '<S24>/Product'
     */
    tmpIWrite_2[3] = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr04_Calc * 0.01F);
  } else {
    /* SignalConversion: '<S1>/SignalConversion39' incorporates:
     *  Constant: '<S24>/Constant6'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     */
    tmpIWrite_2[3] = 0U;
  }

  /* End of Switch: '<S24>/Switch2' */

  /* Switch: '<S8>/Switch2' incorporates:
   *  UnitDelay: '<S8>/Unit Delay1'
   */
  if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_h != 0) {
    /* SignalConversion: '<S1>/SignalConversion36' incorporates:
     *  Constant: '<S8>/Constant13'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     *  Product: '<S8>/Product'
     */
    tmpIWrite_2[10] = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr11_Calc * 0.01F);
  } else {
    /* SignalConversion: '<S1>/SignalConversion36' incorporates:
     *  Constant: '<S8>/Constant6'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     */
    tmpIWrite_2[10] = 0U;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  UnitDelay: '<S7>/Unit Delay1'
   */
  if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_gv != 0) {
    /* SignalConversion: '<S1>/SignalConversion37' incorporates:
     *  Constant: '<S7>/Constant13'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     *  Product: '<S7>/Product'
     */
    tmpIWrite_2[11] = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr12_Calc * 0.01F);
  } else {
    /* SignalConversion: '<S1>/SignalConversion37' incorporates:
     *  Constant: '<S7>/Constant6'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     */
    tmpIWrite_2[11] = 0U;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* Switch: '<S6>/Switch2' incorporates:
   *  UnitDelay: '<S6>/Unit Delay1'
   */
  if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_m != 0) {
    /* SignalConversion: '<S1>/SignalConversion34' incorporates:
     *  Constant: '<S6>/Constant13'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     *  Product: '<S6>/Product'
     */
    tmpIWrite_2[0] = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr01_Calc * 0.01F);
  } else {
    /* SignalConversion: '<S1>/SignalConversion34' incorporates:
     *  Constant: '<S6>/Constant6'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     */
    tmpIWrite_2[0] = 0U;
  }

  /* End of Switch: '<S6>/Switch2' */

  /* Switch: '<S5>/Switch2' incorporates:
   *  UnitDelay: '<S5>/Unit Delay1'
   */
  if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_i != 0) {
    /* SignalConversion: '<S1>/SignalConversion35' incorporates:
     *  Constant: '<S5>/Constant13'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     *  Product: '<S5>/Product'
     */
    tmpIWrite_2[1] = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr02_Calc * 0.01F);
  } else {
    /* SignalConversion: '<S1>/SignalConversion35' incorporates:
     *  Constant: '<S5>/Constant6'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     */
    tmpIWrite_2[1] = 0U;
  }

  /* End of Switch: '<S5>/Switch2' */

  /* Switch: '<S4>/Switch2' incorporates:
   *  UnitDelay: '<S4>/Unit Delay1'
   */
  if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_fj != 0) {
    /* SignalConversion: '<S1>/SignalConversion45' incorporates:
     *  Constant: '<S4>/Constant13'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     *  Product: '<S4>/Product'
     */
    tmpIWrite_2[9] = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr10_Calc * 0.01F);
  } else {
    /* SignalConversion: '<S1>/SignalConversion45' incorporates:
     *  Constant: '<S4>/Constant6'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     */
    tmpIWrite_2[9] = 0U;
  }

  /* End of Switch: '<S4>/Switch2' */

  /* Switch: '<S3>/Switch2' incorporates:
   *  UnitDelay: '<S3>/Unit Delay1'
   */
  if (KL15PwrSply_DD_DW.UnitDelay1_DSTATE_mg != 0) {
    /* SignalConversion: '<S1>/SignalConversion43' incorporates:
     *  Constant: '<S3>/Constant13'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     *  Product: '<S3>/Product'
     */
    tmpIWrite_2[7] = (uint16)Mfl_Round_f32(KL15PwrSply_DD_PwrCurr08_Calc * 0.01F);
  } else {
    /* SignalConversion: '<S1>/SignalConversion43' incorporates:
     *  Constant: '<S3>/Constant6'
     *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
     */
    tmpIWrite_2[7] = 0U;
  }

  /* End of Switch: '<S3>/Switch2' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Switch: '<S1>/Switch1'
   *  Switch: '<S1>/Switch2'
   *  Switch: '<S1>/Switch3'
   *  Switch: '<S1>/Switch4'
   */
  if (KL15PwrSply_DD_flgRLALampWkUp) {
    /* Outport: '<Root>/gKL15PwrSply_u8Wakeup_Val' incorporates:
     *  Constant: '<S1>/Constant20'
     */
    Rte_IWrite_KL15PwrSply_DD_Runnable_10ms_gKL15PwrSply_u8Wakeup_Val(1U);
  } else {
    if (KL15PwrSply_DD_flgRLBLampWkUp) {
      /* Switch: '<S1>/Switch1' incorporates:
       *  Constant: '<S1>/Constant21'
       */
      tmp = 2U;
    } else if (KL15PwrSply_DD_flgRRALampWkUp) {
      /* Switch: '<S1>/Switch2' incorporates:
       *  Constant: '<S1>/Constant8'
       *  Switch: '<S1>/Switch1'
       */
      tmp = 4U;
    } else if (KL15PwrSply_DD_flgRRBLampWkUp) {
      /* Switch: '<S1>/Switch3' incorporates:
       *  Constant: '<S1>/Constant9'
       *  Switch: '<S1>/Switch1'
       *  Switch: '<S1>/Switch2'
       */
      tmp = 8U;
    } else if (KL15PwrSply_DD_flgRearMotorWkUp) {
      /* Switch: '<S1>/Switch4' incorporates:
       *  Constant: '<S1>/Constant15'
       *  Switch: '<S1>/Switch1'
       *  Switch: '<S1>/Switch2'
       *  Switch: '<S1>/Switch3'
       */
      tmp = 10U;
    } else {
      /* Switch: '<S1>/Switch1' incorporates:
       *  Constant: '<S1>/Constant45'
       *  Switch: '<S1>/Switch2'
       *  Switch: '<S1>/Switch3'
       *  Switch: '<S1>/Switch4'
       */
      tmp = 0U;
    }

    /* Outport: '<Root>/gKL15PwrSply_u8Wakeup_Val' incorporates:
     *  Switch: '<S1>/Switch1'
     *  Switch: '<S1>/Switch2'
     *  Switch: '<S1>/Switch3'
     *  Switch: '<S1>/Switch4'
     */
    Rte_IWrite_KL15PwrSply_DD_Runnable_10ms_gKL15PwrSply_u8Wakeup_Val(tmp);
  }

  /* End of Switch: '<S1>/Switch' */

  /* Outputs for Enabled SubSystem: '<S37>/RealErrHold' incorporates:
   *  EnablePort: '<S201>/Enable'
   */
  /* Logic: '<S37>/Logical Operator7' incorporates:
   *  Constant: '<S37>/Constant33'
   *  Constant: '<S37>/Constant34'
   *  Inport: '<S201>/stRealErr'
   *  Logic: '<S37>/Logical Operator5'
   *  Logic: '<S37>/Logical Operator6'
   *  RelationalOperator: '<S37>/Relational Operator4'
   *  RelationalOperator: '<S37>/Relational Operator5'
   *  RelationalOperator: '<S37>/Relational Operator6'
   *  UnitDelay: '<S37>/Unit Delay2'
   */
  if (((0 == KL15PwrSply_DD_PwrSplyRealErr25) && rtb_LogicalOperator2) || ((KL15PwrSply_DD_DW.UnitDelay2_DSTATE_dh != KL15PwrSply_DD_PwrSplyRealErr25) && (0 != KL15PwrSply_DD_PwrSplyRealErr25))) {
    KL15PwrSply_DD_B.stRealErr_k = KL15PwrSply_DD_PwrSplyRealErr25;
  }

  /* End of Logic: '<S37>/Logical Operator7' */
  /* End of Outputs for SubSystem: '<S37>/RealErrHold' */

  /* SignalConversion: '<S1>/SignalConversion29' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[24] = KL15PwrSply_DD_B.stRealErr_k;

  /* SignalConversion: '<S1>/SignalConversion19' incorporates:
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[28] = KL15PwrSply_DD_B.DataTypeConversion2_h;

  /* SignalConversion: '<S1>/SignalConversion33' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[28] = KL15PwrSply_DD_B.stRealErr_i;

  /* SignalConversion: '<S1>/SignalConversion50' incorporates:
   *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
   */
  tmpIWrite_2[28] = KL15PwrSply_DD_B.Switch2_o;

  /* SignalConversion: '<S1>/SignalConversion17' incorporates:
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[26] = KL15PwrSply_DD_B.DataTypeConversion2_b;

  /* SignalConversion: '<S1>/SignalConversion31' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[26] = KL15PwrSply_DD_B.stRealErr_i4;

  /* SignalConversion: '<S1>/SignalConversion48' incorporates:
   *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
   */
  tmpIWrite_2[26] = KL15PwrSply_DD_B.Switch2_n;

  /* SignalConversion: '<S1>/SignalConversion18' incorporates:
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[27] = KL15PwrSply_DD_B.DataTypeConversion2_c;

  /* SignalConversion: '<S1>/SignalConversion32' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[27] = KL15PwrSply_DD_B.stRealErr_m;

  /* SignalConversion: '<S1>/SignalConversion49' incorporates:
   *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
   */
  tmpIWrite_2[27] = KL15PwrSply_DD_B.Switch2_p;

  /* SignalConversion: '<S1>/SignalConversion16' incorporates:
   *  Outport: '<Root>/PwrSply_abPwrSt_Val'
   */
  tmpIWrite_1[25] = KL15PwrSply_DD_B.DataTypeConversion2_hj;

  /* SignalConversion: '<S1>/SignalConversion30' incorporates:
   *  Outport: '<Root>/PwrSply_au8PwrFaultSt_Val'
   */
  tmpIWrite_3[25] = KL15PwrSply_DD_B.stRealErr_gb;

  /* SignalConversion: '<S1>/SignalConversion47' incorporates:
   *  Outport: '<Root>/PwrSply_au16PwrCurr_Val'
   */
  tmpIWrite_2[25] = KL15PwrSply_DD_B.Switch2_f;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  KL15PwrSply_DD_DW.UnitDelay_DSTATE = rtb_LogicalOperator2_tmp_tmp;

  /* Update for UnitDelay: '<S37>/Unit Delay' */
  KL15PwrSply_DD_DW.UnitDelay_DSTATE_m = tmpIRead_2[24];

  /* Update for UnitDelay: '<S37>/Unit Delay3' incorporates:
   *  DataTypeConversion: '<S37>/DataTypeConversion4'
   */
  KL15PwrSply_DD_DW.UnitDelay3_DSTATE = (KL15PwrSply_DD_PwrSply_stCtrl25 != 0);

  /* Update for UnitDelay: '<S3>/Unit Delay' */
  KL15PwrSply_DD_DW.UnitDelay_DSTATE_d = tmpIRead_2[7];

  /* Update for UnitDelay: '<S3>/Unit Delay3' incorporates:
   *  DataTypeConversion: '<S3>/DataTypeConversion4'
   */
  KL15PwrSply_DD_DW.UnitDelay3_DSTATE_l = (KL15PwrSply_DD_PwrSply_stCtrl08 != 0);

  /* Update for UnitDelay: '<S3>/Unit Delay2' */
  KL15PwrSply_DD_DW.UnitDelay2_DSTATE_f = KL15PwrSply_DD_PwrSplyRealErr08;

  /* Update for UnitDelay: '<S4>/Unit Delay' */
  KL15PwrSply_DD_DW.UnitDelay_DSTATE_g = tmpIRead_2[9];

  /* Update for UnitDelay: '<S4>/Unit Delay3' incorporates:
   *  DataTypeConversion: '<S4>/DataTypeConversion4'
   */
  KL15PwrSply_DD_DW.UnitDelay3_DSTATE_l2 = (KL15PwrSply_DD_PwrSply_stCtrl10 != 0);

  /* Update for UnitDelay: '<S4>/Unit Delay2' */
  KL15PwrSply_DD_DW.UnitDelay2_DSTATE_d = KL15PwrSply_DD_PwrSplyRealErr10;

  /* Update for UnitDelay: '<S5>/Unit Delay4' */
  KL15PwrSply_DD_DW.UnitDelay4_DSTATE_f = rtb_Switch_j;

  /* Update for UnitDelay: '<S5>/Unit Delay' */
  KL15PwrSply_DD_DW.UnitDelay_DSTATE_b = tmpIRead_2[1];

  /* Update for UnitDelay: '<S5>/Unit Delay2' */
  KL15PwrSply_DD_DW.UnitDelay2_DSTATE_hl = KL15PwrSply_DD_PwrSplyRealErr02;

  /* Update for UnitDelay: '<S6>/Unit Delay4' */
  KL15PwrSply_DD_DW.UnitDelay4_DSTATE_b = rtb_Switch_o;

  /* Update for UnitDelay: '<S6>/Unit Delay' */
  KL15PwrSply_DD_DW.UnitDelay_DSTATE_p = tmpIRead_2[0];

  /* Update for UnitDelay: '<S6>/Unit Delay2' */
  KL15PwrSply_DD_DW.UnitDelay2_DSTATE_ky = KL15PwrSply_DD_PwrSplyRealErr01;

  /* Update for UnitDelay: '<S7>/Unit Delay' */
  KL15PwrSply_DD_DW.UnitDelay_DSTATE_j = tmpIRead_2[11];

  /* Update for UnitDelay: '<S7>/Unit Delay3' incorporates:
   *  DataTypeConversion: '<S7>/DataTypeConversion4'
   */
  KL15PwrSply_DD_DW.UnitDelay3_DSTATE_o = (KL15PwrSply_DD_PwrSply_stCtrl12 != 0);

  /* Update for UnitDelay: '<S7>/Unit Delay2' */
  KL15PwrSply_DD_DW.UnitDelay2_DSTATE_p = KL15PwrSply_DD_PwrSplyRealErr12;

  /* Update for UnitDelay: '<S8>/Unit Delay' */
  KL15PwrSply_DD_DW.UnitDelay_DSTATE_f = tmpIRead_2[10];

  /* Update for UnitDelay: '<S8>/Unit Delay3' incorporates:
   *  DataTypeConversion: '<S8>/DataTypeConversion4'
   */
  KL15PwrSply_DD_DW.UnitDelay3_DSTATE_j = (KL15PwrSply_DD_PwrSply_stCtrl11 != 0);

  /* Update for UnitDelay: '<S8>/Unit Delay2' */
  KL15PwrSply_DD_DW.UnitDelay2_DSTATE_lb = KL15PwrSply_DD_PwrSplyRealErr11;

  /* Update for UnitDelay: '<S24>/Unit Delay' */
  KL15PwrSply_DD_DW.UnitDelay_DSTATE_c = tmpIRead_2[3];

  /* Update for UnitDelay: '<S24>/Unit Delay3' incorporates:
   *  DataTypeConversion: '<S24>/DataTypeConversion4'
   */
  KL15PwrSply_DD_DW.UnitDelay3_DSTATE_n = (KL15PwrSply_DD_PwrSply_stCtrl04 != 0);

  /* Update for UnitDelay: '<S24>/Unit Delay2' */
  KL15PwrSply_DD_DW.UnitDelay2_DSTATE_fp = KL15PwrSply_DD_PwrSplyRealErr04;

  /* Update for UnitDelay: '<S31>/Unit Delay' */
  KL15PwrSply_DD_DW.UnitDelay_DSTATE_jd = tmpIRead_2[8];

  /* Update for UnitDelay: '<S31>/Unit Delay3' incorporates:
   *  DataTypeConversion: '<S31>/DataTypeConversion4'
   */
  KL15PwrSply_DD_DW.UnitDelay3_DSTATE_i = (KL15PwrSply_DD_PwrSply_stCtrl09 != 0);

  /* Update for UnitDelay: '<S31>/Unit Delay2' */
  KL15PwrSply_DD_DW.UnitDelay2_DSTATE_kc = KL15PwrSply_DD_PwrSplyRealErr09;

  /* Update for UnitDelay: '<S32>/Unit Delay' */
  KL15PwrSply_DD_DW.UnitDelay_DSTATE_dr = tmpIRead_2[6];

  /* Update for UnitDelay: '<S32>/Unit Delay3' incorporates:
   *  DataTypeConversion: '<S32>/DataTypeConversion4'
   */
  KL15PwrSply_DD_DW.UnitDelay3_DSTATE_iy = (KL15PwrSply_DD_PwrSply_stCtrl07 != 0);

  /* Update for UnitDelay: '<S32>/Unit Delay2' */
  KL15PwrSply_DD_DW.UnitDelay2_DSTATE_im = KL15PwrSply_DD_PwrSplyRealErr07;

  /* Update for UnitDelay: '<S33>/Unit Delay' */
  KL15PwrSply_DD_DW.UnitDelay_DSTATE_drb = tmpIRead_2[2];

  /* Update for UnitDelay: '<S33>/Unit Delay3' incorporates:
   *  DataTypeConversion: '<S33>/DataTypeConversion4'
   */
  KL15PwrSply_DD_DW.UnitDelay3_DSTATE_h = (KL15PwrSply_DD_PwrSply_stCtrl03 != 0);

  /* Update for UnitDelay: '<S33>/Unit Delay2' */
  KL15PwrSply_DD_DW.UnitDelay2_DSTATE_dq = KL15PwrSply_DD_PwrSplyRealErr03;

  /* Update for UnitDelay: '<S37>/Unit Delay4' */
  KL15PwrSply_DD_DW.UnitDelay4_DSTATE_i = KL15PwrSply_DD_PwrSply_stCtrl25;

  /* Update for UnitDelay: '<S38>/Unit Delay' */
  KL15PwrSply_DD_DW.UnitDelay_DSTATE_a = tmpIRead_2[5];

  /* Update for UnitDelay: '<S38>/Unit Delay3' incorporates:
   *  DataTypeConversion: '<S38>/DataTypeConversion4'
   */
  KL15PwrSply_DD_DW.UnitDelay3_DSTATE_jp = (KL15PwrSply_DD_PwrSply_stCtrl06 != 0);

  /* Update for UnitDelay: '<S38>/Unit Delay2' */
  KL15PwrSply_DD_DW.UnitDelay2_DSTATE_nw = KL15PwrSply_DD_PwrSplyRealErr06;

  /* Update for UnitDelay: '<S38>/Unit Delay1' */
  KL15PwrSply_DD_DW.UnitDelay1_DSTATE = KL15PwrSply_DD_PwrSply_stCtrl06;

  /* Update for UnitDelay: '<S37>/Unit Delay1' */
  KL15PwrSply_DD_DW.UnitDelay1_DSTATE_d = KL15PwrSply_DD_PwrSply_stCtrl25;

  /* Update for UnitDelay: '<S33>/Unit Delay1' */
  KL15PwrSply_DD_DW.UnitDelay1_DSTATE_l = KL15PwrSply_DD_PwrSply_stCtrl03;

  /* Update for UnitDelay: '<S32>/Unit Delay1' */
  KL15PwrSply_DD_DW.UnitDelay1_DSTATE_f = KL15PwrSply_DD_PwrSply_stCtrl07;

  /* Update for UnitDelay: '<S31>/Unit Delay1' */
  KL15PwrSply_DD_DW.UnitDelay1_DSTATE_o = KL15PwrSply_DD_PwrSply_stCtrl09;

  /* Update for UnitDelay: '<S24>/Unit Delay1' */
  KL15PwrSply_DD_DW.UnitDelay1_DSTATE_g = KL15PwrSply_DD_PwrSply_stCtrl04;

  /* Update for UnitDelay: '<S8>/Unit Delay1' */
  KL15PwrSply_DD_DW.UnitDelay1_DSTATE_h = KL15PwrSply_DD_PwrSply_stCtrl11;

  /* Update for UnitDelay: '<S7>/Unit Delay1' */
  KL15PwrSply_DD_DW.UnitDelay1_DSTATE_gv = KL15PwrSply_DD_PwrSply_stCtrl12;

  /* Update for UnitDelay: '<S6>/Unit Delay1' */
  KL15PwrSply_DD_DW.UnitDelay1_DSTATE_m = rtb_Switch_o;

  /* Update for UnitDelay: '<S5>/Unit Delay1' */
  KL15PwrSply_DD_DW.UnitDelay1_DSTATE_i = rtb_Switch_j;

  /* Update for UnitDelay: '<S4>/Unit Delay1' */
  KL15PwrSply_DD_DW.UnitDelay1_DSTATE_fj = KL15PwrSply_DD_PwrSply_stCtrl10;

  /* Update for UnitDelay: '<S3>/Unit Delay1' */
  KL15PwrSply_DD_DW.UnitDelay1_DSTATE_mg = KL15PwrSply_DD_PwrSply_stCtrl08;

  /* Update for UnitDelay: '<S37>/Unit Delay2' */
  KL15PwrSply_DD_DW.UnitDelay2_DSTATE_dh = KL15PwrSply_DD_PwrSplyRealErr25;

  /* End of Outputs for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_KL15PwrSply_DD_Runnable_10ms_at_outport_1' */

  /* Outport: '<Root>/gKL15PwrSply_u32AllowSleep_Local_Val' */
  Rte_IWrite_KL15PwrSply_DD_Runnable_10ms_gKL15PwrSply_u32AllowSleep_Local_Val(tmpIWrite);

  /* Outport: '<Root>/gKL15PwrSply_u32AllowSleep_NW_Val' */
  Rte_IWrite_KL15PwrSply_DD_Runnable_10ms_gKL15PwrSply_u32AllowSleep_NW_Val(tmpIWrite_0);

  /* Outport: '<Root>/PwrSply_abPwrSt_Val' */
  Rte_IWrite_KL15PwrSply_DD_Runnable_10ms_PwrSply_abPwrSt_Val(tmpIWrite_1);

  /* Outport: '<Root>/PwrSply_au16PwrCurr_Val' */
  Rte_IWrite_KL15PwrSply_DD_Runnable_10ms_PwrSply_au16PwrCurr_Val(tmpIWrite_2);

  /* Outport: '<Root>/PwrSply_au8PwrFaultSt_Val' */
  Rte_IWrite_KL15PwrSply_DD_Runnable_10ms_PwrSply_au8PwrFaultSt_Val(tmpIWrite_3);
}

/* Model initialize function */
FUNC(void, KL15PwrSply_DD_CODE) KL15PwrSply_DD_Runnable_Init(void)
{
  /* ConstCode for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_KL15PwrSply_DD_Runnable_10ms_at_outport_1' incorporates:
   *  SubSystem: '<Root>/KL15PwrSply_DD_Runnable_10ms_sys'
   */
  /* ConstCode for Constant: '<S1>/Constant6' */
  KL15PwrSply_DD_PwrSply_stCtrl13 = 1U;

  /* ConstCode for Constant: '<S1>/Constant7' */
  KL15PwrSply_DD_PwrSply_stCtrl14 = 1U;

  /* End of ConstCode for RootInportFunctionCallGenerator: '<Root>/RootFcnCall_InsertedFor_KL15PwrSply_DD_Runnable_10ms_at_outport_1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
