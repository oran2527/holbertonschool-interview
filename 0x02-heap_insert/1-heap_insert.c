#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * t_s - size of the tree
 * @tree: tree
 * Return: size
 */
size_t t_s(const binary_tree_t *tree)
{
	size_t total = 0;
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);
	left = t_s(tree->left);
	right = t_s(tree->right);
	total = left + right + 1;
	return (total);
}

/**
 * o_i - inserts a node from an ordered way
 * @tree: tree
 * @val: value
 * @i: index
 * @nn: number of nodes
 * Return: new node
 */
heap_t *o_i(binary_tree_t *tree, int val, int i, int nn)
{
	heap_t *new;

	if (tree == NULL)
		return (NULL);
	if (i + 1 == nn / 2)
	{
		if (nn % 2 == 1)
		{
			tree->right = binary_tree_node(tree, val);
			return (tree->right);
		}
		else
		{
			tree->left = binary_tree_node(tree, val);
			return (tree->left);
		}
	}
	new = o_i(tree->left, val, 2 * i + 1, nn);
	if (new != NULL)
		return (new);
	return (o_i(tree->right, val, 2 * i + 2, nn));
}

/**
 * heap_insert - insert a node depending value and root
 * @root: pointer to root
 * @value: value node
 * Return: inserted node
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *new;

	if (*root == NULL)
	{
		*root = binary_tree_node(NULL, value);
		return (*root);
	}
	new = o_i(*root, value, 0, t_s(*root) + 1);
	while (new->parent != NULL && new->parent->n <= new->n)
	{
		new->n = new->parent->n;
		new->parent->n = value;
		new = new->parent;
	}
	return (new);
}
