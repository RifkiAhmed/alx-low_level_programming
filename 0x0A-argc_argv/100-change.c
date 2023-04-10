#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 * @argc: number of arguments passed to main()
 * @argv: vector of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int amount, coins, piece_25, piece_10, piece_5, piece_2, piece_1;

	piece_25 = piece_10 = piece_5 = piece_2 = piece_1 = 0;
	if (argc == 2)
	{
		amount = atoi(argv[1]);
		if (amount < 0)
		{
			printf("0\n");
		}
		if ((amount / 25) >= 1)
		{
			piece_25 = amount / 25;
			amount -= piece_25 * 25;
		}
		if ((amount / 10) >= 1)
		{
			piece_10 = amount / 10;
			amount -= piece_10 * 10;
		}
		if ((amount / 5) >= 1)
		{
			piece_5 = amount / 5;
			amount -= piece_5 * 5;
		}
		if ((amount / 2) >= 1)
		{
			piece_2 = amount / 2;
			amount -= piece_2 * 2;
		}
		coins = piece_25 + piece_10 + piece_5 + piece_2 + piece_1 + amount;
		printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
