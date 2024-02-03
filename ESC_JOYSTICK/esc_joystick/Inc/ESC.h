/*
 * ESC.h
 *
 *  Created on: Jan 31, 2024
 *      Author: dimak
 */

#ifndef ESC_JOYSTICK_INC_ESC_H_
#define ESC_JOYSTICK_INC_ESC_H_

#include "main.h"
#include "stdio.h"
#include "stdlib.h"
#include "stm32f746xx.h"

#define Calibrate 1

extern ADC_HandleTypeDef hadc1;
extern DMA_HandleTypeDef hdma_adc1;

extern TIM_HandleTypeDef htim1;

extern UART_HandleTypeDef huart3;


void my_main(void);


#endif /* ESC_JOYSTICK_INC_ESC_H_ */
