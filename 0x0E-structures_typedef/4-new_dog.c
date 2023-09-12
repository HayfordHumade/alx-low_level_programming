#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * array_char - Function to allocate memory
 * @string: Takes char pointers
 *
 * Description: This function allocates the right memory and returns
 * a pointer to the memory
 * Return: Pointer to char allocated memory.
 */
char *array_char(char *string)
{
	int string_length, i;
	char *ptr;

	if (string == NULL)
		return (NULL);
	string_length = 0;
	while (string[string_length] != '\0')
		string_length++;
	/* Allocates memory/bytes of 'char' * 'number of characters' */
	ptr = malloc(string_length + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < string_length)
	{
		ptr[i] = string[i];
		i++;
	}

	return (ptr);
}
/**
 * new_dog - Create new dog with dog_t
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Description: Funciton creates a new dog structure using the typedef 'dog_t'
 * Return: nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog != NULL)
	{
		if (name == NULL || owner == NULL)
			return (NULL);
		newdog->name = array_char(name);
		if (newdog->name == NULL)
		{
			free(newdog);
			return (NULL);
		}
		newdog->owner = array_char(owner);
		if (newdog->owner == NULL)
		{
			free(newdog->name);
			free(newdog);
			return (NULL);
		}
		newdog->age = age;
	}
	else
	{
		free(newdog);
		return (NULL);
	}

	return (newdog);
}
