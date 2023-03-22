#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * _putchar: prints alphabets
 * @n: number received
 */

void print_to_98(int n)
{
	int i;
	printf("%d\n", n);
	if (n > 98)
	{
		for (i = n-1 ; n>= 98 ; i--)
		{
			printf(", %d", i);
		}
	}
	else
	{
		for (i = n+1 ; n<= 98 ; i++)
		{
			printf(", %d", i);
		}
	}
}
