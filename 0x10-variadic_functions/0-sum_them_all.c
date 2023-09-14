#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all arguments
 * @n: number of integers
 * @...: ellipsis to receive an indefinite number of arguments
 *
 * Description: function receives a first argument to be the
 * number of arguments and adds them one after the other
 * and returns the result.
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	/* declare a list */
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	sum = 0;
	/* initialize the list */
	va_start(ap, n);
	/* loop through the list & add the values to sum */
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	/* clean ap */
	va_end(ap);

	return (sum);
}
