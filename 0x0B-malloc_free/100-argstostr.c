#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: array of pointer to arguments
 *
 * Description: copies string from arguments into a one string
 * Return: pointer to string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *str;

	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
	}
	str = malloc(size + 1 + (2 * ac));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k++] = '\n';
		str[k] = 'n';
	}
	str[size + 1 + (2 * ac)] = '\0';
	return (str);
}
