#include <stdio.h>
#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: Integer parameter
 * @b: Integer parameter
 *
 * Description: swap *a and *b values
 * Return: Swap values
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
