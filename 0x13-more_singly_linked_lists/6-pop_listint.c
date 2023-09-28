#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of linked list
 * @head: of linked list
 *
 * Description: deletes the head node of a listint_t
 * linked list and returns the head node’s data (n)
 * Return: data of head.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	/* check head for NULL */
	if (*head == NULL)
		return (0);
	/* assign head to temp */
	temp = *head;
	/* assign n to member at head */
	n = temp->n;
	/* make head point to next node */
	*head = temp->next;
	/* free previous head */
	free(temp);

	/* return member at previous head */
	return (n);
}
