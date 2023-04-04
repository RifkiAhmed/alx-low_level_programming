#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- prints the sum
 * @a: array
 * @size: size
 *
 * Return: sum of the two diagonals of a square matrix of integers
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
	}
	for (j = 0; j < size; j++)
	{
		sum2 += a[(size - 1) * (j + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
