#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints lower case alphabets
 *
 * Description: Prints them 10 times
 * Return: lower case alphabets
 */
void print_alphabet_x10(void)
{
	int counter;
	int alpha;

	for (counter = 0; counter < 10; counter++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
