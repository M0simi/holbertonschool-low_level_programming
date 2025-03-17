#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the details of a struct dog
 * @d: pointer to struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return; /* if d empty don't print any thing */

	/* print the name */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* print age */
		printf("Age: %f\n", d->age);

		/* print owner */
		if (d->owner == NULL)
		printf("Owner: (nil)\n");
		else
		printf("Owner: %s\n", d->owner);
}
