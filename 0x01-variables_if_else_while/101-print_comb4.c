#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, z;

	i = 48;
	while (i < 58)
	{
		j = 49;
		while (j < 58)
		{
			z = 50;
			while (z < 58)
			{
				if (i < j && j < z)
				{
					putchar(i);
					putchar(j);
					putchar(z);
				}
				if (i < j && j < z && i != 55)
				{
				putchar(44);
				putchar(32);
				}
			z++;
			}
		j++;
		}
	i++;
	}
	putchar(10);
	return (0);
}
