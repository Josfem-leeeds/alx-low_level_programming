#include "main.h"

/**
 * _islower - checks for the lowercase alphabet
 * @c: the integer that is passed
 * Return: 0 - not lowercase, 1 - lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
