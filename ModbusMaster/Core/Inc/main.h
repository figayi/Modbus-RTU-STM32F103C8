/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#define DO1_Pin GPIO_PIN_3
#define DO1_GPIO_Port GPIOA
#define DO2_Pin GPIO_PIN_4
#define DO2_GPIO_Port GPIOA
#define ReadEnable_Pin GPIO_PIN_7
#define ReadEnable_GPIO_Port GPIOA
#define WriteEnable_Pin GPIO_PIN_0
#define WriteEnable_GPIO_Port GPIOB
#define PotMtr_Pin GPIO_PIN_1
#define PotMtr_GPIO_Port GPIOB
#define SENT_Pin GPIO_PIN_11
#define SENT_GPIO_Port GPIOA
#define SENT_EXTI_IRQn EXTI15_10_IRQn
#define RE_Pin_Pin GPIO_PIN_3
#define RE_Pin_GPIO_Port GPIOB
#define DE_Pin_Pin GPIO_PIN_4
#define DE_Pin_GPIO_Port GPIOB
#define DI1_Pin GPIO_PIN_5
#define DI1_GPIO_Port GPIOB
#define DI2_Pin GPIO_PIN_6
#define DI2_GPIO_Port GPIOB
#define DI3_Pin GPIO_PIN_7
#define DI3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
