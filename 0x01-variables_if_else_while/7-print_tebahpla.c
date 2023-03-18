#include <stdio.h>
/**
 * Main - Entry point
 * Description: A program that prints alphabet in reverse
 * followed by a new line.
 * Return: Always 0
*/
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
