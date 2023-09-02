#include <stdio.h>
#include <stdlib.h>
/**
 * main - runs it all
 * @argc: number of arguments
 * @argv: array of pointers to strings
 *
 * Descriptioin: prints every argument on a new line
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int n = 0;

	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}

	return (0);
}
