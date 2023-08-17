#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: number of times
 */
void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n)
	{
		for (j = 0; j < n; j++)
		{
			if (n <= 0)
			{
				_putchar(10);
			}
			else if (j < i)
			{
				_putchar(32);
			}
			if (i == j)
			{
				_putchar(92);
			}
		}
		_putchar(10);
	i++;
	}
	_putchar(10);
}
