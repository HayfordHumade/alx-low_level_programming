#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a linked list
 *
 * Description: prints all the contents in linked list, h.
 * Return: size of linked list.
 */
size_t print_listint(const listint_t *h)
{
	/* declare temporary list to store linked list, h */
	const listint_t *temp;
	/* number of nodes */
	size_t n_nodes;

	temp = h;
	n_nodes = 0;
	while (temp != NULL)
	{
		/* print elements in every node */
		printf("%d\n", temp->n);
		/* point temp to the next node */
		temp = temp->next;
		/* increase number of nodes */
		n_nodes++;
	}

	return (n_nodes);
}
