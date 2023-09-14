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
	int num1, num2;
	char *op;
	int (*function)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '\\' || *op == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	function = get_op_func(op);
	printf("%d\n", function(num1, num2));

	return (0);
}
