#include "main.h"

/**
 * compare - comparism function
 * @X: first parametr
 * @Y: second parameter
 * Return: returns an integer
 */
int compare(char *X, char *Y)
{
	while (*X && *Y)
	{
	if (*X != *Y)
	return (0);

	X++;
	Y++;
	}

	return (*Y == '\0');
}


/**
 * _strstr - locating a substring
 * compare - comparism
 * @X:first parameter
 * @Y: second parameter
 * Return: a string
 */

char *_strstr(char *X, char *Y)
{
	while (*X != '\0')
	{
	if ((*X == *Y) && compare(X, Y))
	return (X);
	X++;
	}

	return (0);
}
