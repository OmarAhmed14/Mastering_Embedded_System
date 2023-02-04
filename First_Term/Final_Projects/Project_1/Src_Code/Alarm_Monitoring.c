#include "driver.h"
#include "LED_Indicator.h"
#include "Alarm_Monitoring.h"



void Alarm ()
{
	LED_ON ();
	Delay(_60_Sec);
	LED_OFF ();
	Delay(_60_Sec);
}

void Normal ()
{
	LED_OFF ();
}