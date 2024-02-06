#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: of linked list
 * @idx: index to insert node
 * @n: number of nodes
 *
 * Description: inserts a new node at idx
 * Return: address of new node or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp, *copy;
	unsigned int i;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	i = 0;
	new_node = (listint_t *)malloc(sizeof(listint_t));
	/* while (temp != NULL && i < idx) */
	for (i = 0; temp != NULL && i != (idx - 1); i++)
		temp = temp->next;
	if (temp != NULL && new_node != NULL)
	{
		new_node->n = n;
		copy = temp;
		temp->next = new_node;
		new_node->next = copy;
	}
	else
		return (NULL);

	return (new_node);
}
