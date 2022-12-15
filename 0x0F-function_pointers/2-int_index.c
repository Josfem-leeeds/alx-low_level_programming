#include "function_pointers.h"

/**
 * int_index - index searcher
 *
 * @array: forst parameter
 * @size: size of the array
 * @cmp: pointer to the function
 *
 * Return: index of the element found to nmatch the searched
 * and if no match retrns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int  i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
