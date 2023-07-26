#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - Prints half of a string
 * @str: takes string variables
 *
 * Description: Prints only half of a string
 * Return: A part of a string, half.
 */
void puts_half(char *str)
{
	int length;
	int counter;

	length = strlen(str);
	if (length % 2 == 1)
	{
		for (counter = ((length - 1) / 2); counter <= length; counter++)
		{
			_putchar(*(str + counter));
		}
	}
	else
	{
		for (counter = (length / 2); counter <= length; counter++)
		{
			_putchar(*(str + counter));
		}
	}
	_putchar('\n');
}
