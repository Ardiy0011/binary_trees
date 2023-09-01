#include "binary_trees.h"
/**
 * binary_tree_perhelp - Inorder traversal of binary tree
 * @tree: Pointer to binary tree node
 * @leaves: Pointer to a function to call on each node's value
 * Return: none
 */
void binary_tree_perhelp(const binary_tree_t *tree, int *leaves)
{
	if (!tree)
	{
	return;
	}

	binary_tree_perhelp(tree->left, leaves);

	if (!tree->left && !tree->right)
	{
	(*leaves)++;
	}

	binary_tree_perhelp(tree->right, leaves);
}

/**
 * binary_tree_height - return height of tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: none
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h1;
	size_t h2;

	if (!tree)
	{
	return (0);
	}

	if (!tree->right && !tree->left)
		return (0);

	h1 = binary_tree_height(tree->left);
	h2 = binary_tree_height(tree->right);

	if (h1 > h2)
	{
	return (h1 + 1);
	}
	else
	{
	return (h2 + 1);
	}
}

/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: Pointer to root of binary tree
 * Return: True (1), False (0)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int height = binary_tree_height(tree);
	int leaves = 0;

	binary_tree_perhelp(tree, &leaves);

	int nodes = (1 << height);

	return (nodes == leaves);
}
