#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	/* first byte of the integer i */
	c = (char *) &i;

	if (*c == 1)
		return (1);
	else
		return (0);
}
