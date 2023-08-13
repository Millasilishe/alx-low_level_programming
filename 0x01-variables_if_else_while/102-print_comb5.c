#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, x, y, k, l;

	i = 0;
	while (i < 99)
	{
		j = 0;
		while (j < 100)
		{
			x = i / 10;
			y = i % 10;
			k = j / 10;
			l = j % 10;
			if (i < j)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(32);
				putchar(k + '0');
				putchar(l + '0');
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
