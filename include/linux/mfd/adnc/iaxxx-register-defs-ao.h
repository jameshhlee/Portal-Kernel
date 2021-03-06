/*
* iaxxx-register-defs-AO.h -- IAxxx register defination
*
* Copyright (c) 2016 Knowles Corporation.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 and
* only version 2 as published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*/

#ifndef __IAXXX_REGISTER_DEFS_AO_H__
#define __IAXXX_REGISTER_DEFS_AO_H__

/*** The base address for this set of registers ***/
#define IAXXX_AO_REGS_ADDR (0x50010000)

/*** AO_DED_MEM_PWR_CTRL (0x50010000) ***/
/*
 * This register has bits to control power to the memory core of all
 * dedicated memories of all processors. It also has retention control for
 * them. There is only one bit to power down cores of all memories and one
 * bit to put them into retention, per power domain.
 * Power to the memory periphery is controlled by the sleep state of the
 * power domain in which the memory resides. The sleep state is controlled by
 * <a href="#Rome.AO.SW_PWR_CTRL_SET">AO.SW_PWR_CTRL_SET</a> and <a
 * href="#Rome.AO.SW_PWR_CTRL_CLR">AO.SW_PWR_CTRL_CLR</a> registers.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_ADDR (0x50010000)
#define IAXXX_AO_DED_MEM_PWR_CTRL_MASK_VAL 0x051f051f
#define IAXXX_AO_DED_MEM_PWR_CTRL_RMASK_VAL 0x051f051f
#define IAXXX_AO_DED_MEM_PWR_CTRL_WMASK_VAL 0x051f051f
#define IAXXX_AO_DED_MEM_PWR_CTRL_RESET_VAL 0x051f0000

/*
 * 0: Re-apply power to the memory core of all dedicated memories for BOSS.
 * 1: Power down the core of all dedicated memories for BOSS. All memory
 * contents will be lost.
 * This bit is used along with the HW sleep/wake up state machine.
 * NO_SLEEP = 1: If BOSS_MEM_CORE_PWR_DN is 0 then core power is ON and will
 * remain ON. If BOSS_MEM_CORE_PWR_DN is 1 then core power is OFF and will
 * remain OFF.
 * NO_SLEEP = 0: If BOSS_MEM_CORE_PWR_DN is 0 then core power will remain ON
 * during sleep and wake up. If BOSS_MEM_CORE_PWR_DN is 1 then core will be
 * powered OFF during sleep and powered ON after wake up by HW.
 * NOTE: Leave this field at reset value if BOSS power domain is software
 * controlled. Core power should be controlled by BOSS_MEM_CORE_PWR_DN_OVRRD
 * field.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_MEM_CORE_PWR_DN_MASK 0x00000001
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_MEM_CORE_PWR_DN_POS 0
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_MEM_CORE_PWR_DN_DECL 0

/*
 * 0: Re-apply power to the memory core of all dedicated memories for SSP.
 * 1: Power down the core of all dedicated memories for SSP. All memory
 * contents will be lost.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_SSP_MEM_CORE_PWR_DN_MASK 0x00000002
#define IAXXX_AO_DED_MEM_PWR_CTRL_SSP_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_DED_MEM_PWR_CTRL_SSP_MEM_CORE_PWR_DN_POS 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_SSP_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_SSP_MEM_CORE_PWR_DN_DECL 1

/*
 * 0: Re-apply power to the memory core of all dedicated memories for CM4.
 * 1: Power down the core of all dedicated memories for CM4. All memory
 * contents will be lost.
 * This bit is used along with the HW sleep/wake up state machine.
 * NO_SLEEP = 1: If CM4_MEM_CORE_PWR_DN is 0 then core power is ON and will
 * remain ON. If CM4_MEM_CORE_PWR_DN is 1 then core power is OFF and will
 * remain OFF.
 * NO_SLEEP = 0: If CM4_MEM_CORE_PWR_DN is 0 then core power will remain ON
 * during sleep and wake up. If CM4_MEM_CORE_PWR_DN is 1 then core will be
 * powered OFF during sleep and powered ON after wake up by HW.
 * NOTE: Leave this field at reset value if CM4 power domain is software
 * controlled. Core power should be controlled by CM4_MEM_CORE_PWR_DN_OVRRD
 * field.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_MEM_CORE_PWR_DN_MASK 0x00000004
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_MEM_CORE_PWR_DN_POS 2
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_MEM_CORE_PWR_DN_DECL 2

/*
 * 0: Re-apply power to the memory core of all dedicated memories for HMD.
 * 1: Power down the core of all dedicated memories for HMD. All memory
 * contents will be lost.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_HMD_MEM_CORE_PWR_DN_MASK 0x00000008
#define IAXXX_AO_DED_MEM_PWR_CTRL_HMD_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_DED_MEM_PWR_CTRL_HMD_MEM_CORE_PWR_DN_POS 3
#define IAXXX_AO_DED_MEM_PWR_CTRL_HMD_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_HMD_MEM_CORE_PWR_DN_DECL 3

/*
 * 0: Re-apply power to the memory core of all dedicated memories for DMX.
 * 1: Power down the core of all dedicated memories for DMX. All memory
 * contents will be lost.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_DMX_MEM_CORE_PWR_DN_MASK 0x00000010
#define IAXXX_AO_DED_MEM_PWR_CTRL_DMX_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_DED_MEM_PWR_CTRL_DMX_MEM_CORE_PWR_DN_POS 4
#define IAXXX_AO_DED_MEM_PWR_CTRL_DMX_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_DMX_MEM_CORE_PWR_DN_DECL 4

/*
 * This OVRRD should be used if a processor power domain is software
 * controlled.
 * 0: Core power is controlled by BOSS_MEM_CORE_PWR_DN field.
 * 1: Core power is turned OFF.
 * NOTE: Leave this field at reset value if BOSS power domain is hardware
 * controlled. In this case core power should be controlled by
 * BOSS_MEM_CORE_PWR_DN field.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_MEM_CORE_PWR_DN_OVRRD_MASK 0x00000100
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_MEM_CORE_PWR_DN_OVRRD_RESET_VAL 0x0
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_MEM_CORE_PWR_DN_OVRRD_POS 8
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_MEM_CORE_PWR_DN_OVRRD_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_MEM_CORE_PWR_DN_OVRRD_DECL 8

/*
 * This OVRRD should be used if a processor power domain is software
 * controlled.
 * 0: Core power is controlled by CM4_MEM_CORE_PWR_DN field.
 * 1: Core power is turned OFF.
 * NOTE: Leave this field at reset value if CM4 power domain is hardware
 * controlled. In this case core power should be controlled by
 * CM4_MEM_CORE_PWR_DN field.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_MEM_CORE_PWR_DN_OVRRD_MASK 0x00000400
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_MEM_CORE_PWR_DN_OVRRD_RESET_VAL 0x0
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_MEM_CORE_PWR_DN_OVRRD_POS 10
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_MEM_CORE_PWR_DN_OVRRD_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_MEM_CORE_PWR_DN_OVRRD_DECL 10

/*
 * 0: Put all dedicated memories for BOSS into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take all dedicated memories for BOSS out of retention.
 * NO_SLEEP = 1: If BOSS_RET_N is 0 then memory is in retention if core power
 * is ON. If BOSS_RET_N is 1 then memory is not in retention and contents
 * will be lost.
 * NO_SLEEP = 0: Hardware will assert retention during sleep and remove
 * retention after wake up.
 * Note: Leave this field at reset value if BOSS power domain is software
 * controlled. In this case retention could be set by setting
 * BOSS_RET_N_OVRRD field to 0.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_RET_N_MASK 0x00010000
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_RET_N_RESET_VAL 0x1
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_RET_N_POS 16
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_RET_N_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_RET_N_DECL 16

/*
 * 0: Put all dedicated memories for SSP into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take all dedicated memories for SSP out of retention.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_SSP_RET_N_MASK 0x00020000
#define IAXXX_AO_DED_MEM_PWR_CTRL_SSP_RET_N_RESET_VAL 0x1
#define IAXXX_AO_DED_MEM_PWR_CTRL_SSP_RET_N_POS 17
#define IAXXX_AO_DED_MEM_PWR_CTRL_SSP_RET_N_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_SSP_RET_N_DECL 17

/*
 * 0: Put all dedicated memories for CM4 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take all dedicated memories for CM4 out of retention.
 * NO_SLEEP = 1: If CM4_RET_N is 0 then memory is in retention if core power
 * is ON. If CM4_RET_N is 1 then memory is not in retention and contents will
 * be lost.
 * NO_SLEEP = 0: Hardware will assert retention during sleep and remove
 * retention after wake up.
 * Note: Leave this field at reset value if CM4 power domain is software
 * controlled. In this case retention could be set by setting CM4_RET_N_OVRRD
 * field to 0.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_RET_N_MASK 0x00040000
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_RET_N_RESET_VAL 0x1
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_RET_N_POS 18
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_RET_N_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_RET_N_DECL 18

/*
 * 0: Put all dedicated memories for HMD into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take all dedicated memories for HMD out of retention.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_HMD_RET_N_MASK 0x00080000
#define IAXXX_AO_DED_MEM_PWR_CTRL_HMD_RET_N_RESET_VAL 0x1
#define IAXXX_AO_DED_MEM_PWR_CTRL_HMD_RET_N_POS 19
#define IAXXX_AO_DED_MEM_PWR_CTRL_HMD_RET_N_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_HMD_RET_N_DECL 19

/*
 * 0: Put all dedicated memories for DMX into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take all dedicated memories for DMX out of retention.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_DMX_RET_N_MASK 0x00100000
#define IAXXX_AO_DED_MEM_PWR_CTRL_DMX_RET_N_RESET_VAL 0x1
#define IAXXX_AO_DED_MEM_PWR_CTRL_DMX_RET_N_POS 20
#define IAXXX_AO_DED_MEM_PWR_CTRL_DMX_RET_N_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_DMX_RET_N_DECL 20

/*
 * This OVRRD should be used if a processor power domain is software
 * controlled.
 * 0: Memory is in retention provided MEM_CORE_PWR is left ON. Contents will
 * be retained.
 * 1: Memory is not in retention contents will be lost.
 * Note: Leave this field at reset value if BOSS power domain is hardware
 * controlled. If this bit is at 1 then retention is still controlled by
 * BOSS_RET_N field.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_RET_N_OVRRD_MASK 0x01000000
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_RET_N_OVRRD_RESET_VAL 0x1
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_RET_N_OVRRD_POS 24
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_RET_N_OVRRD_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_BOSS_RET_N_OVRRD_DECL 24

/*
 * This OVRRD should be used if a processor power domain is software
 * controlled.
 * 0: Memory is in retention provided MEM_CORE_PWR is left ON. Contents will
 * be retained.
 * 1: Memory is not in retention contents will be lost.
 * Note: Leave this field at reset value if CM4 power domain is hardware
 * controlled. If this bit is at 1 then retention is still controlled by
 * CM4_RET_N field.
 */
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_RET_N_OVRRD_MASK 0x04000000
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_RET_N_OVRRD_RESET_VAL 0x1
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_RET_N_OVRRD_POS 26
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_RET_N_OVRRD_SIZE 1
#define IAXXX_AO_DED_MEM_PWR_CTRL_CM4_RET_N_OVRRD_DECL 26

/*** AO_HW_MEM_PWR_CTRL (0x50010004) ***/
/*
 * Power Control for Memories using HW in active mode.
 * There are two levels of granularity in deciding whether a tile is in use
 * or not.
 * i) Coarse level(_WAITI_RET bits)- If a processor for which tile is
 * allocated is in WAITI and no inbound traffic, then that tile is considered
 * to be not in use and will be kept in retention.
 * ii) Fine grain control(_DYN_RET bits)- More than one tile may be allocated
 * to a given procrssor interface but processor may be accessing only one
 * tile at a time and based on spacial locality, there are high chances that
 * processor continues to access the same tile before accessing next tile.
 * So there may be only one tile in use for longer duration. HW detects this
 * condition and keeps the current tile being accessed out of retention and
 * remaining tiles allocated to that interface into retention.
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_ADDR (0x50010004)
#define IAXXX_AO_HW_MEM_PWR_CTRL_MASK_VAL 0x003fffff
#define IAXXX_AO_HW_MEM_PWR_CTRL_RMASK_VAL 0x003fffff
#define IAXXX_AO_HW_MEM_PWR_CTRL_WMASK_VAL 0x003fffff
#define IAXXX_AO_HW_MEM_PWR_CTRL_RESET_VAL 0x003fffff

/*
 * 0: Enable HW control of all memories that are attached to BOSS IRAM (both
 * dedicated and pool memories) when processor is in WAITI.
 * When processor is in WIATI and there is no inboud traffic, all memories
 * are that are attached to BOSS IRAM go into retention.
 * 1: Disable HW gating of memories that are attached to BOSS IRAM when
 * processor is in WAITI
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_IRAM_WAITI_RET_MASK 0x00000001
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_IRAM_WAITI_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_IRAM_WAITI_RET_POS 0
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_IRAM_WAITI_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_IRAM_WAITI_RET_DECL 0

/*
 * 0: Enable HW control of memories that are attached to BOSS IRAM (both
 * dedicated and pool memories)
 * Only current tile that is accessed by BOSS IRAM is active while all other
 * tiles attached to BOSS IRAM are into retention.
 * It is advisable to disable this feature when inbound traffic is expected
 * on $intf.
 * This is because inbound traffic may be to one tile and processor may be
 * accessing another tile.
 * In this case, tiles switching happen frequently and so frequent tile
 * switching power may be higher than what is saved in retention power.
 * But if processor goes to WAITI and there is inbound access, then this HW
 * gating is advisable to be enabled for power saving
 * 1: Disable HW gating of memories that are attached to BOSS IRAM
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_IRAM_DYN_RET_MASK 0x00000002
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_IRAM_DYN_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_IRAM_DYN_RET_POS 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_IRAM_DYN_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_IRAM_DYN_RET_DECL 1

/*
 * 0: Enable HW control of all memories that are attached to BOSS DRAM0 (both
 * dedicated and pool memories) when processor is in WAITI.
 * When processor is in WIATI and there is no inboud traffic, all memories
 * are that are attached to BOSS DRAM0 go into retention.
 * 1: Disable HW gating of memories that are attached to BOSS DRAM0 when
 * processor is in WAITI
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_DRAM0_WAITI_RET_MASK 0x00000004
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_DRAM0_WAITI_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_DRAM0_WAITI_RET_POS 2
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_DRAM0_WAITI_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_DRAM0_WAITI_RET_DECL 2

/*
 * 0: Enable HW control of memories that are attached to BOSS DRAM0 (both
 * dedicated and pool memories)
 * Only current tile that is accessed by BOSS DRAM0 is active while all other
 * tiles attached to BOSS DRAM0 are into retention.
 * It is advisable to disable this feature when inbound traffic is expected
 * on $intf.
 * This is because inbound traffic may be to one tile and processor may be
 * accessing another tile.
 * In this case, tiles switching happen frequently and so frequent tile
 * switching power may be higher than what is saved in retention power.
 * But if processor goes to WAITI and there is inbound access, then this HW
 * gating is advisable to be enabled for power saving
 * 1: Disable HW gating of memories that are attached to BOSS DRAM0
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_DRAM0_DYN_RET_MASK 0x00000008
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_DRAM0_DYN_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_DRAM0_DYN_RET_POS 3
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_DRAM0_DYN_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_BOSS_DRAM0_DYN_RET_DECL 3

/*
 * 0: Enable HW control of all memories that are attached to SSP IRAM (both
 * dedicated and pool memories) when processor is in WAITI.
 * When processor is in WIATI and there is no inboud traffic, all memories
 * are that are attached to SSP IRAM go into retention.
 * 1: Disable HW gating of memories that are attached to SSP IRAM when
 * processor is in WAITI
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_IRAM_WAITI_RET_MASK 0x00000010
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_IRAM_WAITI_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_IRAM_WAITI_RET_POS 4
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_IRAM_WAITI_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_IRAM_WAITI_RET_DECL 4

/*
 * 0: Enable HW control of memories that are attached to SSP IRAM (both
 * dedicated and pool memories)
 * Only current tile that is accessed by SSP IRAM is active while all other
 * tiles attached to SSP IRAM are into retention.
 * It is advisable to disable this feature when inbound traffic is expected
 * on $intf.
 * This is because inbound traffic may be to one tile and processor may be
 * accessing another tile.
 * In this case, tiles switching happen frequently and so frequent tile
 * switching power may be higher than what is saved in retention power.
 * But if processor goes to WAITI and there is inbound access, then this HW
 * gating is advisable to be enabled for power saving
 * 1: Disable HW gating of memories that are attached to SSP IRAM
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_IRAM_DYN_RET_MASK 0x00000020
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_IRAM_DYN_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_IRAM_DYN_RET_POS 5
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_IRAM_DYN_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_IRAM_DYN_RET_DECL 5

/*
 * 0: Enable HW control of all memories that are attached to SSP DRAM0 (both
 * dedicated and pool memories) when processor is in WAITI.
 * When processor is in WIATI and there is no inboud traffic, all memories
 * are that are attached to SSP DRAM0 go into retention.
 * 1: Disable HW gating of memories that are attached to SSP DRAM0 when
 * processor is in WAITI
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM0_WAITI_RET_MASK 0x00000040
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM0_WAITI_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM0_WAITI_RET_POS 6
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM0_WAITI_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM0_WAITI_RET_DECL 6

/*
 * 0: Enable HW control of memories that are attached to SSP DRAM0 (both
 * dedicated and pool memories)
 * Only current tile that is accessed by SSP DRAM0 is active while all other
 * tiles attached to SSP DRAM0 are into retention.
 * It is advisable to disable this feature when inbound traffic is expected
 * on $intf.
 * This is because inbound traffic may be to one tile and processor may be
 * accessing another tile.
 * In this case, tiles switching happen frequently and so frequent tile
 * switching power may be higher than what is saved in retention power.
 * But if processor goes to WAITI and there is inbound access, then this HW
 * gating is advisable to be enabled for power saving
 * 1: Disable HW gating of memories that are attached to SSP DRAM0
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM0_DYN_RET_MASK 0x00000080
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM0_DYN_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM0_DYN_RET_POS 7
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM0_DYN_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM0_DYN_RET_DECL 7

/*
 * 0: Enable HW control of all memories that are attached to SSP DRAM1 (both
 * dedicated and pool memories) when processor is in WAITI.
 * When processor is in WIATI and there is no inboud traffic, all memories
 * are that are attached to SSP DRAM1 go into retention.
 * 1: Disable HW gating of memories that are attached to SSP DRAM1 when
 * processor is in WAITI
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM1_WAITI_RET_MASK 0x00000100
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM1_WAITI_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM1_WAITI_RET_POS 8
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM1_WAITI_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM1_WAITI_RET_DECL 8

/*
 * 0: Enable HW control of memories that are attached to SSP DRAM1 (both
 * dedicated and pool memories)
 * Only current tile that is accessed by SSP DRAM1 is active while all other
 * tiles attached to SSP DRAM1 are into retention.
 * It is advisable to disable this feature when inbound traffic is expected
 * on $intf.
 * This is because inbound traffic may be to one tile and processor may be
 * accessing another tile.
 * In this case, tiles switching happen frequently and so frequent tile
 * switching power may be higher than what is saved in retention power.
 * But if processor goes to WAITI and there is inbound access, then this HW
 * gating is advisable to be enabled for power saving
 * 1: Disable HW gating of memories that are attached to SSP DRAM1
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM1_DYN_RET_MASK 0x00000200
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM1_DYN_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM1_DYN_RET_POS 9
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM1_DYN_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_SSP_DRAM1_DYN_RET_DECL 9

/*
 * 0: Enable HW control of all memories that are attached to CM4 IRAM (both
 * dedicated and pool memories) when processor is in WAITI.
 * When processor is in WIATI and there is no inboud traffic, all memories
 * are that are attached to CM4 IRAM go into retention.
 * 1: Disable HW gating of memories that are attached to CM4 IRAM when
 * processor is in WAITI
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_IRAM_WAITI_RET_MASK 0x00000400
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_IRAM_WAITI_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_IRAM_WAITI_RET_POS 10
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_IRAM_WAITI_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_IRAM_WAITI_RET_DECL 10

/*
 * 0: Enable HW control of memories that are attached to CM4 IRAM (both
 * dedicated and pool memories)
 * Only current tile that is accessed by CM4 IRAM is active while all other
 * tiles attached to CM4 IRAM are into retention.
 * It is advisable to disable this feature when inbound traffic is expected
 * on $intf.
 * This is because inbound traffic may be to one tile and processor may be
 * accessing another tile.
 * In this case, tiles switching happen frequently and so frequent tile
 * switching power may be higher than what is saved in retention power.
 * But if processor goes to WAITI and there is inbound access, then this HW
 * gating is advisable to be enabled for power saving
 * 1: Disable HW gating of memories that are attached to CM4 IRAM
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_IRAM_DYN_RET_MASK 0x00000800
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_IRAM_DYN_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_IRAM_DYN_RET_POS 11
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_IRAM_DYN_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_IRAM_DYN_RET_DECL 11

/*
 * 0: Enable HW control of all memories that are attached to CM4 DRAM0 (both
 * dedicated and pool memories) when processor is in WAITI.
 * When processor is in WIATI and there is no inboud traffic, all memories
 * are that are attached to CM4 DRAM0 go into retention.
 * 1: Disable HW gating of memories that are attached to CM4 DRAM0 when
 * processor is in WAITI
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_DRAM0_WAITI_RET_MASK 0x00001000
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_DRAM0_WAITI_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_DRAM0_WAITI_RET_POS 12
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_DRAM0_WAITI_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_DRAM0_WAITI_RET_DECL 12

/*
 * 0: Enable HW control of memories that are attached to CM4 DRAM0 (both
 * dedicated and pool memories)
 * Only current tile that is accessed by CM4 DRAM0 is active while all other
 * tiles attached to CM4 DRAM0 are into retention.
 * It is advisable to disable this feature when inbound traffic is expected
 * on $intf.
 * This is because inbound traffic may be to one tile and processor may be
 * accessing another tile.
 * In this case, tiles switching happen frequently and so frequent tile
 * switching power may be higher than what is saved in retention power.
 * But if processor goes to WAITI and there is inbound access, then this HW
 * gating is advisable to be enabled for power saving
 * 1: Disable HW gating of memories that are attached to CM4 DRAM0
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_DRAM0_DYN_RET_MASK 0x00002000
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_DRAM0_DYN_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_DRAM0_DYN_RET_POS 13
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_DRAM0_DYN_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_CM4_DRAM0_DYN_RET_DECL 13

/*
 * 0: Enable HW control of all memories that are attached to HMD IRAM (both
 * dedicated and pool memories) when processor is in WAITI.
 * When processor is in WIATI and there is no inboud traffic, all memories
 * are that are attached to HMD IRAM go into retention.
 * 1: Disable HW gating of memories that are attached to HMD IRAM when
 * processor is in WAITI
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_IRAM_WAITI_RET_MASK 0x00004000
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_IRAM_WAITI_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_IRAM_WAITI_RET_POS 14
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_IRAM_WAITI_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_IRAM_WAITI_RET_DECL 14

/*
 * 0: Enable HW control of memories that are attached to HMD IRAM (both
 * dedicated and pool memories)
 * Only current tile that is accessed by HMD IRAM is active while all other
 * tiles attached to HMD IRAM are into retention.
 * It is advisable to disable this feature when inbound traffic is expected
 * on $intf.
 * This is because inbound traffic may be to one tile and processor may be
 * accessing another tile.
 * In this case, tiles switching happen frequently and so frequent tile
 * switching power may be higher than what is saved in retention power.
 * But if processor goes to WAITI and there is inbound access, then this HW
 * gating is advisable to be enabled for power saving
 * 1: Disable HW gating of memories that are attached to HMD IRAM
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_IRAM_DYN_RET_MASK 0x00008000
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_IRAM_DYN_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_IRAM_DYN_RET_POS 15
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_IRAM_DYN_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_IRAM_DYN_RET_DECL 15

/*
 * 0: Enable HW control of all memories that are attached to HMD DRAM0 (both
 * dedicated and pool memories) when processor is in WAITI.
 * When processor is in WIATI and there is no inboud traffic, all memories
 * are that are attached to HMD DRAM0 go into retention.
 * 1: Disable HW gating of memories that are attached to HMD DRAM0 when
 * processor is in WAITI
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_DRAM0_WAITI_RET_MASK 0x00010000
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_DRAM0_WAITI_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_DRAM0_WAITI_RET_POS 16
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_DRAM0_WAITI_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_DRAM0_WAITI_RET_DECL 16

/*
 * 0: Enable HW control of memories that are attached to HMD DRAM0 (both
 * dedicated and pool memories)
 * Only current tile that is accessed by HMD DRAM0 is active while all other
 * tiles attached to HMD DRAM0 are into retention.
 * It is advisable to disable this feature when inbound traffic is expected
 * on $intf.
 * This is because inbound traffic may be to one tile and processor may be
 * accessing another tile.
 * In this case, tiles switching happen frequently and so frequent tile
 * switching power may be higher than what is saved in retention power.
 * But if processor goes to WAITI and there is inbound access, then this HW
 * gating is advisable to be enabled for power saving
 * 1: Disable HW gating of memories that are attached to HMD DRAM0
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_DRAM0_DYN_RET_MASK 0x00020000
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_DRAM0_DYN_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_DRAM0_DYN_RET_POS 17
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_DRAM0_DYN_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_HMD_DRAM0_DYN_RET_DECL 17

/*
 * 0: Enable HW control of all memories that are attached to DMX IRAM (both
 * dedicated and pool memories) when processor is in WAITI.
 * When processor is in WIATI and there is no inboud traffic, all memories
 * are that are attached to DMX IRAM go into retention.
 * 1: Disable HW gating of memories that are attached to DMX IRAM when
 * processor is in WAITI
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_IRAM_WAITI_RET_MASK 0x00040000
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_IRAM_WAITI_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_IRAM_WAITI_RET_POS 18
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_IRAM_WAITI_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_IRAM_WAITI_RET_DECL 18

/*
 * 0: Enable HW control of memories that are attached to DMX IRAM (both
 * dedicated and pool memories)
 * Only current tile that is accessed by DMX IRAM is active while all other
 * tiles attached to DMX IRAM are into retention.
 * It is advisable to disable this feature when inbound traffic is expected
 * on $intf.
 * This is because inbound traffic may be to one tile and processor may be
 * accessing another tile.
 * In this case, tiles switching happen frequently and so frequent tile
 * switching power may be higher than what is saved in retention power.
 * But if processor goes to WAITI and there is inbound access, then this HW
 * gating is advisable to be enabled for power saving
 * 1: Disable HW gating of memories that are attached to DMX IRAM
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_IRAM_DYN_RET_MASK 0x00080000
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_IRAM_DYN_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_IRAM_DYN_RET_POS 19
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_IRAM_DYN_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_IRAM_DYN_RET_DECL 19

/*
 * 0: Enable HW control of all memories that are attached to DMX DRAM0 (both
 * dedicated and pool memories) when processor is in WAITI.
 * When processor is in WIATI and there is no inboud traffic, all memories
 * are that are attached to DMX DRAM0 go into retention.
 * 1: Disable HW gating of memories that are attached to DMX DRAM0 when
 * processor is in WAITI
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_DRAM0_WAITI_RET_MASK 0x00100000
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_DRAM0_WAITI_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_DRAM0_WAITI_RET_POS 20
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_DRAM0_WAITI_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_DRAM0_WAITI_RET_DECL 20

/*
 * 0: Enable HW control of memories that are attached to DMX DRAM0 (both
 * dedicated and pool memories)
 * Only current tile that is accessed by DMX DRAM0 is active while all other
 * tiles attached to DMX DRAM0 are into retention.
 * It is advisable to disable this feature when inbound traffic is expected
 * on $intf.
 * This is because inbound traffic may be to one tile and processor may be
 * accessing another tile.
 * In this case, tiles switching happen frequently and so frequent tile
 * switching power may be higher than what is saved in retention power.
 * But if processor goes to WAITI and there is inbound access, then this HW
 * gating is advisable to be enabled for power saving
 * 1: Disable HW gating of memories that are attached to DMX DRAM0
 */
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_DRAM0_DYN_RET_MASK 0x00200000
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_DRAM0_DYN_RET_RESET_VAL 0x1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_DRAM0_DYN_RET_POS 21
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_DRAM0_DYN_RET_SIZE 1
#define IAXXX_AO_HW_MEM_PWR_CTRL_DISABLE_DMX_DRAM0_DYN_RET_DECL 21

