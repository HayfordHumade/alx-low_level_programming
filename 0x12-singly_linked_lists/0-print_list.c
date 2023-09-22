#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t list
 *
 * Description: prints all the elements of a list_t list
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	/* declaration of number of nodes, n, of type size_t */
	size_t n;
	/* declaration of a list_t list */
	const list_t *temp;

	/* assign h to temp */
	temp = h;
	n = 0;
	/* end loop when temp = NULL */
	while (temp != NULL)
	{
		/* check str for NULL before printing to screen */
		if (temp->str != NULL)
			printf("[%u] %s\n", temp->len, temp->str);
		else
			printf("[0] (nil)\n");
		/* increase number of nodes, n, by 1 */
		n++;
		/* assign temp to the next node */
		temp = temp->next;
	}

	/* return number of nodes, n */
	return (n);
}
