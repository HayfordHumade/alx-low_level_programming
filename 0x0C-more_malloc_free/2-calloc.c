#include <stdio.h>
#include <stdlib.h>
#include "main.h"
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
	void *array[];
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(sizeof(size) * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}

	return (array);
}
