#include "binary_trees.h"
/**
 * binary_tree_depth - provides teh depth of tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: 0 if parent of node null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t h1;

	if (!tree)
	{
	return (0);
	}

	if (!tree->parent)
	{
	return (0);
	}

	h1 = binary_tree_depth(tree->parent) + 1;
	return (h1);
}
