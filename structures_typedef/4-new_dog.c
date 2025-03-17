#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and stores a copy of name and owner
 * @name: pointer to the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: Pointer to the new dog_t structure, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *new_dog;
int name_len, owner_len;
	/* memory allocation for the structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return (NULL);

	/* calculate the length of name and owner */
	name_len = strlen(name);
	owner_len = strlen(owner);


	/* allocation and copy the name */
	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name); /* copy the name */


	/* allocation and copy the owner */
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->owner, owner); /*copy the owner */


	/* set age */
	new_dog->age = age;

	return (new_dog);

}
