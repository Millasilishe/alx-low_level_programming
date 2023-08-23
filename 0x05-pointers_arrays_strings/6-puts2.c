#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: a pointer point to a string
 *
 */
void puts2(char *str)
{
	/*char *p = str;*/
	int length = 0;
	int i, j;

	while (str[length] != '\0')
	{
		length++;
	}
	i = length - 1;
	for (j = 0; j < i; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar(10);
}
