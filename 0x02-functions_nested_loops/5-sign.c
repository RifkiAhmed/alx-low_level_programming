#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to check
 *
 * Return: 1 if 'n' is greater than zero
 * or 0 if 'n' is zero
 * or -1 if 'n' is less than zero
 */

int print_sign(int n)
{
	int value;

	if (n == 0)
	{
		_putchar('0');
		value = 0;
	}
	else if (n > 0)
	{
		_putchar('+');
		value = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		value = -1;
	}
	return (value);
}
