#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - deallocating memory space of the DOG.
  * @d: memory address to be freed.
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
