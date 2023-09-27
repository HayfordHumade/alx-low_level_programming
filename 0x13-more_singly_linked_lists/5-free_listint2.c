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

	new_head = *head;
	free(head);
	while (new_head != NULL)
	{
		temp = new_head;
		new_head = new_head->next;
		free(temp);
	}
}
