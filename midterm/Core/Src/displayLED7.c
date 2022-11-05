/*
 * displayLED7.c
 *
 *  Created on: Nov 5, 2022
 *      Author: NGUYEN THANH QUI
 */
#include "displayLED7.h"

void display7SEG(int num) {
	//num is the time displayed on the 7-segment led
	switch(num){
	case 0:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, SET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, SET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, SET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, SET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, SET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, SET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, SET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	break;
	case 7:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, SET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, RESET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
	break;
	case 9:
		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, RESET);
		HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, RESET);
		HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, RESET);
		HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, RESET);
		HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
		HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, RESET);
		HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, RESET);
		break;
	default: break;
	}

}
void clearScreen() {
	HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, SET);
	HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, SET);
	HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, SET);
	HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, SET);
	HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, SET);
	HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, SET);
	HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, SET);
}


