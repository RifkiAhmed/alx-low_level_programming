#include <stdarg.h>
/**
 * sum_them_all - variadic function that returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum of all arguments or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(va, n);
	/* process */
	for (i = 0; i < n; i++)
		sum += va_arg(va, int);
	va_end(va);

	return (sum);
}
