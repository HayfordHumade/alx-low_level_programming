#include <stdio.h>
#include <stdlib.h>
/**
 * main - runs it all
 * @argc: number of arguments
 * @argv: array of pointers to strings
 *
 * Description: multiplies two numbers
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int a, b;

	a = (int)argv[1];
	b = (int)arg[3];
	if (argc == 3)
	{
		printf("%d\n", a * b);
	}
	else
		printf("Error\n");

	return (0);
}