/*** AO_POOL_SM_RAM_PWR_CTRL (0x50010008) ***/
/*
 * This register has bits to control power to all small pool RAMs
 * individually. It also has retention control for them.
 * Power to the memory periphery is controlled by the sleep state of power
 * domain 8 (PD8), where the memory resides. The sleep state is controlled by
 * <a href="#Rome.AO.SW_PWR_CTRL_SET">AO.SW_PWR_CTRL_SET</a> and <a
 * href="#Rome.AO.SW_PWR_CTRL_CLR">AO.SW_PWR_CTRL_CLR</a> registers.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_ADDR (0x50010008)
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_MASK_VAL 0x03ff03ff
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_RMASK_VAL 0x03ff03ff
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_WMASK_VAL 0x03ff03ff
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_RESET_VAL 0x03ff0000

/*
 * 0: Re-apply power to the memory core of small pool RAM POOL_SM_RAM_0.
 * 1: Power down the core of small pool RAM POOL_SM_RAM_0. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_0_MEM_CORE_PWR_DN_MASK 0x00000001
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_0_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_0_MEM_CORE_PWR_DN_POS 0
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_0_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_0_MEM_CORE_PWR_DN_DECL 0

/*
 * 0: Re-apply power to the memory core of small pool RAM POOL_SM_RAM_1.
 * 1: Power down the core of small pool RAM POOL_SM_RAM_1. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_1_MEM_CORE_PWR_DN_MASK 0x00000002
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_1_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_1_MEM_CORE_PWR_DN_POS 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_1_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_1_MEM_CORE_PWR_DN_DECL 1

/*
 * 0: Re-apply power to the memory core of small pool RAM POOL_SM_RAM_2.
 * 1: Power down the core of small pool RAM POOL_SM_RAM_2. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_2_MEM_CORE_PWR_DN_MASK 0x00000004
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_2_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_2_MEM_CORE_PWR_DN_POS 2
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_2_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_2_MEM_CORE_PWR_DN_DECL 2

/*
 * 0: Re-apply power to the memory core of small pool RAM POOL_SM_RAM_3.
 * 1: Power down the core of small pool RAM POOL_SM_RAM_3. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_3_MEM_CORE_PWR_DN_MASK 0x00000008
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_3_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_3_MEM_CORE_PWR_DN_POS 3
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_3_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_3_MEM_CORE_PWR_DN_DECL 3

/*
 * 0: Re-apply power to the memory core of small pool RAM POOL_SM_RAM_4.
 * 1: Power down the core of small pool RAM POOL_SM_RAM_4. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_4_MEM_CORE_PWR_DN_MASK 0x00000010
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_4_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_4_MEM_CORE_PWR_DN_POS 4
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_4_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_4_MEM_CORE_PWR_DN_DECL 4

/*
 * 0: Re-apply power to the memory core of small pool RAM POOL_SM_RAM_5.
 * 1: Power down the core of small pool RAM POOL_SM_RAM_5. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_5_MEM_CORE_PWR_DN_MASK 0x00000020
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_5_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_5_MEM_CORE_PWR_DN_POS 5
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_5_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_5_MEM_CORE_PWR_DN_DECL 5

/*
 * 0: Re-apply power to the memory core of small pool RAM POOL_SM_RAM_6.
 * 1: Power down the core of small pool RAM POOL_SM_RAM_6. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_6_MEM_CORE_PWR_DN_MASK 0x00000040
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_6_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_6_MEM_CORE_PWR_DN_POS 6
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_6_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_6_MEM_CORE_PWR_DN_DECL 6

/*
 * 0: Re-apply power to the memory core of small pool RAM POOL_SM_RAM_7.
 * 1: Power down the core of small pool RAM POOL_SM_RAM_7. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_7_MEM_CORE_PWR_DN_MASK 0x00000080
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_7_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_7_MEM_CORE_PWR_DN_POS 7
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_7_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_7_MEM_CORE_PWR_DN_DECL 7

/*
 * 0: Re-apply power to the memory core of small pool RAM POOL_SM_RAM_8.
 * 1: Power down the core of small pool RAM POOL_SM_RAM_8. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_8_MEM_CORE_PWR_DN_MASK 0x00000100
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_8_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_8_MEM_CORE_PWR_DN_POS 8
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_8_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_8_MEM_CORE_PWR_DN_DECL 8

/*
 * 0: Re-apply power to the memory core of small pool RAM POOL_SM_RAM_9.
 * 1: Power down the core of small pool RAM POOL_SM_RAM_9. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_9_MEM_CORE_PWR_DN_MASK 0x00000200
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_9_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_9_MEM_CORE_PWR_DN_POS 9
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_9_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_9_MEM_CORE_PWR_DN_DECL 9

/*
 * 0: Put small pool RAM POOL_SM_RAM_0 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take small pool RAM POOL_SM_RAM_0 out of retention.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_0_RET_N_MASK 0x00010000
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_0_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_0_RET_N_POS 16
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_0_RET_N_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_0_RET_N_DECL 16

/*
 * 0: Put small pool RAM POOL_SM_RAM_1 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take small pool RAM POOL_SM_RAM_1 out of retention.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_1_RET_N_MASK 0x00020000
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_1_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_1_RET_N_POS 17
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_1_RET_N_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_1_RET_N_DECL 17

/*
 * 0: Put small pool RAM POOL_SM_RAM_2 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take small pool RAM POOL_SM_RAM_2 out of retention.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_2_RET_N_MASK 0x00040000
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_2_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_2_RET_N_POS 18
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_2_RET_N_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_2_RET_N_DECL 18

/*
 * 0: Put small pool RAM POOL_SM_RAM_3 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take small pool RAM POOL_SM_RAM_3 out of retention.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_3_RET_N_MASK 0x00080000
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_3_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_3_RET_N_POS 19
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_3_RET_N_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_3_RET_N_DECL 19

/*
 * 0: Put small pool RAM POOL_SM_RAM_4 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take small pool RAM POOL_SM_RAM_4 out of retention.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_4_RET_N_MASK 0x00100000
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_4_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_4_RET_N_POS 20
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_4_RET_N_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_4_RET_N_DECL 20

/*
 * 0: Put small pool RAM POOL_SM_RAM_5 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take small pool RAM POOL_SM_RAM_5 out of retention.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_5_RET_N_MASK 0x00200000
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_5_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_5_RET_N_POS 21
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_5_RET_N_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_5_RET_N_DECL 21

/*
 * 0: Put small pool RAM POOL_SM_RAM_6 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take small pool RAM POOL_SM_RAM_6 out of retention.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_6_RET_N_MASK 0x00400000
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_6_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_6_RET_N_POS 22
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_6_RET_N_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_6_RET_N_DECL 22

/*
 * 0: Put small pool RAM POOL_SM_RAM_7 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take small pool RAM POOL_SM_RAM_7 out of retention.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_7_RET_N_MASK 0x00800000
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_7_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_7_RET_N_POS 23
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_7_RET_N_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_7_RET_N_DECL 23

/*
 * 0: Put small pool RAM POOL_SM_RAM_8 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take small pool RAM POOL_SM_RAM_8 out of retention.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_8_RET_N_MASK 0x01000000
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_8_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_8_RET_N_POS 24
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_8_RET_N_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_8_RET_N_DECL 24

/*
 * 0: Put small pool RAM POOL_SM_RAM_9 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take small pool RAM POOL_SM_RAM_9 out of retention.
 */
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_9_RET_N_MASK 0x02000000
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_9_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_9_RET_N_POS 25
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_9_RET_N_SIZE 1
#define IAXXX_AO_POOL_SM_RAM_PWR_CTRL_9_RET_N_DECL 25

/*** AO_POOL_LG_RAM_PWR_CTRL (0x5001000c) ***/
/*
 * This register has bits to control power to all large pool RAMs
 * individually. It also has retention control for them.
 * Power to the memory periphery is controlled by the sleep state of power
 * domain 8 (PD8), where the memory resides. The sleep state is controlled by
 * <a href="#Rome.AO.SW_PWR_CTRL_SET">AO.SW_PWR_CTRL_SET</a> and <a
 * href="#Rome.AO.SW_PWR_CTRL_CLR">AO.SW_PWR_CTRL_CLR</a> registers.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_ADDR (0x5001000c)
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_MASK_VAL 0x07ff07ff
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_RMASK_VAL 0x07ff07ff
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_WMASK_VAL 0x07ff07ff
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_RESET_VAL 0x07ff0000

/*
 * 0: Re-apply power to the memory core of large pool RAM POOL_LG_RAM_00.
 * 1: Power down the core of large pool RAM POOL_LG_RAM_00. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_00_MEM_CORE_PWR_DN_MASK 0x00000001
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_00_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_00_MEM_CORE_PWR_DN_POS 0
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_00_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_00_MEM_CORE_PWR_DN_DECL 0

/*
 * 0: Re-apply power to the memory core of large pool RAM POOL_LG_RAM_01.
 * 1: Power down the core of large pool RAM POOL_LG_RAM_01. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_01_MEM_CORE_PWR_DN_MASK 0x00000002
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_01_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_01_MEM_CORE_PWR_DN_POS 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_01_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_01_MEM_CORE_PWR_DN_DECL 1

/*
 * 0: Re-apply power to the memory core of large pool RAM POOL_LG_RAM_02.
 * 1: Power down the core of large pool RAM POOL_LG_RAM_02. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_02_MEM_CORE_PWR_DN_MASK 0x00000004
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_02_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_02_MEM_CORE_PWR_DN_POS 2
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_02_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_02_MEM_CORE_PWR_DN_DECL 2

/*
 * 0: Re-apply power to the memory core of large pool RAM POOL_LG_RAM_03.
 * 1: Power down the core of large pool RAM POOL_LG_RAM_03. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_03_MEM_CORE_PWR_DN_MASK 0x00000008
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_03_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_03_MEM_CORE_PWR_DN_POS 3
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_03_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_03_MEM_CORE_PWR_DN_DECL 3

/*
 * 0: Re-apply power to the memory core of large pool RAM POOL_LG_RAM_04.
 * 1: Power down the core of large pool RAM POOL_LG_RAM_04. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_04_MEM_CORE_PWR_DN_MASK 0x00000010
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_04_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_04_MEM_CORE_PWR_DN_POS 4
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_04_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_04_MEM_CORE_PWR_DN_DECL 4

/*
 * 0: Re-apply power to the memory core of large pool RAM POOL_LG_RAM_05.
 * 1: Power down the core of large pool RAM POOL_LG_RAM_05. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_05_MEM_CORE_PWR_DN_MASK 0x00000020
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_05_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_05_MEM_CORE_PWR_DN_POS 5
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_05_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_05_MEM_CORE_PWR_DN_DECL 5

/*
 * 0: Re-apply power to the memory core of large pool RAM POOL_LG_RAM_06.
 * 1: Power down the core of large pool RAM POOL_LG_RAM_06. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_06_MEM_CORE_PWR_DN_MASK 0x00000040
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_06_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_06_MEM_CORE_PWR_DN_POS 6
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_06_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_06_MEM_CORE_PWR_DN_DECL 6

/*
 * 0: Re-apply power to the memory core of large pool RAM POOL_LG_RAM_07.
 * 1: Power down the core of large pool RAM POOL_LG_RAM_07. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_07_MEM_CORE_PWR_DN_MASK 0x00000080
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_07_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_07_MEM_CORE_PWR_DN_POS 7
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_07_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_07_MEM_CORE_PWR_DN_DECL 7

/*
 * 0: Re-apply power to the memory core of large pool RAM POOL_LG_RAM_08.
 * 1: Power down the core of large pool RAM POOL_LG_RAM_08. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_08_MEM_CORE_PWR_DN_MASK 0x00000100
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_08_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_08_MEM_CORE_PWR_DN_POS 8
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_08_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_08_MEM_CORE_PWR_DN_DECL 8

/*
 * 0: Re-apply power to the memory core of large pool RAM POOL_LG_RAM_09.
 * 1: Power down the core of large pool RAM POOL_LG_RAM_09. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_09_MEM_CORE_PWR_DN_MASK 0x00000200
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_09_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_09_MEM_CORE_PWR_DN_POS 9
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_09_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_09_MEM_CORE_PWR_DN_DECL 9

/*
 * 0: Re-apply power to the memory core of large pool RAM POOL_LG_RAM_10.
 * 1: Power down the core of large pool RAM POOL_LG_RAM_10. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_10_MEM_CORE_PWR_DN_MASK 0x00000400
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_10_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_10_MEM_CORE_PWR_DN_POS 10
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_10_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_10_MEM_CORE_PWR_DN_DECL 10

/*
 * 0: Put large pool RAM POOL_LG_RAM_00 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take large pool RAM POOL_LG_RAM_00 out of retention.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_00_RET_N_MASK 0x00010000
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_00_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_00_RET_N_POS 16
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_00_RET_N_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_00_RET_N_DECL 16

/*
 * 0: Put large pool RAM POOL_LG_RAM_01 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take large pool RAM POOL_LG_RAM_01 out of retention.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_01_RET_N_MASK 0x00020000
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_01_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_01_RET_N_POS 17
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_01_RET_N_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_01_RET_N_DECL 17

/*
 * 0: Put large pool RAM POOL_LG_RAM_02 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take large pool RAM POOL_LG_RAM_02 out of retention.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_02_RET_N_MASK 0x00040000
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_02_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_02_RET_N_POS 18
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_02_RET_N_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_02_RET_N_DECL 18

/*
 * 0: Put large pool RAM POOL_LG_RAM_03 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take large pool RAM POOL_LG_RAM_03 out of retention.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_03_RET_N_MASK 0x00080000
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_03_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_03_RET_N_POS 19
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_03_RET_N_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_03_RET_N_DECL 19

/*
 * 0: Put large pool RAM POOL_LG_RAM_04 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take large pool RAM POOL_LG_RAM_04 out of retention.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_04_RET_N_MASK 0x00100000
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_04_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_04_RET_N_POS 20
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_04_RET_N_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_04_RET_N_DECL 20

/*
 * 0: Put large pool RAM POOL_LG_RAM_05 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take large pool RAM POOL_LG_RAM_05 out of retention.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_05_RET_N_MASK 0x00200000
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_05_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_05_RET_N_POS 21
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_05_RET_N_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_05_RET_N_DECL 21

/*
 * 0: Put large pool RAM POOL_LG_RAM_06 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take large pool RAM POOL_LG_RAM_06 out of retention.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_06_RET_N_MASK 0x00400000
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_06_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_06_RET_N_POS 22
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_06_RET_N_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_06_RET_N_DECL 22

/*
 * 0: Put large pool RAM POOL_LG_RAM_07 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take large pool RAM POOL_LG_RAM_07 out of retention.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_07_RET_N_MASK 0x00800000
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_07_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_07_RET_N_POS 23
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_07_RET_N_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_07_RET_N_DECL 23

/*
 * 0: Put large pool RAM POOL_LG_RAM_08 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take large pool RAM POOL_LG_RAM_08 out of retention.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_08_RET_N_MASK 0x01000000
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_08_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_08_RET_N_POS 24
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_08_RET_N_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_08_RET_N_DECL 24

/*
 * 0: Put large pool RAM POOL_LG_RAM_09 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take large pool RAM POOL_LG_RAM_09 out of retention.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_09_RET_N_MASK 0x02000000
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_09_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_09_RET_N_POS 25
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_09_RET_N_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_09_RET_N_DECL 25

/*
 * 0: Put large pool RAM POOL_LG_RAM_10 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take large pool RAM POOL_LG_RAM_10 out of retention.
 */
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_10_RET_N_MASK 0x04000000
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_10_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_10_RET_N_POS 26
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_10_RET_N_SIZE 1
#define IAXXX_AO_POOL_LG_RAM_PWR_CTRL_10_RET_N_DECL 26

/*** AO_POOL_HG_RAM_PWR_CTRL_0 (0x50010010) ***/
/*
 * This register has bits to control power to all huge pool RAMs
 * individually. It also has retention control for them.
 * Power to the memory periphery is controlled by the sleep state of power
 * domain 8 (PD8), where the memory resides. The sleep state is controlled by
 * <a href="#Rome.AO.SW_PWR_CTRL_SET">AO.SW_PWR_CTRL_SET</a> and <a
 * href="#Rome.AO.SW_PWR_CTRL_CLR">AO.SW_PWR_CTRL_CLR</a> registers.
 * NOTE: IF PD1 is put to sleep, we will ignore the boss related register
 * bits and the sctrl sequencer will handle them in hardware.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_ADDR (0x50010010)
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_MASK_VAL 0xffffffff
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_RMASK_VAL 0xffffffff
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_WMASK_VAL 0xffffffff
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_RESET_VAL 0xffff0000

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_00.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_00. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_00_MEM_CORE_PWR_DN_MASK 0x00000001
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_00_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_00_MEM_CORE_PWR_DN_POS 0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_00_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_00_MEM_CORE_PWR_DN_DECL 0

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_01.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_01. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_01_MEM_CORE_PWR_DN_MASK 0x00000002
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_01_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_01_MEM_CORE_PWR_DN_POS 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_01_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_01_MEM_CORE_PWR_DN_DECL 1

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_02.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_02. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_02_MEM_CORE_PWR_DN_MASK 0x00000004
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_02_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_02_MEM_CORE_PWR_DN_POS 2
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_02_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_02_MEM_CORE_PWR_DN_DECL 2

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_03.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_03. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_03_MEM_CORE_PWR_DN_MASK 0x00000008
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_03_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_03_MEM_CORE_PWR_DN_POS 3
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_03_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_03_MEM_CORE_PWR_DN_DECL 3

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_04.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_04. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_04_MEM_CORE_PWR_DN_MASK 0x00000010
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_04_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_04_MEM_CORE_PWR_DN_POS 4
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_04_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_04_MEM_CORE_PWR_DN_DECL 4

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_05.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_05. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_05_MEM_CORE_PWR_DN_MASK 0x00000020
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_05_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_05_MEM_CORE_PWR_DN_POS 5
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_05_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_05_MEM_CORE_PWR_DN_DECL 5

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_06.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_06. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_06_MEM_CORE_PWR_DN_MASK 0x00000040
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_06_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_06_MEM_CORE_PWR_DN_POS 6
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_06_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_06_MEM_CORE_PWR_DN_DECL 6

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_07.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_07. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_07_MEM_CORE_PWR_DN_MASK 0x00000080
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_07_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_07_MEM_CORE_PWR_DN_POS 7
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_07_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_07_MEM_CORE_PWR_DN_DECL 7

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_08.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_08. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_08_MEM_CORE_PWR_DN_MASK 0x00000100
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_08_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_08_MEM_CORE_PWR_DN_POS 8
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_08_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_08_MEM_CORE_PWR_DN_DECL 8

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_09.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_09. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_09_MEM_CORE_PWR_DN_MASK 0x00000200
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_09_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_09_MEM_CORE_PWR_DN_POS 9
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_09_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_09_MEM_CORE_PWR_DN_DECL 9

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_10.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_10. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_10_MEM_CORE_PWR_DN_MASK 0x00000400
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_10_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_10_MEM_CORE_PWR_DN_POS 10
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_10_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_10_MEM_CORE_PWR_DN_DECL 10

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_11.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_11. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_11_MEM_CORE_PWR_DN_MASK 0x00000800
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_11_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_11_MEM_CORE_PWR_DN_POS 11
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_11_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_11_MEM_CORE_PWR_DN_DECL 11

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_12.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_12. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_12_MEM_CORE_PWR_DN_MASK 0x00001000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_12_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_12_MEM_CORE_PWR_DN_POS 12
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_12_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_12_MEM_CORE_PWR_DN_DECL 12

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_13.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_13. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_13_MEM_CORE_PWR_DN_MASK 0x00002000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_13_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_13_MEM_CORE_PWR_DN_POS 13
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_13_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_13_MEM_CORE_PWR_DN_DECL 13

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_14.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_14. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_14_MEM_CORE_PWR_DN_MASK 0x00004000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_14_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_14_MEM_CORE_PWR_DN_POS 14
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_14_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_14_MEM_CORE_PWR_DN_DECL 14

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_15.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_15. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_15_MEM_CORE_PWR_DN_MASK 0x00008000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_15_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_15_MEM_CORE_PWR_DN_POS 15
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_15_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_15_MEM_CORE_PWR_DN_DECL 15

/*
 * 0: Put huge pool RAM POOL_HG_RAM_00 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_00 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_00_RET_N_MASK 0x00010000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_00_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_00_RET_N_POS 16
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_00_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_00_RET_N_DECL 16

/*
 * 0: Put huge pool RAM POOL_HG_RAM_01 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_01 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_01_RET_N_MASK 0x00020000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_01_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_01_RET_N_POS 17
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_01_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_01_RET_N_DECL 17

/*
 * 0: Put huge pool RAM POOL_HG_RAM_02 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_02 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_02_RET_N_MASK 0x00040000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_02_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_02_RET_N_POS 18
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_02_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_02_RET_N_DECL 18

/*
 * 0: Put huge pool RAM POOL_HG_RAM_03 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_03 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_03_RET_N_MASK 0x00080000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_03_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_03_RET_N_POS 19
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_03_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_03_RET_N_DECL 19

/*
 * 0: Put huge pool RAM POOL_HG_RAM_04 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_04 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_04_RET_N_MASK 0x00100000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_04_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_04_RET_N_POS 20
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_04_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_04_RET_N_DECL 20

/*
 * 0: Put huge pool RAM POOL_HG_RAM_05 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_05 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_05_RET_N_MASK 0x00200000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_05_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_05_RET_N_POS 21
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_05_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_05_RET_N_DECL 21

/*
 * 0: Put huge pool RAM POOL_HG_RAM_06 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_06 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_06_RET_N_MASK 0x00400000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_06_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_06_RET_N_POS 22
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_06_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_06_RET_N_DECL 22

/*
 * 0: Put huge pool RAM POOL_HG_RAM_07 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_07 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_07_RET_N_MASK 0x00800000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_07_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_07_RET_N_POS 23
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_07_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_07_RET_N_DECL 23

/*
 * 0: Put huge pool RAM POOL_HG_RAM_08 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_08 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_08_RET_N_MASK 0x01000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_08_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_08_RET_N_POS 24
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_08_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_08_RET_N_DECL 24

/*
 * 0: Put huge pool RAM POOL_HG_RAM_09 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_09 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_09_RET_N_MASK 0x02000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_09_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_09_RET_N_POS 25
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_09_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_09_RET_N_DECL 25

/*
 * 0: Put huge pool RAM POOL_HG_RAM_10 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_10 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_10_RET_N_MASK 0x04000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_10_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_10_RET_N_POS 26
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_10_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_10_RET_N_DECL 26

/*
 * 0: Put huge pool RAM POOL_HG_RAM_11 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_11 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_11_RET_N_MASK 0x08000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_11_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_11_RET_N_POS 27
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_11_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_11_RET_N_DECL 27

/*
 * 0: Put huge pool RAM POOL_HG_RAM_12 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_12 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_12_RET_N_MASK 0x10000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_12_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_12_RET_N_POS 28
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_12_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_12_RET_N_DECL 28

/*
 * 0: Put huge pool RAM POOL_HG_RAM_13 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_13 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_13_RET_N_MASK 0x20000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_13_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_13_RET_N_POS 29
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_13_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_13_RET_N_DECL 29

/*
 * 0: Put huge pool RAM POOL_HG_RAM_14 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_14 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_14_RET_N_MASK 0x40000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_14_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_14_RET_N_POS 30
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_14_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_14_RET_N_DECL 30

/*
 * 0: Put huge pool RAM POOL_HG_RAM_15 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_15 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_15_RET_N_MASK 0x80000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_15_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_15_RET_N_POS 31
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_15_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_0_15_RET_N_DECL 31

/*** AO_POOL_HG_RAM_PWR_CTRL_1 (0x50010014) ***/
/*
 * This register has bits to control power to all huge pool RAMs
 * individually. It also has retention control for them.
 * Power to the memory periphery is controlled by the sleep state of power
 * domain 8 (PD8), where the memory resides. The sleep state is controlled by
 * <a href="#Rome.AO.SW_PWR_CTRL_SET">AO.SW_PWR_CTRL_SET</a> and <a
 * href="#Rome.AO.SW_PWR_CTRL_CLR">AO.SW_PWR_CTRL_CLR</a> registers.
 * NOTE: IF PD1 is put to sleep, we will ignore the boss related register
 * bits and the sctrl sequencer will handle them in hardware.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_ADDR (0x50010014)
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_MASK_VAL 0xffffffff
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_RMASK_VAL 0xffffffff
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_WMASK_VAL 0xffffffff
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_RESET_VAL 0xffff0000

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_16.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_16. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_16_MEM_CORE_PWR_DN_MASK 0x00000001
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_16_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_16_MEM_CORE_PWR_DN_POS 0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_16_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_16_MEM_CORE_PWR_DN_DECL 0

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_17.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_17. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_17_MEM_CORE_PWR_DN_MASK 0x00000002
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_17_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_17_MEM_CORE_PWR_DN_POS 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_17_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_17_MEM_CORE_PWR_DN_DECL 1

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_18.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_18. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_18_MEM_CORE_PWR_DN_MASK 0x00000004
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_18_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_18_MEM_CORE_PWR_DN_POS 2
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_18_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_18_MEM_CORE_PWR_DN_DECL 2

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_19.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_19. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_19_MEM_CORE_PWR_DN_MASK 0x00000008
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_19_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_19_MEM_CORE_PWR_DN_POS 3
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_19_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_19_MEM_CORE_PWR_DN_DECL 3

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_20.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_20. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_20_MEM_CORE_PWR_DN_MASK 0x00000010
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_20_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_20_MEM_CORE_PWR_DN_POS 4
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_20_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_20_MEM_CORE_PWR_DN_DECL 4

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_21.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_21. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_21_MEM_CORE_PWR_DN_MASK 0x00000020
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_21_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_21_MEM_CORE_PWR_DN_POS 5
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_21_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_21_MEM_CORE_PWR_DN_DECL 5

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_22.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_22. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_22_MEM_CORE_PWR_DN_MASK 0x00000040
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_22_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_22_MEM_CORE_PWR_DN_POS 6
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_22_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_22_MEM_CORE_PWR_DN_DECL 6

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_23.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_23. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_23_MEM_CORE_PWR_DN_MASK 0x00000080
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_23_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_23_MEM_CORE_PWR_DN_POS 7
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_23_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_23_MEM_CORE_PWR_DN_DECL 7

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_24.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_24. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_24_MEM_CORE_PWR_DN_MASK 0x00000100
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_24_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_24_MEM_CORE_PWR_DN_POS 8
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_24_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_24_MEM_CORE_PWR_DN_DECL 8

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_25.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_25. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_25_MEM_CORE_PWR_DN_MASK 0x00000200
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_25_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_25_MEM_CORE_PWR_DN_POS 9
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_25_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_25_MEM_CORE_PWR_DN_DECL 9

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_26.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_26. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_26_MEM_CORE_PWR_DN_MASK 0x00000400
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_26_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_26_MEM_CORE_PWR_DN_POS 10
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_26_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_26_MEM_CORE_PWR_DN_DECL 10

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_27.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_27. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_27_MEM_CORE_PWR_DN_MASK 0x00000800
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_27_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_27_MEM_CORE_PWR_DN_POS 11
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_27_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_27_MEM_CORE_PWR_DN_DECL 11

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_28.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_28. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_28_MEM_CORE_PWR_DN_MASK 0x00001000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_28_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_28_MEM_CORE_PWR_DN_POS 12
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_28_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_28_MEM_CORE_PWR_DN_DECL 12

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_29.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_29. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_29_MEM_CORE_PWR_DN_MASK 0x00002000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_29_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_29_MEM_CORE_PWR_DN_POS 13
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_29_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_29_MEM_CORE_PWR_DN_DECL 13

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_30.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_30. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_30_MEM_CORE_PWR_DN_MASK 0x00004000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_30_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_30_MEM_CORE_PWR_DN_POS 14
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_30_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_30_MEM_CORE_PWR_DN_DECL 14

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_31.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_31. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_31_MEM_CORE_PWR_DN_MASK 0x00008000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_31_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_31_MEM_CORE_PWR_DN_POS 15
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_31_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_31_MEM_CORE_PWR_DN_DECL 15

/*
 * 0: Put huge pool RAM POOL_HG_RAM_16 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_16 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_16_RET_N_MASK 0x00010000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_16_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_16_RET_N_POS 16
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_16_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_16_RET_N_DECL 16

/*
 * 0: Put huge pool RAM POOL_HG_RAM_17 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_17 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_17_RET_N_MASK 0x00020000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_17_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_17_RET_N_POS 17
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_17_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_17_RET_N_DECL 17

/*
 * 0: Put huge pool RAM POOL_HG_RAM_18 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_18 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_18_RET_N_MASK 0x00040000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_18_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_18_RET_N_POS 18
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_18_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_18_RET_N_DECL 18

/*
 * 0: Put huge pool RAM POOL_HG_RAM_19 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_19 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_19_RET_N_MASK 0x00080000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_19_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_19_RET_N_POS 19
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_19_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_19_RET_N_DECL 19

/*
 * 0: Put huge pool RAM POOL_HG_RAM_20 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_20 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_20_RET_N_MASK 0x00100000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_20_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_20_RET_N_POS 20
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_20_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_20_RET_N_DECL 20

/*
 * 0: Put huge pool RAM POOL_HG_RAM_21 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_21 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_21_RET_N_MASK 0x00200000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_21_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_21_RET_N_POS 21
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_21_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_21_RET_N_DECL 21

/*
 * 0: Put huge pool RAM POOL_HG_RAM_22 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_22 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_22_RET_N_MASK 0x00400000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_22_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_22_RET_N_POS 22
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_22_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_22_RET_N_DECL 22

/*
 * 0: Put huge pool RAM POOL_HG_RAM_23 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_23 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_23_RET_N_MASK 0x00800000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_23_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_23_RET_N_POS 23
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_23_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_23_RET_N_DECL 23

/*
 * 0: Put huge pool RAM POOL_HG_RAM_24 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_24 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_24_RET_N_MASK 0x01000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_24_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_24_RET_N_POS 24
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_24_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_24_RET_N_DECL 24

/*
 * 0: Put huge pool RAM POOL_HG_RAM_25 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_25 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_25_RET_N_MASK 0x02000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_25_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_25_RET_N_POS 25
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_25_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_25_RET_N_DECL 25

/*
 * 0: Put huge pool RAM POOL_HG_RAM_26 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_26 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_26_RET_N_MASK 0x04000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_26_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_26_RET_N_POS 26
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_26_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_26_RET_N_DECL 26

/*
 * 0: Put huge pool RAM POOL_HG_RAM_27 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_27 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_27_RET_N_MASK 0x08000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_27_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_27_RET_N_POS 27
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_27_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_27_RET_N_DECL 27

/*
 * 0: Put huge pool RAM POOL_HG_RAM_28 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_28 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_28_RET_N_MASK 0x10000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_28_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_28_RET_N_POS 28
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_28_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_28_RET_N_DECL 28

/*
 * 0: Put huge pool RAM POOL_HG_RAM_29 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_29 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_29_RET_N_MASK 0x20000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_29_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_29_RET_N_POS 29
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_29_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_29_RET_N_DECL 29

/*
 * 0: Put huge pool RAM POOL_HG_RAM_30 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_30 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_30_RET_N_MASK 0x40000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_30_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_30_RET_N_POS 30
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_30_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_30_RET_N_DECL 30

/*
 * 0: Put huge pool RAM POOL_HG_RAM_31 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_31 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_31_RET_N_MASK 0x80000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_31_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_31_RET_N_POS 31
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_31_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_1_31_RET_N_DECL 31

/*** AO_POOL_HG_RAM_PWR_CTRL_2 (0x50010018) ***/
/*
 * This register has bits to control power to all huge pool RAMs
 * individually. It also has retention control for them.
 * Power to the memory periphery is controlled by the sleep state of power
 * domain 8 (PD8), where the memory resides. The sleep state is controlled by
 * <a href="#Rome.AO.SW_PWR_CTRL_SET">AO.SW_PWR_CTRL_SET</a> and <a
 * href="#Rome.AO.SW_PWR_CTRL_CLR">AO.SW_PWR_CTRL_CLR</a> registers.
 * NOTE: IF PD1 is put to sleep, we will ignore the boss related register
 * bits and the sctrl sequencer will handle them in hardware.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_ADDR (0x50010018)
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_MASK_VAL 0xffffffff
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_RMASK_VAL 0xffffffff
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_WMASK_VAL 0xffffffff
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_RESET_VAL 0xffff0000

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_32.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_32. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_32_MEM_CORE_PWR_DN_MASK 0x00000001
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_32_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_32_MEM_CORE_PWR_DN_POS 0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_32_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_32_MEM_CORE_PWR_DN_DECL 0

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_33.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_33. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_33_MEM_CORE_PWR_DN_MASK 0x00000002
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_33_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_33_MEM_CORE_PWR_DN_POS 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_33_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_33_MEM_CORE_PWR_DN_DECL 1

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_34.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_34. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_34_MEM_CORE_PWR_DN_MASK 0x00000004
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_34_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_34_MEM_CORE_PWR_DN_POS 2
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_34_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_34_MEM_CORE_PWR_DN_DECL 2

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_35.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_35. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_35_MEM_CORE_PWR_DN_MASK 0x00000008
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_35_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_35_MEM_CORE_PWR_DN_POS 3
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_35_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_35_MEM_CORE_PWR_DN_DECL 3

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_36.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_36. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_36_MEM_CORE_PWR_DN_MASK 0x00000010
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_36_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_36_MEM_CORE_PWR_DN_POS 4
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_36_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_36_MEM_CORE_PWR_DN_DECL 4

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_37.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_37. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_37_MEM_CORE_PWR_DN_MASK 0x00000020
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_37_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_37_MEM_CORE_PWR_DN_POS 5
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_37_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_37_MEM_CORE_PWR_DN_DECL 5

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_38.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_38. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_38_MEM_CORE_PWR_DN_MASK 0x00000040
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_38_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_38_MEM_CORE_PWR_DN_POS 6
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_38_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_38_MEM_CORE_PWR_DN_DECL 6

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_39.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_39. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_39_MEM_CORE_PWR_DN_MASK 0x00000080
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_39_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_39_MEM_CORE_PWR_DN_POS 7
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_39_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_39_MEM_CORE_PWR_DN_DECL 7

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_40.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_40. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_40_MEM_CORE_PWR_DN_MASK 0x00000100
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_40_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_40_MEM_CORE_PWR_DN_POS 8
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_40_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_40_MEM_CORE_PWR_DN_DECL 8

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_41.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_41. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_41_MEM_CORE_PWR_DN_MASK 0x00000200
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_41_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_41_MEM_CORE_PWR_DN_POS 9
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_41_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_41_MEM_CORE_PWR_DN_DECL 9

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_42.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_42. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_42_MEM_CORE_PWR_DN_MASK 0x00000400
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_42_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_42_MEM_CORE_PWR_DN_POS 10
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_42_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_42_MEM_CORE_PWR_DN_DECL 10

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_43.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_43. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_43_MEM_CORE_PWR_DN_MASK 0x00000800
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_43_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_43_MEM_CORE_PWR_DN_POS 11
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_43_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_43_MEM_CORE_PWR_DN_DECL 11

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_44.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_44. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_44_MEM_CORE_PWR_DN_MASK 0x00001000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_44_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_44_MEM_CORE_PWR_DN_POS 12
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_44_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_44_MEM_CORE_PWR_DN_DECL 12

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_45.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_45. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_45_MEM_CORE_PWR_DN_MASK 0x00002000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_45_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_45_MEM_CORE_PWR_DN_POS 13
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_45_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_45_MEM_CORE_PWR_DN_DECL 13

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_46.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_46. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_46_MEM_CORE_PWR_DN_MASK 0x00004000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_46_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_46_MEM_CORE_PWR_DN_POS 14
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_46_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_46_MEM_CORE_PWR_DN_DECL 14

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_47.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_47. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_47_MEM_CORE_PWR_DN_MASK 0x00008000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_47_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_47_MEM_CORE_PWR_DN_POS 15
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_47_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_47_MEM_CORE_PWR_DN_DECL 15

/*
 * 0: Put huge pool RAM POOL_HG_RAM_32 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_32 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_32_RET_N_MASK 0x00010000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_32_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_32_RET_N_POS 16
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_32_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_32_RET_N_DECL 16

/*
 * 0: Put huge pool RAM POOL_HG_RAM_33 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_33 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_33_RET_N_MASK 0x00020000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_33_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_33_RET_N_POS 17
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_33_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_33_RET_N_DECL 17

/*
 * 0: Put huge pool RAM POOL_HG_RAM_34 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_34 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_34_RET_N_MASK 0x00040000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_34_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_34_RET_N_POS 18
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_34_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_34_RET_N_DECL 18

/*
 * 0: Put huge pool RAM POOL_HG_RAM_35 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_35 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_35_RET_N_MASK 0x00080000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_35_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_35_RET_N_POS 19
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_35_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_35_RET_N_DECL 19

/*
 * 0: Put huge pool RAM POOL_HG_RAM_36 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_36 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_36_RET_N_MASK 0x00100000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_36_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_36_RET_N_POS 20
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_36_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_36_RET_N_DECL 20

/*
 * 0: Put huge pool RAM POOL_HG_RAM_37 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_37 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_37_RET_N_MASK 0x00200000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_37_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_37_RET_N_POS 21
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_37_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_37_RET_N_DECL 21

/*
 * 0: Put huge pool RAM POOL_HG_RAM_38 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_38 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_38_RET_N_MASK 0x00400000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_38_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_38_RET_N_POS 22
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_38_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_38_RET_N_DECL 22

/*
 * 0: Put huge pool RAM POOL_HG_RAM_39 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_39 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_39_RET_N_MASK 0x00800000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_39_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_39_RET_N_POS 23
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_39_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_39_RET_N_DECL 23

/*
 * 0: Put huge pool RAM POOL_HG_RAM_40 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_40 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_40_RET_N_MASK 0x01000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_40_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_40_RET_N_POS 24
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_40_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_40_RET_N_DECL 24

/*
 * 0: Put huge pool RAM POOL_HG_RAM_41 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_41 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_41_RET_N_MASK 0x02000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_41_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_41_RET_N_POS 25
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_41_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_41_RET_N_DECL 25

/*
 * 0: Put huge pool RAM POOL_HG_RAM_42 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_42 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_42_RET_N_MASK 0x04000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_42_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_42_RET_N_POS 26
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_42_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_42_RET_N_DECL 26

/*
 * 0: Put huge pool RAM POOL_HG_RAM_43 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_43 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_43_RET_N_MASK 0x08000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_43_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_43_RET_N_POS 27
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_43_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_43_RET_N_DECL 27

/*
 * 0: Put huge pool RAM POOL_HG_RAM_44 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_44 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_44_RET_N_MASK 0x10000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_44_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_44_RET_N_POS 28
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_44_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_44_RET_N_DECL 28

/*
 * 0: Put huge pool RAM POOL_HG_RAM_45 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_45 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_45_RET_N_MASK 0x20000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_45_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_45_RET_N_POS 29
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_45_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_45_RET_N_DECL 29

/*
 * 0: Put huge pool RAM POOL_HG_RAM_46 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_46 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_46_RET_N_MASK 0x40000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_46_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_46_RET_N_POS 30
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_46_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_46_RET_N_DECL 30

/*
 * 0: Put huge pool RAM POOL_HG_RAM_47 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_47 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_47_RET_N_MASK 0x80000000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_47_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_47_RET_N_POS 31
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_47_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_2_47_RET_N_DECL 31

/*** AO_POOL_HG_RAM_PWR_CTRL_3 (0x5001001c) ***/
/*
 * This register has bits to control power to all huge pool RAMs
 * individually. It also has retention control for them.
 * Power to the memory periphery is controlled by the sleep state of power
 * domain 8 (PD8), where the memory resides. The sleep state is controlled by
 * <a href="#Rome.AO.SW_PWR_CTRL_SET">AO.SW_PWR_CTRL_SET</a> and <a
 * href="#Rome.AO.SW_PWR_CTRL_CLR">AO.SW_PWR_CTRL_CLR</a> registers.
 * NOTE: IF PD1 is put to sleep, we will ignore the boss related register
 * bits and the sctrl sequencer will handle them in hardware.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_ADDR (0x5001001c)
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_MASK_VAL 0x00ff00ff
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_RMASK_VAL 0x00ff00ff
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_WMASK_VAL 0x00ff00ff
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_RESET_VAL 0x00ff0000

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_48.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_48. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_48_MEM_CORE_PWR_DN_MASK 0x00000001
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_48_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_48_MEM_CORE_PWR_DN_POS 0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_48_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_48_MEM_CORE_PWR_DN_DECL 0

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_49.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_49. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_49_MEM_CORE_PWR_DN_MASK 0x00000002
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_49_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_49_MEM_CORE_PWR_DN_POS 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_49_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_49_MEM_CORE_PWR_DN_DECL 1

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_50.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_50. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_50_MEM_CORE_PWR_DN_MASK 0x00000004
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_50_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_50_MEM_CORE_PWR_DN_POS 2
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_50_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_50_MEM_CORE_PWR_DN_DECL 2

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_51.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_51. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_51_MEM_CORE_PWR_DN_MASK 0x00000008
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_51_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_51_MEM_CORE_PWR_DN_POS 3
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_51_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_51_MEM_CORE_PWR_DN_DECL 3

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_52.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_52. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_52_MEM_CORE_PWR_DN_MASK 0x00000010
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_52_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_52_MEM_CORE_PWR_DN_POS 4
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_52_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_52_MEM_CORE_PWR_DN_DECL 4

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_53.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_53. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_53_MEM_CORE_PWR_DN_MASK 0x00000020
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_53_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_53_MEM_CORE_PWR_DN_POS 5
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_53_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_53_MEM_CORE_PWR_DN_DECL 5

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_54.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_54. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_54_MEM_CORE_PWR_DN_MASK 0x00000040
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_54_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_54_MEM_CORE_PWR_DN_POS 6
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_54_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_54_MEM_CORE_PWR_DN_DECL 6

/*
 * 0: Re-apply power to the memory core of huge pool RAM POOL_HG_RAM_55.
 * 1: Power down the core of huge pool RAM POOL_HG_RAM_55. All memory
 * contents will be lost.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_55_MEM_CORE_PWR_DN_MASK 0x00000080
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_55_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_55_MEM_CORE_PWR_DN_POS 7
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_55_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_55_MEM_CORE_PWR_DN_DECL 7

/*
 * 0: Put huge pool RAM POOL_HG_RAM_48 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_48 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_48_RET_N_MASK 0x00010000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_48_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_48_RET_N_POS 16
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_48_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_48_RET_N_DECL 16

/*
 * 0: Put huge pool RAM POOL_HG_RAM_49 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_49 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_49_RET_N_MASK 0x00020000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_49_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_49_RET_N_POS 17
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_49_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_49_RET_N_DECL 17

/*
 * 0: Put huge pool RAM POOL_HG_RAM_50 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_50 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_50_RET_N_MASK 0x00040000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_50_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_50_RET_N_POS 18
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_50_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_50_RET_N_DECL 18

/*
 * 0: Put huge pool RAM POOL_HG_RAM_51 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_51 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_51_RET_N_MASK 0x00080000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_51_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_51_RET_N_POS 19
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_51_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_51_RET_N_DECL 19

/*
 * 0: Put huge pool RAM POOL_HG_RAM_52 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_52 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_52_RET_N_MASK 0x00100000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_52_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_52_RET_N_POS 20
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_52_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_52_RET_N_DECL 20

/*
 * 0: Put huge pool RAM POOL_HG_RAM_53 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_53 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_53_RET_N_MASK 0x00200000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_53_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_53_RET_N_POS 21
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_53_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_53_RET_N_DECL 21

/*
 * 0: Put huge pool RAM POOL_HG_RAM_54 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_54 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_54_RET_N_MASK 0x00400000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_54_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_54_RET_N_POS 22
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_54_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_54_RET_N_DECL 22

/*
 * 0: Put huge pool RAM POOL_HG_RAM_55 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take huge pool RAM POOL_HG_RAM_55 out of retention.
 */
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_55_RET_N_MASK 0x00800000
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_55_RET_N_RESET_VAL 0x1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_55_RET_N_POS 23
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_55_RET_N_SIZE 1
#define IAXXX_AO_POOL_HG_RAM_PWR_CTRL_3_55_RET_N_DECL 23

