#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about the dog
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 *
 * Description: gives all information about a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
