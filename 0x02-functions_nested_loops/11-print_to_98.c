#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * _putchar: prints alphabets
 * @n: number received
 */

void print_to_98(int n)
{
	printf("%d", n);

	if (n > 98)
	{
		while (n >= 98)
		{
			printf(",");
			n--;
			printf("%d", n);
		}
	}
	if (n < 98)
	{
		while (n <= 98)
		{
			printf(",");
			n++;
			printf("%d", n);
		}
	}
	printf("\n");
}
