#include <stdio.h>
#include <stdlib.h>
/**
 * main - runs it all
 * @argc: number of arguments
 * @argv: array of pointers to string
 *
 * Description: prints the name of the program
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	/* this indicates argc is intentionally unused */
	(void)argc;

	return (0);
}
