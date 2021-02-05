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
	listint_t *new, *current, *last;
	int flag = 0;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if (current == NULL || *head == NULL)
	{
		new->next = NULL;
		current = new;
		*head = new;
		return (new);
	}
	if (current->n > number)
	{
		new->next = current;
		*head = new;
		return (new);
	}
	last = current;
	while (current != NULL)
	{
		if (current->n >= number)
		{
			last->next = new;
			new->next = current;
			flag = 1;
			break;
		}
		last = current;
		current = current->next;
	}
	if (flag == 0)
	{
		last->next = new;
		new->next = NULL;
		new->n = number;
	}
	return (new);
}
