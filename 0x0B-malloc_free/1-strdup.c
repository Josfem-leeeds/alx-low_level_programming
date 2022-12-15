#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 1, end = 0;
	char *array;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	i += 1;
	array = (char *)malloc(sizeof(char) * i);
	if (array == NULL)
		return (NULL);
	while (end < i)
	{
		array[end] = str[end];
		end++;
	}
	array[end] = '\0';
	return (array);
}
