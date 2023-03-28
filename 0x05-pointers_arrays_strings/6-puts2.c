#include <unistd.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string to print
 */

void puts2(char *str)
{
	int i;


	for (i = 0 ; i < (int)strlen(str) ; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
