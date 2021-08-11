#include "list.h"

/**
 * add_node_end - Add a new node to the end
 * @list: List
 * @str: String data
 * Return: Address new node, or NULL
 */
List *add_node_end(List **list, char *str)
{
	List *new_node = NULL, *head;

	head = *list;
	new_node = malloc(sizeof(List));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*list == NULL)
	{
		*list = new_node;
		new_node->next = new_node;
		new_node->prev = new_node;
	}
	else
	{
		if (head->prev == NULL)
		{
			head->next = new_node;
			head->prev = new_node;
			new_node->next = head;
			new_node->prev = head;
		} else
		{
			new_node->next = head;
			new_node->prev = head->prev;
			head->prev->next = new_node;
			head->prev = new_node;
		}
	}
	return (new_node);
}
/**
 * add_node_begin - Add a new node to the beginning
 * @list: List
 * @str: String data
 * Return: Address new node, or NULL
 */
List *add_node_begin(List **list, char *str)
{
	List *new_node = NULL, *head;

	head = *list;
	new_node = malloc(sizeof(List));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*list == NULL)
	{
		*list = new_node;
		new_node->next = new_node;
		new_node->prev = new_node;
	}
	else
	{
		if (head->next == NULL)
		{
			head->next = new_node;
			head->prev = new_node;
			new_node->next = head;
			new_node->prev = head;
		} else
		{
			new_node->next = head;
			new_node->prev = head->prev;
			head->prev->next = new_node;
			head->prev = new_node;
		}
		*list = new_node;
	}
	return (new_node);
}
