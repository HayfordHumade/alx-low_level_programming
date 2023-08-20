#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"
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
	int num1;
	int num2;
	char *operator;
	/* int (*func_ptr)(int, int); */

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (!get_op_func(operator))
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator == '/' && num2 == 0) || (opearator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}


	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
