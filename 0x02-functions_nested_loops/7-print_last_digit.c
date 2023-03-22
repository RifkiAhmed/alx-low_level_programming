#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @n: interger to be comupted
 * Return: always the last digit, end of program
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	n += 48;
	_putchar(n);
	return (n - '0');
}
