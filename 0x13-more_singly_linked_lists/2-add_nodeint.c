#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a pointer to the head of a linked list
 * @n: number
 *
 * Description: adds a new node at the beginning
 * Return: pointer to new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* declare a new node */
	listint_t *new_node;

	/* allocate memmory for new node */
	new_node = malloc(sizeof(listint_t));
	/* check new head and new node for NULL */
	if (new_node != NULL)
	{
		/* assign int member of node */
		new_node->n = n;
		/* point reference to old node, head */
		new_node->next = *head;
		/* reassign head to the new node */
		*head = new_node;
	}
	else
		return (NULL);

	return (*head);
}