/*** AO_GLBL_MEM_PWR_CTRL (0x50010020) ***/
/*
 * This register has bits to control power to all global memories
 * individually. It also has retention control for them.
 * Power to the memory periphery is controlled by the sleep state of power
 * domain 8 (PD8), where the memory resides. The sleep state is controlled by
 * <a href="#Rome.AO.SW_PWR_CTRL_SET">AO.SW_PWR_CTRL_SET</a> and <a
 * href="#Rome.AO.SW_PWR_CTRL_CLR">AO.SW_PWR_CTRL_CLR</a> registers.
 */
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_ADDR (0x50010020)
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_MASK_VAL 0x001f001f
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_RMASK_VAL 0x001f001f
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_WMASK_VAL 0x001f001f
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_RESET_VAL 0x001f0000

/*
 * 0: Re-apply power to the memory core of global trace RAM GLBL_ETB_RAM_0.
 * 1: Power down the core of global trace RAM GLBL_ETB_RAM_0. All memory
 * contents will be lost.
 */
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_ETB_RAM_0_MEM_CORE_PWR_DN_MASK\
							0x00000001
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_ETB_RAM_0_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_ETB_RAM_0_MEM_CORE_PWR_DN_POS 0
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_ETB_RAM_0_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_ETB_RAM_0_MEM_CORE_PWR_DN_DECL 0

/*
 * 0: Re-apply power to the memory core of global RAM GLBL_MEM_RAM_0.
 * 1: Power down the core of global RAM GLBL_MEM_RAM_0. All memory contents
 * will be lost.
 */
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_0_MEM_CORE_PWR_DN_MASK \
							0x00000002
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_0_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_0_MEM_CORE_PWR_DN_POS 1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_0_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_0_MEM_CORE_PWR_DN_DECL 1

/*
 * 0: Re-apply power to the memory core of global RAM GLBL_MEM_RAM_1.
 * 1: Power down the core of global RAM GLBL_MEM_RAM_1. All memory contents
 * will be lost.
 */
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_1_MEM_CORE_PWR_DN_MASK \
							0x00000004
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_1_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_1_MEM_CORE_PWR_DN_POS 2
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_1_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_1_MEM_CORE_PWR_DN_DECL 2

/*
 * 0: Re-apply power to the memory core of global RAM GLBL_MEM_RAM_2.
 * 1: Power down the core of global RAM GLBL_MEM_RAM_2. All memory contents
 * will be lost.
 */
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_2_MEM_CORE_PWR_DN_MASK \
							0x00000008
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_2_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_2_MEM_CORE_PWR_DN_POS 3
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_2_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_2_MEM_CORE_PWR_DN_DECL 3

/*
 * 0: Re-apply power to the memory core of global RAM GLBL_MEM_RAM_3.
 * 1: Power down the core of global RAM GLBL_MEM_RAM_3. All memory contents
 * will be lost.
 */
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_3_MEM_CORE_PWR_DN_MASK \
							0x00000010
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_3_MEM_CORE_PWR_DN_RESET_VAL 0x0
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_3_MEM_CORE_PWR_DN_POS 4
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_3_MEM_CORE_PWR_DN_SIZE 1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_3_MEM_CORE_PWR_DN_DECL 4

/*
 * 0: Put global trace RAM GLBL_ETB_RAM_0 into retention. It is a low power
 * state in which memory contents are preserved.
 * 1: Take global trace RAM GLBL_ETB_RAM_0 out of retention.
 */
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_ETB_RAM_0_RET_N_MASK 0x00010000
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_ETB_RAM_0_RET_N_RESET_VAL 0x1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_ETB_RAM_0_RET_N_POS 16
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_ETB_RAM_0_RET_N_SIZE 1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_ETB_RAM_0_RET_N_DECL 16

/*
 * 0: Put global RAM GLBL_MEM_RAM_0 into retention. It is a low power state
 * in which memory contents are preserved.
 * 1: Take global RAM GLBL_MEM_RAM_0 out of retention.
 */
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_0_RET_N_MASK 0x00020000
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_0_RET_N_RESET_VAL 0x1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_0_RET_N_POS 17
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_0_RET_N_SIZE 1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_0_RET_N_DECL 17

/*
 * 0: Put global RAM GLBL_MEM_RAM_1 into retention. It is a low power state
 * in which memory contents are preserved.
 * 1: Take global RAM GLBL_MEM_RAM_1 out of retention.
 */
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_1_RET_N_MASK 0x00040000
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_1_RET_N_RESET_VAL 0x1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_1_RET_N_POS 18
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_1_RET_N_SIZE 1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_1_RET_N_DECL 18

/*
 * 0: Put global RAM GLBL_MEM_RAM_2 into retention. It is a low power state
 * in which memory contents are preserved.
 * 1: Take global RAM GLBL_MEM_RAM_2 out of retention.
 */
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_2_RET_N_MASK 0x00080000
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_2_RET_N_RESET_VAL 0x1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_2_RET_N_POS 19
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_2_RET_N_SIZE 1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_2_RET_N_DECL 19

/*
 * 0: Put global RAM GLBL_MEM_RAM_3 into retention. It is a low power state
 * in which memory contents are preserved.
 * 1: Take global RAM GLBL_MEM_RAM_3 out of retention.
 */
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_3_RET_N_MASK 0x00100000
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_3_RET_N_RESET_VAL 0x1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_3_RET_N_POS 20
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_3_RET_N_SIZE 1
#define IAXXX_AO_GLBL_MEM_PWR_CTRL_GLBL_MEM_RAM_3_RET_N_DECL 20

/*** AO_MEM_ELEC_CTRL (0x50010024) ***/
/*
 * This register is used to configure internal read and write margins for
 * memories. There is one control for all ROMs and one control for all RAMs
 * on the chip.
 * It is also used to adjust source bias voltage for memories when in
 * retention mode, which controls retention voltage and leakage.
 */
#define IAXXX_AO_MEM_ELEC_CTRL_ADDR (0x50010024)
#define IAXXX_AO_MEM_ELEC_CTRL_MASK_VAL 0x000001ff
#define IAXXX_AO_MEM_ELEC_CTRL_RMASK_VAL 0x000001ff
#define IAXXX_AO_MEM_ELEC_CTRL_WMASK_VAL 0x000001ff
#define IAXXX_AO_MEM_ELEC_CTRL_RESET_VAL 0x00000112

/*
 * This field is used to select read and write margins for all ROMs on the
 * chip.
 * <pre>
 *        +--------------------+-------+-------+
 *        | Recommended Margin |       |       |
 *        |      Settings      | RM[1] | RM[0] |
 *        +--------------------+-------+-------+
 *        |    VDD > 0.90 V    |   1   |   0   |
 *        |   VDD <= 0.90 V    |   0   |   1   |
 *        +--------------------+-------+-------+
 *
   +-------+-------+------------------------------+
 *   | RM[1] | RM[0] | Internal Read Timing Margins |
 *   +-------+-------+------------------------------+
 *   |   0   |   0   |         Slowest Read         |
 *   |   0   |   1   |           Slow Read          |
 *   |   1   |   0   |          Normal Read         |
 *   |   1   |   1   |           Fast Read          |
 *   +-------+-------+------------------------------+
 * </pre>
 */
#define IAXXX_AO_MEM_ELEC_CTRL_RD_WR_MARGIN_ADJ_ROM_MASK 0x00000003
#define IAXXX_AO_MEM_ELEC_CTRL_RD_WR_MARGIN_ADJ_ROM_RESET_VAL 0x2
#define IAXXX_AO_MEM_ELEC_CTRL_RD_WR_MARGIN_ADJ_ROM_POS 0
#define IAXXX_AO_MEM_ELEC_CTRL_RD_WR_MARGIN_ADJ_ROM_SIZE 2
#define IAXXX_AO_MEM_ELEC_CTRL_RD_WR_MARGIN_ADJ_ROM_DECL (1 : 0)

/*
 * This field is used to select read and write margins for all SRAMs on the
 * chip.
 * <pre>
 *         +--------------------+-----+----+----+
 *         | Recommended Margin |     |    |    |
 *         |      Settings      | RWM | RM | WM |
 *         +--------------------+-----+----+----+
 *         |    VDD > 0.90 V    |  1  | 0  | 0  |
 *         |   VDD <= 0.90 V    |  0  | 1  | 1  |
 *         +--------------------+-----+----+----+
 *
   +-----+-----+-----+------------------------------+
 *   | RWM | RM  | WM  | Internal Read Timing Margins |
 *   +-----+-----+-----+------------------------------+
 *   |  0  |  0  |  0  | Slowest Read, Slowest Write  |
 *   |  0  |  0  |  1  |   Slowest Read, Slow Write   |
 *   |  0  |  1  |  0  |   Slow Read, Slowest Write   |
 *   |  0  |  1  |  1  |    Slow Read, Slow Write     |
 *   |  1  |  0  |  0  |  Normal Read, Normal Write   |
 *   |  1  |  0  |  1  |   Normal Read, Fast Write    |
 *   |  1  |  1  |  0  |   Fast Read, Normal Write    |
 *   |  1  |  1  |  1  |    Fast Read, Fast Write     |
 *   +-----+-----+-----+------------------------------+
 * </pre>
 */
#define IAXXX_AO_MEM_ELEC_CTRL_RD_WR_MARGIN_ADJ_RAM_MASK 0x0000001c
#define IAXXX_AO_MEM_ELEC_CTRL_RD_WR_MARGIN_ADJ_RAM_RESET_VAL 0x4
#define IAXXX_AO_MEM_ELEC_CTRL_RD_WR_MARGIN_ADJ_RAM_POS 2
#define IAXXX_AO_MEM_ELEC_CTRL_RD_WR_MARGIN_ADJ_RAM_SIZE 3
#define IAXXX_AO_MEM_ELEC_CTRL_RD_WR_MARGIN_ADJ_RAM_DECL (4 : 2)

/*
 * This field is used to select retention voltage and leakage values for all
 * PD8 memories. Memories in all other PDs are programmed to a fixed value
 * (4'b1111). The following table gives a comparison of retention voltage and
 * leakage for different values of BTRIM.
 * <pre>
 *           +-------+-------------+---------+
 *           |       |  Retention  |         |
 *           | Value | Voltage (V) | Leakage |
 *           +-------+-------------+---------+
 *           | 0000  |    0.756    |  Least  |
 *           |  ...  |     ...     |   ...   |
 *           | 1111  |    0.556    |   Most  |
 *           +-------+-------------+---------+
 * </pre>
 */
#define IAXXX_AO_MEM_ELEC_CTRL_PD8_BTRIM_MASK 0x000001e0
#define IAXXX_AO_MEM_ELEC_CTRL_PD8_BTRIM_RESET_VAL 0x8
#define IAXXX_AO_MEM_ELEC_CTRL_PD8_BTRIM_POS 5
#define IAXXX_AO_MEM_ELEC_CTRL_PD8_BTRIM_SIZE 4
#define IAXXX_AO_MEM_ELEC_CTRL_PD8_BTRIM_DECL (8 : 5)

/*** AO_MPLL_CTRL (0x50010028) ***/
/*
 */
#define IAXXX_AO_MPLL_CTRL_ADDR (0x50010028)
#define IAXXX_AO_MPLL_CTRL_MASK_VAL 0x0fffffff
#define IAXXX_AO_MPLL_CTRL_RMASK_VAL 0x0fffffff
#define IAXXX_AO_MPLL_CTRL_WMASK_VAL 0x07ffffff
#define IAXXX_AO_MPLL_CTRL_RESET_VAL 0x00000050

/*
 * Reference divide value (1 to 16)
 */
#define IAXXX_AO_MPLL_CTRL_REFDIV_MASK 0x0000000f
#define IAXXX_AO_MPLL_CTRL_REFDIV_RESET_VAL 0x0
#define IAXXX_AO_MPLL_CTRL_REFDIV_POS 0
#define IAXXX_AO_MPLL_CTRL_REFDIV_SIZE 4
#define IAXXX_AO_MPLL_CTRL_REFDIV_DECL (3 : 0)

/*
 * PLL Feedback divider (Valid values 4 to 781)
 */
#define IAXXX_AO_MPLL_CTRL_FBDIV_MASK 0x00003ff0
#define IAXXX_AO_MPLL_CTRL_FBDIV_RESET_VAL 0x5
#define IAXXX_AO_MPLL_CTRL_FBDIV_POS 4
#define IAXXX_AO_MPLL_CTRL_FBDIV_SIZE 10
#define IAXXX_AO_MPLL_CTRL_FBDIV_DECL (13 : 4)

/*
 * PLL post divide 1 setting (1 to 16). Total post divide is
 * POSTDIV1*POSTDIV2. Actual divide value is POSTDIV1+1. Example: divide-by-1
 * = 4'b0000, divide-by-16 = 4'b1111
 */
#define IAXXX_AO_MPLL_CTRL_POSTDIV1_MASK 0x0003c000
#define IAXXX_AO_MPLL_CTRL_POSTDIV1_RESET_VAL 0x0
#define IAXXX_AO_MPLL_CTRL_POSTDIV1_POS 14
#define IAXXX_AO_MPLL_CTRL_POSTDIV1_SIZE 4
#define IAXXX_AO_MPLL_CTRL_POSTDIV1_DECL (17 : 14)

/*
 * PLL post divide 2 setting (1 to 16). Total post divide is
 * POSTDIV1*POSTDIV2. Actual divide value is POSTDIV2+1. Example: divide-by-1
 * = 4'b0000, divide-by-16 = 4'b1111
 */
#define IAXXX_AO_MPLL_CTRL_POSTDIV2_MASK 0x003c0000
#define IAXXX_AO_MPLL_CTRL_POSTDIV2_RESET_VAL 0x0
#define IAXXX_AO_MPLL_CTRL_POSTDIV2_POS 18
#define IAXXX_AO_MPLL_CTRL_POSTDIV2_SIZE 4
#define IAXXX_AO_MPLL_CTRL_POSTDIV2_DECL (21 : 18)

/*
 * Power down for PLL. Active high. If this bit is 0 then PLL power down is
 * sequenced by SCTRL. If this bit is 1 then PLL is powered down and SCTRL
 * output is ignored.
 */
#define IAXXX_AO_MPLL_CTRL_PD_MASK 0x00400000
#define IAXXX_AO_MPLL_CTRL_PD_RESET_VAL 0x0
#define IAXXX_AO_MPLL_CTRL_PD_POS 22
#define IAXXX_AO_MPLL_CTRL_PD_SIZE 1
#define IAXXX_AO_MPLL_CTRL_PD_DECL 22

/*
 * Post divide power down. Active high.
 */
#define IAXXX_AO_MPLL_CTRL_FOUTPD_MASK 0x00800000
#define IAXXX_AO_MPLL_CTRL_FOUTPD_RESET_VAL 0x0
#define IAXXX_AO_MPLL_CTRL_FOUTPD_POS 23
#define IAXXX_AO_MPLL_CTRL_FOUTPD_SIZE 1
#define IAXXX_AO_MPLL_CTRL_FOUTPD_DECL 23

/*
 * VCO rate output clock power down. Active high.
 */
#define IAXXX_AO_MPLL_CTRL_FOUTVCOPD_MASK 0x01000000
#define IAXXX_AO_MPLL_CTRL_FOUTVCOPD_RESET_VAL 0x0
#define IAXXX_AO_MPLL_CTRL_FOUTVCOPD_POS 24
#define IAXXX_AO_MPLL_CTRL_FOUTVCOPD_SIZE 1
#define IAXXX_AO_MPLL_CTRL_FOUTVCOPD_DECL 24

/*
 * VCO Range selection and selection of predivider RANGE.
 * VCO range: 0 => 28MHz to 140MHz
 *            1 => 120MHz to 600MHz
 */
#define IAXXX_AO_MPLL_CTRL_RANGE_MASK 0x02000000
#define IAXXX_AO_MPLL_CTRL_RANGE_RESET_VAL 0x0
#define IAXXX_AO_MPLL_CTRL_RANGE_POS 25
#define IAXXX_AO_MPLL_CTRL_RANGE_SIZE 1
#define IAXXX_AO_MPLL_CTRL_RANGE_DECL 25

/*
 * FREF is bypassed to FOUT.
 */
#define IAXXX_AO_MPLL_CTRL_BYPASS_MASK 0x04000000
#define IAXXX_AO_MPLL_CTRL_BYPASS_RESET_VAL 0x0
#define IAXXX_AO_MPLL_CTRL_BYPASS_POS 26
#define IAXXX_AO_MPLL_CTRL_BYPASS_SIZE 1
#define IAXXX_AO_MPLL_CTRL_BYPASS_DECL 26

/*
 * Lock signal. Indicates no cycle slips between the feedback clock and FPFD
 * for 256 consectutive cycles.
 */
#define IAXXX_AO_MPLL_CTRL_LOCK_MASK 0x08000000
#define IAXXX_AO_MPLL_CTRL_LOCK_RESET_VAL 0x0
#define IAXXX_AO_MPLL_CTRL_LOCK_POS 27
#define IAXXX_AO_MPLL_CTRL_LOCK_SIZE 1
#define IAXXX_AO_MPLL_CTRL_LOCK_DECL 27

/*** AO_MPLL_PLLC (0x5001002c) ***/
/*
 */
#define IAXXX_AO_MPLL_PLLC_ADDR (0x5001002c)
#define IAXXX_AO_MPLL_PLLC_MASK_VAL 0x0000001f
#define IAXXX_AO_MPLL_PLLC_RMASK_VAL 0x0000001f
#define IAXXX_AO_MPLL_PLLC_WMASK_VAL 0x0000001f
#define IAXXX_AO_MPLL_PLLC_RESET_VAL 0x00000000

/*
 * When high, the on-the-fly frequency change mode is eanbled; the PLL
 * frequency can be changed on the fly.
 */
#define IAXXX_AO_MPLL_PLLC_ON_THE_FLY_MODE_MASK 0x00000001
#define IAXXX_AO_MPLL_PLLC_ON_THE_FLY_MODE_RESET_VAL 0x0
#define IAXXX_AO_MPLL_PLLC_ON_THE_FLY_MODE_POS 0
#define IAXXX_AO_MPLL_PLLC_ON_THE_FLY_MODE_SIZE 1
#define IAXXX_AO_MPLL_PLLC_ON_THE_FLY_MODE_DECL 0

/*
 * Clock gate enable for MPLL FOUT output clock coming into the PLLC module
 */
#define IAXXX_AO_MPLL_PLLC_FOUT_CGEN_MASK 0x00000002
#define IAXXX_AO_MPLL_PLLC_FOUT_CGEN_RESET_VAL 0x0
#define IAXXX_AO_MPLL_PLLC_FOUT_CGEN_POS 1
#define IAXXX_AO_MPLL_PLLC_FOUT_CGEN_SIZE 1
#define IAXXX_AO_MPLL_PLLC_FOUT_CGEN_DECL 1

/*
 * Clock gate enable for MPLL FREF input clock coming into the PLLC module
 */
#define IAXXX_AO_MPLL_PLLC_FREF_CGEN_MASK 0x00000004
#define IAXXX_AO_MPLL_PLLC_FREF_CGEN_RESET_VAL 0x0
#define IAXXX_AO_MPLL_PLLC_FREF_CGEN_POS 2
#define IAXXX_AO_MPLL_PLLC_FREF_CGEN_SIZE 1
#define IAXXX_AO_MPLL_PLLC_FREF_CGEN_DECL 2

/*
 * When high the content of AO.MPLL_CTRL.REFDIV and AO.MPLL_CTRL.FBDIV is
 * provided to the PLL
 * if both AO.MPLL_PLLC.ON_THE_FLY_MODE and AO.MPLL_PLLC.FREF_CGEN are high
 */
#define IAXXX_AO_MPLL_PLLC_LOAD_REF_FB_DIV_MASK 0x00000008
#define IAXXX_AO_MPLL_PLLC_LOAD_REF_FB_DIV_RESET_VAL 0x0
#define IAXXX_AO_MPLL_PLLC_LOAD_REF_FB_DIV_POS 3
#define IAXXX_AO_MPLL_PLLC_LOAD_REF_FB_DIV_SIZE 1
#define IAXXX_AO_MPLL_PLLC_LOAD_REF_FB_DIV_DECL 3

/*
 * Writing a "1" to this register generates a pulse used to transfer the
 * content of
 * AO.MPLL_CTRL.POSTDIV1 and AO.MPLL_CTRL.POSTDIV2 to the MPLL. This takes
 * effect only
 * if both AO.MPLL_PLLC.ON_THE_FLY_MODE and AO.MPLL_PLLC.FOUT_CGEN are high
 */
#define IAXXX_AO_MPLL_PLLC_ON_THE_FLY_FOUTPD_MASK 0x00000010
#define IAXXX_AO_MPLL_PLLC_ON_THE_FLY_FOUTPD_RESET_VAL 0x0
#define IAXXX_AO_MPLL_PLLC_ON_THE_FLY_FOUTPD_POS 4
#define IAXXX_AO_MPLL_PLLC_ON_THE_FLY_FOUTPD_SIZE 1
#define IAXXX_AO_MPLL_PLLC_ON_THE_FLY_FOUTPD_DECL 4

/*** AO_APLL_PLLC (0x50010030) ***/
/*
 */
#define IAXXX_AO_APLL_PLLC_ADDR (0x50010030)
#define IAXXX_AO_APLL_PLLC_MASK_VAL 0x0000001f
#define IAXXX_AO_APLL_PLLC_RMASK_VAL 0x0000001f
#define IAXXX_AO_APLL_PLLC_WMASK_VAL 0x0000001f
#define IAXXX_AO_APLL_PLLC_RESET_VAL 0x00000000

/*
 * When high, the on-the-fly frequency change mode is eanbled; the PLL
 * frequency can be changed on the fly.
 */
#define IAXXX_AO_APLL_PLLC_ON_THE_FLY_MODE_MASK 0x00000001
#define IAXXX_AO_APLL_PLLC_ON_THE_FLY_MODE_RESET_VAL 0x0
#define IAXXX_AO_APLL_PLLC_ON_THE_FLY_MODE_POS 0
#define IAXXX_AO_APLL_PLLC_ON_THE_FLY_MODE_SIZE 1
#define IAXXX_AO_APLL_PLLC_ON_THE_FLY_MODE_DECL 0

/*
 * Clock gate enable for MPLL FOUT output clock coming into the PLLC module
 */
#define IAXXX_AO_APLL_PLLC_FOUT_CGEN_MASK 0x00000002
#define IAXXX_AO_APLL_PLLC_FOUT_CGEN_RESET_VAL 0x0
#define IAXXX_AO_APLL_PLLC_FOUT_CGEN_POS 1
#define IAXXX_AO_APLL_PLLC_FOUT_CGEN_SIZE 1
#define IAXXX_AO_APLL_PLLC_FOUT_CGEN_DECL 1

/*
 * Clock gate enable for MPLL FREF input clock coming into the PLLC module
 */
