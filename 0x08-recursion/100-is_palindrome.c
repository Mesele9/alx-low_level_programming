#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome -  a function that check s if a string is palindrome or not
 * @s: string to be checked
 *
 * Return: 1 if string is palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - a fubction that return the length of a string
 * @s: string
 *
 * Return: lenth of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
