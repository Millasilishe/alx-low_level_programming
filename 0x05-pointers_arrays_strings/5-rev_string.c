#include "main.h"
#include <stdio.h>

/**
 * rev_string - Prints a string, in reverse
 * @s: a pointer point to a string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	char array = s[0];
	int size = 0, i;

	while (s[size] != '\0')
	{
		size++;
	}
	for (i = 0; i < size; i++)
	{
		size--;
		array = s[i];
		s[i] = s[size];
		s[size] = array;
	}
}
