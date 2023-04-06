#include "main.h"

int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - A function that returns 1 if a string is a palindrome
 * otherwise 0
 *
 * @s: a string
 * Return: 1 if the string s is a palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - A function that returns the length of a string
 *
 * @s: a string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - A recursive function  that checks for palindrome
 * @s: a string
 * @i: an iterating parameter
 * @len: length of a string
 * Return: 1 if s is a palindrome otherwise 0
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
