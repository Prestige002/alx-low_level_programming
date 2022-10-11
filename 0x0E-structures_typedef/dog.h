<<<<<<< HEAD
#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - structure dog
 * @name: atribute pointer to char name's dog
 * @age: atribute float age's dog
 * @owner: atribute pointer to char owner's dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
=======
#include <stdlib.h>
#include "dog.h"
/**
  *init_dog - initializes a variable of type struct dog.
  *@d: pointer to structure.
  *@name: first member.
  *@age: second member.
  *@owner: third member.
  *
  *Return: void.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
>>>>>>> d5b9054093d53f76e2b116cee318aac65363e495
