#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index
 * @n: number in decimal
 * @index: index of bit to return
 *
 * Return: value of bit at @index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, i;
	unsigned int bits;
	unsigned long int position;

	bits = 0;
	for (i = 63; i >= 0; i--)
	{
		position = n >> i;

		if (position & 1)
		{
			bits++;
		}
		else if (bits)
			bits++;
	}
	if (!bits)
		return (-1);

	if (index > bits)
		return (-1);
	bit = (n & (1 << index)) >> index;

	return (bit);
}
