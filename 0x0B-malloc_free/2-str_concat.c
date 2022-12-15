#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - string concatenator
 * @s1: first parameter
 * @s2: second parameter
 * Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1, len2, len3, len4;

	len1 = 0;
	len2 = 0;
	len3 = 0;
	len4 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	len3 = len1 + len2 + 1;
	concat = (char *)malloc(sizeof(char) * len3);
	if (concat == NULL)
		return (NULL);
	len2 = 0;
	len3 = len3 - 1;
	while (len2 < len3)
	{
		if (len4 < len3)
			concat[len4] = s1[len4];
		if (len4 >= len1)
		{
			concat[len4] = s2[len2];
			len2++;
		}
		len4++;
	}
	concat[len4] = '\0';
	return (concat);
}
