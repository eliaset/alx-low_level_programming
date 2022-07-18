#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of linked list
 * @index:  is the index of the node, starting at 0
 *
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int c = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		c++;
		if (c == index)
			return (head);
	}
	return (NULL);

}
