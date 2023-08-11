#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, A;

	a = 97;
	A = 65;
	while (a < 123)
	{
		putchar(a);
	a++;
	}
	while (A < 91)
	{
		putchar(A);
	A++;
	}
	putchar(10);
	return (0);
}
