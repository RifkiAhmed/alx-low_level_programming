#include <stdio.h>

/**
  * main - prints the name of program
  * @argc: number of arguements passed to the program
  * @argv: array of strings of each arguments passed to the program
  *
  * Return: always 0
  */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
