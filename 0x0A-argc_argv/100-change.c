#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: number of argument
 * @argv: argument array
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int cents, quarters, dimes, nickels, twos, ones;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	quarters = cents / 25;
	cents %= 25;

	dimes = cents / 10;
	cents %= 10;

	nickels = cents / 5;
	cents %= 5;

	twos = cents / 2;
	cents %= 2;

	ones = cents;

	printf("%d\n", quarters + dimes + nickels + twos + ones);
	return (0);
}
