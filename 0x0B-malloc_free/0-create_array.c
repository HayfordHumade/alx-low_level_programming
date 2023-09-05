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

	char_array = malloc(size);
	while (i < size)
	{
		char_array[i] = c;
		i++;
	}

	return (char_array);
}
