#ifndef DOG_H
#define DOG_H
/**
  * struct dog - Dog details
  * @name: pointer towards the name of dog.
  * @age: age of the dog.
  * @owner: owner of the dog.
  *
  * This is a header file for data type called dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
