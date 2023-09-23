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
	/* declare a list_t list */
	const list_t *temp;
	/* declare variable to hold number of nodes */
	size_t num;

	/* assign it h to temp */
	temp = h;
	num = 0;
	/* end loop if temp is NULL */
	while (temp != NULL)
	{
		/* increase number of nodes, num, by 1 */
		num++;
		/* assign temp to next node */
		temp = temp->next;
	}

	/* return number of nodes, num */
	return (num);
}
