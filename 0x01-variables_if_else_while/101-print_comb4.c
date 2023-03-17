#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * separated by ','
 * The three digits are differents
 * Return: 0 end of program
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = i + 1 ; j <= 56; j++)
		{
			for (k = j + 1 ; k <= 57 ; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
