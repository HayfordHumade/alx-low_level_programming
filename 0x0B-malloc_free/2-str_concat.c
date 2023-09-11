#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: points to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 * Return: pointer to concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int s1_size, s2_size, size, i, j, k;

	s1_size = 0;
	s2_size = 0;
	if (s1 == NULL)
		s1 = "";
	else
	{
		while (s1[s1_size] != '\0')
			s1_size++;
	}
	if (s2 == NULL)
		s2 = "";
	else
	{
		while (s2[s2_size] != '\0')
			s2_size++;
	}
	size = s1_size + s2_size + 1;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	k = 0;
	if (s1_size > 0)
	{
		for (i = 0; i < s1_size; i++)
			str[i] = s1[i];
	}
	if (s2_size > 0)
	{
		for (j = 0; j < s2_size; j++)
			str[s1_size + j] = s2[j];
	}
	str[size] = '\0';

	return (str);
}
