#include "main.h"
#include <stdio.h>

/**
 * print_array - this prints array
 * @a: the array name
 * @n: the array size
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
