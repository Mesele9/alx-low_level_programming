#include "main.h"
/**
 * _puts -  a function that prints a string
 * @*str: a ponter to a string
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
