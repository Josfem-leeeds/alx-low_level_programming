#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: first parameter
 * Return: Returns 1 if c is a digit or Returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
		return (0);
}
