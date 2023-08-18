#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Function to sum them all
 * @n: Number of arguments passed into the function
 * @...: Elipsis represents a vriable number of arguments
 *
 * Description: This function adds all parameters
 * Return: Sum of arguments. if n==0, 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list app;
	unsigned int x;
	unsigned int sum = 0;

	va_start(app, n);
	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(app, int);
	}
	va_end(app);

	return (sum);
}
