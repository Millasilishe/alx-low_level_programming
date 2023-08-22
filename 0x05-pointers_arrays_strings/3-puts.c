#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: a pointer point to a string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	char *p = str;

	while (*p != 0)
	{
		_putchar(*p);
	p++;
	}
	_putchar(10);
}
