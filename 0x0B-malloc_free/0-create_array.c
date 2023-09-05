#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars & initializes it with a char
 * @size: of the array
 * @c: character to initialize with
 *
 * Description: create an array of 'size' and initialize it with 'c'
 * Return: a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int i = 0;

	/* allocate memory for char_array */
	char_array = malloc(size);
	/* check memory & it's size */
	if (char_array == NULL || size < 1)
		return (NULL);
	/* loop through & initialize every byte */
	while (i < size)
	{
		char_array[i] = c;
		i++;
	}

	/* returns pointer to first char in array */
	return (char_array);
}
