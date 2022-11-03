#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts abinary
 * number to an unsigned int
 * @b: pointer to string of 0 and 1
 *
 * Return: converted number or 0 if one of the chars
 * in the string b is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
