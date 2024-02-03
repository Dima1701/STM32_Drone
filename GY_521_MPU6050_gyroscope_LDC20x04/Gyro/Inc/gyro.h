/*
 * gyro.h
 *
 *  Created on: Feb 3, 2024
 *      Author: dimak
 */

#ifndef GYRO_INC_GYRO_H_
#define GYRO_INC_GYRO_H_

#include "main.h"
#include "stm32f746xx.h"
#include "stdio.h"
#include "string.h"
extern I2C_HandleTypeDef hi2c1;
extern I2C_HandleTypeDef hi2c2;
extern UART_HandleTypeDef huart3;

void my_main(void);

#endif /* GYRO_INC_GYRO_H_ */
