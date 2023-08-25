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
	list_t *n_list;
	unsigned int len;

	n_list = (list_t *)malloc(sizeof(list_t));
	len = 0;
	if (n_list == NULL)
		return (NULL);
	n_list->str = strdup(str);
	if (n_list->str != NULL)
	{
		while (n_list->str[len] != '\0')
			len++;
	}
	n_list->len = len;
}
