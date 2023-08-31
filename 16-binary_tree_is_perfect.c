#include "binary_trees.h"

/**
 * binary_tree_inorder - Inorder traversal of binary tree
 * @tree: Pointer to binary tree node
 * @func: Pointer to a function to call on each node's value
 * Return: Void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
    {
        return;
    }

    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
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

    binary_tree_inorder(tree, count_leaves, &leaves);

    int nodes = (1 << height);

    return (nodes == leaves);
}

/**
 * count_leaves - to count leaves in a binary tree
 * @n: Node value
 * @leaves: Pointer to the count of leaf nodes
 * Return: Void
 */
void count_leaves(int n, int *leaves)
{
    (void)n;
    (*leaves)++;
}
