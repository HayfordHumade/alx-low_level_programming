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
	/* pass name into the function pointer f */
	if (name != NULL)
		f(name);
}
