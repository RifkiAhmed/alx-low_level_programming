#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: number to calculate its factorial
 *
 * Return: factorial of 'n' when 'n' greater than 0
 * if 'n' = 0 return 1
 * else if 'n' less than 0 return -1 to indicate an error
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
