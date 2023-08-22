#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Function prints everything
 * @format: Contains argument types
 *
 * Description: Prints everything?
 * Return: all.
 */
void print_all(const char * const format, ...)
{
	int i = 0, print_separator;
	va_list ap;
	char *string;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				print_separator = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				print_separator = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				print_separator = 1;
				break;
			case 's':
				string = va_arg(ap, char *);
				if (string == NULL)
				{
					printf("(nil)");
				}
				printf("%s", string);
				print_separator = 1;
				break;
			default:
				print_separator = 0;
				break;
		}
		if (print_separator == 1 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
