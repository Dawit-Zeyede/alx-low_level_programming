#include <stdlib.h>
#include <string.h>
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
	int len1;
	int len2;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	len1 = strlen(name) + 1;
	len2 = strlen(owner) + 1;
	new->name = malloc(sizeof(char) * len1);
	new->owner = malloc(sizeof(char) * len2);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}
	strcpy(new->name, name);
	strcpy(new->owner, owner);
	new->age = age;
	return (new);
}
