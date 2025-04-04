#include <stddef.h> /* to use NULL */
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL) /* makesure the pointer not empty */
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
