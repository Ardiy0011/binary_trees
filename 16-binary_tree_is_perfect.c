#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int rec;

    if (!tree)
    {
        return (0);
    }

    size_t depth = binary_tree_depth(tree);
    rec = p_rec(tree, depth, 0);
    return( rec);
}

/**
 * binary_tree_depth - compute the depth of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t h1;

    if (!tree)
    {
        return (0);
    }

	if (!tree->parent)
    {
        return (0);
    }

    h1 = binary_tree_depth(tree->parent) + 1;
    return (h1);
}

/**
 * p_rec - check if a tree is perfect
 * @tree: pointer to the current node in the tree
 * @depth: depth of the tree
 * @level: current level in the tree
 * Return: 1 if perfect, 0 otherwise
 */
int p_rec(const binary_tree_t *tree, size_t depth, size_t level)
{
    if (!tree)
    {
        return (1);
    }

    if (!tree->left && !tree->right)
    {
        return depth == level + 1;
    }

    if (!tree->left || !tree->right)
    {
        return 0;
    }

    return p_rec(tree->left, depth, level + 1) &&
           p_rec(tree->right, depth, level + 1);
}
