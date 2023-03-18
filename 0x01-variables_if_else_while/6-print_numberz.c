#include <stdio.h>
/**
 * Main - Entry point
 * A program that prints
 * all singles digits numbers of base 10
 * starting from 0, followe by a new line
 * Return: Always 0
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
