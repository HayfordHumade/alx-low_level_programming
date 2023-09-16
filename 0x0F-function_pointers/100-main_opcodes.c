#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <string.h>
#include <ctype.h>
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
	int bytes;
	char *executable;

	bytes = atoi(argv[1]);
	executable = argv[0];
	if (argc == 2)
	{
		char command[256];
		snprintf(command, sizeof(command), "objdump -d -
				j.text -M intel %s | grep '<main>:", executable);
		FILE *pipe = popen(command, "r");
		if (!pipe)
		{
			perror("popen");
			return (3);
		}

		char buffer[128];
		int bytes_printed = 0;

		while (fgets(buffer, sizeof(buffer), pipe))
		{
			for (int i = 0; buffer[i]; i++)
			{
				char c = tolower(buffer[i]);
				putchar(c);
				bytes_printed++;
				if (bytes_printed == number of bytes)
					break;
			}
			if (bytes_printed == bytes)
				break;
		}
		pclose(pipe);
	}
	else
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}
