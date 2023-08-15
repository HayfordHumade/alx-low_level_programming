#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Well, this is a dog
 * dog_t - Typedef for 'struct dog'
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Who owns the dog?
 *
 * Description: This stucture is all about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

#endif
