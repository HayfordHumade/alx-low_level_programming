#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: between printed numbers
 * @n: number of integers passed into the function
 * ...: shows its a variadic function
 *
 * Description: prints all numbers followed by a new line
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	/* initializing ap list */
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		/* print integer */
		printf("%d", va_arg(ap, int));
		/* check separator for NULL */
		if (i < (n - 1))
		{
			/* print seprator for all except the last integer */
			if (separator != NULL)
			{
				j = 0;
				/* print all characters in separator */
				while (*(separator + j) != '\0')
					printf("%c", *(separator + j++));
			}
		}
	}
	/* jump to next line */
	printf("\n");

	va_end(ap);
}
