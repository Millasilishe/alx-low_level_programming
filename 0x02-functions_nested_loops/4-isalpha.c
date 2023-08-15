#include "main.h"

/**
 * _isalpha - Checks for lowercase and uppercase characters
 * @c: Any character
 *
 * Return: Always Success
 */
int _isalpha(int c)
{
	int success;

	if ((c > 'A' && c < 'Z') || (c > 'a' && c < 'z'))
	{
		success = 1;
	}
	/*else if (c < 'a' && c < 'z')*/
	/**
	 * if (c > 64 && c < 91)
	 * {
	 * success = 1;
	 * }
	 */
	else
	{
		success = 0;
	}
	return (success);
}
