#include "sort.h"

/**
  * insertion_sort_list - function that implements insection sort
  * @list: pointer the head of double lists
  * Return: return nothing
  */

void insertion_sort_list(listint_t **list)
{
	listint_t *head, *current, *previous, *prev_nets, *current_nets;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	previous = *list;
	current = (*list)->next;
	head = *list;

	while (current)
	{
		current_nets = current;
		prev_nets = previous;

		while (prev_nets && prev_nets->n > current_nets->n)
		{
			if (prev_nets->prev == NULL)
				head = current_nets;
			if (current_nets->next)
				current_nets->next->prev = prev_nets;
			if (prev_nets->prev)
				prev_nets->prev->next = current_nets;

			current_nets->prev = prev_nets->prev;
			prev_nets->next = current_nets->next;
			current_nets->next = prev_nets;
			prev_nets->prev = current_nets;

			prev_nets = current_nets->prev;
			print_list(head);
		}
		previous = current;
		current = current->next;
	}
	*list = head;
}
