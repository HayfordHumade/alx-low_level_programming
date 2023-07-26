#include <stdio.h>
#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: string
 *
 * Description: Output the length of string at address *s
 * Return: Length of a string
 */
int _strlen(char *s)
{
	/* counter refers to length of string */
	int counter;

	counter = 0;
	while (*(s + counter) != 0)
	{
		counter++;
	}
	return (counter);
}
