#include "sort.h"

/**
 * insertion_sort_list - sorts list with insertion sort
 * @list: input list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tempo, *pn, *nxt;

	if (list && *list && (*list)->next)
	{
		tempo = (*list)->next;
		pn = tempo->prev;
		nxt = tempo->next;

		while (tempo)
		{
			if (tempo->n < pn->n)
			{
				swap_list(pn, tempo, nxt, list);
			}
			tempo = nxt;
			if (tempo)
			{
				nxt = tempo->next;
				pn = tempo->prev;
			}
		}
	}
}
/**
 * swap_list - func swaps postn of two nodes in linked list
 * @pn: the previous node
 * @temp: temp
 * @nxt: the next node
 * @h: head of the list
 */

void swap_list(listint_t *pn, listint_t *temp, listint_t *nxt, listint_t **h)
{
	while (pn && temp->n < pn->n)
	{
		if (nxt)
			nxt->prev = pn;
		temp->next = pn;
		temp->prev = pn->prev;
		if (pn->prev)
			(pn->prev)->next = temp;
		pn->prev = temp;
		pn->next = nxt;
		nxt = pn;
		pn = temp->prev;
		if ((*h)->prev)
			*h = (*h)->prev;
		print_list(*h);
	}
}
