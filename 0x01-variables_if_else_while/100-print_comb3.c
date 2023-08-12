#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		int j = 48;

		while (j < 58)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
			}
			if (i < j && i != 56)
			{
				putchar(44);
				putchar(32);
			}
		j++;
		}
	i++;
	}
	putchar(10);
	return (0);
}
