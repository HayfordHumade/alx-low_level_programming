#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * ele_number - Function returns number of elements
 * @s: A char pointer to a string
 *
 * Description: Loops through a string and returns the number of elements
 * Return: integer.
 */
int ele_number(const char *s)
{
	int number = 0;

	if (s == NULL)
		exit(98);
	while (s[number] != '\0')
		number++;

	return (number);
}
/**
 * print_all - Function prints everything
 * @format: Contains argument types
 *
 * Description: Prints everything?
 * Return: all.
 */
void print_all(const char * const format, ...)
{
	int i;
	int size;
	va_list ap;

	if (format == NULL)
		return;
	size = ele_number(format);
	i = 0;
	va_start(ap, format);
	while (i < size)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
			{
				if (&format[i] == NULL)
					printf("(nil)");
				printf("%s", va_arg(ap, char *));
			}
				break;
			default:
				break;
		}
		if (i < (size - 1))
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
