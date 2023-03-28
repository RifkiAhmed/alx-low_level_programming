#include "main.h"

/**
 * rev_string - print a reverse string
 * @s: string to  reverse
 */

void rev_string(char *s)
{
	char tmp;
	int i, lenght, lenght1;

	lenght = 0;
	lenght1 = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	lenght1 = lenght - 1;

	for (i = 0; i < lenght / 2; i++)
	{
		tmp = s[i];
		s[i] = s[lenght1];
		s[lenght1--] = tmp;
	}
}
