#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - Allocates a memory block and free
 * @ptr: Pointer to old memory block
 * @old_size: Unsigned integer giving old memory size
 * @new_size: Unsigned integer giving new memory size
 *
 * Description: This function increases the size of an already
 * allocated memory.
 * Return: pointer ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* allocate memory of new_size */
	if (new_size > old_size)
		new_ptr = malloc(new_size);
	/* free memory block, ptr */
	free(ptr);

	return (new_ptr);
}
