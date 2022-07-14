#include <stdio.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: head of linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{

	free(*head->str);
	free(head->len);
	free(head->next);
	free(head);
}
