#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes with at least one child
 * @tree: pointer to the root node of the tree
 * Return: number of nodes with at least one child in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t count_left;
    size_t count_right;

    if (!tree)
    {
        return (0);
    }

    if (tree->left || tree->right)
    {
        count_left = binary_tree_nodes(tree->left);
        count_right = binary_tree_nodes(tree->right);
        return (count_left + count_right + 1);
    }

    return (0);
}
