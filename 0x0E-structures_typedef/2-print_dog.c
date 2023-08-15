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
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
