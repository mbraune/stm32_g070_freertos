/*
 * debug.h
 *
 *  Created on: 24.03.2026
 *      Author: marti
 */

#ifndef INC_DEBUG_H_
#define INC_DEBUG_H_

#include "main.h"
#include <stdarg.h>

void debug_init(UART_HandleTypeDef *huart);
void debug_printf(const char *fmt, ...);

#endif /* INC_DEBUG_H_ */
