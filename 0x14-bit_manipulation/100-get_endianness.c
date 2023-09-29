#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Description: checks
 * Return: 0 if big endian, 1 if little.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *byte = (char *)&x;

	return ((int)*byte);
}
