#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - Allocates memory for an arry
 * @nmemb: integer
 * @size: size integer
 *
 * Description: This does that
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0;
	int y = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (x < y)
	{
		p[x] = 0;
		x++;
	}
	return (p);
}
