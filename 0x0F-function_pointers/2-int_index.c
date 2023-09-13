#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: of integers
 * @size: of array
 * @cmp: a pointer to function that compares values
 *
 * Description: searches array for a specific integer by
 * using a comparison function that cmp points to
 * Return: index of matching element-1 if no match or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	/* check array & cmp for NULL */
	if (array != NULL && cmp != NULL)
	{
		/* return -1 if size is negative */
		if (size <= 0)
			return (-1);
		/* loop through array and pass its members into cmp */
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			/* return index of array member if true */
			if (result == 1)
				return (i);
		}
		/* return -1 if false */
		if (result == 0)
			return (-1);
	}

	return (-1);
}
