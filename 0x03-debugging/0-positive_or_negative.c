#include <unistd.h>
#include <stdio.h>
/**
 * positive_or_negative - check if the number n is positive, negative or null
 * @n: number to be checked
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
