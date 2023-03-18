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

	i = j = k = l = 48;
	while (i <= 57)
	{
		l++;
		if (l > 57)
		{
			k++;
			l = 48;
		}
		if (k > 57)
		{
			j++;
			k = 48;
		}
		if (j > 57)
		{
			i++;
			j = 48;
		}
		if (i < k )
			putchar(i);
			putchar(j);
			putchar(' ');
			putchar(k);
			putchar(l);
		}
		if (j < 56)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
