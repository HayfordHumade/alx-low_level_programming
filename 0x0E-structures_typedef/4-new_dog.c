#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: of new_dog
 * @age: of new dog
 * @owner: of new dog
 *
 * Description: create a new dog with the parameters above
 * Return: pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* declare new dog variable of type dog_t */
	dog_t *new_dog;

	/* allocate memory for new_dog */
	new_dog = malloc(sizeof(dog_t));
	/* always check if memory allocation is a success */
	if (new_dog != NULL)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}
	else
		return (NULL);

	/* return pointer to new_dog */
	return (new_dog);
}
