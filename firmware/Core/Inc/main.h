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
#define ADXL_CS_Pin GPIO_PIN_0
#define ADXL_CS_GPIO_Port GPIOF
#define ADXL_SCK_Pin GPIO_PIN_1
#define ADXL_SCK_GPIO_Port GPIOF
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
#define ADXL_MISO_Pin GPIO_PIN_14
#define ADXL_MISO_GPIO_Port GPIOB
#define ADXL_MOSI_Pin GPIO_PIN_15
#define ADXL_MOSI_GPIO_Port GPIOB
#define EINK_CS_Pin GPIO_PIN_15
#define EINK_CS_GPIO_Port GPIOA
#define EINK_SCK_Pin GPIO_PIN_3
#define EINK_SCK_GPIO_Port GPIOB
#define EINK_MISO_Pin GPIO_PIN_4
#define EINK_MISO_GPIO_Port GPIOB
#define EINK_MOSI_Pin GPIO_PIN_5
#define EINK_MOSI_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
