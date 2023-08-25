#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h: A pointer to const list_t
 *
 * Description: Prints all elements
 * Return: struct list_s
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t num;

	num = 0;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		num++;
	}
	return (num);
}
