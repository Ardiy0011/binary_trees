#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes with at least one child
 * @tree: pointer to the root node of the tree
 * Return: number of nodes with at least one child in the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    size_t h1;
    size_t h2;

    if (!tree)
    {
        return (0);
    }

	if (!tree->right && !tree->left)
		return (0);

    h1 = inary_tree_balance(tree->left);
    h2 = inary_tree_balance(tree->right);

    return (h1 - h2);
}
