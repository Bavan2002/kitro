#include "encoder.h"


// FUCTION: INTIALIZATION OF ENCODER RELATED HARDWARE
void encoderInit(void){
//	HAL_TIM_Encoder_Start(&htim2, TIM_CHANNEL_ALL);   // LEFT ENCODER
//	HAL_TIM_Encoder_Start(&htim5, TIM_CHANNEL_ALL);   // RIGHT ENCODER
//	resetEncoder();
}

void resetEncoder(void){
	TIM2->CNT = _ENCODER_START + 1;
	TIM5->CNT = u32_max-_ENCODER_START;
}

