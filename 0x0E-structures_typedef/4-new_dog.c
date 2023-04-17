#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);

/**
 * *new_dog - prints a struct dog
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to dog owner
 *
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;

	t = malloc(sizeof(dog_t));
	if (t == NULL)
		return (NULL);

	t->name = _strdup(name);
	if (!t->name)
	{
		free(t);
		return (NULL);
	}
	t->age = age;
	t->owner = _strdup(owner);
	if (!t->owner)
	{
		free(t->name);
		free(t);
		return (NULL);
	}

	return (t);
}

/**
 *  * *_strdup - function with one argument
 *   * @str: string argument
 *    *
 *     * Description: returns a pointer to allocated space in memory
 *      * Return: pointer
 *       */

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
