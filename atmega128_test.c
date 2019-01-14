#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
int count,data,data1;
DDRE |= 0xFF;
data 	= 0b11000000;
data1 	= 0b00000011;
count = 0;
	while(1)
	{
		for(count = 0;count < 8;count++)
		{
			PORTE = (data >> count);
			_delay_ms(50);
		}
		for(count = 0;count < 8;count++)
		{
			PORTE = (data1 << count);
			_delay_ms(50);
		}
	}

return 0;
}
