#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - check the code
 * @head: head
 * @str: string
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int lens = 0;

	for (lens = 0; str[lens] != '\0'; lens++)
		;
	{
		list_t *last;
		list_t *new_n = malloc(sizeof(list_t));

		if (new_n == NULL)
			return (NULL);

		new_n->str = strdup(str);
		new_n->next = NULL;

		if (*head == NULL)
			*head = new_n;
		else
		{
			last = *head;
			while (last->next != NULL)
				last = last->next;
			last->next = new_n;
		}

		return (*head);
	}
}
