#include "main.h"

/**
 * _isupper - check if a chracter is uppercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is positive, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
