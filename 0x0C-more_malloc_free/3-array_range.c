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
	int *ptr;
	int x;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
