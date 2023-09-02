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
	int a, b, result;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
