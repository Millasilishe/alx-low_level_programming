#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Any number
 *
 * Return: Always success
 */
int print_sign(int n)
{
	int number, success;

	if (n > 0)
	{
		number = 43;
		success = 1;
		_putchar(number);
	}
	else if (n < 0)
	{
		number = 45;
		success = -1;
		_putchar(number);
	}
	else
	{
		number = 48;
		success = 0;
		_putchar(number);
	}
	return (success);
}
