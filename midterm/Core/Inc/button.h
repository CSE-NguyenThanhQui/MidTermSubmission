/*
 * button.h
 *
 *  Created on: Nov 5, 2022
 *      Author: NGUYEN THANH QUI
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NO_OF_BUTTONS 3
#define NORMAL_STATE 1
#define PRESSED_STATE 0
#define HOLD_DURATION 100;

int button_flag[NO_OF_BUTTONS];

int isButtonPressed(int index);
//int isButtonPressed3s(int index);
void getKeyInput();

#endif /* INC_BUTTON_H_ */
