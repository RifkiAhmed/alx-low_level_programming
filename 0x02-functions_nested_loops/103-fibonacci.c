#include <stdio.h>

/**
 * main - prints sum of even-valued fibonacci numbers under 4,000,000
 * Return: 0 if succesfull
 */

int main(void)
{
	long int i, a = 1, b = 2, sum;

	for (i = 0, sum = 0; a < 4000000; i++)
	{
		if (!(a % 2))
			sum += a;
		b = a + b;
		a = b - a;
	}
	printf("%ld\n", sum);
	return (0);
}

