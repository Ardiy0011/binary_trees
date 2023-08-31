#include "binary_trees.h"

/**
 * binary_tree_perhelp - Inorder traversal of binary tree
 * @tree: Pointer to binary tree node
 * @func: Pointer to a function to call on each node's value
 * Return: Void
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
