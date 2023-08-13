#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - Create an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Description: All
 * Return: zzz
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int j;
	int tmp;
	int size = 0;

	if (min > max)
		return (NULL);
	/* Find no. of integers between min & max*/
	for (i = min; i <= max; i++)
		size++;
	/* Allocate memory of size 'size' */
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	tmp = min;
	for (j = 0; j < size; j++)
	{
		array[j] = tmp;
		tmp++;
	}
	return (array);
}
