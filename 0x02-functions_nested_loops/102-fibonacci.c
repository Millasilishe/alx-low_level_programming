#include <stdio.h>

void fibonacci(long int n, long int m);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	fibonacci(1, 2);
	return (0);
}
/**
 * fibonacci - prints fibonacci numbers
 * @n: 1
 * @m: 2
 */
void fibonacci(long int n, long int m)
{
	int count = 0;
	long int sum = 0;

	printf("%ld, %ld", n, m);
	while (count < 48)
	{
		sum = n + m;
		printf(", %ld", sum);
		n = m;
		m = sum;
	count++;
	}
	printf("\n");
}
