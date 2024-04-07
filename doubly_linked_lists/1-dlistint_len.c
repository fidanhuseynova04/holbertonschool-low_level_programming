#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * dlistint_len - check the code
 * @h: head
 * Return: Always 0.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
