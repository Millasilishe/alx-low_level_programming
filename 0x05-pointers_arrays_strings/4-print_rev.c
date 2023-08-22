#include "main.h"

/**
 * print_rev - Prints a string, in reverse followed by a new line, to stdout
 * @s: a pointer point to a string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	char *p = s;
	int length = 0, i;

	while (*p != 0)
	{
		length++;
		p++;
	}
	p = s + length - 1;
	for (i = 0; i < length; i++)
	{
		p--;
		_putchar(*p);
	}
	_putchar(10);
}
