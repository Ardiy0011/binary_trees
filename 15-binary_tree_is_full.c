#include "binary_trees.h"
/**
 * binary_tree_is_full - validate if tree is full
 * @tree: pointer to the root node of the tree to traverse
 * Return: 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int scenario1 = !tree;
	int scenario2 = tree->left && tree->right;
	int scenario3 = !tree->left && !tree->right;

	if (scenario1)
	{
	return (1);
	}

	if (scenario2)
	{
	int traverse_lft = binary_tree_is_full(tree->left);
	int traverse_rgt = binary_tree_is_full(tree->right);
	return (traverse_lft && traverse_rgt);
	}

	if (scenario3)
	{
	return (1);
	}

	return (0);
}
