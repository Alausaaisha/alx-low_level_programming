#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to struct list_t
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
