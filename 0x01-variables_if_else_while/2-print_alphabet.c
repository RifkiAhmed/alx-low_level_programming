#include <stdio.h>

/**
 * main - print alphabet in lower case with putchar
 * Return: 0 end of program
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
