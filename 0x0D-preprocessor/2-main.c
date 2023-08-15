#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Print the name of the file being compiled
 *
 * Description: Do it using preprocessing directive __FILE__
 * Return: Always 0.
 */
void main(void)
{
	printf(__FILE__);
	_putchar('\n');
	return (0);
}
