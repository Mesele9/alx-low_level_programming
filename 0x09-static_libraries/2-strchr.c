#include "main.h"
/**
 * *_strchr - a function that locates a character in a string
 * @s: string to be searched
 * @c: character to be found
 *
 * Return: pointer to the first occurence of charatcer c
 * or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
