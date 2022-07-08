#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers passed in the arguments
 * @separator: in between the lines
 * @n: amount of numbers to print
 *
 * Return: always 0 success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num_print;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		num_print = va_arg(list, int);
		printf("%d", num_print);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
