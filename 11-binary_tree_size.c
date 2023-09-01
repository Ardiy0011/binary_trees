#include "binary_trees.h"
/**
 * binary_tree_size - computes the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lft_sz;
	size_t rgt_sz;

	if (!tree)
	{
	return (0);
	}

	lft_sz = binary_tree_size(tree->left);
	rgt_sz = binary_tree_size(tree->right);

	return (lft_sz + rgt_sz + 1);
}
