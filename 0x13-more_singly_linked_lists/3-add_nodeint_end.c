#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: of a listint_t list
 * @n: member of listint_t structure
 *
 * Description: adds a new node at the end of a listint_t list
 * Return: pointer to new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* declare temporary and new nodes */
	listint_t *temp, *new_node;

	/* allocate memory for new node */
	new_node = (listint_t *)malloc(sizeof(listint_t));
	/* check if new node was successfully created */
	if (new_node != NULL)
	{
		/* assign members of new node */
		new_node->n = n;
		new_node->next = NULL;
		/* check head of linked list for NULL */
		if (*head == NULL)
			*head = new_node;
		else
		{
			temp = *head;
			/* find last but one node which isn't NULL */
			while (temp->next != NULL)
				temp = temp->next;
			/* insert new node at the end */
			temp->next = new_node;
		}
	}

	/* return new node */
	return (new_node);
}
