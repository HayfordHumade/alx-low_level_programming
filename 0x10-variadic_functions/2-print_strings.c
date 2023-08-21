#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Function prints strings followed by a new line
 * @separator: String to be printed between the strings
 * @n: Number of strings passed to the function
 * ...: Ellipsis indicating variadic function taking other parameters
 *
 * Description: Prints strings with separators between them
 * Return: Strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		char *string = (char *)va_arg(ap, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (i < (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
