#include <stdio.h>
#include <stdlib.h>
/**
 * main - runs it all
 * @argc: number of arguments
 * @argv: array of pointers to strings
 *
 * Description: adds integer arguments
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int result, n;

	n = 1;
	result = 0;
	if (argc <= 1)
		printf("%d\n", 0);
	else
	{
		while (n < argc)
		{
			if (atoi(argv[n]) >= 0)
			{
				result += atoi(argv[n]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			n++;
		}
		printf("%d\n", result);
	}

	return (0);
}
