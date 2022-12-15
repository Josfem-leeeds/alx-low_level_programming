# include "main.h"

/**
 * _memcpy - Function copies the a block of code
 * @dest: the destination of the block of code
 * @src: the source of the block of code
 * @n: the nmber of times the code should be repeated.
 * Return: this returns an array of character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
