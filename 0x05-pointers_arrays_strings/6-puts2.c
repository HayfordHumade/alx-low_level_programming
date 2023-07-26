#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - Prints every second character from a strin
 * @str: holds the string
 *
 * Description: Prints every other character
 * Return: characters
 */
void puts2(char *str)
{
	int length;
	int counter;
	int character;

	length = strlen(str);
	counter = 0;
	character = 0;
	while (counter <= length)
	{
		_putchar(*(str + character));
		character += 2;
		counter++;
	}
	_putchar('\n');
}
