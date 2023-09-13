#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: to be printed
 * @f: a function pointer
 *
 * Description: prints a name
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	/* check name & f for NULL then pass name into f */
	if (name != NULL && f != NULL)
		f(name);
}
