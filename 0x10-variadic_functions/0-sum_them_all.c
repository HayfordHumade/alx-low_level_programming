#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Function returns the sum of all its parameters
 * @n: Constant n which tells the number of parameters?
 * ...: Ellipsis to show it takes a series of arguements
 *
 * Description: Uses a variadic function template to do this
 * Return: Returns sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		int temp = va_arg(ap, int);

		sum += temp;
		i++;
	}
	va_end(ap);

	return (sum);
}
