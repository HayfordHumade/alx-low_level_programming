#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - loops through a given array and executes a function
 * @array: containing data
 * @size: of array
 * @action: a pointer to a function
 *
 * Description: executes a function given as a parameter
 * on each element of an array.
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* check array & action for NULL */
	if (array != NULL && action != NULL)
	{
		/* loop through array & pass each member through action */
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
