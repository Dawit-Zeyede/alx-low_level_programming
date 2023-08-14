#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - intializes struct dog varible type.
  * @d: address of variable to be intialized.
  * @name: first value to be assigned.
  * @age: second value to be assigned.
  * @owner: thrid value to be assigned.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
