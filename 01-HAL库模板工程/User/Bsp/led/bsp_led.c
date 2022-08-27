/**
  ******************************************************************************
  * @file    main.c
  * @author  xxx
  * @version V1.0
  * @date    2022-8-xx
  * @brief   led驱动文件
  ******************************************************************************
  * @attention
  *
  * 实验平台:xx STM32 F407 开发板  
  * 论坛    :http://www.xx.cn
  * 淘宝    :http://xxx.com
  *
  ******************************************************************************
  */
	
#include "./led/bsp_led.h"  

/**
  * @brief  初始化LED
  * @param  无
  * @retval 无
  */
void led_Init(void)
{
	/* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

}	

