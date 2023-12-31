#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: adds a and b
 * Return: sum.
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}
/**
 * op_sub - subtraction between two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: subtracts b from a
 * Return: difference.
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}
/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: a multiplied by b
 * Return: product.
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: a divided by b
 * Return: division.
 */
int op_div(int a, int b)
{
	return ((a) / (b));
}
/**
 * op_mod - modulo of two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: a modulo b
 * Return: modulo.
 */
int op_mod(int a, int b)
{
	return ((a) % (b));
}
