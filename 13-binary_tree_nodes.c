#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes with at least one child
 * @tree: pointer to the root node of the tree
 * Return: number of nodes with at least one child in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t traverse_left;
    size_t trverse_right;
    size_t number;

    if (!tree)
    {
        return (0);
    }

    if (tree->left || tree->right)
    {
        traverse_left = binary_tree_nodes(tree->left);
        trverse_right = binary_tree_nodes(tree->right);
        number = traverse_left + trverse_right + 1;
        return (number);
    }

    return (0);
}
