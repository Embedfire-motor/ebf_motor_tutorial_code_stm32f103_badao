#ifndef __ADVANCE_TIM_H
#define	__ADVANCE_TIM_H

#include "stm32f1xx.h"


/* ͨ�ö�ʱ�� */
#define GENERAL_TIM                       TIM4
#define GENERAL_TIM_CLK_ENABLE()          __HAL_RCC_TIM4_CLK_ENABLE()

/* ͨ�ö�ʱ��PWM��� */
/* PWM������� */
#define GENERAL_OCPWM_PIN                 GPIO_PIN_14              
#define GENERAL_OCPWM_GPIO_PORT           GPIOD                      
#define GENERAL_OCPWM_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOD_CLK_ENABLE()

/* �߼����ƶ�ʱ�� */
#define ADVANCE_TIM                       TIM1
#define ADVANCE_TIM_CLK_ENABLE()          __HAL_RCC_TIM1_CLK_ENABLE()

/* ����/�Ƚ��ж� */
#define ADVANCE_TIM_IRQn                  TIM1_CC_IRQn
#define ADVANCE_TIM_IRQHandler            TIM1_CC_IRQHandler
/* �߼����ƶ�ʱ��PWM���벶�� */
/* PWM���벶������ */
#define ADVANCE_ICPWM_PIN                 GPIO_PIN_9              
#define ADVANCE_ICPWM_GPIO_PORT           GPIOE                     
#define ADVANCE_ICPWM_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOE_CLK_ENABLE()
#define ADVANCE_IC1PWM_CHANNEL            TIM_CHANNEL_1
#define ADVANCE_IC2PWM_CHANNEL            TIM_CHANNEL_2

extern TIM_HandleTypeDef  TIM_PWMOUTPUT_Handle;
extern TIM_HandleTypeDef  TIM_PWMINPUT_Handle;

void TIMx_Configuration(void);
#endif /* __ADVANCE_TIM_H */


