#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - create a node in a binary tree
 * @parent: pointer to parent node
 * @value: value node
 * Return: binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
