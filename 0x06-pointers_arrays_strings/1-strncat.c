#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two string
 * @dest: parameter 1
 * @src: parametr 2
 * @n: parameter 3
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
