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

	counter = 0;
	while (*(s + counter) != 0)
	{
		counter++;
		continue;
	}

	int i;
	int reduce;

	reduce = counter - 1;
	for (i = reduce; i <= 0; i++)
	{
		_putchar(*(s + reduce));
		reduce--;
	}
	_putchar('\n');
}
