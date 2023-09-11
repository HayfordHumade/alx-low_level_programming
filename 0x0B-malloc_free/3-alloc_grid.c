#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: of the array
 * @height: of the array
 *
 * Description: create a 2d array
 * Return: pointer to array.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	/* check width or height */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* allocate memory for arr pointers */
	arr = (int **)malloc(sizeof(int *) * height);
	/* allocate memory for arr integers */
	for (i = 0; i < height; i++)
		arr[i] = (int *)malloc(sizeof(int *) * width);
	/* check arr for NULL */
	if (arr == NULL)
	{
		for (i = 0; i < height; i++)
			free(&arr[i]);
		free(arr);
		return (NULL);
	}
	/* initializing 2D array */
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