#define IAXXX_AO_APLL_PLLC_FREF_CGEN_MASK 0x00000004
#define IAXXX_AO_APLL_PLLC_FREF_CGEN_RESET_VAL 0x0
#define IAXXX_AO_APLL_PLLC_FREF_CGEN_POS 2
#define IAXXX_AO_APLL_PLLC_FREF_CGEN_SIZE 1
#define IAXXX_AO_APLL_PLLC_FREF_CGEN_DECL 2

/*
 * When high the content of AO.APLL_CTRL.REFDIV and AO.APLL_CTRL.FBDIV is
 * provided to the PLL
 * if both AO.APLL_PLLC.ON_THE_FLY_MODE and AO.APLL_PLLC.FREF_CGEN are high
 */
#define IAXXX_AO_APLL_PLLC_LOAD_REF_FB_DIV_MASK 0x00000008
#define IAXXX_AO_APLL_PLLC_LOAD_REF_FB_DIV_RESET_VAL 0x0
#define IAXXX_AO_APLL_PLLC_LOAD_REF_FB_DIV_POS 3
#define IAXXX_AO_APLL_PLLC_LOAD_REF_FB_DIV_SIZE 1
#define IAXXX_AO_APLL_PLLC_LOAD_REF_FB_DIV_DECL 3

/*
 * Writing a "1" to this register generates a pulse used to transfer the
 * content of
 * AO.APLL_CTRL.POSTDIV1 and AO.APLL_CTRL.POSTDIV2 to the MPLL. This takes
 * effect only
 * if both AO.APLL_PLLC.ON_THE_FLY_MODE and AO.APLL_PLLC.FOUT_CGEN are high
 */
#define IAXXX_AO_APLL_PLLC_ON_THE_FLY_FOUTPD_MASK 0x00000010
#define IAXXX_AO_APLL_PLLC_ON_THE_FLY_FOUTPD_RESET_VAL 0x0
#define IAXXX_AO_APLL_PLLC_ON_THE_FLY_FOUTPD_POS 4
#define IAXXX_AO_APLL_PLLC_ON_THE_FLY_FOUTPD_SIZE 1
#define IAXXX_AO_APLL_PLLC_ON_THE_FLY_FOUTPD_DECL 4

/*** AO_APLL_CTRL (0x50010034) ***/
/*
 */
#define IAXXX_AO_APLL_CTRL_ADDR (0x50010034)
#define IAXXX_AO_APLL_CTRL_MASK_VAL 0x0fffffff
#define IAXXX_AO_APLL_CTRL_RMASK_VAL 0x0fffffff
#define IAXXX_AO_APLL_CTRL_WMASK_VAL 0x07ffffff
#define IAXXX_AO_APLL_CTRL_RESET_VAL 0x01c00050

/*
 * Reference divide value (1 to 16)
 */
#define IAXXX_AO_APLL_CTRL_REFDIV_MASK 0x0000000f
#define IAXXX_AO_APLL_CTRL_REFDIV_RESET_VAL 0x0
#define IAXXX_AO_APLL_CTRL_REFDIV_POS 0
#define IAXXX_AO_APLL_CTRL_REFDIV_SIZE 4
#define IAXXX_AO_APLL_CTRL_REFDIV_DECL (3 : 0)

/*
 * PLL Feedback divider (Valid values 4 to 781)
 */
#define IAXXX_AO_APLL_CTRL_FBDIV_MASK 0x00003ff0
#define IAXXX_AO_APLL_CTRL_FBDIV_RESET_VAL 0x5
#define IAXXX_AO_APLL_CTRL_FBDIV_POS 4
#define IAXXX_AO_APLL_CTRL_FBDIV_SIZE 10
#define IAXXX_AO_APLL_CTRL_FBDIV_DECL (13 : 4)

/*
 * PLL post divide 1 setting (1 to 16). Total post divide is
 * POSTDIV1*POSTDIV2. Actual divide value is POSTDIV1+1. Example: divide-by-1
 * = 4'b0000, divide-by-16 = 4'b1111
 */
#define IAXXX_AO_APLL_CTRL_POSTDIV1_MASK 0x0003c000
#define IAXXX_AO_APLL_CTRL_POSTDIV1_RESET_VAL 0x0
#define IAXXX_AO_APLL_CTRL_POSTDIV1_POS 14
#define IAXXX_AO_APLL_CTRL_POSTDIV1_SIZE 4
#define IAXXX_AO_APLL_CTRL_POSTDIV1_DECL (17 : 14)

/*
 * PLL post divide 2 setting (1 to 16). Total post divide is
 * POSTDIV1*POSTDIV2. Actual divide value is POSTDIV2+1. Example: divide-by-1
 * = 4'b0000, divide-by-16 = 4'b1111
 */
#define IAXXX_AO_APLL_CTRL_POSTDIV2_MASK 0x003c0000
#define IAXXX_AO_APLL_CTRL_POSTDIV2_RESET_VAL 0x0
#define IAXXX_AO_APLL_CTRL_POSTDIV2_POS 18
#define IAXXX_AO_APLL_CTRL_POSTDIV2_SIZE 4
#define IAXXX_AO_APLL_CTRL_POSTDIV2_DECL (21 : 18)

/*
 * PLL Power down. Active high.
 */
#define IAXXX_AO_APLL_CTRL_PD_MASK 0x00400000
#define IAXXX_AO_APLL_CTRL_PD_RESET_VAL 0x1
#define IAXXX_AO_APLL_CTRL_PD_POS 22
#define IAXXX_AO_APLL_CTRL_PD_SIZE 1
#define IAXXX_AO_APLL_CTRL_PD_DECL 22

/*
 * Post divide power down. Active high.
 */
#define IAXXX_AO_APLL_CTRL_FOUTPD_MASK 0x00800000
#define IAXXX_AO_APLL_CTRL_FOUTPD_RESET_VAL 0x1
#define IAXXX_AO_APLL_CTRL_FOUTPD_POS 23
#define IAXXX_AO_APLL_CTRL_FOUTPD_SIZE 1
#define IAXXX_AO_APLL_CTRL_FOUTPD_DECL 23

/*
 * VCO rate output clock power down. Active high.
 */
#define IAXXX_AO_APLL_CTRL_FOUTVCOPD_MASK 0x01000000
#define IAXXX_AO_APLL_CTRL_FOUTVCOPD_RESET_VAL 0x1
#define IAXXX_AO_APLL_CTRL_FOUTVCOPD_POS 24
#define IAXXX_AO_APLL_CTRL_FOUTVCOPD_SIZE 1
#define IAXXX_AO_APLL_CTRL_FOUTVCOPD_DECL 24

/*
 * VCO Range selection and selection of predivider RANGE.
 * VCO range: 1'b0 28MHz to 140MHz
 *            1'b1 120MHz to 600MHz
 */
#define IAXXX_AO_APLL_CTRL_RANGE_MASK 0x02000000
#define IAXXX_AO_APLL_CTRL_RANGE_RESET_VAL 0x0
#define IAXXX_AO_APLL_CTRL_RANGE_POS 25
#define IAXXX_AO_APLL_CTRL_RANGE_SIZE 1
#define IAXXX_AO_APLL_CTRL_RANGE_DECL 25

/*
 * FREF is bypassed to FOUT.
 */
#define IAXXX_AO_APLL_CTRL_BYPASS_MASK 0x04000000
#define IAXXX_AO_APLL_CTRL_BYPASS_RESET_VAL 0x0
#define IAXXX_AO_APLL_CTRL_BYPASS_POS 26
#define IAXXX_AO_APLL_CTRL_BYPASS_SIZE 1
#define IAXXX_AO_APLL_CTRL_BYPASS_DECL 26

/*
 * Lock signal. Indicates no cycle slips between the feedback clock and FPFD
 * for 256 consectutive cycles.
 */
#define IAXXX_AO_APLL_CTRL_LOCK_MASK 0x08000000
#define IAXXX_AO_APLL_CTRL_LOCK_RESET_VAL 0x0
#define IAXXX_AO_APLL_CTRL_LOCK_POS 27
#define IAXXX_AO_APLL_CTRL_LOCK_SIZE 1
#define IAXXX_AO_APLL_CTRL_LOCK_DECL 27

/*** AO_OSC_CTRL (0x50010038) ***/
/*
 */
#define IAXXX_AO_OSC_CTRL_ADDR (0x50010038)
#define IAXXX_AO_OSC_CTRL_MASK_VAL 0x000003ff
#define IAXXX_AO_OSC_CTRL_RMASK_VAL 0x000003ff
#define IAXXX_AO_OSC_CTRL_WMASK_VAL 0x000003ff
#define IAXXX_AO_OSC_CTRL_RESET_VAL 0x00000040

/*
 * Trim to set noiminal frequency to adjust for process variations. Provides
 * roughly 0.25% steps in output frequency.
 */
#define IAXXX_AO_OSC_CTRL_ADJ_MASK 0x0000007f
#define IAXXX_AO_OSC_CTRL_ADJ_RESET_VAL 0x40
#define IAXXX_AO_OSC_CTRL_ADJ_POS 0
#define IAXXX_AO_OSC_CTRL_ADJ_SIZE 7
#define IAXXX_AO_OSC_CTRL_ADJ_DECL (6 : 0)

/*
 * Asynchronous Output Clock Power down. Active high.
 */
#define IAXXX_AO_OSC_CTRL_FOUTPD_MASK 0x00000080
#define IAXXX_AO_OSC_CTRL_FOUTPD_RESET_VAL 0x0
#define IAXXX_AO_OSC_CTRL_FOUTPD_POS 7
#define IAXXX_AO_OSC_CTRL_FOUTPD_SIZE 1
#define IAXXX_AO_OSC_CTRL_FOUTPD_DECL 7

/*
 * Select nominal output frequency: 1'b0 --> 43.008 MHz
 *                                  1'b1 --> 172.032 MHz
 */
#define IAXXX_AO_OSC_CTRL_MODE_MASK 0x00000100
#define IAXXX_AO_OSC_CTRL_MODE_RESET_VAL 0x0
#define IAXXX_AO_OSC_CTRL_MODE_POS 8
#define IAXXX_AO_OSC_CTRL_MODE_SIZE 1
#define IAXXX_AO_OSC_CTRL_MODE_DECL 8

/*
 * Oscillator Power down. Active high.
 */
#define IAXXX_AO_OSC_CTRL_PD_MASK 0x00000200
#define IAXXX_AO_OSC_CTRL_PD_RESET_VAL 0x0
#define IAXXX_AO_OSC_CTRL_PD_POS 9
#define IAXXX_AO_OSC_CTRL_PD_SIZE 1
#define IAXXX_AO_OSC_CTRL_PD_DECL 9

/*** AO_CLK_CFG (0x5001003c) ***/
/*
 * The Clock Configuration register sets pad directions for clock and frame
 * sync,
 * and enables data output for the audio ports and codec interface signals.
 * NOTE: PORT F refers to the COMMB ports in pcm mode.
 */
#define IAXXX_AO_CLK_CFG_ADDR (0x5001003c)
#define IAXXX_AO_CLK_CFG_MASK_VAL 0x007f1fff
#define IAXXX_AO_CLK_CFG_RMASK_VAL 0x007f1fff
#define IAXXX_AO_CLK_CFG_WMASK_VAL 0x007f1fff
#define IAXXX_AO_CLK_CFG_RESET_VAL 0x00000000

/*
 * Port clock output enable for pin PORTA_CLK.
 */
#define IAXXX_AO_CLK_CFG_PORTA_CLK_OE_MASK 0x00000001
#define IAXXX_AO_CLK_CFG_PORTA_CLK_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTA_CLK_OE_POS 0
#define IAXXX_AO_CLK_CFG_PORTA_CLK_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTA_CLK_OE_DECL 0

/*
 * Port clock output enable for pin PORTB_CLK.
 */
#define IAXXX_AO_CLK_CFG_PORTB_CLK_OE_MASK 0x00000002
#define IAXXX_AO_CLK_CFG_PORTB_CLK_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTB_CLK_OE_POS 1
#define IAXXX_AO_CLK_CFG_PORTB_CLK_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTB_CLK_OE_DECL 1

/*
 * Port clock output enable for pin PORTC_CLK.
 */
#define IAXXX_AO_CLK_CFG_PORTC_CLK_OE_MASK 0x00000004
#define IAXXX_AO_CLK_CFG_PORTC_CLK_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTC_CLK_OE_POS 2
#define IAXXX_AO_CLK_CFG_PORTC_CLK_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTC_CLK_OE_DECL 2

/*
 * Port clock output enable for pin PORTD_CLK.
 */
#define IAXXX_AO_CLK_CFG_PORTD_CLK_OE_MASK 0x00000008
#define IAXXX_AO_CLK_CFG_PORTD_CLK_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTD_CLK_OE_POS 3
#define IAXXX_AO_CLK_CFG_PORTD_CLK_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTD_CLK_OE_DECL 3

/*
 * Port clock output enable for pin PORTE_CLK.
 */
#define IAXXX_AO_CLK_CFG_PORTE_CLK_OE_MASK 0x00000010
#define IAXXX_AO_CLK_CFG_PORTE_CLK_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTE_CLK_OE_POS 4
#define IAXXX_AO_CLK_CFG_PORTE_CLK_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTE_CLK_OE_DECL 4

/*
 * Port clock output enable for pin PORTF_CLK.
 */
#define IAXXX_AO_CLK_CFG_PORTF_CLK_OE_MASK 0x00000020
#define IAXXX_AO_CLK_CFG_PORTF_CLK_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTF_CLK_OE_POS 5
#define IAXXX_AO_CLK_CFG_PORTF_CLK_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTF_CLK_OE_DECL 5

/*
 * Port frame sync output enable for pin PORTA_FS.
 */
#define IAXXX_AO_CLK_CFG_PORTA_FS_OE_MASK 0x00000040
#define IAXXX_AO_CLK_CFG_PORTA_FS_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTA_FS_OE_POS 6
#define IAXXX_AO_CLK_CFG_PORTA_FS_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTA_FS_OE_DECL 6

/*
 * Port frame sync output enable for pin PORTB_FS.
 */
#define IAXXX_AO_CLK_CFG_PORTB_FS_OE_MASK 0x00000080
#define IAXXX_AO_CLK_CFG_PORTB_FS_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTB_FS_OE_POS 7
#define IAXXX_AO_CLK_CFG_PORTB_FS_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTB_FS_OE_DECL 7

/*
 * Port frame sync output enable for pin PORTC_FS.
 */
#define IAXXX_AO_CLK_CFG_PORTC_FS_OE_MASK 0x00000100
#define IAXXX_AO_CLK_CFG_PORTC_FS_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTC_FS_OE_POS 8
#define IAXXX_AO_CLK_CFG_PORTC_FS_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTC_FS_OE_DECL 8

/*
 * Port frame sync output enable for pin PORTD_FS.
 */
#define IAXXX_AO_CLK_CFG_PORTD_FS_OE_MASK 0x00000200
#define IAXXX_AO_CLK_CFG_PORTD_FS_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTD_FS_OE_POS 9
#define IAXXX_AO_CLK_CFG_PORTD_FS_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTD_FS_OE_DECL 9

/*
 * Port frame sync output enable for pin PORTE_FS.
 */
#define IAXXX_AO_CLK_CFG_PORTE_FS_OE_MASK 0x00000400
#define IAXXX_AO_CLK_CFG_PORTE_FS_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTE_FS_OE_POS 10
#define IAXXX_AO_CLK_CFG_PORTE_FS_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTE_FS_OE_DECL 10

/*
 * Port frame sync output enable for pin PORTF_FS.
 */
#define IAXXX_AO_CLK_CFG_PORTF_FS_OE_MASK 0x00000800
#define IAXXX_AO_CLK_CFG_PORTF_FS_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTF_FS_OE_POS 11
#define IAXXX_AO_CLK_CFG_PORTF_FS_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTF_FS_OE_DECL 11

/*
 * CDC_MCLK output enable.
 */
#define IAXXX_AO_CLK_CFG_CDC_MCLK_OE_MASK 0x00001000
#define IAXXX_AO_CLK_CFG_CDC_MCLK_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_CDC_MCLK_OE_POS 12
#define IAXXX_AO_CLK_CFG_CDC_MCLK_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_CDC_MCLK_OE_DECL 12

/*
 * Clock select for ADC inputs on pads PDM(3:1).
 * Select port to route oversampling clock to codec for analog-to-digital
 * conversion.
 * 0: Run ADC interface off of CDC_MCLK.
 * 1: Run ADC interface off of PORTD_CLK.
 */
#define IAXXX_AO_CLK_CFG_ADC_INPUT_SEL_MASK 0x00010000
#define IAXXX_AO_CLK_CFG_ADC_INPUT_SEL_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_ADC_INPUT_SEL_POS 16
#define IAXXX_AO_CLK_CFG_ADC_INPUT_SEL_SIZE 1
#define IAXXX_AO_CLK_CFG_ADC_INPUT_SEL_DECL 16

/*
 * 0: Tri-state PORTA_DO pin;
 * 1: enable PORTA_DO as an output buffer
 */
#define IAXXX_AO_CLK_CFG_PORTA_DO_OE_MASK 0x00020000
#define IAXXX_AO_CLK_CFG_PORTA_DO_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTA_DO_OE_POS 17
#define IAXXX_AO_CLK_CFG_PORTA_DO_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTA_DO_OE_DECL 17

/*
 * 0: Tri-state PORTB_DO pin;
 * 1: enable PORTB_DO as an output buffer
 */
#define IAXXX_AO_CLK_CFG_PORTB_DO_OE_MASK 0x00040000
#define IAXXX_AO_CLK_CFG_PORTB_DO_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTB_DO_OE_POS 18
#define IAXXX_AO_CLK_CFG_PORTB_DO_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTB_DO_OE_DECL 18

/*
 * 0: Tri-state PORTC_DO pin;
 * 1: enable PORTC_DO as an output buffer
 */
#define IAXXX_AO_CLK_CFG_PORTC_DO_OE_MASK 0x00080000
#define IAXXX_AO_CLK_CFG_PORTC_DO_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTC_DO_OE_POS 19
#define IAXXX_AO_CLK_CFG_PORTC_DO_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTC_DO_OE_DECL 19

/*
 * 0: Tri-state PORTD_DO pin;
 * 1: enable PORTD_DO as an output buffer
 */
#define IAXXX_AO_CLK_CFG_PORTD_DO_OE_MASK 0x00100000
#define IAXXX_AO_CLK_CFG_PORTD_DO_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTD_DO_OE_POS 20
#define IAXXX_AO_CLK_CFG_PORTD_DO_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTD_DO_OE_DECL 20

/*
 * 0: Tri-state PORTE_DO pin;
 * 1: enable PORTE_DO as an output buffer
 */
#define IAXXX_AO_CLK_CFG_PORTE_DO_OE_MASK 0x00200000
#define IAXXX_AO_CLK_CFG_PORTE_DO_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTE_DO_OE_POS 21
#define IAXXX_AO_CLK_CFG_PORTE_DO_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTE_DO_OE_DECL 21

/*
 * 0: Tri-state PORTF_DO pin;
 * 1: enable PORTF_DO as an output buffer
 */
#define IAXXX_AO_CLK_CFG_PORTF_DO_OE_MASK 0x00400000
#define IAXXX_AO_CLK_CFG_PORTF_DO_OE_RESET_VAL 0x0
#define IAXXX_AO_CLK_CFG_PORTF_DO_OE_POS 22
#define IAXXX_AO_CLK_CFG_PORTF_DO_OE_SIZE 1
#define IAXXX_AO_CLK_CFG_PORTF_DO_OE_DECL 22

/*** AO_DFLT_FUNC_SEL_PORT (0x50010040) ***/
/*
 * This register is used to program ports A - F to select their PCM
 * functions. When PD8 is in sleep mode, IO_CTRL registers cannot be
 * programmed since they are in PD8. The function then selected for port A -
 * F pads is the reset default function (GPIO). In such a situation, this
 * register can be used to put these ports in PCM pass-through mode.
 *
 Note that this register overrides any function selected through IO_CTRL
 * registers, even when PD8 is awake. It is also not reset when PD8 comes out
 * of sleep. SW has to explicitly write a '0' to the corresponding port bit
 * to disable PCM functions and let the function selection through IO_CTRL
 * take effect. It is supposed to be used only when PD8 is shut off and some
 * ports are to be used for PCM pass-through. It should be disabled when PD8
 * comes out of sleep.
 */
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_ADDR (0x50010040)
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_MASK_VAL 0x0000003f
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_RMASK_VAL 0x0000003f
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_WMASK_VAL 0x0000003f
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_RESET_VAL 0x00000000

/*
 * 0: Selects functions for Port A as indicated by the IO_CTRL registers for
 * port A.
 * 1: Selects PCM functions (BCLK, FS, DR and DT) for Port A.
 */
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_A_MASK 0x00000001
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_A_RESET_VAL 0x0
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_A_POS 0
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_A_SIZE 1
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_A_DECL 0

/*
 * 0: Selects functions for Port B as indicated by the IO_CTRL registers for
 * port B.
 * 1: Selects PCM functions (BCLK, FS, DR and DT) for Port B.
 */
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_B_MASK 0x00000002
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_B_RESET_VAL 0x0
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_B_POS 1
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_B_SIZE 1
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_B_DECL 1

/*
 * 0: Selects functions for Port C as indicated by the IO_CTRL registers for
 * port C.
 * 1: Selects PCM functions (BCLK, FS, DR and DT) for Port C.
 */
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_C_MASK 0x00000004
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_C_RESET_VAL 0x0
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_C_POS 2
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_C_SIZE 1
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_C_DECL 2

/*
 * 0: Selects functions for Port D as indicated by the IO_CTRL registers for
 * port D.
 * 1: Selects PCM functions (BCLK, FS, DR and DT) for Port D.
 */
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_D_MASK 0x00000008
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_D_RESET_VAL 0x0
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_D_POS 3
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_D_SIZE 1
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_D_DECL 3

/*
 * 0: Selects functions for Port E as indicated by the IO_CTRL registers for
 * port E.
 * 1: Selects PCM functions (BCLK, FS, DR and DT) for Port E.
 */
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_E_MASK 0x00000010
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_E_RESET_VAL 0x0
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_E_POS 4
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_E_SIZE 1
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_E_DECL 4

/*
 * 0: Selects functions for Port F as indicated by the IO_CTRL registers for
 * port F.
 * 1: Selects PCM functions (BCLK, FS, DR and DT) for Port F.
 */
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_F_MASK 0x00000020
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_F_RESET_VAL 0x0
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_F_POS 5
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_F_SIZE 1
#define IAXXX_AO_DFLT_FUNC_SEL_PORT_F_DECL 5

/*** AO_PCM_MX0 (0x50010044) ***/
/*
 * The PCM Multiplexer 1 register controls the routing for port input clock
 * and frame sync,
 * to specified PCM units.  NOTE: PORT F refers to the COMMB ports in pcm
 * mode.
 */
#define IAXXX_AO_PCM_MX0_ADDR (0x50010044)
#define IAXXX_AO_PCM_MX0_MASK_VAL 0x0003ffff
#define IAXXX_AO_PCM_MX0_RMASK_VAL 0x0003ffff
#define IAXXX_AO_PCM_MX0_WMASK_VAL 0x0003ffff
#define IAXXX_AO_PCM_MX0_RESET_VAL 0x0002c688

/*
 * Select PCM0 clock and framesync source.
 * For default value, routes PORTA CLK/FS pins to internal PCM0.
 * 0: route PORTA CLK/FS signals to internal PCM0 unit
 * 1: route PORTB CLK/FS signals to internal PCM0 unit
 * 2: route PORTC CLK/FS signals to internal PCM0 unit
 * 3: route PORTD CLK/FS signals to internal PCM0 unit.
 * 4: route PORTE CLK/FS signals to internal PCM0 unit.
 * 5: route PORTF CLK/FS signals to internal PCM0 unit.
 */
#define IAXXX_AO_PCM_MX0_P0RT_MASK 0x00000007
#define IAXXX_AO_PCM_MX0_P0RT_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX0_P0RT_POS 0
#define IAXXX_AO_PCM_MX0_P0RT_SIZE 3
#define IAXXX_AO_PCM_MX0_P0RT_DECL (2 : 0)

/*
 * Select PCM1 clock and framesync source.
 * For default value, routes PORTB CLK/FS pins to internal PCM1.
 * 0: route PORTA CLK/FS signals to internal PCM1 unit
 * 1: route PORTB CLK/FS signals to internal PCM1 unit
 * 2: route PORTC CLK/FS signals to internal PCM1 unit
 * 3: route PORTD CLK/FS signals to internal PCM1 unit.
 * 4: route PORTE CLK/FS signals to internal PCM1 unit.
 * 5: route PORTF CLK/FS signals to internal PCM1 unit.
 */
#define IAXXX_AO_PCM_MX0_P1RT_MASK 0x00000038
#define IAXXX_AO_PCM_MX0_P1RT_RESET_VAL 0x1
#define IAXXX_AO_PCM_MX0_P1RT_POS 3
#define IAXXX_AO_PCM_MX0_P1RT_SIZE 3
#define IAXXX_AO_PCM_MX0_P1RT_DECL (5 : 3)

/*
 * Select PCM2 clock and framesync source.
 * For default value, routes PORTC CLK/FS pins to internal PCM2.
 * 0: route PORTA CLK/FS signals to internal PCM2 unit
 * 1: route PORTB CLK/FS signals to internal PCM2 unit
 * 2: route PORTC CLK/FS signals to internal PCM2 unit
 * 3: route PORTD CLK/FS signals to internal PCM2 unit.
 * 4: route PORTE CLK/FS signals to internal PCM2 unit.
 * 5: route PORTF CLK/FS signals to internal PCM2 unit.
 */
#define IAXXX_AO_PCM_MX0_P2RT_MASK 0x000001c0
#define IAXXX_AO_PCM_MX0_P2RT_RESET_VAL 0x2
#define IAXXX_AO_PCM_MX0_P2RT_POS 6
#define IAXXX_AO_PCM_MX0_P2RT_SIZE 3
#define IAXXX_AO_PCM_MX0_P2RT_DECL (8 : 6)

/*
 * Select PCM3 clock and framesync source.
 * For default value, routes PORTD CLK/FS pins to internal PCM3.
 * 0: route PORTA CLK/FS signals to internal PCM3 unit
 * 1: route PORTB CLK/FS signals to internal PCM3 unit
 * 2: route PORTC CLK/FS signals to internal PCM3 unit
 * 3: route PORTD CLK/FS signals to internal PCM3 unit.
 * 4: route PORTE CLK/FS signals to internal PCM3 unit.
 * 5: route PORTF CLK/FS signals to internal PCM3 unit.
 */
#define IAXXX_AO_PCM_MX0_P3RT_MASK 0x00000e00
#define IAXXX_AO_PCM_MX0_P3RT_RESET_VAL 0x3
#define IAXXX_AO_PCM_MX0_P3RT_POS 9
#define IAXXX_AO_PCM_MX0_P3RT_SIZE 3
#define IAXXX_AO_PCM_MX0_P3RT_DECL (11 : 9)

/*
 * Select PCM4 clock and framesync source.
 * For default value, routes PORTE CLK/FS pins to internal PCM4.
 * 0: route PORTA CLK/FS signals to internal PCM4 unit
 * 1: route PORTB CLK/FS signals to internal PCM4 unit
 * 2: route PORTC CLK/FS signals to internal PCM4 unit
 * 3: route PORTD CLK/FS signals to internal PCM4 unit.
 * 4: route PORTE CLK/FS signals to internal PCM4 unit.
 * 5: route PORTF CLK/FS signals to internal PCM4 unit.
 */
#define IAXXX_AO_PCM_MX0_P4RT_MASK 0x00007000
#define IAXXX_AO_PCM_MX0_P4RT_RESET_VAL 0x4
#define IAXXX_AO_PCM_MX0_P4RT_POS 12
#define IAXXX_AO_PCM_MX0_P4RT_SIZE 3
#define IAXXX_AO_PCM_MX0_P4RT_DECL (14 : 12)

/*
 * Select PCM5 clock and framesync source.
 * For default value, routes PORTF CLK/FS pins to internal PCM5.
 * 0: route PORTA CLK/FS signals to internal PCM5 unit
 * 1: route PORTB CLK/FS signals to internal PCM5 unit
 * 2: route PORTC CLK/FS signals to internal PCM5 unit
 * 3: route PORTD CLK/FS signals to internal PCM5 unit.
 * 4: route PORTE CLK/FS signals to internal PCM5 unit.
 * 5: route PORTF CLK/FS signals to internal PCM5 unit.
 */
#define IAXXX_AO_PCM_MX0_P5RT_MASK 0x00038000
#define IAXXX_AO_PCM_MX0_P5RT_RESET_VAL 0x5
#define IAXXX_AO_PCM_MX0_P5RT_POS 15
#define IAXXX_AO_PCM_MX0_P5RT_SIZE 3
#define IAXXX_AO_PCM_MX0_P5RT_DECL (17 : 15)

/*** AO_PCM_MX1 (0x50010048) ***/
/*
 * The PCM Multiplexer 1 register controls the routing for port data signals
 * to specified PCM units.  NOTE: PORT F refers to the COMMB ports in pcm
 * mode.
 */
#define IAXXX_AO_PCM_MX1_ADDR (0x50010048)
#define IAXXX_AO_PCM_MX1_MASK_VAL 0x0003ffff
#define IAXXX_AO_PCM_MX1_RMASK_VAL 0x0003ffff
#define IAXXX_AO_PCM_MX1_WMASK_VAL 0x0003ffff
#define IAXXX_AO_PCM_MX1_RESET_VAL 0x0002c688

/*
 * Select DI from ports to DR of PCM units.
 * 0b000: PORTA_DI goes to PCM0_DR
 * 0b001: PORTB_DI goes to PCM0_DR
 * 0b010: PORTC_DI goes to PCM0_DR
 * 0b011: PORTD_DI goes to PCM0_DR
 * 0b100: PORTE_DI goes to PCM0_DR
 * 0b101: PORTF_DI goes to PCM0_DR
 */
#define IAXXX_AO_PCM_MX1_PCM0_RXD_SEL_MASK 0x00000007
#define IAXXX_AO_PCM_MX1_PCM0_RXD_SEL_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX1_PCM0_RXD_SEL_POS 0
#define IAXXX_AO_PCM_MX1_PCM0_RXD_SEL_SIZE 3
#define IAXXX_AO_PCM_MX1_PCM0_RXD_SEL_DECL (2 : 0)

/*
 * Select DI from ports to DR of PCM units.
 * 0b000: PORTA_DI goes to PCM1_DR
 * 0b001: PORTB_DI goes to PCM1_DR
 * 0b010: PORTC_DI goes to PCM1_DR
 * 0b011: PORTD_DI goes to PCM1_DR
 * 0b100: PORTE_DI goes to PCM1_DR
 * 0b101: PORTF_DI goes to PCM1_DR
 */
#define IAXXX_AO_PCM_MX1_PCM1_RXD_SEL_MASK 0x00000038
#define IAXXX_AO_PCM_MX1_PCM1_RXD_SEL_RESET_VAL 0x1
#define IAXXX_AO_PCM_MX1_PCM1_RXD_SEL_POS 3
#define IAXXX_AO_PCM_MX1_PCM1_RXD_SEL_SIZE 3
#define IAXXX_AO_PCM_MX1_PCM1_RXD_SEL_DECL (5 : 3)

/*
 * Select DI from ports to DR of PCM units.
 * 0b000: PORTA_DI goes to PCM2_DR
 * 0b001: PORTB_DI goes to PCM2_DR
 * 0b010: PORTC_DI goes to PCM2_DR
 * 0b011: PORTD_DI goes to PCM2_DR
 * 0b100: PORTE_DI goes to PCM2_DR
 * 0b101: PORTF_DI goes to PCM2_DR
 */
#define IAXXX_AO_PCM_MX1_PCM2_RXD_SEL_MASK 0x000001c0
#define IAXXX_AO_PCM_MX1_PCM2_RXD_SEL_RESET_VAL 0x2
#define IAXXX_AO_PCM_MX1_PCM2_RXD_SEL_POS 6
#define IAXXX_AO_PCM_MX1_PCM2_RXD_SEL_SIZE 3
#define IAXXX_AO_PCM_MX1_PCM2_RXD_SEL_DECL (8 : 6)

