#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: head of linked list
 *
 * Description: frees all pointers in a linked list
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *new_head, *temp;

	if (*head == NULL)
		return;
	/* assign head to new_head */
	new_head = *head;
	while (new_head != NULL)
	{
		/* store new head node in temp */
		temp = new_head;
		/* set new head to point to next node */
		new_head = new_head->next;
		/* free new head node */
		free(temp);
	}
	/* always set the head of a linked list to NULL after freeing */
	*head = NULL;
}
