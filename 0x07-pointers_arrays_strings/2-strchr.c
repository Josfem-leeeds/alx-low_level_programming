#include "main.h"

/**
 * _strchr - the function returns a pointer to the first occurence of char c
 * @s: the first parameter pointer
 * @c: the second parameter to be checked
 * Return: returns a pointer
 */
char *_strchr(char *s, char c)
{
	do {

		if (*s == c)
		return (s);
	} while (s++);
	return (NULL);
}
