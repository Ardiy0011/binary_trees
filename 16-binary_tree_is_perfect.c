#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: Pointer to root of binary tree
 * Return: True (1), False (0)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    int height = 0;
    const binary_tree_t *current = tree;

    while (current->left != NULL) {
        height++;
        current = current->left;
    }

    return is_perfect_recursive(tree, height, 0);
}

/**
 * is_perfect_recursive - Checks if binary tree is perfect recursively
 * @tree: Pointer to root of binary tree
 * @height: Height of the perfect tree
 * @level: Current level being checked
 * Return: True (1), False (0)
 */
int is_perfect_recursive(const binary_tree_t *tree, int height, int level)
{
    if (tree == NULL)
        return (height == level);

    return (is_perfect_recursive(tree->left, height, level + 1) &&
            is_perfect_recursive(tree->right, height, level + 1));
}
