#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: a ponter to the printing function
 */
void print_name(char *name, void (*f)(char *s))
{
	if (!name || !f)
		return;
	f(name);
}
