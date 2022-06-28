#include "main.h"

/**
 * _strdup - Function copies the string given as a parameter
 * @str: pointer to an array
 * Return: this returns a pointer
 */
char *_strdup(char *str)
{
	char *src;
	char *p;
	int len = 0;

	while (str[len])
		len++;
	src = malloc(len + 1);/* newly allocated space */
	p = src;
	while (*str)
		*p++ = *str;
	*p = '\0';
	return (src);
}
