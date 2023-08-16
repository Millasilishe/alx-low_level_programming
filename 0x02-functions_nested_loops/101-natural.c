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
}
/**
 * sum_of_multiple - Prints the sum of all the multiples of 3 or 5 below 1024
 * @n: number
 *
 * Return: sum
 */
int sum_of_multiple(int n)
{
	int i = 0, mult3, mult5;
       	int sum = 0;
	/*int n = 1024;*/
	while (i < n)
	{
		mult3 = i * 3;
		mult5 = i * 5;
		if (mult3 < n)
		{
			sum = sum + mult3;
		}
		if (mult5 < n)
		{
			sum = sum + mult5;
		}
	i++;
	}
	return (sum);
}
