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
	unsigned int i = 0;
	unsigned int l;

	l = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	while (i < nmemb)
	{
		array[i] = 0;
		i++;
	}

	return (array);
}
