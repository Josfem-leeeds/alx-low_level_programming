#include "main.h"

/**
 * _strpbrk - function searches a string for any of a set of bytes
 * @s: first parameter
 * @accept: second parameter
 * Return: returns a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int index, j, position, flag = 0;

	for (index = 0; s[index] != '\0'; index++)
	position = index;
	for (index = 0; accept[index] != '\0'; index++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[index] == s[j])
			{
				if (j <= position)
				{
					position = j;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
	{
		return (&s[position]);
	}
	else
	{
		return (0);
	}
}
