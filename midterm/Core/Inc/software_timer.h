/*
 * software_timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: NGUYEN THANH QUI
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define TIME_CYCLE 10

extern int timer_flag;
extern int blink_flag;
extern int blink_counter;

void setTimer(int duration);
void setTimerBlink(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
