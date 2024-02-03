/*
 * ESC.c
 *
 *  Created on: Jan 31, 2024
 *      Author: dimak
 */

uint16_t ADC_Data=0;
int ADC_Converted = 0;
uint32_t VR[2];
void my_main(void) {
	HAL_DMA_Start(hdma, SrcAddress, DstAddress, DataLength);
	HAL_TIM_PWM_Start(htim, Channel);
}

void esc_calibrate(void) {
	if (Calibrate) {
		TIM2->CCR1 = 100; // Set the maximum pulse (2ms)
		HAL_Delay(2000);  // wait for 1 beep
		TIM2->CCR1 = 50;  // Set the maximum pulse (1ms)
		HAL_Delay(1000);  // wait for 2 beep
		TIM2->CCR1 = 0;	  // reset to 0, so it can be controlled via ADC
		HAL_Delay(3000);
	}
}
int map(int x, int in_min, int in_max, int out_min, int out_max)
{
  return (x - in_min) * (out_max - out_min + 1) / (in_max - in_min + 1) + out_min;
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{
	ADC_Converted = map(ADC_Data, 0, 4095, 50, 100);

	TIM1->CCR1 = ADC_Converted;
}
void joystick(void) {
	if ((VR[0]>=2000)&&(VR[0]<=3000))   // if the value is between 2000 to 3000
		  {
			  HAL_ADC_ConvCpltCallback(hadc);
		  }

		  if ((VR[1]>=2000) && (VR[1]<=3000))
		  {
			  HAL_ADC_ConvCpltCallback(hadc);
		  }

		  if ((VR[0]>=4000))  // towards xplus
		  {
			  HAL_ADC_ConvCpltCallback(hadc);
		  }

		  if ((VR[0]<=800))  // towards xmin
		  {
			  HAL_ADC_ConvCpltCallback(hadc);
		  }

		  if ((VR[1]>=4000))   // towards yplus
		  {
			  HAL_ADC_ConvCpltCallback(hadc);
		  }

		  if ((VR[1]<=800))  // ymin
		  {
			  HAL_ADC_ConvCpltCallback(hadc);
		  }

}