/*
 * Select DI from ports to DR of PCM units.
 * 0b000: PORTA_DI goes to PCM3_DR
 * 0b001: PORTB_DI goes to PCM3_DR
 * 0b010: PORTC_DI goes to PCM3_DR
 * 0b011: PORTD_DI goes to PCM3_DR
 * 0b100: PORTE_DI goes to PCM3_DR
 * 0b101: PORTF_DI goes to PCM3_DR
 */
#define IAXXX_AO_PCM_MX1_PCM3_RXD_SEL_MASK 0x00000e00
#define IAXXX_AO_PCM_MX1_PCM3_RXD_SEL_RESET_VAL 0x3
#define IAXXX_AO_PCM_MX1_PCM3_RXD_SEL_POS 9
#define IAXXX_AO_PCM_MX1_PCM3_RXD_SEL_SIZE 3
#define IAXXX_AO_PCM_MX1_PCM3_RXD_SEL_DECL (11 : 9)

/*
 * Select DI from ports to DR of PCM units.
 * 0b000: PORTA_DI goes to PCM4_DR
 * 0b001: PORTB_DI goes to PCM4_DR
 * 0b010: PORTC_DI goes to PCM4_DR
 * 0b011: PORTD_DI goes to PCM4_DR
 * 0b100: PORTE_DI goes to PCM4_DR
 * 0b101: PORTF_DI goes to PCM4_DR
 */
#define IAXXX_AO_PCM_MX1_PCM4_RXD_SEL_MASK 0x00007000
#define IAXXX_AO_PCM_MX1_PCM4_RXD_SEL_RESET_VAL 0x4
#define IAXXX_AO_PCM_MX1_PCM4_RXD_SEL_POS 12
#define IAXXX_AO_PCM_MX1_PCM4_RXD_SEL_SIZE 3
#define IAXXX_AO_PCM_MX1_PCM4_RXD_SEL_DECL (14 : 12)

/*
 * Select DI from ports to DR of PCM units.
 * 0b000: PORTA_DI goes to PCM5_DR
 * 0b001: PORTB_DI goes to PCM5_DR
 * 0b010: PORTC_DI goes to PCM5_DR
 * 0b011: PORTD_DI goes to PCM5_DR
 * 0b100: PORTE_DI goes to PCM5_DR
 * 0b101: PORTF_DI goes to PCM5_DR
 */
#define IAXXX_AO_PCM_MX1_PCM5_RXD_SEL_MASK 0x00038000
#define IAXXX_AO_PCM_MX1_PCM5_RXD_SEL_RESET_VAL 0x5
#define IAXXX_AO_PCM_MX1_PCM5_RXD_SEL_POS 15
#define IAXXX_AO_PCM_MX1_PCM5_RXD_SEL_SIZE 3
#define IAXXX_AO_PCM_MX1_PCM5_RXD_SEL_DECL (17 : 15)

/*** AO_PCM_MX2 (0x5001004c) ***/
/*
 * The PCM Multiplexer 2 register controls the PCM loopback source; and
 * routes output
 * data from PCM units to specified output ports or forces output data to 0.
 * NOTE: PORT F refers to the COMMB ports in pcm mode.
 */
#define IAXXX_AO_PCM_MX2_ADDR (0x5001004c)
#define IAXXX_AO_PCM_MX2_MASK_VAL 0x3fffffff
#define IAXXX_AO_PCM_MX2_RMASK_VAL 0x3fffffff
#define IAXXX_AO_PCM_MX2_WMASK_VAL 0x3fffffff
#define IAXXX_AO_PCM_MX2_RESET_VAL 0x00b1a200

/*
 * 0: PCM 0 DR comes from external source.
 * 1: PCM 0 DR comes from PCM 0 DT.
 */
#define IAXXX_AO_PCM_MX2_PCM0_LOOPBACK_MASK 0x00000001
#define IAXXX_AO_PCM_MX2_PCM0_LOOPBACK_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX2_PCM0_LOOPBACK_POS 0
#define IAXXX_AO_PCM_MX2_PCM0_LOOPBACK_SIZE 1
#define IAXXX_AO_PCM_MX2_PCM0_LOOPBACK_DECL 0

/*
 * 0: PCM 1 DR comes from external source.
 * 1: PCM 1 DR comes from PCM 1 DT.
 */
#define IAXXX_AO_PCM_MX2_PCM1_LOOPBACK_MASK 0x00000002
#define IAXXX_AO_PCM_MX2_PCM1_LOOPBACK_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX2_PCM1_LOOPBACK_POS 1
#define IAXXX_AO_PCM_MX2_PCM1_LOOPBACK_SIZE 1
#define IAXXX_AO_PCM_MX2_PCM1_LOOPBACK_DECL 1

/*
 * 0: PCM 2 DR comes from external source.
 * 1: PCM 2 DR comes from PCM 2 DT.
 */
#define IAXXX_AO_PCM_MX2_PCM2_LOOPBACK_MASK 0x00000004
#define IAXXX_AO_PCM_MX2_PCM2_LOOPBACK_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX2_PCM2_LOOPBACK_POS 2
#define IAXXX_AO_PCM_MX2_PCM2_LOOPBACK_SIZE 1
#define IAXXX_AO_PCM_MX2_PCM2_LOOPBACK_DECL 2

/*
 * 0: PCM 3 DR comes from external source.
 * 1: PCM 3 DR comes from PCM 3 DT.
 */
#define IAXXX_AO_PCM_MX2_PCM3_LOOPBACK_MASK 0x00000008
#define IAXXX_AO_PCM_MX2_PCM3_LOOPBACK_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX2_PCM3_LOOPBACK_POS 3
#define IAXXX_AO_PCM_MX2_PCM3_LOOPBACK_SIZE 1
#define IAXXX_AO_PCM_MX2_PCM3_LOOPBACK_DECL 3

/*
 * 0: PCM 4 DR comes from external source.
 * 1: PCM 4 DR comes from PCM 4 DT.
 */
#define IAXXX_AO_PCM_MX2_PCM4_LOOPBACK_MASK 0x00000010
#define IAXXX_AO_PCM_MX2_PCM4_LOOPBACK_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX2_PCM4_LOOPBACK_POS 4
#define IAXXX_AO_PCM_MX2_PCM4_LOOPBACK_SIZE 1
#define IAXXX_AO_PCM_MX2_PCM4_LOOPBACK_DECL 4

/*
 * 0: PCM 5 DR comes from external source.
 * 1: PCM 5 DR comes from PCM 5 DT.
 */
#define IAXXX_AO_PCM_MX2_PCM5_LOOPBACK_MASK 0x00000020
#define IAXXX_AO_PCM_MX2_PCM5_LOOPBACK_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX2_PCM5_LOOPBACK_POS 5
#define IAXXX_AO_PCM_MX2_PCM5_LOOPBACK_SIZE 1
#define IAXXX_AO_PCM_MX2_PCM5_LOOPBACK_DECL 5

/*
 * Select source of PORTA_DO from one of the 6 PCM units
 * 0b000: PCM0 unit output to PORTA_DO,
 * 0b001: PCM1 unit output to PORTA_DO,
 * 0b010: PCM2 unit output to PORTA_DO,
 * 0b011: PCM3 unit output to PORTA_DO
 * 0b100: PCM4 unit output to PORTA_DO
 * 0b101: PCM5 unit output to PORTA_DO
 */
#define IAXXX_AO_PCM_MX2_PORTA_DO_SEL_MASK 0x000001c0
#define IAXXX_AO_PCM_MX2_PORTA_DO_SEL_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX2_PORTA_DO_SEL_POS 6
#define IAXXX_AO_PCM_MX2_PORTA_DO_SEL_SIZE 3
#define IAXXX_AO_PCM_MX2_PORTA_DO_SEL_DECL (8 : 6)

/*
 * Select source of PORTB_DO from one of the 6 PCM units
 * 0b000: PCM0 unit output to PORTB_DO,
 * 0b001: PCM1 unit output to PORTB_DO,
 * 0b010: PCM2 unit output to PORTB_DO,
 * 0b011: PCM3 unit output to PORTB_DO
 * 0b100: PCM4 unit output to PORTB_DO
 * 0b101: PCM5 unit output to PORTB_DO
 */
#define IAXXX_AO_PCM_MX2_PORTB_DO_SEL_MASK 0x00000e00
#define IAXXX_AO_PCM_MX2_PORTB_DO_SEL_RESET_VAL 0x1
#define IAXXX_AO_PCM_MX2_PORTB_DO_SEL_POS 9
#define IAXXX_AO_PCM_MX2_PORTB_DO_SEL_SIZE 3
#define IAXXX_AO_PCM_MX2_PORTB_DO_SEL_DECL (11 : 9)

/*
 * Select source of PORTC_DO from one of the 6 PCM units
 * 0b000: PCM0 unit output to PORTC_DO,
 * 0b001: PCM1 unit output to PORTC_DO,
 * 0b010: PCM2 unit output to PORTC_DO,
 * 0b011: PCM3 unit output to PORTC_DO
 * 0b100: PCM4 unit output to PORTC_DO
 * 0b101: PCM5 unit output to PORTC_DO
 */
#define IAXXX_AO_PCM_MX2_PORTC_DO_SEL_MASK 0x00007000
#define IAXXX_AO_PCM_MX2_PORTC_DO_SEL_RESET_VAL 0x2
#define IAXXX_AO_PCM_MX2_PORTC_DO_SEL_POS 12
#define IAXXX_AO_PCM_MX2_PORTC_DO_SEL_SIZE 3
#define IAXXX_AO_PCM_MX2_PORTC_DO_SEL_DECL (14 : 12)

/*
 * Select source of PORTD_DO from one of the 6 PCM units
 * 0b000: PCM0 unit output to PORTD_DO,
 * 0b001: PCM1 unit output to PORTD_DO,
 * 0b010: PCM2 unit output to PORTD_DO,
 * 0b011: PCM3 unit output to PORTD_DO
 * 0b100: PCM4 unit output to PORTD_DO
 * 0b101: PCM5 unit output to PORTD_DO
 */
#define IAXXX_AO_PCM_MX2_PORTD_DO_SEL_MASK 0x00038000
#define IAXXX_AO_PCM_MX2_PORTD_DO_SEL_RESET_VAL 0x3
#define IAXXX_AO_PCM_MX2_PORTD_DO_SEL_POS 15
#define IAXXX_AO_PCM_MX2_PORTD_DO_SEL_SIZE 3
#define IAXXX_AO_PCM_MX2_PORTD_DO_SEL_DECL (17 : 15)

/*
 * Select source of PORTE_DO from one of the 6 PCM units
 * 0b000: PCM0 unit output to PORTE_DO,
 * 0b001: PCM1 unit output to PORTE_DO,
 * 0b010: PCM2 unit output to PORTE_DO,
 * 0b011: PCM3 unit output to PORTE_DO
 * 0b100: PCM4 unit output to PORTE_DO
 * 0b101: PCM5 unit output to PORTE_DO
 */
#define IAXXX_AO_PCM_MX2_PORTE_DO_SEL_MASK 0x001c0000
#define IAXXX_AO_PCM_MX2_PORTE_DO_SEL_RESET_VAL 0x4
#define IAXXX_AO_PCM_MX2_PORTE_DO_SEL_POS 18
#define IAXXX_AO_PCM_MX2_PORTE_DO_SEL_SIZE 3
#define IAXXX_AO_PCM_MX2_PORTE_DO_SEL_DECL (20 : 18)

/*
 * Select source of PORTF_DO from one of the 6 PCM units
 * 0b000: PCM0 unit output to PORTF_DO,
 * 0b001: PCM1 unit output to PORTF_DO,
 * 0b010: PCM2 unit output to PORTF_DO,
 * 0b011: PCM3 unit output to PORTF_DO
 * 0b100: PCM4 unit output to PORTF_DO
 * 0b101: PCM5 unit output to PORTF_DO
 */
#define IAXXX_AO_PCM_MX2_PORTF_DO_SEL_MASK 0x00e00000
#define IAXXX_AO_PCM_MX2_PORTF_DO_SEL_RESET_VAL 0x5
#define IAXXX_AO_PCM_MX2_PORTF_DO_SEL_POS 21
#define IAXXX_AO_PCM_MX2_PORTF_DO_SEL_SIZE 3
#define IAXXX_AO_PCM_MX2_PORTF_DO_SEL_DECL (23 : 21)

/*
 * If it is set to 1, force 0 data that goes to the MUX (to select PCM unit
 * or DI ports)
 * before going to PORTA_DO. It also forces PORTA_DO as output
 */
#define IAXXX_AO_PCM_MX2_PORTA_DO_FORCE0_MASK 0x01000000
#define IAXXX_AO_PCM_MX2_PORTA_DO_FORCE0_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX2_PORTA_DO_FORCE0_POS 24
#define IAXXX_AO_PCM_MX2_PORTA_DO_FORCE0_SIZE 1
#define IAXXX_AO_PCM_MX2_PORTA_DO_FORCE0_DECL 24

/*
 * If it is set to 1, force 0 data that goes to the MUX (to select PCM unit
 * or DI ports)
 * before going to PORTB_DO. It also forces PORTB_DO as output
 */
#define IAXXX_AO_PCM_MX2_PORTB_DO_FORCE0_MASK 0x02000000
#define IAXXX_AO_PCM_MX2_PORTB_DO_FORCE0_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX2_PORTB_DO_FORCE0_POS 25
#define IAXXX_AO_PCM_MX2_PORTB_DO_FORCE0_SIZE 1
#define IAXXX_AO_PCM_MX2_PORTB_DO_FORCE0_DECL 25

/*
 * If it is set to 1, force 0 data that goes to the MUX (to select PCM unit
 * or DI ports)
 * before going to PORTC_DO. It also forces PORTC_DO as output
 */
#define IAXXX_AO_PCM_MX2_PORTC_DO_FORCE0_MASK 0x04000000
#define IAXXX_AO_PCM_MX2_PORTC_DO_FORCE0_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX2_PORTC_DO_FORCE0_POS 26
#define IAXXX_AO_PCM_MX2_PORTC_DO_FORCE0_SIZE 1
#define IAXXX_AO_PCM_MX2_PORTC_DO_FORCE0_DECL 26

/*
 * If it is set to 1, force 0 data that goes to the MUX (to select PCM unit
 * or DI ports)
 * before going to PORTD_DO. It also forces PORTD_DO as output
 */
#define IAXXX_AO_PCM_MX2_PORTD_DO_FORCE0_MASK 0x08000000
#define IAXXX_AO_PCM_MX2_PORTD_DO_FORCE0_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX2_PORTD_DO_FORCE0_POS 27
#define IAXXX_AO_PCM_MX2_PORTD_DO_FORCE0_SIZE 1
#define IAXXX_AO_PCM_MX2_PORTD_DO_FORCE0_DECL 27

/*
 * If it is set to 1, force 0 data that goes to the MUX (to select PCM unit
 * or DI ports)
 * before going to PORTE_DO. It also forces PORTE_DO as output
 */
#define IAXXX_AO_PCM_MX2_PORTE_DO_FORCE0_MASK 0x10000000
#define IAXXX_AO_PCM_MX2_PORTE_DO_FORCE0_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX2_PORTE_DO_FORCE0_POS 28
#define IAXXX_AO_PCM_MX2_PORTE_DO_FORCE0_SIZE 1
#define IAXXX_AO_PCM_MX2_PORTE_DO_FORCE0_DECL 28

/*
 * If it is set to 1, force 0 data that goes to the MUX (to select PCM unit
 * or DI ports)
 * before going to PORTF_DO. It also forces PORTF_DO as output
 */
#define IAXXX_AO_PCM_MX2_PORTF_DO_FORCE0_MASK 0x20000000
#define IAXXX_AO_PCM_MX2_PORTF_DO_FORCE0_RESET_VAL 0x0
#define IAXXX_AO_PCM_MX2_PORTF_DO_FORCE0_POS 29
#define IAXXX_AO_PCM_MX2_PORTF_DO_FORCE0_SIZE 1
#define IAXXX_AO_PCM_MX2_PORTF_DO_FORCE0_DECL 29

/*** AO_PCM_PASSTHROUGH0 (0x50010050) ***/
/*
 * The PCM Passthrough 0 register enables data pass-through from any input
 * port to any output port.
 * By default, each port would loop its input back to its output, but
 * pass-through is disabled.  NOTE: PORT F refers to the COMMB ports in pcm
 * mode.
 */
#define IAXXX_AO_PCM_PASSTHROUGH0_ADDR (0x50010050)
#define IAXXX_AO_PCM_PASSTHROUGH0_MASK_VAL 0x0003ffff
#define IAXXX_AO_PCM_PASSTHROUGH0_RMASK_VAL 0x0003ffff
#define IAXXX_AO_PCM_PASSTHROUGH0_WMASK_VAL 0x0003ffff
#define IAXXX_AO_PCM_PASSTHROUGH0_RESET_VAL 0x0002c688

/*
 * In order to change the route, enable PCM_DT_PASS_EN_A.
 * Otherwise it will function in normal operation.
 * 0b000: Drive PORTA_DO pin from PORTA_DI pin
 * 0b001: Drive PORTA_DO pin from PORTB_DI pin
 * 0b010: Drive PORTA_DO pin from PORTC_DI pin
 * 0b011: Drive PORTA_DO pin from PORTD_DI pin
 * 0b100: Drive PORTA_DO pin from PORTE_DI pin
 * 0b101: Drive PORTA_DO pin from PORTF_DI pin
 */
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_A_MASK 0x00000007
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_A_RESET_VAL 0x0
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_A_POS 0
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_A_SIZE 3
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_A_DECL (2 : 0)

/*
 * In order to change the route, enable PCM_DT_PASS_EN_B.
 * Otherwise it will function in normal operation.
 * 0b000: Drive PORTB_DO pin from PORTA_DI pin
 * 0b001: Drive PORTB_DO pin from PORTB_DI pin
 * 0b010: Drive PORTB_DO pin from PORTC_DI pin
 * 0b011: Drive PORTB_DO pin from PORTD_DI pin
 * 0b100: Drive PORTB_DO pin from PORTE_DI pin
 * 0b101: Drive PORTB_DO pin from PORTF_DI pin
 */
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_B_MASK 0x00000038
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_B_RESET_VAL 0x1
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_B_POS 3
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_B_SIZE 3
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_B_DECL (5 : 3)

/*
 * In order to change the route, enable PCM_DT_PASS_EN_C.
 * Otherwise it will function in normal operation.
 * 0b000: Drive PORTC_DO pin from PORTA_DI pin
 * 0b001: Drive PORTC_DO pin from PORTB_DI pin
 * 0b010: Drive PORTC_DO pin from PORTC_DI pin
 * 0b011: Drive PORTC_DO pin from PORTD_DI pin
 * 0b100: Drive PORTC_DO pin from PORTE_DI pin
 * 0b101: Drive PORTC_DO pin from PORTF_DI pin
 */
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_C_MASK 0x000001c0
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_C_RESET_VAL 0x2
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_C_POS 6
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_C_SIZE 3
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_C_DECL (8 : 6)

/*
 * In order to change the route, enable PCM_DT_PASS_EN_D.
 * Otherwise it will function in normal operation.
 * 0b000: Drive PORTD_DO pin from PORTA_DI pin
 * 0b001: Drive PORTD_DO pin from PORTB_DI pin
 * 0b010: Drive PORTD_DO pin from PORTC_DI pin
 * 0b011: Drive PORTD_DO pin from PORTD_DI pin
 * 0b100: Drive PORTD_DO pin from PORTE_DI pin
 * 0b101: Drive PORTD_DO pin from PORTF_DI pin
 */
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_D_MASK 0x00000e00
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_D_RESET_VAL 0x3
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_D_POS 9
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_D_SIZE 3
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_D_DECL (11 : 9)

/*
 * In order to change the route, enable PCM_DT_PASS_EN_E.
 * Otherwise it will function in normal operation.
 * 0b000: Drive PORTE_DO pin from PORTA_DI pin
 * 0b001: Drive PORTE_DO pin from PORTB_DI pin
 * 0b010: Drive PORTE_DO pin from PORTC_DI pin
 * 0b011: Drive PORTE_DO pin from PORTD_DI pin
 * 0b100: Drive PORTE_DO pin from PORTE_DI pin
 * 0b101: Drive PORTE_DO pin from PORTF_DI pin
 */
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_E_MASK 0x00007000
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_E_RESET_VAL 0x4
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_E_POS 12
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_E_SIZE 3
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_E_DECL (14 : 12)

/*
 * In order to change the route, enable PCM_DT_PASS_EN_F.
 * Otherwise it will function in normal operation.
 * 0b000: Drive PORTF_DO pin from PORTA_DI pin
 * 0b001: Drive PORTF_DO pin from PORTB_DI pin
 * 0b010: Drive PORTF_DO pin from PORTC_DI pin
 * 0b011: Drive PORTF_DO pin from PORTD_DI pin
 * 0b100: Drive PORTF_DO pin from PORTE_DI pin
 * 0b101: Drive PORTF_DO pin from PORTF_DI pin
 */
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_F_MASK 0x00038000
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_F_RESET_VAL 0x5
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_F_POS 15
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_F_SIZE 3
#define IAXXX_AO_PCM_PASSTHROUGH0_DT_F_DECL (17 : 15)

/*** AO_PCM_PASSTHROUGH1 (0x50010054) ***/
/*
 * The PCM Passhthrough 1 register enables clock, and frame sync pass-through
 * from any input port to any output port.
 * By default, each port would loop its input back to its output, but
 * pass-through is disabled.  NOTE: PORT F refers to the COMMB ports in pcm
 * mode.
 */
#define IAXXX_AO_PCM_PASSTHROUGH1_ADDR (0x50010054)
#define IAXXX_AO_PCM_PASSTHROUGH1_MASK_VAL 0x0003ffff
#define IAXXX_AO_PCM_PASSTHROUGH1_RMASK_VAL 0x0003ffff
#define IAXXX_AO_PCM_PASSTHROUGH1_WMASK_VAL 0x0003ffff
#define IAXXX_AO_PCM_PASSTHROUGH1_RESET_VAL 0x0002c688

/*
 * 0b000: Drive PORTA_CLK/PORTA_FS pins from normal operation. Use PORTA
 * CLK/FS for pass-through select signal
 *     synchronization that selects the output data to PORTA_DO. The
 * direction of the PORTA_CLK/PORTA_FS is
 *     determined by register CLK_CFG bit[0]/bit[6].
 * 0b001: If all of CF_B/CF_C/CF_D/CF_E/CF_F are NOT 0b000, drive
 * PORTA_CLK/PORTA_FS pins from PORTB CLK/FS pins.
 *     Use PORTB CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTA_DO. The direction of the PORTA_CLK/PORTA_FS is determined by
 * register CLK_CFG bit[0]/bit[6].
 *     Else if any of CF_B/CF_C/CF_D/CF_E/CF_F is set to 0b000,
 * PORTA_CLK/PORTA_FS pin are disabled as outputs.
 * 0b010: If all of CF_B/CF_C/CF_D/CF_E/CF_F are NOT 0b000, drive
 * PORTA_CLK/PORTA_FS pins from PORTC CLK/FS pins.
 *     Use PORTC CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTA_DO. The direction of the PORTA_CLK/PORTA_FS is determined by
 * register CLK_CFG bit[0]/bit[6].
 *     Else if any of CF_B/CF_C/CF_D/CF_E/CF_F is set to 0b000,
 * PORTA_CLK/PORTA_FS pin are disabled as outputs
 * 0b011: If all of CF_B/CF_C/CF_D/CF_E/CF_F are NOT 0b000, drive
 * PORTA_CLK/PORTA_FS pins from PORTD CLK/FS pins.
 *     Use PORTD CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTA_DO.The direction of the PORTA_CLK/PORTA_FS is determined by
 * register CLK_CFG bit[0]/bit[6].
 *     Else if any of CF_B/CF_C/CF_D/CF_E/CF_F is set to 0b000,
 * PORTA_CLK/PORTA_FS pin are disabled as outputs
 * 0b100: If all of CF_B/CF_C/CF_D/CF_E/CF_F are NOT 0b000, drive
 * PORTA_CLK/PORTA_FS pins from PORTE CLK/FS pins.
 *     Use PORTE CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTA_DO.The direction of the PORTA_CLK/PORTA_FS is determined by
 * register CLK_CFG bit[0]/bit[6].
 *     Else if any of CF_B/CF_C/CF_D/CF_E/CF_F is set to 0b000,
 * PORTA_CLK/PORTA_FS pin are disabled as outputs
 * 0b101: If all of CF_B/CF_C/CF_D/CF_E/CF_F are NOT 0b000, drive
 * PORTA_CLK/PORTA_FS pins from PORTF CLK/FS pins.
 *     Use PORTF CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTA_DO.The direction of the PORTA_CLK/PORTA_FS is determined by
 * register CLK_CFG bit[0]/bit[6].
 *     Else if any of CF_B/CF_C/CF_D/CF_E/CF_F is set to 0b000,
 * PORTA_CLK/PORTA_FS pin are disabled as outputs
 */
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_A_MASK 0x00000007
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_A_RESET_VAL 0x0
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_A_POS 0
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_A_SIZE 3
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_A_DECL (2 : 0)

/*
 * 0b000: If all of CF_A/CF_C/CF_D/CF_E/CF_F are NOT 0b001, drive PORTB
 * CLK/FS pins from PORTA CLK/FS pins.
 *     Use PORTA CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTB_DO. The direction of the PORTB_CLK/PORTB_FS is determined by
 * register CLK_CFG bit[1]/bit[7] ;
 *     Else If any of /CF_A/CF_C/CF_D/CF_E/CF_F is set to 0b001,
 * PORTB_CLK/PORTB_FS are disabled as ouptuts
 * 0b001: Drive PORTB CLK/FS pins from normal operation. Use PORTB CLK/FS for
 * pass-through select signal
 *     synchronization that selects the output data to PORTB_DO. The
 * direction of the PORTB_CLK/PORTB_FS is
 *     determined by register CLK_CFG bit[1]/bit[7].
 * 0b010: If all of CF_A/CF_C/CF_D/CF_E/CF_F are NOT 0b001, drive PORTB
 * CLK/FS pins from PORTC CLK/FS pins.
 *     Use PORTC CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTB_DO. The direction of the PORTB_CLK/PORTB_FS is determined by
 * register CLK_CFG bit[1]/bit[7] ;
 *     Else If any of /CF_A/CF_C/CF_D/CF_E/CF_F is set to 0b001,
 * PORTB_CLK/PORTB_FS are disabled as ouptuts
 * 0b011: If all of CF_A/CF_C/CF_D/CF_E/CF_F are NOT 0b001, drive PORTB
 * CLK/FS pins from PORTD CLK/FS pins.
 *     Use PORTD CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTB_DO. The direction of the PORTB_CLK/PORTB_FS is determined by
 * register CLK_CFG bit[1]/bit[7] ;
 *     Else If any of /CF_A/CF_C/CF_D/CF_E/CF_F is set to 0b001,
 * PORTB_CLK/PORTB_FS are disabled as ouptuts
 * 0b100: If all of CF_A/CF_C/CF_D/CF_E/CF_F are NOT 0b001, drive PORTB
 * CLK/FS pins from PORTE CLK/FS pins.
 *     Use PORTE CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTB_DO. The direction of the PORTB_CLK/PORTB_FS is determined by
 * register CLK_CFG bit[1]/bit[7] ;
 *     Else If any of /CF_A/CF_C/CF_D/CF_E/CF_F is set to 0b001,
 * PORTB_CLK/PORTB_FS are disabled as ouptuts
 * 0b101: If all of CF_A/CF_C/CF_D/CF_E/CF_F are NOT 0b001, drive PORTB
 * CLK/FS pins from PORTF CLK/FS pins.
 *     Use PORTF CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTB_DO. The direction of the PORTB_CLK/PORTB_FS is determined by
 * register CLK_CFG bit[1]/bit[7] ;
 *     Else If any of /CF_A/CF_C/CF_D/CF_E/CF_F is set to 0b001,
 * PORTB_CLK/PORTB_FS are disabled as ouptuts
 */
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_B_MASK 0x00000038
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_B_RESET_VAL 0x1
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_B_POS 3
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_B_SIZE 3
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_B_DECL (5 : 3)

/*
 * If bit [0] and bit [7] (DMIC_0/1_PASSTHROUGH) of PCM_PASSTHROUGH2 register
 * are set to 0b00, PORTC_CLK/FS
 * is determined by the CF_C settings below:
 * 0b000: If all of CF_A/CF_B/CF_D/CF_E/CF_F are NOT 0b010, drive PORTC
 * CLK/FS pins from PORTA CLK/FS pins.
 *     Use PORTA CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTC_DO. The direction of the PORTC_CLK/PORTC_FS is determined by
 * register CLK_CFG bit[2]/bit[8] ;
 *     Else If any of /CF_A/CF_B/CF_D/CF_E/CF_F is set to 0b010,
 * PORTC_CLK/PORTC_FS are disabled as ouptuts
 * 0b001: If all of CF_A/CF_B/CF_D/CF_E/CF_F are NOT 0b010, drive PORTC
 * CLK/FS pins from PORTB CLK/FS pins.
 *     Use PORTB CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTC_DO. The direction of the PORTC_CLK/PORTC_FS is determined by
 * register CLK_CFG bit[2]/bit[8] ;
 *     Else If any of /CF_A/CF_B/CF_D/CF_E/CF_F is set to 0b010,
 * PORTC_CLK/PORTC_FS are disabled as ouptuts
 * 0b010: Drive PORTC CLK/FS pins from normal operation. Use PORTC CLK/FS for
 * pass-through select signal
 *     synchronization that selects the output data to PORTC_DO. The
 * direction of the PORTC_CLK/PORTC_FS is
 *     determined by register CLK_CFG bit[2]/bit[6].
 * 0b011: If all of CF_A/CF_B/CF_D/CF_E/CF_F are NOT 0b010, drive PORTC
 * CLK/FS pins from PORTD CLK/FS pins.
 *     Use PORTD CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTC_DO. The direction of the PORTC_CLK/PORTC_FS is determined by
 * register CLK_CFG bit[2]/bit[8] ;
 *     Else If any of /CF_A/CF_B/CF_D/CF_E/CF_F is set to 0b010,
 * PORTC_CLK/PORTC_FS are disabled as ouptuts
 *     Else if this register bit[16] and bit[21] (DMIC_0/1_PASSTHROUGH) are
 * set to be 10, PORTC_CLK is determined
 *     by the CF_C settings listed above, PORTC_FS is disabled as an output
 *     Else if PCM_PASSTHROUGH2 register bit[0] and bit[7]
 * (DMIC_0/1_PASSTHROUGH) are set to be 0b01, PORT_CLK is disabled as
 *     an output; PORTC_FS is determined by the CF_C settings listed
 * above.Else if PCM_PASSTHROUGH2 register bit[0] and
 *     bit[7] (DMIC_0/1_PASSTHROUGH) are set to be 0b11, PORTC_CLK/FS are
 * disabled as outputs
 * 0b100: If all of CF_A/CF_B/CF_D/CF_E/CF_F are NOT 0b010, drive PORTC
 * CLK/FS pins from PORTE CLK/FS pins.
 *     Use PORTE CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTC_DO. The direction of the PORTC_CLK/PORTC_FS is determined by
 * register CLK_CFG bit[2]/bit[8] ;
 *     Else If any of /CF_A/CF_B/CF_D/CF_E/CF_F is set to 0b010,
 * PORTC_CLK/PORTC_FS are disabled as ouptuts
 * 0b101: If all of CF_A/CF_B/CF_D/CF_E/CF_F are NOT 0b010, drive PORTC
 * CLK/FS pins from PORTF CLK/FS pins.
 *     Use PORTF CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTC_DO. The direction of the PORTC_CLK/PORTC_FS is determined by
 * register CLK_CFG bit[2]/bit[8] ;
 *     Else If any of /CF_A/CF_B/CF_D/CF_E/CF_F is set to 0b010,
 * PORTC_CLK/PORTC_FS are disabled as ouptuts
 */
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_C_MASK 0x000001c0
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_C_RESET_VAL 0x2
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_C_POS 6
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_C_SIZE 3
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_C_DECL (8 : 6)

