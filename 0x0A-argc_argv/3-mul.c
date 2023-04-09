#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: number of arguements passed to the program
  * @argv: array of strings of each arguments passed to the program
  *
  * Return: multiple of two numbers else print 'error' and return 1
  */

int main(int argc, char **argv)
{
	int n1, n2;

	(void)argc;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
