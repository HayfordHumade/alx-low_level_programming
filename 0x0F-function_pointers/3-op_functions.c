#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - Function returns the sum of two digits
 * @a: First digit
 * @b: Second digit
 *
 * Description: Does just that
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
 * Description: Does that
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function returns difference between 2 digits
 * @a: First digit
 * @b: Second digit
 *
 * Description: Does that
 * Return: Difference
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function returns difference between 2 digits
 * @a: First digit
 * @b: Second digit
 *
 * Description: Does that
 * Return: Division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function returns difference between 2 digits
 * @a: First digit
 * @b: Second digit
 *
 * Description: Does that
 * Return: Difference
 */
int op_mod(int a, int b)
{
	return (a % b);
}
