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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
