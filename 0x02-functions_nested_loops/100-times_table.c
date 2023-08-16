#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, Starting with 0
 * @n: Any number
 */
void print_times_table(int n)
{
	int time , table, i;

	if (n < 15 && n >= 0)
	{
		for  (time = 0; time <= n; time++)
		{
			for (table = 0; table <= n; table++)
			{
				i = time * table;
				if (i < 10 && table != 0)
				{
					printf(",   ");
				}
				else if (i >= 10 && i < 100)
				{
					printf(",  ");
				}
				else if (i >= 100)
				{
					printf(", ");
				}
				printf("%d", i);
			}
                        printf("\n");
                }     
       }             
 }   
