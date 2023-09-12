#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - This function frees a dog
 * @d: x
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
