#include "main.h"

/**
 * print_square - Prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int i = 0, j;

	while (i < size)
	{
		for (j = 0; j < size; j++)
		{
			if (size <= 0)
			{
				_putchar(10);
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar(10);
	i++;
	}
	/*_putchar(10);*/
}
