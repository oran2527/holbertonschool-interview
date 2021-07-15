#include "lists.h"
/**
 * find_listint_loop - function for loop 
 * @head: linked list head
 * Return: The node address where loop starts,
 * NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *second;

	if (head == NULL)
		return (NULL);
	first = head;
	second = head;
	while (second != NULL && first != NULL)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			first = head;
			while (first != second)
			{
				first = first->next;
				second = second->next;
			}
			return (first);
		}
	}
	return (NULL);
}
