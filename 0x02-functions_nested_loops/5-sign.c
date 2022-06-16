#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the variable passed to the function
 * Return: 1 for positive number, o for zero, -1 for negative number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
		return (0);
		_putchar(45);
	else
		return (-1)
		_putchar(45);
	_putchar("\n");
}
