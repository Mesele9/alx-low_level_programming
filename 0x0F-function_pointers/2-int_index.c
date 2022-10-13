#include "function_pointers.h"
/**
 * int_index - function that search for an integer
 * @array: array of integers
 * @size: number of elements in the array
 *@cmp: pointer to the function to be used
 *
 * Return: index of the first element or if no element
 * found or size<=0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
		return (-1);
}
