#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a given string
 * @str: is the given string
 *
 * Description: returns a pointer to a newly allocated space
 * Return: pointer.
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, size;

	size = 0;
	/* check str before use */
	if (str == NULL)
		return (NULL);
	/* determine size of str */
	while (str[size] != '\0')
		size++;
	/* allocate memory for new str */
	new_str = malloc(size);
	/* check allocated memory before use */
	if (new_str == NULL || size < 1)
		return (NULL);
	/* copy str into new str */
	for (i = 0; i < size; i++)
		new_str[i] = str[i];

	/* return a pointer to new_str */
	return (new_str);
}
