#include "main.h"

/**
 *
 */
void puts2(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p % 2 == 0)
		{
			_putchar(*p);
		}
		p++;
	}
	_putchar(10);
}
