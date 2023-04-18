#include <stdio.h>

/**
 * _main - program that prints the name of the file it was compiled from
 *
 * Return: 0
 */

int _main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

