#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - Function allocates memory using malloc
 * @b: Number of integer values
 *
 * Description: Checks malloc for success or fail too
 * Return: 98 for malloc fail
 */
void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);
	if (memory == NULL)
	{
		_putchar('98');
		return (1);
	}
	free(memory);
}
