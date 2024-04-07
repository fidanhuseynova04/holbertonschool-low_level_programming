#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - check the code
 * @head: head
 * @index: index
 * Return: Always 0.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		count++;
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
