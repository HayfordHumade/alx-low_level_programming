#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - where it all happens
 * @argc: argument number
 * @argv: argument vector or arrary
 *
 * Description: takes arguments and computes for a value
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;
	int (*function)(int, int);

	/* check number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	/* check for division by or modulo 0 */
	if ((*op == '\\' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	function = get_op_func(op);
	/* check function for NULL */
	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = function(num1, num2);
	printf("%d\n", result);

	return (0);
}
