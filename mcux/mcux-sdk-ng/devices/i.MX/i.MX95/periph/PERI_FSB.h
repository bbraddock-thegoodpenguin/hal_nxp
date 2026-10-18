/*
** ###################################################################
**     Processors:          MIMX95_cm33
**
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MIMX95_cm33
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2023 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**
** ###################################################################
*/

/*!
 * @file MIMX95_FSB.h
 * @version
 * @date
 * @brief CMSIS Peripheral Access Layer for MIMX95_FSB
 *
 * CMSIS Peripheral Access Layer for MIMX95
 */

/* Prevention from multiple including the same memory map */
#if !defined(MIMX95_FSB_H_)  /* Check if memory map has not been already included */
#define MIMX95_FSB_H_

#if (defined(CPU_MIMX9506AVZXN_ca55) || defined(CPU_MIMX9506XVZXN_ca55))
#include "MIMX9506_ca55_COMMON.h"
#elif (defined(CPU_MIMX9506AVZXN_cm33) || defined(CPU_MIMX9506XVZXN_cm33))
#include "MIMX9506_cm33_COMMON.h"
#elif (defined(CPU_MIMX9506AVZXN_cm7) || defined(CPU_MIMX9506XVZXN_cm7))
#include "MIMX9506_cm7_COMMON.h"
#elif (defined(CPU_MIMX9534AVZXN_ca55) || defined(CPU_MIMX9534CVTXN_ca55) || defined(CPU_MIMX9534CVZXN_ca55) || defined(CPU_MIMX9534DVTXN_ca55) || defined(CPU_MIMX9534DVZXN_ca55) || defined(CPU_MIMX9534XVTXN_ca55) || defined(CPU_MIMX9534XVZXN_ca55))
#include "MIMX9534_ca55_COMMON.h"
#elif (defined(CPU_MIMX9534AVZXN_cm33) || defined(CPU_MIMX9534CVTXN_cm33) || defined(CPU_MIMX9534CVZXN_cm33) || defined(CPU_MIMX9534DVTXN_cm33) || defined(CPU_MIMX9534DVZXN_cm33) || defined(CPU_MIMX9534XVTXN_cm33) || defined(CPU_MIMX9534XVZXN_cm33))
#include "MIMX9534_cm33_COMMON.h"
#elif (defined(CPU_MIMX9534AVZXN_cm7) || defined(CPU_MIMX9534CVTXN_cm7) || defined(CPU_MIMX9534CVZXN_cm7) || defined(CPU_MIMX9534DVTXN_cm7) || defined(CPU_MIMX9534DVZXN_cm7) || defined(CPU_MIMX9534XVTXN_cm7) || defined(CPU_MIMX9534XVZXN_cm7))
#include "MIMX9534_cm7_COMMON.h"
#elif (defined(CPU_MIMX9536AVZXN_ca55) || defined(CPU_MIMX9536CVTXN_ca55) || defined(CPU_MIMX9536CVZXN_ca55) || defined(CPU_MIMX9536DVTXN_ca55) || defined(CPU_MIMX9536DVZXN_ca55) || defined(CPU_MIMX9536DVZXQ_ca55) || defined(CPU_MIMX9536XVTXN_ca55) || defined(CPU_MIMX9536XVZXN_ca55))
#include "MIMX9536_ca55_COMMON.h"
#elif (defined(CPU_MIMX9536AVZXN_cm33) || defined(CPU_MIMX9536CVTXN_cm33) || defined(CPU_MIMX9536CVZXN_cm33) || defined(CPU_MIMX9536DVTXN_cm33) || defined(CPU_MIMX9536DVZXN_cm33) || defined(CPU_MIMX9536DVZXQ_cm33) || defined(CPU_MIMX9536XVTXN_cm33) || defined(CPU_MIMX9536XVZXN_cm33))
#include "MIMX9536_cm33_COMMON.h"
#elif (defined(CPU_MIMX9536AVZXN_cm7) || defined(CPU_MIMX9536CVTXN_cm7) || defined(CPU_MIMX9536CVZXN_cm7) || defined(CPU_MIMX9536DVTXN_cm7) || defined(CPU_MIMX9536DVZXN_cm7) || defined(CPU_MIMX9536DVZXQ_cm7) || defined(CPU_MIMX9536XVTXN_cm7) || defined(CPU_MIMX9536XVZXN_cm7))
#include "MIMX9536_cm7_COMMON.h"
#elif (defined(CPU_MIMX9546AVZXN_ca55) || defined(CPU_MIMX9546XVZXN_ca55))
#include "MIMX9546_ca55_COMMON.h"
#elif (defined(CPU_MIMX9546AVZXN_cm33) || defined(CPU_MIMX9546XVZXN_cm33))
#include "MIMX9546_cm33_COMMON.h"
#elif (defined(CPU_MIMX9546AVZXN_cm7) || defined(CPU_MIMX9546XVZXN_cm7))
#include "MIMX9546_cm7_COMMON.h"
#elif (defined(CPU_MIMX9554AVTXN_ca55) || defined(CPU_MIMX9554AVZXN_ca55) || defined(CPU_MIMX9554CVTXN_ca55) || defined(CPU_MIMX9554CVZXN_ca55) || defined(CPU_MIMX9554DVTXN_ca55) || defined(CPU_MIMX9554DVZXN_ca55) || defined(CPU_MIMX9554XVTXN_ca55) || defined(CPU_MIMX9554XVZXN_ca55))
#include "MIMX9554_ca55_COMMON.h"
#elif (defined(CPU_MIMX9554AVTXN_cm33) || defined(CPU_MIMX9554AVZXN_cm33) || defined(CPU_MIMX9554CVTXN_cm33) || defined(CPU_MIMX9554CVZXN_cm33) || defined(CPU_MIMX9554DVTXN_cm33) || defined(CPU_MIMX9554DVZXN_cm33) || defined(CPU_MIMX9554XVTXN_cm33) || defined(CPU_MIMX9554XVZXN_cm33))
#include "MIMX9554_cm33_COMMON.h"
#elif (defined(CPU_MIMX9554AVTXN_cm7) || defined(CPU_MIMX9554AVZXN_cm7) || defined(CPU_MIMX9554CVTXN_cm7) || defined(CPU_MIMX9554CVZXN_cm7) || defined(CPU_MIMX9554DVTXN_cm7) || defined(CPU_MIMX9554DVZXN_cm7) || defined(CPU_MIMX9554XVTXN_cm7) || defined(CPU_MIMX9554XVZXN_cm7))
#include "MIMX9554_cm7_COMMON.h"
#elif (defined(CPU_MIMX9556AVZXN_ca55) || defined(CPU_MIMX9556CVTXN_ca55) || defined(CPU_MIMX9556CVZXN_ca55) || defined(CPU_MIMX9556DVTXN_ca55) || defined(CPU_MIMX9556DVZXN_ca55) || defined(CPU_MIMX9556XVTXN_ca55) || defined(CPU_MIMX9556XVZXN_ca55))
#include "MIMX9556_ca55_COMMON.h"
#elif (defined(CPU_MIMX9556AVZXN_cm33) || defined(CPU_MIMX9556CVTXN_cm33) || defined(CPU_MIMX9556CVZXN_cm33) || defined(CPU_MIMX9556DVTXN_cm33) || defined(CPU_MIMX9556DVZXN_cm33) || defined(CPU_MIMX9556XVTXN_cm33) || defined(CPU_MIMX9556XVZXN_cm33))
#include "MIMX9556_cm33_COMMON.h"
#elif (defined(CPU_MIMX9556AVZXN_cm7) || defined(CPU_MIMX9556CVTXN_cm7) || defined(CPU_MIMX9556CVZXN_cm7) || defined(CPU_MIMX9556DVTXN_cm7) || defined(CPU_MIMX9556DVZXN_cm7) || defined(CPU_MIMX9556XVTXN_cm7) || defined(CPU_MIMX9556XVZXN_cm7))
#include "MIMX9556_cm7_COMMON.h"
#elif (defined(CPU_MIMX9574AVZXN_ca55) || defined(CPU_MIMX9574CVTXN_ca55) || defined(CPU_MIMX9574CVZXN_ca55) || defined(CPU_MIMX9574DVTXN_ca55) || defined(CPU_MIMX9574DVZXN_ca55) || defined(CPU_MIMX9574XVTXN_ca55) || defined(CPU_MIMX9574XVZXN_ca55))
#include "MIMX9574_ca55_COMMON.h"
#elif (defined(CPU_MIMX9574AVZXN_cm33) || defined(CPU_MIMX9574CVTXN_cm33) || defined(CPU_MIMX9574CVZXN_cm33) || defined(CPU_MIMX9574DVTXN_cm33) || defined(CPU_MIMX9574DVZXN_cm33) || defined(CPU_MIMX9574XVTXN_cm33) || defined(CPU_MIMX9574XVZXN_cm33))
#include "MIMX9574_cm33_COMMON.h"
#elif (defined(CPU_MIMX9574AVZXN_cm7) || defined(CPU_MIMX9574CVTXN_cm7) || defined(CPU_MIMX9574CVZXN_cm7) || defined(CPU_MIMX9574DVTXN_cm7) || defined(CPU_MIMX9574DVZXN_cm7) || defined(CPU_MIMX9574XVTXN_cm7) || defined(CPU_MIMX9574XVZXN_cm7))
#include "MIMX9574_cm7_COMMON.h"
#elif (defined(CPU_MIMX9576AVZXN_ca55) || defined(CPU_MIMX9576CVTXN_ca55) || defined(CPU_MIMX9576CVZXN_ca55) || defined(CPU_MIMX9576DVTXN_ca55) || defined(CPU_MIMX9576DVZXN_ca55) || defined(CPU_MIMX9576XVTXN_ca55) || defined(CPU_MIMX9576XVZXN_ca55))
#include "MIMX9576_ca55_COMMON.h"
#elif (defined(CPU_MIMX9576AVZXN_cm33) || defined(CPU_MIMX9576CVTXN_cm33) || defined(CPU_MIMX9576CVZXN_cm33) || defined(CPU_MIMX9576DVTXN_cm33) || defined(CPU_MIMX9576DVZXN_cm33) || defined(CPU_MIMX9576XVTXN_cm33) || defined(CPU_MIMX9576XVZXN_cm33))
#include "MIMX9576_cm33_COMMON.h"
#elif (defined(CPU_MIMX9576AVZXN_cm7) || defined(CPU_MIMX9576CVTXN_cm7) || defined(CPU_MIMX9576CVZXN_cm7) || defined(CPU_MIMX9576DVTXN_cm7) || defined(CPU_MIMX9576DVZXN_cm7) || defined(CPU_MIMX9576XVTXN_cm7) || defined(CPU_MIMX9576XVZXN_cm7))
#include "MIMX9576_cm7_COMMON.h"
#elif (defined(CPU_MIMX9586AVZXN_ca55) || defined(CPU_MIMX9586XVZXN_ca55))
#include "MIMX9586_ca55_COMMON.h"
#elif (defined(CPU_MIMX9586AVZXN_cm33) || defined(CPU_MIMX9586XVZXN_cm33))
#include "MIMX9586_cm33_COMMON.h"
#elif (defined(CPU_MIMX9586AVZXN_cm7) || defined(CPU_MIMX9586XVZXN_cm7))
#include "MIMX9586_cm7_COMMON.h"
#elif (defined(CPU_MIMX9594AVZXN_ca55) || defined(CPU_MIMX9594CVTXN_ca55) || defined(CPU_MIMX9594CVZXN_ca55) || defined(CPU_MIMX9594DVTXN_ca55) || defined(CPU_MIMX9594DVZXN_ca55) || defined(CPU_MIMX9594XVTXN_ca55) || defined(CPU_MIMX9594XVZXN_ca55))
#include "MIMX9594_ca55_COMMON.h"
#elif (defined(CPU_MIMX9594AVZXN_cm33) || defined(CPU_MIMX9594CVTXN_cm33) || defined(CPU_MIMX9594CVZXN_cm33) || defined(CPU_MIMX9594DVTXN_cm33) || defined(CPU_MIMX9594DVZXN_cm33) || defined(CPU_MIMX9594XVTXN_cm33) || defined(CPU_MIMX9594XVZXN_cm33))
#include "MIMX9594_cm33_COMMON.h"
#elif (defined(CPU_MIMX9594AVZXN_cm7) || defined(CPU_MIMX9594CVTXN_cm7) || defined(CPU_MIMX9594CVZXN_cm7) || defined(CPU_MIMX9594DVTXN_cm7) || defined(CPU_MIMX9594DVZXN_cm7) || defined(CPU_MIMX9594XVTXN_cm7) || defined(CPU_MIMX9594XVZXN_cm7))
#include "MIMX9594_cm7_COMMON.h"
#elif (defined(CPU_MIMX9596AVZXN_ca55) || defined(CPU_MIMX9596CVTXN_ca55) || defined(CPU_MIMX9596CVZXN_ca55) || defined(CPU_MIMX9596DVTXN_ca55) || defined(CPU_MIMX9596DVZXN_ca55) || defined(CPU_MIMX9596DVZXQ_ca55) || defined(CPU_MIMX9596XVTXN_ca55) || defined(CPU_MIMX9596XVZXN_ca55))
#include "MIMX9596_ca55_COMMON.h"
#elif (defined(CPU_MIMX9596AVZXN_cm33) || defined(CPU_MIMX9596CVTXN_cm33) || defined(CPU_MIMX9596CVZXN_cm33) || defined(CPU_MIMX9596DVTXN_cm33) || defined(CPU_MIMX9596DVZXN_cm33) || defined(CPU_MIMX9596DVZXQ_cm33) || defined(CPU_MIMX9596XVTXN_cm33) || defined(CPU_MIMX9596XVZXN_cm33))
#include "MIMX9596_cm33_COMMON.h"
#elif (defined(CPU_MIMX9596AVZXN_cm7) || defined(CPU_MIMX9596CVTXN_cm7) || defined(CPU_MIMX9596CVZXN_cm7) || defined(CPU_MIMX9596DVTXN_cm7) || defined(CPU_MIMX9596DVZXN_cm7) || defined(CPU_MIMX9596DVZXQ_cm7) || defined(CPU_MIMX9596XVTXN_cm7) || defined(CPU_MIMX9596XVZXN_cm7))
#include "MIMX9596_cm7_COMMON.h"
#elif (defined(CPU_MIMX95N4AVTXN_ca55) || defined(CPU_MIMX95N4AVZXN_ca55) || defined(CPU_MIMX95N4CVTXN_ca55) || defined(CPU_MIMX95N4CVZXN_ca55) || defined(CPU_MIMX95N4DVTXN_ca55) || defined(CPU_MIMX95N4DVZXN_ca55) || defined(CPU_MIMX95N4XVTXN_ca55) || defined(CPU_MIMX95N4XVZXN_ca55))
#include "MIMX95N4_ca55_COMMON.h"
#elif (defined(CPU_MIMX95N4AVTXN_cm33) || defined(CPU_MIMX95N4AVZXN_cm33) || defined(CPU_MIMX95N4CVTXN_cm33) || defined(CPU_MIMX95N4CVZXN_cm33) || defined(CPU_MIMX95N4DVTXN_cm33) || defined(CPU_MIMX95N4DVZXN_cm33) || defined(CPU_MIMX95N4XVTXN_cm33) || defined(CPU_MIMX95N4XVZXN_cm33))
#include "MIMX95N4_cm33_COMMON.h"
#elif (defined(CPU_MIMX95N4AVTXN_cm7) || defined(CPU_MIMX95N4AVZXN_cm7) || defined(CPU_MIMX95N4CVTXN_cm7) || defined(CPU_MIMX95N4CVZXN_cm7) || defined(CPU_MIMX95N4DVTXN_cm7) || defined(CPU_MIMX95N4DVZXN_cm7) || defined(CPU_MIMX95N4XVTXN_cm7) || defined(CPU_MIMX95N4XVZXN_cm7))
#include "MIMX95N4_cm7_COMMON.h"
#elif (defined(CPU_MIMX95N6AVTXN_ca55) || defined(CPU_MIMX95N6AVZXN_ca55) || defined(CPU_MIMX95N6CVTXN_ca55) || defined(CPU_MIMX95N6CVYXN_ca55) || defined(CPU_MIMX95N6CVZXN_ca55) || defined(CPU_MIMX95N6DVTXN_ca55) || defined(CPU_MIMX95N6DVZXN_ca55) || defined(CPU_MIMX95N6XVTXN_ca55) || defined(CPU_MIMX95N6XVZXN_ca55))
#include "MIMX95N6_ca55_COMMON.h"
#elif (defined(CPU_MIMX95N6AVTXN_cm33) || defined(CPU_MIMX95N6AVZXN_cm33) || defined(CPU_MIMX95N6CVTXN_cm33) || defined(CPU_MIMX95N6CVYXN_cm33) || defined(CPU_MIMX95N6CVZXN_cm33) || defined(CPU_MIMX95N6DVTXN_cm33) || defined(CPU_MIMX95N6DVZXN_cm33) || defined(CPU_MIMX95N6XVTXN_cm33) || defined(CPU_MIMX95N6XVZXN_cm33))
#include "MIMX95N6_cm33_COMMON.h"
#elif (defined(CPU_MIMX95N6AVTXN_cm7) || defined(CPU_MIMX95N6AVZXN_cm7) || defined(CPU_MIMX95N6CVTXN_cm7) || defined(CPU_MIMX95N6CVYXN_cm7) || defined(CPU_MIMX95N6CVZXN_cm7) || defined(CPU_MIMX95N6DVTXN_cm7) || defined(CPU_MIMX95N6DVZXN_cm7) || defined(CPU_MIMX95N6XVTXN_cm7) || defined(CPU_MIMX95N6XVZXN_cm7))
#include "MIMX95N6_cm7_COMMON.h"
#else
  #error "No valid CPU defined!"
#endif

/* ----------------------------------------------------------------------------
   -- FSB Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FSB_Peripheral_Access_Layer FSB Peripheral Access Layer
 * @{
 */

/** FSB - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[0x8000];
  __IO uint32_t FUSE[8192];                     /**< Fuse Value Registers, offset: 0x8000 */
} FSB_Type;

/* FSB - Peripheral instance base addresses */
/** Peripheral FSB base address */
#define FSB_BASE                                (0x47510000u)
/** Peripheral FSB base pointer */
#define FSB                                     ((FSB_Type *)FSB_BASE)
/** Array initializer of FSB peripheral base addresses */
#define FSB_BASE_ADDRS                          { FSB_BASE }
/** Array initializer of FSB peripheral base pointers */
#define FSB_BASE_PTRS                           { FSB }

/*!
 * @}
 */ /* end of group FSB_Peripheral_Access_Layer */

#endif  /* #if !defined(MIMX95_FSB_H_) */
