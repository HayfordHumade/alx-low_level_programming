#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Runtime starts and ends here
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Description: This program prints its name
 * Return: name.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
}
