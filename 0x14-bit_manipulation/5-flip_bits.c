#include "main.h"

/**
 * flip_bits - function that returns the number of bits needed
 * to flip to get from one number to another
 * @n: number
 * @m: number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int xor;

	xor = n ^ m;

	while (xor > 0)
	{
		count++;
		xor &= (xor - 1);
	}

	return (count);
}
