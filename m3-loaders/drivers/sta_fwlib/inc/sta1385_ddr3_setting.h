/**
 * @file sta_ddr_sta1295_setting.h
 * @brief This is the header file for DDR
 * Copyright (C) ST-Microelectronics SA 2015
 * @author: APG-MID team
 */

#include "sta_ddr_sta1385_timing.h"

#ifndef __STA_DDR_SETTING_H__
#define __STA_DDR_SETTING_H__

enum sta_ddr_setting_idx {
	/*  UMCTL2 */
	MSTR_IDX,
	MRCTRL0_IDX,
	MRCTRL1_IDX,
	INIT0_IDX,
	INIT1_IDX,
	INIT3_IDX,
	INIT4_IDX,
	INIT5_IDX,
	DRAMTMG0_IDX,
	DRAMTMG1_IDX,
	DRAMTMG2_IDX,
	DRAMTMG3_IDX,
	DRAMTMG4_IDX,
	DRAMTMG5_IDX,
	DRAMTMG8_IDX,
	ZQCTL0_IDX,
	ZQCTL1_IDX,
	ZQCTL2_IDX,
	DFITMG0_IDX,
	DFITMG1_IDX,
	DFILPCFG0_IDX,
	DFIUPD0_IDX,
	DFIUPD1_IDX,
	DFIUPD2_IDX,
	DFIMISC_IDX,
	ODTCFG_IDX,
	ODTMAP_IDX,
	SCHED_IDX,
	SCHED1_IDX,
	PERFHPR1_IDX,
	PERFLPR1_IDX,
	PERFWR1_IDX,
	DBG0_IDX,
	DBG1_IDX,
	DBGCMD_IDX,
	SWCTL_IDX,
	POISONCFG_IDX,
	PCCFG_IDX,
	PCFGR_0_IDX,
	PCFGW_0_IDX,
	PCFGQOS0_0_IDX,
	PCFGQOS1_0_IDX,
	PCFGWQOS0_0_IDX,
	PCFGWQOS1_0_IDX,
	PCFGR_1_IDX,
	PCFGW_1_IDX,
	PCFGQOS0_1_IDX,
	PCFGQOS1_1_IDX,
	PCFGWQOS0_1_IDX,
	PCFGWQOS1_1_IDX,
	PCFGR_2_IDX,
	PCFGW_2_IDX,
	PCFGQOS0_2_IDX,
	PCFGQOS1_2_IDX,
	PCFGWQOS0_2_IDX,
	PCFGWQOS1_2_IDX,
	PCFGR_3_IDX,
	PCFGW_3_IDX,
	PCFGQOS0_3_IDX,
	PCFGQOS1_3_IDX,
	PCFGWQOS0_3_IDX,
	PCFGWQOS1_3_IDX,
	PWRCTL_IDX,
	PWRTMG_IDX,
	HWLPCTL_IDX,
	RFSHCTL0_IDX,
	RFSHTMG_IDX,
	CRCPARSTAT_IDX,

	/*  PUBL */
	PUBL_PGCR_IDX,
	PUBL_DXCCR_IDX,
	PUBL_DCR_IDX,
	PUBL_MR0_IDX,
	PUBL_MR1_IDX,
	PUBL_MR2_IDX,
	PUBL_MR3_IDX,
	PUBL_DTPR0_IDX,
	PUBL_DTPR1_IDX,
	PUBL_DTPR2_IDX,
	PUBL_PTR0_IDX,
	PUBL_PTR1_IDX,
	PUBL_PTR2_IDX,
	PUBL_DSGCR_IDX,
	PUBL_ODTCR_IDX,
	PUBL_DX0GCR_IDX,
	PUBL_DX1GCR_IDX,
	PUBL_DX2GCR_IDX,
	PUBL_DX3GCR_IDX,

};

#endif /* __STA_DDR_SETTING_H__ */
