#include <stdio.h>

int sum_of_multiple(int n);
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int result;

	result = sum_of_multiple(1024);
	printf("%d\n", result);
	return (0);
}
/**
 * sum_of_multiple - Prints the sum of all the multiples of 3 or 5 below 1024
 * @n: number
 *
 * Return: sum
 */
int sum_of_multiple(int n)
{
	int i = 0;
	int sum = 0;
	/*int n = 1024;*/
	while (i < n)
	{
		/*mult3 = i * 3;*/
		/*mult5 = i * 5;*/
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	i++;
	}
	return (sum);
}
