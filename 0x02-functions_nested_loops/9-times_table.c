#include "main.h"

/**
 *
 */
void times_table(void)
{
	int time = 0, table;
	int i, x, y;

	while (time < 10)
	{
		table = 0;
		while (table < 10)
		{
			i = time * table;
			x = i / 10;
			y = i % 10;
			if (x == 0)
			{
				if (table != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(i + '0');
			}
			if (x != 0)
			{
				if (table != 0)
				{
					_putchar(44);
					_putchar(32);
				}
				_putchar(x + '0');
				_putchar(y + '0');
			}
		table++;
		}
	_putchar('\n');
	time++;
	}

}
