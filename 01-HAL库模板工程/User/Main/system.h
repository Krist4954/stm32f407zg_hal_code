#ifndef __SYSTEM_H__
#define __SYSTEM_H__

#include "stm32f4xx_hal.h"
#include "./led/bsp_led.h"

void sys_Init(void);//系统初始化
void Error_Handler(char *file, uint32_t line);

#endif



