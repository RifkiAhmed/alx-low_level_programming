#include "main.h"
/**
 *  * square - find the natural square of 'n' if exists
 *   * @n: int number
 *    * @sq: square of 'n' if exists
 *     *
 *      * Return: the square
 *       */

int square(int n, int sq)
{
	        if (sq * sq > n)
			                return (-1);
		        else if (sq * sq == n)
				                return (sq);
			        else
					                return (square(n, sq + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int number
 *
 * Return: natural square root of 'n'
 * else -1 if 'n' does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (square(n, 0));
}
