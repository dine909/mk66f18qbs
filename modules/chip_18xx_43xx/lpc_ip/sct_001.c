/*
 * @brief State Configurable Timer Registers and control functions
 *
 * @note
 * Copyright(C) NXP Semiconductors, 2012
 * All rights reserved.
 *
 * @par
 * Software that is described herein is for illustrative purposes only
 * which provides customers with programming information regarding the
 * LPC products.  This software is supplied "AS IS" without any warranties of
 * any kind, and NXP Semiconductors and its licensor disclaim any and
 * all warranties, express or implied, including all implied warranties of
 * merchantability, fitness for a particular purpose and non-infringement of
 * intellectual property rights.  NXP Semiconductors assumes no responsibility
 * or liability for the use of the software, conveys no license or rights under any
 * patent, copyright, mask work right, or any other intellectual property rights in
 * or to any products. NXP Semiconductors reserves the right to make changes
 * in the software without notification. NXP Semiconductors also makes no
 * representation or warranty that such application will be suitable for the
 * specified use without further testing or modification.
 *
 * @par
 * Permission to use, copy, modify, and distribute this software and its
 * documentation is hereby granted, under NXP Semiconductors' and its
 * licensor's relevant copyrights in the software, without fee, provided that it
 * is used in conjunction with NXP Semiconductors microcontrollers.  This
 * copyright, permission, and disclaimer notice must appear in all copies of
 * this code.
 */

#include "sct_001.h"

/*****************************************************************************
 * Private types/enumerations/variables
 ****************************************************************************/

/*****************************************************************************
 * Public types/enumerations/variables
 ****************************************************************************/

/*****************************************************************************
 * Private functions
 ****************************************************************************/

/*****************************************************************************
 * Public functions
 ****************************************************************************/

/* Select 16/32 bit SCT counter */
void IP_SCT_Config(IP_SCT_001_Type *pSCT, uint32_t value)
{
	pSCT->CONFIG = value;
}

/* Set/Clear SCT control register */
void IP_SCT_ControlSetClr(IP_SCT_001_Type *pSCT, uint32_t value,
						  FunctionalState ena)
{
	uint32_t tem;

	tem = pSCT->CTRL_U;
	if (ena == ENABLE) {
		tem |= value;
	}
	else {
		tem &= (~value);
	}
	pSCT->CTRL_U = tem;
}

/* Set Conflict resolution */
void IP_SCT_ConflictResolutionSet(IP_SCT_001_Type *pSCT, uint8_t outnum, uint8_t value)
{
	uint32_t tem;

	tem = pSCT->RES;
	tem &= ~(0x03 << (2 * outnum));
	tem |= (value << (2 * outnum));
	pSCT->RES = tem;
}

/* Clear SCT event generating interrupt request */
void IP_SCT_EventFlagClear(IP_SCT_001_Type *pSCT, uint8_t even_num)
{
	pSCT->EVFLAG = (1 << (even_num));
}

/* --------------------------------- End Of File ------------------------------ */
