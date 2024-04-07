#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - check the code
 * @head: head
 * @n: integer
 * Return: Always 0.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;
	if (*head == NULL)
		*head = new_n;
	else
	{
		while (last->next)
		{
			last = last->next;
		}
		last->next = new_n;
		new_n->prev = last;
	}
	return (*head);
}
