#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: 1 if character is uppercase
 * else return 0
 */

int _isupper(int c)
{
	int result;

	result = (isupper(c)) ? 1 : 0;
	return (result);
}
