#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: a pointer point to a string
 *
 * Return: length of string
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
