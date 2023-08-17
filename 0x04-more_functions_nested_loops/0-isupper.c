#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: character
 *
 * Return: value
 */
int _isupper(int c)
{
	int value;

	if (c >= 65 && c <= 90)
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
