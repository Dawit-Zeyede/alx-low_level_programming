#include <stdio.h>
#include <stddef.h>
#include "dog.h"
/**
  * print_dog - print dog information.
  * @d: dog information address.
  *
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("(nil)\n");
	if (d->owner == NULL)
		printf("(nil)\n");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
