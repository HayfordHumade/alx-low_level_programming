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
	/* custom structure variable, op_t array */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	/* check s for NULL & check if s has only one character */
	if (s != NULL && s[1] == '\0')
	{
		i = 0;
		/* compare s to operators for a match */
		while (ops[i].op != NULL && *(ops[i].op) != *s)
			i++;
		/* pass match index into correspondng function */
		return (ops[i].f);
	}

	return (NULL);
}
