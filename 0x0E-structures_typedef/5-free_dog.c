#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - this frees the allocated memory
 * @d: the pointer parameter
 *
 * Return: this function returns nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
