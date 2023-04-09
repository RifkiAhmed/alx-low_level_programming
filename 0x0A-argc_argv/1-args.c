#include <stdio.h>
#include <string.h>

/**
  * main - prints the number of arguments passed to the program
  * @argc: number of arguements passed to the program
  * @argv: array of strings of each arguments passed to the program
  *
  * Return: number of arguments
  */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
