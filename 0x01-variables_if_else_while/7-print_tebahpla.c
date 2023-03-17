#include <stdio.h>

/**
 * main - print alphabet in reverse in lowercase with putchar
 * Return: 0 end of program
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
