#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - checks code
 * Return: 0
 */
int main(void)
{
	int i;
	char *key = NULL, *keygen;

	srand(time(NULL));
	keygen = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

	key = malloc(sizeof(char) * 7);
	for (i = 0; i < 6; i++)
		*(key + i) = keygen[rand() % 64];
	*(key + i) = '\0';
	printf("%s\n", key);

	return (0);
}
