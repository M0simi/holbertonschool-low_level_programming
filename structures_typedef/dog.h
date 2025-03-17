#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure to define a dog
 * @name: Pointer to dog's name
 * @age: Dog's age
 * @owner: Pointer to owner's name
 * define struct have the dog information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* deifne dog_t as an alternative name */
typedef struct dog dog_t;

/* function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
