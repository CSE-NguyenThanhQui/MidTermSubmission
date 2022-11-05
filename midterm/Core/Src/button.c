/*
 * button.c
 *
 *  Created on: Sep 27, 2022
 *      Author: Guest_demo
 */

#include "button.h"

int KeyReg0[NO_OF_BUTTONS] = {NORMAL_STATE};
int KeyReg1[NO_OF_BUTTONS] = {NORMAL_STATE};
int KeyReg2[NO_OF_BUTTONS] = {NORMAL_STATE};
int KeyReg3[NO_OF_BUTTONS] = {NORMAL_STATE};

uint16_t buttonPin[NO_OF_BUTTONS]={RE_Pin, INC_Pin, DEC_Pin};

int TimeOutForKeyPress[NO_OF_BUTTONS];
int button_flag[NO_OF_BUTTONS] = {0};

int isButtonPressed(int index){
	if (button_flag[index] == 1){
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int index){
//	timer_flag[TIMER_BUTTON] = 0;
	button_flag[index] = 1;
}

void getKeyInput(){
	for(int i = 0; i < NO_OF_BUTTONS; i++){
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];
		KeyReg0[i] = HAL_GPIO_ReadPin(GPIOA, buttonPin[i]);
		if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])){
			if (KeyReg2[i] != KeyReg3[i]){
				KeyReg3[i] = KeyReg2[i];

				if (KeyReg3[i] == PRESSED_STATE){
					subKeyProcess(i);
					TimeOutForKeyPress[i] = 300;
				}
			} else {
					TimeOutForKeyPress[i] --;
					if (TimeOutForKeyPress[i] == 0){
						//----------------------------
						if (KeyReg2[i] == PRESSED_STATE){
							subKeyProcess(i);
						}
						TimeOutForKeyPress[i] = 100;
					}
			}
		}
	}
}
