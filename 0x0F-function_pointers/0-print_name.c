#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - A fucntion that prints a name
 * @name: Name of person
 * @f: A function pointer
 *
 * Description: This function takes two parameters, a char and funciton
 * pointer.
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (NULL)tt;
	f(name);
}
