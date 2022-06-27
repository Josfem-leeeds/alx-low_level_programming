#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: the first parameter
 * Return: this returns 0 Success
 */
void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d", n);
			else
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			printf("%d", n);
			else
			printf("%d, ", n);
			n--;
		}
	}
	printf("\n");
}
