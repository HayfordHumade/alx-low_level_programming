#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - A function executes another function on each element
 * of an array
 * @array: Pointer to array to loop through
 * @size: Memory size to be allocated using data type size_t
 * @action: Function pointer
 *
 * Description: This function executes another function
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
