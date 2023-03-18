#include <stdio.h>
/**
 * main - Entry point
 * A program that prints possible three combination
 * Return: Always 0
*/
int main(void)
{
	int n;
	int m;
	int j;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			for (j = 0; j < 10; j++)
			{
				if (n < m && m < j)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(j + '0');
					if (n + m + j != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
