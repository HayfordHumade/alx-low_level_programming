#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * strtow - splits a string into words
 * @str: to be splitted
 *
 * Description: separates words based on space and puts them in an array
 * Return: a pointer to an array of strings.
 */
char **strtow(char *str)
{
	char *arr[], *tmp;
	int len, count, lens, current, i, j;

	if (str == NULL || str == "")
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	i = 0;
	count = 0;
	while (i < len)
	{
		if (str[i] == " ")
			count++;
		i++;
	}
	/* allocate memory for arr */
	arr = (char **)malloc(sizeof(char *) * count);
	if (arr == NULL)
		return (NULL);
	current = 0;
	lens = 0;
	for (i = 0; i < count; i++)
	{
		while (str[lens] != " ")
			lens++;
		tmp = malloc(lens + 1);
		for (j = 0; j < (lens + 1); j++)
			tmp[j] = str[current++];
		tmp[lens + 1] = '\0';
		arr[i] = tmp;
	}
	return (arr);
}
