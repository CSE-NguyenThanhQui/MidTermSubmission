



#include "software_timer.h"

int timer_counter = 0;
int timer_flag = 0;
int blink_flag = 0;
int blink_counter = 0;

void setTimer(int duration){
	timer_counter = duration / TIME_CYCLE;
	timer_flag = 0;
}

void setTimerBlink(int duration){
	blink_counter = duration / TIME_CYCLE;
	blink_flag = 0;
}

void timerRun(){
	if (timer_counter > 0){
		timer_counter--;
		if (timer_counter <= 0){
			timer_flag = 1;
		}
	}
	if (blink_counter > 0){
			blink_counter--;
			if (blink_counter <= 0){
				blink_flag = 1;
			}
		}
}
