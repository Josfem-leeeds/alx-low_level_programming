#include <stdio.h>
#include "dog.h"
/**
 * print_dog - this prints the dog's info
 * @d: the first parameter which is a member of struct
 * Return: nothing 0 success
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: nil\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: nil\n");
	}
}
