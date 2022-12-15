#include "main.h"

/**
 * *_memset - this fills the memory with a constant byte
 * @s: first varaible pointer.
 * @b:  second parameter to be replaced with
 * @n: third parameter, number of times the constant byte occurs
 * Return: this returns a string of character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
