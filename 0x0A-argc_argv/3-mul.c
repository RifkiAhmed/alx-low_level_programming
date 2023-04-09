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
	(void)argc;

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
