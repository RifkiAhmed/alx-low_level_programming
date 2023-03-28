#include <unistd.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to print
 */

void puts_half(char *str)
{
	int i;
	int len;

	len = strlen(str);
	if (len % 2 == 0)
	{
		for (i = len / 2 ; i < (int)len ; i++)
			_putchar(*(str + i));
	}
	else
	{
		for (i = (len - 1)  / 2 ; i < (int)len ; i++)
			_putchar(*(str + i));

	}
	_putchar('\n');
}
