#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - Adds a node at the end of a list_t list
 * @head: Head of the list
 * @str: Data in list_t
 *
 * Description: Adds a new list_t at the end of a list
 * Return: address of new list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* declare a new node n_list */
	list_t *n_node, *current;
	unsigned int len = 0;

	/* allocate memory for new node */
	n_node = (list_t *)malloc(sizeof(list_t));
	/* check if new node is NULL before using it */
	if (n_node != NULL)
	{
		/* copy str into new node str */
		n_node->str = strdup(str);
		/* evaluate for the lenght of str if str isn't null */
		if (n_node->str != NULL)
		{
			while (n_node->str[len] != '\0')
				len++;
		}
		/* assign length of str to ->len */
		n_node->len = len;
		/* check *head before using it */
		if (*head == NULL)
		{
			*head = n_node;
			n_node->next = NULL;
			return (n_node);
		}
		/* assign current to head */
		current = *head;
		/* find the end of linked list */
		while (current->next != NULL)
			current = current->next;
		/* add new node by replacing NULL */
		current->next = n_node;
		/* create last node to be NULL */
		current->next->next = NULL;
	}
	else
		return (NULL);

	return (n_node);
}
