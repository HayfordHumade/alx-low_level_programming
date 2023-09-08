#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Description: allocates memory using size 'b'
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	/* without type */
	void *ptr;

	/* check if b is positive */
	if (b < 1)
		exit(98);

	/* allocate memory */
	ptr = malloc(b);
	/* check success */
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
