#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - Prints everything
 * @format: Contains argument types
 *
 * Description: Prints everything?
 * Return: all.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *se;

	se = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", se, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", se, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", se, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", se, str);
					break;
				default:
					i++;
					continue;
			}
			se = ",";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
