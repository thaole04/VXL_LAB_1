/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void clearAllClock() {
  HAL_GPIO_WritePin(ONE_GPIO_Port, ONE_Pin, SET);
  HAL_GPIO_WritePin(TWO_GPIO_Port, TWO_Pin, SET);
  HAL_GPIO_WritePin(THREE_GPIO_Port, THREE_Pin, SET);
  HAL_GPIO_WritePin(FOUR_GPIO_Port, FOUR_Pin, SET);
  HAL_GPIO_WritePin(FIVE_GPIO_Port, FIVE_Pin, SET);
  HAL_GPIO_WritePin(SIX_GPIO_Port, SIX_Pin, SET);
  HAL_GPIO_WritePin(SEVEN_GPIO_Port, SEVEN_Pin, SET);
  HAL_GPIO_WritePin(EIGHT_GPIO_Port, EIGHT_Pin, SET);
  HAL_GPIO_WritePin(NINE_GPIO_Port, NINE_Pin, SET);
  HAL_GPIO_WritePin(TEN_GPIO_Port, TEN_Pin, SET);
  HAL_GPIO_WritePin(ELEVEN_GPIO_Port, ELEVEN_Pin, SET);
  HAL_GPIO_WritePin(TWELVE_GPIO_Port, TWELVE_Pin, SET);
  return;
}
void setNumberOnClock(int num){
	  switch (num)
	  {
	  case 0:
		  HAL_GPIO_WritePin(TWELVE_GPIO_Port, TWELVE_Pin, RESET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(ONE_GPIO_Port, ONE_Pin, RESET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(TWO_GPIO_Port, TWO_Pin, RESET);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(THREE_GPIO_Port, THREE_Pin, RESET);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(FOUR_GPIO_Port, FOUR_Pin, RESET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(FIVE_GPIO_Port, FIVE_Pin, RESET);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(SIX_GPIO_Port, SIX_Pin, RESET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(SEVEN_GPIO_Port, SEVEN_Pin, RESET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(EIGHT_GPIO_Port, EIGHT_Pin, RESET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(NINE_GPIO_Port, NINE_Pin, RESET);
		  break;
	  case 10:
		  HAL_GPIO_WritePin(TEN_GPIO_Port, TEN_Pin, RESET);
		  break;
	  case 11:
		  HAL_GPIO_WritePin(ELEVEN_GPIO_Port, ELEVEN_Pin, RESET);
		  break;
	  default:
		  HAL_GPIO_WritePin(TWELVE_GPIO_Port, TWELVE_Pin, RESET);
		  break;
	  }
}

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int count = 1;
  while (1)
  {
	  switch (count)
	  {
	  case 0:
		  HAL_GPIO_WritePin(TWELVE_GPIO_Port, TWELVE_Pin, RESET);
		  break;
	  case 1:
		  HAL_GPIO_TogglePin(ONE_GPIO_Port, ONE_Pin);
		  break;
	  case 2:
		  HAL_GPIO_TogglePin(TWO_GPIO_Port, TWO_Pin);
		  break;
	  case 3:
		  HAL_GPIO_TogglePin(THREE_GPIO_Port, THREE_Pin);
		  break;
	  case 4:
		  HAL_GPIO_TogglePin(FOUR_GPIO_Port, FOUR_Pin);
		  break;
	  case 5:
		  HAL_GPIO_TogglePin(FIVE_GPIO_Port, FIVE_Pin);
		  break;
	  case 6:
		  HAL_GPIO_TogglePin(SIX_GPIO_Port, SIX_Pin);
		  break;
	  case 7:
		  HAL_GPIO_TogglePin(SEVEN_GPIO_Port, SEVEN_Pin);
		  break;
	  case 8:
		  HAL_GPIO_TogglePin(EIGHT_GPIO_Port, EIGHT_Pin);
		  break;
	  case 9:
		  HAL_GPIO_TogglePin(NINE_GPIO_Port, NINE_Pin);
		  break;
	  case 10:
		  HAL_GPIO_TogglePin(TEN_GPIO_Port, TEN_Pin);
		  break;
	  case 11:
		  HAL_GPIO_TogglePin(ELEVEN_GPIO_Port, ELEVEN_Pin);
		  break;
	  default:
		  HAL_GPIO_TogglePin(TWELVE_GPIO_Port, TWELVE_Pin);
		  break;
	  }
	  HAL_Delay(100);
	  count++;
	  if (count >= 13){
		  count = 1;
	  }

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, ONE_Pin|TWO_Pin|THREE_Pin|FOUR_Pin
                          |FIVE_Pin|SIX_Pin|SEVEN_Pin|EIGHT_Pin
                          |NINE_Pin|TEN_Pin|ELEVEN_Pin|TWELVE_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : ONE_Pin TWO_Pin THREE_Pin FOUR_Pin
                           FIVE_Pin SIX_Pin SEVEN_Pin EIGHT_Pin
                           NINE_Pin TEN_Pin ELEVEN_Pin TWELVE_Pin */
  GPIO_InitStruct.Pin = ONE_Pin|TWO_Pin|THREE_Pin|FOUR_Pin
                          |FIVE_Pin|SIX_Pin|SEVEN_Pin|EIGHT_Pin
                          |NINE_Pin|TEN_Pin|ELEVEN_Pin|TWELVE_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
