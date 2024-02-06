#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data(n)
 * @head: of the linked list
 *
 * Description: add all n memebers of a linked list
 * Return: sum or 0 if empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (head == NULL)
		return (0);
	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
