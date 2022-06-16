#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the variable passed to the function
 * Return: 1 for positive number, o for zero, -1 for negative number
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
		putchar(43);
	else if (n == 0)
		return (0);
		putchar(45);
	else
		return (-1)
		putchar(45);
}
