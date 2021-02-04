#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - insert a node in a linked list depending the value
 * @head: pointer to head of list
 * @number: value node to insert
 * Return: list
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current;
	listint_t *last;

	current = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;
	new->next = NULL;

	while (current != NULL)
	{
		if (current->n > number)
		{
			last->next = new;
			new->next = current;
			break;
		}
		last = current;
		current = current->next;

	}

	return (new);
}
