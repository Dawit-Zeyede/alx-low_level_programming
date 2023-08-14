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
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
	else
		return;
}
