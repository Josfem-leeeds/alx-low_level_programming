#include "main.h"

/**
 * _strlen - the function that prints the length of a string
 *
 * @s: the pointer passed to the function
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int lent;

	for (; *s != '\0'; s++)
	{
		lent += 1;
	}
	return (lent);
}
