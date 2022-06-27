#include "main.h"

/**
 * print_last_digit - this prints the last digit of a number
 * @x: the parameter
 * Return: this returns 0.
 */
int print_last_digit(int x)
{
	int a;

	if (x < 0)
		x = -1 * x;
	a = x % 10;

	if (a < 0)
		a = -1 * a;
	_putchar(a + '0');
	return (a);
}
