/*
** ###################################################################
**     Compilers:           Keil ARM C/C++ Compiler
**                          Freescale C/C++ for Embedded ARM
**                          GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**
**     Reference manual:    K22P121M100SF9RM, Rev. 1, April 25, 2014
**     Version:             rev. 1.3, 2014-05-06
**     Build:               b140604
**
**     Abstract:
**         Extension to the CMSIS register access layer header.
**
**     Copyright (c) 2014 Freescale Semiconductor, Inc.
**     All rights reserved.
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**     http:                 www.freescale.com
**     mail:                 support@freescale.com
**
**     Revisions:
**     - rev. 1.0 (2013-11-01)
**         Initial version.
**     - rev. 1.1 (2013-12-20)
**         Update according to reference manual rev. 0.1,
**     - rev. 1.2 (2014-02-10)
**         The declaration of clock configurations has been moved to separate header file system_MK22F12810.h
**     - rev. 1.3 (2014-05-06)
**         Update according to reference manual rev. 1.0,
**         Update of system and startup files.
**         Module access macro module_BASES replaced by module_BASE_PTRS.
**
** ###################################################################
*/

/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_RFVBAT_REGISTERS_H__
#define __HW_RFVBAT_REGISTERS_H__

#include "MK22F12810.h"
#include "fsl_bitaccess.h"

/*
 * MK22F12810 RFVBAT
 *
 * VBAT register file
 *
 * Registers defined in this header file:
 * - HW_RFVBAT_REGn - VBAT register file register
 *
 * - hw_rfvbat_t - Struct containing all module registers.
 */

#define HW_RFVBAT_INSTANCE_COUNT (1U) /*!< Number of instances of the RFVBAT module. */

/*******************************************************************************
 * HW_RFVBAT_REGn - VBAT register file register
 ******************************************************************************/

/*!
 * @brief HW_RFVBAT_REGn - VBAT register file register (RW)
 *
 * Reset value: 0x00000000U
 *
 * Each register can be accessed as 8-, 16-, or 32-bits.
 */
typedef union _hw_rfvbat_regn
{
    uint32_t U;
    struct _hw_rfvbat_regn_bitfields
    {
        uint32_t LL : 8;               /*!< [7:0]  */
        uint32_t LH : 8;               /*!< [15:8]  */
        uint32_t HL : 8;               /*!< [23:16]  */
        uint32_t HH : 8;               /*!< [31:24]  */
    } B;
} hw_rfvbat_regn_t;

/*!
 * @name Constants and macros for entire RFVBAT_REGn register
 */
/*@{*/
#define HW_RFVBAT_REGn_COUNT (8U)

#define HW_RFVBAT_REGn_ADDR(x, n) ((x) + 0x0U + (0x4U * (n)))

#define HW_RFVBAT_REGn(x, n)     (*(__IO hw_rfvbat_regn_t *) HW_RFVBAT_REGn_ADDR(x, n))
#define HW_RFVBAT_REGn_RD(x, n)  (HW_RFVBAT_REGn(x, n).U)
#define HW_RFVBAT_REGn_WR(x, n, v) (HW_RFVBAT_REGn(x, n).U = (v))
#define HW_RFVBAT_REGn_SET(x, n, v) (HW_RFVBAT_REGn_WR(x, n, HW_RFVBAT_REGn_RD(x, n) |  (v)))
#define HW_RFVBAT_REGn_CLR(x, n, v) (HW_RFVBAT_REGn_WR(x, n, HW_RFVBAT_REGn_RD(x, n) & ~(v)))
#define HW_RFVBAT_REGn_TOG(x, n, v) (HW_RFVBAT_REGn_WR(x, n, HW_RFVBAT_REGn_RD(x, n) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual RFVBAT_REGn bitfields
 */

/*!
 * @name Register RFVBAT_REGn, field LL[7:0] (RW)
 *
 * Low lower byte
 */
/*@{*/
#define BP_RFVBAT_REGn_LL    (0U)          /*!< Bit position for RFVBAT_REGn_LL. */
#define BM_RFVBAT_REGn_LL    (0x000000FFU) /*!< Bit mask for RFVBAT_REGn_LL. */
#define BS_RFVBAT_REGn_LL    (8U)          /*!< Bit field size in bits for RFVBAT_REGn_LL. */

/*! @brief Read current value of the RFVBAT_REGn_LL field. */
#define BR_RFVBAT_REGn_LL(x, n) (HW_RFVBAT_REGn(x, n).B.LL)

/*! @brief Format value for bitfield RFVBAT_REGn_LL. */
#define BF_RFVBAT_REGn_LL(v) ((uint32_t)((uint32_t)(v) << BP_RFVBAT_REGn_LL) & BM_RFVBAT_REGn_LL)

/*! @brief Set the LL field to a new value. */
#define BW_RFVBAT_REGn_LL(x, n, v) (HW_RFVBAT_REGn_WR(x, n, (HW_RFVBAT_REGn_RD(x, n) & ~BM_RFVBAT_REGn_LL) | BF_RFVBAT_REGn_LL(v)))
/*@}*/

