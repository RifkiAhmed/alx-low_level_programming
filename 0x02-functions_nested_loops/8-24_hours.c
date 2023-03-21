#include "main.h"

/**
 * times_table - Write a function that prints the
 * 9 times table, starting with 0
 * _putchar: prints digits
 */

void times_table(void)
{
	int m, h;

	for (h = 0 ; h < 24 ; h++)
	{
		for (m = 0 ; m < 60 ; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
