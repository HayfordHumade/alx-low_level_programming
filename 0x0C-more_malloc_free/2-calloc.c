#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *_calloc - Allocates memory for an arry
 * @nmemb: integer
 * @size: size integer
 *
 * Description: This function allocates memory for an array
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;
	unsigned int total_bytes;

	total_bytes = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* Allocate memory of size 'total_bytes' */
	array = malloc(total_bytes);
	if (array == NULL)
		return (NULL);
	/*Set each byte/memory to zero */
	for (i = 0; i < total_bytes; i++)
		array[i] = 0;

	return (array);
}
