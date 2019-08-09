/******************************************************************************
 * @file     startup_ARMCA53.c
 * @brief    CMSIS Core Device Startup File for Cortex-A53 Device
 * @version  V1.0.0
 * @date     21. May 2019
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

#if defined (ARMCA53)
  #include "ARMCA53.h"
#else
  #error device not specified!
#endif

/*----------------------------------------------------------------------------
  External References
 *----------------------------------------------------------------------------*/
extern uint32_t __INITIAL_SP;

/*----------------------------------------------------------------------------
  Internal References
 *----------------------------------------------------------------------------*/
void EL3_Default_Handler(void) __NO_RETURN;
void EL2_Default_Handler(void) __NO_RETURN;
void EL1_Default_Handler(void) __NO_RETURN;
void EL3_Reset_Handler(void) __NAKED_NO_RETURN;


/*----------------------------------------------------------------------------
  Exception / Interrupt Handler
 *----------------------------------------------------------------------------*/
void Current_EL3_SP0_Sync_Handler     (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Current_EL3_SP0_IRQ_Handler      (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Current_EL3_SP0_FIQ_Handler      (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Current_EL3_SP0_SError_Handler   (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Current_EL3_SPx_Sync_Handler     (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Current_EL3_SPx_IRQ_Handler      (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Current_EL3_SPx_FIQ_Handler      (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Current_EL3_SPx_SError_Handler   (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Lower_EL3_AArch64_Sync_Handler   (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Lower_EL3_AArch64_IRQ_Handler    (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Lower_EL3_AArch64_FIQ_Handler    (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Lower_EL3_AArch64_SError_Handler (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Lower_EL3_AArch32_Sync_Handler   (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Lower_EL3_AArch32_IRQ_Handler    (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Lower_EL3_AArch32_FIQ_Handler    (void) __attribute__ ((weak, alias("EL3_Default_Handler")));
void Lower_EL3_AArch32_SError_Handler (void) __attribute__ ((weak, alias("EL3_Default_Handler")));

void Current_EL2_SP0_Sync_Handler     (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Current_EL2_SP0_IRQ_Handler      (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Current_EL2_SP0_FIQ_Handler      (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Current_EL2_SP0_SError_Handler   (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Current_EL2_SPx_Sync_Handler     (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Current_EL2_SPx_IRQ_Handler      (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Current_EL2_SPx_FIQ_Handler      (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Current_EL2_SPx_SError_Handler   (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Lower_EL2_AArch64_Sync_Handler   (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Lower_EL2_AArch64_IRQ_Handler    (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Lower_EL2_AArch64_FIQ_Handler    (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Lower_EL2_AArch64_SError_Handler (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Lower_EL2_AArch32_Sync_Handler   (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Lower_EL2_AArch32_IRQ_Handler    (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Lower_EL2_AArch32_FIQ_Handler    (void) __attribute__ ((weak, alias("EL2_Default_Handler")));
void Lower_EL2_AArch32_SError_Handler (void) __attribute__ ((weak, alias("EL2_Default_Handler")));

void Current_EL1_SP0_Sync_Handler     (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Current_EL1_SP0_IRQ_Handler      (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Current_EL1_SP0_FIQ_Handler      (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Current_EL1_SP0_SError_Handler   (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Current_EL1_SPx_Sync_Handler     (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Current_EL1_SPx_IRQ_Handler      (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Current_EL1_SPx_FIQ_Handler      (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Current_EL1_SPx_SError_Handler   (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Lower_EL1_AArch64_Sync_Handler   (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Lower_EL1_AArch64_IRQ_Handler    (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Lower_EL1_AArch64_FIQ_Handler    (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Lower_EL1_AArch64_SError_Handler (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Lower_EL1_AArch32_Sync_Handler   (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Lower_EL1_AArch32_IRQ_Handler    (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Lower_EL1_AArch32_FIQ_Handler    (void) __attribute__ ((weak, alias("EL1_Default_Handler")));
void Lower_EL1_AArch32_SError_Handler (void) __attribute__ ((weak, alias("EL1_Default_Handler")));


/*----------------------------------------------------------------------------
  Exception / Interrupt Vector table
 *----------------------------------------------------------------------------*/
void __VECTOR_TABLE_ATTRIBUTE __VECTOR_TABLE_EL3(void) {
  __ASM volatile(
  "B    Current_EL3_SP0_Sync_Handler       \n"
  "B    Current_EL3_SP0_IRQ_Handler        \n"
  "B    Current_EL3_SP0_FIQ_Handler        \n"
  "B    Current_EL3_SP0_SError_Handler     \n"
  "B    Current_EL3_SPx_Sync_Handler       \n"
  "B    Current_EL3_SPx_IRQ_Handler        \n"
  "B    Current_EL3_SPx_FIQ_Handler        \n"
  "B    Current_EL3_SPx_SError_Handler     \n"
  "B    Lower_EL3_AArch64_Sync_Handler     \n"
  "B    Lower_EL3_AArch64_IRQ_Handler      \n"
  "B    Lower_EL3_AArch64_FIQ_Handler      \n"
  "B    Lower_EL3_AArch64_SError_Handler   \n"
  "B    Lower_EL3_AArch32_Sync_Handler     \n"
  "B    Lower_EL3_AArch32_IRQ_Handler      \n"
  "B    Lower_EL3_AArch32_FIQ_Handler      \n"
  "B    Lower_EL3_AArch32_SError_Handler   \n"
  );
}
 
void __VECTOR_TABLE_ATTRIBUTE __VECTOR_TABLE_EL2(void) {
  __ASM volatile(
  "B    Current_EL2_SP0_Sync_Handler       \n"
  "B    Current_EL2_SP0_IRQ_Handler        \n"
  "B    Current_EL2_SP0_FIQ_Handler        \n"
  "B    Current_EL2_SP0_SError_Handler     \n"
  "B    Current_EL2_SPx_Sync_Handler       \n"
  "B    Current_EL2_SPx_IRQ_Handler        \n"
  "B    Current_EL2_SPx_FIQ_Handler        \n"
  "B    Current_EL2_SPx_SError_Handler     \n"
  "B    Lower_EL2_AArch64_Sync_Handler     \n"
  "B    Lower_EL2_AArch64_IRQ_Handler      \n"
  "B    Lower_EL2_AArch64_FIQ_Handler      \n"
  "B    Lower_EL2_AArch64_SError_Handler   \n"
  "B    Lower_EL2_AArch32_Sync_Handler     \n"
  "B    Lower_EL2_AArch32_IRQ_Handler      \n"
  "B    Lower_EL2_AArch32_FIQ_Handler      \n"
  "B    Lower_EL2_AArch32_SError_Handler   \n"
  );
}

void __VECTOR_TABLE_ATTRIBUTE __VECTOR_TABLE_EL1(void) {
  __ASM volatile(
  "B    Current_EL1_SP0_Sync_Handler       \n"
  "B    Current_EL1_SP0_IRQ_Handler        \n"
  "B    Current_EL1_SP0_FIQ_Handler        \n"
  "B    Current_EL1_SP0_SError_Handler     \n"
  "B    Current_EL1_SPx_Sync_Handler       \n"
  "B    Current_EL1_SPx_IRQ_Handler        \n"
  "B    Current_EL1_SPx_FIQ_Handler        \n"
  "B    Current_EL1_SPx_SError_Handler     \n"
  "B    Lower_EL1_AArch64_Sync_Handler     \n"
  "B    Lower_EL1_AArch64_IRQ_Handler      \n"
  "B    Lower_EL1_AArch64_FIQ_Handler      \n"
  "B    Lower_EL1_AArch64_SError_Handler   \n"
  "B    Lower_EL1_AArch32_Sync_Handler     \n"
  "B    Lower_EL1_AArch32_IRQ_Handler      \n"
  "B    Lower_EL1_AArch32_FIQ_Handler      \n"
  "B    Lower_EL1_AArch32_SError_Handler   \n"
  );
}

/*----------------------------------------------------------------------------
  Reset Handler called on controller reset
 *----------------------------------------------------------------------------*/
void __NAKED_NO_RETURN Reset_Handler(void) {

  __set_SP((uint64_t)&__INITIAL_SP);
  __EARLY_INIT();
  SystemInit();                      /* CMSIS System Initialization */

  __PROGRAM_START();                 /* Enter PreMain (C library entry point) */

}


/*----------------------------------------------------------------------------
  Default Handler for Exceptions / Interrupts
 *----------------------------------------------------------------------------*/
void EL3_Default_Handler(void) {
  while(1);
}

void EL2_Default_Handler(void) {
  while(1);
}

void EL1_Default_Handler(void) {
  while(1);
}
