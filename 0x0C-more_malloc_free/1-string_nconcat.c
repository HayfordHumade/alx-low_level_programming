#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - Function concatenates two strings
 * @*s1: first string
 * @*s2: second string
 * @n: unsigned integer variable
 *
 * Description: This does something
 * Return: Concatenation?
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	unsigned int s2_concat;
	unsigned int total_length;

	while (s1[i] != NULL)
	{
		length_s1++;
		i++;
	}
	while (s2[j] != NULL)
	{
		length_s2++;
		j++;
	}

	if (n >= length_s2)
		s2_concat = length_s2;
	else
		s2_concat = n;

	total_length = length_s1 + s2_concat;
	string = malloc((typeof(*string)) * total_length);

	return (string);
}
