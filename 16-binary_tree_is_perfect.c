#include "binary_trees.h"

/**
 * binary_tree_height - compute the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree
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
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 and 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int h1;
    int h2;

    if (!tree)
    {
        return (0);
    }

    h1 = binary_tree_height(tree->left);
    h2 = binary_tree_height(tree->right);

    if (h1 == h2)
    {
        return binary_tree_is_perfect(tree->left) &&
               binary_tree_is_perfect(tree->right);
    }

    return (0);
}
