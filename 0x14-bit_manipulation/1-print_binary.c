#include "main.h"
#include <stdio.h>

/*
 * print_binary - function that prints the binary representation of a number
 * @n: number to convert to binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i, on = 0;
	unsigned long int position;

	for (i = 63; i >= 0; i--)
	{
		position = n >> i;

		if (position & 1)
		{
			_putchar('1');
			on++;
		}
		else if (on)
			_putchar('0');
	}
	if (!on)
		_putchar('0');
}
