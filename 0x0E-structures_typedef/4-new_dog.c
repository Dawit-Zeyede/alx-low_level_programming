#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
  * new_dog - new object for new data type.
  * @name: naem of the dog.
  * @age: age of the dog.
  * @owner: owner of the dog.
  * Return: returns the address of the new dog.
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
