#include "main.h"

/**
 * _strchr - the function returns a pointer to the first occurence of char c
 * @s: the first parameter pointer
 * @c: the second parameter to be checked
 * Return: returns a pointer
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
