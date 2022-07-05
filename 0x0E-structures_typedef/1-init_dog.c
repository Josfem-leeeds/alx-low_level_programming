#include "dog.h"
#include "main.h"
#include <stdlib.h>
/**
 * init_dog - struct dog initializer
 * @d: first member
 * @name: the name initializer
 * @age: the age initializer
 * @owner: the owner initializer
 * Return: nothing just initializer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
