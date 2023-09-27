#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: head of a linked list
 *
 * Description: frees a listint_t
 * Return: nothin.
 */
void free_listint(listint_t *head)
{
	/* declare a listint_t pointer, temp */
	listint_t *temp;

	temp = head;
	/* check temp for NULL */
	while (temp != NULL)
	{
		/* assign head to next node */
		head = head->next;
		/* free temp */
		free(temp);
		/* reassign temp to head */
		temp = head;
	}
}
