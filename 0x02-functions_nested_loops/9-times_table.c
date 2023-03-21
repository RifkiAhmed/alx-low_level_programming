#include "main.h"

/**
 * jack_bauer - prints the alphabet, in lowercase 10 times
 * _putchar: prints digits
 */

void jack_bauer(void)
{
	int a, b, X, mod;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			X = a * b;
			if (X == 0 && b == 0)
				_putchar(X + '0');
			else if (X > 9)
			{
				mod = X % 10;
				X /= 10;
				_putchar(',');
				_putchar(' ');
				_putchar(X + '0');
				_putchar(mod + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(X + '0');
			}
		}
		_putchar('\n');
	}
}
