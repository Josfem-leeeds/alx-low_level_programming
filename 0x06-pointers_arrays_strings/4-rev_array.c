#include "main.h"

/**
 * reverse_array - fuunction that reverses an array
 * @a: parameter 1
 * @n: parameter 2
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *b, j, alt, y;

	b = a;

	for (j = 0; j < n; j++)
		b++;

	for (y = 0; y < j / 2; y++)
	{
		alt = a[y];
		a[y] = *b;
		*b = alt;
		b--;
	}
}
