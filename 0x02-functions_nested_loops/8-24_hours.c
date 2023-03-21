#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet, in lowercase 10 times
 * _putchar: prints alphabets
 * Return: always 0 end of program
 */

void print_alphabet_x10(void)
{
	int m, h;

	for (h = 0 ; h < 23 ; h++)
		for (m = 0 ; m < 60 ; m++)
		{
			if (h < 10 && m < 10)
				_putchar('0' + h + ':' + '0' + m);
			else if (h < 10)
				_putchar('0' + h + ':' + m);
			else if (m < 10)
				_putchar(h + ':' + '0' + m);
		}
}
