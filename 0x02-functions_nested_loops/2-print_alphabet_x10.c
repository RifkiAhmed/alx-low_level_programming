#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet, in lowercase 10 times
 * _putchar: prints alphabets
 * Return: always 0 end of program
 */

void print_alphabet_x10(void)
{
	int i, c;

	for (i = 0 ; i < 10 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
