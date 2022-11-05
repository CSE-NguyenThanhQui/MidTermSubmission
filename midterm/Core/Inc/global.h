/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: NGUYEN THANH QUI
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "button.h"
#include "software_timer.h"

#define INIT    1
#define STATE_1 2
#define STATE_2 3
#define STATE_3 4

#define LED_BLINK 1

#define RELEASED_TIME 10000

extern int value;
extern int status;
extern int led_status;

//extern int incre;
#endif /* INC_GLOBAL_H_ */
