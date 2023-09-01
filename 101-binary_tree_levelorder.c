#include "binary_trees.h"
/**
 * binary_tree_height - Calculate the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
	return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height) + 1;
}

/**
 * print_level - Print nodes at a given level
 * @tree: Pointer to the root node of the tree
 * @level: Level of the tree to print
 * @func: Pointer to the function that prints node's value
 */
void print_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	if (!tree)
	return;

	if (level == 1)
	func(tree->n);
	else if (level > 1)
	{
	print_level(tree->left, level - 1, func);
	print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - Traverse a binary tree using level-order
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node's value
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	size_t height = binary_tree_height(tree);
	for (size_t level = 1; level <= height; ++level)
		print_level(tree, level, func);
}
