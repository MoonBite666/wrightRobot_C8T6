/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdbool.h>
#include "motor.h"
#include "pid.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define LED1_Pin GPIO_PIN_0
#define LED1_GPIO_Port GPIOB
#define LED2_Pin GPIO_PIN_1
#define LED2_GPIO_Port GPIOB
#define fronted_TRC2_Pin GPIO_PIN_10
#define fronted_TRC2_GPIO_Port GPIOB
#define fronted_TRC1_Pin GPIO_PIN_11
#define fronted_TRC1_GPIO_Port GPIOB
#define motor2_CTL2_Pin GPIO_PIN_12
#define motor2_CTL2_GPIO_Port GPIOB
#define motor2_CTL1_Pin GPIO_PIN_13
#define motor2_CTL1_GPIO_Port GPIOB
#define motor1_CTL2_Pin GPIO_PIN_14
#define motor1_CTL2_GPIO_Port GPIOB
#define motor1_CTL1_Pin GPIO_PIN_15
#define motor1_CTL1_GPIO_Port GPIOB
#define motor1_PWM1_Pin GPIO_PIN_8
#define motor1_PWM1_GPIO_Port GPIOA
#define motor2_PWM1_Pin GPIO_PIN_10
#define motor2_PWM1_GPIO_Port GPIOA
#define Buzzer_Pin GPIO_PIN_15
#define Buzzer_GPIO_Port GPIOA
#define D80NK2_Pin GPIO_PIN_8
#define D80NK2_GPIO_Port GPIOB
#define D80NK1_Pin GPIO_PIN_9
#define D80NK1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
