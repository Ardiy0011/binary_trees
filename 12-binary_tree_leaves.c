#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the number of leaf nodes
 * @tree: pointer to the root node of the tree
 * Return: number of leaf nodes in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
	{
	return (0);
	}

	if (!tree->left && !tree->right)
	{
	return (1);
	}

	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (count);
}
