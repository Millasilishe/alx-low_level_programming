#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number of times
 */
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar(10);
		}
		else
		{
			_putchar(95);
		}
	i++;
	}
	_putchar(10);
}
