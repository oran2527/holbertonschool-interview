#ifndef BINARY_TREE
#define BINARY_TREE
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * struct binary_tree_s - Binary tree
 *
 * @n: Integer node
 * @parent: Pointer parent node
 * @left: Pointer left child node
 * @right: Pointer right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

int binary_tree_is_avl(const binary_tree_t *tree);
void binary_tree_print(const binary_tree_t *tree);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
#endif
