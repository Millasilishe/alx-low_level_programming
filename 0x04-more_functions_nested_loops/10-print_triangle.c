#include "main.h"

/**
 *
 */
void print_triangle(int size)
{
	int i = 1, j;

	if (size <= 0)
	{
		_putchar(10);
	}
	while (i <= size)
	{
		for (j = size; j > 0; j--)
		{
			if (j > i)
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar(10);
	i++;
	}
}
