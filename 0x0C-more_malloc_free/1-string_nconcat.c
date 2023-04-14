#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2d string
 * @n: number of bytes of s2
 * Return: pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len_s1, len_s2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	if (n >= len_s2)
	{
		n = len_s2;
		p = malloc(sizeof(char) * (len_s1 + n + 1));
	}
	else
		p = malloc(sizeof(char) * (len_s1 + n + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i++] = s2[j];
	}
	p[i++] = '\0';
	return (p);
}
