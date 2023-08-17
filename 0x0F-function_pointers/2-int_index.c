#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - A function that searches for an integer
 * @array: Array to search from
 * @size: Number of elements in array
 * @cmp: Function pointer to compare values
 *
 * Description: Serches array to find an integer
 * Return: -1 if no element matches/size<=0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
