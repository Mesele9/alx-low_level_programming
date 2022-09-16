#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: the number of times the charatcer should be printed
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
