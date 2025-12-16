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
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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
#define BUTTON_2_Pin GPIO_PIN_15
#define BUTTON_2_GPIO_Port GPIOC
#define ADXL_CS_Pin GPIO_PIN_0
#define ADXL_CS_GPIO_Port GPIOF
#define ADXL_EINK_SCK_Pin GPIO_PIN_1
#define ADXL_EINK_SCK_GPIO_Port GPIOF
#define POT_2_Pin GPIO_PIN_0
#define POT_2_GPIO_Port GPIOA
#define POT_1_Pin GPIO_PIN_1
#define POT_1_GPIO_Port GPIOA
#define BUTTON_1_Pin GPIO_PIN_2
#define BUTTON_1_GPIO_Port GPIOA
#define WIFI_CS_Pin GPIO_PIN_4
#define WIFI_CS_GPIO_Port GPIOA
#define WIFI_SCK_Pin GPIO_PIN_5
#define WIFI_SCK_GPIO_Port GPIOA
#define WIFI_MISO_Pin GPIO_PIN_6
#define WIFI_MISO_GPIO_Port GPIOA
#define WIFI_MOSI_Pin GPIO_PIN_7
#define WIFI_MOSI_GPIO_Port GPIOA
#define WIFI_RESET_Pin GPIO_PIN_0
#define WIFI_RESET_GPIO_Port GPIOB
#define WIFI_BUSY_Pin GPIO_PIN_1
#define WIFI_BUSY_GPIO_Port GPIOB
#define EINK_RST_Pin GPIO_PIN_8
#define EINK_RST_GPIO_Port GPIOA
#define ADXL_INT1_Pin GPIO_PIN_9
#define ADXL_INT1_GPIO_Port GPIOA
#define ADXL_EINK_MISO_Pin GPIO_PIN_10
#define ADXL_EINK_MISO_GPIO_Port GPIOA
#define ADXL_EINK_MOSI_Pin GPIO_PIN_11
#define ADXL_EINK_MOSI_GPIO_Port GPIOA
#define ADXL_INT2_Pin GPIO_PIN_12
#define ADXL_INT2_GPIO_Port GPIOA
#define EINK_CS_Pin GPIO_PIN_5
#define EINK_CS_GPIO_Port GPIOB
#define EINK_BUSY_Pin GPIO_PIN_6
#define EINK_BUSY_GPIO_Port GPIOB
#define EINK_D_C_Pin GPIO_PIN_7
#define EINK_D_C_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
