#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is a root
 * @node: pointer to the node struct
 * Return: 1 if root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
	return (0);
	}

	return (node->parent == NULL);
}
