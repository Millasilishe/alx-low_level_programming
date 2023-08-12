#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n < 57)
		{
			/*putchar(n);*/
			putchar(44);
			putchar(32);
		}
	n++;
	}
	putchar(10);
	return (0);
}
