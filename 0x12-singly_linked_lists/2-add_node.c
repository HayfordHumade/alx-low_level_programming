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
	list_t *n_node;

	n_node = (list_t *)malloc(sizeof(list_t));
	n_node->str = strdup(str);
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
