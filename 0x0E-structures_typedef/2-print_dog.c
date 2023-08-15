#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Prints everthing about dog
 * @d: Pointer to dog
 *
 * Description: This function prints dog about
 * Return: nothing really.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (98);
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s", d->name);
	if (d->age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %f", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);
}
