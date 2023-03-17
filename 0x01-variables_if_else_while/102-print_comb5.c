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

	for (i = 48; i <= 57; i++)
	{
		for (j = 48 ; j <= 56; j++)
		{
			for (k = 48 ; k <= 57 ; k++)
			{
				for (l = 48 ; l <= 57 ; l++)
				{
					if (k == 48 && l == k)
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
					if (i < 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
