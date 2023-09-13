#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - calls a function based on the operator specified
 * @s: operator
 *
 * Description: checks s for operators such as +, -, / and
 * returns a pointer to the appropriate function.
 * Return: pointer to a function.
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
	int i;

	i = 0;
	while (ops[i].op != NULL && ops[i].op == *s)
	{
		return (ops[i].f);
		i++;
	}
}
