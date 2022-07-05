#ifndef _DOG_H_
#define _DOG_H_
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

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */
