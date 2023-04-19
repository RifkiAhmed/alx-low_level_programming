#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to an array of char
 * @f: pinter to a function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
