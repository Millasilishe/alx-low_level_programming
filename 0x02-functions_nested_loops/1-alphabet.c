#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 0;
	int alphabet;

	while (i < 26)
	{
		alphabet = i + 97;
		_putchar(alphabet);
	i++;
	}
	_putchar(10);
}
