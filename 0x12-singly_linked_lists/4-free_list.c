#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - frees list_t
 * @head: head of a linked list
 *
 * Description: frees an entire linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/* set temp to head */
		temp = head;

		/* set head to next list_t */
		head = head->next;

		/* free ->str */
		free(temp->str);

		/* free temp */
		free(temp);
	}
}
