#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array
 * @size: takes the size of an array
 * @c: takes a string
 *
 * Description: This creates an array from the string c
 * Return: Pointer to the array created
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	unsigned int counter;
	char *array;

	if (array == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
	{
		array[counter] = c;
	}
	return (array);
}
