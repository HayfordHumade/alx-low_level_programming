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

	/* allocate memory for temp */
	temp = (list_t *)malloc(sizeof(list_t));
	while (head != NULL)
	{
		/* set temp to head */
		temp = head;

		/* set head to next list_t */
		head = head->next;

		/* free temp */
		free(temp);
	}
	/* set head to NULL */
	head = NULL;
}
