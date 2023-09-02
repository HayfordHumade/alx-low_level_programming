#include <stdio.h>
#include <stdlib.h>
/**
 * main - runs it all
 * @argc: number of arguments
 * @argv: an array of pointers to strings
 *
 * Description: a program that prints the number of arguments
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	/* print number of arguments */
	printf("%d\n", argc);

	/* compiler ignores argv not in use */
	(void)argv;

	return (0);
}
