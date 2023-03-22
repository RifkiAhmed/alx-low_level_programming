#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @n: interger to be comupted
 * Return: always the last digit, end of program
 */

int print_last_digit(int n)
{
	i %= 10;
	if (i < 0)
		i *= -1;
	i += 48;
	_putchar(i);
	return (i - '0');
}
