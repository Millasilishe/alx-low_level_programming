#include <stdio.h>

void Fizz_Buzz(int n);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	Fizz_Buzz(100);
	printf("\n");
	return (0);
}

/**
 * Fizz_Buzz - Print Fizz, Buzz and FizzBuzz for multiples of 3, 5 and both
 * @n: Max number
 */
void Fizz_Buzz(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (i != 1)
		{
			printf(" ");
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	i++;
	}
	if (n <= 0)
	{
		printf("\n");
	}
}
