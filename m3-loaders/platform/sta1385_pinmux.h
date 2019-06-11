/**
 * @file sta1385_pinmux.h
 * @brief This file provides all the STA1385 specific pinmux declarations
 *
 * Copyright (C) ST-Microelectronics SA 2015
 * @author: APG-MID team
 */
#include <errno.h>
#include <string.h>
#include "trace.h"
#include "utils.h"

#include "sta_gpio.h"
#include "sta_pinmux.h"

DECLARE_STA1385_GPIOMUX(uart0_mux) = {
	{ M3_GPIO(11), M3_GPIO(12), GPIO_MODE_ALT_FUNCTION_A },
};

DECLARE_STA1385_GPIOMUX(uart1_mux) = {
	{ A7_GPIO(34), A7_GPIO(35), GPIO_MODE_ALT_FUNCTION_B },
};

DECLARE_STA1385_GPIOMUX(uart2_mux) = {
	{ A7_GPIO(14), A7_GPIO(15), GPIO_MODE_ALT_FUNCTION_A },
};

DECLARE_STA1385_GPIOMUX(uart3_mux) = {
	{ A7_GPIO(20), A7_GPIO(21), GPIO_MODE_ALT_FUNCTION_B },
};

/* EMMC on MMC0 use GPIO BOOT IO */
DECLARE_STA1385_GPIOMUX(emmc0_mux) = {
	{ A7_GPIO(73), A7_GPIO(74), GPIO_MODE_ALT_FUNCTION_C }, /* CMD CLK */
	{ A7_GPIO(76), A7_GPIO(84), GPIO_MODE_ALT_FUNCTION_C }, /* DAT0-7 PWR */
	{ A7_GPIO(87), A7_GPIO(87), GPIO_MODE_ALT_FUNCTION_C }, /* FBCLK */
};

DECLARE_STA1385_GPIOMUX(sdmmc0_mux) = {
	{ A7_GPIO(22), A7_GPIO(29), GPIO_MODE_ALT_FUNCTION_A },
};

DECLARE_STA1385_GPIOMUX(sdmmc1_mux) = {
	{ A7_GPIO(38), A7_GPIO(48), GPIO_MODE_ALT_FUNCTION_A },
};

DECLARE_STA1385_GPIOMUX(sqi0_mux) = {
	{ A7_GPIO(73), A7_GPIO(75), GPIO_MODE_ALT_FUNCTION_B },
	{ A7_GPIO(78), A7_GPIO(81), GPIO_MODE_ALT_FUNCTION_B },
};

DECLARE_STA1385_GPIOMUX(i2c0_mux) = {
	{ M3_GPIO(0), M3_GPIO(1), GPIO_MODE_ALT_FUNCTION_A },
};

DECLARE_STA1385_GPIOMUX(i2c1_mux) = {
	{ S_GPIO(6), S_GPIO(7), GPIO_MODE_ALT_FUNCTION_A },
};

DECLARE_STA1385_GPIOMUX(i2c2_mux) = {
	{ A7_GPIO(18), A7_GPIO(19), GPIO_MODE_ALT_FUNCTION_A },
};

DECLARE_STA1385_GPIOMUX(nand_mux) = {
	{ A7_GPIO(73), A7_GPIO(87), GPIO_MODE_ALT_FUNCTION_A },
};

DECLARE_STA1385_GPIOMUX(nand16b_mux) = {
	{ A7_GPIO(49), A7_GPIO(50), GPIO_MODE_ALT_FUNCTION_C },
	{ A7_GPIO(108), A7_GPIO(113), GPIO_MODE_ALT_FUNCTION_C },
};

DECLARE_STA1385_GPIOMUX(modem_mux) = {
	{ AO_GPIO(3), AO_GPIO(3), GPIO_MODE_SOFTWARE },
	{ A7_GPIO(30), A7_GPIO(31), GPIO_MODE_SOFTWARE },
	{ A7_GPIO(34), A7_GPIO(34), GPIO_MODE_SOFTWARE },
};

DECLARE_STA1385_GPIOMUX(can_mux) = {
	{ M3_GPIO(8), M3_GPIO(9), GPIO_MODE_ALT_FUNCTION_A },
};

DECLARE_STA1385_GPIOMUX(spi1_mux) = {
	{ S_GPIO(10), S_GPIO(13), GPIO_MODE_ALT_FUNCTION_A },
};

DECLARE_STA1385_GPIOMUX(spi2_mux) = {
	{ A7_GPIO(18), A7_GPIO(21), GPIO_MODE_ALT_FUNCTION_A },
};

static const struct pinmux sta1385_pinmux[] = {
	STA1385_GPIOMUX(uart0_mux),
	STA1385_GPIOMUX(uart1_mux),
	STA1385_GPIOMUX(uart2_mux),
	STA1385_GPIOMUX(uart3_mux),
	STA1385_GPIOMUX(emmc0_mux),
	STA1385_GPIOMUX(sdmmc0_mux),
	STA1385_GPIOMUX(sdmmc1_mux),
	STA1385_GPIOMUX(sqi0_mux),
	STA1385_GPIOMUX(i2c0_mux),
	STA1385_GPIOMUX(i2c1_mux),
	STA1385_GPIOMUX(i2c2_mux),
	STA1385_GPIOMUX(nand_mux),
	STA1385_GPIOMUX(nand16b_mux),
	STA1385_GPIOMUX(modem_mux),
	/*STA1385_GPIOMUX(can_mux),*/
	STA1385_GPIOMUX(spi1_mux),
	STA1385_GPIOMUX(spi2_mux),
};
