/*
 * @brief CMP Registers and control functions
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

#ifndef __CMP_001_H_
#define __CMP_001_H_

#include "sys_config.h"
#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @defgroup IP_CMP_001 IP: Comparator register block and driver
 * @ingroup IP_Drivers
 * Comparator
 * @{
 */

/**
 * @brief Comparator (CMP) register block structure
 */
typedef struct {                                    /*!< (@ 0x40020000) COMPARATOR Structure                                   */
  __IO uint32_t  CMP_CTRL;                              /*!< (@ 0x40020000) Comparator block control register                      */
  __IO uint32_t  CMP_CTRL0;                             /*!< (@ 0x40020004) Comparator 0 control register                          */
  __IO uint32_t  CMP_CTRL1;                             /*!< (@ 0x40020008) Comparator 1 control register                          */
} IP_CMP_001_Type;


/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif /* __CMP_001_H_ */
