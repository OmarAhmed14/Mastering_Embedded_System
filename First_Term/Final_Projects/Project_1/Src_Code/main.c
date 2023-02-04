#include "Main_Alg.h"
#include "driver.h"

int main ()
{

	GPIO_INITIALIZATION();

	while (1)
	{
		Alg();
	}
}