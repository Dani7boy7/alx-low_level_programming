#include "lists.h"

/**
 *	* listint_len - gives the number back
 *	* @h: linked list type
 *	* Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
