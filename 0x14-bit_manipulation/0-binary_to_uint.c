#include "main.h"
#include <math.h>

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: pointer to string contains number in binary
 *
 * Return: number ot type unsigned int or "0" if @b is "NULL" or contains
 * a char that is not "0" or "1"
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;

	ui = 0;
	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			ui <<= 1;
			ui += *b - '0';
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (ui);
}
