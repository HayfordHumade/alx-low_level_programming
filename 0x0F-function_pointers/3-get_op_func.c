#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * (*get_op_func(char *s))(int, int) - This function returns a function pointer
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
		{"%", op_mod}
	};
	int i = 0;

	while (i < 5)
	{
		if (ops[i].op == s)
			return (ops[i].f);
	}
	return (NULL);
}