#include "binary_trees.h"
/**
 * binary_tree_height - provides each tree childs height
 * @tree: pointer to the root node of the tree to traverse
 * Return: none
 */
int binary_tree_height(const binary_tree_t *subtree)
{
	int left_subtree_height = 0, right_subtree_height = 0;

	if (!subtree)
	{
		return (-1);
	}

	left_subtree_height = (1 + binary_subtree_height(subtree->left));
	right_subtree_height = (1 + binary_subtree_height(subtree->right));

	return (left_subtree_height > right_subtree_height ?
		left_subtree_height : right_subtree_height);
}

/**
 * binary_tree_balance - measures the balance factor of tree
 * @tree: pointer to the root node of the tree to measure
 * Return: balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
	return (0);

	int h1 = binary_tree_height(tree->left);
	int h2 = binary_tree_height(tree->right);

	return (h1 - h2);
}