/*
 * 0b000: If All of CF_A/CF_B/CF_C/CF_E/CF_F are NOT 0b011, drive PORTD
 * CLK/FS pins from PORTA CLK/FS pins.
 *     Use PORTA CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTD_DO. The direction of the PORTD_CLK/PORTD_FS is determined by
 * register CLK_CFG bit[3]/bit[9] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_E/CF_F is set to 0b011,
 * PORTD_CLK/PORTD_FS are disabled as ouptuts.
 * 0b001: If All of CF_A/CF_B/CF_C/CF_E/CF_F are NOT 0b011, drive PORTD
 * CLK/FS pins from PORTB CLK/FS pins.
 *     Use PORTB CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTD_DO. The direction of the PORTD_CLK/PORTD_FS is determined by
 * register CLK_CFG bit[3]/bit[9] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_E/CF_F is set to 0b011,
 * PORTD_CLK/PORTD_FS are disabled as ouptuts.
 * 0b010: If All of CF_A/CF_B/CF_C/CF_E/CF_F are NOT 0b011, drive PORTD
 * CLK/FS pins from PORTC CLK/FS pins.
 *     Use PORTC CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTD_DO. The direction of the PORTD_CLK/PORTD_FS is determined by
 * register CLK_CFG bit[3]/bit[9] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_E/CF_F  is set to 0b011,
 * PORTD_CLK/PORTD_FS are disabled as ouptuts.
 * 0b011: Drive PORTD CLK/FS pins from normal operation. Use PORTD CLK/FS for
 * pass-through select signal
 *     synchronization that selects the output data to PORTD_DO. The
 * direction of the PORTD_CLK/PORTD_FS is
 *     determined by register CLK_CFG bit[3]/bit[9].
 * 0b100: If All of CF_A/CF_B/CF_C/CF_E/CF_F are NOT 0b011, drive PORTD
 * CLK/FS pins from PORTE CLK/FS pins.
 *     Use PORTE CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTD_DO. The direction of the PORTD_CLK/PORTD_FS is determined by
 * register CLK_CFG bit[3]/bit[9] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_E/CF_F  is set to 0b011,
 * PORTD_CLK/PORTD_FS are disabled as ouptuts.
 * 0b101: If All of CF_A/CF_B/CF_C/CF_E/CF_F are NOT 0b011, drive PORTD
 * CLK/FS pins from PORTF CLK/FS pins.
 *     Use PORTF CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTD_DO. The direction of the PORTD_CLK/PORTD_FS is determined by
 * register CLK_CFG bit[3]/bit[9] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_E/CF_F  is set to 0b011,
 * PORTD_CLK/PORTD_FS are disabled as ouptuts.
 */
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_D_MASK 0x00000e00
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_D_RESET_VAL 0x3
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_D_POS 9
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_D_SIZE 3
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_D_DECL (11 : 9)

/*
 * 0b000: If All of CF_A/CF_B/CF_C/CF_D/CF_F are NOT 0b100, drive PORTE
 * CLK/FS pins from PORTA CLK/FS pins.
 *     Use PORTA CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTE_DO. The direction of the PORTE_CLK/PORTE_FS is determined by
 * register CLK_CFG bit[4]/bit[10] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_D/CF_F is set to 0b100,
 * PORTE_CLK/PORTE_FS are disabled as ouptuts.
 * 0b001: If All of CF_A/CF_B/CF_C/CF_D/CF_F are NOT 0b100, drive PORTE
 * CLK/FS pins from PORTB CLK/FS pins.
 *     Use PORTB CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTE_DO. The direction of the PORTE_CLK/PORTE_FS is determined by
 * register CLK_CFG bit[4]/bit[10] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_D/CF_F is set to 0b100,
 * PORTE_CLK/PORTE_FS are disabled as ouptuts.
 * 0b010: If All of CF_A/CF_B/CF_C/CF_D/CF_F are NOT 0b100, drive PORTE
 * CLK/FS pins from PORTC CLK/FS pins.
 *     Use PORTC CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTE_DO. The direction of the PORTE_CLK/PORTE_FS is determined by
 * register CLK_CFG bit[4]/bit[10] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_D/CF_F  is set to 0b100,
 * PORTE_CLK/PORTE_FS are disabled as ouptuts.
 * 0b011: If All of CF_A/CF_B/CF_C/CF_D/CF_F are NOT 0b100, drive PORTE
 * CLK/FS pins from PORTD CLK/FS pins.
 *     Use PORTD CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTE_DO. The direction of the PORTE_CLK/PORTE_FS is determined by
 * register CLK_CFG bit[4]/bit[10] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_D/CF_F  is set to 0b100,
 * PORTE_CLK/PORTE_FS are disabled as ouptuts.
 * 0b100: Drive PORTE CLK/FS pins from normal operation. Use PORTE CLK/FS for
 * pass-through select signal
 *     synchronization that selects the output data to PORTE_DO. The
 * direction of the PORTE_CLK/PORTE_FS is
 *     determined by register CLK_CFG bit[4]/bit[10].
 * 0b101: If All of CF_A/CF_B/CF_C/CF_D/CF_F are NOT 0b100, drive PORTE
 * CLK/FS pins from PORTF CLK/FS pins.
 *     Use PORTF CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTE_DO. The direction of the PORTE_CLK/PORTE_FS is determined by
 * register CLK_CFG bit[4]/bit[10] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_D/CF_F  is set to 0b100,
 * PORTE_CLK/PORTE_FS are disabled as ouptuts.
 */
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_E_MASK 0x00007000
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_E_RESET_VAL 0x4
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_E_POS 12
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_E_SIZE 3
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_E_DECL (14 : 12)

/*
 * 0b000: If All of CF_A/CF_B/CF_C/CF_D/CF_E are NOT 0b100, drive PORTF
 * CLK/FS pins from PORTA CLK/FS pins.
 *     Use PORTA CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTF_DO. The direction of the PORTF_CLK/PORTF_FS is determined by
 * register CLK_CFG bit[5]/bit[11] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_D/CF_E is set to 0b100,
 * PORTF_CLK/PORTF_FS are disabled as ouptuts.
 * 0b001: If All of CF_A/CF_B/CF_C/CF_D/CF_E are NOT 0b100, drive PORTF
 * CLK/FS pins from PORTB CLK/FS pins.
 *     Use PORTB CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTF_DO. The direction of the PORTF_CLK/PORTF_FS is determined by
 * register CLK_CFG bit[5]/bit[11] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_D/CF_E is set to 0b100,
 * PORTF_CLK/PORTF_FS are disabled as ouptuts.
 * 0b010: If All of CF_A/CF_B/CF_C/CF_D/CF_E are NOT 0b100, drive PORTF
 * CLK/FS pins from PORTC CLK/FS pins.
 *     Use PORTC CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTF_DO. The direction of the PORTF_CLK/PORTF_FS is determined by
 * register CLK_CFG bit[5]/bit[11] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_D/CF_E  is set to 0b100,
 * PORTF_CLK/PORTF_FS are disabled as ouptuts.
 * 0b011: If All of CF_A/CF_B/CF_C/CF_D/CF_E are NOT 0b100, drive PORTF
 * CLK/FS pins from PORTD CLK/FS pins.
 *     Use PORTD CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTF_DO. The direction of the PORTF_CLK/PORTF_FS is determined by
 * register CLK_CFG bit[5]/bit[11] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_D/CF_E  is set to 0b100,
 * PORTF_CLK/PORTF_FS are disabled as ouptuts.
 * 0b101: If All of CF_A/CF_B/CF_C/CF_D/CF_E are NOT 0b100, drive PORTF
 * CLK/FS pins from PORTF CLK/FS pins.
 *     Use PORTF CLK/FS for pass-through select signal synchronization that
 * selects the output data to
 *     PORTF_DO. The direction of the PORTF_CLK/PORTF_FS is determined by
 * register CLK_CFG bit[5]/bit[11] ;
 *     Else If any of /CF_A/CF_B/CF_C/CF_D/CF_E  is set to 0b100,
 * PORTF_CLK/PORTF_FS are disabled as ouptuts.
 * 0b100: drive PORTF CLK/FS pins from normal operation. Use PORTF CLK/FS for
 * pass-through select signal
 *     synchronization that selects the output data to PORTF_DO. The
 * direction of the PORTF_CLK/PORTF_FS is
 *     determined by register CLK_CFG bit[5]/bit[11].
 */
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_F_MASK 0x00038000
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_F_RESET_VAL 0x5
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_F_POS 15
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_F_SIZE 3
#define IAXXX_AO_PCM_PASSTHROUGH1_CF_F_DECL (17 : 15)

/*** AO_PCM_PASSTHROUGH2 (0x50010058) ***/
/*
 * The PCM Passhthrough register enables data pass-through from any input
 * port to any output port.
 * By default, each port would loop its input back to its output, but
 * pass-through is disabled.  NOTE: PORT F refers to the COMMB ports in pcm
 * mode.
 */
#define IAXXX_AO_PCM_PASSTHROUGH2_ADDR (0x50010058)
#define IAXXX_AO_PCM_PASSTHROUGH2_MASK_VAL 0x000000ff
#define IAXXX_AO_PCM_PASSTHROUGH2_RMASK_VAL 0x000000ff
#define IAXXX_AO_PCM_PASSTHROUGH2_WMASK_VAL 0x000000ff
#define IAXXX_AO_PCM_PASSTHROUGH2_RESET_VAL 0x00000000

/*
 * 1: Drive PORTC_DO (DMIC DO) from PORTC_FS (DMIC0_DI)
 */
#define IAXXX_AO_PCM_PASSTHROUGH2_DMIC_0_PASSTHROUGH_MASK 0x00000001
#define IAXXX_AO_PCM_PASSTHROUGH2_DMIC_0_PASSTHROUGH_RESET_VAL 0x0
#define IAXXX_AO_PCM_PASSTHROUGH2_DMIC_0_PASSTHROUGH_POS 0
#define IAXXX_AO_PCM_PASSTHROUGH2_DMIC_0_PASSTHROUGH_SIZE 1
#define IAXXX_AO_PCM_PASSTHROUGH2_DMIC_0_PASSTHROUGH_DECL 0

/*
 * pcm_dt_pass_en for PCM Port A.
 */
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTA_DPT_EN_MASK 0x00000002
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTA_DPT_EN_RESET_VAL 0x0
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTA_DPT_EN_POS 1
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTA_DPT_EN_SIZE 1
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTA_DPT_EN_DECL 1

/*
 * pcm_dt_pass_en for PCM Port B.
 */
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTB_DPT_EN_MASK 0x00000004
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTB_DPT_EN_RESET_VAL 0x0
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTB_DPT_EN_POS 2
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTB_DPT_EN_SIZE 1
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTB_DPT_EN_DECL 2

/*
 * pcm_dt_pass_en for PCM Port C.
 */
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTC_DPT_EN_MASK 0x00000008
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTC_DPT_EN_RESET_VAL 0x0
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTC_DPT_EN_POS 3
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTC_DPT_EN_SIZE 1
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTC_DPT_EN_DECL 3

/*
 * pcm_dt_pass_en for PCM Port D.
 */
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTD_DPT_EN_MASK 0x00000010
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTD_DPT_EN_RESET_VAL 0x0
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTD_DPT_EN_POS 4
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTD_DPT_EN_SIZE 1
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTD_DPT_EN_DECL 4

/*
 * pcm_dt_pass_en for PCM Port E.
 */
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTE_DPT_EN_MASK 0x00000020
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTE_DPT_EN_RESET_VAL 0x0
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTE_DPT_EN_POS 5
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTE_DPT_EN_SIZE 1
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTE_DPT_EN_DECL 5

/*
 * pcm_dt_pass_en for PCM Port F.
 */
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTF_DPT_EN_MASK 0x00000040
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTF_DPT_EN_RESET_VAL 0x0
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTF_DPT_EN_POS 6
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTF_DPT_EN_SIZE 1
#define IAXXX_AO_PCM_PASSTHROUGH2_PORTF_DPT_EN_DECL 6

/*
 * 1: Drive PORTC_DO (DMIC DO) from PORTC_DI (DMIC1_DI). DMIC_0_PASSTHROUGH
 * has priority.
 */
#define IAXXX_AO_PCM_PASSTHROUGH2_DMIC_1_PASSTHROUGH_MASK 0x00000080
#define IAXXX_AO_PCM_PASSTHROUGH2_DMIC_1_PASSTHROUGH_RESET_VAL 0x0
#define IAXXX_AO_PCM_PASSTHROUGH2_DMIC_1_PASSTHROUGH_POS 7
#define IAXXX_AO_PCM_PASSTHROUGH2_DMIC_1_PASSTHROUGH_SIZE 1
#define IAXXX_AO_PCM_PASSTHROUGH2_DMIC_1_PASSTHROUGH_DECL 7

/*** AO_PCM_DPT_SYNC (0x5001005c) ***/
/*
 * The PCM Direct Pass-Through Synchronization register sets the frame sync
 * polarity,
 * clock polarity, data delay for the ports as well as returning pass-through
 * synchronization
 * status for each port. Supports read/write access except for
 * PORT(E:A)_DPT_STATUS, which is
 * read-only.
 */
#define IAXXX_AO_PCM_DPT_SYNC_ADDR (0x5001005c)
#define IAXXX_AO_PCM_DPT_SYNC_MASK_VAL 0x00ffffff
#define IAXXX_AO_PCM_DPT_SYNC_RMASK_VAL 0x00ffffff
#define IAXXX_AO_PCM_DPT_SYNC_WMASK_VAL 0x0003ffff
#define IAXXX_AO_PCM_DPT_SYNC_RESET_VAL 0x00000000

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTA_FS rising edge indicate a frame boundary
 * 1: PORTA_FS falling edge indicate a frame boundary
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_FS_POL_MASK 0x00000001
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_FS_POL_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_FS_POL_POS 0
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_FS_POL_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_FS_POL_DECL 0

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTB_FS rising edge indicate a frame boundary
 * 1: PORTB_FS falling edge indicate a frame boundary
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_FS_POL_MASK 0x00000002
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_FS_POL_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_FS_POL_POS 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_FS_POL_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_FS_POL_DECL 1

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTC_FS rising edge indicate a frame boundary
 * 1: PORTC_FS falling edge indicate a frame boundary
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_FS_POL_MASK 0x00000004
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_FS_POL_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_FS_POL_POS 2
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_FS_POL_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_FS_POL_DECL 2

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTD_FS rising edge indicate a frame boundary
 * 1: PORTD_FS falling edge indicate a frame boundary
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_FS_POL_MASK 0x00000008
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_FS_POL_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_FS_POL_POS 3
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_FS_POL_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_FS_POL_DECL 3

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTE_FS rising edge indicate a frame boundary
 * 1: PORTE_FS falling edge indicate a frame boundary
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_FS_POL_MASK 0x00000010
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_FS_POL_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_FS_POL_POS 4
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_FS_POL_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_FS_POL_DECL 4

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTF_FS rising edge indicate a frame boundary
 * 1: PORTF_FS falling edge indicate a frame boundary
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_FS_POL_MASK 0x00000020
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_FS_POL_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_FS_POL_POS 5
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_FS_POL_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_FS_POL_DECL 5

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTA_CLK uses posedge
 * 1: PORTA_CLK uses negedge
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_CLK_POL_MASK 0x00000040
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_CLK_POL_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_CLK_POL_POS 6
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_CLK_POL_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_CLK_POL_DECL 6

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTB_CLK uses posedge
 * 1: PORTB_CLK uses negedge
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_CLK_POL_MASK 0x00000080
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_CLK_POL_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_CLK_POL_POS 7
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_CLK_POL_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_CLK_POL_DECL 7

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTC_CLK uses posedge
 * 1: PORTC_CLK uses negedge
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_CLK_POL_MASK 0x00000100
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_CLK_POL_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_CLK_POL_POS 8
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_CLK_POL_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_CLK_POL_DECL 8

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTD_CLK uses posedge
 * 1: PORTD_CLK uses negedge
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_CLK_POL_MASK 0x00000200
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_CLK_POL_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_CLK_POL_POS 9
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_CLK_POL_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_CLK_POL_DECL 9

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTE_CLK uses posedge
 * 1: PORTE_CLK uses negedge
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_CLK_POL_MASK 0x00000400
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_CLK_POL_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_CLK_POL_POS 10
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_CLK_POL_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_CLK_POL_DECL 10

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTF_CLK uses posedge
 * 1: PORTF_CLK uses negedge
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_CLK_POL_MASK 0x00000800
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_CLK_POL_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_CLK_POL_POS 11
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_CLK_POL_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_CLK_POL_DECL 11

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTA_DI data delay is 0
 * 1: PORTA_DI data delay is 1
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_DDLY_MASK 0x00001000
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_DDLY_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_DDLY_POS 12
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_DDLY_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_DDLY_DECL 12

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTB_DI data delay is 0
 * 1: PORTB_DI data delay is 1
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_DDLY_MASK 0x00002000
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_DDLY_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_DDLY_POS 13
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_DDLY_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_DDLY_DECL 13

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTC_DI data delay is 0
 * 1: PORTC_DI data delay is 1
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_DDLY_MASK 0x00004000
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_DDLY_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_DDLY_POS 14
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_DDLY_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_DDLY_DECL 14

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTD_DI data delay is 0
 * 1: PORTD_DI data delay is 1
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_DDLY_MASK 0x00008000
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_DDLY_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_DDLY_POS 15
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_DDLY_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_DDLY_DECL 15

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTE_DI data delay is 0
 * 1: PORTE_DI data delay is 1
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_DDLY_MASK 0x00010000
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_DDLY_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_DDLY_POS 16
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_DDLY_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_DDLY_DECL 16

/*
 * This bit is used when the chip is in hardware pass-through mode.
 * 0: PORTF_DI data delay is 0
 * 1: PORTF_DI data delay is 1
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_DDLY_MASK 0x00020000
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_DDLY_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_DDLY_POS 17
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_DDLY_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_DDLY_DECL 17

/*
 * This is a read-only register bit. This bit indicates that register
 * PCM_PASSTHROUGH1 bit [1+0],
 * PORTA_DPT_EN, is synchronized to the selected PORT_CLK/FS, which can be
 * any of PCM_PORT[E:A]_CLK/FS
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_DPT_STATUS_MASK 0x00040000
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_DPT_STATUS_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_DPT_STATUS_POS 18
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_DPT_STATUS_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTA_DPT_STATUS_DECL 18

/*
 * This is a read-only register bit. This bit indicates that register
 * PCM_PASSTHROUGH1 bit [1+1],
 * PORTB_DPT_EN, is synchronized to the selected PORT_CLK/FS, which can be
 * any of PCM_PORT[E:A]_CLK/FS
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_DPT_STATUS_MASK 0x00080000
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_DPT_STATUS_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_DPT_STATUS_POS 19
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_DPT_STATUS_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTB_DPT_STATUS_DECL 19

/*
 * This is a read-only register bit. This bit indicates that register
 * PCM_PASSTHROUGH1 bit [1+2],
 * PORTC_DPT_EN, is synchronized to the selected PORT_CLK/FS, which can be
 * any of PCM_PORT[E:A]_CLK/FS
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_DPT_STATUS_MASK 0x00100000
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_DPT_STATUS_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_DPT_STATUS_POS 20
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_DPT_STATUS_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTC_DPT_STATUS_DECL 20

/*
 * This is a read-only register bit. This bit indicates that register
 * PCM_PASSTHROUGH1 bit [1+3],
 * PORTD_DPT_EN, is synchronized to the selected PORT_CLK/FS, which can be
 * any of PCM_PORT[E:A]_CLK/FS
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_DPT_STATUS_MASK 0x00200000
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_DPT_STATUS_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_DPT_STATUS_POS 21
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_DPT_STATUS_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTD_DPT_STATUS_DECL 21

/*
 * This is a read-only register bit. This bit indicates that register
 * PCM_PASSTHROUGH1 bit [1+4],
 * PORTE_DPT_EN, is synchronized to the selected PORT_CLK/FS, which can be
 * any of PCM_PORT[E:A]_CLK/FS
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_DPT_STATUS_MASK 0x00400000
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_DPT_STATUS_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_DPT_STATUS_POS 22
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_DPT_STATUS_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTE_DPT_STATUS_DECL 22

/*
 * This is a read-only register bit. This bit indicates that register
 * PCM_PASSTHROUGH1 bit [1+5],
 * PORTF_DPT_EN, is synchronized to the selected PORT_CLK/FS, which can be
 * any of PCM_PORT[E:A]_CLK/FS
 */
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_DPT_STATUS_MASK 0x00800000
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_DPT_STATUS_RESET_VAL 0x0
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_DPT_STATUS_POS 23
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_DPT_STATUS_SIZE 1
#define IAXXX_AO_PCM_DPT_SYNC_PORTF_DPT_STATUS_DECL 23

/*** AO_EFUSE (0x50010060) ***/
/*
 * This register is used by the SW to access the EFUSE
 */
#define IAXXX_AO_EFUSE_ADDR (0x50010060)
#define IAXXX_AO_EFUSE_MASK_VAL 0x001fffff
#define IAXXX_AO_EFUSE_RMASK_VAL 0x001fffff
#define IAXXX_AO_EFUSE_WMASK_VAL 0x00001fff
#define IAXXX_AO_EFUSE_RESET_VAL 0x00000006

/*
 * This bit is used to enable the control of the EFUSE by the SW
 * 0: The EFUSE SW access is disabled
 * 1: The EFUSE SW access is enabled
 */
#define IAXXX_AO_EFUSE_SW_CTRL_EN_MASK 0x00000001
#define IAXXX_AO_EFUSE_SW_CTRL_EN_RESET_VAL 0x0
#define IAXXX_AO_EFUSE_SW_CTRL_EN_POS 0
#define IAXXX_AO_EFUSE_SW_CTRL_EN_SIZE 1
#define IAXXX_AO_EFUSE_SW_CTRL_EN_DECL 0

/*
 * This bit is used to drive the chip enable, active low, of the EFUSE
 * 0: CSB of the EFUSE is 0 if SW_CTRL_EN is 1
 * 1: CSB of the EFUSE is 1 if SW_CTRL_EN is 1
 */
#define IAXXX_AO_EFUSE_SW_CS_N_MASK 0x00000002
#define IAXXX_AO_EFUSE_SW_CS_N_RESET_VAL 0x1
#define IAXXX_AO_EFUSE_SW_CS_N_POS 1
#define IAXXX_AO_EFUSE_SW_CS_N_SIZE 1
#define IAXXX_AO_EFUSE_SW_CS_N_DECL 1

/*
 * This bit is used to drive the program enable, active low, of the EFUSE
 * 0: PGENB of the EFUSE is 0 if SW_CTRL_EN is 1
 * 1: PGENB of the EFUSE is 1 if SW_CTRL_EN is 1
 */
#define IAXXX_AO_EFUSE_SW_PGEN_N_MASK 0x00000004
#define IAXXX_AO_EFUSE_SW_PGEN_N_RESET_VAL 0x1
#define IAXXX_AO_EFUSE_SW_PGEN_N_POS 2
#define IAXXX_AO_EFUSE_SW_PGEN_N_SIZE 1
#define IAXXX_AO_EFUSE_SW_PGEN_N_DECL 2

/*
 * This bit is used to drive the strobe signali, active high, of the EFUSE
 * 0: STROBE of the EFUSE is 0 if SW_CTRL_EN is 1
 * 1: STROBE of the EFUSE is 1 if SW_CTRL_EN is 1
 */
#define IAXXX_AO_EFUSE_SW_STROBE_MASK 0x00000008
#define IAXXX_AO_EFUSE_SW_STROBE_RESET_VAL 0x0
#define IAXXX_AO_EFUSE_SW_STROBE_POS 3
#define IAXXX_AO_EFUSE_SW_STROBE_SIZE 1
#define IAXXX_AO_EFUSE_SW_STROBE_DECL 3

/*
 * This bit is used to drive the load signali, active high, of the EFUSE
 * 0: LOAD of the EFUSE is 0 if SW_CTRL_EN is 1
 * 1: LOAD of the EFUSE is 1 if SW_CTRL_EN is 1
 */
#define IAXXX_AO_EFUSE_SW_LOAD_MASK 0x00000010
#define IAXXX_AO_EFUSE_SW_LOAD_RESET_VAL 0x0
#define IAXXX_AO_EFUSE_SW_LOAD_POS 4
#define IAXXX_AO_EFUSE_SW_LOAD_SIZE 1
#define IAXXX_AO_EFUSE_SW_LOAD_DECL 4

/*
 * If SW_CTRL_EN is 1 then this register drives the address bus of the EFUSE
 */
#define IAXXX_AO_EFUSE_SW_ADDR_MASK 0x00001fe0
#define IAXXX_AO_EFUSE_SW_ADDR_RESET_VAL 0x0
#define IAXXX_AO_EFUSE_SW_ADDR_POS 5
#define IAXXX_AO_EFUSE_SW_ADDR_SIZE 8
#define IAXXX_AO_EFUSE_SW_ADDR_DECL (12 : 5)

/*
 * Output data bus of the EFUSE.
 */
#define IAXXX_AO_EFUSE_DOUT_MASK 0x001fe000
#define IAXXX_AO_EFUSE_DOUT_RESET_VAL 0x0
#define IAXXX_AO_EFUSE_DOUT_POS 13
#define IAXXX_AO_EFUSE_DOUT_SIZE 8
#define IAXXX_AO_EFUSE_DOUT_DECL (20 : 13)

/*** AO_PWR_CTRL (0x50010064) ***/
/*
 * The power control register initiates sleep mode and software wakeup for
 * pd1 power domain. Supports write-only access. The AO.PWR_CTRL_STS_CLR
 * register holds the state of the underlying hardware bits.
 */
#define IAXXX_AO_PWR_CTRL_ADDR (0x50010064)
#define IAXXX_AO_PWR_CTRL_MASK_VAL 0x00000615
#define IAXXX_AO_PWR_CTRL_RMASK_VAL 0x00000000
#define IAXXX_AO_PWR_CTRL_WMASK_VAL 0x00000000
#define IAXXX_AO_PWR_CTRL_RESET_VAL 0x00000000

/*
 * Read: Always returns 0.
 * Write 0: No function.
 * Write 1: Go to sleep. Master signal to control powering down the chip.
 */
#define IAXXX_AO_PWR_CTRL_SLEEP_MASK 0x00000001
#define IAXXX_AO_PWR_CTRL_SLEEP_RESET_VAL 0x0
#define IAXXX_AO_PWR_CTRL_SLEEP_POS 0
#define IAXXX_AO_PWR_CTRL_SLEEP_SIZE 1
#define IAXXX_AO_PWR_CTRL_SLEEP_DECL 0

/*
 * No sleep for pd1 domain.
 * Read: Always returns 0.
 * Write 0: pd1 will be powered down when AO.PWR_CTRL.SLEEP register bit is
 * set.
 * Write 1: pd1 will stay powered up when AO.PWR_CTRL.SLEEP register bit is
 * set.
 */
#define IAXXX_AO_PWR_CTRL_PD1_NOSLEEP_MASK 0x00000004
#define IAXXX_AO_PWR_CTRL_PD1_NOSLEEP_RESET_VAL 0x0
#define IAXXX_AO_PWR_CTRL_PD1_NOSLEEP_POS 2
#define IAXXX_AO_PWR_CTRL_PD1_NOSLEEP_SIZE 1
#define IAXXX_AO_PWR_CTRL_PD1_NOSLEEP_DECL 2

/*
 * No sleep for pd3 domain.
 * Read: Always returns 0.
 * Write 0: pd3 will be powered down when AO.PWR_CTRL.SLEEP register bit is
 * set.
 * Write 1: pd3 will stay powered up when AO.PWR_CTRL.SLEEP register bit is
 * set.
 */
#define IAXXX_AO_PWR_CTRL_PD3_NOSLEEP_MASK 0x00000010
#define IAXXX_AO_PWR_CTRL_PD3_NOSLEEP_RESET_VAL 0x0
#define IAXXX_AO_PWR_CTRL_PD3_NOSLEEP_POS 4
#define IAXXX_AO_PWR_CTRL_PD3_NOSLEEP_SIZE 1
#define IAXXX_AO_PWR_CTRL_PD3_NOSLEEP_DECL 4

/*
 * No sleep for pd8 domain.
 * Read: Always returns 0.
 * Write 0: pd8 will be powered down when AO.PWR_CTRL.SLEEP register bit is
 * set.
 * Write 1: pd8 will stay powered up when AO.PWR_CTRL.SLEEP register bit is
 * set.
 */
#define IAXXX_AO_PWR_CTRL_PD8_NOSLEEP_MASK 0x00000200
#define IAXXX_AO_PWR_CTRL_PD8_NOSLEEP_RESET_VAL 0x0
#define IAXXX_AO_PWR_CTRL_PD8_NOSLEEP_POS 9
#define IAXXX_AO_PWR_CTRL_PD8_NOSLEEP_SIZE 1
#define IAXXX_AO_PWR_CTRL_PD8_NOSLEEP_DECL 9

/*
 * No sleep for mpll.  Normally would get reset during a sleep wakeup cycle.
 * Read: Always returns 0.
 * Write 0: mpll will have it's PD control asserted when AO.PWR_CTRL.SLEEP
 * register bit is set (so it will be powered-down).
 * Write 1: mpll will NOT have it's PD control asserted when
 * AO.PWR_CTRL.SLEEP register bit is set (so it will not be powered-down).
 */
#define IAXXX_AO_PWR_CTRL_MPLL_NOSLEEP_MASK 0x00000400
#define IAXXX_AO_PWR_CTRL_MPLL_NOSLEEP_RESET_VAL 0x0
#define IAXXX_AO_PWR_CTRL_MPLL_NOSLEEP_POS 10
#define IAXXX_AO_PWR_CTRL_MPLL_NOSLEEP_SIZE 1
#define IAXXX_AO_PWR_CTRL_MPLL_NOSLEEP_DECL 10

/*** AO_PWR_CTRL_STS_CLR (0x50010068) ***/
/*
 * The power control status and clear register returns sleep mode status when
 * read and can bring domain out of sleep when written with a "1". Supports
 * write-1-to-clear and read access. State of fields is also controlled by
 * hardware and PWR_CTRL register.
 */
#define IAXXX_AO_PWR_CTRL_STS_CLR_ADDR (0x50010068)
#define IAXXX_AO_PWR_CTRL_STS_CLR_MASK_VAL 0x00010615
#define IAXXX_AO_PWR_CTRL_STS_CLR_RMASK_VAL 0x00010615
#define IAXXX_AO_PWR_CTRL_STS_CLR_WMASK_VAL 0x00000001
#define IAXXX_AO_PWR_CTRL_STS_CLR_RESET_VAL 0x00000000

/*
 * Read: Returns the value programmed into the AO.PWR_CTRL.SLEEP bit. This
 * bit is preserved when going to sleep so it is available after coming out
 * of sleep.
 * Write 0: Does nothing.
 * Write 1: Clears entire AO.PWR_CTRL_STS_CLR register (all bits).
 */
#define IAXXX_AO_PWR_CTRL_STS_CLR_SLEEP_MASK 0x00000001
#define IAXXX_AO_PWR_CTRL_STS_CLR_SLEEP_RESET_VAL 0x0
#define IAXXX_AO_PWR_CTRL_STS_CLR_SLEEP_POS 0
#define IAXXX_AO_PWR_CTRL_STS_CLR_SLEEP_SIZE 1
#define IAXXX_AO_PWR_CTRL_STS_CLR_SLEEP_DECL 0

