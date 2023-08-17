#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Runs it all
 * @argc: Number of arguments passed into the main function
 * @argv: An array of pointers to the arguments
 *
 * Description: Checks arguments and operator and computes mathematically
 * Return: always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int (*op_function(char *s))(int, int);
	int *a;
	int *b;
	int result;
	char *s;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	if (a == NULL || b == NULL || s == NULL)
		return (NULL);
	op_function = get_op_func(s);
	if (op_function == NULL)
		return (NULL);
	result = op_function(s)(a, b);
	if (result == NULL)
		return (NULL);
	return (result);
}
