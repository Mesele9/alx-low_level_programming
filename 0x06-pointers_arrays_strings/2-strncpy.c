#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: destinationstring
 * @src:string to be copied
 * @n: number of bytes to be copied
 *
 * Return:  a pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i > n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
