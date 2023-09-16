#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_opcodes - prints opcodes in hexadecimal lowercase
 * @filename: program
 * @num_bytes: number of bytes
 *
 * Description: prints opcodes in hex lowercase
 * Return: nothing.
 */
void print_opcodes(const char *filename, int num_bytes)
{
	FILE *file = fopen(filename, "rb");

	if (file == NULL)
	{
		perror("Error opening file");
		return;
	}
	unsigned char buffer;
	int bytes_read = 0;

	while (bytes_read < num_bytes && fread(&buffer, sizeof(buffer), 1, file) == 1)
	{
		/* Convert the opcode to lowercase and print it. */
		printf("%02x", buffer);
		if (bytes_read < (numbytes - 1))
			printf(" ");
		bytes_read++;
	}
	fclose(file);
}
/**
 * main - runs it all
 * @argc: number of arguments
 * @argv: vector of arguments
 *
 * Description: print the opcodes of the main function
 * Return: opcodes.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (2);
	}
	int bytes = atoi(argv[1]);
	char *executable = argv[0];

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(executable, bytes);

	return (0);
}
