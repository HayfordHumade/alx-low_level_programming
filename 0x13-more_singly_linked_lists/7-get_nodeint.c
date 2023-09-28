#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: of the linked list
 * @index: of the node to be returned
 *
 * Description: returns the nth node of a listint_t linked list
 * Return: pointer to nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	/* locate nth node */
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	/* return pointer to node */
	return (temp);
}
