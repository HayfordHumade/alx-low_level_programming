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
	int string_length, i, memory_size;
	char *ptr;

	if (string == NULL)
		return (NULL);
	string_length = 0;
	while (string[string_length] != '\0')
		string_length++;
	memory_size = string_length + 1;
	/* Allocates memory/bytes of 'char' * 'number of characters' */
	ptr = malloc(memory_size);
	if (ptr == NULL)
	{
		free(ptr);
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
	dog_t *newdog = NULL;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = array_char(name);
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->owner = array_char(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	free(array_char(name));
	free(array_char(owner));

	return (newdog);
}
