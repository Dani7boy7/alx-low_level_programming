#include "lists.h"

/**
 *	* print_listint - prints all elments
 *	* @h: linkes to list
 *	* Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
			num++;
		h = h->next;
	}

	return (num);
}
