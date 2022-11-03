#include <string.h>
#include <stdio.h>
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
	unsigned int total, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}
	return (total);
}
