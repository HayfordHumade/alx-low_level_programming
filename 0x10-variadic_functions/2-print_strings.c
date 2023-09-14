#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @separator: between strings
 * @n: number of strings passed
 *
 * Description: print strings followed by a new line.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	/* initialize variadic list */
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		/* assign next argument in list to a char * */
		s = va_arg(ap, char *);
		/* check s for NULL */
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		/* check position of string & separator for NULL */
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	/* new line */
	printf("\n");
	va_end(ap);
}
