#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @c: Any character
 *
 * Return: Always Success
 */
int _islower(int c)
{
	int success;

	if (c > 96 && c < 123)
	{
		success = 1;
	}
	if (c > 64 && c < 91)
	{
		success = 0;
	}
	return (success);
}
