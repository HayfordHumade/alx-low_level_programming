#include <stdio.h>
#include "main.h"
/**
 * print_rev - Print a string in reverse
 * @s: holds string from source code
 *
 * Description: Prints string in reverse
 * Return: Returns reversed string
 */
void print_rev(char *s)
{
	int counter;

	counter = '\0';
	while (counter != *s)
	{
		_putchar(*(s + counter));
		counter--;
	}
	_putchar('\n');
}
