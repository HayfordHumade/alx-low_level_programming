#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked listint_t list
 * @h: linked list
 *
 * Description: returns the number of elements in a list
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
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
