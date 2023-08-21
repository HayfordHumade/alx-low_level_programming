#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Function prints numbers followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers passed into the function
 * ...: Ellipsis to represent a variadic function receives other parameters
 *
 * Description: Prints numbers in a particular format using a separator
 * Return: Prints integers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	i = 0;
	if (separator == NULL)
	{
		va_end(ap);
		return;
	}
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(ap);
}
