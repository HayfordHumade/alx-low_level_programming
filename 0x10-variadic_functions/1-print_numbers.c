#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Print numbers on screen, new line
 * @separator: as the name goes but for string
 * @n: Number of numbers
 * @...: elipsis refers to variable number of numbers
 *
 * Description: This function takes variable arguments and prints
 * Return: numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(numbers, int);
		int tmp = num;
		if (tmp < 0)
		{
			_putchar('-');
			num = -num;
		}
		
		int num_digits = 1;
		
		while (tmp /= 10)
			num_digits *= 10;
		while (num_digits)
		{
			int digit = num / num_digits;

			_putchar(digit + '0');
			num %= num_digits;
			num_digits /= 10;
		}
		if (i != (n - 1) && separator != NULL)
		{
			while (*separator)
			{
				_putchar(*separator);
				separator++;
			}
		}
		_putchar('\n');
		var_end(numbers);
}
