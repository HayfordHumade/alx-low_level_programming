#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - Copies string to a new allocaed memory
 * @str: string that is being copied
 *
 * Description: This copies strings to new space in memory
 * Return: Pointer to a new memory
 */
char *_strdup(char *str)
{
	char *copy;
	int cnt;
	int value;

	if (str == NULL)
		return (NULL);

	for (cnt = 0; str[cnt] != '\0'; cnt++)
		value++;

	copy = malloc(sizeof(char) * value + 1);

	if (copy == NULL)
		return (NULL);
	for (cnt = 0; str[cnt] != '\0'; cnt++)
		copy[cnt] = str[cnt];

	return (copy);
}
