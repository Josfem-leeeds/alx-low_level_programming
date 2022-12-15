#include "main.h"
#include <stdlib>

/**
 * malloc_checked - this function allocates memory using malloc
 * @b: the parameter recieved by the function
 *
 * Return: this returns a pointer
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	return (ptr);
}
