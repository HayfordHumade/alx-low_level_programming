#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits to be flipped
 * @n: mm
 * @m: nn
 *
 * Description: returns the number of bits you would need
 * to flip to get from one number to another
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		if (xor_result & 1)
			count++;
		xor_result >>= 1;
	}
	return (count);
}
