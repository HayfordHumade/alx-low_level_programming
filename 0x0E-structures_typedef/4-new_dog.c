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
void array_char(char *string)
{
	int string_length, i, memory_size;
	char *ptr;

	string_length = 0;
	while (string[string_length] != '\0')
		string_length++;
	memory_size = string_length + 1;
	/* Allocates memory/bytes of 'char' * 'number of characters' */
	ptr = malloc(memory_size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < string_length)
	{
		ptr[i] = string[i];
		i++;
	}
	ptr[string_length] = '\0';

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
	char *dog_name;
	char *dog_owner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	dog_name = array_char(name);
	dog_owner = array_char(owner);

	free(name);
	free(owner);

	newdog->name = dog_name;
	newdog->age = age;
	newdog->owner = dog_owner;
}
