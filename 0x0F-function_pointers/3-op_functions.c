#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * op_add - Function returns the sum of two digits
 * @a: First digit
 * @b: Second digit
 *
 * Description: Adds a and b
 * Return: The sum of digits 'a' and 'b'
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Function returns difference between 2 digits
 * @a: First digit
 * @b: Second digit
 *
 * Description: Subtracts b from a
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function computes a multiplied by b
 * @a: First digit
 * @b: Second digit
 *
 * Description: Multiplies a by b
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function computes a divided by b
 * @a: First digit
 * @b: Second digit
 *
 * Description: Divides a over b
 * Return: Division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function returns a modulo b
 * @a: First digit
 * @b: Second digit
 *
 * Description: Computes remainder when a is divided by b
 * Return: remainder.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
