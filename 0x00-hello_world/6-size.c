#include <stdio.h>

/**
 * main - A program that prints the size of various types of computer
 * Return: 0 (successful)
*/

int main(void)
{
	char s;
	int t;
	long int u;
	long long int v;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(s));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(t));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(u));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
