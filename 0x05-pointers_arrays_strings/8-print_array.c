#include <unistd.h>
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: dereference to variable 'a'
 * @n: number tp print
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < (n - 1))
	{
		printf("%d, ", *(a + i));
		i++;
	}
	printf("%d\n", *(a + i));
}
