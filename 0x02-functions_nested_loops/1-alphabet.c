#include "main.h"

/**
 * main - Entry point
 *
 * Description: the program's description
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
/* This is the body of the function */
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
/**
 * is_positive - Check if a number is greater than 0
 * @nb: The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
