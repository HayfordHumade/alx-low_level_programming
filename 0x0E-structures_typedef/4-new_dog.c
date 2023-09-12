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
	char *new_name;
	char *new_owner;

	new_name = name;
	new_owner = owner;
	/* allocate memory for new_dog */
	new_dog = malloc(sizeof(dog_t));
	/* always check if memory allocation is a success */
	if (new_dog != NULL)
	{
		if (new_name == NULL || new_owner == NULL)
			return (NULL);
		new_dog->name = new_name;
		new_dog->age = age;
		new_dog->owner = new_owner;
	}
	else
	{
		free(new_name);
		free(new_owner);
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	/* return pointer to new_dog */
	return (new_dog);
}
