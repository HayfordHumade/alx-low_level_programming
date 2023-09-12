#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"
/**
 * init_dog - initialzes a variable of type dog
 * @d: a parameter of type 'struct dog'
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 *
 * Description: this function a structure of type struct dog
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL)
		name = "Unknown";
	if (owner == NULL)
		owner = "Unknown";

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
