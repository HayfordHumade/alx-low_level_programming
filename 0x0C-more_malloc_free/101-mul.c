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
	if (num1 < 0 || num2 < 0)
	{
		error();
	}

	return (num1 * num2);
}
/**
 * main - Runs everything
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Descrition: Uses functions above to compute multiplication
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num_1;
	int num_2;

	/* check number of arguments */
	if (argc != 3)
		error();
	/* assign numbers to be multiplied */
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);
	/* print result */
	printf("%d\n", mul(num_1, num_2));

	return (0);
}