/*
 * Read: Returns the value programmed into the AO.PWR_CTRL.PD1_NOSLEEP bit.
 * This bit is preserved when going to sleep so it is available after coming
 * out of sleep.
 * Write 0/1: Does nothing.
 * When AO.PWR_CTRL_STS_CLR.SLEEP bit is set to 1, this bit is cleared.
 */
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD1_NOSLEEP_MASK 0x00000004
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD1_NOSLEEP_RESET_VAL 0x0
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD1_NOSLEEP_POS 2
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD1_NOSLEEP_SIZE 1
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD1_NOSLEEP_DECL 2

/*
 * Read: Returns the value programmed into the AO.PWR_CTRL.PD3_NOSLEEP bit.
 * This bit is preserved when going to sleep so it is available after coming
 * out of sleep.
 * Write 0/1: Does nothing.
 * When AO.PWR_CTRL_STS_CLR.SLEEP bit is set to 1, this bit is cleared.
 */
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD3_NOSLEEP_MASK 0x00000010
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD3_NOSLEEP_RESET_VAL 0x0
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD3_NOSLEEP_POS 4
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD3_NOSLEEP_SIZE 1
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD3_NOSLEEP_DECL 4

/*
 * Read: Returns the value programmed into the AO.PWR_CTRL.PD8_NOSLEEP bit.
 * This bit is preserved when going to sleep so it is available after coming
 * out of sleep.
 * Write 0/1: Does nothing.
 * When AO.PWR_CTRL_STS_CLR.SLEEP bit is set to 1, this bit is cleared.
 */
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD8_NOSLEEP_MASK 0x00000200
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD8_NOSLEEP_RESET_VAL 0x0
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD8_NOSLEEP_POS 9
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD8_NOSLEEP_SIZE 1
#define IAXXX_AO_PWR_CTRL_STS_CLR_PD8_NOSLEEP_DECL 9

/*
 * Read: Returns the value programmed into the AO.PWR_CTRL.MPLL_NOSLEEP bit.
 * This bit is preserved when going to sleep so it is available after coming
 * out of sleep.
 * Write 0/1: Does nothing.
 * When AO.PWR_CTRL_STS_CLR.SLEEP bit is set to 1, this bit is cleared.
 */
#define IAXXX_AO_PWR_CTRL_STS_CLR_MPLL_NOSLEEP_MASK 0x00000400
#define IAXXX_AO_PWR_CTRL_STS_CLR_MPLL_NOSLEEP_RESET_VAL 0x0
#define IAXXX_AO_PWR_CTRL_STS_CLR_MPLL_NOSLEEP_POS 10
#define IAXXX_AO_PWR_CTRL_STS_CLR_MPLL_NOSLEEP_SIZE 1
#define IAXXX_AO_PWR_CTRL_STS_CLR_MPLL_NOSLEEP_DECL 10

/*
 * 1 indicates that the chip has entered "sleep" mode.  Due to no_sleep
 * feature (plus domain controlled via SW_PWR_CTRL_SET), the various power
 * domains may or may not be powered down.  However, in order to leave
 * "sleep" mode, a wakeup event of some sort must occur..
 * 0 indicates that chip in not in "sleep" mode.
 */
#define IAXXX_AO_PWR_CTRL_STS_CLR_SLEEP_STS_MASK 0x00010000
#define IAXXX_AO_PWR_CTRL_STS_CLR_SLEEP_STS_RESET_VAL 0x0
#define IAXXX_AO_PWR_CTRL_STS_CLR_SLEEP_STS_POS 16
#define IAXXX_AO_PWR_CTRL_STS_CLR_SLEEP_STS_SIZE 1
#define IAXXX_AO_PWR_CTRL_STS_CLR_SLEEP_STS_DECL 16

/*** AO_GP (0x5001006c) ***/
/*
 * General purpose scratchpad register set, maintains state in sleep mode.
 * Supports write-1-to-set access.
 */
#define IAXXX_AO_GP_ADDR (0x5001006c)
#define IAXXX_AO_GP_MASK_VAL 0x00000001
#define IAXXX_AO_GP_RMASK_VAL 0x00000000
#define IAXXX_AO_GP_WMASK_VAL 0x00000000
#define IAXXX_AO_GP_RESET_VAL 0x00000000

/*
 * Read: Always returns 0.
 * Write 0: No function.
 * Write 1: Sets the GP_STS_CLR.STATE bit.
 */
#define IAXXX_AO_GP_STATE_MASK 0x00000001
#define IAXXX_AO_GP_STATE_RESET_VAL 0x0
#define IAXXX_AO_GP_STATE_POS 0
#define IAXXX_AO_GP_STATE_SIZE 1
#define IAXXX_AO_GP_STATE_DECL 0

/*** AO_GP_STS_CLR (0x50010070) ***/
/*
 * General purpose scratchpad register status and clear. Supports
 * write-1-to-clear and read access.
 */
#define IAXXX_AO_GP_STS_CLR_ADDR (0x50010070)
#define IAXXX_AO_GP_STS_CLR_MASK_VAL 0x00000001
#define IAXXX_AO_GP_STS_CLR_RMASK_VAL 0x00000001
#define IAXXX_AO_GP_STS_CLR_WMASK_VAL 0x00000001
#define IAXXX_AO_GP_STS_CLR_RESET_VAL 0x00000000

/*
 * 0: Does nothing.
 * 1: Clears AO.GP_STS_CLR.STATE register.
 */
#define IAXXX_AO_GP_STS_CLR_STATE_MASK 0x00000001
#define IAXXX_AO_GP_STS_CLR_STATE_RESET_VAL 0x0
#define IAXXX_AO_GP_STS_CLR_STATE_POS 0
#define IAXXX_AO_GP_STS_CLR_STATE_SIZE 1
#define IAXXX_AO_GP_STS_CLR_STATE_DECL 0

/*** AO_INT_FWD (0x50010074) ***/
/*
 * The Interrupt Forwarding control register allows configuration of the
 * interrupt forwarding mechanism. During sleep, this allows D400 to capture
 * an interrupt on the CDC_INT_N pin and drive the INTR_EVNT pin in response,
 * hold the event until software wakes up, and allow software to clear the
 * interrupt and control ownership of the INTR_EVNT pin. Always use ARM to
 * enable interrupt capture. Selection of forwarded codec interrupt or gpio_2
 * to drive INTR_EVNT pin is controlled by the register field
 * IO_CTRL.INTR_EVNT.MUX_SEL.
 */
#define IAXXX_AO_INT_FWD_ADDR (0x50010074)
#define IAXXX_AO_INT_FWD_MASK_VAL 0x0001000f
#define IAXXX_AO_INT_FWD_RMASK_VAL 0x0001000c
#define IAXXX_AO_INT_FWD_WMASK_VAL 0x0000000f
#define IAXXX_AO_INT_FWD_RESET_VAL 0x00000000

/*
 * Set interrupt forwarding storage register, CAPT. Note that polarity
 * control is separate. If both SET and CLR are 1, invert state of CAPT. Wait
 * at least 4 CLK_IN periods after ARM is deasserted to set this bit.
 * Read: Always returns 0.
 * Write 0: No effect.
 * Write 1: If CLR == 0, set CAPT to 1, else invert state of CAPT.
 */
#define IAXXX_AO_INT_FWD_SET_MASK 0x00000001
#define IAXXX_AO_INT_FWD_SET_RESET_VAL 0x0
#define IAXXX_AO_INT_FWD_SET_POS 0
#define IAXXX_AO_INT_FWD_SET_SIZE 1
#define IAXXX_AO_INT_FWD_SET_DECL 0

/*
 * Clear interrupt forwarding storage register, CAPT. Note that polarity
 * control is separate. If both SET and CLR are 1, invert state of CAPT. Wait
 * at least 4 CLK_IN periods after ARM is deasserted to set this bit.
 * Read: Always returns 0.
 * Write 0: No effect.
 * Write 1: If SET == 0, clear CAPT to 0, else invert state of CAPT.
 */
#define IAXXX_AO_INT_FWD_CLR_MASK 0x00000002
#define IAXXX_AO_INT_FWD_CLR_RESET_VAL 0x0
#define IAXXX_AO_INT_FWD_CLR_POS 1
#define IAXXX_AO_INT_FWD_CLR_SIZE 1
#define IAXXX_AO_INT_FWD_CLR_DECL 1

/*
 * When asserted, this bit forces codec interrupt capture even when pd1 is
 * awake. If this bit is set, hardware will not clear CAPT when CLR is set
 * nor set it when SET is set. Note that although interrupt capture is armed
 * automatically during pd1 sleep, interrupt capture can miss events if
 * CDC_INT_N wakeup occurs too soon after the processor initiates pd1 sleep.
 * Wait a minimum of 4 CLK_IN periods after de-asserting ARM before asserting
 * CLR or SET.
 * Write 0: Arm interrupt capture only during pd1 sleep. Allow SET to set
 * CAPT and CLR to clear CAPT.
 * Write 1: Arm interrupt capture even when pd1 is awake.
 */
#define IAXXX_AO_INT_FWD_ARM_MASK 0x00000004
#define IAXXX_AO_INT_FWD_ARM_RESET_VAL 0x0
#define IAXXX_AO_INT_FWD_ARM_POS 2
#define IAXXX_AO_INT_FWD_ARM_SIZE 1
#define IAXXX_AO_INT_FWD_ARM_DECL 2

/*
 * Invert polarity of forwarded codec interrupt to INTR_EVNT pin.
 * 0: INTR_EVNT pin is driven high to indicate forwarded interrupt.
 * 1: INTR_EVNT pin is driven low to indicate forwarded interrupt.
 */
#define IAXXX_AO_INT_FWD_INV_POL_MASK 0x00000008
#define IAXXX_AO_INT_FWD_INV_POL_RESET_VAL 0x0
#define IAXXX_AO_INT_FWD_INV_POL_POS 3
#define IAXXX_AO_INT_FWD_INV_POL_SIZE 1
#define IAXXX_AO_INT_FWD_INV_POL_DECL 3

/*
 * Indicates if a codec interrupt occurred during pd1 sleep. Can be set or
 * cleared also through SET and CLR.
 * 0: No codec interrupt occurred during pd1 sleep.
 * 1: A codec interrupt occurred during pd1 sleep.
 */
#define IAXXX_AO_INT_FWD_CAPT_MASK 0x00010000
#define IAXXX_AO_INT_FWD_CAPT_RESET_VAL 0x0
#define IAXXX_AO_INT_FWD_CAPT_POS 16
#define IAXXX_AO_INT_FWD_CAPT_SIZE 1
#define IAXXX_AO_INT_FWD_CAPT_DECL 16

/*** AO_PKG_CFG (0x50010078) ***/
/*
 * The package configuration status register holds identification
 * information, including values read at reset from the eFuse macro. Supports
 * read-only access.
 */
#define IAXXX_AO_PKG_CFG_ADDR (0x50010078)
#define IAXXX_AO_PKG_CFG_MASK_VAL 0xfffffff0
#define IAXXX_AO_PKG_CFG_RMASK_VAL 0xfffffff0
#define IAXXX_AO_PKG_CFG_WMASK_VAL 0x00000000
#define IAXXX_AO_PKG_CFG_RESET_VAL 0xd4500000

/*
 * This field mirrors the register field AO.EFUSE_BOOT.PKG_CFG.
 * Package configuration information. Value of EFUSE[0][3:0] loaded at reset
 * before SW boot starts.
 * It gives 16 different package options for the die. Current associations:
 *   0x0: eS904
 *   0x8: eS954
 *   0x9: eS964
 *   Other: To be determined
 */
#define IAXXX_AO_PKG_CFG_PKG_CFG_MASK 0x000000f0
#define IAXXX_AO_PKG_CFG_PKG_CFG_RESET_VAL 0x0
#define IAXXX_AO_PKG_CFG_PKG_CFG_POS 4
#define IAXXX_AO_PKG_CFG_PKG_CFG_SIZE 4
#define IAXXX_AO_PKG_CFG_PKG_CFG_DECL (7 : 4)

/*
 * This field mirrors the register field AO.EFUSE_BOOT.ROM_REV.
 * ROM revision number. Value of EFUSE[0][7:4] loaded at reset before SW boot
 * starts.
 * Revision code read from address in the instruction ROM at reset.
 */
#define IAXXX_AO_PKG_CFG_ROM_REV_MASK 0x00000f00
#define IAXXX_AO_PKG_CFG_ROM_REV_RESET_VAL 0x0
#define IAXXX_AO_PKG_CFG_ROM_REV_POS 8
#define IAXXX_AO_PKG_CFG_ROM_REV_SIZE 4
#define IAXXX_AO_PKG_CFG_ROM_REV_DECL (11 : 8)

/*
 * This field mirrors the register field AO.EFUSE_BOOT.LAYOUT_REV.
 * Die layout revision, incremented for each mask update after initial
 * tapeout. Not incremented for ROM metal changes. Incremented for metal
 * changes to non-ROM parts of the die.
 *   0x0: First revision.
 */
#define IAXXX_AO_PKG_CFG_LAYOUT_REV_MASK 0x0000f000
#define IAXXX_AO_PKG_CFG_LAYOUT_REV_RESET_VAL 0x0
#define IAXXX_AO_PKG_CFG_LAYOUT_REV_POS 12
#define IAXXX_AO_PKG_CFG_LAYOUT_REV_SIZE 4
#define IAXXX_AO_PKG_CFG_LAYOUT_REV_DECL (15 : 12)

/*
 * System-on-chip architecture type.
 * 0x50: Athens
 */
#define IAXXX_AO_PKG_CFG_ARCH_TYPE_MASK 0x00ff0000
#define IAXXX_AO_PKG_CFG_ARCH_TYPE_RESET_VAL 0x50
#define IAXXX_AO_PKG_CFG_ARCH_TYPE_POS 16
#define IAXXX_AO_PKG_CFG_ARCH_TYPE_SIZE 8
#define IAXXX_AO_PKG_CFG_ARCH_TYPE_DECL (23 : 16)

/*
 * Core processor type running algorithm.
 * 0x4: DMX
 */
#define IAXXX_AO_PKG_CFG_CORE_TYPE_MASK 0x0f000000
#define IAXXX_AO_PKG_CFG_CORE_TYPE_RESET_VAL 0x4
#define IAXXX_AO_PKG_CFG_CORE_TYPE_POS 24
#define IAXXX_AO_PKG_CFG_CORE_TYPE_SIZE 4
#define IAXXX_AO_PKG_CFG_CORE_TYPE_DECL (27 : 24)

/*
 * Die type.
 * 0xD: Digital VLSI.
 */
#define IAXXX_AO_PKG_CFG_DIE_TYPE_MASK 0xf0000000
#define IAXXX_AO_PKG_CFG_DIE_TYPE_RESET_VAL 0xd
#define IAXXX_AO_PKG_CFG_DIE_TYPE_POS 28
#define IAXXX_AO_PKG_CFG_DIE_TYPE_SIZE 4
#define IAXXX_AO_PKG_CFG_DIE_TYPE_DECL (31 : 28)

/*** AO_SW_LOR (0x5001007c) ***/
/*
 * The software latch-on-reset register mirrors the values of the
 * latch-on-reset pins read at reset. This is a read-only register.
 */
#define IAXXX_AO_SW_LOR_ADDR (0x5001007c)
#define IAXXX_AO_SW_LOR_MASK_VAL 0x0000007f
#define IAXXX_AO_SW_LOR_RMASK_VAL 0x0000007f
#define IAXXX_AO_SW_LOR_WMASK_VAL 0x00000000
#define IAXXX_AO_SW_LOR_RESET_VAL 0x00000008

/*
 * Value of PORTA_DO pin at exit of reset. It is used to control the I2C
 * address along with I2C_1. Note that this LOR has no hardware function
 * beyond setting this register field.
 * I2C0 I2C1: I2C Address
 *   0 0: 7 bit address 0x3E
 *   0 1: 7 bit address 0x3F
 *   1 0: 10 bit address 0x266
 *   1 1: 10 bit address 0x267
 */
#define IAXXX_AO_SW_LOR_I2C_0_MASK 0x00000001
#define IAXXX_AO_SW_LOR_I2C_0_RESET_VAL 0x0
#define IAXXX_AO_SW_LOR_I2C_0_POS 0
#define IAXXX_AO_SW_LOR_I2C_0_SIZE 1
#define IAXXX_AO_SW_LOR_I2C_0_DECL 0

/*
 * Value of PORTB_DO pin at exit of reset. It is used to control the I2C
 * address along with I2C_0. Note that this LOR has no hardware function
 * beyond setting this register field.
 * I2C0 I2C1: I2C Address
 *   0 0: 7 bit address 0x3E
 *   0 1: 7 bit address 0x3F
 *   1 0: 10 bit address 0x266
 *   1 1: 10 bit address 0x267
 */
#define IAXXX_AO_SW_LOR_I2C_1_MASK 0x00000002
#define IAXXX_AO_SW_LOR_I2C_1_RESET_VAL 0x0
#define IAXXX_AO_SW_LOR_I2C_1_POS 1
#define IAXXX_AO_SW_LOR_I2C_1_SIZE 1
#define IAXXX_AO_SW_LOR_I2C_1_DECL 1

/*
 * Value of PORTC_DO pin at exit of reset. It is used to set IO voltage
 * operating range. Setting IO voltage operating range for COMMC and COMMD
 * ports is controlled by AO.SW_LOR.IO_COM_33 register field since they are
 * on a different voltage supply (VDD_IO_COM).
 * 0: <= 1.8 V. VDD voltage should match this range.
 * 1: >= 2.5 V. VDD voltage should match this range.
 */
#define IAXXX_AO_SW_LOR_IO_33_MASK 0x00000004
#define IAXXX_AO_SW_LOR_IO_33_RESET_VAL 0x0
#define IAXXX_AO_SW_LOR_IO_33_POS 2
#define IAXXX_AO_SW_LOR_IO_33_SIZE 1
#define IAXXX_AO_SW_LOR_IO_33_DECL 2

/*
 * Value of COMMA_3 pin at exit of reset. It is used to control the use of
 * CTS/RTS for UART0. Note that this LOR has no hardware function beyond
 * setting this register field.
 */
#define IAXXX_AO_SW_LOR_CTS_RTS_MASK 0x00000008
#define IAXXX_AO_SW_LOR_CTS_RTS_RESET_VAL 0x1
#define IAXXX_AO_SW_LOR_CTS_RTS_POS 3
#define IAXXX_AO_SW_LOR_CTS_RTS_SIZE 1
#define IAXXX_AO_SW_LOR_CTS_RTS_DECL 3

/*
 * Value of INTR_EVNT pin at exit of reset. It is used to set IO voltage
 * operating range for COMMC and COMMD ports.
 * 0: <= 1.8 V. VDD_COM voltage should match this range.
 * 1: >= 2.5 V. VDD_COM voltage should match this range.
 */
#define IAXXX_AO_SW_LOR_IO_COM_33_MASK 0x00000010
#define IAXXX_AO_SW_LOR_IO_COM_33_RESET_VAL 0x0
#define IAXXX_AO_SW_LOR_IO_COM_33_POS 4
#define IAXXX_AO_SW_LOR_IO_COM_33_SIZE 1
#define IAXXX_AO_SW_LOR_IO_COM_33_DECL 4

/*
 * Value of INTR_API pin at exit of reset. It is used to select the clock
 * source at boot-up.
 * 0: Use on-chip oscillator and PLL for booting.
 * 1: Use reference clock from CLK_IN pin and PLL for booting.
 */
#define IAXXX_AO_SW_LOR_BOOT_CLK_MASK 0x00000020
#define IAXXX_AO_SW_LOR_BOOT_CLK_RESET_VAL 0x0
#define IAXXX_AO_SW_LOR_BOOT_CLK_POS 5
#define IAXXX_AO_SW_LOR_BOOT_CLK_SIZE 1
#define IAXXX_AO_SW_LOR_BOOT_CLK_DECL 5

/*
 * Value of PORTE_DO pin at exit of reset. It is used to set IO voltage
 * operating range for SLIMBUS IOs..
 * 0: <= 1.8 V. VDD_COM voltage should match this range.
 * 1: >= 2.5 V. VDD_COM voltage should match this range.
 */
#define IAXXX_AO_SW_LOR_IO_SLB_33_MASK 0x00000040
#define IAXXX_AO_SW_LOR_IO_SLB_33_RESET_VAL 0x0
#define IAXXX_AO_SW_LOR_IO_SLB_33_POS 6
#define IAXXX_AO_SW_LOR_IO_SLB_33_SIZE 1
#define IAXXX_AO_SW_LOR_IO_SLB_33_DECL 6

/*** AO_EFUSE_BOOT (0x50010080) ***/
/*
 * The EFUSE_BOOT register mirrors the contents of the eFuse hard macro which
 * is programmed during the manufacturing test process. Some of the fields
 * are duplicated in the AO.PKG_CFG register, but the EFUSE register gives
 * access to all the bits. Supports read-only access.
 */
#define IAXXX_AO_EFUSE_BOOT_ADDR (0x50010080)
#define IAXXX_AO_EFUSE_BOOT_MASK_VAL 0xffffffff
#define IAXXX_AO_EFUSE_BOOT_RMASK_VAL 0xffffffff
#define IAXXX_AO_EFUSE_BOOT_WMASK_VAL 0x00000000
#define IAXXX_AO_EFUSE_BOOT_RESET_VAL 0x00000000

/*
 * Package configuration information. Value of EFUSE[0][3:0] loaded at reset
 * before SW boot starts.
 * It gives 16 different package options for the die. Current associations:
 *   0x0: eS904
 *   0x8: eS954
 *   0x9: eS964
 *   Other: To be determined
 */
#define IAXXX_AO_EFUSE_BOOT_PKG_CFG_MASK 0x0000000f
#define IAXXX_AO_EFUSE_BOOT_PKG_CFG_RESET_VAL 0x0
#define IAXXX_AO_EFUSE_BOOT_PKG_CFG_POS 0
#define IAXXX_AO_EFUSE_BOOT_PKG_CFG_SIZE 4
#define IAXXX_AO_EFUSE_BOOT_PKG_CFG_DECL (3 : 0)

/*
 * ROM revision number. Value of EFUSE[0][7:4] loaded at reset before SW boot
 * starts.
 * Revision code read from address in the instruction ROM at reset.
 */
#define IAXXX_AO_EFUSE_BOOT_ROM_REV_MASK 0x000000f0
#define IAXXX_AO_EFUSE_BOOT_ROM_REV_RESET_VAL 0x0
#define IAXXX_AO_EFUSE_BOOT_ROM_REV_POS 4
#define IAXXX_AO_EFUSE_BOOT_ROM_REV_SIZE 4
#define IAXXX_AO_EFUSE_BOOT_ROM_REV_DECL (7 : 4)

/*
 * Layout revision number. Value of EFUSE[1][3:0] loaded at reset before SW
 * boot starts.
 * Die layout revision, incremented for each mask update after initial
 * tapeout. Not incremented for ROM metal changes. Incremented for metal
 * changes to non-ROM parts of the die.
 *   0x0: First revision.
 */
#define IAXXX_AO_EFUSE_BOOT_LAYOUT_REV_MASK 0x00000f00
#define IAXXX_AO_EFUSE_BOOT_LAYOUT_REV_RESET_VAL 0x0
#define IAXXX_AO_EFUSE_BOOT_LAYOUT_REV_POS 8
#define IAXXX_AO_EFUSE_BOOT_LAYOUT_REV_SIZE 4
#define IAXXX_AO_EFUSE_BOOT_LAYOUT_REV_DECL (11 : 8)

/*
 * Manufacturing information. Value of
 * {EFUSE[3][7:0],EFUSE[2][7:0],EFUSE[1][7:4]} loaded at reset before SW boot
 * starts.
 * [15:12] (EFUSE[1][7:4]):
 *   0: Normal SBL boot (check all four interfaces)
 *   1: Check I2C0
 *   2: Check SPI1
 *   4: Check UART0
 *   8: Check SLIMbus
 *   F: Check all (same as 0)
 * [16] (EFUSE[2][0]):
 *   0: HMD HiFi 3 enabled
 *   1: HMD HiFi 3 disabled
 * [17] (EFUSE[2][1]):
 *   0: Int OSC TRIM not programmed
 *   1: Int OSC TRIM programmed
 * [18] (EFUSE[2][2]):
 *   0: JTAG Enabled
 *   1: JTAG Disabled
 * [19] (EFUSE[2][3]):
 *   RESERVED
 * [20] (EFUSE[2][4]):
 *   0: CM4 enabled
 *   1: CM4 disabled
 * [21] (EFUSE[2][5]):
 *   0: HMD enabled
 *   1: HMD disabled
 * [22] (EFUSE[2][6]):
 *   0: DMX enabled
 *   1: DMX disabled
 * [24:23] (EFUSE[3][0], EFUSE[2][7]):
 *   0: Dont boot from flash
 *   1: Boot from external flash
 *   2: Invalid
 *   3: Dont boot from flash
 * [31:25] (EFUSE[3][7:1]):
 *   Oscillator calibration
 */
#define IAXXX_AO_EFUSE_BOOT_MFG_MASK 0xfffff000
#define IAXXX_AO_EFUSE_BOOT_MFG_RESET_VAL 0x0
#define IAXXX_AO_EFUSE_BOOT_MFG_POS 12
#define IAXXX_AO_EFUSE_BOOT_MFG_SIZE 20
#define IAXXX_AO_EFUSE_BOOT_MFG_DECL (31 : 12)

