#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h: A pointer to const list_t
 *
 * Description: Prints all elements
 * Return: struct list_s
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int num;

	if (current->str == NULL)
		printf("[0] (nil)");
	while (current != NULL)
	{
		num++;
		printf("[%d] %s", current->len, current->str);
		current = current->next;
	}
	return (num);
}
