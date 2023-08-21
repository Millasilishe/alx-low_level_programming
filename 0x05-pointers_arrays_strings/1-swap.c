#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: integer
 * @b: integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
