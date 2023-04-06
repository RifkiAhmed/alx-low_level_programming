#include "main.h"

/**
 * prime - searches recursively if 'n' is a prime number
 * @n: number to check
 * @nb: iterator
 *
 * Return: 1 if 'n' is a prime number else 0
 */

int prime(int n, int nb)
{
	if (nb == 1)
		return (1);
	if (n % nb == 0 && nb > 0)
		return (0);
	return (prime(n, nb - 1));
}

/**
 * is_prime_number - check in if an integer is a prime number
 * @n: number to check
 *
 *Return: 1 if 'n' is a prime number else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime(n, n - 1));
}
