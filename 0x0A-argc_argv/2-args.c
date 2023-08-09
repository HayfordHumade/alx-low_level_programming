#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Runs everything
 * @argc: Argument count
 * @argv: Argument vector or array
 *
 * Description: This program prints all arguments on each line
 * Return: Return string arguments
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
