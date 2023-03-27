#include <unistd.h>

/**
 * swap_int - swaps the values of two integers
 *@a: value of the pointer 'a'
 *@b: value of the pointer 'b'
 */

void swap_int(int *a, int *b)
{
	int local;

	local = *a;
	*a = *b;
	*b = local;
}
