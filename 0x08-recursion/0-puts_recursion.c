#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _puts_recursion - prints a string followed by new line
 * @s: string to be printed
 *
 * Description: using a recursive call, print all characters in a string
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	/* check for NULL value */
	if (*s == '\0')
	{
		/* move to next line */
		_putchar('\n');
		return;
	}
	/* print single character by dereferencing */
	_putchar(*s);
	/* recursive call & increase pointer position */
	_puts_recursion(s + 1);
}
