/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    octospi.h
  * @brief   This file contains all the function prototypes for
  *          the octospi.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#ifndef __OCTOSPI_H__
#define __OCTOSPI_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern OSPI_HandleTypeDef hospi1;

extern OSPI_HandleTypeDef hospi2;

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_OCTOSPI1_Init(void);
void MX_OCTOSPI2_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __OCTOSPI_H__ */

