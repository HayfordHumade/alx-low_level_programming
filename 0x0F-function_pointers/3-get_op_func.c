#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - This function returns a function pointer
 * @s: Receives operator +, -, /, % or *
 *
 * Description: Checks which function operator 's' corresponds to
 * Return: function pointer.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (*(ops[i].op) != NULL && *(ops[i].op != *s)
		i++;

	if (*(ops[i].op) == NULL)
		return (NULL);

	return (ops[i].f);
}
