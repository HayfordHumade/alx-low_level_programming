#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Description: converst a binary number to an unsigned int
 * Return: converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int size, result, i;

	if (b == NULL)
		return (0);
	size = 0;
	while (b[size] != '\0')
		size++;
	result = 0;
	for (i = 0; i < size; i++)
	{
		int p = size - 1;
		if (b[i] == '1')
			result += (i << p--);
	}

	return (result);
}
