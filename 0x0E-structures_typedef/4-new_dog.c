#include <stdio.h>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_read, owner_read, count;
	dog_t *dog_ptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog_ptr = malloc(sizeof(dog_t));
	if (dog_ptr == NULL)
		return (NULL);
	for (name_read = 0; name[name_read]; name_read++)
		;
	name_read++;
	dog_ptr->name = malloc(name_read * sizeof(char));
	if (dog_ptr->name == NULL)
	{
		free(dog_ptr);
		return (NULL);
	}
	for (count = 0; count < name_read; count++)
		dog_ptr->name[count] = name[count];
	dog_ptr->age = age;
	for (owner_read = 0; owner[owner_read]; owner_read++)
		;
	owner_read++;
	dog_ptr->owner = malloc(owner_read * sizeof(char));
	if (dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr);
		return (NULL);
	}
	for (count = 0; count < owner_read; count++)
		dog_ptr->owner[count] = owner[count];
	return (dog_ptr);
}
