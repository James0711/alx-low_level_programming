#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that gets a random number to be positve or negative
 * Return: 0 (success)
*/

int main(0)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code goes here */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
