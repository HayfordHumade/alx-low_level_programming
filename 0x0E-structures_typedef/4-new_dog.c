#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * str_copy - copies a string from a memory pointer
 * @str: string to be copied
 *
 * Description: Copies a string from a pointer location
 * into a new string.
 * Return: pointer.
 */
void str_copy(char *str, char *s)
{
	int size, i;

	if (str != NULL)
	{
		size = 0;
		while (str[size] != '\0')
			size++;
		s = malloc(size + 1);
		if (s != NULL)
		{
			for (i = 0; i < size; i++)
				s[i] = str[i];
		}
		else
			exit(98);
		s[size] = '\0';
	}
	else
		s = NULL;
}
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
	char *new_name, *new_owner;
	int name_size, owner_size;

	name_size = 0, owner_size = 0;
	if (name != NULL && owner != NULL)
	{
		while (name[name_size] != '\0')
			name_size++;
		while (owner[owner_size] != '\0')
			owner_size++;
	}
	else
		return (NULL);
	new_name = malloc(name_size + 1);
	new_owner = malloc(owner_size + 1);
	str_copy(name, new_name);
	str_copy(owner, new_owner);
	/* allocate memory for new_dog */
	new_dog = malloc(sizeof(dog_t));
	/* always check if memory allocation is a success */
	if (new_dog != NULL)
	{
		if (new_name == NULL || new_owner == NULL)
		{
			free(new_name);
			free(new_owner);
			free(new_dog);
			return (NULL);
		}
		new_dog->name = new_name;
		new_dog->age = age;
		new_dog->owner = new_owner;
	}
	else
	{
		free(new_name);
		free(new_owner);
		free(new_dog);
		return (NULL);
	}

	/* return pointer to new_dog */
	return (new_dog);
}