/*!
 * @name Register RFVBAT_REGn, field LH[15:8] (RW)
 *
 * Low higher byte
 */
/*@{*/
#define BP_RFVBAT_REGn_LH    (8U)          /*!< Bit position for RFVBAT_REGn_LH. */
#define BM_RFVBAT_REGn_LH    (0x0000FF00U) /*!< Bit mask for RFVBAT_REGn_LH. */
#define BS_RFVBAT_REGn_LH    (8U)          /*!< Bit field size in bits for RFVBAT_REGn_LH. */

/*! @brief Read current value of the RFVBAT_REGn_LH field. */
#define BR_RFVBAT_REGn_LH(x, n) (HW_RFVBAT_REGn(x, n).B.LH)

/*! @brief Format value for bitfield RFVBAT_REGn_LH. */
#define BF_RFVBAT_REGn_LH(v) ((uint32_t)((uint32_t)(v) << BP_RFVBAT_REGn_LH) & BM_RFVBAT_REGn_LH)

/*! @brief Set the LH field to a new value. */
#define BW_RFVBAT_REGn_LH(x, n, v) (HW_RFVBAT_REGn_WR(x, n, (HW_RFVBAT_REGn_RD(x, n) & ~BM_RFVBAT_REGn_LH) | BF_RFVBAT_REGn_LH(v)))
/*@}*/

/*!
 * @name Register RFVBAT_REGn, field HL[23:16] (RW)
 *
 * High lower byte
 */
/*@{*/
#define BP_RFVBAT_REGn_HL    (16U)         /*!< Bit position for RFVBAT_REGn_HL. */
#define BM_RFVBAT_REGn_HL    (0x00FF0000U) /*!< Bit mask for RFVBAT_REGn_HL. */
#define BS_RFVBAT_REGn_HL    (8U)          /*!< Bit field size in bits for RFVBAT_REGn_HL. */

/*! @brief Read current value of the RFVBAT_REGn_HL field. */
#define BR_RFVBAT_REGn_HL(x, n) (HW_RFVBAT_REGn(x, n).B.HL)

/*! @brief Format value for bitfield RFVBAT_REGn_HL. */
#define BF_RFVBAT_REGn_HL(v) ((uint32_t)((uint32_t)(v) << BP_RFVBAT_REGn_HL) & BM_RFVBAT_REGn_HL)

/*! @brief Set the HL field to a new value. */
#define BW_RFVBAT_REGn_HL(x, n, v) (HW_RFVBAT_REGn_WR(x, n, (HW_RFVBAT_REGn_RD(x, n) & ~BM_RFVBAT_REGn_HL) | BF_RFVBAT_REGn_HL(v)))
/*@}*/

/*!
 * @name Register RFVBAT_REGn, field HH[31:24] (RW)
 *
 * High higher byte
 */
/*@{*/
#define BP_RFVBAT_REGn_HH    (24U)         /*!< Bit position for RFVBAT_REGn_HH. */
#define BM_RFVBAT_REGn_HH    (0xFF000000U) /*!< Bit mask for RFVBAT_REGn_HH. */
#define BS_RFVBAT_REGn_HH    (8U)          /*!< Bit field size in bits for RFVBAT_REGn_HH. */

/*! @brief Read current value of the RFVBAT_REGn_HH field. */
#define BR_RFVBAT_REGn_HH(x, n) (HW_RFVBAT_REGn(x, n).B.HH)

/*! @brief Format value for bitfield RFVBAT_REGn_HH. */
#define BF_RFVBAT_REGn_HH(v) ((uint32_t)((uint32_t)(v) << BP_RFVBAT_REGn_HH) & BM_RFVBAT_REGn_HH)

/*! @brief Set the HH field to a new value. */
#define BW_RFVBAT_REGn_HH(x, n, v) (HW_RFVBAT_REGn_WR(x, n, (HW_RFVBAT_REGn_RD(x, n) & ~BM_RFVBAT_REGn_HH) | BF_RFVBAT_REGn_HH(v)))
/*@}*/

/*******************************************************************************
 * hw_rfvbat_t - module struct
 ******************************************************************************/
/*!
 * @brief All RFVBAT module registers.
 */
#pragma pack(1)
typedef struct _hw_rfvbat
{
    __IO hw_rfvbat_regn_t REGn[8];         /*!< [0x0] VBAT register file register */
} hw_rfvbat_t;
#pragma pack()

/*! @brief Macro to access all RFVBAT registers. */
/*! @param x RFVBAT module instance base address. */
/*! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
 *     use the '&' operator, like <code>&HW_RFVBAT(RFVBAT_BASE)</code>. */
#define HW_RFVBAT(x)   (*(hw_rfvbat_t *)(x))

#endif /* __HW_RFVBAT_REGISTERS_H__ */
/* EOF */
