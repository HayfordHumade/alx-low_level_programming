#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Number of elements in a linked list
 * @h: Linked list
 *
 * Description: This loops through a linked list
 * Return: number or elements.
 */
size_t list_len(const list_t *h)
{
	list_t *current = h;
	size_t num;

	num = 0;
	while (current != NULL)
	{
		num++;
		current = current->next;
	}
	
	return (num);
}
