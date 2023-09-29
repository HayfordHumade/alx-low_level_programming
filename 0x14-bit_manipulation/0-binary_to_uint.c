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
	unsigned int result;
	int i;

	if (b == NULL)
		return (0);
	result = 0;
	/* keep evaluating until NULL symbol */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* check for unwanted characters */
		if (b[i] != '0' && b[i] != '1')
			return (0);
		/* where the magic happens */
		result = (result << 1) | (b[i] - '0');
	}
	return (result);
}
