#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes with one child
 * @tree: pointer to the root node of the tree
 * Return: number of nodes with one child in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t traverse_left;
    size_t traverse_right;
    size_t scenario1 = (tree->left && !tree->right);
    size_t scenario2 = (!tree->left && tree->right);
    size_t scenario3 = (!tree->left && !tree->right);


    if (!tree)
    {
        return (0);
    }

    if (scenario3)
    {
        return (1);
    }

    if (scenario1 || scenario2)
    {

    traverse_left = binary_tree_nodes(tree->left);
    traverse_right = binary_tree_nodes(tree->right);
    return (traverse_left + traverse_right);
    }
}
