#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * separated by ','
 * The three digits are differents
 * Return: 0 end of program
 */

int main(void)
{
	int i, j, k, l;

	for (i = 48 ; i <= 57 ; i++)
		for (j = 48 ; j <= 57 ; j++)
			for (k = 48 ; k <= 57 ; k++)
				for (l = 48 ; l <= 57 ; l++)
				{
					if (i >= k && j >= l)
					{
						continue;
					}
					else
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					}
					if (j == 57 && j < 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
	putchar('\n');

	return (0);
}
