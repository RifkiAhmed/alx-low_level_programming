#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * print_rev - print the value of a string in reverse
 * @s: string tp print
 */

void print_rev(char *s)
{
	int i;

	if (strlen != 0)
	{
		for (i = strlen(s) ; i >= 0 ; i--)
			_putchar(s[i]);
		_putchar('\n');
	}
}
