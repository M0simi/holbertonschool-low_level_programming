#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure to define a dog
 * @name: Pointer to dog's name
 * @age: Dog's age
 * @owner: Pointer to owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
