/**
  ******************************************************************************
  * @file    main.c
  * @author  xxx
  * @version V1.0
  * @date    2022-8-xx
  * @brief   led�����ļ�
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:xx STM32 F407 ������  
  * ��̳    :http://www.xx.cn
  * �Ա�    :http://xxx.com
  *
  ******************************************************************************
  */
	
#include "./led/bsp_led.h"  

/**
  * @brief  ��ʼ��LED
  * @param  ��
  * @retval ��
  */
void led_Init(void)
{
	/* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

}	

