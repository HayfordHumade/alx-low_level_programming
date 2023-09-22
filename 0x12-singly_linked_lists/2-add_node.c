#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list
 * @head: A a pointer to a pointer to a list
 * @str: A pointer to a constant string
 *
 * Description: Well...
 * Return: Address of new element or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	/* declare new node */
	list_t *n_node;
	unsigned int length;

	/* allocate memory to new node */
	n_node = (list_t *)malloc(sizeof(list_t));
	length = 0;

	/* check allocated memory before use */
	if (n_node != NULL)
	{
		/* copy string from str into new node */
		n_node->str = strdup(str);

		/* check if new node str is NULL */
		if (n_node->str != NULL)
		{
			/* calculating new node str length */
			while (n_node->str[length] != '\0')
				length++;
		}

		/* assign new node len */
		n_node->len = length;

		/* link the new node to point to the head of the list */
		n_node->next = *head;

		/* set the head of the list to be the new node */
		*head = n_node;
	}
	else
		return (NULL);

	return (n_node);
}
