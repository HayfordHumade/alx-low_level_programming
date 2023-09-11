#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: dog parameter
 *
 * Description: Using a string format specifier, print
 * information about a dog.
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
				d->name, d->age, d->owner);
	}
}
