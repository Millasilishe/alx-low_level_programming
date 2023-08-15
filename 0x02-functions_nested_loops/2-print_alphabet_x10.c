#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0, j;
	int alphabet;

	while (i < 10)
	{
		j = 0;
		while (j < 26)
		{
			alphabet = j + 97;
			_putchar(alphabet);
		j++;
		}
	i++;
	_putchar(10);
	}
}
