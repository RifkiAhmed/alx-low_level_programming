#include <stdio.h>

/**
  * main - prints all arguments it receives
  * @argc: number of arguements passed to the program
  * @argv: array of strings of each arguments passed to the program
  *
  * Return: always 0
  */

int main(int argc, char **argv)
{
	int loop;

	for (loop = 0; loop < argc; loop++)
		printf("%s\n", argv[loop]);
	return (0);
}
