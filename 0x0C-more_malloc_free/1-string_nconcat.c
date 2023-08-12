#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - Function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: unsigned integer variable
 *
 * Description: This does something
 * Return: Concatenation?
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i;
	unsigned int j;
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	unsigned int s2_concat;
	unsigned int total_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length_s1] != '\0')
	{
		length_s1++;
	}
	while (s2[length_s2] != '\0')
	{
		length_s2++;
	}
	if (n >= length_s2)
		s2_concat = length_s2;
	else
		s2_concat = n;

	total_length = length_s1 + s2_concat + 1;
	string = malloc(sizeof(*string) * total_length);

	if (string == NULL)
		return (NULL);
	for (i = 0; i < length_s1; i++)
		string[i] = s1[i];
	for (j = 0; j < s2_concat; j++)
	{
		string[length_s1 + j] = s2[j];
	}
	string[total_length] = '\0';

	return (string);
}
