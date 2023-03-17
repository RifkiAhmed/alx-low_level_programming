#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main  - print whether the value of  n is positive, negative or null
 * @n: the number to be checked
 *
 * Return: 0, end of programm
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
