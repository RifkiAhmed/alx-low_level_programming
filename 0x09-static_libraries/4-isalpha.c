#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if character is lowercase or 0 if otherwise
 */

int _isalpha(int c)
{
	int value;

	value = (isalpha(c)) ? 1 :  0;
	return (value);
}
