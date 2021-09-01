#include "main.h"

/**
 *main: jack_bauer - prints every minute
 *
 *Definition: hours & minutes
 *
 *Return: void
 */

void jack_bauer(void)
{
	int hours_1;
	int hours_2;
	int minutes_1;
	int minutes_2;
	int hours;
	int minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			hours_1 = hours / 10;
			hours_2 = hours % 10;
			minutes_1 = minutes / 10;
			minutes_2 = minutes % 10;

			_putchar('0' + hours_1);
			_putchar('0' + hours_2);
			_putchar(':');
			_putchar('0' + minutes_1);
			_putchar('0' + minutes_2);
			_putchar('\n');
		}
	}
}
