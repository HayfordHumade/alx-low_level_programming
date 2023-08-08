#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks for lower case characters
 * @c: Variable that accepts integer values
 *
 * Description: Uses c to receive variable sto process
 * Return: 1 if c is lowercase or 0 if otherwise
 */
int _islower(int c)
{
	int value;

	value = (int)c;
	if (value >= 97 && value <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
