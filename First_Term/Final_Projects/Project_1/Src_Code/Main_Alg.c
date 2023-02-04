#include "Alarm_Monitoring.h"
#include "Main_Alg.h"
#include "pressure_sensor.h"


void Alg ()
{
	if (getPressureReading()>20)
	{ 
	   Alarm(); }
	else
	{
		Normal ();  }
}