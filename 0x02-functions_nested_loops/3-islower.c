#include "main.h"

/**
 * _islower - checks for lowercase character
 * _putchar: prints alphabets
 * @c: character to check
 *
 * Return: 1 if character is lowercase or 0 if otherwise
 */

int _islower(int c)
{
	int value;

	value = (c <= 122 && c >= 98) ? 1 :  0;
	return (value);
}
