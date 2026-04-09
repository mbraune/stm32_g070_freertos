/*
 * debug.c
 *
 *  Created on: 24.03.2026
 *      Author: marti
 */


#include "debug.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

static UART_HandleTypeDef *dbg_uart = NULL;

void debug_init(UART_HandleTypeDef *huart)
{
    dbg_uart = huart;
}

void debug_printf(const char *fmt, ...)
{
    char buffer[128];
    va_list args;

    va_start(args, fmt);
    vsnprintf(buffer, sizeof(buffer), fmt, args);
    va_end(args);

    HAL_UART_Transmit(dbg_uart, (uint8_t*)buffer, strlen(buffer), HAL_MAX_DELAY);
}
