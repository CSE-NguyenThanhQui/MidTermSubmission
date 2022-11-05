/*
 * fsm_simplebutton.c
 *
 *  Created on: Nov 5, 2022
 *      Author: NGUYEN THANH QUI
 */


#include "fsm_simplebutton.h"

void fsm_simple_button_run(){
	switch(status){
	case INIT:
		clearScreen();
		status = STATE_1;
		setTimer(RELEASED_TIME);
		break;
	case STATE_1:
		display7SEG(value);
		if (timer_flag == 1){
			status = STATE_2;
			value--;
			setTimer(1000);
		}
		if (isButtonPressed(1)){
			status = STATE_1;
			value++;
			if (value > 9) value = 0;
			setTimer(RELEASED_TIME);
		}
		if (isButtonPressed(2)){
			status = STATE_1;
			value--;
			if (value < 0) value = 9;
			setTimer(RELEASED_TIME);
		}
		if (isButtonPressed(0)){
			status = STATE_1;
			value = 0;
			setTimer(RELEASED_TIME);
		}
		break;
	case STATE_2:
		display7SEG(value);
		if (value == 0){
			status = STATE_3;
			value = 0;
			//setTimer(10000);
		}
		if (value != 0 && timer_flag == 1){
			value--;
			status = STATE_2;
			setTimer(1000);
		}
		if (isButtonPressed(1) || isButtonPressed(2)) {
			status = STATE_1;
			setTimer(RELEASED_TIME);
		}
		break;
	case STATE_3:
		display7SEG(value);
		if (isButtonPressed(1) || isButtonPressed(2)){
		status = STATE_1;
		setTimer(RELEASED_TIME);
		}
		break;
	default: break;
	}

}
void fsm_led_blink(){
	switch(led_status){
	case LED_BLINK:
		if (blink_flag == 1){
		HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);
		setTimerBlink(1000);
		led_status = LED_BLINK;
		}
		break;
	default: break;
	}
}
