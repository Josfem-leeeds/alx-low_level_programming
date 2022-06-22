#include "main.h"

/**
 * _strspn - the number of bytes the matched character
 * @s: the first parameter
 * @accept: the second parameter
 * Return: returns an unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	char *src = s;
	char *col;

	while (*s)
	{
		for (col = accept; *col; col++)
		{
			if (*s == *col)
				break;
		}
		if (*col == '\0')
			break;
		s++;
	}
	return (s - src);
}
