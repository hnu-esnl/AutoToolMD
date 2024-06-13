/*<Head>
 *************************************************************************
 *                                                                                                     *
 *                      UAES                                                                      *
 *                                                                                                     *
 *          Alle Rechte vorbehalten - All rights reserved                         *
 *                                                                                                     *
 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:IoHwAb_APP_Mapping.h$
 *
 * $Author____:$
 *
 * $Function__: APP_Adaptor Abstraction layer Mapping$
 *
 *************************************************************************
 * $Domain____:$
 * $User______:$
 * $Date______:$
 * $Class_____:$
 * $Name______:$
 * $Variant___:$
 * $Revision__:$
 * $Type______:h$
 * $State_____:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History$
 *
 *
 *****************************************************************************
</Head>*/
#ifndef WIN_MAPPING_H
#define WIN_MAPPING_H

#include "IoHwAb_Label.h"
#include "Win_Dummy.h"




/************ IO Label Mapping L2 to L3 ***************/

#define I_A_RLBossWndSw                   I_A_IAN06 
#define I_A_RLlocalWndSw                  I_A_IAN08 
#define I_A_RRBossWndSw                   I_A_IAN07 
#define I_A_RRlocalWndSw                  I_A_IAN09








#define I_S_RLDoorHSUSwt                    I_S_MUX_IDL21  
#define I_S_RRDoorHSUSwt                    I_S_MUX_IDL25


#define O_H_RLWndOutputModCtrl              O_S_STATE_OHB0605 
#define O_H_RRWndOutputModCtrl              O_S_STATE_OHB0807 





#endif
