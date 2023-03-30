#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: value less than 0 if s1 isless than s2 else return value > 0
 * if equal return 0
 */

int _strcmp(char *s1, char *s2)
{
	int counter, cmp;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	cmp = s1[counter] - s2[counter];
	return (cmp);
}
