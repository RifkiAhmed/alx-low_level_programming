#include "main.h"

/**
 * jack_bauer - prints the alphabet, in lowercase 10 times
 * _putchar: prints digits
 */

void jack_bauer(void)
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
