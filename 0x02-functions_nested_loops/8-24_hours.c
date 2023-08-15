#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 */
void jack_bauer(void)
{
	int hour = 0, minute;
	int x, y, i, j;

	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			x = hour / 10;
			y = hour % 10;
			i = minute / 10;
			j = minute % 10;
			_putchar(x + '0');
			_putchar(y + '0');
			_putchar(58);
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar('\n');
		minute++;
		}
	/*_putchar('\n');*/
	hour++;
	}
}
