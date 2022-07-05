#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - Details of the struct dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's opwner
 *
 * Description: this dog struct indicates the name,
 * age and owner of the dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
