#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	if (separator == NULL)
		return;
	va_start(va, n);
	/* process */
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(va, int), separator);
	va_end(va);
	printf("%d\n", va_arg(va, int));
}
