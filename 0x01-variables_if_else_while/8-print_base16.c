#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 48;
	while (a < 103)
	{
		if (a < 58)
		{
			putchar(a);
		}
		if (a > 96)
		{
			putchar(a);
		}
	a++;
	}
	putchar(10);
	return (0);
}
