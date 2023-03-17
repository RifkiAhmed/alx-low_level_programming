#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * separated by ','
 * The two digits are differents
 * Return: 0 end of program
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = ++i ; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
