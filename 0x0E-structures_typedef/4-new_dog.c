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
	if (new_name == NULL)
		new_name = "";
	if (new_owner == NULL)
		new_owner = "";
	/* allocate memory for new_dog */
	new_dog = malloc(sizeof(dog_t));
	/* always check if memory allocation is a success */
	if (new_dog != NULL)
	{
		if (new_name == NULL)
			new_owner = "";
		if (new_name == NULL)
			new_owner == "";
		new_dog->name = new_name;
		new_dog->age = age;
		new_dog->owner = new_owner;
	}
	else
		return (NULL);

	/* return pointer to new_dog */
	return (new_dog);
}
