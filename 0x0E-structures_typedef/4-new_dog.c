#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * *newdog - Create new dog with dog_t
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Description: Funciton creates a new dog structure using the typedef 'dog_t'
 * Return: nothing.
 */
dog_t *newdog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
