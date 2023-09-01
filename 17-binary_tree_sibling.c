#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the sibling node, or NULL else found
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	if (parent->right == node)
	{
		if (parent->left)
			return (parent->left);
	}

	if (parent->left == node)
	{
		if (parent->right)
			return (parent->right);
	}
	return (NULL);
}
