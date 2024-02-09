#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Description: prints the binary representation of a number
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	int bit_position = sizeof(n) * 8 - 1;
	int binary_digit, binary_started;

	binary_started = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (bit_position >= 0)
	{
		binary_digit = (n >> bit_position) & 1;
		if (binary_digit || binary_started)
		{
			putchar(binary_digit ? '1' : '0');
			binary_started = 1;
		}
		bit_position--;
	}
}
