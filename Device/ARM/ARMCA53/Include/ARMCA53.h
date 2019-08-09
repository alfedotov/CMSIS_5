/******************************************************************************
 * @file     ARMCA53.h
 * @brief    CMSIS Core Peripheral Access Layer Header File for
 *           ARMCA53 Device
 * @version  V1.0.1
 * @date     09. August 2019
 ******************************************************************************/
/*
 * Copyright (c) 2019 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __ARMCA53_H__
#define __ARMCA53_H__

#ifdef __cplusplus
extern "C" {
#endif


/* -------------------------  Interrupt Number Definition  ------------------------ */


/* --------  Configuration of Core Peripherals  ----------------------------------- */
#define __CA53_REV                0x0000U   /* Core revision r0p0 */
#define __CORTEX_A                53        /* Cortex-A53 Core */
#define __FPU_PRESENT             0U        /* no FPU present */
#define __FPU_DP                  0U        /* single precision FPU */
#define __DSP_PRESENT             0U        /* no DSP extension present */
#define __ICACHE_PRESENT          1U        /* Instruction cache present */
#define __DCACHE_PRESENT          1U        /* Data cache present */
#define __GIC_PRESENT             0U        /* no GIC present */
#define __TIM_PRESENT             0U        /* no TIM present */
#define __L2C_PRESENT             0U        /* no L2C present */
#define __ECC_PRESENT             0U        /* no Memory with Error Correcting Code */

#include "core_ca.h"
#include "system_ARMCA53.h"

#ifdef __cplusplus
}
#endif

#endif  // __ARMCA53_H__
