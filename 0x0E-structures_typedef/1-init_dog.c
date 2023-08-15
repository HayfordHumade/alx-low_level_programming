#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: Struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: Owner of dog
 *
 * Description: Initilizing, that's all
 * Return; dog?
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
