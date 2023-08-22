#include "main.h"

/**
 *
 */
int _strlen(char *s)
{
	char *p = s;
	int length;

	while (*p != 0)
	{
		p++;
	}
	length = p - s;

	return (length);
}
