#include "main.h"

/**
 * print_rev - Prints a string, in reverse followed by a new line, to stdout
 * @s: a pointer point to a string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar(10);
}
