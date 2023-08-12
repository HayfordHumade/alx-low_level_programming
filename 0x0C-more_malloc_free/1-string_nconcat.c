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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	unsigned int s2_concat;
	unsigned int total_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		length_s1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		length_s2++;
		j++;
	}
	if (n >= length_s2)
		s2_concat = length_s2;
	else
		s2_concat = n;

	total_length = length_s1 + s2_concat + 1;
	string = malloc(sizeof(*string) * total_length);

	for (int k = 0; k < length_s1; k++)
	{
		string[k] = s1[k];
	}
	for (int l = 0; l < s2_concat; l++)
	{
		string[length_s1] = s2[l];
		length_s1++;
	}
	string[total_length] = '\0';
	if (string == NULL)
		return (NULL);
	else
		return (string);
}
