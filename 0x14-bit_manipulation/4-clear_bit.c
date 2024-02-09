#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: mm
 * @index: of value
 *
 * Description: sets the value of a bit to 0 at a given index
 * Return: 1 if it works, -1 if not.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = ~mask;
	*n &= mask;
	return (1);
}
