#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - pointer to allocated space in memory that contains copy of "@str"
 * @str: string to be copied
 *
 * Return: pointer or "NULL" if "@str" is null or unvailable sufficient memory
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		copy = malloc(sizeof(char) * strlen(str));
		if (copy == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < strlen(str); i++)
				*(copy + i) = str[i];
			return (copy);
		}
	}
}
