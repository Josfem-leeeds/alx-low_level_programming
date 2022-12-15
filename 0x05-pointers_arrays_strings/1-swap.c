#include "main.h"

/**
 * swap_int - swaps the number for themselves
 * @a: a pointer the integer we want to set to 42
 * @b: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
