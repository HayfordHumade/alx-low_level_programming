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
	int (*op_function)(int, int);
	int num1;
	int num2;
	int result;
	char *s;

	if (argc != 4)
		return;
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	s = argv[2];
	if (b == 0)
		return;
	if (s == NULL)
		return;
	op_function = get_op_func(s);
	result = op_function(num1, num2);

	return (result);
}
