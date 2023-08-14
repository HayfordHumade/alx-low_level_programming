#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * error - A function that prints an 'Error'
 *
 * Description: Prints 'Error' and exits code
 * Return: 'Error'
 */
void error(void)
{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
}
/**
 * mul - Multiplies two positive integers
 * @num1: First integer
 * @num2: Second integer
 *
 * Description: Multiplies num1 by num2
 * Return: multiply value
 */
int mul(int num1, int num2)
{
	int multiply;

	if (sizeof(num1) != sizeof(unsigned int) || sizeof(num2) != sizeof(unsigned int))
	{
		error();
	}
	multiply = num1 * num2;

	return (multiply);
}
/**
 * main - Runs everything
 *
 * Descrition: Uses functions above to compute multiplication
 * Return: Always 0.
 */
int main(int *argc, char *argv[])
{
	int num_1;
	int num_2;

	num_1 = argv[1];
	num_2 = argv[2];
	if (argc > 3)
		error();
	else
		mul(num_1, num_2);
	return (0);
}
