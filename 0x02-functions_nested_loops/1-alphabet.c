#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prototype to print lowercase alphabet
 *
 * Description: This prints lowercase alphabet and a adds new line
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int counter;

	for (counter = 97; counter <= 122; counter++)
	{
		_putchar(counter);
	}
	_putchar('\n');
	return (0);
}
