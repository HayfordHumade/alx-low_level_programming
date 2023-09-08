#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 *
 * Description: copies all of s1 and n bytes of s2
 * into a new string
 * Return: pointer to new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_size, s2_size, size, i, j;

	s1_size = 0, s2_size = 0;
	if (s1 == NULL)
		s1 = "";
	else
		while (s1[s1_size] != '\0')
			s1_size++;
	if (s2 == NULL)
		s2 = "";
	else
		while (s2[s2_size] != '\0')
			s2_size++;
	if (n < s2_size)
		s2_size = n;
	size = s1_size + s2_size + 1;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	if (s1 != NULL)
		for (i = 0; i < s1_size; i++)
			str[i] = s1[i];
	if (s2 != NULL)
	{
		for (j = 0; j < s2_size; j++)
			str[s1_size + j] = s2[j];
	}
	str[size - 1] = '\0';
	return (str);
}
