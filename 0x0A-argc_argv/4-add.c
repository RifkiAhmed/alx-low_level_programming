#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
/**
  * check_digit - check if the argument id a digit
  * @item: string to check
  *
  * Return: bool value
  */

bool check_digit(char item[])
{
	unsigned long int index;
	bool number;

	for (index = 0; index < strlen(item); index++)
	{
		if (isdigit(item[index]))
		{
			number = true;
		}
		else
		{
			number = false;
			break;
		}
	}
	return (number);
}

/**
 * main - adds positive numbers
 * @argc: number of arguements passed to the program
 * @argv: array of strings of each arguments passed to the program
 *
 * Return: multiple of two numbers else
 * 0 if no number is passed to the program else
 * If one of the number is not digits print 'error' and return 1
 */

int main(int argc, char **argv)
{
	int loop, sum;

	sum = 0;
	if (argc > 2)
	{
		for (loop = 1; loop < argc; loop++)
		{
			if (check_digit(argv[loop]))
			{
				sum += atoi(argv[loop]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
