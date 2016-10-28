
#include "simplelink/include/simplelink.h"
#include "common.h"

int main(void)
{
	SYSCTL->RCGCGPIO = 0x20;
	uint32_t i;
	GPIOF->DIR = 0x0F;
	GPIOF->DEN = 0x0F;
	while (1)
	{
		GPIOF->DATA = 0x0F;
		for(i = 0; i<200000;i++);
		for(i = 0; i<200000;i++);
		for(i = 0; i<200000;i++);
		GPIOF->DATA &= ~0x0F;
		for(i = 0; i<200000;i++);
		for(i = 0; i<200000;i++);
		for(i = 0; i<200000;i++);
	}
	return 0;
}
