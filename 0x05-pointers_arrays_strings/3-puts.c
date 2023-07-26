#include <stdio.h>
#include "main.h"
/**
 * _puts - print a string
 * @str: parameter receiving string input from source code
 *
 * Description: This code prints string values using _putchar
 * Return: Returns string
 */
void _puts(char *str)
{
	int counter;

	counter = 0;
	while (*(str + counter) != 0)
	{
		_putchar(*(str + counter));
		counter++;
	}
	_putchar('\n');
}
