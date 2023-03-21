#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 * _putchar: prints alphabets
 * Return: always 0 end of program
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
