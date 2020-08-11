#ifndef __BSP_GENERAL_TIM_H
#define	__BSP_GENERAL_TIM_H

#include "stm32f1xx.h"


/*�궨��*/

#define GENERAL_TIM                        	TIM2
#define GENERAL_TIM_GPIO_AF                 GPIO_AF1_TIM2
#define GENERAL_TIM_CLK_ENABLE()  					__HAL_RCC_TIM2_CLK_ENABLE()


/*PWM����*/
#define GENERAL_TIM_CH1_GPIO_PORT           GPIOB
#define GENERAL_TIM_CH1_PIN                 GPIO_PIN_5

#define GENERAL_TIM_CH2_GPIO_PORT           GPIOB
#define GENERAL_TIM_CH2_PIN                 GPIO_PIN_0

extern void TIMx_Configuration(void);
extern void TIM2_SetPWM_pulse(int channel,int compare);

#endif
