#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: a pointer point to a string
 *
 */
void puts2(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p % 2)
		{
			_putchar(*p);
		}
		p++;
	}
	_putchar(10);
}