/*** AO_SW_PWR_CTRL_SET (0x50010084) ***/
/*
 * The software power control set register removes power to and isolates
 * output signals from pd0, pd1, pd2, pd3, pd4, pd5, pd6, pd7 and pd8 power
 * domains. It also stalls SSP, HMD and DMX processors. It supports read and
 * write-1-to-set accesses. It is cleared by writing to the
 * AO.SW_PWR_CTRL_CLR register.  NOTE:  It is very important to understand
 * that ALL pds now have software control registers.  However, pd1, pd3 and
 * pd8 (as well as mpll) are special in that those domains also have a
 * hardware control option for powerdown and isolation, in addition to the
 * new software control bits in this register.  For those domains
 * (pd1,pd3,pd8), the fields in this register are effectively combined with
 * the hardware control.  So, pd1,pd3 and p8 will be under software control
 * if these bits are set, and hardware control (see the PWR_CTRL register),
 * if they are not.  So in a sense, for pd1,pd3,and pd8, these registers are
 * effectively a software override.  VERY IMPORTANT NOTE: pd1 and pd3 contain
 * the system control processors (BOSS and CM4).  The fields for those
 * domains in these registers should NEVER be programmed to set both the pd1
 * and pd3 fields at the same time, or the chip may hang since both control
 * processors would be in software mode (and thus would override the hardware
 * control).  At hard reset, pd1,pd6 and pd8 are not powered down or
 * isolated, since BOSS (and HIC interfaces as well as EFUSE) need to be
 * available for ROM boot.  After hard reset, software can bring up the other
 * domains.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_ADDR (0x50010084)
#define IAXXX_AO_SW_PWR_CTRL_SET_MASK_VAL 0x37ff03ff
#define IAXXX_AO_SW_PWR_CTRL_SET_RMASK_VAL 0x37ff03ff
#define IAXXX_AO_SW_PWR_CTRL_SET_WMASK_VAL 0x37ff01ff
#define IAXXX_AO_SW_PWR_CTRL_SET_RESET_VAL 0x34bd00bd

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., removes power to pd0 power domain. For all
 * memories in pd0, memory periphery logic is powered down as well. It is
 * cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.PWR_DN_PD0 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD0_MASK 0x00000001
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD0_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD0_POS 0
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD0_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD0_DECL 0

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., removes power to pd1 power domain. For all
 * memories in pd1, memory periphery logic is powered down as well. It is
 * cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.PWR_DN_PD1 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD1_MASK 0x00000002
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD1_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD1_POS 1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD1_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD1_DECL 1

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., removes power to pd2 power domain. For all
 * memories in pd2, memory periphery logic is powered down as well. It is
 * cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.PWR_DN_PD2 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD2_MASK 0x00000004
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD2_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD2_POS 2
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD2_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD2_DECL 2

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., removes power to pd3 power domain. For all
 * memories in pd3, memory periphery logic is powered down as well. It is
 * cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.PWR_DN_PD3 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD3_MASK 0x00000008
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD3_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD3_POS 3
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD3_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD3_DECL 3

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., removes power to pd4 power domain. For all
 * memories in pd4, memory periphery logic is powered down as well. It is
 * cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.PWR_DN_PD4 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD4_MASK 0x00000010
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD4_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD4_POS 4
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD4_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD4_DECL 4

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., removes power to pd5 power domain. For all
 * memories in pd5, memory periphery logic is powered down as well. It is
 * cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.PWR_DN_PD5 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD5_MASK 0x00000020
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD5_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD5_POS 5
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD5_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD5_DECL 5

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., removes power to pd6 power domain. For all
 * memories in pd6, memory periphery logic is powered down as well. It is
 * cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.PWR_DN_PD6 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD6_MASK 0x00000040
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD6_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD6_POS 6
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD6_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD6_DECL 6

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., removes power to pd7 power domain. For all
 * memories in pd7, memory periphery logic is powered down as well. It is
 * cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.PWR_DN_PD7 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD7_MASK 0x00000080
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD7_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD7_POS 7
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD7_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD7_DECL 7

/*
 * DO NOT WRITE THIS BIT AS CHIP WILL HANG.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD8_MASK 0x00000100
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD8_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD8_POS 8
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD8_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_PD8_DECL 8

/*
 * Returns the power down (sleep) status of mpll. This bit has no functional
 * value and is there for consistency only.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_MPLL_MASK 0x00000200
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_MPLL_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_MPLL_POS 9
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_MPLL_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_PWR_DN_MPLL_DECL 9

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., isolates pd0 power domain output signals. It
 * is cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.ISO_PD0 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD0_MASK 0x00010000
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD0_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD0_POS 16
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD0_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD0_DECL 16

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., isolates pd1 power domain output signals. It
 * is cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.ISO_PD1 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD1_MASK 0x00020000
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD1_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD1_POS 17
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD1_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD1_DECL 17

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., isolates pd2 power domain output signals. It
 * is cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.ISO_PD2 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD2_MASK 0x00040000
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD2_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD2_POS 18
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD2_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD2_DECL 18

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., isolates pd3 power domain output signals. It
 * is cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.ISO_PD3 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD3_MASK 0x00080000
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD3_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD3_POS 19
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD3_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD3_DECL 19

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., isolates pd4 power domain output signals. It
 * is cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.ISO_PD4 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD4_MASK 0x00100000
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD4_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD4_POS 20
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD4_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD4_DECL 20

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., isolates pd5 power domain output signals. It
 * is cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.ISO_PD5 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD5_MASK 0x00200000
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD5_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD5_POS 21
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD5_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD5_DECL 21

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., isolates pd6 power domain output signals. It
 * is cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.ISO_PD6 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD6_MASK 0x00400000
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD6_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD6_POS 22
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD6_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD6_DECL 22

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., isolates pd7 power domain output signals. It
 * is cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.ISO_PD7 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD7_MASK 0x00800000
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD7_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD7_POS 23
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD7_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD7_DECL 23

/*
 * DO NOT WRITE THIS BIT.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD8_MASK 0x01000000
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD8_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD8_POS 24
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD8_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_ISO_PD8_DECL 24

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., asserts BOSS's RunStall and stalls it. It is
 * cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.STALL_BOSS bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_BOSS_MASK 0x02000000
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_BOSS_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_BOSS_POS 25
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_BOSS_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_BOSS_DECL 25

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., asserts SSP's RunStall and stalls it. It is
 * cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.STALL_SSP bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_SSP_MASK 0x04000000
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_SSP_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_SSP_POS 26
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_SSP_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_SSP_DECL 26

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., asserts HMD's RunStall and stalls it. It is
 * cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.STALL_HMD bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_HMD_MASK 0x10000000
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_HMD_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_HMD_POS 28
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_HMD_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_HMD_DECL 28

/*
 * Write 0: Does nothing.
 * Write 1: Sets itself - i.e., asserts DMX's RunStall and stalls it. It is
 * cleared by writing a '1' to AO.SW_PWR_CTRL_CLR.STALL_DMX bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_DMX_MASK 0x20000000
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_DMX_RESET_VAL 0x1
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_DMX_POS 29
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_DMX_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_SET_STALL_DMX_DECL 29

/*** AO_SW_PWR_CTRL_CLR (0x50010088) ***/
/*
 * The software power control clear register re-applies power to and removes
 * output signal isolation from pd0, pd1, pd2, pd3, pd4, pd5, pd6, pd7 and
 * pd8 power domains. It also advancess SSP, HMD and DMX processors by
 * de-asserting their stall signals. It supports read and write-1-to-clear
 * accesses. It is set by writing to the AO.SW_PWR_CTRL_SET register.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_ADDR (0x50010088)
#define IAXXX_AO_SW_PWR_CTRL_CLR_MASK_VAL 0x37ff03ff
#define IAXXX_AO_SW_PWR_CTRL_CLR_RMASK_VAL 0x37ff03ff
#define IAXXX_AO_SW_PWR_CTRL_CLR_WMASK_VAL 0x37ff01ff
#define IAXXX_AO_SW_PWR_CTRL_CLR_RESET_VAL 0x00000000

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., re-applies power to pd0 power domain. For
 * all memories in pd0, memory periphery logic is powered on as well. It is
 * set by writing a '1' to AO.SW_PWR_CTRL_SET.PWR_DN_PD0 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD0_MASK 0x00000001
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD0_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD0_POS 0
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD0_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD0_DECL 0

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., re-applies power to pd1 power domain. For
 * all memories in pd1, memory periphery logic is powered on as well. It is
 * set by writing a '1' to AO.SW_PWR_CTRL_SET.PWR_DN_PD1 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD1_MASK 0x00000002
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD1_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD1_POS 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD1_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD1_DECL 1

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., re-applies power to pd2 power domain. For
 * all memories in pd2, memory periphery logic is powered on as well. It is
 * set by writing a '1' to AO.SW_PWR_CTRL_SET.PWR_DN_PD2 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD2_MASK 0x00000004
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD2_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD2_POS 2
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD2_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD2_DECL 2

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., re-applies power to pd3 power domain. For
 * all memories in pd3, memory periphery logic is powered on as well. It is
 * set by writing a '1' to AO.SW_PWR_CTRL_SET.PWR_DN_PD3 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD3_MASK 0x00000008
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD3_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD3_POS 3
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD3_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD3_DECL 3

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., re-applies power to pd4 power domain. For
 * all memories in pd4, memory periphery logic is powered on as well. It is
 * set by writing a '1' to AO.SW_PWR_CTRL_SET.PWR_DN_PD4 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD4_MASK 0x00000010
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD4_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD4_POS 4
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD4_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD4_DECL 4

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., re-applies power to pd5 power domain. For
 * all memories in pd5, memory periphery logic is powered on as well. It is
 * set by writing a '1' to AO.SW_PWR_CTRL_SET.PWR_DN_PD5 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD5_MASK 0x00000020
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD5_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD5_POS 5
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD5_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD5_DECL 5

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., re-applies power to pd6 power domain. For
 * all memories in pd6, memory periphery logic is powered on as well. It is
 * set by writing a '1' to AO.SW_PWR_CTRL_SET.PWR_DN_PD6 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD6_MASK 0x00000040
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD6_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD6_POS 6
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD6_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD6_DECL 6

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., re-applies power to pd7 power domain. For
 * all memories in pd7, memory periphery logic is powered on as well. It is
 * set by writing a '1' to AO.SW_PWR_CTRL_SET.PWR_DN_PD7 bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD7_MASK 0x00000080
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD7_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD7_POS 7
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD7_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD7_DECL 7

/*
 * DO NOT WRITE THIS BIT.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD8_MASK 0x00000100
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD8_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD8_POS 8
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD8_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_PD8_DECL 8

/*
 * Returns the power down (sleep) status of mpll. This bit has no functional
 * value and is there for consistency only.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_MPLL_MASK 0x00000200
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_MPLL_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_MPLL_POS 9
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_MPLL_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_PWR_DN_MPLL_DECL 9

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., removes isolation from pd0 power domain
 * output signals. It is set by writing a '1' to AO.SW_PWR_CTRL_SET.ISO_PD0
 * bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD0_MASK 0x00010000
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD0_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD0_POS 16
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD0_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD0_DECL 16

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., removes isolation from pd1 power domain
 * output signals. It is set by writing a '1' to AO.SW_PWR_CTRL_SET.ISO_PD1
 * bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD1_MASK 0x00020000
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD1_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD1_POS 17
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD1_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD1_DECL 17

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., removes isolation from pd2 power domain
 * output signals. It is set by writing a '1' to AO.SW_PWR_CTRL_SET.ISO_PD2
 * bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD2_MASK 0x00040000
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD2_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD2_POS 18
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD2_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD2_DECL 18

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., removes isolation from pd3 power domain
 * output signals. It is set by writing a '1' to AO.SW_PWR_CTRL_SET.ISO_PD3
 * bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD3_MASK 0x00080000
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD3_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD3_POS 19
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD3_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD3_DECL 19

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., removes isolation from pd4 power domain
 * output signals. It is set by writing a '1' to AO.SW_PWR_CTRL_SET.ISO_PD4
 * bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD4_MASK 0x00100000
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD4_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD4_POS 20
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD4_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD4_DECL 20

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., removes isolation from pd5 power domain
 * output signals. It is set by writing a '1' to AO.SW_PWR_CTRL_SET.ISO_PD5
 * bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD5_MASK 0x00200000
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD5_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD5_POS 21
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD5_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD5_DECL 21

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., removes isolation from pd6 power domain
 * output signals. It is set by writing a '1' to AO.SW_PWR_CTRL_SET.ISO_PD6
 * bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD6_MASK 0x00400000
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD6_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD6_POS 22
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD6_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD6_DECL 22

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., removes isolation from pd7 power domain
 * output signals. It is set by writing a '1' to AO.SW_PWR_CTRL_SET.ISO_PD7
 * bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD7_MASK 0x00800000
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD7_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD7_POS 23
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD7_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD7_DECL 23

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., removes isolation from pd8 power domain
 * output signals. It is set by writing a '1' to AO.SW_PWR_CTRL_SET.ISO_PD8
 * bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD8_MASK 0x01000000
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD8_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD8_POS 24
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD8_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_ISO_PD8_DECL 24

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., de-asserts BOSS's RunStall and advances it.
 * It is set by writing a '1' to AO.SW_PWR_CTRL_SET.STALL_BOSS bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_BOSS_MASK 0x02000000
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_BOSS_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_BOSS_POS 25
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_BOSS_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_BOSS_DECL 25

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., de-asserts SSP's RunStall and advances it.
 * It is set by writing a '1' to AO.SW_PWR_CTRL_SET.STALL_SSP bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_SSP_MASK 0x04000000
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_SSP_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_SSP_POS 26
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_SSP_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_SSP_DECL 26

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., de-asserts HMD's RunStall and advances it.
 * It is set by writing a '1' to AO.SW_PWR_CTRL_SET.STALL_HMD bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_HMD_MASK 0x10000000
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_HMD_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_HMD_POS 28
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_HMD_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_HMD_DECL 28

/*
 * Write 0: Does nothing.
 * Write 1: Clears itself - i.e., de-asserts DMX's RunStall and advances it.
 * It is set by writing a '1' to AO.SW_PWR_CTRL_SET.STALL_DMX bit.
 */
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_DMX_MASK 0x20000000
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_DMX_RESET_VAL 0x0
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_DMX_POS 29
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_DMX_SIZE 1
#define IAXXX_AO_SW_PWR_CTRL_CLR_STALL_DMX_DECL 29

/*** AO_JTAG_DBG (0x5001008c) ***/
/*
 * This register is used to control JTAG debug mode.
 * <pre>
 * +----+-----------+------------+-------------------------------------------+
 * |    |           |            |
 *  For a Power Domain                                              |
 * |    |           |
 * +------------------------------------------------------+-----------------+
 * |    |           |            |                 1) Remove isolation
 *           |                                                      |
 * | ON | BOSS_ONLY | SWJDP_ONLY |                   2) Remove sleep
 *           |                     Turn clock on                    |
 * |    |           |
 * +------------------------------------------------------+-----------------+
 * |    |           |            |     | BOSS | SSP | CM4 | HMD | DMX |     |
 *     |     |     | BOSS | SSP | CM4 | HMD | DMX |     |     |     |
 * |    |           |            | PD0 |  PD1 | PD2 | PD3 | PD4 | PD5 | PD6 |
 * PD7 | PD8 | PD0 |  PD1 | PD2 | PD3 | PD4 | PD5 | PD6 | PD7 | PD8 |
 * +----+-----------+------------+------------------------------------------+
 * | 0  |     -     |      -     |  X  |   X  |  X  |  X  |  X  |  X  |  X  |
 *  X  |  X  |  X  |   X  |  X  |  X  |  X  |  X  |  X  |  X  |  X  |
 * | 1  |     0     |      -     | Yes |  Yes | Yes | Yes | Yes | Yes | Yes |
 * Yes | Yes | Yes |  Yes | Yes | Yes | Yes | Yes | Yes | Yes | Yes |
 * | 1  |     1     |      -     |  No |  Yes |  No |  No |  No |  No |  No |
 *  No | Yes | Yes |  Yes | Yes | Yes | Yes | Yes | Yes | Yes | Yes |
 * +----+-----------+------------+------------------------------------------+
 * </pre>
 */
#define IAXXX_AO_JTAG_DBG_ADDR (0x5001008c)
#define IAXXX_AO_JTAG_DBG_MASK_VAL 0x0000000f
#define IAXXX_AO_JTAG_DBG_RMASK_VAL 0x0000000f
#define IAXXX_AO_JTAG_DBG_WMASK_VAL 0x0000000f
#define IAXXX_AO_JTAG_DBG_RESET_VAL 0x00000003

/*
 * 0: Turn off JTAG debug mode. Bits AO.JTAG_DBG.BOSS_ONLY and
 * AO.JTAG_DBG.SWJDP_ONLY will have no effect.
 * 1: Turn on JTAG debug mode. Whether Serial Wire JTAG Debug Port is used or
 * the processors are directly connected to the JTAG chain is decide by the
 * following two bits.
 */
#define IAXXX_AO_JTAG_DBG_ON_MASK 0x00000001
#define IAXXX_AO_JTAG_DBG_ON_RESET_VAL 0x1
#define IAXXX_AO_JTAG_DBG_ON_POS 0
#define IAXXX_AO_JTAG_DBG_ON_SIZE 1
#define IAXXX_AO_JTAG_DBG_ON_DECL 0

/*
 * 0: The following bit (AO.JTAG_DBG.SWJDP_ONLY) determines whether Serial
 * Wire JTAG Debug Port is used or all processors (PD1, PD2, PD4 and PD5) are
 * directly connected to the JTAG chain.
 * 1: Include only BOSS (PD1) in the JTAG chain and connect PD1's TDO output
 * directly to the pad JTAG_DBG_TDO.
 */
#define IAXXX_AO_JTAG_DBG_BOSS_ONLY_MASK 0x00000002
#define IAXXX_AO_JTAG_DBG_BOSS_ONLY_RESET_VAL 0x1
#define IAXXX_AO_JTAG_DBG_BOSS_ONLY_POS 1
#define IAXXX_AO_JTAG_DBG_BOSS_ONLY_SIZE 1
#define IAXXX_AO_JTAG_DBG_BOSS_ONLY_DECL 1

/*
 * 0: Connect PD1, PD2, PD4 and PD5 to the JTAG chain. Stop all power domains
 * from being isolated and put to sleep. Turn on all clocks.
 * 1: Enable Serial Wire JTAG Debug Port. Stop all power domains from being
 * isolated and put to sleep. Turn on all clocks.
 */
#define IAXXX_AO_JTAG_DBG_SWJDP_ONLY_MASK 0x00000004
#define IAXXX_AO_JTAG_DBG_SWJDP_ONLY_RESET_VAL 0x0
#define IAXXX_AO_JTAG_DBG_SWJDP_ONLY_POS 2
#define IAXXX_AO_JTAG_DBG_SWJDP_ONLY_SIZE 1
#define IAXXX_AO_JTAG_DBG_SWJDP_ONLY_DECL 2

/*
 * 0: Connect CM4 debug through SWJDP (CM4 debug through Serial Wire/JTAG.
 * CM4 debug not possible using BOSS)
 * 1: Connect CM4 debug through APB (CM4 debug using BOSS. CM4 direct debug
 * through Serial Wire/JTAG not possible). Before accessing any CM4 debug
 * registers using BOSS, you must program Size field of CM4 DAP AHB-AP
 * Control/Status word register (CSW) to 0x2. Base address for cm4 DAP AHB-AP
 * is 0xe000_3000. For details about CSW register, please refer to "ARM
 * CoreSight SoC-400 Technical Reference Manual", 3.17.2 section.
 */
#define IAXXX_AO_JTAG_DBG_CM4_REMOTE_MASK 0x00000008
#define IAXXX_AO_JTAG_DBG_CM4_REMOTE_RESET_VAL 0x0
#define IAXXX_AO_JTAG_DBG_CM4_REMOTE_POS 3
#define IAXXX_AO_JTAG_DBG_CM4_REMOTE_SIZE 1
#define IAXXX_AO_JTAG_DBG_CM4_REMOTE_DECL 3

/*** AO_OCD (0x50010090) ***/
/*
 * This register is used to control OCD
 */
#define IAXXX_AO_OCD_ADDR (0x50010090)
#define IAXXX_AO_OCD_MASK_VAL 0x0023ff7f
#define IAXXX_AO_OCD_RMASK_VAL 0x0023ff7f
#define IAXXX_AO_OCD_WMASK_VAL 0x0023ff7f
#define IAXXX_AO_OCD_RESET_VAL 0x0002207e

/*
 * Setting this bit to '0' will:
 *   remove the DReset for BOSS
 */
#define IAXXX_AO_OCD_BOSS_DRESET_MASK 0x00000001
#define IAXXX_AO_OCD_BOSS_DRESET_RESET_VAL 0x0
#define IAXXX_AO_OCD_BOSS_DRESET_POS 0
#define IAXXX_AO_OCD_BOSS_DRESET_SIZE 1
#define IAXXX_AO_OCD_BOSS_DRESET_DECL 0

/*
 * Setting this bit to '0' will:
 *   remove the DReset for SSP
 */
#define IAXXX_AO_OCD_SSP_DRESET_MASK 0x00000002
#define IAXXX_AO_OCD_SSP_DRESET_RESET_VAL 0x1
#define IAXXX_AO_OCD_SSP_DRESET_POS 1
#define IAXXX_AO_OCD_SSP_DRESET_SIZE 1
#define IAXXX_AO_OCD_SSP_DRESET_DECL 1

/*
 * Setting this bit to '0' will:
 *   remove the DReset for CM4
 */
#define IAXXX_AO_OCD_CM4_DRESET_MASK 0x00000004
#define IAXXX_AO_OCD_CM4_DRESET_RESET_VAL 0x1
#define IAXXX_AO_OCD_CM4_DRESET_POS 2
#define IAXXX_AO_OCD_CM4_DRESET_SIZE 1
#define IAXXX_AO_OCD_CM4_DRESET_DECL 2

/*
 * Setting this bit to '0' will:
 *   remove the DReset for HMD
 */
#define IAXXX_AO_OCD_HMD_DRESET_MASK 0x00000008
#define IAXXX_AO_OCD_HMD_DRESET_RESET_VAL 0x1
#define IAXXX_AO_OCD_HMD_DRESET_POS 3
#define IAXXX_AO_OCD_HMD_DRESET_SIZE 1
#define IAXXX_AO_OCD_HMD_DRESET_DECL 3

/*
 * Setting this bit to '0' will:
 *   remove the DReset for DMX
 */
#define IAXXX_AO_OCD_DMX_DRESET_MASK 0x00000010
#define IAXXX_AO_OCD_DMX_DRESET_RESET_VAL 0x1
#define IAXXX_AO_OCD_DMX_DRESET_POS 4
#define IAXXX_AO_OCD_DMX_DRESET_SIZE 1
#define IAXXX_AO_OCD_DMX_DRESET_DECL 4

/*
 * Setting this bit to '0' will:
 *   remove the DReset for PD8 (De-asserts the reset to debug components
 * present in PD8)
 */
#define IAXXX_AO_OCD_PD8_DRESET_MASK 0x00000020
#define IAXXX_AO_OCD_PD8_DRESET_RESET_VAL 0x1
#define IAXXX_AO_OCD_PD8_DRESET_POS 5
#define IAXXX_AO_OCD_PD8_DRESET_SIZE 1
#define IAXXX_AO_OCD_PD8_DRESET_DECL 5

/*
 * Setting this bit to '0' will:
 *   remove the TRest for TPIU
 */
#define IAXXX_AO_OCD_TPIU_TRESET_MASK 0x00000040
#define IAXXX_AO_OCD_TPIU_TRESET_RESET_VAL 0x1
#define IAXXX_AO_OCD_TPIU_TRESET_POS 6
#define IAXXX_AO_OCD_TPIU_TRESET_SIZE 1
#define IAXXX_AO_OCD_TPIU_TRESET_DECL 6

/*
 * Setting this bit to '1' will:
 *   force BOSS to enable OCD and enter Stopped state at processor reset
 *   1) For this bit to take affect, BOSS_DRESET must de-asserted at least 4
 * SSP clock cycles prior to deassertion of PWR_DOMAIN_SOFT_RST,
 * PD1_SOFT_RST.
 *   2) BOSS_OCDHALT_ON_RESET must asserted at least 2 SSP clock cycles prior
 * to deassertion of PWR_DOMAIN_SOFT_RST, PD1_SOFT_RST.
 *   Please refer to Tensilica Debug guid for more details.
 */
#define IAXXX_AO_OCD_BOSS_OCDHALT_ON_RESET_MASK 0x00000100
#define IAXXX_AO_OCD_BOSS_OCDHALT_ON_RESET_RESET_VAL 0x0
#define IAXXX_AO_OCD_BOSS_OCDHALT_ON_RESET_POS 8
#define IAXXX_AO_OCD_BOSS_OCDHALT_ON_RESET_SIZE 1
#define IAXXX_AO_OCD_BOSS_OCDHALT_ON_RESET_DECL 8

/*
 * Setting this bit to '1' will:
 *   force SSP to enable OCD and enter Stopped state at processor reset
 *   1) For this bit to take affect, SSP_DRESET must de-asserted at least 4
 * SSP clock cycles prior to deassertion of PWR_DOMAIN_SOFT_RST,
 * PD2_SOFT_RST.
 *   2) SSP_OCDHALT_ON_RESET must asserted at least 2 SSP clock cycles prior
 * to deassertion of PWR_DOMAIN_SOFT_RST, PD2_SOFT_RST.
 *   Please refer to Tensilica Debug guid for more details.
 */
#define IAXXX_AO_OCD_SSP_OCDHALT_ON_RESET_MASK 0x00000200
#define IAXXX_AO_OCD_SSP_OCDHALT_ON_RESET_RESET_VAL 0x0
#define IAXXX_AO_OCD_SSP_OCDHALT_ON_RESET_POS 9
#define IAXXX_AO_OCD_SSP_OCDHALT_ON_RESET_SIZE 1
#define IAXXX_AO_OCD_SSP_OCDHALT_ON_RESET_DECL 9

/*
 * Setting this bit to '1' will Enable debugging of CM4
 * Without setting this bit, CM4 can't be debugged in invasive debug mode
 * (this bit controls DBGEN of CM4)
 * Please note that non-invasive debug is always enabled (NIDEN is tied to
 * 1'b1)
 */
#define IAXXX_AO_OCD_CM4_DBGEN_MASK 0x00000400
#define IAXXX_AO_OCD_CM4_DBGEN_RESET_VAL 0x0
#define IAXXX_AO_OCD_CM4_DBGEN_POS 10
#define IAXXX_AO_OCD_CM4_DBGEN_SIZE 1
#define IAXXX_AO_OCD_CM4_DBGEN_DECL 10

/*
 * Setting this bit to '1' will:
 *   force HMD to enable OCD and enter Stopped state at processor reset
 *   1) For this bit to take affect, HMD_DRESET must de-asserted at least 4
 * HMD clock cycles prior to deassertion of PWR_DOMAIN_SOFT_RST,
 * PD4_SOFT_RST.
 *   2) HMD_OCDHALT_ON_RESET must asserted at least 2 HMD clock cycles prior
 * to deassertion of PWR_DOMAIN_SOFT_RST, PD4_SOFT_RST.
 *   Please refer to Tensilica Debug guid for more details.
 */
#define IAXXX_AO_OCD_HMD_OCDHALT_ON_RESET_MASK 0x00000800
#define IAXXX_AO_OCD_HMD_OCDHALT_ON_RESET_RESET_VAL 0x0
#define IAXXX_AO_OCD_HMD_OCDHALT_ON_RESET_POS 11
#define IAXXX_AO_OCD_HMD_OCDHALT_ON_RESET_SIZE 1
#define IAXXX_AO_OCD_HMD_OCDHALT_ON_RESET_DECL 11

/*
 * Setting this bit to '1' will:
 *   force DMX to enable OCD and enter Stopped state at processor reset
 *   1) For this bit to take affect, DMX_DRESET must de-asserted at least 4
 * DMX clock cycles prior to deassertion of PWR_DOMAIN_SOFT_RST,
 * PD5_SOFT_RST.
 *   2) DMX_OCDHALT_ON_RESET must asserted at least 2 DMX clock cycles prior
 * to deassertion of PWR_DOMAIN_SOFT_RST, PD5_SOFT_RST.
 *   Please refer to Tensilica Debug guid for more details.
 */
#define IAXXX_AO_OCD_DMX_OCDHALT_ON_RESET_MASK 0x00001000
#define IAXXX_AO_OCD_DMX_OCDHALT_ON_RESET_RESET_VAL 0x0
#define IAXXX_AO_OCD_DMX_OCDHALT_ON_RESET_POS 12
#define IAXXX_AO_OCD_DMX_OCDHALT_ON_RESET_SIZE 1
#define IAXXX_AO_OCD_DMX_OCDHALT_ON_RESET_DECL 12

/*
 * Setting this bit to '1' will Enables clock for BOSS TRAX and debug.
 */
#define IAXXX_AO_OCD_BOSS_TRAX_CGEN_MASK 0x00002000
#define IAXXX_AO_OCD_BOSS_TRAX_CGEN_RESET_VAL 0x1
#define IAXXX_AO_OCD_BOSS_TRAX_CGEN_POS 13
#define IAXXX_AO_OCD_BOSS_TRAX_CGEN_SIZE 1
#define IAXXX_AO_OCD_BOSS_TRAX_CGEN_DECL 13

/*
 * Setting this bit to '1' will Enables clock for SSP TRAX and debug.
 */
#define IAXXX_AO_OCD_SSP_TRAX_CGEN_MASK 0x00004000
#define IAXXX_AO_OCD_SSP_TRAX_CGEN_RESET_VAL 0x0
#define IAXXX_AO_OCD_SSP_TRAX_CGEN_POS 14
#define IAXXX_AO_OCD_SSP_TRAX_CGEN_SIZE 1
#define IAXXX_AO_OCD_SSP_TRAX_CGEN_DECL 14

/*
 * Setting this bit to '1' will Enables clock for HMD TRAX and debug.
 */
#define IAXXX_AO_OCD_HMD_TRAX_CGEN_MASK 0x00008000
#define IAXXX_AO_OCD_HMD_TRAX_CGEN_RESET_VAL 0x0
#define IAXXX_AO_OCD_HMD_TRAX_CGEN_POS 15
#define IAXXX_AO_OCD_HMD_TRAX_CGEN_SIZE 1
#define IAXXX_AO_OCD_HMD_TRAX_CGEN_DECL 15

/*
 * Setting this bit to '1' will Enables clock for DMX TRAX and debug.
 */
#define IAXXX_AO_OCD_DMX_TRAX_CGEN_MASK 0x00010000
#define IAXXX_AO_OCD_DMX_TRAX_CGEN_RESET_VAL 0x0
#define IAXXX_AO_OCD_DMX_TRAX_CGEN_POS 16
#define IAXXX_AO_OCD_DMX_TRAX_CGEN_SIZE 1
#define IAXXX_AO_OCD_DMX_TRAX_CGEN_DECL 16

/*
 * Setting this bit to '0' will:
 *   remove the Power on Reset for SWJDP (DAP)
 */
#define IAXXX_AO_OCD_SWJDP_PORESET_MASK 0x00020000
#define IAXXX_AO_OCD_SWJDP_PORESET_RESET_VAL 0x1
#define IAXXX_AO_OCD_SWJDP_PORESET_POS 17
#define IAXXX_AO_OCD_SWJDP_PORESET_SIZE 1
#define IAXXX_AO_OCD_SWJDP_PORESET_DECL 17

/*
 * Setting this bit to '1' makes all DRESETs SW controllable across various
 * power cycles.
 * If not set, PD1/PD3 DRESET would be HW controlled as part of HW
 * power-down/power-up sequence
 */
#define IAXXX_AO_OCD_RETAIN_DEBUG_SESSION_MASK 0x00200000
#define IAXXX_AO_OCD_RETAIN_DEBUG_SESSION_RESET_VAL 0x0
#define IAXXX_AO_OCD_RETAIN_DEBUG_SESSION_POS 21
#define IAXXX_AO_OCD_RETAIN_DEBUG_SESSION_SIZE 1
#define IAXXX_AO_OCD_RETAIN_DEBUG_SESSION_DECL 21

/*** AO_SCTRL_SEQ_CONTROL (0x50010094) ***/
/*
 * This register is used to bypass counters in the power up or power down
 * sequence.
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_ADDR (0x50010094)
#define IAXXX_AO_SCTRL_SEQ_CONTROL_MASK_VAL 0x030f007f
#define IAXXX_AO_SCTRL_SEQ_CONTROL_RMASK_VAL 0x030f007f
#define IAXXX_AO_SCTRL_SEQ_CONTROL_WMASK_VAL 0x030f007f
#define IAXXX_AO_SCTRL_SEQ_CONTROL_RESET_VAL 0x00000000

/*
 * Setting this bit to '1' will:
 *   skip the mem power not good counter (by setting the count for it to 1).
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_MEM_PWR_NOT_GOOD_MASK 0x00000001
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_MEM_PWR_NOT_GOOD_RESET_VAL 0x0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_MEM_PWR_NOT_GOOD_POS 0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_MEM_PWR_NOT_GOOD_SIZE 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_MEM_PWR_NOT_GOOD_DECL 0

/*
 * Setting this bit to '1' will:
 *   skip the chip power good counter (by setting the count for it to 1).
 * This counter is a remnant of days where we had an LDO and uLDO which
 * needed make before break.  Might make sense to set for shorter boot times.
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_CHIP_PWR_NOT_GOOD_MASK 0x00000002
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_CHIP_PWR_NOT_GOOD_RESET_VAL 0x0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_CHIP_PWR_NOT_GOOD_POS 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_CHIP_PWR_NOT_GOOD_SIZE 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_CHIP_PWR_NOT_GOOD_DECL 1

/*
 * Setting this bit to '1' will:
 *   skip the pll warmup counter (by setting the count for it to 1).  If no
 * pll is used, it might make sense to set this for shorter boot times.
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PLL_WARMUP_MASK 0x00000004
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PLL_WARMUP_RESET_VAL 0x0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PLL_WARMUP_POS 2
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PLL_WARMUP_SIZE 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PLL_WARMUP_DECL 2

/*
 * Setting this bit to '1' will:
 *   skip the pll lock counter (by setting the count for it to 1).  If no pll
 * is used, it might make sense to set this for shorter boot times.
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PLL_LOCK_MASK 0x00000008
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PLL_LOCK_RESET_VAL 0x0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PLL_LOCK_POS 3
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PLL_LOCK_SIZE 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PLL_LOCK_DECL 3

/*
 * Setting this bit to '1' will:
 *   skip the isolation turn off counter (by setting the count for it to 1).
 *
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ISO_TURN_OFF_MASK 0x00000010
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ISO_TURN_OFF_RESET_VAL 0x0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ISO_TURN_OFF_POS 4
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ISO_TURN_OFF_SIZE 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ISO_TURN_OFF_DECL 4

/*
 * Setting this bit to '1' will:
 *   skip the pd sys reset counter (by setting the count for it to 1).
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PD_SYS_RESET_MASK 0x00000020
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PD_SYS_RESET_RESET_VAL 0x0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PD_SYS_RESET_POS 5
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PD_SYS_RESET_SIZE 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_PD_SYS_RESET_DECL 5

/*
 * Setting this bit to '1' will:
 *   skip the xtensa reset counter (by setting the count for it to 1).
 *
 *
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_XTENSA_RESET_MASK 0x00000040
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_XTENSA_RESET_RESET_VAL 0x0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_XTENSA_RESET_POS 6
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_XTENSA_RESET_SIZE 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_XTENSA_RESET_DECL 6

/*
 * Setting this bit to '1' will:
 *   skip the xtensa stall counter (by setting the count for it to 1).
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_XTENSA_STALL_MASK 0x00010000
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_XTENSA_STALL_RESET_VAL 0x0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_XTENSA_STALL_POS 16
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_XTENSA_STALL_SIZE 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_XTENSA_STALL_DECL 16

/*
 * Setting this bit to '1' will:
 *   skip the iso turn on counter (by setting the count for it to 1).
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ISO_TURN_ON_MASK 0x00020000
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ISO_TURN_ON_RESET_VAL 0x0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ISO_TURN_ON_POS 17
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ISO_TURN_ON_SIZE 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ISO_TURN_ON_DECL 17

/*
 * Setting this bit to '1' will:
 *   skip the memory retention counter (by setting the count for it to 1).
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_MEM_RET_MASK 0x00040000
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_MEM_RET_RESET_VAL 0x0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_MEM_RET_POS 18
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_MEM_RET_SIZE 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_MEM_RET_DECL 18

/*
 * Setting this bit to '1' will:
 *   skip the uLDO enable counter (by setting the count for it to 1).  This
 * counter is a remnant of days where we had an LDO and uLDO which needed
 * make before break.  Might make sense to set for shorter boot times.
 *
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ULDO_EN_MASK 0x00080000
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ULDO_EN_RESET_VAL 0x0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ULDO_EN_POS 19
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ULDO_EN_SIZE 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_SKIP_ULDO_EN_DECL 19

/*
 * Setting this bit to '1' will allow chip to wake up from a PCTRL interrupt
 * that was enabled for BOSS.
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_PCTRL_BOSS_WAKEUP_EN_MASK 0x01000000
#define IAXXX_AO_SCTRL_SEQ_CONTROL_PCTRL_BOSS_WAKEUP_EN_RESET_VAL 0x0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_PCTRL_BOSS_WAKEUP_EN_POS 24
#define IAXXX_AO_SCTRL_SEQ_CONTROL_PCTRL_BOSS_WAKEUP_EN_SIZE 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_PCTRL_BOSS_WAKEUP_EN_DECL 24

/*
 * Setting this bit to '1' will allow chip to wake up from a PCTRL interrupt
 * that was enabled for CM4. If both PCTRL_BOSS_WAKEUP_EN and
 * PCTRL_CM4_WAKEUP_EN are enabled then chip will wake up from either
 * interrupts.
 */
#define IAXXX_AO_SCTRL_SEQ_CONTROL_PCTRL_CM4_WAKEUP_EN_MASK 0x02000000
#define IAXXX_AO_SCTRL_SEQ_CONTROL_PCTRL_CM4_WAKEUP_EN_RESET_VAL 0x0
#define IAXXX_AO_SCTRL_SEQ_CONTROL_PCTRL_CM4_WAKEUP_EN_POS 25
#define IAXXX_AO_SCTRL_SEQ_CONTROL_PCTRL_CM4_WAKEUP_EN_SIZE 1
#define IAXXX_AO_SCTRL_SEQ_CONTROL_PCTRL_CM4_WAKEUP_EN_DECL 25

/* Number of registers in the module */
#define IAXXX_AO_REG_NUM 38

#endif /* __IAXXX_REGISTER_DEFS_AO_H__ */
