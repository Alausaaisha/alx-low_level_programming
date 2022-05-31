#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t list.
 * @h: pointer to struct list_t.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_h *current = h;
	int count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
			printf("[%d] %s\n", current->len, current->str);
		count++;
		current = current->next;
	}
	return (count);
}
