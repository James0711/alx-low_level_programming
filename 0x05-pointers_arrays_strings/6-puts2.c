#include "main.h"
/**
 * puts2 - prints every other character of a string strating with the first
 * @str: string
 * Return: prints
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *x = str;
	int y;

	while (*x != '\0')
	{
		x++;
		longi++;
	}
	t = longi - 1;
	for (y = 0; y <= t; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
