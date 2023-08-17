#include "main.h"

/**
 * more_numbers - Prints the numbers, from 0 to 14 ten time
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
	i++;
	_putchar(10);
	}
}
