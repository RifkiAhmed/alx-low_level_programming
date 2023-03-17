#include <stdio.h>

/**
 * main - print alphabet in lowercase and uppercase with putchar
 * Return: 0 end of program
 */

int main(void)
{
	int i;
	
	for (i = 97; i <= 122; i++)
		putchar(i);
	for (i = 65; i <= 90; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
