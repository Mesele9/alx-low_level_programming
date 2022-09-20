#include "main.h"
/**
 * puts2 - a function that prints every other character
 * @str: string to print a character from
 *
 */
void puts2(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar(10);
}
