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
		free(d->name);
		free(d->owner);
		free(d);
	}
}
