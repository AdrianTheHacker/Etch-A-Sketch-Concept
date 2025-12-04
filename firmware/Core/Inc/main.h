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
#define SCREEN_SCL_Pin GPIO_PIN_2
#define SCREEN_SCL_GPIO_Port GPIOE
#define SCREEN_BUSY_Pin GPIO_PIN_3
#define SCREEN_BUSY_GPIO_Port GPIOE
#define SCREEN_CS_Pin GPIO_PIN_4
#define SCREEN_CS_GPIO_Port GPIOE
#define SCREEN_D_C_Pin GPIO_PIN_5
#define SCREEN_D_C_GPIO_Port GPIOE
#define SCREEN_SDA_Pin GPIO_PIN_6
#define SCREEN_SDA_GPIO_Port GPIOE
#define SCREEN_RST_Pin GPIO_PIN_13
#define SCREEN_RST_GPIO_Port GPIOC
#define ADXL_CS_Pin GPIO_PIN_12
#define ADXL_CS_GPIO_Port GPIOB
#define ADXL_SCL_Pin GPIO_PIN_13
#define ADXL_SCL_GPIO_Port GPIOB
#define ADXL_SDO_Pin GPIO_PIN_14
#define ADXL_SDO_GPIO_Port GPIOB
#define ADXL_SDI_Pin GPIO_PIN_15
#define ADXL_SDI_GPIO_Port GPIOB
#define ADXL_INT1_Pin GPIO_PIN_8
#define ADXL_INT1_GPIO_Port GPIOD
#define ADXL_INT2_Pin GPIO_PIN_9
#define ADXL_INT2_GPIO_Port GPIOD
#define BUTTON_1_Pin GPIO_PIN_10
#define BUTTON_1_GPIO_Port GPIOD
#define BUTTON_2_Pin GPIO_PIN_11
#define BUTTON_2_GPIO_Port GPIOD
#define POT_1_Pin GPIO_PIN_12
#define POT_1_GPIO_Port GPIOD
#define POT_2_Pin GPIO_PIN_13
#define POT_2_GPIO_Port GPIOD
#define WIFI_CS_Pin GPIO_PIN_15
#define WIFI_CS_GPIO_Port GPIOA
#define WIFI_SCK_Pin GPIO_PIN_10
#define WIFI_SCK_GPIO_Port GPIOC
#define WIFI_MISO_Pin GPIO_PIN_11
#define WIFI_MISO_GPIO_Port GPIOC
#define WIFI_MOSI_Pin GPIO_PIN_12
#define WIFI_MOSI_GPIO_Port GPIOC
#define WIFI_BUSY_Pin GPIO_PIN_5
#define WIFI_BUSY_GPIO_Port GPIOG
#define WIFI_RESET_Pin GPIO_PIN_6
#define WIFI_RESET_GPIO_Port GPIOG

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
