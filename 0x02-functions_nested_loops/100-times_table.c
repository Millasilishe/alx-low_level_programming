#include "main.h"

/**
 * times_table - Prints the n times table, Starting with 0
 * @n: Any number
 */
void print_times_table(int n)
{
	int time = 0, table;
	int i, x, y, z, j;

	if (n < 15 && n >= 0)
	{
		while (time <= n)
		{
			table = 0;
			while (table <= n)
			{
				i = time * table;
				x = i / 10;
				y = i % 10;
				z = i / 100;
				j = (i / 10) % 10;
				if (x == 0)
				{
					if (table != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(i + '0');
				}
				if (x != 0 && x < 10)
				{
					if (table != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
					}
					_putchar(x + '0');
					_putchar(y + '0');
				}
				if (x >= 10)
				{
					if (table != 0)
					{
						_putchar(44);
						_putchar(32);
					}
					_putchar(z + '0');
					_putchar(j + '0');
					_putchar(y + '0');
				}
				table++;
			}
			_putchar('\n');
			time++;
		}
	}
}
