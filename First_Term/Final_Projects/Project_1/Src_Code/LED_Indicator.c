#include "driver.h"
#include "LED_Indicator.h"


void LED_ON ()
{
	Set_Alarm_actuator(ON);
}


void LED_OFF ()
{
	Set_Alarm_actuator(OFF);
}