/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
#define BUTTON_STATE_SIZE 6
extern uint8_t button_state[];
// S20 is not used
#define DIRECT_SEND_BUTTON_COUNT 12
extern GPIO_TypeDef *direct_send_button_ports[];
extern uint16_t direct_send_button_pins[];
#define MODE_BUTTON_COUNT 8
extern GPIO_TypeDef *mode_button_ports[];
extern GPIO_TypeDef *mode_led_ports[];
extern uint16_t mode_button_pins[];
extern GPIO_TypeDef *mode_led_ports[];
extern uint16_t mode_led_pins[];

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define S5_Pin GPIO_PIN_0
#define S5_GPIO_Port GPIOF
#define S6_Pin GPIO_PIN_0
#define S6_GPIO_Port GPIOC
#define S7_Pin GPIO_PIN_1
#define S7_GPIO_Port GPIOC
#define S8_Pin GPIO_PIN_2
#define S8_GPIO_Port GPIOC
#define S9_Pin GPIO_PIN_3
#define S9_GPIO_Port GPIOC
#define S10_Pin GPIO_PIN_0
#define S10_GPIO_Port GPIOA
#define L8_Pin GPIO_PIN_1
#define L8_GPIO_Port GPIOA
#define S18_Pin GPIO_PIN_2
#define S18_GPIO_Port GPIOA
#define L4_Pin GPIO_PIN_3
#define L4_GPIO_Port GPIOA
#define S14_Pin GPIO_PIN_4
#define S14_GPIO_Port GPIOA
#define L7_Pin GPIO_PIN_5
#define L7_GPIO_Port GPIOA
#define S17_Pin GPIO_PIN_6
#define S17_GPIO_Port GPIOA
#define S13_Pin GPIO_PIN_7
#define S13_GPIO_Port GPIOA
#define L3_Pin GPIO_PIN_4
#define L3_GPIO_Port GPIOC
#define L6_Pin GPIO_PIN_5
#define L6_GPIO_Port GPIOC
#define S16_Pin GPIO_PIN_0
#define S16_GPIO_Port GPIOB
#define S12_Pin GPIO_PIN_1
#define S12_GPIO_Port GPIOB
#define L2_Pin GPIO_PIN_2
#define L2_GPIO_Port GPIOB
#define L5_Pin GPIO_PIN_10
#define L5_GPIO_Port GPIOB
#define S15_Pin GPIO_PIN_11
#define S15_GPIO_Port GPIOB
#define S11_Pin GPIO_PIN_12
#define S11_GPIO_Port GPIOB
#define L1_Pin GPIO_PIN_13
#define L1_GPIO_Port GPIOB
#define E1B_Pin GPIO_PIN_7
#define E1B_GPIO_Port GPIOC
#define E1S_Pin GPIO_PIN_9
#define E1S_GPIO_Port GPIOC
#define E2A_Pin GPIO_PIN_8
#define E2A_GPIO_Port GPIOA
#define E2B_Pin GPIO_PIN_9
#define E2B_GPIO_Port GPIOA
#define S20_Pin GPIO_PIN_11
#define S20_GPIO_Port GPIOC
#define S19_Pin GPIO_PIN_12
#define S19_GPIO_Port GPIOC
#define E1A_Pin GPIO_PIN_4
#define E1A_GPIO_Port GPIOB
#define S1_Pin GPIO_PIN_5
#define S1_GPIO_Port GPIOB
#define S2_Pin GPIO_PIN_6
#define S2_GPIO_Port GPIOB
#define S3_Pin GPIO_PIN_7
#define S3_GPIO_Port GPIOB
#define S4_Pin GPIO_PIN_8
#define S4_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
#define MODE_COUNT 8

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
