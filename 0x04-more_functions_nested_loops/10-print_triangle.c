#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (j = i ; j < size ; j++)
			{
				_putchar(' ');
			}
			for (k = 0 ; k < i ; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
