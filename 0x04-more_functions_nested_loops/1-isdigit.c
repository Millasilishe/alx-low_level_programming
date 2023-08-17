#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: character
 *
 * Return: value
 */
int _isdigit(int c)
{
	int value;

	if (c >= 48 && c <= 57)
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
