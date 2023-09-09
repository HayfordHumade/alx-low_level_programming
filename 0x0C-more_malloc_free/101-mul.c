#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
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
void mul(mpz_t res, mpz_t num1, mpz_t num2)
{
	/*if (*num1 < 0 || *num2 < 0)
		error();*/
	mpz_mul(res, num1, num2);
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
	mpz_t num_1, num_2, result;

	mpz_init(num_1);
	mpz_init(num_2);
	mpz_init(result);
	/* check number of arguments */
	if (argc != 3)
		error();
	/* check if passed values are positive */
	mpz_set_str(num_1, argv[1], 10);
	mpz_set_str(num_2, argv[2], 10);
	/* print result */
	mul(result, num_1, num_2);
	gmp_printf("%Zd\n", result);

	mpz_clear(num_1);
	mpz_clear(num_2);
	mpz_clear(result);

	return (0);
}
